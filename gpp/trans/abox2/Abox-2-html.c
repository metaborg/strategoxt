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
ATerm term_q_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_r_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_l_23;
ATerm term_w_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_n_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_l_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_b_19;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_g_18;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_j_16;
ATerm term_d_16;
ATerm term_l_15;
ATerm term_a_15;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_k_13;
ATerm term_u_12;
ATerm term_r_12;
ATerm term_k_12;
ATerm term_a_12;
ATerm term_y_11;
ATerm term_o_11;
ATerm term_h_11;
ATerm term_e_11;
ATerm term_b_11;
ATerm term_t_10;
ATerm term_r_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_r_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_h_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_c_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_u_8;
ATerm term_p_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_x_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_s_7;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_u_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_p_8);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_r_12);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_12);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym__2, term_o_19, term_z_8);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_n_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_i_19);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_j_21);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_x_19, term_y_19);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_z_8);
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_z_8);
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym__2, term_j_21, term_z_8);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_b_22);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_z_8);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_s_7, term_i_20);
}
#include <srts/init-stratego-application.h>
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm i_6 (ATerm x_40, ATerm y_40, ATerm t);
static ATerm a_0 (ATerm t);
ATerm xtc_write_output_0_0 (ATerm t);
ATerm debug_1_0 (ATerm r_80 (ATerm), ATerm t);
static ATerm h_3 (ATerm m_2, ATerm t);
static ATerm i_3 (ATerm o_2, ATerm p_2, ATerm q_2, ATerm t);
static ATerm b_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm w_5 (ATerm d_94 (ATerm), ATerm h_39, ATerm f_39, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm f_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Html2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm r_74 (ATerm), ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm u_75 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
ATerm replace_quotes_0_0 (ATerm t);
ATerm listtd_1_0 (ATerm m_82 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
ATerm html_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm i_105 (ATerm), ATerm t);
static ATerm s_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
ATerm make_html_comment_0_0 (ATerm t);
static ATerm h_1 (ATerm t);
ATerm sep_by_1_0 (ATerm t_72 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm x_88 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm z_5 (ATerm c_20, ATerm d_20, ATerm t);
ATerm tov_1_0 (ATerm s_72 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
static ATerm a_6 (ATerm z_37, ATerm a_38, ATerm t);
ATerm while_not_2_0 (ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm t);
ATerm for_3_0 (ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm t);
static ATerm q_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm l_105 (ATerm), ATerm t);
static ATerm w_1 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
ATerm make_hs_0_0 (ATerm t);
static ATerm b_6 (ATerm v_72 (ATerm), ATerm o_17, ATerm t);
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
ATerm topdown_1_0 (ATerm q_74 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm t_81 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm q_41 (ATerm i_41, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm e_82 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm x_81 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm p_81 (ATerm), ATerm t);
static ATerm c_6 (ATerm v_15, ATerm q_15, ATerm t);
static ATerm z_3 (ATerm t);
ATerm normalize_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm w_45 (ATerm q_45, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm d_6 (ATerm u_19, ATerm t);
static ATerm e_6 (ATerm q_33, ATerm r_33, ATerm t);
static ATerm f_6 (ATerm z_34, ATerm a_35, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm h_47 (ATerm g_46, ATerm t);
static ATerm i_47 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t);
static ATerm j_47 (ATerm u_46, ATerm v_46, ATerm w_46, ATerm t);
static ATerm g_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm h_6 (ATerm q_34, ATerm r_34, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm n_6 (ATerm c_51, ATerm d_51, ATerm t);
static ATerm j_6 (ATerm q_49, ATerm r_49, ATerm t);
ATerm end_scope_1_0 (ATerm a_94 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_93 (ATerm), ATerm t);
static ATerm i_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_106 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm q_6 (ATerm q_44, ATerm r_44, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm o_6 (ATerm l_49, ATerm m_49, ATerm k_49, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
static ATerm r_5 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm k_6 (ATerm t_37, ATerm u_37, ATerm t);
ATerm foldr_2_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_96 (ATerm), ATerm t);
static ATerm v_5 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_5 (ATerm t);
ATerm need_help_1_0 (ATerm a_99 (ATerm), ATerm t);
ATerm map_1_0 (ATerm c_81 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm l_6 (ATerm t);
static ATerm m_6 (ATerm t);
static ATerm p_6 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm m_81 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm r_6 (ATerm t);
static ATerm s_6 (ATerm t);
static ATerm t_6 (ATerm t);
static ATerm u_6 (ATerm t);
static ATerm v_6 (ATerm t);
static ATerm w_6 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm b_58 (ATerm), ATerm c_58 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_101 (ATerm), ATerm t);
static ATerm y_6 (ATerm t);
static ATerm a_7 (ATerm t);
static ATerm b_7 (ATerm t);
static ATerm c_7 (ATerm t);
ATerm parse_options_1_0 (ATerm c_101 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t);
static ATerm e_7 (ATerm t);
static ATerm f_7 (ATerm t);
static ATerm g_7 (ATerm t);
static ATerm h_7 (ATerm t);
static ATerm i_7 (ATerm t);
static ATerm j_7 (ATerm t);
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
    ATerm k_7 = t;
    int l_7 = stack_ptr;
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
        t = i_6(n_1, h_0, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
        LocalPopChoice(l_7);
      }
    else
      {
        t = k_7;
        {
          ATerm n_7 = t;
          int o_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_0 = NULL;
              t = l_1;
              t = o_0(t);
              t_0 = t;
              {
                ATerm p_7 = t;
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
                    t = p_7;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, n_1, t_0);
              t = i_6(n_1, t_0, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, n_1);
              LocalPopChoice(o_7);
            }
          else
            {
              t = n_7;
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
static ATerm i_6 (ATerm x_40, ATerm y_40, ATerm t)
{
  t = SSL_copy(x_40, y_40);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 = NULL,d_2 = NULL;
      t = term_s_7;
      c_2 = t;
      t = term_u_7;
      d_2 = t;
      t = term_v_7;
      t = n_6(c_2, d_2, t);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      t = term_x_7;
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
      t = term_u_7;
      {
        ATerm z_7 = t;
        int a_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_1 = NULL,m_1 = NULL;
            t = term_s_7;
            i_1 = t;
            t = term_u_7;
            m_1 = t;
            t = term_v_7;
            t = n_6(i_1, m_1, t);
            LocalPopChoice(a_8);
          }
        else
          {
            t = z_7;
            t = term_x_7;
          }
      }
      f_1 = t;
      t = term_b_8;
      g_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, term_b_8, f_1);
      t = i_6(g_1, f_1, t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          ATerm d_8 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = a_2;
      t = copy_to_1_0(a_0, t);
    }
  return(t);
}
ATerm debug_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL,h_2 = NULL,i_2 = NULL;
  f_2 = t;
  t = r_80(t);
  g_2 = t;
  t = term_e_8;
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
    ATerm f_8 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_8 = ATgetArgument(t, 0);
            ATerm h_8 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = f_8;
      }
  }
  t = term_i_8;
  t = debug_1_0(b_0, t);
  t = (ATerm) ATmakeAppl(sym__2, m_2, term_j_8);
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
  t = term_k_8;
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
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_3(e_3, t);
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
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
static ATerm w_5 (ATerm d_94 (ATerm), ATerm h_39, ATerm f_39, ATerm t)
{
  ATerm l_3 = NULL,n_3 = NULL,r_3 = NULL,t_3 = NULL,u_3 = NULL,w_3 = NULL;
  t_3 = t;
  t = d_94(t);
  l_3 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_3, h_39, f_39);
  t = o_6(l_3, h_39, f_39, t);
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_3 = NULL;
        t = term_p_8;
        x_3 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_3, term_p_8);
        t = n_6(l_3, x_3, t);
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
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
  t = term_p_8;
  u_3 = t;
  t = (ATerm) ATinsert(CheckATermList(r_3), (ATerm) ATinsert(CheckATermList(n_3), h_39));
  w_3 = t;
  t = SSL_table_put(l_3, u_3, w_3);
  t = t_3;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm a_4 = NULL;
  ATerm s_8 = t;
  int t_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_4 = NULL,u_1 = NULL;
      g_4 = t;
      t = term_u_8;
      u_1 = t;
      t = (ATerm) ATmakeAppl(sym__2, g_4, term_u_8);
      t = e_6(g_4, u_1, t);
      a_4 = t;
      t = SSL_mkstemp(a_4);
      LocalPopChoice(t_8);
    }
  else
    {
      t = s_8;
      {
        ATerm h_4 = NULL;
        t = term_v_8;
        h_4 = t;
        t = SSL_perror(h_4);
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
  t = term_w_8;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm k_4 = NULL,l_4 = NULL,m_4 = NULL,n_4 = NULL,o_4 = NULL;
  t = P__tmpdir_0_0(t);
  n_4 = t;
  t = term_y_8;
  o_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_4, term_y_8);
  t = e_6(n_4, o_4, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      l_4 = ATgetArgument(t, 0);
      k_4 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_z_8;
  m_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_4, term_z_8);
  t = w_5(f_0, l_4, m_4, t);
  t = SSL_close(k_4);
  t = l_4;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL;
  u_4 = t;
  t = xtc_new_file_0_0(t);
  v_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_4, term_j_8);
  t = open_file_0_0(t);
  t = u_4;
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm b_5 = NULL;
      b_5 = t;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 = NULL,r_2 = NULL;
            t = SSL_is_string(b_5);
            l_2 = t;
            t = (ATerm) ATinsert(ATempty, l_2);
            r_2 = t;
            t = SSL_print(v_4, r_2);
            t = l_2;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            t = b_5;
          }
      }
      return(t);
    }
    t = topdown_1_0(j_0, t);
  }
  t = SSL_close_file(v_4);
  t = (ATerm) ATmakeAppl(sym_FILE_1, v_4);
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      h_5 = ATgetArgument(t, 0);
      g_5 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_9), g_5), term_d_9), h_5), term_c_9);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          h_5 = ATgetArgument(t, 0);
          g_5 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_9), g_5), term_d_9), h_5), term_f_9);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              h_5 = ATgetArgument(t, 0);
              g_5 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), g_5), term_d_9), h_5), term_h_9);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  h_5 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_9), h_5), term_i_9);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      h_5 = ATgetArgument(t, 0);
                      g_5 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_9), g_5), term_d_9), h_5), term_k_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          h_5 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_9), h_5), term_m_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              h_5 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_9), h_5), term_o_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  h_5 = ATgetArgument(t, 0);
                                  g_5 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_9), g_5), term_r_9), h_5), term_q_9);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      h_5 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_9), h_5), term_t_9);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_y_9;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_z_9;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_a_10;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_b_10;
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
ATerm bottomup_1_0 (ATerm r_74 (ATerm), ATerm t)
{
  static ATerm m_0 (ATerm t)
  {
    t = bottomup_1_0(r_74, t);
    return(t);
  }
  t = SRTS_all(m_0, t);
  t = r_74(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm t_13 = NULL,x_13 = NULL,y_13 = NULL;
  t_13 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_13;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_13 = ATgetFirst((ATermList) t);
          y_13 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm c_10 = t;
        int d_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_2 = NULL,b_3 = NULL,v_0 = NULL;
            t = SSLgetAnnotations(t_13);
            y_2 = t;
            t = x_13;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_13;
            t = flat_list_0_0(t);
            b_3 = t;
            t = (ATerm) ATinsert(CheckATermList(b_3), x_13);
            v_0 = t;
            t = SSLsetAnnotations(v_0, y_2);
            LocalPopChoice(d_10);
          }
        else
          {
            t = c_10;
            {
              ATerm e_10 = t;
              int f_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_3 = NULL,v_3 = NULL,y_3 = NULL,f_4 = NULL,w_0 = NULL;
                  t = SSLgetAnnotations(t_13);
                  y_3 = t;
                  t = x_13;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = x_13;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm g_10 = ATgetFirst((ATermList) t);
                          ATerm h_10 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = x_13;
                    }
                  t = (ATerm) ATinsert(CheckATermList(y_13), x_13);
                  w_0 = t;
                  t = SSLsetAnnotations(w_0, y_3);
                  f_4 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      v_3 = ATgetFirst((ATermList) t);
                      {
                        ATerm m_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = f_4;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm n_10 = ATgetFirst((ATermList) t);
                      s_3 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, v_3, s_3);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(f_10);
                }
              else
                {
                  t = e_10;
                  {
                    ATerm m_5 = NULL,u_5 = NULL,x_0 = NULL;
                    t = SSLgetAnnotations(t_13);
                    m_5 = t;
                    t = y_13;
                    t = flat_list_0_0(t);
                    u_5 = t;
                    t = (ATerm) ATinsert(CheckATermList(u_5), x_13);
                    x_0 = t;
                    t = SSLsetAnnotations(x_0, m_5);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_75 (ATerm), ATerm t)
{
  static ATerm f_14 (ATerm t)
  {
    ATerm o_10 = t;
    int p_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_75(t);
        LocalPopChoice(p_10);
      }
    else
      {
        t = o_10;
        t = SRTS_one(f_14, t);
      }
    return(t);
  }
  t = f_14(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm l_14 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm q_10 = ATgetFirst((ATermList) t);
      if(((ATgetType(q_10) != AT_INT) || (ATgetInt((ATermInt) q_10) != 34)))
        _fail(t);
      l_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(l_14), term_r_10), term_r_10);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,e_1 = NULL;
  k_14 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_14 = ATgetFirst((ATermList) t);
      j_14 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_14);
  h_14 = t;
  t = i_14;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(j_14), i_14);
  e_1 = t;
  t = SSLsetAnnotations(e_1, h_14);
  t = j_14;
  t = oncetd_1_0(p_0, t);
  g_14 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(g_14), term_t_10), term_t_10);
  return(t);
}
ATerm listtd_1_0 (ATerm m_82 (ATerm), ATerm t)
{
  static ATerm t_15 (ATerm t)
  {
    ATerm h_15 = NULL,j_15 = NULL,n_15 = NULL;
    t = m_82(t);
    h_15 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_15;
      }
    else
      {
        ATerm z_6 = NULL,m_7 = NULL,j_1 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_15 = ATgetFirst((ATermList) t);
            n_15 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_15);
        z_6 = t;
        t = n_15;
        t = t_15(t);
        m_7 = t;
        t = (ATerm) ATinsert(CheckATermList(m_7), j_15);
        j_1 = t;
        t = SSLsetAnnotations(j_1, z_6);
      }
    return(t);
  }
  t = t_15(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm r_18 = NULL;
  r_18 = t;
  if(match_int(t, 32))
    {
      ATerm w_10 = t;
      int x_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_7 = NULL;
          t = term_z_9;
          t_7 = t;
          t = SSL_explode_string(t_7);
          LocalPopChoice(x_10);
        }
      else
        {
          t = w_10;
          t = r_18;
        }
    }
  else
    {
      if(match_int(t, 38))
        {
          ATerm y_10 = t;
          int z_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_7 = NULL;
              t = term_b_11;
              w_7 = t;
              t = SSL_explode_string(w_7);
              LocalPopChoice(z_10);
            }
          else
            {
              t = y_10;
              t = r_18;
            }
        }
      else
        {
          if(match_int(t, 60))
            {
              ATerm c_11 = t;
              int d_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_7 = NULL;
                  t = term_e_11;
                  y_7 = t;
                  t = SSL_explode_string(y_7);
                  LocalPopChoice(d_11);
                }
              else
                {
                  t = c_11;
                  t = r_18;
                }
            }
          else
            {
              if(match_int(t, 62))
                {
                  ATerm f_11 = t;
                  int g_11 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm c_8 = NULL;
                      t = term_h_11;
                      c_8 = t;
                      t = SSL_explode_string(c_8);
                      LocalPopChoice(g_11);
                    }
                  else
                    {
                      t = f_11;
                      t = r_18;
                    }
                }
              else
                {
                  t = r_18;
                }
            }
        }
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm j_17 = NULL,d_18 = NULL;
  d_18 = t;
  t = SSL_explode_string(d_18);
  t = listtd_1_0(q_0, t);
  t = map_1_0(r_0, t);
  t = flat_list_0_0(t);
  j_17 = t;
  t = SSL_implode_string(j_17);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm i_105 (ATerm), ATerm t)
{
  static ATerm h_21 (ATerm t)
  {
    ATerm w_20 = NULL,x_20 = NULL,a_21 = NULL;
    a_21 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_20 = ATgetFirst((ATermList) t);
        x_20 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_11 = t;
          int k_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_8 = NULL,r_8 = NULL,x_8 = NULL,p_1 = NULL;
              t = SSLgetAnnotations(a_21);
              r_8 = t;
              t = w_20;
              t = i_105(t);
              x_8 = t;
              t = (ATerm) ATinsert(CheckATermList(x_20), x_8);
              p_1 = t;
              t = SSLsetAnnotations(p_1, r_8);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_11 = ATgetFirst((ATermList) t);
                  q_8 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = q_8;
              t = h_21(t);
              LocalPopChoice(k_11);
            }
          else
            {
              t = j_11;
              t = a_21;
            }
        }
      }
    else
      {
        t = a_21;
      }
    return(t);
  }
  t = h_21(t);
  return(t);
}
static ATerm s_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  if(match_int(t, 9))
    {
      t = w_9;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = w_9;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  ATerm l_10 = NULL;
  l_10 = t;
  if(match_int(t, 9))
    {
      t = l_10;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = l_10;
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
  ATerm j_24 = NULL;
  j_24 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_o_11), j_24);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm z_21 = NULL,a_22 = NULL;
  a_22 = t;
  t = SSL_explode_string(a_22);
  t = reverse_acc_2_0(_id, s_0, t);
  z_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_21, (ATerm) ATempty);
  {
    static ATerm k_24 (ATerm t)
    {
      ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL,k_23 = NULL;
      if(match_cons(t, sym__2))
        {
          h_23 = ATgetArgument(t, 0);
          k_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm u_9 = NULL,v_9 = NULL;
          t = k_23;
          t = remove_trailing_1_0(y_0, t);
          v_9 = t;
          t = SSL_implode_string(v_9);
          u_9 = t;
          t = (ATerm) ATinsert(ATempty, u_9);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_23 = ATgetFirst((ATermList) t);
              j_23 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_23;
          if(match_int(t, 10))
            {
              ATerm p_11 = t;
              int q_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
                  t = k_23;
                  t = remove_trailing_1_0(z_0, t);
                  k_10 = t;
                  t = SSL_implode_string(k_10);
                  i_10 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_23, (ATerm) ATempty);
                  t = k_24(t);
                  j_10 = t;
                  t = (ATerm) ATinsert(CheckATermList(j_10), i_10);
                  LocalPopChoice(q_11);
                }
              else
                {
                  t = p_11;
                  t = (ATerm) ATmakeAppl(sym__2, j_23, (ATerm) ATinsert(CheckATermList(k_23), i_23));
                  t = k_24(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, j_23, (ATerm) ATinsert(CheckATermList(k_23), i_23));
              t = k_24(t);
            }
        }
      return(t);
    }
    t = k_24(t);
  }
  t = remove_trailing_1_0(a_1, t);
  t = reverse_acc_2_0(_id, b_1, t);
  t = remove_trailing_1_0(c_1, t);
  t = map_1_0(d_1, t);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  t = (ATerm) ATinsert(ATempty, r_24);
  return(t);
}
ATerm sep_by_1_0 (ATerm t_72 (ATerm), ATerm t)
{
  ATerm s_10 = NULL,a_11 = NULL;
  t = map_1_0(h_1, t);
  a_11 = t;
  t = term_z_8;
  t = t_72(t);
  s_10 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_10, a_11);
  t = z_5(s_10, a_11, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm x_88 (ATerm), ATerm t)
{
  ATerm j_25 = NULL,k_25 = NULL,o_25 = NULL;
  j_25 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_25;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_25 = ATgetFirst((ATermList) t);
          o_25 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm r_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_11 = NULL,l_11 = NULL,m_11 = NULL,v_1 = NULL;
            t = SSLgetAnnotations(j_25);
            i_11 = t;
            t = k_25;
            t = x_88(t);
            l_11 = t;
            t = o_25;
            t = filter_1_0(x_88, t);
            m_11 = t;
            t = (ATerm) ATinsert(CheckATermList(m_11), l_11);
            v_1 = t;
            t = SSLsetAnnotations(v_1, i_11);
            LocalPopChoice(u_11);
          }
        else
          {
            t = r_11;
            t = o_25;
            t = filter_1_0(x_88, t);
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
  ATerm a_26 = NULL;
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(k_1, t);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      t = term_y_11;
    }
  a_26 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, a_26, term_a_12);
      t = copy_0_0(t);
    }
  return(t);
}
static ATerm z_5 (ATerm c_20, ATerm d_20, ATerm t)
{
  ATerm n_27 = NULL,o_27 = NULL;
  t = d_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = d_20;
    }
  else
    {
      ATerm x_11 = NULL,h_12 = NULL,x_1 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_27 = ATgetFirst((ATermList) t);
          o_27 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(d_20);
      x_11 = t;
      t = o_27;
      {
        static ATerm l_12 (ATerm t)
        {
          ATerm b_12 = t;
          int e_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_12 = NULL;
              i_12 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = i_12;
              LocalPopChoice(e_12);
            }
          else
            {
              t = b_12;
              {
                ATerm j_12 = NULL;
                t = Cons_2_0(_id, l_12, t);
                j_12 = t;
                t = (ATerm) ATinsert(CheckATermList(j_12), c_20);
              }
            }
          return(t);
        }
        t = l_12(t);
      }
      h_12 = t;
      t = (ATerm) ATinsert(CheckATermList(h_12), n_27);
      x_1 = t;
      t = SSLsetAnnotations(x_1, x_11);
    }
  return(t);
}
ATerm tov_1_0 (ATerm s_72 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_29 = NULL,g_29 = NULL,h_29 = NULL;
  h_29 = t;
  if(match_cons(t, sym_L_2))
    {
      c_29 = ATgetArgument(t, 0);
      g_29 = ATgetArgument(t, 1);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_12 = NULL,z_1 = NULL;
            t = SSLgetAnnotations(h_29);
            x_12 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, c_29, g_29);
            z_1 = t;
            t = SSLsetAnnotations(z_1, x_12);
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm i_29 = NULL;
              t = term_z_8;
              t = s_72(t);
              i_29 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_k_12), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_29))), i_29))));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_LNAT_2))
        {
          c_29 = ATgetArgument(t, 0);
          g_29 = ATgetArgument(t, 1);
          {
            ATerm m_12 = t;
            int n_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_13 = NULL,e_2 = NULL;
                t = SSLgetAnnotations(h_29);
                w_13 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, c_29, g_29);
                e_2 = t;
                t = SSLsetAnnotations(e_2, w_13);
                LocalPopChoice(n_12);
              }
            else
              {
                t = m_12;
                {
                  ATerm j_29 = NULL;
                  t = term_z_8;
                  t = s_72(t);
                  j_29 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_k_12), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_29))), j_29))));
                }
              }
          }
        }
      else
        {
          ATerm m_29 = NULL;
          t = term_z_8;
          t = s_72(t);
          m_29 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_k_12), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_29))), m_29))));
        }
    }
  b_28 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_k_12), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, b_28))));
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
  ATerm w_29 = NULL;
  ATerm p_12 = t;
  int q_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(o_1, t);
      LocalPopChoice(q_12);
    }
  else
    {
      t = p_12;
      t = term_r_12;
    }
  w_29 = t;
  if(match_int(t, 0))
    {
      t = term_u_12;
    }
  else
    {
      ATerm x_29 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, w_29, term_a_12);
      t = copy_0_0(t);
      x_29 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, x_29);
    }
  return(t);
}
static ATerm a_6 (ATerm z_37, ATerm a_38, ATerm t)
{
  ATerm v_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(z_37, a_38);
      LocalPopChoice(w_12);
    }
  else
    {
      t = v_12;
      t = SSL_subtr(z_37, a_38);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm h_74 (ATerm), ATerm i_74 (ATerm), ATerm t)
{
  static ATerm z_29 (ATerm t)
  {
    ATerm y_12 = t;
    int z_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_74(t);
        LocalPopChoice(z_12);
      }
    else
      {
        t = y_12;
        t = i_74(t);
        t = z_29(t);
      }
    return(t);
  }
  t = z_29(t);
  return(t);
}
ATerm for_3_0 (ATerm k_74 (ATerm), ATerm l_74 (ATerm), ATerm m_74 (ATerm), ATerm t)
{
  t = k_74(t);
  t = while_not_2_0(l_74, m_74, t);
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm c_30 = NULL,e_30 = NULL;
  if(match_cons(t, sym__2))
    {
      c_30 = ATgetArgument(t, 0);
      e_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, c_30, e_30, (ATerm) ATempty);
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm f_30 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm b_13 = ATgetArgument(t, 0);
      if(((ATgetType(b_13) != AT_INT) || (ATgetInt((ATermInt) b_13) != 0)))
        _fail(t);
      {
        ATerm c_13 = ATgetArgument(t, 1);
      }
      f_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = f_30;
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm g_30 = NULL,l_30 = NULL,n_30 = NULL,r_30 = NULL,u_30 = NULL;
  if(match_cons(t, sym__3))
    {
      g_30 = ATgetArgument(t, 0);
      l_30 = ATgetArgument(t, 1);
      n_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, g_30, term_y_11);
  t = geq_0_0(t);
  t = term_y_11;
  u_30 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_30, term_y_11);
  t = a_6(g_30, u_30, t);
  r_30 = t;
  t = (ATerm) ATmakeAppl(sym__3, r_30, l_30, (ATerm) ATinsert(CheckATermList(n_30), l_30));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(q_1, r_1, s_1, t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm l_105 (ATerm), ATerm t)
{
  ATerm v_30 = NULL;
  static ATerm t_1 (ATerm t)
  {
    ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL,f_31 = NULL,g_31 = NULL,e_4 = NULL;
    g_31 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        x_30 = ATgetArgument(t, 0);
        y_30 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(g_31);
    w_30 = t;
    t = x_30;
    t = l_105(t);
    f_31 = t;
    t = y_30;
    if(((v_30 != NULL) && (v_30 != t)))
      _fail(t);
    else
      v_30 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, f_31, y_30);
    e_4 = t;
    t = SSLsetAnnotations(e_4, w_30);
    return(t);
  }
  t = fetch_1_0(t_1, t);
  t = SSL_string_to_int(not_null(v_30));
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
  ATerm n_31 = NULL;
  ATerm d_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_1, t);
      LocalPopChoice(e_13);
    }
  else
    {
      t = d_13;
      t = term_r_12;
    }
  n_31 = t;
  if(match_int(t, 0))
    {
      t = term_u_12;
    }
  else
    {
      ATerm o_31 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_31, term_o_11);
      t = copy_0_0(t);
      o_31 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, o_31)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm a_32 = NULL,t_31 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      t_31 = ATgetArgument(t, 0);
      t = t_31;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          t_31 = ATgetArgument(t, 0);
          t = t_31;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              t_31 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = t_31;
        }
    }
  t = Hspace_0_0(t);
  a_32 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_32;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, a_32);
    }
  return(t);
}
static ATerm b_6 (ATerm v_72 (ATerm), ATerm o_17, ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL;
  t = term_z_8;
  t = v_72(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      p_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, o_17, p_32);
  {
    static ATerm u_35 (ATerm t)
    {
      static ATerm v_35 (ATerm r_32, ATerm s_32, ATerm t_32, ATerm u_32, ATerm v_32, ATerm t)
      {
        ATerm c_33 = NULL,d_33 = NULL,e_33 = NULL;
        t = u_32;
        {
          ATerm g_13 = t;
          int h_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm i_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(h_13);
              t = term_k_13;
            }
          else
            {
              t = g_13;
              {
                ATerm n_13 = t;
                int o_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm p_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(o_13);
                    t = term_r_13;
                  }
                else
                  {
                    t = n_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm u_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_v_13;
                  }
              }
            }
        }
        c_33 = t;
        t = u_32;
        t = make_hs_0_0(t);
        d_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(t_32), s_32), v_32);
        t = u_35(t);
        e_33 = t;
        t = (ATerm) ATinsert(ATinsert(CheckATermList(e_33), d_33), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, c_33), r_32));
        return(t);
      }
      static ATerm w_35 (ATerm h_33, ATerm i_33, ATerm j_33, ATerm k_33, ATerm t)
      {
        ATerm t_33 = NULL,u_33 = NULL;
        t = j_33;
        {
          ATerm z_13 = t;
          int a_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm b_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(a_14);
              t = term_k_13;
            }
          else
            {
              t = z_13;
              {
                ATerm c_14 = t;
                int e_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm m_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_14);
                    t = term_r_13;
                  }
                else
                  {
                    t = c_14;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm n_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_v_13;
                  }
              }
            }
        }
        t_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, i_33, k_33);
        t = u_35(t);
        u_33 = t;
        t = (ATerm) ATinsert(CheckATermList(u_33), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, t_33), h_33));
        return(t);
      }
      ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL,c_34 = NULL,g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
      if(match_cons(t, sym__2))
        {
          c_34 = ATgetArgument(t, 0);
          i_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_34;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_34 = ATgetFirst((ATermList) t);
              h_34 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_34;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_34 = ATgetFirst((ATermList) t);
              k_34 = (ATerm) ATgetNext((ATermList) t);
              t = h_34;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  z_33 = ATgetFirst((ATermList) t);
                  a_34 = (ATerm) ATgetNext((ATermList) t);
                  t = g_34;
                  if(match_cons(t, sym_C_2))
                    {
                      x_33 = ATgetArgument(t, 0);
                      y_33 = ATgetArgument(t, 1);
                      {
                        ATerm o_14 = t;
                        int p_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm e_35 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, h_34, i_34);
                            t = u_35(t);
                            e_35 = t;
                            t = (ATerm) ATinsert(CheckATermList(e_35), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, x_33, y_33))));
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
                                  t = v_35(g_34, z_33, a_34, j_34, k_34, t);
                                  LocalPopChoice(r_14);
                                }
                              else
                                {
                                  t = q_14;
                                  t = w_35(g_34, h_34, j_34, k_34, t);
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
                          t = v_35(g_34, z_33, a_34, j_34, k_34, t);
                          LocalPopChoice(t_14);
                        }
                      else
                        {
                          t = s_14;
                          t = w_35(g_34, h_34, j_34, k_34, t);
                        }
                    }
                }
              else
                {
                  t = g_34;
                  if(match_cons(t, sym_C_2))
                    {
                      x_33 = ATgetArgument(t, 0);
                      y_33 = ATgetArgument(t, 1);
                      {
                        ATerm u_14 = t;
                        int v_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm m_35 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, h_34, i_34);
                            t = u_35(t);
                            m_35 = t;
                            t = (ATerm) ATinsert(CheckATermList(m_35), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, x_33, y_33))));
                            LocalPopChoice(v_14);
                          }
                        else
                          {
                            t = u_14;
                            t = w_35(g_34, h_34, j_34, k_34, t);
                          }
                      }
                    }
                  else
                    {
                      t = w_35(g_34, h_34, j_34, k_34, t);
                    }
                }
            }
          else
            {
              ATerm t_35 = NULL;
              t = g_34;
              if(match_cons(t, sym_C_2))
                {
                  x_33 = ATgetArgument(t, 0);
                  y_33 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, h_34, i_34);
              t = u_35(t);
              t_35 = t;
              t = (ATerm) ATinsert(CheckATermList(t_35), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, x_33, y_33))));
            }
        }
      return(t);
    }
    t = u_35(t);
  }
  q_32 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_k_12), (ATerm) ATinsert(ATempty, q_32));
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
  ATerm w_14 = t;
  if((PushChoice() == 0))
    {
      ATerm f_37 = NULL,g_37 = NULL,h_37 = NULL,i_37 = NULL,w_4 = NULL;
      i_37 = t;
      if(match_cons(t, sym_R_2))
        {
          g_37 = ATgetArgument(t, 0);
          h_37 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(i_37);
      f_37 = t;
      t = h_37;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, g_37, h_37);
      w_4 = t;
      t = SSLsetAnnotations(w_4, f_37);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_14;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm c_36 = NULL;
  c_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_36, (ATerm) ATempty);
  {
    static ATerm j_37 (ATerm t)
    {
      ATerm d_36 = NULL,e_36 = NULL,g_36 = NULL,h_36 = NULL,i_36 = NULL,j_36 = NULL;
      if(match_cons(t, sym__2))
        {
          g_36 = ATgetArgument(t, 0);
          j_36 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_36;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm o_36 = NULL;
          t = j_36;
          t = reverse_acc_2_0(_id, y_1, t);
          o_36 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, o_36));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_36 = ATgetFirst((ATermList) t);
              i_36 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_36;
          if(match_cons(t, sym_R_2))
            {
              d_36 = ATgetArgument(t, 0);
              e_36 = ATgetArgument(t, 1);
              {
                ATerm x_14 = t;
                int y_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm u_36 = NULL,v_36 = NULL;
                    t = j_36;
                    t = reverse_acc_2_0(_id, b_2, t);
                    u_36 = t;
                    t = (ATerm) ATmakeAppl(sym__2, i_36, (ATerm) ATempty);
                    t = j_37(t);
                    v_36 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(v_36), (ATerm) ATmakeAppl(sym_R_2, d_36, e_36)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, u_36));
                    LocalPopChoice(y_14);
                  }
                else
                  {
                    t = x_14;
                    t = (ATerm) ATmakeAppl(sym__2, i_36, (ATerm) ATinsert(CheckATermList(j_36), h_36));
                    t = j_37(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, i_36, (ATerm) ATinsert(CheckATermList(j_36), h_36));
              t = j_37(t);
            }
        }
      return(t);
    }
    t = j_37(t);
  }
  t = filter_1_0(j_2, t);
  return(t);
}
static ATerm s_2 (ATerm t)
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
static ATerm t_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_a_15);
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm b_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_15;
    }
  return(t);
}
static ATerm v_2 (ATerm t)
{
  ATerm c_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_15;
    }
  return(t);
}
static ATerm w_2 (ATerm t)
{
  t = term_u_12;
  return(t);
}
static ATerm a_3 (ATerm t)
{
  ATerm d_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_15;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  ATerm d_40 = NULL;
  if(match_cons(t, sym_S_1))
    {
      d_40 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_40;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,k_39 = NULL,l_39 = NULL;
  k_39 = t;
  if(match_cons(t, sym_REF_2))
    {
      l_39 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, l_39, y_38);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          l_39 = ATgetArgument(t, 0);
          y_38 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, y_38), (ATerm) ATmakeAppl(sym_ANCHOR_1, l_39));
        }
      else
        {
          ATerm f_15 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm i_15 = ATgetArgument(t, 0);
                  ATerm k_15 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(g_15);
              t = term_l_15;
            }
          else
            {
              t = f_15;
              {
                ATerm m_15 = t;
                int p_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm r_15 = ATgetArgument(t, 0);
                        ATerm u_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_15);
                    t = term_l_15;
                  }
                else
                  {
                    t = m_15;
                    {
                      ATerm w_15 = t;
                      int x_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              l_39 = ATgetArgument(t, 0);
                              {
                                ATerm y_15 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(x_15);
                          t = l_39;
                        }
                      else
                        {
                          t = w_15;
                          if(match_cons(t, sym_A_3))
                            {
                              l_39 = ATgetArgument(t, 0);
                              y_38 = ATgetArgument(t, 1);
                              x_38 = ATgetArgument(t, 2);
                              {
                                ATerm t_39 = NULL,v_39 = NULL,w_39 = NULL,e_15 = NULL;
                                t = x_38;
                                t = construct_rows_0_0(t);
                                t_39 = t;
                                t = y_38;
                                t = Vspace_0_0(t);
                                v_39 = t;
                                t = t_39;
                                {
                                  static ATerm k_2 (ATerm t)
                                  {
                                    ATerm x_39 = NULL;
                                    static ATerm n_2 (ATerm t)
                                    {
                                      t = l_39;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm a_16 = ATgetArgument(t, 0);
                                        if(((ATgetType(a_16) != AT_LIST) || !(ATisEmpty(a_16))))
                                          _fail(t);
                                        x_39 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = b_6(n_2, x_39, t);
                                    return(t);
                                  }
                                  t = map_1_0(k_2, t);
                                }
                                e_15 = t;
                                t = (ATerm) ATmakeAppl(sym__2, v_39, e_15);
                                t = z_5(v_39, e_15, t);
                                w_39 = t;
                                t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_39)))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  l_39 = ATgetArgument(t, 0);
                                  y_38 = ATgetArgument(t, 1);
                                  {
                                    ATerm o_15 = NULL;
                                    t = l_39;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm b_16 = t;
                                      int c_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = y_38;
                                          t = filter_1_0(s_2, t);
                                          LocalPopChoice(c_16);
                                        }
                                      else
                                        {
                                          t = b_16;
                                          {
                                            ATerm s_15 = NULL,z_15 = NULL;
                                            t = at_last_1_0(t_2, t);
                                            o_15 = t;
                                            t = y_38;
                                            t = filter_1_0(u_2, t);
                                            z_15 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, o_15, z_15);
                                            t = z_5(o_15, z_15, t);
                                            s_15 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, s_15), term_d_16);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      l_39 = ATgetArgument(t, 0);
                                      y_38 = ATgetArgument(t, 1);
                                      {
                                        ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,u_16 = NULL,y_4 = NULL;
                                        t = l_39;
                                        t = Vspace_0_0(t);
                                        h_16 = t;
                                        t = l_39;
                                        t = Ispace_0_0(t);
                                        g_16 = t;
                                        t = y_38;
                                        t = filter_1_0(v_2, t);
                                        p_16 = t;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            l_16 = ATgetFirst((ATermList) t);
                                            m_16 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(p_16);
                                        k_16 = t;
                                        t = l_16;
                                        t = tov_1_0(w_2, t);
                                        n_16 = t;
                                        t = m_16;
                                        {
                                          static ATerm x_2 (ATerm t)
                                          {
                                            static ATerm z_2 (ATerm t)
                                            {
                                              t = g_16;
                                              return(t);
                                            }
                                            t = tov_1_0(z_2, t);
                                            return(t);
                                          }
                                          t = map_1_0(x_2, t);
                                        }
                                        o_16 = t;
                                        t = (ATerm) ATinsert(CheckATermList(o_16), n_16);
                                        y_4 = t;
                                        t = SSLsetAnnotations(y_4, k_16);
                                        u_16 = t;
                                        t = (ATerm) ATmakeAppl(sym__2, h_16, u_16);
                                        t = z_5(h_16, u_16, t);
                                        i_16 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, i_16)), term_d_16);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          l_39 = ATgetArgument(t, 0);
                                          y_38 = ATgetArgument(t, 1);
                                          {
                                            ATerm a_40 = NULL;
                                            static ATerm c_3 (ATerm t)
                                            {
                                              t = not_null(a_40);
                                              return(t);
                                            }
                                            t = l_39;
                                            t = Hspace_0_0(t);
                                            if(((a_40 != NULL) && (a_40 != t)))
                                              _fail(t);
                                            else
                                              a_40 = t;
                                            t = y_38;
                                            t = filter_1_0(a_3, t);
                                            t = sep_by_1_0(c_3, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              l_39 = ATgetArgument(t, 0);
                                              y_38 = ATgetArgument(t, 1);
                                              t = l_39;
                                              {
                                                ATerm e_16 = t;
                                                int f_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_j_16), (ATerm) ATinsert(ATempty, y_38));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_q_16), (ATerm) ATinsert(ATempty, y_38));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_r_16), (ATerm) ATinsert(ATempty, y_38));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_s_16), (ATerm) ATinsert(ATempty, y_38));
                                                              }
                                                          }
                                                      }
                                                    LocalPopChoice(f_16);
                                                  }
                                                else
                                                  {
                                                    t = e_16;
                                                    t = y_38;
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  l_39 = ATgetArgument(t, 0);
                                                  y_38 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm c_40 = NULL;
                                                    t = l_39;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = y_38;
                                                    t = map_1_0(d_3, t);
                                                    c_40 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_t_16), (ATerm) ATinsert(ATempty, c_40)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      l_39 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = l_39;
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
ATerm topdown_1_0 (ATerm q_74 (ATerm), ATerm t)
{
  static ATerm j_3 (ATerm t)
  {
    t = topdown_1_0(q_74, t);
    return(t);
  }
  t = q_74(t);
  t = SRTS_all(j_3, t);
  return(t);
}
ATerm at_end_1_0 (ATerm t_81 (ATerm), ATerm t)
{
  static ATerm e_41 (ATerm t)
  {
    ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
    d_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        b_41 = ATgetFirst((ATermList) t);
        c_41 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm i_17 = NULL,m_17 = NULL,d_5 = NULL;
          t = SSLgetAnnotations(d_41);
          i_17 = t;
          t = c_41;
          t = e_41(t);
          m_17 = t;
          t = (ATerm) ATinsert(CheckATermList(m_17), b_41);
          d_5 = t;
          t = SSLsetAnnotations(d_5, i_17);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = d_41;
        t = t_81(t);
      }
    return(t);
  }
  t = e_41(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm j_40 = NULL,k_40 = NULL,l_40 = NULL;
  j_40 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_40;
    }
  else
    {
      static ATerm k_3 (ATerm t)
      {
        t = not_null(l_40);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_40 = ATgetFirst((ATermList) t);
          if(((l_40 != NULL) && (l_40 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            l_40 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_40;
      t = at_end_1_0(k_3, t);
    }
  return(t);
}
static ATerm q_41 (ATerm i_41, ATerm t)
{
  ATerm j_41 = NULL;
  t = SSL_explode_term(i_41);
  if(match_cons(t, sym__2))
    {
      ATerm v_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      j_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_41;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  n_41 = t;
  if(match_cons(t, sym__2))
    {
      l_41 = ATgetArgument(t, 0);
      m_41 = ATgetArgument(t, 1);
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm m_3 (ATerm t)
            {
              t = m_41;
              return(t);
            }
            t = l_41;
            t = at_end_1_0(m_3, t);
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            t = q_41(n_41, t);
          }
      }
    }
  else
    {
      t = q_41(n_41, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm e_82 (ATerm), ATerm t)
{
  static ATerm m_42 (ATerm t)
  {
    ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
    j_42 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_42 = ATgetFirst((ATermList) t);
        l_42 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_16 = t;
      int z_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_17 = NULL,s_11 = NULL;
          t = SSLgetAnnotations(j_42);
          v_17 = t;
          t = l_42;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(l_42), k_42);
          s_11 = t;
          t = SSLsetAnnotations(s_11, v_17);
          t = e_82(t);
          LocalPopChoice(z_16);
        }
      else
        {
          t = y_16;
          {
            ATerm h_18 = NULL,l_18 = NULL,t_11 = NULL;
            t = SSLgetAnnotations(j_42);
            h_18 = t;
            t = l_42;
            t = m_42(t);
            l_18 = t;
            t = (ATerm) ATinsert(CheckATermList(l_18), k_42);
            t_11 = t;
            t = SSLsetAnnotations(t_11, h_18);
          }
        }
    }
    return(t);
  }
  t = m_42(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm x_81 (ATerm), ATerm t)
{
  static ATerm c_43 (ATerm t)
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_81(t);
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        {
          ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_19 = NULL,k_19 = NULL,z_11 = NULL;
          z_42 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_43 = ATgetFirst((ATermList) t);
              b_43 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(z_42);
          c_19 = t;
          t = b_43;
          t = c_43(t);
          k_19 = t;
          t = (ATerm) ATinsert(CheckATermList(k_19), a_43);
          z_11 = t;
          t = SSLsetAnnotations(z_11, c_19);
        }
      }
    return(t);
  }
  t = c_43(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm p_81 (ATerm), ATerm t)
{
  ATerm e_43 = NULL,f_43 = NULL;
  static ATerm o_3 (ATerm t)
  {
    ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,d_12 = NULL,c_12 = NULL;
    o_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_43 = ATgetFirst((ATermList) t);
        l_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(o_43);
    j_43 = t;
    t = k_43;
    t = p_81(t);
    m_43 = t;
    t = (ATerm) ATinsert(CheckATermList(l_43), m_43);
    c_12 = t;
    t = SSLsetAnnotations(c_12, j_43);
    n_43 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_43 = ATgetFirst((ATermList) t);
        i_43 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(n_43);
    g_43 = t;
    t = i_43;
    if(((e_43 != NULL) && (e_43 != t)))
      _fail(t);
    else
      e_43 = t;
    t = (ATerm) ATinsert(CheckATermList(i_43), h_43);
    d_12 = t;
    t = SSLsetAnnotations(d_12, g_43);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(o_3, t);
  f_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_43, not_null(e_43));
  return(t);
}
static ATerm c_6 (ATerm v_15, ATerm q_15, ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL;
  t = q_15;
  {
    static ATerm p_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((t_43 != NULL) && (t_43 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_43 = ATgetArgument(t, 0);
          {
            ATerm c_17 = ATgetArgument(t, 1);
            if(((ATgetType(c_17) == AT_LIST) && !(ATisEmpty(c_17))))
              {
                if(((p_43 != NULL) && (p_43 != ATgetFirst((ATermList) c_17))))
                  _fail(ATgetFirst((ATermList) c_17));
                else
                  p_43 = ATgetFirst((ATermList) c_17);
                if(((q_43 != NULL) && (q_43 != (ATerm) ATgetNext((ATermList) c_17))))
                  _fail((ATerm) ATgetNext((ATermList) c_17));
                else
                  q_43 = (ATerm) ATgetNext((ATermList) c_17);
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
      s_43 = ATgetArgument(t, 0);
      r_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_43;
  {
    ATerm d_17 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_17;
      }
  }
  t = (ATerm) ATinsert(CheckATermList(not_null(q_43)), not_null(p_43));
  {
    static ATerm q_3 (ATerm t)
    {
      ATerm w_43 = NULL,x_43 = NULL,y_43 = NULL,z_43 = NULL,o_12 = NULL;
      z_43 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_43 = ATgetFirst((ATermList) t);
          y_43 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(z_43);
      w_43 = t;
      t = y_43;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(y_43), x_43);
      o_12 = t;
      t = SSLsetAnnotations(o_12, w_43);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, v_15, (ATerm) ATinsert(CheckATermList(r_43), x_43)));
      return(t);
    }
    t = at_last_1_0(q_3, t);
  }
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_43, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(t_43), u_43)));
  t = conc_0_0(t);
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, v_15, v_43);
  return(t);
}
static ATerm z_3 (ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL;
  k_44 = t;
  if(match_cons(t, sym_H_2))
    {
      i_44 = ATgetArgument(t, 0);
      j_44 = ATgetArgument(t, 1);
      t = j_44;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_44 = ATgetFirst((ATermList) t);
          h_44 = (ATerm) ATgetNext((ATermList) t);
          t = h_44;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = g_44;
            }
          else
            {
              ATerm e_17 = t;
              int f_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_44;
                  t = c_6(i_44, j_44, t);
                  LocalPopChoice(f_17);
                }
              else
                {
                  t = e_17;
                  t = k_44;
                }
            }
        }
      else
        {
          ATerm g_17 = t;
          int h_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = k_44;
              t = c_6(i_44, j_44, t);
              LocalPopChoice(h_17);
            }
          else
            {
              t = g_17;
              t = k_44;
            }
        }
    }
  else
    {
      ATerm k_17 = t;
      int l_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_V_2))
            {
              ATerm n_17 = ATgetArgument(t, 0);
              j_44 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(l_17);
          t = j_44;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              g_44 = ATgetFirst((ATermList) t);
              h_44 = (ATerm) ATgetNext((ATermList) t);
              t = h_44;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = g_44;
                }
              else
                {
                  t = k_44;
                }
            }
          else
            {
              t = k_44;
            }
        }
      else
        {
          t = k_17;
          t = k_44;
        }
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(z_3, t);
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Html2text_0_0(t);
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
    }
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm e_45 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(b_4, t);
  e_45 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, e_45)))));
  t = bottomup_1_0(c_4, t);
  return(t);
}
static ATerm w_45 (ATerm q_45, ATerm t)
{
  t = SSL_fclose(q_45);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm t_45 = NULL,u_45 = NULL;
  u_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      t_45 = ATgetArgument(t, 0);
      {
        ATerm t_17 = t;
        int u_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(t_45);
            LocalPopChoice(u_17);
          }
        else
          {
            t = t_17;
            t = w_45(u_45, t);
          }
      }
    }
  else
    {
      t = w_45(u_45, t);
    }
  return(t);
}
static ATerm d_6 (ATerm u_19, ATerm t)
{
  t = SSL_read_term_from_stream(u_19);
  return(t);
}
static ATerm e_6 (ATerm q_33, ATerm r_33, ATerm t)
{
  t = SSL_strcat(q_33, r_33);
  return(t);
}
static ATerm f_6 (ATerm z_34, ATerm a_35, ATerm t)
{
  ATerm x_45 = NULL;
  t = SSL_fopen(z_34, a_35);
  x_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_45);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm y_45 = NULL;
  t = SSL_stdin_stream();
  y_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, y_45);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm z_45 = NULL;
  t = SSL_stdout_stream();
  z_45 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, z_45);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm a_46 = NULL;
  t = SSL_stderr_stream();
  a_46 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, a_46);
  return(t);
}
static ATerm h_47 (ATerm g_46, ATerm t)
{
  ATerm h_46 = NULL;
  t = SSL_explode_term(g_46);
  if(match_cons(t, sym__2))
    {
      ATerm w_17 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) w_17) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm x_17 = ATgetArgument(t, 1);
        if(((ATgetType(x_17) == AT_LIST) && !(ATisEmpty(x_17))))
          {
            h_46 = ATgetFirst((ATermList) x_17);
            {
              ATerm y_17 = (ATerm) ATgetNext((ATermList) x_17);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = h_46;
  if(match_cons(t, sym_stderr_0))
    {
      t = h_46;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = h_46;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = h_46;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm i_47 (ATerm k_46, ATerm l_46, ATerm m_46, ATerm t)
{
  ATerm n_46 = NULL,o_46 = NULL,p_46 = NULL,s_46 = NULL,s_12 = NULL;
  t = SSLgetAnnotations(m_46);
  p_46 = t;
  t = k_46;
  if(match_cons(t, sym_Path_1))
    {
      s_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, s_46, l_46);
  s_12 = t;
  t = SSLsetAnnotations(s_12, p_46);
  if(match_cons(t, sym__2))
    {
      n_46 = ATgetArgument(t, 0);
      o_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(n_46, o_46, t);
  return(t);
}
static ATerm j_47 (ATerm u_46, ATerm v_46, ATerm w_46, ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL,z_46 = NULL,c_47 = NULL,t_12 = NULL;
  t = SSLgetAnnotations(w_46);
  z_46 = t;
  t = SSL_is_string(u_46);
  c_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_47, v_46);
  t_12 = t;
  t = SSLsetAnnotations(t_12, z_46);
  if(match_cons(t, sym__2))
    {
      x_46 = ATgetArgument(t, 0);
      y_46 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_6(x_46, y_46, t);
  return(t);
}
static ATerm g_6 (ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL,g_47 = NULL;
  e_47 = t;
  if(match_cons(t, sym__2))
    {
      f_47 = ATgetArgument(t, 0);
      g_47 = ATgetArgument(t, 1);
      {
        ATerm z_17 = t;
        int a_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_47(e_47, t);
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
                  t = i_47(f_47, g_47, e_47, t);
                  LocalPopChoice(c_18);
                }
              else
                {
                  t = b_18;
                  t = j_47(f_47, g_47, e_47, t);
                }
            }
          }
      }
    }
  else
    {
      t = h_47(e_47, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,s_47 = NULL;
  s_47 = t;
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, s_47, term_g_18);
        t = g_6(t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        {
          ATerm b_20 = NULL,e_20 = NULL;
          t = term_i_18;
          e_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_i_18, s_47);
          t = e_6(e_20, s_47, t);
          b_20 = t;
          t = SSL_perror(b_20);
          _fail(t);
        }
      }
  }
  m_47 = t;
  if(match_cons(t, sym_Stream_1))
    {
      n_47 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_6(n_47, t);
  l_47 = t;
  t = m_47;
  t = fclose_0_0(t);
  t = l_47;
  return(t);
}
static ATerm h_6 (ATerm q_34, ATerm r_34, ATerm t)
{
  t = SSL_access(q_34, r_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm x_47 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_b_8;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm z_47 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          x_47 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_j_18);
      z_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_47, (ATerm) ATinsert(ATempty, term_j_18));
      t = h_6(x_47, z_47, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm n_6 (ATerm c_51, ATerm d_51, ATerm t)
{
  t = SSL_table_get(c_51, d_51);
  return(t);
}
static ATerm j_6 (ATerm q_49, ATerm r_49, ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL;
  b_48 = t;
  {
    ATerm k_18 = t;
    int m_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, q_49, r_49);
        t = n_6(q_49, r_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm n_18 = ATgetFirst((ATermList) t);
            a_48 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(m_18);
        t = SSL_table_put(q_49, r_49, a_48);
        t = (ATerm) ATmakeAppl(sym__3, q_49, r_49, a_48);
      }
    else
      {
        t = k_18;
        t = SSL_table_remove(q_49, r_49);
        t = (ATerm) ATmakeAppl(sym__2, q_49, r_49);
      }
  }
  t = b_48;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_94 (ATerm), ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL;
  f_48 = t;
  t = a_94(t);
  e_48 = t;
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_48 = NULL;
        t = term_p_8;
        h_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_48, term_p_8);
        t = n_6(e_48, h_48, t);
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_48 = ATgetFirst((ATermList) t);
      c_48 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_p_8;
  g_48 = t;
  t = SSL_table_put(e_48, g_48, c_48);
  t = d_48;
  {
    static ATerm d_4 (ATerm t)
    {
      ATerm i_48 = NULL;
      i_48 = t;
      t = (ATerm) ATmakeAppl(sym__2, e_48, i_48);
      t = j_6(e_48, i_48, t);
      return(t);
    }
    t = map_1_0(d_4, t);
  }
  t = f_48;
  return(t);
}
ATerm restore_always_2_0 (ATerm m_73 (ATerm), ATerm n_73 (ATerm), ATerm t)
{
  ATerm q_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_73(t);
      t = n_73(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = q_18;
      t = n_73(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_93 (ATerm), ATerm t)
{
  ATerm k_48 = NULL,l_48 = NULL,m_48 = NULL,n_48 = NULL,o_48 = NULL;
  l_48 = t;
  t = z_93(t);
  k_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_48, term_p_8);
  {
    ATerm t_18 = t;
    int u_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_48 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm v_18 = ATgetArgument(t, 0);
            ATerm w_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_p_8;
        s_48 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_48, term_p_8);
        t = n_6(k_48, s_48, t);
        LocalPopChoice(u_18);
      }
    else
      {
        t = t_18;
        t = (ATerm) ATempty;
      }
  }
  m_48 = t;
  t = term_p_8;
  n_48 = t;
  t = (ATerm) ATinsert(CheckATermList(m_48), (ATerm) ATempty);
  o_48 = t;
  t = SSL_table_put(k_48, n_48, o_48);
  t = l_48;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_w_8;
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm g_49 = NULL;
  g_49 = t;
  {
    ATerm x_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(g_49);
        LocalPopChoice(y_18);
      }
    else
      {
        t = x_18;
        t = g_49;
      }
  }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_106 (ATerm), ATerm t)
{
  ATerm a_49 = NULL;
  static ATerm j_4 (ATerm t)
  {
    ATerm b_49 = NULL;
    b_49 = t;
    {
      ATerm z_18 = t;
      int a_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_49 = NULL,d_49 = NULL;
          t = term_w_8;
          c_49 = t;
          t = term_p_8;
          d_49 = t;
          t = term_b_19;
          t = n_6(c_49, d_49, t);
          LocalPopChoice(a_19);
        }
      else
        {
          t = z_18;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((a_49 != NULL) && (a_49 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          a_49 = ATgetFirst((ATermList) t);
        {
          ATerm d_19 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = a_49;
    t = map_1_0(p_4, t);
    t = b_49;
    t = end_scope_1_0(q_4, t);
    return(t);
  }
  t = begin_scope_1_0(i_4, t);
  t = restore_always_2_0(g_106, j_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm n_49 = NULL,o_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  n_49 = t;
  t = term_z_8;
  t = whoami_0_0(t);
  o_49 = t;
  t = term_e_8;
  t_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_19), o_49), term_e_19);
  u_49 = t;
  t = SSL_printnl(t_49, u_49);
  t = term_y_11;
  s_49 = t;
  t = SSL_exit(s_49);
  t = n_49;
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm w_49 = NULL;
  w_49 = t;
  if(match_string(t, "-k"))
    {
      t = w_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = w_49;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  t = SSL_string_to_int(x_49);
  y_49 = t;
  t = term_g_19;
  z_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_g_19, y_49);
  t = q_6(z_49, y_49, t);
  t = x_49;
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_h_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm b_50 = NULL;
  b_50 = t;
  if(match_string(t, "-S"))
    {
      t = b_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = b_50;
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL;
  t = term_i_19;
  c_50 = t;
  t = term_r_12;
  d_50 = t;
  t = term_j_19;
  t = q_6(c_50, d_50, t);
  t = term_l_19;
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = term_m_19;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
  e_50 = t;
  t = SSL_string_to_int(e_50);
  f_50 = t;
  t = term_i_19;
  g_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_19, f_50);
  t = q_6(g_50, f_50, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, e_50);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_n_19;
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
  ATerm h_50 = NULL,i_50 = NULL;
  t = term_o_19;
  h_50 = t;
  t = term_z_8;
  i_50 = t;
  t = term_p_19;
  t = q_6(h_50, i_50, t);
  t = term_q_19;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(x_4, z_4, a_5, t);
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm v_19 = t;
        int w_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(c_5, e_5, f_5, t);
            LocalPopChoice(w_19);
          }
        else
          {
            t = v_19;
            t = Option_3_0(i_5, j_5, k_5, t);
          }
      }
    }
  return(t);
}
static ATerm q_6 (ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm j_50 = NULL;
  t = term_s_7;
  j_50 = t;
  t = SSL_table_put(j_50, q_44, r_44);
  t = (ATerm) ATmakeAppl(sym__3, term_s_7, q_44, r_44);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm m_50 = NULL,n_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
      t = term_z_8;
      t = e_0(t);
      o_50 = t;
      t = term_x_19;
      p_50 = t;
      t = term_y_19;
      q_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_19, term_y_19, o_50);
      t = o_6(p_50, q_50, o_50, t);
      _fail(t);
    }
  else
    {
      ATerm t_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_50 = ATgetFirst((ATermList) t);
          n_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_50;
      t = c_0(t);
      t = term_z_8;
      t = d_0(t);
      t_50 = t;
      t = (ATerm) ATinsert(CheckATermList(n_50), t_50);
    }
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm v_50 = NULL;
  v_50 = t;
  if(match_string(t, "-o"))
    {
      t = v_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = v_50;
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm w_50 = NULL,x_50 = NULL;
  w_50 = t;
  t = term_u_7;
  x_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_u_7, w_50);
  t = q_6(x_50, w_50, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, w_50);
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_z_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_5, n_5, o_5, t);
  return(t);
}
static ATerm o_6 (ATerm l_49, ATerm m_49, ATerm k_49, ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
  {
    ATerm a_20 = t;
    int f_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_20 = ATgetArgument(t, 0);
            ATerm h_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, l_49, m_49);
        t = n_6(l_49, m_49, t);
        LocalPopChoice(f_20);
      }
    else
      {
        t = a_20;
        t = (ATerm) ATempty;
      }
  }
  a_51 = t;
  t = (ATerm) ATinsert(CheckATermList(a_51), k_49);
  b_51 = t;
  t = SSL_table_put(l_49, m_49, b_51);
  t = z_50;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_51 = NULL,p_51 = NULL,q_51 = NULL;
      t = term_z_8;
      t = n_0(t);
      o_51 = t;
      t = term_x_19;
      p_51 = t;
      t = term_y_19;
      q_51 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_x_19, term_y_19, o_51);
      t = o_6(p_51, q_51, o_51, t);
      _fail(t);
    }
  else
    {
      ATerm u_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_51 = ATgetFirst((ATermList) t);
          l_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = l_51;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_51 = ATgetFirst((ATermList) t);
          n_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = k_51;
      t = k_0(t);
      t = m_51;
      t = l_0(t);
      u_51 = t;
      t = (ATerm) ATinsert(CheckATermList(n_51), u_51);
    }
  return(t);
}
static ATerm p_5 (ATerm t)
{
  ATerm w_51 = NULL;
  w_51 = t;
  if(match_string(t, "-i"))
    {
      t = w_51;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = w_51;
    }
  return(t);
}
static ATerm q_5 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL;
  x_51 = t;
  t = term_i_20;
  y_51 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_20, x_51);
  t = q_6(y_51, x_51, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, x_51);
  return(t);
}
static ATerm r_5 (ATerm t)
{
  t = term_j_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_5, q_5, r_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm z_51 = NULL,a_52 = NULL,b_52 = NULL,c_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_8;
  t = whoami_0_0(t);
  z_51 = t;
  t = term_e_8;
  b_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_20), z_51);
  c_52 = t;
  t = SSL_printnl(b_52, c_52);
  t = term_y_11;
  a_52 = t;
  t = SSL_exit(a_52);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL;
  t = term_s_7;
  d_52 = t;
  t = term_n_20;
  e_52 = t;
  t = term_o_20;
  t = n_6(d_52, e_52, t);
  return(t);
}
static ATerm k_6 (ATerm t_37, ATerm u_37, ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(t_37, u_37);
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      t = SSL_addr(t_37, u_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_87 (ATerm), ATerm u_87 (ATerm), ATerm t)
{
  ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
  g_52 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = g_52;
      t = t_87(t);
    }
  else
    {
      ATerm l_52 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_52 = ATgetFirst((ATermList) t);
          i_52 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_52;
      t = foldr_2_0(t_87, u_87, t);
      l_52 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_52, l_52);
      t = u_87(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm s_5 (ATerm t)
{
  t = term_r_12;
  return(t);
}
static ATerm t_5 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL;
  if(match_cons(t, sym__2))
    {
      p_20 = ATgetArgument(t, 0);
      q_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(p_20, q_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm o_52 = NULL,k_20 = NULL,m_20 = NULL;
  t = times_0_0(t);
  m_20 = t;
  t = SSL_explode_term(m_20);
  if(match_cons(t, sym__2))
    {
      ATerm t_20 = ATgetArgument(t, 0);
      k_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_20;
  t = foldr_2_0(s_5, t_5, t);
  o_52 = t;
  t = SSL_TicksToSeconds(o_52);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm z_52 = NULL,a_53 = NULL,b_53 = NULL;
  z_52 = t;
  if(match_cons(t, sym__2))
    {
      a_53 = ATgetArgument(t, 0);
      b_53 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm u_20 = t;
    int v_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_53;
        if((a_53 != t))
          {
            _fail(t);
          }
        t = z_52;
        LocalPopChoice(v_20);
      }
    else
      {
        t = u_20;
        t = (ATerm) ATmakeAppl(sym__2, a_53, b_53);
        {
          ATerm y_20 = t;
          int z_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(a_53, b_53);
              LocalPopChoice(z_20);
            }
          else
            {
              t = y_20;
              t = SSL_gtr(a_53, b_53);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, a_53, b_53);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_96 (ATerm), ATerm t)
{
  ATerm f_53 = NULL;
  f_53 = t;
  {
    ATerm b_21 = t;
    int c_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL;
        t = term_s_7;
        i_53 = t;
        t = term_i_19;
        j_53 = t;
        t = term_d_21;
        t = n_6(i_53, j_53, t);
        h_53 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_53, term_y_11);
        t = geq_0_0(t);
        t = f_53;
        t = k_96(t);
        LocalPopChoice(c_21);
      }
    else
      {
        t = b_21;
        t = f_53;
      }
  }
  return(t);
}
static ATerm v_5 (ATerm t)
{
  ATerm l_53 = NULL,m_53 = NULL,o_53 = NULL,p_53 = NULL;
  t = run_time_0_0(t);
  l_53 = t;
  t = term_z_8;
  t = whoami_0_0(t);
  m_53 = t;
  t = term_e_8;
  o_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_21), l_53), term_e_21), m_53);
  p_53 = t;
  t = SSL_printnl(o_53, p_53);
  t = (ATerm) ATmakeAppl(sym__2, term_e_8, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_21), l_53), term_e_21), m_53));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm q_53 = NULL;
  t = report_run_time_0_0(t);
  t = term_r_12;
  q_53 = t;
  t = SSL_exit(q_53);
  return(t);
}
static ATerm x_5 (ATerm t)
{
  ATerm a_54 = NULL,b_54 = NULL;
  b_54 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = b_54;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          a_54 = ATgetArgument(t, 0);
          {
            ATerm n_21 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(b_54);
            n_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, a_54);
            a_13 = t;
            t = SSLsetAnnotations(a_13, n_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = b_54;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_99 (ATerm), ATerm t)
{
  ATerm g_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_53 = NULL,u_53 = NULL;
      t = term_s_7;
      t_53 = t;
      t = term_j_21;
      u_53 = t;
      t = term_k_21;
      t = n_6(t_53, u_53, t);
      LocalPopChoice(i_21);
    }
  else
    {
      t = g_21;
      t = fetch_1_0(x_5, t);
    }
  t = a_99(t);
  return(t);
}
ATerm map_1_0 (ATerm c_81 (ATerm), ATerm t)
{
  static ATerm r_54 (ATerm t)
  {
    ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
    o_54 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = o_54;
      }
    else
      {
        ATerm v_21 = NULL,y_21 = NULL,c_22 = NULL,f_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_54 = ATgetFirst((ATermList) t);
            q_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(o_54);
        v_21 = t;
        t = p_54;
        t = c_81(t);
        y_21 = t;
        t = q_54;
        t = r_54(t);
        c_22 = t;
        t = (ATerm) ATinsert(CheckATermList(c_22), y_21);
        f_13 = t;
        t = SSLsetAnnotations(f_13, v_21);
      }
    return(t);
  }
  t = r_54(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm u_54 = NULL,v_54 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_54 = ATgetFirst((ATermList) t);
      v_54 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm z_54 = NULL,a_55 = NULL;
        static ATerm y_5 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(z_54)), not_null(a_55));
          return(t);
        }
        t = v_54;
        t = i_0(t);
        if(((z_54 != NULL) && (z_54 != t)))
          _fail(t);
        else
          z_54 = t;
        t = u_54;
        t = g_0(t);
        if(((a_55 != NULL) && (a_55 != t)))
          _fail(t);
        else
          a_55 = t;
        t = v_54;
        t = reverse_acc_2_0(g_0, y_5, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_8;
      t = i_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm t)
{
  ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL,j_13 = NULL;
  i_55 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_55 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_55);
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_55);
  j_13 = t;
  t = SSLsetAnnotations(j_13, g_55);
  return(t);
}
static ATerm m_6 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_6 (ATerm t)
{
  ATerm l_55 = NULL;
  l_55 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, l_55), term_l_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL;
  ATerm m_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_55 = NULL,f_55 = NULL;
      t = term_s_7;
      e_55 = t;
      t = term_n_20;
      f_55 = t;
      t = term_o_20;
      t = n_6(e_55, f_55, t);
      LocalPopChoice(o_21);
    }
  else
    {
      t = m_21;
      t = fetch_1_0(l_6, t);
    }
  t = term_p_21;
  t = echo_0_0(t);
  t = term_x_19;
  c_55 = t;
  t = term_y_19;
  d_55 = t;
  t = term_q_21;
  t = n_6(c_55, d_55, t);
  t = reverse_acc_2_0(_id, m_6, t);
  t = map_1_0(p_6, t);
  return(t);
}
ATerm fetch_1_0 (ATerm m_81 (ATerm), ATerm t)
{
  static ATerm s_56 (ATerm t)
  {
    ATerm j_56 = NULL,k_56 = NULL,r_56 = NULL;
    j_56 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        k_56 = ATgetFirst((ATermList) t);
        r_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm r_21 = t;
      int s_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_22 = NULL,v_22 = NULL,l_13 = NULL;
          t = SSLgetAnnotations(j_56);
          p_22 = t;
          t = k_56;
          t = m_81(t);
          v_22 = t;
          t = (ATerm) ATinsert(CheckATermList(r_56), v_22);
          l_13 = t;
          t = SSLsetAnnotations(l_13, p_22);
          LocalPopChoice(s_21);
        }
      else
        {
          t = r_21;
          {
            ATerm q_23 = NULL,t_23 = NULL,m_13 = NULL;
            t = SSLgetAnnotations(j_56);
            q_23 = t;
            t = r_56;
            t = s_56(t);
            t_23 = t;
            t = (ATerm) ATinsert(CheckATermList(t_23), k_56);
            m_13 = t;
            t = SSLsetAnnotations(m_13, q_23);
          }
        }
    }
    return(t);
  }
  t = s_56(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL;
  w_56 = t;
  {
    ATerm t_21 = t;
    int u_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = w_56;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm w_21 = ATgetFirst((ATermList) t);
                ATerm x_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = w_56;
          }
        LocalPopChoice(u_21);
      }
    else
      {
        t = t_21;
        t = (ATerm) ATinsert(ATempty, w_56);
      }
  }
  x_56 = t;
  t = term_x_7;
  y_56 = t;
  t = SSL_printnl(y_56, x_56);
  t = w_56;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL;
  t = term_s_7;
  f_57 = t;
  t = term_n_20;
  g_57 = t;
  t = term_o_20;
  t = n_6(f_57, g_57, t);
  t = echo_0_0(t);
  return(t);
}
static ATerm r_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm s_6 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL;
  t = term_b_22;
  h_57 = t;
  t = term_z_8;
  i_57 = t;
  t = term_d_22;
  t = q_6(h_57, i_57, t);
  return(t);
}
static ATerm t_6 (ATerm t)
{
  t = term_e_22;
  return(t);
}
static ATerm u_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_6 (ATerm t)
{
  ATerm j_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
  t = term_b_22;
  n_57 = t;
  t = term_z_8;
  o_57 = t;
  t = term_d_22;
  t = q_6(n_57, o_57, t);
  t = term_f_22;
  j_57 = t;
  t = term_z_8;
  m_57 = t;
  t = term_g_22;
  t = q_6(j_57, m_57, t);
  t = term_h_22;
  return(t);
}
static ATerm w_6 (ATerm t)
{
  t = term_i_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm j_22 = t;
  int k_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_6, s_6, t_6, t);
      LocalPopChoice(k_22);
    }
  else
    {
      t = j_22;
      t = Option_3_0(u_6, v_6, w_6, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm b_58 (ATerm), ATerm c_58 (ATerm), ATerm t)
{
  ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL,s_57 = NULL,t_57 = NULL,u_57 = NULL,q_13 = NULL;
  u_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      q_57 = ATgetFirst((ATermList) t);
      r_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_57);
  p_57 = t;
  t = q_57;
  t = b_58(t);
  s_57 = t;
  t = r_57;
  t = c_58(t);
  t_57 = t;
  t = (ATerm) ATinsert(CheckATermList(t_57), s_57);
  q_13 = t;
  t = SSLsetAnnotations(q_13, p_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_101 (ATerm), ATerm t)
{
  ATerm z_57 = NULL,a_58 = NULL,d_58 = NULL,e_58 = NULL,g_58 = NULL,h_58 = NULL,s_13 = NULL;
  z_57 = t;
  {
    ATerm l_22 = t;
    int m_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_22;
        t = d_101(t);
        LocalPopChoice(m_22);
      }
    else
      {
        t = l_22;
      }
  }
  t = z_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      d_58 = ATgetFirst((ATermList) t);
      e_58 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_57);
  a_58 = t;
  t = term_n_20;
  h_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_20, d_58);
  t = q_6(h_58, d_58, t);
  t = e_58;
  {
    static ATerm r_58 (ATerm t)
    {
      ATerm o_22 = t;
      int q_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_22 = t;
          int s_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_58 = NULL;
              k_58 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = k_58;
              LocalPopChoice(s_22);
            }
          else
            {
              t = r_22;
              t = d_101(t);
              t = Cons_2_0(_id, r_58, t);
            }
          LocalPopChoice(q_22);
        }
      else
        {
          t = o_22;
          {
            ATerm n_58 = NULL,o_58 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                n_58 = ATgetFirst((ATermList) t);
                o_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(o_58), (ATerm) ATmakeAppl(sym_Undefined_1, n_58));
          }
        }
      return(t);
    }
    t = r_58(t);
  }
  g_58 = t;
  t = (ATerm) ATinsert(CheckATermList(g_58), (ATerm) ATmakeAppl(sym_Program_1, d_58));
  s_13 = t;
  t = SSLsetAnnotations(s_13, a_58);
  return(t);
}
static ATerm y_6 (ATerm t)
{
  ATerm d_59 = NULL;
  d_59 = t;
  if(match_string(t, "--help"))
    {
      t = d_59;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_59;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_59;
        }
    }
  return(t);
}
static ATerm a_7 (ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL;
  t = term_j_21;
  e_59 = t;
  t = term_z_8;
  f_59 = t;
  t = term_t_22;
  t = q_6(e_59, f_59, t);
  t = term_u_22;
  return(t);
}
static ATerm b_7 (ATerm t)
{
  t = term_w_22;
  return(t);
}
static ATerm c_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_101 (ATerm), ATerm t)
{
  ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
  y_58 = t;
  t = term_x_19;
  a_59 = t;
  t = term_y_19;
  b_59 = t;
  t = (ATerm) ATempty;
  c_59 = t;
  t = SSL_table_put(a_59, b_59, c_59);
  t = y_58;
  {
    static ATerm x_6 (ATerm t)
    {
      ATerm x_22 = t;
      int y_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_101(t);
          LocalPopChoice(y_22);
        }
      else
        {
          t = x_22;
          {
            ATerm z_22 = t;
            int a_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(y_6, a_7, b_7, t);
                LocalPopChoice(a_23);
              }
            else
              {
                t = z_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(x_6, t);
  }
  {
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_59 = NULL;
        q_59 = t;
        {
          ATerm d_23 = t;
          int e_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_24 = NULL;
              t = q_59;
              {
                ATerm f_23 = t;
                int g_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm i_24 = NULL,n_24 = NULL;
                    t = term_s_7;
                    i_24 = t;
                    t = term_j_21;
                    n_24 = t;
                    t = term_k_21;
                    t = n_6(i_24, n_24, t);
                    LocalPopChoice(g_23);
                  }
                else
                  {
                    t = f_23;
                    t = fetch_1_0(c_7, t);
                  }
              }
              t = q_59;
              t = default_system_usage_0_0(t);
              t = term_r_12;
              h_24 = t;
              t = SSL_exit(h_24);
              LocalPopChoice(e_23);
            }
          else
            {
              t = d_23;
              {
                ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL;
                t = term_s_7;
                t_24 = t;
                t = term_b_22;
                u_24 = t;
                t = term_l_23;
                t = n_6(t_24, u_24, t);
                t = q_59;
                t = default_system_about_0_0(t);
                t = term_r_12;
                s_24 = t;
                t = SSL_exit(s_24);
              }
            }
        }
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        {
          ATerm m_23 = t;
          int n_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_59 = NULL,s_59 = NULL,t_59 = NULL;
              static ATerm d_7 (ATerm t)
              {
                ATerm u_59 = NULL,v_59 = NULL,w_59 = NULL,d_14 = NULL;
                w_59 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    v_59 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(w_59);
                u_59 = t;
                t = v_59;
                if(((w_58 != NULL) && (w_58 != t)))
                  _fail(t);
                else
                  w_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, v_59);
                d_14 = t;
                t = SSLsetAnnotations(d_14, u_59);
                return(t);
              }
              t = fetch_1_0(d_7, t);
              t = term_e_8;
              s_59 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_58)), term_o_23);
              t_59 = t;
              t = SSL_printnl(s_59, t_59);
              t = (ATerm) ATmakeAppl(sym__2, term_e_8, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_58)), term_o_23));
              t = default_system_usage_0_0(t);
              t = term_y_11;
              r_59 = t;
              t = SSL_exit(r_59);
              LocalPopChoice(n_23);
            }
          else
            {
              t = m_23;
            }
        }
      }
  }
  x_58 = t;
  t = term_x_19;
  z_58 = t;
  t = SSL_table_destroy(z_58);
  t = x_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_99 (ATerm), ATerm d_99 (ATerm), ATerm e_99 (ATerm), ATerm f_99 (ATerm), ATerm t)
{
  ATerm b_60 = NULL,c_60 = NULL,d_60 = NULL,e_60 = NULL;
  t = parse_options_1_0(c_99, t);
  b_60 = t;
  t = term_p_23;
  e_60 = t;
  t = SSL_table_create(e_60);
  t = term_p_23;
  c_60 = t;
  t = term_r_23;
  d_60 = t;
  t = SSL_table_put(c_60, d_60, b_60);
  t = b_60;
  t = e_99(t);
  {
    ATerm s_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_99, t);
        LocalPopChoice(u_23);
      }
    else
      {
        t = s_23;
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_99(t);
              t = report_success_0_0(t);
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm e_7 (ATerm t)
{
  ATerm x_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(y_23);
    }
  else
    {
      t = x_23;
      {
        ATerm z_23 = t;
        int a_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(a_24);
          }
        else
          {
            t = z_23;
            {
              ATerm b_24 = t;
              int c_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(g_7, h_7, i_7, t);
                  LocalPopChoice(c_24);
                }
              else
                {
                  t = b_24;
                  {
                    ATerm d_24 = t;
                    int e_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(e_24);
                      }
                    else
                      {
                        t = d_24;
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
static ATerm f_7 (ATerm t)
{
  t = xtc_temp_files_1_0(j_7, t);
  return(t);
}
static ATerm g_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_7 (ATerm t)
{
  ATerm g_60 = NULL,h_60 = NULL;
  t = term_f_24;
  g_60 = t;
  t = term_z_8;
  h_60 = t;
  t = term_g_24;
  t = q_6(g_60, h_60, t);
  t = term_l_24;
  return(t);
}
static ATerm i_7 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm j_7 (ATerm t)
{
  ATerm o_24 = t;
  int p_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_60 = NULL,k_60 = NULL,l_60 = NULL;
      t = term_s_7;
      k_60 = t;
      t = term_i_20;
      l_60 = t;
      t = term_q_24;
      t = n_6(k_60, l_60, t);
      j_60 = t;
      t = (ATerm) ATmakeAppl(sym_FILE_1, j_60);
      LocalPopChoice(p_24);
    }
  else
    {
      t = o_24;
      t = term_b_8;
    }
  t = read_from_0_0(t);
  t = abox2html_0_0(t);
  t = topdown_print_to_0_0(t);
  t = xtc_write_output_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(e_7, default_usage_0_0, _id, f_7, t);
  return(t);
}

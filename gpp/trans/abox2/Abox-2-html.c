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
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_z_22;
ATerm term_s_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_s_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_x_20;
ATerm term_t_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_e_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_k_18;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_e_17;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_d_15;
ATerm term_p_14;
ATerm term_g_14;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_l_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_l_10;
ATerm term_g_10;
ATerm term_a_10;
ATerm term_v_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_d_7;
ATerm term_v_6;
ATerm term_t_6;
ATerm term_o_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/mkstemp", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("SSL/ReadFromFile ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_i_7, term_d_7);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_x_11);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_11);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_k_7);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_v_19);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_k_7);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_k_7);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_k_7);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_j_24, term_k_7);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm i_1 (ATerm s_0, ATerm t);
static ATerm k_1 (ATerm u_0, ATerm w_0, ATerm z_0, ATerm t);
static ATerm a_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm a_6 (ATerm d_93 (ATerm), ATerm z_38, ATerm x_38, ATerm t);
ATerm mkstemp_0_0 (ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm b_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Html2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm b_74 (ATerm), ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm e_75 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
ATerm replace_quotes_0_0 (ATerm t);
ATerm listtd_1_0 (ATerm w_81 (ATerm), ATerm t);
static ATerm r_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm html_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm i_104 (ATerm), ATerm t);
static ATerm v_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm f_1 (ATerm t);
ATerm make_html_comment_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm sep_by_1_0 (ATerm d_72 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm x_87 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm d_6 (ATerm b_20, ATerm c_20, ATerm t);
ATerm tov_1_0 (ATerm c_72 (ATerm), ATerm t);
static ATerm u_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
static ATerm e_6 (ATerm r_37, ATerm s_37, ATerm t);
ATerm while_not_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t);
ATerm for_3_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t);
static ATerm b_2 (ATerm t);
static ATerm h_2 (ATerm t);
static ATerm i_2 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm l_104 (ATerm), ATerm t);
static ATerm m_2 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
ATerm make_hs_0_0 (ATerm t);
static ATerm f_6 (ATerm f_72 (ATerm), ATerm n_17, ATerm t);
static ATerm o_2 (ATerm t);
static ATerm p_2 (ATerm t);
static ATerm q_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm d_3 (ATerm t);
static ATerm i_3 (ATerm t);
static ATerm k_3 (ATerm t);
ATerm Abox2html_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm a_74 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm d_81 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm m_39 (ATerm e_39, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm o_81 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm h_81 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm z_80 (ATerm), ATerm t);
static ATerm g_6 (ATerm u_15, ATerm p_15, ATerm t);
static ATerm s_3 (ATerm t);
ATerm normalize_0_0 (ATerm t);
static ATerm t_3 (ATerm t);
static ATerm u_3 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm s_43 (ATerm m_43, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_6 (ATerm t_19, ATerm t);
static ATerm i_6 (ATerm r_34, ATerm s_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm k_45 (ATerm c_44, ATerm t);
static ATerm l_45 (ATerm g_44, ATerm h_44, ATerm k_44, ATerm t);
static ATerm m_45 (ATerm x_44, ATerm y_44, ATerm z_44, ATerm t);
static ATerm j_6 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm k_6 (ATerm i_34, ATerm j_34, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm l_6 (ATerm p_40, ATerm q_40, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm n_49, ATerm o_49, ATerm t);
ATerm end_scope_1_0 (ATerm a_93 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm z_92 (ATerm), ATerm t);
static ATerm w_3 (ATerm t);
static ATerm y_3 (ATerm t);
static ATerm z_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm g_105 (ATerm), ATerm t);
static ATerm c_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm h_105 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm d_4 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_6 (ATerm i_44, ATerm j_44, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_6 (ATerm i_49, ATerm j_49, ATerm h_49, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_6 (ATerm l_37, ATerm m_37, ATerm t);
ATerm foldr_2_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm v_4 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm k_95 (ATerm), ATerm t);
static ATerm x_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm y_4 (ATerm t);
ATerm need_help_1_0 (ATerm a_98 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
static ATerm c_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm w_80 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_6 (ATerm i_33, ATerm j_33, ATerm t);
ATerm debug_1_0 (ATerm b_80 (ATerm), ATerm t);
ATerm map_1_0 (ATerm m_80 (ATerm), ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm r_6 (ATerm z_50, ATerm a_51, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
static ATerm l_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm d_100 (ATerm), ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
static ATerm q_5 (ATerm t);
ATerm parse_options_1_0 (ATerm c_100 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm w_5 (ATerm t);
static ATerm x_5 (ATerm t);
static ATerm y_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm i_1 (ATerm s_0, ATerm t)
{
  t = s_0;
  {
    ATerm z_5 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm b_6 = ATgetArgument(t, 0);
            ATerm c_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_5;
      }
  }
  t = term_o_6;
  t = debug_1_0(a_0, t);
  t = (ATerm) ATmakeAppl(sym__2, s_0, term_t_6);
  t = open_file_0_0(t);
  return(t);
}
static ATerm k_1 (ATerm u_0, ATerm w_0, ATerm z_0, ATerm t)
{
  t = SSL_open_file(u_0, w_0);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_v_6;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm e_1 = NULL,g_1 = NULL,h_1 = NULL;
  e_1 = t;
  if(match_cons(t, sym__2))
    {
      g_1 = ATgetArgument(t, 0);
      h_1 = ATgetArgument(t, 1);
      {
        ATerm w_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = i_1(e_1, t);
            LocalPopChoice(a_7);
          }
        else
          {
            t = w_6;
            t = k_1(g_1, h_1, e_1, t);
          }
      }
    }
  else
    {
      t = i_1(e_1, t);
    }
  return(t);
}
static ATerm a_6 (ATerm d_93 (ATerm), ATerm z_38, ATerm x_38, ATerm t)
{
  ATerm l_1 = NULL,m_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL;
  q_1 = t;
  t = d_93(t);
  l_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, l_1, z_38, x_38);
  t = s_6(l_1, z_38, x_38, t);
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_1 = NULL;
        t = term_d_7;
        t_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, l_1, term_d_7);
        t = r_6(l_1, t_1, t);
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_1 = ATgetFirst((ATermList) t);
      p_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_7;
  r_1 = t;
  t = (ATerm) ATinsert(CheckATermList(p_1), (ATerm) ATinsert(CheckATermList(m_1), z_38));
  s_1 = t;
  t = SSL_table_put(l_1, r_1, s_1);
  t = q_1;
  return(t);
}
ATerm mkstemp_0_0 (ATerm t)
{
  ATerm v_1 = NULL;
  ATerm e_7 = t;
  int f_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 = NULL,f_0 = NULL;
      z_1 = t;
      t = term_g_7;
      f_0 = t;
      t = (ATerm) ATmakeAppl(sym__2, z_1, term_g_7);
      t = q_6(z_1, f_0, t);
      v_1 = t;
      t = SSL_mkstemp(v_1);
      LocalPopChoice(f_7);
    }
  else
    {
      t = e_7;
      {
        ATerm a_2 = NULL;
        t = term_h_7;
        a_2 = t;
        t = SSL_perror(a_2);
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
static ATerm b_0 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL,f_2 = NULL,g_2 = NULL;
  t = P__tmpdir_0_0(t);
  f_2 = t;
  t = term_j_7;
  g_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, term_j_7);
  t = q_6(f_2, g_2, t);
  t = mkstemp_0_0(t);
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      c_2 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_k_7;
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, term_k_7);
  t = a_6(b_0, d_2, e_2, t);
  t = SSL_close(c_2);
  t = d_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm j_2 = NULL,k_2 = NULL;
  j_2 = t;
  t = xtc_new_file_0_0(t);
  k_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_2, term_t_6);
  t = open_file_0_0(t);
  t = j_2;
  {
    static ATerm h_0 (ATerm t)
    {
      ATerm a_3 = NULL;
      a_3 = t;
      {
        ATerm l_7 = t;
        int o_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_0 = NULL,p_0 = NULL;
            t = SSL_is_string(a_3);
            m_0 = t;
            t = (ATerm) ATinsert(ATempty, m_0);
            p_0 = t;
            t = SSL_print(k_2, p_0);
            t = m_0;
            LocalPopChoice(o_7);
          }
        else
          {
            t = l_7;
            t = a_3;
          }
      }
      return(t);
    }
    t = topdown_1_0(h_0, t);
  }
  t = SSL_close_file(k_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, k_2);
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm e_3 = NULL,h_3 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      h_3 = ATgetArgument(t, 0);
      e_3 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_7), e_3), term_r_7), h_3), term_p_7);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          h_3 = ATgetArgument(t, 0);
          e_3 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_7), e_3), term_r_7), h_3), term_t_7);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              h_3 = ATgetArgument(t, 0);
              e_3 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_7), e_3), term_r_7), h_3), term_v_7);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  h_3 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_7), h_3), term_w_7);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      h_3 = ATgetArgument(t, 0);
                      e_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_7), e_3), term_r_7), h_3), term_y_7);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          h_3 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_8), h_3), term_a_8);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              h_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), h_3), term_c_8);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  h_3 = ATgetArgument(t, 0);
                                  e_3 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_8), e_3), term_f_8), h_3), term_e_8);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      h_3 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_8), h_3), term_h_8);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_j_8;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_k_8;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_l_8;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_m_8;
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
ATerm bottomup_1_0 (ATerm b_74 (ATerm), ATerm t)
{
  static ATerm j_0 (ATerm t)
  {
    t = bottomup_1_0(b_74, t);
    return(t);
  }
  t = SRTS_all(j_0, t);
  t = b_74(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
  e_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = e_11;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_11 = ATgetFirst((ATermList) t);
          g_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_1 = NULL,j_1 = NULL,w_1 = NULL;
            t = SSLgetAnnotations(e_11);
            c_1 = t;
            t = f_11;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = g_11;
            t = flat_list_0_0(t);
            j_1 = t;
            t = (ATerm) ATinsert(CheckATermList(j_1), f_11);
            w_1 = t;
            t = SSLsetAnnotations(w_1, c_1);
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            {
              ATerm q_8 = t;
              int t_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_2 = NULL,s_2 = NULL,t_2 = NULL,w_2 = NULL,x_1 = NULL;
                  t = SSLgetAnnotations(e_11);
                  t_2 = t;
                  t = f_11;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = f_11;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm u_8 = ATgetFirst((ATermList) t);
                          ATerm v_8 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = f_11;
                    }
                  t = (ATerm) ATinsert(CheckATermList(g_11), f_11);
                  x_1 = t;
                  t = SSLsetAnnotations(x_1, t_2);
                  w_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      s_2 = ATgetFirst((ATermList) t);
                      {
                        ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = w_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_8 = ATgetFirst((ATermList) t);
                      r_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, s_2, r_2);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(t_8);
                }
              else
                {
                  t = q_8;
                  {
                    ATerm r_3 = NULL,b_4 = NULL,y_1 = NULL;
                    t = SSLgetAnnotations(e_11);
                    r_3 = t;
                    t = g_11;
                    t = flat_list_0_0(t);
                    b_4 = t;
                    t = (ATerm) ATinsert(CheckATermList(b_4), f_11);
                    y_1 = t;
                    t = SSLsetAnnotations(y_1, r_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm e_75 (ATerm), ATerm t)
{
  static ATerm q_11 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_75(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        t = SRTS_one(q_11, t);
      }
    return(t);
  }
  t = q_11(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm a_12 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm f_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(f_9) != AT_INT) || (ATgetInt((ATermInt) f_9) != 34)))
        _fail(t);
      a_12 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(a_12), term_g_9), term_g_9);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm r_11 = NULL,v_11 = NULL,w_11 = NULL,y_11 = NULL,z_11 = NULL,n_2 = NULL;
  z_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_11 = ATgetFirst((ATermList) t);
      y_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_11);
  v_11 = t;
  t = w_11;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(y_11), w_11);
  n_2 = t;
  t = SSLsetAnnotations(n_2, v_11);
  t = y_11;
  t = oncetd_1_0(q_0, t);
  r_11 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(r_11), term_i_9), term_i_9);
  return(t);
}
ATerm listtd_1_0 (ATerm w_81 (ATerm), ATerm t)
{
  static ATerm h_13 (ATerm t)
  {
    ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
    t = w_81(t);
    e_13 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = e_13;
      }
    else
      {
        ATerm d_5 = NULL,v_5 = NULL,c_3 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            f_13 = ATgetFirst((ATermList) t);
            g_13 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(e_13);
        d_5 = t;
        t = g_13;
        t = h_13(t);
        v_5 = t;
        t = (ATerm) ATinsert(CheckATermList(v_5), f_13);
        c_3 = t;
        t = SSLsetAnnotations(c_3, d_5);
      }
    return(t);
  }
  t = h_13(t);
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm k_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = k_9;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm b_14 = NULL;
  b_14 = t;
  if(match_int(t, 32))
    {
      ATerm p_9 = t;
      int q_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_6 = NULL;
          t = term_k_8;
          p_6 = t;
          t = SSL_explode_string(p_6);
          LocalPopChoice(q_9);
        }
      else
        {
          t = p_9;
          t = b_14;
        }
    }
  else
    {
      if(match_int(t, 38))
        {
          ATerm t_9 = t;
          int u_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_6 = NULL;
              t = term_v_9;
              x_6 = t;
              t = SSL_explode_string(x_6);
              LocalPopChoice(u_9);
            }
          else
            {
              t = t_9;
              t = b_14;
            }
        }
      else
        {
          if(match_int(t, 60))
            {
              ATerm w_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_6 = NULL;
                  t = term_a_10;
                  y_6 = t;
                  t = SSL_explode_string(y_6);
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = w_9;
                  t = b_14;
                }
            }
          else
            {
              if(match_int(t, 62))
                {
                  ATerm b_10 = t;
                  int d_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_6 = NULL;
                      t = term_g_10;
                      z_6 = t;
                      t = SSL_explode_string(z_6);
                      LocalPopChoice(d_10);
                    }
                  else
                    {
                      t = b_10;
                      t = b_14;
                    }
                }
              else
                {
                  t = b_14;
                }
            }
        }
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm r_13 = NULL,s_13 = NULL;
  s_13 = t;
  t = SSL_explode_string(s_13);
  t = listtd_1_0(r_0, t);
  t = map_1_0(t_0, t);
  t = flat_list_0_0(t);
  r_13 = t;
  t = SSL_implode_string(r_13);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm i_104 (ATerm), ATerm t)
{
  static ATerm c_18 (ATerm t)
  {
    ATerm d_17 = NULL,f_17 = NULL,g_17 = NULL;
    g_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_17 = ATgetFirst((ATermList) t);
        f_17 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_10 = t;
          int i_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_7 = NULL,n_7 = NULL,q_7 = NULL,a_9 = NULL;
              t = SSLgetAnnotations(g_17);
              n_7 = t;
              t = d_17;
              t = i_104(t);
              q_7 = t;
              t = (ATerm) ATinsert(CheckATermList(f_17), q_7);
              a_9 = t;
              t = SSLsetAnnotations(a_9, n_7);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm k_10 = ATgetFirst((ATermList) t);
                  m_7 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_7;
              t = c_18(t);
              LocalPopChoice(i_10);
            }
          else
            {
              t = h_10;
              t = g_17;
            }
        }
      }
    else
      {
        t = g_17;
      }
    return(t);
  }
  t = c_18(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm s_8 = NULL;
  s_8 = t;
  if(match_int(t, 9))
    {
      t = s_8;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = s_8;
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm e_9 = NULL;
  e_9 = t;
  if(match_int(t, 9))
    {
      t = e_9;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = e_9;
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
static ATerm f_1 (ATerm t)
{
  ATerm n_21 = NULL;
  n_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_l_10), n_21);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL;
  v_18 = t;
  t = SSL_explode_string(v_18);
  t = reverse_acc_2_0(_id, v_0, t);
  u_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_18, (ATerm) ATempty);
  {
    static ATerm r_21 (ATerm t)
    {
      ATerm u_20 = NULL,v_20 = NULL,w_20 = NULL,z_20 = NULL;
      if(match_cons(t, sym__2))
        {
          u_20 = ATgetArgument(t, 0);
          z_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = u_20;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm p_8 = NULL,r_8 = NULL;
          t = z_20;
          t = remove_trailing_1_0(x_0, t);
          r_8 = t;
          t = SSL_implode_string(r_8);
          p_8 = t;
          t = (ATerm) ATinsert(ATempty, p_8);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_20 = ATgetFirst((ATermList) t);
              w_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = v_20;
          if(match_int(t, 10))
            {
              ATerm o_10 = t;
              int p_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
                  t = z_20;
                  t = remove_trailing_1_0(y_0, t);
                  d_9 = t;
                  t = SSL_implode_string(d_9);
                  b_9 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_20, (ATerm) ATempty);
                  t = r_21(t);
                  c_9 = t;
                  t = (ATerm) ATinsert(CheckATermList(c_9), b_9);
                  LocalPopChoice(p_10);
                }
              else
                {
                  t = o_10;
                  t = (ATerm) ATmakeAppl(sym__2, w_20, (ATerm) ATinsert(CheckATermList(z_20), v_20));
                  t = r_21(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, w_20, (ATerm) ATinsert(CheckATermList(z_20), v_20));
              t = r_21(t);
            }
        }
      return(t);
    }
    t = r_21(t);
  }
  t = remove_trailing_1_0(a_1, t);
  t = reverse_acc_2_0(_id, b_1, t);
  t = remove_trailing_1_0(d_1, t);
  t = map_1_0(f_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm v_21 = NULL;
  v_21 = t;
  t = (ATerm) ATinsert(ATempty, v_21);
  return(t);
}
ATerm sep_by_1_0 (ATerm d_72 (ATerm), ATerm t)
{
  ATerm h_9 = NULL,r_9 = NULL;
  t = map_1_0(n_1, t);
  r_9 = t;
  t = term_k_7;
  t = d_72(t);
  h_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_9, r_9);
  t = d_6(h_9, r_9, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm x_87 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL,p_22 = NULL;
  m_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_22 = ATgetFirst((ATermList) t);
          p_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_9 = NULL,e_10 = NULL,f_10 = NULL,j_9 = NULL;
            t = SSLgetAnnotations(m_22);
            x_9 = t;
            t = o_22;
            t = x_87(t);
            e_10 = t;
            t = p_22;
            t = filter_1_0(x_87, t);
            f_10 = t;
            t = (ATerm) ATinsert(CheckATermList(f_10), e_10);
            j_9 = t;
            t = SSLsetAnnotations(j_9, x_9);
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            t = p_22;
            t = filter_1_0(x_87, t);
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
  ATerm v_22 = NULL;
  ATerm t_10 = t;
  int w_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(o_1, t);
      LocalPopChoice(w_10);
    }
  else
    {
      t = t_10;
      t = term_x_10;
    }
  v_22 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, v_22, term_y_10);
      t = copy_0_0(t);
    }
  return(t);
}
static ATerm d_6 (ATerm b_20, ATerm c_20, ATerm t)
{
  ATerm c_24 = NULL,f_24 = NULL;
  t = c_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_20;
    }
  else
    {
      ATerm z_10 = NULL,d_11 = NULL,l_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_24 = ATgetFirst((ATermList) t);
          f_24 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(c_20);
      z_10 = t;
      t = f_24;
      {
        static ATerm m_11 (ATerm t)
        {
          ATerm b_11 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_11 = NULL;
              h_11 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = h_11;
              LocalPopChoice(c_11);
            }
          else
            {
              t = b_11;
              {
                ATerm i_11 = NULL;
                t = Cons_2_0(_id, m_11, t);
                i_11 = t;
                t = (ATerm) ATinsert(CheckATermList(i_11), b_20);
              }
            }
          return(t);
        }
        t = m_11(t);
      }
      d_11 = t;
      t = (ATerm) ATinsert(CheckATermList(d_11), c_24);
      l_9 = t;
      t = SSLsetAnnotations(l_9, z_10);
    }
  return(t);
}
ATerm tov_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  ATerm s_24 = NULL,f_26 = NULL,g_26 = NULL,h_26 = NULL;
  h_26 = t;
  if(match_cons(t, sym_L_2))
    {
      f_26 = ATgetArgument(t, 0);
      g_26 = ATgetArgument(t, 1);
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_12 = NULL,n_9 = NULL;
            t = SSLgetAnnotations(h_26);
            c_12 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, f_26, g_26);
            n_9 = t;
            t = SSLsetAnnotations(n_9, c_12);
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            {
              ATerm i_26 = NULL;
              t = term_k_7;
              t = c_72(t);
              i_26 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_l_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_26))), i_26))));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_LNAT_2))
        {
          f_26 = ATgetArgument(t, 0);
          g_26 = ATgetArgument(t, 1);
          {
            ATerm n_11 = t;
            int s_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_12 = NULL,o_9 = NULL;
                t = SSLgetAnnotations(h_26);
                p_12 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, f_26, g_26);
                o_9 = t;
                t = SSLsetAnnotations(o_9, p_12);
                LocalPopChoice(s_11);
              }
            else
              {
                t = n_11;
                {
                  ATerm j_26 = NULL;
                  t = term_k_7;
                  t = c_72(t);
                  j_26 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_l_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_26))), j_26))));
                }
              }
          }
        }
      else
        {
          ATerm k_26 = NULL;
          t = term_k_7;
          t = c_72(t);
          k_26 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_l_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, h_26))), k_26))));
        }
    }
  s_24 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_l_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, s_24))));
  return(t);
}
static ATerm u_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm q_26 = NULL;
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(u_1, t);
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      t = term_x_11;
    }
  q_26 = t;
  if(match_int(t, 0))
    {
      t = term_b_12;
    }
  else
    {
      ATerm u_26 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, q_26, term_y_10);
      t = copy_0_0(t);
      u_26 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, u_26);
    }
  return(t);
}
static ATerm e_6 (ATerm r_37, ATerm s_37, ATerm t)
{
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(r_37, s_37);
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      t = SSL_subtr(r_37, s_37);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm r_73 (ATerm), ATerm s_73 (ATerm), ATerm t)
{
  static ATerm y_26 (ATerm t)
  {
    ATerm f_12 = t;
    int g_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_73(t);
        LocalPopChoice(g_12);
      }
    else
      {
        t = f_12;
        t = s_73(t);
        t = y_26(t);
      }
    return(t);
  }
  t = y_26(t);
  return(t);
}
ATerm for_3_0 (ATerm u_73 (ATerm), ATerm v_73 (ATerm), ATerm w_73 (ATerm), ATerm t)
{
  t = u_73(t);
  t = while_not_2_0(v_73, w_73, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL;
  if(match_cons(t, sym__2))
    {
      e_27 = ATgetArgument(t, 0);
      f_27 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, e_27, f_27, (ATerm) ATempty);
  return(t);
}
static ATerm h_2 (ATerm t)
{
  ATerm i_27 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm h_12 = ATgetArgument(t, 0);
      if(((ATgetType(h_12) != AT_INT) || (ATgetInt((ATermInt) h_12) != 0)))
        _fail(t);
      {
        ATerm i_12 = ATgetArgument(t, 1);
      }
      i_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_27;
  return(t);
}
static ATerm i_2 (ATerm t)
{
  ATerm j_27 = NULL,n_27 = NULL,o_27 = NULL,q_27 = NULL,v_27 = NULL;
  if(match_cons(t, sym__3))
    {
      j_27 = ATgetArgument(t, 0);
      n_27 = ATgetArgument(t, 1);
      o_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_27, term_x_10);
  t = geq_0_0(t);
  t = term_x_10;
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_27, term_x_10);
  t = e_6(j_27, v_27, t);
  q_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, q_27, n_27, (ATerm) ATinsert(CheckATermList(o_27), n_27));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(b_2, h_2, i_2, t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm l_104 (ATerm), ATerm t)
{
  ATerm x_27 = NULL;
  static ATerm l_2 (ATerm t)
  {
    ATerm y_27 = NULL,z_27 = NULL,a_28 = NULL,b_28 = NULL,c_28 = NULL,s_9 = NULL;
    c_28 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        z_27 = ATgetArgument(t, 0);
        a_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_28);
    y_27 = t;
    t = z_27;
    t = l_104(t);
    b_28 = t;
    t = a_28;
    if(((x_27 != NULL) && (x_27 != t)))
      _fail(t);
    else
      x_27 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, b_28, a_28);
    s_9 = t;
    t = SSLsetAnnotations(s_9, y_27);
    return(t);
  }
  t = fetch_1_0(l_2, t);
  t = SSL_string_to_int(not_null(x_27));
  return(t);
}
static ATerm m_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm e_28 = NULL;
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(m_2, t);
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = term_x_11;
    }
  e_28 = t;
  if(match_int(t, 0))
    {
      t = term_b_12;
    }
  else
    {
      ATerm h_28 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, e_28, term_l_10);
      t = copy_0_0(t);
      h_28 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, h_28)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm u_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      n_28 = ATgetArgument(t, 0);
      t = n_28;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          n_28 = ATgetArgument(t, 0);
          t = n_28;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              n_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = n_28;
        }
    }
  t = Hspace_0_0(t);
  u_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_28;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, u_28);
    }
  return(t);
}
static ATerm f_6 (ATerm f_72 (ATerm), ATerm n_17, ATerm t)
{
  ATerm f_30 = NULL,l_30 = NULL;
  t = term_k_7;
  t = f_72(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      f_30 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_17, f_30);
  {
    static ATerm f_33 (ATerm t)
    {
      static ATerm g_33 (ATerm m_30, ATerm n_30, ATerm o_30, ATerm p_30, ATerm q_30, ATerm t)
      {
        ATerm a_31 = NULL,b_31 = NULL,c_31 = NULL;
        t = p_30;
        {
          ATerm l_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm n_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(m_12);
              t = term_q_12;
            }
          else
            {
              t = l_12;
              {
                ATerm r_12 = t;
                int s_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm t_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(s_12);
                    t = term_u_12;
                  }
                else
                  {
                    t = r_12;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm w_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_x_12;
                  }
              }
            }
        }
        a_31 = t;
        t = p_30;
        t = make_hs_0_0(t);
        b_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(o_30), n_30), q_30);
        t = f_33(t);
        c_31 = t;
        t = (ATerm) ATinsert(ATinsert(CheckATermList(c_31), b_31), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, a_31), m_30));
        return(t);
      }
      static ATerm h_33 (ATerm f_31, ATerm g_31, ATerm h_31, ATerm i_31, ATerm t)
      {
        ATerm p_31 = NULL,q_31 = NULL;
        t = h_31;
        {
          ATerm y_12 = t;
          int b_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm c_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(b_13);
              t = term_q_12;
            }
          else
            {
              t = y_12;
              {
                ATerm i_13 = t;
                int k_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm m_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(k_13);
                    t = term_u_12;
                  }
                else
                  {
                    t = i_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm o_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_x_12;
                  }
              }
            }
        }
        p_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, g_31, i_31);
        t = f_33(t);
        q_31 = t;
        t = (ATerm) ATinsert(CheckATermList(q_31), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, p_31), f_31));
        return(t);
      }
      ATerm t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
      if(match_cons(t, sym__2))
        {
          y_31 = ATgetArgument(t, 0);
          b_32 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = y_31;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              z_31 = ATgetFirst((ATermList) t);
              a_32 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = b_32;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              c_32 = ATgetFirst((ATermList) t);
              d_32 = (ATerm) ATgetNext((ATermList) t);
              t = a_32;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  v_31 = ATgetFirst((ATermList) t);
                  w_31 = (ATerm) ATgetNext((ATermList) t);
                  t = z_31;
                  if(match_cons(t, sym_C_2))
                    {
                      t_31 = ATgetArgument(t, 0);
                      u_31 = ATgetArgument(t, 1);
                      {
                        ATerm p_13 = t;
                        int q_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_32 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
                            t = f_33(t);
                            q_32 = t;
                            t = (ATerm) ATinsert(CheckATermList(q_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, t_31, u_31))));
                            LocalPopChoice(q_13);
                          }
                        else
                          {
                            t = p_13;
                            {
                              ATerm t_13 = t;
                              int u_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = g_33(z_31, v_31, w_31, c_32, d_32, t);
                                  LocalPopChoice(u_13);
                                }
                              else
                                {
                                  t = t_13;
                                  t = h_33(z_31, a_32, c_32, d_32, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm w_13 = t;
                      int x_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_33(z_31, v_31, w_31, c_32, d_32, t);
                          LocalPopChoice(x_13);
                        }
                      else
                        {
                          t = w_13;
                          t = h_33(z_31, a_32, c_32, d_32, t);
                        }
                    }
                }
              else
                {
                  t = z_31;
                  if(match_cons(t, sym_C_2))
                    {
                      t_31 = ATgetArgument(t, 0);
                      u_31 = ATgetArgument(t, 1);
                      {
                        ATerm y_13 = t;
                        int z_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_32 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
                            t = f_33(t);
                            x_32 = t;
                            t = (ATerm) ATinsert(CheckATermList(x_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, t_31, u_31))));
                            LocalPopChoice(z_13);
                          }
                        else
                          {
                            t = y_13;
                            t = h_33(z_31, a_32, c_32, d_32, t);
                          }
                      }
                    }
                  else
                    {
                      t = h_33(z_31, a_32, c_32, d_32, t);
                    }
                }
            }
          else
            {
              ATerm e_33 = NULL;
              t = z_31;
              if(match_cons(t, sym_C_2))
                {
                  t_31 = ATgetArgument(t, 0);
                  u_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, a_32, b_32);
              t = f_33(t);
              e_33 = t;
              t = (ATerm) ATinsert(CheckATermList(e_33), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, t_31, u_31))));
            }
        }
      return(t);
    }
    t = f_33(t);
  }
  l_30 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_l_11), (ATerm) ATinsert(ATempty, l_30));
  return(t);
}
static ATerm o_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm p_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_2 (ATerm t)
{
  ATerm a_14 = t;
  if((PushChoice() == 0))
    {
      ATerm d_35 = NULL,e_35 = NULL,f_35 = NULL,g_35 = NULL,y_9 = NULL;
      g_35 = t;
      if(match_cons(t, sym_R_2))
        {
          e_35 = ATgetArgument(t, 0);
          f_35 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(g_35);
      d_35 = t;
      t = f_35;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, e_35, f_35);
      y_9 = t;
      t = SSLsetAnnotations(y_9, d_35);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_14;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_33, (ATerm) ATempty);
  {
    static ATerm h_35 (ATerm t)
    {
      ATerm q_33 = NULL,r_33 = NULL,t_33 = NULL,u_33 = NULL,y_33 = NULL,z_33 = NULL;
      if(match_cons(t, sym__2))
        {
          t_33 = ATgetArgument(t, 0);
          z_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = t_33;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm f_34 = NULL;
          t = z_33;
          t = reverse_acc_2_0(_id, o_2, t);
          f_34 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, f_34));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_33 = ATgetFirst((ATermList) t);
              y_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_33;
          if(match_cons(t, sym_R_2))
            {
              q_33 = ATgetArgument(t, 0);
              r_33 = ATgetArgument(t, 1);
              {
                ATerm c_14 = t;
                int d_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_34 = NULL,o_34 = NULL;
                    t = z_33;
                    t = reverse_acc_2_0(_id, p_2, t);
                    n_34 = t;
                    t = (ATerm) ATmakeAppl(sym__2, y_33, (ATerm) ATempty);
                    t = h_35(t);
                    o_34 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(o_34), (ATerm) ATmakeAppl(sym_R_2, q_33, r_33)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, n_34));
                    LocalPopChoice(d_14);
                  }
                else
                  {
                    t = c_14;
                    t = (ATerm) ATmakeAppl(sym__2, y_33, (ATerm) ATinsert(CheckATermList(z_33), u_33));
                    t = h_35(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, y_33, (ATerm) ATinsert(CheckATermList(z_33), u_33));
              t = h_35(t);
            }
        }
      return(t);
    }
    t = h_35(t);
  }
  t = filter_1_0(q_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm e_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_14;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_14);
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm h_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = h_14;
    }
  return(t);
}
static ATerm b_3 (ATerm t)
{
  ATerm i_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_14;
    }
  return(t);
}
static ATerm d_3 (ATerm t)
{
  t = term_b_12;
  return(t);
}
static ATerm i_3 (ATerm t)
{
  ATerm j_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_14;
    }
  return(t);
}
static ATerm k_3 (ATerm t)
{
  ATerm o_37 = NULL;
  if(match_cons(t, sym_S_1))
    {
      o_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = o_37;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL,u_36 = NULL;
  t_36 = t;
  if(match_cons(t, sym_REF_2))
    {
      u_36 = ATgetArgument(t, 0);
      s_36 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, u_36, s_36);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          u_36 = ATgetArgument(t, 0);
          s_36 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, s_36), (ATerm) ATmakeAppl(sym_ANCHOR_1, u_36));
        }
      else
        {
          ATerm l_14 = t;
          int m_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm n_14 = ATgetArgument(t, 0);
                  ATerm o_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(m_14);
              t = term_p_14;
            }
          else
            {
              t = l_14;
              {
                ATerm q_14 = t;
                int r_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm t_14 = ATgetArgument(t, 0);
                        ATerm u_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_14);
                    t = term_p_14;
                  }
                else
                  {
                    t = q_14;
                    {
                      ATerm v_14 = t;
                      int w_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              u_36 = ATgetArgument(t, 0);
                              {
                                ATerm x_14 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(w_14);
                          t = u_36;
                        }
                      else
                        {
                          t = v_14;
                          if(match_cons(t, sym_A_3))
                            {
                              u_36 = ATgetArgument(t, 0);
                              s_36 = ATgetArgument(t, 1);
                              r_36 = ATgetArgument(t, 2);
                              {
                                ATerm c_37 = NULL,e_37 = NULL,f_37 = NULL,n_13 = NULL;
                                t = r_36;
                                t = construct_rows_0_0(t);
                                c_37 = t;
                                t = s_36;
                                t = Vspace_0_0(t);
                                e_37 = t;
                                t = c_37;
                                {
                                  static ATerm u_2 (ATerm t)
                                  {
                                    ATerm g_37 = NULL;
                                    static ATerm v_2 (ATerm t)
                                    {
                                      t = u_36;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm y_14 = ATgetArgument(t, 0);
                                        if(((ATgetType(y_14) != AT_LIST) || !(ATisEmpty(y_14))))
                                          _fail(t);
                                        g_37 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = f_6(v_2, g_37, t);
                                    return(t);
                                  }
                                  t = map_1_0(u_2, t);
                                }
                                n_13 = t;
                                t = (ATerm) ATmakeAppl(sym__2, e_37, n_13);
                                t = d_6(e_37, n_13, t);
                                f_37 = t;
                                t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, f_37)))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  u_36 = ATgetArgument(t, 0);
                                  s_36 = ATgetArgument(t, 1);
                                  {
                                    ATerm f_14 = NULL;
                                    t = u_36;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm z_14 = t;
                                      int b_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = s_36;
                                          t = filter_1_0(x_2, t);
                                          LocalPopChoice(b_15);
                                        }
                                      else
                                        {
                                          t = z_14;
                                          {
                                            ATerm k_14 = NULL,s_14 = NULL;
                                            t = at_last_1_0(y_2, t);
                                            f_14 = t;
                                            t = s_36;
                                            t = filter_1_0(z_2, t);
                                            s_14 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, f_14, s_14);
                                            t = d_6(f_14, s_14, t);
                                            k_14 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, k_14), term_d_15);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      u_36 = ATgetArgument(t, 0);
                                      s_36 = ATgetArgument(t, 1);
                                      {
                                        ATerm a_15 = NULL,c_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,t_15 = NULL,c_10 = NULL;
                                        t = u_36;
                                        t = Vspace_0_0(t);
                                        c_15 = t;
                                        t = u_36;
                                        t = Ispace_0_0(t);
                                        a_15 = t;
                                        t = s_36;
                                        t = filter_1_0(b_3, t);
                                        l_15 = t;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            g_15 = ATgetFirst((ATermList) t);
                                            i_15 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(l_15);
                                        f_15 = t;
                                        t = g_15;
                                        t = tov_1_0(d_3, t);
                                        j_15 = t;
                                        t = i_15;
                                        {
                                          static ATerm f_3 (ATerm t)
                                          {
                                            static ATerm g_3 (ATerm t)
                                            {
                                              t = a_15;
                                              return(t);
                                            }
                                            t = tov_1_0(g_3, t);
                                            return(t);
                                          }
                                          t = map_1_0(f_3, t);
                                        }
                                        k_15 = t;
                                        t = (ATerm) ATinsert(CheckATermList(k_15), j_15);
                                        c_10 = t;
                                        t = SSLsetAnnotations(c_10, f_15);
                                        t_15 = t;
                                        t = (ATerm) ATmakeAppl(sym__2, c_15, t_15);
                                        t = d_6(c_15, t_15, t);
                                        e_15 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, e_15)), term_d_15);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          u_36 = ATgetArgument(t, 0);
                                          s_36 = ATgetArgument(t, 1);
                                          {
                                            ATerm j_37 = NULL;
                                            static ATerm j_3 (ATerm t)
                                            {
                                              t = not_null(j_37);
                                              return(t);
                                            }
                                            t = u_36;
                                            t = Hspace_0_0(t);
                                            if(((j_37 != NULL) && (j_37 != t)))
                                              _fail(t);
                                            else
                                              j_37 = t;
                                            t = s_36;
                                            t = filter_1_0(i_3, t);
                                            t = sep_by_1_0(j_3, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              u_36 = ATgetArgument(t, 0);
                                              s_36 = ATgetArgument(t, 1);
                                              t = u_36;
                                              {
                                                ATerm h_15 = t;
                                                int m_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_n_15), (ATerm) ATinsert(ATempty, s_36));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_o_15), (ATerm) ATinsert(ATempty, s_36));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_q_15), (ATerm) ATinsert(ATempty, s_36));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_r_15), (ATerm) ATinsert(ATempty, s_36));
                                                              }
                                                          }
                                                      }
                                                    LocalPopChoice(m_15);
                                                  }
                                                else
                                                  {
                                                    t = h_15;
                                                    t = s_36;
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  u_36 = ATgetArgument(t, 0);
                                                  s_36 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm n_37 = NULL;
                                                    t = u_36;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = s_36;
                                                    t = map_1_0(k_3, t);
                                                    n_37 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_s_15), (ATerm) ATinsert(ATempty, n_37)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      u_36 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = u_36;
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
ATerm topdown_1_0 (ATerm a_74 (ATerm), ATerm t)
{
  static ATerm l_3 (ATerm t)
  {
    t = topdown_1_0(a_74, t);
    return(t);
  }
  t = a_74(t);
  t = SRTS_all(l_3, t);
  return(t);
}
ATerm at_end_1_0 (ATerm d_81 (ATerm), ATerm t)
{
  static ATerm p_38 (ATerm t)
  {
    ATerm m_38 = NULL,n_38 = NULL,o_38 = NULL;
    o_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        m_38 = ATgetFirst((ATermList) t);
        n_38 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_16 = NULL,n_16 = NULL,j_10 = NULL;
          t = SSLgetAnnotations(o_38);
          j_16 = t;
          t = n_38;
          t = p_38(t);
          n_16 = t;
          t = (ATerm) ATinsert(CheckATermList(n_16), m_38);
          j_10 = t;
          t = SSLsetAnnotations(j_10, j_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = o_38;
        t = d_81(t);
      }
    return(t);
  }
  t = p_38(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  w_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_37;
    }
  else
    {
      static ATerm m_3 (ATerm t)
      {
        t = not_null(y_37);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_37 = ATgetFirst((ATermList) t);
          if(((y_37 != NULL) && (y_37 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            y_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = x_37;
      t = at_end_1_0(m_3, t);
    }
  return(t);
}
static ATerm m_39 (ATerm e_39, ATerm t)
{
  ATerm f_39 = NULL;
  t = SSL_explode_term(e_39);
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      f_39 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_39;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm h_39 = NULL,i_39 = NULL,j_39 = NULL;
  j_39 = t;
  if(match_cons(t, sym__2))
    {
      h_39 = ATgetArgument(t, 0);
      i_39 = ATgetArgument(t, 1);
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm n_3 (ATerm t)
            {
              t = i_39;
              return(t);
            }
            t = h_39;
            t = at_end_1_0(n_3, t);
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = m_39(j_39, t);
          }
      }
    }
  else
    {
      t = m_39(j_39, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm o_81 (ATerm), ATerm t)
{
  static ATerm i_40 (ATerm t)
  {
    ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
    f_40 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_40 = ATgetFirst((ATermList) t);
        h_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_16 = NULL,m_10 = NULL;
          t = SSLgetAnnotations(f_40);
          x_16 = t;
          t = h_40;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(h_40), g_40);
          m_10 = t;
          t = SSLsetAnnotations(m_10, x_16);
          t = o_81(t);
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          {
            ATerm m_17 = NULL,q_17 = NULL,n_10 = NULL;
            t = SSLgetAnnotations(f_40);
            m_17 = t;
            t = h_40;
            t = i_40(t);
            q_17 = t;
            t = (ATerm) ATinsert(CheckATermList(q_17), g_40);
            n_10 = t;
            t = SSLsetAnnotations(n_10, m_17);
          }
        }
    }
    return(t);
  }
  t = i_40(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm h_81 (ATerm), ATerm t)
{
  static ATerm a_41 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_81(t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        {
          ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,y_17 = NULL,b_18 = NULL,s_10 = NULL;
          x_40 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              y_40 = ATgetFirst((ATermList) t);
              z_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(x_40);
          y_17 = t;
          t = z_40;
          t = a_41(t);
          b_18 = t;
          t = (ATerm) ATinsert(CheckATermList(b_18), y_40);
          s_10 = t;
          t = SSLsetAnnotations(s_10, y_17);
        }
      }
    return(t);
  }
  t = a_41(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm z_80 (ATerm), ATerm t)
{
  ATerm c_41 = NULL,d_41 = NULL;
  static ATerm o_3 (ATerm t)
  {
    ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL,m_41 = NULL,v_10 = NULL,u_10 = NULL;
    m_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        i_41 = ATgetFirst((ATermList) t);
        j_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(m_41);
    h_41 = t;
    t = i_41;
    t = z_80(t);
    k_41 = t;
    t = (ATerm) ATinsert(CheckATermList(j_41), k_41);
    u_10 = t;
    t = SSLsetAnnotations(u_10, h_41);
    l_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_41 = ATgetFirst((ATermList) t);
        g_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(l_41);
    e_41 = t;
    t = g_41;
    if(((c_41 != NULL) && (c_41 != t)))
      _fail(t);
    else
      c_41 = t;
    t = (ATerm) ATinsert(CheckATermList(g_41), f_41);
    v_10 = t;
    t = SSLsetAnnotations(v_10, e_41);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(o_3, t);
  d_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_41, not_null(c_41));
  return(t);
}
static ATerm g_6 (ATerm u_15, ATerm p_15, ATerm t)
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
  t = p_15;
  {
    static ATerm p_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((r_41 != NULL) && (r_41 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            r_41 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
            if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
              {
                if(((n_41 != NULL) && (n_41 != ATgetFirst((ATermList) c_16))))
                  _fail(ATgetFirst((ATermList) c_16));
                else
                  n_41 = ATgetFirst((ATermList) c_16);
                if(((o_41 != NULL) && (o_41 != (ATerm) ATgetNext((ATermList) c_16))))
                  _fail((ATerm) ATgetNext((ATermList) c_16));
                else
                  o_41 = (ATerm) ATgetNext((ATermList) c_16);
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
      q_41 = ATgetArgument(t, 0);
      p_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_41;
  {
    ATerm d_16 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = d_16;
      }
  }
  t = (ATerm) ATinsert(CheckATermList(not_null(o_41)), not_null(n_41));
  {
    static ATerm q_3 (ATerm t)
    {
      ATerm u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,a_11 = NULL;
      x_41 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_41 = ATgetFirst((ATermList) t);
          w_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_41);
      u_41 = t;
      t = w_41;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(w_41), v_41);
      a_11 = t;
      t = SSLsetAnnotations(a_11, u_41);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, u_15, (ATerm) ATinsert(CheckATermList(p_41), v_41)));
      return(t);
    }
    t = at_last_1_0(q_3, t);
  }
  s_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(r_41), s_41)));
  t = conc_0_0(t);
  t_41 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, u_15, t_41);
  return(t);
}
static ATerm s_3 (ATerm t)
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL;
  i_42 = t;
  if(match_cons(t, sym_H_2))
    {
      g_42 = ATgetArgument(t, 0);
      h_42 = ATgetArgument(t, 1);
      t = h_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_42 = ATgetFirst((ATermList) t);
          f_42 = (ATerm) ATgetNext((ATermList) t);
          t = f_42;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = e_42;
            }
          else
            {
              ATerm e_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_42;
                  t = g_6(g_42, h_42, t);
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = e_16;
                  t = i_42;
                }
            }
        }
      else
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = i_42;
              t = g_6(g_42, h_42, t);
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
              t = i_42;
            }
        }
    }
  else
    {
      ATerm i_16 = t;
      int k_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_V_2))
            {
              ATerm l_16 = ATgetArgument(t, 0);
              h_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(k_16);
          t = h_42;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_42 = ATgetFirst((ATermList) t);
              f_42 = (ATerm) ATgetNext((ATermList) t);
              t = f_42;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = e_42;
                }
              else
                {
                  t = i_42;
                }
            }
          else
            {
              t = i_42;
            }
        }
      else
        {
          t = i_16;
          t = i_42;
        }
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(s_3, t);
  return(t);
}
static ATerm t_3 (ATerm t)
{
  ATerm m_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      LocalPopChoice(o_16);
    }
  else
    {
      t = m_16;
    }
  return(t);
}
static ATerm u_3 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Html2text_0_0(t);
      LocalPopChoice(q_16);
    }
  else
    {
      t = p_16;
    }
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm a_43 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(t_3, t);
  a_43 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, a_43)))));
  t = bottomup_1_0(u_3, t);
  return(t);
}
static ATerm s_43 (ATerm m_43, ATerm t)
{
  t = SSL_fclose(m_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_43 = NULL,q_43 = NULL;
  q_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      p_43 = ATgetArgument(t, 0);
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(p_43);
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            t = s_43(q_43, t);
          }
      }
    }
  else
    {
      t = s_43(q_43, t);
    }
  return(t);
}
static ATerm h_6 (ATerm t_19, ATerm t)
{
  t = SSL_read_term_from_stream(t_19);
  return(t);
}
static ATerm i_6 (ATerm r_34, ATerm s_34, ATerm t)
{
  ATerm t_43 = NULL;
  t = SSL_fopen(r_34, s_34);
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm u_43 = NULL;
  t = SSL_stdin_stream();
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm v_43 = NULL;
  t = SSL_stdout_stream();
  v_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, v_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm w_43 = NULL;
  t = SSL_stderr_stream();
  w_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, w_43);
  return(t);
}
static ATerm k_45 (ATerm c_44, ATerm t)
{
  ATerm d_44 = NULL;
  t = SSL_explode_term(c_44);
  if(match_cons(t, sym__2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_16 = ATgetArgument(t, 1);
        if(((ATgetType(u_16) == AT_LIST) && !(ATisEmpty(u_16))))
          {
            d_44 = ATgetFirst((ATermList) u_16);
            {
              ATerm v_16 = (ATerm) ATgetNext((ATermList) u_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = d_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = d_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = d_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = d_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm l_45 (ATerm g_44, ATerm h_44, ATerm k_44, ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL,q_44 = NULL,o_11 = NULL;
  t = SSLgetAnnotations(k_44);
  n_44 = t;
  t = g_44;
  if(match_cons(t, sym_Path_1))
    {
      q_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_44, h_44);
  o_11 = t;
  t = SSLsetAnnotations(o_11, n_44);
  if(match_cons(t, sym__2))
    {
      l_44 = ATgetArgument(t, 0);
      m_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(l_44, m_44, t);
  return(t);
}
static ATerm m_45 (ATerm x_44, ATerm y_44, ATerm z_44, ATerm t)
{
  ATerm a_45 = NULL,b_45 = NULL,c_45 = NULL,f_45 = NULL,p_11 = NULL;
  t = SSLgetAnnotations(z_44);
  c_45 = t;
  t = SSL_is_string(x_44);
  f_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_45, y_44);
  p_11 = t;
  t = SSLsetAnnotations(p_11, c_45);
  if(match_cons(t, sym__2))
    {
      a_45 = ATgetArgument(t, 0);
      b_45 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(a_45, b_45, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
  h_45 = t;
  if(match_cons(t, sym__2))
    {
      i_45 = ATgetArgument(t, 0);
      j_45 = ATgetArgument(t, 1);
      {
        ATerm w_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = k_45(h_45, t);
            LocalPopChoice(y_16);
          }
        else
          {
            t = w_16;
            {
              ATerm z_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_45(i_45, j_45, h_45, t);
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = z_16;
                  t = m_45(i_45, j_45, h_45, t);
                }
            }
          }
      }
    }
  else
    {
      t = k_45(h_45, t);
    }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm o_45 = NULL,p_45 = NULL,q_45 = NULL,v_45 = NULL;
  v_45 = t;
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, v_45, term_e_17);
        t = j_6(t);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        {
          ATerm q_18 = NULL,r_18 = NULL;
          t = term_h_17;
          r_18 = t;
          t = (ATerm) ATmakeAppl(sym__2, term_h_17, v_45);
          t = q_6(r_18, v_45, t);
          q_18 = t;
          t = SSL_perror(q_18);
          _fail(t);
        }
      }
  }
  p_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      q_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(q_45, t);
  o_45 = t;
  t = p_45;
  t = fclose_0_0(t);
  t = o_45;
  return(t);
}
static ATerm k_6 (ATerm i_34, ATerm j_34, ATerm t)
{
  t = SSL_access(i_34, j_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm a_46 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_i_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm c_46 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          a_46 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_j_17);
      c_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, a_46, (ATerm) ATinsert(ATempty, term_j_17));
      t = k_6(a_46, c_46, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm p_40, ATerm q_40, ATerm t)
{
  t = SSL_copy(p_40, q_40);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL;
  s_46 = t;
  if(match_cons(t, sym_FILE_1))
    {
      t_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_18 = NULL;
        t = s_46;
        t = o_0(t);
        y_18 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = y_18;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = y_18;
          }
        t = (ATerm) ATmakeAppl(sym__2, t_46, y_18);
        t = l_6(t_46, y_18, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, t_46);
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_19 = NULL;
              t = s_46;
              t = o_0(t);
              k_19 = t;
              {
                ATerm r_17 = t;
                if((PushChoice() == 0))
                  {
                    ATerm l_19 = NULL;
                    l_19 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = l_19;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = l_19;
                          }
                        else
                          {
                            t = l_19;
                            if((t_46 != t))
                              {
                                _fail(t);
                              }
                            t = l_19;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = r_17;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, t_46, k_19);
              t = l_6(t_46, k_19, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_46);
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              t = s_46;
              t = o_0(t);
              if((t_46 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, t_46);
            }
        }
      }
  }
  return(t);
}
static ATerm m_6 (ATerm n_49, ATerm o_49, ATerm t)
{
  ATerm x_46 = NULL,y_46 = NULL;
  y_46 = t;
  {
    ATerm s_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_49, o_49);
        t = r_6(n_49, o_49, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_17 = ATgetFirst((ATermList) t);
            x_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_17);
        t = SSL_table_put(n_49, o_49, x_46);
        t = (ATerm) ATmakeAppl(sym__3, n_49, o_49, x_46);
      }
    else
      {
        t = s_17;
        t = SSL_table_remove(n_49, o_49);
        t = (ATerm) ATmakeAppl(sym__2, n_49, o_49);
      }
  }
  t = y_46;
  return(t);
}
ATerm end_scope_1_0 (ATerm a_93 (ATerm), ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL,c_47 = NULL,d_47 = NULL;
  c_47 = t;
  t = a_93(t);
  b_47 = t;
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_47 = NULL;
        t = term_d_7;
        e_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, b_47, term_d_7);
        t = r_6(b_47, e_47, t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      a_47 = ATgetFirst((ATermList) t);
      z_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_d_7;
  d_47 = t;
  t = SSL_table_put(b_47, d_47, z_46);
  t = a_47;
  {
    static ATerm v_3 (ATerm t)
    {
      ATerm f_47 = NULL;
      f_47 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_47, f_47);
      t = m_6(b_47, f_47, t);
      return(t);
    }
    t = map_1_0(v_3, t);
  }
  t = c_47;
  return(t);
}
ATerm restore_always_2_0 (ATerm w_72 (ATerm), ATerm x_72 (ATerm), ATerm t)
{
  ATerm x_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = w_72(t);
      t = x_72(t);
      LocalPopChoice(z_17);
    }
  else
    {
      t = x_17;
      t = x_72(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm z_92 (ATerm), ATerm t)
{
  ATerm h_47 = NULL,i_47 = NULL,j_47 = NULL,k_47 = NULL,l_47 = NULL;
  i_47 = t;
  t = z_92(t);
  h_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_47, term_d_7);
  {
    ATerm a_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm e_18 = ATgetArgument(t, 0);
            ATerm f_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_d_7;
        p_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, h_47, term_d_7);
        t = r_6(h_47, p_47, t);
        LocalPopChoice(d_18);
      }
    else
      {
        t = a_18;
        t = (ATerm) ATempty;
      }
  }
  j_47 = t;
  t = term_d_7;
  k_47 = t;
  t = (ATerm) ATinsert(CheckATermList(j_47), (ATerm) ATempty);
  l_47 = t;
  t = SSL_table_put(h_47, k_47, l_47);
  t = i_47;
  return(t);
}
static ATerm w_3 (ATerm t)
{
  t = term_i_7;
  return(t);
}
static ATerm y_3 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(y_47);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        t = y_47;
      }
  }
  return(t);
}
static ATerm z_3 (ATerm t)
{
  t = term_i_7;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm g_105 (ATerm), ATerm t)
{
  ATerm s_47 = NULL;
  static ATerm x_3 (ATerm t)
  {
    ATerm t_47 = NULL;
    t_47 = t;
    {
      ATerm i_18 = t;
      int j_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_47 = NULL,v_47 = NULL;
          t = term_i_7;
          u_47 = t;
          t = term_d_7;
          v_47 = t;
          t = term_k_18;
          t = r_6(u_47, v_47, t);
          LocalPopChoice(j_18);
        }
      else
        {
          t = i_18;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((s_47 != NULL) && (s_47 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          s_47 = ATgetFirst((ATermList) t);
        {
          ATerm l_18 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = s_47;
    t = map_1_0(y_3, t);
    t = t_47;
    t = end_scope_1_0(z_3, t);
    return(t);
  }
  t = begin_scope_1_0(w_3, t);
  t = restore_always_2_0(g_105, x_3, t);
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_18;
      t = get_config_0_0(t);
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      t = term_p_18;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm h_105 (ATerm), ATerm t)
{
  static ATerm a_4 (ATerm t)
  {
    ATerm s_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_48 = NULL;
        t = term_w_18;
        t = get_config_0_0(t);
        b_48 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, b_48);
        LocalPopChoice(t_18);
      }
    else
      {
        t = s_18;
        t = term_i_17;
      }
    t = h_105(t);
    t = copy_to_1_0(c_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(a_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL,f_48 = NULL,g_48 = NULL;
  c_48 = t;
  t = term_k_7;
  t = whoami_0_0(t);
  d_48 = t;
  t = term_x_18;
  f_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_19), d_48), term_z_18);
  g_48 = t;
  t = SSL_printnl(f_48, g_48);
  t = term_x_10;
  e_48 = t;
  t = SSL_exit(e_48);
  t = c_48;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  ATerm i_48 = NULL;
  i_48 = t;
  if(match_string(t, "-k"))
    {
      t = i_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = i_48;
    }
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm j_48 = NULL,k_48 = NULL,l_48 = NULL;
  j_48 = t;
  t = SSL_string_to_int(j_48);
  k_48 = t;
  t = term_b_19;
  l_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_b_19, k_48);
  t = u_6(l_48, k_48, t);
  t = j_48;
  return(t);
}
static ATerm f_4 (ATerm t)
{
  t = term_c_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(d_4, e_4, f_4, t);
  return(t);
}
static ATerm g_4 (ATerm t)
{
  ATerm n_48 = NULL;
  n_48 = t;
  if(match_string(t, "-S"))
    {
      t = n_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = n_48;
    }
  return(t);
}
static ATerm h_4 (ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL;
  t = term_d_19;
  o_48 = t;
  t = term_x_11;
  p_48 = t;
  t = term_e_19;
  t = u_6(o_48, p_48, t);
  t = term_f_19;
  return(t);
}
static ATerm i_4 (ATerm t)
{
  t = term_g_19;
  return(t);
}
static ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_4 (ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL;
  v_48 = t;
  t = SSL_string_to_int(v_48);
  w_48 = t;
  t = term_d_19;
  x_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_d_19, w_48);
  t = u_6(x_48, w_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, v_48);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  t = term_h_19;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL;
  t = term_i_19;
  y_48 = t;
  t = term_k_7;
  z_48 = t;
  t = term_j_19;
  t = u_6(y_48, z_48, t);
  t = term_m_19;
  return(t);
}
static ATerm o_4 (ATerm t)
{
  t = term_n_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_4, h_4, i_4, t);
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
            t = ArgOption_3_0(j_4, k_4, l_4, t);
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
            t = Option_3_0(m_4, n_4, o_4, t);
          }
      }
    }
  return(t);
}
static ATerm u_6 (ATerm i_44, ATerm j_44, ATerm t)
{
  ATerm a_49 = NULL;
  t = term_s_19;
  a_49 = t;
  t = SSL_table_put(a_49, i_44, j_44);
  t = (ATerm) ATmakeAppl(sym__3, term_s_19, i_44, j_44);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_49 = NULL,k_49 = NULL,l_49 = NULL;
      t = term_k_7;
      t = e_0(t);
      g_49 = t;
      t = term_u_19;
      k_49 = t;
      t = term_v_19;
      l_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, g_49);
      t = s_6(k_49, l_49, g_49, t);
      _fail(t);
    }
  else
    {
      ATerm r_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_49 = ATgetFirst((ATermList) t);
          e_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = d_49;
      t = c_0(t);
      t = term_k_7;
      t = d_0(t);
      r_49 = t;
      t = (ATerm) ATinsert(CheckATermList(e_49), r_49);
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm t_49 = NULL;
  t_49 = t;
  if(match_string(t, "-o"))
    {
      t = t_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = t_49;
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm u_49 = NULL,v_49 = NULL;
  u_49 = t;
  t = term_o_18;
  v_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, u_49);
  t = u_6(v_49, u_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, u_49);
  return(t);
}
static ATerm r_4 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, r_4, t);
  return(t);
}
static ATerm s_6 (ATerm i_49, ATerm j_49, ATerm h_49, ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_20 = ATgetArgument(t, 0);
            ATerm d_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_49, j_49);
        t = r_6(i_49, j_49, t);
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATempty;
      }
  }
  y_49 = t;
  t = (ATerm) ATinsert(CheckATermList(y_49), h_49);
  z_49 = t;
  t = SSL_table_put(i_49, j_49, z_49);
  t = x_49;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL,i_50 = NULL,j_50 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
      t = term_k_7;
      t = n_0(t);
      k_50 = t;
      t = term_u_19;
      l_50 = t;
      t = term_v_19;
      m_50 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, k_50);
      t = s_6(l_50, m_50, k_50, t);
      _fail(t);
    }
  else
    {
      ATerm q_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          g_50 = ATgetFirst((ATermList) t);
          h_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = h_50;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_50 = ATgetFirst((ATermList) t);
          j_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_50;
      t = k_0(t);
      t = i_50;
      t = l_0(t);
      q_50 = t;
      t = (ATerm) ATinsert(CheckATermList(j_50), q_50);
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm s_50 = NULL;
  s_50 = t;
  if(match_string(t, "-i"))
    {
      t = s_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = s_50;
    }
  return(t);
}
static ATerm t_4 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL;
  t_50 = t;
  t = term_w_18;
  u_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_18, t_50);
  t = u_6(u_50, t_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_50);
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_e_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(s_4, t_4, u_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_k_7;
  t = whoami_0_0(t);
  v_50 = t;
  t = term_x_18;
  x_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_20), v_50);
  y_50 = t;
  t = SSL_printnl(x_50, y_50);
  t = term_x_10;
  w_50 = t;
  t = SSL_exit(w_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_h_20;
  t = get_config_0_0(t);
  return(t);
}
static ATerm n_6 (ATerm l_37, ATerm m_37, ATerm t)
{
  ATerm k_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(l_37, m_37);
      LocalPopChoice(l_20);
    }
  else
    {
      t = k_20;
      t = SSL_addr(l_37, m_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm t_86 (ATerm), ATerm u_86 (ATerm), ATerm t)
{
  ATerm c_51 = NULL,d_51 = NULL,e_51 = NULL;
  c_51 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_51;
      t = t_86(t);
    }
  else
    {
      ATerm h_51 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_51 = ATgetFirst((ATermList) t);
          e_51 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_51;
      t = foldr_2_0(t_86, u_86, t);
      h_51 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_51, h_51);
      t = u_86(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm v_4 (ATerm t)
{
  t = term_x_11;
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm i_20 = NULL,j_20 = NULL;
  if(match_cons(t, sym__2))
    {
      i_20 = ATgetArgument(t, 0);
      j_20 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(i_20, j_20, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm k_51 = NULL,z_19 = NULL,f_20 = NULL;
  t = times_0_0(t);
  f_20 = t;
  t = SSL_explode_term(f_20);
  if(match_cons(t, sym__2))
    {
      ATerm m_20 = ATgetArgument(t, 0);
      z_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = z_19;
  t = foldr_2_0(v_4, w_4, t);
  k_51 = t;
  t = SSL_TicksToSeconds(k_51);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm v_51 = NULL,w_51 = NULL,x_51 = NULL;
  v_51 = t;
  if(match_cons(t, sym__2))
    {
      w_51 = ATgetArgument(t, 0);
      x_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_51;
        if((w_51 != t))
          {
            _fail(t);
          }
        t = v_51;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = (ATerm) ATmakeAppl(sym__2, w_51, x_51);
        {
          ATerm p_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(w_51, x_51);
              LocalPopChoice(q_20);
            }
          else
            {
              t = p_20;
              t = SSL_gtr(w_51, x_51);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, w_51, x_51);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm b_52 = NULL;
  b_52 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_52 = NULL;
        t = term_d_19;
        t = get_config_0_0(t);
        d_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_52, term_x_10);
        t = geq_0_0(t);
        t = b_52;
        t = k_95(t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = b_52;
      }
  }
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm f_52 = NULL,g_52 = NULL,i_52 = NULL,j_52 = NULL;
  t = run_time_0_0(t);
  f_52 = t;
  t = term_k_7;
  t = whoami_0_0(t);
  g_52 = t;
  t = term_x_18;
  i_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_20), f_52), term_t_20), g_52);
  j_52 = t;
  t = SSL_printnl(i_52, j_52);
  t = (ATerm) ATmakeAppl(sym__2, term_x_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_20), f_52), term_t_20), g_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm k_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_x_11;
  k_52 = t;
  t = SSL_exit(k_52);
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL;
  t_52 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = t_52;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          s_52 = ATgetArgument(t, 0);
          {
            ATerm h_21 = NULL,o_12 = NULL;
            t = SSLgetAnnotations(t_52);
            h_21 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, s_52);
            o_12 = t;
            t = SSLsetAnnotations(o_12, h_21);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = t_52;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm y_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_21;
      t = get_config_0_0(t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = y_20;
      t = fetch_1_0(y_4, t);
    }
  t = a_98(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_52 = ATgetFirst((ATermList) t);
      x_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm b_53 = NULL,c_53 = NULL;
        static ATerm z_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(b_53)), not_null(c_53));
          return(t);
        }
        t = x_52;
        t = i_0(t);
        if(((b_53 != NULL) && (b_53 != t)))
          _fail(t);
        else
          b_53 = t;
        t = w_52;
        t = g_0(t);
        if(((c_53 != NULL) && (c_53 != t)))
          _fail(t);
        else
          c_53 = t;
        t = x_52;
        t = reverse_acc_2_0(g_0, z_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_k_7;
      t = i_0(t);
    }
  return(t);
}
static ATerm a_5 (ATerm t)
{
  ATerm g_53 = NULL,h_53 = NULL,i_53 = NULL,v_12 = NULL;
  i_53 = t;
  if(match_cons(t, sym_Program_1))
    {
      h_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_53);
  g_53 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, h_53);
  v_12 = t;
  t = SSLsetAnnotations(v_12, g_53);
  return(t);
}
static ATerm b_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm k_53 = NULL;
  k_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, k_53), term_c_21);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm e_53 = NULL,f_53 = NULL;
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_h_20;
      t = get_config_0_0(t);
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      t = fetch_1_0(a_5, t);
    }
  t = term_f_21;
  t = echo_0_0(t);
  t = term_u_19;
  e_53 = t;
  t = term_v_19;
  f_53 = t;
  t = term_g_21;
  t = r_6(e_53, f_53, t);
  t = reverse_acc_2_0(_id, b_5, t);
  t = map_1_0(c_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm w_80 (ATerm), ATerm t)
{
  static ATerm h_54 (ATerm t)
  {
    ATerm e_54 = NULL,f_54 = NULL,g_54 = NULL;
    e_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_54 = ATgetFirst((ATermList) t);
        g_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm i_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_21 = NULL,c_22 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(e_54);
          w_21 = t;
          t = f_54;
          t = w_80(t);
          c_22 = t;
          t = (ATerm) ATinsert(CheckATermList(g_54), c_22);
          z_12 = t;
          t = SSLsetAnnotations(z_12, w_21);
          LocalPopChoice(j_21);
        }
      else
        {
          t = i_21;
          {
            ATerm x_22 = NULL,a_23 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(e_54);
            x_22 = t;
            t = g_54;
            t = h_54(t);
            a_23 = t;
            t = (ATerm) ATinsert(CheckATermList(a_23), f_54);
            a_13 = t;
            t = SSLsetAnnotations(a_13, x_22);
          }
        }
    }
    return(t);
  }
  t = h_54(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL;
  l_54 = t;
  {
    ATerm k_21 = t;
    int l_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = l_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm m_21 = ATgetFirst((ATermList) t);
                ATerm o_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = l_54;
          }
        LocalPopChoice(l_21);
      }
    else
      {
        t = k_21;
        t = (ATerm) ATinsert(ATempty, l_54);
      }
  }
  m_54 = t;
  t = term_p_18;
  n_54 = t;
  t = SSL_printnl(n_54, m_54);
  t = l_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_h_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm i_33, ATerm j_33, ATerm t)
{
  t = SSL_strcat(i_33, j_33);
  return(t);
}
ATerm debug_1_0 (ATerm b_80 (ATerm), ATerm t)
{
  ATerm r_54 = NULL,s_54 = NULL,t_54 = NULL,u_54 = NULL;
  r_54 = t;
  t = b_80(t);
  s_54 = t;
  t = term_x_18;
  t_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, r_54), s_54);
  u_54 = t;
  t = SSL_printnl(t_54, u_54);
  t = r_54;
  return(t);
}
ATerm map_1_0 (ATerm m_80 (ATerm), ATerm t)
{
  static ATerm o_55 (ATerm t)
  {
    ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
    l_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = l_55;
      }
    else
      {
        ATerm l_23 = NULL,p_23 = NULL,q_23 = NULL,d_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            m_55 = ATgetFirst((ATermList) t);
            n_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(l_55);
        l_23 = t;
        t = m_55;
        t = m_80(t);
        p_23 = t;
        t = n_55;
        t = o_55(t);
        q_23 = t;
        t = (ATerm) ATinsert(CheckATermList(q_23), p_23);
        d_13 = t;
        t = SSLsetAnnotations(d_13, l_23);
      }
    return(t);
  }
  t = o_55(t);
  return(t);
}
static ATerm e_5 (ATerm t)
{
  ATerm p_21 = t;
  int q_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(q_21);
    }
  else
    {
      t = p_21;
    }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_55 = NULL;
      w_55 = t;
      t = SSL_is_string(w_55);
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm x_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(e_5, t);
            LocalPopChoice(y_21);
          }
        else
          {
            t = x_21;
            {
              ATerm i_56 = NULL,j_56 = NULL,k_56 = NULL;
              i_56 = t;
              if(match_cons(t, sym_Path_1))
                {
                  j_56 = ATgetArgument(t, 0);
                  t = j_56;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      j_56 = ATgetArgument(t, 0);
                      t = j_56;
                      {
                        ATerm z_21 = t;
                        int a_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(a_22);
                          }
                        else
                          {
                            t = z_21;
                            t = debug_1_0(f_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm r_56 = NULL,s_56 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          j_56 = ATgetArgument(t, 0);
                          k_56 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = j_56;
                      t = eval_config_0_0(t);
                      r_56 = t;
                      t = k_56;
                      t = eval_config_0_0(t);
                      s_56 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_56, s_56);
                      t = q_6(r_56, s_56, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm z_50, ATerm a_51, ATerm t)
{
  t = SSL_table_get(z_50, a_51);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL;
  y_56 = t;
  t = term_s_19;
  z_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_19, y_56);
  t = r_6(z_56, y_56, t);
  {
    ATerm b_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_57 = NULL,b_57 = NULL;
        t = eval_config_0_0(t);
        a_57 = t;
        t = term_s_19;
        b_57 = t;
        t = SSL_table_put(b_57, y_56, a_57);
        t = a_57;
        LocalPopChoice(d_22);
      }
    else
      {
        t = b_22;
      }
  }
  return(t);
}
static ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL;
  t = term_e_22;
  e_57 = t;
  t = term_k_7;
  f_57 = t;
  t = term_f_22;
  t = u_6(e_57, f_57, t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  t = term_g_22;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm k_5 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL;
  t = term_e_22;
  i_57 = t;
  t = term_k_7;
  j_57 = t;
  t = term_f_22;
  t = u_6(i_57, j_57, t);
  t = term_h_22;
  g_57 = t;
  t = term_k_7;
  h_57 = t;
  t = term_i_22;
  t = u_6(g_57, h_57, t);
  t = term_j_22;
  return(t);
}
static ATerm l_5 (ATerm t)
{
  t = term_k_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm l_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(g_5, h_5, i_5, t);
      LocalPopChoice(n_22);
    }
  else
    {
      t = l_22;
      t = Option_3_0(j_5, k_5, l_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm m_57 (ATerm), ATerm n_57 (ATerm), ATerm t)
{
  ATerm k_57 = NULL,l_57 = NULL,o_57 = NULL,p_57 = NULL,q_57 = NULL,r_57 = NULL,j_13 = NULL;
  r_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_57 = ATgetFirst((ATermList) t);
      o_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_57);
  k_57 = t;
  t = l_57;
  t = m_57(t);
  p_57 = t;
  t = o_57;
  t = n_57(t);
  q_57 = t;
  t = (ATerm) ATinsert(CheckATermList(q_57), p_57);
  j_13 = t;
  t = SSLsetAnnotations(j_13, k_57);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm d_100 (ATerm), ATerm t)
{
  ATerm w_57 = NULL,x_57 = NULL,y_57 = NULL,z_57 = NULL,b_58 = NULL,c_58 = NULL,l_13 = NULL;
  w_57 = t;
  {
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_s_22;
        t = d_100(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
      }
  }
  t = w_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_57 = ATgetFirst((ATermList) t);
      z_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_57);
  x_57 = t;
  t = term_h_20;
  c_58 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_h_20, y_57);
  t = u_6(c_58, y_57, t);
  t = z_57;
  {
    static ATerm m_58 (ATerm t)
    {
      ATerm t_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_22 = t;
          int y_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_58 = NULL;
              f_58 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_58;
              LocalPopChoice(y_22);
            }
          else
            {
              t = w_22;
              t = d_100(t);
              t = Cons_2_0(_id, m_58, t);
            }
          LocalPopChoice(u_22);
        }
      else
        {
          t = t_22;
          {
            ATerm i_58 = NULL,j_58 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                i_58 = ATgetFirst((ATermList) t);
                j_58 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(j_58), (ATerm) ATmakeAppl(sym_Undefined_1, i_58));
          }
        }
      return(t);
    }
    t = m_58(t);
  }
  b_58 = t;
  t = (ATerm) ATinsert(CheckATermList(b_58), (ATerm) ATmakeAppl(sym_Program_1, y_57));
  l_13 = t;
  t = SSLsetAnnotations(l_13, x_57);
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  if(match_string(t, "--help"))
    {
      t = y_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_58;
        }
    }
  return(t);
}
static ATerm o_5 (ATerm t)
{
  ATerm z_58 = NULL,a_59 = NULL;
  t = term_b_21;
  z_58 = t;
  t = term_k_7;
  a_59 = t;
  t = term_z_22;
  t = u_6(z_58, a_59, t);
  t = term_b_23;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  t = term_c_23;
  return(t);
}
static ATerm q_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm c_100 (ATerm), ATerm t)
{
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL,u_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL;
  t_58 = t;
  t = term_u_19;
  v_58 = t;
  t = term_v_19;
  w_58 = t;
  t = (ATerm) ATempty;
  x_58 = t;
  t = SSL_table_put(v_58, w_58, x_58);
  t = t_58;
  {
    static ATerm m_5 (ATerm t)
    {
      ATerm d_23 = t;
      int e_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_100(t);
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
                t = Option_3_0(n_5, o_5, p_5, t);
                LocalPopChoice(g_23);
              }
            else
              {
                t = f_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(m_5, t);
  }
  {
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_59 = NULL;
        h_59 = t;
        {
          ATerm j_23 = t;
          int k_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_24 = NULL;
              t = h_59;
              {
                ATerm m_23 = t;
                int n_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_b_21;
                    t = get_config_0_0(t);
                    LocalPopChoice(n_23);
                  }
                else
                  {
                    t = m_23;
                    t = fetch_1_0(q_5, t);
                  }
              }
              t = h_59;
              t = default_system_usage_0_0(t);
              t = term_x_11;
              u_24 = t;
              t = SSL_exit(u_24);
              LocalPopChoice(k_23);
            }
          else
            {
              t = j_23;
              {
                ATerm z_24 = NULL;
                t = term_e_22;
                t = get_config_0_0(t);
                t = h_59;
                t = default_system_about_0_0(t);
                t = term_x_11;
                z_24 = t;
                t = SSL_exit(z_24);
              }
            }
        }
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        {
          ATerm o_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm i_59 = NULL,j_59 = NULL,k_59 = NULL;
              static ATerm r_5 (ATerm t)
              {
                ATerm l_59 = NULL,m_59 = NULL,n_59 = NULL,v_13 = NULL;
                n_59 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    m_59 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(n_59);
                l_59 = t;
                t = m_59;
                if(((r_58 != NULL) && (r_58 != t)))
                  _fail(t);
                else
                  r_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, m_59);
                v_13 = t;
                t = SSLsetAnnotations(v_13, l_59);
                return(t);
              }
              t = fetch_1_0(r_5, t);
              t = term_x_18;
              j_59 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_58)), term_s_23);
              k_59 = t;
              t = SSL_printnl(j_59, k_59);
              t = (ATerm) ATmakeAppl(sym__2, term_x_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_58)), term_s_23));
              t = default_system_usage_0_0(t);
              t = term_x_10;
              i_59 = t;
              t = SSL_exit(i_59);
              LocalPopChoice(r_23);
            }
          else
            {
              t = o_23;
            }
        }
      }
  }
  s_58 = t;
  t = term_u_19;
  u_58 = t;
  t = SSL_table_destroy(u_58);
  t = s_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm c_98 (ATerm), ATerm d_98 (ATerm), ATerm e_98 (ATerm), ATerm f_98 (ATerm), ATerm t)
{
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL,v_59 = NULL;
  t = parse_options_1_0(c_98, t);
  s_59 = t;
  t = term_t_23;
  v_59 = t;
  t = SSL_table_create(v_59);
  t = term_t_23;
  t_59 = t;
  t = term_u_23;
  u_59 = t;
  t = SSL_table_put(t_59, u_59, s_59);
  t = s_59;
  t = e_98(t);
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(d_98, t);
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        {
          ATerm x_23 = t;
          int y_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_98(t);
              t = report_success_0_0(t);
              LocalPopChoice(y_23);
            }
          else
            {
              t = x_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm s_5 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      {
        ATerm b_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(d_24);
          }
        else
          {
            t = b_24;
            {
              ATerm e_24 = t;
              int g_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(u_5, w_5, x_5, t);
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
                        t = verbose_option_0_0(t);
                        LocalPopChoice(i_24);
                      }
                    else
                      {
                        t = h_24;
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
static ATerm t_5 (ATerm t)
{
  t = xtc_io_1_0(y_5, t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm w_5 (ATerm t)
{
  ATerm x_59 = NULL,y_59 = NULL;
  t = term_j_24;
  x_59 = t;
  t = term_k_7;
  y_59 = t;
  t = term_k_24;
  t = u_6(x_59, y_59, t);
  t = term_l_24;
  return(t);
}
static ATerm x_5 (ATerm t)
{
  t = term_m_24;
  return(t);
}
static ATerm y_5 (ATerm t)
{
  t = read_from_0_0(t);
  t = abox2html_0_0(t);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(s_5, default_usage_0_0, _id, t_5, t);
  return(t);
}

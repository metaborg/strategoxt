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
Symbol sym_SOpt_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
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
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
}
ATerm term_i_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_z_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_q_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_q_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_s_19;
ATerm term_r_19;
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
ATerm term_y_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_o_18;
ATerm term_m_18;
ATerm term_h_18;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_t_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_l_15;
ATerm term_f_15;
ATerm term_n_14;
ATerm term_e_14;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_p_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_l_11;
ATerm term_b_11;
ATerm term_u_10;
ATerm term_j_10;
ATerm term_d_10;
ATerm term_x_9;
ATerm term_s_9;
ATerm term_g_9;
ATerm term_f_9;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_d_8;
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
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_h_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_t_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_d_7, term_c_7);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_v_11);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_11);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_h_7);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_u_19);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_z_21, term_h_7);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_h_7);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_h_7);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_h_7);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm j_1 (ATerm u_0, ATerm t);
static ATerm l_1 (ATerm w_0, ATerm a_1, ATerm b_1, ATerm t);
static ATerm a_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm a_6 (ATerm j_91 (ATerm), ATerm v_38, ATerm t_38, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm e_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Html2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm l_72 (ATerm), ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm o_73 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
ATerm replace_quotes_0_0 (ATerm t);
ATerm listtd_1_0 (ATerm f_80 (ATerm), ATerm t);
static ATerm m_0 (ATerm t);
static ATerm s_0 (ATerm t);
ATerm html_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm c_102 (ATerm), ATerm t);
static ATerm t_0 (ATerm t);
static ATerm v_0 (ATerm t);
static ATerm y_0 (ATerm t);
static ATerm z_0 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm d_1 (ATerm t);
static ATerm e_1 (ATerm t);
ATerm make_html_comment_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
ATerm sep_by_1_0 (ATerm n_70 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm d_86 (ATerm), ATerm t);
static ATerm k_1 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm d_6 (ATerm z_19, ATerm a_20, ATerm t);
ATerm tov_1_0 (ATerm m_70 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
static ATerm e_6 (ATerm n_37, ATerm o_37, ATerm t);
ATerm while_not_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm t);
ATerm for_3_0 (ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm t);
static ATerm p_1 (ATerm t);
static ATerm l_2 (ATerm t);
static ATerm n_2 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm f_102 (ATerm), ATerm t);
static ATerm p_2 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
ATerm make_hs_0_0 (ATerm t);
static ATerm f_6 (ATerm p_70 (ATerm), ATerm n_17, ATerm t);
static ATerm q_2 (ATerm t);
static ATerm s_2 (ATerm t);
static ATerm t_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm w_2 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm z_2 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm Abox2html_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm k_72 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm m_79 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm e_39 (ATerm l_38, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm x_79 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm q_79 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm j_79 (ATerm), ATerm t);
static ATerm g_6 (ATerm u_15, ATerm p_15, ATerm t);
static ATerm q_3 (ATerm t);
ATerm normalize_0_0 (ATerm t);
static ATerm r_3 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm m_43 (ATerm e_43, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm h_6 (ATerm t_19, ATerm t);
static ATerm i_6 (ATerm n_34, ATerm o_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm c_45 (ATerm b_44, ATerm t);
static ATerm d_45 (ATerm f_44, ATerm g_44, ATerm h_44, ATerm t);
static ATerm e_45 (ATerm p_44, ATerm q_44, ATerm r_44, ATerm t);
static ATerm j_6 (ATerm t);
static ATerm t_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm k_6 (ATerm e_34, ATerm f_34, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm l_6 (ATerm p_39, ATerm q_39, ATerm t);
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t);
static ATerm m_6 (ATerm n_48, ATerm o_48, ATerm t);
ATerm end_scope_1_0 (ATerm g_91 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm f_91 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm a_103 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm b_103 (ATerm), ATerm t);
ATerm default_usage_0_0 (ATerm t);
static ATerm b_4 (ATerm t);
static ATerm c_4 (ATerm t);
static ATerm d_4 (ATerm t);
ATerm keep_option_0_0 (ATerm t);
static ATerm e_4 (ATerm t);
static ATerm f_4 (ATerm t);
static ATerm g_4 (ATerm t);
static ATerm h_4 (ATerm t);
static ATerm i_4 (ATerm t);
static ATerm j_4 (ATerm t);
static ATerm k_4 (ATerm t);
static ATerm l_4 (ATerm t);
static ATerm m_4 (ATerm t);
ATerm verbose_option_0_0 (ATerm t);
static ATerm u_6 (ATerm i_43, ATerm j_43, ATerm t);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
static ATerm q_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm s_6 (ATerm i_48, ATerm j_48, ATerm h_48, ATerm t);
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
static ATerm t_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm n_6 (ATerm h_37, ATerm i_37, ATerm t);
ATerm foldr_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm u_4 (ATerm t);
static ATerm v_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm l_93 (ATerm), ATerm t);
static ATerm w_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm x_4 (ATerm t);
ATerm need_help_1_0 (ATerm b_96 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t);
static ATerm z_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm g_79 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm q_6 (ATerm e_33, ATerm f_33, ATerm t);
ATerm debug_1_0 (ATerm l_78 (ATerm), ATerm t);
ATerm map_1_0 (ATerm w_78 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm e_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm r_6 (ATerm z_49, ATerm a_50, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
static ATerm k_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_55 (ATerm), ATerm x_55 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm e_98 (ATerm), ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
static ATerm p_5 (ATerm t);
ATerm parse_options_1_0 (ATerm d_98 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm t);
static ATerm r_5 (ATerm t);
static ATerm s_5 (ATerm t);
static ATerm t_5 (ATerm t);
static ATerm u_5 (ATerm t);
static ATerm v_5 (ATerm t);
static ATerm w_5 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
static ATerm j_1 (ATerm u_0, ATerm t)
{
  t = u_0;
  {
    ATerm b_6 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm c_6 = ATgetArgument(t, 0);
            ATerm p_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_6;
      }
  }
  t = term_t_6;
  t = debug_1_0(a_0, t);
  t = (ATerm) ATmakeAppl(sym__2, u_0, term_v_6);
  t = open_file_0_0(t);
  return(t);
}
static ATerm l_1 (ATerm w_0, ATerm a_1, ATerm b_1, ATerm t)
{
  t = SSL_open_file(w_0, a_1);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm f_1 = NULL,h_1 = NULL,i_1 = NULL;
  f_1 = t;
  if(match_cons(t, sym__2))
    {
      h_1 = ATgetArgument(t, 0);
      i_1 = ATgetArgument(t, 1);
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = j_1(f_1, t);
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            t = l_1(h_1, i_1, f_1, t);
          }
      }
    }
  else
    {
      t = j_1(f_1, t);
    }
  return(t);
}
static ATerm a_6 (ATerm j_91 (ATerm), ATerm v_38, ATerm t_38, ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,q_1 = NULL,r_1 = NULL,s_1 = NULL,t_1 = NULL;
  r_1 = t;
  t = j_91(t);
  m_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_1, v_38, t_38);
  t = s_6(m_1, v_38, t_38, t);
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_1 = NULL;
        t = term_c_7;
        u_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_1, term_c_7);
        t = r_6(m_1, u_1, t);
        LocalPopChoice(a_7);
      }
    else
      {
        t = z_6;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_1 = ATgetFirst((ATermList) t);
      q_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_7;
  s_1 = t;
  t = (ATerm) ATinsert(CheckATermList(q_1), (ATerm) ATinsert(CheckATermList(n_1), v_38));
  t_1 = t;
  t = SSL_table_put(m_1, s_1, t_1);
  t = r_1;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm e_0 (ATerm t)
{
  t = term_d_7;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm v_1 = NULL,w_1 = NULL,x_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL,c_2 = NULL,d_2 = NULL;
  t = P__tmpdir_0_0(t);
  z_1 = t;
  t = term_e_7;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, term_e_7);
  t = q_6(z_1, d_2, t);
  b_2 = t;
  t = term_f_7;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_2, term_f_7);
  t = q_6(b_2, c_2, t);
  a_2 = t;
  t = SSL_mkstemp(a_2);
  if(match_cons(t, sym__2))
    {
      w_1 = ATgetArgument(t, 0);
      v_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_h_7;
  x_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_1, term_h_7);
  t = a_6(e_0, w_1, x_1, t);
  t = SSL_close(v_1);
  t = w_1;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL;
  g_2 = t;
  t = xtc_new_file_0_0(t);
  h_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_2, term_v_6);
  t = open_file_0_0(t);
  t = g_2;
  {
    static ATerm f_0 (ATerm t)
    {
      ATerm m_2 = NULL;
      m_2 = t;
      {
        ATerm i_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 = NULL,c_0 = NULL;
            t = SSL_is_string(m_2);
            b_0 = t;
            t = (ATerm) ATinsert(ATempty, b_0);
            c_0 = t;
            t = SSL_print(h_2, c_0);
            t = b_0;
            LocalPopChoice(j_7);
          }
        else
          {
            t = i_7;
            t = m_2;
          }
      }
      return(t);
    }
    t = topdown_1_0(f_0, t);
  }
  t = SSL_close_file(h_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, h_2);
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm a_3 = NULL,b_3 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      b_3 = ATgetArgument(t, 0);
      a_3 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_7), a_3), term_m_7), b_3), term_k_7);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          b_3 = ATgetArgument(t, 0);
          a_3 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_7), a_3), term_m_7), b_3), term_o_7);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              b_3 = ATgetArgument(t, 0);
              a_3 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_7), a_3), term_m_7), b_3), term_q_7);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  b_3 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_7), b_3), term_r_7);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      b_3 = ATgetArgument(t, 0);
                      a_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_7), a_3), term_m_7), b_3), term_t_7);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          b_3 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), b_3), term_v_7);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              b_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), b_3), term_x_7);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  b_3 = ATgetArgument(t, 0);
                                  a_3 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_8), a_3), term_a_8), b_3), term_z_7);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      b_3 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_8), b_3), term_d_8);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_h_8;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_i_8;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_j_8;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_k_8;
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
ATerm bottomup_1_0 (ATerm l_72 (ATerm), ATerm t)
{
  static ATerm h_0 (ATerm t)
  {
    t = bottomup_1_0(l_72, t);
    return(t);
  }
  t = SRTS_all(h_0, t);
  t = l_72(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm w_10 = NULL,z_10 = NULL,a_11 = NULL;
  w_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_10;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_10 = ATgetFirst((ATermList) t);
          a_11 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_0 = NULL,x_0 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(w_10);
            q_0 = t;
            t = z_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = a_11;
            t = flat_list_0_0(t);
            x_0 = t;
            t = (ATerm) ATinsert(CheckATermList(x_0), z_10);
            i_2 = t;
            t = SSLsetAnnotations(i_2, q_0);
            LocalPopChoice(m_8);
          }
        else
          {
            t = l_8;
            {
              ATerm n_8 = t;
              int o_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm y_1 = NULL,e_2 = NULL,f_2 = NULL,r_2 = NULL,j_2 = NULL;
                  t = SSLgetAnnotations(w_10);
                  f_2 = t;
                  t = z_10;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = z_10;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm p_8 = ATgetFirst((ATermList) t);
                          ATerm q_8 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = z_10;
                    }
                  t = (ATerm) ATinsert(CheckATermList(a_11), z_10);
                  j_2 = t;
                  t = SSLsetAnnotations(j_2, f_2);
                  r_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      e_2 = ATgetFirst((ATermList) t);
                      {
                        ATerm t_8 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = r_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm v_8 = ATgetFirst((ATermList) t);
                      y_1 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, e_2, y_1);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(o_8);
                }
              else
                {
                  t = n_8;
                  {
                    ATerm i_3 = NULL,o_3 = NULL,k_2 = NULL;
                    t = SSLgetAnnotations(w_10);
                    i_3 = t;
                    t = a_11;
                    t = flat_list_0_0(t);
                    o_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(o_3), z_10);
                    k_2 = t;
                    t = SSLsetAnnotations(k_2, i_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  static ATerm h_11 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_73(t);
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        t = SRTS_one(h_11, t);
      }
    return(t);
  }
  t = h_11(t);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  ATerm r_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm d_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(d_9) != AT_INT) || (ATgetInt((ATermInt) d_9) != 34)))
        _fail(t);
      r_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(r_11), term_f_9), term_f_9);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,u_8 = NULL;
  p_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_11 = ATgetFirst((ATermList) t);
      o_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_11);
  j_11 = t;
  t = n_11;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(o_11), n_11);
  u_8 = t;
  t = SSLsetAnnotations(u_8, j_11);
  t = o_11;
  t = oncetd_1_0(j_0, t);
  i_11 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(i_11), term_g_9), term_g_9);
  return(t);
}
ATerm listtd_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  static ATerm t_12 (ATerm t)
  {
    ATerm m_12 = NULL,n_12 = NULL,s_12 = NULL;
    t = f_80(t);
    m_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = m_12;
      }
    else
      {
        ATerm n_4 = NULL,d_5 = NULL,c_9 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            n_12 = ATgetFirst((ATermList) t);
            s_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(m_12);
        n_4 = t;
        t = s_12;
        t = t_12(t);
        d_5 = t;
        t = (ATerm) ATinsert(CheckATermList(d_5), n_12);
        c_9 = t;
        t = SSLsetAnnotations(c_9, n_4);
      }
    return(t);
  }
  t = t_12(t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  ATerm i_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      LocalPopChoice(k_9);
    }
  else
    {
      t = i_9;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm w_13 = NULL;
  w_13 = t;
  if(match_int(t, 32))
    {
      ATerm l_9 = t;
      int m_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_5 = NULL;
          t = term_i_8;
          x_5 = t;
          t = SSL_explode_string(x_5);
          LocalPopChoice(m_9);
        }
      else
        {
          t = l_9;
          t = w_13;
        }
    }
  else
    {
      if(match_int(t, 38))
        {
          ATerm p_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_5 = NULL;
              t = term_s_9;
              y_5 = t;
              t = SSL_explode_string(y_5);
              LocalPopChoice(q_9);
            }
          else
            {
              t = p_9;
              t = w_13;
            }
        }
      else
        {
          if(match_int(t, 60))
            {
              ATerm t_9 = t;
              int v_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm z_5 = NULL;
                  t = term_x_9;
                  z_5 = t;
                  t = SSL_explode_string(z_5);
                  LocalPopChoice(v_9);
                }
              else
                {
                  t = t_9;
                  t = w_13;
                }
            }
          else
            {
              if(match_int(t, 62))
                {
                  ATerm z_9 = t;
                  int c_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_6 = NULL;
                      t = term_d_10;
                      o_6 = t;
                      t = SSL_explode_string(o_6);
                      LocalPopChoice(c_10);
                    }
                  else
                    {
                      t = z_9;
                      t = w_13;
                    }
                }
              else
                {
                  t = w_13;
                }
            }
        }
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm n_13 = NULL,p_13 = NULL;
  p_13 = t;
  t = SSL_explode_string(p_13);
  t = listtd_1_0(m_0, t);
  t = map_1_0(s_0, t);
  t = flat_list_0_0(t);
  n_13 = t;
  t = SSL_implode_string(n_13);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  static ATerm t_16 (ATerm t)
  {
    ATerm j_15 = NULL,m_15 = NULL,s_15 = NULL;
    s_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        j_15 = ATgetFirst((ATermList) t);
        m_15 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm e_10 = t;
          int g_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_7 = NULL,g_7 = NULL,l_7 = NULL,e_9 = NULL;
              t = SSLgetAnnotations(s_15);
              g_7 = t;
              t = j_15;
              t = c_102(t);
              l_7 = t;
              t = (ATerm) ATinsert(CheckATermList(m_15), l_7);
              e_9 = t;
              t = SSLsetAnnotations(e_9, g_7);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm h_10 = ATgetFirst((ATermList) t);
                  b_7 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = b_7;
              t = t_16(t);
              LocalPopChoice(g_10);
            }
          else
            {
              t = e_10;
              t = s_15;
            }
        }
      }
    else
      {
        t = s_15;
      }
    return(t);
  }
  t = t_16(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm f_8 = NULL;
  f_8 = t;
  if(match_int(t, 9))
    {
      t = f_8;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = f_8;
    }
  return(t);
}
static ATerm y_0 (ATerm t)
{
  ATerm x_8 = NULL;
  x_8 = t;
  if(match_int(t, 9))
    {
      t = x_8;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = x_8;
    }
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm c_1 (ATerm t)
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
  ATerm d_21 = NULL;
  d_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_j_10), d_21);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm n_18 = NULL,q_18 = NULL;
  q_18 = t;
  t = SSL_explode_string(q_18);
  t = reverse_acc_2_0(_id, t_0, t);
  n_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, n_18, (ATerm) ATempty);
  {
    static ATerm e_21 (ATerm t)
    {
      ATerm j_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL;
      if(match_cons(t, sym__2))
        {
          j_20 = ATgetArgument(t, 0);
          o_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = j_20;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm c_8 = NULL,e_8 = NULL;
          t = o_20;
          t = remove_trailing_1_0(v_0, t);
          e_8 = t;
          t = SSL_implode_string(e_8);
          c_8 = t;
          t = (ATerm) ATinsert(ATempty, c_8);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_20 = ATgetFirst((ATermList) t);
              n_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_20;
          if(match_int(t, 10))
            {
              ATerm l_10 = t;
              int m_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_8 = NULL,s_8 = NULL,w_8 = NULL;
                  t = o_20;
                  t = remove_trailing_1_0(y_0, t);
                  w_8 = t;
                  t = SSL_implode_string(w_8);
                  r_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, n_20, (ATerm) ATempty);
                  t = e_21(t);
                  s_8 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_8), r_8);
                  LocalPopChoice(m_10);
                }
              else
                {
                  t = l_10;
                  t = (ATerm) ATmakeAppl(sym__2, n_20, (ATerm) ATinsert(CheckATermList(o_20), m_20));
                  t = e_21(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, n_20, (ATerm) ATinsert(CheckATermList(o_20), m_20));
              t = e_21(t);
            }
        }
      return(t);
    }
    t = e_21(t);
  }
  t = remove_trailing_1_0(z_0, t);
  t = reverse_acc_2_0(_id, c_1, t);
  t = remove_trailing_1_0(d_1, t);
  t = map_1_0(e_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  t = (ATerm) ATinsert(ATempty, l_21);
  return(t);
}
ATerm sep_by_1_0 (ATerm n_70 (ATerm), ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL;
  t = map_1_0(g_1, t);
  b_9 = t;
  t = term_h_7;
  t = n_70(t);
  a_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_9, b_9);
  t = d_6(a_9, b_9, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm c_22 = NULL,f_22 = NULL,g_22 = NULL;
  c_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = c_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_22 = ATgetFirst((ATermList) t);
          g_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm n_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_9 = NULL,a_10 = NULL,b_10 = NULL,h_9 = NULL;
            t = SSLgetAnnotations(c_22);
            n_9 = t;
            t = f_22;
            t = d_86(t);
            a_10 = t;
            t = g_22;
            t = filter_1_0(d_86, t);
            b_10 = t;
            t = (ATerm) ATinsert(CheckATermList(b_10), a_10);
            h_9 = t;
            t = SSLsetAnnotations(h_9, n_9);
            LocalPopChoice(p_10);
          }
        else
          {
            t = n_10;
            t = g_22;
            t = filter_1_0(d_86, t);
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
  ATerm n_22 = NULL;
  ATerm q_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(k_1, t);
      LocalPopChoice(t_10);
    }
  else
    {
      t = q_10;
      t = term_u_10;
    }
  n_22 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, n_22, term_b_11);
      t = copy_0_0(t);
    }
  return(t);
}
static ATerm d_6 (ATerm z_19, ATerm a_20, ATerm t)
{
  ATerm s_23 = NULL,w_23 = NULL;
  t = a_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_20;
    }
  else
    {
      ATerm r_10 = NULL,v_10 = NULL,j_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_23 = ATgetFirst((ATermList) t);
          w_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_20);
      r_10 = t;
      t = w_23;
      {
        static ATerm g_11 (ATerm t)
        {
          ATerm d_11 = t;
          int e_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_10 = NULL;
              x_10 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_10;
              LocalPopChoice(e_11);
            }
          else
            {
              t = d_11;
              {
                ATerm y_10 = NULL;
                t = Cons_2_0(_id, g_11, t);
                y_10 = t;
                t = (ATerm) ATinsert(CheckATermList(y_10), z_19);
              }
            }
          return(t);
        }
        t = g_11(t);
      }
      v_10 = t;
      t = (ATerm) ATinsert(CheckATermList(v_10), s_23);
      j_9 = t;
      t = SSLsetAnnotations(j_9, r_10);
    }
  return(t);
}
ATerm tov_1_0 (ATerm m_70 (ATerm), ATerm t)
{
  ATerm l_24 = NULL,s_25 = NULL,w_25 = NULL,a_26 = NULL;
  a_26 = t;
  if(match_cons(t, sym_L_2))
    {
      s_25 = ATgetArgument(t, 0);
      w_25 = ATgetArgument(t, 1);
      {
        ATerm f_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_11 = NULL,o_9 = NULL;
            t = SSLgetAnnotations(a_26);
            u_11 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, s_25, w_25);
            o_9 = t;
            t = SSLsetAnnotations(o_9, u_11);
            LocalPopChoice(k_11);
          }
        else
          {
            t = f_11;
            {
              ATerm b_26 = NULL;
              t = term_h_7;
              t = m_70(t);
              b_26 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_l_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_26))), b_26))));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_LNAT_2))
        {
          s_25 = ATgetArgument(t, 0);
          w_25 = ATgetArgument(t, 1);
          {
            ATerm m_11 = t;
            int q_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_12 = NULL,r_9 = NULL;
                t = SSLgetAnnotations(a_26);
                o_12 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, s_25, w_25);
                r_9 = t;
                t = SSLsetAnnotations(r_9, o_12);
                LocalPopChoice(q_11);
              }
            else
              {
                t = m_11;
                {
                  ATerm c_26 = NULL;
                  t = term_h_7;
                  t = m_70(t);
                  c_26 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_l_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_26))), c_26))));
                }
              }
          }
        }
      else
        {
          ATerm d_26 = NULL;
          t = term_h_7;
          t = m_70(t);
          d_26 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_l_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, a_26))), d_26))));
        }
    }
  l_24 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_l_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, l_24))));
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
  ATerm h_26 = NULL;
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(o_1, t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      t = term_v_11;
    }
  h_26 = t;
  if(match_int(t, 0))
    {
      t = term_w_11;
    }
  else
    {
      ATerm i_26 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, h_26, term_b_11);
      t = copy_0_0(t);
      i_26 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, i_26);
    }
  return(t);
}
static ATerm e_6 (ATerm n_37, ATerm o_37, ATerm t)
{
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(n_37, o_37);
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      t = SSL_subtr(n_37, o_37);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm t)
{
  static ATerm m_26 (ATerm t)
  {
    ATerm a_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_72(t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = a_12;
        t = c_72(t);
        t = m_26(t);
      }
    return(t);
  }
  t = m_26(t);
  return(t);
}
ATerm for_3_0 (ATerm e_72 (ATerm), ATerm f_72 (ATerm), ATerm g_72 (ATerm), ATerm t)
{
  t = e_72(t);
  t = while_not_2_0(f_72, g_72, t);
  return(t);
}
static ATerm p_1 (ATerm t)
{
  ATerm n_26 = NULL,r_26 = NULL;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      r_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, n_26, r_26, (ATerm) ATempty);
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm u_26 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      if(((ATgetType(e_12) != AT_INT) || (ATgetInt((ATermInt) e_12) != 0)))
        _fail(t);
      {
        ATerm f_12 = ATgetArgument(t, 1);
      }
      u_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = u_26;
  return(t);
}
static ATerm n_2 (ATerm t)
{
  ATerm z_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,h_27 = NULL;
  if(match_cons(t, sym__3))
    {
      z_26 = ATgetArgument(t, 0);
      b_27 = ATgetArgument(t, 1);
      c_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, z_26, term_u_10);
  t = geq_0_0(t);
  t = term_u_10;
  h_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_26, term_u_10);
  t = e_6(z_26, h_27, t);
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, d_27, b_27, (ATerm) ATinsert(CheckATermList(c_27), b_27));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(p_1, l_2, n_2, t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm f_102 (ATerm), ATerm t)
{
  ATerm i_27 = NULL;
  static ATerm o_2 (ATerm t)
  {
    ATerm k_27 = NULL,n_27 = NULL,s_27 = NULL,u_27 = NULL,v_27 = NULL,u_9 = NULL;
    v_27 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        n_27 = ATgetArgument(t, 0);
        s_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(v_27);
    k_27 = t;
    t = n_27;
    t = f_102(t);
    u_27 = t;
    t = s_27;
    if(((i_27 != NULL) && (i_27 != t)))
      _fail(t);
    else
      i_27 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, u_27, s_27);
    u_9 = t;
    t = SSLsetAnnotations(u_9, k_27);
    return(t);
  }
  t = fetch_1_0(o_2, t);
  t = SSL_string_to_int(not_null(i_27));
  return(t);
}
static ATerm p_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm x_27 = NULL;
  ATerm g_12 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(p_2, t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = g_12;
      t = term_v_11;
    }
  x_27 = t;
  if(match_int(t, 0))
    {
      t = term_w_11;
    }
  else
    {
      ATerm y_27 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, x_27, term_j_10);
      t = copy_0_0(t);
      y_27 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, y_27)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm k_28 = NULL,g_28 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      g_28 = ATgetArgument(t, 0);
      t = g_28;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          g_28 = ATgetArgument(t, 0);
          t = g_28;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              g_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = g_28;
        }
    }
  t = Hspace_0_0(t);
  k_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = k_28;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, k_28);
    }
  return(t);
}
static ATerm f_6 (ATerm p_70 (ATerm), ATerm n_17, ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL;
  t = term_h_7;
  t = p_70(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      s_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_17, s_29);
  {
    static ATerm y_32 (ATerm t)
    {
      static ATerm z_32 (ATerm a_30, ATerm b_30, ATerm c_30, ATerm i_30, ATerm j_30, ATerm t)
      {
        ATerm t_30 = NULL,u_30 = NULL,v_30 = NULL;
        t = i_30;
        {
          ATerm i_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm l_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(j_12);
              t = term_p_12;
            }
          else
            {
              t = i_12;
              {
                ATerm q_12 = t;
                int r_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm u_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_12);
                    t = term_v_12;
                  }
                else
                  {
                    t = q_12;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm x_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_y_12;
                  }
              }
            }
        }
        t_30 = t;
        t = i_30;
        t = make_hs_0_0(t);
        u_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(c_30), b_30), j_30);
        t = y_32(t);
        v_30 = t;
        t = (ATerm) ATinsert(ATinsert(CheckATermList(v_30), u_30), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, t_30), a_30));
        return(t);
      }
      static ATerm a_33 (ATerm y_30, ATerm z_30, ATerm a_31, ATerm b_31, ATerm t)
      {
        ATerm i_31 = NULL,j_31 = NULL;
        t = a_31;
        {
          ATerm b_13 = t;
          int c_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm e_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(c_13);
              t = term_p_12;
            }
          else
            {
              t = b_13;
              {
                ATerm g_13 = t;
                int h_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm i_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_13);
                    t = term_v_12;
                  }
                else
                  {
                    t = g_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm j_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_y_12;
                  }
              }
            }
        }
        i_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_30, b_31);
        t = y_32(t);
        j_31 = t;
        t = (ATerm) ATinsert(CheckATermList(j_31), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, i_31), y_30));
        return(t);
      }
      ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
      if(match_cons(t, sym__2))
        {
          r_31 = ATgetArgument(t, 0);
          u_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = r_31;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_31 = ATgetFirst((ATermList) t);
              t_31 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_31;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_31 = ATgetFirst((ATermList) t);
              w_31 = (ATerm) ATgetNext((ATermList) t);
              t = t_31;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  o_31 = ATgetFirst((ATermList) t);
                  p_31 = (ATerm) ATgetNext((ATermList) t);
                  t = s_31;
                  if(match_cons(t, sym_C_2))
                    {
                      m_31 = ATgetArgument(t, 0);
                      n_31 = ATgetArgument(t, 1);
                      {
                        ATerm k_13 = t;
                        int m_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm j_32 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
                            t = y_32(t);
                            j_32 = t;
                            t = (ATerm) ATinsert(CheckATermList(j_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, m_31, n_31))));
                            LocalPopChoice(m_13);
                          }
                        else
                          {
                            t = k_13;
                            {
                              ATerm o_13 = t;
                              int q_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = z_32(s_31, o_31, p_31, v_31, w_31, t);
                                  LocalPopChoice(q_13);
                                }
                              else
                                {
                                  t = o_13;
                                  t = a_33(s_31, t_31, v_31, w_31, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_13 = t;
                      int t_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = z_32(s_31, o_31, p_31, v_31, w_31, t);
                          LocalPopChoice(t_13);
                        }
                      else
                        {
                          t = r_13;
                          t = a_33(s_31, t_31, v_31, w_31, t);
                        }
                    }
                }
              else
                {
                  t = s_31;
                  if(match_cons(t, sym_C_2))
                    {
                      m_31 = ATgetArgument(t, 0);
                      n_31 = ATgetArgument(t, 1);
                      {
                        ATerm v_13 = t;
                        int x_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm q_32 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
                            t = y_32(t);
                            q_32 = t;
                            t = (ATerm) ATinsert(CheckATermList(q_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, m_31, n_31))));
                            LocalPopChoice(x_13);
                          }
                        else
                          {
                            t = v_13;
                            t = a_33(s_31, t_31, v_31, w_31, t);
                          }
                      }
                    }
                  else
                    {
                      t = a_33(s_31, t_31, v_31, w_31, t);
                    }
                }
            }
          else
            {
              ATerm x_32 = NULL;
              t = s_31;
              if(match_cons(t, sym_C_2))
                {
                  m_31 = ATgetArgument(t, 0);
                  n_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, t_31, u_31);
              t = y_32(t);
              x_32 = t;
              t = (ATerm) ATinsert(CheckATermList(x_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, m_31, n_31))));
            }
        }
      return(t);
    }
    t = y_32(t);
  }
  t_29 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_l_11), (ATerm) ATinsert(ATempty, t_29));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm s_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  ATerm y_13 = t;
  if((PushChoice() == 0))
    {
      ATerm u_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,w_9 = NULL;
      y_34 = t;
      if(match_cons(t, sym_R_2))
        {
          w_34 = ATgetArgument(t, 0);
          x_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(y_34);
      u_34 = t;
      t = x_34;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, w_34, x_34);
      w_9 = t;
      t = SSLsetAnnotations(w_9, u_34);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_13;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm i_33 = NULL;
  i_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_33, (ATerm) ATempty);
  {
    static ATerm z_34 (ATerm t)
    {
      ATerm j_33 = NULL,k_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL;
      if(match_cons(t, sym__2))
        {
          m_33 = ATgetArgument(t, 0);
          p_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = m_33;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm x_33 = NULL;
          t = p_33;
          t = reverse_acc_2_0(_id, q_2, t);
          x_33 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, x_33));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              n_33 = ATgetFirst((ATermList) t);
              o_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = n_33;
          if(match_cons(t, sym_R_2))
            {
              j_33 = ATgetArgument(t, 0);
              k_33 = ATgetArgument(t, 1);
              {
                ATerm z_13 = t;
                int a_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_34 = NULL,g_34 = NULL;
                    t = p_33;
                    t = reverse_acc_2_0(_id, s_2, t);
                    d_34 = t;
                    t = (ATerm) ATmakeAppl(sym__2, o_33, (ATerm) ATempty);
                    t = z_34(t);
                    g_34 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(g_34), (ATerm) ATmakeAppl(sym_R_2, j_33, k_33)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, d_34));
                    LocalPopChoice(a_14);
                  }
                else
                  {
                    t = z_13;
                    t = (ATerm) ATmakeAppl(sym__2, o_33, (ATerm) ATinsert(CheckATermList(p_33), n_33));
                    t = z_34(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, o_33, (ATerm) ATinsert(CheckATermList(p_33), n_33));
              t = z_34(t);
            }
        }
      return(t);
    }
    t = z_34(t);
  }
  t = filter_1_0(t_2, t);
  return(t);
}
static ATerm w_2 (ATerm t)
{
  ATerm b_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_14;
    }
  return(t);
}
static ATerm x_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_e_14);
  return(t);
}
static ATerm y_2 (ATerm t)
{
  ATerm f_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_14;
    }
  return(t);
}
static ATerm z_2 (ATerm t)
{
  ATerm g_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_14;
    }
  return(t);
}
static ATerm c_3 (ATerm t)
{
  t = term_w_11;
  return(t);
}
static ATerm f_3 (ATerm t)
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
static ATerm h_3 (ATerm t)
{
  ATerm e_37 = NULL;
  if(match_cons(t, sym_S_1))
    {
      e_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = e_37;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm j_36 = NULL,k_36 = NULL,l_36 = NULL,m_36 = NULL;
  l_36 = t;
  if(match_cons(t, sym_REF_2))
    {
      m_36 = ATgetArgument(t, 0);
      k_36 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, m_36, k_36);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          m_36 = ATgetArgument(t, 0);
          k_36 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, k_36), (ATerm) ATmakeAppl(sym_ANCHOR_1, m_36));
        }
      else
        {
          ATerm i_14 = t;
          int j_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm k_14 = ATgetArgument(t, 0);
                  ATerm m_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(j_14);
              t = term_n_14;
            }
          else
            {
              t = i_14;
              {
                ATerm o_14 = t;
                int p_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm q_14 = ATgetArgument(t, 0);
                        ATerm r_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(p_14);
                    t = term_n_14;
                  }
                else
                  {
                    t = o_14;
                    {
                      ATerm s_14 = t;
                      int t_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              m_36 = ATgetArgument(t, 0);
                              {
                                ATerm u_14 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_14);
                          t = m_36;
                        }
                      else
                        {
                          t = s_14;
                          if(match_cons(t, sym_A_3))
                            {
                              m_36 = ATgetArgument(t, 0);
                              k_36 = ATgetArgument(t, 1);
                              j_36 = ATgetArgument(t, 2);
                              {
                                ATerm u_36 = NULL,w_36 = NULL,x_36 = NULL,f_13 = NULL;
                                t = j_36;
                                t = construct_rows_0_0(t);
                                u_36 = t;
                                t = k_36;
                                t = Vspace_0_0(t);
                                w_36 = t;
                                t = u_36;
                                {
                                  static ATerm u_2 (ATerm t)
                                  {
                                    ATerm y_36 = NULL;
                                    static ATerm v_2 (ATerm t)
                                    {
                                      t = m_36;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm w_14 = ATgetArgument(t, 0);
                                        if(((ATgetType(w_14) != AT_LIST) || !(ATisEmpty(w_14))))
                                          _fail(t);
                                        y_36 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = f_6(v_2, y_36, t);
                                    return(t);
                                  }
                                  t = map_1_0(u_2, t);
                                }
                                f_13 = t;
                                t = (ATerm) ATmakeAppl(sym__2, w_36, f_13);
                                t = d_6(w_36, f_13, t);
                                x_36 = t;
                                t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_36)))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  m_36 = ATgetArgument(t, 0);
                                  k_36 = ATgetArgument(t, 1);
                                  {
                                    ATerm l_13 = NULL;
                                    t = m_36;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm z_14 = t;
                                      int b_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = k_36;
                                          t = filter_1_0(w_2, t);
                                          LocalPopChoice(b_15);
                                        }
                                      else
                                        {
                                          t = z_14;
                                          {
                                            ATerm d_14 = NULL,l_14 = NULL;
                                            t = at_last_1_0(x_2, t);
                                            l_13 = t;
                                            t = k_36;
                                            t = filter_1_0(y_2, t);
                                            l_14 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, l_13, l_14);
                                            t = d_6(l_13, l_14, t);
                                            d_14 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, d_14), term_f_15);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      m_36 = ATgetArgument(t, 0);
                                      k_36 = ATgetArgument(t, 1);
                                      {
                                        ATerm v_14 = NULL,x_14 = NULL,y_14 = NULL,a_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,i_15 = NULL,k_15 = NULL,r_15 = NULL,y_9 = NULL;
                                        t = m_36;
                                        t = Vspace_0_0(t);
                                        x_14 = t;
                                        t = m_36;
                                        t = Ispace_0_0(t);
                                        v_14 = t;
                                        t = k_36;
                                        t = filter_1_0(z_2, t);
                                        k_15 = t;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            c_15 = ATgetFirst((ATermList) t);
                                            d_15 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(k_15);
                                        a_15 = t;
                                        t = c_15;
                                        t = tov_1_0(c_3, t);
                                        e_15 = t;
                                        t = d_15;
                                        {
                                          static ATerm d_3 (ATerm t)
                                          {
                                            static ATerm e_3 (ATerm t)
                                            {
                                              t = v_14;
                                              return(t);
                                            }
                                            t = tov_1_0(e_3, t);
                                            return(t);
                                          }
                                          t = map_1_0(d_3, t);
                                        }
                                        i_15 = t;
                                        t = (ATerm) ATinsert(CheckATermList(i_15), e_15);
                                        y_9 = t;
                                        t = SSLsetAnnotations(y_9, a_15);
                                        r_15 = t;
                                        t = (ATerm) ATmakeAppl(sym__2, x_14, r_15);
                                        t = d_6(x_14, r_15, t);
                                        y_14 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, y_14)), term_f_15);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          m_36 = ATgetArgument(t, 0);
                                          k_36 = ATgetArgument(t, 1);
                                          {
                                            ATerm b_37 = NULL;
                                            static ATerm g_3 (ATerm t)
                                            {
                                              t = not_null(b_37);
                                              return(t);
                                            }
                                            t = m_36;
                                            t = Hspace_0_0(t);
                                            if(((b_37 != NULL) && (b_37 != t)))
                                              _fail(t);
                                            else
                                              b_37 = t;
                                            t = k_36;
                                            t = filter_1_0(f_3, t);
                                            t = sep_by_1_0(g_3, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              m_36 = ATgetArgument(t, 0);
                                              k_36 = ATgetArgument(t, 1);
                                              t = m_36;
                                              {
                                                ATerm g_15 = t;
                                                int h_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_l_15), (ATerm) ATinsert(ATempty, k_36));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_n_15), (ATerm) ATinsert(ATempty, k_36));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_o_15), (ATerm) ATinsert(ATempty, k_36));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_q_15), (ATerm) ATinsert(ATempty, k_36));
                                                              }
                                                          }
                                                      }
                                                    LocalPopChoice(h_15);
                                                  }
                                                else
                                                  {
                                                    t = g_15;
                                                    t = k_36;
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  m_36 = ATgetArgument(t, 0);
                                                  k_36 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm d_37 = NULL;
                                                    t = m_36;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = k_36;
                                                    t = map_1_0(h_3, t);
                                                    d_37 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_t_15), (ATerm) ATinsert(ATempty, d_37)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      m_36 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = m_36;
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
ATerm topdown_1_0 (ATerm k_72 (ATerm), ATerm t)
{
  static ATerm j_3 (ATerm t)
  {
    t = topdown_1_0(k_72, t);
    return(t);
  }
  t = k_72(t);
  t = SRTS_all(j_3, t);
  return(t);
}
ATerm at_end_1_0 (ATerm m_79 (ATerm), ATerm t)
{
  static ATerm h_38 (ATerm t)
  {
    ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL;
    g_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_38 = ATgetFirst((ATermList) t);
        f_38 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm h_16 = NULL,l_16 = NULL,f_10 = NULL;
          t = SSLgetAnnotations(g_38);
          h_16 = t;
          t = f_38;
          t = h_38(t);
          l_16 = t;
          t = (ATerm) ATinsert(CheckATermList(l_16), e_38);
          f_10 = t;
          t = SSLsetAnnotations(f_10, h_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = g_38;
        t = m_79(t);
      }
    return(t);
  }
  t = h_38(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm m_37 = NULL,p_37 = NULL,q_37 = NULL;
  m_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_37;
    }
  else
    {
      static ATerm k_3 (ATerm t)
      {
        t = not_null(q_37);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_37 = ATgetFirst((ATermList) t);
          if(((q_37 != NULL) && (q_37 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            q_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_37;
      t = at_end_1_0(k_3, t);
    }
  return(t);
}
static ATerm e_39 (ATerm l_38, ATerm t)
{
  ATerm m_38 = NULL;
  t = SSL_explode_term(l_38);
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_38;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
  b_39 = t;
  if(match_cons(t, sym__2))
    {
      z_38 = ATgetArgument(t, 0);
      a_39 = ATgetArgument(t, 1);
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_3 (ATerm t)
            {
              t = a_39;
              return(t);
            }
            t = z_38;
            t = at_end_1_0(l_3, t);
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = e_39(b_39, t);
          }
      }
    }
  else
    {
      t = e_39(b_39, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm x_79 (ATerm), ATerm t)
{
  static ATerm c_40 (ATerm t)
  {
    ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL;
    z_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_40 = ATgetFirst((ATermList) t);
        b_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_16 = NULL,i_10 = NULL;
          t = SSLgetAnnotations(z_39);
          v_16 = t;
          t = b_40;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(b_40), a_40);
          i_10 = t;
          t = SSLsetAnnotations(i_10, v_16);
          t = x_79(t);
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          {
            ATerm g_17 = NULL,j_17 = NULL,k_10 = NULL;
            t = SSLgetAnnotations(z_39);
            g_17 = t;
            t = b_40;
            t = c_40(t);
            j_17 = t;
            t = (ATerm) ATinsert(CheckATermList(j_17), a_40);
            k_10 = t;
            t = SSLsetAnnotations(k_10, g_17);
          }
        }
    }
    return(t);
  }
  t = c_40(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm q_79 (ATerm), ATerm t)
{
  static ATerm s_40 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_79(t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        {
          ATerm p_40 = NULL,q_40 = NULL,r_40 = NULL,s_17 = NULL,v_17 = NULL,o_10 = NULL;
          p_40 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_40 = ATgetFirst((ATermList) t);
              r_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(p_40);
          s_17 = t;
          t = r_40;
          t = s_40(t);
          v_17 = t;
          t = (ATerm) ATinsert(CheckATermList(v_17), q_40);
          o_10 = t;
          t = SSLsetAnnotations(o_10, s_17);
        }
      }
    return(t);
  }
  t = s_40(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  static ATerm m_3 (ATerm t)
  {
    ATerm w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,c_11 = NULL,s_10 = NULL;
    e_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        a_41 = ATgetFirst((ATermList) t);
        b_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(e_41);
    z_40 = t;
    t = a_41;
    t = j_79(t);
    c_41 = t;
    t = (ATerm) ATinsert(CheckATermList(b_41), c_41);
    s_10 = t;
    t = SSLsetAnnotations(s_10, z_40);
    d_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        x_40 = ATgetFirst((ATermList) t);
        y_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_41);
    w_40 = t;
    t = y_40;
    if(((u_40 != NULL) && (u_40 != t)))
      _fail(t);
    else
      u_40 = t;
    t = (ATerm) ATinsert(CheckATermList(y_40), x_40);
    c_11 = t;
    t = SSLsetAnnotations(c_11, w_40);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(m_3, t);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_40, not_null(u_40));
  return(t);
}
static ATerm g_6 (ATerm u_15, ATerm p_15, ATerm t)
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
  t = p_15;
  {
    static ATerm n_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((j_41 != NULL) && (j_41 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            j_41 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
            if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
              {
                if(((f_41 != NULL) && (f_41 != ATgetFirst((ATermList) c_16))))
                  _fail(ATgetFirst((ATermList) c_16));
                else
                  f_41 = ATgetFirst((ATermList) c_16);
                if(((g_41 != NULL) && (g_41 != (ATerm) ATgetNext((ATermList) c_16))))
                  _fail((ATerm) ATgetNext((ATermList) c_16));
                else
                  g_41 = (ATerm) ATgetNext((ATermList) c_16);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(n_3, t);
  }
  if(match_cons(t, sym__2))
    {
      i_41 = ATgetArgument(t, 0);
      h_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_41;
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
  t = (ATerm) ATinsert(CheckATermList(not_null(g_41)), not_null(f_41));
  {
    static ATerm p_3 (ATerm t)
    {
      ATerm m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,z_11 = NULL;
      p_41 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_41 = ATgetFirst((ATermList) t);
          o_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(p_41);
      m_41 = t;
      t = o_41;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(o_41), n_41);
      z_11 = t;
      t = SSLsetAnnotations(z_11, m_41);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, u_15, (ATerm) ATinsert(CheckATermList(h_41), n_41)));
      return(t);
    }
    t = at_last_1_0(p_3, t);
  }
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(j_41), k_41)));
  t = conc_0_0(t);
  l_41 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, u_15, l_41);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  a_42 = t;
  if(match_cons(t, sym_H_2))
    {
      y_41 = ATgetArgument(t, 0);
      z_41 = ATgetArgument(t, 1);
      t = z_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_41 = ATgetFirst((ATermList) t);
          x_41 = (ATerm) ATgetNext((ATermList) t);
          t = x_41;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = w_41;
            }
          else
            {
              ATerm e_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_42;
                  t = g_6(y_41, z_41, t);
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = e_16;
                  t = a_42;
                }
            }
        }
      else
        {
          ATerm g_16 = t;
          int i_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_42;
              t = g_6(y_41, z_41, t);
              LocalPopChoice(i_16);
            }
          else
            {
              t = g_16;
              t = a_42;
            }
        }
    }
  else
    {
      ATerm j_16 = t;
      int k_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_V_2))
            {
              ATerm m_16 = ATgetArgument(t, 0);
              z_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(k_16);
          t = z_41;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_41 = ATgetFirst((ATermList) t);
              x_41 = (ATerm) ATgetNext((ATermList) t);
              t = x_41;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = w_41;
                }
              else
                {
                  t = a_42;
                }
            }
          else
            {
              t = a_42;
            }
        }
      else
        {
          t = j_16;
          t = a_42;
        }
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(q_3, t);
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
    }
  return(t);
}
static ATerm s_3 (ATerm t)
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
  ATerm s_42 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(r_3, t);
  s_42 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, s_42)))));
  t = bottomup_1_0(s_3, t);
  return(t);
}
static ATerm m_43 (ATerm e_43, ATerm t)
{
  t = SSL_fclose(e_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm h_43 = NULL,k_43 = NULL;
  k_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_43 = ATgetArgument(t, 0);
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(h_43);
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            t = m_43(k_43, t);
          }
      }
    }
  else
    {
      t = m_43(k_43, t);
    }
  return(t);
}
static ATerm h_6 (ATerm t_19, ATerm t)
{
  t = SSL_read_term_from_stream(t_19);
  return(t);
}
static ATerm i_6 (ATerm n_34, ATerm o_34, ATerm t)
{
  ATerm n_43 = NULL;
  t = SSL_fopen(n_34, o_34);
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm o_43 = NULL;
  t = SSL_stdin_stream();
  o_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm p_43 = NULL;
  t = SSL_stdout_stream();
  p_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, p_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm q_43 = NULL;
  t = SSL_stderr_stream();
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_43);
  return(t);
}
static ATerm c_45 (ATerm b_44, ATerm t)
{
  ATerm c_44 = NULL;
  t = SSL_explode_term(b_44);
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm w_16 = ATgetArgument(t, 1);
        if(((ATgetType(w_16) == AT_LIST) && !(ATisEmpty(w_16))))
          {
            c_44 = ATgetFirst((ATermList) w_16);
            {
              ATerm x_16 = (ATerm) ATgetNext((ATermList) w_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = c_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = c_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = c_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = c_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm d_45 (ATerm f_44, ATerm g_44, ATerm h_44, ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,n_44 = NULL,b_12 = NULL;
  t = SSLgetAnnotations(h_44);
  k_44 = t;
  t = f_44;
  if(match_cons(t, sym_Path_1))
    {
      n_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_44, g_44);
  b_12 = t;
  t = SSLsetAnnotations(b_12, k_44);
  if(match_cons(t, sym__2))
    {
      i_44 = ATgetArgument(t, 0);
      j_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(i_44, j_44, t);
  return(t);
}
static ATerm e_45 (ATerm p_44, ATerm q_44, ATerm r_44, ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL,x_44 = NULL,c_12 = NULL;
  t = SSLgetAnnotations(r_44);
  u_44 = t;
  t = SSL_is_string(p_44);
  x_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_44, q_44);
  c_12 = t;
  t = SSLsetAnnotations(c_12, u_44);
  if(match_cons(t, sym__2))
    {
      s_44 = ATgetArgument(t, 0);
      t_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_6(s_44, t_44, t);
  return(t);
}
static ATerm j_6 (ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL,b_45 = NULL;
  z_44 = t;
  if(match_cons(t, sym__2))
    {
      a_45 = ATgetArgument(t, 0);
      b_45 = ATgetArgument(t, 1);
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = c_45(z_44, t);
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm a_17 = t;
              int b_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = d_45(a_45, b_45, z_44, t);
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = a_17;
                  t = e_45(a_45, b_45, z_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = c_45(z_44, t);
    }
  return(t);
}
static ATerm t_3 (ATerm t)
{
  t = term_c_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_45 = NULL;
      i_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_45, term_f_17);
      t = j_6(t);
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      t = debug_1_0(t_3, t);
      _fail(t);
    }
  g_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_6(h_45, t);
  f_45 = t;
  t = g_45;
  t = fclose_0_0(t);
  t = f_45;
  return(t);
}
static ATerm k_6 (ATerm e_34, ATerm f_34, ATerm t)
{
  t = SSL_access(e_34, f_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_45 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_45 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_17);
      o_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_45, (ATerm) ATinsert(ATempty, term_i_17));
      t = k_6(m_45, o_45, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm l_6 (ATerm p_39, ATerm q_39, ATerm t)
{
  t = SSL_copy(p_39, q_39);
  return(t);
}
ATerm copy_to_1_0 (ATerm r_0 (ATerm), ATerm t)
{
  ATerm e_46 = NULL,f_46 = NULL;
  e_46 = t;
  if(match_cons(t, sym_FILE_1))
    {
      f_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_18 = NULL;
        t = e_46;
        t = r_0(t);
        j_18 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = j_18;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = j_18;
          }
        t = (ATerm) ATmakeAppl(sym__2, f_46, j_18);
        t = l_6(f_46, j_18, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, f_46);
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        {
          ATerm m_17 = t;
          int o_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_18 = NULL;
              t = e_46;
              t = r_0(t);
              w_18 = t;
              {
                ATerm p_17 = t;
                if((PushChoice() == 0))
                  {
                    ATerm x_18 = NULL;
                    x_18 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = x_18;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = x_18;
                          }
                        else
                          {
                            t = x_18;
                            if((f_46 != t))
                              {
                                _fail(t);
                              }
                            t = x_18;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = p_17;
                  }
              }
              t = (ATerm) ATmakeAppl(sym__2, f_46, w_18);
              t = l_6(f_46, w_18, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_46);
              LocalPopChoice(o_17);
            }
          else
            {
              t = m_17;
              t = e_46;
              t = r_0(t);
              if((f_46 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, f_46);
            }
        }
      }
  }
  return(t);
}
static ATerm m_6 (ATerm n_48, ATerm o_48, ATerm t)
{
  ATerm j_46 = NULL,k_46 = NULL;
  k_46 = t;
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, n_48, o_48);
        t = r_6(n_48, o_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_17 = ATgetFirst((ATermList) t);
            j_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_17);
        t = SSL_table_put(n_48, o_48, j_46);
        t = (ATerm) ATmakeAppl(sym__3, n_48, o_48, j_46);
      }
    else
      {
        t = q_17;
        t = SSL_table_remove(n_48, o_48);
        t = (ATerm) ATmakeAppl(sym__2, n_48, o_48);
      }
  }
  t = k_46;
  return(t);
}
ATerm end_scope_1_0 (ATerm g_91 (ATerm), ATerm t)
{
  ATerm l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL;
  o_46 = t;
  t = g_91(t);
  n_46 = t;
  {
    ATerm u_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_46 = NULL;
        t = term_c_7;
        q_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_46, term_c_7);
        t = r_6(n_46, q_46, t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = u_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
  }
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_46 = ATgetFirst((ATermList) t);
      l_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_c_7;
  p_46 = t;
  t = SSL_table_put(n_46, p_46, l_46);
  t = m_46;
  {
    static ATerm u_3 (ATerm t)
    {
      ATerm r_46 = NULL;
      r_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, n_46, r_46);
      t = m_6(n_46, r_46, t);
      return(t);
    }
    t = map_1_0(u_3, t);
  }
  t = o_46;
  return(t);
}
ATerm restore_always_2_0 (ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_71(t);
      t = h_71(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      t = h_71(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm f_91 (ATerm), ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL,x_46 = NULL;
  u_46 = t;
  t = f_91(t);
  t_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_46, term_c_7);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_18 = ATgetArgument(t, 0);
            ATerm c_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_c_7;
        b_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_46, term_c_7);
        t = r_6(t_46, b_47, t);
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATempty;
      }
  }
  v_46 = t;
  t = term_c_7;
  w_46 = t;
  t = (ATerm) ATinsert(CheckATermList(v_46), (ATerm) ATempty);
  x_46 = t;
  t = SSL_table_put(t_46, w_46, x_46);
  t = u_46;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_d_7;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm k_47 = NULL;
  k_47 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(k_47);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = k_47;
      }
  }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_d_7;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm a_103 (ATerm), ATerm t)
{
  ATerm e_47 = NULL;
  static ATerm w_3 (ATerm t)
  {
    ATerm f_47 = NULL;
    f_47 = t;
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_47 = NULL,h_47 = NULL;
          t = term_d_7;
          g_47 = t;
          t = term_c_7;
          h_47 = t;
          t = term_h_18;
          t = r_6(g_47, h_47, t);
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
    }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((e_47 != NULL) && (e_47 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          e_47 = ATgetFirst((ATermList) t);
        {
          ATerm i_18 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = e_47;
    t = map_1_0(x_3, t);
    t = f_47;
    t = end_scope_1_0(y_3, t);
    return(t);
  }
  t = begin_scope_1_0(v_3, t);
  t = restore_always_2_0(a_103, w_3, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_18;
      t = get_config_0_0(t);
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      t = term_o_18;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm b_103 (ATerm), ATerm t)
{
  static ATerm z_3 (ATerm t)
  {
    ATerm p_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_47 = NULL;
        t = term_s_18;
        t = get_config_0_0(t);
        n_47 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, n_47);
        LocalPopChoice(r_18);
      }
    else
      {
        t = p_18;
        t = term_h_17;
      }
    t = b_103(t);
    t = copy_to_1_0(a_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(z_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm o_47 = NULL,p_47 = NULL,v_47 = NULL,w_47 = NULL,x_47 = NULL;
  o_47 = t;
  t = term_h_7;
  t = whoami_0_0(t);
  p_47 = t;
  t = term_t_18;
  w_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_18), p_47), term_u_18);
  x_47 = t;
  t = SSL_printnl(w_47, x_47);
  t = term_u_10;
  v_47 = t;
  t = SSL_exit(v_47);
  t = o_47;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm z_47 = NULL;
  z_47 = t;
  if(match_string(t, "-k"))
    {
      t = z_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = z_47;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
  a_48 = t;
  t = SSL_string_to_int(a_48);
  b_48 = t;
  t = term_y_18;
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_18, b_48);
  t = u_6(c_48, b_48, t);
  t = a_48;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_z_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, c_4, d_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm e_48 = NULL;
  e_48 = t;
  if(match_string(t, "-S"))
    {
      t = e_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = e_48;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm g_48 = NULL,k_48 = NULL;
  t = term_a_19;
  g_48 = t;
  t = term_v_11;
  k_48 = t;
  t = term_b_19;
  t = u_6(g_48, k_48, t);
  t = term_c_19;
  return(t);
}
static ATerm g_4 (ATerm t)
{
  t = term_d_19;
  return(t);
}
static ATerm h_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_4 (ATerm t)
{
  ATerm l_48 = NULL,p_48 = NULL,q_48 = NULL;
  l_48 = t;
  t = SSL_string_to_int(l_48);
  p_48 = t;
  t = term_a_19;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, p_48);
  t = u_6(q_48, p_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, l_48);
  return(t);
}
static ATerm j_4 (ATerm t)
{
  t = term_e_19;
  return(t);
}
static ATerm k_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm l_4 (ATerm t)
{
  ATerm r_48 = NULL,s_48 = NULL;
  t = term_f_19;
  r_48 = t;
  t = term_h_7;
  s_48 = t;
  t = term_g_19;
  t = u_6(r_48, s_48, t);
  t = term_h_19;
  return(t);
}
static ATerm m_4 (ATerm t)
{
  t = term_i_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, f_4, g_4, t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = l_19;
      {
        ATerm n_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_4, i_4, j_4, t);
            LocalPopChoice(q_19);
          }
        else
          {
            t = n_19;
            t = Option_3_0(k_4, l_4, m_4, t);
          }
      }
    }
  return(t);
}
static ATerm u_6 (ATerm i_43, ATerm j_43, ATerm t)
{
  ATerm t_48 = NULL;
  t = term_r_19;
  t_48 = t;
  t = SSL_table_put(t_48, i_43, j_43);
  t = (ATerm) ATmakeAppl(sym__3, term_r_19, i_43, j_43);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
      t = term_h_7;
      t = i_0(t);
      y_48 = t;
      t = term_s_19;
      z_48 = t;
      t = term_u_19;
      a_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_19, term_u_19, y_48);
      t = s_6(z_48, a_49, y_48, t);
      _fail(t);
    }
  else
    {
      ATerm d_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          w_48 = ATgetFirst((ATermList) t);
          x_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_48;
      t = d_0(t);
      t = term_h_7;
      t = g_0(t);
      d_49 = t;
      t = (ATerm) ATinsert(CheckATermList(x_48), d_49);
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_49 = NULL;
  f_49 = t;
  if(match_string(t, "-o"))
    {
      t = f_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = f_49;
    }
  return(t);
}
static ATerm p_4 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  g_49 = t;
  t = term_m_18;
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_18, g_49);
  t = u_6(h_49, g_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_49);
  return(t);
}
static ATerm q_4 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(o_4, p_4, q_4, t);
  return(t);
}
static ATerm s_6 (ATerm i_48, ATerm j_48, ATerm h_48, ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_48, j_48);
  {
    ATerm w_19 = t;
    int x_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm y_19 = ATgetArgument(t, 0);
            ATerm b_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, i_48, j_48);
        t = r_6(i_48, j_48, t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = (ATerm) ATempty;
      }
  }
  k_49 = t;
  t = (ATerm) ATinsert(CheckATermList(k_49), h_48);
  l_49 = t;
  t = SSL_table_put(i_48, j_48, l_49);
  t = j_49;
  return(t);
}
ATerm ArgOption_3_0 (ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
      t = term_h_7;
      t = p_0(t);
      w_49 = t;
      t = term_s_19;
      x_49 = t;
      t = term_u_19;
      y_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_s_19, term_u_19, w_49);
      t = s_6(x_49, y_49, w_49, t);
      _fail(t);
    }
  else
    {
      ATerm e_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_49 = ATgetFirst((ATermList) t);
          t_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_49 = ATgetFirst((ATermList) t);
          v_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_49;
      t = n_0(t);
      t = u_49;
      t = o_0(t);
      e_50 = t;
      t = (ATerm) ATinsert(CheckATermList(v_49), e_50);
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm g_50 = NULL;
  g_50 = t;
  if(match_string(t, "-i"))
    {
      t = g_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = g_50;
    }
  return(t);
}
static ATerm s_4 (ATerm t)
{
  ATerm h_50 = NULL,i_50 = NULL;
  h_50 = t;
  t = term_s_18;
  i_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_18, h_50);
  t = u_6(i_50, h_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, h_50);
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(r_4, s_4, t_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_h_7;
  t = whoami_0_0(t);
  j_50 = t;
  t = term_t_18;
  l_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_20), j_50);
  m_50 = t;
  t = SSL_printnl(l_50, m_50);
  t = term_u_10;
  k_50 = t;
  t = SSL_exit(k_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_20;
  t = get_config_0_0(t);
  return(t);
}
static ATerm n_6 (ATerm h_37, ATerm i_37, ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(h_37, i_37);
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = SSL_addr(h_37, i_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm z_84 (ATerm), ATerm a_85 (ATerm), ATerm t)
{
  ATerm o_50 = NULL,p_50 = NULL,q_50 = NULL;
  o_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_50;
      t = z_84(t);
    }
  else
    {
      ATerm t_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_50 = ATgetFirst((ATermList) t);
          q_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = q_50;
      t = foldr_2_0(z_84, a_85, t);
      t_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_50, t_50);
      t = a_85(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm u_4 (ATerm t)
{
  t = term_v_11;
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm o_19 = NULL,p_19 = NULL;
  if(match_cons(t, sym__2))
    {
      o_19 = ATgetArgument(t, 0);
      p_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_6(o_19, p_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_50 = NULL,j_19 = NULL,k_19 = NULL;
  t = times_0_0(t);
  k_19 = t;
  t = SSL_explode_term(k_19);
  if(match_cons(t, sym__2))
    {
      ATerm h_20 = ATgetArgument(t, 0);
      j_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_19;
  t = foldr_2_0(u_4, v_4, t);
  w_50 = t;
  t = SSL_TicksToSeconds(w_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL;
  h_51 = t;
  if(match_cons(t, sym__2))
    {
      i_51 = ATgetArgument(t, 0);
      j_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_51;
        if((i_51 != t))
          {
            _fail(t);
          }
        t = h_51;
        LocalPopChoice(k_20);
      }
    else
      {
        t = i_20;
        t = (ATerm) ATmakeAppl(sym__2, i_51, j_51);
        {
          ATerm l_20 = t;
          int q_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_51, j_51);
              LocalPopChoice(q_20);
            }
          else
            {
              t = l_20;
              t = SSL_gtr(i_51, j_51);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, i_51, j_51);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm l_93 (ATerm), ATerm t)
{
  ATerm n_51 = NULL;
  n_51 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_51 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        p_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_51, term_u_10);
        t = geq_0_0(t);
        t = n_51;
        t = l_93(t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = n_51;
      }
  }
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm r_51 = NULL,s_51 = NULL,u_51 = NULL,v_51 = NULL;
  t = run_time_0_0(t);
  r_51 = t;
  t = term_h_7;
  t = whoami_0_0(t);
  s_51 = t;
  t = term_t_18;
  u_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), r_51), term_t_20), s_51);
  v_51 = t;
  t = SSL_printnl(u_51, v_51);
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), r_51), term_t_20), s_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(w_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm w_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_11;
  w_51 = t;
  t = SSL_exit(w_51);
  return(t);
}
static ATerm x_4 (ATerm t)
{
  ATerm e_52 = NULL,f_52 = NULL;
  f_52 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = f_52;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          e_52 = ATgetArgument(t, 0);
          {
            ATerm p_20 = NULL,k_12 = NULL;
            t = SSLgetAnnotations(f_52);
            p_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, e_52);
            k_12 = t;
            t = SSLsetAnnotations(k_12, p_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = f_52;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_20;
      t = get_config_0_0(t);
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = fetch_1_0(x_4, t);
    }
  t = b_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm t)
{
  ATerm i_52 = NULL,j_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_52 = ATgetFirst((ATermList) t);
      j_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm n_52 = NULL,o_52 = NULL;
        static ATerm y_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(n_52)), not_null(o_52));
          return(t);
        }
        t = j_52;
        t = l_0(t);
        if(((n_52 != NULL) && (n_52 != t)))
          _fail(t);
        else
          n_52 = t;
        t = i_52;
        t = k_0(t);
        if(((o_52 != NULL) && (o_52 != t)))
          _fail(t);
        else
          o_52 = t;
        t = j_52;
        t = reverse_acc_2_0(k_0, y_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_h_7;
      t = l_0(t);
    }
  return(t);
}
static ATerm z_4 (ATerm t)
{
  ATerm s_52 = NULL,t_52 = NULL,u_52 = NULL,w_12 = NULL;
  u_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(u_52);
  s_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, t_52);
  w_12 = t;
  t = SSLsetAnnotations(w_12, s_52);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm w_52 = NULL;
  w_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, w_52), term_y_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm q_52 = NULL,r_52 = NULL;
  ATerm z_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_20;
      t = get_config_0_0(t);
      LocalPopChoice(a_21);
    }
  else
    {
      t = z_20;
      t = fetch_1_0(z_4, t);
    }
  t = term_b_21;
  t = echo_0_0(t);
  t = term_s_19;
  q_52 = t;
  t = term_u_19;
  r_52 = t;
  t = term_c_21;
  t = r_6(q_52, r_52, t);
  t = reverse_acc_2_0(_id, a_5, t);
  t = map_1_0(b_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  static ATerm y_53 (ATerm t)
  {
    ATerm v_53 = NULL,w_53 = NULL,x_53 = NULL;
    v_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_53 = ATgetFirst((ATermList) t);
        x_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_21 = NULL,m_21 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(v_53);
          h_21 = t;
          t = w_53;
          t = g_79(t);
          m_21 = t;
          t = (ATerm) ATinsert(CheckATermList(x_53), m_21);
          z_12 = t;
          t = SSLsetAnnotations(z_12, h_21);
          LocalPopChoice(g_21);
        }
      else
        {
          t = f_21;
          {
            ATerm e_22 = NULL,l_22 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(v_53);
            e_22 = t;
            t = x_53;
            t = y_53(t);
            l_22 = t;
            t = (ATerm) ATinsert(CheckATermList(l_22), w_53);
            a_13 = t;
            t = SSLsetAnnotations(a_13, e_22);
          }
        }
    }
    return(t);
  }
  t = y_53(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
  c_54 = t;
  {
    ATerm i_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = c_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_21 = ATgetFirst((ATermList) t);
                ATerm n_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = c_54;
          }
        LocalPopChoice(j_21);
      }
    else
      {
        t = i_21;
        t = (ATerm) ATinsert(ATempty, c_54);
      }
  }
  d_54 = t;
  t = term_o_18;
  e_54 = t;
  t = SSL_printnl(e_54, d_54);
  t = c_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm q_6 (ATerm e_33, ATerm f_33, ATerm t)
{
  t = SSL_strcat(e_33, f_33);
  return(t);
}
ATerm debug_1_0 (ATerm l_78 (ATerm), ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL,r_54 = NULL;
  o_54 = t;
  t = l_78(t);
  p_54 = t;
  t = term_t_18;
  q_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_54), p_54);
  r_54 = t;
  t = SSL_printnl(q_54, r_54);
  t = o_54;
  return(t);
}
ATerm map_1_0 (ATerm w_78 (ATerm), ATerm t)
{
  static ATerm l_55 (ATerm t)
  {
    ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
    i_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = i_55;
      }
    else
      {
        ATerm v_22 = NULL,y_22 = NULL,c_23 = NULL,d_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            j_55 = ATgetFirst((ATermList) t);
            k_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(i_55);
        v_22 = t;
        t = j_55;
        t = w_78(t);
        y_22 = t;
        t = k_55;
        t = l_55(t);
        c_23 = t;
        t = (ATerm) ATinsert(CheckATermList(c_23), y_22);
        d_13 = t;
        t = SSLsetAnnotations(d_13, v_22);
      }
    return(t);
  }
  t = l_55(t);
  return(t);
}
static ATerm c_5 (ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
    }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  t = term_q_21;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_55 = NULL;
      t_55 = t;
      t = SSL_is_string(t_55);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm t_21 = t;
        int u_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(c_5, t);
            LocalPopChoice(u_21);
          }
        else
          {
            t = t_21;
            {
              ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL;
              b_56 = t;
              if(match_cons(t, sym_Path_1))
                {
                  c_56 = ATgetArgument(t, 0);
                  t = c_56;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      c_56 = ATgetArgument(t, 0);
                      t = c_56;
                      {
                        ATerm v_21 = t;
                        int w_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            LocalPopChoice(w_21);
                          }
                        else
                          {
                            t = v_21;
                            t = debug_1_0(e_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm h_56 = NULL,i_56 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          c_56 = ATgetArgument(t, 0);
                          d_56 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = c_56;
                      t = eval_config_0_0(t);
                      h_56 = t;
                      t = d_56;
                      t = eval_config_0_0(t);
                      i_56 = t;
                      t = (ATerm) ATmakeAppl(sym__2, h_56, i_56);
                      t = q_6(h_56, i_56, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm r_6 (ATerm z_49, ATerm a_50, ATerm t)
{
  t = SSL_table_get(z_49, a_50);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm m_56 = NULL,n_56 = NULL;
  m_56 = t;
  t = term_r_19;
  n_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, m_56);
  t = r_6(n_56, m_56, t);
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_56 = NULL,p_56 = NULL;
        t = eval_config_0_0(t);
        o_56 = t;
        t = term_r_19;
        p_56 = t;
        t = SSL_table_put(p_56, m_56, o_56);
        t = o_56;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
      }
  }
  return(t);
}
static ATerm f_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  ATerm s_56 = NULL,t_56 = NULL;
  t = term_z_21;
  s_56 = t;
  t = term_h_7;
  t_56 = t;
  t = term_a_22;
  t = u_6(s_56, t_56, t);
  return(t);
}
static ATerm h_5 (ATerm t)
{
  t = term_b_22;
  return(t);
}
static ATerm i_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_5 (ATerm t)
{
  ATerm u_56 = NULL,v_56 = NULL,w_56 = NULL,x_56 = NULL;
  t = term_z_21;
  w_56 = t;
  t = term_h_7;
  x_56 = t;
  t = term_a_22;
  t = u_6(w_56, x_56, t);
  t = term_d_22;
  u_56 = t;
  t = term_h_7;
  v_56 = t;
  t = term_h_22;
  t = u_6(u_56, v_56, t);
  t = term_i_22;
  return(t);
}
static ATerm k_5 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int m_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_5, g_5, h_5, t);
      LocalPopChoice(m_22);
    }
  else
    {
      t = k_22;
      t = Option_3_0(i_5, j_5, k_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_55 (ATerm), ATerm x_55 (ATerm), ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,d_57 = NULL,s_13 = NULL;
  d_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      z_56 = ATgetFirst((ATermList) t);
      a_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_57);
  y_56 = t;
  t = z_56;
  t = w_55(t);
  b_57 = t;
  t = a_57;
  t = x_55(t);
  c_57 = t;
  t = (ATerm) ATinsert(CheckATermList(c_57), b_57);
  s_13 = t;
  t = SSLsetAnnotations(s_13, y_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_98 (ATerm), ATerm t)
{
  ATerm i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,n_57 = NULL,o_57 = NULL,u_13 = NULL;
  i_57 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_22;
        t = e_98(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
      }
  }
  t = i_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_57 = ATgetFirst((ATermList) t);
      l_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_57);
  j_57 = t;
  t = term_e_20;
  o_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_20, k_57);
  t = u_6(o_57, k_57, t);
  t = l_57;
  {
    static ATerm y_57 (ATerm t)
    {
      ATerm r_22 = t;
      int s_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_57 = NULL;
              r_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = r_57;
              LocalPopChoice(u_22);
            }
          else
            {
              t = t_22;
              t = e_98(t);
              t = Cons_2_0(_id, y_57, t);
            }
          LocalPopChoice(s_22);
        }
      else
        {
          t = r_22;
          {
            ATerm u_57 = NULL,v_57 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_57 = ATgetFirst((ATermList) t);
                v_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(v_57), (ATerm) ATmakeAppl(sym_Undefined_1, u_57));
          }
        }
      return(t);
    }
    t = y_57(t);
  }
  n_57 = t;
  t = (ATerm) ATinsert(CheckATermList(n_57), (ATerm) ATmakeAppl(sym_Program_1, k_57));
  u_13 = t;
  t = SSLsetAnnotations(u_13, j_57);
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm k_58 = NULL;
  k_58 = t;
  if(match_string(t, "--help"))
    {
      t = k_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = k_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = k_58;
        }
    }
  return(t);
}
static ATerm n_5 (ATerm t)
{
  ATerm l_58 = NULL,m_58 = NULL;
  t = term_x_20;
  l_58 = t;
  t = term_h_7;
  m_58 = t;
  t = term_w_22;
  t = u_6(l_58, m_58, t);
  t = term_x_22;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  t = term_z_22;
  return(t);
}
static ATerm p_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL,j_58 = NULL;
  f_58 = t;
  t = term_s_19;
  h_58 = t;
  t = term_u_19;
  i_58 = t;
  t = (ATerm) ATempty;
  j_58 = t;
  t = SSL_table_put(h_58, i_58, j_58);
  t = f_58;
  {
    static ATerm l_5 (ATerm t)
    {
      ATerm a_23 = t;
      int b_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_98(t);
          LocalPopChoice(b_23);
        }
      else
        {
          t = a_23;
          {
            ATerm d_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(m_5, n_5, o_5, t);
                LocalPopChoice(e_23);
              }
            else
              {
                t = d_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(l_5, t);
  }
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_58 = NULL;
        t_58 = t;
        {
          ATerm h_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_24 = NULL;
              t = t_58;
              {
                ATerm j_23 = t;
                int k_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = term_x_20;
                    t = get_config_0_0(t);
                    LocalPopChoice(k_23);
                  }
                else
                  {
                    t = j_23;
                    t = fetch_1_0(p_5, t);
                  }
              }
              t = t_58;
              t = default_system_usage_0_0(t);
              t = term_v_11;
              c_24 = t;
              t = SSL_exit(c_24);
              LocalPopChoice(i_23);
            }
          else
            {
              t = h_23;
              {
                ATerm j_24 = NULL;
                t = term_z_21;
                t = get_config_0_0(t);
                t = t_58;
                t = default_system_about_0_0(t);
                t = term_v_11;
                j_24 = t;
                t = SSL_exit(j_24);
              }
            }
        }
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        {
          ATerm l_23 = t;
          int m_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
              static ATerm q_5 (ATerm t)
              {
                ATerm x_58 = NULL,y_58 = NULL,z_58 = NULL,c_14 = NULL;
                z_58 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    y_58 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(z_58);
                x_58 = t;
                t = y_58;
                if(((d_58 != NULL) && (d_58 != t)))
                  _fail(t);
                else
                  d_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, y_58);
                c_14 = t;
                t = SSLsetAnnotations(c_14, x_58);
                return(t);
              }
              t = fetch_1_0(q_5, t);
              t = term_t_18;
              v_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_58)), term_n_23);
              w_58 = t;
              t = SSL_printnl(v_58, w_58);
              t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_58)), term_n_23));
              t = default_system_usage_0_0(t);
              t = term_u_10;
              u_58 = t;
              t = SSL_exit(u_58);
              LocalPopChoice(m_23);
            }
          else
            {
              t = l_23;
            }
        }
      }
  }
  e_58 = t;
  t = term_s_19;
  g_58 = t;
  t = SSL_table_destroy(g_58);
  t = e_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm t)
{
  ATerm e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL;
  t = parse_options_1_0(d_96, t);
  e_59 = t;
  t = term_o_23;
  h_59 = t;
  t = SSL_table_create(h_59);
  t = term_o_23;
  f_59 = t;
  t = term_p_23;
  g_59 = t;
  t = SSL_table_put(f_59, g_59, e_59);
  t = e_59;
  t = f_96(t);
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_96, t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_96(t);
              t = report_success_0_0(t);
              LocalPopChoice(u_23);
            }
          else
            {
              t = t_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm v_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_23);
    }
  else
    {
      t = v_23;
      {
        ATerm y_23 = t;
        int z_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            LocalPopChoice(z_23);
          }
        else
          {
            t = y_23;
            {
              ATerm a_24 = t;
              int b_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(t_5, u_5, v_5, t);
                  LocalPopChoice(b_24);
                }
              else
                {
                  t = a_24;
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
static ATerm s_5 (ATerm t)
{
  t = xtc_io_1_0(w_5, t);
  return(t);
}
static ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_5 (ATerm t)
{
  ATerm j_59 = NULL,k_59 = NULL;
  t = term_f_24;
  j_59 = t;
  t = term_h_7;
  k_59 = t;
  t = term_g_24;
  t = u_6(j_59, k_59, t);
  t = term_h_24;
  return(t);
}
static ATerm v_5 (ATerm t)
{
  t = term_i_24;
  return(t);
}
static ATerm w_5 (ATerm t)
{
  t = read_from_0_0(t);
  t = abox2html_0_0(t);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(r_5, default_usage_0_0, _id, s_5, t);
  return(t);
}

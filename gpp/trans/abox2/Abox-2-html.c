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
ATerm term_y_22;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_q_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_q_21;
ATerm term_e_21;
ATerm term_c_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_v_19;
ATerm term_s_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_h_18;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_f_17;
ATerm term_c_17;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_n_15;
ATerm term_a_15;
ATerm term_m_14;
ATerm term_d_14;
ATerm term_y_12;
ATerm term_w_12;
ATerm term_q_12;
ATerm term_x_11;
ATerm term_v_11;
ATerm term_p_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_k_10;
ATerm term_e_10;
ATerm term_z_9;
ATerm term_t_9;
ATerm term_h_9;
ATerm term_e_9;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_g_8;
ATerm term_f_8;
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
ATerm term_q_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_u_6;
ATerm term_s_6;
ATerm term_o_6;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("/StrategoXT", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("XXXXXX", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
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
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(sym_TDTD_0);
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
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_b_7);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_v_11);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_v_11);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_f_7);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
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
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_s_19);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_z_21, term_f_7);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_f_7);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym__2, term_x_20, term_f_7);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__2, term_f_24, term_f_7);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
static ATerm h_1 (ATerm s_0, ATerm t);
static ATerm i_1 (ATerm u_0, ATerm v_0, ATerm z_0, ATerm t);
static ATerm a_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
static ATerm z_5 (ATerm g_91 (ATerm), ATerm s_38, ATerm q_38, ATerm t);
ATerm P__tmpdir_0_0 (ATerm t);
static ATerm h_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Html2text_0_0 (ATerm t);
ATerm bottomup_1_0 (ATerm i_72 (ATerm), ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm l_73 (ATerm), ATerm t);
static ATerm p_0 (ATerm t);
ATerm replace_quotes_0_0 (ATerm t);
ATerm listtd_1_0 (ATerm c_80 (ATerm), ATerm t);
static ATerm q_0 (ATerm t);
static ATerm t_0 (ATerm t);
ATerm html_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm z_101 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
static ATerm x_0 (ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm j_1 (ATerm t);
ATerm make_html_comment_0_0 (ATerm t);
static ATerm n_1 (ATerm t);
ATerm sep_by_1_0 (ATerm k_70 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm a_86 (ATerm), ATerm t);
static ATerm o_1 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
static ATerm c_6 (ATerm z_19, ATerm a_20, ATerm t);
ATerm tov_1_0 (ATerm j_70 (ATerm), ATerm t);
static ATerm x_1 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
static ATerm d_6 (ATerm k_37, ATerm l_37, ATerm t);
ATerm while_not_2_0 (ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm t);
ATerm for_3_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm t);
static ATerm c_2 (ATerm t);
static ATerm j_2 (ATerm t);
static ATerm l_2 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm SOpt_value_1_0 (ATerm c_102 (ATerm), ATerm t);
static ATerm q_2 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
ATerm make_hs_0_0 (ATerm t);
static ATerm e_6 (ATerm m_70 (ATerm), ATerm n_17, ATerm t);
static ATerm r_2 (ATerm t);
static ATerm t_2 (ATerm t);
static ATerm u_2 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm x_2 (ATerm t);
static ATerm y_2 (ATerm t);
static ATerm a_3 (ATerm t);
static ATerm b_3 (ATerm t);
static ATerm c_3 (ATerm t);
static ATerm f_3 (ATerm t);
static ATerm h_3 (ATerm t);
ATerm Abox2html_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm h_72 (ATerm), ATerm t);
ATerm at_end_1_0 (ATerm j_79 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm d_39 (ATerm v_38, ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm at_last_1_0 (ATerm u_79 (ATerm), ATerm t);
ATerm at_suffix_1_0 (ATerm n_79 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm g_79 (ATerm), ATerm t);
static ATerm f_6 (ATerm u_15, ATerm p_15, ATerm t);
static ATerm p_3 (ATerm t);
ATerm normalize_0_0 (ATerm t);
static ATerm q_3 (ATerm t);
static ATerm r_3 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
static ATerm l_43 (ATerm d_43, ATerm t);
ATerm fclose_0_0 (ATerm t);
static ATerm g_6 (ATerm t_19, ATerm t);
static ATerm h_6 (ATerm l_34, ATerm m_34, ATerm t);
ATerm stdin_stream_0_0 (ATerm t);
ATerm stdout_stream_0_0 (ATerm t);
ATerm stderr_stream_0_0 (ATerm t);
static ATerm b_45 (ATerm a_44, ATerm t);
static ATerm c_45 (ATerm e_44, ATerm f_44, ATerm g_44, ATerm t);
static ATerm d_45 (ATerm o_44, ATerm p_44, ATerm q_44, ATerm t);
static ATerm i_6 (ATerm t);
static ATerm s_3 (ATerm t);
ATerm ReadFromFile_0_0 (ATerm t);
static ATerm j_6 (ATerm c_34, ATerm d_34, ATerm t);
ATerm read_from_0_0 (ATerm t);
static ATerm k_6 (ATerm m_39, ATerm n_39, ATerm t);
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t);
static ATerm l_6 (ATerm k_48, ATerm l_48, ATerm t);
ATerm end_scope_1_0 (ATerm d_91 (ATerm), ATerm t);
ATerm restore_always_2_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm t);
ATerm begin_scope_1_0 (ATerm c_91 (ATerm), ATerm t);
static ATerm v_3 (ATerm t);
static ATerm x_3 (ATerm t);
static ATerm y_3 (ATerm t);
ATerm xtc_temp_files_1_0 (ATerm x_102 (ATerm), ATerm t);
static ATerm a_4 (ATerm t);
ATerm xtc_io_1_0 (ATerm y_102 (ATerm), ATerm t);
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
static ATerm t_6 (ATerm f_43, ATerm g_43, ATerm t);
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t);
static ATerm n_4 (ATerm t);
static ATerm o_4 (ATerm t);
static ATerm p_4 (ATerm t);
ATerm output_option_0_0 (ATerm t);
static ATerm r_6 (ATerm f_48, ATerm g_48, ATerm e_48, ATerm t);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t);
static ATerm q_4 (ATerm t);
static ATerm r_4 (ATerm t);
static ATerm s_4 (ATerm t);
ATerm input_option_0_0 (ATerm t);
ATerm report_failure_0_0 (ATerm t);
ATerm whoami_0_0 (ATerm t);
static ATerm m_6 (ATerm e_37, ATerm f_37, ATerm t);
ATerm foldr_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t);
ATerm times_0_0 (ATerm t);
static ATerm t_4 (ATerm t);
static ATerm u_4 (ATerm t);
ATerm run_time_0_0 (ATerm t);
ATerm geq_0_0 (ATerm t);
ATerm if_verbose1_1_0 (ATerm i_93 (ATerm), ATerm t);
static ATerm v_4 (ATerm t);
ATerm report_run_time_0_0 (ATerm t);
ATerm report_success_0_0 (ATerm t);
static ATerm w_4 (ATerm t);
ATerm need_help_1_0 (ATerm y_95 (ATerm), ATerm t);
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t);
static ATerm y_4 (ATerm t);
static ATerm a_5 (ATerm t);
static ATerm b_5 (ATerm t);
ATerm default_system_usage_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm d_79 (ATerm), ATerm t);
ATerm echo_0_0 (ATerm t);
ATerm default_system_about_0_0 (ATerm t);
static ATerm p_6 (ATerm c_33, ATerm d_33, ATerm t);
ATerm debug_1_0 (ATerm i_78 (ATerm), ATerm t);
ATerm map_1_0 (ATerm t_78 (ATerm), ATerm t);
static ATerm c_5 (ATerm t);
static ATerm d_5 (ATerm t);
ATerm eval_config_0_0 (ATerm t);
static ATerm q_6 (ATerm w_49, ATerm x_49, ATerm t);
ATerm get_config_0_0 (ATerm t);
static ATerm e_5 (ATerm t);
static ATerm f_5 (ATerm t);
static ATerm g_5 (ATerm t);
static ATerm h_5 (ATerm t);
static ATerm i_5 (ATerm t);
static ATerm j_5 (ATerm t);
ATerm system_about_switch_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t);
ATerm parse_options_p__1_0 (ATerm b_98 (ATerm), ATerm t);
static ATerm l_5 (ATerm t);
static ATerm m_5 (ATerm t);
static ATerm n_5 (ATerm t);
static ATerm o_5 (ATerm t);
ATerm parse_options_1_0 (ATerm a_98 (ATerm), ATerm t);
ATerm option_wrap_4_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t);
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
static ATerm h_1 (ATerm s_0, ATerm t)
{
  t = s_0;
  {
    ATerm x_5 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_6 = ATgetArgument(t, 0);
            ATerm b_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = x_5;
      }
  }
  t = term_o_6;
  t = debug_1_0(a_0, t);
  t = (ATerm) ATmakeAppl(sym__2, s_0, term_s_6);
  t = open_file_0_0(t);
  return(t);
}
static ATerm i_1 (ATerm u_0, ATerm v_0, ATerm z_0, ATerm t)
{
  t = SSL_open_file(u_0, v_0);
  return(t);
}
static ATerm a_0 (ATerm t)
{
  t = term_u_6;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm d_1 = NULL,e_1 = NULL,g_1 = NULL;
  d_1 = t;
  if(match_cons(t, sym__2))
    {
      e_1 = ATgetArgument(t, 0);
      g_1 = ATgetArgument(t, 1);
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = h_1(d_1, t);
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            t = i_1(e_1, g_1, d_1, t);
          }
      }
    }
  else
    {
      t = h_1(d_1, t);
    }
  return(t);
}
static ATerm z_5 (ATerm g_91 (ATerm), ATerm s_38, ATerm q_38, ATerm t)
{
  ATerm k_1 = NULL,l_1 = NULL,m_1 = NULL,p_1 = NULL,q_1 = NULL,r_1 = NULL;
  p_1 = t;
  t = g_91(t);
  k_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, k_1, s_38, q_38);
  t = r_6(k_1, s_38, q_38, t);
  {
    ATerm z_6 = t;
    int a_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_1 = NULL;
        t = term_b_7;
        s_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, k_1, term_b_7);
        t = q_6(k_1, s_1, t);
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
      l_1 = ATgetFirst((ATermList) t);
      m_1 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_b_7;
  q_1 = t;
  t = (ATerm) ATinsert(CheckATermList(m_1), (ATerm) ATinsert(CheckATermList(l_1), s_38));
  r_1 = t;
  t = SSL_table_put(k_1, q_1, r_1);
  t = p_1;
  return(t);
}
ATerm P__tmpdir_0_0 (ATerm t)
{
  t = SSL_P_tmpdir();
  return(t);
}
static ATerm h_0 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm t_1 = NULL,u_1 = NULL,v_1 = NULL,w_1 = NULL,y_1 = NULL,z_1 = NULL,a_2 = NULL,b_2 = NULL;
  t = P__tmpdir_0_0(t);
  w_1 = t;
  t = term_d_7;
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_1, term_d_7);
  t = p_6(w_1, b_2, t);
  z_1 = t;
  t = term_e_7;
  a_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, z_1, term_e_7);
  t = p_6(z_1, a_2, t);
  y_1 = t;
  t = SSL_mkstemp(y_1);
  if(match_cons(t, sym__2))
    {
      u_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_f_7;
  v_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_1, term_f_7);
  t = z_5(h_0, u_1, v_1, t);
  t = SSL_close(t_1);
  t = u_1;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm e_2 = NULL,f_2 = NULL;
  e_2 = t;
  t = xtc_new_file_0_0(t);
  f_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_2, term_s_6);
  t = open_file_0_0(t);
  t = e_2;
  {
    static ATerm j_0 (ATerm t)
    {
      ATerm k_2 = NULL;
      k_2 = t;
      {
        ATerm g_7 = t;
        int j_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 = NULL,f_0 = NULL;
            t = SSL_is_string(k_2);
            b_0 = t;
            t = (ATerm) ATinsert(ATempty, b_0);
            f_0 = t;
            t = SSL_print(f_2, f_0);
            t = b_0;
            LocalPopChoice(j_7);
          }
        else
          {
            t = g_7;
            t = k_2;
          }
      }
      return(t);
    }
    t = topdown_1_0(j_0, t);
  }
  t = SSL_close_file(f_2);
  t = (ATerm) ATmakeAppl(sym_FILE_1, f_2);
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm p_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      z_2 = ATgetArgument(t, 0);
      p_2 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_7), p_2), term_l_7), z_2), term_k_7);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          z_2 = ATgetArgument(t, 0);
          p_2 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_7), p_2), term_l_7), z_2), term_n_7);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              z_2 = ATgetArgument(t, 0);
              p_2 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_7), p_2), term_l_7), z_2), term_q_7);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  z_2 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_7), z_2), term_r_7);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      z_2 = ATgetArgument(t, 0);
                      p_2 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_7), p_2), term_l_7), z_2), term_t_7);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          z_2 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), z_2), term_v_7);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              z_2 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), z_2), term_x_7);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  z_2 = ATgetArgument(t, 0);
                                  p_2 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_8), p_2), term_a_8), z_2), term_z_7);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      z_2 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), z_2), term_c_8);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_f_8;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_g_8;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_i_8;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_j_8;
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
ATerm bottomup_1_0 (ATerm i_72 (ATerm), ATerm t)
{
  static ATerm m_0 (ATerm t)
  {
    t = bottomup_1_0(i_72, t);
    return(t);
  }
  t = SRTS_all(m_0, t);
  t = i_72(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm r_10 = NULL,v_10 = NULL,y_10 = NULL;
  r_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_10;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_10 = ATgetFirst((ATermList) t);
          y_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_8 = t;
        int m_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_0 = NULL,y_0 = NULL,g_2 = NULL;
            t = SSLgetAnnotations(r_10);
            r_0 = t;
            t = v_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_10;
            t = flat_list_0_0(t);
            y_0 = t;
            t = (ATerm) ATinsert(CheckATermList(y_0), v_10);
            g_2 = t;
            t = SSLsetAnnotations(g_2, r_0);
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
                  ATerm d_2 = NULL,n_2 = NULL,o_2 = NULL,s_2 = NULL,h_2 = NULL;
                  t = SSLgetAnnotations(r_10);
                  o_2 = t;
                  t = v_10;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = v_10;
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
                      t = v_10;
                    }
                  t = (ATerm) ATinsert(CheckATermList(y_10), v_10);
                  h_2 = t;
                  t = SSLsetAnnotations(h_2, o_2);
                  s_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_2 = ATgetFirst((ATermList) t);
                      {
                        ATerm r_8 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = s_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_8 = ATgetFirst((ATermList) t);
                      d_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, n_2, d_2);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(o_8);
                }
              else
                {
                  t = n_8;
                  {
                    ATerm k_3 = NULL,u_3 = NULL,i_2 = NULL;
                    t = SSLgetAnnotations(r_10);
                    k_3 = t;
                    t = y_10;
                    t = flat_list_0_0(t);
                    u_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(u_3), v_10);
                    i_2 = t;
                    t = SSLsetAnnotations(i_2, k_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  static ATerm e_11 (ATerm t)
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_73(t);
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        t = SRTS_one(e_11, t);
      }
    return(t);
  }
  t = e_11(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  ATerm o_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm b_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(b_9) != AT_INT) || (ATgetInt((ATermInt) b_9) != 34)))
        _fail(t);
      o_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(o_11), term_e_9), term_e_9);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,m_11 = NULL,n_11 = NULL,s_8 = NULL;
  n_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      i_11 = ATgetFirst((ATermList) t);
      m_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_11);
  h_11 = t;
  t = i_11;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(m_11), i_11);
  s_8 = t;
  t = SSLsetAnnotations(s_8, h_11);
  t = m_11;
  t = oncetd_1_0(p_0, t);
  g_11 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(g_11), term_h_9), term_h_9);
  return(t);
}
ATerm listtd_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  static ATerm r_12 (ATerm t)
  {
    ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
    t = c_80(t);
    k_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = k_12;
      }
    else
      {
        ATerm z_4 = NULL,p_5 = NULL,u_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            l_12 = ATgetFirst((ATermList) t);
            m_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(k_12);
        z_4 = t;
        t = m_12;
        t = r_12(t);
        p_5 = t;
        t = (ATerm) ATinsert(CheckATermList(p_5), l_12);
        u_8 = t;
        t = SSLsetAnnotations(u_8, z_4);
      }
    return(t);
  }
  t = r_12(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm j_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      LocalPopChoice(l_9);
    }
  else
    {
      t = j_9;
    }
  return(t);
}
static ATerm t_0 (ATerm t)
{
  ATerm u_13 = NULL;
  u_13 = t;
  if(match_int(t, 32))
    {
      ATerm m_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_5 = NULL;
          t = term_g_8;
          y_5 = t;
          t = SSL_explode_string(y_5);
          LocalPopChoice(o_9);
        }
      else
        {
          t = m_9;
          t = u_13;
        }
    }
  else
    {
      if(match_int(t, 38))
        {
          ATerm q_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_6 = NULL;
              t = term_t_9;
              n_6 = t;
              t = SSL_explode_string(n_6);
              LocalPopChoice(r_9);
            }
          else
            {
              t = q_9;
              t = u_13;
            }
        }
      else
        {
          if(match_int(t, 60))
            {
              ATerm v_9 = t;
              int x_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_6 = NULL;
                  t = term_z_9;
                  v_6 = t;
                  t = SSL_explode_string(v_6);
                  LocalPopChoice(x_9);
                }
              else
                {
                  t = v_9;
                  t = u_13;
                }
            }
          else
            {
              if(match_int(t, 62))
                {
                  ATerm a_10 = t;
                  int d_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_6 = NULL;
                      t = term_e_10;
                      w_6 = t;
                      t = SSL_explode_string(w_6);
                      LocalPopChoice(d_10);
                    }
                  else
                    {
                      t = a_10;
                      t = u_13;
                    }
                }
              else
                {
                  t = u_13;
                }
            }
        }
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm l_13 = NULL,m_13 = NULL;
  m_13 = t;
  t = SSL_explode_string(m_13);
  t = listtd_1_0(q_0, t);
  t = map_1_0(t_0, t);
  t = flat_list_0_0(t);
  l_13 = t;
  t = SSL_implode_string(l_13);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm z_101 (ATerm), ATerm t)
{
  static ATerm m_16 (ATerm t)
  {
    ATerm g_15 = NULL,i_15 = NULL,m_15 = NULL;
    m_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        g_15 = ATgetFirst((ATermList) t);
        i_15 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm f_10 = t;
          int i_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_7 = NULL,i_7 = NULL,p_7 = NULL,d_9 = NULL;
              t = SSLgetAnnotations(m_15);
              i_7 = t;
              t = g_15;
              t = z_101(t);
              p_7 = t;
              t = (ATerm) ATinsert(CheckATermList(i_15), p_7);
              d_9 = t;
              t = SSLsetAnnotations(d_9, i_7);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_10 = ATgetFirst((ATermList) t);
                  h_7 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_7;
              t = m_16(t);
              LocalPopChoice(i_10);
            }
          else
            {
              t = f_10;
              t = m_15;
            }
        }
      }
    else
      {
        t = m_15;
      }
    return(t);
  }
  t = m_16(t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm x_0 (ATerm t)
{
  ATerm k_8 = NULL;
  k_8 = t;
  if(match_int(t, 9))
    {
      t = k_8;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = k_8;
    }
  return(t);
}
static ATerm a_1 (ATerm t)
{
  ATerm y_8 = NULL;
  y_8 = t;
  if(match_int(t, 9))
    {
      t = y_8;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = y_8;
    }
  return(t);
}
static ATerm b_1 (ATerm t)
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
static ATerm f_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm z_20 = NULL;
  z_20 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_10), z_20);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm m_18 = NULL,n_18 = NULL;
  n_18 = t;
  t = SSL_explode_string(n_18);
  t = reverse_acc_2_0(_id, w_0, t);
  m_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_18, (ATerm) ATempty);
  {
    static ATerm d_21 (ATerm t)
    {
      ATerm i_20 = NULL,j_20 = NULL,m_20 = NULL,n_20 = NULL;
      if(match_cons(t, sym__2))
        {
          i_20 = ATgetArgument(t, 0);
          n_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_20;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm e_8 = NULL,h_8 = NULL;
          t = n_20;
          t = remove_trailing_1_0(x_0, t);
          h_8 = t;
          t = SSL_implode_string(h_8);
          e_8 = t;
          t = (ATerm) ATinsert(ATempty, e_8);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_20 = ATgetFirst((ATermList) t);
              m_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_20;
          if(match_int(t, 10))
            {
              ATerm m_10 = t;
              int n_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
                  t = n_20;
                  t = remove_trailing_1_0(a_1, t);
                  x_8 = t;
                  t = SSL_implode_string(x_8);
                  v_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATempty);
                  t = d_21(t);
                  w_8 = t;
                  t = (ATerm) ATinsert(CheckATermList(w_8), v_8);
                  LocalPopChoice(n_10);
                }
              else
                {
                  t = m_10;
                  t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATinsert(CheckATermList(n_20), j_20));
                  t = d_21(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, m_20, (ATerm) ATinsert(CheckATermList(n_20), j_20));
              t = d_21(t);
            }
        }
      return(t);
    }
    t = d_21(t);
  }
  t = remove_trailing_1_0(b_1, t);
  t = reverse_acc_2_0(_id, c_1, t);
  t = remove_trailing_1_0(f_1, t);
  t = map_1_0(j_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  ATerm k_21 = NULL;
  k_21 = t;
  t = (ATerm) ATinsert(ATempty, k_21);
  return(t);
}
ATerm sep_by_1_0 (ATerm k_70 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,f_9 = NULL;
  t = map_1_0(n_1, t);
  f_9 = t;
  t = term_f_7;
  t = k_70(t);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, f_9);
  t = c_6(c_9, f_9, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm a_86 (ATerm), ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL,f_22 = NULL;
  b_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          c_22 = ATgetFirst((ATermList) t);
          f_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm p_10 = t;
        int q_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_9 = NULL,b_10 = NULL,c_10 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(b_22);
            p_9 = t;
            t = c_22;
            t = a_86(t);
            b_10 = t;
            t = f_22;
            t = filter_1_0(a_86, t);
            c_10 = t;
            t = (ATerm) ATinsert(CheckATermList(c_10), b_10);
            g_9 = t;
            t = SSLsetAnnotations(g_9, p_9);
            LocalPopChoice(q_10);
          }
        else
          {
            t = p_10;
            t = f_22;
            t = filter_1_0(a_86, t);
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
  ATerm l_22 = NULL;
  ATerm s_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(o_1, t);
      LocalPopChoice(u_10);
    }
  else
    {
      t = s_10;
      t = term_w_10;
    }
  l_22 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_22, term_z_10);
      t = copy_0_0(t);
    }
  return(t);
}
static ATerm c_6 (ATerm z_19, ATerm a_20, ATerm t)
{
  ATerm q_23 = NULL,s_23 = NULL;
  t = a_20;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_20;
    }
  else
    {
      ATerm t_10 = NULL,x_10 = NULL,i_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_23 = ATgetFirst((ATermList) t);
          s_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_20);
      t_10 = t;
      t = s_23;
      {
        static ATerm k_11 (ATerm t)
        {
          ATerm b_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_11 = NULL;
              c_11 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = c_11;
              LocalPopChoice(d_11);
            }
          else
            {
              t = b_11;
              {
                ATerm f_11 = NULL;
                t = Cons_2_0(_id, k_11, t);
                f_11 = t;
                t = (ATerm) ATinsert(CheckATermList(f_11), z_19);
              }
            }
          return(t);
        }
        t = k_11(t);
      }
      x_10 = t;
      t = (ATerm) ATinsert(CheckATermList(x_10), q_23);
      i_9 = t;
      t = SSLsetAnnotations(i_9, t_10);
    }
  return(t);
}
ATerm tov_1_0 (ATerm j_70 (ATerm), ATerm t)
{
  ATerm k_24 = NULL,r_25 = NULL,s_25 = NULL,w_25 = NULL;
  w_25 = t;
  if(match_cons(t, sym_L_2))
    {
      r_25 = ATgetArgument(t, 0);
      s_25 = ATgetArgument(t, 1);
      {
        ATerm j_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_11 = NULL,k_9 = NULL;
            t = SSLgetAnnotations(w_25);
            u_11 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, r_25, s_25);
            k_9 = t;
            t = SSLsetAnnotations(k_9, u_11);
            LocalPopChoice(l_11);
          }
        else
          {
            t = j_11;
            {
              ATerm a_26 = NULL;
              t = term_f_7;
              t = j_70(t);
              a_26 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_p_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_25))), a_26))));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_LNAT_2))
        {
          r_25 = ATgetArgument(t, 0);
          s_25 = ATgetArgument(t, 1);
          {
            ATerm q_11 = t;
            int r_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_12 = NULL,n_9 = NULL;
                t = SSLgetAnnotations(w_25);
                p_12 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, r_25, s_25);
                n_9 = t;
                t = SSLsetAnnotations(n_9, p_12);
                LocalPopChoice(r_11);
              }
            else
              {
                t = q_11;
                {
                  ATerm b_26 = NULL;
                  t = term_f_7;
                  t = j_70(t);
                  b_26 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_p_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_25))), b_26))));
                }
              }
          }
        }
      else
        {
          ATerm c_26 = NULL;
          t = term_f_7;
          t = j_70(t);
          c_26 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_p_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_25))), c_26))));
        }
    }
  k_24 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_p_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_24))));
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
  ATerm g_26 = NULL;
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(x_1, t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      t = term_v_11;
    }
  g_26 = t;
  if(match_int(t, 0))
    {
      t = term_x_11;
    }
  else
    {
      ATerm h_26 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, g_26, term_z_10);
      t = copy_0_0(t);
      h_26 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, h_26);
    }
  return(t);
}
static ATerm d_6 (ATerm k_37, ATerm l_37, ATerm t)
{
  ATerm y_11 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_37, l_37);
      LocalPopChoice(b_12);
    }
  else
    {
      t = y_11;
      t = SSL_subtr(k_37, l_37);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm y_71 (ATerm), ATerm z_71 (ATerm), ATerm t)
{
  static ATerm j_26 (ATerm t)
  {
    ATerm c_12 = t;
    int d_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_71(t);
        LocalPopChoice(d_12);
      }
    else
      {
        t = c_12;
        t = z_71(t);
        t = j_26(t);
      }
    return(t);
  }
  t = j_26(t);
  return(t);
}
ATerm for_3_0 (ATerm b_72 (ATerm), ATerm c_72 (ATerm), ATerm d_72 (ATerm), ATerm t)
{
  t = b_72(t);
  t = while_not_2_0(c_72, d_72, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL;
  if(match_cons(t, sym__2))
    {
      m_26 = ATgetArgument(t, 0);
      n_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, m_26, n_26, (ATerm) ATempty);
  return(t);
}
static ATerm j_2 (ATerm t)
{
  ATerm r_26 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm e_12 = ATgetArgument(t, 0);
      if(((ATgetType(e_12) != AT_INT) || (ATgetInt((ATermInt) e_12) != 0)))
        _fail(t);
      {
        ATerm f_12 = ATgetArgument(t, 1);
      }
      r_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = r_26;
  return(t);
}
static ATerm l_2 (ATerm t)
{
  ATerm u_26 = NULL,z_26 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL;
  if(match_cons(t, sym__3))
    {
      u_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
      b_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, u_26, term_w_10);
  t = geq_0_0(t);
  t = term_w_10;
  d_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_26, term_w_10);
  t = d_6(u_26, d_27, t);
  c_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, c_27, z_26, (ATerm) ATinsert(CheckATermList(b_27), z_26));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(c_2, j_2, l_2, t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm c_102 (ATerm), ATerm t)
{
  ATerm h_27 = NULL;
  static ATerm m_2 (ATerm t)
  {
    ATerm i_27 = NULL,k_27 = NULL,n_27 = NULL,s_27 = NULL,u_27 = NULL,s_9 = NULL;
    u_27 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        k_27 = ATgetArgument(t, 0);
        n_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(u_27);
    i_27 = t;
    t = k_27;
    t = c_102(t);
    s_27 = t;
    t = n_27;
    if(((h_27 != NULL) && (h_27 != t)))
      _fail(t);
    else
      h_27 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, s_27, n_27);
    s_9 = t;
    t = SSLsetAnnotations(s_9, i_27);
    return(t);
  }
  t = fetch_1_0(m_2, t);
  t = SSL_string_to_int(not_null(h_27));
  return(t);
}
static ATerm q_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm w_27 = NULL;
  ATerm g_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(q_2, t);
      LocalPopChoice(i_12);
    }
  else
    {
      t = g_12;
      t = term_v_11;
    }
  w_27 = t;
  if(match_int(t, 0))
    {
      t = term_x_11;
    }
  else
    {
      ATerm x_27 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, w_27, term_k_10);
      t = copy_0_0(t);
      x_27 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, x_27)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm j_28 = NULL,e_28 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      e_28 = ATgetArgument(t, 0);
      t = e_28;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          e_28 = ATgetArgument(t, 0);
          t = e_28;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              e_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = e_28;
        }
    }
  t = Hspace_0_0(t);
  j_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_28;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, j_28);
    }
  return(t);
}
static ATerm e_6 (ATerm m_70 (ATerm), ATerm n_17, ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  t = term_f_7;
  t = m_70(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      r_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_17, r_29);
  {
    static ATerm x_32 (ATerm t)
    {
      static ATerm y_32 (ATerm t_29, ATerm a_30, ATerm b_30, ATerm c_30, ATerm i_30, ATerm t)
      {
        ATerm r_30 = NULL,t_30 = NULL,u_30 = NULL;
        t = c_30;
        {
          ATerm j_12 = t;
          int n_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm o_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(n_12);
              t = term_q_12;
            }
          else
            {
              t = j_12;
              {
                ATerm t_12 = t;
                int u_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm v_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(u_12);
                    t = term_w_12;
                  }
                else
                  {
                    t = t_12;
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
        r_30 = t;
        t = c_30;
        t = make_hs_0_0(t);
        t_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(b_30), a_30), i_30);
        t = x_32(t);
        u_30 = t;
        t = (ATerm) ATinsert(ATinsert(CheckATermList(u_30), t_30), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, r_30), t_29));
        return(t);
      }
      static ATerm z_32 (ATerm x_30, ATerm y_30, ATerm z_30, ATerm a_31, ATerm t)
      {
        ATerm h_31 = NULL,i_31 = NULL;
        t = z_30;
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
              t = term_q_12;
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
                    t = term_w_12;
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
        h_31 = t;
        t = (ATerm) ATmakeAppl(sym__2, y_30, a_31);
        t = x_32(t);
        i_31 = t;
        t = (ATerm) ATinsert(CheckATermList(i_31), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, h_31), x_30));
        return(t);
      }
      ATerm l_31 = NULL,m_31 = NULL,n_31 = NULL,o_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL;
      if(match_cons(t, sym__2))
        {
          q_31 = ATgetArgument(t, 0);
          t_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_31;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_31 = ATgetFirst((ATermList) t);
              s_31 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_31;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_31 = ATgetFirst((ATermList) t);
              v_31 = (ATerm) ATgetNext((ATermList) t);
              t = s_31;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_31 = ATgetFirst((ATermList) t);
                  o_31 = (ATerm) ATgetNext((ATermList) t);
                  t = r_31;
                  if(match_cons(t, sym_C_2))
                    {
                      l_31 = ATgetArgument(t, 0);
                      m_31 = ATgetArgument(t, 1);
                      {
                        ATerm k_13 = t;
                        int o_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_32 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, s_31, t_31);
                            t = x_32(t);
                            i_32 = t;
                            t = (ATerm) ATinsert(CheckATermList(i_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, l_31, m_31))));
                            LocalPopChoice(o_13);
                          }
                        else
                          {
                            t = k_13;
                            {
                              ATerm p_13 = t;
                              int r_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = y_32(r_31, n_31, o_31, u_31, v_31, t);
                                  LocalPopChoice(r_13);
                                }
                              else
                                {
                                  t = p_13;
                                  t = z_32(r_31, s_31, u_31, v_31, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm t_13 = t;
                      int v_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_32(r_31, n_31, o_31, u_31, v_31, t);
                          LocalPopChoice(v_13);
                        }
                      else
                        {
                          t = t_13;
                          t = z_32(r_31, s_31, u_31, v_31, t);
                        }
                    }
                }
              else
                {
                  t = r_31;
                  if(match_cons(t, sym_C_2))
                    {
                      l_31 = ATgetArgument(t, 0);
                      m_31 = ATgetArgument(t, 1);
                      {
                        ATerm w_13 = t;
                        int x_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_32 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, s_31, t_31);
                            t = x_32(t);
                            p_32 = t;
                            t = (ATerm) ATinsert(CheckATermList(p_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, l_31, m_31))));
                            LocalPopChoice(x_13);
                          }
                        else
                          {
                            t = w_13;
                            t = z_32(r_31, s_31, u_31, v_31, t);
                          }
                      }
                    }
                  else
                    {
                      t = z_32(r_31, s_31, u_31, v_31, t);
                    }
                }
            }
          else
            {
              ATerm w_32 = NULL;
              t = r_31;
              if(match_cons(t, sym_C_2))
                {
                  l_31 = ATgetArgument(t, 0);
                  m_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, s_31, t_31);
              t = x_32(t);
              w_32 = t;
              t = (ATerm) ATinsert(CheckATermList(w_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, l_31, m_31))));
            }
        }
      return(t);
    }
    t = x_32(t);
  }
  s_29 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_p_11), (ATerm) ATinsert(ATempty, s_29));
  return(t);
}
static ATerm r_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm t_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm u_2 (ATerm t)
{
  ATerm y_13 = t;
  if((PushChoice() == 0))
    {
      ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,u_9 = NULL;
      x_34 = t;
      if(match_cons(t, sym_R_2))
        {
          v_34 = ATgetArgument(t, 0);
          w_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(x_34);
      u_34 = t;
      t = w_34;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, v_34, w_34);
      u_9 = t;
      t = SSLsetAnnotations(u_9, u_34);
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
  ATerm h_33 = NULL;
  h_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_33, (ATerm) ATempty);
  {
    static ATerm y_34 (ATerm t)
    {
      ATerm i_33 = NULL,j_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL,o_33 = NULL;
      if(match_cons(t, sym__2))
        {
          l_33 = ATgetArgument(t, 0);
          o_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_33;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm w_33 = NULL;
          t = o_33;
          t = reverse_acc_2_0(_id, r_2, t);
          w_33 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, w_33));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_33 = ATgetFirst((ATermList) t);
              n_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_33;
          if(match_cons(t, sym_R_2))
            {
              i_33 = ATgetArgument(t, 0);
              j_33 = ATgetArgument(t, 1);
              {
                ATerm z_13 = t;
                int b_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_34 = NULL,f_34 = NULL;
                    t = o_33;
                    t = reverse_acc_2_0(_id, t_2, t);
                    e_34 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_33, (ATerm) ATempty);
                    t = y_34(t);
                    f_34 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(f_34), (ATerm) ATmakeAppl(sym_R_2, i_33, j_33)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, e_34));
                    LocalPopChoice(b_14);
                  }
                else
                  {
                    t = z_13;
                    t = (ATerm) ATmakeAppl(sym__2, n_33, (ATerm) ATinsert(CheckATermList(o_33), m_33));
                    t = y_34(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, n_33, (ATerm) ATinsert(CheckATermList(o_33), m_33));
              t = y_34(t);
            }
        }
      return(t);
    }
    t = y_34(t);
  }
  t = filter_1_0(u_2, t);
  return(t);
}
static ATerm x_2 (ATerm t)
{
  ATerm c_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_14;
    }
  return(t);
}
static ATerm y_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_14);
  return(t);
}
static ATerm a_3 (ATerm t)
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
static ATerm b_3 (ATerm t)
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
static ATerm c_3 (ATerm t)
{
  t = term_x_11;
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
  ATerm d_37 = NULL;
  if(match_cons(t, sym_S_1))
    {
      d_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = d_37;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL,l_36 = NULL;
  k_36 = t;
  if(match_cons(t, sym_REF_2))
    {
      l_36 = ATgetArgument(t, 0);
      j_36 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, l_36, j_36);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          l_36 = ATgetArgument(t, 0);
          j_36 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, j_36), (ATerm) ATmakeAppl(sym_ANCHOR_1, l_36));
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
                  ATerm l_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(j_14);
              t = term_m_14;
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
                    t = term_m_14;
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
                              l_36 = ATgetArgument(t, 0);
                              {
                                ATerm u_14 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_14);
                          t = l_36;
                        }
                      else
                        {
                          t = s_14;
                          if(match_cons(t, sym_A_3))
                            {
                              l_36 = ATgetArgument(t, 0);
                              j_36 = ATgetArgument(t, 1);
                              i_36 = ATgetArgument(t, 2);
                              {
                                ATerm t_36 = NULL,v_36 = NULL,w_36 = NULL,f_13 = NULL;
                                t = i_36;
                                t = construct_rows_0_0(t);
                                t_36 = t;
                                t = j_36;
                                t = Vspace_0_0(t);
                                v_36 = t;
                                t = t_36;
                                {
                                  static ATerm v_2 (ATerm t)
                                  {
                                    ATerm x_36 = NULL;
                                    static ATerm w_2 (ATerm t)
                                    {
                                      t = l_36;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm v_14 = ATgetArgument(t, 0);
                                        if(((ATgetType(v_14) != AT_LIST) || !(ATisEmpty(v_14))))
                                          _fail(t);
                                        x_36 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = e_6(w_2, x_36, t);
                                    return(t);
                                  }
                                  t = map_1_0(v_2, t);
                                }
                                f_13 = t;
                                t = (ATerm) ATmakeAppl(sym__2, v_36, f_13);
                                t = c_6(v_36, f_13, t);
                                w_36 = t;
                                t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_36)))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  l_36 = ATgetArgument(t, 0);
                                  j_36 = ATgetArgument(t, 1);
                                  {
                                    ATerm n_13 = NULL;
                                    t = l_36;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm w_14 = t;
                                      int y_14 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = j_36;
                                          t = filter_1_0(x_2, t);
                                          LocalPopChoice(y_14);
                                        }
                                      else
                                        {
                                          t = w_14;
                                          {
                                            ATerm g_14 = NULL,n_14 = NULL;
                                            t = at_last_1_0(y_2, t);
                                            n_13 = t;
                                            t = j_36;
                                            t = filter_1_0(a_3, t);
                                            n_14 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, n_13, n_14);
                                            t = c_6(n_13, n_14, t);
                                            g_14 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, g_14), term_a_15);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      l_36 = ATgetArgument(t, 0);
                                      j_36 = ATgetArgument(t, 1);
                                      {
                                        ATerm x_14 = NULL,z_14 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,h_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL,t_15 = NULL,w_9 = NULL;
                                        t = l_36;
                                        t = Vspace_0_0(t);
                                        z_14 = t;
                                        t = l_36;
                                        t = Ispace_0_0(t);
                                        x_14 = t;
                                        t = j_36;
                                        t = filter_1_0(b_3, t);
                                        l_15 = t;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            d_15 = ATgetFirst((ATermList) t);
                                            h_15 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(l_15);
                                        c_15 = t;
                                        t = d_15;
                                        t = tov_1_0(c_3, t);
                                        j_15 = t;
                                        t = h_15;
                                        {
                                          static ATerm d_3 (ATerm t)
                                          {
                                            static ATerm e_3 (ATerm t)
                                            {
                                              t = x_14;
                                              return(t);
                                            }
                                            t = tov_1_0(e_3, t);
                                            return(t);
                                          }
                                          t = map_1_0(d_3, t);
                                        }
                                        k_15 = t;
                                        t = (ATerm) ATinsert(CheckATermList(k_15), j_15);
                                        w_9 = t;
                                        t = SSLsetAnnotations(w_9, c_15);
                                        t_15 = t;
                                        t = (ATerm) ATmakeAppl(sym__2, z_14, t_15);
                                        t = c_6(z_14, t_15, t);
                                        b_15 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, b_15)), term_a_15);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          l_36 = ATgetArgument(t, 0);
                                          j_36 = ATgetArgument(t, 1);
                                          {
                                            ATerm a_37 = NULL;
                                            static ATerm g_3 (ATerm t)
                                            {
                                              t = not_null(a_37);
                                              return(t);
                                            }
                                            t = l_36;
                                            t = Hspace_0_0(t);
                                            if(((a_37 != NULL) && (a_37 != t)))
                                              _fail(t);
                                            else
                                              a_37 = t;
                                            t = j_36;
                                            t = filter_1_0(f_3, t);
                                            t = sep_by_1_0(g_3, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              l_36 = ATgetArgument(t, 0);
                                              j_36 = ATgetArgument(t, 1);
                                              t = l_36;
                                              {
                                                ATerm e_15 = t;
                                                int f_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_n_15), (ATerm) ATinsert(ATempty, j_36));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_o_15), (ATerm) ATinsert(ATempty, j_36));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_q_15), (ATerm) ATinsert(ATempty, j_36));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_r_15), (ATerm) ATinsert(ATempty, j_36));
                                                              }
                                                          }
                                                      }
                                                    LocalPopChoice(f_15);
                                                  }
                                                else
                                                  {
                                                    t = e_15;
                                                    t = j_36;
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  l_36 = ATgetArgument(t, 0);
                                                  j_36 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm c_37 = NULL;
                                                    t = l_36;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = j_36;
                                                    t = map_1_0(h_3, t);
                                                    c_37 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_s_15), (ATerm) ATinsert(ATempty, c_37)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      l_36 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = l_36;
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
ATerm topdown_1_0 (ATerm h_72 (ATerm), ATerm t)
{
  static ATerm i_3 (ATerm t)
  {
    t = topdown_1_0(h_72, t);
    return(t);
  }
  t = h_72(t);
  t = SRTS_all(i_3, t);
  return(t);
}
ATerm at_end_1_0 (ATerm j_79 (ATerm), ATerm t)
{
  static ATerm g_38 (ATerm t)
  {
    ATerm d_38 = NULL,e_38 = NULL,f_38 = NULL;
    f_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_38 = ATgetFirst((ATermList) t);
        e_38 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_16 = NULL,n_16 = NULL,y_9 = NULL;
          t = SSLgetAnnotations(f_38);
          j_16 = t;
          t = e_38;
          t = g_38(t);
          n_16 = t;
          t = (ATerm) ATinsert(CheckATermList(n_16), d_38);
          y_9 = t;
          t = SSLsetAnnotations(y_9, j_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_38;
        t = j_79(t);
      }
    return(t);
  }
  t = g_38(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_37 = NULL,o_37 = NULL,p_37 = NULL;
  n_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_37;
    }
  else
    {
      static ATerm j_3 (ATerm t)
      {
        t = not_null(p_37);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_37 = ATgetFirst((ATermList) t);
          if(((p_37 != NULL) && (p_37 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_37;
      t = at_end_1_0(j_3, t);
    }
  return(t);
}
static ATerm d_39 (ATerm v_38, ATerm t)
{
  ATerm w_38 = NULL;
  t = SSL_explode_term(v_38);
  if(match_cons(t, sym__2))
    {
      ATerm v_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) v_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      w_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = w_38;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL,a_39 = NULL;
  a_39 = t;
  if(match_cons(t, sym__2))
    {
      y_38 = ATgetArgument(t, 0);
      z_38 = ATgetArgument(t, 1);
      {
        ATerm w_15 = t;
        int x_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            static ATerm l_3 (ATerm t)
            {
              t = z_38;
              return(t);
            }
            t = y_38;
            t = at_end_1_0(l_3, t);
            LocalPopChoice(x_15);
          }
        else
          {
            t = w_15;
            t = d_39(a_39, t);
          }
      }
    }
  else
    {
      t = d_39(a_39, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm u_79 (ATerm), ATerm t)
{
  static ATerm b_40 (ATerm t)
  {
    ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
    y_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_39 = ATgetFirst((ATermList) t);
        a_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_16 = NULL,g_10 = NULL;
          t = SSLgetAnnotations(y_39);
          w_16 = t;
          t = a_40;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(a_40), z_39);
          g_10 = t;
          t = SSLsetAnnotations(g_10, w_16);
          t = u_79(t);
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          {
            ATerm g_17 = NULL,j_17 = NULL,h_10 = NULL;
            t = SSLgetAnnotations(y_39);
            g_17 = t;
            t = a_40;
            t = b_40(t);
            j_17 = t;
            t = (ATerm) ATinsert(CheckATermList(j_17), z_39);
            h_10 = t;
            t = SSLsetAnnotations(h_10, g_17);
          }
        }
    }
    return(t);
  }
  t = b_40(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm n_79 (ATerm), ATerm t)
{
  static ATerm r_40 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_79(t);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        {
          ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL,s_17 = NULL,v_17 = NULL,l_10 = NULL;
          o_40 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_40 = ATgetFirst((ATermList) t);
              q_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(o_40);
          s_17 = t;
          t = q_40;
          t = r_40(t);
          v_17 = t;
          t = (ATerm) ATinsert(CheckATermList(v_17), p_40);
          l_10 = t;
          t = SSLsetAnnotations(l_10, s_17);
        }
      }
    return(t);
  }
  t = r_40(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm g_79 (ATerm), ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL;
  static ATerm m_3 (ATerm t)
  {
    ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,d_41 = NULL,a_11 = NULL,o_10 = NULL;
    d_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        z_40 = ATgetFirst((ATermList) t);
        a_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(d_41);
    y_40 = t;
    t = z_40;
    t = g_79(t);
    b_41 = t;
    t = (ATerm) ATinsert(CheckATermList(a_41), b_41);
    o_10 = t;
    t = SSLsetAnnotations(o_10, y_40);
    c_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_40 = ATgetFirst((ATermList) t);
        x_40 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_41);
    v_40 = t;
    t = x_40;
    if(((t_40 != NULL) && (t_40 != t)))
      _fail(t);
    else
      t_40 = t;
    t = (ATerm) ATinsert(CheckATermList(x_40), w_40);
    a_11 = t;
    t = SSLsetAnnotations(a_11, v_40);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(m_3, t);
  u_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_40, not_null(t_40));
  return(t);
}
static ATerm f_6 (ATerm u_15, ATerm p_15, ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,k_41 = NULL;
  t = p_15;
  {
    static ATerm n_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((i_41 != NULL) && (i_41 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            i_41 = ATgetArgument(t, 0);
          {
            ATerm c_16 = ATgetArgument(t, 1);
            if(((ATgetType(c_16) == AT_LIST) && !(ATisEmpty(c_16))))
              {
                if(((e_41 != NULL) && (e_41 != ATgetFirst((ATermList) c_16))))
                  _fail(ATgetFirst((ATermList) c_16));
                else
                  e_41 = ATgetFirst((ATermList) c_16);
                if(((f_41 != NULL) && (f_41 != (ATerm) ATgetNext((ATermList) c_16))))
                  _fail((ATerm) ATgetNext((ATermList) c_16));
                else
                  f_41 = (ATerm) ATgetNext((ATermList) c_16);
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
      h_41 = ATgetArgument(t, 0);
      g_41 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_41;
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
  t = (ATerm) ATinsert(CheckATermList(not_null(f_41)), not_null(e_41));
  {
    static ATerm o_3 (ATerm t)
    {
      ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,w_11 = NULL;
      o_41 = t;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_41 = ATgetFirst((ATermList) t);
          n_41 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(o_41);
      l_41 = t;
      t = n_41;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATinsert(CheckATermList(n_41), m_41);
      w_11 = t;
      t = SSLsetAnnotations(w_11, l_41);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, u_15, (ATerm) ATinsert(CheckATermList(g_41), m_41)));
      return(t);
    }
    t = at_last_1_0(o_3, t);
  }
  j_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, h_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(i_41), j_41)));
  t = conc_0_0(t);
  k_41 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, u_15, k_41);
  return(t);
}
static ATerm p_3 (ATerm t)
{
  ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL;
  z_41 = t;
  if(match_cons(t, sym_H_2))
    {
      x_41 = ATgetArgument(t, 0);
      y_41 = ATgetArgument(t, 1);
      t = y_41;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_41 = ATgetFirst((ATermList) t);
          w_41 = (ATerm) ATgetNext((ATermList) t);
          t = w_41;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = v_41;
            }
          else
            {
              ATerm e_16 = t;
              int f_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = z_41;
                  t = f_6(x_41, y_41, t);
                  LocalPopChoice(f_16);
                }
              else
                {
                  t = e_16;
                  t = z_41;
                }
            }
        }
      else
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = z_41;
              t = f_6(x_41, y_41, t);
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
              t = z_41;
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
              y_41 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(k_16);
          t = y_41;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              v_41 = ATgetFirst((ATermList) t);
              w_41 = (ATerm) ATgetNext((ATermList) t);
              t = w_41;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = v_41;
                }
              else
                {
                  t = z_41;
                }
            }
          else
            {
              t = z_41;
            }
        }
      else
        {
          t = i_16;
          t = z_41;
        }
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(p_3, t);
  return(t);
}
static ATerm q_3 (ATerm t)
{
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
    }
  return(t);
}
static ATerm r_3 (ATerm t)
{
  ATerm q_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Html2text_0_0(t);
      LocalPopChoice(r_16);
    }
  else
    {
      t = q_16;
    }
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm r_42 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(q_3, t);
  r_42 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, r_42)))));
  t = bottomup_1_0(r_3, t);
  return(t);
}
static ATerm l_43 (ATerm d_43, ATerm t)
{
  t = SSL_fclose(d_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_43 = NULL,j_43 = NULL;
  j_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      i_43 = ATgetArgument(t, 0);
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(i_43);
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            t = l_43(j_43, t);
          }
      }
    }
  else
    {
      t = l_43(j_43, t);
    }
  return(t);
}
static ATerm g_6 (ATerm t_19, ATerm t)
{
  t = SSL_read_term_from_stream(t_19);
  return(t);
}
static ATerm h_6 (ATerm l_34, ATerm m_34, ATerm t)
{
  ATerm m_43 = NULL;
  t = SSL_fopen(l_34, m_34);
  m_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm n_43 = NULL;
  t = SSL_stdin_stream();
  n_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm t_43 = NULL;
  t = SSL_stdout_stream();
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm u_43 = NULL;
  t = SSL_stderr_stream();
  u_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, u_43);
  return(t);
}
static ATerm b_45 (ATerm a_44, ATerm t)
{
  ATerm b_44 = NULL;
  t = SSL_explode_term(a_44);
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) u_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm v_16 = ATgetArgument(t, 1);
        if(((ATgetType(v_16) == AT_LIST) && !(ATisEmpty(v_16))))
          {
            b_44 = ATgetFirst((ATermList) v_16);
            {
              ATerm x_16 = (ATerm) ATgetNext((ATermList) v_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = b_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = b_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = b_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = b_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
static ATerm c_45 (ATerm e_44, ATerm f_44, ATerm g_44, ATerm t)
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL,m_44 = NULL,z_11 = NULL;
  t = SSLgetAnnotations(g_44);
  j_44 = t;
  t = e_44;
  if(match_cons(t, sym_Path_1))
    {
      m_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, m_44, f_44);
  z_11 = t;
  t = SSLsetAnnotations(z_11, j_44);
  if(match_cons(t, sym__2))
    {
      h_44 = ATgetArgument(t, 0);
      i_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(h_44, i_44, t);
  return(t);
}
static ATerm d_45 (ATerm o_44, ATerm p_44, ATerm q_44, ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL,t_44 = NULL,w_44 = NULL,a_12 = NULL;
  t = SSLgetAnnotations(q_44);
  t_44 = t;
  t = SSL_is_string(o_44);
  w_44 = t;
  t = (ATerm) ATmakeAppl(sym__2, w_44, p_44);
  a_12 = t;
  t = SSLsetAnnotations(a_12, t_44);
  if(match_cons(t, sym__2))
    {
      r_44 = ATgetArgument(t, 0);
      s_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_6(r_44, s_44, t);
  return(t);
}
static ATerm i_6 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  y_44 = t;
  if(match_cons(t, sym__2))
    {
      z_44 = ATgetArgument(t, 0);
      a_45 = ATgetArgument(t, 1);
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = b_45(y_44, t);
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
                  t = c_45(z_44, a_45, y_44, t);
                  LocalPopChoice(b_17);
                }
              else
                {
                  t = a_17;
                  t = d_45(z_44, a_45, y_44, t);
                }
            }
          }
      }
    }
  else
    {
      t = b_45(y_44, t);
    }
  return(t);
}
static ATerm s_3 (ATerm t)
{
  t = term_c_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_45 = NULL;
      h_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, h_45, term_f_17);
      t = i_6(t);
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      t = debug_1_0(s_3, t);
      _fail(t);
    }
  f_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      g_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_6(g_45, t);
  e_45 = t;
  t = f_45;
  t = fclose_0_0(t);
  t = e_45;
  return(t);
}
static ATerm j_6 (ATerm c_34, ATerm d_34, ATerm t)
{
  t = SSL_access(c_34, d_34);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm l_45 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm n_45 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          l_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_i_17);
      n_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, l_45, (ATerm) ATinsert(ATempty, term_i_17));
      t = j_6(l_45, n_45, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
static ATerm k_6 (ATerm m_39, ATerm n_39, ATerm t)
{
  t = SSL_copy(m_39, n_39);
  return(t);
}
ATerm copy_to_1_0 (ATerm o_0 (ATerm), ATerm t)
{
  ATerm d_46 = NULL,e_46 = NULL;
  d_46 = t;
  if(match_cons(t, sym_FILE_1))
    {
      e_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_18 = NULL;
        t = d_46;
        t = o_0(t);
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
        t = (ATerm) ATmakeAppl(sym__2, e_46, j_18);
        t = k_6(e_46, j_18, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, e_46);
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
              ATerm x_18 = NULL;
              t = d_46;
              t = o_0(t);
              x_18 = t;
              {
                ATerm p_17 = t;
                if((PushChoice() == 0))
                  {
                    ATerm b_19 = NULL;
                    b_19 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = b_19;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = b_19;
                          }
                        else
                          {
                            t = b_19;
                            if((e_46 != t))
                              {
                                _fail(t);
                              }
                            t = b_19;
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
              t = (ATerm) ATmakeAppl(sym__2, e_46, x_18);
              t = k_6(e_46, x_18, t);
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_46);
              LocalPopChoice(o_17);
            }
          else
            {
              t = m_17;
              t = d_46;
              t = o_0(t);
              if((e_46 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, e_46);
            }
        }
      }
  }
  return(t);
}
static ATerm l_6 (ATerm k_48, ATerm l_48, ATerm t)
{
  ATerm i_46 = NULL,j_46 = NULL;
  j_46 = t;
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
        t = q_6(k_48, l_48, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_17 = ATgetFirst((ATermList) t);
            i_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(r_17);
        t = SSL_table_put(k_48, l_48, i_46);
        t = (ATerm) ATmakeAppl(sym__3, k_48, l_48, i_46);
      }
    else
      {
        t = q_17;
        t = SSL_table_remove(k_48, l_48);
        t = (ATerm) ATmakeAppl(sym__2, k_48, l_48);
      }
  }
  t = j_46;
  return(t);
}
ATerm end_scope_1_0 (ATerm d_91 (ATerm), ATerm t)
{
  ATerm k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL;
  n_46 = t;
  t = d_91(t);
  m_46 = t;
  {
    ATerm u_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_46 = NULL;
        t = term_b_7;
        p_46 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_46, term_b_7);
        t = q_6(m_46, p_46, t);
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
      l_46 = ATgetFirst((ATermList) t);
      k_46 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = term_b_7;
  o_46 = t;
  t = SSL_table_put(m_46, o_46, k_46);
  t = l_46;
  {
    static ATerm t_3 (ATerm t)
    {
      ATerm q_46 = NULL;
      q_46 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_46, q_46);
      t = l_6(m_46, q_46, t);
      return(t);
    }
    t = map_1_0(t_3, t);
  }
  t = n_46;
  return(t);
}
ATerm restore_always_2_0 (ATerm d_71 (ATerm), ATerm e_71 (ATerm), ATerm t)
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = d_71(t);
      t = e_71(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      t = e_71(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_91 (ATerm), ATerm t)
{
  ATerm s_46 = NULL,t_46 = NULL,u_46 = NULL,v_46 = NULL,w_46 = NULL;
  t_46 = t;
  t = c_91(t);
  s_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_46, term_b_7);
  {
    ATerm z_17 = t;
    int a_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm b_18 = ATgetArgument(t, 0);
            ATerm c_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_b_7;
        a_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_46, term_b_7);
        t = q_6(s_46, a_47, t);
        LocalPopChoice(a_18);
      }
    else
      {
        t = z_17;
        t = (ATerm) ATempty;
      }
  }
  u_46 = t;
  t = term_b_7;
  v_46 = t;
  t = (ATerm) ATinsert(CheckATermList(u_46), (ATerm) ATempty);
  w_46 = t;
  t = SSL_table_put(s_46, v_46, w_46);
  t = t_46;
  return(t);
}
static ATerm v_3 (ATerm t)
{
  t = term_c_7;
  return(t);
}
static ATerm x_3 (ATerm t)
{
  ATerm j_47 = NULL;
  j_47 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(j_47);
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = j_47;
      }
  }
  return(t);
}
static ATerm y_3 (ATerm t)
{
  t = term_c_7;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm d_47 = NULL;
  static ATerm w_3 (ATerm t)
  {
    ATerm e_47 = NULL;
    e_47 = t;
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_47 = NULL,g_47 = NULL;
          t = term_c_7;
          f_47 = t;
          t = term_b_7;
          g_47 = t;
          t = term_h_18;
          t = q_6(f_47, g_47, t);
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
        if(((d_47 != NULL) && (d_47 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_47 = ATgetFirst((ATermList) t);
        {
          ATerm i_18 = (ATerm) ATgetNext((ATermList) t);
        }
      }
    else
      _fail(t);
    t = d_47;
    t = map_1_0(x_3, t);
    t = e_47;
    t = end_scope_1_0(y_3, t);
    return(t);
  }
  t = begin_scope_1_0(v_3, t);
  t = restore_always_2_0(x_102, w_3, t);
  return(t);
}
static ATerm a_4 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_18;
      t = get_config_0_0(t);
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      t = term_p_18;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm y_102 (ATerm), ATerm t)
{
  static ATerm z_3 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_47 = NULL;
        t = term_s_18;
        t = get_config_0_0(t);
        m_47 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, m_47);
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = term_h_17;
      }
    t = y_102(t);
    t = copy_to_1_0(a_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(z_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm s_47 = NULL,t_47 = NULL,u_47 = NULL,v_47 = NULL,w_47 = NULL;
  s_47 = t;
  t = term_f_7;
  t = whoami_0_0(t);
  t_47 = t;
  t = term_t_18;
  v_47 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_18), t_47), term_u_18);
  w_47 = t;
  t = SSL_printnl(v_47, w_47);
  t = term_w_10;
  u_47 = t;
  t = SSL_exit(u_47);
  t = s_47;
  return(t);
}
static ATerm b_4 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  if(match_string(t, "-k"))
    {
      t = y_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = y_47;
    }
  return(t);
}
static ATerm c_4 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL,b_48 = NULL;
  z_47 = t;
  t = SSL_string_to_int(z_47);
  a_48 = t;
  t = term_w_18;
  b_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_18, a_48);
  t = t_6(b_48, a_48, t);
  t = z_47;
  return(t);
}
static ATerm d_4 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_4, c_4, d_4, t);
  return(t);
}
static ATerm e_4 (ATerm t)
{
  ATerm h_48 = NULL;
  h_48 = t;
  if(match_string(t, "-S"))
    {
      t = h_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = h_48;
    }
  return(t);
}
static ATerm f_4 (ATerm t)
{
  ATerm i_48 = NULL,m_48 = NULL;
  t = term_z_18;
  i_48 = t;
  t = term_v_11;
  m_48 = t;
  t = term_a_19;
  t = t_6(i_48, m_48, t);
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
  ATerm n_48 = NULL,o_48 = NULL,p_48 = NULL;
  n_48 = t;
  t = SSL_string_to_int(n_48);
  o_48 = t;
  t = term_z_18;
  p_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_z_18, o_48);
  t = t_6(p_48, o_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, n_48);
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
  ATerm q_48 = NULL,r_48 = NULL;
  t = term_f_19;
  q_48 = t;
  t = term_f_7;
  r_48 = t;
  t = term_g_19;
  t = t_6(q_48, r_48, t);
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
  ATerm j_19 = t;
  int m_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_4, f_4, g_4, t);
      LocalPopChoice(m_19);
    }
  else
    {
      t = j_19;
      {
        ATerm n_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(h_4, i_4, j_4, t);
            LocalPopChoice(o_19);
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
static ATerm t_6 (ATerm f_43, ATerm g_43, ATerm t)
{
  ATerm s_48 = NULL;
  t = term_q_19;
  s_48 = t;
  t = SSL_table_put(s_48, f_43, g_43);
  t = (ATerm) ATmakeAppl(sym__3, term_q_19, f_43, g_43);
  return(t);
}
ATerm Option_3_0 (ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm e_0 (ATerm), ATerm t)
{
  ATerm v_48 = NULL,w_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm x_48 = NULL,y_48 = NULL,z_48 = NULL;
      t = term_f_7;
      t = e_0(t);
      x_48 = t;
      t = term_r_19;
      y_48 = t;
      t = term_s_19;
      z_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_19, term_s_19, x_48);
      t = r_6(y_48, z_48, x_48, t);
      _fail(t);
    }
  else
    {
      ATerm c_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          v_48 = ATgetFirst((ATermList) t);
          w_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = v_48;
      t = c_0(t);
      t = term_f_7;
      t = d_0(t);
      c_49 = t;
      t = (ATerm) ATinsert(CheckATermList(w_48), c_49);
    }
  return(t);
}
static ATerm n_4 (ATerm t)
{
  ATerm e_49 = NULL;
  e_49 = t;
  if(match_string(t, "-o"))
    {
      t = e_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = e_49;
    }
  return(t);
}
static ATerm o_4 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL;
  f_49 = t;
  t = term_o_18;
  g_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, f_49);
  t = t_6(g_49, f_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, f_49);
  return(t);
}
static ATerm p_4 (ATerm t)
{
  t = term_v_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_4, o_4, p_4, t);
  return(t);
}
static ATerm r_6 (ATerm f_48, ATerm g_48, ATerm e_48, ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL;
  i_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_48, g_48);
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
        t = (ATerm) ATmakeAppl(sym__2, f_48, g_48);
        t = q_6(f_48, g_48, t);
        LocalPopChoice(x_19);
      }
    else
      {
        t = w_19;
        t = (ATerm) ATempty;
      }
  }
  j_49 = t;
  t = (ATerm) ATinsert(CheckATermList(j_49), e_48);
  k_49 = t;
  t = SSL_table_put(f_48, g_48, k_49);
  t = i_49;
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm n_0 (ATerm), ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL,u_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm v_49 = NULL,y_49 = NULL,z_49 = NULL;
      t = term_f_7;
      t = n_0(t);
      v_49 = t;
      t = term_r_19;
      y_49 = t;
      t = term_s_19;
      z_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_r_19, term_s_19, v_49);
      t = r_6(y_49, z_49, v_49, t);
      _fail(t);
    }
  else
    {
      ATerm d_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_49 = ATgetFirst((ATermList) t);
          s_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_49;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          t_49 = ATgetFirst((ATermList) t);
          u_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = r_49;
      t = k_0(t);
      t = t_49;
      t = l_0(t);
      d_50 = t;
      t = (ATerm) ATinsert(CheckATermList(u_49), d_50);
    }
  return(t);
}
static ATerm q_4 (ATerm t)
{
  ATerm f_50 = NULL;
  f_50 = t;
  if(match_string(t, "-i"))
    {
      t = f_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = f_50;
    }
  return(t);
}
static ATerm r_4 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL;
  g_50 = t;
  t = term_s_18;
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_18, g_50);
  t = t_6(h_50, g_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_50);
  return(t);
}
static ATerm s_4 (ATerm t)
{
  t = term_c_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_4, r_4, s_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL,k_50 = NULL,l_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_f_7;
  t = whoami_0_0(t);
  i_50 = t;
  t = term_t_18;
  k_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_20), i_50);
  l_50 = t;
  t = SSL_printnl(k_50, l_50);
  t = term_w_10;
  j_50 = t;
  t = SSL_exit(j_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_e_20;
  t = get_config_0_0(t);
  return(t);
}
static ATerm m_6 (ATerm e_37, ATerm f_37, ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_37, f_37);
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = SSL_addr(e_37, f_37);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm w_84 (ATerm), ATerm x_84 (ATerm), ATerm t)
{
  ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL;
  n_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_50;
      t = w_84(t);
    }
  else
    {
      ATerm s_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_50 = ATgetFirst((ATermList) t);
          p_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_50;
      t = foldr_2_0(w_84, x_84, t);
      s_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, o_50, s_50);
      t = x_84(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
static ATerm t_4 (ATerm t)
{
  t = term_v_11;
  return(t);
}
static ATerm u_4 (ATerm t)
{
  ATerm p_19 = NULL,u_19 = NULL;
  if(match_cons(t, sym__2))
    {
      p_19 = ATgetArgument(t, 0);
      u_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_6(p_19, u_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm v_50 = NULL,k_19 = NULL,l_19 = NULL;
  t = times_0_0(t);
  l_19 = t;
  t = SSL_explode_term(l_19);
  if(match_cons(t, sym__2))
    {
      ATerm h_20 = ATgetArgument(t, 0);
      k_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_19;
  t = foldr_2_0(t_4, u_4, t);
  v_50 = t;
  t = SSL_TicksToSeconds(v_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL;
  g_51 = t;
  if(match_cons(t, sym__2))
    {
      h_51 = ATgetArgument(t, 0);
      i_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm k_20 = t;
    int l_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_51;
        if((h_51 != t))
          {
            _fail(t);
          }
        t = g_51;
        LocalPopChoice(l_20);
      }
    else
      {
        t = k_20;
        t = (ATerm) ATmakeAppl(sym__2, h_51, i_51);
        {
          ATerm o_20 = t;
          int p_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(h_51, i_51);
              LocalPopChoice(p_20);
            }
          else
            {
              t = o_20;
              t = SSL_gtr(h_51, i_51);
            }
        }
        t = (ATerm) ATmakeAppl(sym__2, h_51, i_51);
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_93 (ATerm), ATerm t)
{
  ATerm m_51 = NULL;
  m_51 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_51 = NULL;
        t = term_z_18;
        t = get_config_0_0(t);
        o_51 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_51, term_w_10);
        t = geq_0_0(t);
        t = m_51;
        t = i_93(t);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        t = m_51;
      }
  }
  return(t);
}
static ATerm v_4 (ATerm t)
{
  ATerm q_51 = NULL,r_51 = NULL,t_51 = NULL,u_51 = NULL;
  t = run_time_0_0(t);
  q_51 = t;
  t = term_f_7;
  t = whoami_0_0(t);
  r_51 = t;
  t = term_t_18;
  t_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), q_51), term_t_20), r_51);
  u_51 = t;
  t = SSL_printnl(t_51, u_51);
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_20), q_51), term_t_20), r_51));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm v_51 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_11;
  v_51 = t;
  t = SSL_exit(v_51);
  return(t);
}
static ATerm w_4 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL;
  e_52 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = e_52;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          d_52 = ATgetArgument(t, 0);
          {
            ATerm q_20 = NULL,h_12 = NULL;
            t = SSLgetAnnotations(e_52);
            q_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, d_52);
            h_12 = t;
            t = SSLsetAnnotations(h_12, q_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = e_52;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_95 (ATerm), ATerm t)
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
      t = fetch_1_0(w_4, t);
    }
  t = y_95(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm g_0 (ATerm), ATerm i_0 (ATerm), ATerm t)
{
  ATerm h_52 = NULL,i_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      h_52 = ATgetFirst((ATermList) t);
      i_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm m_52 = NULL,n_52 = NULL;
        static ATerm x_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(m_52)), not_null(n_52));
          return(t);
        }
        t = i_52;
        t = i_0(t);
        if(((m_52 != NULL) && (m_52 != t)))
          _fail(t);
        else
          m_52 = t;
        t = h_52;
        t = g_0(t);
        if(((n_52 != NULL) && (n_52 != t)))
          _fail(t);
        else
          n_52 = t;
        t = i_52;
        t = reverse_acc_2_0(g_0, x_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_f_7;
      t = i_0(t);
    }
  return(t);
}
static ATerm y_4 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,s_12 = NULL;
  t_52 = t;
  if(match_cons(t, sym_Program_1))
    {
      s_52 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_52);
  r_52 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, s_52);
  s_12 = t;
  t = SSLsetAnnotations(s_12, r_52);
  return(t);
}
static ATerm a_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_5 (ATerm t)
{
  ATerm v_52 = NULL;
  v_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, v_52), term_y_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm p_52 = NULL,q_52 = NULL;
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_e_20;
      t = get_config_0_0(t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      t = fetch_1_0(y_4, t);
    }
  t = term_c_21;
  t = echo_0_0(t);
  t = term_r_19;
  p_52 = t;
  t = term_s_19;
  q_52 = t;
  t = term_e_21;
  t = q_6(p_52, q_52, t);
  t = reverse_acc_2_0(_id, a_5, t);
  t = map_1_0(b_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm d_79 (ATerm), ATerm t)
{
  static ATerm x_53 (ATerm t)
  {
    ATerm u_53 = NULL,v_53 = NULL,w_53 = NULL;
    u_53 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        v_53 = ATgetFirst((ATermList) t);
        w_53 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm f_21 = t;
      int g_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_21 = NULL,m_21 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(u_53);
          i_21 = t;
          t = v_53;
          t = d_79(t);
          m_21 = t;
          t = (ATerm) ATinsert(CheckATermList(w_53), m_21);
          z_12 = t;
          t = SSLsetAnnotations(z_12, i_21);
          LocalPopChoice(g_21);
        }
      else
        {
          t = f_21;
          {
            ATerm h_22 = NULL,m_22 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(u_53);
            h_22 = t;
            t = w_53;
            t = x_53(t);
            m_22 = t;
            t = (ATerm) ATinsert(CheckATermList(m_22), v_53);
            a_13 = t;
            t = SSLsetAnnotations(a_13, h_22);
          }
        }
    }
    return(t);
  }
  t = x_53(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_54 = NULL,c_54 = NULL,d_54 = NULL;
  b_54 = t;
  {
    ATerm h_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm l_21 = ATgetFirst((ATermList) t);
                ATerm n_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_54;
          }
        LocalPopChoice(j_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATinsert(ATempty, b_54);
      }
  }
  c_54 = t;
  t = term_p_18;
  d_54 = t;
  t = SSL_printnl(d_54, c_54);
  t = b_54;
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_e_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
static ATerm p_6 (ATerm c_33, ATerm d_33, ATerm t)
{
  t = SSL_strcat(c_33, d_33);
  return(t);
}
ATerm debug_1_0 (ATerm i_78 (ATerm), ATerm t)
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL,q_54 = NULL;
  n_54 = t;
  t = i_78(t);
  o_54 = t;
  t = term_t_18;
  p_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, n_54), o_54);
  q_54 = t;
  t = SSL_printnl(p_54, q_54);
  t = n_54;
  return(t);
}
ATerm map_1_0 (ATerm t_78 (ATerm), ATerm t)
{
  static ATerm k_55 (ATerm t)
  {
    ATerm h_55 = NULL,i_55 = NULL,j_55 = NULL;
    h_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = h_55;
      }
    else
      {
        ATerm v_22 = NULL,c_23 = NULL,d_23 = NULL,d_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_55 = ATgetFirst((ATermList) t);
            j_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(h_55);
        v_22 = t;
        t = i_55;
        t = t_78(t);
        c_23 = t;
        t = j_55;
        t = k_55(t);
        d_23 = t;
        t = (ATerm) ATinsert(CheckATermList(d_23), c_23);
        d_13 = t;
        t = SSLsetAnnotations(d_13, v_22);
      }
    return(t);
  }
  t = k_55(t);
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
static ATerm d_5 (ATerm t)
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
      ATerm s_55 = NULL;
      s_55 = t;
      t = SSL_is_string(s_55);
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
              ATerm a_56 = NULL,b_56 = NULL,c_56 = NULL;
              a_56 = t;
              if(match_cons(t, sym_Path_1))
                {
                  b_56 = ATgetArgument(t, 0);
                  t = b_56;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      b_56 = ATgetArgument(t, 0);
                      t = b_56;
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
                            t = debug_1_0(d_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm g_56 = NULL,h_56 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          b_56 = ATgetArgument(t, 0);
                          c_56 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = b_56;
                      t = eval_config_0_0(t);
                      g_56 = t;
                      t = c_56;
                      t = eval_config_0_0(t);
                      h_56 = t;
                      t = (ATerm) ATmakeAppl(sym__2, g_56, h_56);
                      t = p_6(g_56, h_56, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
static ATerm q_6 (ATerm w_49, ATerm x_49, ATerm t)
{
  t = SSL_table_get(w_49, x_49);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm l_56 = NULL,m_56 = NULL;
  l_56 = t;
  t = term_q_19;
  m_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_q_19, l_56);
  t = q_6(m_56, l_56, t);
  {
    ATerm x_21 = t;
    int y_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_56 = NULL,o_56 = NULL;
        t = eval_config_0_0(t);
        n_56 = t;
        t = term_q_19;
        o_56 = t;
        t = SSL_table_put(o_56, l_56, n_56);
        t = n_56;
        LocalPopChoice(y_21);
      }
    else
      {
        t = x_21;
      }
  }
  return(t);
}
static ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm f_5 (ATerm t)
{
  ATerm r_56 = NULL,s_56 = NULL;
  t = term_z_21;
  r_56 = t;
  t = term_f_7;
  s_56 = t;
  t = term_a_22;
  t = t_6(r_56, s_56, t);
  return(t);
}
static ATerm g_5 (ATerm t)
{
  t = term_d_22;
  return(t);
}
static ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm i_5 (ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,w_56 = NULL;
  t = term_z_21;
  v_56 = t;
  t = term_f_7;
  w_56 = t;
  t = term_a_22;
  t = t_6(v_56, w_56, t);
  t = term_e_22;
  t_56 = t;
  t = term_f_7;
  u_56 = t;
  t = term_g_22;
  t = t_6(t_56, u_56, t);
  t = term_i_22;
  return(t);
}
static ATerm j_5 (ATerm t)
{
  t = term_j_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm k_22 = t;
  int n_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_5, f_5, g_5, t);
      LocalPopChoice(n_22);
    }
  else
    {
      t = k_22;
      t = Option_3_0(h_5, i_5, j_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL,q_13 = NULL;
  c_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_56 = ATgetFirst((ATermList) t);
      z_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_57);
  x_56 = t;
  t = y_56;
  t = t_55(t);
  a_57 = t;
  t = z_56;
  t = u_55(t);
  b_57 = t;
  t = (ATerm) ATinsert(CheckATermList(b_57), a_57);
  q_13 = t;
  t = SSLsetAnnotations(q_13, x_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_98 (ATerm), ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,m_57 = NULL,n_57 = NULL,s_13 = NULL;
  h_57 = t;
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_22;
        t = b_98(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
      }
  }
  t = h_57;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      j_57 = ATgetFirst((ATermList) t);
      k_57 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_57);
  i_57 = t;
  t = term_e_20;
  n_57 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_e_20, j_57);
  t = t_6(n_57, j_57, t);
  t = k_57;
  {
    static ATerm x_57 (ATerm t)
    {
      ATerm r_22 = t;
      int s_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_57 = NULL;
              q_57 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = q_57;
              LocalPopChoice(u_22);
            }
          else
            {
              t = t_22;
              t = b_98(t);
              t = Cons_2_0(_id, x_57, t);
            }
          LocalPopChoice(s_22);
        }
      else
        {
          t = r_22;
          {
            ATerm t_57 = NULL,u_57 = NULL;
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                t_57 = ATgetFirst((ATermList) t);
                u_57 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = (ATerm) ATinsert(CheckATermList(u_57), (ATerm) ATmakeAppl(sym_Undefined_1, t_57));
          }
        }
      return(t);
    }
    t = x_57(t);
  }
  m_57 = t;
  t = (ATerm) ATinsert(CheckATermList(m_57), (ATerm) ATmakeAppl(sym_Program_1, j_57));
  s_13 = t;
  t = SSLsetAnnotations(s_13, i_57);
  return(t);
}
static ATerm l_5 (ATerm t)
{
  ATerm j_58 = NULL;
  j_58 = t;
  if(match_string(t, "--help"))
    {
      t = j_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = j_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = j_58;
        }
    }
  return(t);
}
static ATerm m_5 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL;
  t = term_x_20;
  k_58 = t;
  t = term_f_7;
  l_58 = t;
  t = term_w_22;
  t = t_6(k_58, l_58, t);
  t = term_x_22;
  return(t);
}
static ATerm n_5 (ATerm t)
{
  t = term_y_22;
  return(t);
}
static ATerm o_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_98 (ATerm), ATerm t)
{
  ATerm c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL,h_58 = NULL,i_58 = NULL;
  e_58 = t;
  t = term_r_19;
  g_58 = t;
  t = term_s_19;
  h_58 = t;
  t = (ATerm) ATempty;
  i_58 = t;
  t = SSL_table_put(g_58, h_58, i_58);
  t = e_58;
  {
    static ATerm k_5 (ATerm t)
    {
      ATerm z_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_98(t);
          LocalPopChoice(a_23);
        }
      else
        {
          t = z_22;
          {
            ATerm b_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_5, m_5, n_5, t);
                LocalPopChoice(e_23);
              }
            else
              {
                t = b_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_5, t);
  }
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_58 = NULL;
        s_58 = t;
        {
          ATerm h_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_24 = NULL;
              t = s_58;
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
                    t = fetch_1_0(o_5, t);
                  }
              }
              t = s_58;
              t = default_system_usage_0_0(t);
              t = term_v_11;
              d_24 = t;
              t = SSL_exit(d_24);
              LocalPopChoice(i_23);
            }
          else
            {
              t = h_23;
              {
                ATerm p_24 = NULL;
                t = term_z_21;
                t = get_config_0_0(t);
                t = s_58;
                t = default_system_about_0_0(t);
                t = term_v_11;
                p_24 = t;
                t = SSL_exit(p_24);
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
              ATerm t_58 = NULL,u_58 = NULL,v_58 = NULL;
              static ATerm q_5 (ATerm t)
              {
                ATerm w_58 = NULL,x_58 = NULL,y_58 = NULL,a_14 = NULL;
                y_58 = t;
                if(match_cons(t, sym_Undefined_1))
                  {
                    x_58 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = SSLgetAnnotations(y_58);
                w_58 = t;
                t = x_58;
                if(((c_58 != NULL) && (c_58 != t)))
                  _fail(t);
                else
                  c_58 = t;
                t = (ATerm) ATmakeAppl(sym_Undefined_1, x_58);
                a_14 = t;
                t = SSLsetAnnotations(a_14, w_58);
                return(t);
              }
              t = fetch_1_0(q_5, t);
              t = term_t_18;
              u_58 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_58)), term_n_23);
              v_58 = t;
              t = SSL_printnl(u_58, v_58);
              t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_58)), term_n_23));
              t = default_system_usage_0_0(t);
              t = term_w_10;
              t_58 = t;
              t = SSL_exit(t_58);
              LocalPopChoice(m_23);
            }
          else
            {
              t = l_23;
            }
        }
      }
  }
  d_58 = t;
  t = term_r_19;
  f_58 = t;
  t = SSL_table_destroy(f_58);
  t = d_58;
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_96 (ATerm), ATerm b_96 (ATerm), ATerm c_96 (ATerm), ATerm d_96 (ATerm), ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
  t = parse_options_1_0(a_96, t);
  d_59 = t;
  t = term_o_23;
  g_59 = t;
  t = SSL_table_create(g_59);
  t = term_o_23;
  e_59 = t;
  t = term_p_23;
  f_59 = t;
  t = SSL_table_put(e_59, f_59, d_59);
  t = d_59;
  t = c_96(t);
  {
    ATerm r_23 = t;
    int t_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_96, t);
        LocalPopChoice(t_23);
      }
    else
      {
        t = r_23;
        {
          ATerm u_23 = t;
          int v_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_96(t);
              t = report_success_0_0(t);
              LocalPopChoice(v_23);
            }
          else
            {
              t = u_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
static ATerm r_5 (ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      LocalPopChoice(x_23);
    }
  else
    {
      t = w_23;
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
                    ATerm c_24 = t;
                    int e_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        LocalPopChoice(e_24);
                      }
                    else
                      {
                        t = c_24;
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
  ATerm i_59 = NULL,j_59 = NULL;
  t = term_f_24;
  i_59 = t;
  t = term_f_7;
  j_59 = t;
  t = term_g_24;
  t = t_6(i_59, j_59, t);
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

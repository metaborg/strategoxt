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
Symbol sym_Undefined_0;
Symbol sym_Scopes_0;
Symbol sym_F__OK_0;
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
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  init_constant_terms();
}
void __UnboundVarError (char * var)
{
  fprintf(stderr, "** compiler error: variable '%s' should be bound\nnotify stratego-bugs@cs.uu.nl\n", var);
}
ATerm term_u_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_e_24;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_s_22;
ATerm term_q_22;
ATerm term_p_22;
ATerm term_i_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_w_21;
ATerm term_l_21;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_o_20;
ATerm term_n_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_i_18;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_m_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_f_15;
ATerm term_m_14;
ATerm term_b_14;
ATerm term_s_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_v_11;
ATerm term_q_11;
ATerm term_h_11;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_g_10;
ATerm term_b_10;
ATerm term_w_9;
ATerm term_r_9;
ATerm term_f_9;
ATerm term_d_9;
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
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_l_6;
void init_constant_terms (void)
{
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym__2, term_g_7, term_l_6);
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym__2, term_a_19, term_q_11);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_q_11);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_z_6);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym__2, term_p_19, term_q_19);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_21));
  term_w_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym__2, term_w_21, term_z_6);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(sym__2, term_z_21, term_z_6);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_z_6);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(sym__2, term_e_24, term_z_6);
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm y_5 (ATerm g_97 (ATerm), ATerm s_47, ATerm q_47, ATerm);
ATerm r_1 (ATerm a_1, ATerm);
ATerm s_1 (ATerm g_1, ATerm h_1, ATerm j_1, ATerm);
ATerm b_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm o_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm Html2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm s_80 (ATerm), ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm replace_quotes_0_0 (ATerm);
ATerm listtd_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm html_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm f_1 (ATerm);
ATerm i_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm make_html_comment_0_0 (ATerm);
ATerm m_1 (ATerm);
ATerm sep_by_1_0 (ATerm t_78 (ATerm), ATerm);
ATerm filter_1_0 (ATerm o_93 (ATerm), ATerm);
ATerm n_1 (ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm b_6 (ATerm u_30, ATerm v_30, ATerm);
ATerm tov_1_0 (ATerm s_78 (ATerm), ATerm);
ATerm t_1 (ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm c_6 (ATerm k_46, ATerm l_46, ATerm);
ATerm while_not_2_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm);
ATerm v_1 (ATerm);
ATerm y_1 (ATerm);
ATerm a_2 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm SOpt_value_1_0 (ATerm c_108 (ATerm), ATerm);
ATerm o_2 (ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm make_hs_0_0 (ATerm);
ATerm d_6 (ATerm v_78 (ATerm), ATerm w_28, ATerm);
ATerm p_2 (ATerm);
ATerm q_2 (ATerm);
ATerm s_2 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm b_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm Abox2html_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm a_38 (ATerm o_37, ATerm);
ATerm conc_0_0 (ATerm);
ATerm at_last_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm e_6 (ATerm d_27, ATerm y_26, ATerm);
ATerm o_3 (ATerm);
ATerm normalize_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm e_42 (ATerm y_41, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_6 (ATerm u_52, ATerm);
ATerm g_6 (ATerm g_49, ATerm h_49, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm p_43 (ATerm o_42, ATerm);
ATerm q_43 (ATerm s_42, ATerm t_42, ATerm u_42, ATerm);
ATerm r_43 (ATerm c_43, ATerm d_43, ATerm e_43, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm h_6 (ATerm y_48, ATerm z_48, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm i_6 (ATerm q_49, ATerm r_49, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm j_6 (ATerm y_58, ATerm z_58, ATerm);
ATerm end_scope_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm xtc_io_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm a_4 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm g_4 (ATerm);
ATerm h_4 (ATerm);
ATerm i_4 (ATerm);
ATerm j_4 (ATerm);
ATerm k_4 (ATerm);
ATerm l_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm r_6 (ATerm v_53, ATerm w_53, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_6 (ATerm t_58, ATerm u_58, ATerm s_58, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_6 (ATerm e_46, ATerm f_46, ATerm);
ATerm foldr_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm u_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm need_help_1_0 (ATerm z_102 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_6 (ATerm u_43, ATerm v_43, ATerm);
ATerm debug_1_0 (ATerm x_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_86 (ATerm), ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm o_6 (ATerm k_60, ATerm l_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm j_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm c_105 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm parse_options_1_0 (ATerm b_105 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm y_5 (ATerm g_97 (ATerm), ATerm s_47, ATerm q_47, ATerm t)
{
  ATerm m_0 = NULL,n_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
  q_0 = t;
  t = g_97(t);
  m_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, m_0, s_47, q_47);
  t = p_6(m_0, s_47, q_47, t);
  {
    ATerm b_2 = t;
    int w_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL;
        t = term_l_6;
        t_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, m_0, term_l_6);
        t = o_6(m_0, t_0, t);
        ;
        LocalPopChoice(w_5);
      }
    else
      {
        t = b_2;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_0 = ATgetFirst((ATermList) t);
        p_0 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_6;
    r_0 = t;
    t = (ATerm) ATinsert(CheckATermList(p_0), (ATerm) ATinsert(CheckATermList(n_0), s_47));
    s_0 = t;
    t = SSL_table_put(m_0, r_0, s_0);
    t = q_0;
  }
  return(t);
}
ATerm r_1 (ATerm a_1, ATerm t)
{
  t = a_1;
  {
    ATerm m_6 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_6 = ATgetArgument(t, 0);
            ATerm t_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_6;
      }
    t = term_u_6;
    t = debug_1_0(b_0, t);
    t = (ATerm) ATmakeAppl(sym__2, a_1, term_v_6);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm s_1 (ATerm g_1, ATerm h_1, ATerm j_1, ATerm t)
{
  t = SSL_open_file(g_1, h_1);
  return(t);
}
ATerm b_0 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm o_1 = NULL,p_1 = NULL,q_1 = NULL;
  o_1 = t;
  if(match_cons(t, sym__2))
    {
      p_1 = ATgetArgument(t, 0);
      q_1 = ATgetArgument(t, 1);
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_1(o_1, t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            t = s_1(p_1, q_1, o_1, t);
          }
      }
    }
  else
    {
      t = r_1(o_1, t);
    }
  return(t);
}
ATerm new_0_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0_0 (ATerm t)
{
  ATerm u_1 = NULL,w_1 = NULL,x_1 = NULL;
  t = term_z_6;
  t = new_0_0(t);
  u_1 = t;
  t = term_a_7;
  w_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_1, term_a_7);
  t = n_6(u_1, w_1, t);
  x_1 = t;
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL;
        t = (ATerm) ATinsert(ATempty, term_f_7);
        z_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_1, (ATerm) ATinsert(ATempty, term_f_7));
        t = h_6(x_1, z_1, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = x_1;
      }
  }
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_g_7;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm c_2 = NULL,d_2 = NULL;
  t = new_file_0_0(t);
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, term_v_6);
  t = open_file_0_0(t);
  t = term_z_6;
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_2, term_z_6);
  t = y_5(o_0, c_2, d_2, t);
  t = c_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL;
  if(((g_2 != NULL) && (g_2 != t)))
    _fail(t);
  else
    g_2 = t;
  t = xtc_new_file_0_0(t);
  if(((h_2 != NULL) && (h_2 != t)))
    _fail(t);
  else
    h_2 = t;
  t = not_null(g_2);
  {
    ATerm u_0 (ATerm t)
    {
      ATerm m_2 = NULL;
      m_2 = t;
      {
        ATerm h_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 = NULL,l_0 = NULL;
            t = SSL_is_string(m_2);
            f_0 = t;
            t = (ATerm) ATinsert(ATempty, f_0);
            l_0 = t;
            t = SSL_print(not_null(h_2), l_0);
            t = f_0;
            ;
            LocalPopChoice(i_7);
          }
        else
          {
            t = h_7;
            t = m_2;
          }
      }
      return(t);
    }
    t = topdown_1_0(u_0, t);
    t = SSL_close_file(not_null(h_2));
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(h_2));
  }
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      a_3 = ATgetArgument(t, 0);
      z_2 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_7), z_2), term_k_7), a_3), term_j_7);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          a_3 = ATgetArgument(t, 0);
          z_2 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_7), z_2), term_k_7), a_3), term_n_7);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              a_3 = ATgetArgument(t, 0);
              z_2 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_7), z_2), term_k_7), a_3), term_p_7);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  a_3 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_7), a_3), term_q_7);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      a_3 = ATgetArgument(t, 0);
                      z_2 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_7), z_2), term_k_7), a_3), term_s_7);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          a_3 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_7), a_3), term_u_7);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              a_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_7), a_3), term_w_7);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  a_3 = ATgetArgument(t, 0);
                                  z_2 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_8), z_2), term_z_7), a_3), term_y_7);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      a_3 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_8), a_3), term_b_8);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_d_8;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_e_8;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_f_8;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_g_8;
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
ATerm bottomup_1_0 (ATerm s_80 (ATerm), ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = bottomup_1_0(s_80, t);
    return(t);
  }
  t = SRTS_all(v_0, t);
  t = s_80(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm u_10 = NULL,y_10 = NULL,z_10 = NULL;
  u_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = u_10;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_10 = ATgetFirst((ATermList) t);
          z_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 = NULL,c_1 = NULL,i_2 = NULL;
            t = SSLgetAnnotations(u_10);
            y_0 = t;
            t = y_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = z_10;
            t = flat_list_0_0(t);
            c_1 = t;
            t = (ATerm) ATinsert(CheckATermList(c_1), y_10);
            i_2 = t;
            t = SSLsetAnnotations(i_2, y_0);
            ;
            LocalPopChoice(l_8);
          }
        else
          {
            t = h_8;
            {
              ATerm m_8 = t;
              int n_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_2 = NULL,f_2 = NULL,n_2 = NULL,r_2 = NULL,j_2 = NULL;
                  t = SSLgetAnnotations(u_10);
                  n_2 = t;
                  t = y_10;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = y_10;
                    }
                  else
                    {
                      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                        {
                          ATerm o_8 = ATgetFirst((ATermList) t);
                          ATerm p_8 = (ATerm) ATgetNext((ATermList) t);
                        }
                      else
                        _fail(t);
                      t = y_10;
                    }
                  t = (ATerm) ATinsert(CheckATermList(z_10), y_10);
                  j_2 = t;
                  t = SSLsetAnnotations(j_2, n_2);
                  r_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      f_2 = ATgetFirst((ATermList) t);
                      {
                        ATerm q_8 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = r_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm t_8 = ATgetFirst((ATermList) t);
                      e_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, f_2, e_2);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(n_8);
                }
              else
                {
                  t = m_8;
                  {
                    ATerm j_3 = NULL,t_3 = NULL,k_2 = NULL;
                    t = SSLgetAnnotations(u_10);
                    j_3 = t;
                    t = z_10;
                    t = flat_list_0_0(t);
                    t_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(t_3), y_10);
                    k_2 = t;
                    t = SSLsetAnnotations(k_2, j_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm k_11 (ATerm t)
  {
    ATerm v_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_81(t);
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = v_8;
        t = SRTS_one(k_11, t);
      }
    return(t);
  }
  t = k_11(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm u_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(a_9) != AT_INT) || (ATgetInt((ATermInt) a_9) != 34)))
        _fail(t);
      u_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(u_11), term_d_9), term_d_9);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL,r_11 = NULL,s_11 = NULL,u_8 = NULL;
  s_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      n_11 = ATgetFirst((ATermList) t);
      r_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_11);
  m_11 = t;
  t = n_11;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(r_11), n_11);
  u_8 = t;
  t = SSLsetAnnotations(u_8, m_11);
  t = r_11;
  t = oncetd_1_0(w_0, t);
  l_11 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(l_11), term_f_9), term_f_9);
  return(t);
}
ATerm listtd_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm z_12 (ATerm t)
  {
    ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL;
    t = r_87(t);
    w_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = w_12;
      }
    else
      {
        ATerm t_4 = NULL,b_5 = NULL,w_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_12 = ATgetFirst((ATermList) t);
            y_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(w_12);
        t_4 = t;
        t = y_12;
        t = z_12(t);
        b_5 = t;
        t = (ATerm) ATinsert(CheckATermList(b_5), x_12);
        w_8 = t;
        t = SSLsetAnnotations(w_8, t_4);
      }
    return(t);
  }
  t = z_12(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm h_9 = t;
  int j_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      ;
      LocalPopChoice(j_9);
    }
  else
    {
      t = h_9;
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm t_13 = NULL;
  t_13 = t;
  if(match_int(t, 32))
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_5 = NULL;
          t = term_e_8;
          x_5 = t;
          t = SSL_explode_string(x_5);
          ;
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          t = t_13;
        }
    }
  else
    {
      if(match_int(t, 38))
        {
          ATerm o_9 = t;
          int q_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm z_5 = NULL;
              t = term_r_9;
              z_5 = t;
              t = SSL_explode_string(z_5);
              ;
              LocalPopChoice(q_9);
            }
          else
            {
              t = o_9;
              t = t_13;
            }
        }
      else
        {
          if(match_int(t, 60))
            {
              ATerm s_9 = t;
              int t_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_6 = NULL;
                  t = term_w_9;
                  a_6 = t;
                  t = SSL_explode_string(a_6);
                  ;
                  LocalPopChoice(t_9);
                }
              else
                {
                  t = s_9;
                  t = t_13;
                }
            }
          else
            {
              if(match_int(t, 62))
                {
                  ATerm z_9 = t;
                  int a_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_6 = NULL;
                      t = term_b_10;
                      q_6 = t;
                      t = SSL_explode_string(q_6);
                      ;
                      LocalPopChoice(a_10);
                    }
                  else
                    {
                      t = z_9;
                      t = t_13;
                    }
                }
              else
                {
                  t = t_13;
                }
            }
        }
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm j_13 = NULL,k_13 = NULL;
  k_13 = t;
  t = SSL_explode_string(k_13);
  t = listtd_1_0(x_0, t);
  t = map_1_0(z_0, t);
  t = flat_list_0_0(t);
  j_13 = t;
  t = SSL_implode_string(j_13);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm t_15 (ATerm t)
  {
    ATerm l_15 = NULL,n_15 = NULL,o_15 = NULL;
    o_15 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_15 = ATgetFirst((ATermList) t);
        n_15 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm c_10 = t;
          int d_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_7 = NULL,e_7 = NULL,m_7 = NULL,e_9 = NULL;
              t = SSLgetAnnotations(o_15);
              e_7 = t;
              t = l_15;
              t = z_107(t);
              m_7 = t;
              t = (ATerm) ATinsert(CheckATermList(n_15), m_7);
              e_9 = t;
              t = SSLsetAnnotations(e_9, e_7);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm e_10 = ATgetFirst((ATermList) t);
                  d_7 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = d_7;
              t = t_15(t);
              ;
              LocalPopChoice(d_10);
            }
          else
            {
              t = c_10;
              t = o_15;
            }
        }
      }
    else
      {
        t = o_15;
      }
    return(t);
  }
  t = t_15(t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm d_1 (ATerm t)
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
ATerm e_1 (ATerm t)
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
ATerm f_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm k_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_1 (ATerm t)
{
  ATerm q_18 = NULL;
  q_18 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_10), q_18);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm n_16 = NULL,o_16 = NULL;
  if(((o_16 != NULL) && (o_16 != t)))
    _fail(t);
  else
    o_16 = t;
  t = SSL_explode_string(not_null(o_16));
  t = reverse_acc_2_0(_id, b_1, t);
  if(((n_16 != NULL) && (n_16 != t)))
    _fail(t);
  else
    n_16 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), (ATerm) ATempty);
  {
    ATerm r_18 (ATerm t)
    {
      ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL,c_18 = NULL;
      if(match_cons(t, sym__2))
        {
          z_17 = ATgetArgument(t, 0);
          c_18 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_17;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm i_8 = NULL,j_8 = NULL;
          t = c_18;
          t = remove_trailing_1_0(d_1, t);
          j_8 = t;
          t = SSL_implode_string(j_8);
          i_8 = t;
          t = (ATerm) ATinsert(ATempty, i_8);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_18 = ATgetFirst((ATermList) t);
              b_18 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_18;
          if(match_int(t, 10))
            {
              ATerm h_10 = t;
              int i_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_8 = NULL,s_8 = NULL,x_8 = NULL;
                  t = c_18;
                  t = remove_trailing_1_0(e_1, t);
                  x_8 = t;
                  t = SSL_implode_string(x_8);
                  r_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, b_18, (ATerm) ATempty);
                  t = r_18(t);
                  s_8 = t;
                  t = (ATerm) ATinsert(CheckATermList(s_8), r_8);
                  ;
                  LocalPopChoice(i_10);
                }
              else
                {
                  t = h_10;
                  t = (ATerm) ATmakeAppl(sym__2, b_18, (ATerm) ATinsert(CheckATermList(c_18), a_18));
                  t = r_18(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, b_18, (ATerm) ATinsert(CheckATermList(c_18), a_18));
              t = r_18(t);
            }
        }
      return(t);
    }
    t = r_18(t);
    t = remove_trailing_1_0(f_1, t);
    t = reverse_acc_2_0(_id, i_1, t);
    t = remove_trailing_1_0(k_1, t);
    t = map_1_0(l_1, t);
  }
  return(t);
}
ATerm m_1 (ATerm t)
{
  ATerm w_18 = NULL;
  w_18 = t;
  t = (ATerm) ATinsert(ATempty, w_18);
  return(t);
}
ATerm sep_by_1_0 (ATerm t_78 (ATerm), ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL;
  t = map_1_0(m_1, t);
  c_9 = t;
  t = term_z_6;
  t = t_78(t);
  b_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_9, c_9);
  t = b_6(b_9, c_9, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm w_19 = NULL,z_19 = NULL,a_20 = NULL;
  w_19 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = w_19;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_19 = ATgetFirst((ATermList) t);
          a_20 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm l_10 = t;
        int o_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_9 = NULL,u_9 = NULL,y_9 = NULL,g_9 = NULL;
            t = SSLgetAnnotations(w_19);
            p_9 = t;
            t = z_19;
            t = o_93(t);
            u_9 = t;
            t = a_20;
            t = filter_1_0(o_93, t);
            y_9 = t;
            t = (ATerm) ATinsert(CheckATermList(y_9), u_9);
            g_9 = t;
            t = SSLsetAnnotations(g_9, p_9);
            ;
            LocalPopChoice(o_10);
          }
        else
          {
            t = l_10;
            t = a_20;
            t = filter_1_0(o_93, t);
          }
      }
    }
  return(t);
}
ATerm n_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm f_20 = NULL;
  ATerm p_10 = t;
  int r_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(n_1, t);
      ;
      LocalPopChoice(r_10);
    }
  else
    {
      t = p_10;
      t = term_s_10;
    }
  f_20 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_20, term_v_10);
      t = copy_0_0(t);
    }
  return(t);
}
ATerm b_6 (ATerm u_30, ATerm v_30, ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL;
  t = v_30;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = v_30;
    }
  else
    {
      ATerm j_10 = NULL,w_10 = NULL,i_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_21 != NULL) && (q_21 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_21 = ATgetFirst((ATermList) t);
          if(((r_21 != NULL) && (r_21 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            r_21 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(not_null(v_30));
      if(((j_10 != NULL) && (j_10 != t)))
        _fail(t);
      else
        j_10 = t;
      t = not_null(r_21);
      {
        ATerm e_11 (ATerm t)
        {
          ATerm a_11 = t;
          int d_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_10 = NULL;
              x_10 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = x_10;
              ;
              LocalPopChoice(d_11);
            }
          else
            {
              t = a_11;
              {
                ATerm b_11 = NULL;
                t = Cons_2_0(_id, e_11, t);
                b_11 = t;
                t = (ATerm) ATinsert(CheckATermList(b_11), not_null(u_30));
              }
            }
          return(t);
        }
        t = e_11(t);
        if(((w_10 != NULL) && (w_10 != t)))
          _fail(t);
        else
          w_10 = t;
        t = (ATerm) ATinsert(CheckATermList(not_null(w_10)), not_null(q_21));
        if(((i_9 != NULL) && (i_9 != t)))
          _fail(t);
        else
          i_9 = t;
        t = SSLsetAnnotations(not_null(i_9), not_null(j_10));
      }
    }
  return(t);
}
ATerm tov_1_0 (ATerm s_78 (ATerm), ATerm t)
{
  ATerm m_22 = NULL,j_23 = NULL,k_23 = NULL,m_23 = NULL;
  m_23 = t;
  if(match_cons(t, sym_L_2))
    {
      j_23 = ATgetArgument(t, 0);
      k_23 = ATgetArgument(t, 1);
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_11 = NULL,k_9 = NULL;
            t = SSLgetAnnotations(m_23);
            t_11 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, j_23, k_23);
            k_9 = t;
            t = SSLsetAnnotations(k_9, t_11);
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            {
              ATerm n_23 = NULL;
              t = term_z_6;
              t = s_78(t);
              n_23 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_23))), n_23))));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_LNAT_2))
        {
          j_23 = ATgetArgument(t, 0);
          k_23 = ATgetArgument(t, 1);
          {
            ATerm i_11 = t;
            int j_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_12 = NULL,l_9 = NULL;
                t = SSLgetAnnotations(m_23);
                h_12 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, j_23, k_23);
                l_9 = t;
                t = SSLsetAnnotations(l_9, h_12);
                ;
                LocalPopChoice(j_11);
              }
            else
              {
                t = i_11;
                {
                  ATerm o_23 = NULL;
                  t = term_z_6;
                  t = s_78(t);
                  o_23 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_23))), o_23))));
                }
              }
          }
        }
      else
        {
          ATerm s_23 = NULL;
          t = term_z_6;
          t = s_78(t);
          s_23 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_23))), s_23))));
        }
    }
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_22))));
  return(t);
}
ATerm t_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm c_24 = NULL;
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(t_1, t);
      ;
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = term_q_11;
    }
  c_24 = t;
  if(match_int(t, 0))
    {
      t = term_v_11;
    }
  else
    {
      ATerm d_24 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, c_24, term_v_10);
      t = copy_0_0(t);
      d_24 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, d_24);
    }
  return(t);
}
ATerm c_6 (ATerm k_46, ATerm l_46, ATerm t)
{
  ATerm w_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_46, l_46);
      ;
      LocalPopChoice(y_11);
    }
  else
    {
      t = w_11;
      t = SSL_subtr(k_46, l_46);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm t)
{
  ATerm f_24 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_80(t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = j_80(t);
        t = f_24(t);
      }
    return(t);
  }
  t = f_24(t);
  return(t);
}
ATerm for_3_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  t = l_80(t);
  t = while_not_2_0(m_80, n_80, t);
  return(t);
}
ATerm v_1 (ATerm t)
{
  ATerm g_24 = NULL,h_24 = NULL;
  if(match_cons(t, sym__2))
    {
      g_24 = ATgetArgument(t, 0);
      h_24 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, g_24, h_24, (ATerm) ATempty);
  return(t);
}
ATerm y_1 (ATerm t)
{
  ATerm i_24 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm b_12 = ATgetArgument(t, 0);
      if(((ATgetType(b_12) != AT_INT) || (ATgetInt((ATermInt) b_12) != 0)))
        _fail(t);
      {
        ATerm c_12 = ATgetArgument(t, 1);
      }
      i_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = i_24;
  return(t);
}
ATerm a_2 (ATerm t)
{
  ATerm j_24 = NULL,m_24 = NULL,o_24 = NULL,p_24 = NULL,q_24 = NULL;
  if(match_cons(t, sym__3))
    {
      j_24 = ATgetArgument(t, 0);
      m_24 = ATgetArgument(t, 1);
      o_24 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, j_24, term_s_10);
  t = geq_0_0(t);
  t = term_s_10;
  q_24 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_24, term_s_10);
  t = c_6(j_24, q_24, t);
  p_24 = t;
  t = (ATerm) ATmakeAppl(sym__3, p_24, m_24, (ATerm) ATinsert(CheckATermList(o_24), m_24));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(v_1, y_1, a_2, t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm r_24 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm s_24 = NULL,t_24 = NULL,w_24 = NULL,y_24 = NULL,z_24 = NULL,v_9 = NULL;
    z_24 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        t_24 = ATgetArgument(t, 0);
        w_24 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(z_24);
    s_24 = t;
    t = t_24;
    t = c_108(t);
    y_24 = t;
    t = w_24;
    if(((r_24 != NULL) && (r_24 != t)))
      _fail(t);
    else
      r_24 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, y_24, w_24);
    v_9 = t;
    t = SSLsetAnnotations(v_9, s_24);
    return(t);
  }
  t = fetch_1_0(l_2, t);
  t = SSL_string_to_int(not_null(r_24));
  return(t);
}
ATerm o_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm f_25 = NULL;
  ATerm d_12 = t;
  int e_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(o_2, t);
      ;
      LocalPopChoice(e_12);
    }
  else
    {
      t = d_12;
      t = term_q_11;
    }
  f_25 = t;
  if(match_int(t, 0))
    {
      t = term_v_11;
    }
  else
    {
      ATerm h_25 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, f_25, term_g_10);
      t = copy_0_0(t);
      h_25 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, h_25)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm b_26 = NULL,r_25 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      r_25 = ATgetArgument(t, 0);
      t = r_25;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          r_25 = ATgetArgument(t, 0);
          t = r_25;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              r_25 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = r_25;
        }
    }
  t = Hspace_0_0(t);
  b_26 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = b_26;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, b_26);
    }
  return(t);
}
ATerm d_6 (ATerm v_78 (ATerm), ATerm w_28, ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  t = term_z_6;
  t = v_78(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      if(((o_28 != NULL) && (o_28 != ATgetArgument(t, 0))))
        _fail(ATgetArgument(t, 0));
      else
        o_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, not_null(w_28), not_null(o_28));
  {
    ATerm n_32 (ATerm t)
    {
      ATerm o_32 (ATerm q_28, ATerm r_28, ATerm l_29, ATerm n_29, ATerm o_29, ATerm t)
      {
        ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
        t = n_29;
        {
          ATerm g_12 = t;
          int j_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm k_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(j_12);
              t = term_l_12;
            }
          else
            {
              t = g_12;
              {
                ATerm m_12 = t;
                int n_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm o_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(n_12);
                    t = term_p_12;
                  }
                else
                  {
                    t = m_12;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm q_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_s_12;
                  }
              }
            }
          y_29 = t;
          t = n_29;
          t = make_hs_0_0(t);
          z_29 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(l_29), r_28), o_29);
          t = n_32(t);
          a_30 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(a_30), z_29), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, y_29), q_28));
        }
        return(t);
      }
      ATerm p_32 (ATerm d_30, ATerm e_30, ATerm f_30, ATerm g_30, ATerm t)
      {
        ATerm n_30 = NULL,o_30 = NULL;
        t = f_30;
        {
          ATerm u_12 = t;
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
              t = term_l_12;
            }
          else
            {
              t = u_12;
              {
                ATerm e_13 = t;
                int g_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm h_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(g_13);
                    t = term_p_12;
                  }
                else
                  {
                    t = e_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm i_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_s_12;
                  }
              }
            }
          n_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, e_30, g_30);
          t = n_32(t);
          o_30 = t;
          t = (ATerm) ATinsert(CheckATermList(o_30), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, n_30), d_30));
        }
        return(t);
      }
      ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL,w_30 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
      if(match_cons(t, sym__2))
        {
          d_31 = ATgetArgument(t, 0);
          g_31 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_31;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_31 = ATgetFirst((ATermList) t);
              f_31 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_31;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_31 = ATgetFirst((ATermList) t);
              i_31 = (ATerm) ATgetNext((ATermList) t);
              t = f_31;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  t_30 = ATgetFirst((ATermList) t);
                  w_30 = (ATerm) ATgetNext((ATermList) t);
                  t = e_31;
                  if(match_cons(t, sym_C_2))
                    {
                      r_30 = ATgetArgument(t, 0);
                      s_30 = ATgetArgument(t, 1);
                      {
                        ATerm l_13 = t;
                        int m_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_31 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, f_31, g_31);
                            t = n_32(t);
                            y_31 = t;
                            t = (ATerm) ATinsert(CheckATermList(y_31), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, r_30, s_30))));
                            ;
                            LocalPopChoice(m_13);
                          }
                        else
                          {
                            t = l_13;
                            {
                              ATerm o_13 = t;
                              int p_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = o_32(e_31, t_30, w_30, h_31, i_31, t);
                                  ;
                                  LocalPopChoice(p_13);
                                }
                              else
                                {
                                  t = o_13;
                                  t = p_32(e_31, f_31, h_31, i_31, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm r_13 = t;
                      int s_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = o_32(e_31, t_30, w_30, h_31, i_31, t);
                          ;
                          LocalPopChoice(s_13);
                        }
                      else
                        {
                          t = r_13;
                          t = p_32(e_31, f_31, h_31, i_31, t);
                        }
                    }
                }
              else
                {
                  t = e_31;
                  if(match_cons(t, sym_C_2))
                    {
                      r_30 = ATgetArgument(t, 0);
                      s_30 = ATgetArgument(t, 1);
                      {
                        ATerm u_13 = t;
                        int v_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm f_32 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, f_31, g_31);
                            t = n_32(t);
                            f_32 = t;
                            t = (ATerm) ATinsert(CheckATermList(f_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, r_30, s_30))));
                            ;
                            LocalPopChoice(v_13);
                          }
                        else
                          {
                            t = u_13;
                            t = p_32(e_31, f_31, h_31, i_31, t);
                          }
                      }
                    }
                  else
                    {
                      t = p_32(e_31, f_31, h_31, i_31, t);
                    }
                }
            }
          else
            {
              ATerm m_32 = NULL;
              t = e_31;
              if(match_cons(t, sym_C_2))
                {
                  r_30 = ATgetArgument(t, 0);
                  s_30 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, f_31, g_31);
              t = n_32(t);
              m_32 = t;
              t = (ATerm) ATinsert(CheckATermList(m_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, r_30, s_30))));
            }
        }
      return(t);
    }
    t = n_32(t);
    if(((p_28 != NULL) && (p_28 != t)))
      _fail(t);
    else
      p_28 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATempty, not_null(p_28)));
  }
  return(t);
}
ATerm p_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm w_13 = t;
  if((PushChoice() == 0))
    {
      ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL,b_34 = NULL,x_9 = NULL;
      b_34 = t;
      if(match_cons(t, sym_R_2))
        {
          z_33 = ATgetArgument(t, 0);
          a_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(b_34);
      y_33 = t;
      t = a_34;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, z_33, a_34);
      x_9 = t;
      t = SSLsetAnnotations(x_9, y_33);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_13;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm v_32 = NULL;
  if(((v_32 != NULL) && (v_32 != t)))
    _fail(t);
  else
    v_32 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(v_32), (ATerm) ATempty);
  {
    ATerm c_34 (ATerm t)
    {
      ATerm w_32 = NULL,x_32 = NULL,z_32 = NULL,a_33 = NULL,b_33 = NULL,c_33 = NULL;
      if(match_cons(t, sym__2))
        {
          z_32 = ATgetArgument(t, 0);
          c_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = z_32;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm h_33 = NULL;
          t = c_33;
          t = reverse_acc_2_0(_id, p_2, t);
          h_33 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, h_33));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              a_33 = ATgetFirst((ATermList) t);
              b_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = a_33;
          if(match_cons(t, sym_R_2))
            {
              w_32 = ATgetArgument(t, 0);
              x_32 = ATgetArgument(t, 1);
              {
                ATerm y_13 = t;
                int z_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm n_33 = NULL,o_33 = NULL;
                    t = c_33;
                    t = reverse_acc_2_0(_id, q_2, t);
                    n_33 = t;
                    t = (ATerm) ATmakeAppl(sym__2, b_33, (ATerm) ATempty);
                    t = c_34(t);
                    o_33 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(o_33), (ATerm) ATmakeAppl(sym_R_2, w_32, x_32)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, n_33));
                    ;
                    LocalPopChoice(z_13);
                  }
                else
                  {
                    t = y_13;
                    t = (ATerm) ATmakeAppl(sym__2, b_33, (ATerm) ATinsert(CheckATermList(c_33), a_33));
                    t = c_34(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, b_33, (ATerm) ATinsert(CheckATermList(c_33), a_33));
              t = c_34(t);
            }
        }
      return(t);
    }
    t = c_34(t);
    t = filter_1_0(s_2, t);
  }
  return(t);
}
ATerm v_2 (ATerm t)
{
  ATerm a_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_14;
    }
  return(t);
}
ATerm w_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_b_14);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm d_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_14;
    }
  return(t);
}
ATerm y_2 (ATerm t)
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
ATerm b_3 (ATerm t)
{
  t = term_v_11;
  return(t);
}
ATerm e_3 (ATerm t)
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
ATerm g_3 (ATerm t)
{
  ATerm h_36 = NULL;
  if(match_cons(t, sym_S_1))
    {
      h_36 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_36;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL,p_35 = NULL;
  o_35 = t;
  if(match_cons(t, sym_REF_2))
    {
      p_35 = ATgetArgument(t, 0);
      n_35 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, p_35, n_35);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          p_35 = ATgetArgument(t, 0);
          n_35 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, n_35), (ATerm) ATmakeAppl(sym_ANCHOR_1, p_35));
        }
      else
        {
          ATerm h_14 = t;
          int i_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm j_14 = ATgetArgument(t, 0);
                  ATerm l_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(i_14);
              t = term_m_14;
            }
          else
            {
              t = h_14;
              {
                ATerm n_14 = t;
                int o_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm p_14 = ATgetArgument(t, 0);
                        ATerm q_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(o_14);
                    t = term_m_14;
                  }
                else
                  {
                    t = n_14;
                    {
                      ATerm r_14 = t;
                      int t_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              p_35 = ATgetArgument(t, 0);
                              {
                                ATerm v_14 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(t_14);
                          t = p_35;
                        }
                      else
                        {
                          t = r_14;
                          if(match_cons(t, sym_A_3))
                            {
                              p_35 = ATgetArgument(t, 0);
                              n_35 = ATgetArgument(t, 1);
                              m_35 = ATgetArgument(t, 2);
                              {
                                ATerm x_35 = NULL,z_35 = NULL,a_36 = NULL,f_13 = NULL;
                                t = not_null(m_35);
                                t = construct_rows_0_0(t);
                                if(((x_35 != NULL) && (x_35 != t)))
                                  _fail(t);
                                else
                                  x_35 = t;
                                t = not_null(n_35);
                                t = Vspace_0_0(t);
                                if(((z_35 != NULL) && (z_35 != t)))
                                  _fail(t);
                                else
                                  z_35 = t;
                                t = not_null(x_35);
                                {
                                  ATerm t_2 (ATerm t)
                                  {
                                    ATerm b_36 = NULL;
                                    ATerm u_2 (ATerm t)
                                    {
                                      t = not_null(p_35);
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm w_14 = ATgetArgument(t, 0);
                                        if(((ATgetType(w_14) != AT_LIST) || !(ATisEmpty(w_14))))
                                          _fail(t);
                                        if(((b_36 != NULL) && (b_36 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          b_36 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = d_6(u_2, not_null(b_36), t);
                                    return(t);
                                  }
                                  t = map_1_0(t_2, t);
                                  if(((f_13 != NULL) && (f_13 != t)))
                                    _fail(t);
                                  else
                                    f_13 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_35), not_null(f_13));
                                  t = b_6(not_null(z_35), not_null(f_13), t);
                                  if(((a_36 != NULL) && (a_36 != t)))
                                    _fail(t);
                                  else
                                    a_36 = t;
                                  t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(a_36))))));
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  p_35 = ATgetArgument(t, 0);
                                  n_35 = ATgetArgument(t, 1);
                                  {
                                    ATerm x_13 = NULL;
                                    t = p_35;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm z_14 = t;
                                      int b_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = n_35;
                                          t = filter_1_0(v_2, t);
                                          ;
                                          LocalPopChoice(b_15);
                                        }
                                      else
                                        {
                                          t = z_14;
                                          {
                                            ATerm c_14 = NULL,k_14 = NULL;
                                            t = at_last_1_0(w_2, t);
                                            x_13 = t;
                                            t = n_35;
                                            t = filter_1_0(x_2, t);
                                            k_14 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, x_13, k_14);
                                            t = b_6(x_13, k_14, t);
                                            c_14 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, c_14), term_f_15);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      p_35 = ATgetArgument(t, 0);
                                      n_35 = ATgetArgument(t, 1);
                                      {
                                        ATerm s_14 = NULL,u_14 = NULL,x_14 = NULL,y_14 = NULL,a_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,h_15 = NULL,u_15 = NULL,f_10 = NULL;
                                        t = not_null(p_35);
                                        t = Vspace_0_0(t);
                                        if(((u_14 != NULL) && (u_14 != t)))
                                          _fail(t);
                                        else
                                          u_14 = t;
                                        t = not_null(p_35);
                                        t = Ispace_0_0(t);
                                        if(((s_14 != NULL) && (s_14 != t)))
                                          _fail(t);
                                        else
                                          s_14 = t;
                                        t = not_null(n_35);
                                        t = filter_1_0(y_2, t);
                                        if(((h_15 != NULL) && (h_15 != t)))
                                          _fail(t);
                                        else
                                          h_15 = t;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            if(((a_15 != NULL) && (a_15 != ATgetFirst((ATermList) t))))
                                              _fail(ATgetFirst((ATermList) t));
                                            else
                                              a_15 = ATgetFirst((ATermList) t);
                                            if(((c_15 != NULL) && (c_15 != (ATerm) ATgetNext((ATermList) t))))
                                              _fail((ATerm) ATgetNext((ATermList) t));
                                            else
                                              c_15 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(not_null(h_15));
                                        if(((y_14 != NULL) && (y_14 != t)))
                                          _fail(t);
                                        else
                                          y_14 = t;
                                        t = not_null(a_15);
                                        t = tov_1_0(b_3, t);
                                        if(((d_15 != NULL) && (d_15 != t)))
                                          _fail(t);
                                        else
                                          d_15 = t;
                                        t = not_null(c_15);
                                        {
                                          ATerm c_3 (ATerm t)
                                          {
                                            ATerm d_3 (ATerm t)
                                            {
                                              t = not_null(s_14);
                                              return(t);
                                            }
                                            t = tov_1_0(d_3, t);
                                            return(t);
                                          }
                                          t = map_1_0(c_3, t);
                                          if(((e_15 != NULL) && (e_15 != t)))
                                            _fail(t);
                                          else
                                            e_15 = t;
                                          t = (ATerm) ATinsert(CheckATermList(not_null(e_15)), not_null(d_15));
                                          if(((f_10 != NULL) && (f_10 != t)))
                                            _fail(t);
                                          else
                                            f_10 = t;
                                          t = SSLsetAnnotations(not_null(f_10), not_null(y_14));
                                          if(((u_15 != NULL) && (u_15 != t)))
                                            _fail(t);
                                          else
                                            u_15 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_14), not_null(u_15));
                                          t = b_6(not_null(u_14), not_null(u_15), t);
                                          if(((x_14 != NULL) && (x_14 != t)))
                                            _fail(t);
                                          else
                                            x_14 = t;
                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, not_null(x_14))), term_f_15);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          p_35 = ATgetArgument(t, 0);
                                          n_35 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_36 = NULL;
                                            ATerm f_3 (ATerm t)
                                            {
                                              t = not_null(e_36);
                                              return(t);
                                            }
                                            t = not_null(p_35);
                                            t = Hspace_0_0(t);
                                            if(((e_36 != NULL) && (e_36 != t)))
                                              _fail(t);
                                            else
                                              e_36 = t;
                                            t = not_null(n_35);
                                            t = filter_1_0(e_3, t);
                                            t = sep_by_1_0(f_3, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              p_35 = ATgetArgument(t, 0);
                                              n_35 = ATgetArgument(t, 1);
                                              t = p_35;
                                              {
                                                ATerm g_15 = t;
                                                int i_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_j_15), (ATerm) ATinsert(ATempty, n_35));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_k_15), (ATerm) ATinsert(ATempty, n_35));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_m_15), (ATerm) ATinsert(ATempty, n_35));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_p_15), (ATerm) ATinsert(ATempty, n_35));
                                                              }
                                                          }
                                                      }
                                                    ;
                                                    LocalPopChoice(i_15);
                                                  }
                                                else
                                                  {
                                                    t = g_15;
                                                    t = n_35;
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  p_35 = ATgetArgument(t, 0);
                                                  n_35 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm g_36 = NULL;
                                                    t = p_35;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = n_35;
                                                    t = map_1_0(g_3, t);
                                                    g_36 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_q_15), (ATerm) ATinsert(ATempty, g_36)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      p_35 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = p_35;
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
ATerm topdown_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = topdown_1_0(r_80, t);
    return(t);
  }
  t = r_80(t);
  t = SRTS_all(h_3, t);
  return(t);
}
ATerm at_end_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm i_37 (ATerm t)
  {
    ATerm d_37 = NULL,e_37 = NULL,h_37 = NULL;
    h_37 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        d_37 = ATgetFirst((ATermList) t);
        e_37 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm j_16 = NULL,m_16 = NULL,k_10 = NULL;
          t = SSLgetAnnotations(h_37);
          j_16 = t;
          t = e_37;
          t = i_37(t);
          m_16 = t;
          t = (ATerm) ATinsert(CheckATermList(m_16), d_37);
          k_10 = t;
          t = SSLsetAnnotations(k_10, j_16);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = h_37;
        t = y_86(t);
      }
    return(t);
  }
  t = i_37(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm n_36 = NULL,o_36 = NULL,p_36 = NULL;
  n_36 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = n_36;
    }
  else
    {
      ATerm i_3 (ATerm t)
      {
        t = not_null(p_36);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((o_36 != NULL) && (o_36 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            o_36 = ATgetFirst((ATermList) t);
          if(((p_36 != NULL) && (p_36 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            p_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = not_null(o_36);
      t = at_end_1_0(i_3, t);
    }
  return(t);
}
ATerm a_38 (ATerm o_37, ATerm t)
{
  ATerm t_37 = NULL;
  t = SSL_explode_term(o_37);
  if(match_cons(t, sym__2))
    {
      ATerm r_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      t_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_37;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_37 = NULL,w_37 = NULL,x_37 = NULL;
  if(((x_37 != NULL) && (x_37 != t)))
    _fail(t);
  else
    x_37 = t;
  if(match_cons(t, sym__2))
    {
      v_37 = ATgetArgument(t, 0);
      w_37 = ATgetArgument(t, 1);
      {
        ATerm s_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              t = not_null(w_37);
              return(t);
            }
            t = not_null(v_37);
            t = at_end_1_0(k_3, t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = s_15;
            t = a_38(not_null(x_37), t);
          }
      }
    }
  else
    {
      t = a_38(not_null(x_37), t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm w_38 (ATerm t)
  {
    ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL;
    t_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_38 = ATgetFirst((ATermList) t);
        v_38 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm w_15 = t;
      int x_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_17 = NULL,m_10 = NULL;
          t = SSLgetAnnotations(t_38);
          a_17 = t;
          t = v_38;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(v_38), u_38);
          m_10 = t;
          t = SSLsetAnnotations(m_10, a_17);
          t = j_87(t);
          ;
          LocalPopChoice(x_15);
        }
      else
        {
          t = w_15;
          {
            ATerm y_17 = NULL,h_18 = NULL,n_10 = NULL;
            t = SSLgetAnnotations(t_38);
            y_17 = t;
            t = v_38;
            t = w_38(t);
            h_18 = t;
            t = (ATerm) ATinsert(CheckATermList(h_18), u_38);
            n_10 = t;
            t = SSLsetAnnotations(n_10, y_17);
          }
        }
    }
    return(t);
  }
  t = w_38(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm m_39 (ATerm t)
  {
    ATerm y_15 = t;
    int z_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_87(t);
        ;
        LocalPopChoice(z_15);
      }
    else
      {
        t = y_15;
        {
          ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL,z_18 = NULL,e_19 = NULL,q_10 = NULL;
          j_39 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              k_39 = ATgetFirst((ATermList) t);
              l_39 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_39);
          z_18 = t;
          t = l_39;
          t = m_39(t);
          e_19 = t;
          t = (ATerm) ATinsert(CheckATermList(e_19), k_39);
          q_10 = t;
          t = SSLsetAnnotations(q_10, z_18);
        }
      }
    return(t);
  }
  t = m_39(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm o_39 = NULL,p_39 = NULL;
  ATerm l_3 (ATerm t)
  {
    ATerm q_39 = NULL,r_39 = NULL,s_39 = NULL,t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,c_11 = NULL,t_10 = NULL;
    y_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        u_39 = ATgetFirst((ATermList) t);
        v_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(y_39);
    t_39 = t;
    t = u_39;
    t = v_86(t);
    w_39 = t;
    t = (ATerm) ATinsert(CheckATermList(v_39), w_39);
    t_10 = t;
    t = SSLsetAnnotations(t_10, t_39);
    x_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        r_39 = ATgetFirst((ATermList) t);
        s_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(x_39);
    q_39 = t;
    t = s_39;
    if(((o_39 != NULL) && (o_39 != t)))
      _fail(t);
    else
      o_39 = t;
    t = (ATerm) ATinsert(CheckATermList(s_39), r_39);
    c_11 = t;
    t = SSLsetAnnotations(c_11, q_39);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(l_3, t);
  if(((p_39 != NULL) && (p_39 != t)))
    _fail(t);
  else
    p_39 = t;
  t = (ATerm) ATmakeAppl(sym__2, not_null(p_39), not_null(o_39));
  return(t);
}
ATerm e_6 (ATerm d_27, ATerm y_26, ATerm t)
{
  ATerm z_39 = NULL,a_40 = NULL,b_40 = NULL,c_40 = NULL,d_40 = NULL,e_40 = NULL,f_40 = NULL;
  t = not_null(y_26);
  {
    ATerm m_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((d_40 != NULL) && (d_40 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            d_40 = ATgetArgument(t, 0);
          {
            ATerm a_16 = ATgetArgument(t, 1);
            if(((ATgetType(a_16) == AT_LIST) && !(ATisEmpty(a_16))))
              {
                if(((z_39 != NULL) && (z_39 != ATgetFirst((ATermList) a_16))))
                  _fail(ATgetFirst((ATermList) a_16));
                else
                  z_39 = ATgetFirst((ATermList) a_16);
                if(((a_40 != NULL) && (a_40 != (ATerm) ATgetNext((ATermList) a_16))))
                  _fail((ATerm) ATgetNext((ATermList) a_16));
                else
                  a_40 = (ATerm) ATgetNext((ATermList) a_16);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(m_3, t);
    if(match_cons(t, sym__2))
      {
        if(((c_40 != NULL) && (c_40 != ATgetArgument(t, 0))))
          _fail(ATgetArgument(t, 0));
        else
          c_40 = ATgetArgument(t, 0);
        if(((b_40 != NULL) && (b_40 != ATgetArgument(t, 1))))
          _fail(ATgetArgument(t, 1));
        else
          b_40 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = not_null(b_40);
    {
      ATerm b_16 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = b_16;
        }
      t = (ATerm) ATinsert(CheckATermList(not_null(a_40)), not_null(z_39));
      {
        ATerm n_3 (ATerm t)
        {
          ATerm g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL,x_11 = NULL;
          j_40 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_40 = ATgetFirst((ATermList) t);
              i_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(j_40);
          g_40 = t;
          t = i_40;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(i_40), h_40);
          x_11 = t;
          t = SSLsetAnnotations(x_11, g_40);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, not_null(d_27), (ATerm) ATinsert(CheckATermList(not_null(b_40)), h_40)));
          return(t);
        }
        t = at_last_1_0(n_3, t);
        if(((e_40 != NULL) && (e_40 != t)))
          _fail(t);
        else
          e_40 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_40), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(d_40), not_null(e_40))));
        t = conc_0_0(t);
        if(((f_40 != NULL) && (f_40 != t)))
          _fail(t);
        else
          f_40 = t;
        t = (ATerm) ATmakeAppl(sym_H_2, not_null(d_27), not_null(f_40));
      }
    }
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm q_40 = NULL,r_40 = NULL,s_40 = NULL,t_40 = NULL,u_40 = NULL;
  u_40 = t;
  if(match_cons(t, sym_H_2))
    {
      s_40 = ATgetArgument(t, 0);
      t_40 = ATgetArgument(t, 1);
      t = t_40;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_40 = ATgetFirst((ATermList) t);
          r_40 = (ATerm) ATgetNext((ATermList) t);
          t = r_40;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = q_40;
            }
          else
            {
              ATerm c_16 = t;
              int d_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_40;
                  t = e_6(s_40, t_40, t);
                  ;
                  LocalPopChoice(d_16);
                }
              else
                {
                  t = c_16;
                  t = u_40;
                }
            }
        }
      else
        {
          ATerm e_16 = t;
          int f_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = u_40;
              t = e_6(s_40, t_40, t);
              ;
              LocalPopChoice(f_16);
            }
          else
            {
              t = e_16;
              t = u_40;
            }
        }
    }
  else
    {
      ATerm g_16 = t;
      int h_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_V_2))
            {
              ATerm i_16 = ATgetArgument(t, 0);
              t_40 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(h_16);
          t = t_40;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_40 = ATgetFirst((ATermList) t);
              r_40 = (ATerm) ATgetNext((ATermList) t);
              t = r_40;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = q_40;
                }
              else
                {
                  t = u_40;
                }
            }
          else
            {
              t = u_40;
            }
        }
      else
        {
          t = g_16;
          t = u_40;
        }
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(o_3, t);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      ;
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm p_16 = t;
  int q_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Html2text_0_0(t);
      ;
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
  ATerm m_41 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(p_3, t);
  m_41 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, m_41)))));
  t = bottomup_1_0(q_3, t);
  return(t);
}
ATerm e_42 (ATerm y_41, ATerm t)
{
  t = SSL_fclose(y_41);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL;
  c_42 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_42 = ATgetArgument(t, 0);
      {
        ATerm r_16 = t;
        int s_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_42);
            ;
            LocalPopChoice(s_16);
          }
        else
          {
            t = r_16;
            t = e_42(c_42, t);
          }
      }
    }
  else
    {
      t = e_42(c_42, t);
    }
  return(t);
}
ATerm f_6 (ATerm u_52, ATerm t)
{
  t = SSL_read_term_from_stream(u_52);
  return(t);
}
ATerm g_6 (ATerm g_49, ATerm h_49, ATerm t)
{
  ATerm f_42 = NULL;
  t = SSL_fopen(g_49, h_49);
  f_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_42);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm g_42 = NULL;
  t = SSL_stdin_stream();
  g_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_42);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm h_42 = NULL;
  t = SSL_stdout_stream();
  h_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_42);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm i_42 = NULL;
  t = SSL_stderr_stream();
  i_42 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, i_42);
  return(t);
}
ATerm p_43 (ATerm o_42, ATerm t)
{
  ATerm p_42 = NULL;
  t = SSL_explode_term(o_42);
  if(match_cons(t, sym__2))
    {
      ATerm t_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm u_16 = ATgetArgument(t, 1);
        if(((ATgetType(u_16) == AT_LIST) && !(ATisEmpty(u_16))))
          {
            p_42 = ATgetFirst((ATermList) u_16);
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
  t = p_42;
  if(match_cons(t, sym_stderr_0))
    {
      t = p_42;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = p_42;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = p_42;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm q_43 (ATerm s_42, ATerm t_42, ATerm u_42, ATerm t)
{
  ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL,a_43 = NULL,f_12 = NULL;
  t = SSLgetAnnotations(u_42);
  x_42 = t;
  t = s_42;
  if(match_cons(t, sym_Path_1))
    {
      a_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, a_43, t_42);
  f_12 = t;
  t = SSLsetAnnotations(f_12, x_42);
  if(match_cons(t, sym__2))
    {
      v_42 = ATgetArgument(t, 0);
      w_42 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(v_42, w_42, t);
  return(t);
}
ATerm r_43 (ATerm c_43, ATerm d_43, ATerm e_43, ATerm t)
{
  ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL,k_43 = NULL,i_12 = NULL;
  t = SSLgetAnnotations(e_43);
  h_43 = t;
  t = SSL_is_string(c_43);
  k_43 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_43, d_43);
  i_12 = t;
  t = SSLsetAnnotations(i_12, h_43);
  if(match_cons(t, sym__2))
    {
      f_43 = ATgetArgument(t, 0);
      g_43 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(f_43, g_43, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL,o_43 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm w_16 = ATgetArgument(t, 0);
      ATerm x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  m_43 = t;
  if(match_cons(t, sym__2))
    {
      n_43 = ATgetArgument(t, 0);
      o_43 = ATgetArgument(t, 1);
      {
        ATerm y_16 = t;
        int z_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = p_43(m_43, t);
            ;
            LocalPopChoice(z_16);
          }
        else
          {
            t = y_16;
            {
              ATerm b_17 = t;
              int c_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = q_43(n_43, o_43, m_43, t);
                  ;
                  LocalPopChoice(c_17);
                }
              else
                {
                  t = b_17;
                  t = r_43(n_43, o_43, m_43, t);
                }
            }
          }
      }
    }
  else
    {
      t = p_43(m_43, t);
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_d_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm s_43 = NULL,t_43 = NULL,w_43 = NULL;
  ATerm e_17 = t;
  int f_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_43 = NULL;
      x_43 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_43, term_g_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(f_17);
    }
  else
    {
      t = e_17;
      t = debug_1_0(r_3, t);
      _fail(t);
    }
  t_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_43 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(w_43, t);
  s_43 = t;
  t = t_43;
  t = fclose_0_0(t);
  t = s_43;
  return(t);
}
ATerm h_6 (ATerm y_48, ATerm z_48, ATerm t)
{
  t = SSL_access(y_48, z_48);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm c_44 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_h_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm e_44 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          c_44 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_f_7);
      e_44 = t;
      t = (ATerm) ATmakeAppl(sym__2, c_44, (ATerm) ATinsert(ATempty, term_f_7));
      t = h_6(c_44, e_44, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm i_6 (ATerm q_49, ATerm r_49, ATerm t)
{
  t = SSL_copy(q_49, r_49);
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm u_44 = NULL,v_44 = NULL;
  u_44 = t;
  if(match_cons(t, sym_FILE_1))
    {
      v_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm i_17 = t;
    int j_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_20 = NULL;
        t = u_44;
        t = k_0(t);
        e_20 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = e_20;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = e_20;
          }
        t = (ATerm) ATmakeAppl(sym__2, v_44, e_20);
        t = i_6(v_44, e_20, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, v_44);
        ;
        LocalPopChoice(j_17);
      }
    else
      {
        t = i_17;
        {
          ATerm k_17 = t;
          int l_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm p_20 = NULL;
              t = u_44;
              t = k_0(t);
              p_20 = t;
              {
                ATerm m_17 = t;
                if((PushChoice() == 0))
                  {
                    ATerm q_20 = NULL;
                    q_20 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = q_20;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = q_20;
                          }
                        else
                          {
                            t = q_20;
                            if((v_44 != t))
                              {
                                _fail(t);
                              }
                            t = q_20;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = m_17;
                  }
                t = (ATerm) ATmakeAppl(sym__2, v_44, p_20);
                t = i_6(v_44, p_20, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, v_44);
              }
              ;
              LocalPopChoice(l_17);
            }
          else
            {
              t = k_17;
              t = u_44;
              t = k_0(t);
              if((v_44 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, v_44);
            }
        }
      }
  }
  return(t);
}
ATerm j_6 (ATerm y_58, ATerm z_58, ATerm t)
{
  ATerm z_44 = NULL,a_45 = NULL;
  a_45 = t;
  {
    ATerm n_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
        t = o_6(y_58, z_58, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm p_17 = ATgetFirst((ATermList) t);
            z_44 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(o_17);
        t = SSL_table_put(y_58, z_58, z_44);
        t = (ATerm) ATmakeAppl(sym__3, y_58, z_58, z_44);
      }
    else
      {
        t = n_17;
        t = SSL_table_remove(y_58, z_58);
        t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
      }
    t = a_45;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm b_45 = NULL,c_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
  if(((e_45 != NULL) && (e_45 != t)))
    _fail(t);
  else
    e_45 = t;
  t = d_97(t);
  if(((d_45 != NULL) && (d_45 != t)))
    _fail(t);
  else
    d_45 = t;
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_45 = NULL;
        t = term_l_6;
        g_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_45), term_l_6);
        t = o_6(not_null(d_45), g_45, t);
        ;
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((c_45 != NULL) && (c_45 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          c_45 = ATgetFirst((ATermList) t);
        if(((b_45 != NULL) && (b_45 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          b_45 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_l_6;
    if(((f_45 != NULL) && (f_45 != t)))
      _fail(t);
    else
      f_45 = t;
    t = SSL_table_put(not_null(d_45), not_null(f_45), not_null(b_45));
    t = not_null(c_45);
    {
      ATerm s_3 (ATerm t)
      {
        ATerm h_45 = NULL;
        h_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_45), h_45);
        t = j_6(not_null(d_45), h_45, t);
        return(t);
      }
      t = map_1_0(s_3, t);
      t = not_null(e_45);
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_79(t);
      t = n_79(t);
      ;
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      t = n_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL,m_45 = NULL,n_45 = NULL;
  k_45 = t;
  t = c_97(t);
  j_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_45, term_l_6);
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_45 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm w_17 = ATgetArgument(t, 0);
            ATerm x_17 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_l_6;
        r_45 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_45, term_l_6);
        t = o_6(j_45, r_45, t);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = (ATerm) ATempty;
      }
    l_45 = t;
    t = term_l_6;
    m_45 = t;
    t = (ATerm) ATinsert(CheckATermList(l_45), (ATerm) ATempty);
    n_45 = t;
    t = SSL_table_put(j_45, m_45, n_45);
    t = k_45;
  }
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = term_g_7;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm a_46 = NULL;
  a_46 = t;
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(a_46);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = a_46;
      }
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_g_7;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm u_45 = NULL;
  ATerm v_3 (ATerm t)
  {
    ATerm v_45 = NULL;
    v_45 = t;
    {
      ATerm f_18 = t;
      int g_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_45 = NULL,x_45 = NULL;
          t = term_g_7;
          w_45 = t;
          t = term_l_6;
          x_45 = t;
          t = term_i_18;
          t = o_6(w_45, x_45, t);
          ;
          LocalPopChoice(g_18);
        }
      else
        {
          t = f_18;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((u_45 != NULL) && (u_45 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            u_45 = ATgetFirst((ATermList) t);
          {
            ATerm j_18 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = not_null(u_45);
      t = map_1_0(w_3, t);
      t = v_45;
      t = end_scope_1_0(x_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(u_3, t);
  t = restore_always_2_0(l_108, v_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_m_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      t = term_n_18;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm o_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_46 = NULL;
        t = term_s_18;
        t = get_config_0_0(t);
        d_46 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, d_46);
        ;
        LocalPopChoice(p_18);
      }
    else
      {
        t = o_18;
        t = term_h_17;
      }
    t = m_108(t);
    t = copy_to_1_0(z_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(y_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,m_46 = NULL;
  g_46 = t;
  t = term_z_6;
  t = whoami_0_0(t);
  h_46 = t;
  t = term_t_18;
  j_46 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_18), h_46), term_u_18);
  m_46 = t;
  t = SSL_printnl(j_46, m_46);
  t = term_s_10;
  i_46 = t;
  t = SSL_exit(i_46);
  t = g_46;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm o_46 = NULL;
  o_46 = t;
  if(match_string(t, "-k"))
    {
      t = o_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = o_46;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  t = SSL_string_to_int(p_46);
  q_46 = t;
  t = term_x_18;
  r_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_18, q_46);
  t = r_6(r_46, q_46, t);
  t = p_46;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_y_18;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_4, b_4, c_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm t_46 = NULL;
  t_46 = t;
  if(match_string(t, "-S"))
    {
      t = t_46;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = t_46;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm u_46 = NULL,v_46 = NULL;
  t = term_a_19;
  u_46 = t;
  t = term_q_11;
  v_46 = t;
  t = term_b_19;
  t = r_6(u_46, v_46, t);
  t = term_c_19;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_d_19;
  return(t);
}
ATerm g_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  ATerm w_46 = NULL,x_46 = NULL,y_46 = NULL;
  w_46 = t;
  t = SSL_string_to_int(w_46);
  x_46 = t;
  t = term_a_19;
  y_46 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, x_46);
  t = r_6(y_46, x_46, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, w_46);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_f_19;
  return(t);
}
ATerm j_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL;
  t = term_g_19;
  z_46 = t;
  t = term_z_6;
  a_47 = t;
  t = term_h_19;
  t = r_6(z_46, a_47, t);
  t = term_i_19;
  return(t);
}
ATerm l_4 (ATerm t)
{
  t = term_j_19;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm k_19 = t;
  int l_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(d_4, e_4, f_4, t);
      ;
      LocalPopChoice(l_19);
    }
  else
    {
      t = k_19;
      {
        ATerm m_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_4, h_4, i_4, t);
            ;
            LocalPopChoice(n_19);
          }
        else
          {
            t = m_19;
            t = Option_3_0(j_4, k_4, l_4, t);
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm v_53, ATerm w_53, ATerm t)
{
  ATerm b_47 = NULL;
  t = term_o_19;
  b_47 = t;
  t = SSL_table_put(b_47, v_53, w_53);
  t = (ATerm) ATmakeAppl(sym__3, term_o_19, v_53, w_53);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm e_47 = NULL,f_47 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
      t = term_z_6;
      t = d_0(t);
      g_47 = t;
      t = term_p_19;
      h_47 = t;
      t = term_q_19;
      i_47 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_19, term_q_19, g_47);
      t = p_6(h_47, i_47, g_47, t);
      _fail(t);
    }
  else
    {
      ATerm w_47 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_47 = ATgetFirst((ATermList) t);
          f_47 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_47;
      t = a_0(t);
      t = term_z_6;
      t = c_0(t);
      w_47 = t;
      t = (ATerm) ATinsert(CheckATermList(f_47), w_47);
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  if(match_string(t, "-o"))
    {
      t = y_47;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = y_47;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm z_47 = NULL,a_48 = NULL;
  z_47 = t;
  t = term_m_18;
  a_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_m_18, z_47);
  t = r_6(a_48, z_47, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, z_47);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_r_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, n_4, o_4, t);
  return(t);
}
ATerm p_6 (ATerm t_58, ATerm u_58, ATerm s_58, ATerm t)
{
  ATerm c_48 = NULL,d_48 = NULL,e_48 = NULL;
  c_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
  {
    ATerm s_19 = t;
    int t_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_19 = ATgetArgument(t, 0);
            ATerm v_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
        t = o_6(t_58, u_58, t);
        ;
        LocalPopChoice(t_19);
      }
    else
      {
        t = s_19;
        t = (ATerm) ATempty;
      }
    d_48 = t;
    t = (ATerm) ATinsert(CheckATermList(d_48), s_58);
    e_48 = t;
    t = SSL_table_put(t_58, u_58, e_48);
    t = c_48;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
      t = term_z_6;
      t = j_0(t);
      s_48 = t;
      t = term_p_19;
      t_48 = t;
      t = term_q_19;
      u_48 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_p_19, term_q_19, s_48);
      t = p_6(t_48, u_48, s_48, t);
      _fail(t);
    }
  else
    {
      ATerm a_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          o_48 = ATgetFirst((ATermList) t);
          p_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = p_48;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          q_48 = ATgetFirst((ATermList) t);
          r_48 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = o_48;
      t = h_0(t);
      t = q_48;
      t = i_0(t);
      a_49 = t;
      t = (ATerm) ATinsert(CheckATermList(r_48), a_49);
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm c_49 = NULL;
  c_49 = t;
  if(match_string(t, "-i"))
    {
      t = c_49;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = c_49;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm d_49 = NULL,e_49 = NULL;
  d_49 = t;
  t = term_s_18;
  e_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_18, d_49);
  t = r_6(e_49, d_49, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, d_49);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_x_19;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, r_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm f_49 = NULL,k_49 = NULL,l_49 = NULL,m_49 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_6;
  t = whoami_0_0(t);
  f_49 = t;
  t = term_t_18;
  l_49 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_y_19), f_49);
  m_49 = t;
  t = SSL_printnl(l_49, m_49);
  t = term_s_10;
  k_49 = t;
  t = SSL_exit(k_49);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_b_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm k_6 (ATerm e_46, ATerm f_46, ATerm t)
{
  ATerm c_20 = t;
  int d_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_46, f_46);
      ;
      LocalPopChoice(d_20);
    }
  else
    {
      t = c_20;
      t = SSL_addr(e_46, f_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm t)
{
  ATerm o_49 = NULL,p_49 = NULL,s_49 = NULL;
  o_49 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_49;
      t = l_92(t);
    }
  else
    {
      ATerm v_49 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          p_49 = ATgetFirst((ATermList) t);
          s_49 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = s_49;
      t = foldr_2_0(l_92, m_92, t);
      v_49 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_49, v_49);
      t = m_92(t);
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm s_4 (ATerm t)
{
  t = term_q_11;
  return(t);
}
ATerm u_4 (ATerm t)
{
  ATerm g_21 = NULL,i_21 = NULL;
  if(match_cons(t, sym__2))
    {
      g_21 = ATgetArgument(t, 0);
      i_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(g_21, i_21, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm y_49 = NULL,c_21 = NULL,d_21 = NULL;
  t = times_0_0(t);
  d_21 = t;
  t = SSL_explode_term(d_21);
  if(match_cons(t, sym__2))
    {
      ATerm g_20 = ATgetArgument(t, 0);
      c_21 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = c_21;
  t = foldr_2_0(s_4, u_4, t);
  y_49 = t;
  t = SSL_TicksToSeconds(y_49);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL;
  j_50 = t;
  if(match_cons(t, sym__2))
    {
      k_50 = ATgetArgument(t, 0);
      l_50 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_20 = t;
    int i_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_50;
        if((k_50 != t))
          {
            _fail(t);
          }
        t = j_50;
        ;
        LocalPopChoice(i_20);
      }
    else
      {
        t = h_20;
        t = (ATerm) ATmakeAppl(sym__2, k_50, l_50);
        {
          ATerm j_20 = t;
          int k_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(k_50, l_50);
              ;
              LocalPopChoice(k_20);
            }
          else
            {
              t = j_20;
              t = SSL_gtr(k_50, l_50);
            }
          t = (ATerm) ATmakeAppl(sym__2, k_50, l_50);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm p_50 = NULL;
  p_50 = t;
  {
    ATerm l_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_50 = NULL;
        t = term_a_19;
        t = get_config_0_0(t);
        r_50 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_50, term_s_10);
        t = geq_0_0(t);
        t = p_50;
        t = j_100(t);
        ;
        LocalPopChoice(m_20);
      }
    else
      {
        t = l_20;
        t = p_50;
      }
  }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm t_50 = NULL,u_50 = NULL,w_50 = NULL,x_50 = NULL;
  t = run_time_0_0(t);
  t_50 = t;
  t = term_z_6;
  t = whoami_0_0(t);
  u_50 = t;
  t = term_t_18;
  w_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_20), t_50), term_n_20), u_50);
  x_50 = t;
  t = SSL_printnl(w_50, x_50);
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_20), t_50), term_n_20), u_50));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm y_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_q_11;
  y_50 = t;
  t = SSL_exit(y_50);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm g_51 = NULL,h_51 = NULL;
  h_51 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = h_51;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          g_51 = ATgetArgument(t, 0);
          {
            ATerm c_22 = NULL,r_12 = NULL;
            t = SSLgetAnnotations(h_51);
            c_22 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, g_51);
            r_12 = t;
            t = SSLsetAnnotations(r_12, c_22);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = h_51;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  ATerm r_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_t_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(s_20);
    }
  else
    {
      t = r_20;
      t = fetch_1_0(w_4, t);
    }
  t = z_102(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm k_51 = NULL,l_51 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      k_51 = ATgetFirst((ATermList) t);
      l_51 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm p_51 = NULL,q_51 = NULL;
        ATerm x_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(p_51)), not_null(q_51));
          return(t);
        }
        t = not_null(l_51);
        t = g_0(t);
        if(((p_51 != NULL) && (p_51 != t)))
          _fail(t);
        else
          p_51 = t;
        t = not_null(k_51);
        t = e_0(t);
        if(((q_51 != NULL) && (q_51 != t)))
          _fail(t);
        else
          q_51 = t;
        t = not_null(l_51);
        t = reverse_acc_2_0(e_0, x_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_6;
      t = g_0(t);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,t_12 = NULL;
  w_51 = t;
  if(match_cons(t, sym_Program_1))
    {
      v_51 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_51);
  u_51 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, v_51);
  t_12 = t;
  t = SSLsetAnnotations(t_12, u_51);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, y_51), term_u_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL;
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_b_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = fetch_1_0(y_4, t);
    }
  t = term_x_20;
  t = echo_0_0(t);
  t = term_p_19;
  s_51 = t;
  t = term_q_19;
  t_51 = t;
  t = term_y_20;
  t = o_6(s_51, t_51, t);
  t = reverse_acc_2_0(_id, z_4, t);
  t = map_1_0(a_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm x_52 (ATerm t)
  {
    ATerm s_52 = NULL,t_52 = NULL,w_52 = NULL;
    s_52 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        t_52 = ATgetFirst((ATermList) t);
        w_52 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm z_20 = t;
      int a_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_22 = NULL,r_22 = NULL,v_12 = NULL;
          t = SSLgetAnnotations(s_52);
          l_22 = t;
          t = t_52;
          t = s_86(t);
          r_22 = t;
          t = (ATerm) ATinsert(CheckATermList(w_52), r_22);
          v_12 = t;
          t = SSLsetAnnotations(v_12, l_22);
          ;
          LocalPopChoice(a_21);
        }
      else
        {
          t = z_20;
          {
            ATerm q_23 = NULL,w_23 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(s_52);
            q_23 = t;
            t = w_52;
            t = x_52(t);
            w_23 = t;
            t = (ATerm) ATinsert(CheckATermList(w_23), t_52);
            a_13 = t;
            t = SSLsetAnnotations(a_13, q_23);
          }
        }
    }
    return(t);
  }
  t = x_52(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm b_53 = NULL,c_53 = NULL,d_53 = NULL;
  b_53 = t;
  {
    ATerm b_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = b_53;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm f_21 = ATgetFirst((ATermList) t);
                ATerm h_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = b_53;
          }
        ;
        LocalPopChoice(e_21);
      }
    else
      {
        t = b_21;
        t = (ATerm) ATinsert(ATempty, b_53);
      }
    c_53 = t;
    t = term_n_18;
    d_53 = t;
    t = SSL_printnl(d_53, c_53);
    t = b_53;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_b_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm n_6 (ATerm u_43, ATerm v_43, ATerm t)
{
  t = SSL_strcat(u_43, v_43);
  return(t);
}
ATerm debug_1_0 (ATerm x_98 (ATerm), ATerm t)
{
  ATerm h_53 = NULL,i_53 = NULL,j_53 = NULL,k_53 = NULL;
  h_53 = t;
  t = x_98(t);
  i_53 = t;
  t = term_t_18;
  j_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, h_53), i_53);
  k_53 = t;
  t = SSL_printnl(j_53, k_53);
  t = h_53;
  return(t);
}
ATerm map_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  ATerm b_54 (ATerm t)
  {
    ATerm y_53 = NULL,z_53 = NULL,a_54 = NULL;
    y_53 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = y_53;
      }
    else
      {
        ATerm n_24 = NULL,x_24 = NULL,a_25 = NULL,d_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            z_53 = ATgetFirst((ATermList) t);
            a_54 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(y_53);
        n_24 = t;
        t = z_53;
        t = i_86(t);
        x_24 = t;
        t = a_54;
        t = b_54(t);
        a_25 = t;
        t = (ATerm) ATinsert(CheckATermList(a_25), x_24);
        d_13 = t;
        t = SSLsetAnnotations(d_13, n_24);
      }
    return(t);
  }
  t = b_54(t);
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
    }
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_l_21;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_54 = NULL;
      o_54 = t;
      t = SSL_is_string(o_54);
      ;
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
            t = map_1_0(c_5, t);
            ;
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            {
              ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
              u_54 = t;
              if(match_cons(t, sym_Path_1))
                {
                  v_54 = ATgetArgument(t, 0);
                  t = v_54;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      v_54 = ATgetArgument(t, 0);
                      t = v_54;
                      {
                        ATerm s_21 = t;
                        int t_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(t_21);
                          }
                        else
                          {
                            t = s_21;
                            t = debug_1_0(d_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm a_55 = NULL,b_55 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          v_54 = ATgetArgument(t, 0);
                          w_54 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = v_54;
                      t = eval_config_0_0(t);
                      a_55 = t;
                      t = w_54;
                      t = eval_config_0_0(t);
                      b_55 = t;
                      t = (ATerm) ATmakeAppl(sym__2, a_55, b_55);
                      t = n_6(a_55, b_55, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm k_60, ATerm l_60, ATerm t)
{
  t = SSL_table_get(k_60, l_60);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm f_55 = NULL,g_55 = NULL;
  f_55 = t;
  t = term_o_19;
  g_55 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_19, f_55);
  t = o_6(g_55, f_55, t);
  {
    ATerm u_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_55 = NULL,i_55 = NULL;
        t = eval_config_0_0(t);
        h_55 = t;
        t = term_o_19;
        i_55 = t;
        t = SSL_table_put(i_55, f_55, h_55);
        t = h_55;
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = u_21;
      }
  }
  return(t);
}
ATerm e_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL;
  t = term_w_21;
  l_55 = t;
  t = term_z_6;
  m_55 = t;
  t = term_x_21;
  t = r_6(l_55, m_55, t);
  return(t);
}
ATerm g_5 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm h_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_5 (ATerm t)
{
  ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL,q_55 = NULL;
  t = term_w_21;
  p_55 = t;
  t = term_z_6;
  q_55 = t;
  t = term_x_21;
  t = r_6(p_55, q_55, t);
  t = term_z_21;
  n_55 = t;
  t = term_z_6;
  o_55 = t;
  t = term_a_22;
  t = r_6(n_55, o_55, t);
  t = term_b_22;
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = term_d_22;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm e_22 = t;
  int f_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(e_5, f_5, g_5, t);
      ;
      LocalPopChoice(f_22);
    }
  else
    {
      t = e_22;
      t = Option_3_0(h_5, i_5, j_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t)
{
  ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL,u_55 = NULL,v_55 = NULL,w_55 = NULL,n_13 = NULL;
  w_55 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      s_55 = ATgetFirst((ATermList) t);
      t_55 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_55);
  r_55 = t;
  t = s_55;
  t = d_70(t);
  u_55 = t;
  t = t_55;
  t = e_70(t);
  v_55 = t;
  t = (ATerm) ATinsert(CheckATermList(v_55), u_55);
  n_13 = t;
  t = SSLsetAnnotations(n_13, r_55);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm b_56 = NULL,c_56 = NULL,d_56 = NULL,e_56 = NULL,g_56 = NULL,h_56 = NULL,q_13 = NULL;
  if(((b_56 != NULL) && (b_56 != t)))
    _fail(t);
  else
    b_56 = t;
  {
    ATerm g_22 = t;
    int h_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_i_22;
        t = c_105(t);
        ;
        LocalPopChoice(h_22);
      }
    else
      {
        t = g_22;
      }
    t = not_null(b_56);
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        if(((d_56 != NULL) && (d_56 != ATgetFirst((ATermList) t))))
          _fail(ATgetFirst((ATermList) t));
        else
          d_56 = ATgetFirst((ATermList) t);
        if(((e_56 != NULL) && (e_56 != (ATerm) ATgetNext((ATermList) t))))
          _fail((ATerm) ATgetNext((ATermList) t));
        else
          e_56 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(not_null(b_56));
    if(((c_56 != NULL) && (c_56 != t)))
      _fail(t);
    else
      c_56 = t;
    t = term_b_20;
    if(((h_56 != NULL) && (h_56 != t)))
      _fail(t);
    else
      h_56 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_b_20, not_null(d_56));
    t = r_6(not_null(h_56), not_null(d_56), t);
    t = not_null(e_56);
    {
      ATerm r_56 (ATerm t)
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_22 = t;
            int o_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_56 = NULL;
                k_56 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = k_56;
                ;
                LocalPopChoice(o_22);
              }
            else
              {
                t = n_22;
                t = c_105(t);
                t = Cons_2_0(_id, r_56, t);
              }
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            {
              ATerm n_56 = NULL,o_56 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_56 = ATgetFirst((ATermList) t);
                  o_56 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_56), (ATerm) ATmakeAppl(sym_Undefined_1, n_56));
            }
          }
        return(t);
      }
      t = r_56(t);
      if(((g_56 != NULL) && (g_56 != t)))
        _fail(t);
      else
        g_56 = t;
      t = (ATerm) ATinsert(CheckATermList(not_null(g_56)), (ATerm) ATmakeAppl(sym_Program_1, not_null(d_56)));
      if(((q_13 != NULL) && (q_13 != t)))
        _fail(t);
      else
        q_13 = t;
      t = SSLsetAnnotations(not_null(q_13), not_null(c_56));
    }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm d_57 = NULL;
  d_57 = t;
  if(match_string(t, "--help"))
    {
      t = d_57;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = d_57;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = d_57;
        }
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL;
  t = term_t_20;
  e_57 = t;
  t = term_z_6;
  f_57 = t;
  t = term_p_22;
  t = r_6(e_57, f_57, t);
  t = term_q_22;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_s_22;
  return(t);
}
ATerm o_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,b_57 = NULL,c_57 = NULL;
  if(((y_56 != NULL) && (y_56 != t)))
    _fail(t);
  else
    y_56 = t;
  t = term_p_19;
  if(((a_57 != NULL) && (a_57 != t)))
    _fail(t);
  else
    a_57 = t;
  t = term_q_19;
  if(((b_57 != NULL) && (b_57 != t)))
    _fail(t);
  else
    b_57 = t;
  t = (ATerm) ATempty;
  if(((c_57 != NULL) && (c_57 != t)))
    _fail(t);
  else
    c_57 = t;
  t = SSL_table_put(not_null(a_57), not_null(b_57), not_null(c_57));
  t = not_null(y_56);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm t_22 = t;
      int u_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_105(t);
          ;
          LocalPopChoice(u_22);
        }
      else
        {
          t = t_22;
          {
            ATerm v_22 = t;
            int w_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_5, m_5, n_5, t);
                ;
                LocalPopChoice(w_22);
              }
            else
              {
                t = v_22;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(k_5, t);
    {
      ATerm x_22 = t;
      int y_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_57 = NULL;
          m_57 = t;
          {
            ATerm z_22 = t;
            int a_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_25 = NULL;
                t = m_57;
                {
                  ATerm b_23 = t;
                  int c_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_t_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(c_23);
                    }
                  else
                    {
                      t = b_23;
                      t = fetch_1_0(o_5, t);
                    }
                  t = m_57;
                  t = default_system_usage_0_0(t);
                  t = term_q_11;
                  v_25 = t;
                  t = SSL_exit(v_25);
                }
                ;
                LocalPopChoice(a_23);
              }
            else
              {
                t = z_22;
                {
                  ATerm c_26 = NULL;
                  t = term_w_21;
                  t = get_config_0_0(t);
                  t = m_57;
                  t = default_system_about_0_0(t);
                  t = term_q_11;
                  c_26 = t;
                  t = SSL_exit(c_26);
                }
              }
          }
          ;
          LocalPopChoice(y_22);
        }
      else
        {
          t = x_22;
          {
            ATerm d_23 = t;
            int e_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_57 = NULL,o_57 = NULL,p_57 = NULL;
                ATerm p_5 (ATerm t)
                {
                  ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL,e_14 = NULL;
                  s_57 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      r_57 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(s_57);
                  q_57 = t;
                  t = r_57;
                  if(((w_56 != NULL) && (w_56 != t)))
                    _fail(t);
                  else
                    w_56 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, r_57);
                  e_14 = t;
                  t = SSLsetAnnotations(e_14, q_57);
                  return(t);
                }
                t = fetch_1_0(p_5, t);
                t = term_t_18;
                if(((o_57 != NULL) && (o_57 != t)))
                  _fail(t);
                else
                  o_57 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_56)), term_f_23);
                if(((p_57 != NULL) && (p_57 != t)))
                  _fail(t);
                else
                  p_57 = t;
                t = SSL_printnl(not_null(o_57), not_null(p_57));
                t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_56)), term_f_23));
                t = default_system_usage_0_0(t);
                t = term_s_10;
                if(((n_57 != NULL) && (n_57 != t)))
                  _fail(t);
                else
                  n_57 = t;
                t = SSL_exit(not_null(n_57));
                ;
                LocalPopChoice(e_23);
              }
            else
              {
                t = d_23;
              }
          }
        }
      if(((x_56 != NULL) && (x_56 != t)))
        _fail(t);
      else
        x_56 = t;
      t = term_p_19;
      if(((z_56 != NULL) && (z_56 != t)))
        _fail(t);
      else
        z_56 = t;
      t = SSL_table_destroy(not_null(z_56));
      t = not_null(x_56);
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t)
{
  ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL,a_58 = NULL;
  t = parse_options_1_0(b_103, t);
  x_57 = t;
  t = term_g_23;
  a_58 = t;
  t = SSL_table_create(a_58);
  t = term_g_23;
  y_57 = t;
  t = term_h_23;
  z_57 = t;
  t = SSL_table_put(y_57, z_57, x_57);
  t = x_57;
  t = d_103(t);
  {
    ATerm i_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_103, t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = i_23;
        {
          ATerm p_23 = t;
          int r_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(r_23);
            }
          else
            {
              t = p_23;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm v_23 = t;
        int x_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
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
                  t = Option_3_0(s_5, t_5, u_5, t);
                  ;
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(b_24);
                      }
                    else
                      {
                        t = a_24;
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
ATerm r_5 (ATerm t)
{
  t = xtc_io_1_0(v_5, t);
  return(t);
}
ATerm s_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  ATerm h_58 = NULL,i_58 = NULL;
  t = term_e_24;
  h_58 = t;
  t = term_z_6;
  i_58 = t;
  t = term_k_24;
  t = r_6(h_58, i_58, t);
  t = term_l_24;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_u_24;
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = read_from_0_0(t);
  t = abox2html_0_0(t);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(q_5, default_usage_0_0, _id, r_5, t);
  return(t);
}

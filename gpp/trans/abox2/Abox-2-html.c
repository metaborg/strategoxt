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
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_d_24;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_x_22;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_p_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_o_21;
ATerm term_d_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_w_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_j_18;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_b_17;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_x_14;
ATerm term_d_14;
ATerm term_s_12;
ATerm term_q_12;
ATerm term_l_12;
ATerm term_v_11;
ATerm term_t_11;
ATerm term_h_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_g_10;
ATerm term_c_10;
ATerm term_v_9;
ATerm term_r_9;
ATerm term_e_9;
ATerm term_b_9;
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
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_w_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_x_5;
void init_constant_terms (void)
{
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
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
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_f_7, term_x_5);
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym__2, term_c_19, term_t_11);
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_11);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym__2, term_j_19, term_z_6);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_u_19, term_v_19);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_z_6);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym__2, term_e_22, term_z_6);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_z_6);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(sym__2, term_d_24, term_z_6);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm y_5 (ATerm f_84 (ATerm), ATerm l_34, ATerm j_34, ATerm);
ATerm q_1 (ATerm a_1, ATerm);
ATerm r_1 (ATerm f_1, ATerm g_1, ATerm h_1, ATerm);
ATerm a_0 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm o_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm Html2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm l_67 (ATerm), ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm o_68 (ATerm), ATerm);
ATerm w_0 (ATerm);
ATerm replace_quotes_0_0 (ATerm);
ATerm listtd_1_0 (ATerm k_74 (ATerm), ATerm);
ATerm x_0 (ATerm);
ATerm z_0 (ATerm);
ATerm html_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm y_94 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm d_1 (ATerm);
ATerm e_1 (ATerm);
ATerm i_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm m_1 (ATerm);
ATerm make_html_comment_0_0 (ATerm);
ATerm n_1 (ATerm);
ATerm sep_by_1_0 (ATerm m_65 (ATerm), ATerm);
ATerm filter_1_0 (ATerm i_80 (ATerm), ATerm);
ATerm s_1 (ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm b_6 (ATerm l_17, ATerm m_17, ATerm);
ATerm tov_1_0 (ATerm l_65 (ATerm), ATerm);
ATerm v_1 (ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm c_6 (ATerm d_33, ATerm e_33, ATerm);
ATerm while_not_2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm);
ATerm for_3_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm);
ATerm x_1 (ATerm);
ATerm z_1 (ATerm);
ATerm d_2 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm SOpt_value_1_0 (ATerm b_95 (ATerm), ATerm);
ATerm m_2 (ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm make_hs_0_0 (ATerm);
ATerm d_6 (ATerm o_65 (ATerm), ATerm n_15, ATerm);
ATerm o_2 (ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm v_2 (ATerm);
ATerm w_2 (ATerm);
ATerm x_2 (ATerm);
ATerm a_3 (ATerm);
ATerm b_3 (ATerm);
ATerm e_3 (ATerm);
ATerm g_3 (ATerm);
ATerm Abox2html_0_0 (ATerm);
ATerm topdown_1_0 (ATerm k_67 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm r_73 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm c_39 (ATerm u_38, ATerm);
ATerm conc_0_0 (ATerm);
ATerm at_last_1_0 (ATerm c_74 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm v_73 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm o_73 (ATerm), ATerm);
ATerm e_6 (ATerm u_13, ATerm p_13, ATerm);
ATerm o_3 (ATerm);
ATerm normalize_0_0 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm p_43 (ATerm j_43, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_6 (ATerm n_39, ATerm);
ATerm g_6 (ATerm z_35, ATerm a_36, ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm f_45 (ATerm z_43, ATerm);
ATerm g_45 (ATerm d_44, ATerm e_44, ATerm f_44, ATerm);
ATerm h_45 (ATerm n_44, ATerm o_44, ATerm p_44, ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm r_3 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm h_6 (ATerm r_35, ATerm s_35, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm i_6 (ATerm j_36, ATerm k_36, ATerm);
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm);
ATerm j_6 (ATerm r_45, ATerm s_45, ATerm);
ATerm end_scope_1_0 (ATerm c_84 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm f_66 (ATerm), ATerm g_66 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm b_84 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm k_95 (ATerm), ATerm);
ATerm z_3 (ATerm);
ATerm xtc_io_1_0 (ATerm l_95 (ATerm), ATerm);
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
ATerm r_6 (ATerm o_40, ATerm p_40, ATerm);
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm o_4 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_6 (ATerm m_45, ATerm n_45, ATerm l_45, ATerm);
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_6 (ATerm x_32, ATerm y_32, ATerm);
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm s_4 (ATerm);
ATerm t_4 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm i_87 (ATerm), ATerm);
ATerm v_4 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm w_4 (ATerm);
ATerm need_help_1_0 (ATerm y_89 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm fetch_1_0 (ATerm l_73 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_6 (ATerm n_30, ATerm o_30, ATerm);
ATerm debug_1_0 (ATerm w_85 (ATerm), ATerm);
ATerm map_1_0 (ATerm b_73 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm o_6 (ATerm d_47, ATerm e_47, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm g_5 (ATerm);
ATerm h_5 (ATerm);
ATerm i_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm w_56 (ATerm), ATerm x_56 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm b_92 (ATerm), ATerm);
ATerm l_5 (ATerm);
ATerm m_5 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm parse_options_1_0 (ATerm a_92 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm);
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
ATerm y_5 (ATerm f_84 (ATerm), ATerm l_34, ATerm j_34, ATerm t)
{
  ATerm e_0 = NULL,f_0 = NULL,p_0 = NULL,q_0 = NULL,r_0 = NULL,s_0 = NULL;
  q_0 = t;
  t = f_84(t);
  e_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_0, l_34, j_34);
  t = p_6(e_0, l_34, j_34, t);
  {
    ATerm a_2 = t;
    int w_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_0 = NULL;
        t = term_x_5;
        t_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, e_0, term_x_5);
        t = o_6(e_0, t_0, t);
        ;
        LocalPopChoice(w_5);
      }
    else
      {
        t = a_2;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_0 = ATgetFirst((ATermList) t);
        p_0 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_x_5;
    r_0 = t;
    t = (ATerm) ATinsert(CheckATermList(p_0), (ATerm) ATinsert(CheckATermList(f_0), l_34));
    s_0 = t;
    t = SSL_table_put(e_0, r_0, s_0);
    t = q_0;
  }
  return(t);
}
ATerm q_1 (ATerm a_1, ATerm t)
{
  t = a_1;
  {
    ATerm l_6 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm m_6 = ATgetArgument(t, 0);
            ATerm s_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = l_6;
      }
    t = term_t_6;
    t = debug_1_0(a_0, t);
    t = (ATerm) ATmakeAppl(sym__2, a_1, term_u_6);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm r_1 (ATerm f_1, ATerm g_1, ATerm h_1, ATerm t)
{
  t = SSL_open_file(f_1, g_1);
  return(t);
}
ATerm a_0 (ATerm t)
{
  t = term_w_6;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm l_1 = NULL,o_1 = NULL,p_1 = NULL;
  l_1 = t;
  if(match_cons(t, sym__2))
    {
      o_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = q_1(l_1, t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            t = r_1(o_1, p_1, l_1, t);
          }
      }
    }
  else
    {
      t = q_1(l_1, t);
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
  ATerm t_1 = NULL,u_1 = NULL,w_1 = NULL;
  t = term_z_6;
  t = new_0_0(t);
  t_1 = t;
  t = term_a_7;
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_1, term_a_7);
  t = n_6(t_1, u_1, t);
  w_1 = t;
  {
    ATerm b_7 = t;
    int c_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_1 = NULL;
        t = (ATerm) ATinsert(ATempty, term_d_7);
        y_1 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_1, (ATerm) ATinsert(ATempty, term_d_7));
        t = h_6(w_1, y_1, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(c_7);
      }
    else
      {
        t = b_7;
        t = w_1;
      }
  }
  return(t);
}
ATerm o_0 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_2 = NULL,c_2 = NULL;
  t = new_file_0_0(t);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_2, term_u_6);
  t = open_file_0_0(t);
  t = term_z_6;
  c_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_2, term_z_6);
  t = y_5(o_0, b_2, c_2, t);
  t = b_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm f_2 = NULL,g_2 = NULL;
  f_2 = t;
  t = xtc_new_file_0_0(t);
  g_2 = t;
  t = f_2;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm l_2 = NULL;
      l_2 = t;
      {
        ATerm g_7 = t;
        int i_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 = NULL,c_0 = NULL;
            t = SSL_is_string(l_2);
            b_0 = t;
            t = (ATerm) ATinsert(ATempty, b_0);
            c_0 = t;
            t = SSL_print(g_2, c_0);
            t = b_0;
            ;
            LocalPopChoice(i_7);
          }
        else
          {
            t = g_7;
            t = l_2;
          }
      }
      return(t);
    }
    t = topdown_1_0(u_0, t);
    t = SSL_close_file(g_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, g_2);
  }
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      z_2 = ATgetArgument(t, 0);
      y_2 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_7), y_2), term_k_7), z_2), term_j_7);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          z_2 = ATgetArgument(t, 0);
          y_2 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_7), y_2), term_k_7), z_2), term_m_7);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              z_2 = ATgetArgument(t, 0);
              y_2 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_7), y_2), term_k_7), z_2), term_p_7);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  z_2 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_7), z_2), term_q_7);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      z_2 = ATgetArgument(t, 0);
                      y_2 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_7), y_2), term_k_7), z_2), term_s_7);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          z_2 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_7), z_2), term_u_7);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              z_2 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_7), z_2), term_w_7);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  z_2 = ATgetArgument(t, 0);
                                  y_2 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_8), y_2), term_z_7), z_2), term_y_7);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      z_2 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_8), z_2), term_b_8);
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
ATerm bottomup_1_0 (ATerm l_67 (ATerm), ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = bottomup_1_0(l_67, t);
    return(t);
  }
  t = SRTS_all(v_0, t);
  t = l_67(t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm t_10 = NULL,u_10 = NULL,y_10 = NULL;
  t_10 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_10;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          u_10 = ATgetFirst((ATermList) t);
          y_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm h_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 = NULL,c_1 = NULL,h_2 = NULL;
            t = SSLgetAnnotations(t_10);
            y_0 = t;
            t = u_10;
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            t = y_10;
            t = flat_list_0_0(t);
            c_1 = t;
            t = (ATerm) ATinsert(CheckATermList(c_1), u_10);
            h_2 = t;
            t = SSLsetAnnotations(h_2, y_0);
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
                  ATerm e_2 = NULL,n_2 = NULL,p_2 = NULL,s_2 = NULL,i_2 = NULL;
                  t = SSLgetAnnotations(t_10);
                  p_2 = t;
                  t = u_10;
                  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                    {
                      t = u_10;
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
                      t = u_10;
                    }
                  t = (ATerm) ATinsert(CheckATermList(y_10), u_10);
                  i_2 = t;
                  t = SSLsetAnnotations(i_2, p_2);
                  s_2 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      n_2 = ATgetFirst((ATermList) t);
                      {
                        ATerm q_8 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = s_2;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm s_8 = ATgetFirst((ATermList) t);
                      e_2 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, n_2, e_2);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(n_8);
                }
              else
                {
                  t = m_8;
                  {
                    ATerm m_3 = NULL,v_3 = NULL,j_2 = NULL;
                    t = SSLgetAnnotations(t_10);
                    m_3 = t;
                    t = y_10;
                    t = flat_list_0_0(t);
                    v_3 = t;
                    t = (ATerm) ATinsert(CheckATermList(v_3), u_10);
                    j_2 = t;
                    t = SSLsetAnnotations(j_2, m_3);
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm o_68 (ATerm), ATerm t)
{
  ATerm i_11 (ATerm t)
  {
    ATerm u_8 = t;
    int w_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_68(t);
        ;
        LocalPopChoice(w_8);
      }
    else
      {
        t = u_8;
        t = SRTS_one(i_11, t);
      }
    return(t);
  }
  t = i_11(t);
  return(t);
}
ATerm w_0 (ATerm t)
{
  ATerm s_11 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm a_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(a_9) != AT_INT) || (ATgetInt((ATermInt) a_9) != 34)))
        _fail(t);
      s_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(s_11), term_b_9), term_b_9);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,r_11 = NULL,t_8 = NULL;
  r_11 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      m_11 = ATgetFirst((ATermList) t);
      n_11 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_11);
  l_11 = t;
  t = m_11;
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  t = (ATerm) ATinsert(CheckATermList(n_11), m_11);
  t_8 = t;
  t = SSLsetAnnotations(t_8, l_11);
  t = n_11;
  t = oncetd_1_0(w_0, t);
  k_11 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(k_11), term_e_9), term_e_9);
  return(t);
}
ATerm listtd_1_0 (ATerm k_74 (ATerm), ATerm t)
{
  ATerm y_12 (ATerm t)
  {
    ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
    t = k_74(t);
    v_12 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = v_12;
      }
    else
      {
        ATerm u_4 = NULL,k_5 = NULL,v_8 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_12 = ATgetFirst((ATermList) t);
            x_12 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(v_12);
        u_4 = t;
        t = x_12;
        t = y_12(t);
        k_5 = t;
        t = (ATerm) ATinsert(CheckATermList(k_5), w_12);
        v_8 = t;
        t = SSLsetAnnotations(v_8, u_4);
      }
    return(t);
  }
  t = y_12(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm g_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = g_9;
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm w_14 = NULL;
  w_14 = t;
  if(match_int(t, 32))
    {
      ATerm m_9 = t;
      int n_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_5 = NULL;
          t = term_e_8;
          z_5 = t;
          t = SSL_explode_string(z_5);
          ;
          LocalPopChoice(n_9);
        }
      else
        {
          t = m_9;
          t = w_14;
        }
    }
  else
    {
      if(match_int(t, 38))
        {
          ATerm o_9 = t;
          int p_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm a_6 = NULL;
              t = term_r_9;
              a_6 = t;
              t = SSL_explode_string(a_6);
              ;
              LocalPopChoice(p_9);
            }
          else
            {
              t = o_9;
              t = w_14;
            }
        }
      else
        {
          if(match_int(t, 60))
            {
              ATerm s_9 = t;
              int u_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_6 = NULL;
                  t = term_v_9;
                  q_6 = t;
                  t = SSL_explode_string(q_6);
                  ;
                  LocalPopChoice(u_9);
                }
              else
                {
                  t = s_9;
                  t = w_14;
                }
            }
          else
            {
              if(match_int(t, 62))
                {
                  ATerm x_9 = t;
                  int b_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_6 = NULL;
                      t = term_c_10;
                      v_6 = t;
                      t = SSL_explode_string(v_6);
                      ;
                      LocalPopChoice(b_10);
                    }
                  else
                    {
                      t = x_9;
                      t = w_14;
                    }
                }
              else
                {
                  t = w_14;
                }
            }
        }
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm i_13 = NULL,m_13 = NULL;
  m_13 = t;
  t = SSL_explode_string(m_13);
  t = listtd_1_0(x_0, t);
  t = map_1_0(z_0, t);
  t = flat_list_0_0(t);
  i_13 = t;
  t = SSL_implode_string(i_13);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm y_94 (ATerm), ATerm t)
{
  ATerm w_17 (ATerm t)
  {
    ATerm c_17 = NULL,f_17 = NULL,h_17 = NULL;
    h_17 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_17 = ATgetFirst((ATermList) t);
        f_17 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm d_10 = t;
          int e_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm e_7 = NULL,h_7 = NULL,o_7 = NULL,d_9 = NULL;
              t = SSLgetAnnotations(h_17);
              h_7 = t;
              t = c_17;
              t = y_94(t);
              o_7 = t;
              t = (ATerm) ATinsert(CheckATermList(f_17), o_7);
              d_9 = t;
              t = SSLsetAnnotations(d_9, h_7);
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm f_10 = ATgetFirst((ATermList) t);
                  e_7 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = e_7;
              t = w_17(t);
              ;
              LocalPopChoice(e_10);
            }
          else
            {
              t = d_10;
              t = h_17;
            }
        }
      }
    else
      {
        t = h_17;
      }
    return(t);
  }
  t = w_17(t);
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
  ATerm z_8 = NULL;
  z_8 = t;
  if(match_int(t, 9))
    {
      t = z_8;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = z_8;
    }
  return(t);
}
ATerm i_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm j_1 (ATerm t)
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
ATerm m_1 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_10), b_21);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm s_18 = NULL,u_18 = NULL;
  u_18 = t;
  t = SSL_explode_string(u_18);
  t = reverse_acc_2_0(_id, b_1, t);
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_18, (ATerm) ATempty);
  {
    ATerm c_21 (ATerm t)
    {
      ATerm g_20 = NULL,h_20 = NULL,l_20 = NULL,q_20 = NULL;
      if(match_cons(t, sym__2))
        {
          g_20 = ATgetArgument(t, 0);
          q_20 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_20;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm i_8 = NULL,j_8 = NULL;
          t = q_20;
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
              h_20 = ATgetFirst((ATermList) t);
              l_20 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_20;
          if(match_int(t, 10))
            {
              ATerm i_10 = t;
              int j_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_8 = NULL,x_8 = NULL,y_8 = NULL;
                  t = q_20;
                  t = remove_trailing_1_0(e_1, t);
                  y_8 = t;
                  t = SSL_implode_string(y_8);
                  r_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, l_20, (ATerm) ATempty);
                  t = c_21(t);
                  x_8 = t;
                  t = (ATerm) ATinsert(CheckATermList(x_8), r_8);
                  ;
                  LocalPopChoice(j_10);
                }
              else
                {
                  t = i_10;
                  t = (ATerm) ATmakeAppl(sym__2, l_20, (ATerm) ATinsert(CheckATermList(q_20), h_20));
                  t = c_21(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, l_20, (ATerm) ATinsert(CheckATermList(q_20), h_20));
              t = c_21(t);
            }
        }
      return(t);
    }
    t = c_21(t);
    t = remove_trailing_1_0(i_1, t);
    t = reverse_acc_2_0(_id, j_1, t);
    t = remove_trailing_1_0(k_1, t);
    t = map_1_0(m_1, t);
  }
  return(t);
}
ATerm n_1 (ATerm t)
{
  ATerm g_21 = NULL;
  g_21 = t;
  t = (ATerm) ATinsert(ATempty, g_21);
  return(t);
}
ATerm sep_by_1_0 (ATerm m_65 (ATerm), ATerm t)
{
  ATerm c_9 = NULL,l_9 = NULL;
  t = map_1_0(n_1, t);
  l_9 = t;
  t = term_z_6;
  t = m_65(t);
  c_9 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_9, l_9);
  t = b_6(c_9, l_9, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm i_80 (ATerm), ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,d_22 = NULL;
  a_22 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = a_22;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_22 = ATgetFirst((ATermList) t);
          d_22 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      {
        ATerm k_10 = t;
        int n_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_9 = NULL,y_9 = NULL,a_10 = NULL,f_9 = NULL;
            t = SSLgetAnnotations(a_22);
            q_9 = t;
            t = b_22;
            t = i_80(t);
            y_9 = t;
            t = d_22;
            t = filter_1_0(i_80, t);
            a_10 = t;
            t = (ATerm) ATinsert(CheckATermList(a_10), y_9);
            f_9 = t;
            t = SSLsetAnnotations(f_9, q_9);
            ;
            LocalPopChoice(n_10);
          }
        else
          {
            t = k_10;
            t = d_22;
            t = filter_1_0(i_80, t);
          }
      }
    }
  return(t);
}
ATerm s_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm i_22 = NULL;
  ATerm o_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(s_1, t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = o_10;
      t = term_v_10;
    }
  i_22 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, i_22, term_w_10);
      t = copy_0_0(t);
    }
  return(t);
}
ATerm b_6 (ATerm l_17, ATerm m_17, ATerm t)
{
  ATerm r_23 = NULL,s_23 = NULL;
  t = m_17;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = m_17;
    }
  else
    {
      ATerm r_10 = NULL,x_10 = NULL,h_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          r_23 = ATgetFirst((ATermList) t);
          s_23 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(m_17);
      r_10 = t;
      t = s_23;
      {
        ATerm f_11 (ATerm t)
        {
          ATerm z_10 = t;
          int c_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm b_11 = NULL;
              b_11 = t;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = b_11;
              ;
              LocalPopChoice(c_11);
            }
          else
            {
              t = z_10;
              {
                ATerm d_11 = NULL;
                t = Cons_2_0(_id, f_11, t);
                d_11 = t;
                t = (ATerm) ATinsert(CheckATermList(d_11), l_17);
              }
            }
          return(t);
        }
        t = f_11(t);
        x_10 = t;
        t = (ATerm) ATinsert(CheckATermList(x_10), r_23);
        h_9 = t;
        t = SSLsetAnnotations(h_9, r_10);
      }
    }
  return(t);
}
ATerm tov_1_0 (ATerm l_65 (ATerm), ATerm t)
{
  ATerm n_24 = NULL,z_25 = NULL,a_26 = NULL,e_26 = NULL;
  e_26 = t;
  if(match_cons(t, sym_L_2))
    {
      z_25 = ATgetArgument(t, 0);
      a_26 = ATgetArgument(t, 1);
      {
        ATerm e_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_11 = NULL,j_9 = NULL;
            t = SSLgetAnnotations(e_26);
            u_11 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, z_25, a_26);
            j_9 = t;
            t = SSLsetAnnotations(j_9, u_11);
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = e_11;
            {
              ATerm f_26 = NULL;
              t = term_z_6;
              t = l_65(t);
              f_26 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_26))), f_26))));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_LNAT_2))
        {
          z_25 = ATgetArgument(t, 0);
          a_26 = ATgetArgument(t, 1);
          {
            ATerm j_11 = t;
            int o_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm k_12 = NULL,k_9 = NULL;
                t = SSLgetAnnotations(e_26);
                k_12 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, z_25, a_26);
                k_9 = t;
                t = SSLsetAnnotations(k_9, k_12);
                ;
                LocalPopChoice(o_11);
              }
            else
              {
                t = j_11;
                {
                  ATerm g_26 = NULL;
                  t = term_z_6;
                  t = l_65(t);
                  g_26 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_26))), g_26))));
                }
              }
          }
        }
      else
        {
          ATerm h_26 = NULL;
          t = term_z_6;
          t = l_65(t);
          h_26 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_26))), h_26))));
        }
    }
  n_24 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_24))));
  return(t);
}
ATerm v_1 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm l_26 = NULL;
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(v_1, t);
      ;
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = term_t_11;
    }
  l_26 = t;
  if(match_int(t, 0))
    {
      t = term_v_11;
    }
  else
    {
      ATerm m_26 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_26, term_w_10);
      t = copy_0_0(t);
      m_26 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, m_26);
    }
  return(t);
}
ATerm c_6 (ATerm d_33, ATerm e_33, ATerm t)
{
  ATerm x_11 = t;
  int z_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(d_33, e_33);
      ;
      LocalPopChoice(z_11);
    }
  else
    {
      t = x_11;
      t = SSL_subtr(d_33, e_33);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm b_67 (ATerm), ATerm c_67 (ATerm), ATerm t)
{
  ATerm o_26 (ATerm t)
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_67(t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        t = c_67(t);
        t = o_26(t);
      }
    return(t);
  }
  t = o_26(t);
  return(t);
}
ATerm for_3_0 (ATerm e_67 (ATerm), ATerm f_67 (ATerm), ATerm g_67 (ATerm), ATerm t)
{
  t = e_67(t);
  t = while_not_2_0(f_67, g_67, t);
  return(t);
}
ATerm x_1 (ATerm t)
{
  ATerm s_26 = NULL,t_26 = NULL;
  if(match_cons(t, sym__2))
    {
      s_26 = ATgetArgument(t, 0);
      t_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, s_26, t_26, (ATerm) ATempty);
  return(t);
}
ATerm z_1 (ATerm t)
{
  ATerm w_26 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm c_12 = ATgetArgument(t, 0);
      if(((ATgetType(c_12) != AT_INT) || (ATgetInt((ATermInt) c_12) != 0)))
        _fail(t);
      {
        ATerm d_12 = ATgetArgument(t, 1);
      }
      w_26 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = w_26;
  return(t);
}
ATerm d_2 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL,e_27 = NULL,f_27 = NULL;
  if(match_cons(t, sym__3))
    {
      y_26 = ATgetArgument(t, 0);
      z_26 = ATgetArgument(t, 1);
      a_27 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, y_26, term_v_10);
  t = geq_0_0(t);
  t = term_v_10;
  f_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_26, term_v_10);
  t = c_6(y_26, f_27, t);
  e_27 = t;
  t = (ATerm) ATmakeAppl(sym__3, e_27, z_26, (ATerm) ATinsert(CheckATermList(a_27), z_26));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(x_1, z_1, d_2, t);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm b_95 (ATerm), ATerm t)
{
  ATerm h_27 = NULL;
  ATerm k_2 (ATerm t)
  {
    ATerm m_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL,t_9 = NULL;
    r_27 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        o_27 = ATgetArgument(t, 0);
        p_27 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(r_27);
    m_27 = t;
    t = o_27;
    t = b_95(t);
    q_27 = t;
    t = p_27;
    if(((h_27 != NULL) && (h_27 != t)))
      _fail(t);
    else
      h_27 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, q_27, p_27);
    t_9 = t;
    t = SSLsetAnnotations(t_9, m_27);
    return(t);
  }
  t = fetch_1_0(k_2, t);
  t = SSL_string_to_int(not_null(h_27));
  return(t);
}
ATerm m_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm t_27 = NULL;
  ATerm e_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(m_2, t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = e_12;
      t = term_t_11;
    }
  t_27 = t;
  if(match_int(t, 0))
    {
      t = term_v_11;
    }
  else
    {
      ATerm u_27 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, t_27, term_g_10);
      t = copy_0_0(t);
      u_27 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, u_27)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm i_28 = NULL,c_28 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      c_28 = ATgetArgument(t, 0);
      t = c_28;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          c_28 = ATgetArgument(t, 0);
          t = c_28;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              c_28 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = c_28;
        }
    }
  t = Hspace_0_0(t);
  i_28 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = i_28;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, i_28);
    }
  return(t);
}
ATerm d_6 (ATerm o_65 (ATerm), ATerm n_15, ATerm t)
{
  ATerm u_29 = NULL,v_29 = NULL;
  t = term_z_6;
  t = o_65(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      u_29 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, n_15, u_29);
  {
    ATerm z_32 (ATerm t)
    {
      ATerm a_33 (ATerm w_29, ATerm c_30, ATerm d_30, ATerm e_30, ATerm f_30, ATerm t)
      {
        ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
        t = e_30;
        {
          ATerm h_12 = t;
          int i_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm j_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(i_12);
              t = term_l_12;
            }
          else
            {
              t = h_12;
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
                    t = term_q_12;
                  }
                else
                  {
                    t = m_12;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm r_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_s_12;
                  }
              }
            }
          r_30 = t;
          t = e_30;
          t = make_hs_0_0(t);
          s_30 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(d_30), c_30), f_30);
          t = z_32(t);
          t_30 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(t_30), s_30), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, r_30), w_29));
        }
        return(t);
      }
      ATerm b_33 (ATerm x_30, ATerm y_30, ATerm z_30, ATerm a_31, ATerm t)
      {
        ATerm h_31 = NULL,i_31 = NULL;
        t = z_30;
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
                    t = term_q_12;
                  }
                else
                  {
                    t = e_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm j_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_s_12;
                  }
              }
            }
          h_31 = t;
          t = (ATerm) ATmakeAppl(sym__2, y_30, a_31);
          t = z_32(t);
          i_31 = t;
          t = (ATerm) ATinsert(CheckATermList(i_31), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, h_31), x_30));
        }
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
                        int l_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_32 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, s_31, t_31);
                            t = z_32(t);
                            i_32 = t;
                            t = (ATerm) ATinsert(CheckATermList(i_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, l_31, m_31))));
                            ;
                            LocalPopChoice(l_13);
                          }
                        else
                          {
                            t = k_13;
                            {
                              ATerm n_13 = t;
                              int o_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = a_33(r_31, n_31, o_31, u_31, v_31, t);
                                  ;
                                  LocalPopChoice(o_13);
                                }
                              else
                                {
                                  t = n_13;
                                  t = b_33(r_31, s_31, u_31, v_31, t);
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
                          t = a_33(r_31, n_31, o_31, u_31, v_31, t);
                          ;
                          LocalPopChoice(t_13);
                        }
                      else
                        {
                          t = r_13;
                          t = b_33(r_31, s_31, u_31, v_31, t);
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
                            t = z_32(t);
                            p_32 = t;
                            t = (ATerm) ATinsert(CheckATermList(p_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, l_31, m_31))));
                            ;
                            LocalPopChoice(x_13);
                          }
                        else
                          {
                            t = w_13;
                            t = b_33(r_31, s_31, u_31, v_31, t);
                          }
                      }
                    }
                  else
                    {
                      t = b_33(r_31, s_31, u_31, v_31, t);
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
              t = z_32(t);
              w_32 = t;
              t = (ATerm) ATinsert(CheckATermList(w_32), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, l_31, m_31))));
            }
        }
      return(t);
    }
    t = z_32(t);
    v_29 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATempty, v_29));
  }
  return(t);
}
ATerm o_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_2 (ATerm t)
{
  ATerm y_13 = t;
  if((PushChoice() == 0))
    {
      ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL,a_35 = NULL,w_9 = NULL;
      a_35 = t;
      if(match_cons(t, sym_R_2))
        {
          y_34 = ATgetArgument(t, 0);
          z_34 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(a_35);
      x_34 = t;
      t = z_34;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = (ATerm) ATmakeAppl(sym_R_2, y_34, z_34);
      w_9 = t;
      t = SSLsetAnnotations(w_9, x_34);
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
  ATerm j_33 = NULL;
  j_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, j_33, (ATerm) ATempty);
  {
    ATerm b_35 (ATerm t)
    {
      ATerm k_33 = NULL,l_33 = NULL,n_33 = NULL,o_33 = NULL,p_33 = NULL,q_33 = NULL;
      if(match_cons(t, sym__2))
        {
          n_33 = ATgetArgument(t, 0);
          q_33 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = n_33;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm v_33 = NULL;
          t = q_33;
          t = reverse_acc_2_0(_id, o_2, t);
          v_33 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, v_33));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_33 = ATgetFirst((ATermList) t);
              p_33 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = o_33;
          if(match_cons(t, sym_R_2))
            {
              k_33 = ATgetArgument(t, 0);
              l_33 = ATgetArgument(t, 1);
              {
                ATerm z_13 = t;
                int b_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_34 = NULL,c_34 = NULL;
                    t = q_33;
                    t = reverse_acc_2_0(_id, q_2, t);
                    b_34 = t;
                    t = (ATerm) ATmakeAppl(sym__2, p_33, (ATerm) ATempty);
                    t = b_35(t);
                    c_34 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(c_34), (ATerm) ATmakeAppl(sym_R_2, k_33, l_33)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, b_34));
                    ;
                    LocalPopChoice(b_14);
                  }
                else
                  {
                    t = z_13;
                    t = (ATerm) ATmakeAppl(sym__2, p_33, (ATerm) ATinsert(CheckATermList(q_33), o_33));
                    t = b_35(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, p_33, (ATerm) ATinsert(CheckATermList(q_33), o_33));
              t = b_35(t);
            }
        }
      return(t);
    }
    t = b_35(t);
    t = filter_1_0(r_2, t);
  }
  return(t);
}
ATerm v_2 (ATerm t)
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
ATerm w_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_d_14);
  return(t);
}
ATerm x_2 (ATerm t)
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
ATerm a_3 (ATerm t)
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
  ATerm r_37 = NULL;
  if(match_cons(t, sym_S_1))
    {
      r_37 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = r_37;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm w_36 = NULL,x_36 = NULL,y_36 = NULL,z_36 = NULL;
  y_36 = t;
  if(match_cons(t, sym_REF_2))
    {
      z_36 = ATgetArgument(t, 0);
      x_36 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, z_36, x_36);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          z_36 = ATgetArgument(t, 0);
          x_36 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, x_36), (ATerm) ATmakeAppl(sym_ANCHOR_1, z_36));
        }
      else
        {
          ATerm m_14 = t;
          int s_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm u_14 = ATgetArgument(t, 0);
                  ATerm v_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(s_14);
              t = term_x_14;
            }
          else
            {
              t = m_14;
              {
                ATerm z_14 = t;
                int a_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm b_15 = ATgetArgument(t, 0);
                        ATerm c_15 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_15);
                    t = term_x_14;
                  }
                else
                  {
                    t = z_14;
                    {
                      ATerm d_15 = t;
                      int e_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              z_36 = ATgetArgument(t, 0);
                              {
                                ATerm f_15 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(e_15);
                          t = z_36;
                        }
                      else
                        {
                          t = d_15;
                          if(match_cons(t, sym_A_3))
                            {
                              z_36 = ATgetArgument(t, 0);
                              x_36 = ATgetArgument(t, 1);
                              w_36 = ATgetArgument(t, 2);
                              {
                                ATerm h_37 = NULL,j_37 = NULL,k_37 = NULL,f_13 = NULL;
                                t = w_36;
                                t = construct_rows_0_0(t);
                                h_37 = t;
                                t = x_36;
                                t = Vspace_0_0(t);
                                j_37 = t;
                                t = h_37;
                                {
                                  ATerm t_2 (ATerm t)
                                  {
                                    ATerm l_37 = NULL;
                                    ATerm u_2 (ATerm t)
                                    {
                                      t = z_36;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm g_15 = ATgetArgument(t, 0);
                                        if(((ATgetType(g_15) != AT_LIST) || !(ATisEmpty(g_15))))
                                          _fail(t);
                                        l_37 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = d_6(u_2, l_37, t);
                                    return(t);
                                  }
                                  t = map_1_0(t_2, t);
                                  f_13 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, j_37, f_13);
                                  t = b_6(j_37, f_13, t);
                                  k_37 = t;
                                  t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_37)))));
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  z_36 = ATgetArgument(t, 0);
                                  x_36 = ATgetArgument(t, 1);
                                  {
                                    ATerm q_13 = NULL;
                                    t = z_36;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm h_15 = t;
                                      int i_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = x_36;
                                          t = filter_1_0(v_2, t);
                                          ;
                                          LocalPopChoice(i_15);
                                        }
                                      else
                                        {
                                          t = h_15;
                                          {
                                            ATerm v_13 = NULL,a_14 = NULL;
                                            t = at_last_1_0(w_2, t);
                                            q_13 = t;
                                            t = x_36;
                                            t = filter_1_0(x_2, t);
                                            a_14 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, q_13, a_14);
                                            t = b_6(q_13, a_14, t);
                                            v_13 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, v_13), term_j_15);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      z_36 = ATgetArgument(t, 0);
                                      x_36 = ATgetArgument(t, 1);
                                      {
                                        ATerm h_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,n_14 = NULL,o_14 = NULL,p_14 = NULL,q_14 = NULL,r_14 = NULL,y_14 = NULL,z_9 = NULL;
                                        t = z_36;
                                        t = Vspace_0_0(t);
                                        j_14 = t;
                                        t = z_36;
                                        t = Ispace_0_0(t);
                                        h_14 = t;
                                        t = x_36;
                                        t = filter_1_0(a_3, t);
                                        r_14 = t;
                                        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                                          {
                                            n_14 = ATgetFirst((ATermList) t);
                                            o_14 = (ATerm) ATgetNext((ATermList) t);
                                          }
                                        else
                                          _fail(t);
                                        t = SSLgetAnnotations(r_14);
                                        l_14 = t;
                                        t = n_14;
                                        t = tov_1_0(b_3, t);
                                        p_14 = t;
                                        t = o_14;
                                        {
                                          ATerm c_3 (ATerm t)
                                          {
                                            ATerm d_3 (ATerm t)
                                            {
                                              t = h_14;
                                              return(t);
                                            }
                                            t = tov_1_0(d_3, t);
                                            return(t);
                                          }
                                          t = map_1_0(c_3, t);
                                          q_14 = t;
                                          t = (ATerm) ATinsert(CheckATermList(q_14), p_14);
                                          z_9 = t;
                                          t = SSLsetAnnotations(z_9, l_14);
                                          y_14 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, j_14, y_14);
                                          t = b_6(j_14, y_14, t);
                                          k_14 = t;
                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, k_14)), term_j_15);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          z_36 = ATgetArgument(t, 0);
                                          x_36 = ATgetArgument(t, 1);
                                          {
                                            ATerm o_37 = NULL;
                                            ATerm f_3 (ATerm t)
                                            {
                                              t = not_null(o_37);
                                              return(t);
                                            }
                                            t = z_36;
                                            t = Hspace_0_0(t);
                                            if(((o_37 != NULL) && (o_37 != t)))
                                              _fail(t);
                                            else
                                              o_37 = t;
                                            t = x_36;
                                            t = filter_1_0(e_3, t);
                                            t = sep_by_1_0(f_3, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              z_36 = ATgetArgument(t, 0);
                                              x_36 = ATgetArgument(t, 1);
                                              t = z_36;
                                              {
                                                ATerm k_15 = t;
                                                int l_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_m_15), (ATerm) ATinsert(ATempty, x_36));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_o_15), (ATerm) ATinsert(ATempty, x_36));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_p_15), (ATerm) ATinsert(ATempty, x_36));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_q_15), (ATerm) ATinsert(ATempty, x_36));
                                                              }
                                                          }
                                                      }
                                                    ;
                                                    LocalPopChoice(l_15);
                                                  }
                                                else
                                                  {
                                                    t = k_15;
                                                    t = x_36;
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  z_36 = ATgetArgument(t, 0);
                                                  x_36 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm q_37 = NULL;
                                                    t = z_36;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = x_36;
                                                    t = map_1_0(g_3, t);
                                                    q_37 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_r_15), (ATerm) ATinsert(ATempty, q_37)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      z_36 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_36;
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
ATerm topdown_1_0 (ATerm k_67 (ATerm), ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    t = topdown_1_0(k_67, t);
    return(t);
  }
  t = k_67(t);
  t = SRTS_all(h_3, t);
  return(t);
}
ATerm at_end_1_0 (ATerm r_73 (ATerm), ATerm t)
{
  ATerm q_38 (ATerm t)
  {
    ATerm n_38 = NULL,o_38 = NULL,p_38 = NULL;
    p_38 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        n_38 = ATgetFirst((ATermList) t);
        o_38 = (ATerm) ATgetNext((ATermList) t);
        {
          ATerm s_15 = NULL,v_15 = NULL,h_10 = NULL;
          t = SSLgetAnnotations(p_38);
          s_15 = t;
          t = o_38;
          t = q_38(t);
          v_15 = t;
          t = (ATerm) ATinsert(CheckATermList(v_15), n_38);
          h_10 = t;
          t = SSLsetAnnotations(h_10, s_15);
        }
      }
    else
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = p_38;
        t = r_73(t);
      }
    return(t);
  }
  t = q_38(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
  x_37 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = x_37;
    }
  else
    {
      ATerm i_3 (ATerm t)
      {
        t = not_null(z_37);
        t = concat_0_0(t);
        return(t);
      }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_37 = ATgetFirst((ATermList) t);
          if(((z_37 != NULL) && (z_37 != (ATerm) ATgetNext((ATermList) t))))
            _fail((ATerm) ATgetNext((ATermList) t));
          else
            z_37 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_37;
      t = at_end_1_0(i_3, t);
    }
  return(t);
}
ATerm c_39 (ATerm u_38, ATerm t)
{
  ATerm v_38 = NULL;
  t = SSL_explode_term(u_38);
  if(match_cons(t, sym__2))
    {
      ATerm t_15 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) t_15) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      v_38 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_38;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm x_38 = NULL,y_38 = NULL,z_38 = NULL;
  z_38 = t;
  if(match_cons(t, sym__2))
    {
      x_38 = ATgetArgument(t, 0);
      y_38 = ATgetArgument(t, 1);
      {
        ATerm u_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              t = y_38;
              return(t);
            }
            t = x_38;
            t = at_end_1_0(j_3, t);
            ;
            LocalPopChoice(w_15);
          }
        else
          {
            t = u_15;
            t = c_39(z_38, t);
          }
      }
    }
  else
    {
      t = c_39(z_38, t);
    }
  return(t);
}
ATerm at_last_1_0 (ATerm c_74 (ATerm), ATerm t)
{
  ATerm a_40 (ATerm t)
  {
    ATerm x_39 = NULL,y_39 = NULL,z_39 = NULL;
    x_39 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        y_39 = ATgetFirst((ATermList) t);
        z_39 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm x_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_16 = NULL,l_10 = NULL;
          t = SSLgetAnnotations(x_39);
          h_16 = t;
          t = z_39;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(z_39), y_39);
          l_10 = t;
          t = SSLsetAnnotations(l_10, h_16);
          t = c_74(t);
          ;
          LocalPopChoice(y_15);
        }
      else
        {
          t = x_15;
          {
            ATerm z_16 = NULL,e_17 = NULL,m_10 = NULL;
            t = SSLgetAnnotations(x_39);
            z_16 = t;
            t = z_39;
            t = a_40(t);
            e_17 = t;
            t = (ATerm) ATinsert(CheckATermList(e_17), y_39);
            m_10 = t;
            t = SSLsetAnnotations(m_10, z_16);
          }
        }
    }
    return(t);
  }
  t = a_40(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm v_73 (ATerm), ATerm t)
{
  ATerm s_40 (ATerm t)
  {
    ATerm z_15 = t;
    int a_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_73(t);
        ;
        LocalPopChoice(a_16);
      }
    else
      {
        t = z_15;
        {
          ATerm n_40 = NULL,q_40 = NULL,r_40 = NULL,s_17 = NULL,v_17 = NULL,p_10 = NULL;
          n_40 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_40 = ATgetFirst((ATermList) t);
              r_40 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(n_40);
          s_17 = t;
          t = r_40;
          t = s_40(t);
          v_17 = t;
          t = (ATerm) ATinsert(CheckATermList(v_17), q_40);
          p_10 = t;
          t = SSLsetAnnotations(p_10, s_17);
        }
      }
    return(t);
  }
  t = s_40(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm o_73 (ATerm), ATerm t)
{
  ATerm u_40 = NULL,v_40 = NULL;
  ATerm k_3 (ATerm t)
  {
    ATerm w_40 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL,j_41 = NULL,a_11 = NULL,s_10 = NULL;
    j_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        f_41 = ATgetFirst((ATermList) t);
        g_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(j_41);
    e_41 = t;
    t = f_41;
    t = o_73(t);
    h_41 = t;
    t = (ATerm) ATinsert(CheckATermList(g_41), h_41);
    s_10 = t;
    t = SSLsetAnnotations(s_10, e_41);
    i_41 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        c_41 = ATgetFirst((ATermList) t);
        d_41 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(i_41);
    w_40 = t;
    t = d_41;
    if(((u_40 != NULL) && (u_40 != t)))
      _fail(t);
    else
      u_40 = t;
    t = (ATerm) ATinsert(CheckATermList(d_41), c_41);
    a_11 = t;
    t = SSLsetAnnotations(a_11, w_40);
    t = (ATerm) ATempty;
    return(t);
  }
  t = at_suffix_1_0(k_3, t);
  v_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_40, not_null(u_40));
  return(t);
}
ATerm e_6 (ATerm u_13, ATerm p_13, ATerm t)
{
  ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,o_41 = NULL,p_41 = NULL,q_41 = NULL;
  t = p_13;
  {
    ATerm l_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((o_41 != NULL) && (o_41 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            o_41 = ATgetArgument(t, 0);
          {
            ATerm b_16 = ATgetArgument(t, 1);
            if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
              {
                if(((k_41 != NULL) && (k_41 != ATgetFirst((ATermList) b_16))))
                  _fail(ATgetFirst((ATermList) b_16));
                else
                  k_41 = ATgetFirst((ATermList) b_16);
                if(((l_41 != NULL) && (l_41 != (ATerm) ATgetNext((ATermList) b_16))))
                  _fail((ATerm) ATgetNext((ATermList) b_16));
                else
                  l_41 = (ATerm) ATgetNext((ATermList) b_16);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(l_3, t);
    if(match_cons(t, sym__2))
      {
        n_41 = ATgetArgument(t, 0);
        m_41 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = m_41;
    {
      ATerm c_16 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = c_16;
        }
      t = (ATerm) ATinsert(CheckATermList(not_null(l_41)), not_null(k_41));
      {
        ATerm n_3 (ATerm t)
        {
          ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL,u_41 = NULL,w_11 = NULL;
          u_41 = t;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_41 = ATgetFirst((ATermList) t);
              t_41 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = SSLgetAnnotations(u_41);
          r_41 = t;
          t = t_41;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = (ATerm) ATinsert(CheckATermList(t_41), s_41);
          w_11 = t;
          t = SSLsetAnnotations(w_11, r_41);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, u_13, (ATerm) ATinsert(CheckATermList(m_41), s_41)));
          return(t);
        }
        t = at_last_1_0(n_3, t);
        p_41 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_41, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(o_41), p_41)));
        t = conc_0_0(t);
        q_41 = t;
        t = (ATerm) ATmakeAppl(sym_H_2, u_13, q_41);
      }
    }
  }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL,e_42 = NULL,f_42 = NULL;
  f_42 = t;
  if(match_cons(t, sym_H_2))
    {
      d_42 = ATgetArgument(t, 0);
      e_42 = ATgetArgument(t, 1);
      t = e_42;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_42 = ATgetFirst((ATermList) t);
          c_42 = (ATerm) ATgetNext((ATermList) t);
          t = c_42;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = b_42;
            }
          else
            {
              ATerm d_16 = t;
              int e_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_42;
                  t = e_6(d_42, e_42, t);
                  ;
                  LocalPopChoice(e_16);
                }
              else
                {
                  t = d_16;
                  t = f_42;
                }
            }
        }
      else
        {
          ATerm f_16 = t;
          int g_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = f_42;
              t = e_6(d_42, e_42, t);
              ;
              LocalPopChoice(g_16);
            }
          else
            {
              t = f_16;
              t = f_42;
            }
        }
    }
  else
    {
      ATerm i_16 = t;
      int j_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym_V_2))
            {
              ATerm k_16 = ATgetArgument(t, 0);
              e_42 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          LocalPopChoice(j_16);
          t = e_42;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              b_42 = ATgetFirst((ATermList) t);
              c_42 = (ATerm) ATgetNext((ATermList) t);
              t = c_42;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  t = b_42;
                }
              else
                {
                  t = f_42;
                }
            }
          else
            {
              t = f_42;
            }
        }
      else
        {
          t = i_16;
          t = f_42;
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
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      ;
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
    }
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm n_16 = t;
  int o_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Html2text_0_0(t);
      ;
      LocalPopChoice(o_16);
    }
  else
    {
      t = n_16;
    }
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm x_42 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(p_3, t);
  x_42 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, x_42)))));
  t = bottomup_1_0(q_3, t);
  return(t);
}
ATerm p_43 (ATerm j_43, ATerm t)
{
  t = SSL_fclose(j_43);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm m_43 = NULL,n_43 = NULL;
  n_43 = t;
  if(match_cons(t, sym_Stream_1))
    {
      m_43 = ATgetArgument(t, 0);
      {
        ATerm p_16 = t;
        int q_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(m_43);
            ;
            LocalPopChoice(q_16);
          }
        else
          {
            t = p_16;
            t = p_43(n_43, t);
          }
      }
    }
  else
    {
      t = p_43(n_43, t);
    }
  return(t);
}
ATerm f_6 (ATerm n_39, ATerm t)
{
  t = SSL_read_term_from_stream(n_39);
  return(t);
}
ATerm g_6 (ATerm z_35, ATerm a_36, ATerm t)
{
  ATerm q_43 = NULL;
  t = SSL_fopen(z_35, a_36);
  q_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_43);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm r_43 = NULL;
  t = SSL_stdin_stream();
  r_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_43);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm s_43 = NULL;
  t = SSL_stdout_stream();
  s_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_43);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm t_43 = NULL;
  t = SSL_stderr_stream();
  t_43 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, t_43);
  return(t);
}
ATerm f_45 (ATerm z_43, ATerm t)
{
  ATerm a_44 = NULL;
  t = SSL_explode_term(z_43);
  if(match_cons(t, sym__2))
    {
      ATerm r_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) r_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      {
        ATerm s_16 = ATgetArgument(t, 1);
        if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
          {
            a_44 = ATgetFirst((ATermList) s_16);
            {
              ATerm t_16 = (ATerm) ATgetNext((ATermList) s_16);
            }
          }
        else
          _fail(t);
      }
    }
  else
    _fail(t);
  t = a_44;
  if(match_cons(t, sym_stderr_0))
    {
      t = a_44;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = a_44;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = a_44;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm g_45 (ATerm d_44, ATerm e_44, ATerm f_44, ATerm t)
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL,l_44 = NULL,y_11 = NULL;
  t = SSLgetAnnotations(f_44);
  i_44 = t;
  t = d_44;
  if(match_cons(t, sym_Path_1))
    {
      l_44 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, l_44, e_44);
  y_11 = t;
  t = SSLsetAnnotations(y_11, i_44);
  if(match_cons(t, sym__2))
    {
      g_44 = ATgetArgument(t, 0);
      h_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(g_44, h_44, t);
  return(t);
}
ATerm h_45 (ATerm n_44, ATerm o_44, ATerm p_44, ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,a_45 = NULL,f_12 = NULL;
  t = SSLgetAnnotations(p_44);
  s_44 = t;
  t = SSL_is_string(n_44);
  a_45 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_45, o_44);
  f_12 = t;
  t = SSLsetAnnotations(f_12, s_44);
  if(match_cons(t, sym__2))
    {
      q_44 = ATgetArgument(t, 0);
      r_44 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = g_6(q_44, r_44, t);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  ATerm c_45 = NULL,d_45 = NULL,e_45 = NULL;
  if(match_cons(t, sym__2))
    {
      ATerm u_16 = ATgetArgument(t, 0);
      ATerm v_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  c_45 = t;
  if(match_cons(t, sym__2))
    {
      d_45 = ATgetArgument(t, 0);
      e_45 = ATgetArgument(t, 1);
      {
        ATerm w_16 = t;
        int x_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = f_45(c_45, t);
            ;
            LocalPopChoice(x_16);
          }
        else
          {
            t = w_16;
            {
              ATerm y_16 = t;
              int a_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = g_45(d_45, e_45, c_45, t);
                  ;
                  LocalPopChoice(a_17);
                }
              else
                {
                  t = y_16;
                  t = h_45(d_45, e_45, c_45, t);
                }
            }
          }
      }
    }
  else
    {
      t = f_45(c_45, t);
    }
  return(t);
}
ATerm r_3 (ATerm t)
{
  t = term_b_17;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm i_45 = NULL,k_45 = NULL,o_45 = NULL;
  ATerm d_17 = t;
  int g_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_45 = NULL;
      p_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, p_45, term_i_17);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(g_17);
    }
  else
    {
      t = d_17;
      t = debug_1_0(r_3, t);
      _fail(t);
    }
  k_45 = t;
  if(match_cons(t, sym_Stream_1))
    {
      o_45 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(o_45, t);
  i_45 = t;
  t = k_45;
  t = fclose_0_0(t);
  t = i_45;
  return(t);
}
ATerm h_6 (ATerm r_35, ATerm s_35, ATerm t)
{
  t = SSL_access(r_35, s_35);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm w_45 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_j_17;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm y_45 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          w_45 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_d_7);
      y_45 = t;
      t = (ATerm) ATmakeAppl(sym__2, w_45, (ATerm) ATinsert(ATempty, term_d_7));
      t = h_6(w_45, y_45, t);
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm i_6 (ATerm j_36, ATerm k_36, ATerm t)
{
  t = SSL_copy(j_36, k_36);
  return(t);
}
ATerm copy_to_1_0 (ATerm n_0 (ATerm), ATerm t)
{
  ATerm o_46 = NULL,p_46 = NULL;
  o_46 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_46 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm k_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_18 = NULL;
        t = o_46;
        t = n_0(t);
        l_18 = t;
        if(match_cons(t, sym_stdout_0))
          {
            t = l_18;
          }
        else
          {
            if(!(match_cons(t, sym_stderr_0)))
              _fail(t);
            t = l_18;
          }
        t = (ATerm) ATmakeAppl(sym__2, p_46, l_18);
        t = i_6(p_46, l_18, t);
        t = (ATerm) ATmakeAppl(sym_FILE_1, p_46);
        ;
        LocalPopChoice(n_17);
      }
    else
      {
        t = k_17;
        {
          ATerm o_17 = t;
          int p_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_18 = NULL;
              t = o_46;
              t = n_0(t);
              t_18 = t;
              {
                ATerm q_17 = t;
                if((PushChoice() == 0))
                  {
                    ATerm w_18 = NULL;
                    w_18 = t;
                    if(match_cons(t, sym_stdout_0))
                      {
                        t = w_18;
                      }
                    else
                      {
                        if(match_cons(t, sym_stderr_0))
                          {
                            t = w_18;
                          }
                        else
                          {
                            t = w_18;
                            if((p_46 != t))
                              {
                                _fail(t);
                              }
                            t = w_18;
                          }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_17;
                  }
                t = (ATerm) ATmakeAppl(sym__2, p_46, t_18);
                t = i_6(p_46, t_18, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_46);
              }
              ;
              LocalPopChoice(p_17);
            }
          else
            {
              t = o_17;
              t = o_46;
              t = n_0(t);
              if((p_46 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_46);
            }
        }
      }
  }
  return(t);
}
ATerm j_6 (ATerm r_45, ATerm s_45, ATerm t)
{
  ATerm t_46 = NULL,u_46 = NULL;
  u_46 = t;
  {
    ATerm r_17 = t;
    int t_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
        t = o_6(r_45, s_45, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_17 = ATgetFirst((ATermList) t);
            t_46 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(t_17);
        t = SSL_table_put(r_45, s_45, t_46);
        t = (ATerm) ATmakeAppl(sym__3, r_45, s_45, t_46);
      }
    else
      {
        t = r_17;
        t = SSL_table_remove(r_45, s_45);
        t = (ATerm) ATmakeAppl(sym__2, r_45, s_45);
      }
    t = u_46;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm c_84 (ATerm), ATerm t)
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL,y_46 = NULL,z_46 = NULL;
  y_46 = t;
  t = c_84(t);
  x_46 = t;
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_47 = NULL;
        t = term_x_5;
        a_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_46, term_x_5);
        t = o_6(x_46, a_47, t);
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_46 = ATgetFirst((ATermList) t);
        v_46 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_x_5;
    z_46 = t;
    t = SSL_table_put(x_46, z_46, v_46);
    t = w_46;
    {
      ATerm s_3 (ATerm t)
      {
        ATerm b_47 = NULL;
        b_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_46, b_47);
        t = j_6(x_46, b_47, t);
        return(t);
      }
      t = map_1_0(s_3, t);
      t = y_46;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm f_66 (ATerm), ATerm g_66 (ATerm), ATerm t)
{
  ATerm z_17 = t;
  int a_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_66(t);
      t = g_66(t);
      ;
      LocalPopChoice(a_18);
    }
  else
    {
      t = z_17;
      t = g_66(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm b_84 (ATerm), ATerm t)
{
  ATerm f_47 = NULL,g_47 = NULL,h_47 = NULL,i_47 = NULL,j_47 = NULL;
  g_47 = t;
  t = b_84(t);
  f_47 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_47, term_x_5);
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_47 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm d_18 = ATgetArgument(t, 0);
            ATerm e_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_x_5;
        n_47 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_47, term_x_5);
        t = o_6(f_47, n_47, t);
        ;
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        t = (ATerm) ATempty;
      }
    h_47 = t;
    t = term_x_5;
    i_47 = t;
    t = (ATerm) ATinsert(CheckATermList(h_47), (ATerm) ATempty);
    j_47 = t;
    t = SSL_table_put(f_47, i_47, j_47);
    t = g_47;
  }
  return(t);
}
ATerm t_3 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm w_47 = NULL;
  w_47 = t;
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_remove(w_47);
        ;
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = w_47;
      }
  }
  return(t);
}
ATerm x_3 (ATerm t)
{
  t = term_f_7;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm k_95 (ATerm), ATerm t)
{
  ATerm q_47 = NULL;
  ATerm u_3 (ATerm t)
  {
    ATerm r_47 = NULL;
    r_47 = t;
    {
      ATerm h_18 = t;
      int i_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_47 = NULL,t_47 = NULL;
          t = term_f_7;
          s_47 = t;
          t = term_x_5;
          t_47 = t;
          t = term_j_18;
          t = o_6(s_47, t_47, t);
          ;
          LocalPopChoice(i_18);
        }
      else
        {
          t = h_18;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
        }
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          if(((q_47 != NULL) && (q_47 != ATgetFirst((ATermList) t))))
            _fail(ATgetFirst((ATermList) t));
          else
            q_47 = ATgetFirst((ATermList) t);
          {
            ATerm k_18 = (ATerm) ATgetNext((ATermList) t);
          }
        }
      else
        _fail(t);
      t = q_47;
      t = map_1_0(w_3, t);
      t = r_47;
      t = end_scope_1_0(x_3, t);
    }
    return(t);
  }
  t = begin_scope_1_0(t_3, t);
  t = restore_always_2_0(k_95, u_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm m_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_o_18;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(n_18);
    }
  else
    {
      t = m_18;
      t = term_p_18;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm l_95 (ATerm), ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_47 = NULL;
        t = term_v_18;
        t = get_config_0_0(t);
        z_47 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, z_47);
        ;
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = term_j_17;
      }
    t = l_95(t);
    t = copy_to_1_0(z_3, t);
    return(t);
  }
  t = xtc_temp_files_1_0(y_3, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL,d_48 = NULL,e_48 = NULL;
  a_48 = t;
  t = term_z_6;
  t = whoami_0_0(t);
  b_48 = t;
  t = term_x_18;
  d_48 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_18), b_48), term_y_18);
  e_48 = t;
  t = SSL_printnl(d_48, e_48);
  t = term_v_10;
  c_48 = t;
  t = SSL_exit(c_48);
  t = a_48;
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm g_48 = NULL;
  g_48 = t;
  if(match_string(t, "-k"))
    {
      t = g_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = g_48;
    }
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL;
  h_48 = t;
  t = SSL_string_to_int(h_48);
  i_48 = t;
  t = term_a_19;
  j_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_19, i_48);
  t = r_6(j_48, i_48, t);
  t = h_48;
  return(t);
}
ATerm c_4 (ATerm t)
{
  t = term_b_19;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_4, b_4, c_4, t);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm l_48 = NULL;
  l_48 = t;
  if(match_string(t, "-S"))
    {
      t = l_48;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = l_48;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm m_48 = NULL,n_48 = NULL;
  t = term_c_19;
  m_48 = t;
  t = term_t_11;
  n_48 = t;
  t = term_d_19;
  t = r_6(m_48, n_48, t);
  t = term_e_19;
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = term_f_19;
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
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL;
  o_48 = t;
  t = SSL_string_to_int(o_48);
  p_48 = t;
  t = term_c_19;
  q_48 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_c_19, p_48);
  t = r_6(q_48, p_48, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, o_48);
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_g_19;
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
  ATerm r_48 = NULL,s_48 = NULL;
  t = term_j_19;
  r_48 = t;
  t = term_z_6;
  s_48 = t;
  t = term_k_19;
  t = r_6(r_48, s_48, t);
  t = term_m_19;
  return(t);
}
ATerm l_4 (ATerm t)
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
      t = Option_3_0(d_4, e_4, f_4, t);
      ;
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      {
        ATerm q_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(g_4, h_4, i_4, t);
            ;
            LocalPopChoice(s_19);
          }
        else
          {
            t = q_19;
            t = Option_3_0(j_4, k_4, l_4, t);
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm o_40, ATerm p_40, ATerm t)
{
  ATerm t_48 = NULL;
  t = term_t_19;
  t_48 = t;
  t = SSL_table_put(t_48, o_40, p_40);
  t = (ATerm) ATmakeAppl(sym__3, term_t_19, o_40, p_40);
  return(t);
}
ATerm Option_3_0 (ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
      t = term_z_6;
      t = h_0(t);
      y_48 = t;
      t = term_u_19;
      z_48 = t;
      t = term_v_19;
      a_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, y_48);
      t = p_6(z_48, a_49, y_48, t);
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
      t = term_z_6;
      t = g_0(t);
      d_49 = t;
      t = (ATerm) ATinsert(CheckATermList(x_48), d_49);
    }
  return(t);
}
ATerm m_4 (ATerm t)
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
ATerm n_4 (ATerm t)
{
  ATerm g_49 = NULL,h_49 = NULL;
  g_49 = t;
  t = term_o_18;
  h_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_o_18, g_49);
  t = r_6(h_49, g_49, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, g_49);
  return(t);
}
ATerm o_4 (ATerm t)
{
  t = term_w_19;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(m_4, n_4, o_4, t);
  return(t);
}
ATerm p_6 (ATerm m_45, ATerm n_45, ATerm l_45, ATerm t)
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
  {
    ATerm x_19 = t;
    int y_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_19 = ATgetArgument(t, 0);
            ATerm a_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, m_45, n_45);
        t = o_6(m_45, n_45, t);
        ;
        LocalPopChoice(y_19);
      }
    else
      {
        t = x_19;
        t = (ATerm) ATempty;
      }
    k_49 = t;
    t = (ATerm) ATinsert(CheckATermList(k_49), l_45);
    l_49 = t;
    t = SSL_table_put(m_45, n_45, l_49);
    t = j_49;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm t)
{
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL,v_49 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
      t = term_z_6;
      t = m_0(t);
      w_49 = t;
      t = term_u_19;
      x_49 = t;
      t = term_v_19;
      y_49 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_u_19, term_v_19, w_49);
      t = p_6(x_49, y_49, w_49, t);
      _fail(t);
    }
  else
    {
      ATerm c_50 = NULL;
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
      t = k_0(t);
      t = u_49;
      t = l_0(t);
      c_50 = t;
      t = (ATerm) ATinsert(CheckATermList(v_49), c_50);
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  ATerm e_50 = NULL;
  e_50 = t;
  if(match_string(t, "-i"))
    {
      t = e_50;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = e_50;
    }
  return(t);
}
ATerm q_4 (ATerm t)
{
  ATerm g_50 = NULL,h_50 = NULL;
  g_50 = t;
  t = term_v_18;
  h_50 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_v_18, g_50);
  t = r_6(h_50, g_50, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, g_50);
  return(t);
}
ATerm r_4 (ATerm t)
{
  t = term_b_20;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(p_4, q_4, r_4, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm i_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL;
  t = report_run_time_0_0(t);
  t = term_z_6;
  t = whoami_0_0(t);
  i_50 = t;
  t = term_x_18;
  o_50 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_c_20), i_50);
  p_50 = t;
  t = SSL_printnl(o_50, p_50);
  t = term_v_10;
  n_50 = t;
  t = SSL_exit(n_50);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_d_20;
  t = get_config_0_0(t);
  return(t);
}
ATerm k_6 (ATerm x_32, ATerm y_32, ATerm t)
{
  ATerm e_20 = t;
  int f_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(x_32, y_32);
      ;
      LocalPopChoice(f_20);
    }
  else
    {
      t = e_20;
      t = SSL_addr(x_32, y_32);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm t)
{
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL;
  r_50 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = r_50;
      t = e_79(t);
    }
  else
    {
      ATerm w_50 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          s_50 = ATgetFirst((ATermList) t);
          t_50 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_50;
      t = foldr_2_0(e_79, f_79, t);
      w_50 = t;
      t = (ATerm) ATmakeAppl(sym__2, s_50, w_50);
      t = f_79(t);
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
  t = term_t_11;
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm l_19 = NULL,r_19 = NULL;
  if(match_cons(t, sym__2))
    {
      l_19 = ATgetArgument(t, 0);
      r_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(l_19, r_19, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm z_50 = NULL,h_19 = NULL,i_19 = NULL;
  t = times_0_0(t);
  i_19 = t;
  t = SSL_explode_term(i_19);
  if(match_cons(t, sym__2))
    {
      ATerm i_20 = ATgetArgument(t, 0);
      h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_19;
  t = foldr_2_0(s_4, t_4, t);
  z_50 = t;
  t = SSL_TicksToSeconds(z_50);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  if(match_cons(t, sym__2))
    {
      t_51 = ATgetArgument(t, 0);
      u_51 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm j_20 = t;
    int k_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_51;
        if((t_51 != t))
          {
            _fail(t);
          }
        t = s_51;
        ;
        LocalPopChoice(k_20);
      }
    else
      {
        t = j_20;
        t = (ATerm) ATmakeAppl(sym__2, t_51, u_51);
        {
          ATerm m_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(t_51, u_51);
              ;
              LocalPopChoice(o_20);
            }
          else
            {
              t = m_20;
              t = SSL_gtr(t_51, u_51);
            }
          t = (ATerm) ATmakeAppl(sym__2, t_51, u_51);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm i_87 (ATerm), ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  {
    ATerm p_20 = t;
    int r_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_52 = NULL;
        t = term_c_19;
        t = get_config_0_0(t);
        a_52 = t;
        t = (ATerm) ATmakeAppl(sym__2, a_52, term_v_10);
        t = geq_0_0(t);
        t = y_51;
        t = i_87(t);
        ;
        LocalPopChoice(r_20);
      }
    else
      {
        t = p_20;
        t = y_51;
      }
  }
  return(t);
}
ATerm v_4 (ATerm t)
{
  ATerm c_52 = NULL,d_52 = NULL,h_52 = NULL,i_52 = NULL;
  t = run_time_0_0(t);
  c_52 = t;
  t = term_z_6;
  t = whoami_0_0(t);
  d_52 = t;
  t = term_x_18;
  h_52 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_20), c_52), term_s_20), d_52);
  i_52 = t;
  t = SSL_printnl(h_52, i_52);
  t = (ATerm) ATmakeAppl(sym__2, term_x_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_20), c_52), term_s_20), d_52));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(v_4, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_52 = NULL;
  t = report_run_time_0_0(t);
  t = term_t_11;
  j_52 = t;
  t = SSL_exit(j_52);
  return(t);
}
ATerm w_4 (ATerm t)
{
  ATerm r_52 = NULL,s_52 = NULL;
  s_52 = t;
  if(match_cons(t, sym_Help_0))
    {
      t = s_52;
    }
  else
    {
      if(match_cons(t, sym_Undefined_1))
        {
          r_52 = ATgetArgument(t, 0);
          {
            ATerm n_20 = NULL,p_12 = NULL;
            t = SSLgetAnnotations(s_52);
            n_20 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, r_52);
            p_12 = t;
            t = SSLsetAnnotations(p_12, n_20);
          }
        }
      else
        {
          if(!(match_cons(t, sym_Version_0)))
            _fail(t);
          t = s_52;
        }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm y_89 (ATerm), ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      t = fetch_1_0(w_4, t);
    }
  t = y_89(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm v_52 = NULL,w_52 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      v_52 = ATgetFirst((ATermList) t);
      w_52 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm a_53 = NULL,b_53 = NULL;
        ATerm x_4 (ATerm t)
        {
          t = (ATerm) ATinsert(CheckATermList(not_null(a_53)), not_null(b_53));
          return(t);
        }
        t = w_52;
        t = j_0(t);
        if(((a_53 != NULL) && (a_53 != t)))
          _fail(t);
        else
          a_53 = t;
        t = v_52;
        t = i_0(t);
        if(((b_53 != NULL) && (b_53 != t)))
          _fail(t);
        else
          b_53 = t;
        t = w_52;
        t = reverse_acc_2_0(i_0, x_4, t);
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_z_6;
      t = j_0(t);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,t_12 = NULL;
  h_53 = t;
  if(match_cons(t, sym_Program_1))
    {
      g_53 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(h_53);
  f_53 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, g_53);
  t_12 = t;
  t = SSLsetAnnotations(t_12, f_53);
  return(t);
}
ATerm z_4 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm j_53 = NULL;
  j_53 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, j_53), term_x_20);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL;
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_d_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      t = fetch_1_0(y_4, t);
    }
  t = term_a_21;
  t = echo_0_0(t);
  t = term_u_19;
  d_53 = t;
  t = term_v_19;
  e_53 = t;
  t = term_d_21;
  t = o_6(d_53, e_53, t);
  t = reverse_acc_2_0(_id, z_4, t);
  t = map_1_0(a_5, t);
  return(t);
}
ATerm fetch_1_0 (ATerm l_73 (ATerm), ATerm t)
{
  ATerm g_54 (ATerm t)
  {
    ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
    d_54 = t;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        e_54 = ATgetFirst((ATermList) t);
        f_54 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    {
      ATerm e_21 = t;
      int f_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_21 = NULL,p_21 = NULL,z_12 = NULL;
          t = SSLgetAnnotations(d_54);
          i_21 = t;
          t = e_54;
          t = l_73(t);
          p_21 = t;
          t = (ATerm) ATinsert(CheckATermList(f_54), p_21);
          z_12 = t;
          t = SSLsetAnnotations(z_12, i_21);
          ;
          LocalPopChoice(f_21);
        }
      else
        {
          t = e_21;
          {
            ATerm h_22 = NULL,l_22 = NULL,a_13 = NULL;
            t = SSLgetAnnotations(d_54);
            h_22 = t;
            t = f_54;
            t = g_54(t);
            l_22 = t;
            t = (ATerm) ATinsert(CheckATermList(l_22), e_54);
            a_13 = t;
            t = SSLsetAnnotations(a_13, h_22);
          }
        }
    }
    return(t);
  }
  t = g_54(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm k_54 = NULL,l_54 = NULL,m_54 = NULL;
  k_54 = t;
  {
    ATerm h_21 = t;
    int j_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = k_54;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm k_21 = ATgetFirst((ATermList) t);
                ATerm l_21 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = k_54;
          }
        ;
        LocalPopChoice(j_21);
      }
    else
      {
        t = h_21;
        t = (ATerm) ATinsert(ATempty, k_54);
      }
    l_54 = t;
    t = term_p_18;
    m_54 = t;
    t = SSL_printnl(m_54, l_54);
    t = k_54;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_d_20;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm n_6 (ATerm n_30, ATerm o_30, ATerm t)
{
  t = SSL_strcat(n_30, o_30);
  return(t);
}
ATerm debug_1_0 (ATerm w_85 (ATerm), ATerm t)
{
  ATerm q_54 = NULL,r_54 = NULL,s_54 = NULL,t_54 = NULL;
  q_54 = t;
  t = w_85(t);
  r_54 = t;
  t = term_x_18;
  s_54 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, q_54), r_54);
  t_54 = t;
  t = SSL_printnl(s_54, t_54);
  t = q_54;
  return(t);
}
ATerm map_1_0 (ATerm b_73 (ATerm), ATerm t)
{
  ATerm i_55 (ATerm t)
  {
    ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
    f_55 = t;
    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
      {
        t = f_55;
      }
    else
      {
        ATerm u_22 = NULL,y_22 = NULL,b_23 = NULL,d_13 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            g_55 = ATgetFirst((ATermList) t);
            h_55 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = SSLgetAnnotations(f_55);
        u_22 = t;
        t = g_55;
        t = b_73(t);
        y_22 = t;
        t = h_55;
        t = i_55(t);
        b_23 = t;
        t = (ATerm) ATinsert(CheckATermList(b_23), y_22);
        d_13 = t;
        t = SSLsetAnnotations(d_13, u_22);
      }
    return(t);
  }
  t = i_55(t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_55 = NULL;
      q_55 = t;
      t = SSL_is_string(q_55);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(b_5, t);
            ;
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            {
              ATerm w_55 = NULL,x_55 = NULL,y_55 = NULL;
              w_55 = t;
              if(match_cons(t, sym_Path_1))
                {
                  x_55 = ATgetArgument(t, 0);
                  t = x_55;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      x_55 = ATgetArgument(t, 0);
                      t = x_55;
                      {
                        ATerm u_21 = t;
                        int v_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(v_21);
                          }
                        else
                          {
                            t = u_21;
                            t = debug_1_0(c_5, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm c_56 = NULL,d_56 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          x_55 = ATgetArgument(t, 0);
                          y_55 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = x_55;
                      t = eval_config_0_0(t);
                      c_56 = t;
                      t = y_55;
                      t = eval_config_0_0(t);
                      d_56 = t;
                      t = (ATerm) ATmakeAppl(sym__2, c_56, d_56);
                      t = n_6(c_56, d_56, t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm o_6 (ATerm d_47, ATerm e_47, ATerm t)
{
  t = SSL_table_get(d_47, e_47);
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm h_56 = NULL,i_56 = NULL;
  h_56 = t;
  t = term_t_19;
  i_56 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_t_19, h_56);
  t = o_6(i_56, h_56, t);
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_56 = NULL,k_56 = NULL;
        t = eval_config_0_0(t);
        j_56 = t;
        t = term_t_19;
        k_56 = t;
        t = SSL_table_put(k_56, h_56, j_56);
        t = j_56;
        ;
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
      }
  }
  return(t);
}
ATerm d_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm n_56 = NULL,o_56 = NULL;
  t = term_y_21;
  n_56 = t;
  t = term_z_6;
  o_56 = t;
  t = term_z_21;
  t = r_6(n_56, o_56, t);
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm g_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm p_56 = NULL,q_56 = NULL,r_56 = NULL,s_56 = NULL;
  t = term_y_21;
  r_56 = t;
  t = term_z_6;
  s_56 = t;
  t = term_z_21;
  t = r_6(r_56, s_56, t);
  t = term_e_22;
  p_56 = t;
  t = term_z_6;
  q_56 = t;
  t = term_f_22;
  t = r_6(p_56, q_56, t);
  t = term_g_22;
  return(t);
}
ATerm i_5 (ATerm t)
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
      t = Option_3_0(d_5, e_5, f_5, t);
      ;
      LocalPopChoice(m_22);
    }
  else
    {
      t = k_22;
      t = Option_3_0(g_5, h_5, i_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm w_56 (ATerm), ATerm x_56 (ATerm), ATerm t)
{
  ATerm t_56 = NULL,u_56 = NULL,v_56 = NULL,y_56 = NULL,z_56 = NULL,a_57 = NULL,s_13 = NULL;
  a_57 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      u_56 = ATgetFirst((ATermList) t);
      v_56 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_57);
  t_56 = t;
  t = u_56;
  t = w_56(t);
  y_56 = t;
  t = v_56;
  t = x_56(t);
  z_56 = t;
  t = (ATerm) ATinsert(CheckATermList(z_56), y_56);
  s_13 = t;
  t = SSLsetAnnotations(s_13, t_56);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm b_92 (ATerm), ATerm t)
{
  ATerm f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,k_57 = NULL,l_57 = NULL,i_14 = NULL;
  f_57 = t;
  {
    ATerm n_22 = t;
    int o_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_p_22;
        t = b_92(t);
        ;
        LocalPopChoice(o_22);
      }
    else
      {
        t = n_22;
      }
    t = f_57;
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_57 = ATgetFirst((ATermList) t);
        i_57 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(f_57);
    g_57 = t;
    t = term_d_20;
    l_57 = t;
    t = (ATerm) ATmakeAppl(sym__2, term_d_20, h_57);
    t = r_6(l_57, h_57, t);
    t = i_57;
    {
      ATerm v_57 (ATerm t)
      {
        ATerm q_22 = t;
        int r_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_22 = t;
            int t_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_57 = NULL;
                o_57 = t;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = o_57;
                ;
                LocalPopChoice(t_22);
              }
            else
              {
                t = s_22;
                t = b_92(t);
                t = Cons_2_0(_id, v_57, t);
              }
            ;
            LocalPopChoice(r_22);
          }
        else
          {
            t = q_22;
            {
              ATerm r_57 = NULL,s_57 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  r_57 = ATgetFirst((ATermList) t);
                  s_57 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(s_57), (ATerm) ATmakeAppl(sym_Undefined_1, r_57));
            }
          }
        return(t);
      }
      t = v_57(t);
      k_57 = t;
      t = (ATerm) ATinsert(CheckATermList(k_57), (ATerm) ATmakeAppl(sym_Program_1, h_57));
      i_14 = t;
      t = SSLsetAnnotations(i_14, g_57);
    }
  }
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm h_58 = NULL;
  h_58 = t;
  if(match_string(t, "--help"))
    {
      t = h_58;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = h_58;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = h_58;
        }
    }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm i_58 = NULL,j_58 = NULL;
  t = term_w_20;
  i_58 = t;
  t = term_z_6;
  j_58 = t;
  t = term_v_22;
  t = r_6(i_58, j_58, t);
  t = term_w_22;
  return(t);
}
ATerm n_5 (ATerm t)
{
  t = term_x_22;
  return(t);
}
ATerm o_5 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm a_92 (ATerm), ATerm t)
{
  ATerm a_58 = NULL,b_58 = NULL,c_58 = NULL,d_58 = NULL,e_58 = NULL,f_58 = NULL,g_58 = NULL;
  c_58 = t;
  t = term_u_19;
  e_58 = t;
  t = term_v_19;
  f_58 = t;
  t = (ATerm) ATempty;
  g_58 = t;
  t = SSL_table_put(e_58, f_58, g_58);
  t = c_58;
  {
    ATerm j_5 (ATerm t)
    {
      ATerm z_22 = t;
      int a_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_92(t);
          ;
          LocalPopChoice(a_23);
        }
      else
        {
          t = z_22;
          {
            ATerm c_23 = t;
            int d_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(l_5, m_5, n_5, t);
                ;
                LocalPopChoice(d_23);
              }
            else
              {
                t = c_23;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(j_5, t);
    {
      ATerm e_23 = t;
      int f_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_58 = NULL;
          q_58 = t;
          {
            ATerm g_23 = t;
            int h_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_24 = NULL;
                t = q_58;
                {
                  ATerm i_23 = t;
                  int j_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_w_20;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(j_23);
                    }
                  else
                    {
                      t = i_23;
                      t = fetch_1_0(o_5, t);
                    }
                  t = q_58;
                  t = default_system_usage_0_0(t);
                  t = term_t_11;
                  e_24 = t;
                  t = SSL_exit(e_24);
                }
                ;
                LocalPopChoice(h_23);
              }
            else
              {
                t = g_23;
                {
                  ATerm i_24 = NULL;
                  t = term_y_21;
                  t = get_config_0_0(t);
                  t = q_58;
                  t = default_system_about_0_0(t);
                  t = term_t_11;
                  i_24 = t;
                  t = SSL_exit(i_24);
                }
              }
          }
          ;
          LocalPopChoice(f_23);
        }
      else
        {
          t = e_23;
          {
            ATerm k_23 = t;
            int l_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
                ATerm p_5 (ATerm t)
                {
                  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL,t_14 = NULL;
                  w_58 = t;
                  if(match_cons(t, sym_Undefined_1))
                    {
                      v_58 = ATgetArgument(t, 0);
                    }
                  else
                    _fail(t);
                  t = SSLgetAnnotations(w_58);
                  u_58 = t;
                  t = v_58;
                  if(((a_58 != NULL) && (a_58 != t)))
                    _fail(t);
                  else
                    a_58 = t;
                  t = (ATerm) ATmakeAppl(sym_Undefined_1, v_58);
                  t_14 = t;
                  t = SSLsetAnnotations(t_14, u_58);
                  return(t);
                }
                t = fetch_1_0(p_5, t);
                t = term_x_18;
                s_58 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_58)), term_m_23);
                t_58 = t;
                t = SSL_printnl(s_58, t_58);
                t = (ATerm) ATmakeAppl(sym__2, term_x_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_58)), term_m_23));
                t = default_system_usage_0_0(t);
                t = term_v_10;
                r_58 = t;
                t = SSL_exit(r_58);
                ;
                LocalPopChoice(l_23);
              }
            else
              {
                t = k_23;
              }
          }
        }
      b_58 = t;
      t = term_u_19;
      d_58 = t;
      t = SSL_table_destroy(d_58);
      t = b_58;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm a_90 (ATerm), ATerm b_90 (ATerm), ATerm c_90 (ATerm), ATerm d_90 (ATerm), ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL,e_59 = NULL;
  t = parse_options_1_0(a_90, t);
  b_59 = t;
  t = term_n_23;
  e_59 = t;
  t = SSL_table_create(e_59);
  t = term_n_23;
  c_59 = t;
  t = term_o_23;
  d_59 = t;
  t = SSL_table_put(c_59, d_59, b_59);
  t = b_59;
  t = c_90(t);
  {
    ATerm p_23 = t;
    int q_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(b_90, t);
        ;
        LocalPopChoice(q_23);
      }
    else
      {
        t = p_23;
        {
          ATerm t_23 = t;
          int u_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = d_90(t);
              t = report_success_0_0(t);
              ;
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
ATerm q_5 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
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
            t = output_option_0_0(t);
            ;
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
                  t = Option_3_0(s_5, t_5, u_5, t);
                  ;
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
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(c_24);
                      }
                    else
                      {
                        t = b_24;
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
  ATerm g_59 = NULL,h_59 = NULL;
  t = term_d_24;
  g_59 = t;
  t = term_z_6;
  h_59 = t;
  t = term_f_24;
  t = r_6(g_59, h_59, t);
  t = term_g_24;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_h_24;
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

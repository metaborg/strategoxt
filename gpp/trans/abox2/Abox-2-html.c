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
ATerm term_x_27;
ATerm term_w_27;
ATerm term_u_27;
ATerm term_t_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_c_27;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_b_26;
ATerm term_u_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_o_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_b_22;
ATerm term_a_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_g_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_d_20;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_q_18;
ATerm term_k_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_v_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_u_14;
ATerm term_k_14;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_q_12;
ATerm term_n_12;
ATerm term_j_12;
ATerm term_z_11;
ATerm term_w_11;
ATerm term_k_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_a_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_u_9;
ATerm term_q_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
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
ATerm term_b_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_p_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_e_8;
void init_constant_terms (void)
{
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_q_9));
  term_q_9 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym__2, term_w_8, term_e_8);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_n_12);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_12);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym__2, term_p_21, term_p_8);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_a_22);
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(sym__2, term_b_25, term_p_8);
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(sym__2, term_e_25, term_p_8);
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym__2, term_x_23, term_p_8);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_27));
  term_u_27 = (ATerm) ATmakeAppl(sym__2, term_t_27, term_p_8);
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_x_27));
  term_x_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm y_5 (ATerm g_97 (ATerm), ATerm s_47, ATerm q_47, ATerm);
ATerm u_1 (ATerm i_1, ATerm);
ATerm v_1 (ATerm k_1, ATerm m_1, ATerm o_1, ATerm);
ATerm f_2 (ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm i_2 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm Html2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm s_80 (ATerm), ATerm);
ATerm l_2 (ATerm);
ATerm o_2 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm v_81 (ATerm), ATerm);
ATerm s_2 (ATerm);
ATerm w_2 (ATerm);
ATerm replace_quotes_0_0 (ATerm);
ATerm listtd_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm html_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm z_107 (ATerm), ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm d_3 (ATerm);
ATerm f_3 (ATerm);
ATerm g_3 (ATerm);
ATerm h_3 (ATerm);
ATerm i_3 (ATerm);
ATerm make_html_comment_0_0 (ATerm);
ATerm j_3 (ATerm);
ATerm sep_by_1_0 (ATerm t_78 (ATerm), ATerm);
ATerm filter_1_0 (ATerm o_93 (ATerm), ATerm);
ATerm l_3 (ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm b_6 (ATerm u_30, ATerm v_30, ATerm);
ATerm LNAT_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm);
ATerm L_2_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm);
ATerm tov_1_0 (ATerm s_78 (ATerm), ATerm);
ATerm n_3 (ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm c_6 (ATerm k_46, ATerm l_46, ATerm);
ATerm while_not_2_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm);
ATerm for_3_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm);
ATerm o_3 (ATerm);
ATerm p_3 (ATerm);
ATerm q_3 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm SOpt_2_0 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm c_108 (ATerm), ATerm);
ATerm t_3 (ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm make_hs_0_0 (ATerm);
ATerm d_6 (ATerm v_78 (ATerm), ATerm w_28, ATerm);
ATerm R_2_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm);
ATerm u_3 (ATerm);
ATerm v_3 (ATerm);
ATerm w_3 (ATerm);
ATerm x_3 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm d_4 (ATerm);
ATerm e_4 (ATerm);
ATerm f_4 (ATerm);
ATerm h_4 (ATerm);
ATerm l_4 (ATerm);
ATerm n_4 (ATerm);
ATerm Abox2html_0_0 (ATerm);
ATerm topdown_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm at_end_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm concat_0_0 (ATerm);
ATerm v_26 (ATerm k_26, ATerm);
ATerm conc_0_0 (ATerm);
ATerm r_4 (ATerm);
ATerm at_last_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm z_4 (ATerm);
ATerm e_6 (ATerm d_27, ATerm y_26, ATerm);
ATerm a_5 (ATerm);
ATerm normalize_0_0 (ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm w_30 (ATerm o_30, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm f_6 (ATerm u_52, ATerm);
ATerm g_6 (ATerm g_49, ATerm h_49, ATerm);
ATerm _2_0 (ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm d_5 (ATerm);
ATerm e_5 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm f_5 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm h_6 (ATerm y_48, ATerm z_48, ATerm);
ATerm read_from_0_0 (ATerm);
ATerm i_6 (ATerm q_49, ATerm r_49, ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm j_6 (ATerm y_58, ATerm z_58, ATerm);
ATerm end_scope_1_0 (ATerm d_97 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm c_97 (ATerm), ATerm);
ATerm h_5 (ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm l_108 (ATerm), ATerm);
ATerm m_5 (ATerm);
ATerm xtc_io_1_0 (ATerm m_108 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm p_5 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm q_5 (ATerm);
ATerm r_5 (ATerm);
ATerm s_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm w_5 (ATerm);
ATerm x_5 (ATerm);
ATerm z_5 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm r_6 (ATerm v_53, ATerm w_53, ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm a_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm p_6 (ATerm t_58, ATerm u_58, ATerm s_58, ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm q_6 (ATerm);
ATerm s_6 (ATerm);
ATerm u_6 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm k_6 (ATerm e_46, ATerm f_46, ATerm);
ATerm foldr_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm v_6 (ATerm);
ATerm w_6 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm j_100 (ATerm), ATerm);
ATerm x_6 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm y_6 (ATerm);
ATerm need_help_1_0 (ATerm z_102 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm a_7 (ATerm);
ATerm b_7 (ATerm);
ATerm c_7 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm j_76 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm n_6 (ATerm u_43, ATerm v_43, ATerm);
ATerm debug_1_0 (ATerm x_98 (ATerm), ATerm);
ATerm map_1_0 (ATerm i_86 (ATerm), ATerm);
ATerm d_7 (ATerm);
ATerm e_7 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm o_6 (ATerm k_60, ATerm l_60, ATerm);
ATerm get_config_0_0 (ATerm);
ATerm f_7 (ATerm);
ATerm g_7 (ATerm);
ATerm i_7 (ATerm);
ATerm j_7 (ATerm);
ATerm k_7 (ATerm);
ATerm l_7 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm);
ATerm m_7 (ATerm);
ATerm parse_options_p__1_0 (ATerm c_105 (ATerm), ATerm);
ATerm p_7 (ATerm);
ATerm q_7 (ATerm);
ATerm t_7 (ATerm);
ATerm u_7 (ATerm);
ATerm parse_options_1_0 (ATerm b_105 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm);
ATerm x_7 (ATerm);
ATerm y_7 (ATerm);
ATerm z_7 (ATerm);
ATerm a_8 (ATerm);
ATerm b_8 (ATerm);
ATerm c_8 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm y_5 (ATerm g_97 (ATerm), ATerm s_47, ATerm q_47, ATerm t)
{
  ATerm m_0 = NULL,n_0 = NULL,o_0 = NULL,s_0 = NULL,t_0 = NULL,y_0 = NULL;
  m_0 = t;
  t = g_97(t);
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_0, s_47, q_47);
  t = p_6(n_0, s_47, q_47, t);
  {
    ATerm c_2 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_0 = NULL;
        t = term_e_8;
        z_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_0, term_e_8);
        t = o_6(n_0, z_0, t);
        ;
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_2;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_0 = ATgetFirst((ATermList) t);
        s_0 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_e_8;
    t_0 = t;
    t = (ATerm) ATinsert(CheckATermList(s_0), (ATerm) ATinsert(CheckATermList(o_0), s_47));
    y_0 = t;
    t = SSL_table_put(n_0, t_0, y_0);
    t = m_0;
  }
  return(t);
}
ATerm u_1 (ATerm i_1, ATerm t)
{
  t = i_1;
  {
    ATerm f_8 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm g_8 = ATgetArgument(t, 0);
            ATerm i_8 = ATgetArgument(t, 1);
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
    t = term_k_8;
    t = debug_1_0(f_2, t);
    t = (ATerm) ATmakeAppl(sym__2, i_1, term_l_8);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm v_1 (ATerm k_1, ATerm m_1, ATerm o_1, ATerm t)
{
  t = SSL_open_file(k_1, m_1);
  return(t);
}
ATerm f_2 (ATerm t)
{
  t = term_m_8;
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm r_1 = NULL,s_1 = NULL,t_1 = NULL;
  r_1 = t;
  if(match_cons(t, sym__2))
    {
      s_1 = ATgetArgument(t, 0);
      t_1 = ATgetArgument(t, 1);
      {
        ATerm n_8 = t;
        int o_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = u_1(r_1, t);
            ;
            LocalPopChoice(o_8);
          }
        else
          {
            t = n_8;
            t = v_1(s_1, t_1, r_1, t);
          }
      }
    }
  else
    {
      t = u_1(r_1, t);
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
  ATerm x_1 = NULL,y_1 = NULL;
  t = term_p_8;
  t = new_0_0(t);
  x_1 = t;
  t = term_s_8;
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_1, term_s_8);
  t = n_6(x_1, y_1, t);
  {
    ATerm t_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_1 = NULL,b_2 = NULL;
        z_1 = t;
        t = (ATerm) ATinsert(ATempty, term_v_8);
        b_2 = t;
        t = (ATerm) ATmakeAppl(sym__2, z_1, (ATerm) ATinsert(ATempty, term_v_8));
        t = h_6(z_1, b_2, t);
        t = new_file_0_0(t);
        ;
        LocalPopChoice(u_8);
      }
    else
      {
        t = t_8;
      }
  }
  return(t);
}
ATerm i_2 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL;
  t = new_file_0_0(t);
  d_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, term_l_8);
  t = open_file_0_0(t);
  t = term_p_8;
  e_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_2, term_p_8);
  t = y_5(i_2, d_2, e_2, t);
  t = d_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm g_2 = NULL,h_2 = NULL;
  g_2 = t;
  t = xtc_new_file_0_0(t);
  h_2 = t;
  t = g_2;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_2 = NULL,f_0 = NULL,p_0 = NULL;
          m_2 = t;
          t = SSL_is_string(m_2);
          f_0 = t;
          t = (ATerm) ATinsert(ATempty, f_0);
          p_0 = t;
          t = SSL_print(h_2, p_0);
          t = f_0;
          ;
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
        }
      return(t);
    }
    t = topdown_1_0(j_2, t);
    t = SSL_close_file(h_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, h_2);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_9), z_2), term_a_9), a_3), term_z_8);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          a_3 = ATgetArgument(t, 0);
          z_2 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_9), z_2), term_a_9), a_3), term_c_9);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              a_3 = ATgetArgument(t, 0);
              z_2 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_9), z_2), term_a_9), a_3), term_e_9);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  a_3 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_g_9), a_3), term_f_9);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      a_3 = ATgetArgument(t, 0);
                      z_2 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_9), z_2), term_a_9), a_3), term_h_9);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          a_3 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_9), a_3), term_j_9);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              a_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_9), a_3), term_l_9);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  a_3 = ATgetArgument(t, 0);
                                  z_2 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_9), z_2), term_p_9), a_3), term_o_9);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      a_3 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_9), a_3), term_u_9);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_w_9;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_x_9;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_y_9;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_a_10;
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
  ATerm k_2 (ATerm t)
  {
    t = bottomup_1_0(s_80, t);
    return(t);
  }
  t = SRTS_all(k_2, t);
  t = s_80(t);
  return(t);
}
ATerm l_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm o_2 (ATerm t)
{
  ATerm t_9 = NULL;
  t_9 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = t_9;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm b_10 = ATgetFirst((ATermList) t);
          ATerm e_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = t_9;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(l_2, flat_list_0_0, t);
            ;
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
                  ATerm m_9 = NULL,r_9 = NULL,s_9 = NULL;
                  t = Cons_2_0(o_2, _id, t);
                  m_9 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      r_9 = ATgetFirst((ATermList) t);
                      {
                        ATerm m_10 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = m_9;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm n_10 = ATgetFirst((ATermList) t);
                      s_9 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, r_9, s_9);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(l_10);
                }
              else
                {
                  t = k_10;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm v_81 (ATerm), ATerm t)
{
  ATerm c_10 (ATerm t)
  {
    ATerm o_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_81(t);
        ;
        LocalPopChoice(s_10);
      }
    else
      {
        t = o_10;
        t = SRTS_one(c_10, t);
      }
    return(t);
  }
  t = c_10(t);
  return(t);
}
ATerm s_2 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm w_2 (ATerm t)
{
  ATerm q_10 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm t_10 = ATgetFirst((ATermList) t);
      if(((ATgetType(t_10) != AT_INT) || (ATgetInt((ATermInt) t_10) != 34)))
        _fail(t);
      q_10 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(q_10), term_u_10), term_u_10);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm d_10 = NULL,p_10 = NULL;
  ATerm t_2 (ATerm t)
  {
    if(((d_10 != NULL) && (d_10 != t)))
      _fail(t);
    else
      d_10 = t;
    return(t);
  }
  t = Cons_2_0(s_2, t_2, t);
  t = not_null(d_10);
  t = oncetd_1_0(w_2, t);
  p_10 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(p_10), term_v_10), term_v_10);
  return(t);
}
ATerm listtd_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm r_10 (ATerm t)
  {
    t = r_87(t);
    {
      ATerm w_10 = t;
      int x_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(x_10);
        }
      else
        {
          t = w_10;
          t = Cons_2_0(_id, r_10, t);
        }
    }
    return(t);
  }
  t = r_10(t);
  return(t);
}
ATerm x_2 (ATerm t)
{
  ATerm y_10 = t;
  int z_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      ;
      LocalPopChoice(z_10);
    }
  else
    {
      t = y_10;
    }
  return(t);
}
ATerm y_2 (ATerm t)
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_int(t, 32))
        {
          ATerm r_0 = NULL;
          t = term_x_9;
          r_0 = t;
          t = SSL_explode_string(r_0);
        }
      else
        {
          if(match_int(t, 38))
            {
              ATerm u_0 = NULL;
              t = term_c_11;
              u_0 = t;
              t = SSL_explode_string(u_0);
            }
          else
            {
              if(match_int(t, 60))
                {
                  ATerm v_0 = NULL;
                  t = term_d_11;
                  v_0 = t;
                  t = SSL_explode_string(v_0);
                }
              else
                {
                  ATerm w_0 = NULL;
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 62)))
                    _fail(t);
                  t = term_e_11;
                  w_0 = t;
                  t = SSL_explode_string(w_0);
                }
            }
        }
      ;
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm g_11 = NULL,h_11 = NULL;
  g_11 = t;
  t = SSL_explode_string(g_11);
  t = listtd_1_0(x_2, t);
  t = map_1_0(y_2, t);
  t = flat_list_0_0(t);
  h_11 = t;
  t = SSL_implode_string(h_11);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm z_107 (ATerm), ATerm t)
{
  ATerm s_11 (ATerm t)
  {
    ATerm f_11 = t;
    int i_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_11 = NULL;
        t = Cons_2_0(z_107, _id, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_11 = ATgetFirst((ATermList) t);
            r_11 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = r_11;
        t = s_11(t);
        ;
        LocalPopChoice(i_11);
      }
    else
      {
        t = f_11;
      }
    return(t);
  }
  t = s_11(t);
  return(t);
}
ATerm b_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_3 (ATerm t)
{
  ATerm f_1 = NULL;
  f_1 = t;
  if(match_int(t, 9))
    {
      t = f_1;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = f_1;
    }
  return(t);
}
ATerm d_3 (ATerm t)
{
  ATerm r_2 = NULL;
  r_2 = t;
  if(match_int(t, 9))
    {
      t = r_2;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = r_2;
    }
  return(t);
}
ATerm f_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm h_3 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm i_3 (ATerm t)
{
  ATerm q_14 = NULL;
  q_14 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_k_11), q_14);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm d_12 = NULL,k_12 = NULL;
  d_12 = t;
  t = SSL_explode_string(d_12);
  t = reverse_acc_2_0(_id, b_3, t);
  k_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, k_12, (ATerm) ATempty);
  {
    ATerm s_14 (ATerm t)
    {
      ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL;
      if(match_cons(t, sym__2))
        {
          d_14 = ATgetArgument(t, 0);
          g_14 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_14;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm d_1 = NULL,e_1 = NULL;
          t = g_14;
          t = remove_trailing_1_0(c_3, t);
          e_1 = t;
          t = SSL_implode_string(e_1);
          d_1 = t;
          t = (ATerm) ATinsert(ATempty, d_1);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_14 = ATgetFirst((ATermList) t);
              f_14 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = e_14;
          if(match_int(t, 10))
            {
              ATerm l_11 = t;
              int m_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm n_2 = NULL,p_2 = NULL,q_2 = NULL;
                  t = g_14;
                  t = remove_trailing_1_0(d_3, t);
                  q_2 = t;
                  t = SSL_implode_string(q_2);
                  n_2 = t;
                  t = (ATerm) ATmakeAppl(sym__2, f_14, (ATerm) ATempty);
                  t = s_14(t);
                  p_2 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_2), n_2);
                  ;
                  LocalPopChoice(m_11);
                }
              else
                {
                  t = l_11;
                  t = (ATerm) ATmakeAppl(sym__2, f_14, (ATerm) ATinsert(CheckATermList(g_14), e_14));
                  t = s_14(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, f_14, (ATerm) ATinsert(CheckATermList(g_14), e_14));
              t = s_14(t);
            }
        }
      return(t);
    }
    t = s_14(t);
    t = remove_trailing_1_0(f_3, t);
    t = reverse_acc_2_0(_id, g_3, t);
    t = remove_trailing_1_0(h_3, t);
    t = map_1_0(i_3, t);
  }
  return(t);
}
ATerm j_3 (ATerm t)
{
  ATerm x_14 = NULL;
  x_14 = t;
  t = (ATerm) ATinsert(ATempty, x_14);
  return(t);
}
ATerm sep_by_1_0 (ATerm t_78 (ATerm), ATerm t)
{
  ATerm u_2 = NULL,v_2 = NULL;
  t = map_1_0(j_3, t);
  u_2 = t;
  t = term_p_8;
  t = t_78(t);
  v_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_2, u_2);
  t = b_6(v_2, u_2, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm o_93 (ATerm), ATerm t)
{
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              t = filter_1_0(o_93, t);
              return(t);
            }
            t = Cons_2_0(o_93, k_3, t);
            ;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            {
              ATerm c_15 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm t_11 = ATgetFirst((ATermList) t);
                  c_15 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = c_15;
              t = filter_1_0(o_93, t);
            }
          }
      }
    }
  return(t);
}
ATerm l_3 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm f_15 = NULL;
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(l_3, t);
      ;
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      t = term_w_11;
    }
  f_15 = t;
  if(match_int(t, 0))
    {
      ATerm x_11 = t;
      int y_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(y_11);
        }
      else
        {
          t = x_11;
          t = (ATerm) ATmakeAppl(sym__2, f_15, term_z_11);
          t = copy_0_0(t);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, f_15, term_z_11);
      t = copy_0_0(t);
    }
  return(t);
}
ATerm b_6 (ATerm u_30, ATerm v_30, ATerm t)
{
  t = v_30;
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        {
          ATerm m_3 (ATerm t)
          {
            ATerm c_12 = t;
            int e_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(e_12);
              }
            else
              {
                t = c_12;
                {
                  ATerm i_15 = NULL;
                  t = Cons_2_0(_id, m_3, t);
                  i_15 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_15), u_30);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, m_3, t);
        }
      }
  }
  return(t);
}
ATerm LNAT_2_0 (ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,b_0 = NULL,l_0 = NULL;
  t_15 = t;
  if(match_cons(t, sym_LNAT_2))
    {
      p_15 = ATgetArgument(t, 0);
      q_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_15);
  o_15 = t;
  t = p_15;
  t = a_77(t);
  r_15 = t;
  t = q_15;
  t = b_77(t);
  s_15 = t;
  l_0 = t;
  t = (ATerm) ATmakeAppl(sym_LNAT_2, r_15, s_15);
  b_0 = t;
  t = SSLsetAnnotations(b_0, o_15);
  return(t);
}
ATerm L_2_0 (ATerm y_76 (ATerm), ATerm z_76 (ATerm), ATerm t)
{
  ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,q_0 = NULL,x_0 = NULL;
  c_16 = t;
  if(match_cons(t, sym_L_2))
    {
      y_15 = ATgetArgument(t, 0);
      z_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_16);
  x_15 = t;
  t = y_15;
  t = y_76(t);
  a_16 = t;
  t = z_15;
  t = z_76(t);
  b_16 = t;
  x_0 = t;
  t = (ATerm) ATmakeAppl(sym_L_2, a_16, b_16);
  q_0 = t;
  t = SSLsetAnnotations(q_0, x_15);
  return(t);
}
ATerm tov_1_0 (ATerm s_78 (ATerm), ATerm t)
{
  ATerm i_16 = NULL;
  ATerm f_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2_0(_id, _id, t);
      ;
      LocalPopChoice(g_12);
    }
  else
    {
      t = f_12;
      {
        ATerm h_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2_0(_id, _id, t);
            ;
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
            {
              ATerm j_16 = NULL,l_16 = NULL;
              j_16 = t;
              t = term_p_8;
              t = s_78(t);
              l_16 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_j_12), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, j_16))), l_16))));
            }
          }
      }
    }
  i_16 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_j_12), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, i_16))));
  return(t);
}
ATerm n_3 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm n_16 = NULL;
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(n_3, t);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = term_n_12;
    }
  n_16 = t;
  if(match_int(t, 0))
    {
      ATerm o_12 = t;
      int p_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_12;
          ;
          LocalPopChoice(p_12);
        }
      else
        {
          t = o_12;
          {
            ATerm q_16 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, n_16, term_z_11);
            t = copy_0_0(t);
            q_16 = t;
            t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, q_16);
          }
        }
    }
  else
    {
      ATerm t_16 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, n_16, term_z_11);
      t = copy_0_0(t);
      t_16 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, t_16);
    }
  return(t);
}
ATerm c_6 (ATerm k_46, ATerm l_46, ATerm t)
{
  ATerm r_12 = t;
  int s_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_subti(k_46, l_46);
      ;
      LocalPopChoice(s_12);
    }
  else
    {
      t = r_12;
      t = SSL_subtr(k_46, l_46);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm t)
{
  ATerm u_16 (ATerm t)
  {
    ATerm t_12 = t;
    int u_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_80(t);
        ;
        LocalPopChoice(u_12);
      }
    else
      {
        t = t_12;
        t = j_80(t);
        t = u_16(t);
      }
    return(t);
  }
  t = u_16(t);
  return(t);
}
ATerm for_3_0 (ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm n_80 (ATerm), ATerm t)
{
  t = l_80(t);
  t = while_not_2_0(m_80, n_80, t);
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL;
  if(match_cons(t, sym__2))
    {
      w_16 = ATgetArgument(t, 0);
      x_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, w_16, x_16, (ATerm) ATempty);
  return(t);
}
ATerm p_3 (ATerm t)
{
  ATerm e_17 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm v_12 = ATgetArgument(t, 0);
      if(((ATgetType(v_12) != AT_INT) || (ATgetInt((ATermInt) v_12) != 0)))
        _fail(t);
      {
        ATerm w_12 = ATgetArgument(t, 1);
      }
      e_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = e_17;
  return(t);
}
ATerm q_3 (ATerm t)
{
  ATerm f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,k_17 = NULL;
  if(match_cons(t, sym__3))
    {
      f_17 = ATgetArgument(t, 0);
      g_17 = ATgetArgument(t, 1);
      h_17 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, f_17, term_w_11);
  t = geq_0_0(t);
  t = term_w_11;
  k_17 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_17, term_w_11);
  t = c_6(f_17, k_17, t);
  i_17 = t;
  t = (ATerm) ATmakeAppl(sym__3, i_17, g_17, (ATerm) ATinsert(CheckATermList(h_17), g_17));
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(o_3, p_3, q_3, t);
  return(t);
}
ATerm SOpt_2_0 (ATerm g_78 (ATerm), ATerm h_78 (ATerm), ATerm t)
{
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,p_17 = NULL,s_17 = NULL,t_17 = NULL,a_1 = NULL,b_1 = NULL;
  t_17 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      m_17 = ATgetArgument(t, 0);
      n_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(t_17);
  l_17 = t;
  t = m_17;
  t = g_78(t);
  p_17 = t;
  t = n_17;
  t = h_78(t);
  s_17 = t;
  b_1 = t;
  t = (ATerm) ATmakeAppl(sym_SOpt_2, p_17, s_17);
  a_1 = t;
  t = SSLsetAnnotations(a_1, l_17);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm c_108 (ATerm), ATerm t)
{
  ATerm w_17 = NULL;
  ATerm r_3 (ATerm t)
  {
    ATerm s_3 (ATerm t)
    {
      if(((w_17 != NULL) && (w_17 != t)))
        _fail(t);
      else
        w_17 = t;
      return(t);
    }
    t = SOpt_2_0(c_108, s_3, t);
    return(t);
  }
  t = fetch_1_0(r_3, t);
  t = SSL_string_to_int(not_null(w_17));
  return(t);
}
ATerm t_3 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm y_17 = NULL;
  ATerm x_12 = t;
  int y_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(t_3, t);
      ;
      LocalPopChoice(y_12);
    }
  else
    {
      t = x_12;
      t = term_n_12;
    }
  y_17 = t;
  if(match_int(t, 0))
    {
      ATerm z_12 = t;
      int a_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_q_12;
          ;
          LocalPopChoice(a_13);
        }
      else
        {
          t = z_12;
          {
            ATerm b_18 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, y_17, term_k_11);
            t = copy_0_0(t);
            b_18 = t;
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, b_18)));
          }
        }
    }
  else
    {
      ATerm d_18 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, y_17, term_k_11);
      t = copy_0_0(t);
      d_18 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, d_18)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm k_18 = NULL,v_18 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      k_18 = ATgetArgument(t, 0);
      t = k_18;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          k_18 = ATgetArgument(t, 0);
          t = k_18;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              k_18 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_18;
        }
    }
  t = Hspace_0_0(t);
  v_18 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm b_13 = t;
      int c_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_18;
          ;
          LocalPopChoice(c_13);
        }
      else
        {
          t = b_13;
          t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, v_18);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, v_18);
    }
  return(t);
}
ATerm d_6 (ATerm v_78 (ATerm), ATerm w_28, ATerm t)
{
  ATerm u_19 = NULL,v_19 = NULL;
  t = term_p_8;
  t = v_78(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      u_19 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, w_28, u_19);
  {
    ATerm o_22 (ATerm t)
    {
      ATerm p_22 (ATerm w_19, ATerm x_19, ATerm y_19, ATerm z_19, ATerm a_20, ATerm t)
      {
        ATerm h_20 = NULL,i_20 = NULL,j_20 = NULL;
        t = z_19;
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm f_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(e_13);
              t = term_g_13;
            }
          else
            {
              t = d_13;
              {
                ATerm h_13 = t;
                int i_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm j_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(i_13);
                    t = term_k_13;
                  }
                else
                  {
                    t = h_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm l_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_m_13;
                  }
              }
            }
          h_20 = t;
          t = z_19;
          t = make_hs_0_0(t);
          i_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_19), x_19), a_20);
          t = o_22(t);
          j_20 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(j_20), i_20), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, h_20), w_19));
        }
        return(t);
      }
      ATerm q_22 (ATerm m_20, ATerm n_20, ATerm o_20, ATerm r_20, ATerm t)
      {
        ATerm y_20 = NULL,z_20 = NULL;
        t = o_20;
        {
          ATerm n_13 = t;
          int o_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm p_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(o_13);
              t = term_g_13;
            }
          else
            {
              t = n_13;
              {
                ATerm q_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm s_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_13);
                    t = term_k_13;
                  }
                else
                  {
                    t = q_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm t_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_m_13;
                  }
              }
            }
          y_20 = t;
          t = (ATerm) ATmakeAppl(sym__2, n_20, r_20);
          t = o_22(t);
          z_20 = t;
          t = (ATerm) ATinsert(CheckATermList(z_20), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, y_20), m_20));
        }
        return(t);
      }
      ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL,f_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL,m_21 = NULL;
      if(match_cons(t, sym__2))
        {
          h_21 = ATgetArgument(t, 0);
          k_21 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_21;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_21 = ATgetFirst((ATermList) t);
              j_21 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = k_21;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              l_21 = ATgetFirst((ATermList) t);
              m_21 = (ATerm) ATgetNext((ATermList) t);
              t = j_21;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  e_21 = ATgetFirst((ATermList) t);
                  f_21 = (ATerm) ATgetNext((ATermList) t);
                  t = i_21;
                  if(match_cons(t, sym_C_2))
                    {
                      c_21 = ATgetArgument(t, 0);
                      d_21 = ATgetArgument(t, 1);
                      {
                        ATerm u_13 = t;
                        int v_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_21 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, j_21, k_21);
                            t = o_22(t);
                            z_21 = t;
                            t = (ATerm) ATinsert(CheckATermList(z_21), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, c_21, d_21))));
                            ;
                            LocalPopChoice(v_13);
                          }
                        else
                          {
                            t = u_13;
                            {
                              ATerm w_13 = t;
                              int x_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = p_22(i_21, e_21, f_21, l_21, m_21, t);
                                  ;
                                  LocalPopChoice(x_13);
                                }
                              else
                                {
                                  t = w_13;
                                  t = q_22(i_21, j_21, l_21, m_21, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm y_13 = t;
                      int z_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_22(i_21, e_21, f_21, l_21, m_21, t);
                          ;
                          LocalPopChoice(z_13);
                        }
                      else
                        {
                          t = y_13;
                          t = q_22(i_21, j_21, l_21, m_21, t);
                        }
                    }
                }
              else
                {
                  t = i_21;
                  if(match_cons(t, sym_C_2))
                    {
                      c_21 = ATgetArgument(t, 0);
                      d_21 = ATgetArgument(t, 1);
                      {
                        ATerm a_14 = t;
                        int b_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_22 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, j_21, k_21);
                            t = o_22(t);
                            g_22 = t;
                            t = (ATerm) ATinsert(CheckATermList(g_22), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, c_21, d_21))));
                            ;
                            LocalPopChoice(b_14);
                          }
                        else
                          {
                            t = a_14;
                            t = q_22(i_21, j_21, l_21, m_21, t);
                          }
                      }
                    }
                  else
                    {
                      t = q_22(i_21, j_21, l_21, m_21, t);
                    }
                }
            }
          else
            {
              ATerm n_22 = NULL;
              t = i_21;
              if(match_cons(t, sym_C_2))
                {
                  c_21 = ATgetArgument(t, 0);
                  d_21 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, j_21, k_21);
              t = o_22(t);
              n_22 = t;
              t = (ATerm) ATinsert(CheckATermList(n_22), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, c_21, d_21))));
            }
        }
      return(t);
    }
    t = o_22(t);
    v_19 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_j_12), (ATerm) ATinsert(ATempty, v_19));
  }
  return(t);
}
ATerm R_2_0 (ATerm s_77 (ATerm), ATerm t_77 (ATerm), ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,c_1 = NULL,g_1 = NULL;
  w_22 = t;
  if(match_cons(t, sym_R_2))
    {
      s_22 = ATgetArgument(t, 0);
      t_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(w_22);
  r_22 = t;
  t = s_22;
  t = s_77(t);
  u_22 = t;
  t = t_22;
  t = t_77(t);
  v_22 = t;
  g_1 = t;
  t = (ATerm) ATmakeAppl(sym_R_2, u_22, v_22);
  c_1 = t;
  t = SSLsetAnnotations(c_1, r_22);
  return(t);
}
ATerm u_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm v_3 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm w_3 (ATerm t)
{
  ATerm c_14 = t;
  if((PushChoice() == 0))
    {
      t = R_2_0(_id, x_3, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = c_14;
    }
  return(t);
}
ATerm x_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm c_23 = NULL;
  c_23 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_23, (ATerm) ATempty);
  {
    ATerm d_24 (ATerm t)
    {
      ATerm d_23 = NULL,e_23 = NULL,g_23 = NULL,h_23 = NULL,i_23 = NULL,j_23 = NULL;
      if(match_cons(t, sym__2))
        {
          g_23 = ATgetArgument(t, 0);
          j_23 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_23;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm o_23 = NULL;
          t = j_23;
          t = reverse_acc_2_0(_id, u_3, t);
          o_23 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, o_23));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_23 = ATgetFirst((ATermList) t);
              i_23 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = h_23;
          if(match_cons(t, sym_R_2))
            {
              d_23 = ATgetArgument(t, 0);
              e_23 = ATgetArgument(t, 1);
              {
                ATerm h_14 = t;
                int i_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_23 = NULL,u_23 = NULL;
                    t = j_23;
                    t = reverse_acc_2_0(_id, v_3, t);
                    t_23 = t;
                    t = (ATerm) ATmakeAppl(sym__2, i_23, (ATerm) ATempty);
                    t = d_24(t);
                    u_23 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(u_23), (ATerm) ATmakeAppl(sym_R_2, d_23, e_23)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, t_23));
                    ;
                    LocalPopChoice(i_14);
                  }
                else
                  {
                    t = h_14;
                    t = (ATerm) ATmakeAppl(sym__2, i_23, (ATerm) ATinsert(CheckATermList(j_23), h_23));
                    t = d_24(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, i_23, (ATerm) ATinsert(CheckATermList(j_23), h_23));
              t = d_24(t);
            }
        }
      return(t);
    }
    t = d_24(t);
    t = filter_1_0(w_3, t);
  }
  return(t);
}
ATerm b_4 (ATerm t)
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
ATerm c_4 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_k_14);
  return(t);
}
ATerm d_4 (ATerm t)
{
  ATerm l_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_14;
    }
  return(t);
}
ATerm e_4 (ATerm t)
{
  ATerm m_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_14;
    }
  return(t);
}
ATerm f_4 (ATerm t)
{
  t = tov_1_0(h_4, t);
  return(t);
}
ATerm h_4 (ATerm t)
{
  t = term_q_12;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm n_14 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = n_14;
    }
  return(t);
}
ATerm n_4 (ATerm t)
{
  ATerm w_25 = NULL;
  if(match_cons(t, sym_S_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = w_25;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL,z_24 = NULL;
  y_24 = t;
  if(match_cons(t, sym_REF_2))
    {
      z_24 = ATgetArgument(t, 0);
      x_24 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, z_24, x_24);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          z_24 = ATgetArgument(t, 0);
          x_24 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, x_24), (ATerm) ATmakeAppl(sym_ANCHOR_1, z_24));
        }
      else
        {
          ATerm o_14 = t;
          int p_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm r_14 = ATgetArgument(t, 0);
                  ATerm t_14 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(p_14);
              t = term_u_14;
            }
          else
            {
              t = o_14;
              {
                ATerm v_14 = t;
                int w_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm y_14 = ATgetArgument(t, 0);
                        ATerm z_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(w_14);
                    t = term_u_14;
                  }
                else
                  {
                    t = v_14;
                    {
                      ATerm a_15 = t;
                      int b_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              z_24 = ATgetArgument(t, 0);
                              {
                                ATerm d_15 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(b_15);
                          t = z_24;
                        }
                      else
                        {
                          t = a_15;
                          if(match_cons(t, sym_A_3))
                            {
                              z_24 = ATgetArgument(t, 0);
                              x_24 = ATgetArgument(t, 1);
                              w_24 = ATgetArgument(t, 2);
                              {
                                ATerm i_25 = NULL,j_25 = NULL,k_25 = NULL,e_3 = NULL;
                                t = w_24;
                                t = construct_rows_0_0(t);
                                i_25 = t;
                                t = x_24;
                                t = Vspace_0_0(t);
                                j_25 = t;
                                t = i_25;
                                {
                                  ATerm z_3 (ATerm t)
                                  {
                                    ATerm l_25 = NULL;
                                    ATerm a_4 (ATerm t)
                                    {
                                      t = z_24;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm e_15 = ATgetArgument(t, 0);
                                        if(((ATgetType(e_15) != AT_LIST) || !(ATisEmpty(e_15))))
                                          _fail(t);
                                        if(((l_25 != NULL) && (l_25 != ATgetArgument(t, 1))))
                                          _fail(ATgetArgument(t, 1));
                                        else
                                          l_25 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = d_6(a_4, not_null(l_25), t);
                                    return(t);
                                  }
                                  t = map_1_0(z_3, t);
                                  e_3 = t;
                                  t = (ATerm) ATmakeAppl(sym__2, j_25, e_3);
                                  t = b_6(j_25, e_3, t);
                                  k_25 = t;
                                  t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, k_25)))));
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  z_24 = ATgetArgument(t, 0);
                                  x_24 = ATgetArgument(t, 1);
                                  {
                                    ATerm y_3 = NULL;
                                    t = z_24;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm g_15 = t;
                                      int h_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = x_24;
                                          t = filter_1_0(b_4, t);
                                          ;
                                          LocalPopChoice(h_15);
                                        }
                                      else
                                        {
                                          t = g_15;
                                          {
                                            ATerm i_4 = NULL,t_4 = NULL;
                                            t = at_last_1_0(c_4, t);
                                            y_3 = t;
                                            t = x_24;
                                            t = filter_1_0(d_4, t);
                                            t_4 = t;
                                            t = (ATerm) ATmakeAppl(sym__2, y_3, t_4);
                                            t = b_6(y_3, t_4, t);
                                            i_4 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, i_4), term_j_15);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      z_24 = ATgetArgument(t, 0);
                                      x_24 = ATgetArgument(t, 1);
                                      {
                                        ATerm o_25 = NULL,p_25 = NULL,q_25 = NULL,w_4 = NULL;
                                        t = z_24;
                                        t = Vspace_0_0(t);
                                        o_25 = t;
                                        t = z_24;
                                        t = Ispace_0_0(t);
                                        p_25 = t;
                                        t = x_24;
                                        t = filter_1_0(e_4, t);
                                        {
                                          ATerm g_4 (ATerm t)
                                          {
                                            ATerm j_4 (ATerm t)
                                            {
                                              ATerm k_4 (ATerm t)
                                              {
                                                t = p_25;
                                                return(t);
                                              }
                                              t = tov_1_0(k_4, t);
                                              return(t);
                                            }
                                            t = map_1_0(j_4, t);
                                            return(t);
                                          }
                                          t = Cons_2_0(f_4, g_4, t);
                                          w_4 = t;
                                          t = (ATerm) ATmakeAppl(sym__2, o_25, w_4);
                                          t = b_6(o_25, w_4, t);
                                          q_25 = t;
                                          t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, q_25)), term_j_15);
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          z_24 = ATgetArgument(t, 0);
                                          x_24 = ATgetArgument(t, 1);
                                          {
                                            ATerm t_25 = NULL;
                                            t = z_24;
                                            t = Hspace_0_0(t);
                                            t_25 = t;
                                            t = x_24;
                                            t = filter_1_0(l_4, t);
                                            {
                                              ATerm m_4 (ATerm t)
                                              {
                                                t = t_25;
                                                return(t);
                                              }
                                              t = sep_by_1_0(m_4, t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              z_24 = ATgetArgument(t, 0);
                                              x_24 = ATgetArgument(t, 1);
                                              t = z_24;
                                              {
                                                ATerm k_15 = t;
                                                int l_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(!(match_cons(t, sym_KW_0)))
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_m_15), (ATerm) ATinsert(ATempty, x_24));
                                                    ;
                                                    LocalPopChoice(l_15);
                                                  }
                                                else
                                                  {
                                                    t = k_15;
                                                    {
                                                      ATerm n_15 = t;
                                                      int u_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_VAR_0)))
                                                            _fail(t);
                                                          t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_v_15), (ATerm) ATinsert(ATempty, x_24));
                                                          ;
                                                          LocalPopChoice(u_15);
                                                        }
                                                      else
                                                        {
                                                          t = n_15;
                                                          {
                                                            ATerm w_15 = t;
                                                            int d_16 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(!(match_cons(t, sym_NUM_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_e_16), (ATerm) ATinsert(ATempty, x_24));
                                                                ;
                                                                LocalPopChoice(d_16);
                                                              }
                                                            else
                                                              {
                                                                t = w_15;
                                                                {
                                                                  ATerm f_16 = t;
                                                                  int g_16 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(!(match_cons(t, sym_MATH_0)))
                                                                        _fail(t);
                                                                      t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_h_16), (ATerm) ATinsert(ATempty, x_24));
                                                                      ;
                                                                      LocalPopChoice(g_16);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = f_16;
                                                                      t = x_24;
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
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  z_24 = ATgetArgument(t, 0);
                                                  x_24 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm v_25 = NULL;
                                                    t = z_24;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = x_24;
                                                    t = map_1_0(n_4, t);
                                                    v_25 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_k_16), (ATerm) ATinsert(ATempty, v_25)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      z_24 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = z_24;
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
  t = r_80(t);
  {
    ATerm o_4 (ATerm t)
    {
      t = topdown_1_0(r_80, t);
      return(t);
    }
    t = SRTS_all(o_4, t);
  }
  return(t);
}
ATerm at_end_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm h_26 (ATerm t)
  {
    ATerm m_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, h_26, t);
        ;
        LocalPopChoice(o_16);
      }
    else
      {
        t = m_16;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_86(t);
      }
    return(t);
  }
  t = h_26(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm p_16 = t;
  int r_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_16);
    }
  else
    {
      t = p_16;
      {
        ATerm c_26 = NULL,d_26 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            c_26 = ATgetFirst((ATermList) t);
            d_26 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = c_26;
        {
          ATerm p_4 (ATerm t)
          {
            t = d_26;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(p_4, t);
        }
      }
    }
  return(t);
}
ATerm v_26 (ATerm k_26, ATerm t)
{
  ATerm m_26 = NULL;
  t = SSL_explode_term(k_26);
  if(match_cons(t, sym__2))
    {
      ATerm s_16 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_16) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      m_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = m_26;
  t = concat_0_0(t);
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm n_26 = NULL,o_26 = NULL,p_26 = NULL;
  p_26 = t;
  if(match_cons(t, sym__2))
    {
      n_26 = ATgetArgument(t, 0);
      o_26 = ATgetArgument(t, 1);
      {
        ATerm v_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_4 (ATerm t)
            {
              t = o_26;
              return(t);
            }
            t = n_26;
            t = at_end_1_0(q_4, t);
            ;
            LocalPopChoice(y_16);
          }
        else
          {
            t = v_16;
            t = v_26(p_26, t);
          }
      }
    }
  else
    {
      t = v_26(p_26, t);
    }
  return(t);
}
ATerm r_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm w_26 (ATerm t)
  {
    ATerm z_16 = t;
    int a_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, r_4, t);
        t = j_87(t);
        ;
        LocalPopChoice(a_17);
      }
    else
      {
        t = z_16;
        t = Cons_2_0(_id, w_26, t);
      }
    return(t);
  }
  t = w_26(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm x_26 (ATerm t)
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_87(t);
        ;
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = Cons_2_0(_id, x_26, t);
      }
    return(t);
  }
  t = x_26(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm r_27 = NULL,v_27 = NULL;
  ATerm s_4 (ATerm t)
  {
    t = Cons_2_0(v_86, _id, t);
    {
      ATerm u_4 (ATerm t)
      {
        if(((r_27 != NULL) && (r_27 != t)))
          _fail(t);
        else
          r_27 = t;
        return(t);
      }
      t = Cons_2_0(_id, u_4, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(s_4, t);
  v_27 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_27, not_null(r_27));
  return(t);
}
ATerm z_4 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm e_6 (ATerm d_27, ATerm y_26, ATerm t)
{
  ATerm c_28 = NULL,f_28 = NULL,m_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,n_29 = NULL;
  t = y_26;
  {
    ATerm v_4 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((c_28 != NULL) && (c_28 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            c_28 = ATgetArgument(t, 0);
          {
            ATerm d_17 = ATgetArgument(t, 1);
            if(((ATgetType(d_17) == AT_LIST) && !(ATisEmpty(d_17))))
              {
                if(((f_28 != NULL) && (f_28 != ATgetFirst((ATermList) d_17))))
                  _fail(ATgetFirst((ATermList) d_17));
                else
                  f_28 = ATgetFirst((ATermList) d_17);
                if(((m_28 != NULL) && (m_28 != (ATerm) ATgetNext((ATermList) d_17))))
                  _fail((ATerm) ATgetNext((ATermList) d_17));
                else
                  m_28 = (ATerm) ATgetNext((ATermList) d_17);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(v_4, t);
    if(match_cons(t, sym__2))
      {
        o_28 = ATgetArgument(t, 0);
        p_28 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = p_28;
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
      t = (ATerm) ATinsert(CheckATermList(not_null(m_28)), not_null(f_28));
      {
        ATerm x_4 (ATerm t)
        {
          ATerm y_4 (ATerm t)
          {
            if(((q_28 != NULL) && (q_28 != t)))
              _fail(t);
            else
              q_28 = t;
            return(t);
          }
          t = Cons_2_0(y_4, z_4, t);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, d_27, (ATerm) ATinsert(CheckATermList(p_28), not_null(q_28))));
          return(t);
        }
        t = at_last_1_0(x_4, t);
        r_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, o_28, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(c_28), r_28)));
        t = conc_0_0(t);
        n_29 = t;
        t = (ATerm) ATmakeAppl(sym_H_2, d_27, n_29);
      }
    }
  }
  return(t);
}
ATerm a_5 (ATerm t)
{
  ATerm o_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
      v_29 = t;
      if(match_cons(t, sym_H_2))
        {
          w_29 = ATgetArgument(t, 0);
          x_29 = ATgetArgument(t, 1);
          t = x_29;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_29 = ATgetFirst((ATermList) t);
              u_29 = (ATerm) ATgetNext((ATermList) t);
              t = u_29;
              if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                {
                  ATerm r_17 = t;
                  int u_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = t_29;
                      ;
                      LocalPopChoice(u_17);
                    }
                  else
                    {
                      t = r_17;
                      t = v_29;
                      t = e_6(w_29, x_29, t);
                    }
                }
              else
                {
                  t = v_29;
                  t = e_6(w_29, x_29, t);
                }
            }
          else
            {
              t = v_29;
              t = e_6(w_29, x_29, t);
            }
        }
      else
        {
          if(match_cons(t, sym_V_2))
            {
              ATerm v_17 = ATgetArgument(t, 0);
              x_29 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = x_29;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_29 = ATgetFirst((ATermList) t);
              u_29 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = u_29;
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          t = t_29;
        }
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = o_17;
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(a_5, t);
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm x_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      ;
      LocalPopChoice(z_17);
    }
  else
    {
      t = x_17;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm a_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Html2text_0_0(t);
      ;
      LocalPopChoice(c_18);
    }
  else
    {
      t = a_18;
    }
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm g_30 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(b_5, t);
  g_30 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, g_30)))));
  t = bottomup_1_0(c_5, t);
  return(t);
}
ATerm w_30 (ATerm o_30, ATerm t)
{
  t = SSL_fclose(o_30);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL;
  s_30 = t;
  if(match_cons(t, sym_Stream_1))
    {
      r_30 = ATgetArgument(t, 0);
      {
        ATerm e_18 = t;
        int f_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(r_30);
            ;
            LocalPopChoice(f_18);
          }
        else
          {
            t = e_18;
            t = w_30(s_30, t);
          }
      }
    }
  else
    {
      t = w_30(s_30, t);
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
  ATerm x_30 = NULL;
  t = SSL_fopen(g_49, h_49);
  x_30 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, x_30);
  return(t);
}
ATerm _2_0 (ATerm o_65 (ATerm), ATerm p_65 (ATerm), ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL,h_1 = NULL,j_1 = NULL;
  i_31 = t;
  if(match_cons(t, sym__2))
    {
      e_31 = ATgetArgument(t, 0);
      f_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(i_31);
  d_31 = t;
  t = e_31;
  t = o_65(t);
  g_31 = t;
  t = f_31;
  t = p_65(t);
  h_31 = t;
  j_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, g_31, h_31);
  h_1 = t;
  t = SSLsetAnnotations(h_1, d_31);
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm m_31 = NULL;
  t = SSL_stdin_stream();
  m_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, m_31);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm n_31 = NULL;
  t = SSL_stdout_stream();
  n_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, n_31);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm o_31 = NULL;
  t = SSL_stderr_stream();
  o_31 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, o_31);
  return(t);
}
ATerm d_5 (ATerm t)
{
  ATerm a_32 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      a_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = a_32;
  return(t);
}
ATerm e_5 (ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  t = SSL_is_string(d_32);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_18 = ATgetArgument(t, 0);
      ATerm h_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_18 = t;
    int j_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_31 = NULL,t_6 = NULL;
        x_31 = t;
        t = SSL_explode_term(x_31);
        if(match_cons(t, sym__2))
          {
            ATerm l_18 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) l_18) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_18 = ATgetArgument(t, 1);
              if(((ATgetType(m_18) == AT_LIST) && !(ATisEmpty(m_18))))
                {
                  t_6 = ATgetFirst((ATermList) m_18);
                  {
                    ATerm n_18 = (ATerm) ATgetNext((ATermList) m_18);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = t_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = t_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = t_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = t_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(j_18);
      }
    else
      {
        t = i_18;
        {
          ATerm o_18 = t;
          int p_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm y_31 = NULL,z_31 = NULL;
              t = _2_0(d_5, _id, t);
              if(match_cons(t, sym__2))
                {
                  y_31 = ATgetArgument(t, 0);
                  z_31 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = g_6(y_31, z_31, t);
              ;
              LocalPopChoice(p_18);
            }
          else
            {
              t = o_18;
              {
                ATerm b_32 = NULL,c_32 = NULL;
                t = _2_0(e_5, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_32 = ATgetArgument(t, 0);
                    c_32 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = g_6(b_32, c_32, t);
              }
            }
        }
      }
  }
  return(t);
}
ATerm f_5 (ATerm t)
{
  t = term_q_18;
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  ATerm r_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_32 = NULL;
      i_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_32, term_t_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(s_18);
    }
  else
    {
      t = r_18;
      t = debug_1_0(f_5, t);
      _fail(t);
    }
  f_32 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = f_6(h_32, t);
  g_32 = t;
  t = f_32;
  t = fclose_0_0(t);
  t = g_32;
  return(t);
}
ATerm h_6 (ATerm y_48, ATerm z_48, ATerm t)
{
  t = SSL_access(y_48, z_48);
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm m_32 = NULL;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_u_18;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      ATerm o_32 = NULL;
      if(match_cons(t, sym_FILE_1))
        {
          m_32 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATempty, term_v_8);
      o_32 = t;
      t = (ATerm) ATmakeAppl(sym__2, m_32, (ATerm) ATinsert(ATempty, term_v_8));
      t = h_6(m_32, o_32, t);
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
  ATerm b_33 = NULL,c_33 = NULL;
  b_33 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_7 = NULL;
        t = b_33;
        t = k_0(t);
        h_7 = t;
        {
          ATerm y_18 = t;
          int z_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(z_18);
            }
          else
            {
              t = y_18;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = (ATerm) ATmakeAppl(sym__2, c_33, h_7);
          t = i_6(c_33, h_7, t);
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_33);
        }
        ;
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        {
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm r_7 = NULL;
              t = b_33;
              t = k_0(t);
              r_7 = t;
              {
                ATerm c_19 = t;
                if((PushChoice() == 0))
                  {
                    ATerm d_19 = t;
                    int e_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(e_19);
                      }
                    else
                      {
                        t = d_19;
                        {
                          ATerm f_19 = t;
                          int g_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(g_19);
                            }
                          else
                            {
                              t = f_19;
                              {
                                ATerm s_7 = NULL;
                                s_7 = t;
                                if((c_33 != t))
                                  {
                                    _fail(t);
                                  }
                                t = s_7;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = c_19;
                  }
                t = (ATerm) ATmakeAppl(sym__2, c_33, r_7);
                t = i_6(c_33, r_7, t);
                t = (ATerm) ATmakeAppl(sym_FILE_1, c_33);
              }
              ;
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              t = b_33;
              t = k_0(t);
              if((c_33 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_33);
            }
        }
      }
  }
  return(t);
}
ATerm j_6 (ATerm y_58, ATerm z_58, ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  g_33 = t;
  {
    ATerm h_19 = t;
    int i_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
        t = o_6(y_58, z_58, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm j_19 = ATgetFirst((ATermList) t);
            h_33 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        LocalPopChoice(i_19);
        t = SSL_table_put(y_58, z_58, h_33);
        t = (ATerm) ATmakeAppl(sym__3, y_58, z_58, h_33);
      }
    else
      {
        t = h_19;
        t = SSL_table_remove(y_58, z_58);
        t = (ATerm) ATmakeAppl(sym__2, y_58, z_58);
      }
    t = g_33;
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm d_97 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL;
  i_33 = t;
  t = d_97(t);
  j_33 = t;
  {
    ATerm k_19 = t;
    int l_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_33 = NULL;
        t = term_e_8;
        n_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_33, term_e_8);
        t = o_6(j_33, n_33, t);
        ;
        LocalPopChoice(l_19);
      }
    else
      {
        t = k_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        l_33 = ATgetFirst((ATermList) t);
        k_33 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = term_e_8;
    m_33 = t;
    t = SSL_table_put(j_33, m_33, k_33);
    t = l_33;
    {
      ATerm g_5 (ATerm t)
      {
        ATerm o_33 = NULL;
        o_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, j_33, o_33);
        t = j_6(j_33, o_33, t);
        return(t);
      }
      t = map_1_0(g_5, t);
      t = i_33;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm m_79 (ATerm), ATerm n_79 (ATerm), ATerm t)
{
  ATerm m_19 = t;
  int n_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_79(t);
      t = n_79(t);
      ;
      LocalPopChoice(n_19);
    }
  else
    {
      t = m_19;
      t = n_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm c_97 (ATerm), ATerm t)
{
  ATerm q_33 = NULL,r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
  q_33 = t;
  t = c_97(t);
  r_33 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_33, term_e_8);
  {
    ATerm o_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_33 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_19 = ATgetArgument(t, 0);
            ATerm r_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = term_e_8;
        y_33 = t;
        t = (ATerm) ATmakeAppl(sym__2, r_33, term_e_8);
        t = o_6(r_33, y_33, t);
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = o_19;
        t = (ATerm) ATempty;
      }
    s_33 = t;
    t = term_e_8;
    t_33 = t;
    t = (ATerm) ATinsert(CheckATermList(s_33), (ATerm) ATempty);
    u_33 = t;
    t = SSL_table_put(r_33, t_33, u_33);
    t = q_33;
  }
  return(t);
}
ATerm h_5 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm j_5 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_34 = NULL;
      g_34 = t;
      t = SSL_remove(g_34);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
    }
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = term_w_8;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm l_108 (ATerm), ATerm t)
{
  ATerm a_34 = NULL;
  t = begin_scope_1_0(h_5, t);
  {
    ATerm i_5 (ATerm t)
    {
      ATerm b_34 = NULL;
      b_34 = t;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_34 = NULL,d_34 = NULL;
            t = term_w_8;
            c_34 = t;
            t = term_e_8;
            d_34 = t;
            t = term_d_20;
            t = o_6(c_34, d_34, t);
            ;
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((a_34 != NULL) && (a_34 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              a_34 = ATgetFirst((ATermList) t);
            {
              ATerm e_20 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(a_34);
        t = map_1_0(j_5, t);
        t = b_34;
        t = end_scope_1_0(k_5, t);
      }
      return(t);
    }
    t = restore_always_2_0(l_108, i_5, t);
  }
  return(t);
}
ATerm m_5 (ATerm t)
{
  ATerm f_20 = t;
  int g_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_k_20;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(g_20);
    }
  else
    {
      t = f_20;
      t = term_l_20;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm m_108 (ATerm), ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_34 = NULL;
        t = term_s_20;
        t = get_config_0_0(t);
        i_34 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, i_34);
        ;
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        t = term_u_18;
      }
    t = m_108(t);
    t = copy_to_1_0(m_5, t);
    return(t);
  }
  t = xtc_temp_files_1_0(l_5, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL,n_34 = NULL;
  j_34 = t;
  t = term_p_8;
  t = whoami_0_0(t);
  k_34 = t;
  t = term_t_20;
  l_34 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_v_20), k_34), term_u_20);
  m_34 = t;
  t = SSL_printnl(l_34, m_34);
  t = term_w_11;
  n_34 = t;
  t = SSL_exit(n_34);
  t = j_34;
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm p_34 = NULL;
  p_34 = t;
  if(match_string(t, "-k"))
    {
      t = p_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = p_34;
    }
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm q_34 = NULL,r_34 = NULL,s_34 = NULL;
  q_34 = t;
  t = SSL_string_to_int(q_34);
  r_34 = t;
  t = term_w_20;
  s_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_w_20, r_34);
  t = r_6(s_34, r_34, t);
  t = q_34;
  return(t);
}
ATerm p_5 (ATerm t)
{
  t = term_x_20;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(n_5, o_5, p_5, t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm u_34 = NULL;
  u_34 = t;
  if(match_string(t, "-S"))
    {
      t = u_34;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = u_34;
    }
  return(t);
}
ATerm r_5 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL;
  t = term_a_21;
  v_34 = t;
  t = term_n_12;
  w_34 = t;
  t = term_b_21;
  t = r_6(v_34, w_34, t);
  t = term_g_21;
  return(t);
}
ATerm s_5 (ATerm t)
{
  t = term_n_21;
  return(t);
}
ATerm t_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm u_5 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL,z_34 = NULL;
  x_34 = t;
  t = SSL_string_to_int(x_34);
  y_34 = t;
  t = term_a_21;
  z_34 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_a_21, y_34);
  t = r_6(z_34, y_34, t);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, x_34);
  return(t);
}
ATerm v_5 (ATerm t)
{
  t = term_o_21;
  return(t);
}
ATerm w_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL;
  t = term_p_21;
  a_35 = t;
  t = term_p_8;
  b_35 = t;
  t = term_q_21;
  t = r_6(a_35, b_35, t);
  t = term_r_21;
  return(t);
}
ATerm z_5 (ATerm t)
{
  t = term_s_21;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm t_21 = t;
  int u_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(q_5, r_5, s_5, t);
      ;
      LocalPopChoice(u_21);
    }
  else
    {
      t = t_21;
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(t_5, u_5, v_5, t);
            ;
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            t = Option_3_0(w_5, x_5, z_5, t);
          }
      }
    }
  return(t);
}
ATerm r_6 (ATerm v_53, ATerm w_53, ATerm t)
{
  ATerm c_35 = NULL;
  t = term_x_21;
  c_35 = t;
  t = SSL_table_put(c_35, v_53, w_53);
  t = (ATerm) ATmakeAppl(sym__3, term_x_21, v_53, w_53);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm f_35 = NULL,g_35 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm h_35 = NULL,i_35 = NULL,j_35 = NULL;
      t = term_p_8;
      t = d_0(t);
      h_35 = t;
      t = term_y_21;
      i_35 = t;
      t = term_a_22;
      j_35 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_21, term_a_22, h_35);
      t = p_6(i_35, j_35, h_35, t);
      _fail(t);
    }
  else
    {
      ATerm m_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_35 = ATgetFirst((ATermList) t);
          g_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_35;
      t = a_0(t);
      t = term_p_8;
      t = c_0(t);
      m_35 = t;
      t = (ATerm) ATinsert(CheckATermList(g_35), m_35);
    }
  return(t);
}
ATerm a_6 (ATerm t)
{
  ATerm o_35 = NULL;
  o_35 = t;
  if(match_string(t, "-o"))
    {
      t = o_35;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = o_35;
    }
  return(t);
}
ATerm l_6 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL;
  p_35 = t;
  t = term_k_20;
  q_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_20, p_35);
  t = r_6(q_35, p_35, t);
  t = (ATerm) ATmakeAppl(sym_Output_1, p_35);
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_b_22;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(a_6, l_6, m_6, t);
  return(t);
}
ATerm p_6 (ATerm t_58, ATerm u_58, ATerm s_58, ATerm t)
{
  ATerm s_35 = NULL,t_35 = NULL,u_35 = NULL;
  s_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
  {
    ATerm c_22 = t;
    int d_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm e_22 = ATgetArgument(t, 0);
            ATerm f_22 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = (ATerm) ATmakeAppl(sym__2, t_58, u_58);
        t = o_6(t_58, u_58, t);
        ;
        LocalPopChoice(d_22);
      }
    else
      {
        t = c_22;
        t = (ATerm) ATempty;
      }
    t_35 = t;
    t = (ATerm) ATinsert(CheckATermList(t_35), s_58);
    u_35 = t;
    t = SSL_table_put(t_58, u_58, u_35);
    t = s_35;
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm f_36 = NULL,g_36 = NULL,h_36 = NULL;
      t = term_p_8;
      t = j_0(t);
      f_36 = t;
      t = term_y_21;
      g_36 = t;
      t = term_a_22;
      h_36 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_y_21, term_a_22, f_36);
      t = p_6(g_36, h_36, f_36, t);
      _fail(t);
    }
  else
    {
      ATerm l_36 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_36 = ATgetFirst((ATermList) t);
          c_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = c_36;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          d_36 = ATgetFirst((ATermList) t);
          e_36 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = b_36;
      t = h_0(t);
      t = d_36;
      t = i_0(t);
      l_36 = t;
      t = (ATerm) ATinsert(CheckATermList(e_36), l_36);
    }
  return(t);
}
ATerm q_6 (ATerm t)
{
  ATerm n_36 = NULL;
  n_36 = t;
  if(match_string(t, "-i"))
    {
      t = n_36;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = n_36;
    }
  return(t);
}
ATerm s_6 (ATerm t)
{
  ATerm o_36 = NULL,p_36 = NULL;
  o_36 = t;
  t = term_s_20;
  p_36 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_s_20, o_36);
  t = r_6(p_36, o_36, t);
  t = (ATerm) ATmakeAppl(sym_Input_1, o_36);
  return(t);
}
ATerm u_6 (ATerm t)
{
  t = term_h_22;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(q_6, s_6, u_6, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL;
  t = report_run_time_0_0(t);
  t = term_p_8;
  t = whoami_0_0(t);
  q_36 = t;
  t = term_t_20;
  r_36 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_i_22), q_36);
  s_36 = t;
  t = SSL_printnl(r_36, s_36);
  t = term_w_11;
  t_36 = t;
  t = SSL_exit(t_36);
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_j_22;
  t = get_config_0_0(t);
  return(t);
}
ATerm k_6 (ATerm e_46, ATerm f_46, ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_addi(e_46, f_46);
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      t = SSL_addr(e_46, f_46);
    }
  return(t);
}
ATerm foldr_2_0 (ATerm l_92 (ATerm), ATerm m_92 (ATerm), ATerm t)
{
  ATerm m_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = l_92(t);
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = m_22;
      {
        ATerm w_36 = NULL,x_36 = NULL,a_37 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            w_36 = ATgetFirst((ATermList) t);
            x_36 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = x_36;
        t = foldr_2_0(l_92, m_92, t);
        a_37 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_36, a_37);
        t = m_92(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm v_6 (ATerm t)
{
  t = term_n_12;
  return(t);
}
ATerm w_6 (ATerm t)
{
  ATerm q_8 = NULL,r_8 = NULL;
  if(match_cons(t, sym__2))
    {
      q_8 = ATgetArgument(t, 0);
      r_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = k_6(q_8, r_8, t);
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm d_37 = NULL,h_8 = NULL,j_8 = NULL;
  t = times_0_0(t);
  h_8 = t;
  t = SSL_explode_term(h_8);
  if(match_cons(t, sym__2))
    {
      ATerm y_22 = ATgetArgument(t, 0);
      j_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = j_8;
  t = foldr_2_0(v_6, w_6, t);
  d_37 = t;
  t = SSL_TicksToSeconds(d_37);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
  w_37 = t;
  if(match_cons(t, sym__2))
    {
      x_37 = ATgetArgument(t, 0);
      y_37 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_37;
        if((x_37 != t))
          {
            _fail(t);
          }
        t = w_37;
        ;
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        t = (ATerm) ATmakeAppl(sym__2, x_37, y_37);
        {
          ATerm b_23 = t;
          int f_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(x_37, y_37);
              ;
              LocalPopChoice(f_23);
            }
          else
            {
              t = b_23;
              t = SSL_gtr(x_37, y_37);
            }
          t = (ATerm) ATmakeAppl(sym__2, x_37, y_37);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm j_100 (ATerm), ATerm t)
{
  ATerm k_23 = t;
  int l_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_38 = NULL,d_38 = NULL;
      b_38 = t;
      t = term_a_21;
      t = get_config_0_0(t);
      d_38 = t;
      t = (ATerm) ATmakeAppl(sym__2, d_38, term_w_11);
      t = geq_0_0(t);
      t = b_38;
      t = j_100(t);
      ;
      LocalPopChoice(l_23);
    }
  else
    {
      t = k_23;
    }
  return(t);
}
ATerm x_6 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL,i_38 = NULL;
  t = run_time_0_0(t);
  f_38 = t;
  t = term_p_8;
  t = whoami_0_0(t);
  g_38 = t;
  t = term_t_20;
  h_38 = t;
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_23), f_38), term_m_23), g_38);
  i_38 = t;
  t = SSL_printnl(h_38, i_38);
  t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_23), f_38), term_m_23), g_38));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(x_6, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  ATerm j_38 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_12;
  j_38 = t;
  t = SSL_exit(j_38);
  return(t);
}
ATerm y_6 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm r_23 = t;
        int s_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(s_23);
          }
        else
          {
            t = r_23;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm z_102 (ATerm), ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_23;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = fetch_1_0(y_6, t);
    }
  t = z_102(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm l_38 = NULL,m_38 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_38 = ATgetFirst((ATermList) t);
      m_38 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm q_38 = NULL,r_38 = NULL;
        t = m_38;
        t = g_0(t);
        q_38 = t;
        t = l_38;
        t = e_0(t);
        r_38 = t;
        t = m_38;
        {
          ATerm z_6 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(q_38), r_38);
            return(t);
          }
          t = reverse_acc_2_0(e_0, z_6, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_p_8;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL,v_38 = NULL,l_1 = NULL,n_1 = NULL;
  v_38 = t;
  if(match_cons(t, sym_Program_1))
    {
      t_38 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_38);
  s_38 = t;
  t = t_38;
  t = i_76(t);
  u_38 = t;
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym_Program_1, u_38);
  l_1 = t;
  t = SSLsetAnnotations(l_1, s_38);
  return(t);
}
ATerm a_7 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm b_7 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_7 (ATerm t)
{
  ATerm a_39 = NULL;
  a_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, a_39), term_y_23);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm y_38 = NULL,z_38 = NULL;
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(a_24);
    }
  else
    {
      t = z_23;
      t = fetch_1_0(a_7, t);
    }
  t = term_b_24;
  t = echo_0_0(t);
  t = term_y_21;
  y_38 = t;
  t = term_a_22;
  z_38 = t;
  t = term_c_24;
  t = o_6(y_38, z_38, t);
  t = reverse_acc_2_0(_id, b_7, t);
  t = map_1_0(c_7, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm j_76 (ATerm), ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL,p_1 = NULL,q_1 = NULL;
  e_39 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      c_39 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(e_39);
  b_39 = t;
  t = c_39;
  t = j_76(t);
  d_39 = t;
  q_1 = t;
  t = (ATerm) ATmakeAppl(sym_Undefined_1, d_39);
  p_1 = t;
  t = SSLsetAnnotations(p_1, b_39);
  return(t);
}
ATerm fetch_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm h_39 (ATerm t)
  {
    ATerm e_24 = t;
    int f_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_86, _id, t);
        ;
        LocalPopChoice(f_24);
      }
    else
      {
        t = e_24;
        t = Cons_2_0(_id, h_39, t);
      }
    return(t);
  }
  t = h_39(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm j_39 = NULL,k_39 = NULL,l_39 = NULL;
  j_39 = t;
  {
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = j_39;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm i_24 = ATgetFirst((ATermList) t);
                ATerm j_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = j_39;
          }
        ;
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        t = (ATerm) ATinsert(ATempty, j_39);
      }
    k_39 = t;
    t = term_l_20;
    l_39 = t;
    t = SSL_printnl(l_39, k_39);
    t = j_39;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_j_22;
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
  ATerm p_39 = NULL,q_39 = NULL,r_39 = NULL,s_39 = NULL;
  p_39 = t;
  t = x_98(t);
  q_39 = t;
  t = term_t_20;
  r_39 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, p_39), q_39);
  s_39 = t;
  t = SSL_printnl(r_39, s_39);
  t = p_39;
  return(t);
}
ATerm map_1_0 (ATerm i_86 (ATerm), ATerm t)
{
  ATerm t_39 (ATerm t)
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        t = Cons_2_0(i_86, t_39, t);
      }
    return(t);
  }
  t = t_39(t);
  return(t);
}
ATerm d_7 (ATerm t)
{
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
    }
  return(t);
}
ATerm e_7 (ATerm t)
{
  t = term_o_24;
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm p_24 = t;
  int q_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_39 = NULL;
      z_39 = t;
      t = SSL_is_string(z_39);
      ;
      LocalPopChoice(q_24);
    }
  else
    {
      t = p_24;
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(d_7, t);
            ;
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            {
              ATerm d_40 = NULL,e_40 = NULL,f_40 = NULL;
              d_40 = t;
              if(match_cons(t, sym_Path_1))
                {
                  e_40 = ATgetArgument(t, 0);
                  t = e_40;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      e_40 = ATgetArgument(t, 0);
                      t = e_40;
                      {
                        ATerm t_24 = t;
                        int u_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(u_24);
                          }
                        else
                          {
                            t = t_24;
                            t = debug_1_0(e_7, t);
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm j_40 = NULL,k_40 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          e_40 = ATgetArgument(t, 0);
                          f_40 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = e_40;
                      t = eval_config_0_0(t);
                      j_40 = t;
                      t = f_40;
                      t = eval_config_0_0(t);
                      k_40 = t;
                      t = (ATerm) ATmakeAppl(sym__2, j_40, k_40);
                      t = n_6(j_40, k_40, t);
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
  ATerm n_40 = NULL,o_40 = NULL;
  n_40 = t;
  t = term_x_21;
  o_40 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_21, n_40);
  t = o_6(o_40, n_40, t);
  {
    ATerm v_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_40 = NULL,q_40 = NULL;
        t = eval_config_0_0(t);
        p_40 = t;
        t = term_x_21;
        q_40 = t;
        t = SSL_table_put(q_40, n_40, p_40);
        t = p_40;
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = v_24;
      }
  }
  return(t);
}
ATerm f_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm g_7 (ATerm t)
{
  ATerm r_40 = NULL,s_40 = NULL;
  t = term_b_25;
  r_40 = t;
  t = term_p_8;
  s_40 = t;
  t = term_c_25;
  t = r_6(r_40, s_40, t);
  return(t);
}
ATerm i_7 (ATerm t)
{
  t = term_d_25;
  return(t);
}
ATerm j_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_7 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL,w_40 = NULL;
  t = term_b_25;
  t_40 = t;
  t = term_p_8;
  u_40 = t;
  t = term_c_25;
  t = r_6(t_40, u_40, t);
  t = term_e_25;
  v_40 = t;
  t = term_p_8;
  w_40 = t;
  t = term_f_25;
  t = r_6(v_40, w_40, t);
  t = term_g_25;
  return(t);
}
ATerm l_7 (ATerm t)
{
  t = term_h_25;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm m_25 = t;
  int n_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(f_7, g_7, i_7, t);
      ;
      LocalPopChoice(n_25);
    }
  else
    {
      t = m_25;
      t = Option_3_0(j_7, k_7, l_7, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm d_70 (ATerm), ATerm e_70 (ATerm), ATerm t)
{
  ATerm x_40 = NULL,y_40 = NULL,z_40 = NULL,a_41 = NULL,b_41 = NULL,c_41 = NULL,w_1 = NULL,a_2 = NULL;
  c_41 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      y_40 = ATgetFirst((ATermList) t);
      z_40 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_41);
  x_40 = t;
  t = y_40;
  t = d_70(t);
  a_41 = t;
  t = z_40;
  t = e_70(t);
  b_41 = t;
  a_2 = t;
  t = (ATerm) ATinsert(CheckATermList(b_41), a_41);
  w_1 = t;
  t = SSLsetAnnotations(w_1, x_40);
  return(t);
}
ATerm m_7 (ATerm t)
{
  ATerm h_41 = NULL,i_41 = NULL;
  h_41 = t;
  t = term_j_22;
  i_41 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_j_22, h_41);
  t = r_6(i_41, h_41, t);
  t = (ATerm) ATmakeAppl(sym_Program_1, h_41);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm c_105 (ATerm), ATerm t)
{
  ATerm g_41 = NULL;
  g_41 = t;
  {
    ATerm r_25 = t;
    int s_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_u_25;
        t = c_105(t);
        ;
        LocalPopChoice(s_25);
      }
    else
      {
        t = r_25;
      }
    t = g_41;
    {
      ATerm n_7 (ATerm t)
      {
        ATerm x_25 = t;
        int y_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_25 = t;
            int a_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(a_26);
              }
            else
              {
                t = z_25;
                t = c_105(t);
                t = Cons_2_0(_id, n_7, t);
              }
            ;
            LocalPopChoice(y_25);
          }
        else
          {
            t = x_25;
            {
              ATerm k_41 = NULL,l_41 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_41 = ATgetFirst((ATermList) t);
                  l_41 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_41), (ATerm) ATmakeAppl(sym_Undefined_1, k_41));
            }
          }
        return(t);
      }
      t = Cons_2_0(m_7, n_7, t);
    }
  }
  return(t);
}
ATerm p_7 (ATerm t)
{
  ATerm z_41 = NULL;
  z_41 = t;
  if(match_string(t, "--help"))
    {
      t = z_41;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = z_41;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = z_41;
        }
    }
  return(t);
}
ATerm q_7 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL;
  t = term_x_23;
  a_42 = t;
  t = term_p_8;
  b_42 = t;
  t = term_b_26;
  t = r_6(a_42, b_42, t);
  t = term_e_26;
  return(t);
}
ATerm t_7 (ATerm t)
{
  t = term_f_26;
  return(t);
}
ATerm u_7 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm b_105 (ATerm), ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL,v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
  s_41 = t;
  t = term_y_21;
  v_41 = t;
  t = term_a_22;
  w_41 = t;
  t = (ATerm) ATempty;
  x_41 = t;
  t = SSL_table_put(v_41, w_41, x_41);
  t = s_41;
  {
    ATerm o_7 (ATerm t)
    {
      ATerm g_26 = t;
      int i_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_105(t);
          ;
          LocalPopChoice(i_26);
        }
      else
        {
          t = g_26;
          {
            ATerm j_26 = t;
            int l_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(p_7, q_7, t_7, t);
                ;
                LocalPopChoice(l_26);
              }
            else
              {
                t = j_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(o_7, t);
    {
      ATerm q_26 = t;
      int r_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_42 = NULL;
          i_42 = t;
          {
            ATerm s_26 = t;
            int t_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_9 = NULL;
                t = i_42;
                {
                  ATerm u_26 = t;
                  int z_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = term_x_23;
                      t = get_config_0_0(t);
                      ;
                      LocalPopChoice(z_26);
                    }
                  else
                    {
                      t = u_26;
                      t = fetch_1_0(u_7, t);
                    }
                  t = i_42;
                  t = default_system_usage_0_0(t);
                  t = term_n_12;
                  z_9 = t;
                  t = SSL_exit(z_9);
                }
                ;
                LocalPopChoice(t_26);
              }
            else
              {
                t = s_26;
                {
                  ATerm h_10 = NULL;
                  t = term_b_25;
                  t = get_config_0_0(t);
                  t = i_42;
                  t = default_system_about_0_0(t);
                  t = term_n_12;
                  h_10 = t;
                  t = SSL_exit(h_10);
                }
              }
          }
          ;
          LocalPopChoice(r_26);
        }
      else
        {
          t = q_26;
          {
            ATerm a_27 = t;
            int b_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_42 = NULL,k_42 = NULL,l_42 = NULL;
                ATerm v_7 (ATerm t)
                {
                  ATerm w_7 (ATerm t)
                  {
                    if(((t_41 != NULL) && (t_41 != t)))
                      _fail(t);
                    else
                      t_41 = t;
                    return(t);
                  }
                  t = Undefined_1_0(w_7, t);
                  return(t);
                }
                t = fetch_1_0(v_7, t);
                t = term_t_20;
                j_42 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_41)), term_c_27);
                k_42 = t;
                t = SSL_printnl(j_42, k_42);
                t = (ATerm) ATmakeAppl(sym__2, term_t_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_41)), term_c_27));
                t = default_system_usage_0_0(t);
                t = term_w_11;
                l_42 = t;
                t = SSL_exit(l_42);
                ;
                LocalPopChoice(b_27);
              }
            else
              {
                t = a_27;
              }
          }
        }
      u_41 = t;
      t = term_y_21;
      y_41 = t;
      t = SSL_table_destroy(y_41);
      t = u_41;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm d_103 (ATerm), ATerm e_103 (ATerm), ATerm t)
{
  ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL,r_42 = NULL;
  t = parse_options_1_0(b_103, t);
  o_42 = t;
  t = term_e_27;
  p_42 = t;
  t = SSL_table_create(p_42);
  t = term_e_27;
  q_42 = t;
  t = term_f_27;
  r_42 = t;
  t = SSL_table_put(q_42, r_42, o_42);
  t = o_42;
  t = d_103(t);
  {
    ATerm g_27 = t;
    int h_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(c_103, t);
        ;
        LocalPopChoice(h_27);
      }
    else
      {
        t = g_27;
        {
          ATerm i_27 = t;
          int j_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = e_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(j_27);
            }
          else
            {
              t = i_27;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm x_7 (ATerm t)
{
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      {
        ATerm m_27 = t;
        int n_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(n_27);
          }
        else
          {
            t = m_27;
            {
              ATerm o_27 = t;
              int p_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(z_7, a_8, b_8, t);
                  ;
                  LocalPopChoice(p_27);
                }
              else
                {
                  t = o_27;
                  {
                    ATerm q_27 = t;
                    int s_27 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(s_27);
                      }
                    else
                      {
                        t = q_27;
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
ATerm y_7 (ATerm t)
{
  t = xtc_io_1_0(c_8, t);
  return(t);
}
ATerm z_7 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm a_8 (ATerm t)
{
  ATerm s_42 = NULL,t_42 = NULL;
  t = term_t_27;
  s_42 = t;
  t = term_p_8;
  t_42 = t;
  t = term_u_27;
  t = r_6(s_42, t_42, t);
  t = term_w_27;
  return(t);
}
ATerm b_8 (ATerm t)
{
  t = term_x_27;
  return(t);
}
ATerm c_8 (ATerm t)
{
  t = read_from_0_0(t);
  t = abox2html_0_0(t);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(x_7, default_usage_0_0, _id, y_7, t);
  return(t);
}

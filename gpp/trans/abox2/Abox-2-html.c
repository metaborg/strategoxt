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
ATerm term_a_29;
ATerm term_z_28;
ATerm term_k_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_m_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_n_25;
ATerm term_i_25;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_i_24;
ATerm term_h_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_f_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_w_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_l_17;
ATerm term_c_17;
ATerm term_t_16;
ATerm term_c_16;
ATerm term_j_15;
ATerm term_n_13;
ATerm term_l_13;
ATerm term_s_12;
ATerm term_n_11;
ATerm term_k_11;
ATerm term_h_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_v_9;
ATerm term_e_9;
ATerm term_d_9;
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
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_a_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_s_6;
void init_constant_terms (void)
{
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_11);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(sym__3, term_c_27, term_d_27, term_v_6);
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm assert_1_0 (ATerm e_97 (ATerm), ATerm);
ATerm r_1 (ATerm a_1, ATerm);
ATerm s_1 (ATerm e_1, ATerm h_1, ATerm i_1, ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm c_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm Html2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm q_0 (ATerm);
ATerm r_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm u_81 (ATerm), ATerm);
ATerm u_0 (ATerm);
ATerm x_0 (ATerm);
ATerm replace_quotes_0_0 (ATerm);
ATerm listtd_1_0 (ATerm r_87 (ATerm), ATerm);
ATerm y_0 (ATerm);
ATerm z_0 (ATerm);
ATerm html_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm x_107 (ATerm), ATerm);
ATerm b_1 (ATerm);
ATerm c_1 (ATerm);
ATerm g_1 (ATerm);
ATerm j_1 (ATerm);
ATerm k_1 (ATerm);
ATerm l_1 (ATerm);
ATerm o_1 (ATerm);
ATerm make_html_comment_0_0 (ATerm);
ATerm q_1 (ATerm);
ATerm sep_by_1_0 (ATerm s_78 (ATerm), ATerm);
ATerm filter_1_0 (ATerm m_93 (ATerm), ATerm);
ATerm v_1 (ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm i_100 (ATerm), ATerm);
ATerm y_1 (ATerm);
ATerm separate_by_1_0 (ATerm d_86 (ATerm), ATerm);
ATerm LNAT_2_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm);
ATerm L_2_0 (ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm);
ATerm tov_1_0 (ATerm r_78 (ATerm), ATerm);
ATerm a_2 (ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm while_not_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm);
ATerm for_3_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm);
ATerm c_2 (ATerm);
ATerm f_2 (ATerm);
ATerm g_2 (ATerm);
ATerm copy_0_0 (ATerm);
ATerm SOpt_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm a_108 (ATerm), ATerm);
ATerm k_2 (ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm make_hs_0_0 (ATerm);
ATerm toa_1_0 (ATerm u_78 (ATerm), ATerm);
ATerm R_2_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm);
ATerm q_2 (ATerm);
ATerm r_2 (ATerm);
ATerm s_2 (ATerm);
ATerm t_2 (ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm x_2 (ATerm);
ATerm y_2 (ATerm);
ATerm z_2 (ATerm);
ATerm b_3 (ATerm);
ATerm c_3 (ATerm);
ATerm f_3 (ATerm);
ATerm m_3 (ATerm);
ATerm o_3 (ATerm);
ATerm Abox2html_0_0 (ATerm);
ATerm topdown_1_0 (ATerm q_80 (ATerm), ATerm);
ATerm q_3 (ATerm);
ATerm at_last_1_0 (ATerm j_87 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm c_87 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm v_86 (ATerm), ATerm);
ATerm w_3 (ATerm);
ATerm Distribute_0_0 (ATerm);
ATerm y_3 (ATerm);
ATerm normalize_0_0 (ATerm);
ATerm z_3 (ATerm);
ATerm a_4 (ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm e_24 (ATerm y_23, ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm b_4 (ATerm);
ATerm c_4 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm b_97 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm a_97 (ATerm), ATerm);
ATerm e_4 (ATerm);
ATerm g_4 (ATerm);
ATerm i_4 (ATerm);
ATerm xtc_temp_files_1_0 (ATerm j_108 (ATerm), ATerm);
ATerm k_4 (ATerm);
ATerm xtc_io_1_0 (ATerm k_108 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm l_4 (ATerm);
ATerm m_4 (ATerm);
ATerm n_4 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm o_4 (ATerm);
ATerm p_4 (ATerm);
ATerm q_4 (ATerm);
ATerm r_4 (ATerm);
ATerm t_4 (ATerm);
ATerm u_4 (ATerm);
ATerm v_4 (ATerm);
ATerm w_4 (ATerm);
ATerm x_4 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm y_4 (ATerm);
ATerm z_4 (ATerm);
ATerm a_5 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm b_5 (ATerm);
ATerm c_5 (ATerm);
ATerm d_5 (ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm e_5 (ATerm);
ATerm f_5 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm h_100 (ATerm), ATerm);
ATerm g_5 (ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm h_5 (ATerm);
ATerm need_help_1_0 (ATerm x_102 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm h_76 (ATerm), ATerm);
ATerm j_5 (ATerm);
ATerm k_5 (ATerm);
ATerm l_5 (ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm i_76 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm s_86 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm y_86 (ATerm), ATerm);
ATerm _2_0 (ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm);
ATerm n_5 (ATerm);
ATerm o_5 (ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm h_86 (ATerm), ATerm);
ATerm q_5 (ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm r_5 (ATerm);
ATerm t_5 (ATerm);
ATerm u_5 (ATerm);
ATerm v_5 (ATerm);
ATerm x_5 (ATerm);
ATerm y_5 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm);
ATerm z_5 (ATerm);
ATerm parse_options_p__1_0 (ATerm a_105 (ATerm), ATerm);
ATerm c_6 (ATerm);
ATerm d_6 (ATerm);
ATerm e_6 (ATerm);
ATerm f_6 (ATerm);
ATerm parse_options_1_0 (ATerm z_104 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm);
ATerm i_6 (ATerm);
ATerm j_6 (ATerm);
ATerm k_6 (ATerm);
ATerm l_6 (ATerm);
ATerm m_6 (ATerm);
ATerm n_6 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm assert_1_0 (ATerm e_97 (ATerm), ATerm t)
{
  ATerm e_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      e_0 = ATgetArgument(t, 0);
      m_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_97(t);
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_0, e_0, m_0);
  t = table_push_0_0(t);
  {
    ATerm z_1 = t;
    int o_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_0, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(o_6);
      }
    else
      {
        t = z_1;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_0 = ATgetFirst((ATermList) t);
        s_0 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_0, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(s_0), (ATerm) ATinsert(CheckATermList(o_0), e_0)));
    t = (ATerm) ATmakeAppl(sym__2, e_0, m_0);
  }
  return(t);
}
ATerm r_1 (ATerm a_1, ATerm t)
{
  t = a_1;
  {
    ATerm p_6 = t;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm q_6 = ATgetArgument(t, 0);
            ATerm r_6 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = p_6;
      }
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
    t = (ATerm) ATmakeAppl(sym__2, a_1, term_s_6);
    t = open_file_0_0(t);
  }
  return(t);
}
ATerm s_1 (ATerm e_1, ATerm h_1, ATerm i_1, ATerm t)
{
  t = SSL_open_file(e_1, h_1);
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm m_1 = NULL,n_1 = NULL,p_1 = NULL;
  m_1 = t;
  if(match_cons(t, sym__2))
    {
      n_1 = ATgetArgument(t, 0);
      p_1 = ATgetArgument(t, 1);
      {
        ATerm t_6 = t;
        int u_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = r_1(m_1, t);
            ;
            LocalPopChoice(u_6);
          }
        else
          {
            t = t_6;
            t = s_1(n_1, p_1, m_1, t);
          }
      }
    }
  else
    {
      t = r_1(m_1, t);
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
  ATerm u_1 = NULL;
  t = term_v_6;
  t = new_0_0(t);
  u_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, u_1, term_w_6);
  t = conc_strings_0_0(t);
  {
    ATerm y_6 = t;
    int z_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_1 = NULL;
        x_1 = t;
        t = SSL_access(x_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(z_6);
      }
    else
      {
        t = y_6;
      }
  }
  return(t);
}
ATerm c_0 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm b_2 = NULL;
  t = new_file_0_0(t);
  b_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_2, term_s_6);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, b_2, term_v_6);
  t = assert_1_0(c_0, t);
  t = b_2;
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm d_2 = NULL,e_2 = NULL;
  d_2 = t;
  t = xtc_new_file_0_0(t);
  e_2 = t;
  t = d_2;
  {
    ATerm l_0 (ATerm t)
    {
      ATerm b_7 = t;
      int c_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 = NULL,v_0 = NULL;
          i_2 = t;
          t = SSL_is_string(i_2);
          v_0 = t;
          t = SSL_print(e_2, (ATerm) ATinsert(ATempty, v_0));
          t = v_0;
          ;
          LocalPopChoice(c_7);
        }
      else
        {
          t = b_7;
        }
      return(t);
    }
    t = topdown_1_0(l_0, t);
    t = SSL_close_file(e_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, e_2);
  }
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm l_2 = NULL,n_2 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      n_2 = ATgetArgument(t, 0);
      l_2 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_7), l_2), term_e_7), n_2), term_d_7);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          n_2 = ATgetArgument(t, 0);
          l_2 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_7), l_2), term_e_7), n_2), term_g_7);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              n_2 = ATgetArgument(t, 0);
              l_2 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_7), l_2), term_e_7), n_2), term_i_7);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  n_2 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_7), n_2), term_j_7);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      n_2 = ATgetArgument(t, 0);
                      l_2 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_7), l_2), term_e_7), n_2), term_l_7);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          n_2 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_7), n_2), term_q_7);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              n_2 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), n_2), term_s_7);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  n_2 = ATgetArgument(t, 0);
                                  l_2 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_7), l_2), term_v_7), n_2), term_u_7);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      n_2 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), n_2), term_x_7);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_z_7;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_a_8;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_b_8;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_c_8;
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
ATerm bottomup_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = bottomup_1_0(r_80, t);
    return(t);
  }
  t = SRTS_all(p_0, t);
  t = r_80(t);
  return(t);
}
ATerm q_0 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm r_0 (ATerm t)
{
  ATerm j_8 = NULL;
  j_8 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = j_8;
    }
  else
    {
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm d_8 = ATgetFirst((ATermList) t);
          ATerm e_8 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_8;
    }
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm f_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_8);
    }
  else
    {
      t = f_8;
      {
        ATerm l_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(q_0, flat_list_0_0, t);
            ;
            LocalPopChoice(n_8);
          }
        else
          {
            t = l_8;
            {
              ATerm o_8 = t;
              int p_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
                  t = Cons_2_0(r_0, _id, t);
                  g_8 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      h_8 = ATgetFirst((ATermList) t);
                      {
                        ATerm q_8 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = g_8;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm r_8 = ATgetFirst((ATermList) t);
                      i_8 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, h_8, i_8);
                  {
                    ATerm s_8 = t;
                    int t_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm u_8 = ATgetArgument(t, 0);
                            ATerm v_8 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = h_8;
                        {
                          ATerm t_0 (ATerm t)
                          {
                            t = i_8;
                            return(t);
                          }
                          t = at_end_1_0(t_0, t);
                        }
                        ;
                        LocalPopChoice(t_8);
                      }
                    else
                      {
                        t = s_8;
                        {
                          ATerm d_1 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, h_8, i_8));
                          if(match_cons(t, sym__2))
                            {
                              ATerm y_8 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) y_8) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              d_1 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = d_1;
                          t = concat_0_0(t);
                        }
                      }
                    t = flat_list_0_0(t);
                  }
                  ;
                  LocalPopChoice(p_8);
                }
              else
                {
                  t = o_8;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm u_81 (ATerm), ATerm t)
{
  ATerm j_9 (ATerm t)
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_81(t);
        ;
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        t = SRTS_one(j_9, t);
      }
    return(t);
  }
  t = j_9(t);
  return(t);
}
ATerm u_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
ATerm x_0 (ATerm t)
{
  ATerm m_9 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm c_9 = ATgetFirst((ATermList) t);
      if(((ATgetType(c_9) != AT_INT) || (ATgetInt((ATermInt) c_9) != 34)))
        _fail(t);
      m_9 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(m_9), term_d_9), term_d_9);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm k_9 = NULL,l_9 = NULL;
  ATerm w_0 (ATerm t)
  {
    if(((k_9 != NULL) && (k_9 != t)))
      _fail(t);
    else
      k_9 = t;
    return(t);
  }
  t = Cons_2_0(u_0, w_0, t);
  t = not_null(k_9);
  t = oncetd_1_0(x_0, t);
  l_9 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(l_9), term_e_9), term_e_9);
  return(t);
}
ATerm listtd_1_0 (ATerm r_87 (ATerm), ATerm t)
{
  ATerm n_9 (ATerm t)
  {
    t = r_87(t);
    {
      ATerm f_9 = t;
      int g_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(g_9);
        }
      else
        {
          t = f_9;
          t = Cons_2_0(_id, n_9, t);
        }
    }
    return(t);
  }
  t = n_9(t);
  return(t);
}
ATerm y_0 (ATerm t)
{
  ATerm h_9 = t;
  int i_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = replace_quotes_0_0(t);
      ;
      LocalPopChoice(i_9);
    }
  else
    {
      t = h_9;
    }
  return(t);
}
ATerm z_0 (ATerm t)
{
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(match_int(t, 32))
        {
          t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue)));
        }
      else
        {
          if(match_int(t, 38))
            {
              t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue)));
            }
          else
            {
              if(match_int(t, 60))
                {
                  t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue)));
                }
              else
                {
                  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 62)))
                    _fail(t);
                  t = SSL_explode_string((ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue)));
                }
            }
        }
      ;
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  w_9 = t;
  t = SSL_explode_string(w_9);
  t = listtd_1_0(y_0, t);
  t = map_1_0(z_0, t);
  t = flat_list_0_0(t);
  x_9 = t;
  t = SSL_implode_string(x_9);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm x_107 (ATerm), ATerm t)
{
  ATerm g_10 (ATerm t)
  {
    ATerm r_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_10 = NULL;
        t = Cons_2_0(x_107, _id, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm u_9 = ATgetFirst((ATermList) t);
            f_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = f_10;
        t = g_10(t);
        ;
        LocalPopChoice(t_9);
      }
    else
      {
        t = r_9;
      }
    return(t);
  }
  t = g_10(t);
  return(t);
}
ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm c_1 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  if(match_int(t, 9))
    {
      t = p_2;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = p_2;
    }
  return(t);
}
ATerm g_1 (ATerm t)
{
  ATerm k_3 = NULL;
  k_3 = t;
  if(match_int(t, 9))
    {
      t = k_3;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = k_3;
    }
  return(t);
}
ATerm j_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm k_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_1 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm o_1 (ATerm t)
{
  ATerm y_11 = NULL;
  y_11 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_v_9), y_11);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm s_10 = NULL,f_1 = NULL;
  s_10 = t;
  t = SSL_explode_string(s_10);
  t = reverse_acc_2_0(_id, b_1, t);
  f_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, f_1, (ATerm) ATempty);
  {
    ATerm z_11 (ATerm t)
    {
      ATerm o_11 = NULL,p_11 = NULL,q_11 = NULL,r_11 = NULL;
      if(match_cons(t, sym__2))
        {
          o_11 = ATgetArgument(t, 0);
          r_11 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_11;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm m_2 = NULL,o_2 = NULL;
          t = r_11;
          t = remove_trailing_1_0(c_1, t);
          o_2 = t;
          t = SSL_implode_string(o_2);
          m_2 = t;
          t = (ATerm) ATinsert(ATempty, m_2);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_11 = ATgetFirst((ATermList) t);
              q_11 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = p_11;
          if(match_int(t, 10))
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_3 = NULL,g_3 = NULL,i_3 = NULL;
                  t = r_11;
                  t = remove_trailing_1_0(g_1, t);
                  g_3 = t;
                  t = SSL_implode_string(g_3);
                  e_3 = t;
                  t = (ATerm) ATmakeAppl(sym__2, q_11, (ATerm) ATempty);
                  t = z_11(t);
                  i_3 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_3), e_3);
                  ;
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  t = (ATerm) ATmakeAppl(sym__2, q_11, (ATerm) ATinsert(CheckATermList(r_11), p_11));
                  t = z_11(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, q_11, (ATerm) ATinsert(CheckATermList(r_11), p_11));
              t = z_11(t);
            }
        }
      return(t);
    }
    t = z_11(t);
    t = remove_trailing_1_0(j_1, t);
    t = reverse_acc_2_0(_id, k_1, t);
    t = remove_trailing_1_0(l_1, t);
    t = map_1_0(o_1, t);
  }
  return(t);
}
ATerm q_1 (ATerm t)
{
  ATerm d_12 = NULL;
  d_12 = t;
  t = (ATerm) ATinsert(ATempty, d_12);
  return(t);
}
ATerm sep_by_1_0 (ATerm s_78 (ATerm), ATerm t)
{
  t = map_1_0(q_1, t);
  t = separate_by_1_0(s_78, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm m_93 (ATerm), ATerm t)
{
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm c_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              t = filter_1_0(m_93, t);
              return(t);
            }
            t = Cons_2_0(m_93, t_1, t);
            ;
            LocalPopChoice(i_10);
          }
        else
          {
            t = c_10;
            {
              ATerm h_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm j_10 = ATgetFirst((ATermList) t);
                  h_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = h_12;
              t = filter_1_0(m_93, t);
            }
          }
      }
    }
  return(t);
}
ATerm v_1 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm k_12 = NULL;
  ATerm m_10 = t;
  int n_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(v_1, t);
      ;
      LocalPopChoice(n_10);
    }
  else
    {
      t = m_10;
      t = term_o_10;
    }
  k_12 = t;
  if(match_int(t, 0))
    {
      ATerm p_10 = t;
      int q_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(q_10);
        }
      else
        {
          t = p_10;
          t = (ATerm) ATmakeAppl(sym__2, k_12, term_r_10);
          t = copy_0_0(t);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, k_12, term_r_10);
      t = copy_0_0(t);
    }
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm n_12 = NULL,o_12 = NULL;
  if(match_cons(t, sym__2))
    {
      n_12 = ATgetArgument(t, 0);
      o_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_12;
  {
    ATerm t_10 = t;
    int u_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(u_10);
      }
    else
      {
        t = t_10;
        {
          ATerm w_1 (ATerm t)
          {
            ATerm v_10 = t;
            int w_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(w_10);
              }
            else
              {
                t = v_10;
                {
                  ATerm p_12 = NULL;
                  t = Cons_2_0(_id, w_1, t);
                  p_12 = t;
                  t = (ATerm) ATinsert(CheckATermList(p_12), n_12);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, w_1, t);
        }
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm i_100 (ATerm), ATerm t)
{
  ATerm x_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_12 = NULL,t_12 = NULL;
      r_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_4 = NULL;
            t = eval_config_0_0(t);
            h_4 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), h_4);
            t = h_4;
            ;
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
          }
        t_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, t_12, term_b_11);
        t = geq_0_0(t);
        t = r_12;
        t = i_100(t);
      }
      ;
      LocalPopChoice(y_10);
    }
  else
    {
      t = x_10;
    }
  return(t);
}
ATerm y_1 (ATerm t)
{
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue))));
  t = term_c_11;
  return(t);
}
ATerm separate_by_1_0 (ATerm d_86 (ATerm), ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL;
  u_12 = t;
  t = if_verbose2_1_0(y_1, t);
  t = term_v_6;
  t = d_86(t);
  v_12 = t;
  t = (ATerm) ATmakeAppl(sym__2, v_12, u_12);
  t = separate_by_0_0(t);
  return(t);
}
ATerm LNAT_2_0 (ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm t)
{
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL;
  b_13 = t;
  if(match_cons(t, sym_LNAT_2))
    {
      x_12 = ATgetArgument(t, 0);
      y_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(b_13);
  w_12 = t;
  t = x_12;
  t = z_76(t);
  z_12 = t;
  t = y_12;
  t = a_77(t);
  a_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, z_12, a_13), w_12);
  return(t);
}
ATerm L_2_0 (ATerm x_76 (ATerm), ATerm y_76 (ATerm), ATerm t)
{
  ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_L_2))
    {
      f_13 = ATgetArgument(t, 0);
      g_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_13);
  e_13 = t;
  t = f_13;
  t = x_76(t);
  h_13 = t;
  t = g_13;
  t = y_76(t);
  i_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, h_13, i_13), e_13);
  return(t);
}
ATerm tov_1_0 (ATerm r_78 (ATerm), ATerm t)
{
  ATerm o_13 = NULL;
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2_0(_id, _id, t);
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2_0(_id, _id, t);
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
            {
              ATerm p_13 = NULL,q_13 = NULL;
              p_13 = t;
              t = term_v_6;
              t = r_78(t);
              q_13 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_13))), q_13))));
            }
          }
      }
    }
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_13))));
  return(t);
}
ATerm a_2 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm i_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(a_2, t);
      ;
      LocalPopChoice(j_11);
    }
  else
    {
      t = i_11;
      t = term_k_11;
    }
  s_13 = t;
  if(match_int(t, 0))
    {
      ATerm l_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_n_11;
          ;
          LocalPopChoice(m_11);
        }
      else
        {
          t = l_11;
          {
            ATerm u_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, s_13, term_r_10);
            t = copy_0_0(t);
            u_13 = t;
            t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, u_13);
          }
        }
    }
  else
    {
      ATerm w_13 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, s_13, term_r_10);
      t = copy_0_0(t);
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, w_13);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm s_11 = t;
    int t_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_80(t);
        ;
        LocalPopChoice(t_11);
      }
    else
      {
        t = s_11;
        t = i_80(t);
        t = x_13(t);
      }
    return(t);
  }
  t = x_13(t);
  return(t);
}
ATerm for_3_0 (ATerm k_80 (ATerm), ATerm l_80 (ATerm), ATerm m_80 (ATerm), ATerm t)
{
  t = k_80(t);
  t = while_not_2_0(l_80, m_80, t);
  return(t);
}
ATerm c_2 (ATerm t)
{
  ATerm y_13 = NULL,z_13 = NULL;
  if(match_cons(t, sym__2))
    {
      y_13 = ATgetArgument(t, 0);
      z_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__3, y_13, z_13, (ATerm) ATempty);
  return(t);
}
ATerm f_2 (ATerm t)
{
  ATerm a_14 = NULL;
  if(match_cons(t, sym__3))
    {
      ATerm u_11 = ATgetArgument(t, 0);
      if(((ATgetType(u_11) != AT_INT) || (ATgetInt((ATermInt) u_11) != 0)))
        _fail(t);
      {
        ATerm v_11 = ATgetArgument(t, 1);
      }
      a_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = a_14;
  return(t);
}
ATerm g_2 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
  if(match_cons(t, sym__3))
    {
      b_14 = ATgetArgument(t, 0);
      c_14 = ATgetArgument(t, 1);
      d_14 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, b_14, term_o_10);
  t = geq_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, b_14, term_o_10);
  {
    ATerm w_11 = t;
    int x_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_subti(b_14, (ATerm) ATmakeInt(1));
        ;
        LocalPopChoice(x_11);
      }
    else
      {
        t = w_11;
        t = SSL_subtr(b_14, (ATerm) ATmakeInt(1));
      }
    e_14 = t;
    t = (ATerm) ATmakeAppl(sym__3, e_14, c_14, (ATerm) ATinsert(CheckATermList(d_14), c_14));
  }
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  t = for_3_0(c_2, f_2, g_2, t);
  return(t);
}
ATerm SOpt_2_0 (ATerm f_78 (ATerm), ATerm g_78 (ATerm), ATerm t)
{
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  k_14 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      g_14 = ATgetArgument(t, 0);
      h_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_14);
  f_14 = t;
  t = g_14;
  t = f_78(t);
  i_14 = t;
  t = h_14;
  t = g_78(t);
  j_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, i_14, j_14), f_14);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm a_108 (ATerm), ATerm t)
{
  ATerm n_14 = NULL;
  ATerm h_2 (ATerm t)
  {
    ATerm j_2 (ATerm t)
    {
      if(((n_14 != NULL) && (n_14 != t)))
        _fail(t);
      else
        n_14 = t;
      return(t);
    }
    t = SOpt_2_0(a_108, j_2, t);
    return(t);
  }
  t = fetch_1_0(h_2, t);
  t = SSL_string_to_int(not_null(n_14));
  return(t);
}
ATerm k_2 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  ATerm a_12 = t;
  int b_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(k_2, t);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      t = term_k_11;
    }
  p_14 = t;
  if(match_int(t, 0))
    {
      ATerm c_12 = t;
      int e_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_n_11;
          ;
          LocalPopChoice(e_12);
        }
      else
        {
          t = c_12;
          {
            ATerm r_14 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, p_14, term_v_9);
            t = copy_0_0(t);
            r_14 = t;
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, r_14)));
          }
        }
    }
  else
    {
      ATerm t_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_14, term_v_9);
      t = copy_0_0(t);
      t_14 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, t_14)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm x_14 = NULL,b_15 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      x_14 = ATgetArgument(t, 0);
      t = x_14;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          x_14 = ATgetArgument(t, 0);
          t = x_14;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              x_14 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = x_14;
        }
    }
  t = Hspace_0_0(t);
  b_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm f_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_15;
          ;
          LocalPopChoice(g_12);
        }
      else
        {
          t = f_12;
          t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, b_15);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, b_15);
    }
  return(t);
}
ATerm toa_1_0 (ATerm u_78 (ATerm), ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm i_12 = ATgetArgument(t, 0);
      if(((ATgetType(i_12) != AT_LIST) || !(ATisEmpty(i_12))))
        _fail(t);
      q_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_v_6;
  t = u_78(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      r_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, q_15, r_15);
  {
    ATerm n_18 (ATerm t)
    {
      ATerm q_18 (ATerm t_15, ATerm u_15, ATerm v_15, ATerm w_15, ATerm x_15, ATerm t)
      {
        ATerm e_16 = NULL,f_16 = NULL,g_16 = NULL;
        t = w_15;
        {
          ATerm l_12 = t;
          int m_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm q_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(m_12);
              t = term_s_12;
            }
          else
            {
              t = l_12;
              {
                ATerm c_13 = t;
                int d_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm k_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_13);
                    t = term_l_13;
                  }
                else
                  {
                    t = c_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm m_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_n_13;
                  }
              }
            }
          e_16 = t;
          t = w_15;
          t = make_hs_0_0(t);
          f_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(v_15), u_15), x_15);
          t = n_18(t);
          g_16 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(g_16), f_16), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, e_16), t_15));
        }
        return(t);
      }
      ATerm r_18 (ATerm j_16, ATerm k_16, ATerm l_16, ATerm m_16, ATerm t)
      {
        ATerm u_16 = NULL,v_16 = NULL;
        t = l_16;
        {
          ATerm r_13 = t;
          int t_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm v_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(t_13);
              t = term_s_12;
            }
          else
            {
              t = r_13;
              {
                ATerm l_14 = t;
                int m_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm o_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(m_14);
                    t = term_l_13;
                  }
                else
                  {
                    t = l_14;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm q_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_n_13;
                  }
              }
            }
          u_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, k_16, m_16);
          t = n_18(t);
          v_16 = t;
          t = (ATerm) ATinsert(CheckATermList(v_16), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, u_16), j_16));
        }
        return(t);
      }
      ATerm y_16 = NULL,z_16 = NULL,a_17 = NULL,b_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL;
      if(match_cons(t, sym__2))
        {
          d_17 = ATgetArgument(t, 0);
          g_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = d_17;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              e_17 = ATgetFirst((ATermList) t);
              f_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = g_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              h_17 = ATgetFirst((ATermList) t);
              i_17 = (ATerm) ATgetNext((ATermList) t);
              t = f_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  a_17 = ATgetFirst((ATermList) t);
                  b_17 = (ATerm) ATgetNext((ATermList) t);
                  t = e_17;
                  if(match_cons(t, sym_C_2))
                    {
                      y_16 = ATgetArgument(t, 0);
                      z_16 = ATgetArgument(t, 1);
                      {
                        ATerm s_14 = t;
                        int v_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm v_17 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, f_17, g_17);
                            t = n_18(t);
                            v_17 = t;
                            t = (ATerm) ATinsert(CheckATermList(v_17), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, y_16, z_16))));
                            ;
                            LocalPopChoice(v_14);
                          }
                        else
                          {
                            t = s_14;
                            {
                              ATerm w_14 = t;
                              int y_14 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = q_18(e_17, a_17, b_17, h_17, i_17, t);
                                  ;
                                  LocalPopChoice(y_14);
                                }
                              else
                                {
                                  t = w_14;
                                  t = r_18(e_17, f_17, h_17, i_17, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm z_14 = t;
                      int a_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = q_18(e_17, a_17, b_17, h_17, i_17, t);
                          ;
                          LocalPopChoice(a_15);
                        }
                      else
                        {
                          t = z_14;
                          t = r_18(e_17, f_17, h_17, i_17, t);
                        }
                    }
                }
              else
                {
                  t = e_17;
                  if(match_cons(t, sym_C_2))
                    {
                      y_16 = ATgetArgument(t, 0);
                      z_16 = ATgetArgument(t, 1);
                      {
                        ATerm c_15 = t;
                        int d_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_18 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, f_17, g_17);
                            t = n_18(t);
                            c_18 = t;
                            t = (ATerm) ATinsert(CheckATermList(c_18), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, y_16, z_16))));
                            ;
                            LocalPopChoice(d_15);
                          }
                        else
                          {
                            t = c_15;
                            t = r_18(e_17, f_17, h_17, i_17, t);
                          }
                      }
                    }
                  else
                    {
                      t = r_18(e_17, f_17, h_17, i_17, t);
                    }
                }
            }
          else
            {
              ATerm m_18 = NULL;
              t = e_17;
              if(match_cons(t, sym_C_2))
                {
                  y_16 = ATgetArgument(t, 0);
                  z_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, f_17, g_17);
              t = n_18(t);
              m_18 = t;
              t = (ATerm) ATinsert(CheckATermList(m_18), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, y_16, z_16))));
            }
        }
      return(t);
    }
    t = n_18(t);
    s_15 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_h_11), (ATerm) ATinsert(ATempty, s_15));
  }
  return(t);
}
ATerm R_2_0 (ATerm r_77 (ATerm), ATerm s_77 (ATerm), ATerm t)
{
  ATerm t_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  z_18 = t;
  if(match_cons(t, sym_R_2))
    {
      v_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_18);
  t_18 = t;
  t = v_18;
  t = r_77(t);
  x_18 = t;
  t = w_18;
  t = s_77(t);
  y_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, x_18, y_18), t_18);
  return(t);
}
ATerm q_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm r_2 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm s_2 (ATerm t)
{
  ATerm e_15 = t;
  if((PushChoice() == 0))
    {
      t = R_2_0(_id, t_2, t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_15;
    }
  return(t);
}
ATerm t_2 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm s_4 = NULL;
  s_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_4, (ATerm) ATempty);
  {
    ATerm i_20 (ATerm t)
    {
      ATerm i_19 = NULL,j_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL;
      if(match_cons(t, sym__2))
        {
          l_19 = ATgetArgument(t, 0);
          o_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = l_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm t_19 = NULL;
          t = o_19;
          t = reverse_acc_2_0(_id, q_2, t);
          t_19 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, t_19));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              m_19 = ATgetFirst((ATermList) t);
              n_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_19;
          if(match_cons(t, sym_R_2))
            {
              i_19 = ATgetArgument(t, 0);
              j_19 = ATgetArgument(t, 1);
              {
                ATerm f_15 = t;
                int h_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_19 = NULL,z_19 = NULL;
                    t = o_19;
                    t = reverse_acc_2_0(_id, r_2, t);
                    y_19 = t;
                    t = (ATerm) ATmakeAppl(sym__2, n_19, (ATerm) ATempty);
                    t = i_20(t);
                    z_19 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(z_19), (ATerm) ATmakeAppl(sym_R_2, i_19, j_19)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, y_19));
                    ;
                    LocalPopChoice(h_15);
                  }
                else
                  {
                    t = f_15;
                    t = (ATerm) ATmakeAppl(sym__2, n_19, (ATerm) ATinsert(CheckATermList(o_19), m_19));
                    t = i_20(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, n_19, (ATerm) ATinsert(CheckATermList(o_19), m_19));
              t = i_20(t);
            }
        }
      return(t);
    }
    t = i_20(t);
    t = filter_1_0(s_2, t);
  }
  return(t);
}
ATerm x_2 (ATerm t)
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
ATerm y_2 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_j_15);
  return(t);
}
ATerm z_2 (ATerm t)
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
ATerm b_3 (ATerm t)
{
  ATerm m_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_15;
    }
  return(t);
}
ATerm c_3 (ATerm t)
{
  t = tov_1_0(f_3, t);
  return(t);
}
ATerm f_3 (ATerm t)
{
  t = term_n_11;
  return(t);
}
ATerm m_3 (ATerm t)
{
  ATerm p_15 = t;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_15;
    }
  return(t);
}
ATerm o_3 (ATerm t)
{
  ATerm h_22 = NULL;
  if(match_cons(t, sym_S_1))
    {
      h_22 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_22;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,j_21 = NULL,k_21 = NULL;
  j_21 = t;
  if(match_cons(t, sym_REF_2))
    {
      k_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, k_21, h_21);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          k_21 = ATgetArgument(t, 0);
          h_21 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, h_21), (ATerm) ATmakeAppl(sym_ANCHOR_1, k_21));
        }
      else
        {
          ATerm y_15 = t;
          int z_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm a_16 = ATgetArgument(t, 0);
                  ATerm b_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(z_15);
              t = term_c_16;
            }
          else
            {
              t = y_15;
              {
                ATerm d_16 = t;
                int h_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm i_16 = ATgetArgument(t, 0);
                        ATerm n_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(h_16);
                    t = term_c_16;
                  }
                else
                  {
                    t = d_16;
                    {
                      ATerm o_16 = t;
                      int p_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              k_21 = ATgetArgument(t, 0);
                              {
                                ATerm q_16 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(p_16);
                          t = k_21;
                        }
                      else
                        {
                          t = o_16;
                          if(match_cons(t, sym_A_3))
                            {
                              k_21 = ATgetArgument(t, 0);
                              h_21 = ATgetArgument(t, 1);
                              g_21 = ATgetArgument(t, 2);
                              {
                                ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
                                t = g_21;
                                t = construct_rows_0_0(t);
                                u_21 = t;
                                t = h_21;
                                t = Vspace_0_0(t);
                                v_21 = t;
                                t = u_21;
                                {
                                  ATerm u_2 (ATerm t)
                                  {
                                    ATerm v_2 (ATerm t)
                                    {
                                      t = k_21;
                                      return(t);
                                    }
                                    t = toa_1_0(v_2, t);
                                    return(t);
                                  }
                                  t = map_1_0(u_2, t);
                                  {
                                    ATerm w_2 (ATerm t)
                                    {
                                      t = v_21;
                                      return(t);
                                    }
                                    t = separate_by_1_0(w_2, t);
                                    w_21 = t;
                                    t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, w_21)))));
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  k_21 = ATgetArgument(t, 0);
                                  h_21 = ATgetArgument(t, 1);
                                  {
                                    ATerm s_5 = NULL;
                                    t = k_21;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm r_16 = t;
                                      int s_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = h_21;
                                          t = filter_1_0(x_2, t);
                                          ;
                                          LocalPopChoice(s_16);
                                        }
                                      else
                                        {
                                          t = r_16;
                                          {
                                            ATerm w_5 = NULL;
                                            t = at_last_1_0(y_2, t);
                                            s_5 = t;
                                            t = h_21;
                                            t = filter_1_0(z_2, t);
                                            {
                                              ATerm a_3 (ATerm t)
                                              {
                                                t = s_5;
                                                return(t);
                                              }
                                              t = separate_by_1_0(a_3, t);
                                              w_5 = t;
                                              t = (ATerm) ATinsert(ATinsert(ATempty, w_5), term_t_16);
                                            }
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      k_21 = ATgetArgument(t, 0);
                                      h_21 = ATgetArgument(t, 1);
                                      {
                                        ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
                                        t = k_21;
                                        t = Vspace_0_0(t);
                                        z_21 = t;
                                        t = k_21;
                                        t = Ispace_0_0(t);
                                        a_22 = t;
                                        t = h_21;
                                        t = filter_1_0(b_3, t);
                                        {
                                          ATerm d_3 (ATerm t)
                                          {
                                            ATerm h_3 (ATerm t)
                                            {
                                              ATerm j_3 (ATerm t)
                                              {
                                                t = a_22;
                                                return(t);
                                              }
                                              t = tov_1_0(j_3, t);
                                              return(t);
                                            }
                                            t = map_1_0(h_3, t);
                                            return(t);
                                          }
                                          t = Cons_2_0(c_3, d_3, t);
                                          {
                                            ATerm l_3 (ATerm t)
                                            {
                                              t = z_21;
                                              return(t);
                                            }
                                            t = separate_by_1_0(l_3, t);
                                            b_22 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, b_22)), term_t_16);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          k_21 = ATgetArgument(t, 0);
                                          h_21 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_22 = NULL;
                                            t = k_21;
                                            t = Hspace_0_0(t);
                                            e_22 = t;
                                            t = h_21;
                                            t = filter_1_0(m_3, t);
                                            {
                                              ATerm n_3 (ATerm t)
                                              {
                                                t = e_22;
                                                return(t);
                                              }
                                              t = sep_by_1_0(n_3, t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              k_21 = ATgetArgument(t, 0);
                                              h_21 = ATgetArgument(t, 1);
                                              t = k_21;
                                              {
                                                ATerm w_16 = t;
                                                int x_16 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(!(match_cons(t, sym_KW_0)))
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_c_17), (ATerm) ATinsert(ATempty, h_21));
                                                    ;
                                                    LocalPopChoice(x_16);
                                                  }
                                                else
                                                  {
                                                    t = w_16;
                                                    {
                                                      ATerm j_17 = t;
                                                      int k_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_VAR_0)))
                                                            _fail(t);
                                                          t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_l_17), (ATerm) ATinsert(ATempty, h_21));
                                                          ;
                                                          LocalPopChoice(k_17);
                                                        }
                                                      else
                                                        {
                                                          t = j_17;
                                                          {
                                                            ATerm m_17 = t;
                                                            int n_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(!(match_cons(t, sym_NUM_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_o_17), (ATerm) ATinsert(ATempty, h_21));
                                                                ;
                                                                LocalPopChoice(n_17);
                                                              }
                                                            else
                                                              {
                                                                t = m_17;
                                                                {
                                                                  ATerm p_17 = t;
                                                                  int q_17 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(!(match_cons(t, sym_MATH_0)))
                                                                        _fail(t);
                                                                      t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_r_17), (ATerm) ATinsert(ATempty, h_21));
                                                                      ;
                                                                      LocalPopChoice(q_17);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = p_17;
                                                                      t = h_21;
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
                                                  k_21 = ATgetArgument(t, 0);
                                                  h_21 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm g_22 = NULL;
                                                    t = k_21;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = h_21;
                                                    t = map_1_0(o_3, t);
                                                    g_22 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_s_17), (ATerm) ATinsert(ATempty, g_22)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      k_21 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = k_21;
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
ATerm topdown_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  t = q_80(t);
  {
    ATerm p_3 (ATerm t)
    {
      t = topdown_1_0(q_80, t);
      return(t);
    }
    t = SRTS_all(p_3, t);
  }
  return(t);
}
ATerm q_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm at_last_1_0 (ATerm j_87 (ATerm), ATerm t)
{
  ATerm l_22 (ATerm t)
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, q_3, t);
        t = j_87(t);
        ;
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        t = Cons_2_0(_id, l_22, t);
      }
    return(t);
  }
  t = l_22(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm c_87 (ATerm), ATerm t)
{
  ATerm m_22 (ATerm t)
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_87(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = Cons_2_0(_id, m_22, t);
      }
    return(t);
  }
  t = m_22(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm v_86 (ATerm), ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL;
  ATerm r_3 (ATerm t)
  {
    t = Cons_2_0(v_86, _id, t);
    {
      ATerm s_3 (ATerm t)
      {
        if(((n_22 != NULL) && (n_22 != t)))
          _fail(t);
        else
          n_22 = t;
        return(t);
      }
      t = Cons_2_0(_id, s_3, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(r_3, t);
  o_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_22, not_null(n_22));
  return(t);
}
ATerm w_3 (ATerm t)
{
  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
    _fail(t);
  return(t);
}
ATerm Distribute_0_0 (ATerm t)
{
  ATerm q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL;
  if(match_cons(t, sym_H_2))
    {
      q_22 = ATgetArgument(t, 0);
      r_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = r_22;
  {
    ATerm t_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((s_22 != NULL) && (s_22 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            s_22 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
            if(((ATgetType(y_17) == AT_LIST) && !(ATisEmpty(y_17))))
              {
                if(((t_22 != NULL) && (t_22 != ATgetFirst((ATermList) y_17))))
                  _fail(ATgetFirst((ATermList) y_17));
                else
                  t_22 = ATgetFirst((ATermList) y_17);
                if(((u_22 != NULL) && (u_22 != (ATerm) ATgetNext((ATermList) y_17))))
                  _fail((ATerm) ATgetNext((ATermList) y_17));
                else
                  u_22 = (ATerm) ATgetNext((ATermList) y_17);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(t_3, t);
    if(match_cons(t, sym__2))
      {
        v_22 = ATgetArgument(t, 0);
        w_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = w_22;
    {
      ATerm z_17 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = z_17;
        }
      t = (ATerm) ATinsert(CheckATermList(not_null(u_22)), not_null(t_22));
      {
        ATerm u_3 (ATerm t)
        {
          ATerm v_3 (ATerm t)
          {
            if(((x_22 != NULL) && (x_22 != t)))
              _fail(t);
            else
              x_22 = t;
            return(t);
          }
          t = Cons_2_0(v_3, w_3, t);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, q_22, (ATerm) ATinsert(CheckATermList(w_22), not_null(x_22))));
          return(t);
        }
        t = at_last_1_0(u_3, t);
        y_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, v_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(s_22), y_22)));
        {
          ATerm a_18 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym__2))
                {
                  ATerm d_18 = ATgetArgument(t, 0);
                  ATerm e_18 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = v_22;
              {
                ATerm x_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(s_22), y_22));
                  return(t);
                }
                t = at_end_1_0(x_3, t);
              }
              ;
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
              {
                ATerm x_6 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, v_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(s_22), y_22))));
                if(match_cons(t, sym__2))
                  {
                    ATerm f_18 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    x_6 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = x_6;
                t = concat_0_0(t);
              }
            }
          z_22 = t;
          t = (ATerm) ATmakeAppl(sym_H_2, q_22, z_22);
        }
      }
    }
  }
  return(t);
}
ATerm y_3 (ATerm t)
{
  ATerm g_18 = t;
  int h_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_18 = t;
      int j_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
          ATerm k_18 = t;
          int l_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_H_2))
                {
                  ATerm o_18 = ATgetArgument(t, 0);
                  k_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(l_18);
              t = k_23;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_23 = ATgetFirst((ATermList) t);
                  m_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_23;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_23;
            }
          else
            {
              t = k_18;
              if(match_cons(t, sym_V_2))
                {
                  ATerm p_18 = ATgetArgument(t, 0);
                  k_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = k_23;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_23 = ATgetFirst((ATermList) t);
                  m_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = m_23;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = l_23;
            }
          ;
          LocalPopChoice(j_18);
        }
      else
        {
          t = i_18;
          t = Distribute_0_0(t);
        }
      ;
      LocalPopChoice(h_18);
    }
  else
    {
      t = g_18;
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(y_3, t);
  return(t);
}
ATerm z_3 (ATerm t)
{
  ATerm s_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Abox2html_0_0(t);
      ;
      LocalPopChoice(u_18);
    }
  else
    {
      t = s_18;
    }
  return(t);
}
ATerm a_4 (ATerm t)
{
  ATerm a_19 = t;
  int b_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Html2text_0_0(t);
      ;
      LocalPopChoice(b_19);
    }
  else
    {
      t = a_19;
    }
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm p_23 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(z_3, t);
  p_23 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, p_23)))));
  t = bottomup_1_0(a_4, t);
  return(t);
}
ATerm e_24 (ATerm y_23, ATerm t)
{
  t = SSL_fclose(y_23);
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm b_24 = NULL,c_24 = NULL;
  c_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      b_24 = ATgetArgument(t, 0);
      {
        ATerm c_19 = t;
        int d_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(b_24);
            ;
            LocalPopChoice(d_19);
          }
        else
          {
            t = c_19;
            t = e_24(c_24, t);
          }
      }
    }
  else
    {
      t = e_24(c_24, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm f_24 = NULL;
  t = SSL_stdin_stream();
  f_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, f_24);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm g_24 = NULL;
  t = SSL_stdout_stream();
  g_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, g_24);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm h_24 = NULL;
  t = SSL_stderr_stream();
  h_24 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, h_24);
  return(t);
}
ATerm b_4 (ATerm t)
{
  ATerm p_24 = NULL;
  if(match_cons(t, sym_Path_1))
    {
      p_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = p_24;
  return(t);
}
ATerm c_4 (ATerm t)
{
  ATerm t_24 = NULL;
  t_24 = t;
  t = SSL_is_string(t_24);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm e_19 = ATgetArgument(t, 0);
      ATerm f_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm g_19 = t;
    int h_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_7 = NULL,o_7 = NULL;
        n_7 = t;
        t = SSL_explode_term(n_7);
        if(match_cons(t, sym__2))
          {
            ATerm k_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm p_19 = ATgetArgument(t, 1);
              if(((ATgetType(p_19) == AT_LIST) && !(ATisEmpty(p_19))))
                {
                  o_7 = ATgetFirst((ATermList) p_19);
                  {
                    ATerm q_19 = (ATerm) ATgetNext((ATermList) p_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_7;
        if(match_cons(t, sym_stderr_0))
          {
            t = o_7;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = o_7;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = o_7;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(h_19);
      }
    else
      {
        t = g_19;
        {
          ATerm r_19 = t;
          int s_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm m_24 = NULL,n_24 = NULL,o_24 = NULL;
              t = _2_0(b_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  m_24 = ATgetArgument(t, 0);
                  n_24 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(m_24, n_24);
              o_24 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, o_24);
              ;
              LocalPopChoice(s_19);
            }
          else
            {
              t = r_19;
              {
                ATerm q_24 = NULL,r_24 = NULL,s_24 = NULL;
                t = _2_0(c_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    q_24 = ATgetArgument(t, 0);
                    r_24 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(q_24, r_24);
                s_24 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, s_24);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm u_24 = NULL,v_24 = NULL,w_24 = NULL;
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_24 = NULL;
      x_24 = t;
      t = (ATerm) ATmakeAppl(sym__2, x_24, term_w_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm p_7 = NULL;
        p_7 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, p_7), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = p_7;
        _fail(t);
      }
    }
  u_24 = t;
  if(match_cons(t, sym_Stream_1))
    {
      w_24 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(w_24);
  v_24 = t;
  t = u_24;
  t = fclose_0_0(t);
  t = v_24;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm e_25 = NULL,f_25 = NULL;
  e_25 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = term_x_19;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          f_25 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(f_25, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm v_25 = NULL,w_25 = NULL;
  v_25 = t;
  if(match_cons(t, sym_FILE_1))
    {
      w_25 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_8 = NULL;
        t = v_25;
        t = k_0(t);
        m_8 = t;
        {
          ATerm c_20 = t;
          int d_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(d_20);
            }
          else
            {
              t = c_20;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(w_25, m_8);
          t = (ATerm) ATmakeAppl(sym_FILE_1, w_25);
        }
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        {
          ATerm e_20 = t;
          int f_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_8 = NULL;
              t = v_25;
              t = k_0(t);
              w_8 = t;
              {
                ATerm g_20 = t;
                if((PushChoice() == 0))
                  {
                    ATerm h_20 = t;
                    int j_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(j_20);
                      }
                    else
                      {
                        t = h_20;
                        {
                          ATerm k_20 = t;
                          int l_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(l_20);
                            }
                          else
                            {
                              t = k_20;
                              {
                                ATerm x_8 = NULL;
                                x_8 = t;
                                if((w_25 != t))
                                  {
                                    _fail(t);
                                  }
                                t = x_8;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = g_20;
                  }
                t = SSL_copy(w_25, w_8);
                t = (ATerm) ATmakeAppl(sym_FILE_1, w_25);
              }
              ;
              LocalPopChoice(f_20);
            }
          else
            {
              t = e_20;
              t = v_25;
              t = k_0(t);
              if((w_25 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, w_25);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  if(match_cons(t, sym__2))
    {
      c_26 = ATgetArgument(t, 0);
      d_26 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
  {
    ATerm m_20 = t;
    int n_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_9 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm o_20 = ATgetArgument(t, 0);
            ATerm p_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_26, d_26);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm r_20 = ATgetFirst((ATermList) t);
            b_9 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = b_9;
        ;
        LocalPopChoice(n_20);
      }
    else
      {
        t = m_20;
        t = (ATerm) ATempty;
      }
    e_26 = t;
    t = SSL_table_put(c_26, d_26, e_26);
    t = (ATerm) ATmakeAppl(sym__2, c_26, d_26);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  ATerm m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
  m_26 = t;
  t = b_97(t);
  n_26 = t;
  {
    ATerm s_20 = t;
    int t_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(t_20);
      }
    else
      {
        t = s_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        p_26 = ATgetFirst((ATermList) t);
        o_26 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_26, (ATerm)ATmakeAppl(sym_Scopes_0), o_26);
    t = p_26;
    {
      ATerm d_4 (ATerm t)
      {
        ATerm q_26 = NULL;
        q_26 = t;
        t = (ATerm) ATmakeAppl(sym__2, n_26, q_26);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(d_4, t);
      t = m_26;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm l_79 (ATerm), ATerm m_79 (ATerm), ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_79(t);
      t = m_79(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      t = m_79(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm a_97 (ATerm), ATerm t)
{
  ATerm w_26 = NULL,x_26 = NULL,r_27 = NULL;
  w_26 = t;
  t = a_97(t);
  x_26 = t;
  t = (ATerm) ATmakeAppl(sym__2, x_26, term_w_20);
  {
    ATerm x_20 = t;
    int y_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm z_20 = ATgetArgument(t, 0);
            ATerm a_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_26, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(y_20);
      }
    else
      {
        t = x_20;
        t = (ATerm) ATempty;
      }
    r_27 = t;
    t = SSL_table_put(x_26, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(r_27), (ATerm) ATempty));
    t = w_26;
  }
  return(t);
}
ATerm e_4 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm g_4 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_29 = NULL;
      o_29 = t;
      t = SSL_remove(o_29);
      ;
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
    }
  return(t);
}
ATerm i_4 (ATerm t)
{
  t = term_a_7;
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm j_108 (ATerm), ATerm t)
{
  ATerm p_28 = NULL;
  t = begin_scope_1_0(e_4, t);
  {
    ATerm f_4 (ATerm t)
    {
      ATerm q_28 = NULL;
      q_28 = t;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((p_28 != NULL) && (p_28 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              p_28 = ATgetFirst((ATermList) t);
            {
              ATerm f_21 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(p_28);
        t = map_1_0(g_4, t);
        t = q_28;
        t = end_scope_1_0(i_4, t);
      }
      return(t);
    }
    t = restore_always_2_0(j_108, f_4, t);
  }
  return(t);
}
ATerm k_4 (ATerm t)
{
  ATerm i_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
      {
        ATerm m_21 = t;
        int n_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_9 = NULL;
            t = eval_config_0_0(t);
            s_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), s_9);
            t = s_9;
            ;
            LocalPopChoice(n_21);
          }
        else
          {
            t = m_21;
          }
      }
      ;
      LocalPopChoice(l_21);
    }
  else
    {
      t = i_21;
      t = term_o_21;
    }
  return(t);
}
ATerm xtc_io_1_0 (ATerm k_108 (ATerm), ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_29 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm r_21 = t;
          int s_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_9 = NULL;
              t = eval_config_0_0(t);
              o_9 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), o_9);
              t = o_9;
              ;
              LocalPopChoice(s_21);
            }
          else
            {
              t = r_21;
            }
          q_29 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, q_29);
        }
        ;
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        t = term_x_19;
      }
    t = k_108(t);
    t = copy_to_1_0(k_4, t);
    return(t);
  }
  t = xtc_temp_files_1_0(j_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm r_29 = NULL,s_29 = NULL;
  r_29 = t;
  t = term_v_6;
  t = whoami_0_0(t);
  s_29 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), s_29), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = r_29;
  return(t);
}
ATerm l_4 (ATerm t)
{
  ATerm v_29 = NULL;
  v_29 = t;
  if(match_string(t, "-k"))
    {
      t = v_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
        _fail(t);
      t = v_29;
    }
  return(t);
}
ATerm m_4 (ATerm t)
{
  ATerm w_29 = NULL,x_29 = NULL;
  w_29 = t;
  t = SSL_string_to_int(w_29);
  x_29 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), x_29);
  t = w_29;
  return(t);
}
ATerm n_4 (ATerm t)
{
  t = term_t_21;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(l_4, m_4, n_4, t);
  return(t);
}
ATerm o_4 (ATerm t)
{
  ATerm z_29 = NULL;
  z_29 = t;
  if(match_string(t, "-S"))
    {
      t = z_29;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
        _fail(t);
      t = z_29;
    }
  return(t);
}
ATerm p_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
  t = term_x_21;
  return(t);
}
ATerm q_4 (ATerm t)
{
  t = term_y_21;
  return(t);
}
ATerm r_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_4 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  t = SSL_string_to_int(a_30);
  b_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), b_30);
  t = (ATerm) ATmakeAppl(sym_Verbose_1, a_30);
  return(t);
}
ATerm u_4 (ATerm t)
{
  t = term_c_22;
  return(t);
}
ATerm v_4 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm w_4 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_d_22;
  return(t);
}
ATerm x_4 (ATerm t)
{
  t = term_f_22;
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(o_4, p_4, q_4, t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm k_22 = t;
        int p_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ArgOption_3_0(r_4, t_4, u_4, t);
            ;
            LocalPopChoice(p_22);
          }
        else
          {
            t = k_22;
            t = Option_3_0(v_4, w_4, x_4, t);
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm e_30 = NULL,f_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm g_30 = NULL;
      t = term_v_6;
      t = d_0(t);
      g_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_23, term_b_23, g_30);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm j_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          e_30 = ATgetFirst((ATermList) t);
          f_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = e_30;
      t = a_0(t);
      t = term_v_6;
      t = b_0(t);
      j_30 = t;
      t = (ATerm) ATinsert(CheckATermList(f_30), j_30);
    }
  return(t);
}
ATerm y_4 (ATerm t)
{
  ATerm l_30 = NULL;
  l_30 = t;
  if(match_string(t, "-o"))
    {
      t = l_30;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
        _fail(t);
      t = l_30;
    }
  return(t);
}
ATerm z_4 (ATerm t)
{
  ATerm m_30 = NULL;
  m_30 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), m_30);
  t = (ATerm) ATmakeAppl(sym_Output_1, m_30);
  return(t);
}
ATerm a_5 (ATerm t)
{
  t = term_c_23;
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(y_4, z_4, a_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL,s_30 = NULL;
  if(match_cons(t, sym__3))
    {
      p_30 = ATgetArgument(t, 0);
      q_30 = ATgetArgument(t, 1);
      r_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, p_30, q_30);
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm f_23 = ATgetArgument(t, 0);
            ATerm g_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(p_30, q_30);
        ;
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        t = (ATerm) ATempty;
      }
    s_30 = t;
    t = SSL_table_put(p_30, q_30, (ATerm) ATinsert(CheckATermList(s_30), r_30));
    t = (ATerm) ATmakeAppl(sym__3, p_30, q_30, r_30);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm j_31 = NULL;
      t = term_v_6;
      t = j_0(t);
      j_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_a_23, term_b_23, j_31);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm o_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          f_31 = ATgetFirst((ATermList) t);
          g_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = g_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          h_31 = ATgetFirst((ATermList) t);
          i_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = f_31;
      t = h_0(t);
      t = h_31;
      t = i_0(t);
      o_31 = t;
      t = (ATerm) ATinsert(CheckATermList(i_31), o_31);
    }
  return(t);
}
ATerm b_5 (ATerm t)
{
  ATerm q_31 = NULL;
  q_31 = t;
  if(match_string(t, "-i"))
    {
      t = q_31;
    }
  else
    {
      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
        _fail(t);
      t = q_31;
    }
  return(t);
}
ATerm c_5 (ATerm t)
{
  ATerm t_31 = NULL;
  t_31 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), t_31);
  t = (ATerm) ATmakeAppl(sym_Input_1, t_31);
  return(t);
}
ATerm d_5 (ATerm t)
{
  t = term_h_23;
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  t = ArgOption_3_0(b_5, c_5, d_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_v_6;
  t = whoami_0_0(t);
  u_31 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), u_31));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm i_23 = t;
    int j_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm d_10 = NULL;
        t = eval_config_0_0(t);
        d_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), d_10);
        t = d_10;
        ;
        LocalPopChoice(j_23);
      }
    else
      {
        t = i_23;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm j_92 (ATerm), ATerm k_92 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = j_92(t);
      ;
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      {
        ATerm x_31 = NULL,y_31 = NULL,b_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            x_31 = ATgetFirst((ATermList) t);
            y_31 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_31;
        t = foldr_2_0(j_92, k_92, t);
        b_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_31, b_32);
        t = k_92(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm e_5 (ATerm t)
{
  t = term_k_11;
  return(t);
}
ATerm f_5 (ATerm t)
{
  ATerm k_10 = NULL,l_10 = NULL;
  if(match_cons(t, sym__2))
    {
      k_10 = ATgetArgument(t, 0);
      l_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_addi(k_10, l_10);
        ;
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = SSL_addr(k_10, l_10);
      }
  }
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_32 = NULL,e_10 = NULL,h_10 = NULL;
  t = times_0_0(t);
  e_10 = t;
  t = SSL_explode_term(e_10);
  if(match_cons(t, sym__2))
    {
      ATerm s_23 = ATgetArgument(t, 0);
      h_10 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_10;
  t = foldr_2_0(e_5, f_5, t);
  e_32 = t;
  t = SSL_TicksToSeconds(e_32);
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm p_32 = NULL,q_32 = NULL,r_32 = NULL;
  p_32 = t;
  if(match_cons(t, sym__2))
    {
      q_32 = ATgetArgument(t, 0);
      r_32 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_32;
        if((q_32 != t))
          {
            _fail(t);
          }
        t = p_32;
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        t = p_32;
        {
          ATerm v_23 = t;
          int w_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_32, r_32);
              ;
              LocalPopChoice(w_23);
            }
          else
            {
              t = v_23;
              t = SSL_gtr(q_32, r_32);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm h_100 (ATerm), ATerm t)
{
  ATerm x_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_32 = NULL,w_32 = NULL;
      u_32 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm a_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_12 = NULL;
            t = eval_config_0_0(t);
            j_12 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_12);
            t = j_12;
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = a_24;
          }
        w_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_32, term_o_10);
        t = geq_0_0(t);
        t = u_32;
        t = h_100(t);
      }
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = x_23;
    }
  return(t);
}
ATerm g_5 (ATerm t)
{
  ATerm y_32 = NULL,z_32 = NULL;
  t = run_time_0_0(t);
  y_32 = t;
  t = term_v_6;
  t = whoami_0_0(t);
  z_32 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_32), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_32));
  t = (ATerm) ATmakeAppl(sym__2, term_i_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_24), y_32), term_j_24), z_32));
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  t = if_verbose1_1_0(g_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm h_5 (ATerm t)
{
  ATerm l_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(!(match_cons(t, sym_Help_0)))
        _fail(t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = l_24;
      {
        ATerm z_24 = t;
        int b_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Undefined_1_0(_id, t);
            ;
            LocalPopChoice(b_25);
          }
        else
          {
            t = z_24;
            if(!(match_cons(t, sym_Version_0)))
              _fail(t);
          }
      }
    }
  return(t);
}
ATerm need_help_1_0 (ATerm x_102 (ATerm), ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_14 = NULL;
            t = eval_config_0_0(t);
            u_14 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), u_14);
            t = u_14;
            ;
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
          }
      }
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      t = fetch_1_0(h_5, t);
    }
  t = x_102(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      b_33 = ATgetFirst((ATermList) t);
      c_33 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm g_33 = NULL,h_33 = NULL;
        t = c_33;
        t = g_0(t);
        g_33 = t;
        t = b_33;
        t = f_0(t);
        h_33 = t;
        t = c_33;
        {
          ATerm i_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_33), h_33);
            return(t);
          }
          t = reverse_acc_2_0(f_0, i_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_v_6;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm h_76 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL;
  l_33 = t;
  if(match_cons(t, sym_Program_1))
    {
      j_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_33);
  i_33 = t;
  t = j_33;
  t = h_76(t);
  k_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, k_33), i_33);
  return(t);
}
ATerm j_5 (ATerm t)
{
  t = Program_1_0(_id, t);
  return(t);
}
ATerm k_5 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
ATerm l_5 (ATerm t)
{
  ATerm o_33 = NULL;
  o_33 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, o_33), term_i_25);
  t = echo_0_0(t);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_15 = NULL;
            t = eval_config_0_0(t);
            g_15 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), g_15);
            t = g_15;
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
          }
      }
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      t = fetch_1_0(j_5, t);
    }
  t = term_n_25;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_acc_2_0(_id, k_5, t);
  t = map_1_0(l_5, t);
  return(t);
}
ATerm Undefined_1_0 (ATerm i_76 (ATerm), ATerm t)
{
  ATerm p_33 = NULL,q_33 = NULL,r_33 = NULL,s_33 = NULL;
  s_33 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      q_33 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_33);
  p_33 = t;
  t = q_33;
  t = i_76(t);
  r_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_33), p_33);
  return(t);
}
ATerm fetch_1_0 (ATerm s_86 (ATerm), ATerm t)
{
  ATerm v_33 (ATerm t)
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(s_86, _id, t);
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = Cons_2_0(_id, v_33, t);
      }
    return(t);
  }
  t = v_33(t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm x_33 = NULL,y_33 = NULL;
  x_33 = t;
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = x_33;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm s_25 = ATgetFirst((ATermList) t);
                ATerm t_25 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_33;
          }
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        t = (ATerm) ATinsert(ATempty, x_33);
      }
    y_33 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), y_33);
    t = x_33;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
  {
    ATerm u_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_15 = NULL;
        t = eval_config_0_0(t);
        k_15 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), k_15);
        t = k_15;
        ;
        LocalPopChoice(x_25);
      }
    else
      {
        t = u_25;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm e_34 = NULL,f_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            e_34 = ATgetFirst((ATermList) t);
            f_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = e_34;
        {
          ATerm m_5 (ATerm t)
          {
            t = f_34;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(m_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm y_86 (ATerm), ATerm t)
{
  ATerm l_34 (ATerm t)
  {
    ATerm a_26 = t;
    int f_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, l_34, t);
        ;
        LocalPopChoice(f_26);
      }
    else
      {
        t = a_26;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = y_86(t);
      }
    return(t);
  }
  t = l_34(t);
  return(t);
}
ATerm _2_0 (ATerm n_65 (ATerm), ATerm o_65 (ATerm), ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
  r_34 = t;
  if(match_cons(t, sym__2))
    {
      n_34 = ATgetArgument(t, 0);
      o_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(r_34);
  m_34 = t;
  t = n_34;
  t = n_65(t);
  p_34 = t;
  t = o_34;
  t = o_65(t);
  q_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, p_34, q_34), m_34);
  return(t);
}
ATerm n_5 (ATerm t)
{
  ATerm w_34 = NULL;
  w_34 = t;
  t = SSL_explode_string(w_34);
  return(t);
}
ATerm o_5 (ATerm t)
{
  ATerm x_34 = NULL;
  x_34 = t;
  t = SSL_explode_string(x_34);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm v_34 = NULL;
  t = _2_0(n_5, o_5, t);
  {
    ATerm g_26 = t;
    int h_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_34 = NULL,a_35 = NULL;
        if(match_cons(t, sym__2))
          {
            z_34 = ATgetArgument(t, 0);
            a_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = z_34;
        {
          ATerm p_5 (ATerm t)
          {
            t = a_35;
            return(t);
          }
          t = at_end_1_0(p_5, t);
        }
        ;
        LocalPopChoice(h_26);
      }
    else
      {
        t = g_26;
        {
          ATerm n_15 = NULL,o_15 = NULL;
          n_15 = t;
          t = SSL_explode_term(n_15);
          if(match_cons(t, sym__2))
            {
              ATerm i_26 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_26) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              o_15 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = o_15;
          t = concat_0_0(t);
        }
      }
    v_34 = t;
    t = SSL_implode_string(v_34);
  }
  return(t);
}
ATerm map_1_0 (ATerm h_86 (ATerm), ATerm t)
{
  ATerm f_35 (ATerm t)
  {
    ATerm j_26 = t;
    int k_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_26);
      }
    else
      {
        t = j_26;
        t = Cons_2_0(h_86, f_35, t);
      }
    return(t);
  }
  t = f_35(t);
  return(t);
}
ATerm q_5 (ATerm t)
{
  ATerm l_26 = t;
  int r_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = eval_config_0_0(t);
      ;
      LocalPopChoice(r_26);
    }
  else
    {
      t = l_26;
    }
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm s_26 = t;
  int t_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_35 = NULL;
      l_35 = t;
      t = SSL_is_string(l_35);
      ;
      LocalPopChoice(t_26);
    }
  else
    {
      t = s_26;
      {
        ATerm u_26 = t;
        int v_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = map_1_0(q_5, t);
            ;
            LocalPopChoice(v_26);
          }
        else
          {
            t = u_26;
            {
              ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL;
              p_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  q_35 = ATgetArgument(t, 0);
                  t = q_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      q_35 = ATgetArgument(t, 0);
                      t = q_35;
                      {
                        ATerm y_26 = t;
                        int z_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_35);
                            {
                              ATerm a_27 = t;
                              int b_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm q_20 = NULL;
                                  t = eval_config_0_0(t);
                                  q_20 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), q_35, q_20);
                                  t = q_20;
                                  ;
                                  LocalPopChoice(b_27);
                                }
                              else
                                {
                                  t = a_27;
                                }
                            }
                            ;
                            LocalPopChoice(z_26);
                          }
                        else
                          {
                            t = y_26;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, q_35), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = q_35;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm v_35 = NULL,w_35 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          q_35 = ATgetArgument(t, 0);
                          r_35 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = q_35;
                      t = eval_config_0_0(t);
                      v_35 = t;
                      t = r_35;
                      t = eval_config_0_0(t);
                      w_35 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_35, w_35);
                      t = conc_strings_0_0(t);
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
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm t_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_e_27;
  return(t);
}
ATerm u_5 (ATerm t)
{
  t = term_f_27;
  return(t);
}
ATerm v_5 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm x_5 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_g_27;
  return(t);
}
ATerm y_5 (ATerm t)
{
  t = term_h_27;
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_27 = t;
  int j_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Option_3_0(r_5, t_5, u_5, t);
      ;
      LocalPopChoice(j_27);
    }
  else
    {
      t = i_27;
      t = Option_3_0(v_5, x_5, y_5, t);
    }
  return(t);
}
ATerm Cons_2_0 (ATerm c_70 (ATerm), ATerm d_70 (ATerm), ATerm t)
{
  ATerm b_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL,f_36 = NULL,g_36 = NULL;
  g_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      c_36 = ATgetFirst((ATermList) t);
      d_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(g_36);
  b_36 = t;
  t = c_36;
  t = c_70(t);
  e_36 = t;
  t = d_36;
  t = d_70(t);
  f_36 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(f_36), e_36), b_36);
  return(t);
}
ATerm z_5 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), l_36);
  t = (ATerm) ATmakeAppl(sym_Program_1, l_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm a_105 (ATerm), ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_m_27;
        t = a_105(t);
        ;
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
      }
    t = k_36;
    {
      ATerm a_6 (ATerm t)
      {
        ATerm n_27 = t;
        int o_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_27 = t;
            int q_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(q_27);
              }
            else
              {
                t = p_27;
                t = a_105(t);
                t = Cons_2_0(_id, a_6, t);
              }
            ;
            LocalPopChoice(o_27);
          }
        else
          {
            t = n_27;
            {
              ATerm n_36 = NULL,o_36 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_36 = ATgetFirst((ATermList) t);
                  o_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(o_36), (ATerm) ATmakeAppl(sym_Undefined_1, n_36));
            }
          }
        return(t);
      }
      t = Cons_2_0(z_5, a_6, t);
    }
  }
  return(t);
}
ATerm c_6 (ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  if(match_string(t, "--help"))
    {
      t = y_36;
    }
  else
    {
      if(match_string(t, "-h"))
        {
          t = y_36;
        }
      else
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
            _fail(t);
          t = y_36;
        }
    }
  return(t);
}
ATerm d_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_s_27;
  return(t);
}
ATerm e_6 (ATerm t)
{
  t = term_t_27;
  return(t);
}
ATerm f_6 (ATerm t)
{
  if(!(match_cons(t, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm parse_options_1_0 (ATerm z_104 (ATerm), ATerm t)
{
  ATerm v_36 = NULL,w_36 = NULL,x_36 = NULL;
  v_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = v_36;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm u_27 = t;
      int v_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_104(t);
          ;
          LocalPopChoice(v_27);
        }
      else
        {
          t = u_27;
          {
            ATerm w_27 = t;
            int x_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Option_3_0(c_6, d_6, e_6, t);
                ;
                LocalPopChoice(x_27);
              }
            else
              {
                t = w_27;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(b_6, t);
    {
      ATerm y_27 = t;
      int z_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_37 = NULL;
          d_37 = t;
          {
            ATerm a_28 = t;
            int b_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = d_37;
                {
                  ATerm c_28 = t;
                  int d_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm e_28 = t;
                        int f_28 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm a_25 = NULL;
                            t = eval_config_0_0(t);
                            a_25 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), a_25);
                            t = a_25;
                            ;
                            LocalPopChoice(f_28);
                          }
                        else
                          {
                            t = e_28;
                          }
                      }
                      ;
                      LocalPopChoice(d_28);
                    }
                  else
                    {
                      t = c_28;
                      t = fetch_1_0(f_6, t);
                    }
                  t = d_37;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(b_28);
              }
            else
              {
                t = a_28;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm g_28 = t;
                  int h_28 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm b_26 = NULL;
                      t = eval_config_0_0(t);
                      b_26 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), b_26);
                      t = b_26;
                      ;
                      LocalPopChoice(h_28);
                    }
                  else
                    {
                      t = g_28;
                    }
                  t = d_37;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(z_27);
        }
      else
        {
          t = y_27;
          {
            ATerm i_28 = t;
            int j_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_6 (ATerm t)
                {
                  ATerm h_6 (ATerm t)
                  {
                    if(((w_36 != NULL) && (w_36 != t)))
                      _fail(t);
                    else
                      w_36 = t;
                    return(t);
                  }
                  t = Undefined_1_0(h_6, t);
                  return(t);
                }
                t = fetch_1_0(g_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(w_36)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_i_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_36)), term_k_28));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(j_28);
              }
            else
              {
                t = i_28;
              }
          }
        }
      x_36 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = x_36;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm z_102 (ATerm), ATerm a_103 (ATerm), ATerm b_103 (ATerm), ATerm c_103 (ATerm), ATerm t)
{
  ATerm i_37 = NULL;
  t = parse_options_1_0(z_102, t);
  i_37 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), i_37);
  t = i_37;
  t = b_103(t);
  {
    ATerm l_28 = t;
    int m_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(a_103, t);
        ;
        LocalPopChoice(m_28);
      }
    else
      {
        t = l_28;
        {
          ATerm n_28 = t;
          int o_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = c_103(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(o_28);
            }
          else
            {
              t = n_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm i_6 (ATerm t)
{
  ATerm r_28 = t;
  int s_28 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(s_28);
    }
  else
    {
      t = r_28;
      {
        ATerm t_28 = t;
        int u_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = output_option_0_0(t);
            ;
            LocalPopChoice(u_28);
          }
        else
          {
            t = t_28;
            {
              ATerm v_28 = t;
              int w_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Option_3_0(k_6, l_6, m_6, t);
                  ;
                  LocalPopChoice(w_28);
                }
              else
                {
                  t = v_28;
                  {
                    ATerm x_28 = t;
                    int y_28 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = verbose_option_0_0(t);
                        ;
                        LocalPopChoice(y_28);
                      }
                    else
                      {
                        t = x_28;
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
ATerm j_6 (ATerm t)
{
  t = xtc_io_1_0(n_6, t);
  return(t);
}
ATerm k_6 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
    _fail(t);
  return(t);
}
ATerm l_6 (ATerm t)
{
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
  t = term_z_28;
  return(t);
}
ATerm m_6 (ATerm t)
{
  t = term_a_29;
  return(t);
}
ATerm n_6 (ATerm t)
{
  t = read_from_0_0(t);
  t = abox2html_0_0(t);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = option_wrap_4_0(i_6, default_usage_0_0, _id, j_6, t);
  return(t);
}

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
ATerm term_p_25;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_f_24;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_x_22;
ATerm term_g_22;
ATerm term_d_22;
ATerm term_b_22;
ATerm term_l_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_x_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_o_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_l_19;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_15;
ATerm term_y_15;
ATerm term_v_15;
ATerm term_s_15;
ATerm term_p_15;
ATerm term_i_15;
ATerm term_g_15;
ATerm term_a_14;
ATerm term_b_12;
ATerm term_z_11;
ATerm term_r_11;
ATerm term_a_11;
ATerm term_x_10;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_l_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_c_10;
ATerm term_u_9;
ATerm term_i_9;
ATerm term_c_9;
ATerm term_b_9;
ATerm term_n_8;
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
ATerm term_k_7;
ATerm term_j_7;
ATerm term_f_7;
void init_constant_terms (void)
{
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
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
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_l_10));
  term_l_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_10);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__3, term_k_24, term_l_24, term_n_7);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm assert_1_0 (ATerm i_90 (ATerm), ATerm);
ATerm obsolete_1_0 (ATerm u_91 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm Html2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm z_73 (ATerm), ATerm);
ATerm html2text_0_0 (ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm c_75 (ATerm), ATerm);
ATerm replace_quotes_0_0 (ATerm);
ATerm listtd_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm html_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm b_101 (ATerm), ATerm);
ATerm make_html_comment_0_0 (ATerm);
ATerm sep_by_1_0 (ATerm a_72 (ATerm), ATerm);
ATerm filter_1_0 (ATerm t_86 (ATerm), ATerm);
ATerm hs_length_0_0 (ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm f_93 (ATerm), ATerm);
ATerm dissuader_1_0 (ATerm v_91 (ATerm), ATerm);
ATerm separate_by_1_0 (ATerm l_79 (ATerm), ATerm);
ATerm LNAT_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm);
ATerm L_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm);
ATerm tov_1_0 (ATerm z_71 (ATerm), ATerm);
ATerm is_length_0_0 (ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm while_not_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm);
ATerm for_3_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm SOpt_2_0 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm e_101 (ATerm), ATerm);
ATerm vs_length_0_0 (ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm make_hs_0_0 (ATerm);
ATerm toa_1_0 (ATerm c_72 (ATerm), ATerm);
ATerm R_2_0 (ATerm z_70 (ATerm), ATerm a_71 (ATerm), ATerm);
ATerm split_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm Abox2html_0_0 (ATerm);
ATerm topdown_1_0 (ATerm y_73 (ATerm), ATerm);
ATerm at_last_1_0 (ATerm q_80 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm j_80 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm c_80 (ATerm), ATerm);
ATerm Distribute_0_0 (ATerm);
ATerm normalize_0_0 (ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm stdio_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm f_90 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm t_72 (ATerm), ATerm u_72 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm e_90 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm n_101 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm o_101 (ATerm), ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm general_options_0_0 (ATerm);
ATerm output_option_0_0 (ATerm);
ATerm aterm_output_option_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm io_options_0_0 (ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm);
ATerm crush_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm e_93 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm b_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm reverse_0_0 (ATerm);
ATerm Program_1_0 (ATerm p_69 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm q_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm z_79 (ATerm), ATerm);
ATerm option_defined_1_0 (ATerm b_97 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm conc_more_lists_0_0 (ATerm);
ATerm at_end_1_0 (ATerm f_80 (ATerm), ATerm);
ATerm conc_two_lists_0_0 (ATerm);
ATerm conc_0_0 (ATerm);
ATerm _2_0 (ATerm b_62 (ATerm), ATerm c_62 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm debug_1_0 (ATerm n_91 (ATerm), ATerm);
ATerm map_1_0 (ATerm p_79 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm get_config_0_0 (ATerm);
ATerm try_1_0 (ATerm e_72 (ATerm), ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm register_usage_1_0 (ATerm g_98 (ATerm), ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm system_usage_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm e_98 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm d_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm);
ATerm option_wrap_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm);
ATerm xtc_io_wrap_2_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm);
ATerm xtc_io_wrap_1_0 (ATerm r_101 (ATerm), ATerm);
ATerm io_Abox_2_html_0_0 (ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm assert_1_0 (ATerm i_90 (ATerm), ATerm t)
{
  ATerm k_1 = NULL,m_1 = NULL,n_1 = NULL,o_1 = NULL,p_1 = NULL;
  if(match_cons(t, sym__2))
    {
      k_1 = ATgetArgument(t, 0);
      m_1 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = i_90(t);
  n_1 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_1, k_1, m_1);
  t = table_push_0_0(t);
  {
    ATerm r_2 = t;
    int e_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_1, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(e_7);
      }
    else
      {
        t = r_2;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_1 = ATgetFirst((ATermList) t);
        p_1 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_1, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(p_1), (ATerm) ATinsert(CheckATermList(o_1), k_1)));
    t = (ATerm) ATmakeAppl(sym__2, k_1, m_1);
  }
  return(t);
}
ATerm obsolete_1_0 (ATerm u_91 (ATerm), ATerm t)
{
  ATerm q_1 = NULL;
  q_1 = t;
  t = u_91(t);
  {
    ATerm c_0 (ATerm t)
    {
      t = term_f_7;
      return(t);
    }
    t = debug_1_0(c_0, t);
    t = q_1;
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm g_2 (ATerm v_1, ATerm t)
  {
    t = v_1;
    {
      ATerm g_7 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm h_7 = ATgetArgument(t, 0);
              ATerm i_7 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = g_7;
        }
      {
        ATerm l_0 (ATerm t)
        {
          t = term_j_7;
          return(t);
        }
        t = obsolete_1_0(l_0, t);
        t = (ATerm) ATmakeAppl(sym__2, v_1, term_k_7);
        t = open_file_0_0(t);
      }
    }
    return(t);
  }
  ATerm m_2 (ATerm x_1, ATerm y_1, ATerm z_1, ATerm t)
  {
    t = SSL_open_file(x_1, y_1);
    return(t);
  }
  ATerm c_2 = NULL,d_2 = NULL,e_2 = NULL;
  c_2 = t;
  if(match_cons(t, sym__2))
    {
      d_2 = ATgetArgument(t, 0);
      e_2 = ATgetArgument(t, 1);
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_2(c_2, t);
            ;
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            t = m_2(d_2, e_2, c_2, t);
          }
      }
    }
  else
    {
      t = g_2(c_2, t);
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
  ATerm q_2 = NULL;
  t = term_n_7;
  t = new_0_0(t);
  q_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, q_2, term_o_7);
  t = conc_strings_0_0(t);
  {
    ATerm m_0 (ATerm t)
    {
      ATerm e_0 = NULL;
      e_0 = t;
      t = SSL_access(e_0, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = new_file_0_0(t);
      return(t);
    }
    t = try_1_0(m_0, t);
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm s_2 = NULL;
  t = new_file_0_0(t);
  s_2 = t;
  t = (ATerm) ATmakeAppl(sym__2, s_2, term_k_7);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, s_2, term_n_7);
  {
    ATerm n_0 (ATerm t)
    {
      t = term_p_7;
      return(t);
    }
    t = assert_1_0(n_0, t);
    t = s_2;
  }
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm t_2 = NULL,u_2 = NULL;
  t_2 = t;
  t = xtc_new_file_0_0(t);
  u_2 = t;
  t = t_2;
  {
    ATerm o_0 (ATerm t)
    {
      ATerm p_0 (ATerm t)
      {
        ATerm v_2 = NULL,w_2 = NULL;
        w_2 = t;
        t = SSL_is_string(w_2);
        v_2 = t;
        t = SSL_print(u_2, (ATerm) ATinsert(ATempty, v_2));
        t = v_2;
        return(t);
      }
      t = try_1_0(p_0, t);
      return(t);
    }
    t = topdown_1_0(o_0, t);
    t = SSL_close_file(u_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, u_2);
  }
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm b_3 = NULL,d_3 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      d_3 = ATgetArgument(t, 0);
      b_3 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_7), b_3), term_r_7), d_3), term_q_7);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          d_3 = ATgetArgument(t, 0);
          b_3 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_7), b_3), term_r_7), d_3), term_t_7);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              d_3 = ATgetArgument(t, 0);
              b_3 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_7), b_3), term_r_7), d_3), term_v_7);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  d_3 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_7), d_3), term_w_7);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      d_3 = ATgetArgument(t, 0);
                      b_3 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_7), b_3), term_r_7), d_3), term_y_7);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          d_3 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_8), d_3), term_a_8);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              d_3 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_8), d_3), term_d_8);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  d_3 = ATgetArgument(t, 0);
                                  b_3 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_8), b_3), term_g_8), d_3), term_f_8);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      d_3 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_8), d_3), term_i_8);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_k_8;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_l_8;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_m_8;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_n_8;
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
ATerm bottomup_1_0 (ATerm z_73 (ATerm), ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = bottomup_1_0(z_73, t);
    return(t);
  }
  t = SRTS_all(t_0, t);
  t = z_73(t);
  return(t);
}
ATerm html2text_0_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = try_1_0(Html2text_0_0, t);
    return(t);
  }
  t = bottomup_1_0(u_0, t);
  return(t);
}
ATerm flat_list_0_0 (ATerm t)
{
  ATerm o_8 = t;
  int p_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(p_8);
    }
  else
    {
      t = o_8;
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_0 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = Cons_2_0(v_0, flat_list_0_0, t);
            ;
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            {
              ATerm s_8 = t;
              int t_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm o_9 = NULL,p_9 = NULL,q_9 = NULL;
                  ATerm w_0 (ATerm t)
                  {
                    ATerm r_9 = NULL;
                    r_9 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = r_9;
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
                        t = r_9;
                      }
                    return(t);
                  }
                  t = Cons_2_0(w_0, _id, t);
                  o_9 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      p_9 = ATgetFirst((ATermList) t);
                      {
                        ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = o_9;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_8 = ATgetFirst((ATermList) t);
                      q_9 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, p_9, q_9);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  ;
                  LocalPopChoice(t_8);
                }
              else
                {
                  t = s_8;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1_0 (ATerm c_75 (ATerm), ATerm t)
{
  ATerm v_9 (ATerm t)
  {
    ATerm y_8 = t;
    int z_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_75(t);
        ;
        LocalPopChoice(z_8);
      }
    else
      {
        t = y_8;
        t = SRTS_one(v_9, t);
      }
    return(t);
  }
  t = v_9(t);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm w_9 = NULL,x_9 = NULL;
  ATerm x_0 (ATerm t)
  {
    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
      _fail(t);
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    w_9 = t;
    return(t);
  }
  t = Cons_2_0(x_0, c_1, t);
  t = not_null(w_9);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm y_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm a_9 = ATgetFirst((ATermList) t);
          if(((ATgetType(a_9) != AT_INT) || (ATgetInt((ATermInt) a_9) != 34)))
            _fail(t);
          y_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(CheckATermList(y_9), term_b_9), term_b_9);
      return(t);
    }
    t = oncetd_1_0(d_1, t);
    x_9 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(x_9), term_c_9), term_c_9);
  }
  return(t);
}
ATerm listtd_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm z_9 (ATerm t)
  {
    t = y_80(t);
    {
      ATerm d_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(e_9);
        }
      else
        {
          t = d_9;
          t = Cons_2_0(_id, z_9, t);
        }
    }
    return(t);
  }
  t = z_9(t);
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm f_10 = NULL,g_10 = NULL;
  f_10 = t;
  t = SSL_explode_string(f_10);
  {
    ATerm e_1 (ATerm t)
    {
      t = try_1_0(replace_quotes_0_0, t);
      return(t);
    }
    t = listtd_1_0(e_1, t);
    {
      ATerm f_1 (ATerm t)
      {
        ATerm g_1 (ATerm t)
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
          return(t);
        }
        t = try_1_0(g_1, t);
        return(t);
      }
      t = map_1_0(f_1, t);
      t = flat_list_0_0(t);
      g_10 = t;
      t = SSL_implode_string(g_10);
    }
  }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm b_101 (ATerm), ATerm t)
{
  ATerm o_10 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      ATerm n_10 = NULL;
      t = Cons_2_0(b_101, _id, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm f_9 = ATgetFirst((ATermList) t);
          n_10 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_10;
      t = o_10(t);
      return(t);
    }
    t = try_1_0(i_1, t);
    return(t);
  }
  t = o_10(t);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm w_10 = NULL;
  w_10 = t;
  t = SSL_explode_string(w_10);
  t = reverse_0_0(t);
  {
    ATerm l_1 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = split_2_0(_id, l_1, t);
    {
      ATerm e_12 (ATerm t)
      {
        ATerm t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
        if(match_cons(t, sym__2))
          {
            t_11 = ATgetArgument(t, 0);
            w_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = t_11;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm q_0 = NULL,r_0 = NULL;
            t = w_11;
            {
              ATerm r_1 (ATerm t)
              {
                ATerm s_0 = NULL;
                s_0 = t;
                if(match_int(t, 9))
                  {
                    t = s_0;
                  }
                else
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                      _fail(t);
                    t = s_0;
                  }
                return(t);
              }
              t = remove_trailing_1_0(r_1, t);
              r_0 = t;
              t = SSL_implode_string(r_0);
              q_0 = t;
              t = (ATerm) ATinsert(ATempty, q_0);
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                u_11 = ATgetFirst((ATermList) t);
                v_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = u_11;
            if(match_int(t, 10))
              {
                ATerm g_9 = t;
                int h_9 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_0 = NULL,z_0 = NULL,a_1 = NULL;
                    t = w_11;
                    {
                      ATerm s_1 (ATerm t)
                      {
                        ATerm b_1 = NULL;
                        b_1 = t;
                        if(match_int(t, 9))
                          {
                            t = b_1;
                          }
                        else
                          {
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                              _fail(t);
                            t = b_1;
                          }
                        return(t);
                      }
                      t = remove_trailing_1_0(s_1, t);
                      z_0 = t;
                      t = SSL_implode_string(z_0);
                      y_0 = t;
                      t = (ATerm) ATmakeAppl(sym__2, v_11, (ATerm) ATempty);
                      t = e_12(t);
                      a_1 = t;
                      t = (ATerm) ATinsert(CheckATermList(a_1), y_0);
                    }
                    ;
                    LocalPopChoice(h_9);
                  }
                else
                  {
                    t = g_9;
                    t = (ATerm) ATmakeAppl(sym__2, v_11, (ATerm) ATinsert(CheckATermList(w_11), u_11));
                    t = e_12(t);
                  }
              }
            else
              {
                t = (ATerm) ATmakeAppl(sym__2, v_11, (ATerm) ATinsert(CheckATermList(w_11), u_11));
                t = e_12(t);
              }
          }
        return(t);
      }
      t = e_12(t);
      {
        ATerm t_1 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        t = remove_trailing_1_0(t_1, t);
        t = reverse_0_0(t);
        {
          ATerm u_1 (ATerm t)
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            return(t);
          }
          t = remove_trailing_1_0(u_1, t);
          {
            ATerm w_1 (ATerm t)
            {
              ATerm d_12 = NULL;
              d_12 = t;
              t = (ATerm) ATinsert(ATinsert(ATempty, term_i_9), d_12);
              return(t);
            }
            t = map_1_0(w_1, t);
          }
        }
      }
    }
  }
  return(t);
}
ATerm sep_by_1_0 (ATerm a_72 (ATerm), ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    ATerm h_12 = NULL;
    h_12 = t;
    t = (ATerm) ATinsert(ATempty, h_12);
    return(t);
  }
  t = map_1_0(a_2, t);
  t = separate_by_1_0(a_72, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm t_86 (ATerm), ATerm t)
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = filter_1_0(t_86, t);
              return(t);
            }
            t = Cons_2_0(t_86, b_2, t);
            ;
            LocalPopChoice(m_9);
          }
        else
          {
            t = l_9;
            {
              ATerm l_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm n_9 = ATgetFirst((ATermList) t);
                  l_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = l_12;
              t = filter_1_0(t_86, t);
            }
          }
      }
    }
  return(t);
}
ATerm hs_length_0_0 (ATerm t)
{
  ATerm s_9 = t;
  int t_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        if(!(match_cons(t, sym_HS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(f_2, t);
      ;
      LocalPopChoice(t_9);
    }
  else
    {
      t = s_9;
      t = term_u_9;
    }
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm o_12 = NULL;
  t = hs_length_0_0(t);
  o_12 = t;
  if(match_int(t, 0))
    {
      ATerm a_10 = t;
      int b_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(b_10);
        }
      else
        {
          t = a_10;
          t = (ATerm) ATmakeAppl(sym__2, o_12, term_c_10);
          t = copy_0_0(t);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, o_12, term_c_10);
      t = copy_0_0(t);
    }
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  if(match_cons(t, sym__2))
    {
      r_12 = ATgetArgument(t, 0);
      s_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_12;
  {
    ATerm d_10 = t;
    int e_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(e_10);
      }
    else
      {
        t = d_10;
        {
          ATerm h_2 (ATerm t)
          {
            ATerm h_10 = t;
            int i_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(i_10);
              }
            else
              {
                t = h_10;
                {
                  ATerm t_12 = NULL;
                  t = Cons_2_0(_id, h_2, t);
                  t_12 = t;
                  t = (ATerm) ATinsert(CheckATermList(t_12), r_12);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, h_2, t);
        }
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm f_93 (ATerm), ATerm t)
{
  ATerm i_2 (ATerm t)
  {
    ATerm v_12 = NULL,x_12 = NULL;
    v_12 = t;
    t = term_j_10;
    t = get_config_0_0(t);
    x_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, x_12, term_k_10);
    t = geq_0_0(t);
    t = v_12;
    t = f_93(t);
    return(t);
  }
  t = try_1_0(i_2, t);
  return(t);
}
ATerm dissuader_1_0 (ATerm v_91 (ATerm), ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  {
    ATerm j_2 (ATerm t)
    {
      t = v_91(t);
      {
        ATerm k_2 (ATerm t)
        {
          t = term_l_10;
          return(t);
        }
        t = debug_1_0(k_2, t);
      }
      return(t);
    }
    t = if_verbose2_1_0(j_2, t);
    t = z_12;
  }
  return(t);
}
ATerm separate_by_1_0 (ATerm l_79 (ATerm), ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL;
  ATerm l_2 (ATerm t)
  {
    t = term_m_10;
    return(t);
  }
  t = dissuader_1_0(l_2, t);
  b_13 = t;
  t = term_n_7;
  t = l_79(t);
  c_13 = t;
  t = (ATerm) ATmakeAppl(sym__2, c_13, b_13);
  t = separate_by_0_0(t);
  return(t);
}
ATerm LNAT_2_0 (ATerm h_70 (ATerm), ATerm i_70 (ATerm), ATerm t)
{
  ATerm d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,j_13 = NULL;
  j_13 = t;
  if(match_cons(t, sym_LNAT_2))
    {
      e_13 = ATgetArgument(t, 0);
      f_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(j_13);
  d_13 = t;
  t = e_13;
  t = h_70(t);
  g_13 = t;
  t = f_13;
  t = i_70(t);
  h_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, g_13, h_13), d_13);
  return(t);
}
ATerm L_2_0 (ATerm f_70 (ATerm), ATerm g_70 (ATerm), ATerm t)
{
  ATerm n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL;
  s_13 = t;
  if(match_cons(t, sym_L_2))
    {
      o_13 = ATgetArgument(t, 0);
      p_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(s_13);
  n_13 = t;
  t = o_13;
  t = f_70(t);
  q_13 = t;
  t = p_13;
  t = g_70(t);
  r_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, q_13, r_13), n_13);
  return(t);
}
ATerm tov_1_0 (ATerm z_71 (ATerm), ATerm t)
{
  ATerm x_13 = NULL;
  ATerm p_10 = t;
  int q_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2_0(_id, _id, t);
      ;
      LocalPopChoice(q_10);
    }
  else
    {
      t = p_10;
      {
        ATerm r_10 = t;
        int s_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2_0(_id, _id, t);
            ;
            LocalPopChoice(s_10);
          }
        else
          {
            t = r_10;
            {
              ATerm y_13 = NULL,z_13 = NULL;
              y_13 = t;
              t = term_n_7;
              t = z_71(t);
              z_13 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_t_10), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, y_13))), z_13))));
            }
          }
      }
    }
  x_13 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_t_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, x_13))));
  return(t);
}
ATerm is_length_0_0 (ATerm t)
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_2 (ATerm t)
      {
        if(!(match_cons(t, sym_IS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(p_2, t);
      ;
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      t = term_x_10;
    }
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm b_14 = NULL;
  t = is_length_0_0(t);
  b_14 = t;
  if(match_int(t, 0))
    {
      ATerm y_10 = t;
      int z_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_11;
          ;
          LocalPopChoice(z_10);
        }
      else
        {
          t = y_10;
          {
            ATerm d_14 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, b_14, term_c_10);
            t = copy_0_0(t);
            d_14 = t;
            t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, d_14);
          }
        }
    }
  else
    {
      ATerm f_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_14, term_c_10);
      t = copy_0_0(t);
      f_14 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, f_14);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm p_73 (ATerm), ATerm q_73 (ATerm), ATerm t)
{
  ATerm g_14 (ATerm t)
  {
    ATerm b_11 = t;
    int c_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_73(t);
        ;
        LocalPopChoice(c_11);
      }
    else
      {
        t = b_11;
        t = q_73(t);
        t = g_14(t);
      }
    return(t);
  }
  t = g_14(t);
  return(t);
}
ATerm for_3_0 (ATerm s_73 (ATerm), ATerm t_73 (ATerm), ATerm u_73 (ATerm), ATerm t)
{
  t = s_73(t);
  t = while_not_2_0(t_73, u_73, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm h_14 = NULL,i_14 = NULL;
    if(match_cons(t, sym__2))
      {
        h_14 = ATgetArgument(t, 0);
        i_14 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__3, h_14, i_14, (ATerm) ATempty);
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    ATerm j_14 = NULL;
    if(match_cons(t, sym__3))
      {
        ATerm d_11 = ATgetArgument(t, 0);
        if(((ATgetType(d_11) != AT_INT) || (ATgetInt((ATermInt) d_11) != 0)))
          _fail(t);
        {
          ATerm e_11 = ATgetArgument(t, 1);
        }
        j_14 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = j_14;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm k_14 = NULL,l_14 = NULL,m_14 = NULL,n_14 = NULL;
    if(match_cons(t, sym__3))
      {
        k_14 = ATgetArgument(t, 0);
        l_14 = ATgetArgument(t, 1);
        m_14 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = (ATerm) ATmakeAppl(sym__2, k_14, term_u_9);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, k_14, term_u_9);
    {
      ATerm f_11 = t;
      int g_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(k_14, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(g_11);
        }
      else
        {
          t = f_11;
          t = SSL_subtr(k_14, (ATerm) ATmakeInt(1));
        }
      n_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, n_14, l_14, (ATerm) ATinsert(CheckATermList(m_14), l_14));
    }
    return(t);
  }
  t = for_3_0(x_2, y_2, z_2, t);
  return(t);
}
ATerm SOpt_2_0 (ATerm n_71 (ATerm), ATerm o_71 (ATerm), ATerm t)
{
  ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL,t_14 = NULL,u_14 = NULL,v_14 = NULL;
  v_14 = t;
  if(match_cons(t, sym_SOpt_2))
    {
      p_14 = ATgetArgument(t, 0);
      q_14 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(v_14);
  o_14 = t;
  t = p_14;
  t = n_71(t);
  t_14 = t;
  t = q_14;
  t = o_71(t);
  u_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, t_14, u_14), o_14);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm e_101 (ATerm), ATerm t)
{
  ATerm z_14 = NULL;
  ATerm a_3 (ATerm t)
  {
    ATerm e_3 (ATerm t)
    {
      z_14 = t;
      return(t);
    }
    t = SOpt_2_0(e_101, e_3, t);
    return(t);
  }
  t = fetch_1_0(a_3, t);
  t = SSL_string_to_int(not_null(z_14));
  return(t);
}
ATerm vs_length_0_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 (ATerm t)
      {
        if(!(match_cons(t, sym_VS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(f_3, t);
      ;
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      t = term_x_10;
    }
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm b_15 = NULL;
  t = vs_length_0_0(t);
  b_15 = t;
  if(match_int(t, 0))
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_a_11;
          ;
          LocalPopChoice(k_11);
        }
      else
        {
          t = j_11;
          {
            ATerm d_15 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, b_15, term_i_9);
            t = copy_0_0(t);
            d_15 = t;
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, d_15)));
          }
        }
    }
  else
    {
      ATerm f_15 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, b_15, term_i_9);
      t = copy_0_0(t);
      f_15 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, f_15)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm j_15 = NULL,n_15 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      j_15 = ATgetArgument(t, 0);
      t = j_15;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          j_15 = ATgetArgument(t, 0);
          t = j_15;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              j_15 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = j_15;
        }
    }
  t = Hspace_0_0(t);
  n_15 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      ATerm l_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = n_15;
          ;
          LocalPopChoice(m_11);
        }
      else
        {
          t = l_11;
          t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, n_15);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, n_15);
    }
  return(t);
}
ATerm toa_1_0 (ATerm c_72 (ATerm), ATerm t)
{
  ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm n_11 = ATgetArgument(t, 0);
      if(((ATgetType(n_11) != AT_LIST) || !(ATisEmpty(n_11))))
        _fail(t);
      c_16 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_n_7;
  t = c_72(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      d_16 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_16, d_16);
  {
    ATerm v_18 (ATerm t)
    {
      ATerm w_18 (ATerm f_16, ATerm g_16, ATerm h_16, ATerm i_16, ATerm j_16, ATerm t)
      {
        ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
        t = i_16;
        {
          ATerm o_11 = t;
          int p_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm q_11 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(p_11);
              t = term_r_11;
            }
          else
            {
              t = o_11;
              {
                ATerm s_11 = t;
                int x_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm y_11 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(x_11);
                    t = term_z_11;
                  }
                else
                  {
                    t = s_11;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm a_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_b_12;
                  }
              }
            }
          q_16 = t;
          t = i_16;
          t = make_hs_0_0(t);
          r_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(h_16), g_16), j_16);
          t = v_18(t);
          s_16 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(s_16), r_16), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, q_16), f_16));
        }
        return(t);
      }
      ATerm x_18 (ATerm v_16, ATerm w_16, ATerm x_16, ATerm y_16, ATerm t)
      {
        ATerm f_17 = NULL,g_17 = NULL;
        t = x_16;
        {
          ATerm c_12 = t;
          int f_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm g_12 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(f_12);
              t = term_r_11;
            }
          else
            {
              t = c_12;
              {
                ATerm i_12 = t;
                int j_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm k_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(j_12);
                    t = term_z_11;
                  }
                else
                  {
                    t = i_12;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm m_12 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_b_12;
                  }
              }
            }
          f_17 = t;
          t = (ATerm) ATmakeAppl(sym__2, w_16, y_16);
          t = v_18(t);
          g_17 = t;
          t = (ATerm) ATinsert(CheckATermList(g_17), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, f_17), v_16));
        }
        return(t);
      }
      ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
      if(match_cons(t, sym__2))
        {
          o_17 = ATgetArgument(t, 0);
          r_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = o_17;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              p_17 = ATgetFirst((ATermList) t);
              q_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              s_17 = ATgetFirst((ATermList) t);
              t_17 = (ATerm) ATgetNext((ATermList) t);
              t = q_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  l_17 = ATgetFirst((ATermList) t);
                  m_17 = (ATerm) ATgetNext((ATermList) t);
                  t = p_17;
                  if(match_cons(t, sym_C_2))
                    {
                      j_17 = ATgetArgument(t, 0);
                      k_17 = ATgetArgument(t, 1);
                      {
                        ATerm n_12 = t;
                        int p_12 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm g_18 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, q_17, r_17);
                            t = v_18(t);
                            g_18 = t;
                            t = (ATerm) ATinsert(CheckATermList(g_18), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, j_17, k_17))));
                            ;
                            LocalPopChoice(p_12);
                          }
                        else
                          {
                            t = n_12;
                            {
                              ATerm q_12 = t;
                              int u_12 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = w_18(p_17, l_17, m_17, s_17, t_17, t);
                                  ;
                                  LocalPopChoice(u_12);
                                }
                              else
                                {
                                  t = q_12;
                                  t = x_18(p_17, q_17, s_17, t_17, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm w_12 = t;
                      int y_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_18(p_17, l_17, m_17, s_17, t_17, t);
                          ;
                          LocalPopChoice(y_12);
                        }
                      else
                        {
                          t = w_12;
                          t = x_18(p_17, q_17, s_17, t_17, t);
                        }
                    }
                }
              else
                {
                  t = p_17;
                  if(match_cons(t, sym_C_2))
                    {
                      j_17 = ATgetArgument(t, 0);
                      k_17 = ATgetArgument(t, 1);
                      {
                        ATerm a_13 = t;
                        int i_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm n_18 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, q_17, r_17);
                            t = v_18(t);
                            n_18 = t;
                            t = (ATerm) ATinsert(CheckATermList(n_18), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, j_17, k_17))));
                            ;
                            LocalPopChoice(i_13);
                          }
                        else
                          {
                            t = a_13;
                            t = x_18(p_17, q_17, s_17, t_17, t);
                          }
                      }
                    }
                  else
                    {
                      t = x_18(p_17, q_17, s_17, t_17, t);
                    }
                }
            }
          else
            {
              ATerm u_18 = NULL;
              t = p_17;
              if(match_cons(t, sym_C_2))
                {
                  j_17 = ATgetArgument(t, 0);
                  k_17 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, q_17, r_17);
              t = v_18(t);
              u_18 = t;
              t = (ATerm) ATinsert(CheckATermList(u_18), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, j_17, k_17))));
            }
        }
      return(t);
    }
    t = v_18(t);
    e_16 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_t_10), (ATerm) ATinsert(ATempty, e_16));
  }
  return(t);
}
ATerm R_2_0 (ATerm z_70 (ATerm), ATerm a_71 (ATerm), ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL,d_19 = NULL;
  d_19 = t;
  if(match_cons(t, sym_R_2))
    {
      z_18 = ATgetArgument(t, 0);
      a_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_19);
  y_18 = t;
  t = z_18;
  t = z_70(t);
  b_19 = t;
  t = a_19;
  t = a_71(t);
  c_19 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, b_19, c_19), y_18);
  return(t);
}
ATerm split_2_0 (ATerm f_87 (ATerm), ATerm g_87 (ATerm), ATerm t)
{
  ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
  h_19 = t;
  t = f_87(t);
  i_19 = t;
  t = h_19;
  t = g_87(t);
  j_19 = t;
  t = (ATerm) ATmakeAppl(sym__2, i_19, j_19);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2_0(_id, g_3, t);
  {
    ATerm n_20 (ATerm t)
    {
      ATerm n_19 = NULL,o_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL;
      if(match_cons(t, sym__2))
        {
          q_19 = ATgetArgument(t, 0);
          t_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm y_19 = NULL;
          t = t_19;
          t = reverse_0_0(t);
          y_19 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, y_19));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_19 = ATgetFirst((ATermList) t);
              s_19 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = r_19;
          if(match_cons(t, sym_R_2))
            {
              n_19 = ATgetArgument(t, 0);
              o_19 = ATgetArgument(t, 1);
              {
                ATerm k_13 = t;
                int l_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm d_20 = NULL,e_20 = NULL;
                    t = t_19;
                    t = reverse_0_0(t);
                    d_20 = t;
                    t = (ATerm) ATmakeAppl(sym__2, s_19, (ATerm) ATempty);
                    t = n_20(t);
                    e_20 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(e_20), (ATerm) ATmakeAppl(sym_R_2, n_19, o_19)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, d_20));
                    ;
                    LocalPopChoice(l_13);
                  }
                else
                  {
                    t = k_13;
                    t = (ATerm) ATmakeAppl(sym__2, s_19, (ATerm) ATinsert(CheckATermList(t_19), r_19));
                    t = n_20(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, s_19, (ATerm) ATinsert(CheckATermList(t_19), r_19));
              t = n_20(t);
            }
        }
      return(t);
    }
    t = n_20(t);
    {
      ATerm h_3 (ATerm t)
      {
        ATerm m_13 = t;
        if((PushChoice() == 0))
          {
            ATerm i_3 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = R_2_0(_id, i_3, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_13;
          }
        return(t);
      }
      t = filter_1_0(h_3, t);
    }
  }
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL,j_21 = NULL;
  i_21 = t;
  if(match_cons(t, sym_REF_2))
    {
      j_21 = ATgetArgument(t, 0);
      h_21 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, j_21, h_21);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          j_21 = ATgetArgument(t, 0);
          h_21 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, h_21), (ATerm) ATmakeAppl(sym_ANCHOR_1, j_21));
        }
      else
        {
          ATerm t_13 = t;
          int u_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm v_13 = ATgetArgument(t, 0);
                  ATerm w_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(u_13);
              t = term_a_14;
            }
          else
            {
              t = t_13;
              {
                ATerm c_14 = t;
                int e_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm r_14 = ATgetArgument(t, 0);
                        ATerm s_14 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_14);
                    t = term_a_14;
                  }
                else
                  {
                    t = c_14;
                    {
                      ATerm w_14 = t;
                      int x_14 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              j_21 = ATgetArgument(t, 0);
                              {
                                ATerm y_14 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(x_14);
                          t = j_21;
                        }
                      else
                        {
                          t = w_14;
                          if(match_cons(t, sym_A_3))
                            {
                              j_21 = ATgetArgument(t, 0);
                              h_21 = ATgetArgument(t, 1);
                              g_21 = ATgetArgument(t, 2);
                              {
                                ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL;
                                t = g_21;
                                t = construct_rows_0_0(t);
                                s_21 = t;
                                t = h_21;
                                t = Vspace_0_0(t);
                                t_21 = t;
                                t = s_21;
                                {
                                  ATerm j_3 (ATerm t)
                                  {
                                    ATerm k_3 (ATerm t)
                                    {
                                      t = j_21;
                                      return(t);
                                    }
                                    t = toa_1_0(k_3, t);
                                    return(t);
                                  }
                                  t = map_1_0(j_3, t);
                                  {
                                    ATerm l_3 (ATerm t)
                                    {
                                      t = t_21;
                                      return(t);
                                    }
                                    t = separate_by_1_0(l_3, t);
                                    u_21 = t;
                                    t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, u_21)))));
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  j_21 = ATgetArgument(t, 0);
                                  h_21 = ATgetArgument(t, 1);
                                  {
                                    ATerm h_1 = NULL;
                                    t = j_21;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm a_15 = t;
                                      int c_15 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = h_21;
                                          {
                                            ATerm m_3 (ATerm t)
                                            {
                                              ATerm e_15 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                    _fail(t);
                                                  PopChoice();
                                                  _fail(t);
                                                }
                                              else
                                                {
                                                  t = e_15;
                                                }
                                              return(t);
                                            }
                                            t = filter_1_0(m_3, t);
                                          }
                                          ;
                                          LocalPopChoice(c_15);
                                        }
                                      else
                                        {
                                          t = a_15;
                                          {
                                            ATerm j_1 = NULL;
                                            ATerm n_3 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, term_g_15);
                                              return(t);
                                            }
                                            t = at_last_1_0(n_3, t);
                                            h_1 = t;
                                            t = h_21;
                                            {
                                              ATerm o_3 (ATerm t)
                                              {
                                                ATerm h_15 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    PopChoice();
                                                    _fail(t);
                                                  }
                                                else
                                                  {
                                                    t = h_15;
                                                  }
                                                return(t);
                                              }
                                              t = filter_1_0(o_3, t);
                                              {
                                                ATerm p_3 (ATerm t)
                                                {
                                                  t = h_1;
                                                  return(t);
                                                }
                                                t = separate_by_1_0(p_3, t);
                                                j_1 = t;
                                                t = (ATerm) ATinsert(ATinsert(ATempty, j_1), term_i_15);
                                              }
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
                                      j_21 = ATgetArgument(t, 0);
                                      h_21 = ATgetArgument(t, 1);
                                      {
                                        ATerm x_21 = NULL,y_21 = NULL,z_21 = NULL;
                                        t = j_21;
                                        t = Vspace_0_0(t);
                                        x_21 = t;
                                        t = j_21;
                                        t = Ispace_0_0(t);
                                        y_21 = t;
                                        t = h_21;
                                        {
                                          ATerm q_3 (ATerm t)
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
                                          t = filter_1_0(q_3, t);
                                          {
                                            ATerm r_3 (ATerm t)
                                            {
                                              ATerm u_3 (ATerm t)
                                              {
                                                t = term_a_11;
                                                return(t);
                                              }
                                              t = tov_1_0(u_3, t);
                                              return(t);
                                            }
                                            ATerm t_3 (ATerm t)
                                            {
                                              ATerm v_3 (ATerm t)
                                              {
                                                ATerm w_3 (ATerm t)
                                                {
                                                  t = y_21;
                                                  return(t);
                                                }
                                                t = tov_1_0(w_3, t);
                                                return(t);
                                              }
                                              t = map_1_0(v_3, t);
                                              return(t);
                                            }
                                            t = Cons_2_0(r_3, t_3, t);
                                            {
                                              ATerm y_3 (ATerm t)
                                              {
                                                t = x_21;
                                                return(t);
                                              }
                                              t = separate_by_1_0(y_3, t);
                                              z_21 = t;
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, z_21)), term_i_15);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          j_21 = ATgetArgument(t, 0);
                                          h_21 = ATgetArgument(t, 1);
                                          {
                                            ATerm c_22 = NULL;
                                            t = j_21;
                                            t = Hspace_0_0(t);
                                            c_22 = t;
                                            t = h_21;
                                            {
                                              ATerm z_3 (ATerm t)
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
                                              t = filter_1_0(z_3, t);
                                              {
                                                ATerm b_4 (ATerm t)
                                                {
                                                  t = c_22;
                                                  return(t);
                                                }
                                                t = sep_by_1_0(b_4, t);
                                              }
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              j_21 = ATgetArgument(t, 0);
                                              h_21 = ATgetArgument(t, 1);
                                              t = j_21;
                                              {
                                                ATerm m_15 = t;
                                                int o_15 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(!(match_cons(t, sym_KW_0)))
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_p_15), (ATerm) ATinsert(ATempty, h_21));
                                                    ;
                                                    LocalPopChoice(o_15);
                                                  }
                                                else
                                                  {
                                                    t = m_15;
                                                    {
                                                      ATerm q_15 = t;
                                                      int r_15 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_VAR_0)))
                                                            _fail(t);
                                                          t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_s_15), (ATerm) ATinsert(ATempty, h_21));
                                                          ;
                                                          LocalPopChoice(r_15);
                                                        }
                                                      else
                                                        {
                                                          t = q_15;
                                                          {
                                                            ATerm t_15 = t;
                                                            int u_15 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(!(match_cons(t, sym_NUM_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_v_15), (ATerm) ATinsert(ATempty, h_21));
                                                                ;
                                                                LocalPopChoice(u_15);
                                                              }
                                                            else
                                                              {
                                                                t = t_15;
                                                                {
                                                                  ATerm w_15 = t;
                                                                  int x_15 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(!(match_cons(t, sym_MATH_0)))
                                                                        _fail(t);
                                                                      t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_y_15), (ATerm) ATinsert(ATempty, h_21));
                                                                      ;
                                                                      LocalPopChoice(x_15);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = w_15;
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
                                                  j_21 = ATgetArgument(t, 0);
                                                  h_21 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm e_22 = NULL;
                                                    t = j_21;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = h_21;
                                                    {
                                                      ATerm c_4 (ATerm t)
                                                      {
                                                        ATerm f_22 = NULL;
                                                        if(match_cons(t, sym_S_1))
                                                          {
                                                            f_22 = ATgetArgument(t, 0);
                                                          }
                                                        else
                                                          _fail(t);
                                                        t = f_22;
                                                        t = make_html_comment_0_0(t);
                                                        return(t);
                                                      }
                                                      t = map_1_0(c_4, t);
                                                      e_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_z_15), (ATerm) ATinsert(ATempty, e_22)))));
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      j_21 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = j_21;
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
ATerm topdown_1_0 (ATerm y_73 (ATerm), ATerm t)
{
  t = y_73(t);
  {
    ATerm d_4 (ATerm t)
    {
      t = topdown_1_0(y_73, t);
      return(t);
    }
    t = SRTS_all(d_4, t);
  }
  return(t);
}
ATerm at_last_1_0 (ATerm q_80 (ATerm), ATerm t)
{
  ATerm j_22 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_4 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, e_4, t);
        t = q_80(t);
        ;
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = Cons_2_0(_id, j_22, t);
      }
    return(t);
  }
  t = j_22(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm j_80 (ATerm), ATerm t)
{
  ATerm k_22 (ATerm t)
  {
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_80(t);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
        t = Cons_2_0(_id, k_22, t);
      }
    return(t);
  }
  t = k_22(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm c_80 (ATerm), ATerm t)
{
  ATerm l_22 = NULL,m_22 = NULL;
  ATerm f_4 (ATerm t)
  {
    t = Cons_2_0(c_80, _id, t);
    {
      ATerm g_4 (ATerm t)
      {
        l_22 = t;
        return(t);
      }
      t = Cons_2_0(_id, g_4, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(f_4, t);
  m_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_22, not_null(l_22));
  return(t);
}
ATerm Distribute_0_0 (ATerm t)
{
  ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL;
  if(match_cons(t, sym_H_2))
    {
      n_22 = ATgetArgument(t, 0);
      o_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_22;
  {
    ATerm h_4 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          p_22 = ATgetArgument(t, 0);
          {
            ATerm m_16 = ATgetArgument(t, 1);
            if(((ATgetType(m_16) == AT_LIST) && !(ATisEmpty(m_16))))
              {
                q_22 = ATgetFirst((ATermList) m_16);
                r_22 = (ATerm) ATgetNext((ATermList) m_16);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(h_4, t);
    if(match_cons(t, sym__2))
      {
        s_22 = ATgetArgument(t, 0);
        t_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = t_22;
    {
      ATerm n_16 = t;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = n_16;
        }
      t = (ATerm) ATinsert(CheckATermList(not_null(r_22)), not_null(q_22));
      {
        ATerm i_4 (ATerm t)
        {
          ATerm j_4 (ATerm t)
          {
            u_22 = t;
            return(t);
          }
          ATerm k_4 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(j_4, k_4, t);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, n_22, (ATerm) ATinsert(CheckATermList(t_22), not_null(u_22))));
          return(t);
        }
        t = at_last_1_0(i_4, t);
        v_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(p_22), v_22)));
        t = conc_0_0(t);
        w_22 = t;
        t = (ATerm) ATmakeAppl(sym_H_2, n_22, w_22);
      }
    }
  }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm m_4 (ATerm t)
    {
      ATerm o_16 = t;
      int p_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
          ATerm t_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_H_2))
                {
                  ATerm z_16 = ATgetArgument(t, 0);
                  e_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(u_16);
              t = e_23;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_23 = ATgetFirst((ATermList) t);
                  g_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = g_23;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_23;
            }
          else
            {
              t = t_16;
              if(match_cons(t, sym_V_2))
                {
                  ATerm a_17 = ATgetArgument(t, 0);
                  e_23 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = e_23;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  f_23 = ATgetFirst((ATermList) t);
                  g_23 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = g_23;
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              t = f_23;
            }
          ;
          LocalPopChoice(p_16);
        }
      else
        {
          t = o_16;
          t = Distribute_0_0(t);
        }
      return(t);
    }
    t = try_1_0(m_4, t);
    return(t);
  }
  t = topdown_1_0(l_4, t);
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm j_23 = NULL;
  t = normalize_0_0(t);
  {
    ATerm n_4 (ATerm t)
    {
      t = try_1_0(Abox2html_0_0, t);
      return(t);
    }
    t = topdown_1_0(n_4, t);
    j_23 = t;
    t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, j_23)))));
    t = html2text_0_0(t);
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm i_26 (ATerm h_25, ATerm t)
  {
    t = SSL_fclose(h_25);
    return(t);
  }
  ATerm k_25 = NULL,g_26 = NULL;
  g_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_25 = ATgetArgument(t, 0);
      {
        ATerm b_17 = t;
        int c_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_25);
            ;
            LocalPopChoice(c_17);
          }
        else
          {
            t = b_17;
            t = i_26(g_26, t);
          }
      }
    }
  else
    {
      t = i_26(g_26, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm j_26 = NULL;
  t = SSL_stdin_stream();
  j_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, j_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm k_26 = NULL;
  t = SSL_stdout_stream();
  k_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, k_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm l_26 = NULL;
  t = SSL_stderr_stream();
  l_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, l_26);
  return(t);
}
ATerm stdio_stream_0_0 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  if(match_cons(t, sym_stderr_0))
    {
      t = n_26;
      t = stderr_stream_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_stdout_0))
        {
          t = n_26;
          t = stdout_stream_0_0(t);
        }
      else
        {
          if(!(match_cons(t, sym_stdin_0)))
            _fail(t);
          t = n_26;
          t = stdin_stream_0_0(t);
        }
    }
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm d_17 = ATgetArgument(t, 0);
      ATerm e_17 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm h_17 = t;
    int i_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 = NULL,o_2 = NULL;
        n_2 = t;
        t = SSL_explode_term(n_2);
        if(match_cons(t, sym__2))
          {
            ATerm n_17 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) n_17) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm u_17 = ATgetArgument(t, 1);
              if(((ATgetType(u_17) == AT_LIST) && !(ATisEmpty(u_17))))
                {
                  o_2 = ATgetFirst((ATermList) u_17);
                  {
                    ATerm v_17 = (ATerm) ATgetNext((ATermList) u_17);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = o_2;
        t = stdio_stream_0_0(t);
        ;
        LocalPopChoice(i_17);
      }
    else
      {
        t = h_17;
        {
          ATerm w_17 = t;
          int x_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
              ATerm o_4 (ATerm t)
              {
                ATerm t_26 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    t_26 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = t_26;
                return(t);
              }
              t = _2_0(o_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  q_26 = ATgetArgument(t, 0);
                  r_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(q_26, r_26);
              s_26 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, s_26);
              ;
              LocalPopChoice(x_17);
            }
          else
            {
              t = w_17;
              {
                ATerm u_26 = NULL,v_26 = NULL,w_26 = NULL;
                ATerm p_4 (ATerm t)
                {
                  ATerm x_26 = NULL;
                  x_26 = t;
                  t = SSL_is_string(x_26);
                  return(t);
                }
                t = _2_0(p_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    u_26 = ATgetArgument(t, 0);
                    v_26 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(u_26, v_26);
                w_26 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, w_26);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm y_26 = NULL,z_26 = NULL,a_27 = NULL;
  ATerm y_17 = t;
  int z_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_27 = NULL;
      b_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, b_27, term_a_18);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(z_17);
    }
  else
    {
      t = y_17;
      {
        ATerm q_4 (ATerm t)
        {
          t = term_b_18;
          return(t);
        }
        t = debug_1_0(q_4, t);
        _fail(t);
      }
    }
  y_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      a_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(a_27);
  z_26 = t;
  t = y_26;
  t = fclose_0_0(t);
  t = z_26;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL;
  f_27 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = f_27;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          g_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(g_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm b_28 = NULL,c_28 = NULL;
  b_28 = t;
  if(match_cons(t, sym_FILE_1))
    {
      c_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm c_18 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_3 = NULL;
        t = b_28;
        t = k_0(t);
        c_3 = t;
        {
          ATerm e_18 = t;
          int f_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_stdout_0)))
                _fail(t);
              ;
              LocalPopChoice(f_18);
            }
          else
            {
              t = e_18;
              if(!(match_cons(t, sym_stderr_0)))
                _fail(t);
            }
          t = SSL_copy(c_28, c_3);
          t = (ATerm) ATmakeAppl(sym_FILE_1, c_28);
        }
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = c_18;
        {
          ATerm h_18 = t;
          int i_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_3 = NULL;
              t = b_28;
              t = k_0(t);
              s_3 = t;
              {
                ATerm j_18 = t;
                if((PushChoice() == 0))
                  {
                    ATerm k_18 = t;
                    int l_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(l_18);
                      }
                    else
                      {
                        t = k_18;
                        {
                          ATerm m_18 = t;
                          int o_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(o_18);
                            }
                          else
                            {
                              t = m_18;
                              {
                                ATerm x_3 = NULL;
                                x_3 = t;
                                if((c_28 != t))
                                  {
                                    _fail(t);
                                  }
                                t = x_3;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = j_18;
                  }
                t = SSL_copy(c_28, s_3);
                t = (ATerm) ATmakeAppl(sym_FILE_1, c_28);
              }
              ;
              LocalPopChoice(i_18);
            }
          else
            {
              t = h_18;
              t = b_28;
              t = k_0(t);
              if((c_28 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, c_28);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm j_28 = NULL,m_28 = NULL,n_28 = NULL;
  if(match_cons(t, sym__2))
    {
      j_28 = ATgetArgument(t, 0);
      m_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm p_18 = t;
    int q_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_4 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm r_18 = ATgetArgument(t, 0);
            ATerm s_18 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(j_28, m_28);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm t_18 = ATgetFirst((ATermList) t);
            a_4 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = a_4;
        ;
        LocalPopChoice(q_18);
      }
    else
      {
        t = p_18;
        t = (ATerm) ATempty;
      }
    n_28 = t;
    t = SSL_table_put(j_28, m_28, n_28);
    t = (ATerm) ATmakeAppl(sym__2, j_28, m_28);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm f_90 (ATerm), ATerm t)
{
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
  t_28 = t;
  t = f_90(t);
  u_28 = t;
  {
    ATerm e_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(u_28, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(f_19);
      }
    else
      {
        t = e_19;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        w_28 = ATgetFirst((ATermList) t);
        v_28 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(u_28, (ATerm)ATmakeAppl(sym_Scopes_0), v_28);
    t = w_28;
    {
      ATerm r_4 (ATerm t)
      {
        ATerm x_28 = NULL;
        x_28 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_28, x_28);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(r_4, t);
      t = t_28;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm t_72 (ATerm), ATerm u_72 (ATerm), ATerm t)
{
  ATerm g_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_72(t);
      t = u_72(t);
      ;
      LocalPopChoice(k_19);
    }
  else
    {
      t = g_19;
      t = u_72(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm e_90 (ATerm), ATerm t)
{
  ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
  a_29 = t;
  t = e_90(t);
  b_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, b_29, term_l_19);
  {
    ATerm m_19 = t;
    int p_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm u_19 = ATgetArgument(t, 0);
            ATerm v_19 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(b_29, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(p_19);
      }
    else
      {
        t = m_19;
        t = (ATerm) ATempty;
      }
    c_29 = t;
    t = SSL_table_put(b_29, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(c_29), (ATerm) ATempty));
    t = a_29;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm n_101 (ATerm), ATerm t)
{
  ATerm h_29 = NULL;
  ATerm s_4 (ATerm t)
  {
    t = term_p_7;
    return(t);
  }
  t = begin_scope_1_0(s_4, t);
  {
    ATerm t_4 (ATerm t)
    {
      ATerm i_29 = NULL;
      i_29 = t;
      {
        ATerm w_19 = t;
        int x_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(x_19);
          }
        else
          {
            t = w_19;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            h_29 = ATgetFirst((ATermList) t);
            {
              ATerm z_19 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = h_29;
        {
          ATerm u_4 (ATerm t)
          {
            ATerm v_4 (ATerm t)
            {
              ATerm j_29 = NULL;
              j_29 = t;
              t = SSL_remove(j_29);
              return(t);
            }
            t = try_1_0(v_4, t);
            return(t);
          }
          t = map_1_0(u_4, t);
          t = i_29;
          {
            ATerm w_4 (ATerm t)
            {
              t = term_p_7;
              return(t);
            }
            t = end_scope_1_0(w_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(n_101, t_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm o_101 (ATerm), ATerm t)
{
  ATerm x_4 (ATerm t)
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_29 = NULL;
        t = term_c_20;
        t = get_config_0_0(t);
        k_29 = t;
        t = (ATerm) ATmakeAppl(sym_FILE_1, k_29);
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        t = term_f_20;
      }
    t = o_101(t);
    {
      ATerm y_4 (ATerm t)
      {
        ATerm g_20 = t;
        int h_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_i_20;
            t = get_config_0_0(t);
            ;
            LocalPopChoice(h_20);
          }
        else
          {
            t = g_20;
            t = term_j_20;
          }
        return(t);
      }
      t = copy_to_1_0(y_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(x_4, t);
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm m_29 = NULL;
    m_29 = t;
    if(match_string(t, "-k"))
      {
        t = m_29;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = m_29;
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm n_29 = NULL,o_29 = NULL;
    n_29 = t;
    t = SSL_string_to_int(n_29);
    o_29 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), o_29);
    t = n_29;
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_k_20;
    return(t);
  }
  t = ArgOption_3_0(z_4, a_5, b_5, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        ATerm q_29 = NULL;
        q_29 = t;
        if(match_string(t, "-S"))
          {
            t = q_29;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = q_29;
          }
        return(t);
      }
      ATerm d_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_o_20;
        return(t);
      }
      ATerm e_5 (ATerm t)
      {
        t = term_p_20;
        return(t);
      }
      t = Option_3_0(c_5, d_5, e_5, t);
      ;
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm g_5 (ATerm t)
            {
              ATerm r_29 = NULL,s_29 = NULL;
              r_29 = t;
              t = SSL_string_to_int(r_29);
              s_29 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_29);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, r_29);
              return(t);
            }
            ATerm h_5 (ATerm t)
            {
              t = term_s_20;
              return(t);
            }
            t = ArgOption_3_0(f_5, g_5, h_5, t);
            ;
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            {
              ATerm i_5 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm j_5 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_t_20;
                return(t);
              }
              ATerm k_5 (ATerm t)
              {
                t = term_u_20;
                return(t);
              }
              t = Option_3_0(i_5, j_5, k_5, t);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0_0 (ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0_0(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = keep_option_0_0(t);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm u_29 = NULL;
    u_29 = t;
    if(match_string(t, "-o"))
      {
        t = u_29;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = u_29;
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    ATerm v_29 = NULL;
    v_29 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), v_29);
    t = (ATerm) ATmakeAppl(sym_Output_1, v_29);
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_x_20;
    return(t);
  }
  t = ArgOption_3_0(l_5, m_5, n_5, t);
  return(t);
}
ATerm aterm_output_option_0_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0_0(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm o_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm p_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_a_21;
          return(t);
        }
        ATerm q_5 (ATerm t)
        {
          t = term_b_21;
          return(t);
        }
        t = Option_3_0(o_5, p_5, q_5, t);
      }
    }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL;
  y_29 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = y_29;
      t = register_usage_1_0(j_0, t);
    }
  else
    {
      ATerm g_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          z_29 = ATgetFirst((ATermList) t);
          a_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = a_30;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          b_30 = ATgetFirst((ATermList) t);
          c_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_29;
      t = h_0(t);
      t = b_30;
      t = i_0(t);
      g_30 = t;
      t = (ATerm) ATinsert(CheckATermList(c_30), g_30);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm i_30 = NULL;
    i_30 = t;
    if(match_string(t, "-i"))
      {
        t = i_30;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = i_30;
      }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm j_30 = NULL;
    j_30 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), j_30);
    t = (ATerm) ATmakeAppl(sym_Input_1, j_30);
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    t = term_c_21;
    return(t);
  }
  t = ArgOption_3_0(r_5, s_5, t_5, t);
  return(t);
}
ATerm io_options_0_0 (ATerm t)
{
  ATerm d_21 = t;
  int e_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0_0(t);
      ;
      LocalPopChoice(e_21);
    }
  else
    {
      t = d_21;
      {
        ATerm f_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0_0(t);
            ;
            LocalPopChoice(k_21);
          }
        else
          {
            t = f_21;
            t = general_options_0_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm k_30 = NULL,l_30 = NULL;
  k_30 = t;
  t = term_n_7;
  t = whoami_0_0(t);
  l_30 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), l_30), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = k_30;
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm m_30 = NULL;
  t = report_run_time_0_0(t);
  t = term_n_7;
  t = whoami_0_0(t);
  m_30 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue))), m_30));
  t = SSL_exit((ATerm) ATmakeInt(1));
  return(t);
}
ATerm whoami_0_0 (ATerm t)
{
  t = term_l_21;
  t = get_config_0_0(t);
  return(t);
}
ATerm foldr_2_0 (ATerm q_85 (ATerm), ATerm r_85 (ATerm), ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = q_85(t);
      ;
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm p_30 = NULL,q_30 = NULL,t_30 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            p_30 = ATgetFirst((ATermList) t);
            q_30 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = q_30;
        t = foldr_2_0(q_85, r_85, t);
        t_30 = t;
        t = (ATerm) ATmakeAppl(sym__2, p_30, t_30);
        t = r_85(t);
      }
    }
  return(t);
}
ATerm crush_2_0 (ATerm j_89 (ATerm), ATerm k_89 (ATerm), ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL;
  u_30 = t;
  t = SSL_explode_term(u_30);
  if(match_cons(t, sym__2))
    {
      ATerm o_21 = ATgetArgument(t, 0);
      v_30 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = v_30;
  t = foldr_2_0(j_89, k_89, t);
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm w_30 = NULL;
  t = times_0_0(t);
  {
    ATerm u_5 (ATerm t)
    {
      t = term_x_10;
      return(t);
    }
    ATerm v_5 (ATerm t)
    {
      ATerm x_30 = NULL,y_30 = NULL;
      if(match_cons(t, sym__2))
        {
          x_30 = ATgetArgument(t, 0);
          y_30 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm p_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(x_30, y_30);
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = p_21;
            t = SSL_addr(x_30, y_30);
          }
      }
      return(t);
    }
    t = crush_2_0(u_5, v_5, t);
    w_30 = t;
    t = SSL_TicksToSeconds(w_30);
  }
  return(t);
}
ATerm geq_0_0 (ATerm t)
{
  ATerm h_31 = NULL,i_31 = NULL,j_31 = NULL;
  h_31 = t;
  if(match_cons(t, sym__2))
    {
      i_31 = ATgetArgument(t, 0);
      j_31 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm r_21 = t;
    int v_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_31;
        if((i_31 != t))
          {
            _fail(t);
          }
        t = h_31;
        ;
        LocalPopChoice(v_21);
      }
    else
      {
        t = r_21;
        t = h_31;
        {
          ATerm w_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(i_31, j_31);
              ;
              LocalPopChoice(a_22);
            }
          else
            {
              t = w_21;
              t = SSL_gtr(i_31, j_31);
            }
          t = (ATerm) ATmakeAppl(sym__2, i_31, j_31);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm e_93 (ATerm), ATerm t)
{
  ATerm w_5 (ATerm t)
  {
    ATerm m_31 = NULL,n_31 = NULL;
    m_31 = t;
    t = term_j_10;
    t = get_config_0_0(t);
    n_31 = t;
    t = (ATerm) ATmakeAppl(sym__2, n_31, term_u_9);
    t = geq_0_0(t);
    t = m_31;
    t = e_93(t);
    return(t);
  }
  t = try_1_0(w_5, t);
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm x_5 (ATerm t)
  {
    ATerm p_31 = NULL,q_31 = NULL;
    t = run_time_0_0(t);
    p_31 = t;
    t = term_n_7;
    t = whoami_0_0(t);
    q_31 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), p_31), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), q_31));
    t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_22), p_31), term_d_22), q_31));
    return(t);
  }
  t = if_verbose1_1_0(x_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm b_96 (ATerm), ATerm t)
{
  ATerm h_22 = t;
  int i_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_x_22;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(i_22);
    }
  else
    {
      t = h_22;
      {
        ATerm y_5 (ATerm t)
        {
          ATerm y_22 = t;
          int z_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(z_22);
            }
          else
            {
              t = y_22;
              {
                ATerm a_23 = t;
                int b_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(b_23);
                  }
                else
                  {
                    t = a_23;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1_0(y_5, t);
      }
    }
  t = b_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
{
  ATerm t_31 = NULL,u_31 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      t_31 = ATgetFirst((ATermList) t);
      u_31 = (ATerm) ATgetNext((ATermList) t);
      {
        ATerm y_31 = NULL,z_31 = NULL;
        t = u_31;
        t = g_0(t);
        y_31 = t;
        t = t_31;
        t = f_0(t);
        z_31 = t;
        t = u_31;
        {
          ATerm z_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(y_31), z_31);
            return(t);
          }
          t = reverse_acc_2_0(f_0, z_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_n_7;
      t = g_0(t);
    }
  return(t);
}
ATerm reverse_0_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2_0(_id, a_6, t);
  return(t);
}
ATerm Program_1_0 (ATerm p_69 (ATerm), ATerm t)
{
  ATerm a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL;
  d_32 = t;
  if(match_cons(t, sym_Program_1))
    {
      b_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(d_32);
  a_32 = t;
  t = b_32;
  t = p_69(t);
  c_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, c_32), a_32);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_l_21;
      t = get_config_0_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm b_6 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = option_defined_1_0(b_6, t);
      }
    }
  t = try_1_0(_fail, t);
  t = term_h_23;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  t = reverse_0_0(t);
  {
    ATerm c_6 (ATerm t)
    {
      ATerm h_32 = NULL;
      h_32 = t;
      t = (ATerm) ATinsert(ATinsert(ATempty, h_32), term_i_23);
      t = echo_0_0(t);
      return(t);
    }
    t = map_1_0(c_6, t);
    t = try_1_0(_fail, t);
  }
  return(t);
}
ATerm system_usage_0_0 (ATerm t)
{
  t = default_system_usage_0_0(t);
  return(t);
}
ATerm Undefined_1_0 (ATerm q_69 (ATerm), ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL,l_32 = NULL;
  l_32 = t;
  if(match_cons(t, sym_Undefined_1))
    {
      j_32 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(l_32);
  i_32 = t;
  t = j_32;
  t = q_69(t);
  k_32 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, k_32), i_32);
  return(t);
}
ATerm fetch_1_0 (ATerm z_79 (ATerm), ATerm t)
{
  ATerm p_32 (ATerm t)
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(z_79, _id, t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = Cons_2_0(_id, p_32, t);
      }
    return(t);
  }
  t = p_32(t);
  return(t);
}
ATerm option_defined_1_0 (ATerm b_97 (ATerm), ATerm t)
{
  t = fetch_1_0(b_97, t);
  return(t);
}
ATerm echo_0_0 (ATerm t)
{
  ATerm r_32 = NULL,s_32 = NULL;
  r_32 = t;
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            t = r_32;
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                ATerm o_23 = ATgetFirst((ATermList) t);
                ATerm p_23 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = r_32;
          }
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = (ATerm) ATinsert(ATempty, r_32);
      }
    s_32 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stdout_0), s_32);
    t = r_32;
  }
  return(t);
}
ATerm default_system_about_0_0 (ATerm t)
{
  t = term_l_21;
  t = get_config_0_0(t);
  t = echo_0_0(t);
  return(t);
}
ATerm system_about_0_0 (ATerm t)
{
  t = default_system_about_0_0(t);
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm q_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = q_23;
      {
        ATerm y_32 = NULL,z_32 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            y_32 = ATgetFirst((ATermList) t);
            z_32 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = y_32;
        {
          ATerm d_6 (ATerm t)
          {
            t = z_32;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(d_6, t);
        }
      }
    }
  return(t);
}
ATerm conc_more_lists_0_0 (ATerm t)
{
  ATerm d_33 = NULL,e_33 = NULL;
  d_33 = t;
  t = SSL_explode_term(d_33);
  if(match_cons(t, sym__2))
    {
      ATerm s_23 = ATgetArgument(t, 0);
      if((ATgetSymbol((ATermAppl) s_23) != ATmakeSymbol("", 0, ATtrue)))
        _fail(t);
      e_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = e_33;
  t = concat_0_0(t);
  return(t);
}
ATerm at_end_1_0 (ATerm f_80 (ATerm), ATerm t)
{
  ATerm f_33 (ATerm t)
  {
    ATerm t_23 = t;
    int u_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, f_33, t);
        ;
        LocalPopChoice(u_23);
      }
    else
      {
        t = t_23;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = f_80(t);
      }
    return(t);
  }
  t = f_33(t);
  return(t);
}
ATerm conc_two_lists_0_0 (ATerm t)
{
  ATerm g_33 = NULL,h_33 = NULL;
  if(match_cons(t, sym__2))
    {
      h_33 = ATgetArgument(t, 0);
      g_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = h_33;
  {
    ATerm e_6 (ATerm t)
    {
      t = g_33;
      return(t);
    }
    t = at_end_1_0(e_6, t);
  }
  return(t);
}
ATerm conc_0_0 (ATerm t)
{
  ATerm v_23 = t;
  int w_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0_0(t);
      ;
      LocalPopChoice(w_23);
    }
  else
    {
      t = v_23;
      t = conc_more_lists_0_0(t);
    }
  return(t);
}
ATerm _2_0 (ATerm b_62 (ATerm), ATerm c_62 (ATerm), ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL,l_33 = NULL,m_33 = NULL,n_33 = NULL;
  n_33 = t;
  if(match_cons(t, sym__2))
    {
      j_33 = ATgetArgument(t, 0);
      k_33 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(n_33);
  i_33 = t;
  t = j_33;
  t = b_62(t);
  l_33 = t;
  t = k_33;
  t = c_62(t);
  m_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, l_33, m_33), i_33);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm r_33 = NULL;
  ATerm f_6 (ATerm t)
  {
    ATerm s_33 = NULL;
    s_33 = t;
    t = SSL_explode_string(s_33);
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    ATerm t_33 = NULL;
    t_33 = t;
    t = SSL_explode_string(t_33);
    return(t);
  }
  t = _2_0(f_6, g_6, t);
  t = conc_0_0(t);
  r_33 = t;
  t = SSL_implode_string(r_33);
  return(t);
}
ATerm debug_1_0 (ATerm n_91 (ATerm), ATerm t)
{
  ATerm u_33 = NULL,v_33 = NULL;
  u_33 = t;
  t = n_91(t);
  v_33 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, u_33), v_33));
  t = u_33;
  return(t);
}
ATerm map_1_0 (ATerm p_79 (ATerm), ATerm t)
{
  ATerm w_33 (ATerm t)
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        t = Cons_2_0(p_79, w_33, t);
      }
    return(t);
  }
  t = w_33(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm z_23 = t;
  int a_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_34 = NULL;
      e_34 = t;
      t = SSL_is_string(e_34);
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
            ATerm h_6 (ATerm t)
            {
              t = try_1_0(eval_config_0_0, t);
              return(t);
            }
            t = map_1_0(h_6, t);
            ;
            LocalPopChoice(c_24);
          }
        else
          {
            t = b_24;
            {
              ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
              o_34 = t;
              if(match_cons(t, sym_Path_1))
                {
                  p_34 = ATgetArgument(t, 0);
                  t = p_34;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      p_34 = ATgetArgument(t, 0);
                      t = p_34;
                      {
                        ATerm d_24 = t;
                        int e_24 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = get_config_0_0(t);
                            ;
                            LocalPopChoice(e_24);
                          }
                        else
                          {
                            t = d_24;
                            {
                              ATerm i_6 (ATerm t)
                              {
                                t = term_f_24;
                                return(t);
                              }
                              t = debug_1_0(i_6, t);
                              _fail(t);
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm u_34 = NULL,v_34 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          p_34 = ATgetArgument(t, 0);
                          q_34 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = p_34;
                      t = eval_config_0_0(t);
                      u_34 = t;
                      t = q_34;
                      t = eval_config_0_0(t);
                      v_34 = t;
                      t = (ATerm) ATmakeAppl(sym__2, u_34, v_34);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm get_config_0_0 (ATerm t)
{
  ATerm y_34 = NULL;
  y_34 = t;
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_34);
  {
    ATerm j_6 (ATerm t)
    {
      ATerm z_34 = NULL;
      t = eval_config_0_0(t);
      z_34 = t;
      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), y_34, z_34);
      t = z_34;
      return(t);
    }
    t = try_1_0(j_6, t);
  }
  return(t);
}
ATerm try_1_0 (ATerm e_72 (ATerm), ATerm t)
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_72(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm i_24 = t;
  int j_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_6 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm l_6 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_m_24;
        return(t);
      }
      ATerm m_6 (ATerm t)
      {
        t = term_n_24;
        return(t);
      }
      t = Option_3_0(k_6, l_6, m_6, t);
      ;
      LocalPopChoice(j_24);
    }
  else
    {
      t = i_24;
      {
        ATerm n_6 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm o_6 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_o_24;
          return(t);
        }
        ATerm p_6 (ATerm t)
        {
          t = term_p_24;
          return(t);
        }
        t = Option_3_0(n_6, o_6, p_6, t);
      }
    }
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL,f_35 = NULL;
  if(match_cons(t, sym__3))
    {
      c_35 = ATgetArgument(t, 0);
      d_35 = ATgetArgument(t, 1);
      e_35 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, c_35, d_35);
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm s_24 = ATgetArgument(t, 0);
            ATerm t_24 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(c_35, d_35);
        ;
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = (ATerm) ATempty;
      }
    f_35 = t;
    t = SSL_table_put(c_35, d_35, (ATerm) ATinsert(CheckATermList(f_35), e_35));
    t = (ATerm) ATmakeAppl(sym__3, c_35, d_35, e_35);
  }
  return(t);
}
ATerm register_usage_1_0 (ATerm g_98 (ATerm), ATerm t)
{
  ATerm k_35 = NULL;
  t = term_n_7;
  t = g_98(t);
  k_35 = t;
  t = (ATerm) ATmakeAppl(sym__3, term_u_24, term_v_24, k_35);
  t = table_push_0_0(t);
  _fail(t);
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,p_35 = NULL;
  m_35 = t;
  if(match_string(t, "register-usage-info"))
    {
      t = m_35;
      t = register_usage_1_0(d_0, t);
    }
  else
    {
      ATerm s_35 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          n_35 = ATgetFirst((ATermList) t);
          p_35 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = n_35;
      t = a_0(t);
      t = term_n_7;
      t = b_0(t);
      s_35 = t;
      t = (ATerm) ATinsert(CheckATermList(p_35), s_35);
    }
  return(t);
}
ATerm system_usage_switch_0_0 (ATerm t)
{
  ATerm q_6 (ATerm t)
  {
    ATerm u_35 = NULL;
    u_35 = t;
    if(match_string(t, "--help"))
      {
        t = u_35;
      }
    else
      {
        if(match_string(t, "-h"))
          {
            t = u_35;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
              _fail(t);
            t = u_35;
          }
      }
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
    t = term_w_24;
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = term_x_24;
    return(t);
  }
  t = Option_3_0(q_6, r_6, s_6, t);
  return(t);
}
ATerm Cons_2_0 (ATerm k_63 (ATerm), ATerm l_63 (ATerm), ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL;
  a_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      w_35 = ATgetFirst((ATermList) t);
      x_35 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(a_36);
  v_35 = t;
  t = w_35;
  t = k_63(t);
  y_35 = t;
  t = x_35;
  t = l_63(t);
  z_35 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(z_35), y_35), v_35);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm e_98 (ATerm), ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  {
    ATerm t_6 (ATerm t)
    {
      t = term_y_24;
      t = e_98(t);
      return(t);
    }
    t = try_1_0(t_6, t);
    t = h_36;
    {
      ATerm u_6 (ATerm t)
      {
        ATerm i_36 = NULL;
        i_36 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), i_36);
        t = (ATerm) ATmakeAppl(sym_Program_1, i_36);
        return(t);
      }
      ATerm v_6 (ATerm t)
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_25 = t;
            int c_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_25);
              }
            else
              {
                t = b_25;
                t = e_98(t);
                t = Cons_2_0(_id, v_6, t);
              }
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            {
              ATerm k_36 = NULL,l_36 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  k_36 = ATgetFirst((ATermList) t);
                  l_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(l_36), (ATerm) ATmakeAppl(sym_Undefined_1, k_36));
            }
          }
        return(t);
      }
      t = Cons_2_0(u_6, v_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm d_98 (ATerm), ATerm t)
{
  ATerm r_36 = NULL,s_36 = NULL,t_36 = NULL;
  r_36 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = r_36;
  {
    ATerm w_6 (ATerm t)
    {
      ATerm d_25 = t;
      int e_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = d_98(t);
          ;
          LocalPopChoice(e_25);
        }
      else
        {
          t = d_25;
          {
            ATerm f_25 = t;
            int g_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = system_usage_switch_0_0(t);
                ;
                LocalPopChoice(g_25);
              }
            else
              {
                t = f_25;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(w_6, t);
    {
      ATerm x_6 (ATerm t)
      {
        ATerm i_25 = t;
        int j_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_36 = NULL;
            y_36 = t;
            {
              ATerm l_25 = t;
              int m_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_36;
                  {
                    ATerm n_25 = t;
                    int o_25 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = term_x_22;
                        t = get_config_0_0(t);
                        ;
                        LocalPopChoice(o_25);
                      }
                    else
                      {
                        t = n_25;
                        {
                          ATerm y_6 (ATerm t)
                          {
                            if(!(match_cons(t, sym_Help_0)))
                              _fail(t);
                            return(t);
                          }
                          t = option_defined_1_0(y_6, t);
                        }
                      }
                    t = y_36;
                    t = system_usage_0_0(t);
                    t = SSL_exit((ATerm) ATmakeInt(0));
                  }
                  ;
                  LocalPopChoice(m_25);
                }
              else
                {
                  t = l_25;
                  t = term_l_24;
                  t = get_config_0_0(t);
                  t = y_36;
                  t = system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
            }
            ;
            LocalPopChoice(j_25);
          }
        else
          {
            t = i_25;
            {
              ATerm z_6 (ATerm t)
              {
                ATerm a_7 (ATerm t)
                {
                  s_36 = t;
                  return(t);
                }
                t = Undefined_1_0(a_7, t);
                return(t);
              }
              t = option_defined_1_0(z_6, t);
              t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(s_36)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
              t = (ATerm) ATmakeAppl(sym__2, term_b_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_36)), term_p_25));
              t = system_usage_0_0(t);
              t = SSL_exit((ATerm) ATmakeInt(1));
            }
          }
        return(t);
      }
      t = try_1_0(x_6, t);
      t_36 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = t_36;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm d_96 (ATerm), ATerm e_96 (ATerm), ATerm f_96 (ATerm), ATerm g_96 (ATerm), ATerm t)
{
  ATerm b_8 = NULL;
  t = parse_options_1_0(d_96, t);
  b_8 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), b_8);
  t = b_8;
  t = f_96(t);
  {
    ATerm q_25 = t;
    int r_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(e_96, t);
        ;
        LocalPopChoice(r_25);
      }
    else
      {
        t = q_25;
        {
          ATerm s_25 = t;
          int t_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = g_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(t_25);
            }
          else
            {
              t = s_25;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm option_wrap_2_0 (ATerm h_96 (ATerm), ATerm i_96 (ATerm), ATerm t)
{
  t = option_wrap_4_0(h_96, default_usage_0_0, _id, i_96, t);
  return(t);
}
ATerm xtc_io_wrap_2_0 (ATerm s_101 (ATerm), ATerm t_101 (ATerm), ATerm t)
{
  ATerm b_7 (ATerm t)
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = s_101(t);
        ;
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        t = io_options_0_0(t);
      }
    return(t);
  }
  ATerm c_7 (ATerm t)
  {
    t = xtc_io_1_0(t_101, t);
    return(t);
  }
  t = option_wrap_2_0(b_7, c_7, t);
  return(t);
}
ATerm xtc_io_wrap_1_0 (ATerm r_101 (ATerm), ATerm t)
{
  t = xtc_io_wrap_2_0(_fail, r_101, t);
  return(t);
}
ATerm io_Abox_2_html_0_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    t = read_from_0_0(t);
    t = abox2html_0_0(t);
    t = topdown_print_to_0_0(t);
    return(t);
  }
  t = xtc_io_wrap_1_0(d_7, t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = io_Abox_2_html_0_0(t);
  return(t);
}

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
ATerm term_j_28;
ATerm term_i_28;
ATerm term_w_27;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_f_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_q_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_f_22;
ATerm term_y_21;
ATerm term_x_21;
ATerm term_p_21;
ATerm term_x_20;
ATerm term_y_19;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_n_17;
ATerm term_h_17;
ATerm term_b_17;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_q_15;
ATerm term_m_14;
ATerm term_v_13;
ATerm term_m_13;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_n_11;
ATerm term_i_11;
ATerm term_h_11;
ATerm term_y_10;
ATerm term_u_10;
ATerm term_i_10;
ATerm term_n_9;
ATerm term_m_9;
ATerm term_n_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_e_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_w_6;
void init_constant_terms (void)
{
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
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
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_h_11));
  term_h_11 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_11);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statistics", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(sym__3, term_x_25, term_y_25, term_a_7);
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--about          Display information about this program", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--version        Same as --about", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_27));
  term_w_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
}
ATerm assert_1_0 (ATerm t_90 (ATerm), ATerm);
ATerm open_file_0_0 (ATerm);
ATerm new_0_0 (ATerm);
ATerm new_file_0_0 (ATerm);
ATerm xtc_new_file_0_0 (ATerm);
ATerm topdown_print_to_0_0 (ATerm);
ATerm Html2text_0_0 (ATerm);
ATerm bottomup_1_0 (ATerm g_74 (ATerm), ATerm);
ATerm flat_list_0_0 (ATerm);
ATerm oncetd_1_0 (ATerm j_75 (ATerm), ATerm);
ATerm replace_quotes_0_0 (ATerm);
ATerm listtd_1_0 (ATerm g_81 (ATerm), ATerm);
ATerm html_string_0_0 (ATerm);
ATerm remove_trailing_1_0 (ATerm m_101 (ATerm), ATerm);
ATerm make_html_comment_0_0 (ATerm);
ATerm sep_by_1_0 (ATerm h_72 (ATerm), ATerm);
ATerm filter_1_0 (ATerm b_87 (ATerm), ATerm);
ATerm Hspace_0_0 (ATerm);
ATerm separate_by_0_0 (ATerm);
ATerm if_verbose2_1_0 (ATerm q_93 (ATerm), ATerm);
ATerm separate_by_1_0 (ATerm s_79 (ATerm), ATerm);
ATerm LNAT_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm);
ATerm L_2_0 (ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm);
ATerm tov_1_0 (ATerm g_72 (ATerm), ATerm);
ATerm Ispace_0_0 (ATerm);
ATerm while_not_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm);
ATerm for_3_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm);
ATerm copy_0_0 (ATerm);
ATerm SOpt_2_0 (ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm);
ATerm SOpt_value_1_0 (ATerm p_101 (ATerm), ATerm);
ATerm Vspace_0_0 (ATerm);
ATerm make_hs_0_0 (ATerm);
ATerm toa_1_0 (ATerm j_72 (ATerm), ATerm);
ATerm R_2_0 (ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm);
ATerm construct_rows_0_0 (ATerm);
ATerm Abox2html_0_0 (ATerm);
ATerm topdown_1_0 (ATerm f_74 (ATerm), ATerm);
ATerm at_last_1_0 (ATerm y_80 (ATerm), ATerm);
ATerm at_suffix_1_0 (ATerm r_80 (ATerm), ATerm);
ATerm split_fetch_1_0 (ATerm k_80 (ATerm), ATerm);
ATerm Distribute_0_0 (ATerm);
ATerm normalize_0_0 (ATerm);
ATerm abox2html_0_0 (ATerm);
ATerm fclose_0_0 (ATerm);
ATerm stdin_stream_0_0 (ATerm);
ATerm stdout_stream_0_0 (ATerm);
ATerm stderr_stream_0_0 (ATerm);
ATerm open_stream_0_0 (ATerm);
ATerm ReadFromFile_0_0 (ATerm);
ATerm read_from_0_0 (ATerm);
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm);
ATerm table_pop_0_0 (ATerm);
ATerm end_scope_1_0 (ATerm q_90 (ATerm), ATerm);
ATerm restore_always_2_0 (ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm);
ATerm begin_scope_1_0 (ATerm p_90 (ATerm), ATerm);
ATerm xtc_temp_files_1_0 (ATerm y_101 (ATerm), ATerm);
ATerm xtc_io_1_0 (ATerm z_101 (ATerm), ATerm);
ATerm default_usage_0_0 (ATerm);
ATerm keep_option_0_0 (ATerm);
ATerm verbose_option_0_0 (ATerm);
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm);
ATerm output_option_0_0 (ATerm);
ATerm table_push_0_0 (ATerm);
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm);
ATerm input_option_0_0 (ATerm);
ATerm report_failure_0_0 (ATerm);
ATerm whoami_0_0 (ATerm);
ATerm foldr_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm);
ATerm times_0_0 (ATerm);
ATerm run_time_0_0 (ATerm);
ATerm geq_0_0 (ATerm);
ATerm if_verbose1_1_0 (ATerm p_93 (ATerm), ATerm);
ATerm report_run_time_0_0 (ATerm);
ATerm report_success_0_0 (ATerm);
ATerm need_help_1_0 (ATerm m_96 (ATerm), ATerm);
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm);
ATerm Program_1_0 (ATerm w_69 (ATerm), ATerm);
ATerm default_system_usage_0_0 (ATerm);
ATerm Undefined_1_0 (ATerm x_69 (ATerm), ATerm);
ATerm fetch_1_0 (ATerm h_80 (ATerm), ATerm);
ATerm echo_0_0 (ATerm);
ATerm default_system_about_0_0 (ATerm);
ATerm concat_0_0 (ATerm);
ATerm at_end_1_0 (ATerm n_80 (ATerm), ATerm);
ATerm _2_0 (ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm);
ATerm conc_strings_0_0 (ATerm);
ATerm map_1_0 (ATerm w_79 (ATerm), ATerm);
ATerm eval_config_0_0 (ATerm);
ATerm system_about_switch_0_0 (ATerm);
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm);
ATerm parse_options_p__1_0 (ATerm p_98 (ATerm), ATerm);
ATerm parse_options_1_0 (ATerm o_98 (ATerm), ATerm);
ATerm option_wrap_4_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm);
ATerm main_0_0 (ATerm);
ATerm main_0 (ATerm t)
{
  t = main_0_0(t);
  return(t);
}
ATerm assert_1_0 (ATerm t_90 (ATerm), ATerm t)
{
  ATerm f_0 = NULL,m_0 = NULL,n_0 = NULL,o_0 = NULL,s_0 = NULL;
  if(match_cons(t, sym__2))
    {
      f_0 = ATgetArgument(t, 0);
      m_0 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = t_90(t);
  n_0 = t;
  t = (ATerm) ATmakeAppl(sym__3, n_0, f_0, m_0);
  t = table_push_0_0(t);
  {
    ATerm w_1 = t;
    int s_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(n_0, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(s_6);
      }
    else
      {
        t = w_1;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        o_0 = ATgetFirst((ATermList) t);
        s_0 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(n_0, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(s_0), (ATerm) ATinsert(CheckATermList(o_0), f_0)));
    t = (ATerm) ATmakeAppl(sym__2, f_0, m_0);
  }
  return(t);
}
ATerm open_file_0_0 (ATerm t)
{
  ATerm o_1 (ATerm w_0, ATerm t)
  {
    t = w_0;
    {
      ATerm t_6 = t;
      if((PushChoice() == 0))
        {
          if(match_cons(t, sym__2))
            {
              ATerm u_6 = ATgetArgument(t, 0);
              ATerm v_6 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_6;
        }
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue))));
      t = (ATerm) ATmakeAppl(sym__2, w_0, term_w_6);
      t = open_file_0_0(t);
    }
    return(t);
  }
  ATerm p_1 (ATerm d_1, ATerm e_1, ATerm g_1, ATerm t)
  {
    t = SSL_open_file(d_1, e_1);
    return(t);
  }
  ATerm k_1 = NULL,m_1 = NULL,n_1 = NULL;
  k_1 = t;
  if(match_cons(t, sym__2))
    {
      m_1 = ATgetArgument(t, 0);
      n_1 = ATgetArgument(t, 1);
      {
        ATerm x_6 = t;
        int y_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = o_1(k_1, t);
            ;
            LocalPopChoice(y_6);
          }
        else
          {
            t = x_6;
            t = p_1(m_1, n_1, k_1, t);
          }
      }
    }
  else
    {
      t = o_1(k_1, t);
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
  ATerm r_1 = NULL;
  t = term_a_7;
  t = new_0_0(t);
  r_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, r_1, term_b_7);
  t = conc_strings_0_0(t);
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_1 = NULL;
        v_1 = t;
        t = SSL_access(v_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
        t = new_file_0_0(t);
        ;
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
      }
  }
  return(t);
}
ATerm xtc_new_file_0_0 (ATerm t)
{
  ATerm y_1 = NULL;
  t = new_file_0_0(t);
  y_1 = t;
  t = (ATerm) ATmakeAppl(sym__2, y_1, term_w_6);
  t = open_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym__2, y_1, term_a_7);
  {
    ATerm b_0 (ATerm t)
    {
      t = term_e_7;
      return(t);
    }
    t = assert_1_0(b_0, t);
    t = y_1;
  }
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm a_2 = NULL,b_2 = NULL;
  a_2 = t;
  t = xtc_new_file_0_0(t);
  b_2 = t;
  t = a_2;
  {
    ATerm l_0 (ATerm t)
    {
      ATerm h_7 = t;
      int i_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_2 = NULL,u_0 = NULL;
          g_2 = t;
          t = SSL_is_string(g_2);
          u_0 = t;
          t = SSL_print(b_2, (ATerm) ATinsert(ATempty, u_0));
          t = u_0;
          ;
          LocalPopChoice(i_7);
        }
      else
        {
          t = h_7;
        }
      return(t);
    }
    t = topdown_1_0(l_0, t);
    t = SSL_close_file(b_2);
    t = (ATerm) ATmakeAppl(sym_FILE_1, b_2);
  }
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm q_2 = NULL,r_2 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      r_2 = ATgetArgument(t, 0);
      q_2 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_7), q_2), term_k_7), r_2), term_j_7);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          r_2 = ATgetArgument(t, 0);
          q_2 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_7), q_2), term_k_7), r_2), term_n_7);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              r_2 = ATgetArgument(t, 0);
              q_2 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_7), q_2), term_k_7), r_2), term_p_7);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  r_2 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_7), r_2), term_q_7);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      r_2 = ATgetArgument(t, 0);
                      q_2 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_7), q_2), term_k_7), r_2), term_s_7);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          r_2 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), r_2), term_v_7);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              r_2 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_7), r_2), term_y_7);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  r_2 = ATgetArgument(t, 0);
                                  q_2 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_8), q_2), term_b_8), r_2), term_a_8);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      r_2 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_8), r_2), term_g_8);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_i_8;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_j_8;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_k_8;
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
ATerm bottomup_1_0 (ATerm g_74 (ATerm), ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    t = bottomup_1_0(g_74, t);
    return(t);
  }
  t = SRTS_all(p_0, t);
  t = g_74(t);
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
            ATerm q_0 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = Cons_2_0(q_0, flat_list_0_0, t);
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
                  ATerm h_9 = NULL,i_9 = NULL,k_9 = NULL;
                  ATerm r_0 (ATerm t)
                  {
                    ATerm l_9 = NULL;
                    l_9 = t;
                    if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
                      {
                        t = l_9;
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
                        t = l_9;
                      }
                    return(t);
                  }
                  t = Cons_2_0(r_0, _id, t);
                  h_9 = t;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      i_9 = ATgetFirst((ATermList) t);
                      {
                        ATerm w_8 = (ATerm) ATgetNext((ATermList) t);
                      }
                    }
                  else
                    _fail(t);
                  t = h_9;
                  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                    {
                      ATerm x_8 = ATgetFirst((ATermList) t);
                      k_9 = (ATerm) ATgetNext((ATermList) t);
                    }
                  else
                    _fail(t);
                  t = (ATerm) ATmakeAppl(sym__2, i_9, k_9);
                  {
                    ATerm y_8 = t;
                    int z_8 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(match_cons(t, sym__2))
                          {
                            ATerm a_9 = ATgetArgument(t, 0);
                            ATerm b_9 = ATgetArgument(t, 1);
                          }
                        else
                          _fail(t);
                        t = i_9;
                        {
                          ATerm t_0 (ATerm t)
                          {
                            t = k_9;
                            return(t);
                          }
                          t = at_end_1_0(t_0, t);
                        }
                        ;
                        LocalPopChoice(z_8);
                      }
                    else
                      {
                        t = y_8;
                        {
                          ATerm a_1 = NULL;
                          t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, i_9, k_9));
                          if(match_cons(t, sym__2))
                            {
                              ATerm c_9 = ATgetArgument(t, 0);
                              if((ATgetSymbol((ATermAppl) c_9) != ATmakeSymbol("", 0, ATtrue)))
                                _fail(t);
                              a_1 = ATgetArgument(t, 1);
                            }
                          else
                            _fail(t);
                          t = a_1;
                          t = concat_0_0(t);
                        }
                      }
                    t = flat_list_0_0(t);
                  }
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
ATerm oncetd_1_0 (ATerm j_75 (ATerm), ATerm t)
{
  ATerm w_9 (ATerm t)
  {
    ATerm e_9 = t;
    int f_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = j_75(t);
        ;
        LocalPopChoice(f_9);
      }
    else
      {
        t = e_9;
        t = SRTS_one(w_9, t);
      }
    return(t);
  }
  t = w_9(t);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm x_9 = NULL,y_9 = NULL;
  ATerm v_0 (ATerm t)
  {
    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
      _fail(t);
    return(t);
  }
  ATerm x_0 (ATerm t)
  {
    if(((x_9 != NULL) && (x_9 != t)))
      _fail(t);
    else
      x_9 = t;
    return(t);
  }
  t = Cons_2_0(v_0, x_0, t);
  t = not_null(x_9);
  {
    ATerm y_0 (ATerm t)
    {
      ATerm z_9 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm g_9 = ATgetFirst((ATermList) t);
          if(((ATgetType(g_9) != AT_INT) || (ATgetInt((ATermInt) g_9) != 34)))
            _fail(t);
          z_9 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = (ATerm) ATinsert(ATinsert(CheckATermList(z_9), term_m_9), term_m_9);
      return(t);
    }
    t = oncetd_1_0(y_0, t);
    y_9 = t;
    t = (ATerm) ATinsert(ATinsert(CheckATermList(y_9), term_n_9), term_n_9);
  }
  return(t);
}
ATerm listtd_1_0 (ATerm g_81 (ATerm), ATerm t)
{
  ATerm a_10 (ATerm t)
  {
    t = g_81(t);
    {
      ATerm o_9 = t;
      int p_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          ;
          LocalPopChoice(p_9);
        }
      else
        {
          t = o_9;
          t = Cons_2_0(_id, a_10, t);
        }
    }
    return(t);
  }
  t = a_10(t);
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL;
  g_10 = t;
  t = SSL_explode_string(g_10);
  {
    ATerm z_0 (ATerm t)
    {
      ATerm q_9 = t;
      int r_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = replace_quotes_0_0(t);
          ;
          LocalPopChoice(r_9);
        }
      else
        {
          t = q_9;
        }
      return(t);
    }
    t = listtd_1_0(z_0, t);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm s_9 = t;
        int u_9 = stack_ptr;
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
            LocalPopChoice(u_9);
          }
        else
          {
            t = s_9;
          }
        return(t);
      }
      t = map_1_0(c_1, t);
      t = flat_list_0_0(t);
      h_10 = t;
      t = SSL_implode_string(h_10);
    }
  }
  return(t);
}
ATerm remove_trailing_1_0 (ATerm m_101 (ATerm), ATerm t)
{
  ATerm o_10 (ATerm t)
  {
    ATerm v_9 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_10 = NULL;
        t = Cons_2_0(m_101, _id, t);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm c_10 = ATgetFirst((ATermList) t);
            n_10 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = n_10;
        t = o_10(t);
        ;
        LocalPopChoice(b_10);
      }
    else
      {
        t = v_9;
      }
    return(t);
  }
  t = o_10(t);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  ATerm x_10 = NULL,b_1 = NULL;
  x_10 = t;
  t = SSL_explode_string(x_10);
  {
    ATerm f_1 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, f_1, t);
    b_1 = t;
    t = (ATerm) ATmakeAppl(sym__2, b_1, (ATerm) ATempty);
    {
      ATerm a_12 (ATerm t)
      {
        ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL,s_11 = NULL;
        if(match_cons(t, sym__2))
          {
            p_11 = ATgetArgument(t, 0);
            s_11 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = p_11;
        if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
          {
            ATerm i_2 = NULL,j_2 = NULL;
            t = s_11;
            {
              ATerm h_1 (ATerm t)
              {
                ATerm k_2 = NULL;
                k_2 = t;
                if(match_int(t, 9))
                  {
                    t = k_2;
                  }
                else
                  {
                    if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                      _fail(t);
                    t = k_2;
                  }
                return(t);
              }
              t = remove_trailing_1_0(h_1, t);
              j_2 = t;
              t = SSL_implode_string(j_2);
              i_2 = t;
              t = (ATerm) ATinsert(ATempty, i_2);
            }
          }
        else
          {
            if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
              {
                q_11 = ATgetFirst((ATermList) t);
                r_11 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = q_11;
            if(match_int(t, 10))
              {
                ATerm d_10 = t;
                int f_10 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm y_2 = NULL,a_3 = NULL,c_3 = NULL;
                    t = s_11;
                    {
                      ATerm i_1 (ATerm t)
                      {
                        ATerm f_3 = NULL;
                        f_3 = t;
                        if(match_int(t, 9))
                          {
                            t = f_3;
                          }
                        else
                          {
                            if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
                              _fail(t);
                            t = f_3;
                          }
                        return(t);
                      }
                      t = remove_trailing_1_0(i_1, t);
                      a_3 = t;
                      t = SSL_implode_string(a_3);
                      y_2 = t;
                      t = (ATerm) ATmakeAppl(sym__2, r_11, (ATerm) ATempty);
                      t = a_12(t);
                      c_3 = t;
                      t = (ATerm) ATinsert(CheckATermList(c_3), y_2);
                    }
                    ;
                    LocalPopChoice(f_10);
                  }
                else
                  {
                    t = d_10;
                    t = (ATerm) ATmakeAppl(sym__2, r_11, (ATerm) ATinsert(CheckATermList(s_11), q_11));
                    t = a_12(t);
                  }
              }
            else
              {
                t = (ATerm) ATmakeAppl(sym__2, r_11, (ATerm) ATinsert(CheckATermList(s_11), q_11));
                t = a_12(t);
              }
          }
        return(t);
      }
      t = a_12(t);
      {
        ATerm j_1 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        t = remove_trailing_1_0(j_1, t);
        {
          ATerm l_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = reverse_acc_2_0(_id, l_1, t);
          {
            ATerm q_1 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            t = remove_trailing_1_0(q_1, t);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm z_11 = NULL;
                z_11 = t;
                t = (ATerm) ATinsert(ATinsert(ATempty, term_i_10), z_11);
                return(t);
              }
              t = map_1_0(s_1, t);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm sep_by_1_0 (ATerm h_72 (ATerm), ATerm t)
{
  ATerm t_1 (ATerm t)
  {
    ATerm d_12 = NULL;
    d_12 = t;
    t = (ATerm) ATinsert(ATempty, d_12);
    return(t);
  }
  t = map_1_0(t_1, t);
  t = separate_by_1_0(h_72, t);
  t = concat_0_0(t);
  return(t);
}
ATerm filter_1_0 (ATerm b_87 (ATerm), ATerm t)
{
  ATerm j_10 = t;
  int k_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(k_10);
    }
  else
    {
      t = j_10;
      {
        ATerm l_10 = t;
        int m_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_1 (ATerm t)
            {
              t = filter_1_0(b_87, t);
              return(t);
            }
            t = Cons_2_0(b_87, u_1, t);
            ;
            LocalPopChoice(m_10);
          }
        else
          {
            t = l_10;
            {
              ATerm i_12 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  ATerm p_10 = ATgetFirst((ATermList) t);
                  i_12 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = i_12;
              t = filter_1_0(b_87, t);
            }
          }
      }
    }
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm l_12 = NULL;
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        if(!(match_cons(t, sym_HS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(x_1, t);
      ;
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      t = term_u_10;
    }
  l_12 = t;
  if(match_int(t, 0))
    {
      ATerm v_10 = t;
      int w_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = (ATerm) ATempty;
          ;
          LocalPopChoice(w_10);
        }
      else
        {
          t = v_10;
          t = (ATerm) ATmakeAppl(sym__2, l_12, term_y_10);
          t = copy_0_0(t);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, l_12, term_y_10);
      t = copy_0_0(t);
    }
  return(t);
}
ATerm separate_by_0_0 (ATerm t)
{
  ATerm o_12 = NULL,p_12 = NULL;
  if(match_cons(t, sym__2))
    {
      o_12 = ATgetArgument(t, 0);
      p_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = p_12;
  {
    ATerm z_10 = t;
    int a_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(a_11);
      }
    else
      {
        t = z_10;
        {
          ATerm z_1 (ATerm t)
          {
            ATerm b_11 = t;
            int c_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(c_11);
              }
            else
              {
                t = b_11;
                {
                  ATerm q_12 = NULL;
                  t = Cons_2_0(_id, z_1, t);
                  q_12 = t;
                  t = (ATerm) ATinsert(CheckATermList(q_12), o_12);
                }
              }
            return(t);
          }
          t = Cons_2_0(_id, z_1, t);
        }
      }
  }
  return(t);
}
ATerm if_verbose2_1_0 (ATerm q_93 (ATerm), ATerm t)
{
  ATerm d_11 = t;
  int e_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_12 = NULL,u_12 = NULL;
      s_12 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm f_11 = t;
        int g_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_3 = NULL;
            t = eval_config_0_0(t);
            s_3 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), s_3);
            t = s_3;
            ;
            LocalPopChoice(g_11);
          }
        else
          {
            t = f_11;
          }
        u_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, u_12, term_h_11);
        t = geq_0_0(t);
        t = s_12;
        t = q_93(t);
      }
      ;
      LocalPopChoice(e_11);
    }
  else
    {
      t = d_11;
    }
  return(t);
}
ATerm separate_by_1_0 (ATerm s_79 (ATerm), ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL;
  v_12 = t;
  {
    ATerm c_2 (ATerm t)
    {
      t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue))), (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue))));
      t = term_i_11;
      return(t);
    }
    t = if_verbose2_1_0(c_2, t);
    t = term_a_7;
    t = s_79(t);
    w_12 = t;
    t = (ATerm) ATmakeAppl(sym__2, w_12, v_12);
    t = separate_by_0_0(t);
  }
  return(t);
}
ATerm LNAT_2_0 (ATerm o_70 (ATerm), ATerm p_70 (ATerm), ATerm t)
{
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL;
  c_13 = t;
  if(match_cons(t, sym_LNAT_2))
    {
      y_12 = ATgetArgument(t, 0);
      z_12 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(c_13);
  x_12 = t;
  t = y_12;
  t = o_70(t);
  a_13 = t;
  t = z_12;
  t = p_70(t);
  b_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, a_13, b_13), x_12);
  return(t);
}
ATerm L_2_0 (ATerm m_70 (ATerm), ATerm n_70 (ATerm), ATerm t)
{
  ATerm f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL;
  k_13 = t;
  if(match_cons(t, sym_L_2))
    {
      g_13 = ATgetArgument(t, 0);
      h_13 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(k_13);
  f_13 = t;
  t = g_13;
  t = m_70(t);
  i_13 = t;
  t = h_13;
  t = n_70(t);
  j_13 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, i_13, j_13), f_13);
  return(t);
}
ATerm tov_1_0 (ATerm g_72 (ATerm), ATerm t)
{
  ATerm o_13 = NULL;
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2_0(_id, _id, t);
      ;
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2_0(_id, _id, t);
            ;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            {
              ATerm p_13 = NULL,q_13 = NULL;
              p_13 = t;
              t = term_a_7;
              t = g_72(t);
              q_13 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_n_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, p_13))), q_13))));
            }
          }
      }
    }
  o_13 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_n_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, o_13))));
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm s_13 = NULL;
  ATerm o_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        if(!(match_cons(t, sym_IS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(d_2, t);
      ;
      LocalPopChoice(t_11);
    }
  else
    {
      t = o_11;
      t = term_u_11;
    }
  s_13 = t;
  if(match_int(t, 0))
    {
      ATerm v_11 = t;
      int w_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_11;
          ;
          LocalPopChoice(w_11);
        }
      else
        {
          t = v_11;
          {
            ATerm u_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, s_13, term_y_10);
            t = copy_0_0(t);
            u_13 = t;
            t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, u_13);
          }
        }
    }
  else
    {
      ATerm w_13 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, s_13, term_y_10);
      t = copy_0_0(t);
      w_13 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, w_13);
    }
  return(t);
}
ATerm while_not_2_0 (ATerm w_73 (ATerm), ATerm x_73 (ATerm), ATerm t)
{
  ATerm x_13 (ATerm t)
  {
    ATerm y_11 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_73(t);
        ;
        LocalPopChoice(b_12);
      }
    else
      {
        t = y_11;
        t = x_73(t);
        t = x_13(t);
      }
    return(t);
  }
  t = x_13(t);
  return(t);
}
ATerm for_3_0 (ATerm z_73 (ATerm), ATerm a_74 (ATerm), ATerm b_74 (ATerm), ATerm t)
{
  t = z_73(t);
  t = while_not_2_0(a_74, b_74, t);
  return(t);
}
ATerm copy_0_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
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
        ATerm c_12 = ATgetArgument(t, 0);
        if(((ATgetType(c_12) != AT_INT) || (ATgetInt((ATermInt) c_12) != 0)))
          _fail(t);
        {
          ATerm e_12 = ATgetArgument(t, 1);
        }
        a_14 = ATgetArgument(t, 2);
      }
    else
      _fail(t);
    t = a_14;
    return(t);
  }
  ATerm h_2 (ATerm t)
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
    t = (ATerm) ATmakeAppl(sym__2, b_14, term_u_10);
    t = geq_0_0(t);
    t = (ATerm) ATmakeAppl(sym__2, b_14, term_u_10);
    {
      ATerm f_12 = t;
      int g_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = SSL_subti(b_14, (ATerm) ATmakeInt(1));
          ;
          LocalPopChoice(g_12);
        }
      else
        {
          t = f_12;
          t = SSL_subtr(b_14, (ATerm) ATmakeInt(1));
        }
      e_14 = t;
      t = (ATerm) ATmakeAppl(sym__3, e_14, c_14, (ATerm) ATinsert(CheckATermList(d_14), c_14));
    }
    return(t);
  }
  t = for_3_0(e_2, f_2, h_2, t);
  return(t);
}
ATerm SOpt_2_0 (ATerm u_71 (ATerm), ATerm v_71 (ATerm), ATerm t)
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
  t = u_71(t);
  i_14 = t;
  t = h_14;
  t = v_71(t);
  j_14 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, i_14, j_14), f_14);
  return(t);
}
ATerm SOpt_value_1_0 (ATerm p_101 (ATerm), ATerm t)
{
  ATerm n_14 = NULL;
  ATerm l_2 (ATerm t)
  {
    ATerm m_2 (ATerm t)
    {
      if(((n_14 != NULL) && (n_14 != t)))
        _fail(t);
      else
        n_14 = t;
      return(t);
    }
    t = SOpt_2_0(p_101, m_2, t);
    return(t);
  }
  t = fetch_1_0(l_2, t);
  t = SSL_string_to_int(not_null(n_14));
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm p_14 = NULL;
  ATerm h_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_2 (ATerm t)
      {
        if(!(match_cons(t, sym_VS_0)))
          _fail(t);
        return(t);
      }
      t = SOpt_value_1_0(n_2, t);
      ;
      LocalPopChoice(j_12);
    }
  else
    {
      t = h_12;
      t = term_u_11;
    }
  p_14 = t;
  if(match_int(t, 0))
    {
      ATerm k_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_x_11;
          ;
          LocalPopChoice(m_12);
        }
      else
        {
          t = k_12;
          {
            ATerm r_14 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, p_14, term_i_10);
            t = copy_0_0(t);
            r_14 = t;
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, r_14)));
          }
        }
    }
  else
    {
      ATerm t_14 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, p_14, term_i_10);
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
      ATerm n_12 = t;
      int r_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_15;
          ;
          LocalPopChoice(r_12);
        }
      else
        {
          t = n_12;
          t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, b_15);
        }
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, b_15);
    }
  return(t);
}
ATerm toa_1_0 (ATerm j_72 (ATerm), ATerm t)
{
  ATerm r_15 = NULL,s_15 = NULL,t_15 = NULL;
  if(match_cons(t, sym_R_2))
    {
      ATerm t_12 = ATgetArgument(t, 0);
      if(((ATgetType(t_12) != AT_LIST) || !(ATisEmpty(t_12))))
        _fail(t);
      r_15 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = term_a_7;
  t = j_72(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      s_15 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, r_15, s_15);
  {
    ATerm r_18 (ATerm t)
    {
      ATerm s_18 (ATerm u_15, ATerm v_15, ATerm w_15, ATerm x_15, ATerm y_15, ATerm t)
      {
        ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
        t = x_15;
        {
          ATerm d_13 = t;
          int e_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm l_13 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(e_13);
              t = term_m_13;
            }
          else
            {
              t = d_13;
              {
                ATerm n_13 = t;
                int r_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm t_13 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(r_13);
                    t = term_v_13;
                  }
                else
                  {
                    t = n_13;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm l_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_m_14;
                  }
              }
            }
          f_16 = t;
          t = x_15;
          t = make_hs_0_0(t);
          g_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(w_15), v_15), y_15);
          t = r_18(t);
          h_16 = t;
          t = (ATerm) ATinsert(ATinsert(CheckATermList(h_16), g_16), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, f_16), u_15));
        }
        return(t);
      }
      ATerm t_18 (ATerm k_16, ATerm l_16, ATerm m_16, ATerm n_16, ATerm t)
      {
        ATerm u_16 = NULL,v_16 = NULL;
        t = m_16;
        {
          ATerm o_14 = t;
          int q_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm s_14 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(q_14);
              t = term_m_13;
            }
          else
            {
              t = o_14;
              {
                ATerm u_14 = t;
                int v_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm w_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(v_14);
                    t = term_v_13;
                  }
                else
                  {
                    t = u_14;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm y_14 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_m_14;
                  }
              }
            }
          u_16 = t;
          t = (ATerm) ATmakeAppl(sym__2, l_16, n_16);
          t = r_18(t);
          v_16 = t;
          t = (ATerm) ATinsert(CheckATermList(v_16), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, u_16), k_16));
        }
        return(t);
      }
      ATerm y_16 = NULL,z_16 = NULL,c_17 = NULL,e_17 = NULL,g_17 = NULL,j_17 = NULL,k_17 = NULL,m_17 = NULL,o_17 = NULL,p_17 = NULL;
      if(match_cons(t, sym__2))
        {
          g_17 = ATgetArgument(t, 0);
          m_17 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = g_17;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_17 = ATgetFirst((ATermList) t);
              k_17 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = m_17;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              o_17 = ATgetFirst((ATermList) t);
              p_17 = (ATerm) ATgetNext((ATermList) t);
              t = k_17;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  c_17 = ATgetFirst((ATermList) t);
                  e_17 = (ATerm) ATgetNext((ATermList) t);
                  t = j_17;
                  if(match_cons(t, sym_C_2))
                    {
                      y_16 = ATgetArgument(t, 0);
                      z_16 = ATgetArgument(t, 1);
                      {
                        ATerm z_14 = t;
                        int a_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_18 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, k_17, m_17);
                            t = r_18(t);
                            c_18 = t;
                            t = (ATerm) ATinsert(CheckATermList(c_18), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, y_16, z_16))));
                            ;
                            LocalPopChoice(a_15);
                          }
                        else
                          {
                            t = z_14;
                            {
                              ATerm c_15 = t;
                              int d_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = s_18(j_17, c_17, e_17, o_17, p_17, t);
                                  ;
                                  LocalPopChoice(d_15);
                                }
                              else
                                {
                                  t = c_15;
                                  t = t_18(j_17, k_17, o_17, p_17, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm e_15 = t;
                      int f_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = s_18(j_17, c_17, e_17, o_17, p_17, t);
                          ;
                          LocalPopChoice(f_15);
                        }
                      else
                        {
                          t = e_15;
                          t = t_18(j_17, k_17, o_17, p_17, t);
                        }
                    }
                }
              else
                {
                  t = j_17;
                  if(match_cons(t, sym_C_2))
                    {
                      y_16 = ATgetArgument(t, 0);
                      z_16 = ATgetArgument(t, 1);
                      {
                        ATerm g_15 = t;
                        int i_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm j_18 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, k_17, m_17);
                            t = r_18(t);
                            j_18 = t;
                            t = (ATerm) ATinsert(CheckATermList(j_18), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, y_16, z_16))));
                            ;
                            LocalPopChoice(i_15);
                          }
                        else
                          {
                            t = g_15;
                            t = t_18(j_17, k_17, o_17, p_17, t);
                          }
                      }
                    }
                  else
                    {
                      t = t_18(j_17, k_17, o_17, p_17, t);
                    }
                }
            }
          else
            {
              ATerm q_18 = NULL;
              t = j_17;
              if(match_cons(t, sym_C_2))
                {
                  y_16 = ATgetArgument(t, 0);
                  z_16 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, k_17, m_17);
              t = r_18(t);
              q_18 = t;
              t = (ATerm) ATinsert(CheckATermList(q_18), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, y_16, z_16))));
            }
        }
      return(t);
    }
    t = r_18(t);
    t_15 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_n_11), (ATerm) ATinsert(ATempty, t_15));
  }
  return(t);
}
ATerm R_2_0 (ATerm g_71 (ATerm), ATerm h_71 (ATerm), ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  z_18 = t;
  if(match_cons(t, sym_R_2))
    {
      v_18 = ATgetArgument(t, 0);
      w_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_18);
  u_18 = t;
  t = v_18;
  t = g_71(t);
  x_18 = t;
  t = w_18;
  t = h_71(t);
  y_18 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, x_18, y_18), u_18);
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  ATerm a_4 = NULL;
  a_4 = t;
  t = (ATerm) ATmakeAppl(sym__2, a_4, (ATerm) ATempty);
  {
    ATerm p_20 (ATerm t)
    {
      ATerm n_19 = NULL,o_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,u_19 = NULL;
      if(match_cons(t, sym__2))
        {
          q_19 = ATgetArgument(t, 0);
          u_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_19;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm z_19 = NULL;
          t = u_19;
          {
            ATerm o_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2_0(_id, o_2, t);
            z_19 = t;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, z_19));
          }
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
                ATerm j_15 = t;
                int k_15 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm f_20 = NULL,g_20 = NULL;
                    t = u_19;
                    {
                      ATerm p_2 (ATerm t)
                      {
                        t = (ATerm) ATempty;
                        return(t);
                      }
                      t = reverse_acc_2_0(_id, p_2, t);
                      f_20 = t;
                      t = (ATerm) ATmakeAppl(sym__2, s_19, (ATerm) ATempty);
                      t = p_20(t);
                      g_20 = t;
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(g_20), (ATerm) ATmakeAppl(sym_R_2, n_19, o_19)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, f_20));
                    }
                    ;
                    LocalPopChoice(k_15);
                  }
                else
                  {
                    t = j_15;
                    t = (ATerm) ATmakeAppl(sym__2, s_19, (ATerm) ATinsert(CheckATermList(u_19), r_19));
                    t = p_20(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, s_19, (ATerm) ATinsert(CheckATermList(u_19), r_19));
              t = p_20(t);
            }
        }
      return(t);
    }
    t = p_20(t);
    {
      ATerm s_2 (ATerm t)
      {
        ATerm l_15 = t;
        if((PushChoice() == 0))
          {
            ATerm t_2 (ATerm t)
            {
              if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                _fail(t);
              return(t);
            }
            t = R_2_0(_id, t_2, t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_15;
          }
        return(t);
      }
      t = filter_1_0(s_2, t);
    }
  }
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL,l_21 = NULL;
  k_21 = t;
  if(match_cons(t, sym_REF_2))
    {
      l_21 = ATgetArgument(t, 0);
      j_21 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, l_21, j_21);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          l_21 = ATgetArgument(t, 0);
          j_21 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, j_21), (ATerm) ATmakeAppl(sym_ANCHOR_1, l_21));
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
              t = term_q_15;
            }
          else
            {
              t = m_15;
              {
                ATerm z_15 = t;
                int a_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm b_16 = ATgetArgument(t, 0);
                        ATerm c_16 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(a_16);
                    t = term_q_15;
                  }
                else
                  {
                    t = z_15;
                    {
                      ATerm d_16 = t;
                      int e_16 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              l_21 = ATgetArgument(t, 0);
                              {
                                ATerm i_16 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(e_16);
                          t = l_21;
                        }
                      else
                        {
                          t = d_16;
                          if(match_cons(t, sym_A_3))
                            {
                              l_21 = ATgetArgument(t, 0);
                              j_21 = ATgetArgument(t, 1);
                              i_21 = ATgetArgument(t, 2);
                              {
                                ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
                                t = i_21;
                                t = construct_rows_0_0(t);
                                u_21 = t;
                                t = j_21;
                                t = Vspace_0_0(t);
                                v_21 = t;
                                t = u_21;
                                {
                                  ATerm u_2 (ATerm t)
                                  {
                                    ATerm v_2 (ATerm t)
                                    {
                                      t = l_21;
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
                                  l_21 = ATgetArgument(t, 0);
                                  j_21 = ATgetArgument(t, 1);
                                  {
                                    ATerm b_5 = NULL;
                                    t = l_21;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm j_16 = t;
                                      int o_16 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = j_21;
                                          {
                                            ATerm x_2 (ATerm t)
                                            {
                                              ATerm p_16 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                    _fail(t);
                                                  PopChoice();
                                                  _fail(t);
                                                }
                                              else
                                                {
                                                  t = p_16;
                                                }
                                              return(t);
                                            }
                                            t = filter_1_0(x_2, t);
                                          }
                                          ;
                                          LocalPopChoice(o_16);
                                        }
                                      else
                                        {
                                          t = j_16;
                                          {
                                            ATerm f_5 = NULL;
                                            ATerm z_2 (ATerm t)
                                            {
                                              t = (ATerm) ATinsert(ATempty, term_q_16);
                                              return(t);
                                            }
                                            t = at_last_1_0(z_2, t);
                                            b_5 = t;
                                            t = j_21;
                                            {
                                              ATerm b_3 (ATerm t)
                                              {
                                                ATerm r_16 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    PopChoice();
                                                    _fail(t);
                                                  }
                                                else
                                                  {
                                                    t = r_16;
                                                  }
                                                return(t);
                                              }
                                              t = filter_1_0(b_3, t);
                                              {
                                                ATerm d_3 (ATerm t)
                                                {
                                                  t = b_5;
                                                  return(t);
                                                }
                                                t = separate_by_1_0(d_3, t);
                                                f_5 = t;
                                                t = (ATerm) ATinsert(ATinsert(ATempty, f_5), term_s_16);
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
                                      l_21 = ATgetArgument(t, 0);
                                      j_21 = ATgetArgument(t, 1);
                                      {
                                        ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
                                        t = l_21;
                                        t = Vspace_0_0(t);
                                        z_21 = t;
                                        t = l_21;
                                        t = Ispace_0_0(t);
                                        a_22 = t;
                                        t = j_21;
                                        {
                                          ATerm e_3 (ATerm t)
                                          {
                                            ATerm t_16 = t;
                                            if((PushChoice() == 0))
                                              {
                                                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                  _fail(t);
                                                PopChoice();
                                                _fail(t);
                                              }
                                            else
                                              {
                                                t = t_16;
                                              }
                                            return(t);
                                          }
                                          t = filter_1_0(e_3, t);
                                          {
                                            ATerm g_3 (ATerm t)
                                            {
                                              ATerm i_3 (ATerm t)
                                              {
                                                t = term_x_11;
                                                return(t);
                                              }
                                              t = tov_1_0(i_3, t);
                                              return(t);
                                            }
                                            ATerm h_3 (ATerm t)
                                            {
                                              ATerm j_3 (ATerm t)
                                              {
                                                ATerm k_3 (ATerm t)
                                                {
                                                  t = a_22;
                                                  return(t);
                                                }
                                                t = tov_1_0(k_3, t);
                                                return(t);
                                              }
                                              t = map_1_0(j_3, t);
                                              return(t);
                                            }
                                            t = Cons_2_0(g_3, h_3, t);
                                            {
                                              ATerm l_3 (ATerm t)
                                              {
                                                t = z_21;
                                                return(t);
                                              }
                                              t = separate_by_1_0(l_3, t);
                                              b_22 = t;
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, b_22)), term_s_16);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          l_21 = ATgetArgument(t, 0);
                                          j_21 = ATgetArgument(t, 1);
                                          {
                                            ATerm e_22 = NULL;
                                            t = l_21;
                                            t = Hspace_0_0(t);
                                            e_22 = t;
                                            t = j_21;
                                            {
                                              ATerm m_3 (ATerm t)
                                              {
                                                ATerm w_16 = t;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    PopChoice();
                                                    _fail(t);
                                                  }
                                                else
                                                  {
                                                    t = w_16;
                                                  }
                                                return(t);
                                              }
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
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              l_21 = ATgetArgument(t, 0);
                                              j_21 = ATgetArgument(t, 1);
                                              t = l_21;
                                              {
                                                ATerm x_16 = t;
                                                int a_17 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(!(match_cons(t, sym_KW_0)))
                                                      _fail(t);
                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_b_17), (ATerm) ATinsert(ATempty, j_21));
                                                    ;
                                                    LocalPopChoice(a_17);
                                                  }
                                                else
                                                  {
                                                    t = x_16;
                                                    {
                                                      ATerm d_17 = t;
                                                      int f_17 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          if(!(match_cons(t, sym_VAR_0)))
                                                            _fail(t);
                                                          t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_h_17), (ATerm) ATinsert(ATempty, j_21));
                                                          ;
                                                          LocalPopChoice(f_17);
                                                        }
                                                      else
                                                        {
                                                          t = d_17;
                                                          {
                                                            ATerm i_17 = t;
                                                            int l_17 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                if(!(match_cons(t, sym_NUM_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_n_17), (ATerm) ATinsert(ATempty, j_21));
                                                                ;
                                                                LocalPopChoice(l_17);
                                                              }
                                                            else
                                                              {
                                                                t = i_17;
                                                                {
                                                                  ATerm q_17 = t;
                                                                  int r_17 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      if(!(match_cons(t, sym_MATH_0)))
                                                                        _fail(t);
                                                                      t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_s_17), (ATerm) ATinsert(ATempty, j_21));
                                                                      ;
                                                                      LocalPopChoice(r_17);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = q_17;
                                                                      t = j_21;
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
                                                  l_21 = ATgetArgument(t, 0);
                                                  j_21 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm g_22 = NULL;
                                                    t = l_21;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = j_21;
                                                    {
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
                                                      t = map_1_0(o_3, t);
                                                      g_22 = t;
                                                      t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_t_17), (ATerm) ATinsert(ATempty, g_22)))));
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      l_21 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = l_21;
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
ATerm topdown_1_0 (ATerm f_74 (ATerm), ATerm t)
{
  t = f_74(t);
  {
    ATerm p_3 (ATerm t)
    {
      t = topdown_1_0(f_74, t);
      return(t);
    }
    t = SRTS_all(p_3, t);
  }
  return(t);
}
ATerm at_last_1_0 (ATerm y_80 (ATerm), ATerm t)
{
  ATerm m_22 (ATerm t)
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm q_3 (ATerm t)
        {
          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
            _fail(t);
          return(t);
        }
        t = Cons_2_0(_id, q_3, t);
        t = y_80(t);
        ;
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
        t = Cons_2_0(_id, m_22, t);
      }
    return(t);
  }
  t = m_22(t);
  return(t);
}
ATerm at_suffix_1_0 (ATerm r_80 (ATerm), ATerm t)
{
  ATerm n_22 (ATerm t)
  {
    ATerm w_17 = t;
    int x_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_80(t);
        ;
        LocalPopChoice(x_17);
      }
    else
      {
        t = w_17;
        t = Cons_2_0(_id, n_22, t);
      }
    return(t);
  }
  t = n_22(t);
  return(t);
}
ATerm split_fetch_1_0 (ATerm k_80 (ATerm), ATerm t)
{
  ATerm o_22 = NULL,p_22 = NULL;
  ATerm r_3 (ATerm t)
  {
    t = Cons_2_0(k_80, _id, t);
    {
      ATerm t_3 (ATerm t)
      {
        if(((o_22 != NULL) && (o_22 != t)))
          _fail(t);
        else
          o_22 = t;
        return(t);
      }
      t = Cons_2_0(_id, t_3, t);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1_0(r_3, t);
  p_22 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_22, not_null(o_22));
  return(t);
}
ATerm Distribute_0_0 (ATerm t)
{
  ATerm r_22 = NULL,s_22 = NULL,t_22 = NULL,u_22 = NULL,v_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL,z_22 = NULL,a_23 = NULL;
  if(match_cons(t, sym_H_2))
    {
      r_22 = ATgetArgument(t, 0);
      s_22 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = s_22;
  {
    ATerm u_3 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((t_22 != NULL) && (t_22 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            t_22 = ATgetArgument(t, 0);
          {
            ATerm y_17 = ATgetArgument(t, 1);
            if(((ATgetType(y_17) == AT_LIST) && !(ATisEmpty(y_17))))
              {
                if(((u_22 != NULL) && (u_22 != ATgetFirst((ATermList) y_17))))
                  _fail(ATgetFirst((ATermList) y_17));
                else
                  u_22 = ATgetFirst((ATermList) y_17);
                if(((v_22 != NULL) && (v_22 != (ATerm) ATgetNext((ATermList) y_17))))
                  _fail((ATerm) ATgetNext((ATermList) y_17));
                else
                  v_22 = (ATerm) ATgetNext((ATermList) y_17);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(u_3, t);
    if(match_cons(t, sym__2))
      {
        w_22 = ATgetArgument(t, 0);
        x_22 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = x_22;
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
      t = (ATerm) ATinsert(CheckATermList(not_null(v_22)), not_null(u_22));
      {
        ATerm v_3 (ATerm t)
        {
          ATerm w_3 (ATerm t)
          {
            if(((y_22 != NULL) && (y_22 != t)))
              _fail(t);
            else
              y_22 = t;
            return(t);
          }
          ATerm x_3 (ATerm t)
          {
            if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
              _fail(t);
            return(t);
          }
          t = Cons_2_0(w_3, x_3, t);
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, r_22, (ATerm) ATinsert(CheckATermList(x_22), not_null(y_22))));
          return(t);
        }
        t = at_last_1_0(v_3, t);
        z_22 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(t_22), z_22)));
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
              t = w_22;
              {
                ATerm y_3 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(t_22), z_22));
                  return(t);
                }
                t = at_end_1_0(y_3, t);
              }
              ;
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
              {
                ATerm w_5 = NULL;
                t = SSL_explode_term((ATerm) ATmakeAppl(sym__2, w_22, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(t_22), z_22))));
                if(match_cons(t, sym__2))
                  {
                    ATerm f_18 = ATgetArgument(t, 0);
                    if((ATgetSymbol((ATermAppl) f_18) != ATmakeSymbol("", 0, ATtrue)))
                      _fail(t);
                    w_5 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = w_5;
                t = concat_0_0(t);
              }
            }
          a_23 = t;
          t = (ATerm) ATmakeAppl(sym_H_2, r_22, a_23);
        }
      }
    }
  }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_23 = NULL,p_23 = NULL,q_23 = NULL;
            ATerm l_18 = t;
            int m_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(match_cons(t, sym_H_2))
                  {
                    ATerm n_18 = ATgetArgument(t, 0);
                    l_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                LocalPopChoice(m_18);
                t = l_23;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_23 = ATgetFirst((ATermList) t);
                    q_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_23;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_23;
              }
            else
              {
                t = l_18;
                if(match_cons(t, sym_V_2))
                  {
                    ATerm o_18 = ATgetArgument(t, 0);
                    l_23 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = l_23;
                if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                  {
                    p_23 = ATgetFirst((ATermList) t);
                    q_23 = (ATerm) ATgetNext((ATermList) t);
                  }
                else
                  _fail(t);
                t = q_23;
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                t = p_23;
              }
            ;
            LocalPopChoice(k_18);
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
  t = topdown_1_0(z_3, t);
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm p_24 = NULL;
  t = normalize_0_0(t);
  {
    ATerm b_4 (ATerm t)
    {
      ATerm p_18 = t;
      int a_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Abox2html_0_0(t);
          ;
          LocalPopChoice(a_19);
        }
      else
        {
          t = p_18;
        }
      return(t);
    }
    t = topdown_1_0(b_4, t);
    p_24 = t;
    t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, p_24)))));
    {
      ATerm c_4 (ATerm t)
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Html2text_0_0(t);
            ;
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
          }
        return(t);
      }
      t = bottomup_1_0(c_4, t);
    }
  }
  return(t);
}
ATerm fclose_0_0 (ATerm t)
{
  ATerm p_26 (ATerm h_26, ATerm t)
  {
    t = SSL_fclose(h_26);
    return(t);
  }
  ATerm k_26 = NULL,l_26 = NULL;
  l_26 = t;
  if(match_cons(t, sym_Stream_1))
    {
      k_26 = ATgetArgument(t, 0);
      {
        ATerm e_19 = t;
        int f_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(k_26);
            ;
            LocalPopChoice(f_19);
          }
        else
          {
            t = e_19;
            t = p_26(l_26, t);
          }
      }
    }
  else
    {
      t = p_26(l_26, t);
    }
  return(t);
}
ATerm stdin_stream_0_0 (ATerm t)
{
  ATerm q_26 = NULL;
  t = SSL_stdin_stream();
  q_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, q_26);
  return(t);
}
ATerm stdout_stream_0_0 (ATerm t)
{
  ATerm r_26 = NULL;
  t = SSL_stdout_stream();
  r_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, r_26);
  return(t);
}
ATerm stderr_stream_0_0 (ATerm t)
{
  ATerm s_26 = NULL;
  t = SSL_stderr_stream();
  s_26 = t;
  t = (ATerm) ATmakeAppl(sym_Stream_1, s_26);
  return(t);
}
ATerm open_stream_0_0 (ATerm t)
{
  if(match_cons(t, sym__2))
    {
      ATerm g_19 = ATgetArgument(t, 0);
      ATerm h_19 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_6 = NULL,h_6 = NULL;
        g_6 = t;
        t = SSL_explode_term(g_6);
        if(match_cons(t, sym__2))
          {
            ATerm k_19 = ATgetArgument(t, 0);
            if((ATgetSymbol((ATermAppl) k_19) != ATmakeSymbol("", 0, ATtrue)))
              _fail(t);
            {
              ATerm m_19 = ATgetArgument(t, 1);
              if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
                {
                  h_6 = ATgetFirst((ATermList) m_19);
                  {
                    ATerm p_19 = (ATerm) ATgetNext((ATermList) m_19);
                  }
                }
              else
                _fail(t);
            }
          }
        else
          _fail(t);
        t = h_6;
        if(match_cons(t, sym_stderr_0))
          {
            t = h_6;
            t = stderr_stream_0_0(t);
          }
        else
          {
            if(match_cons(t, sym_stdout_0))
              {
                t = h_6;
                t = stdout_stream_0_0(t);
              }
            else
              {
                if(!(match_cons(t, sym_stdin_0)))
                  _fail(t);
                t = h_6;
                t = stdin_stream_0_0(t);
              }
          }
        ;
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        {
          ATerm t_19 = t;
          int v_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
              ATerm d_4 (ATerm t)
              {
                ATerm a_27 = NULL;
                if(match_cons(t, sym_Path_1))
                  {
                    a_27 = ATgetArgument(t, 0);
                  }
                else
                  _fail(t);
                t = a_27;
                return(t);
              }
              t = _2_0(d_4, _id, t);
              if(match_cons(t, sym__2))
                {
                  x_26 = ATgetArgument(t, 0);
                  y_26 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = SSL_fopen(x_26, y_26);
              z_26 = t;
              t = (ATerm) ATmakeAppl(sym_Stream_1, z_26);
              ;
              LocalPopChoice(v_19);
            }
          else
            {
              t = t_19;
              {
                ATerm b_27 = NULL,c_27 = NULL,d_27 = NULL;
                ATerm e_4 (ATerm t)
                {
                  ATerm e_27 = NULL;
                  e_27 = t;
                  t = SSL_is_string(e_27);
                  return(t);
                }
                t = _2_0(e_4, _id, t);
                if(match_cons(t, sym__2))
                  {
                    b_27 = ATgetArgument(t, 0);
                    c_27 = ATgetArgument(t, 1);
                  }
                else
                  _fail(t);
                t = SSL_fopen(b_27, c_27);
                d_27 = t;
                t = (ATerm) ATmakeAppl(sym_Stream_1, d_27);
              }
            }
        }
      }
  }
  return(t);
}
ATerm ReadFromFile_0_0 (ATerm t)
{
  ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_27 = NULL;
      i_27 = t;
      t = (ATerm) ATmakeAppl(sym__2, i_27, term_y_19);
      t = open_stream_0_0(t);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        ATerm l_6 = NULL;
        l_6 = t;
        t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, l_6), (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue))));
        t = l_6;
        _fail(t);
      }
    }
  f_27 = t;
  if(match_cons(t, sym_Stream_1))
    {
      h_27 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = SSL_read_term_from_stream(h_27);
  g_27 = t;
  t = f_27;
  t = fclose_0_0(t);
  t = g_27;
  return(t);
}
ATerm read_from_0_0 (ATerm t)
{
  ATerm t_27 = NULL,x_27 = NULL;
  t_27 = t;
  if(match_cons(t, sym_stdin_0))
    {
      t = t_27;
      t = ReadFromFile_0_0(t);
    }
  else
    {
      if(match_cons(t, sym_FILE_1))
        {
          x_27 = ATgetArgument(t, 0);
        }
      else
        _fail(t);
      t = SSL_access(x_27, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_F__OK_0)));
      t = ReadFromFile_0_0(t);
    }
  return(t);
}
ATerm copy_to_1_0 (ATerm k_0 (ATerm), ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL;
  o_28 = t;
  if(match_cons(t, sym_FILE_1))
    {
      p_28 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  {
    ATerm a_20 = t;
    int b_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_6 = NULL;
        t = o_28;
        t = k_0(t);
        z_6 = t;
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
          t = SSL_copy(p_28, z_6);
          t = (ATerm) ATmakeAppl(sym_FILE_1, p_28);
        }
        ;
        LocalPopChoice(b_20);
      }
    else
      {
        t = a_20;
        {
          ATerm e_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm f_7 = NULL;
              t = o_28;
              t = k_0(t);
              f_7 = t;
              {
                ATerm i_20 = t;
                if((PushChoice() == 0))
                  {
                    ATerm j_20 = t;
                    int k_20 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        if(!(match_cons(t, sym_stdout_0)))
                          _fail(t);
                        ;
                        LocalPopChoice(k_20);
                      }
                    else
                      {
                        t = j_20;
                        {
                          ATerm l_20 = t;
                          int m_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              if(!(match_cons(t, sym_stderr_0)))
                                _fail(t);
                              ;
                              LocalPopChoice(m_20);
                            }
                          else
                            {
                              t = l_20;
                              {
                                ATerm g_7 = NULL;
                                g_7 = t;
                                if((p_28 != t))
                                  {
                                    _fail(t);
                                  }
                                t = g_7;
                              }
                            }
                        }
                      }
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = i_20;
                  }
                t = SSL_copy(p_28, f_7);
                t = (ATerm) ATmakeAppl(sym_FILE_1, p_28);
              }
              ;
              LocalPopChoice(h_20);
            }
          else
            {
              t = e_20;
              t = o_28;
              t = k_0(t);
              if((p_28 != t))
                {
                  _fail(t);
                }
              t = (ATerm) ATmakeAppl(sym_FILE_1, p_28);
            }
        }
      }
  }
  return(t);
}
ATerm table_pop_0_0 (ATerm t)
{
  ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL;
  if(match_cons(t, sym__2))
    {
      w_28 = ATgetArgument(t, 0);
      x_28 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  {
    ATerm n_20 = t;
    int o_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_7 = NULL;
        if(match_cons(t, sym__2))
          {
            ATerm q_20 = ATgetArgument(t, 0);
            ATerm r_20 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(w_28, x_28);
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            ATerm s_20 = ATgetFirst((ATermList) t);
            l_7 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = l_7;
        ;
        LocalPopChoice(o_20);
      }
    else
      {
        t = n_20;
        t = (ATerm) ATempty;
      }
    y_28 = t;
    t = SSL_table_put(w_28, x_28, y_28);
    t = (ATerm) ATmakeAppl(sym__2, w_28, x_28);
  }
  return(t);
}
ATerm end_scope_1_0 (ATerm q_90 (ATerm), ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  e_29 = t;
  t = q_90(t);
  f_29 = t;
  {
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = SSL_table_get(f_29, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
      }
    if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
      {
        h_29 = ATgetFirst((ATermList) t);
        g_29 = (ATerm) ATgetNext((ATermList) t);
      }
    else
      _fail(t);
    t = SSL_table_put(f_29, (ATerm)ATmakeAppl(sym_Scopes_0), g_29);
    t = h_29;
    {
      ATerm f_4 (ATerm t)
      {
        ATerm i_29 = NULL;
        i_29 = t;
        t = (ATerm) ATmakeAppl(sym__2, f_29, i_29);
        t = table_pop_0_0(t);
        return(t);
      }
      t = map_1_0(f_4, t);
      t = e_29;
    }
  }
  return(t);
}
ATerm restore_always_2_0 (ATerm a_73 (ATerm), ATerm b_73 (ATerm), ATerm t)
{
  ATerm v_20 = t;
  int w_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = a_73(t);
      t = b_73(t);
      ;
      LocalPopChoice(w_20);
    }
  else
    {
      t = v_20;
      t = b_73(t);
      _fail(t);
    }
  return(t);
}
ATerm begin_scope_1_0 (ATerm p_90 (ATerm), ATerm t)
{
  ATerm l_29 = NULL,m_29 = NULL,n_29 = NULL;
  l_29 = t;
  t = p_90(t);
  m_29 = t;
  t = (ATerm) ATmakeAppl(sym__2, m_29, term_x_20);
  {
    ATerm y_20 = t;
    int z_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm a_21 = ATgetArgument(t, 0);
            ATerm b_21 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(m_29, (ATerm) ATmakeAppl(sym_Scopes_0));
        ;
        LocalPopChoice(z_20);
      }
    else
      {
        t = y_20;
        t = (ATerm) ATempty;
      }
    n_29 = t;
    t = SSL_table_put(m_29, (ATerm)ATmakeAppl(sym_Scopes_0), (ATerm) ATinsert(CheckATermList(n_29), (ATerm) ATempty));
    t = l_29;
  }
  return(t);
}
ATerm xtc_temp_files_1_0 (ATerm y_101 (ATerm), ATerm t)
{
  ATerm t_29 = NULL;
  ATerm g_4 (ATerm t)
  {
    t = term_e_7;
    return(t);
  }
  t = begin_scope_1_0(g_4, t);
  {
    ATerm h_4 (ATerm t)
    {
      ATerm u_29 = NULL;
      u_29 = t;
      {
        ATerm c_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(sym_TempFiles_0), (ATerm) ATmakeAppl(sym_Scopes_0));
            ;
            LocalPopChoice(d_21);
          }
        else
          {
            t = c_21;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            if(((t_29 != NULL) && (t_29 != ATgetFirst((ATermList) t))))
              _fail(ATgetFirst((ATermList) t));
            else
              t_29 = ATgetFirst((ATermList) t);
            {
              ATerm e_21 = (ATerm) ATgetNext((ATermList) t);
            }
          }
        else
          _fail(t);
        t = not_null(t_29);
        {
          ATerm i_4 (ATerm t)
          {
            ATerm f_21 = t;
            int g_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_29 = NULL;
                x_29 = t;
                t = SSL_remove(x_29);
                ;
                LocalPopChoice(g_21);
              }
            else
              {
                t = f_21;
              }
            return(t);
          }
          t = map_1_0(i_4, t);
          t = u_29;
          {
            ATerm j_4 (ATerm t)
            {
              t = term_e_7;
              return(t);
            }
            t = end_scope_1_0(j_4, t);
          }
        }
      }
      return(t);
    }
    t = restore_always_2_0(y_101, h_4, t);
  }
  return(t);
}
ATerm xtc_io_1_0 (ATerm z_101 (ATerm), ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm h_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_29 = NULL;
        t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)));
        {
          ATerm n_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_7 = NULL;
              t = eval_config_0_0(t);
              t_7 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), t_7);
              t = t_7;
              ;
              LocalPopChoice(o_21);
            }
          else
            {
              t = n_21;
            }
          z_29 = t;
          t = (ATerm) ATmakeAppl(sym_FILE_1, z_29);
        }
        ;
        LocalPopChoice(m_21);
      }
    else
      {
        t = h_21;
        t = term_p_21;
      }
    t = z_101(t);
    {
      ATerm l_4 (ATerm t)
      {
        ATerm q_21 = t;
        int r_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)));
            {
              ATerm s_21 = t;
              int t_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_7 = NULL;
                  t = eval_config_0_0(t);
                  x_7 = t;
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), x_7);
                  t = x_7;
                  ;
                  LocalPopChoice(t_21);
                }
              else
                {
                  t = s_21;
                }
            }
            ;
            LocalPopChoice(r_21);
          }
        else
          {
            t = q_21;
            t = term_x_21;
          }
        return(t);
      }
      t = copy_to_1_0(l_4, t);
    }
    return(t);
  }
  t = xtc_temp_files_1_0(k_4, t);
  return(t);
}
ATerm default_usage_0_0 (ATerm t)
{
  ATerm a_30 = NULL,b_30 = NULL;
  a_30 = t;
  t = term_a_7;
  t = whoami_0_0(t);
  b_30 = t;
  t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), b_30), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
  t = SSL_exit((ATerm) ATmakeInt(1));
  t = a_30;
  return(t);
}
ATerm keep_option_0_0 (ATerm t)
{
  ATerm m_4 (ATerm t)
  {
    ATerm d_30 = NULL;
    d_30 = t;
    if(match_string(t, "-k"))
      {
        t = d_30;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--keep", 0, ATtrue)))
          _fail(t);
        t = d_30;
      }
    return(t);
  }
  ATerm n_4 (ATerm t)
  {
    ATerm e_30 = NULL,f_30 = NULL;
    e_30 = t;
    t = SSL_string_to_int(e_30);
    f_30 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue)), f_30);
    t = e_30;
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_y_21;
    return(t);
  }
  t = ArgOption_3_0(m_4, n_4, o_4, t);
  return(t);
}
ATerm verbose_option_0_0 (ATerm t)
{
  ATerm c_22 = t;
  int d_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_4 (ATerm t)
      {
        ATerm h_30 = NULL;
        h_30 = t;
        if(match_string(t, "-S"))
          {
            t = h_30;
          }
        else
          {
            if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--silent", 0, ATtrue)))
              _fail(t);
            t = h_30;
          }
        return(t);
      }
      ATerm q_4 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), (ATerm) ATmakeInt(0));
        t = term_f_22;
        return(t);
      }
      ATerm r_4 (ATerm t)
      {
        t = term_i_22;
        return(t);
      }
      t = Option_3_0(p_4, q_4, r_4, t);
      ;
      LocalPopChoice(d_22);
    }
  else
    {
      t = c_22;
      {
        ATerm j_22 = t;
        int k_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_4 (ATerm t)
            {
              if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--verbose", 0, ATtrue)))
                _fail(t);
              return(t);
            }
            ATerm t_4 (ATerm t)
            {
              ATerm i_30 = NULL,j_30 = NULL;
              i_30 = t;
              t = SSL_string_to_int(i_30);
              j_30 = t;
              t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), j_30);
              t = (ATerm) ATmakeAppl(sym_Verbose_1, i_30);
              return(t);
            }
            ATerm u_4 (ATerm t)
            {
              t = term_l_22;
              return(t);
            }
            t = ArgOption_3_0(s_4, t_4, u_4, t);
            ;
            LocalPopChoice(k_22);
          }
        else
          {
            t = j_22;
            {
              ATerm v_4 (ATerm t)
              {
                if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-s", 0, ATtrue)))
                  _fail(t);
                return(t);
              }
              ATerm w_4 (ATerm t)
              {
                t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                t = term_q_22;
                return(t);
              }
              ATerm x_4 (ATerm t)
              {
                t = term_b_23;
                return(t);
              }
              t = Option_3_0(v_4, w_4, x_4, t);
            }
          }
      }
    }
  return(t);
}
ATerm Option_3_0 (ATerm a_0 (ATerm), ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm o_30 = NULL;
      t = term_a_7;
      t = d_0(t);
      o_30 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_23, term_d_23, o_30);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm r_30 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          m_30 = ATgetFirst((ATermList) t);
          n_30 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = m_30;
      t = a_0(t);
      t = term_a_7;
      t = c_0(t);
      r_30 = t;
      t = (ATerm) ATinsert(CheckATermList(n_30), r_30);
    }
  return(t);
}
ATerm output_option_0_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm t_30 = NULL;
    t_30 = t;
    if(match_string(t, "-o"))
      {
        t = t_30;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--output", 0, ATtrue)))
          _fail(t);
        t = t_30;
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm u_30 = NULL;
    u_30 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue)), u_30);
    t = (ATerm) ATmakeAppl(sym_Output_1, u_30);
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_e_23;
    return(t);
  }
  t = ArgOption_3_0(y_4, z_4, a_5, t);
  return(t);
}
ATerm table_push_0_0 (ATerm t)
{
  ATerm x_30 = NULL,y_30 = NULL,z_30 = NULL,a_31 = NULL;
  if(match_cons(t, sym__3))
    {
      x_30 = ATgetArgument(t, 0);
      y_30 = ATgetArgument(t, 1);
      z_30 = ATgetArgument(t, 2);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, x_30, y_30);
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(match_cons(t, sym__2))
          {
            ATerm h_23 = ATgetArgument(t, 0);
            ATerm i_23 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = SSL_table_get(x_30, y_30);
        ;
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        t = (ATerm) ATempty;
      }
    a_31 = t;
    t = SSL_table_put(x_30, y_30, (ATerm) ATinsert(CheckATermList(a_31), z_30));
    t = (ATerm) ATmakeAppl(sym__3, x_30, y_30, z_30);
  }
  return(t);
}
ATerm ArgOption_3_0 (ATerm h_0 (ATerm), ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL,l_31 = NULL;
  if(match_string(t, "register-usage-info"))
    {
      ATerm m_31 = NULL;
      t = term_a_7;
      t = j_0(t);
      m_31 = t;
      t = (ATerm) ATmakeAppl(sym__3, term_c_23, term_d_23, m_31);
      t = table_push_0_0(t);
      _fail(t);
    }
  else
    {
      ATerm q_31 = NULL;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          i_31 = ATgetFirst((ATermList) t);
          j_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_31;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          k_31 = ATgetFirst((ATermList) t);
          l_31 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = i_31;
      t = h_0(t);
      t = k_31;
      t = i_0(t);
      q_31 = t;
      t = (ATerm) ATinsert(CheckATermList(l_31), q_31);
    }
  return(t);
}
ATerm input_option_0_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm s_31 = NULL;
    s_31 = t;
    if(match_string(t, "-i"))
      {
        t = s_31;
      }
    else
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--input", 0, ATtrue)))
          _fail(t);
        t = s_31;
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm t_31 = NULL;
    t_31 = t;
    t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue)), t_31);
    t = (ATerm) ATmakeAppl(sym_Input_1, t_31);
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_j_23;
    return(t);
  }
  t = ArgOption_3_0(c_5, d_5, e_5, t);
  return(t);
}
ATerm report_failure_0_0 (ATerm t)
{
  ATerm u_31 = NULL;
  t = report_run_time_0_0(t);
  t = term_a_7;
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
    ATerm k_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_8 = NULL;
        t = eval_config_0_0(t);
        c_8 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), c_8);
        t = c_8;
        ;
        LocalPopChoice(m_23);
      }
    else
      {
        t = k_23;
      }
  }
  return(t);
}
ATerm foldr_2_0 (ATerm y_85 (ATerm), ATerm z_85 (ATerm), ATerm t)
{
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_85(t);
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
        t = foldr_2_0(y_85, z_85, t);
        b_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_31, b_32);
        t = z_85(t);
      }
    }
  return(t);
}
ATerm times_0_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0_0 (ATerm t)
{
  ATerm e_32 = NULL,d_8 = NULL,f_8 = NULL;
  t = times_0_0(t);
  d_8 = t;
  t = SSL_explode_term(d_8);
  if(match_cons(t, sym__2))
    {
      ATerm r_23 = ATgetArgument(t, 0);
      f_8 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = f_8;
  {
    ATerm g_5 (ATerm t)
    {
      t = term_u_11;
      return(t);
    }
    ATerm h_5 (ATerm t)
    {
      ATerm l_8 = NULL,m_8 = NULL;
      if(match_cons(t, sym__2))
        {
          l_8 = ATgetArgument(t, 0);
          m_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      {
        ATerm s_23 = t;
        int t_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(l_8, m_8);
            ;
            LocalPopChoice(t_23);
          }
        else
          {
            t = s_23;
            t = SSL_addr(l_8, m_8);
          }
      }
      return(t);
    }
    t = foldr_2_0(g_5, h_5, t);
    e_32 = t;
    t = SSL_TicksToSeconds(e_32);
  }
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
    ATerm u_23 = t;
    int v_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_32;
        if((q_32 != t))
          {
            _fail(t);
          }
        t = p_32;
        ;
        LocalPopChoice(v_23);
      }
    else
      {
        t = u_23;
        t = p_32;
        {
          ATerm w_23 = t;
          int x_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(q_32, r_32);
              ;
              LocalPopChoice(x_23);
            }
          else
            {
              t = w_23;
              t = SSL_gtr(q_32, r_32);
            }
          t = (ATerm) ATmakeAppl(sym__2, q_32, r_32);
        }
      }
  }
  return(t);
}
ATerm if_verbose1_1_0 (ATerm p_93 (ATerm), ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_32 = NULL,w_32 = NULL;
      u_32 = t;
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)));
      {
        ATerm a_24 = t;
        int b_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_9 = NULL;
            t = eval_config_0_0(t);
            d_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue)), d_9);
            t = d_9;
            ;
            LocalPopChoice(b_24);
          }
        else
          {
            t = a_24;
          }
        w_32 = t;
        t = (ATerm) ATmakeAppl(sym__2, w_32, term_u_10);
        t = geq_0_0(t);
        t = u_32;
        t = p_93(t);
      }
      ;
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
    }
  return(t);
}
ATerm report_run_time_0_0 (ATerm t)
{
  ATerm i_5 (ATerm t)
  {
    ATerm y_32 = NULL,z_32 = NULL;
    t = run_time_0_0(t);
    y_32 = t;
    t = term_a_7;
    t = whoami_0_0(t);
    z_32 = t;
    t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), y_32), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), z_32));
    t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_24), y_32), term_d_24), z_32));
    return(t);
  }
  t = if_verbose1_1_0(i_5, t);
  return(t);
}
ATerm report_success_0_0 (ATerm t)
{
  t = report_run_time_0_0(t);
  t = SSL_exit((ATerm) ATmakeInt(0));
  return(t);
}
ATerm need_help_1_0 (ATerm m_96 (ATerm), ATerm t)
{
  ATerm f_24 = t;
  int g_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
      {
        ATerm h_24 = t;
        int i_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_9 = NULL;
            t = eval_config_0_0(t);
            j_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), j_9);
            t = j_9;
            ;
            LocalPopChoice(i_24);
          }
        else
          {
            t = h_24;
          }
      }
      ;
      LocalPopChoice(g_24);
    }
  else
    {
      t = f_24;
      {
        ATerm j_5 (ATerm t)
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(!(match_cons(t, sym_Help_0)))
                _fail(t);
              ;
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              {
                ATerm l_24 = t;
                int m_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1_0(_id, t);
                    ;
                    LocalPopChoice(m_24);
                  }
                else
                  {
                    t = l_24;
                    if(!(match_cons(t, sym_Version_0)))
                      _fail(t);
                  }
              }
            }
          return(t);
        }
        t = fetch_1_0(j_5, t);
      }
    }
  t = m_96(t);
  return(t);
}
ATerm reverse_acc_2_0 (ATerm e_0 (ATerm), ATerm g_0 (ATerm), ATerm t)
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
        t = e_0(t);
        h_33 = t;
        t = c_33;
        {
          ATerm k_5 (ATerm t)
          {
            t = (ATerm) ATinsert(CheckATermList(g_33), h_33);
            return(t);
          }
          t = reverse_acc_2_0(e_0, k_5, t);
        }
      }
    }
  else
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = term_a_7;
      t = g_0(t);
    }
  return(t);
}
ATerm Program_1_0 (ATerm w_69 (ATerm), ATerm t)
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
  t = w_69(t);
  k_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, k_33), i_33);
  return(t);
}
ATerm default_system_usage_0_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)));
      {
        ATerm q_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_9 = NULL;
            t = eval_config_0_0(t);
            t_9 = t;
            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), t_9);
            t = t_9;
            ;
            LocalPopChoice(r_24);
          }
        else
          {
            t = q_24;
          }
      }
      ;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      {
        ATerm l_5 (ATerm t)
        {
          t = Program_1_0(_id, t);
          return(t);
        }
        t = fetch_1_0(l_5, t);
      }
    }
  t = term_s_24;
  t = echo_0_0(t);
  t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
  {
    ATerm m_5 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2_0(_id, m_5, t);
    {
      ATerm n_5 (ATerm t)
      {
        ATerm o_33 = NULL;
        o_33 = t;
        t = (ATerm) ATinsert(ATinsert(ATempty, o_33), term_t_24);
        t = echo_0_0(t);
        return(t);
      }
      t = map_1_0(n_5, t);
    }
  }
  return(t);
}
ATerm Undefined_1_0 (ATerm x_69 (ATerm), ATerm t)
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
  t = x_69(t);
  r_33 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, r_33), p_33);
  return(t);
}
ATerm fetch_1_0 (ATerm h_80 (ATerm), ATerm t)
{
  ATerm v_33 (ATerm t)
  {
    ATerm u_24 = t;
    int v_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(h_80, _id, t);
        ;
        LocalPopChoice(v_24);
      }
    else
      {
        t = u_24;
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
    ATerm w_24 = t;
    int x_24 = stack_ptr;
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
                ATerm y_24 = ATgetFirst((ATermList) t);
                ATerm z_24 = (ATerm) ATgetNext((ATermList) t);
              }
            else
              _fail(t);
            t = x_33;
          }
        ;
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
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
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_10 = NULL;
        t = eval_config_0_0(t);
        e_10 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), e_10);
        t = e_10;
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
      }
    t = echo_0_0(t);
  }
  return(t);
}
ATerm concat_0_0 (ATerm t)
{
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      {
        ATerm i_34 = NULL,n_34 = NULL;
        if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
          {
            i_34 = ATgetFirst((ATermList) t);
            n_34 = (ATerm) ATgetNext((ATermList) t);
          }
        else
          _fail(t);
        t = i_34;
        {
          ATerm o_5 (ATerm t)
          {
            t = n_34;
            t = concat_0_0(t);
            return(t);
          }
          t = at_end_1_0(o_5, t);
        }
      }
    }
  return(t);
}
ATerm at_end_1_0 (ATerm n_80 (ATerm), ATerm t)
{
  ATerm t_34 (ATerm t)
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2_0(_id, t_34, t);
        ;
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        t = n_80(t);
      }
    return(t);
  }
  t = t_34(t);
  return(t);
}
ATerm _2_0 (ATerm i_62 (ATerm), ATerm j_62 (ATerm), ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL,x_34 = NULL,y_34 = NULL,z_34 = NULL;
  z_34 = t;
  if(match_cons(t, sym__2))
    {
      v_34 = ATgetArgument(t, 0);
      w_34 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(z_34);
  u_34 = t;
  t = v_34;
  t = i_62(t);
  x_34 = t;
  t = w_34;
  t = j_62(t);
  y_34 = t;
  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, x_34, y_34), u_34);
  return(t);
}
ATerm conc_strings_0_0 (ATerm t)
{
  ATerm d_35 = NULL;
  ATerm p_5 (ATerm t)
  {
    ATerm e_35 = NULL;
    e_35 = t;
    t = SSL_explode_string(e_35);
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    ATerm f_35 = NULL;
    f_35 = t;
    t = SSL_explode_string(f_35);
    return(t);
  }
  t = _2_0(p_5, q_5, t);
  {
    ATerm g_25 = t;
    int h_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_35 = NULL,i_35 = NULL;
        if(match_cons(t, sym__2))
          {
            h_35 = ATgetArgument(t, 0);
            i_35 = ATgetArgument(t, 1);
          }
        else
          _fail(t);
        t = h_35;
        {
          ATerm r_5 (ATerm t)
          {
            t = i_35;
            return(t);
          }
          t = at_end_1_0(r_5, t);
        }
        ;
        LocalPopChoice(h_25);
      }
    else
      {
        t = g_25;
        {
          ATerm q_10 = NULL,r_10 = NULL;
          q_10 = t;
          t = SSL_explode_term(q_10);
          if(match_cons(t, sym__2))
            {
              ATerm i_25 = ATgetArgument(t, 0);
              if((ATgetSymbol((ATermAppl) i_25) != ATmakeSymbol("", 0, ATtrue)))
                _fail(t);
              r_10 = ATgetArgument(t, 1);
            }
          else
            _fail(t);
          t = r_10;
          t = concat_0_0(t);
        }
      }
    d_35 = t;
    t = SSL_implode_string(d_35);
  }
  return(t);
}
ATerm map_1_0 (ATerm w_79 (ATerm), ATerm t)
{
  ATerm n_35 (ATerm t)
  {
    ATerm j_25 = t;
    int k_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        ;
        LocalPopChoice(k_25);
      }
    else
      {
        t = j_25;
        t = Cons_2_0(w_79, n_35, t);
      }
    return(t);
  }
  t = n_35(t);
  return(t);
}
ATerm eval_config_0_0 (ATerm t)
{
  ATerm l_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_35 = NULL;
      u_35 = t;
      t = SSL_is_string(u_35);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = l_25;
      {
        ATerm n_25 = t;
        int o_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              ATerm p_25 = t;
              int q_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0_0(t);
                  ;
                  LocalPopChoice(q_25);
                }
              else
                {
                  t = p_25;
                }
              return(t);
            }
            t = map_1_0(s_5, t);
            ;
            LocalPopChoice(o_25);
          }
        else
          {
            t = n_25;
            {
              ATerm y_35 = NULL,z_35 = NULL,a_36 = NULL;
              y_35 = t;
              if(match_cons(t, sym_Path_1))
                {
                  z_35 = ATgetArgument(t, 0);
                  t = z_35;
                }
              else
                {
                  if(match_cons(t, sym_Var_1))
                    {
                      z_35 = ATgetArgument(t, 0);
                      t = z_35;
                      {
                        ATerm r_25 = t;
                        int s_25 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_35);
                            {
                              ATerm t_25 = t;
                              int u_25 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  ATerm h_15 = NULL;
                                  t = eval_config_0_0(t);
                                  h_15 = t;
                                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), z_35, h_15);
                                  t = h_15;
                                  ;
                                  LocalPopChoice(u_25);
                                }
                              else
                                {
                                  t = t_25;
                                }
                            }
                            ;
                            LocalPopChoice(s_25);
                          }
                        else
                          {
                            t = r_25;
                            t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, z_35), (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue))));
                            t = z_35;
                            _fail(t);
                          }
                      }
                    }
                  else
                    {
                      ATerm e_36 = NULL,f_36 = NULL;
                      if(match_cons(t, sym_Prefix_2))
                        {
                          z_35 = ATgetArgument(t, 0);
                          a_36 = ATgetArgument(t, 1);
                        }
                      else
                        _fail(t);
                      t = z_35;
                      t = eval_config_0_0(t);
                      e_36 = t;
                      t = a_36;
                      t = eval_config_0_0(t);
                      f_36 = t;
                      t = (ATerm) ATmakeAppl(sym__2, e_36, f_36);
                      t = conc_strings_0_0(t);
                    }
                }
            }
          }
      }
    }
  return(t);
}
ATerm system_about_switch_0_0 (ATerm t)
{
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_5 (ATerm t)
      {
        if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--about", 0, ATtrue)))
          _fail(t);
        return(t);
      }
      ATerm u_5 (ATerm t)
      {
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
        t = term_z_25;
        return(t);
      }
      ATerm v_5 (ATerm t)
      {
        t = term_a_26;
        return(t);
      }
      t = Option_3_0(t_5, u_5, v_5, t);
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      {
        ATerm x_5 (ATerm t)
        {
          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("--version", 0, ATtrue)))
            _fail(t);
          return(t);
        }
        ATerm y_5 (ATerm t)
        {
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
          t = term_b_26;
          return(t);
        }
        ATerm z_5 (ATerm t)
        {
          t = term_c_26;
          return(t);
        }
        t = Option_3_0(x_5, y_5, z_5, t);
      }
    }
  return(t);
}
ATerm Cons_2_0 (ATerm r_63 (ATerm), ATerm s_63 (ATerm), ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL;
  p_36 = t;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      l_36 = ATgetFirst((ATermList) t);
      m_36 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = SSLgetAnnotations(p_36);
  k_36 = t;
  t = l_36;
  t = r_63(t);
  n_36 = t;
  t = m_36;
  t = s_63(t);
  o_36 = t;
  t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(o_36), n_36), k_36);
  return(t);
}
ATerm parse_options_p__1_0 (ATerm p_98 (ATerm), ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  {
    ATerm d_26 = t;
    int e_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_f_26;
        t = p_98(t);
        ;
        LocalPopChoice(e_26);
      }
    else
      {
        t = d_26;
      }
    t = t_36;
    {
      ATerm a_6 (ATerm t)
      {
        ATerm u_36 = NULL;
        u_36 = t;
        t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("program", 0, ATtrue)), u_36);
        t = (ATerm) ATmakeAppl(sym_Program_1, u_36);
        return(t);
      }
      ATerm b_6 (ATerm t)
      {
        ATerm g_26 = t;
        int i_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_26 = t;
            int m_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                  _fail(t);
                ;
                LocalPopChoice(m_26);
              }
            else
              {
                t = j_26;
                t = p_98(t);
                t = Cons_2_0(_id, b_6, t);
              }
            ;
            LocalPopChoice(i_26);
          }
        else
          {
            t = g_26;
            {
              ATerm w_36 = NULL,x_36 = NULL;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  w_36 = ATgetFirst((ATermList) t);
                  x_36 = (ATerm) ATgetNext((ATermList) t);
                }
              else
                _fail(t);
              t = (ATerm) ATinsert(CheckATermList(x_36), (ATerm) ATmakeAppl(sym_Undefined_1, w_36));
            }
          }
        return(t);
      }
      t = Cons_2_0(a_6, b_6, t);
    }
  }
  return(t);
}
ATerm parse_options_1_0 (ATerm o_98 (ATerm), ATerm t)
{
  ATerm e_37 = NULL,f_37 = NULL,g_37 = NULL;
  e_37 = t;
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
  t = e_37;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm n_26 = t;
      int o_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_98(t);
          ;
          LocalPopChoice(o_26);
        }
      else
        {
          t = n_26;
          {
            ATerm t_26 = t;
            int u_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_6 (ATerm t)
                {
                  ATerm h_37 = NULL;
                  h_37 = t;
                  if(match_string(t, "--help"))
                    {
                      t = h_37;
                    }
                  else
                    {
                      if(match_string(t, "-h"))
                        {
                          t = h_37;
                        }
                      else
                        {
                          if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-?", 0, ATtrue)))
                            _fail(t);
                          t = h_37;
                        }
                    }
                  return(t);
                }
                ATerm e_6 (ATerm t)
                {
                  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                  t = term_v_26;
                  return(t);
                }
                ATerm f_6 (ATerm t)
                {
                  t = term_w_26;
                  return(t);
                }
                t = Option_3_0(d_6, e_6, f_6, t);
                ;
                LocalPopChoice(u_26);
              }
            else
              {
                t = t_26;
                t = system_about_switch_0_0(t);
              }
          }
        }
      return(t);
    }
    t = parse_options_p__1_0(c_6, t);
    {
      ATerm j_27 = t;
      int k_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_37 = NULL;
          m_37 = t;
          {
            ATerm l_27 = t;
            int m_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = m_37;
                {
                  ATerm n_27 = t;
                  int o_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)));
                      {
                        ATerm p_27 = t;
                        int q_27 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm d_19 = NULL;
                            t = eval_config_0_0(t);
                            d_19 = t;
                            t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue)), d_19);
                            t = d_19;
                            ;
                            LocalPopChoice(q_27);
                          }
                        else
                          {
                            t = p_27;
                          }
                      }
                      ;
                      LocalPopChoice(o_27);
                    }
                  else
                    {
                      t = n_27;
                      {
                        ATerm i_6 (ATerm t)
                        {
                          if(!(match_cons(t, sym_Help_0)))
                            _fail(t);
                          return(t);
                        }
                        t = fetch_1_0(i_6, t);
                      }
                    }
                  t = m_37;
                  t = default_system_usage_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
                ;
                LocalPopChoice(m_27);
              }
            else
              {
                t = l_27;
                t = SSL_table_get((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)));
                {
                  ATerm r_27 = t;
                  int s_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_19 = NULL;
                      t = eval_config_0_0(t);
                      l_19 = t;
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("--about", 0, ATtrue)), l_19);
                      t = l_19;
                      ;
                      LocalPopChoice(s_27);
                    }
                  else
                    {
                      t = r_27;
                    }
                  t = m_37;
                  t = default_system_about_0_0(t);
                  t = SSL_exit((ATerm) ATmakeInt(0));
                }
              }
          }
          ;
          LocalPopChoice(k_27);
        }
      else
        {
          t = j_27;
          {
            ATerm u_27 = t;
            int v_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm k_6 (ATerm t)
                  {
                    if(((f_37 != NULL) && (f_37 != t)))
                      _fail(t);
                    else
                      f_37 = t;
                    return(t);
                  }
                  t = Undefined_1_0(k_6, t);
                  return(t);
                }
                t = fetch_1_0(j_6, t);
                t = SSL_printnl((ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(f_37)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                t = (ATerm) ATmakeAppl(sym__2, term_c_24, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_37)), term_w_27));
                t = default_system_usage_0_0(t);
                t = SSL_exit((ATerm) ATmakeInt(1));
                ;
                LocalPopChoice(v_27);
              }
            else
              {
                t = u_27;
              }
          }
        }
      g_37 = t;
      t = SSL_table_destroy((ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)));
      t = g_37;
    }
  }
  return(t);
}
ATerm option_wrap_4_0 (ATerm o_96 (ATerm), ATerm p_96 (ATerm), ATerm q_96 (ATerm), ATerm r_96 (ATerm), ATerm t)
{
  ATerm p_37 = NULL;
  t = parse_options_1_0(o_96, t);
  p_37 = t;
  t = SSL_table_create((ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)));
  t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), p_37);
  t = p_37;
  t = q_96(t);
  {
    ATerm y_27 = t;
    int z_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = need_help_1_0(p_96, t);
        ;
        LocalPopChoice(z_27);
      }
    else
      {
        t = y_27;
        {
          ATerm a_28 = t;
          int b_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = r_96(t);
              t = report_success_0_0(t);
              ;
              LocalPopChoice(b_28);
            }
          else
            {
              t = a_28;
              t = report_failure_0_0(t);
            }
        }
      }
  }
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm c_28 = t;
    int d_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = input_option_0_0(t);
        ;
        LocalPopChoice(d_28);
      }
    else
      {
        t = c_28;
        {
          ATerm e_28 = t;
          int f_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = output_option_0_0(t);
              ;
              LocalPopChoice(f_28);
            }
          else
            {
              t = e_28;
              {
                ATerm g_28 = t;
                int h_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm o_6 (ATerm t)
                    {
                      if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("-b", 0, ATtrue)))
                        _fail(t);
                      return(t);
                    }
                    ATerm p_6 (ATerm t)
                    {
                      t = SSL_table_put((ATerm)ATmakeAppl(ATmakeSymbol("config", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue)), (ATerm) ATmakeAppl(sym__0));
                      t = term_i_28;
                      return(t);
                    }
                    ATerm q_6 (ATerm t)
                    {
                      t = term_j_28;
                      return(t);
                    }
                    t = Option_3_0(o_6, p_6, q_6, t);
                    ;
                    LocalPopChoice(h_28);
                  }
                else
                  {
                    t = g_28;
                    {
                      ATerm k_28 = t;
                      int l_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = verbose_option_0_0(t);
                          ;
                          LocalPopChoice(l_28);
                        }
                      else
                        {
                          t = k_28;
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
  ATerm n_6 (ATerm t)
  {
    ATerm r_6 (ATerm t)
    {
      t = read_from_0_0(t);
      t = abox2html_0_0(t);
      t = topdown_print_to_0_0(t);
      return(t);
    }
    t = xtc_io_1_0(r_6, t);
    return(t);
  }
  t = option_wrap_4_0(m_6, default_usage_0_0, _id, n_6, t);
  return(t);
}

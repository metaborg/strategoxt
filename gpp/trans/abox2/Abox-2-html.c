#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_FILE_1;
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
Symbol sym_MATH_0;
Symbol sym_NUM_0;
Symbol sym_VAR_0;
Symbol sym_KW_0;
Symbol sym_AOPTIONS_1;
Symbol sym_AR_1;
Symbol sym_AC_1;
Symbol sym_AL_1;
Symbol sym_IS_0;
Symbol sym_HS_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_LNAT_2;
Symbol sym_L_2;
Symbol sym_C_2;
Symbol sym_REF_2;
Symbol sym_LBL_2;
Symbol sym_FBOX_2;
Symbol sym_R_2;
Symbol sym_A_3;
Symbol sym_ALT_2;
Symbol sym_HV_2;
Symbol sym_V_2;
Symbol sym_H_2;
Symbol sym_S_1;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_MATH_0;
Symbol sym_NUM_0;
Symbol sym_VAR_0;
Symbol sym_KW_0;
Symbol sym_AOPTIONS_1;
Symbol sym_AR_1;
Symbol sym_AC_1;
Symbol sym_AL_1;
Symbol sym_IS_0;
Symbol sym_HS_0;
Symbol sym_VS_0;
Symbol sym_SOpt_2;
Symbol sym_LNAT_2;
Symbol sym_L_2;
Symbol sym_C_2;
Symbol sym_REF_2;
Symbol sym_LBL_2;
Symbol sym_FBOX_2;
Symbol sym_R_2;
Symbol sym_A_3;
Symbol sym_ALT_2;
Symbol sym_HV_2;
Symbol sym_V_2;
Symbol sym_H_2;
Symbol sym_S_1;
static void init_module_constructors (void)
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
  sym__16 = ATmakeSymbol("", 16, ATfalse);
  ATprotectSymbol(sym__16);
  sym__17 = ATmakeSymbol("", 17, ATfalse);
  ATprotectSymbol(sym__17);
  sym__18 = ATmakeSymbol("", 18, ATfalse);
  ATprotectSymbol(sym__18);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
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
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
  ATprotectSymbol(sym_AOPTIONS_1);
  sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
  ATprotectSymbol(sym_AR_1);
  sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
  ATprotectSymbol(sym_AC_1);
  sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
  ATprotectSymbol(sym_AL_1);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
  ATprotectSymbol(sym_R_2);
  sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
  ATprotectSymbol(sym_A_3);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
}
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_n_6;
ATerm term_b_6;
ATerm term_t_5;
ATerm term_z_4;
ATerm term_x_4;
ATerm term_t_4;
ATerm term_k_4;
ATerm term_h_4;
ATerm term_b_4;
ATerm term_a_4;
ATerm term_x_3;
ATerm term_w_3;
ATerm term_r_3;
ATerm term_p_3;
ATerm term_o_3;
ATerm term_n_3;
ATerm term_m_3;
ATerm term_l_3;
ATerm term_d_3;
ATerm term_c_3;
ATerm term_b_3;
ATerm term_a_3;
ATerm term_z_2;
ATerm term_y_2;
ATerm term_x_2;
ATerm term_w_2;
ATerm term_v_2;
ATerm term_u_2;
ATerm term_s_2;
ATerm term_r_2;
ATerm term_q_2;
ATerm term_p_2;
ATerm term_o_2;
ATerm term_n_2;
ATerm term_l_2;
ATerm term_k_2;
ATerm term_j_2;
ATerm term_i_2;
ATerm term_h_2;
ATerm term_g_2;
ATerm term_f_2;
ATerm term_e_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_e_2));
  term_e_2 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_h_2));
  term_h_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_i_2));
  term_i_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_k_2));
  term_k_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_l_2));
  term_l_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_q_2));
  term_q_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_r_2));
  term_r_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_s_2));
  term_s_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_u_2));
  term_u_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_v_2));
  term_v_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_w_2));
  term_w_2 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_x_2));
  term_x_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_y_2));
  term_y_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_z_2));
  term_z_2 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_a_3));
  term_a_3 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_c_3));
  term_c_3 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_l_3));
  term_l_3 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_r_3));
  term_r_3 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_w_3));
  term_w_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_a_4));
  term_a_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_4));
  term_k_4 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_t_4));
  term_t_4 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_x_4));
  term_x_4 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_z_4));
  term_z_4 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm close_file_0_0 (ATerm t);
ATerm print_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Html2text_0_0 (ATerm t);
ATerm try_1_0 (ATerm y_103 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm e_85 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm h_86 (ATerm), ATerm t);
static ATerm e_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm replace_quotes_0_0 (ATerm t);
ATerm listtd_1_0 (ATerm b_91 (ATerm), ATerm t);
static ATerm j_0 (ATerm t);
static ATerm k_0 (ATerm t);
static ATerm n_0 (ATerm t);
ATerm html_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm f_10 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
static ATerm p_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
ATerm make_html_comment_0_0 (ATerm t);
ATerm map_1_0 (ATerm r_89 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm sep_by_1_0 (ATerm x_9 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm j_98 (ATerm), ATerm t);
static ATerm w_0 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm n_89 (ATerm), ATerm t);
ATerm tov_1_0 (ATerm w_9 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm b_90 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm i_10 (ATerm), ATerm t);
static ATerm z_0 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
ATerm make_hs_0_0 (ATerm t);
static ATerm v_1 (ATerm z_9 (ATerm), ATerm e_6, ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm split_2_0 (ATerm s_88 (ATerm), ATerm t_88 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
static ATerm b_1 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm f_1 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm j_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm m_1 (ATerm t);
static ATerm q_1 (ATerm t);
static ATerm s_1 (ATerm t);
ATerm Abox2html_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm d_85 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm g_76 (ATerm), ATerm h_76 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm t_90 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm e_90 (ATerm), ATerm t);
static ATerm w_1 (ATerm l_4, ATerm g_4, ATerm t);
static ATerm z_1 (ATerm t);
static ATerm a_2 (ATerm t);
ATerm normalize_0_0 (ATerm t);
static ATerm b_2 (ATerm t);
static ATerm c_2 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm o_108 (ATerm), ATerm t);
static ATerm d_2 (ATerm t);
ATerm main_0_0 (ATerm t);
ATerm main_0 (ATerm t)
{
  SRTS_stratego_initialize();
  t = main_0_0(t);
  return(t);
}
ATerm topdown_print_to_0_0 (ATerm t)
{
  ATerm a_0 = NULL,d_0 = NULL;
  a_0 = t;
  t = xtc_new_file_0_0(t);
  d_0 = t;
  t = (ATerm) ATmakeAppl(sym__2, d_0, term_e_2);
  t = open_file_0_0(t);
  t = a_0;
  {
    static ATerm b_0 (ATerm t);
    static ATerm b_0 (ATerm t)
    {
      static ATerm c_0 (ATerm t);
      static ATerm c_0 (ATerm t)
      {
        ATerm g_0 = NULL;
        t = is_string_0_0(t);
        g_0 = t;
        t = (ATerm) ATmakeAppl(sym__2, d_0, (ATerm) ATinsert(ATempty, g_0));
        t = print_0_0(t);
        t = g_0;
        return(t);
      }
      t = try_1_0(c_0, t);
      return(t);
    }
    t = topdown_1_0(b_0, t);
  }
  t = d_0;
  t = close_file_0_0(t);
  t = (ATerm) ATmakeAppl(sym_FILE_1, d_0);
  return(t);
}
ATerm Html2text_0_0 (ATerm t)
{
  ATerm l_0 = NULL,m_0 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      m_0 = ATgetArgument(t, 0);
      l_0 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_2), l_0), term_g_2), m_0), term_f_2);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          m_0 = ATgetArgument(t, 0);
          l_0 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_j_2), l_0), term_g_2), m_0), term_i_2);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              m_0 = ATgetArgument(t, 0);
              l_0 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_2), l_0), term_g_2), m_0), term_k_2);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  m_0 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_2), m_0), term_l_2);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      m_0 = ATgetArgument(t, 0);
                      l_0 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_2), l_0), term_g_2), m_0), term_o_2);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          m_0 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_2), m_0), term_q_2);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              m_0 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_2), m_0), term_s_2);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  m_0 = ATgetArgument(t, 0);
                                  l_0 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_2), l_0), term_w_2), m_0), term_v_2);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      m_0 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_2), m_0), term_y_2);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_a_3;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_b_3;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_c_3;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_d_3;
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
ATerm flat_list_0_0 (ATerm t)
{
  ATerm e_3 = t;
  int f_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(f_3);
    }
  else
    {
      t = e_3;
      {
        ATerm g_3 = t;
        int h_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(Nil_0_0, flat_list_0_0, t);
            LocalPopChoice(h_3);
          }
        else
          {
            t = g_3;
            {
              ATerm i_3 = t;
              int j_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
                  t = Cons_2_0(is_list_0_0, _id, t);
                  m_7 = t;
                  t = Hd_0_0(t);
                  k_7 = t;
                  t = m_7;
                  t = Tl_0_0(t);
                  l_7 = t;
                  t = (ATerm) ATmakeAppl(sym__2, k_7, l_7);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(j_3);
                }
              else
                {
                  t = i_3;
                  t = Cons_2_0(_id, flat_list_0_0, t);
                }
            }
          }
      }
    }
  return(t);
}
static ATerm e_0 (ATerm t)
{
  if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 34)))
    _fail(t);
  return(t);
}
static ATerm i_0 (ATerm t)
{
  ATerm s_7 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm k_3 = ATgetFirst((ATermList) t);
      if(((ATgetType(k_3) != AT_INT) || (ATgetInt((ATermInt) k_3) != 34)))
        _fail(t);
      s_7 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(s_7), term_l_3), term_l_3);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm q_7 = NULL,r_7 = NULL;
  static ATerm h_0 (ATerm t);
  static ATerm h_0 (ATerm t)
  {
    if(((q_7 != NULL) && (q_7 != t)))
      _fail(t);
    else
      q_7 = t;
    return(t);
  }
  t = Cons_2_0(e_0, h_0, t);
  t = not_null(q_7);
  t = oncetd_1_0(i_0, t);
  r_7 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(r_7), term_m_3), term_m_3);
  return(t);
}
static ATerm j_0 (ATerm t)
{
  t = try_1_0(replace_quotes_0_0, t);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = try_1_0(n_0, t);
  return(t);
}
static ATerm n_0 (ATerm t)
{
  if(match_int(t, 32))
    {
      t = term_b_3;
      t = explode_string_0_0(t);
    }
  else
    {
      if(match_int(t, 38))
        {
          t = term_n_3;
          t = explode_string_0_0(t);
        }
      else
        {
          if(match_int(t, 60))
            {
              t = term_o_3;
              t = explode_string_0_0(t);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 62)))
                _fail(t);
              t = term_p_3;
              t = explode_string_0_0(t);
            }
        }
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  t = listtd_1_0(j_0, t);
  t = map_1_0(k_0, t);
  t = flat_list_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm f_10 (ATerm), ATerm t)
{
  static ATerm y_7 (ATerm t);
  static ATerm y_7 (ATerm t)
  {
    static ATerm o_0 (ATerm t);
    static ATerm o_0 (ATerm t)
    {
      ATerm w_7 = NULL;
      t = Cons_2_0(f_10, _id, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm q_3 = ATgetFirst((ATermList) t);
          w_7 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = w_7;
      t = y_7(t);
      return(t);
    }
    t = try_1_0(o_0, t);
    return(t);
  }
  t = y_7(t);
  return(t);
}
static ATerm p_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm q_0 (ATerm t)
{
  ATerm p_8 = NULL;
  p_8 = t;
  if(match_int(t, 9))
    {
      t = p_8;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = p_8;
    }
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm v_8 = NULL;
  v_8 = t;
  if(match_int(t, 9))
    {
      t = v_8;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = v_8;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm t_0 (ATerm t)
{
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm u_0 (ATerm t)
{
  ATerm c_9 = NULL;
  c_9 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_3), c_9);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  t = reverse_0_0(t);
  t = split_2_0(_id, p_0, t);
  {
    static ATerm d_9 (ATerm t);
    static ATerm d_9 (ATerm t)
    {
      ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL;
      if(match_cons(t, sym__2))
        {
          h_8 = ATgetArgument(t, 0);
          k_8 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = h_8;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm o_8 = NULL;
          t = k_8;
          t = remove_trailing_1_0(q_0, t);
          t = implode_string_0_0(t);
          o_8 = t;
          t = (ATerm) ATinsert(ATempty, o_8);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              i_8 = ATgetFirst((ATermList) t);
              j_8 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = i_8;
          if(match_int(t, 10))
            {
              ATerm s_3 = t;
              int t_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_8 = NULL,u_8 = NULL;
                  t = k_8;
                  t = remove_trailing_1_0(r_0, t);
                  t = implode_string_0_0(t);
                  t_8 = t;
                  t = (ATerm) ATmakeAppl(sym__2, j_8, (ATerm) ATempty);
                  t = d_9(t);
                  u_8 = t;
                  t = (ATerm) ATinsert(CheckATermList(u_8), t_8);
                  LocalPopChoice(t_3);
                }
              else
                {
                  t = s_3;
                  t = (ATerm) ATmakeAppl(sym__2, j_8, (ATerm) ATinsert(CheckATermList(k_8), i_8));
                  t = d_9(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, j_8, (ATerm) ATinsert(CheckATermList(k_8), i_8));
              t = d_9(t);
            }
        }
      return(t);
    }
    t = d_9(t);
  }
  t = remove_trailing_1_0(s_0, t);
  t = reverse_0_0(t);
  t = remove_trailing_1_0(t_0, t);
  t = map_1_0(u_0, t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm e_9 = NULL;
  e_9 = t;
  t = (ATerm) ATinsert(ATempty, e_9);
  return(t);
}
ATerm sep_by_1_0 (ATerm x_9 (ATerm), ATerm t)
{
  t = map_1_0(v_0, t);
  t = separate_by_1_0(x_9, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm g_9 = NULL;
  ATerm u_3 = t;
  int v_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(w_0, t);
      LocalPopChoice(v_3);
    }
  else
    {
      t = u_3;
      t = term_w_3;
    }
  g_9 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, g_9, term_x_3);
      t = copy_0_0(t);
    }
  return(t);
}
ATerm tov_1_0 (ATerm w_9 (ATerm), ATerm t)
{
  ATerm m_9 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  n_10 = t;
  if(match_cons(t, sym_L_2))
    {
      l_10 = ATgetArgument(t, 0);
      m_10 = ATgetArgument(t, 1);
      {
        ATerm y_3 = t;
        int z_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 = NULL,i_4 = NULL;
            t = SSLgetAnnotations(n_10);
            f_0 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, l_10, m_10);
            i_4 = t;
            t = SSLsetAnnotations(i_4, f_0);
            LocalPopChoice(z_3);
          }
        else
          {
            t = y_3;
            {
              ATerm o_10 = NULL;
              t = term_a_4;
              t = w_9(t);
              o_10 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_b_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_10))), o_10))));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_LNAT_2))
        {
          l_10 = ATgetArgument(t, 0);
          m_10 = ATgetArgument(t, 1);
          {
            ATerm c_4 = t;
            int d_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_1 = NULL,j_4 = NULL;
                t = SSLgetAnnotations(n_10);
                u_1 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, l_10, m_10);
                j_4 = t;
                t = SSLsetAnnotations(j_4, u_1);
                LocalPopChoice(d_4);
              }
            else
              {
                t = c_4;
                {
                  ATerm p_10 = NULL;
                  t = term_a_4;
                  t = w_9(t);
                  p_10 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_b_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_10))), p_10))));
                }
              }
          }
        }
      else
        {
          ATerm q_10 = NULL;
          t = term_a_4;
          t = w_9(t);
          q_10 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_b_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, n_10))), q_10))));
        }
    }
  m_9 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_b_4), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, m_9))));
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm u_10 = NULL;
  ATerm e_4 = t;
  int f_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(x_0, t);
      LocalPopChoice(f_4);
    }
  else
    {
      t = e_4;
      t = term_h_4;
    }
  u_10 = t;
  if(match_int(t, 0))
    {
      t = term_k_4;
    }
  else
    {
      ATerm v_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, u_10, term_x_3);
      t = copy_0_0(t);
      v_10 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, v_10);
    }
  return(t);
}
ATerm SOpt_value_1_0 (ATerm i_10 (ATerm), ATerm t)
{
  ATerm x_10 = NULL;
  static ATerm y_0 (ATerm t);
  static ATerm y_0 (ATerm t)
  {
    ATerm y_10 = NULL,z_10 = NULL,a_11 = NULL,b_11 = NULL,c_11 = NULL,n_4 = NULL;
    c_11 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        z_10 = ATgetArgument(t, 0);
        a_11 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(c_11);
    y_10 = t;
    t = z_10;
    t = i_10(t);
    b_11 = t;
    t = a_11;
    if(((x_10 != NULL) && (x_10 != t)))
      _fail(t);
    else
      x_10 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, b_11, a_11);
    n_4 = t;
    t = SSLsetAnnotations(n_4, y_10);
    return(t);
  }
  t = fetch_1_0(y_0, t);
  t = not_null(x_10);
  t = string_to_int_0_0(t);
  return(t);
}
static ATerm z_0 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm e_11 = NULL;
  ATerm m_4 = t;
  int o_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(z_0, t);
      LocalPopChoice(o_4);
    }
  else
    {
      t = m_4;
      t = term_h_4;
    }
  e_11 = t;
  if(match_int(t, 0))
    {
      t = term_k_4;
    }
  else
    {
      ATerm f_11 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, e_11, term_r_3);
      t = copy_0_0(t);
      f_11 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, f_11)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm o_11 = NULL,k_11 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      k_11 = ATgetArgument(t, 0);
      t = k_11;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          k_11 = ATgetArgument(t, 0);
          t = k_11;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              k_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = k_11;
        }
    }
  t = Hspace_0_0(t);
  o_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = o_11;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, o_11);
    }
  return(t);
}
static ATerm v_1 (ATerm z_9 (ATerm), ATerm e_6, ATerm t)
{
  ATerm e_12 = NULL,f_12 = NULL;
  t = term_a_4;
  t = z_9(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      e_12 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, e_6, e_12);
  {
    static ATerm x_14 (ATerm t);
    static ATerm x_14 (ATerm t)
    {
      static ATerm y_14 (ATerm g_12, ATerm h_12, ATerm i_12, ATerm j_12, ATerm k_12, ATerm t);
      static ATerm z_14 (ATerm w_12, ATerm x_12, ATerm y_12, ATerm z_12, ATerm t);
      static ATerm y_14 (ATerm g_12, ATerm h_12, ATerm i_12, ATerm j_12, ATerm k_12, ATerm t)
      {
        ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
        t = j_12;
        {
          ATerm q_4 = t;
          int r_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm s_4 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(r_4);
              t = term_t_4;
            }
          else
            {
              t = q_4;
              {
                ATerm u_4 = t;
                int v_4 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm w_4 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(v_4);
                    t = term_x_4;
                  }
                else
                  {
                    t = u_4;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm y_4 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_z_4;
                  }
              }
            }
        }
        r_12 = t;
        t = j_12;
        t = make_hs_0_0(t);
        s_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(i_12), h_12), k_12);
        t = x_14(t);
        t_12 = t;
        t = (ATerm) ATinsert(ATinsert(CheckATermList(t_12), s_12), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, r_12), g_12));
        return(t);
      }
      static ATerm z_14 (ATerm w_12, ATerm x_12, ATerm y_12, ATerm z_12, ATerm t)
      {
        ATerm h_13 = NULL,i_13 = NULL;
        t = y_12;
        {
          ATerm a_5 = t;
          int b_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm c_5 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(b_5);
              t = term_t_4;
            }
          else
            {
              t = a_5;
              {
                ATerm d_5 = t;
                int e_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm f_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(e_5);
                    t = term_x_4;
                  }
                else
                  {
                    t = d_5;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm g_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_z_4;
                  }
              }
            }
        }
        h_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, x_12, z_12);
        t = x_14(t);
        i_13 = t;
        t = (ATerm) ATinsert(CheckATermList(i_13), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, h_13), w_12));
        return(t);
      }
      ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL;
      if(match_cons(t, sym__2))
        {
          q_13 = ATgetArgument(t, 0);
          t_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = q_13;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              r_13 = ATgetFirst((ATermList) t);
              s_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = t_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              u_13 = ATgetFirst((ATermList) t);
              v_13 = (ATerm) ATgetNext((ATermList) t);
              t = s_13;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  n_13 = ATgetFirst((ATermList) t);
                  o_13 = (ATerm) ATgetNext((ATermList) t);
                  t = r_13;
                  if(match_cons(t, sym_C_2))
                    {
                      l_13 = ATgetArgument(t, 0);
                      m_13 = ATgetArgument(t, 1);
                      {
                        ATerm h_5 = t;
                        int i_5 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_14 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, s_13, t_13);
                            t = x_14(t);
                            i_14 = t;
                            t = (ATerm) ATinsert(CheckATermList(i_14), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, l_13, m_13))));
                            LocalPopChoice(i_5);
                          }
                        else
                          {
                            t = h_5;
                            {
                              ATerm j_5 = t;
                              int k_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = y_14(r_13, n_13, o_13, u_13, v_13, t);
                                  LocalPopChoice(k_5);
                                }
                              else
                                {
                                  t = j_5;
                                  t = z_14(r_13, s_13, u_13, v_13, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm l_5 = t;
                      int m_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_14(r_13, n_13, o_13, u_13, v_13, t);
                          LocalPopChoice(m_5);
                        }
                      else
                        {
                          t = l_5;
                          t = z_14(r_13, s_13, u_13, v_13, t);
                        }
                    }
                }
              else
                {
                  t = r_13;
                  if(match_cons(t, sym_C_2))
                    {
                      l_13 = ATgetArgument(t, 0);
                      m_13 = ATgetArgument(t, 1);
                      {
                        ATerm n_5 = t;
                        int o_5 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_14 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, s_13, t_13);
                            t = x_14(t);
                            p_14 = t;
                            t = (ATerm) ATinsert(CheckATermList(p_14), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, l_13, m_13))));
                            LocalPopChoice(o_5);
                          }
                        else
                          {
                            t = n_5;
                            t = z_14(r_13, s_13, u_13, v_13, t);
                          }
                      }
                    }
                  else
                    {
                      t = z_14(r_13, s_13, u_13, v_13, t);
                    }
                }
            }
          else
            {
              ATerm w_14 = NULL;
              t = r_13;
              if(match_cons(t, sym_C_2))
                {
                  l_13 = ATgetArgument(t, 0);
                  m_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, s_13, t_13);
              t = x_14(t);
              w_14 = t;
              t = (ATerm) ATinsert(CheckATermList(w_14), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, l_13, m_13))));
            }
        }
      return(t);
    }
    t = x_14(t);
  }
  f_12 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_b_4), (ATerm) ATinsert(ATempty, f_12));
  return(t);
}
static ATerm a_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm b_1 (ATerm t)
{
  ATerm p_5 = t;
  if((PushChoice() == 0))
    {
      ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,p_4 = NULL;
      j_16 = t;
      if(match_cons(t, sym_R_2))
        {
          g_16 = ATgetArgument(t, 0);
          h_16 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = SSLgetAnnotations(j_16);
      f_16 = t;
      t = h_16;
      t = Nil_0_0(t);
      i_16 = t;
      t = (ATerm) ATmakeAppl(sym_R_2, g_16, i_16);
      p_4 = t;
      t = SSLsetAnnotations(p_4, f_16);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = p_5;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  t = split_2_0(_id, a_1, t);
  {
    static ATerm k_16 (ATerm t);
    static ATerm k_16 (ATerm t)
    {
      ATerm f_15 = NULL,g_15 = NULL,i_15 = NULL,j_15 = NULL,k_15 = NULL,l_15 = NULL;
      if(match_cons(t, sym__2))
        {
          i_15 = ATgetArgument(t, 0);
          l_15 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = i_15;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm q_15 = NULL;
          t = l_15;
          t = reverse_0_0(t);
          q_15 = t;
          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, q_15));
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              j_15 = ATgetFirst((ATermList) t);
              k_15 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = j_15;
          if(match_cons(t, sym_R_2))
            {
              f_15 = ATgetArgument(t, 0);
              g_15 = ATgetArgument(t, 1);
              {
                ATerm q_5 = t;
                int r_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_15 = NULL,w_15 = NULL;
                    t = l_15;
                    t = reverse_0_0(t);
                    v_15 = t;
                    t = (ATerm) ATmakeAppl(sym__2, k_15, (ATerm) ATempty);
                    t = k_16(t);
                    w_15 = t;
                    t = (ATerm) ATinsert(ATinsert(CheckATermList(w_15), (ATerm) ATmakeAppl(sym_R_2, f_15, g_15)), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, v_15));
                    LocalPopChoice(r_5);
                  }
                else
                  {
                    t = q_5;
                    t = (ATerm) ATmakeAppl(sym__2, k_15, (ATerm) ATinsert(CheckATermList(l_15), j_15));
                    t = k_16(t);
                  }
              }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, k_15, (ATerm) ATinsert(CheckATermList(l_15), j_15));
              t = k_16(t);
            }
        }
      return(t);
    }
    t = k_16(t);
  }
  t = filter_1_0(b_1, t);
  return(t);
}
static ATerm f_1 (ATerm t)
{
  ATerm s_5 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = s_5;
    }
  return(t);
}
static ATerm g_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_t_5);
  return(t);
}
static ATerm h_1 (ATerm t)
{
  ATerm u_5 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = u_5;
    }
  return(t);
}
static ATerm j_1 (ATerm t)
{
  ATerm v_5 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = v_5;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  t = tov_1_0(m_1, t);
  return(t);
}
static ATerm m_1 (ATerm t)
{
  t = term_k_4;
  return(t);
}
static ATerm q_1 (ATerm t)
{
  ATerm w_5 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = w_5;
    }
  return(t);
}
static ATerm s_1 (ATerm t)
{
  ATerm h_18 = NULL;
  if(match_cons(t, sym_S_1))
    {
      h_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = h_18;
  t = make_html_comment_0_0(t);
  return(t);
}
ATerm Abox2html_0_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL;
  i_17 = t;
  if(match_cons(t, sym_REF_2))
    {
      j_17 = ATgetArgument(t, 0);
      h_17 = ATgetArgument(t, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, j_17, h_17);
    }
  else
    {
      if(match_cons(t, sym_LBL_2))
        {
          j_17 = ATgetArgument(t, 0);
          h_17 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, h_17), (ATerm) ATmakeAppl(sym_ANCHOR_1, j_17));
        }
      else
        {
          ATerm x_5 = t;
          int y_5 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm z_5 = ATgetArgument(t, 0);
                  ATerm a_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(y_5);
              t = term_b_6;
            }
          else
            {
              t = x_5;
              {
                ATerm c_6 = t;
                int d_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm f_6 = ATgetArgument(t, 0);
                        ATerm g_6 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(d_6);
                    t = term_b_6;
                  }
                else
                  {
                    t = c_6;
                    {
                      ATerm h_6 = t;
                      int i_6 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              j_17 = ATgetArgument(t, 0);
                              {
                                ATerm j_6 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(i_6);
                          t = j_17;
                        }
                      else
                        {
                          t = h_6;
                          if(match_cons(t, sym_A_3))
                            {
                              j_17 = ATgetArgument(t, 0);
                              h_17 = ATgetArgument(t, 1);
                              g_17 = ATgetArgument(t, 2);
                              {
                                ATerm r_17 = NULL,t_17 = NULL,u_17 = NULL;
                                t = g_17;
                                t = construct_rows_0_0(t);
                                r_17 = t;
                                t = h_17;
                                t = Vspace_0_0(t);
                                t_17 = t;
                                t = r_17;
                                {
                                  static ATerm c_1 (ATerm t);
                                  static ATerm c_1 (ATerm t)
                                  {
                                    ATerm v_17 = NULL;
                                    static ATerm d_1 (ATerm t);
                                    static ATerm d_1 (ATerm t)
                                    {
                                      t = j_17;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm k_6 = ATgetArgument(t, 0);
                                        if(((ATgetType(k_6) != AT_LIST) || !(ATisEmpty(k_6))))
                                          _fail(t);
                                        v_17 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = v_1(d_1, v_17, t);
                                    return(t);
                                  }
                                  t = map_1_0(c_1, t);
                                }
                                {
                                  static ATerm e_1 (ATerm t);
                                  static ATerm e_1 (ATerm t)
                                  {
                                    t = t_17;
                                    return(t);
                                  }
                                  t = separate_by_1_0(e_1, t);
                                }
                                u_17 = t;
                                t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, u_17)))));
                              }
                            }
                          else
                            {
                              if(match_cons(t, sym_HV_2))
                                {
                                  j_17 = ATgetArgument(t, 0);
                                  h_17 = ATgetArgument(t, 1);
                                  {
                                    ATerm m_2 = NULL;
                                    t = j_17;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm l_6 = t;
                                      int m_6 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = h_17;
                                          t = filter_1_0(f_1, t);
                                          LocalPopChoice(m_6);
                                        }
                                      else
                                        {
                                          t = l_6;
                                          {
                                            ATerm t_2 = NULL;
                                            t = at_last_1_0(g_1, t);
                                            m_2 = t;
                                            t = h_17;
                                            t = filter_1_0(h_1, t);
                                            {
                                              static ATerm i_1 (ATerm t);
                                              static ATerm i_1 (ATerm t)
                                              {
                                                t = m_2;
                                                return(t);
                                              }
                                              t = separate_by_1_0(i_1, t);
                                            }
                                            t_2 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, t_2), term_n_6);
                                          }
                                        }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(t, sym_V_2))
                                    {
                                      j_17 = ATgetArgument(t, 0);
                                      h_17 = ATgetArgument(t, 1);
                                      {
                                        ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
                                        t = j_17;
                                        t = Vspace_0_0(t);
                                        z_17 = t;
                                        t = j_17;
                                        t = Ispace_0_0(t);
                                        y_17 = t;
                                        t = h_17;
                                        t = filter_1_0(j_1, t);
                                        {
                                          static ATerm l_1 (ATerm t);
                                          static ATerm l_1 (ATerm t)
                                          {
                                            static ATerm n_1 (ATerm t);
                                            static ATerm n_1 (ATerm t)
                                            {
                                              static ATerm o_1 (ATerm t);
                                              static ATerm o_1 (ATerm t)
                                              {
                                                t = y_17;
                                                return(t);
                                              }
                                              t = tov_1_0(o_1, t);
                                              return(t);
                                            }
                                            t = map_1_0(n_1, t);
                                            return(t);
                                          }
                                          t = Cons_2_0(k_1, l_1, t);
                                        }
                                        {
                                          static ATerm p_1 (ATerm t);
                                          static ATerm p_1 (ATerm t)
                                          {
                                            t = z_17;
                                            return(t);
                                          }
                                          t = separate_by_1_0(p_1, t);
                                        }
                                        a_18 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, a_18)), term_n_6);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_H_2))
                                        {
                                          j_17 = ATgetArgument(t, 0);
                                          h_17 = ATgetArgument(t, 1);
                                          {
                                            ATerm d_18 = NULL;
                                            static ATerm r_1 (ATerm t);
                                            static ATerm r_1 (ATerm t)
                                            {
                                              t = not_null(d_18);
                                              return(t);
                                            }
                                            t = j_17;
                                            t = Hspace_0_0(t);
                                            if(((d_18 != NULL) && (d_18 != t)))
                                              _fail(t);
                                            else
                                              d_18 = t;
                                            t = h_17;
                                            t = filter_1_0(q_1, t);
                                            t = sep_by_1_0(r_1, t);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_FBOX_2))
                                            {
                                              j_17 = ATgetArgument(t, 0);
                                              h_17 = ATgetArgument(t, 1);
                                              t = j_17;
                                              {
                                                ATerm o_6 = t;
                                                int p_6 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_q_6), (ATerm) ATinsert(ATempty, h_17));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_r_6), (ATerm) ATinsert(ATempty, h_17));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_s_6), (ATerm) ATinsert(ATempty, h_17));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_t_6), (ATerm) ATinsert(ATempty, h_17));
                                                              }
                                                          }
                                                      }
                                                    LocalPopChoice(p_6);
                                                  }
                                                else
                                                  {
                                                    t = o_6;
                                                    t = h_17;
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_C_2))
                                                {
                                                  j_17 = ATgetArgument(t, 0);
                                                  h_17 = ATgetArgument(t, 1);
                                                  {
                                                    ATerm g_18 = NULL;
                                                    t = j_17;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = h_17;
                                                    t = map_1_0(s_1, t);
                                                    g_18 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_u_6), (ATerm) ATinsert(ATempty, g_18)))));
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(t, sym_S_1))
                                                    {
                                                      j_17 = ATgetArgument(t, 0);
                                                    }
                                                  else
                                                    _fail(t);
                                                  t = j_17;
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
static ATerm w_1 (ATerm l_4, ATerm g_4, ATerm t)
{
  ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  t = g_4;
  {
    static ATerm t_1 (ATerm t);
    static ATerm t_1 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((q_18 != NULL) && (q_18 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            q_18 = ATgetArgument(t, 0);
          {
            ATerm v_6 = ATgetArgument(t, 1);
            if(((ATgetType(v_6) == AT_LIST) && !(ATisEmpty(v_6))))
              {
                if(((l_18 != NULL) && (l_18 != ATgetFirst((ATermList) v_6))))
                  _fail(ATgetFirst((ATermList) v_6));
                else
                  l_18 = ATgetFirst((ATermList) v_6);
                if(((m_18 != NULL) && (m_18 != (ATerm) ATgetNext((ATermList) v_6))))
                  _fail((ATerm) ATgetNext((ATermList) v_6));
                else
                  m_18 = (ATerm) ATgetNext((ATermList) v_6);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(t_1, t);
  }
  if(match_cons(t, sym__2))
    {
      p_18 = ATgetArgument(t, 0);
      o_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = o_18;
  {
    ATerm w_6 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = w_6;
      }
  }
  t = (ATerm) ATinsert(CheckATermList(not_null(m_18)), not_null(l_18));
  {
    static ATerm x_1 (ATerm t);
    static ATerm x_1 (ATerm t)
    {
      static ATerm y_1 (ATerm t);
      static ATerm y_1 (ATerm t)
      {
        if(((n_18 != NULL) && (n_18 != t)))
          _fail(t);
        else
          n_18 = t;
        return(t);
      }
      t = Cons_2_0(y_1, Nil_0_0, t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, l_4, (ATerm) ATinsert(CheckATermList(o_18), not_null(n_18))));
      return(t);
    }
    t = at_last_1_0(x_1, t);
  }
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, p_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(q_18), r_18)));
  t = conc_0_0(t);
  s_18 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, l_4, s_18);
  return(t);
}
static ATerm z_1 (ATerm t)
{
  t = try_1_0(a_2, t);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  ATerm y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  if(match_cons(t, sym_H_2))
    {
      b_19 = ATgetArgument(t, 0);
      c_19 = ATgetArgument(t, 1);
      t = c_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_18 = ATgetFirst((ATermList) t);
          z_18 = (ATerm) ATgetNext((ATermList) t);
          t = z_18;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = y_18;
            }
          else
            {
              t = a_19;
              t = w_1(b_19, c_19, t);
            }
        }
      else
        {
          t = a_19;
          t = w_1(b_19, c_19, t);
        }
    }
  else
    {
      if(match_cons(t, sym_V_2))
        {
          ATerm x_6 = ATgetArgument(t, 0);
          c_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = c_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          y_18 = ATgetFirst((ATermList) t);
          z_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = z_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = y_18;
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(z_1, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  t = try_1_0(Abox2html_0_0, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = try_1_0(Html2text_0_0, t);
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm m_19 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(b_2, t);
  m_19 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, m_19)))));
  t = bottomup_1_0(c_2, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = read_from_0_0(t);
  t = abox2html_0_0(t);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(d_2, t);
  return(t);
}

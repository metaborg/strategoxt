#include <srts/stratego.h>
#include <srts/stratego-lib.h>
void init_constructors (void)
{
}
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_Nil_0;
static Symbol sym_Cons_2;
static Symbol sym__0;
static Symbol sym__1;
static Symbol sym__2;
static Symbol sym__3;
static Symbol sym__4;
static Symbol sym__5;
static Symbol sym__6;
static Symbol sym__7;
static Symbol sym__8;
static Symbol sym__9;
static Symbol sym__10;
static Symbol sym__11;
static Symbol sym__12;
static Symbol sym__13;
static Symbol sym__14;
static Symbol sym__15;
static Symbol sym__16;
static Symbol sym__17;
static Symbol sym__18;
static Symbol sym_FILE_1;
static Symbol sym_TABLE_2;
static Symbol sym_TR_2;
static Symbol sym_TD_2;
static Symbol sym_TD_p__1;
static Symbol sym_SPAN_2;
static Symbol sym_HREF_2;
static Symbol sym_ANCHOR_1;
static Symbol sym_BR_0;
static Symbol sym_NBSP_0;
static Symbol sym_S_1;
static Symbol sym_TDTD_0;
static Symbol sym_TDTR_1;
static Symbol sym_PRE_1;
static Symbol sym_HR_0;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_MATH_0;
static Symbol sym_NUM_0;
static Symbol sym_VAR_0;
static Symbol sym_KW_0;
static Symbol sym_AOPTIONS_1;
static Symbol sym_AR_1;
static Symbol sym_AC_1;
static Symbol sym_AL_1;
static Symbol sym_IS_0;
static Symbol sym_HS_0;
static Symbol sym_VS_0;
static Symbol sym_SOpt_2;
static Symbol sym_LNAT_2;
static Symbol sym_L_2;
static Symbol sym_C_2;
static Symbol sym_REF_2;
static Symbol sym_LBL_2;
static Symbol sym_FBOX_2;
static Symbol sym_R_2;
static Symbol sym_A_3;
static Symbol sym_ALT_2;
static Symbol sym_HV_2;
static Symbol sym_V_2;
static Symbol sym_H_2;
static Symbol sym_S_1;
static Symbol sym_Cons_2;
static Symbol sym_Nil_0;
static Symbol sym_MATH_0;
static Symbol sym_NUM_0;
static Symbol sym_VAR_0;
static Symbol sym_KW_0;
static Symbol sym_AOPTIONS_1;
static Symbol sym_AR_1;
static Symbol sym_AC_1;
static Symbol sym_AL_1;
static Symbol sym_IS_0;
static Symbol sym_HS_0;
static Symbol sym_VS_0;
static Symbol sym_SOpt_2;
static Symbol sym_LNAT_2;
static Symbol sym_L_2;
static Symbol sym_C_2;
static Symbol sym_REF_2;
static Symbol sym_LBL_2;
static Symbol sym_FBOX_2;
static Symbol sym_R_2;
static Symbol sym_A_3;
static Symbol sym_ALT_2;
static Symbol sym_HV_2;
static Symbol sym_V_2;
static Symbol sym_H_2;
static Symbol sym_S_1;
static void init_module_constructors (void)
{
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
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
static ATerm term_p_7;
static ATerm term_o_7;
static ATerm term_n_7;
static ATerm term_m_7;
static ATerm term_l_7;
static ATerm term_i_7;
static ATerm term_v_6;
static ATerm term_g_6;
static ATerm term_u_4;
static ATerm term_s_4;
static ATerm term_o_4;
static ATerm term_i_4;
static ATerm term_h_4;
static ATerm term_c_4;
static ATerm term_b_4;
static ATerm term_y_3;
static ATerm term_x_3;
static ATerm term_s_3;
static ATerm term_q_3;
static ATerm term_p_3;
static ATerm term_o_3;
static ATerm term_n_3;
static ATerm term_m_3;
static ATerm term_e_3;
static ATerm term_d_3;
static ATerm term_c_3;
static ATerm term_b_3;
static ATerm term_z_2;
static ATerm term_y_2;
static ATerm term_x_2;
static ATerm term_w_2;
static ATerm term_v_2;
static ATerm term_u_2;
static ATerm term_t_2;
static ATerm term_s_2;
static ATerm term_r_2;
static ATerm term_p_2;
static ATerm term_o_2;
static ATerm term_n_2;
static ATerm term_m_2;
static ATerm term_l_2;
static ATerm term_k_2;
static ATerm term_j_2;
static ATerm term_i_2;
static ATerm term_h_2;
static ATerm term_g_2;
static ATerm term_f_2;
static void init_module_constant_terms (void)
{
  ATprotect(&(term_f_2));
  term_f_2 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_2));
  term_g_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_h_2));
  term_h_2 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_i_2));
  term_i_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_j_2));
  term_j_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_k_2));
  term_k_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_l_2));
  term_l_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_m_2));
  term_m_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_n_2));
  term_n_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_o_2));
  term_o_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_p_2));
  term_p_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_r_2));
  term_r_2 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_s_2));
  term_s_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_t_2));
  term_t_2 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
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
  ATprotect(&(term_b_3));
  term_b_3 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_c_3));
  term_c_3 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_d_3));
  term_d_3 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_e_3));
  term_e_3 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_m_3));
  term_m_3 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_n_3));
  term_n_3 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_o_3));
  term_o_3 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_p_3));
  term_p_3 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_q_3));
  term_q_3 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_s_3));
  term_s_3 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_x_3));
  term_x_3 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_y_3));
  term_y_3 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_b_4));
  term_b_4 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_4));
  term_c_4 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_h_4));
  term_h_4 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_i_4));
  term_i_4 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_o_4));
  term_o_4 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_s_4));
  term_s_4 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_u_4));
  term_u_4 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
}
#include <srts/init-stratego-application.h>
ATerm close_file_0_0 (ATerm t);
ATerm print_0_0 (ATerm t);
ATerm is_string_0_0 (ATerm t);
ATerm open_file_0_0 (ATerm t);
ATerm xtc_new_file_0_0 (ATerm t);
ATerm topdown_print_to_0_0 (ATerm t);
ATerm Html2text_0_0 (ATerm t);
ATerm try_1_0 (ATerm o_92 (ATerm), ATerm t);
ATerm bottomup_1_0 (ATerm m_94 (ATerm), ATerm t);
ATerm Tl_0_0 (ATerm t);
ATerm Hd_0_0 (ATerm t);
ATerm is_list_0_0 (ATerm t);
ATerm flat_list_0_0 (ATerm t);
ATerm oncetd_1_0 (ATerm p_95 (ATerm), ATerm t);
static ATerm e_0 (ATerm t);
static ATerm i_0 (ATerm t);
ATerm replace_quotes_0_0 (ATerm t);
ATerm listtd_1_0 (ATerm e_102 (ATerm), ATerm t);
static ATerm k_0 (ATerm t);
static ATerm m_0 (ATerm t);
static ATerm o_0 (ATerm t);
ATerm html_string_0_0 (ATerm t);
ATerm remove_trailing_1_0 (ATerm v_12 (ATerm), ATerm t);
ATerm implode_string_0_0 (ATerm t);
ATerm explode_string_0_0 (ATerm t);
static ATerm q_0 (ATerm t);
static ATerm r_0 (ATerm t);
static ATerm s_0 (ATerm t);
static ATerm t_0 (ATerm t);
static ATerm u_0 (ATerm t);
static ATerm v_0 (ATerm t);
ATerm make_html_comment_0_0 (ATerm t);
ATerm map_1_0 (ATerm w_100 (ATerm), ATerm t);
ATerm concat_0_0 (ATerm t);
static ATerm w_0 (ATerm t);
ATerm sep_by_1_0 (ATerm o_12 (ATerm), ATerm t);
ATerm filter_1_0 (ATerm x_108 (ATerm), ATerm t);
static ATerm x_0 (ATerm t);
ATerm Hspace_0_0 (ATerm t);
ATerm separate_by_1_0 (ATerm s_100 (ATerm), ATerm t);
ATerm tov_1_0 (ATerm n_12 (ATerm), ATerm t);
static ATerm y_0 (ATerm t);
ATerm Ispace_0_0 (ATerm t);
ATerm copy_0_0 (ATerm t);
ATerm string_to_int_0_0 (ATerm t);
ATerm fetch_1_0 (ATerm e_101 (ATerm), ATerm t);
ATerm SOpt_value_1_0 (ATerm y_12 (ATerm), ATerm t);
static ATerm a_1 (ATerm t);
ATerm Vspace_0_0 (ATerm t);
ATerm make_hs_0_0 (ATerm t);
static ATerm u_1 (ATerm q_12 (ATerm), ATerm v_8, ATerm t);
ATerm reverse_0_0 (ATerm t);
ATerm split_2_0 (ATerm m_109 (ATerm), ATerm n_109 (ATerm), ATerm t);
static ATerm b_1 (ATerm t);
static ATerm c_1 (ATerm t);
ATerm construct_rows_0_0 (ATerm t);
static ATerm g_1 (ATerm t);
static ATerm h_1 (ATerm t);
static ATerm i_1 (ATerm t);
static ATerm k_1 (ATerm t);
static ATerm l_1 (ATerm t);
static ATerm n_1 (ATerm t);
static ATerm r_1 (ATerm t);
static ATerm t_1 (ATerm t);
ATerm Abox2html_0_0 (ATerm t);
ATerm topdown_1_0 (ATerm l_94 (ATerm), ATerm t);
ATerm conc_0_0 (ATerm t);
ATerm Nil_0_0 (ATerm t);
ATerm Cons_2_0 (ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm t);
ATerm at_last_1_0 (ATerm w_101 (ATerm), ATerm t);
ATerm split_fetch_1_0 (ATerm h_101 (ATerm), ATerm t);
static ATerm v_1 (ATerm c_7, ATerm x_6, ATerm t);
static ATerm a_2 (ATerm t);
static ATerm b_2 (ATerm t);
ATerm normalize_0_0 (ATerm t);
static ATerm c_2 (ATerm t);
static ATerm d_2 (ATerm t);
ATerm abox2html_0_0 (ATerm t);
ATerm read_from_0_0 (ATerm t);
ATerm xtc_io_wrap_1_0 (ATerm r_5 (ATerm), ATerm t);
static ATerm e_2 (ATerm t);
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
  t = (ATerm) ATmakeAppl(sym__2, d_0, term_f_2);
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
  ATerm j_0 = NULL,l_0 = NULL;
  if(match_cons(t, sym_TABLE_2))
    {
      l_0 = ATgetArgument(t, 0);
      j_0 = ATgetArgument(t, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_2), j_0), term_h_2), l_0), term_g_2);
    }
  else
    {
      if(match_cons(t, sym_TR_2))
        {
          l_0 = ATgetArgument(t, 0);
          j_0 = ATgetArgument(t, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_2), j_0), term_h_2), l_0), term_j_2);
        }
      else
        {
          if(match_cons(t, sym_TD_2))
            {
              l_0 = ATgetArgument(t, 0);
              j_0 = ATgetArgument(t, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_2), j_0), term_h_2), l_0), term_l_2);
            }
          else
            {
              if(match_cons(t, sym_TD_p__1))
                {
                  l_0 = ATgetArgument(t, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_2), l_0), term_m_2);
                }
              else
                {
                  if(match_cons(t, sym_SPAN_2))
                    {
                      l_0 = ATgetArgument(t, 0);
                      j_0 = ATgetArgument(t, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_2), j_0), term_h_2), l_0), term_o_2);
                    }
                  else
                    {
                      if(match_cons(t, sym_PRE_1))
                        {
                          l_0 = ATgetArgument(t, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_2), l_0), term_r_2);
                        }
                      else
                        {
                          if(match_cons(t, sym_TDTR_1))
                            {
                              l_0 = ATgetArgument(t, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_2), l_0), term_t_2);
                            }
                          else
                            {
                              if(match_cons(t, sym_HREF_2))
                                {
                                  l_0 = ATgetArgument(t, 0);
                                  j_0 = ATgetArgument(t, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_x_2), j_0), term_w_2), l_0), term_v_2);
                                }
                              else
                                {
                                  if(match_cons(t, sym_ANCHOR_1))
                                    {
                                      l_0 = ATgetArgument(t, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_2), l_0), term_y_2);
                                    }
                                  else
                                    {
                                      if(match_cons(t, sym_BR_0))
                                        {
                                          t = term_b_3;
                                        }
                                      else
                                        {
                                          if(match_cons(t, sym_NBSP_0))
                                            {
                                              t = term_c_3;
                                            }
                                          else
                                            {
                                              if(match_cons(t, sym_HR_0))
                                                {
                                                  t = term_d_3;
                                                }
                                              else
                                                {
                                                  if(!(match_cons(t, sym_TDTD_0)))
                                                    _fail(t);
                                                  t = term_e_3;
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
  ATerm f_3 = t;
  int g_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      LocalPopChoice(g_3);
    }
  else
    {
      t = f_3;
      {
        ATerm h_3 = t;
        int i_3 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2_0(Nil_0_0, flat_list_0_0, t);
            LocalPopChoice(i_3);
          }
        else
          {
            t = h_3;
            {
              ATerm j_3 = t;
              int k_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_4 = NULL,x_4 = NULL,z_4 = NULL;
                  t = Cons_2_0(is_list_0_0, _id, t);
                  z_4 = t;
                  t = Hd_0_0(t);
                  w_4 = t;
                  t = z_4;
                  t = Tl_0_0(t);
                  x_4 = t;
                  t = (ATerm) ATmakeAppl(sym__2, w_4, x_4);
                  t = conc_0_0(t);
                  t = flat_list_0_0(t);
                  LocalPopChoice(k_3);
                }
              else
                {
                  t = j_3;
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
  ATerm f_5 = NULL;
  if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
    {
      ATerm l_3 = ATgetFirst((ATermList) t);
      if(((ATgetType(l_3) != AT_INT) || (ATgetInt((ATermInt) l_3) != 34)))
        _fail(t);
      f_5 = (ATerm) ATgetNext((ATermList) t);
    }
  else
    _fail(t);
  t = (ATerm) ATinsert(ATinsert(CheckATermList(f_5), term_m_3), term_m_3);
  return(t);
}
ATerm replace_quotes_0_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL;
  static ATerm h_0 (ATerm t);
  static ATerm h_0 (ATerm t)
  {
    if(((d_5 != NULL) && (d_5 != t)))
      _fail(t);
    else
      d_5 = t;
    return(t);
  }
  t = Cons_2_0(e_0, h_0, t);
  t = not_null(d_5);
  t = oncetd_1_0(i_0, t);
  e_5 = t;
  t = (ATerm) ATinsert(ATinsert(CheckATermList(e_5), term_n_3), term_n_3);
  return(t);
}
static ATerm k_0 (ATerm t)
{
  t = try_1_0(replace_quotes_0_0, t);
  return(t);
}
static ATerm m_0 (ATerm t)
{
  t = try_1_0(o_0, t);
  return(t);
}
static ATerm o_0 (ATerm t)
{
  if(match_int(t, 32))
    {
      t = term_c_3;
      t = explode_string_0_0(t);
    }
  else
    {
      if(match_int(t, 38))
        {
          t = term_o_3;
          t = explode_string_0_0(t);
        }
      else
        {
          if(match_int(t, 60))
            {
              t = term_p_3;
              t = explode_string_0_0(t);
            }
          else
            {
              if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 62)))
                _fail(t);
              t = term_q_3;
              t = explode_string_0_0(t);
            }
        }
    }
  return(t);
}
ATerm html_string_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  t = listtd_1_0(k_0, t);
  t = map_1_0(m_0, t);
  t = flat_list_0_0(t);
  t = implode_string_0_0(t);
  return(t);
}
ATerm remove_trailing_1_0 (ATerm v_12 (ATerm), ATerm t)
{
  static ATerm l_5 (ATerm t);
  static ATerm l_5 (ATerm t)
  {
    static ATerm p_0 (ATerm t);
    static ATerm p_0 (ATerm t)
    {
      ATerm j_5 = NULL;
      t = Cons_2_0(v_12, _id, t);
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          ATerm r_3 = ATgetFirst((ATermList) t);
          j_5 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = j_5;
      t = l_5(t);
      return(t);
    }
    t = try_1_0(p_0, t);
    return(t);
  }
  t = l_5(t);
  return(t);
}
static ATerm q_0 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm r_0 (ATerm t)
{
  ATerm d_6 = NULL;
  d_6 = t;
  if(match_int(t, 9))
    {
      t = d_6;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = d_6;
    }
  return(t);
}
static ATerm s_0 (ATerm t)
{
  ATerm j_6 = NULL;
  j_6 = t;
  if(match_int(t, 9))
    {
      t = j_6;
    }
  else
    {
      if(((ATgetType(t) != AT_INT) || (ATgetInt((ATermInt) t) != 32)))
        _fail(t);
      t = j_6;
    }
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
  if((ATgetSymbol((ATermAppl) t) != ATmakeSymbol("", 0, ATtrue)))
    _fail(t);
  return(t);
}
static ATerm v_0 (ATerm t)
{
  ATerm q_6 = NULL;
  q_6 = t;
  t = (ATerm) ATinsert(ATinsert(ATempty, term_s_3), q_6);
  return(t);
}
ATerm make_html_comment_0_0 (ATerm t)
{
  t = explode_string_0_0(t);
  t = reverse_0_0(t);
  t = split_2_0(_id, q_0, t);
  {
    static ATerm r_6 (ATerm t);
    static ATerm r_6 (ATerm t)
    {
      ATerm v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL;
      if(match_cons(t, sym__2))
        {
          v_5 = ATgetArgument(t, 0);
          y_5 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = v_5;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          ATerm c_6 = NULL;
          t = y_5;
          t = remove_trailing_1_0(r_0, t);
          t = implode_string_0_0(t);
          c_6 = t;
          t = (ATerm) ATinsert(ATempty, c_6);
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              w_5 = ATgetFirst((ATermList) t);
              x_5 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = w_5;
          if(match_int(t, 10))
            {
              ATerm t_3 = t;
              int u_3 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_6 = NULL,i_6 = NULL;
                  t = y_5;
                  t = remove_trailing_1_0(s_0, t);
                  t = implode_string_0_0(t);
                  h_6 = t;
                  t = (ATerm) ATmakeAppl(sym__2, x_5, (ATerm) ATempty);
                  t = r_6(t);
                  i_6 = t;
                  t = (ATerm) ATinsert(CheckATermList(i_6), h_6);
                  LocalPopChoice(u_3);
                }
              else
                {
                  t = t_3;
                  t = (ATerm) ATmakeAppl(sym__2, x_5, (ATerm) ATinsert(CheckATermList(y_5), w_5));
                  t = r_6(t);
                }
            }
          else
            {
              t = (ATerm) ATmakeAppl(sym__2, x_5, (ATerm) ATinsert(CheckATermList(y_5), w_5));
              t = r_6(t);
            }
        }
      return(t);
    }
    t = r_6(t);
  }
  t = remove_trailing_1_0(t_0, t);
  t = reverse_0_0(t);
  t = remove_trailing_1_0(u_0, t);
  t = map_1_0(v_0, t);
  return(t);
}
static ATerm w_0 (ATerm t)
{
  ATerm s_6 = NULL;
  s_6 = t;
  t = (ATerm) ATinsert(ATempty, s_6);
  return(t);
}
ATerm sep_by_1_0 (ATerm o_12 (ATerm), ATerm t)
{
  t = map_1_0(w_0, t);
  t = separate_by_1_0(o_12, t);
  t = concat_0_0(t);
  return(t);
}
static ATerm x_0 (ATerm t)
{
  if(!(match_cons(t, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0_0 (ATerm t)
{
  ATerm u_6 = NULL;
  ATerm v_3 = t;
  int w_3 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(x_0, t);
      LocalPopChoice(w_3);
    }
  else
    {
      t = v_3;
      t = term_x_3;
    }
  u_6 = t;
  if(match_int(t, 0))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym__2, u_6, term_y_3);
      t = copy_0_0(t);
    }
  return(t);
}
ATerm tov_1_0 (ATerm n_12 (ATerm), ATerm t)
{
  ATerm e_8 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
  e_10 = t;
  if(match_cons(t, sym_L_2))
    {
      c_10 = ATgetArgument(t, 0);
      d_10 = ATgetArgument(t, 1);
      {
        ATerm z_3 = t;
        int a_4 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 = NULL,n_0 = NULL;
            t = SSLgetAnnotations(e_10);
            f_0 = t;
            t = (ATerm) ATmakeAppl(sym_L_2, c_10, d_10);
            n_0 = t;
            t = SSLsetAnnotations(n_0, f_0);
            LocalPopChoice(a_4);
          }
        else
          {
            t = z_3;
            {
              ATerm f_10 = NULL;
              t = term_b_4;
              t = n_12(t);
              f_10 = t;
              t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_c_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_10))), f_10))));
            }
          }
      }
    }
  else
    {
      if(match_cons(t, sym_LNAT_2))
        {
          c_10 = ATgetArgument(t, 0);
          d_10 = ATgetArgument(t, 1);
          {
            ATerm d_4 = t;
            int e_4 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_1 = NULL,g_5 = NULL;
                t = SSLgetAnnotations(e_10);
                z_1 = t;
                t = (ATerm) ATmakeAppl(sym_LNAT_2, c_10, d_10);
                g_5 = t;
                t = SSLsetAnnotations(g_5, z_1);
                LocalPopChoice(e_4);
              }
            else
              {
                t = d_4;
                {
                  ATerm g_10 = NULL;
                  t = term_b_4;
                  t = n_12(t);
                  g_10 = t;
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_c_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_10))), g_10))));
                }
              }
          }
        }
      else
        {
          ATerm h_10 = NULL;
          t = term_b_4;
          t = n_12(t);
          h_10 = t;
          t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_c_4), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_10))), h_10))));
        }
    }
  e_8 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_c_4), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, e_8))));
  return(t);
}
static ATerm y_0 (ATerm t)
{
  if(!(match_cons(t, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0_0 (ATerm t)
{
  ATerm l_10 = NULL;
  ATerm f_4 = t;
  int g_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(y_0, t);
      LocalPopChoice(g_4);
    }
  else
    {
      t = f_4;
      t = term_h_4;
    }
  l_10 = t;
  if(match_int(t, 0))
    {
      t = term_i_4;
    }
  else
    {
      ATerm m_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, l_10, term_y_3);
      t = copy_0_0(t);
      m_10 = t;
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, m_10);
    }
  return(t);
}
ATerm SOpt_value_1_0 (ATerm y_12 (ATerm), ATerm t)
{
  ATerm o_10 = NULL;
  static ATerm z_0 (ATerm t);
  static ATerm z_0 (ATerm t)
  {
    ATerm p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,n_5 = NULL;
    t_10 = t;
    if(match_cons(t, sym_SOpt_2))
      {
        q_10 = ATgetArgument(t, 0);
        r_10 = ATgetArgument(t, 1);
      }
    else
      _fail(t);
    t = SSLgetAnnotations(t_10);
    p_10 = t;
    t = q_10;
    t = y_12(t);
    s_10 = t;
    t = r_10;
    if(((o_10 != NULL) && (o_10 != t)))
      _fail(t);
    else
      o_10 = t;
    t = (ATerm) ATmakeAppl(sym_SOpt_2, s_10, r_10);
    n_5 = t;
    t = SSLsetAnnotations(n_5, p_10);
    return(t);
  }
  t = fetch_1_0(z_0, t);
  t = not_null(o_10);
  t = string_to_int_0_0(t);
  return(t);
}
static ATerm a_1 (ATerm t)
{
  if(!(match_cons(t, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm Vspace_0_0 (ATerm t)
{
  ATerm v_10 = NULL;
  ATerm j_4 = t;
  int k_4 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = SOpt_value_1_0(a_1, t);
      LocalPopChoice(k_4);
    }
  else
    {
      t = j_4;
      t = term_h_4;
    }
  v_10 = t;
  if(match_int(t, 0))
    {
      t = term_i_4;
    }
  else
    {
      ATerm w_10 = NULL;
      t = (ATerm) ATmakeAppl(sym__2, v_10, term_s_3);
      t = copy_0_0(t);
      w_10 = t;
      t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, w_10)));
    }
  return(t);
}
ATerm make_hs_0_0 (ATerm t)
{
  ATerm f_11 = NULL,b_11 = NULL;
  if(match_cons(t, sym_AC_1))
    {
      b_11 = ATgetArgument(t, 0);
      t = b_11;
    }
  else
    {
      if(match_cons(t, sym_AR_1))
        {
          b_11 = ATgetArgument(t, 0);
          t = b_11;
        }
      else
        {
          if(match_cons(t, sym_AL_1))
            {
              b_11 = ATgetArgument(t, 0);
            }
          else
            _fail(t);
          t = b_11;
        }
    }
  t = Hspace_0_0(t);
  f_11 = t;
  if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
    {
      t = f_11;
    }
  else
    {
      t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, f_11);
    }
  return(t);
}
static ATerm u_1 (ATerm q_12 (ATerm), ATerm v_8, ATerm t)
{
  ATerm u_11 = NULL,v_11 = NULL;
  t = term_b_4;
  t = q_12(t);
  if(match_cons(t, sym_AOPTIONS_1))
    {
      u_11 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = (ATerm) ATmakeAppl(sym__2, v_8, u_11);
  {
    static ATerm x_14 (ATerm t);
    static ATerm x_14 (ATerm t)
    {
      static ATerm y_14 (ATerm w_11, ATerm x_11, ATerm y_11, ATerm z_11, ATerm a_12, ATerm t);
      static ATerm z_14 (ATerm m_12, ATerm s_12, ATerm t_12, ATerm x_12, ATerm t);
      static ATerm y_14 (ATerm w_11, ATerm x_11, ATerm y_11, ATerm z_11, ATerm a_12, ATerm t)
      {
        ATerm h_12 = NULL,i_12 = NULL,j_12 = NULL;
        t = z_11;
        {
          ATerm l_4 = t;
          int m_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm n_4 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(m_4);
              t = term_o_4;
            }
          else
            {
              t = l_4;
              {
                ATerm p_4 = t;
                int q_4 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm r_4 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(q_4);
                    t = term_s_4;
                  }
                else
                  {
                    t = p_4;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm t_4 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_u_4;
                  }
              }
            }
        }
        h_12 = t;
        t = z_11;
        t = make_hs_0_0(t);
        i_12 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(y_11), x_11), a_12);
        t = x_14(t);
        j_12 = t;
        t = (ATerm) ATinsert(ATinsert(CheckATermList(j_12), i_12), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, h_12), w_11));
        return(t);
      }
      static ATerm z_14 (ATerm m_12, ATerm s_12, ATerm t_12, ATerm x_12, ATerm t)
      {
        ATerm g_13 = NULL,h_13 = NULL;
        t = t_12;
        {
          ATerm v_4 = t;
          int y_4 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_AL_1))
                {
                  ATerm a_5 = ATgetArgument(t, 0);
                }
              else
                _fail(t);
              LocalPopChoice(y_4);
              t = term_o_4;
            }
          else
            {
              t = v_4;
              {
                ATerm b_5 = t;
                int c_5 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_AR_1))
                      {
                        ATerm h_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(c_5);
                    t = term_s_4;
                  }
                else
                  {
                    t = b_5;
                    if(match_cons(t, sym_AC_1))
                      {
                        ATerm i_5 = ATgetArgument(t, 0);
                      }
                    else
                      _fail(t);
                    t = term_u_4;
                  }
              }
            }
        }
        g_13 = t;
        t = (ATerm) ATmakeAppl(sym__2, s_12, x_12);
        t = x_14(t);
        h_13 = t;
        t = (ATerm) ATinsert(CheckATermList(h_13), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, g_13), m_12));
        return(t);
      }
      ATerm k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL,u_13 = NULL;
      if(match_cons(t, sym__2))
        {
          p_13 = ATgetArgument(t, 0);
          s_13 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = p_13;
      if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
        {
          t = (ATerm) ATempty;
        }
      else
        {
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              q_13 = ATgetFirst((ATermList) t);
              r_13 = (ATerm) ATgetNext((ATermList) t);
            }
          else
            _fail(t);
          t = s_13;
          if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
            {
              t_13 = ATgetFirst((ATermList) t);
              u_13 = (ATerm) ATgetNext((ATermList) t);
              t = r_13;
              if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
                {
                  m_13 = ATgetFirst((ATermList) t);
                  n_13 = (ATerm) ATgetNext((ATermList) t);
                  t = q_13;
                  if(match_cons(t, sym_C_2))
                    {
                      k_13 = ATgetArgument(t, 0);
                      l_13 = ATgetArgument(t, 1);
                      {
                        ATerm k_5 = t;
                        int m_5 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm h_14 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, r_13, s_13);
                            t = x_14(t);
                            h_14 = t;
                            t = (ATerm) ATinsert(CheckATermList(h_14), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, k_13, l_13))));
                            LocalPopChoice(m_5);
                          }
                        else
                          {
                            t = k_5;
                            {
                              ATerm o_5 = t;
                              int q_5 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = y_14(q_13, m_13, n_13, t_13, u_13, t);
                                  LocalPopChoice(q_5);
                                }
                              else
                                {
                                  t = o_5;
                                  t = z_14(q_13, r_13, t_13, u_13, t);
                                }
                            }
                          }
                      }
                    }
                  else
                    {
                      ATerm s_5 = t;
                      int t_5 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = y_14(q_13, m_13, n_13, t_13, u_13, t);
                          LocalPopChoice(t_5);
                        }
                      else
                        {
                          t = s_5;
                          t = z_14(q_13, r_13, t_13, u_13, t);
                        }
                    }
                }
              else
                {
                  t = q_13;
                  if(match_cons(t, sym_C_2))
                    {
                      k_13 = ATgetArgument(t, 0);
                      l_13 = ATgetArgument(t, 1);
                      {
                        ATerm u_5 = t;
                        int z_5 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm p_14 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, r_13, s_13);
                            t = x_14(t);
                            p_14 = t;
                            t = (ATerm) ATinsert(CheckATermList(p_14), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, k_13, l_13))));
                            LocalPopChoice(z_5);
                          }
                        else
                          {
                            t = u_5;
                            t = z_14(q_13, r_13, t_13, u_13, t);
                          }
                      }
                    }
                  else
                    {
                      t = z_14(q_13, r_13, t_13, u_13, t);
                    }
                }
            }
          else
            {
              ATerm w_14 = NULL;
              t = q_13;
              if(match_cons(t, sym_C_2))
                {
                  k_13 = ATgetArgument(t, 0);
                  l_13 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              t = (ATerm) ATmakeAppl(sym__2, r_13, s_13);
              t = x_14(t);
              w_14 = t;
              t = (ATerm) ATinsert(CheckATermList(w_14), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, k_13, l_13))));
            }
        }
      return(t);
    }
    t = x_14(t);
  }
  v_11 = t;
  t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_c_4), (ATerm) ATinsert(ATempty, v_11));
  return(t);
}
static ATerm b_1 (ATerm t)
{
  t = (ATerm) ATempty;
  return(t);
}
static ATerm c_1 (ATerm t)
{
  ATerm a_6 = t;
  if((PushChoice() == 0))
    {
      ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,p_5 = NULL;
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
      p_5 = t;
      t = SSLsetAnnotations(p_5, f_16);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = a_6;
    }
  return(t);
}
ATerm construct_rows_0_0 (ATerm t)
{
  t = split_2_0(_id, b_1, t);
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
                ATerm b_6 = t;
                int e_6 = stack_ptr;
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
                    LocalPopChoice(e_6);
                  }
                else
                  {
                    t = b_6;
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
  t = filter_1_0(c_1, t);
  return(t);
}
static ATerm g_1 (ATerm t)
{
  ATerm f_6 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = f_6;
    }
  return(t);
}
static ATerm h_1 (ATerm t)
{
  t = (ATerm) ATinsert(ATempty, term_g_6);
  return(t);
}
static ATerm i_1 (ATerm t)
{
  ATerm k_6 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = k_6;
    }
  return(t);
}
static ATerm k_1 (ATerm t)
{
  ATerm l_6 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = l_6;
    }
  return(t);
}
static ATerm l_1 (ATerm t)
{
  t = tov_1_0(n_1, t);
  return(t);
}
static ATerm n_1 (ATerm t)
{
  t = term_i_4;
  return(t);
}
static ATerm r_1 (ATerm t)
{
  ATerm m_6 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = m_6;
    }
  return(t);
}
static ATerm t_1 (ATerm t)
{
  ATerm g_18 = NULL;
  if(match_cons(t, sym_S_1))
    {
      g_18 = ATgetArgument(t, 0);
    }
  else
    _fail(t);
  t = g_18;
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
          ATerm n_6 = t;
          int o_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              if(match_cons(t, sym_LNAT_2))
                {
                  ATerm p_6 = ATgetArgument(t, 0);
                  ATerm t_6 = ATgetArgument(t, 1);
                }
              else
                _fail(t);
              LocalPopChoice(o_6);
              t = term_v_6;
            }
          else
            {
              t = n_6;
              {
                ATerm w_6 = t;
                int y_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    if(match_cons(t, sym_L_2))
                      {
                        ATerm z_6 = ATgetArgument(t, 0);
                        ATerm a_7 = ATgetArgument(t, 1);
                      }
                    else
                      _fail(t);
                    LocalPopChoice(y_6);
                    t = term_v_6;
                  }
                else
                  {
                    t = w_6;
                    {
                      ATerm b_7 = t;
                      int d_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(match_cons(t, sym_ALT_2))
                            {
                              j_17 = ATgetArgument(t, 0);
                              {
                                ATerm e_7 = ATgetArgument(t, 1);
                              }
                            }
                          else
                            _fail(t);
                          LocalPopChoice(d_7);
                          t = j_17;
                        }
                      else
                        {
                          t = b_7;
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
                                  static ATerm d_1 (ATerm t);
                                  static ATerm d_1 (ATerm t)
                                  {
                                    ATerm v_17 = NULL;
                                    static ATerm e_1 (ATerm t);
                                    static ATerm e_1 (ATerm t)
                                    {
                                      t = j_17;
                                      return(t);
                                    }
                                    if(match_cons(t, sym_R_2))
                                      {
                                        ATerm f_7 = ATgetArgument(t, 0);
                                        if(((ATgetType(f_7) != AT_LIST) || !(ATisEmpty(f_7))))
                                          _fail(t);
                                        v_17 = ATgetArgument(t, 1);
                                      }
                                    else
                                      _fail(t);
                                    t = u_1(e_1, v_17, t);
                                    return(t);
                                  }
                                  t = map_1_0(d_1, t);
                                }
                                {
                                  static ATerm f_1 (ATerm t);
                                  static ATerm f_1 (ATerm t)
                                  {
                                    t = t_17;
                                    return(t);
                                  }
                                  t = separate_by_1_0(f_1, t);
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
                                    ATerm q_2 = NULL;
                                    t = j_17;
                                    t = Hspace_0_0(t);
                                    {
                                      ATerm g_7 = t;
                                      int h_7 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                            _fail(t);
                                          t = h_17;
                                          t = filter_1_0(g_1, t);
                                          LocalPopChoice(h_7);
                                        }
                                      else
                                        {
                                          t = g_7;
                                          {
                                            ATerm a_3 = NULL;
                                            t = at_last_1_0(h_1, t);
                                            q_2 = t;
                                            t = h_17;
                                            t = filter_1_0(i_1, t);
                                            {
                                              static ATerm j_1 (ATerm t);
                                              static ATerm j_1 (ATerm t)
                                              {
                                                t = q_2;
                                                return(t);
                                              }
                                              t = separate_by_1_0(j_1, t);
                                            }
                                            a_3 = t;
                                            t = (ATerm) ATinsert(ATinsert(ATempty, a_3), term_i_7);
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
                                        t = filter_1_0(k_1, t);
                                        {
                                          static ATerm m_1 (ATerm t);
                                          static ATerm m_1 (ATerm t)
                                          {
                                            static ATerm o_1 (ATerm t);
                                            static ATerm o_1 (ATerm t)
                                            {
                                              static ATerm p_1 (ATerm t);
                                              static ATerm p_1 (ATerm t)
                                              {
                                                t = y_17;
                                                return(t);
                                              }
                                              t = tov_1_0(p_1, t);
                                              return(t);
                                            }
                                            t = map_1_0(o_1, t);
                                            return(t);
                                          }
                                          t = Cons_2_0(l_1, m_1, t);
                                        }
                                        {
                                          static ATerm q_1 (ATerm t);
                                          static ATerm q_1 (ATerm t)
                                          {
                                            t = z_17;
                                            return(t);
                                          }
                                          t = separate_by_1_0(q_1, t);
                                        }
                                        a_18 = t;
                                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, a_18)), term_i_7);
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
                                            static ATerm s_1 (ATerm t);
                                            static ATerm s_1 (ATerm t)
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
                                            t = filter_1_0(r_1, t);
                                            t = sep_by_1_0(s_1, t);
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
                                                ATerm j_7 = t;
                                                int k_7 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    if(match_cons(t, sym_KW_0))
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_l_7), (ATerm) ATinsert(ATempty, h_17));
                                                      }
                                                    else
                                                      {
                                                        if(match_cons(t, sym_VAR_0))
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_m_7), (ATerm) ATinsert(ATempty, h_17));
                                                          }
                                                        else
                                                          {
                                                            if(match_cons(t, sym_NUM_0))
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_n_7), (ATerm) ATinsert(ATempty, h_17));
                                                              }
                                                            else
                                                              {
                                                                if(!(match_cons(t, sym_MATH_0)))
                                                                  _fail(t);
                                                                t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_o_7), (ATerm) ATinsert(ATempty, h_17));
                                                              }
                                                          }
                                                      }
                                                    LocalPopChoice(k_7);
                                                  }
                                                else
                                                  {
                                                    t = j_7;
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
                                                    ATerm f_18 = NULL;
                                                    t = j_17;
                                                    if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
                                                      _fail(t);
                                                    t = h_17;
                                                    t = map_1_0(t_1, t);
                                                    f_18 = t;
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_p_7), (ATerm) ATinsert(ATempty, f_18)))));
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
static ATerm v_1 (ATerm c_7, ATerm x_6, ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL,q_18 = NULL,r_18 = NULL;
  t = x_6;
  {
    static ATerm w_1 (ATerm t);
    static ATerm w_1 (ATerm t)
    {
      if(match_cons(t, sym_V_2))
        {
          if(((p_18 != NULL) && (p_18 != ATgetArgument(t, 0))))
            _fail(ATgetArgument(t, 0));
          else
            p_18 = ATgetArgument(t, 0);
          {
            ATerm q_7 = ATgetArgument(t, 1);
            if(((ATgetType(q_7) == AT_LIST) && !(ATisEmpty(q_7))))
              {
                if(((k_18 != NULL) && (k_18 != ATgetFirst((ATermList) q_7))))
                  _fail(ATgetFirst((ATermList) q_7));
                else
                  k_18 = ATgetFirst((ATermList) q_7);
                if(((l_18 != NULL) && (l_18 != (ATerm) ATgetNext((ATermList) q_7))))
                  _fail((ATerm) ATgetNext((ATermList) q_7));
                else
                  l_18 = (ATerm) ATgetNext((ATermList) q_7);
              }
            else
              _fail(t);
          }
        }
      else
        _fail(t);
      return(t);
    }
    t = split_fetch_1_0(w_1, t);
  }
  if(match_cons(t, sym__2))
    {
      o_18 = ATgetArgument(t, 0);
      n_18 = ATgetArgument(t, 1);
    }
  else
    _fail(t);
  t = n_18;
  {
    ATerm r_7 = t;
    if((PushChoice() == 0))
      {
        if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
          _fail(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = r_7;
      }
  }
  t = (ATerm) ATinsert(CheckATermList(not_null(l_18)), not_null(k_18));
  {
    static ATerm x_1 (ATerm t);
    static ATerm x_1 (ATerm t)
    {
      static ATerm y_1 (ATerm t);
      static ATerm y_1 (ATerm t)
      {
        if(((m_18 != NULL) && (m_18 != t)))
          _fail(t);
        else
          m_18 = t;
        return(t);
      }
      t = Cons_2_0(y_1, Nil_0_0, t);
      t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, c_7, (ATerm) ATinsert(CheckATermList(n_18), not_null(m_18))));
      return(t);
    }
    t = at_last_1_0(x_1, t);
  }
  q_18 = t;
  t = (ATerm) ATmakeAppl(sym__2, o_18, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(p_18), q_18)));
  t = conc_0_0(t);
  r_18 = t;
  t = (ATerm) ATmakeAppl(sym_H_2, c_7, r_18);
  return(t);
}
static ATerm a_2 (ATerm t)
{
  t = try_1_0(b_2, t);
  return(t);
}
static ATerm b_2 (ATerm t)
{
  ATerm x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  if(match_cons(t, sym_H_2))
    {
      a_19 = ATgetArgument(t, 0);
      b_19 = ATgetArgument(t, 1);
      t = b_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_18 = ATgetFirst((ATermList) t);
          y_18 = (ATerm) ATgetNext((ATermList) t);
          t = y_18;
          if(((ATgetType(t) == AT_LIST) && ATisEmpty(t)))
            {
              t = x_18;
            }
          else
            {
              t = z_18;
              t = v_1(a_19, b_19, t);
            }
        }
      else
        {
          t = z_18;
          t = v_1(a_19, b_19, t);
        }
    }
  else
    {
      if(match_cons(t, sym_V_2))
        {
          ATerm s_7 = ATgetArgument(t, 0);
          b_19 = ATgetArgument(t, 1);
        }
      else
        _fail(t);
      t = b_19;
      if(((ATgetType(t) == AT_LIST) && !(ATisEmpty(t))))
        {
          x_18 = ATgetFirst((ATermList) t);
          y_18 = (ATerm) ATgetNext((ATermList) t);
        }
      else
        _fail(t);
      t = y_18;
      if(((ATgetType(t) != AT_LIST) || !(ATisEmpty(t))))
        _fail(t);
      t = x_18;
    }
  return(t);
}
ATerm normalize_0_0 (ATerm t)
{
  t = topdown_1_0(a_2, t);
  return(t);
}
static ATerm c_2 (ATerm t)
{
  t = try_1_0(Abox2html_0_0, t);
  return(t);
}
static ATerm d_2 (ATerm t)
{
  t = try_1_0(Html2text_0_0, t);
  return(t);
}
ATerm abox2html_0_0 (ATerm t)
{
  ATerm k_19 = NULL;
  t = normalize_0_0(t);
  t = topdown_1_0(c_2, t);
  k_19 = t;
  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, k_19)))));
  t = bottomup_1_0(d_2, t);
  return(t);
}
static ATerm e_2 (ATerm t)
{
  t = read_from_0_0(t);
  t = abox2html_0_0(t);
  t = topdown_print_to_0_0(t);
  return(t);
}
ATerm main_0_0 (ATerm t)
{
  t = xtc_io_wrap_1_0(e_2, t);
  return(t);
}

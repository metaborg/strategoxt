#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
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
Symbol sym_SOpt_2;
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_ALT_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_FNAT_2;
Symbol sym_FFID_2;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_C_2;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_S_1;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_PP_Table_1;
Symbol sym_selector_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_PP_Entry_2;
Symbol sym_SOpt_2;
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_H_2;
Symbol sym_V_2;
Symbol sym_HV_2;
Symbol sym_ALT_2;
Symbol sym_A_3;
Symbol sym_R_2;
Symbol sym_AL_1;
Symbol sym_AC_1;
Symbol sym_AR_1;
Symbol sym_AOPTIONS_1;
Symbol sym_FNAT_2;
Symbol sym_FFID_2;
Symbol sym_F_1;
Symbol sym_FBOX_2;
Symbol sym_FN_0;
Symbol sym_FM_0;
Symbol sym_SE_0;
Symbol sym_SH_0;
Symbol sym_SZ_0;
Symbol sym_CL_0;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_C_2;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_S_1;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_PP_Table_1;
Symbol sym_selector_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_PP_Entry_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_Scopes_0;
Symbol sym_Keys_0;
Symbol sym_Keys_1;
Symbol sym_Keys_2;
Symbol sym_Keys_3;
Symbol sym_Keys_4;
Symbol sym_Keys_5;
Symbol sym_Keys_6;
Symbol sym_Keys_7;
Symbol sym_Keys_8;
Symbol sym_Keys_9;
Symbol sym_Keys_10;
Symbol sym_Defined_0;
Symbol sym_Defined_1;
Symbol sym_Defined_2;
Symbol sym_Defined_3;
Symbol sym_Defined_4;
Symbol sym_Defined_5;
Symbol sym_Defined_6;
Symbol sym_Defined_7;
Symbol sym_Defined_8;
Symbol sym_Defined_9;
Symbol sym_Defined_10;
Symbol sym_Undefined_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
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
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
  ATprotectSymbol(sym_SOptB_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
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
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
  ATprotectSymbol(sym_SOpt_2);
  sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
  ATprotectSymbol(sym_SOptB_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
  ATprotectSymbol(sym_H_2);
  sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
  ATprotectSymbol(sym_V_2);
  sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
  ATprotectSymbol(sym_HV_2);
  sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
  ATprotectSymbol(sym_ALT_2);
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
  sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
  ATprotectSymbol(sym_FNAT_2);
  sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
  ATprotectSymbol(sym_FFID_2);
  sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
  ATprotectSymbol(sym_F_1);
  sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
  ATprotectSymbol(sym_FBOX_2);
  sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
  ATprotectSymbol(sym_FN_0);
  sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
  ATprotectSymbol(sym_FM_0);
  sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
  ATprotectSymbol(sym_SE_0);
  sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
  ATprotectSymbol(sym_SH_0);
  sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
  ATprotectSymbol(sym_SZ_0);
  sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
  ATprotectSymbol(sym_CL_0);
  sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
  ATprotectSymbol(sym_KW_0);
  sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
  ATprotectSymbol(sym_VAR_0);
  sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
  ATprotectSymbol(sym_NUM_0);
  sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
  ATprotectSymbol(sym_MATH_0);
  sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
  ATprotectSymbol(sym_LBL_2);
  sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
  ATprotectSymbol(sym_REF_2);
  sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
  ATprotectSymbol(sym_C_2);
  sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
  ATprotectSymbol(sym_L_2);
  sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
  ATprotectSymbol(sym_LNAT_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
  ATprotectSymbol(sym_Keys_0);
  sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
  ATprotectSymbol(sym_Keys_1);
  sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
  ATprotectSymbol(sym_Keys_2);
  sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
  ATprotectSymbol(sym_Keys_3);
  sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
  ATprotectSymbol(sym_Keys_4);
  sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
  ATprotectSymbol(sym_Keys_5);
  sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
  ATprotectSymbol(sym_Keys_6);
  sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
  ATprotectSymbol(sym_Keys_7);
  sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
  ATprotectSymbol(sym_Keys_8);
  sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
  ATprotectSymbol(sym_Keys_9);
  sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
  ATprotectSymbol(sym_Keys_10);
  sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
  ATprotectSymbol(sym_Defined_0);
  sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
  ATprotectSymbol(sym_Defined_1);
  sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
  ATprotectSymbol(sym_Defined_2);
  sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
  ATprotectSymbol(sym_Defined_3);
  sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
  ATprotectSymbol(sym_Defined_4);
  sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
  ATprotectSymbol(sym_Defined_5);
  sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
  ATprotectSymbol(sym_Defined_6);
  sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
  ATprotectSymbol(sym_Defined_7);
  sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
  ATprotectSymbol(sym_Defined_8);
  sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
  ATprotectSymbol(sym_Defined_9);
  sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
  ATprotectSymbol(sym_Defined_10);
  sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
  ATprotectSymbol(sym_Undefined_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
  init_constant_terms();
}
ATerm term_d_21;
ATerm term_p_20;
ATerm term_b_20;
ATerm term_o_19;
ATerm term_k_19;
ATerm term_e_19;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_r_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_w_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_p_17;
ATerm term_k_17;
ATerm term_c_17;
ATerm term_z_16;
ATerm term_y_16;
ATerm term_v_16;
ATerm term_u_16;
ATerm term_q_16;
ATerm term_o_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_z_15;
ATerm term_x_15;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_t_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_f_12;
ATerm term_d_10;
ATerm term_w_9;
ATerm term_j_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_b_7;
ATerm term_a_7;
ATerm term_z_6;
ATerm term_y_6;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_b_6;
void init_constant_terms (void)
{
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_z_15));
  term_z_15 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_m_18, term_r_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__3, term_m_18, term_r_18, (ATerm) ATempty);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_stdout_0);
}
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm q_55 (ATerm), ATerm r_55 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_69 (ATerm));
ATerm topdown_1 (ATerm, ATerm e_65 (ATerm));
ATerm Html2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm g_65 (ATerm));
ATerm html2text_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm w_66 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm k_63 (ATerm));
ATerm html_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm s_47 (ATerm));
ATerm make_html_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm sep_by_1 (ATerm, ATerm d_70 (ATerm));
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm y_63 (ATerm));
ATerm separate_by_1 (ATerm, ATerm z_63 (ATerm));
ATerm LNAT_2 (ATerm, ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm L_2 (ATerm, ATerm s_0 (ATerm), ATerm t_0 (ATerm));
ATerm tov_1 (ATerm, ATerm c_70 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm e_69 (ATerm), ATerm f_69 (ATerm));
ATerm for_3 (ATerm, ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm copy_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm AC_1 (ATerm, ATerm p_0 (ATerm));
ATerm AR_1 (ATerm, ATerm o_0 (ATerm));
ATerm AL_1 (ATerm, ATerm n_0 (ATerm));
ATerm aopt_0 (ATerm);
ATerm make_hs_0 (ATerm);
ATerm toa_1 (ATerm, ATerm z_69 (ATerm));
ATerm R_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm filter_1 (ATerm, ATerm i_56 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox_2_html_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm g_63 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm a_63 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm t_62 (ATerm));
ATerm Distribute_0 (ATerm);
ATerm normalize_0 (ATerm);
ATerm abox2html_0 (ATerm);
ATerm _2 (ATerm, ATerm a_37 (ATerm), ATerm b_37 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_53 (ATerm));
ATerm obsolete_1 (ATerm, ATerm z_53 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm q_62 (ATerm));
ATerm option_defined_1 (ATerm, ATerm b_52 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_52 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_62 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_51 (ATerm));
ATerm map_1 (ATerm, ATerm i_62 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_51 (ATerm));
ATerm Program_1 (ATerm, ATerm f_42 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_42 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_51 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_47 (ATerm), ATerm k_47 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_51 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_51 (ATerm));
ATerm Abox2html_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, term_c_6));
  {
    t = printnl_0(t);
    {
      t = term_d_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_3 = NULL,d_3 = NULL;
  ATerm a_0 (ATerm t)
  {
    ATerm d_0 (ATerm t)
    {
      ATerm e_6 = t;
      if((PushChoice() == 0))
        {
          ATerm e_0 (ATerm t)
          {
            ATerm e_3 = NULL;
            e_3 = t;
            x_2 :
            if(!(match_cons(e_3, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_0);
          PopChoice();
          _fail(t);
        }
      else
        t = e_6;
      return(t);
    }
    t = _2(t, d_0, _id);
    {
      ATerm w_0 (ATerm t)
      {
        ATerm x_0 (ATerm t)
        {
          ATerm f_3 = NULL,g_3 = NULL;
          f_3 = t;
          z_2 :
          if(match_cons(f_3, sym_Runtime_1))
            {
              g_3 = ATgetArgument(f_3, 0);
              if(((d_3 != NULL) && (d_3 != g_3)))
                _fail(g_3);
              else
                d_3 = g_3;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, x_0);
        return(t);
      }
      t = _2(t, w_0, _id);
      {
        ATerm y_0 (ATerm t)
        {
          ATerm z_0 (ATerm t)
          {
            ATerm h_3 = NULL,i_3 = NULL;
            h_3 = t;
            b_3 :
            if(match_cons(h_3, sym_Program_1))
              {
                i_3 = ATgetArgument(h_3, 0);
                if(((c_3 != NULL) && (c_3 != i_3)))
                  _fail(i_3);
                else
                  c_3 = i_3;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_0);
          return(t);
        }
        t = _2(t, y_0, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_6), not_null(d_3)), term_f_6), not_null(c_3)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  {
    t = term_h_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL,p_3 = NULL;
  n_3 = t;
  m_3 :
  if(match_cons(n_3, sym__2))
    {
      o_3 = ATgetArgument(n_3, 0);
      p_3 = ATgetArgument(n_3, 1);
      {
        ATerm i_6;
        i_6 = t;
        t = SSL_print(not_null(o_3), not_null(p_3));
        t = i_6;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm split_2 (ATerm t, ATerm q_55 (ATerm), ATerm r_55 (ATerm))
{
  ATerm v_3 = NULL,x_3 = NULL;
  ATerm j_6;
  j_6 = t;
  {
    ATerm w_3 = NULL;
    t = q_55(t);
    {
      w_3 = t;
      if(((v_3 != NULL) && (v_3 != w_3)))
        _fail(w_3);
      else
        v_3 = w_3;
    }
  }
  t = j_6;
  {
    ATerm y_3 = NULL;
    t = r_55(t);
    {
      y_3 = t;
      if(((x_3 != NULL) && (x_3 != y_3)))
        _fail(y_3);
      else
        x_3 = y_3;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_3), not_null(x_3));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm c_4 = NULL;
  c_4 = t;
  t = SSL_is_string(not_null(c_4));
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm k_6 = t;
  int l_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_69(t);
      LocalPopChoice(l_6);
    }
  else
    {
      t = k_6;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    t = e_65(t);
    t = _all(t, f_4);
    return(t);
  }
  t = f_4(t);
  return(t);
}
ATerm Html2text_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL,w_4 = NULL;
  w_4 = t;
  t_4 :
  if(match_cons(w_4, sym_TABLE_2))
    {
      v_4 = ATgetArgument(w_4, 0);
      u_4 = ATgetArgument(w_4, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_o_6), not_null(u_4)), term_n_6), not_null(v_4)), term_m_6);
    }
  else
    {
      if(match_cons(w_4, sym_TR_2))
        {
          v_4 = ATgetArgument(w_4, 0);
          u_4 = ATgetArgument(w_4, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_6), not_null(u_4)), term_n_6), not_null(v_4)), term_p_6);
        }
      else
        {
          if(match_cons(w_4, sym_TD_2))
            {
              v_4 = ATgetArgument(w_4, 0);
              u_4 = ATgetArgument(w_4, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_6), not_null(u_4)), term_n_6), not_null(v_4)), term_r_6);
            }
          else
            {
              if(match_cons(w_4, sym_TD_p__1))
                {
                  v_4 = ATgetArgument(w_4, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_6), not_null(v_4)), term_s_6);
                }
              else
                {
                  if(match_cons(w_4, sym_SPAN_2))
                    {
                      v_4 = ATgetArgument(w_4, 0);
                      u_4 = ATgetArgument(w_4, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_6), not_null(u_4)), term_n_6), not_null(v_4)), term_u_6);
                    }
                  else
                    {
                      if(match_cons(w_4, sym_PRE_1))
                        {
                          v_4 = ATgetArgument(w_4, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_6), not_null(v_4)), term_w_6);
                        }
                      else
                        {
                          if(match_cons(w_4, sym_TDTR_1))
                            {
                              v_4 = ATgetArgument(w_4, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_6), not_null(v_4)), term_y_6);
                            }
                          else
                            {
                              if(match_cons(w_4, sym_HREF_2))
                                {
                                  v_4 = ATgetArgument(w_4, 0);
                                  u_4 = ATgetArgument(w_4, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_7), not_null(u_4)), term_b_7), not_null(v_4)), term_a_7);
                                }
                              else
                                {
                                  if(match_cons(w_4, sym_ANCHOR_1))
                                    {
                                      v_4 = ATgetArgument(w_4, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_7), not_null(v_4)), term_d_7);
                                    }
                                  else
                                    {
                                      if(match_cons(w_4, sym_BR_0))
                                        t = term_f_7;
                                      else
                                        {
                                          if(match_cons(w_4, sym_NBSP_0))
                                            t = term_g_7;
                                          else
                                            {
                                              if(match_cons(w_4, sym_HR_0))
                                                t = term_h_7;
                                              else
                                                {
                                                  if(match_cons(w_4, sym_TDTD_0))
                                                    t = term_i_7;
                                                  else
                                                    _fail(t);
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
ATerm bottomup_1 (ATerm t, ATerm g_65 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    t = _all(t, k_8);
    t = g_65(t);
    return(t);
  }
  t = k_8(t);
  return(t);
}
ATerm html2text_0 (ATerm t)
{
  ATerm a_1 (ATerm t)
  {
    t = try_1(t, Html2text_0);
    return(t);
  }
  t = bottomup_1(t, a_1);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm m_8 = NULL,n_8 = NULL,o_8 = NULL;
  m_8 = t;
  l_8 :
  if(((ATermList) m_8 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(m_8) == AT_LIST) && ((ATermList) m_8 != ATempty)))
        {
          n_8 = ATgetFirst((ATermList) m_8);
          o_8 = (ATerm) ATgetNext((ATermList) m_8);
          {
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL;
  ATerm j_7 = t;
  int k_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_7);
    }
  else
    {
      t = j_7;
      {
        ATerm l_7 = t;
        int m_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
            ATerm a_9 (ATerm t)
            {
              if(((t_8 != NULL) && (t_8 != w_8)))
                _fail(w_8);
              else
                t_8 = w_8;
              {
                if(((u_8 != NULL) && (u_8 != x_8)))
                  _fail(x_8);
                else
                  u_8 = x_8;
                {
                  t = not_null(t_8);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_8), not_null(u_8));
                      {
                        t = conc_0(t);
                        t = flat_list_0(t);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            v_8 = t;
            r_8 :
            if(((ATgetType(v_8) == AT_LIST) && ((ATermList) v_8 != ATempty)))
              {
                w_8 = ATgetFirst((ATermList) v_8);
                x_8 = (ATerm) ATgetNext((ATermList) v_8);
                s_8 :
                if(((ATermList) w_8 == ATempty))
                  {
                    {
                      ATerm n_7 = t;
                      int o_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((u_8 != NULL) && (u_8 != x_8)))
                            _fail(x_8);
                          else
                            u_8 = x_8;
                          {
                            ATerm b_1 (ATerm t)
                            {
                              t = not_null(u_8);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, b_1);
                          }
                          LocalPopChoice(o_7);
                        }
                      else
                        {
                          t = n_7;
                          t = a_9(t);
                        }
                    }
                  }
                else
                  t = a_9(t);
              }
            else
              _fail(t);
            LocalPopChoice(m_7);
          }
        else
          {
            t = l_7;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm b_9 (ATerm t)
  {
    ATerm p_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_66(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = p_7;
        t = _one(t, b_9);
      }
    return(t);
  }
  t = b_9(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm i_9 = NULL,l_9 = NULL;
  ATerm c_1 (ATerm t)
  {
    ATerm j_9 = NULL;
    j_9 = t;
    c_9 :
    if(!(match_int(j_9, 34)))
      _fail(t);
    return(t);
  }
  ATerm d_1 (ATerm t)
  {
    ATerm k_9 = NULL;
    k_9 = t;
    if(((i_9 != NULL) && (i_9 != k_9)))
      _fail(k_9);
    else
      i_9 = k_9;
    return(t);
  }
  t = Cons_2(t, c_1, d_1);
  {
    ATerm q_9 = NULL;
    t = not_null(i_9);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm m_9 = NULL,n_9 = NULL,o_9 = NULL;
        m_9 = t;
        f_9 :
        if(((ATgetType(m_9) == AT_LIST) && ((ATermList) m_9 != ATempty)))
          {
            n_9 = ATgetFirst((ATermList) m_9);
            o_9 = (ATerm) ATgetNext((ATermList) m_9);
            g_9 :
            if(match_int(n_9, 34))
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_9)), term_r_7), term_r_7);
            else
              _fail(t);
          }
        else
          _fail(t);
        return(t);
      }
      t = oncetd_1(t, e_1);
      {
        q_9 = t;
        if(((l_9 != NULL) && (l_9 != q_9)))
          _fail(q_9);
        else
          l_9 = q_9;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_9)), term_s_7), term_s_7);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm k_63 (ATerm))
{
  ATerm u_9 (ATerm t)
  {
    t = k_63(t);
    {
      ATerm t_7 = t;
      int u_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(u_7);
        }
      else
        {
          t = t_7;
          t = Cons_2(t, _id, u_9);
        }
    }
    return(t);
  }
  t = u_9(t);
  return(t);
}
ATerm html_string_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm f_1 (ATerm t)
    {
      t = try_1(t, replace_quotes_0);
      return(t);
    }
    t = listtd_1(t, f_1);
    {
      ATerm g_1 (ATerm t)
      {
        ATerm h_1 (ATerm t)
        {
          ATerm a_10 = NULL;
          a_10 = t;
          z_9 :
          if(match_int(a_10, 32))
            {
              t = term_g_7;
              t = explode_string_0(t);
            }
          else
            {
              if(match_int(a_10, 38))
                {
                  t = term_v_7;
                  t = explode_string_0(t);
                }
              else
                {
                  if(match_int(a_10, 60))
                    {
                      t = term_w_7;
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(a_10, 62))
                        {
                          t = term_x_7;
                          t = explode_string_0(t);
                        }
                      else
                        _fail(t);
                    }
                }
            }
          return(t);
        }
        t = try_1(t, h_1);
        return(t);
      }
      t = map_1(t, g_1);
      {
        t = flat_list_0(t);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL;
  h_10 = t;
  g_10 :
  if(((ATgetType(h_10) == AT_LIST) && ((ATermList) h_10 != ATempty)))
    {
      i_10 = ATgetFirst((ATermList) h_10);
      j_10 = (ATerm) ATgetNext((ATermList) h_10);
      t = not_null(j_10);
    }
  else
    _fail(t);
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm s_47 (ATerm))
{
  ATerm n_10 (ATerm t)
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, s_47, _id);
        {
          t = Tl_0(t);
          t = n_10(t);
        }
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        {
        }
      }
    return(t);
  }
  t = n_10(t);
  return(t);
}
ATerm make_html_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = reverse_0(t);
    {
      ATerm i_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, i_1);
      {
        ATerm e_12 (ATerm t)
        {
          ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL,h_11 = NULL,i_11 = NULL;
          ATerm h_12 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), (ATerm) ATinsert(CheckATermList(not_null(i_11)), not_null(g_11)));
            t = e_12(t);
            return(t);
          }
          e_11 = t;
          y_10 :
          if(match_cons(e_11, sym__2))
            {
              f_11 = ATgetArgument(e_11, 0);
              i_11 = ATgetArgument(e_11, 1);
              z_10 :
              if(((ATermList) f_11 == ATempty))
                {
                  {
                    ATerm m_11 = NULL;
                    ATerm o_11 = NULL;
                    t = not_null(i_11);
                    {
                      ATerm j_1 (ATerm t)
                      {
                        ATerm n_11 = NULL;
                        n_11 = t;
                        r_10 :
                        if(!(match_int(n_11, 9)))
                          {
                            if(!(match_int(n_11, 32)))
                              _fail(t);
                          }
                        return(t);
                      }
                      t = remove_trailing_1(t, j_1);
                      {
                        t = implode_string_0(t);
                        {
                          o_11 = t;
                          if(((m_11 != NULL) && (m_11 != o_11)))
                            _fail(o_11);
                          else
                            m_11 = o_11;
                        }
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(m_11));
                  }
                }
              else
                {
                  if(((ATgetType(f_11) == AT_LIST) && ((ATermList) f_11 != ATempty)))
                    {
                      g_11 = ATgetFirst((ATermList) f_11);
                      h_11 = (ATerm) ATgetNext((ATermList) f_11);
                      a_11 :
                      if(match_int(g_11, 10))
                        {
                          ATerm a_8 = t;
                          int b_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_11 = NULL,v_11 = NULL;
                              ATerm c_8;
                              c_8 = t;
                              {
                                ATerm u_11 = NULL;
                                t = not_null(i_11);
                                {
                                  ATerm k_1 (ATerm t)
                                  {
                                    ATerm t_11 = NULL;
                                    t_11 = t;
                                    t_10 :
                                    if(!(match_int(t_11, 9)))
                                      {
                                        if(!(match_int(t_11, 32)))
                                          _fail(t);
                                      }
                                    return(t);
                                  }
                                  t = remove_trailing_1(t, k_1);
                                  {
                                    t = implode_string_0(t);
                                    {
                                      u_11 = t;
                                      if(((s_11 != NULL) && (s_11 != u_11)))
                                        _fail(u_11);
                                      else
                                        s_11 = u_11;
                                    }
                                  }
                                }
                              }
                              t = c_8;
                              {
                                ATerm w_11 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_11), (ATerm) ATempty);
                                {
                                  t = e_12(t);
                                  {
                                    w_11 = t;
                                    if(((v_11 != NULL) && (v_11 != w_11)))
                                      _fail(w_11);
                                    else
                                      v_11 = w_11;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(v_11)), not_null(s_11));
                              }
                              LocalPopChoice(b_8);
                            }
                          else
                            {
                              t = a_8;
                              t = h_12(t);
                            }
                        }
                      else
                        t = h_12(t);
                    }
                  else
                    _fail(t);
                }
            }
          else
            _fail(t);
          return(t);
        }
        t = e_12(t);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm a_12 = NULL;
            a_12 = t;
            b_11 :
            if(!(match_string(a_12, "")))
              _fail(t);
            return(t);
          }
          t = remove_trailing_1(t, l_1);
          {
            t = reverse_0(t);
            {
              ATerm m_1 (ATerm t)
              {
                ATerm b_12 = NULL;
                b_12 = t;
                c_11 :
                if(!(match_string(b_12, "")))
                  _fail(t);
                return(t);
              }
              t = remove_trailing_1(t, m_1);
              {
                ATerm n_1 (ATerm t)
                {
                  ATerm c_12 = NULL;
                  c_12 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_d_8), not_null(c_12));
                  return(t);
                }
                t = map_1(t, n_1);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm n_12 = NULL;
  n_12 = t;
  m_12 :
  if(!(match_cons(n_12, sym_MATH_0)))
    _fail(t);
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm p_12 = NULL;
  p_12 = t;
  o_12 :
  if(!(match_cons(p_12, sym_NUM_0)))
    _fail(t);
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm r_12 = NULL;
  r_12 = t;
  q_12 :
  if(!(match_cons(r_12, sym_VAR_0)))
    _fail(t);
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  s_12 :
  if(!(match_cons(t_12, sym_KW_0)))
    _fail(t);
  return(t);
}
ATerm sep_by_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    ATerm v_12 = NULL;
    v_12 = t;
    t = (ATerm) ATinsert(ATempty, not_null(v_12));
    return(t);
  }
  t = map_1(t, o_1);
  {
    t = separate_by_1(t, d_70);
    t = concat_0(t);
  }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm z_12 = NULL;
  z_12 = t;
  y_12 :
  if(!(match_cons(z_12, sym_HS_0)))
    _fail(t);
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm e_13 = NULL,g_13 = NULL;
  ATerm l_13 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_13), term_e_8);
    t = copy_0(t);
    return(t);
  }
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_1 (ATerm t)
      {
        ATerm q_1 (ATerm t)
        {
          ATerm f_13 = NULL;
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
          return(t);
        }
        t = SOpt_2(t, HS_0, q_1);
        return(t);
      }
      t = fetch_1(t, p_1);
      {
        t = not_null(e_13);
        t = string_to_int_0(t);
      }
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      t = term_d_6;
    }
  {
    g_13 = t;
    d_13 :
    if(match_int(g_13, 0))
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATempty;
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            t = l_13(t);
          }
      }
    else
      t = l_13(t);
  }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL;
  p_13 = t;
  o_13 :
  if(((ATgetType(p_13) == AT_LIST) && ((ATermList) p_13 != ATempty)))
    {
      q_13 = ATgetFirst((ATermList) p_13);
      r_13 = (ATerm) ATgetNext((ATermList) p_13);
      {
        ATerm a_14 = NULL;
        ATerm b_14 = NULL;
        t = term_j_8;
        {
          t = y_63(t);
          {
            b_14 = t;
            if(((a_14 != NULL) && (a_14 != b_14)))
              _fail(b_14);
            else
              a_14 = b_14;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_13)), not_null(q_13)), not_null(a_14));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm z_63 (ATerm))
{
  ATerm p_8 = t;
  int q_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_8);
    }
  else
    {
      t = p_8;
      {
        ATerm r_1 (ATerm t)
        {
          ATerm y_8 = t;
          int z_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(z_8);
            }
          else
            {
              t = y_8;
              {
                t = Cons_2(t, _id, r_1);
                t = Sep_1(t, z_63);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, r_1);
      }
    }
  return(t);
}
ATerm LNAT_2 (ATerm t, ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL;
  p_14 = t;
  o_14 :
  if(match_cons(p_14, sym_LNAT_2))
    {
      q_14 = ATgetArgument(p_14, 0);
      r_14 = ATgetArgument(p_14, 1);
      {
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_14 = NULL;
            t = not_null(q_14);
            {
              ATerm w_14 = NULL;
              t = u_0(t);
              {
                u_14 = t;
                {
                  t = not_null(r_14);
                  {
                    t = v_0(t);
                    {
                      w_14 = t;
                      t = (ATerm) ATmakeAppl(sym_LNAT_2, not_null(u_14), not_null(w_14));
                    }
                  }
                }
              }
            }
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm a_15 = NULL;
              t = not_null(q_14);
              {
                ATerm d_15 = NULL;
                t = u_0(t);
                {
                  a_15 = t;
                  {
                    t = not_null(r_14);
                    {
                      t = v_0(t);
                      {
                        d_15 = t;
                        t = (ATerm) ATmakeAppl(sym_LNAT_2, not_null(a_15), not_null(d_15));
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
    _fail(t);
  return(t);
}
ATerm L_2 (ATerm t, ATerm s_0 (ATerm), ATerm t_0 (ATerm))
{
  ATerm s_15 = NULL,t_15 = NULL,u_15 = NULL;
  s_15 = t;
  r_15 :
  if(match_cons(s_15, sym_L_2))
    {
      t_15 = ATgetArgument(s_15, 0);
      u_15 = ATgetArgument(s_15, 1);
      {
        ATerm h_9 = t;
        int p_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_16 = NULL;
            t = not_null(t_15);
            {
              ATerm k_16 = NULL;
              t = s_0(t);
              {
                g_16 = t;
                {
                  t = not_null(u_15);
                  {
                    t = t_0(t);
                    {
                      k_16 = t;
                      t = (ATerm) ATmakeAppl(sym_L_2, not_null(g_16), not_null(k_16));
                    }
                  }
                }
              }
            }
            LocalPopChoice(p_9);
          }
        else
          {
            t = h_9;
            {
              ATerm p_16 = NULL;
              t = not_null(t_15);
              {
                ATerm r_16 = NULL;
                t = s_0(t);
                {
                  p_16 = t;
                  {
                    t = not_null(u_15);
                    {
                      t = t_0(t);
                      {
                        r_16 = t;
                        t = (ATerm) ATmakeAppl(sym_L_2, not_null(p_16), not_null(r_16));
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
    _fail(t);
  return(t);
}
ATerm tov_1 (ATerm t, ATerm c_70 (ATerm))
{
  ATerm e_17 = NULL,i_17 = NULL;
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2(t, _id, _id);
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm t_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2(t, _id, _id);
            LocalPopChoice(v_9);
          }
        else
          {
            t = t_9;
            {
              ATerm f_17 = NULL;
              ATerm g_17 = NULL;
              f_17 = t;
              {
                if(((e_17 != NULL) && (e_17 != f_17)))
                  _fail(f_17);
                else
                  e_17 = f_17;
                {
                  ATerm h_17 = NULL;
                  t = term_j_8;
                  {
                    t = c_70(t);
                    {
                      h_17 = t;
                      if(((g_17 != NULL) && (g_17 != h_17)))
                        _fail(h_17);
                      else
                        g_17 = h_17;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_w_9), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_17)))), not_null(g_17)))));
                }
              }
            }
          }
      }
    }
  {
    i_17 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_w_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(i_17)))));
  }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm o_17 = NULL;
  o_17 = t;
  n_17 :
  if(!(match_cons(o_17, sym_IS_0)))
    _fail(t);
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm a_18 = NULL,c_18 = NULL;
  ATerm k_18 (ATerm t)
  {
    ATerm g_18 = NULL;
    ATerm h_18 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), term_e_8);
    {
      t = copy_0(t);
      {
        h_18 = t;
        if(((g_18 != NULL) && (g_18 != h_18)))
          _fail(h_18);
        else
          g_18 = h_18;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(g_18));
    return(t);
  }
  ATerm x_9 = t;
  int y_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        ATerm t_1 (ATerm t)
        {
          ATerm b_18 = NULL;
          b_18 = t;
          if(((a_18 != NULL) && (a_18 != b_18)))
            _fail(b_18);
          else
            a_18 = b_18;
          return(t);
        }
        t = SOpt_2(t, IS_0, t_1);
        return(t);
      }
      t = fetch_1(t, s_1);
      {
        t = not_null(a_18);
        t = string_to_int_0(t);
      }
      LocalPopChoice(y_9);
    }
  else
    {
      t = x_9;
      t = term_h_6;
    }
  {
    c_18 = t;
    v_17 :
    if(match_int(c_18, 0))
      {
        ATerm b_10 = t;
        int c_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_10;
            LocalPopChoice(c_10);
          }
        else
          {
            t = b_10;
            t = k_18(t);
          }
      }
    else
      t = k_18(t);
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm o_18 = NULL,p_18 = NULL,q_18 = NULL;
  o_18 = t;
  n_18 :
  if(match_cons(o_18, sym__2))
    {
      p_18 = ATgetArgument(o_18, 0);
      q_18 = ATgetArgument(o_18, 1);
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(p_18), not_null(q_18));
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            t = SSL_subtr(not_null(p_18), not_null(q_18));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym__2))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      {
        ATerm k_10;
        k_10 = t;
        {
          ATerm l_10 = t;
          int m_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_18), not_null(y_18));
              LocalPopChoice(m_10);
            }
          else
            {
              t = l_10;
              t = SSL_gtr(not_null(x_18), not_null(y_18));
            }
        }
        t = k_10;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm g_19 = NULL;
  ATerm o_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_19 = NULL,i_19 = NULL,j_19 = NULL;
      h_19 = t;
      f_19 :
      if(match_cons(h_19, sym__2))
        {
          i_19 = ATgetArgument(h_19, 0);
          j_19 = ATgetArgument(h_19, 1);
          {
            if(((g_19 != NULL) && (g_19 != i_19)))
              _fail(i_19);
            else
              g_19 = i_19;
            if(((g_19 != NULL) && (g_19 != j_19)))
              _fail(j_19);
            else
              g_19 = j_19;
          }
        }
      else
        _fail(t);
      LocalPopChoice(p_10);
    }
  else
    {
      t = o_10;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm e_69 (ATerm), ATerm f_69 (ATerm))
{
  ATerm l_19 (ATerm t)
  {
    ATerm q_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_69(t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = q_10;
        {
          t = f_69(t);
          t = l_19(t);
        }
      }
    return(t);
  }
  t = l_19(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm h_69 (ATerm), ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  t = h_69(t);
  t = while_not_2(t, i_69, j_69);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm w_19 = NULL,x_19 = NULL,y_19 = NULL;
    w_19 = t;
    n_19 :
    if(match_cons(w_19, sym__2))
      {
        x_19 = ATgetArgument(w_19, 0);
        y_19 = ATgetArgument(w_19, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(x_19), not_null(y_19), (ATerm) ATempty);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm v_1 (ATerm t)
  {
    ATerm c_20 = NULL,e_20 = NULL,f_20 = NULL,g_20 = NULL;
    c_20 = t;
    p_19 :
    if(match_cons(c_20, sym__3))
      {
        e_20 = ATgetArgument(c_20, 0);
        f_20 = ATgetArgument(c_20, 1);
        g_20 = ATgetArgument(c_20, 2);
        q_19 :
        if(match_int(e_20, 0))
          t = not_null(g_20);
        else
          _fail(t);
      }
    else
      _fail(t);
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL,m_20 = NULL;
    j_20 = t;
    t_19 :
    if(match_cons(j_20, sym__3))
      {
        k_20 = ATgetArgument(j_20, 0);
        l_20 = ATgetArgument(j_20, 1);
        m_20 = ATgetArgument(j_20, 2);
        {
          ATerm q_20 = NULL;
          ATerm u_10;
          u_10 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), term_d_6);
            t = geq_0(t);
          }
          t = u_10;
          {
            ATerm r_20 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_20), term_d_6);
            {
              t = subt_0(t);
              {
                r_20 = t;
                if(((q_20 != NULL) && (q_20 != r_20)))
                  _fail(r_20);
                else
                  q_20 = r_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_20), not_null(l_20), (ATerm) ATinsert(CheckATermList(not_null(m_20)), not_null(l_20)));
          }
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = for_3(t, u_1, v_1, w_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_20 = NULL;
  x_20 = t;
  t = SSL_string_to_int(not_null(x_20));
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm b_21 = NULL;
  b_21 = t;
  a_21 :
  if(!(match_cons(b_21, sym_VS_0)))
    _fail(t);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm m_21 = NULL,n_21 = NULL,o_21 = NULL;
  m_21 = t;
  l_21 :
  if(match_cons(m_21, sym_SOpt_2))
    {
      n_21 = ATgetArgument(m_21, 0);
      o_21 = ATgetArgument(m_21, 1);
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_21 = NULL;
            t = not_null(n_21);
            {
              ATerm t_21 = NULL;
              t = q_0(t);
              {
                r_21 = t;
                {
                  t = not_null(o_21);
                  {
                    t = r_0(t);
                    {
                      t_21 = t;
                      t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(r_21), not_null(t_21));
                    }
                  }
                }
              }
            }
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            {
              ATerm x_21 = NULL;
              t = not_null(n_21);
              {
                ATerm z_21 = NULL;
                t = q_0(t);
                {
                  x_21 = t;
                  {
                    t = not_null(o_21);
                    {
                      t = r_0(t);
                      {
                        z_21 = t;
                        t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(x_21), not_null(z_21));
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
    _fail(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm m_22 = NULL,o_22 = NULL;
  ATerm v_22 (ATerm t)
  {
    ATerm r_22 = NULL;
    ATerm s_22 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_22), term_d_8);
    {
      t = copy_0(t);
      {
        s_22 = t;
        if(((r_22 != NULL) && (r_22 != s_22)))
          _fail(s_22);
        else
          r_22 = s_22;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(r_22))));
    return(t);
  }
  ATerm x_10 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm y_1 (ATerm t)
        {
          ATerm n_22 = NULL;
          n_22 = t;
          if(((m_22 != NULL) && (m_22 != n_22)))
            _fail(n_22);
          else
            m_22 = n_22;
          return(t);
        }
        t = SOpt_2(t, VS_0, y_1);
        return(t);
      }
      t = fetch_1(t, x_1);
      {
        t = not_null(m_22);
        t = string_to_int_0(t);
      }
      LocalPopChoice(d_11);
    }
  else
    {
      t = x_10;
      t = term_h_6;
    }
  {
    o_22 = t;
    l_22 :
    if(match_int(o_22, 0))
      {
        ATerm j_11 = t;
        int k_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_d_10;
            LocalPopChoice(k_11);
          }
        else
          {
            t = j_11;
            t = v_22(t);
          }
      }
    else
      t = v_22(t);
  }
  return(t);
}
ATerm AC_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm c_23 = NULL,d_23 = NULL;
  c_23 = t;
  b_23 :
  if(match_cons(c_23, sym_AC_1))
    {
      d_23 = ATgetArgument(c_23, 0);
      {
        ATerm l_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_23 = NULL;
            t = not_null(d_23);
            {
              t = p_0(t);
              {
                f_23 = t;
                t = (ATerm) ATmakeAppl(sym_AC_1, not_null(f_23));
              }
            }
            LocalPopChoice(p_11);
          }
        else
          {
            t = l_11;
            {
              ATerm i_23 = NULL;
              t = not_null(d_23);
              {
                t = p_0(t);
                {
                  i_23 = t;
                  t = (ATerm) ATmakeAppl(sym_AC_1, not_null(i_23));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AR_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_AR_1))
    {
      u_23 = ATgetArgument(t_23, 0);
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_23 = NULL;
            t = not_null(u_23);
            {
              t = o_0(t);
              {
                w_23 = t;
                t = (ATerm) ATmakeAppl(sym_AR_1, not_null(w_23));
              }
            }
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm z_23 = NULL;
              t = not_null(u_23);
              {
                t = o_0(t);
                {
                  z_23 = t;
                  t = (ATerm) ATmakeAppl(sym_AR_1, not_null(z_23));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm AL_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm k_24 = NULL,l_24 = NULL;
  k_24 = t;
  j_24 :
  if(match_cons(k_24, sym_AL_1))
    {
      l_24 = ATgetArgument(k_24, 0);
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_24 = NULL;
            t = not_null(l_24);
            {
              t = n_0(t);
              {
                n_24 = t;
                t = (ATerm) ATmakeAppl(sym_AL_1, not_null(n_24));
              }
            }
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            {
              ATerm q_24 = NULL;
              t = not_null(l_24);
              {
                t = n_0(t);
                {
                  q_24 = t;
                  t = (ATerm) ATmakeAppl(sym_AL_1, not_null(q_24));
                }
              }
            }
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm aopt_0 (ATerm t)
{
  ATerm z_11 = t;
  int d_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = AL_1(t, _id);
      t = term_f_12;
      LocalPopChoice(d_12);
    }
  else
    {
      t = z_11;
      {
        ATerm g_12 = t;
        int i_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = AR_1(t, _id);
            t = term_j_12;
            LocalPopChoice(i_12);
          }
        else
          {
            t = g_12;
            {
              t = AC_1(t, _id);
              t = term_k_12;
            }
          }
      }
    }
  return(t);
}
ATerm make_hs_0 (ATerm t)
{
  ATerm d_25 = NULL,e_25 = NULL,f_25 = NULL,g_25 = NULL;
  ATerm m_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(g_25));
    return(t);
  }
  e_25 = t;
  z_24 :
  if(match_cons(e_25, sym_AL_1))
    {
      f_25 = ATgetArgument(e_25, 0);
      if(((d_25 != NULL) && (d_25 != f_25)))
        _fail(f_25);
      else
        d_25 = f_25;
    }
  else
    {
      if(match_cons(e_25, sym_AR_1))
        {
          f_25 = ATgetArgument(e_25, 0);
          if(((d_25 != NULL) && (d_25 != f_25)))
            _fail(f_25);
          else
            d_25 = f_25;
        }
      else
        {
          if(match_cons(e_25, sym_AC_1))
            {
              f_25 = ATgetArgument(e_25, 0);
              if(((d_25 != NULL) && (d_25 != f_25)))
                _fail(f_25);
              else
                d_25 = f_25;
            }
          else
            _fail(t);
        }
    }
  {
    t = not_null(d_25);
    {
      t = Hspace_0(t);
      {
        g_25 = t;
        c_25 :
        if(((ATermList) g_25 == ATempty))
          {
            {
            }
          }
        else
          t = m_25(t);
      }
    }
  }
  return(t);
}
ATerm toa_1 (ATerm t, ATerm z_69 (ATerm))
{
  ATerm s_26 = NULL,t_26 = NULL,u_26 = NULL;
  s_26 = t;
  q_26 :
  if(match_cons(s_26, sym_R_2))
    {
      t_26 = ATgetArgument(s_26, 0);
      u_26 = ATgetArgument(s_26, 1);
      r_26 :
      if(((ATermList) t_26 == ATempty))
        {
          {
            ATerm w_26 = NULL,x_26 = NULL;
            ATerm y_26 = NULL,z_26 = NULL;
            t = term_j_8;
            {
              t = z_69(t);
              {
                y_26 = t;
                p_26 :
                if(match_cons(y_26, sym_AOPTIONS_1))
                  {
                    z_26 = ATgetArgument(y_26, 0);
                    {
                      ATerm v_28 = NULL;
                      if(((w_26 != NULL) && (w_26 != z_26)))
                        _fail(z_26);
                      else
                        w_26 = z_26;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_26), not_null(w_26));
                        {
                          ATerm y_28 (ATerm t)
                          {
                            ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL,d_27 = NULL,e_27 = NULL,f_27 = NULL,g_27 = NULL,h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL;
                            ATerm a_29 (ATerm t)
                            {
                              ATerm x_27 = NULL;
                              ATerm y_27 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), not_null(i_27));
                              {
                                t = y_28(t);
                                {
                                  y_27 = t;
                                  if(((x_27 != NULL) && (x_27 != y_27)))
                                    _fail(y_27);
                                  else
                                    x_27 = y_27;
                                }
                              }
                              t = (ATerm) ATinsert(CheckATermList(not_null(x_27)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, not_null(a_27), not_null(b_27)))));
                              return(t);
                            }
                            ATerm b_29 (ATerm t)
                            {
                              ATerm f_28 = NULL,h_28 = NULL,j_28 = NULL;
                              ATerm l_12;
                              l_12 = t;
                              {
                                ATerm g_28 = NULL;
                                t = not_null(j_27);
                                {
                                  t = aopt_0(t);
                                  {
                                    g_28 = t;
                                    if(((f_28 != NULL) && (f_28 != g_28)))
                                      _fail(g_28);
                                    else
                                      f_28 = g_28;
                                  }
                                }
                              }
                              t = l_12;
                              {
                                ATerm u_12;
                                u_12 = t;
                                {
                                  ATerm i_28 = NULL;
                                  t = not_null(j_27);
                                  {
                                    t = make_hs_0(t);
                                    {
                                      i_28 = t;
                                      if(((h_28 != NULL) && (h_28 != i_28)))
                                        _fail(i_28);
                                      else
                                        h_28 = i_28;
                                    }
                                  }
                                }
                                t = u_12;
                                {
                                  ATerm k_28 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_27)), not_null(c_27)), not_null(k_27));
                                  {
                                    t = y_28(t);
                                    {
                                      k_28 = t;
                                      if(((j_28 != NULL) && (j_28 != k_28)))
                                        _fail(k_28);
                                      else
                                        j_28 = k_28;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(j_28)), not_null(h_28)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(f_28)), not_null(g_27)));
                                }
                              }
                              return(t);
                            }
                            ATerm c_29 (ATerm t)
                            {
                              ATerm r_28 = NULL,t_28 = NULL;
                              ATerm w_12;
                              w_12 = t;
                              {
                                ATerm s_28 = NULL;
                                t = not_null(j_27);
                                {
                                  t = aopt_0(t);
                                  {
                                    s_28 = t;
                                    if(((r_28 != NULL) && (r_28 != s_28)))
                                      _fail(s_28);
                                    else
                                      r_28 = s_28;
                                  }
                                }
                              }
                              t = w_12;
                              {
                                ATerm u_28 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_27), not_null(k_27));
                                {
                                  t = y_28(t);
                                  {
                                    u_28 = t;
                                    if(((t_28 != NULL) && (t_28 != u_28)))
                                      _fail(u_28);
                                    else
                                      t_28 = u_28;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(t_28)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(r_28)), not_null(g_27)));
                              }
                              return(t);
                            }
                            e_27 = t;
                            z_25 :
                            if(match_cons(e_27, sym__2))
                              {
                                f_27 = ATgetArgument(e_27, 0);
                                i_27 = ATgetArgument(e_27, 1);
                                a_26 :
                                if(((ATermList) f_27 == ATempty))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(f_27) == AT_LIST) && ((ATermList) f_27 != ATempty)))
                                      {
                                        g_27 = ATgetFirst((ATermList) f_27);
                                        h_27 = (ATerm) ATgetNext((ATermList) f_27);
                                        b_26 :
                                        if(((ATgetType(i_27) == AT_LIST) && ((ATermList) i_27 != ATempty)))
                                          {
                                            j_27 = ATgetFirst((ATermList) i_27);
                                            k_27 = (ATerm) ATgetNext((ATermList) i_27);
                                            c_26 :
                                            if(((ATgetType(h_27) == AT_LIST) && ((ATermList) h_27 != ATempty)))
                                              {
                                                c_27 = ATgetFirst((ATermList) h_27);
                                                d_27 = (ATerm) ATgetNext((ATermList) h_27);
                                                d_26 :
                                                if(match_cons(g_27, sym_C_2))
                                                  {
                                                    a_27 = ATgetArgument(g_27, 0);
                                                    b_27 = ATgetArgument(g_27, 1);
                                                    {
                                                      ATerm x_12 = t;
                                                      int a_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = a_29(t);
                                                          LocalPopChoice(a_13);
                                                        }
                                                      else
                                                        {
                                                          t = x_12;
                                                          {
                                                            ATerm b_13 = t;
                                                            int c_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = b_29(t);
                                                                LocalPopChoice(c_13);
                                                              }
                                                            else
                                                              {
                                                                t = b_13;
                                                                t = c_29(t);
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm h_13 = t;
                                                    int i_13 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = b_29(t);
                                                        LocalPopChoice(i_13);
                                                      }
                                                    else
                                                      {
                                                        t = h_13;
                                                        t = c_29(t);
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                e_26 :
                                                if(match_cons(g_27, sym_C_2))
                                                  {
                                                    a_27 = ATgetArgument(g_27, 0);
                                                    b_27 = ATgetArgument(g_27, 1);
                                                    {
                                                      ATerm j_13 = t;
                                                      int k_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = a_29(t);
                                                          LocalPopChoice(k_13);
                                                        }
                                                      else
                                                        {
                                                          t = j_13;
                                                          t = c_29(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  t = c_29(t);
                                              }
                                          }
                                        else
                                          {
                                            f_26 :
                                            g_26 :
                                            if(match_cons(g_27, sym_C_2))
                                              {
                                                a_27 = ATgetArgument(g_27, 0);
                                                b_27 = ATgetArgument(g_27, 1);
                                                t = a_29(t);
                                              }
                                            else
                                              _fail(t);
                                          }
                                      }
                                    else
                                      _fail(t);
                                  }
                              }
                            else
                              _fail(t);
                            return(t);
                          }
                          t = y_28(t);
                          {
                            v_28 = t;
                            if(((x_26 != NULL) && (x_26 != v_28)))
                              _fail(v_28);
                            else
                              x_26 = v_28;
                          }
                        }
                      }
                    }
                  }
                else
                  _fail(t);
              }
            }
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_w_9), (ATerm) ATinsert(ATempty, not_null(x_26)));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm R_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm r_29 = NULL,s_29 = NULL,t_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_cons(r_29, sym_R_2))
    {
      s_29 = ATgetArgument(r_29, 0);
      t_29 = ATgetArgument(r_29, 1);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_29 = NULL;
            t = not_null(s_29);
            {
              ATerm y_29 = NULL;
              t = l_0(t);
              {
                w_29 = t;
                {
                  t = not_null(t_29);
                  {
                    t = m_0(t);
                    {
                      y_29 = t;
                      t = (ATerm) ATmakeAppl(sym_R_2, not_null(w_29), not_null(y_29));
                    }
                  }
                }
              }
            }
            LocalPopChoice(n_13);
          }
        else
          {
            t = m_13;
            {
              ATerm c_30 = NULL;
              t = not_null(s_29);
              {
                ATerm e_30 = NULL;
                t = l_0(t);
                {
                  c_30 = t;
                  {
                    t = not_null(t_29);
                    {
                      t = m_0(t);
                      {
                        e_30 = t;
                        t = (ATerm) ATmakeAppl(sym_R_2, not_null(c_30), not_null(e_30));
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
    _fail(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm i_56 (ATerm))
{
  ATerm s_13 = t;
  int t_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_13);
    }
  else
    {
      t = s_13;
      {
        ATerm u_13 = t;
        int v_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_1 (ATerm t)
            {
              t = filter_1(t, i_56);
              return(t);
            }
            t = Cons_2(t, i_56, z_1);
            LocalPopChoice(v_13);
          }
        else
          {
            t = u_13;
            {
              ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
              o_30 = t;
              n_30 :
              if(((ATgetType(o_30) == AT_LIST) && ((ATermList) o_30 != ATempty)))
                {
                  p_30 = ATgetFirst((ATermList) o_30);
                  q_30 = (ATerm) ATgetNext((ATermList) o_30);
                  {
                    t = not_null(q_30);
                    t = filter_1(t, i_56);
                  }
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, a_2);
  {
    ATerm e_32 (ATerm t)
    {
      ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
      ATerm k_32 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), (ATerm) ATinsert(CheckATermList(not_null(i_31)), not_null(g_31)));
        t = e_32(t);
        return(t);
      }
      e_31 = t;
      z_30 :
      if(match_cons(e_31, sym__2))
        {
          f_31 = ATgetArgument(e_31, 0);
          i_31 = ATgetArgument(e_31, 1);
          a_31 :
          if(((ATermList) f_31 == ATempty))
            {
              {
                ATerm n_31 = NULL;
                ATerm o_31 = NULL;
                t = not_null(i_31);
                {
                  t = reverse_0(t);
                  {
                    o_31 = t;
                    if(((n_31 != NULL) && (n_31 != o_31)))
                      _fail(o_31);
                    else
                      n_31 = o_31;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(n_31)));
              }
            }
          else
            {
              if(((ATgetType(f_31) == AT_LIST) && ((ATermList) f_31 != ATempty)))
                {
                  g_31 = ATgetFirst((ATermList) f_31);
                  h_31 = (ATerm) ATgetNext((ATermList) f_31);
                  b_31 :
                  if(match_cons(g_31, sym_R_2))
                    {
                      c_31 = ATgetArgument(g_31, 0);
                      d_31 = ATgetArgument(g_31, 1);
                      {
                        ATerm w_13 = t;
                        int x_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_31 = NULL,x_31 = NULL;
                            ATerm y_13;
                            y_13 = t;
                            {
                              ATerm u_31 = NULL;
                              t = not_null(i_31);
                              {
                                t = reverse_0(t);
                                {
                                  u_31 = t;
                                  if(((t_31 != NULL) && (t_31 != u_31)))
                                    _fail(u_31);
                                  else
                                    t_31 = u_31;
                                }
                              }
                            }
                            t = y_13;
                            {
                              ATerm y_31 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), (ATerm) ATempty);
                              {
                                t = e_32(t);
                                {
                                  y_31 = t;
                                  if(((x_31 != NULL) && (x_31 != y_31)))
                                    _fail(y_31);
                                  else
                                    x_31 = y_31;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(x_31)), (ATerm) ATmakeAppl(sym_R_2, not_null(c_31), not_null(d_31))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(t_31)));
                            }
                            LocalPopChoice(x_13);
                          }
                        else
                          {
                            t = w_13;
                            t = k_32(t);
                          }
                      }
                    }
                  else
                    t = k_32(t);
                }
              else
                _fail(t);
            }
        }
      else
        _fail(t);
      return(t);
    }
    t = e_32(t);
    {
      ATerm b_2 (ATerm t)
      {
        ATerm z_13 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          t = z_13;
        return(t);
      }
      t = filter_1(t, b_2);
    }
  }
  return(t);
}
ATerm Abox_2_html_0 (ATerm t)
{
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL,t_37 = NULL;
  s_37 = t;
  o_37 :
  if(match_cons(s_37, sym_REF_2))
    {
      t_37 = ATgetArgument(s_37, 0);
      r_37 = ATgetArgument(s_37, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, not_null(t_37), not_null(r_37));
    }
  else
    {
      if(match_cons(s_37, sym_LBL_2))
        {
          t_37 = ATgetArgument(s_37, 0);
          r_37 = ATgetArgument(s_37, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_37)), (ATerm) ATmakeAppl(sym_ANCHOR_1, not_null(t_37)));
        }
      else
        {
          if(match_cons(s_37, sym_LNAT_2))
            {
              t_37 = ATgetArgument(s_37, 0);
              r_37 = ATgetArgument(s_37, 1);
              t = term_c_14;
            }
          else
            {
              if(match_cons(s_37, sym_L_2))
                {
                  t_37 = ATgetArgument(s_37, 0);
                  r_37 = ATgetArgument(s_37, 1);
                  t = term_c_14;
                }
              else
                {
                  if(match_cons(s_37, sym_ALT_2))
                    {
                      t_37 = ATgetArgument(s_37, 0);
                      r_37 = ATgetArgument(s_37, 1);
                      t = not_null(t_37);
                    }
                  else
                    {
                      if(match_cons(s_37, sym_A_3))
                        {
                          t_37 = ATgetArgument(s_37, 0);
                          r_37 = ATgetArgument(s_37, 1);
                          q_37 = ATgetArgument(s_37, 2);
                          {
                            ATerm h_38 = NULL,i_38 = NULL,j_38 = NULL;
                            ATerm k_38 = NULL;
                            t = not_null(q_37);
                            {
                              ATerm l_38 = NULL;
                              t = construct_rows_0(t);
                              {
                                k_38 = t;
                                {
                                  if(((h_38 != NULL) && (h_38 != k_38)))
                                    _fail(k_38);
                                  else
                                    h_38 = k_38;
                                  {
                                    t = not_null(r_37);
                                    {
                                      ATerm m_38 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        l_38 = t;
                                        {
                                          if(((i_38 != NULL) && (i_38 != l_38)))
                                            _fail(l_38);
                                          else
                                            i_38 = l_38;
                                          {
                                            t = not_null(h_38);
                                            {
                                              ATerm c_2 (ATerm t)
                                              {
                                                ATerm d_2 (ATerm t)
                                                {
                                                  t = not_null(t_37);
                                                  return(t);
                                                }
                                                t = toa_1(t, d_2);
                                                return(t);
                                              }
                                              t = map_1(t, c_2);
                                              {
                                                ATerm e_2 (ATerm t)
                                                {
                                                  t = not_null(i_38);
                                                  return(t);
                                                }
                                                t = separate_by_1(t, e_2);
                                                {
                                                  m_38 = t;
                                                  if(((j_38 != NULL) && (j_38 != m_38)))
                                                    _fail(m_38);
                                                  else
                                                    j_38 = m_38;
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
                            t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(j_38))))));
                          }
                        }
                      else
                        {
                          if(match_cons(s_37, sym_HV_2))
                            {
                              t_37 = ATgetArgument(s_37, 0);
                              r_37 = ATgetArgument(s_37, 1);
                              {
                                ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
                                ATerm s_38 = NULL;
                                t = not_null(t_37);
                                {
                                  ATerm x_38 = NULL;
                                  t = Hspace_0(t);
                                  {
                                    s_38 = t;
                                    {
                                      if(((p_38 != NULL) && (p_38 != s_38)))
                                        _fail(s_38);
                                      else
                                        p_38 = s_38;
                                      {
                                        ATerm d_14 = t;
                                        int e_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm t_38 = NULL;
                                            t_38 = t;
                                            l_36 :
                                            if(((ATermList) t_38 == ATempty))
                                              {
                                                t = not_null(r_37);
                                              }
                                            else
                                              _fail(t);
                                            LocalPopChoice(e_14);
                                          }
                                        else
                                          {
                                            t = d_14;
                                            {
                                              ATerm u_38 = NULL;
                                              ATerm v_38 = NULL;
                                              ATerm f_2 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, term_f_14);
                                                return(t);
                                              }
                                              t = at_last_1(t, f_2);
                                              {
                                                u_38 = t;
                                                {
                                                  if(((q_38 != NULL) && (q_38 != u_38)))
                                                    _fail(u_38);
                                                  else
                                                    q_38 = u_38;
                                                  {
                                                    ATerm w_38 = NULL;
                                                    t = not_null(r_37);
                                                    {
                                                      ATerm g_2 (ATerm t)
                                                      {
                                                        t = not_null(q_38);
                                                        return(t);
                                                      }
                                                      t = separate_by_1(t, g_2);
                                                      {
                                                        w_38 = t;
                                                        if(((v_38 != NULL) && (v_38 != w_38)))
                                                          _fail(w_38);
                                                        else
                                                          v_38 = w_38;
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_38)), term_g_14);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        {
                                          x_38 = t;
                                          if(((r_38 != NULL) && (r_38 != x_38)))
                                            _fail(x_38);
                                          else
                                            r_38 = x_38;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = not_null(r_38);
                              }
                            }
                          else
                            {
                              if(match_cons(s_37, sym_V_2))
                                {
                                  t_37 = ATgetArgument(s_37, 0);
                                  r_37 = ATgetArgument(s_37, 1);
                                  {
                                    ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL;
                                    ATerm d_39 = NULL;
                                    t = not_null(t_37);
                                    {
                                      ATerm e_39 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        d_39 = t;
                                        {
                                          if(((b_39 != NULL) && (b_39 != d_39)))
                                            _fail(d_39);
                                          else
                                            b_39 = d_39;
                                          {
                                            t = not_null(t_37);
                                            {
                                              ATerm f_39 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                e_39 = t;
                                                {
                                                  if(((a_39 != NULL) && (a_39 != e_39)))
                                                    _fail(e_39);
                                                  else
                                                    a_39 = e_39;
                                                  {
                                                    t = not_null(r_37);
                                                    {
                                                      ATerm h_2 (ATerm t)
                                                      {
                                                        ATerm j_2 (ATerm t)
                                                        {
                                                          t = term_d_10;
                                                          return(t);
                                                        }
                                                        t = tov_1(t, j_2);
                                                        return(t);
                                                      }
                                                      ATerm i_2 (ATerm t)
                                                      {
                                                        ATerm k_2 (ATerm t)
                                                        {
                                                          ATerm l_2 (ATerm t)
                                                          {
                                                            t = not_null(a_39);
                                                            return(t);
                                                          }
                                                          t = tov_1(t, l_2);
                                                          return(t);
                                                        }
                                                        t = map_1(t, k_2);
                                                        return(t);
                                                      }
                                                      t = Cons_2(t, h_2, i_2);
                                                      {
                                                        ATerm m_2 (ATerm t)
                                                        {
                                                          t = not_null(b_39);
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, m_2);
                                                        {
                                                          f_39 = t;
                                                          if(((c_39 != NULL) && (c_39 != f_39)))
                                                            _fail(f_39);
                                                          else
                                                            c_39 = f_39;
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
                                    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, not_null(c_39))), term_g_14);
                                  }
                                }
                              else
                                {
                                  if(match_cons(s_37, sym_H_2))
                                    {
                                      t_37 = ATgetArgument(s_37, 0);
                                      r_37 = ATgetArgument(s_37, 1);
                                      {
                                        ATerm i_39 = NULL,j_39 = NULL;
                                        ATerm k_39 = NULL;
                                        t = not_null(t_37);
                                        {
                                          ATerm l_39 = NULL;
                                          t = Hspace_0(t);
                                          {
                                            k_39 = t;
                                            {
                                              if(((i_39 != NULL) && (i_39 != k_39)))
                                                _fail(k_39);
                                              else
                                                i_39 = k_39;
                                              {
                                                t = not_null(r_37);
                                                {
                                                  ATerm n_2 (ATerm t)
                                                  {
                                                    t = not_null(i_39);
                                                    return(t);
                                                  }
                                                  t = sep_by_1(t, n_2);
                                                  {
                                                    l_39 = t;
                                                    if(((j_39 != NULL) && (j_39 != l_39)))
                                                      _fail(l_39);
                                                    else
                                                      j_39 = l_39;
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = not_null(j_39);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(s_37, sym_FBOX_2))
                                        {
                                          t_37 = ATgetArgument(s_37, 0);
                                          r_37 = ATgetArgument(s_37, 1);
                                          {
                                            ATerm o_39 = NULL;
                                            ATerm p_39 = NULL;
                                            t = not_null(t_37);
                                            {
                                              ATerm h_14 = t;
                                              int i_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = KW_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_j_14), (ATerm) ATinsert(ATempty, not_null(r_37)));
                                                  LocalPopChoice(i_14);
                                                }
                                              else
                                                {
                                                  t = h_14;
                                                  {
                                                    ATerm k_14 = t;
                                                    int l_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = VAR_0(t);
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_m_14), (ATerm) ATinsert(ATempty, not_null(r_37)));
                                                        LocalPopChoice(l_14);
                                                      }
                                                    else
                                                      {
                                                        t = k_14;
                                                        {
                                                          ATerm n_14 = t;
                                                          int s_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = NUM_0(t);
                                                              t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_t_14), (ATerm) ATinsert(ATempty, not_null(r_37)));
                                                              LocalPopChoice(s_14);
                                                            }
                                                          else
                                                            {
                                                              t = n_14;
                                                              {
                                                                ATerm v_14 = t;
                                                                int x_14 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = MATH_0(t);
                                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_y_14), (ATerm) ATinsert(ATempty, not_null(r_37)));
                                                                    LocalPopChoice(x_14);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_14;
                                                                    t = not_null(r_37);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              {
                                                p_39 = t;
                                                if(((o_39 != NULL) && (o_39 != p_39)))
                                                  _fail(p_39);
                                                else
                                                  o_39 = p_39;
                                              }
                                            }
                                            t = not_null(o_39);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(s_37, sym_C_2))
                                            {
                                              t_37 = ATgetArgument(s_37, 0);
                                              r_37 = ATgetArgument(s_37, 1);
                                              p_37 :
                                              if(((ATermList) t_37 == ATempty))
                                                {
                                                  {
                                                    ATerm r_39 = NULL,s_39 = NULL;
                                                    ATerm w_39 = NULL;
                                                    t = not_null(r_37);
                                                    {
                                                      ATerm x_39 = NULL;
                                                      ATerm o_2 (ATerm t)
                                                      {
                                                        ATerm t_39 = NULL,u_39 = NULL;
                                                        t_39 = t;
                                                        l_37 :
                                                        if(match_cons(t_39, sym_S_1))
                                                          {
                                                            u_39 = ATgetArgument(t_39, 0);
                                                            {
                                                              t = not_null(u_39);
                                                              t = make_html_comment_0(t);
                                                            }
                                                          }
                                                        else
                                                          _fail(t);
                                                        return(t);
                                                      }
                                                      t = map_1(t, o_2);
                                                      {
                                                        w_39 = t;
                                                        {
                                                          if(((r_39 != NULL) && (r_39 != w_39)))
                                                            _fail(w_39);
                                                          else
                                                            r_39 = w_39;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_z_14), (ATerm) ATinsert(ATempty, not_null(r_39))))));
                                                            {
                                                              x_39 = t;
                                                              if(((s_39 != NULL) && (s_39 != x_39)))
                                                                _fail(x_39);
                                                              else
                                                                s_39 = x_39;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    t = not_null(s_39);
                                                  }
                                                }
                                              else
                                                _fail(t);
                                            }
                                          else
                                            {
                                              if(match_cons(s_37, sym_S_1))
                                                {
                                                  t_37 = ATgetArgument(s_37, 0);
                                                  {
                                                    t = not_null(t_37);
                                                    t = html_string_0(t);
                                                  }
                                                }
                                              else
                                                _fail(t);
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
ATerm conc_0 (ATerm t)
{
  ATerm e_41 = NULL,f_41 = NULL,g_41 = NULL;
  e_41 = t;
  d_41 :
  if(match_cons(e_41, sym__2))
    {
      f_41 = ATgetArgument(e_41, 0);
      g_41 = ATgetArgument(e_41, 1);
      {
        t = not_null(f_41);
        {
          ATerm p_2 (ATerm t)
          {
            t = not_null(g_41);
            return(t);
          }
          t = at_end_1(t, p_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm g_63 (ATerm))
{
  ATerm k_41 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = g_63(t);
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = Cons_2(t, _id, k_41);
      }
    return(t);
  }
  t = k_41(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm l_41 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_63(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        t = Cons_2(t, _id, l_41);
      }
    return(t);
  }
  t = l_41(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm t_62 (ATerm))
{
  ATerm n_41 = NULL;
  ATerm q_2 (ATerm t)
  {
    t = Cons_2(t, t_62, _id);
    {
      ATerm r_2 (ATerm t)
      {
        ATerm o_41 = NULL;
        o_41 = t;
        if(((n_41 != NULL) && (n_41 != o_41)))
          _fail(o_41);
        else
          n_41 = o_41;
        return(t);
      }
      t = Cons_2(t, _id, r_2);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, q_2);
  {
    ATerm s_2 (ATerm t)
    {
      t = not_null(n_41);
      return(t);
    }
    t = split_2(t, _id, s_2);
  }
  return(t);
}
ATerm Distribute_0 (ATerm t)
{
  ATerm b_42 = NULL,c_42 = NULL,d_42 = NULL;
  b_42 = t;
  a_42 :
  if(match_cons(b_42, sym_H_2))
    {
      c_42 = ATgetArgument(b_42, 0);
      d_42 = ATgetArgument(b_42, 1);
      {
        ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
        t = not_null(d_42);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
            l_42 = t;
            s_41 :
            if(match_cons(l_42, sym_V_2))
              {
                m_42 = ATgetArgument(l_42, 0);
                n_42 = ATgetArgument(l_42, 1);
                t_41 :
                if(((ATgetType(n_42) == AT_LIST) && ((ATermList) n_42 != ATempty)))
                  {
                    o_42 = ATgetFirst((ATermList) n_42);
                    p_42 = (ATerm) ATgetNext((ATermList) n_42);
                    {
                      if(((i_42 != NULL) && (i_42 != m_42)))
                        _fail(m_42);
                      else
                        i_42 = m_42;
                      {
                        if(((j_42 != NULL) && (j_42 != o_42)))
                          _fail(o_42);
                        else
                          j_42 = o_42;
                        if(((k_42 != NULL) && (k_42 != p_42)))
                          _fail(p_42);
                        else
                          k_42 = p_42;
                      }
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
            return(t);
          }
          t = split_fetch_1(t, t_2);
          {
            q_42 = t;
            z_41 :
            if(match_cons(q_42, sym__2))
              {
                r_42 = ATgetArgument(q_42, 0);
                s_42 = ATgetArgument(q_42, 1);
                {
                  ATerm w_42 = NULL,y_42 = NULL;
                  t = not_null(s_42);
                  {
                    ATerm g_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm v_42 = NULL;
                        v_42 = t;
                        v_41 :
                        if(((ATermList) v_42 == ATempty))
                          {
                            {
                            }
                          }
                        else
                          _fail(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      t = g_15;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(k_42)), not_null(j_42));
                      {
                        ATerm a_43 = NULL;
                        ATerm u_2 (ATerm t)
                        {
                          ATerm v_2 (ATerm t)
                          {
                            ATerm x_42 = NULL;
                            x_42 = t;
                            if(((w_42 != NULL) && (w_42 != x_42)))
                              _fail(x_42);
                            else
                              w_42 = x_42;
                            return(t);
                          }
                          t = Cons_2(t, v_2, Nil_0);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, not_null(c_42), (ATerm) ATinsert(CheckATermList(not_null(s_42)), not_null(w_42))));
                          return(t);
                        }
                        t = at_last_1(t, u_2);
                        {
                          y_42 = t;
                          {
                            ATerm b_43 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_42), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(i_42), not_null(y_42))));
                            {
                              t = conc_0(t);
                              {
                                b_43 = t;
                                if(((a_43 != NULL) && (a_43 != b_43)))
                                  _fail(b_43);
                                else
                                  a_43 = b_43;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_H_2, not_null(c_42), not_null(a_43));
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              _fail(t);
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm normalize_0 (ATerm t)
{
  ATerm w_2 (ATerm t)
  {
    ATerm y_2 (ATerm t)
    {
      ATerm h_15 = t;
      int i_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_43 = NULL,q_43 = NULL,r_43 = NULL,s_43 = NULL,t_43 = NULL;
          p_43 = t;
          k_43 :
          if(match_cons(p_43, sym_H_2))
            {
              q_43 = ATgetArgument(p_43, 0);
              r_43 = ATgetArgument(p_43, 1);
              l_43 :
              if(((ATgetType(r_43) == AT_LIST) && ((ATermList) r_43 != ATempty)))
                {
                  s_43 = ATgetFirst((ATermList) r_43);
                  t_43 = (ATerm) ATgetNext((ATermList) r_43);
                  m_43 :
                  if(((ATermList) t_43 == ATempty))
                    {
                      t = not_null(s_43);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            {
              if(match_cons(p_43, sym_V_2))
                {
                  q_43 = ATgetArgument(p_43, 0);
                  r_43 = ATgetArgument(p_43, 1);
                  n_43 :
                  if(((ATgetType(r_43) == AT_LIST) && ((ATermList) r_43 != ATempty)))
                    {
                      s_43 = ATgetFirst((ATermList) r_43);
                      t_43 = (ATerm) ATgetNext((ATermList) r_43);
                      o_43 :
                      if(((ATermList) t_43 == ATempty))
                        {
                          t = not_null(s_43);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          LocalPopChoice(i_15);
        }
      else
        {
          t = h_15;
          t = Distribute_0(t);
        }
      return(t);
    }
    t = try_1(t, y_2);
    return(t);
  }
  t = topdown_1(t, w_2);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm z_43 = NULL;
  t = normalize_0(t);
  {
    ATerm a_3 (ATerm t)
    {
      t = try_1(t, Abox_2_html_0);
      return(t);
    }
    t = topdown_1(t, a_3);
    {
      z_43 = t;
      {
        t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(z_43))))));
        t = html2text_0(t);
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm a_37 (ATerm), ATerm b_37 (ATerm))
{
  ATerm g_44 = NULL,h_44 = NULL,i_44 = NULL;
  g_44 = t;
  f_44 :
  if(match_cons(g_44, sym__2))
    {
      h_44 = ATgetArgument(g_44, 0);
      i_44 = ATgetArgument(g_44, 1);
      {
        ATerm l_44 = NULL;
        t = not_null(h_44);
        {
          ATerm n_44 = NULL;
          t = a_37(t);
          {
            l_44 = t;
            {
              t = not_null(i_44);
              {
                t = b_37(t);
                {
                  n_44 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_44), not_null(n_44));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_44 = NULL;
  t_44 = t;
  t = SSL_ReadFromFile(not_null(t_44));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_44 = NULL;
  ATerm j_15;
  j_15 = t;
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_3 (ATerm t)
        {
          ATerm a_45 = NULL,b_45 = NULL;
          a_45 = t;
          x_44 :
          if(match_cons(a_45, sym_Input_1))
            {
              b_45 = ATgetArgument(a_45, 0);
              if(((z_44 != NULL) && (z_44 != b_45)))
                _fail(b_45);
              else
                z_44 = b_45;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, j_3);
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        {
          ATerm c_45 = NULL;
          t = term_m_15;
          {
            c_45 = t;
            if(((z_44 != NULL) && (z_44 != c_45)))
              _fail(c_45);
            else
              z_44 = c_45;
          }
        }
      }
  }
  t = j_15;
  {
    ATerm k_3 (ATerm t)
    {
      t = not_null(z_44);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_3);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_53 (ATerm))
{
  ATerm n_15;
  n_15 = t;
  {
    ATerm h_45 = NULL,j_45 = NULL;
    ATerm o_15;
    o_15 = t;
    {
      ATerm i_45 = NULL;
      t = s_53(t);
      {
        i_45 = t;
        if(((h_45 != NULL) && (h_45 != i_45)))
          _fail(i_45);
        else
          h_45 = i_45;
      }
    }
    t = o_15;
    {
      ATerm k_45 = NULL;
      k_45 = t;
      if(((j_45 != NULL) && (j_45 != k_45)))
        _fail(k_45);
      else
        j_45 = k_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_45)), not_null(h_45)));
        t = printnl_0(t);
      }
    }
  }
  t = n_15;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm z_53 (ATerm))
{
  ATerm p_15;
  p_15 = t;
  {
    t = z_53(t);
    {
      ATerm l_3 (ATerm t)
      {
        t = term_q_15;
        return(t);
      }
      t = debug_1(t, l_3);
    }
  }
  t = p_15;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  ATerm v_15 = t;
  int w_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_45 = NULL,u_45 = NULL,v_45 = NULL;
      t_45 = t;
      o_45 :
      if(match_cons(t_45, sym__2))
        {
          u_45 = ATgetArgument(t_45, 0);
          v_45 = ATgetArgument(t_45, 1);
          {
            if(((s_45 != NULL) && (s_45 != u_45)))
              _fail(u_45);
            else
              s_45 = u_45;
            {
              if(((r_45 != NULL) && (r_45 != v_45)))
                _fail(v_45);
              else
                r_45 = v_45;
              t = SSL_open_file(not_null(s_45), not_null(r_45));
            }
          }
        }
      else
        _fail(t);
      LocalPopChoice(w_15);
    }
  else
    {
      t = v_15;
      {
        ATerm w_45 = NULL;
        ATerm x_45 = NULL;
        ATerm q_3 (ATerm t)
        {
          t = term_x_15;
          return(t);
        }
        t = obsolete_1(t, q_3);
        {
          w_45 = t;
          {
            if(((s_45 != NULL) && (s_45 != w_45)))
              _fail(w_45);
            else
              s_45 = w_45;
            {
              ATerm y_15;
              y_15 = t;
              {
                ATerm y_45 = NULL;
                t = term_z_15;
                {
                  y_45 = t;
                  if(((x_45 != NULL) && (x_45 != y_45)))
                    _fail(y_45);
                  else
                    x_45 = y_45;
                }
              }
              t = y_15;
              t = SSL_open_file(not_null(s_45), not_null(x_45));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm c_46 (ATerm t)
  {
    ATerm a_16 = t;
    int b_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_62, _id);
        LocalPopChoice(b_16);
      }
    else
      {
        t = a_16;
        t = Cons_2(t, _id, c_46);
      }
    return(t);
  }
  t = c_46(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm b_52 (ATerm))
{
  t = fetch_1(t, b_52);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm f_46 = NULL;
  ATerm c_16;
  c_16 = t;
  {
    ATerm r_3 (ATerm t)
    {
      ATerm g_46 = NULL,h_46 = NULL;
      g_46 = t;
      e_46 :
      if(match_cons(g_46, sym_Program_1))
        {
          h_46 = ATgetArgument(g_46, 0);
          if(((f_46 != NULL) && (f_46 != h_46)))
            _fail(h_46);
          else
            f_46 = h_46;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, r_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_16), not_null(f_46)), term_d_16));
      {
        t = printnl_0(t);
        {
          t = term_h_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_16;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  j_46 :
  if(!(match_cons(k_46, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_52 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    ATerm f_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_16);
      }
    else
      {
        t = f_16;
        {
          ATerm i_16 = t;
          int j_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_16);
            }
          else
            {
              t = i_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, s_3);
  t = w_52(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  q_46 = t;
  o_46 :
  if(match_string(q_46, "register-usage-info"))
    t = register_usage_1(t, k_0);
  else
    {
      if(((ATgetType(q_46) == AT_LIST) && ((ATermList) q_46 != ATempty)))
        {
          r_46 = ATgetFirst((ATermList) q_46);
          s_46 = (ATerm) ATgetNext((ATermList) q_46);
          p_46 :
          if(((ATgetType(s_46) == AT_LIST) && ((ATermList) s_46 != ATempty)))
            {
              t_46 = ATgetFirst((ATermList) s_46);
              u_46 = (ATerm) ATgetNext((ATermList) s_46);
              {
                ATerm y_46 = NULL;
                ATerm l_16;
                l_16 = t;
                {
                  t = not_null(r_46);
                  t = i_0(t);
                }
                t = l_16;
                {
                  ATerm z_46 = NULL;
                  t = not_null(t_46);
                  {
                    t = j_0(t);
                    {
                      z_46 = t;
                      if(((y_46 != NULL) && (y_46 != z_46)))
                        _fail(z_46);
                      else
                        y_46 = z_46;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_46)), not_null(y_46));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm m_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_3 (ATerm t)
      {
        ATerm q_47 = NULL;
        q_47 = t;
        d_47 :
        if(!(match_string(q_47, "-S")))
          {
            if(!(match_string(q_47, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm u_3 (ATerm t)
      {
        t = term_o_16;
        return(t);
      }
      ATerm z_3 (ATerm t)
      {
        t = term_q_16;
        return(t);
      }
      t = Option_3(t, t_3, u_3, z_3);
      LocalPopChoice(n_16);
    }
  else
    {
      t = m_16;
      {
        ATerm s_16 = t;
        int t_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              ATerm u_47 = NULL;
              u_47 = t;
              e_47 :
              if(!(match_string(u_47, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              t = term_u_16;
              return(t);
            }
            ATerm d_4 (ATerm t)
            {
              t = term_v_16;
              return(t);
            }
            t = Option_3(t, a_4, b_4, d_4);
            LocalPopChoice(t_16);
          }
        else
          {
            t = s_16;
            {
              ATerm w_16 = t;
              int x_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_4 (ATerm t)
                  {
                    ATerm v_47 = NULL;
                    v_47 = t;
                    f_47 :
                    if(!(match_string(v_47, "-v")))
                      {
                        if(!(match_string(v_47, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm g_4 (ATerm t)
                  {
                    t = term_y_16;
                    return(t);
                  }
                  ATerm h_4 (ATerm t)
                  {
                    t = term_z_16;
                    return(t);
                  }
                  t = Option_3(t, e_4, g_4, h_4);
                  LocalPopChoice(x_16);
                }
              else
                {
                  t = w_16;
                  {
                    ATerm a_17 = t;
                    int b_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm i_4 (ATerm t)
                        {
                          ATerm w_47 = NULL;
                          w_47 = t;
                          g_47 :
                          if(!(match_string(w_47, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm j_4 (ATerm t)
                        {
                          ATerm x_47 = NULL;
                          ATerm y_47 = NULL;
                          y_47 = t;
                          if(((x_47 != NULL) && (x_47 != y_47)))
                            _fail(y_47);
                          else
                            x_47 = y_47;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(x_47));
                          return(t);
                        }
                        ATerm k_4 (ATerm t)
                        {
                          t = term_c_17;
                          return(t);
                        }
                        t = ArgOption_3(t, i_4, j_4, k_4);
                        LocalPopChoice(b_17);
                      }
                    else
                      {
                        t = a_17;
                        {
                          ATerm d_17 = t;
                          int j_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm l_4 (ATerm t)
                              {
                                ATerm z_47 = NULL;
                                z_47 = t;
                                i_47 :
                                if(!(match_string(z_47, "-i")))
                                  {
                                    if(!(match_string(z_47, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm m_4 (ATerm t)
                              {
                                ATerm a_48 = NULL;
                                ATerm b_48 = NULL;
                                b_48 = t;
                                if(((a_48 != NULL) && (a_48 != b_48)))
                                  _fail(b_48);
                                else
                                  a_48 = b_48;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_48));
                                return(t);
                              }
                              ATerm n_4 (ATerm t)
                              {
                                t = term_k_17;
                                return(t);
                              }
                              t = ArgOption_3(t, l_4, m_4, n_4);
                              LocalPopChoice(j_17);
                            }
                          else
                            {
                              t = d_17;
                              {
                                ATerm l_17 = t;
                                int m_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm o_4 (ATerm t)
                                    {
                                      ATerm c_48 = NULL;
                                      c_48 = t;
                                      m_47 :
                                      if(!(match_string(c_48, "-o")))
                                        {
                                          if(!(match_string(c_48, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm d_48 = NULL;
                                      ATerm e_48 = NULL;
                                      e_48 = t;
                                      if(((d_48 != NULL) && (d_48 != e_48)))
                                        _fail(e_48);
                                      else
                                        d_48 = e_48;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_48));
                                      return(t);
                                    }
                                    ATerm q_4 (ATerm t)
                                    {
                                      t = term_p_17;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, o_4, p_4, q_4);
                                    LocalPopChoice(m_17);
                                  }
                                else
                                  {
                                    t = l_17;
                                    {
                                      ATerm q_17 = t;
                                      int r_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm r_4 (ATerm t)
                                          {
                                            ATerm f_48 = NULL;
                                            f_48 = t;
                                            o_47 :
                                            if(!(match_string(f_48, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm s_4 (ATerm t)
                                          {
                                            t = term_s_17;
                                            return(t);
                                          }
                                          ATerm x_4 (ATerm t)
                                          {
                                            t = term_t_17;
                                            return(t);
                                          }
                                          t = Option_3(t, r_4, s_4, x_4);
                                          LocalPopChoice(r_17);
                                        }
                                      else
                                        {
                                          t = q_17;
                                          {
                                            ATerm y_4 (ATerm t)
                                            {
                                              ATerm g_48 = NULL;
                                              g_48 = t;
                                              p_47 :
                                              if(!(match_string(g_48, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm z_4 (ATerm t)
                                            {
                                              t = term_u_17;
                                              return(t);
                                            }
                                            ATerm a_5 (ATerm t)
                                            {
                                              t = term_w_17;
                                              return(t);
                                            }
                                            t = Option_3(t, y_4, z_4, a_5);
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
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_48 = NULL;
  l_48 = t;
  t = SSL_table_destroy(not_null(l_48));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_48 = NULL;
  p_48 = t;
  t = SSL_exit(not_null(p_48));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_48 = NULL;
  t_48 = t;
  t = SSL_implode_string(not_null(t_48));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_62 (ATerm))
{
  ATerm w_48 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_48);
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        {
          t = Nil_0(t);
          t = w_62(t);
        }
      }
    return(t);
  }
  t = w_48(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_17 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_18);
    }
  else
    {
      t = z_17;
      {
        ATerm z_48 = NULL,a_49 = NULL,b_49 = NULL;
        z_48 = t;
        y_48 :
        if(((ATgetType(z_48) == AT_LIST) && ((ATermList) z_48 != ATempty)))
          {
            a_49 = ATgetFirst((ATermList) z_48);
            b_49 = (ATerm) ATgetNext((ATermList) z_48);
            {
              t = not_null(a_49);
              {
                ATerm b_5 (ATerm t)
                {
                  t = not_null(b_49);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_5);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_49 = NULL;
  h_49 = t;
  t = SSL_explode_string(not_null(h_49));
  return(t);
}
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm d_51 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm k_49 (ATerm t)
  {
    ATerm e_18 = t;
    int f_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_18);
      }
    else
      {
        t = e_18;
        t = Cons_2(t, i_62, k_49);
      }
    return(t);
  }
  t = k_49(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
  t_49 = t;
  q_49 :
  if(((ATgetType(t_49) == AT_LIST) && ((ATermList) t_49 != ATempty)))
    {
      r_49 = ATgetFirst((ATermList) t_49);
      s_49 = (ATerm) ATgetNext((ATermList) t_49);
      {
        ATerm w_49 = NULL;
        t = not_null(s_49);
        {
          ATerm i_18;
          i_18 = t;
          {
            ATerm x_49 = NULL,z_49 = NULL,b_50 = NULL;
            ATerm j_18;
            j_18 = t;
            {
              ATerm y_49 = NULL;
              t = h_0(t);
              {
                y_49 = t;
                if(((x_49 != NULL) && (x_49 != y_49)))
                  _fail(y_49);
                else
                  x_49 = y_49;
              }
            }
            t = j_18;
            {
              ATerm a_50 = NULL;
              t = not_null(r_49);
              {
                t = g_0(t);
                {
                  a_50 = t;
                  if(((z_49 != NULL) && (z_49 != a_50)))
                    _fail(a_50);
                  else
                    z_49 = a_50;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(x_49)), not_null(z_49));
                {
                  b_50 = t;
                  if(((w_49 != NULL) && (w_49 != b_50)))
                    _fail(b_50);
                  else
                    w_49 = b_50;
                }
              }
            }
          }
          t = i_18;
          {
            ATerm c_5 (ATerm t)
            {
              t = not_null(w_49);
              return(t);
            }
            t = reverse_acc_2(t, g_0, c_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_49 == ATempty))
        {
          {
            t = term_j_8;
            t = h_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, d_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_51 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_42 (ATerm))
{
  ATerm k_50 = NULL,l_50 = NULL;
  k_50 = t;
  j_50 :
  if(match_cons(k_50, sym_Program_1))
    {
      l_50 = ATgetArgument(k_50, 0);
      {
        ATerm n_50 = NULL;
        t = not_null(l_50);
        {
          t = f_42(t);
          {
            n_50 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_50));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm v_50 = NULL;
  ATerm e_5 (ATerm t)
  {
    ATerm f_5 (ATerm t)
    {
      ATerm w_50 = NULL;
      w_50 = t;
      if(((v_50 != NULL) && (v_50 != w_50)))
        _fail(w_50);
      else
        v_50 = w_50;
      return(t);
    }
    t = Program_1(t, f_5);
    return(t);
  }
  t = option_defined_1(t, e_5);
  {
    ATerm g_5 (ATerm t)
    {
      ATerm x_50 = NULL;
      ATerm y_50 = NULL;
      t = term_j_8;
      {
        ATerm h_5 (ATerm t)
        {
          t = not_null(v_50);
          return(t);
        }
        t = short_description_1(t, h_5);
        {
          t = concat_strings_0(t);
          {
            y_50 = t;
            if(((x_50 != NULL) && (x_50 != y_50)))
              _fail(y_50);
            else
              x_50 = y_50;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, not_null(x_50)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, g_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATempty, term_l_18));
      {
        t = printnl_0(t);
        {
          t = term_s_18;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm i_5 (ATerm t)
                {
                  ATerm z_50 = NULL;
                  z_50 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_50)), term_t_18));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, i_5);
                {
                  ATerm j_5 (ATerm t)
                  {
                    ATerm b_51 = NULL;
                    ATerm i_51 = NULL;
                    t = term_j_8;
                    {
                      ATerm k_5 (ATerm t)
                      {
                        t = not_null(v_50);
                        return(t);
                      }
                      t = long_description_1(t, k_5);
                      {
                        t = concat_strings_0(t);
                        {
                          i_51 = t;
                          if(((b_51 != NULL) && (b_51 != i_51)))
                            _fail(i_51);
                          else
                            b_51 = i_51;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_51)), term_u_18));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, j_5);
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
ATerm printnl_0 (ATerm t)
{
  ATerm p_51 = NULL,q_51 = NULL,r_51 = NULL;
  p_51 = t;
  o_51 :
  if(match_cons(p_51, sym__2))
    {
      q_51 = ATgetArgument(p_51, 0);
      r_51 = ATgetArgument(p_51, 1);
      {
        ATerm z_18;
        z_18 = t;
        t = SSL_printnl(not_null(q_51), not_null(r_51));
        t = z_18;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_42 (ATerm))
{
  ATerm y_51 = NULL,z_51 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym_Undefined_1))
    {
      z_51 = ATgetArgument(y_51, 0);
      {
        ATerm c_52 = NULL;
        t = not_null(z_51);
        {
          t = g_42(t);
          {
            c_52 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_52));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm h_52 = NULL;
  h_52 = t;
  g_52 :
  if(!(match_cons(h_52, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  j_52 :
  if(match_cons(k_52, sym__2))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      t = SSL_table_get(not_null(l_52), not_null(m_52));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,x_52 = NULL;
  t_52 = t;
  s_52 :
  if(match_cons(t_52, sym__3))
    {
      u_52 = ATgetArgument(t_52, 0);
      v_52 = ATgetArgument(t_52, 1);
      x_52 = ATgetArgument(t_52, 2);
      {
        ATerm a_19;
        a_19 = t;
        {
          ATerm b_53 = NULL;
          ATerm c_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_52), not_null(v_52));
          {
            ATerm b_19 = t;
            int c_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_19);
              }
            else
              {
                t = b_19;
                t = (ATerm) ATempty;
              }
            {
              c_53 = t;
              if(((b_53 != NULL) && (b_53 != c_53)))
                _fail(c_53);
              else
                b_53 = c_53;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_52), not_null(v_52), (ATerm) ATinsert(CheckATermList(not_null(b_53)), not_null(x_52)));
            t = table_put_0(t);
          }
        }
        t = a_19;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_51 (ATerm))
{
  ATerm g_53 = NULL;
  ATerm h_53 = NULL;
  t = term_j_8;
  {
    t = h_51(t);
    {
      h_53 = t;
      if(((g_53 != NULL) && (g_53 != h_53)))
        _fail(h_53);
      else
        g_53 = h_53;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_18, term_r_18, not_null(g_53));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm n_53 = NULL,o_53 = NULL,p_53 = NULL;
  n_53 = t;
  m_53 :
  if(match_string(n_53, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(n_53) == AT_LIST) && ((ATermList) n_53 != ATempty)))
        {
          o_53 = ATgetFirst((ATermList) n_53);
          p_53 = (ATerm) ATgetNext((ATermList) n_53);
          {
            ATerm t_53 = NULL;
            ATerm d_19;
            d_19 = t;
            {
              t = not_null(o_53);
              t = b_0(t);
            }
            t = d_19;
            {
              ATerm u_53 = NULL;
              t = term_j_8;
              {
                t = c_0(t);
                {
                  u_53 = t;
                  if(((t_53 != NULL) && (t_53 != u_53)))
                    _fail(u_53);
                  else
                    t_53 = u_53;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_53)), not_null(t_53));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm l_5 (ATerm t)
  {
    ATerm a_54 = NULL;
    a_54 = t;
    y_53 :
    if(!(match_string(a_54, "--help")))
      {
        if(!(match_string(a_54, "-h")))
          {
            if(!(match_string(a_54, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_e_19;
    return(t);
  }
  ATerm n_5 (ATerm t)
  {
    t = term_k_19;
    return(t);
  }
  t = Option_3(t, l_5, m_5, n_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL;
  d_54 = t;
  c_54 :
  if(((ATgetType(d_54) == AT_LIST) && ((ATermList) d_54 != ATempty)))
    {
      e_54 = ATgetFirst((ATermList) d_54);
      f_54 = (ATerm) ATgetNext((ATermList) d_54);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_54)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_54)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_47 (ATerm), ATerm k_47 (ATerm))
{
  ATerm n_54 = NULL,o_54 = NULL,p_54 = NULL;
  n_54 = t;
  m_54 :
  if(((ATgetType(n_54) == AT_LIST) && ((ATermList) n_54 != ATempty)))
    {
      o_54 = ATgetFirst((ATermList) n_54);
      p_54 = (ATerm) ATgetNext((ATermList) n_54);
      {
        ATerm s_54 = NULL;
        t = not_null(o_54);
        {
          ATerm u_54 = NULL;
          t = j_47(t);
          {
            s_54 = t;
            {
              t = not_null(p_54);
              {
                t = k_47(t);
                {
                  u_54 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_54)), not_null(s_54));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm a_55 = NULL;
  a_55 = t;
  z_54 :
  if(((ATermList) a_55 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_51 (ATerm))
{
  ATerm m_19;
  m_19 = t;
  {
    ATerm o_5 (ATerm t)
    {
      t = term_o_19;
      t = f_51(t);
      return(t);
    }
    t = try_1(t, o_5);
  }
  t = m_19;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm c_55 = NULL;
      c_55 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_55));
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      ATerm r_19 = t;
      int s_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_19 = t;
          int v_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_19);
            }
          else
            {
              t = u_19;
              {
                t = f_51(t);
                t = Cons_2(t, _id, q_5);
              }
            }
          LocalPopChoice(s_19);
        }
      else
        {
          t = r_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, p_5, q_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
  ATerm z_19;
  z_19 = t;
  {
    ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL,o_55 = NULL;
    l_55 = t;
    h_55 :
    if(match_cons(l_55, sym__3))
      {
        m_55 = ATgetArgument(l_55, 0);
        n_55 = ATgetArgument(l_55, 1);
        o_55 = ATgetArgument(l_55, 2);
        {
          if(((i_55 != NULL) && (i_55 != m_55)))
            _fail(m_55);
          else
            i_55 = m_55;
          {
            if(((j_55 != NULL) && (j_55 != n_55)))
              _fail(n_55);
            else
              j_55 = n_55;
            {
              if(((k_55 != NULL) && (k_55 != o_55)))
                _fail(o_55);
              else
                k_55 = o_55;
              t = SSL_table_put(not_null(i_55), not_null(j_55), not_null(k_55));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = z_19;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_51 (ATerm))
{
  ATerm t_55 = NULL;
  ATerm a_20;
  a_20 = t;
  {
    t = term_b_20;
    t = table_put_0(t);
  }
  t = a_20;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm d_20 = t;
      int h_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_51(t);
          LocalPopChoice(h_20);
        }
      else
        {
          t = d_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_5);
    {
      ATerm s_5 (ATerm t)
      {
        ATerm i_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_h_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(n_20);
          }
        else
          {
            t = i_20;
            {
              ATerm t_5 (ATerm t)
              {
                ATerm u_5 (ATerm t)
                {
                  ATerm u_55 = NULL;
                  u_55 = t;
                  if(((t_55 != NULL) && (t_55 != u_55)))
                    _fail(u_55);
                  else
                    t_55 = u_55;
                  return(t);
                }
                t = Undefined_1(t, u_5);
                return(t);
              }
              t = option_defined_1(t, t_5);
              {
                ATerm o_20;
                o_20 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_b_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_55)), term_p_20));
                  t = printnl_0(t);
                }
                t = o_20;
                {
                  t = system_usage_0(t);
                  {
                    t = term_d_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, s_5);
      {
        ATerm s_20;
        s_20 = t;
        {
          t = term_m_18;
          t = table_destroy_0(t);
        }
        t = s_20;
      }
    }
  }
  return(t);
}
ATerm Abox2html_0 (ATerm t)
{
  ATerm c_56 = NULL;
  ATerm e_56 = NULL,f_56 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    c_56 = t;
    {
      ATerm t_20 = t;
      int u_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(u_20);
        }
      else
        {
          t = t_20;
          {
            ATerm v_20 = t;
            int w_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm y_20;
                y_20 = t;
                {
                  ATerm z_20 = t;
                  int c_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_5 (ATerm t)
                      {
                        ATerm g_56 = NULL,h_56 = NULL;
                        g_56 = t;
                        y_55 :
                        if(match_cons(g_56, sym_Output_1))
                          {
                            h_56 = ATgetArgument(g_56, 0);
                            if(((f_56 != NULL) && (f_56 != h_56)))
                              _fail(h_56);
                            else
                              f_56 = h_56;
                          }
                        else
                          _fail(t);
                        return(t);
                      }
                      t = option_defined_1(t, v_5);
                      {
                        t = not_null(f_56);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(c_21);
                    }
                  else
                    {
                      t = z_20;
                      {
                        ATerm j_56 = NULL;
                        t = term_d_21;
                        {
                          j_56 = t;
                          if(((f_56 != NULL) && (f_56 != j_56)))
                            _fail(j_56);
                          else
                            f_56 = j_56;
                        }
                      }
                    }
                }
                t = y_20;
                {
                  t = input_file_0(t);
                  {
                    ATerm w_5 (ATerm t)
                    {
                      ATerm k_56 = NULL;
                      t = abox2html_0(t);
                      {
                        k_56 = t;
                        if(((e_56 != NULL) && (e_56 != k_56)))
                          _fail(k_56);
                        else
                          e_56 = k_56;
                      }
                      return(t);
                    }
                    t = _2(t, _id, w_5);
                    {
                      t = not_null(e_56);
                      {
                        ATerm x_5 (ATerm t)
                        {
                          ATerm y_5 (ATerm t)
                          {
                            t = is_string_0(t);
                            {
                              ATerm e_21;
                              e_21 = t;
                              {
                                ATerm z_5 (ATerm t)
                                {
                                  t = not_null(f_56);
                                  return(t);
                                }
                                ATerm a_6 (ATerm t)
                                {
                                  ATerm l_56 = NULL;
                                  l_56 = t;
                                  t = (ATerm) ATinsert(ATempty, not_null(l_56));
                                  return(t);
                                }
                                t = split_2(t, z_5, a_6);
                                t = print_0(t);
                              }
                              t = e_21;
                            }
                            return(t);
                          }
                          t = try_1(t, y_5);
                          return(t);
                        }
                        t = topdown_1(t, x_5);
                        t = report_success_0(t);
                      }
                    }
                  }
                }
                LocalPopChoice(w_20);
              }
            else
              {
                t = v_20;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Abox2html_0(t);
  return(t);
}

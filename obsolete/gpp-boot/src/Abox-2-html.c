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
ATerm term_j_23;
ATerm term_x_22;
ATerm term_p_22;
ATerm term_h_22;
ATerm term_x_21;
ATerm term_q_21;
ATerm term_h_21;
ATerm term_d_21;
ATerm term_r_20;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_a_19;
ATerm term_z_16;
ATerm term_s_16;
ATerm term_x_15;
ATerm term_h_15;
ATerm term_m_14;
ATerm term_h_14;
ATerm term_g_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_h_13;
ATerm term_p_12;
ATerm term_d_12;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_o_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_j_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_u_10;
ATerm term_h_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_r_9;
ATerm term_f_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_e_8;
ATerm term_c_8;
ATerm term_z_7;
ATerm term_v_7;
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
ATerm term_l_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_h_6;
ATerm term_g_6;
ATerm term_f_6;
void init_constant_terms (void)
{
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym__2, term_e_11, term_j_11);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym__3, term_e_11, term_j_11, (ATerm) ATempty);
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym_stdout_0);
}
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm u_55 (ATerm), ATerm v_55 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_69 (ATerm));
ATerm topdown_1 (ATerm, ATerm i_65 (ATerm));
ATerm Html2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm k_65 (ATerm));
ATerm html2text_0 (ATerm);
ATerm at_suffix_1 (ATerm, ATerm e_63 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm x_62 (ATerm));
ATerm Distribute_0 (ATerm);
ATerm normalize_0 (ATerm);
ATerm abox2html_0 (ATerm);
ATerm _2 (ATerm, ATerm f_37 (ATerm), ATerm g_37 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm x_53 (ATerm));
ATerm obsolete_1 (ATerm, ATerm e_54 (ATerm));
ATerm open_file_0 (ATerm);
ATerm option_defined_1 (ATerm, ATerm g_52 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_53 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_51 (ATerm));
ATerm short_description_1 (ATerm, ATerm h_51 (ATerm));
ATerm Program_1 (ATerm, ATerm k_42 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_42 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_51 (ATerm));
ATerm Option_3 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_51 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_51 (ATerm));
ATerm conc_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm a_67 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm o_63 (ATerm));
ATerm html_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm x_47 (ATerm));
ATerm implode_string_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm make_html_comment_0 (ATerm);
ATerm map_1 (ATerm, ATerm m_62 (ATerm));
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_63 (ATerm));
ATerm concat_0 (ATerm);
ATerm sep_by_1 (ATerm, ATerm h_70 (ATerm));
ATerm Nil_0 (ATerm);
ATerm filter_1 (ATerm, ATerm m_56 (ATerm));
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm c_64 (ATerm));
ATerm separate_by_1 (ATerm, ATerm d_64 (ATerm));
ATerm LNAT_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm L_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm tov_1 (ATerm, ATerm g_70 (ATerm));
ATerm Cons_2 (ATerm, ATerm o_47 (ATerm), ATerm p_47 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm i_69 (ATerm), ATerm j_69 (ATerm));
ATerm for_3 (ATerm, ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm n_69 (ATerm));
ATerm copy_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_62 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm k_63 (ATerm));
ATerm AC_1 (ATerm, ATerm j_0 (ATerm));
ATerm AR_1 (ATerm, ATerm i_0 (ATerm));
ATerm AL_1 (ATerm, ATerm h_0 (ATerm));
ATerm aopt_0 (ATerm);
ATerm make_hs_0 (ATerm);
ATerm toa_1 (ATerm, ATerm d_70 (ATerm));
ATerm R_2 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm construct_rows_0 (ATerm);
ATerm Abox_2_html_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATempty, term_g_6));
  {
    t = printnl_0(t);
    {
      t = term_h_6;
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
      ATerm i_6 = t;
      if((PushChoice() == 0))
        {
          ATerm e_0 (ATerm t)
          {
            ATerm e_3 = NULL;
            e_3 = t;
            x_2 :
            if(!(match_cons(e_3, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_0);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = i_6;
        }
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
            {
              _fail(t);
            }
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
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, z_0);
          return(t);
        }
        t = _2(t, y_0, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_6), not_null(d_3)), term_j_6), not_null(c_3)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, a_0);
  {
    t = term_l_6;
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
        ATerm m_6;
        m_6 = t;
        t = SSL_print(not_null(o_3), not_null(p_3));
        t = m_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm u_55 (ATerm), ATerm v_55 (ATerm))
{
  ATerm v_3 = NULL,x_3 = NULL;
  ATerm n_6;
  n_6 = t;
  {
    ATerm w_3 = NULL;
    t = u_55(t);
    {
      w_3 = t;
      if(((v_3 != NULL) && (v_3 != w_3)))
        _fail(w_3);
      else
        v_3 = w_3;
    }
  }
  t = n_6;
  {
    ATerm y_3 = NULL;
    t = v_55(t);
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
ATerm try_1 (ATerm t, ATerm o_69 (ATerm))
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_69(t);
      LocalPopChoice(p_6);
    }
  else
    {
      t = o_6;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm i_65 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    t = i_65(t);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_6), not_null(u_4)), term_r_6), not_null(v_4)), term_q_6);
    }
  else
    {
      if(match_cons(w_4, sym_TR_2))
        {
          v_4 = ATgetArgument(w_4, 0);
          u_4 = ATgetArgument(w_4, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_6), not_null(u_4)), term_r_6), not_null(v_4)), term_t_6);
        }
      else
        {
          if(match_cons(w_4, sym_TD_2))
            {
              v_4 = ATgetArgument(w_4, 0);
              u_4 = ATgetArgument(w_4, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_6), not_null(u_4)), term_r_6), not_null(v_4)), term_v_6);
            }
          else
            {
              if(match_cons(w_4, sym_TD_p__1))
                {
                  v_4 = ATgetArgument(w_4, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_6), not_null(v_4)), term_w_6);
                }
              else
                {
                  if(match_cons(w_4, sym_SPAN_2))
                    {
                      v_4 = ATgetArgument(w_4, 0);
                      u_4 = ATgetArgument(w_4, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_6), not_null(u_4)), term_r_6), not_null(v_4)), term_y_6);
                    }
                  else
                    {
                      if(match_cons(w_4, sym_PRE_1))
                        {
                          v_4 = ATgetArgument(w_4, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_7), not_null(v_4)), term_a_7);
                        }
                      else
                        {
                          if(match_cons(w_4, sym_TDTR_1))
                            {
                              v_4 = ATgetArgument(w_4, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_7), not_null(v_4)), term_c_7);
                            }
                          else
                            {
                              if(match_cons(w_4, sym_HREF_2))
                                {
                                  v_4 = ATgetArgument(w_4, 0);
                                  u_4 = ATgetArgument(w_4, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_7), not_null(u_4)), term_f_7), not_null(v_4)), term_e_7);
                                }
                              else
                                {
                                  if(match_cons(w_4, sym_ANCHOR_1))
                                    {
                                      v_4 = ATgetArgument(w_4, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_7), not_null(v_4)), term_h_7);
                                    }
                                  else
                                    {
                                      if(match_cons(w_4, sym_BR_0))
                                        {
                                          t = term_j_7;
                                        }
                                      else
                                        {
                                          if(match_cons(w_4, sym_NBSP_0))
                                            {
                                              t = term_k_7;
                                            }
                                          else
                                            {
                                              if(match_cons(w_4, sym_HR_0))
                                                {
                                                  t = term_l_7;
                                                }
                                              else
                                                {
                                                  if(match_cons(w_4, sym_TDTD_0))
                                                    {
                                                      t = term_m_7;
                                                    }
                                                  else
                                                    {
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
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm k_65 (ATerm))
{
  ATerm k_8 (ATerm t)
  {
    t = _all(t, k_8);
    t = k_65(t);
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
ATerm at_suffix_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm l_8 (ATerm t)
  {
    ATerm n_7 = t;
    int o_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_63(t);
        LocalPopChoice(o_7);
      }
    else
      {
        t = n_7;
        t = Cons_2(t, _id, l_8);
      }
    return(t);
  }
  t = l_8(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm n_8 = NULL;
  ATerm b_1 (ATerm t)
  {
    t = Cons_2(t, x_62, _id);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm o_8 = NULL;
        o_8 = t;
        if(((n_8 != NULL) && (n_8 != o_8)))
          _fail(o_8);
        else
          n_8 = o_8;
        return(t);
      }
      t = Cons_2(t, _id, c_1);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, b_1);
  {
    ATerm d_1 (ATerm t)
    {
      t = not_null(n_8);
      return(t);
    }
    t = split_2(t, _id, d_1);
  }
  return(t);
}
ATerm Distribute_0 (ATerm t)
{
  ATerm b_9 = NULL,c_9 = NULL,d_9 = NULL;
  b_9 = t;
  a_9 :
  if(match_cons(b_9, sym_H_2))
    {
      c_9 = ATgetArgument(b_9, 0);
      d_9 = ATgetArgument(b_9, 1);
      {
        ATerm g_9 = NULL,h_9 = NULL,i_9 = NULL,o_9 = NULL,p_9 = NULL,q_9 = NULL;
        t = not_null(d_9);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL,m_9 = NULL,n_9 = NULL;
            j_9 = t;
            s_8 :
            if(match_cons(j_9, sym_V_2))
              {
                k_9 = ATgetArgument(j_9, 0);
                l_9 = ATgetArgument(j_9, 1);
                t_8 :
                if(((ATgetType(l_9) == AT_LIST) && ((ATermList) l_9 != ATempty)))
                  {
                    m_9 = ATgetFirst((ATermList) l_9);
                    n_9 = (ATerm) ATgetNext((ATermList) l_9);
                    {
                      if(((g_9 != NULL) && (g_9 != k_9)))
                        _fail(k_9);
                      else
                        g_9 = k_9;
                      {
                        if(((h_9 != NULL) && (h_9 != m_9)))
                          _fail(m_9);
                        else
                          h_9 = m_9;
                        if(((i_9 != NULL) && (i_9 != n_9)))
                          _fail(n_9);
                        else
                          i_9 = n_9;
                      }
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = split_fetch_1(t, e_1);
          {
            o_9 = t;
            z_8 :
            if(match_cons(o_9, sym__2))
              {
                p_9 = ATgetArgument(o_9, 0);
                q_9 = ATgetArgument(o_9, 1);
                {
                  ATerm u_9 = NULL,w_9 = NULL;
                  t = not_null(q_9);
                  {
                    ATerm p_7 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm t_9 = NULL;
                        t_9 = t;
                        v_8 :
                        if(((ATermList) t_9 == ATempty))
                          {
                            {
                            }
                          }
                        else
                          {
                            _fail(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = p_7;
                      }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(i_9)), not_null(h_9));
                      {
                        ATerm y_9 = NULL;
                        ATerm f_1 (ATerm t)
                        {
                          ATerm g_1 (ATerm t)
                          {
                            ATerm v_9 = NULL;
                            v_9 = t;
                            if(((u_9 != NULL) && (u_9 != v_9)))
                              _fail(v_9);
                            else
                              u_9 = v_9;
                            return(t);
                          }
                          t = Cons_2(t, g_1, Nil_0);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, not_null(c_9), (ATerm) ATinsert(CheckATermList(not_null(q_9)), not_null(u_9))));
                          return(t);
                        }
                        t = at_last_1(t, f_1);
                        {
                          w_9 = t;
                          {
                            ATerm z_9 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(g_9), not_null(w_9))));
                            {
                              t = conc_0(t);
                              {
                                z_9 = t;
                                if(((y_9 != NULL) && (y_9 != z_9)))
                                  _fail(z_9);
                                else
                                  y_9 = z_9;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_H_2, not_null(c_9), not_null(y_9));
                          }
                        }
                      }
                    }
                  }
                }
              }
            else
              {
                _fail(t);
              }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm normalize_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm i_1 (ATerm t)
    {
      ATerm q_7 = t;
      int r_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
          n_10 = t;
          i_10 :
          if(match_cons(n_10, sym_H_2))
            {
              o_10 = ATgetArgument(n_10, 0);
              p_10 = ATgetArgument(n_10, 1);
              j_10 :
              if(((ATgetType(p_10) == AT_LIST) && ((ATermList) p_10 != ATempty)))
                {
                  q_10 = ATgetFirst((ATermList) p_10);
                  r_10 = (ATerm) ATgetNext((ATermList) p_10);
                  k_10 :
                  if(((ATermList) r_10 == ATempty))
                    {
                      t = not_null(q_10);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          else
            {
              if(match_cons(n_10, sym_V_2))
                {
                  o_10 = ATgetArgument(n_10, 0);
                  p_10 = ATgetArgument(n_10, 1);
                  l_10 :
                  if(((ATgetType(p_10) == AT_LIST) && ((ATermList) p_10 != ATempty)))
                    {
                      q_10 = ATgetFirst((ATermList) p_10);
                      r_10 = (ATerm) ATgetNext((ATermList) p_10);
                      m_10 :
                      if(((ATermList) r_10 == ATempty))
                        {
                          t = not_null(q_10);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
          LocalPopChoice(r_7);
        }
      else
        {
          t = q_7;
          t = Distribute_0(t);
        }
      return(t);
    }
    t = try_1(t, i_1);
    return(t);
  }
  t = topdown_1(t, h_1);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm z_10 = NULL;
  t = normalize_0(t);
  {
    ATerm j_1 (ATerm t)
    {
      t = try_1(t, Abox_2_html_0);
      return(t);
    }
    t = topdown_1(t, j_1);
    {
      z_10 = t;
      {
        t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(z_10))))));
        t = html2text_0(t);
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm f_37 (ATerm), ATerm g_37 (ATerm))
{
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
  g_11 = t;
  f_11 :
  if(match_cons(g_11, sym__2))
    {
      h_11 = ATgetArgument(g_11, 0);
      i_11 = ATgetArgument(g_11, 1);
      {
        ATerm l_11 = NULL;
        t = not_null(h_11);
        {
          ATerm n_11 = NULL;
          t = f_37(t);
          {
            l_11 = t;
            {
              t = not_null(i_11);
              {
                t = g_37(t);
                {
                  n_11 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_11), not_null(n_11));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm t_11 = NULL;
  t_11 = t;
  t = SSL_ReadFromFile(not_null(t_11));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_11 = NULL;
  ATerm s_7;
  s_7 = t;
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_1 (ATerm t)
        {
          ATerm a_12 = NULL,b_12 = NULL;
          a_12 = t;
          x_11 :
          if(match_cons(a_12, sym_Input_1))
            {
              b_12 = ATgetArgument(a_12, 0);
              if(((z_11 != NULL) && (z_11 != b_12)))
                _fail(b_12);
              else
                z_11 = b_12;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, k_1);
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
        {
          ATerm c_12 = NULL;
          t = term_v_7;
          {
            c_12 = t;
            if(((z_11 != NULL) && (z_11 != c_12)))
              _fail(c_12);
            else
              z_11 = c_12;
          }
        }
      }
  }
  t = s_7;
  {
    ATerm l_1 (ATerm t)
    {
      t = not_null(z_11);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_1);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_53 (ATerm))
{
  ATerm w_7;
  w_7 = t;
  {
    ATerm h_12 = NULL,j_12 = NULL;
    ATerm x_7;
    x_7 = t;
    {
      ATerm i_12 = NULL;
      t = x_53(t);
      {
        i_12 = t;
        if(((h_12 != NULL) && (h_12 != i_12)))
          _fail(i_12);
        else
          h_12 = i_12;
      }
    }
    t = x_7;
    {
      ATerm k_12 = NULL;
      k_12 = t;
      if(((j_12 != NULL) && (j_12 != k_12)))
        _fail(k_12);
      else
        j_12 = k_12;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_12)), not_null(h_12)));
        t = printnl_0(t);
      }
    }
  }
  t = w_7;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm y_7;
  y_7 = t;
  {
    t = e_54(t);
    {
      ATerm m_1 (ATerm t)
      {
        t = term_z_7;
        return(t);
      }
      t = debug_1(t, m_1);
    }
  }
  t = y_7;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL;
  ATerm a_8 = t;
  int b_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
      t_12 = t;
      o_12 :
      if(match_cons(t_12, sym__2))
        {
          u_12 = ATgetArgument(t_12, 0);
          v_12 = ATgetArgument(t_12, 1);
          {
            if(((s_12 != NULL) && (s_12 != u_12)))
              _fail(u_12);
            else
              s_12 = u_12;
            {
              if(((r_12 != NULL) && (r_12 != v_12)))
                _fail(v_12);
              else
                r_12 = v_12;
              t = SSL_open_file(not_null(s_12), not_null(r_12));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_8);
    }
  else
    {
      t = a_8;
      {
        ATerm w_12 = NULL;
        ATerm x_12 = NULL;
        ATerm n_1 (ATerm t)
        {
          t = term_c_8;
          return(t);
        }
        t = obsolete_1(t, n_1);
        {
          w_12 = t;
          {
            if(((s_12 != NULL) && (s_12 != w_12)))
              _fail(w_12);
            else
              s_12 = w_12;
            {
              ATerm d_8;
              d_8 = t;
              {
                ATerm y_12 = NULL;
                t = term_e_8;
                {
                  y_12 = t;
                  if(((x_12 != NULL) && (x_12 != y_12)))
                    _fail(y_12);
                  else
                    x_12 = y_12;
                }
              }
              t = d_8;
              t = SSL_open_file(not_null(s_12), not_null(x_12));
            }
          }
        }
      }
    }
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_52 (ATerm))
{
  t = fetch_1(t, g_52);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm e_13 = NULL;
  ATerm f_8;
  f_8 = t;
  {
    ATerm o_1 (ATerm t)
    {
      ATerm f_13 = NULL,g_13 = NULL;
      f_13 = t;
      d_13 :
      if(match_cons(f_13, sym_Program_1))
        {
          g_13 = ATgetArgument(f_13, 0);
          if(((e_13 != NULL) && (e_13 != g_13)))
            _fail(g_13);
          else
            e_13 = g_13;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, o_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_8), not_null(e_13)), term_g_8));
      {
        t = printnl_0(t);
        {
          t = term_l_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = f_8;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_13 = NULL;
  j_13 = t;
  i_13 :
  if(!(match_cons(j_13, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm i_8 = t;
    int j_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(j_8);
      }
    else
      {
        t = i_8;
        {
          ATerm m_8 = t;
          int p_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(p_8);
            }
          else
            {
              t = m_8;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_1);
  t = b_53(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,z_13 = NULL;
  p_13 = t;
  n_13 :
  if(match_string(p_13, "register-usage-info"))
    {
      t = register_usage_1(t, v_0);
    }
  else
    {
      if(((ATgetType(p_13) == AT_LIST) && ((ATermList) p_13 != ATempty)))
        {
          q_13 = ATgetFirst((ATermList) p_13);
          r_13 = (ATerm) ATgetNext((ATermList) p_13);
          o_13 :
          if(((ATgetType(r_13) == AT_LIST) && ((ATermList) r_13 != ATempty)))
            {
              s_13 = ATgetFirst((ATermList) r_13);
              z_13 = (ATerm) ATgetNext((ATermList) r_13);
              {
                ATerm d_14 = NULL;
                ATerm q_8;
                q_8 = t;
                {
                  t = not_null(q_13);
                  t = t_0(t);
                }
                t = q_8;
                {
                  ATerm e_14 = NULL;
                  t = not_null(s_13);
                  {
                    t = u_0(t);
                    {
                      e_14 = t;
                      if(((d_14 != NULL) && (d_14 != e_14)))
                        _fail(e_14);
                      else
                        d_14 = e_14;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_13)), not_null(d_14));
                }
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_8 = t;
  int u_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm w_14 = NULL;
        w_14 = t;
        i_14 :
        if(!(match_string(w_14, "-S")))
          {
            if(!(match_string(w_14, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_1 (ATerm t)
      {
        t = term_w_8;
        return(t);
      }
      ATerm s_1 (ATerm t)
      {
        t = term_x_8;
        return(t);
      }
      t = Option_3(t, q_1, r_1, s_1);
      LocalPopChoice(u_8);
    }
  else
    {
      t = r_8;
      {
        ATerm y_8 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_1 (ATerm t)
            {
              ATerm x_14 = NULL;
              x_14 = t;
              j_14 :
              if(!(match_string(x_14, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm u_1 (ATerm t)
            {
              t = term_f_9;
              return(t);
            }
            ATerm v_1 (ATerm t)
            {
              t = term_r_9;
              return(t);
            }
            t = Option_3(t, t_1, u_1, v_1);
            LocalPopChoice(e_9);
          }
        else
          {
            t = y_8;
            {
              ATerm s_9 = t;
              int x_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm y_14 = NULL;
                    y_14 = t;
                    k_14 :
                    if(!(match_string(y_14, "-v")))
                      {
                        if(!(match_string(y_14, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = term_a_10;
                    return(t);
                  }
                  ATerm y_1 (ATerm t)
                  {
                    t = term_b_10;
                    return(t);
                  }
                  t = Option_3(t, w_1, x_1, y_1);
                  LocalPopChoice(x_9);
                }
              else
                {
                  t = s_9;
                  {
                    ATerm c_10 = t;
                    int d_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          ATerm z_14 = NULL;
                          z_14 = t;
                          l_14 :
                          if(!(match_string(z_14, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm a_2 (ATerm t)
                        {
                          ATerm a_15 = NULL;
                          ATerm b_15 = NULL;
                          b_15 = t;
                          if(((a_15 != NULL) && (a_15 != b_15)))
                            _fail(b_15);
                          else
                            a_15 = b_15;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_15));
                          return(t);
                        }
                        ATerm b_2 (ATerm t)
                        {
                          t = term_e_10;
                          return(t);
                        }
                        t = ArgOption_3(t, z_1, a_2, b_2);
                        LocalPopChoice(d_10);
                      }
                    else
                      {
                        t = c_10;
                        {
                          ATerm f_10 = t;
                          int g_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_2 (ATerm t)
                              {
                                ATerm c_15 = NULL;
                                c_15 = t;
                                q_14 :
                                if(!(match_string(c_15, "-i")))
                                  {
                                    if(!(match_string(c_15, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm d_2 (ATerm t)
                              {
                                ATerm d_15 = NULL;
                                ATerm e_15 = NULL;
                                e_15 = t;
                                if(((d_15 != NULL) && (d_15 != e_15)))
                                  _fail(e_15);
                                else
                                  d_15 = e_15;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_15));
                                return(t);
                              }
                              ATerm e_2 (ATerm t)
                              {
                                t = term_h_10;
                                return(t);
                              }
                              t = ArgOption_3(t, c_2, d_2, e_2);
                              LocalPopChoice(g_10);
                            }
                          else
                            {
                              t = f_10;
                              {
                                ATerm s_10 = t;
                                int t_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_2 (ATerm t)
                                    {
                                      ATerm f_15 = NULL;
                                      f_15 = t;
                                      s_14 :
                                      if(!(match_string(f_15, "-o")))
                                        {
                                          if(!(match_string(f_15, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm g_2 (ATerm t)
                                    {
                                      ATerm g_15 = NULL;
                                      ATerm i_15 = NULL;
                                      i_15 = t;
                                      if(((g_15 != NULL) && (g_15 != i_15)))
                                        _fail(i_15);
                                      else
                                        g_15 = i_15;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_15));
                                      return(t);
                                    }
                                    ATerm h_2 (ATerm t)
                                    {
                                      t = term_u_10;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, f_2, g_2, h_2);
                                    LocalPopChoice(t_10);
                                  }
                                else
                                  {
                                    t = s_10;
                                    {
                                      ATerm v_10 = t;
                                      int w_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm i_2 (ATerm t)
                                          {
                                            ATerm j_15 = NULL;
                                            j_15 = t;
                                            u_14 :
                                            if(!(match_string(j_15, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm j_2 (ATerm t)
                                          {
                                            t = term_x_10;
                                            return(t);
                                          }
                                          ATerm k_2 (ATerm t)
                                          {
                                            t = term_y_10;
                                            return(t);
                                          }
                                          t = Option_3(t, i_2, j_2, k_2);
                                          LocalPopChoice(w_10);
                                        }
                                      else
                                        {
                                          t = v_10;
                                          {
                                            ATerm l_2 (ATerm t)
                                            {
                                              ATerm k_15 = NULL;
                                              k_15 = t;
                                              v_14 :
                                              if(!(match_string(k_15, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm m_2 (ATerm t)
                                            {
                                              t = term_a_11;
                                              return(t);
                                            }
                                            ATerm n_2 (ATerm t)
                                            {
                                              t = term_b_11;
                                              return(t);
                                            }
                                            t = Option_3(t, l_2, m_2, n_2);
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
  ATerm p_15 = NULL;
  p_15 = t;
  t = SSL_table_destroy(not_null(p_15));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_15 = NULL;
  t_15 = t;
  t = SSL_exit(not_null(t_15));
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
ATerm long_description_1 (ATerm t, ATerm i_51 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_51 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_42 (ATerm))
{
  ATerm z_15 = NULL,j_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_Program_1))
    {
      j_16 = ATgetArgument(z_15, 0);
      {
        ATerm l_16 = NULL;
        t = not_null(j_16);
        {
          t = k_42(t);
          {
            l_16 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(l_16));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm w_16 = NULL;
  ATerm o_2 (ATerm t)
  {
    ATerm p_2 (ATerm t)
    {
      ATerm x_16 = NULL;
      x_16 = t;
      if(((w_16 != NULL) && (w_16 != x_16)))
        _fail(x_16);
      else
        w_16 = x_16;
      return(t);
    }
    t = Program_1(t, p_2);
    return(t);
  }
  t = option_defined_1(t, o_2);
  {
    ATerm q_2 (ATerm t)
    {
      ATerm a_17 = NULL;
      ATerm b_17 = NULL;
      t = term_c_11;
      {
        ATerm r_2 (ATerm t)
        {
          t = not_null(w_16);
          return(t);
        }
        t = short_description_1(t, r_2);
        {
          t = concat_strings_0(t);
          {
            b_17 = t;
            if(((a_17 != NULL) && (a_17 != b_17)))
              _fail(b_17);
            else
              a_17 = b_17;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATempty, not_null(a_17)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, q_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATempty, term_d_11));
      {
        t = printnl_0(t);
        {
          t = term_k_11;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_2 (ATerm t)
                {
                  ATerm c_17 = NULL;
                  c_17 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_17)), term_m_11));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_2);
                {
                  ATerm t_2 (ATerm t)
                  {
                    ATerm e_17 = NULL;
                    ATerm f_17 = NULL;
                    t = term_c_11;
                    {
                      ATerm u_2 (ATerm t)
                      {
                        t = not_null(w_16);
                        return(t);
                      }
                      t = long_description_1(t, u_2);
                      {
                        t = concat_strings_0(t);
                        {
                          f_17 = t;
                          if(((e_17 != NULL) && (e_17 != f_17)))
                            _fail(f_17);
                          else
                            e_17 = f_17;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_17)), term_o_11));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, t_2);
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
  ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
  m_17 = t;
  l_17 :
  if(match_cons(m_17, sym__2))
    {
      n_17 = ATgetArgument(m_17, 0);
      o_17 = ATgetArgument(m_17, 1);
      {
        ATerm p_11;
        p_11 = t;
        t = SSL_printnl(not_null(n_17), not_null(o_17));
        t = p_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_42 (ATerm))
{
  ATerm v_17 = NULL,w_17 = NULL;
  v_17 = t;
  u_17 :
  if(match_cons(v_17, sym_Undefined_1))
    {
      w_17 = ATgetArgument(v_17, 0);
      {
        ATerm a_18 = NULL;
        t = not_null(w_17);
        {
          t = l_42(t);
          {
            a_18 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_18));
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_18 = NULL;
  k_18 = t;
  i_18 :
  if(!(match_cons(k_18, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_18 = NULL,o_18 = NULL,p_18 = NULL;
  n_18 = t;
  m_18 :
  if(match_cons(n_18, sym__2))
    {
      o_18 = ATgetArgument(n_18, 0);
      p_18 = ATgetArgument(n_18, 1);
      t = SSL_table_get(not_null(o_18), not_null(p_18));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL;
  w_18 = t;
  v_18 :
  if(match_cons(w_18, sym__3))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      z_18 = ATgetArgument(w_18, 2);
      {
        ATerm q_11;
        q_11 = t;
        {
          ATerm d_19 = NULL;
          ATerm e_19 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(y_18));
          {
            ATerm r_11 = t;
            int s_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(s_11);
              }
            else
              {
                t = r_11;
                t = (ATerm) ATempty;
              }
            {
              e_19 = t;
              if(((d_19 != NULL) && (d_19 != e_19)))
                _fail(e_19);
              else
                d_19 = e_19;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_18), not_null(y_18), (ATerm) ATinsert(CheckATermList(not_null(d_19)), not_null(z_18)));
            t = table_put_0(t);
          }
        }
        t = q_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_51 (ATerm))
{
  ATerm k_19 = NULL;
  ATerm l_19 = NULL;
  t = term_c_11;
  {
    t = m_51(t);
    {
      l_19 = t;
      if(((k_19 != NULL) && (k_19 != l_19)))
        _fail(l_19);
      else
        k_19 = l_19;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_e_11, term_j_11, not_null(k_19));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm r_19 = NULL,s_19 = NULL,t_19 = NULL;
  r_19 = t;
  q_19 :
  if(match_string(r_19, "register-usage-info"))
    {
      t = register_usage_1(t, s_0);
    }
  else
    {
      if(((ATgetType(r_19) == AT_LIST) && ((ATermList) r_19 != ATempty)))
        {
          s_19 = ATgetFirst((ATermList) r_19);
          t_19 = (ATerm) ATgetNext((ATermList) r_19);
          {
            ATerm w_19 = NULL;
            ATerm u_11;
            u_11 = t;
            {
              t = not_null(s_19);
              t = q_0(t);
            }
            t = u_11;
            {
              ATerm x_19 = NULL;
              t = term_c_11;
              {
                t = r_0(t);
                {
                  x_19 = t;
                  if(((w_19 != NULL) && (w_19 != x_19)))
                    _fail(x_19);
                  else
                    w_19 = x_19;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(t_19)), not_null(w_19));
            }
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm e_20 = NULL;
    e_20 = t;
    d_20 :
    if(!(match_string(e_20, "--help")))
      {
        if(!(match_string(e_20, "-h")))
          {
            if(!(match_string(e_20, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_v_11;
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_w_11;
    return(t);
  }
  t = Option_3(t, v_2, w_2, y_2);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  h_20 :
  if(((ATgetType(j_20) == AT_LIST) && ((ATermList) j_20 != ATempty)))
    {
      k_20 = ATgetFirst((ATermList) j_20);
      l_20 = (ATerm) ATgetNext((ATermList) j_20);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_20)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_20)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm y_11;
  y_11 = t;
  {
    ATerm a_3 (ATerm t)
    {
      t = term_d_12;
      t = k_51(t);
      return(t);
    }
    t = try_1(t, a_3);
  }
  t = y_11;
  {
    ATerm j_3 (ATerm t)
    {
      ATerm q_20 = NULL;
      q_20 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_20));
      return(t);
    }
    ATerm k_3 (ATerm t)
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(l_12);
            }
          else
            {
              t = g_12;
              {
                t = k_51(t);
                t = Cons_2(t, _id, k_3);
              }
            }
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_3, k_3);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_20 = NULL,x_20 = NULL,y_20 = NULL;
  ATerm m_12;
  m_12 = t;
  {
    ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL,c_21 = NULL;
    z_20 = t;
    v_20 :
    if(match_cons(z_20, sym__3))
      {
        a_21 = ATgetArgument(z_20, 0);
        b_21 = ATgetArgument(z_20, 1);
        c_21 = ATgetArgument(z_20, 2);
        {
          if(((w_20 != NULL) && (w_20 != a_21)))
            _fail(a_21);
          else
            w_20 = a_21;
          {
            if(((x_20 != NULL) && (x_20 != b_21)))
              _fail(b_21);
            else
              x_20 = b_21;
            {
              if(((y_20 != NULL) && (y_20 != c_21)))
                _fail(c_21);
              else
                y_20 = c_21;
              t = SSL_table_put(not_null(w_20), not_null(x_20), not_null(y_20));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_12;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_51 (ATerm))
{
  ATerm f_21 = NULL;
  ATerm n_12;
  n_12 = t;
  {
    t = term_p_12;
    t = table_put_0(t);
  }
  t = n_12;
  {
    ATerm l_3 (ATerm t)
    {
      ATerm q_12 = t;
      int z_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_51(t);
          LocalPopChoice(z_12);
        }
      else
        {
          t = q_12;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, l_3);
    {
      ATerm q_3 (ATerm t)
      {
        ATerm a_13 = t;
        int b_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_l_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(b_13);
          }
        else
          {
            t = a_13;
            {
              ATerm r_3 (ATerm t)
              {
                ATerm s_3 (ATerm t)
                {
                  ATerm g_21 = NULL;
                  g_21 = t;
                  if(((f_21 != NULL) && (f_21 != g_21)))
                    _fail(g_21);
                  else
                    f_21 = g_21;
                  return(t);
                }
                t = Undefined_1(t, s_3);
                return(t);
              }
              t = option_defined_1(t, r_3);
              {
                ATerm c_13;
                c_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_21)), term_h_13));
                  t = printnl_0(t);
                }
                t = c_13;
                {
                  t = system_usage_0(t);
                  {
                    t = term_h_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, q_3);
      {
        ATerm k_13;
        k_13 = t;
        {
          t = term_e_11;
          t = table_destroy_0(t);
        }
        t = k_13;
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
  n_21 = t;
  j_21 :
  if(match_cons(n_21, sym__2))
    {
      o_21 = ATgetArgument(n_21, 0);
      p_21 = ATgetArgument(n_21, 1);
      {
        t = not_null(o_21);
        {
          ATerm t_3 (ATerm t)
          {
            t = not_null(p_21);
            return(t);
          }
          t = at_end_1(t, t_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
  u_21 = t;
  t_21 :
  if(((ATermList) u_21 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_21) == AT_LIST) && ((ATermList) u_21 != ATempty)))
        {
          v_21 = ATgetFirst((ATermList) u_21);
          w_21 = (ATerm) ATgetNext((ATermList) u_21);
          {
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm b_22 = NULL,c_22 = NULL;
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_22 = NULL,e_22 = NULL,f_22 = NULL;
            ATerm i_22 (ATerm t)
            {
              if(((b_22 != NULL) && (b_22 != e_22)))
                _fail(e_22);
              else
                b_22 = e_22;
              {
                if(((c_22 != NULL) && (c_22 != f_22)))
                  _fail(f_22);
                else
                  c_22 = f_22;
                {
                  t = not_null(b_22);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_22), not_null(c_22));
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
            d_22 = t;
            z_21 :
            if(((ATgetType(d_22) == AT_LIST) && ((ATermList) d_22 != ATempty)))
              {
                e_22 = ATgetFirst((ATermList) d_22);
                f_22 = (ATerm) ATgetNext((ATermList) d_22);
                a_22 :
                if(((ATermList) e_22 == ATempty))
                  {
                    {
                      ATerm v_13 = t;
                      int w_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((c_22 != NULL) && (c_22 != f_22)))
                            _fail(f_22);
                          else
                            c_22 = f_22;
                          {
                            ATerm u_3 (ATerm t)
                            {
                              t = not_null(c_22);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, u_3);
                          }
                          LocalPopChoice(w_13);
                        }
                      else
                        {
                          t = v_13;
                          t = i_22(t);
                        }
                    }
                  }
                else
                  {
                    t = i_22(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm j_22 (ATerm t)
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_67(t);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        t = _one(t, j_22);
      }
    return(t);
  }
  t = j_22(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm q_22 = NULL,t_22 = NULL;
  ATerm z_3 (ATerm t)
  {
    ATerm r_22 = NULL;
    r_22 = t;
    k_22 :
    if(!(match_int(r_22, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm s_22 = NULL;
    s_22 = t;
    if(((q_22 != NULL) && (q_22 != s_22)))
      _fail(s_22);
    else
      q_22 = s_22;
    return(t);
  }
  t = Cons_2(t, z_3, a_4);
  {
    ATerm y_22 = NULL;
    t = not_null(q_22);
    {
      ATerm b_4 (ATerm t)
      {
        ATerm u_22 = NULL,v_22 = NULL,w_22 = NULL;
        u_22 = t;
        n_22 :
        if(((ATgetType(u_22) == AT_LIST) && ((ATermList) u_22 != ATempty)))
          {
            v_22 = ATgetFirst((ATermList) u_22);
            w_22 = (ATerm) ATgetNext((ATermList) u_22);
            o_22 :
            if(match_int(v_22, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_22)), term_a_14), term_a_14);
              }
            else
              {
                _fail(t);
              }
          }
        else
          {
            _fail(t);
          }
        return(t);
      }
      t = oncetd_1(t, b_4);
      {
        y_22 = t;
        if(((t_22 != NULL) && (t_22 != y_22)))
          _fail(y_22);
        else
          t_22 = y_22;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_22)), term_b_14), term_b_14);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm o_63 (ATerm))
{
  ATerm c_23 (ATerm t)
  {
    t = o_63(t);
    {
      ATerm c_14 = t;
      int f_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(f_14);
        }
      else
        {
          t = c_14;
          t = Cons_2(t, _id, c_23);
        }
    }
    return(t);
  }
  t = c_23(t);
  return(t);
}
ATerm html_string_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm d_4 (ATerm t)
    {
      t = try_1(t, replace_quotes_0);
      return(t);
    }
    t = listtd_1(t, d_4);
    {
      ATerm e_4 (ATerm t)
      {
        ATerm g_4 (ATerm t)
        {
          ATerm i_23 = NULL;
          i_23 = t;
          h_23 :
          if(match_int(i_23, 32))
            {
              t = term_k_7;
              t = explode_string_0(t);
            }
          else
            {
              if(match_int(i_23, 38))
                {
                  t = term_g_14;
                  t = explode_string_0(t);
                }
              else
                {
                  if(match_int(i_23, 60))
                    {
                      t = term_h_14;
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(i_23, 62))
                        {
                          t = term_m_14;
                          t = explode_string_0(t);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
            }
          return(t);
        }
        t = try_1(t, g_4);
        return(t);
      }
      t = map_1(t, e_4);
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
  ATerm p_23 = NULL,q_23 = NULL,r_23 = NULL;
  p_23 = t;
  o_23 :
  if(((ATgetType(p_23) == AT_LIST) && ((ATermList) p_23 != ATempty)))
    {
      q_23 = ATgetFirst((ATermList) p_23);
      r_23 = (ATerm) ATgetNext((ATermList) p_23);
      t = not_null(r_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm x_47 (ATerm))
{
  ATerm v_23 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_47, _id);
        {
          t = Tl_0(t);
          t = v_23(t);
        }
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
        }
      }
    return(t);
  }
  t = v_23(t);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_23 = NULL;
  x_23 = t;
  t = SSL_implode_string(not_null(x_23));
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  t = SSL_explode_string(not_null(b_24));
  return(t);
}
ATerm make_html_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = reverse_0(t);
    {
      ATerm h_4 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, h_4);
      {
        ATerm s_25 (ATerm t)
        {
          ATerm s_24 = NULL,t_24 = NULL,u_24 = NULL,v_24 = NULL,w_24 = NULL;
          ATerm v_25 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), (ATerm) ATinsert(CheckATermList(not_null(w_24)), not_null(u_24)));
            t = s_25(t);
            return(t);
          }
          s_24 = t;
          m_24 :
          if(match_cons(s_24, sym__2))
            {
              t_24 = ATgetArgument(s_24, 0);
              w_24 = ATgetArgument(s_24, 1);
              n_24 :
              if(((ATermList) t_24 == ATempty))
                {
                  {
                    ATerm a_25 = NULL;
                    ATerm c_25 = NULL;
                    t = not_null(w_24);
                    {
                      ATerm i_4 (ATerm t)
                      {
                        ATerm b_25 = NULL;
                        b_25 = t;
                        h_24 :
                        if(!(match_int(b_25, 9)))
                          {
                            if(!(match_int(b_25, 32)))
                              {
                                _fail(t);
                              }
                          }
                        return(t);
                      }
                      t = remove_trailing_1(t, i_4);
                      {
                        t = implode_string_0(t);
                        {
                          c_25 = t;
                          if(((a_25 != NULL) && (a_25 != c_25)))
                            _fail(c_25);
                          else
                            a_25 = c_25;
                        }
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(a_25));
                  }
                }
              else
                {
                  if(((ATgetType(t_24) == AT_LIST) && ((ATermList) t_24 != ATempty)))
                    {
                      u_24 = ATgetFirst((ATermList) t_24);
                      v_24 = (ATerm) ATgetNext((ATermList) t_24);
                      o_24 :
                      if(match_int(u_24, 10))
                        {
                          ATerm p_14 = t;
                          int r_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm g_25 = NULL,j_25 = NULL;
                              ATerm t_14;
                              t_14 = t;
                              {
                                ATerm i_25 = NULL;
                                t = not_null(w_24);
                                {
                                  ATerm j_4 (ATerm t)
                                  {
                                    ATerm h_25 = NULL;
                                    h_25 = t;
                                    j_24 :
                                    if(!(match_int(h_25, 9)))
                                      {
                                        if(!(match_int(h_25, 32)))
                                          {
                                            _fail(t);
                                          }
                                      }
                                    return(t);
                                  }
                                  t = remove_trailing_1(t, j_4);
                                  {
                                    t = implode_string_0(t);
                                    {
                                      i_25 = t;
                                      if(((g_25 != NULL) && (g_25 != i_25)))
                                        _fail(i_25);
                                      else
                                        g_25 = i_25;
                                    }
                                  }
                                }
                              }
                              t = t_14;
                              {
                                ATerm k_25 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_24), (ATerm) ATempty);
                                {
                                  t = s_25(t);
                                  {
                                    k_25 = t;
                                    if(((j_25 != NULL) && (j_25 != k_25)))
                                      _fail(k_25);
                                    else
                                      j_25 = k_25;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(j_25)), not_null(g_25));
                              }
                              LocalPopChoice(r_14);
                            }
                          else
                            {
                              t = p_14;
                              t = v_25(t);
                            }
                        }
                      else
                        {
                          t = v_25(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = s_25(t);
        {
          ATerm k_4 (ATerm t)
          {
            ATerm o_25 = NULL;
            o_25 = t;
            p_24 :
            if(!(match_string(o_25, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, k_4);
          {
            t = reverse_0(t);
            {
              ATerm l_4 (ATerm t)
              {
                ATerm p_25 = NULL;
                p_25 = t;
                q_24 :
                if(!(match_string(p_25, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, l_4);
              {
                ATerm m_4 (ATerm t)
                {
                  ATerm q_25 = NULL;
                  q_25 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_15), not_null(q_25));
                  return(t);
                }
                t = map_1(t, m_4);
              }
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm a_26 (ATerm t)
  {
    ATerm l_15 = t;
    int m_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(m_15);
      }
    else
      {
        t = l_15;
        t = Cons_2(t, m_62, a_26);
      }
    return(t);
  }
  t = a_26(t);
  return(t);
}
ATerm MATH_0 (ATerm t)
{
  ATerm c_26 = NULL;
  c_26 = t;
  b_26 :
  if(!(match_cons(c_26, sym_MATH_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm e_26 = NULL;
  e_26 = t;
  d_26 :
  if(!(match_cons(e_26, sym_NUM_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm g_26 = NULL;
  g_26 = t;
  f_26 :
  if(!(match_cons(g_26, sym_VAR_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm i_26 = NULL;
  i_26 = t;
  h_26 :
  if(!(match_cons(i_26, sym_KW_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm j_26 (ATerm t)
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_26);
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
          t = Nil_0(t);
          t = a_63(t);
        }
      }
    return(t);
  }
  t = j_26(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      {
        ATerm t_26 = NULL,u_26 = NULL,v_26 = NULL;
        t_26 = t;
        l_26 :
        if(((ATgetType(t_26) == AT_LIST) && ((ATermList) t_26 != ATempty)))
          {
            u_26 = ATgetFirst((ATermList) t_26);
            v_26 = (ATerm) ATgetNext((ATermList) t_26);
            {
              t = not_null(u_26);
              {
                ATerm n_4 (ATerm t)
                {
                  t = not_null(v_26);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, n_4);
              }
            }
          }
        else
          {
            _fail(t);
          }
      }
    }
  return(t);
}
ATerm sep_by_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm b_27 = NULL;
    b_27 = t;
    t = (ATerm) ATinsert(ATempty, not_null(b_27));
    return(t);
  }
  t = map_1(t, o_4);
  {
    t = separate_by_1(t, h_70);
    t = concat_0(t);
  }
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm f_27 = NULL;
  f_27 = t;
  e_27 :
  if(((ATermList) f_27 == ATempty))
    {
      {
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm m_56 (ATerm))
{
  ATerm s_15 = t;
  int u_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_15);
    }
  else
    {
      t = s_15;
      {
        ATerm v_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_4 (ATerm t)
            {
              t = filter_1(t, m_56);
              return(t);
            }
            t = Cons_2(t, m_56, p_4);
            LocalPopChoice(w_15);
          }
        else
          {
            t = v_15;
            {
              ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
              i_27 = t;
              h_27 :
              if(((ATgetType(i_27) == AT_LIST) && ((ATermList) i_27 != ATempty)))
                {
                  j_27 = ATgetFirst((ATermList) i_27);
                  k_27 = (ATerm) ATgetNext((ATermList) i_27);
                  {
                    t = not_null(k_27);
                    t = filter_1(t, m_56);
                  }
                }
              else
                {
                  _fail(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm HS_0 (ATerm t)
{
  ATerm o_27 = NULL;
  o_27 = t;
  n_27 :
  if(!(match_cons(o_27, sym_HS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm t_27 = NULL,v_27 = NULL;
  ATerm a_28 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_27), term_x_15);
    t = copy_0(t);
    return(t);
  }
  ATerm a_16 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_4 (ATerm t)
      {
        ATerm r_4 (ATerm t)
        {
          ATerm u_27 = NULL;
          u_27 = t;
          if(((t_27 != NULL) && (t_27 != u_27)))
            _fail(u_27);
          else
            t_27 = u_27;
          return(t);
        }
        t = SOpt_2(t, HS_0, r_4);
        return(t);
      }
      t = fetch_1(t, q_4);
      {
        t = not_null(t_27);
        t = string_to_int_0(t);
      }
      LocalPopChoice(b_16);
    }
  else
    {
      t = a_16;
      t = term_h_6;
    }
  {
    v_27 = t;
    s_27 :
    if(match_int(v_27, 0))
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATempty;
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            t = a_28(t);
          }
      }
    else
      {
        t = a_28(t);
      }
  }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm e_28 = NULL,f_28 = NULL,g_28 = NULL;
  e_28 = t;
  d_28 :
  if(((ATgetType(e_28) == AT_LIST) && ((ATermList) e_28 != ATempty)))
    {
      f_28 = ATgetFirst((ATermList) e_28);
      g_28 = (ATerm) ATgetNext((ATermList) e_28);
      {
        ATerm j_28 = NULL;
        ATerm k_28 = NULL;
        t = term_c_11;
        {
          t = c_64(t);
          {
            k_28 = t;
            if(((j_28 != NULL) && (j_28 != k_28)))
              _fail(k_28);
            else
              j_28 = k_28;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_28)), not_null(f_28)), not_null(j_28));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm e_16 = t;
  int f_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_16);
    }
  else
    {
      t = e_16;
      {
        ATerm s_4 (ATerm t)
        {
          ATerm g_16 = t;
          int h_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_16);
            }
          else
            {
              t = g_16;
              {
                t = Cons_2(t, _id, s_4);
                t = Sep_1(t, d_64);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, s_4);
      }
    }
  return(t);
}
ATerm LNAT_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm v_28 = NULL,w_28 = NULL,x_28 = NULL;
  v_28 = t;
  u_28 :
  if(match_cons(v_28, sym_LNAT_2))
    {
      w_28 = ATgetArgument(v_28, 0);
      x_28 = ATgetArgument(v_28, 1);
      {
        ATerm i_16 = t;
        int k_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_29 = NULL;
            t = not_null(w_28);
            {
              ATerm c_29 = NULL;
              t = o_0(t);
              {
                a_29 = t;
                {
                  t = not_null(x_28);
                  {
                    t = p_0(t);
                    {
                      c_29 = t;
                      t = (ATerm) ATmakeAppl(sym_LNAT_2, not_null(a_29), not_null(c_29));
                    }
                  }
                }
              }
            }
            LocalPopChoice(k_16);
          }
        else
          {
            t = i_16;
            {
              ATerm g_29 = NULL;
              t = not_null(w_28);
              {
                ATerm i_29 = NULL;
                t = o_0(t);
                {
                  g_29 = t;
                  {
                    t = not_null(x_28);
                    {
                      t = p_0(t);
                      {
                        i_29 = t;
                        t = (ATerm) ATmakeAppl(sym_LNAT_2, not_null(g_29), not_null(i_29));
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
      _fail(t);
    }
  return(t);
}
ATerm L_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  w_29 :
  if(match_cons(x_29, sym_L_2))
    {
      y_29 = ATgetArgument(x_29, 0);
      z_29 = ATgetArgument(x_29, 1);
      {
        ATerm m_16 = t;
        int n_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_30 = NULL;
            t = not_null(y_29);
            {
              ATerm e_30 = NULL;
              t = m_0(t);
              {
                c_30 = t;
                {
                  t = not_null(z_29);
                  {
                    t = n_0(t);
                    {
                      e_30 = t;
                      t = (ATerm) ATmakeAppl(sym_L_2, not_null(c_30), not_null(e_30));
                    }
                  }
                }
              }
            }
            LocalPopChoice(n_16);
          }
        else
          {
            t = m_16;
            {
              ATerm i_30 = NULL;
              t = not_null(y_29);
              {
                ATerm k_30 = NULL;
                t = m_0(t);
                {
                  i_30 = t;
                  {
                    t = not_null(z_29);
                    {
                      t = n_0(t);
                      {
                        k_30 = t;
                        t = (ATerm) ATmakeAppl(sym_L_2, not_null(i_30), not_null(k_30));
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
      _fail(t);
    }
  return(t);
}
ATerm tov_1 (ATerm t, ATerm g_70 (ATerm))
{
  ATerm v_30 = NULL,z_30 = NULL;
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2(t, _id, _id);
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm q_16 = t;
        int r_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2(t, _id, _id);
            LocalPopChoice(r_16);
          }
        else
          {
            t = q_16;
            {
              ATerm w_30 = NULL;
              ATerm x_30 = NULL;
              w_30 = t;
              {
                if(((v_30 != NULL) && (v_30 != w_30)))
                  _fail(w_30);
                else
                  v_30 = w_30;
                {
                  ATerm y_30 = NULL;
                  t = term_c_11;
                  {
                    t = g_70(t);
                    {
                      y_30 = t;
                      if(((x_30 != NULL) && (x_30 != y_30)))
                        _fail(y_30);
                      else
                        x_30 = y_30;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_s_16), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(v_30)))), not_null(x_30)))));
                }
              }
            }
          }
      }
    }
  {
    z_30 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_s_16), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_30)))));
  }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_47 (ATerm), ATerm p_47 (ATerm))
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
  i_31 = t;
  h_31 :
  if(((ATgetType(i_31) == AT_LIST) && ((ATermList) i_31 != ATempty)))
    {
      j_31 = ATgetFirst((ATermList) i_31);
      k_31 = (ATerm) ATgetNext((ATermList) i_31);
      {
        ATerm n_31 = NULL;
        t = not_null(j_31);
        {
          ATerm p_31 = NULL;
          t = o_47(t);
          {
            n_31 = t;
            {
              t = not_null(k_31);
              {
                t = p_47(t);
                {
                  p_31 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_31)), not_null(n_31));
                }
              }
            }
          }
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm v_31 = NULL;
  v_31 = t;
  u_31 :
  if(!(match_cons(v_31, sym_IS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm d_32 = NULL,f_32 = NULL;
  ATerm q_32 (ATerm t)
  {
    ATerm j_32 = NULL;
    ATerm k_32 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_32), term_x_15);
    {
      t = copy_0(t);
      {
        k_32 = t;
        if(((j_32 != NULL) && (j_32 != k_32)))
          _fail(k_32);
        else
          j_32 = k_32;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(j_32));
    return(t);
  }
  ATerm t_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_4 (ATerm t)
      {
        ATerm y_4 (ATerm t)
        {
          ATerm e_32 = NULL;
          e_32 = t;
          if(((d_32 != NULL) && (d_32 != e_32)))
            _fail(e_32);
          else
            d_32 = e_32;
          return(t);
        }
        t = SOpt_2(t, IS_0, y_4);
        return(t);
      }
      t = fetch_1(t, x_4);
      {
        t = not_null(d_32);
        t = string_to_int_0(t);
      }
      LocalPopChoice(u_16);
    }
  else
    {
      t = t_16;
      t = term_l_6;
    }
  {
    f_32 = t;
    c_32 :
    if(match_int(f_32, 0))
      {
        ATerm v_16 = t;
        int y_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_16;
            LocalPopChoice(y_16);
          }
        else
          {
            t = v_16;
            t = q_32(t);
          }
      }
    else
      {
        t = q_32(t);
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL,c_33 = NULL;
  a_33 = t;
  t_32 :
  if(match_cons(a_33, sym__2))
    {
      b_33 = ATgetArgument(a_33, 0);
      c_33 = ATgetArgument(a_33, 1);
      {
        ATerm d_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(b_33), not_null(c_33));
            LocalPopChoice(g_17);
          }
        else
          {
            t = d_17;
            t = SSL_subtr(not_null(b_33), not_null(c_33));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm i_33 = NULL,j_33 = NULL,k_33 = NULL;
  i_33 = t;
  h_33 :
  if(match_cons(i_33, sym__2))
    {
      j_33 = ATgetArgument(i_33, 0);
      k_33 = ATgetArgument(i_33, 1);
      {
        ATerm h_17;
        h_17 = t;
        {
          ATerm i_17 = t;
          int j_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(j_33), not_null(k_33));
              LocalPopChoice(j_17);
            }
          else
            {
              t = i_17;
              t = SSL_gtr(not_null(j_33), not_null(k_33));
            }
        }
        t = h_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm q_36 = NULL;
  ATerm k_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_37 = NULL,h_37 = NULL,i_37 = NULL;
      e_37 = t;
      p_33 :
      if(match_cons(e_37, sym__2))
        {
          h_37 = ATgetArgument(e_37, 0);
          i_37 = ATgetArgument(e_37, 1);
          {
            if(((q_36 != NULL) && (q_36 != h_37)))
              _fail(h_37);
            else
              q_36 = h_37;
            if(((q_36 != NULL) && (q_36 != i_37)))
              _fail(i_37);
            else
              q_36 = i_37;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_17);
    }
  else
    {
      t = k_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm k_37 (ATerm t)
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_69(t);
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        {
          t = j_69(t);
          t = k_37(t);
        }
      }
    return(t);
  }
  t = k_37(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm l_69 (ATerm), ATerm m_69 (ATerm), ATerm n_69 (ATerm))
{
  t = l_69(t);
  t = while_not_2(t, m_69, n_69);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm z_4 (ATerm t)
  {
    ATerm t_37 = NULL,u_37 = NULL,v_37 = NULL;
    t_37 = t;
    m_37 :
    if(match_cons(t_37, sym__2))
      {
        u_37 = ATgetArgument(t_37, 0);
        v_37 = ATgetArgument(t_37, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(u_37), not_null(v_37), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL,b_38 = NULL;
    y_37 = t;
    o_37 :
    if(match_cons(y_37, sym__3))
      {
        z_37 = ATgetArgument(y_37, 0);
        a_38 = ATgetArgument(y_37, 1);
        b_38 = ATgetArgument(y_37, 2);
        p_37 :
        if(match_int(z_37, 0))
          {
            t = not_null(b_38);
          }
        else
          {
            _fail(t);
          }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL;
    e_38 = t;
    s_37 :
    if(match_cons(e_38, sym__3))
      {
        f_38 = ATgetArgument(e_38, 0);
        g_38 = ATgetArgument(e_38, 1);
        h_38 = ATgetArgument(e_38, 2);
        {
          ATerm l_38 = NULL;
          ATerm s_17;
          s_17 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_38), term_h_6);
            t = geq_0(t);
          }
          t = s_17;
          {
            ATerm m_38 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(f_38), term_h_6);
            {
              t = subt_0(t);
              {
                m_38 = t;
                if(((l_38 != NULL) && (l_38 != m_38)))
                  _fail(m_38);
                else
                  l_38 = m_38;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_38), not_null(g_38), (ATerm) ATinsert(CheckATermList(not_null(h_38)), not_null(g_38)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, z_4, a_5, b_5);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_38 = NULL;
  s_38 = t;
  t = SSL_string_to_int(not_null(s_38));
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm w_38 = NULL;
  w_38 = t;
  v_38 :
  if(!(match_cons(w_38, sym_VS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm e_39 = NULL,f_39 = NULL,g_39 = NULL;
  e_39 = t;
  d_39 :
  if(match_cons(e_39, sym_SOpt_2))
    {
      f_39 = ATgetArgument(e_39, 0);
      g_39 = ATgetArgument(e_39, 1);
      {
        ATerm t_17 = t;
        int x_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_39 = NULL;
            t = not_null(f_39);
            {
              ATerm l_39 = NULL;
              t = k_0(t);
              {
                j_39 = t;
                {
                  t = not_null(g_39);
                  {
                    t = l_0(t);
                    {
                      l_39 = t;
                      t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(j_39), not_null(l_39));
                    }
                  }
                }
              }
            }
            LocalPopChoice(x_17);
          }
        else
          {
            t = t_17;
            {
              ATerm p_39 = NULL;
              t = not_null(f_39);
              {
                ATerm r_39 = NULL;
                t = k_0(t);
                {
                  p_39 = t;
                  {
                    t = not_null(g_39);
                    {
                      t = l_0(t);
                      {
                        r_39 = t;
                        t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(p_39), not_null(r_39));
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
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm u_62 (ATerm))
{
  ATerm z_39 (ATerm t)
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_62, _id);
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        t = Cons_2(t, _id, z_39);
      }
    return(t);
  }
  t = z_39(t);
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm f_40 = NULL,h_40 = NULL;
  ATerm o_40 (ATerm t)
  {
    ATerm k_40 = NULL;
    ATerm l_40 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_40), term_h_15);
    {
      t = copy_0(t);
      {
        l_40 = t;
        if(((k_40 != NULL) && (k_40 != l_40)))
          _fail(l_40);
        else
          k_40 = l_40;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(k_40))));
    return(t);
  }
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_5 (ATerm t)
      {
        ATerm d_5 (ATerm t)
        {
          ATerm g_40 = NULL;
          g_40 = t;
          if(((f_40 != NULL) && (f_40 != g_40)))
            _fail(g_40);
          else
            f_40 = g_40;
          return(t);
        }
        t = SOpt_2(t, VS_0, d_5);
        return(t);
      }
      t = fetch_1(t, c_5);
      {
        t = not_null(f_40);
        t = string_to_int_0(t);
      }
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      t = term_l_6;
    }
  {
    h_40 = t;
    e_40 :
    if(match_int(h_40, 0))
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_z_16;
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            t = o_40(t);
          }
      }
    else
      {
        t = o_40(t);
      }
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm k_63 (ATerm))
{
  ATerm q_40 (ATerm t)
  {
    ATerm f_18 = t;
    int g_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = k_63(t);
        LocalPopChoice(g_18);
      }
    else
      {
        t = f_18;
        t = Cons_2(t, _id, q_40);
      }
    return(t);
  }
  t = q_40(t);
  return(t);
}
ATerm AC_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm w_40 = NULL,x_40 = NULL;
  w_40 = t;
  v_40 :
  if(match_cons(w_40, sym_AC_1))
    {
      x_40 = ATgetArgument(w_40, 0);
      {
        ATerm h_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_40 = NULL;
            t = not_null(x_40);
            {
              t = j_0(t);
              {
                z_40 = t;
                t = (ATerm) ATmakeAppl(sym_AC_1, not_null(z_40));
              }
            }
            LocalPopChoice(j_18);
          }
        else
          {
            t = h_18;
            {
              ATerm c_41 = NULL;
              t = not_null(x_40);
              {
                t = j_0(t);
                {
                  c_41 = t;
                  t = (ATerm) ATmakeAppl(sym_AC_1, not_null(c_41));
                }
              }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AR_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm n_41 = NULL,o_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym_AR_1))
    {
      o_41 = ATgetArgument(n_41, 0);
      {
        ATerm l_18 = t;
        int q_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_41 = NULL;
            t = not_null(o_41);
            {
              t = i_0(t);
              {
                q_41 = t;
                t = (ATerm) ATmakeAppl(sym_AR_1, not_null(q_41));
              }
            }
            LocalPopChoice(q_18);
          }
        else
          {
            t = l_18;
            {
              ATerm t_41 = NULL;
              t = not_null(o_41);
              {
                t = i_0(t);
                {
                  t_41 = t;
                  t = (ATerm) ATmakeAppl(sym_AR_1, not_null(t_41));
                }
              }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm AL_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm e_42 = NULL,f_42 = NULL;
  e_42 = t;
  d_42 :
  if(match_cons(e_42, sym_AL_1))
    {
      f_42 = ATgetArgument(e_42, 0);
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_42 = NULL;
            t = not_null(f_42);
            {
              t = h_0(t);
              {
                h_42 = t;
                t = (ATerm) ATmakeAppl(sym_AL_1, not_null(h_42));
              }
            }
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            {
              ATerm m_42 = NULL;
              t = not_null(f_42);
              {
                t = h_0(t);
                {
                  m_42 = t;
                  t = (ATerm) ATmakeAppl(sym_AL_1, not_null(m_42));
                }
              }
            }
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm aopt_0 (ATerm t)
{
  ATerm t_18 = t;
  int u_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = AL_1(t, _id);
      t = term_a_19;
      LocalPopChoice(u_18);
    }
  else
    {
      t = t_18;
      {
        ATerm b_19 = t;
        int c_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = AR_1(t, _id);
            t = term_f_19;
            LocalPopChoice(c_19);
          }
        else
          {
            t = b_19;
            {
              t = AC_1(t, _id);
              t = term_g_19;
            }
          }
      }
    }
  return(t);
}
ATerm make_hs_0 (ATerm t)
{
  ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL,c_43 = NULL;
  ATerm i_43 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(c_43));
    return(t);
  }
  a_43 = t;
  v_42 :
  if(match_cons(a_43, sym_AL_1))
    {
      b_43 = ATgetArgument(a_43, 0);
      if(((z_42 != NULL) && (z_42 != b_43)))
        _fail(b_43);
      else
        z_42 = b_43;
    }
  else
    {
      if(match_cons(a_43, sym_AR_1))
        {
          b_43 = ATgetArgument(a_43, 0);
          if(((z_42 != NULL) && (z_42 != b_43)))
            _fail(b_43);
          else
            z_42 = b_43;
        }
      else
        {
          if(match_cons(a_43, sym_AC_1))
            {
              b_43 = ATgetArgument(a_43, 0);
              if(((z_42 != NULL) && (z_42 != b_43)))
                _fail(b_43);
              else
                z_42 = b_43;
            }
          else
            {
              _fail(t);
            }
        }
    }
  {
    t = not_null(z_42);
    {
      t = Hspace_0(t);
      {
        c_43 = t;
        y_42 :
        if(((ATermList) c_43 == ATempty))
          {
            {
            }
          }
        else
          {
            t = i_43(t);
          }
      }
    }
  }
  return(t);
}
ATerm toa_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm h_44 = NULL,i_44 = NULL,j_44 = NULL;
  h_44 = t;
  f_44 :
  if(match_cons(h_44, sym_R_2))
    {
      i_44 = ATgetArgument(h_44, 0);
      j_44 = ATgetArgument(h_44, 1);
      g_44 :
      if(((ATermList) i_44 == ATempty))
        {
          {
            ATerm l_44 = NULL,m_44 = NULL;
            ATerm n_44 = NULL,o_44 = NULL;
            t = term_c_11;
            {
              t = d_70(t);
              {
                n_44 = t;
                e_44 :
                if(match_cons(n_44, sym_AOPTIONS_1))
                  {
                    o_44 = ATgetArgument(n_44, 0);
                    {
                      ATerm k_46 = NULL;
                      if(((l_44 != NULL) && (l_44 != o_44)))
                        _fail(o_44);
                      else
                        l_44 = o_44;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(j_44), not_null(l_44));
                        {
                          ATerm n_46 (ATerm t)
                          {
                            ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL,u_44 = NULL,v_44 = NULL,w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL;
                            ATerm p_46 (ATerm t)
                            {
                              ATerm m_45 = NULL;
                              ATerm n_45 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(x_44));
                              {
                                t = n_46(t);
                                {
                                  n_45 = t;
                                  if(((m_45 != NULL) && (m_45 != n_45)))
                                    _fail(n_45);
                                  else
                                    m_45 = n_45;
                                }
                              }
                              t = (ATerm) ATinsert(CheckATermList(not_null(m_45)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, not_null(p_44), not_null(q_44)))));
                              return(t);
                            }
                            ATerm q_46 (ATerm t)
                            {
                              ATerm u_45 = NULL,w_45 = NULL,y_45 = NULL;
                              ATerm h_19;
                              h_19 = t;
                              {
                                ATerm v_45 = NULL;
                                t = not_null(y_44);
                                {
                                  t = aopt_0(t);
                                  {
                                    v_45 = t;
                                    if(((u_45 != NULL) && (u_45 != v_45)))
                                      _fail(v_45);
                                    else
                                      u_45 = v_45;
                                  }
                                }
                              }
                              t = h_19;
                              {
                                ATerm i_19;
                                i_19 = t;
                                {
                                  ATerm x_45 = NULL;
                                  t = not_null(y_44);
                                  {
                                    t = make_hs_0(t);
                                    {
                                      x_45 = t;
                                      if(((w_45 != NULL) && (w_45 != x_45)))
                                        _fail(x_45);
                                      else
                                        w_45 = x_45;
                                    }
                                  }
                                }
                                t = i_19;
                                {
                                  ATerm z_45 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(s_44)), not_null(r_44)), not_null(z_44));
                                  {
                                    t = n_46(t);
                                    {
                                      z_45 = t;
                                      if(((y_45 != NULL) && (y_45 != z_45)))
                                        _fail(z_45);
                                      else
                                        y_45 = z_45;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(y_45)), not_null(w_45)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(u_45)), not_null(v_44)));
                                }
                              }
                              return(t);
                            }
                            ATerm r_46 (ATerm t)
                            {
                              ATerm g_46 = NULL,i_46 = NULL;
                              ATerm j_19;
                              j_19 = t;
                              {
                                ATerm h_46 = NULL;
                                t = not_null(y_44);
                                {
                                  t = aopt_0(t);
                                  {
                                    h_46 = t;
                                    if(((g_46 != NULL) && (g_46 != h_46)))
                                      _fail(h_46);
                                    else
                                      g_46 = h_46;
                                  }
                                }
                              }
                              t = j_19;
                              {
                                ATerm j_46 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(z_44));
                                {
                                  t = n_46(t);
                                  {
                                    j_46 = t;
                                    if(((i_46 != NULL) && (i_46 != j_46)))
                                      _fail(j_46);
                                    else
                                      i_46 = j_46;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(i_46)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(g_46)), not_null(v_44)));
                              }
                              return(t);
                            }
                            t_44 = t;
                            v_43 :
                            if(match_cons(t_44, sym__2))
                              {
                                u_44 = ATgetArgument(t_44, 0);
                                x_44 = ATgetArgument(t_44, 1);
                                w_43 :
                                if(((ATermList) u_44 == ATempty))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(u_44) == AT_LIST) && ((ATermList) u_44 != ATempty)))
                                      {
                                        v_44 = ATgetFirst((ATermList) u_44);
                                        w_44 = (ATerm) ATgetNext((ATermList) u_44);
                                        x_43 :
                                        if(((ATgetType(x_44) == AT_LIST) && ((ATermList) x_44 != ATempty)))
                                          {
                                            y_44 = ATgetFirst((ATermList) x_44);
                                            z_44 = (ATerm) ATgetNext((ATermList) x_44);
                                            y_43 :
                                            if(((ATgetType(w_44) == AT_LIST) && ((ATermList) w_44 != ATempty)))
                                              {
                                                r_44 = ATgetFirst((ATermList) w_44);
                                                s_44 = (ATerm) ATgetNext((ATermList) w_44);
                                                z_43 :
                                                if(match_cons(v_44, sym_C_2))
                                                  {
                                                    p_44 = ATgetArgument(v_44, 0);
                                                    q_44 = ATgetArgument(v_44, 1);
                                                    {
                                                      ATerm m_19 = t;
                                                      int n_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = p_46(t);
                                                          LocalPopChoice(n_19);
                                                        }
                                                      else
                                                        {
                                                          t = m_19;
                                                          {
                                                            ATerm o_19 = t;
                                                            int p_19 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = q_46(t);
                                                                LocalPopChoice(p_19);
                                                              }
                                                            else
                                                              {
                                                                t = o_19;
                                                                t = r_46(t);
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm u_19 = t;
                                                    int v_19 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = q_46(t);
                                                        LocalPopChoice(v_19);
                                                      }
                                                    else
                                                      {
                                                        t = u_19;
                                                        t = r_46(t);
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                a_44 :
                                                if(match_cons(v_44, sym_C_2))
                                                  {
                                                    p_44 = ATgetArgument(v_44, 0);
                                                    q_44 = ATgetArgument(v_44, 1);
                                                    {
                                                      ATerm y_19 = t;
                                                      int z_19 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = p_46(t);
                                                          LocalPopChoice(z_19);
                                                        }
                                                      else
                                                        {
                                                          t = y_19;
                                                          t = r_46(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = r_46(t);
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            b_44 :
                                            c_44 :
                                            if(match_cons(v_44, sym_C_2))
                                              {
                                                p_44 = ATgetArgument(v_44, 0);
                                                q_44 = ATgetArgument(v_44, 1);
                                                t = p_46(t);
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                              }
                            else
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = n_46(t);
                          {
                            k_46 = t;
                            if(((m_44 != NULL) && (m_44 != k_46)))
                              _fail(k_46);
                            else
                              m_44 = k_46;
                          }
                        }
                      }
                    }
                  }
                else
                  {
                    _fail(t);
                  }
              }
            }
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_s_16), (ATerm) ATinsert(ATempty, not_null(m_44)));
          }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm R_2 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm g_47 = NULL,h_47 = NULL,i_47 = NULL;
  g_47 = t;
  f_47 :
  if(match_cons(g_47, sym_R_2))
    {
      h_47 = ATgetArgument(g_47, 0);
      i_47 = ATgetArgument(g_47, 1);
      {
        ATerm a_20 = t;
        int b_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_47 = NULL;
            t = not_null(h_47);
            {
              ATerm n_47 = NULL;
              t = f_0(t);
              {
                l_47 = t;
                {
                  t = not_null(i_47);
                  {
                    t = g_0(t);
                    {
                      n_47 = t;
                      t = (ATerm) ATmakeAppl(sym_R_2, not_null(l_47), not_null(n_47));
                    }
                  }
                }
              }
            }
            LocalPopChoice(b_20);
          }
        else
          {
            t = a_20;
            {
              ATerm t_47 = NULL;
              t = not_null(h_47);
              {
                ATerm v_47 = NULL;
                t = f_0(t);
                {
                  t_47 = t;
                  {
                    t = not_null(i_47);
                    {
                      t = g_0(t);
                      {
                        v_47 = t;
                        t = (ATerm) ATmakeAppl(sym_R_2, not_null(t_47), not_null(v_47));
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
      _fail(t);
    }
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm m_48 = NULL,n_48 = NULL,o_48 = NULL;
  o_48 = t;
  l_48 :
  if(((ATgetType(o_48) == AT_LIST) && ((ATermList) o_48 != ATempty)))
    {
      m_48 = ATgetFirst((ATermList) o_48);
      n_48 = (ATerm) ATgetNext((ATermList) o_48);
      {
        ATerm r_48 = NULL;
        t = not_null(n_48);
        {
          ATerm c_20;
          c_20 = t;
          {
            ATerm s_48 = NULL,u_48 = NULL,w_48 = NULL;
            ATerm f_20;
            f_20 = t;
            {
              ATerm t_48 = NULL;
              t = c_0(t);
              {
                t_48 = t;
                if(((s_48 != NULL) && (s_48 != t_48)))
                  _fail(t_48);
                else
                  s_48 = t_48;
              }
            }
            t = f_20;
            {
              ATerm v_48 = NULL;
              t = not_null(m_48);
              {
                t = b_0(t);
                {
                  v_48 = t;
                  if(((u_48 != NULL) && (u_48 != v_48)))
                    _fail(v_48);
                  else
                    u_48 = v_48;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_48)), not_null(u_48));
                {
                  w_48 = t;
                  if(((r_48 != NULL) && (r_48 != w_48)))
                    _fail(w_48);
                  else
                    r_48 = w_48;
                }
              }
            }
          }
          t = c_20;
          {
            ATerm e_5 (ATerm t)
            {
              t = not_null(r_48);
              return(t);
            }
            t = reverse_acc_2(t, b_0, e_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_48 == ATempty))
        {
          {
            t = term_c_11;
            t = c_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm f_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_5);
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm g_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, g_5);
  {
    ATerm k_50 (ATerm t)
    {
      ATerm l_49 = NULL,m_49 = NULL,n_49 = NULL,o_49 = NULL,p_49 = NULL,q_49 = NULL,r_49 = NULL;
      ATerm n_50 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_49), (ATerm) ATinsert(CheckATermList(not_null(r_49)), not_null(p_49)));
        t = k_50(t);
        return(t);
      }
      n_49 = t;
      i_49 :
      if(match_cons(n_49, sym__2))
        {
          o_49 = ATgetArgument(n_49, 0);
          r_49 = ATgetArgument(n_49, 1);
          j_49 :
          if(((ATermList) o_49 == ATempty))
            {
              {
                ATerm w_49 = NULL;
                ATerm x_49 = NULL;
                t = not_null(r_49);
                {
                  t = reverse_0(t);
                  {
                    x_49 = t;
                    if(((w_49 != NULL) && (w_49 != x_49)))
                      _fail(x_49);
                    else
                      w_49 = x_49;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(w_49)));
              }
            }
          else
            {
              if(((ATgetType(o_49) == AT_LIST) && ((ATermList) o_49 != ATempty)))
                {
                  p_49 = ATgetFirst((ATermList) o_49);
                  q_49 = (ATerm) ATgetNext((ATermList) o_49);
                  k_49 :
                  if(match_cons(p_49, sym_R_2))
                    {
                      l_49 = ATgetArgument(p_49, 0);
                      m_49 = ATgetArgument(p_49, 1);
                      {
                        ATerm g_20 = t;
                        int i_20 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm c_50 = NULL,e_50 = NULL;
                            ATerm m_20;
                            m_20 = t;
                            {
                              ATerm d_50 = NULL;
                              t = not_null(r_49);
                              {
                                t = reverse_0(t);
                                {
                                  d_50 = t;
                                  if(((c_50 != NULL) && (c_50 != d_50)))
                                    _fail(d_50);
                                  else
                                    c_50 = d_50;
                                }
                              }
                            }
                            t = m_20;
                            {
                              ATerm f_50 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(q_49), (ATerm) ATempty);
                              {
                                t = k_50(t);
                                {
                                  f_50 = t;
                                  if(((e_50 != NULL) && (e_50 != f_50)))
                                    _fail(f_50);
                                  else
                                    e_50 = f_50;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(e_50)), (ATerm) ATmakeAppl(sym_R_2, not_null(l_49), not_null(m_49))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(c_50)));
                            }
                            LocalPopChoice(i_20);
                          }
                        else
                          {
                            t = g_20;
                            t = n_50(t);
                          }
                      }
                    }
                  else
                    {
                      t = n_50(t);
                    }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = k_50(t);
    {
      ATerm h_5 (ATerm t)
      {
        ATerm n_20 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = n_20;
          }
        return(t);
      }
      t = filter_1(t, h_5);
    }
  }
  return(t);
}
ATerm Abox_2_html_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_52 = NULL,m_52 = NULL,n_52 = NULL,o_52 = NULL;
      n_52 = t;
      c_52 :
      if(match_cons(n_52, sym_REF_2))
        {
          o_52 = ATgetArgument(n_52, 0);
          m_52 = ATgetArgument(n_52, 1);
          t = (ATerm) ATmakeAppl(sym_HREF_2, not_null(o_52), not_null(m_52));
        }
      else
        {
          if(match_cons(n_52, sym_LBL_2))
            {
              o_52 = ATgetArgument(n_52, 0);
              m_52 = ATgetArgument(n_52, 1);
              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_52)), (ATerm) ATmakeAppl(sym_ANCHOR_1, not_null(o_52)));
            }
          else
            {
              if(match_cons(n_52, sym_LNAT_2))
                {
                  o_52 = ATgetArgument(n_52, 0);
                  m_52 = ATgetArgument(n_52, 1);
                  t = term_r_20;
                }
              else
                {
                  if(match_cons(n_52, sym_L_2))
                    {
                      o_52 = ATgetArgument(n_52, 0);
                      m_52 = ATgetArgument(n_52, 1);
                      t = term_r_20;
                    }
                  else
                    {
                      if(match_cons(n_52, sym_ALT_2))
                        {
                          o_52 = ATgetArgument(n_52, 0);
                          m_52 = ATgetArgument(n_52, 1);
                          t = not_null(o_52);
                        }
                      else
                        {
                          if(match_cons(n_52, sym_A_3))
                            {
                              o_52 = ATgetArgument(n_52, 0);
                              m_52 = ATgetArgument(n_52, 1);
                              l_52 = ATgetArgument(n_52, 2);
                              {
                                ATerm d_53 = NULL,e_53 = NULL,f_53 = NULL;
                                ATerm g_53 = NULL;
                                t = not_null(l_52);
                                {
                                  ATerm h_53 = NULL;
                                  t = construct_rows_0(t);
                                  {
                                    g_53 = t;
                                    {
                                      if(((d_53 != NULL) && (d_53 != g_53)))
                                        _fail(g_53);
                                      else
                                        d_53 = g_53;
                                      {
                                        t = not_null(m_52);
                                        {
                                          ATerm i_53 = NULL;
                                          t = Vspace_0(t);
                                          {
                                            h_53 = t;
                                            {
                                              if(((e_53 != NULL) && (e_53 != h_53)))
                                                _fail(h_53);
                                              else
                                                e_53 = h_53;
                                              {
                                                t = not_null(d_53);
                                                {
                                                  ATerm i_5 (ATerm t)
                                                  {
                                                    ATerm j_5 (ATerm t)
                                                    {
                                                      t = not_null(o_52);
                                                      return(t);
                                                    }
                                                    t = toa_1(t, j_5);
                                                    return(t);
                                                  }
                                                  t = map_1(t, i_5);
                                                  {
                                                    ATerm k_5 (ATerm t)
                                                    {
                                                      t = not_null(e_53);
                                                      return(t);
                                                    }
                                                    t = separate_by_1(t, k_5);
                                                    {
                                                      i_53 = t;
                                                      if(((f_53 != NULL) && (f_53 != i_53)))
                                                        _fail(i_53);
                                                      else
                                                        f_53 = i_53;
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
                                t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_53))))));
                              }
                            }
                          else
                            {
                              if(match_cons(n_52, sym_HV_2))
                                {
                                  o_52 = ATgetArgument(n_52, 0);
                                  m_52 = ATgetArgument(n_52, 1);
                                  {
                                    ATerm l_53 = NULL,m_53 = NULL,n_53 = NULL;
                                    ATerm o_53 = NULL;
                                    t = not_null(o_52);
                                    {
                                      ATerm t_53 = NULL;
                                      t = Hspace_0(t);
                                      {
                                        o_53 = t;
                                        {
                                          if(((l_53 != NULL) && (l_53 != o_53)))
                                            _fail(o_53);
                                          else
                                            l_53 = o_53;
                                          {
                                            ATerm s_20 = t;
                                            int t_20 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm p_53 = NULL;
                                                p_53 = t;
                                                o_51 :
                                                if(((ATermList) p_53 == ATempty))
                                                  {
                                                    {
                                                      t = not_null(m_52);
                                                      {
                                                        ATerm l_5 (ATerm t)
                                                        {
                                                          ATerm u_20 = t;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = Nil_0(t);
                                                              PopChoice();
                                                              _fail(t);
                                                            }
                                                          else
                                                            {
                                                              t = u_20;
                                                            }
                                                          return(t);
                                                        }
                                                        t = filter_1(t, l_5);
                                                      }
                                                    }
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                                LocalPopChoice(t_20);
                                              }
                                            else
                                              {
                                                t = s_20;
                                                {
                                                  ATerm q_53 = NULL;
                                                  ATerm r_53 = NULL;
                                                  ATerm m_5 (ATerm t)
                                                  {
                                                    t = (ATerm) ATinsert(ATempty, term_d_21);
                                                    return(t);
                                                  }
                                                  t = at_last_1(t, m_5);
                                                  {
                                                    q_53 = t;
                                                    {
                                                      if(((m_53 != NULL) && (m_53 != q_53)))
                                                        _fail(q_53);
                                                      else
                                                        m_53 = q_53;
                                                      {
                                                        ATerm s_53 = NULL;
                                                        t = not_null(m_52);
                                                        {
                                                          ATerm n_5 (ATerm t)
                                                          {
                                                            ATerm e_21 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = Nil_0(t);
                                                                PopChoice();
                                                                _fail(t);
                                                              }
                                                            else
                                                              {
                                                                t = e_21;
                                                              }
                                                            return(t);
                                                          }
                                                          t = filter_1(t, n_5);
                                                          {
                                                            ATerm o_5 (ATerm t)
                                                            {
                                                              t = not_null(m_53);
                                                              return(t);
                                                            }
                                                            t = separate_by_1(t, o_5);
                                                            {
                                                              s_53 = t;
                                                              if(((r_53 != NULL) && (r_53 != s_53)))
                                                                _fail(s_53);
                                                              else
                                                                r_53 = s_53;
                                                            }
                                                          }
                                                        }
                                                        t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_53)), term_h_21);
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            {
                                              t_53 = t;
                                              if(((n_53 != NULL) && (n_53 != t_53)))
                                                _fail(t_53);
                                              else
                                                n_53 = t_53;
                                            }
                                          }
                                        }
                                      }
                                    }
                                    t = not_null(n_53);
                                  }
                                }
                              else
                                {
                                  if(match_cons(n_52, sym_V_2))
                                    {
                                      o_52 = ATgetArgument(n_52, 0);
                                      m_52 = ATgetArgument(n_52, 1);
                                      {
                                        ATerm w_53 = NULL,y_53 = NULL,z_53 = NULL;
                                        ATerm a_54 = NULL;
                                        t = not_null(o_52);
                                        {
                                          ATerm b_54 = NULL;
                                          t = Vspace_0(t);
                                          {
                                            a_54 = t;
                                            {
                                              if(((y_53 != NULL) && (y_53 != a_54)))
                                                _fail(a_54);
                                              else
                                                y_53 = a_54;
                                              {
                                                t = not_null(o_52);
                                                {
                                                  ATerm c_54 = NULL;
                                                  t = Ispace_0(t);
                                                  {
                                                    b_54 = t;
                                                    {
                                                      if(((w_53 != NULL) && (w_53 != b_54)))
                                                        _fail(b_54);
                                                      else
                                                        w_53 = b_54;
                                                      {
                                                        t = not_null(m_52);
                                                        {
                                                          ATerm p_5 (ATerm t)
                                                          {
                                                            ATerm i_21 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = Nil_0(t);
                                                                PopChoice();
                                                                _fail(t);
                                                              }
                                                            else
                                                              {
                                                                t = i_21;
                                                              }
                                                            return(t);
                                                          }
                                                          t = filter_1(t, p_5);
                                                          {
                                                            ATerm q_5 (ATerm t)
                                                            {
                                                              ATerm s_5 (ATerm t)
                                                              {
                                                                t = term_z_16;
                                                                return(t);
                                                              }
                                                              t = tov_1(t, s_5);
                                                              return(t);
                                                            }
                                                            ATerm r_5 (ATerm t)
                                                            {
                                                              ATerm t_5 (ATerm t)
                                                              {
                                                                ATerm u_5 (ATerm t)
                                                                {
                                                                  t = not_null(w_53);
                                                                  return(t);
                                                                }
                                                                t = tov_1(t, u_5);
                                                                return(t);
                                                              }
                                                              t = map_1(t, t_5);
                                                              return(t);
                                                            }
                                                            t = Cons_2(t, q_5, r_5);
                                                            {
                                                              ATerm v_5 (ATerm t)
                                                              {
                                                                t = not_null(y_53);
                                                                return(t);
                                                              }
                                                              t = separate_by_1(t, v_5);
                                                              {
                                                                c_54 = t;
                                                                if(((z_53 != NULL) && (z_53 != c_54)))
                                                                  _fail(c_54);
                                                                else
                                                                  z_53 = c_54;
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
                                        t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, not_null(z_53))), term_h_21);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(n_52, sym_H_2))
                                        {
                                          o_52 = ATgetArgument(n_52, 0);
                                          m_52 = ATgetArgument(n_52, 1);
                                          {
                                            ATerm g_54 = NULL,h_54 = NULL;
                                            ATerm i_54 = NULL;
                                            t = not_null(o_52);
                                            {
                                              ATerm j_54 = NULL;
                                              t = Hspace_0(t);
                                              {
                                                i_54 = t;
                                                {
                                                  if(((g_54 != NULL) && (g_54 != i_54)))
                                                    _fail(i_54);
                                                  else
                                                    g_54 = i_54;
                                                  {
                                                    t = not_null(m_52);
                                                    {
                                                      ATerm w_5 (ATerm t)
                                                      {
                                                        ATerm k_21 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = k_21;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, w_5);
                                                      {
                                                        ATerm x_5 (ATerm t)
                                                        {
                                                          t = not_null(g_54);
                                                          return(t);
                                                        }
                                                        t = sep_by_1(t, x_5);
                                                        {
                                                          j_54 = t;
                                                          if(((h_54 != NULL) && (h_54 != j_54)))
                                                            _fail(j_54);
                                                          else
                                                            h_54 = j_54;
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            t = not_null(h_54);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(n_52, sym_FBOX_2))
                                            {
                                              o_52 = ATgetArgument(n_52, 0);
                                              m_52 = ATgetArgument(n_52, 1);
                                              {
                                                ATerm m_54 = NULL;
                                                ATerm n_54 = NULL;
                                                t = not_null(o_52);
                                                {
                                                  ATerm l_21 = t;
                                                  int m_21 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = KW_0(t);
                                                      t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_q_21), (ATerm) ATinsert(ATempty, not_null(m_52)));
                                                      LocalPopChoice(m_21);
                                                    }
                                                  else
                                                    {
                                                      t = l_21;
                                                      {
                                                        ATerm r_21 = t;
                                                        int s_21 = stack_ptr;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = VAR_0(t);
                                                            t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_x_21), (ATerm) ATinsert(ATempty, not_null(m_52)));
                                                            LocalPopChoice(s_21);
                                                          }
                                                        else
                                                          {
                                                            t = r_21;
                                                            {
                                                              ATerm y_21 = t;
                                                              int g_22 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = NUM_0(t);
                                                                  t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_h_22), (ATerm) ATinsert(ATempty, not_null(m_52)));
                                                                  LocalPopChoice(g_22);
                                                                }
                                                              else
                                                                {
                                                                  t = y_21;
                                                                  {
                                                                    ATerm l_22 = t;
                                                                    int m_22 = stack_ptr;
                                                                    if((PushChoice() == 0))
                                                                      {
                                                                        t = MATH_0(t);
                                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_p_22), (ATerm) ATinsert(ATempty, not_null(m_52)));
                                                                        LocalPopChoice(m_22);
                                                                      }
                                                                    else
                                                                      {
                                                                        t = l_22;
                                                                        t = not_null(m_52);
                                                                      }
                                                                  }
                                                                }
                                                            }
                                                          }
                                                      }
                                                    }
                                                  {
                                                    n_54 = t;
                                                    if(((m_54 != NULL) && (m_54 != n_54)))
                                                      _fail(n_54);
                                                    else
                                                      m_54 = n_54;
                                                  }
                                                }
                                                t = not_null(m_54);
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(n_52, sym_C_2))
                                                {
                                                  o_52 = ATgetArgument(n_52, 0);
                                                  m_52 = ATgetArgument(n_52, 1);
                                                  d_52 :
                                                  if(((ATermList) o_52 == ATempty))
                                                    {
                                                      {
                                                        ATerm p_54 = NULL,q_54 = NULL;
                                                        ATerm u_54 = NULL;
                                                        t = not_null(m_52);
                                                        {
                                                          ATerm v_54 = NULL;
                                                          ATerm y_5 (ATerm t)
                                                          {
                                                            ATerm r_54 = NULL,s_54 = NULL;
                                                            r_54 = t;
                                                            z_51 :
                                                            if(match_cons(r_54, sym_S_1))
                                                              {
                                                                s_54 = ATgetArgument(r_54, 0);
                                                                {
                                                                  t = not_null(s_54);
                                                                  t = make_html_comment_0(t);
                                                                }
                                                              }
                                                            else
                                                              {
                                                                _fail(t);
                                                              }
                                                            return(t);
                                                          }
                                                          t = map_1(t, y_5);
                                                          {
                                                            u_54 = t;
                                                            {
                                                              if(((p_54 != NULL) && (p_54 != u_54)))
                                                                _fail(u_54);
                                                              else
                                                                p_54 = u_54;
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_x_22), (ATerm) ATinsert(ATempty, not_null(p_54))))));
                                                                {
                                                                  v_54 = t;
                                                                  if(((q_54 != NULL) && (q_54 != v_54)))
                                                                    _fail(v_54);
                                                                  else
                                                                    q_54 = v_54;
                                                                }
                                                              }
                                                            }
                                                          }
                                                        }
                                                        t = not_null(q_54);
                                                      }
                                                    }
                                                  else
                                                    {
                                                      _fail(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_cons(n_52, sym_S_1))
                                                    {
                                                      o_52 = ATgetArgument(n_52, 0);
                                                      {
                                                        t = not_null(o_52);
                                                        t = html_string_0(t);
                                                      }
                                                    }
                                                  else
                                                    {
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
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm x_54 = NULL;
        ATerm z_54 = NULL,a_55 = NULL;
        t = parse_options_1(t, io_options_0);
        {
          x_54 = t;
          {
            ATerm z_22 = t;
            int a_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = need_help_1(t, usage_0);
                LocalPopChoice(a_23);
              }
            else
              {
                t = z_22;
                {
                  ATerm b_23 = t;
                  int d_23 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_23;
                      e_23 = t;
                      {
                        ATerm f_23 = t;
                        int g_23 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm z_5 (ATerm t)
                            {
                              ATerm b_55 = NULL,c_55 = NULL;
                              b_55 = t;
                              h_52 :
                              if(match_cons(b_55, sym_Output_1))
                                {
                                  c_55 = ATgetArgument(b_55, 0);
                                  if(((a_55 != NULL) && (a_55 != c_55)))
                                    _fail(c_55);
                                  else
                                    a_55 = c_55;
                                }
                              else
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = option_defined_1(t, z_5);
                            {
                              t = not_null(a_55);
                              t = open_file_0(t);
                            }
                            LocalPopChoice(g_23);
                          }
                        else
                          {
                            t = f_23;
                            {
                              ATerm d_55 = NULL;
                              t = term_j_23;
                              {
                                d_55 = t;
                                if(((a_55 != NULL) && (a_55 != d_55)))
                                  _fail(d_55);
                                else
                                  a_55 = d_55;
                              }
                            }
                          }
                      }
                      t = e_23;
                      {
                        t = input_file_0(t);
                        {
                          ATerm a_6 (ATerm t)
                          {
                            ATerm e_55 = NULL;
                            t = abox2html_0(t);
                            {
                              e_55 = t;
                              if(((z_54 != NULL) && (z_54 != e_55)))
                                _fail(e_55);
                              else
                                z_54 = e_55;
                            }
                            return(t);
                          }
                          t = _2(t, _id, a_6);
                          {
                            t = not_null(z_54);
                            {
                              ATerm b_6 (ATerm t)
                              {
                                ATerm c_6 (ATerm t)
                                {
                                  t = is_string_0(t);
                                  {
                                    ATerm k_23;
                                    k_23 = t;
                                    {
                                      ATerm d_6 (ATerm t)
                                      {
                                        t = not_null(a_55);
                                        return(t);
                                      }
                                      ATerm e_6 (ATerm t)
                                      {
                                        ATerm f_55 = NULL;
                                        f_55 = t;
                                        t = (ATerm) ATinsert(ATempty, not_null(f_55));
                                        return(t);
                                      }
                                      t = split_2(t, d_6, e_6);
                                      t = print_0(t);
                                    }
                                    t = k_23;
                                  }
                                  return(t);
                                }
                                t = try_1(t, c_6);
                                return(t);
                              }
                              t = topdown_1(t, b_6);
                              t = report_success_0(t);
                            }
                          }
                        }
                      }
                      LocalPopChoice(d_23);
                    }
                  else
                    {
                      t = b_23;
                      t = report_failure_0(t);
                    }
                }
              }
          }
        }
      }
    }
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Abox_2_html_0(t);
  return(t);
}

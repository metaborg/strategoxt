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
ATerm term_p_21;
ATerm term_d_21;
ATerm term_v_20;
ATerm term_f_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_b_19;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_f_18;
ATerm term_e_18;
ATerm term_b_18;
ATerm term_y_17;
ATerm term_t_17;
ATerm term_q_17;
ATerm term_k_17;
ATerm term_h_17;
ATerm term_g_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_s_16;
ATerm term_q_16;
ATerm term_l_16;
ATerm term_h_16;
ATerm term_e_16;
ATerm term_a_16;
ATerm term_n_15;
ATerm term_m_15;
ATerm term_h_15;
ATerm term_e_15;
ATerm term_z_14;
ATerm term_q_14;
ATerm term_o_14;
ATerm term_k_14;
ATerm term_h_13;
ATerm term_e_13;
ATerm term_x_12;
ATerm term_q_10;
ATerm term_k_10;
ATerm term_p_9;
ATerm term_y_8;
ATerm term_h_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_w_7;
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
  term_v_7 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_g_17));
  term_g_17 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_e_18));
  term_e_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_18));
  term_f_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym__2, term_f_19, term_g_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__3, term_f_19, term_g_19, (ATerm) ATempty);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym_stdout_0);
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
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm a_67 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm o_63 (ATerm));
ATerm html_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm x_47 (ATerm));
ATerm make_html_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm sep_by_1 (ATerm, ATerm h_70 (ATerm));
ATerm filter_1 (ATerm, ATerm m_56 (ATerm));
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm c_64 (ATerm));
ATerm separate_by_1 (ATerm, ATerm d_64 (ATerm));
ATerm LNAT_2 (ATerm, ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm L_2 (ATerm, ATerm s_0 (ATerm), ATerm t_0 (ATerm));
ATerm tov_1 (ATerm, ATerm g_70 (ATerm));
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
ATerm SOpt_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm AC_1 (ATerm, ATerm p_0 (ATerm));
ATerm AR_1 (ATerm, ATerm o_0 (ATerm));
ATerm AL_1 (ATerm, ATerm n_0 (ATerm));
ATerm aopt_0 (ATerm);
ATerm make_hs_0 (ATerm);
ATerm toa_1 (ATerm, ATerm d_70 (ATerm));
ATerm R_2 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2html_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm k_63 (ATerm));
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
ATerm fetch_1 (ATerm, ATerm u_62 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_52 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_53 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_63 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm i_51 (ATerm));
ATerm map_1 (ATerm, ATerm m_62 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_51 (ATerm));
ATerm Program_1 (ATerm, ATerm k_42 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_42 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_51 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_47 (ATerm), ATerm p_47 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_51 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_51 (ATerm));
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
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm t_8 = NULL,u_8 = NULL;
  ATerm n_7 = t;
  int o_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_7);
    }
  else
    {
      t = n_7;
      {
        ATerm p_7 = t;
        int q_7 = stack_ptr;
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
                      ATerm r_7 = t;
                      int s_7 = stack_ptr;
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
                          LocalPopChoice(s_7);
                        }
                      else
                        {
                          t = r_7;
                          t = a_9(t);
                        }
                    }
                  }
                else
                  {
                    t = a_9(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(q_7);
          }
        else
          {
            t = p_7;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm a_67 (ATerm))
{
  ATerm b_9 (ATerm t)
  {
    ATerm t_7 = t;
    int u_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_67(t);
        LocalPopChoice(u_7);
      }
    else
      {
        t = t_7;
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
      {
        _fail(t);
      }
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
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_9)), term_v_7), term_v_7);
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
      t = oncetd_1(t, e_1);
      {
        q_9 = t;
        if(((l_9 != NULL) && (l_9 != q_9)))
          _fail(q_9);
        else
          l_9 = q_9;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_9)), term_w_7), term_w_7);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm o_63 (ATerm))
{
  ATerm u_9 (ATerm t)
  {
    t = o_63(t);
    {
      ATerm x_7 = t;
      int y_7 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(y_7);
        }
      else
        {
          t = x_7;
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
              t = term_k_7;
              t = explode_string_0(t);
            }
          else
            {
              if(match_int(a_10, 38))
                {
                  t = term_z_7;
                  t = explode_string_0(t);
                }
              else
                {
                  if(match_int(a_10, 60))
                    {
                      t = term_a_8;
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(a_10, 62))
                        {
                          t = term_b_8;
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
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm x_47 (ATerm))
{
  ATerm n_10 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_47, _id);
        {
          t = Tl_0(t);
          t = n_10(t);
        }
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
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
          w_10 :
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
                              {
                                _fail(t);
                              }
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
                          ATerm e_8 = t;
                          int f_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_11 = NULL,v_11 = NULL;
                              ATerm g_8;
                              g_8 = t;
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
                                          {
                                            _fail(t);
                                          }
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
                              t = g_8;
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
                              LocalPopChoice(f_8);
                            }
                          else
                            {
                              t = e_8;
                              t = h_12(t);
                            }
                        }
                      else
                        {
                          t = h_12(t);
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
        t = e_12(t);
        {
          ATerm l_1 (ATerm t)
          {
            ATerm a_12 = NULL;
            a_12 = t;
            b_11 :
            if(!(match_string(a_12, "")))
              {
                _fail(t);
              }
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
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, m_1);
              {
                ATerm n_1 (ATerm t)
                {
                  ATerm c_12 = NULL;
                  c_12 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_h_8), not_null(c_12));
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
    {
      _fail(t);
    }
  return(t);
}
ATerm NUM_0 (ATerm t)
{
  ATerm p_12 = NULL;
  p_12 = t;
  o_12 :
  if(!(match_cons(p_12, sym_NUM_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm VAR_0 (ATerm t)
{
  ATerm r_12 = NULL;
  r_12 = t;
  q_12 :
  if(!(match_cons(r_12, sym_VAR_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm KW_0 (ATerm t)
{
  ATerm t_12 = NULL;
  t_12 = t;
  s_12 :
  if(!(match_cons(t_12, sym_KW_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm sep_by_1 (ATerm t, ATerm h_70 (ATerm))
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
    t = separate_by_1(t, h_70);
    t = concat_0(t);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm m_56 (ATerm))
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              t = filter_1(t, m_56);
              return(t);
            }
            t = Cons_2(t, m_56, p_1);
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
            {
              ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
              a_13 = t;
              z_12 :
              if(((ATgetType(a_13) == AT_LIST) && ((ATermList) a_13 != ATempty)))
                {
                  b_13 = ATgetFirst((ATermList) a_13);
                  c_13 = (ATerm) ATgetNext((ATermList) a_13);
                  {
                    t = not_null(c_13);
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
  ATerm g_13 = NULL;
  g_13 = t;
  f_13 :
  if(!(match_cons(g_13, sym_HS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm l_13 = NULL,n_13 = NULL;
  ATerm s_13 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_13), term_y_8);
    t = copy_0(t);
    return(t);
  }
  ATerm z_8 = t;
  int d_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          ATerm m_13 = NULL;
          m_13 = t;
          if(((l_13 != NULL) && (l_13 != m_13)))
            _fail(m_13);
          else
            l_13 = m_13;
          return(t);
        }
        t = SOpt_2(t, HS_0, r_1);
        return(t);
      }
      t = fetch_1(t, q_1);
      {
        t = not_null(l_13);
        t = string_to_int_0(t);
      }
      LocalPopChoice(d_9);
    }
  else
    {
      t = z_8;
      t = term_h_6;
    }
  {
    n_13 = t;
    k_13 :
    if(match_int(n_13, 0))
      {
        ATerm e_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATempty;
            LocalPopChoice(h_9);
          }
        else
          {
            t = e_9;
            t = s_13(t);
          }
      }
    else
      {
        t = s_13(t);
      }
  }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
  c_14 = t;
  b_14 :
  if(((ATgetType(c_14) == AT_LIST) && ((ATermList) c_14 != ATempty)))
    {
      d_14 = ATgetFirst((ATermList) c_14);
      e_14 = (ATerm) ATgetNext((ATermList) c_14);
      {
        ATerm h_14 = NULL;
        ATerm i_14 = NULL;
        t = term_p_9;
        {
          t = c_64(t);
          {
            i_14 = t;
            if(((h_14 != NULL) && (h_14 != i_14)))
              _fail(i_14);
            else
              h_14 = i_14;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(e_14)), not_null(d_14)), not_null(h_14));
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
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm s_1 (ATerm t)
        {
          ATerm t_9 = t;
          int v_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_9);
            }
          else
            {
              t = t_9;
              {
                t = Cons_2(t, _id, s_1);
                t = Sep_1(t, d_64);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, s_1);
      }
    }
  return(t);
}
ATerm LNAT_2 (ATerm t, ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym_LNAT_2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_15 = NULL;
            t = not_null(x_14);
            {
              ATerm d_15 = NULL;
              t = u_0(t);
              {
                b_15 = t;
                {
                  t = not_null(y_14);
                  {
                    t = v_0(t);
                    {
                      d_15 = t;
                      t = (ATerm) ATmakeAppl(sym_LNAT_2, not_null(b_15), not_null(d_15));
                    }
                  }
                }
              }
            }
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm i_15 = NULL;
              t = not_null(x_14);
              {
                ATerm k_15 = NULL;
                t = u_0(t);
                {
                  i_15 = t;
                  {
                    t = not_null(y_14);
                    {
                      t = v_0(t);
                      {
                        k_15 = t;
                        t = (ATerm) ATmakeAppl(sym_LNAT_2, not_null(i_15), not_null(k_15));
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
ATerm L_2 (ATerm t, ATerm s_0 (ATerm), ATerm t_0 (ATerm))
{
  ATerm z_15 = NULL,j_16 = NULL,k_16 = NULL;
  z_15 = t;
  y_15 :
  if(match_cons(z_15, sym_L_2))
    {
      j_16 = ATgetArgument(z_15, 0);
      k_16 = ATgetArgument(z_15, 1);
      {
        ATerm y_9 = t;
        int b_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_16 = NULL;
            t = not_null(j_16);
            {
              ATerm r_16 = NULL;
              t = s_0(t);
              {
                p_16 = t;
                {
                  t = not_null(k_16);
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
            LocalPopChoice(b_10);
          }
        else
          {
            t = y_9;
            {
              ATerm w_16 = NULL;
              t = not_null(j_16);
              {
                ATerm a_17 = NULL;
                t = s_0(t);
                {
                  w_16 = t;
                  {
                    t = not_null(k_16);
                    {
                      t = t_0(t);
                      {
                        a_17 = t;
                        t = (ATerm) ATmakeAppl(sym_L_2, not_null(w_16), not_null(a_17));
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
  ATerm l_17 = NULL,p_17 = NULL;
  ATerm c_10 = t;
  int d_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2(t, _id, _id);
      LocalPopChoice(d_10);
    }
  else
    {
      t = c_10;
      {
        ATerm e_10 = t;
        int f_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2(t, _id, _id);
            LocalPopChoice(f_10);
          }
        else
          {
            t = e_10;
            {
              ATerm m_17 = NULL;
              ATerm n_17 = NULL;
              m_17 = t;
              {
                if(((l_17 != NULL) && (l_17 != m_17)))
                  _fail(m_17);
                else
                  l_17 = m_17;
                {
                  ATerm o_17 = NULL;
                  t = term_p_9;
                  {
                    t = g_70(t);
                    {
                      o_17 = t;
                      if(((n_17 != NULL) && (n_17 != o_17)))
                        _fail(o_17);
                      else
                        n_17 = o_17;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_k_10), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_17)))), not_null(n_17)))));
                }
              }
            }
          }
      }
    }
  {
    p_17 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_k_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(p_17)))));
  }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm v_17 = NULL;
  v_17 = t;
  u_17 :
  if(!(match_cons(v_17, sym_IS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm h_18 = NULL,k_18 = NULL;
  ATerm r_18 (ATerm t)
  {
    ATerm n_18 = NULL;
    ATerm o_18 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_18), term_y_8);
    {
      t = copy_0(t);
      {
        o_18 = t;
        if(((n_18 != NULL) && (n_18 != o_18)))
          _fail(o_18);
        else
          n_18 = o_18;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(n_18));
    return(t);
  }
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          ATerm i_18 = NULL;
          i_18 = t;
          if(((h_18 != NULL) && (h_18 != i_18)))
            _fail(i_18);
          else
            h_18 = i_18;
          return(t);
        }
        t = SOpt_2(t, IS_0, u_1);
        return(t);
      }
      t = fetch_1(t, t_1);
      {
        t = not_null(h_18);
        t = string_to_int_0(t);
      }
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      t = term_l_6;
    }
  {
    k_18 = t;
    g_18 :
    if(match_int(k_18, 0))
      {
        ATerm o_10 = t;
        int p_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_10;
            LocalPopChoice(p_10);
          }
        else
          {
            t = o_10;
            t = r_18(t);
          }
      }
    else
      {
        t = r_18(t);
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm v_18 = NULL,w_18 = NULL,x_18 = NULL;
  v_18 = t;
  u_18 :
  if(match_cons(v_18, sym__2))
    {
      w_18 = ATgetArgument(v_18, 0);
      x_18 = ATgetArgument(v_18, 1);
      {
        ATerm s_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(w_18), not_null(x_18));
            LocalPopChoice(u_10);
          }
        else
          {
            t = s_10;
            t = SSL_subtr(not_null(w_18), not_null(x_18));
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
  ATerm d_19 = NULL,e_19 = NULL,h_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym__2))
    {
      e_19 = ATgetArgument(d_19, 0);
      h_19 = ATgetArgument(d_19, 1);
      {
        ATerm v_10;
        v_10 = t;
        {
          ATerm x_10 = t;
          int y_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(e_19), not_null(h_19));
              LocalPopChoice(y_10);
            }
          else
            {
              t = x_10;
              t = SSL_gtr(not_null(e_19), not_null(h_19));
            }
        }
        t = v_10;
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
  ATerm n_19 = NULL;
  ATerm d_11 = t;
  int j_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
      o_19 = t;
      m_19 :
      if(match_cons(o_19, sym__2))
        {
          p_19 = ATgetArgument(o_19, 0);
          q_19 = ATgetArgument(o_19, 1);
          {
            if(((n_19 != NULL) && (n_19 != p_19)))
              _fail(p_19);
            else
              n_19 = p_19;
            if(((n_19 != NULL) && (n_19 != q_19)))
              _fail(q_19);
            else
              n_19 = q_19;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(j_11);
    }
  else
    {
      t = d_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm i_69 (ATerm), ATerm j_69 (ATerm))
{
  ATerm s_19 (ATerm t)
  {
    ATerm k_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_69(t);
        LocalPopChoice(l_11);
      }
    else
      {
        t = k_11;
        {
          t = j_69(t);
          t = s_19(t);
        }
      }
    return(t);
  }
  t = s_19(t);
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
  ATerm v_1 (ATerm t)
  {
    ATerm d_20 = NULL,e_20 = NULL,g_20 = NULL;
    d_20 = t;
    u_19 :
    if(match_cons(d_20, sym__2))
      {
        e_20 = ATgetArgument(d_20, 0);
        g_20 = ATgetArgument(d_20, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(e_20), not_null(g_20), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm w_1 (ATerm t)
  {
    ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL,n_20 = NULL;
    k_20 = t;
    w_19 :
    if(match_cons(k_20, sym__3))
      {
        l_20 = ATgetArgument(k_20, 0);
        m_20 = ATgetArgument(k_20, 1);
        n_20 = ATgetArgument(k_20, 2);
        x_19 :
        if(match_int(l_20, 0))
          {
            t = not_null(n_20);
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
  ATerm x_1 (ATerm t)
  {
    ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
    q_20 = t;
    c_20 :
    if(match_cons(q_20, sym__3))
      {
        r_20 = ATgetArgument(q_20, 0);
        s_20 = ATgetArgument(q_20, 1);
        t_20 = ATgetArgument(q_20, 2);
        {
          ATerm x_20 = NULL;
          ATerm p_11;
          p_11 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), term_h_6);
            t = geq_0(t);
          }
          t = p_11;
          {
            ATerm y_20 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), term_h_6);
            {
              t = subt_0(t);
              {
                y_20 = t;
                if(((x_20 != NULL) && (x_20 != y_20)))
                  _fail(y_20);
                else
                  x_20 = y_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_20), not_null(s_20), (ATerm) ATinsert(CheckATermList(not_null(t_20)), not_null(s_20)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, v_1, w_1, x_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm e_21 = NULL;
  e_21 = t;
  t = SSL_string_to_int(not_null(e_21));
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm i_21 = NULL;
  i_21 = t;
  h_21 :
  if(!(match_cons(i_21, sym_VS_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  t_21 = t;
  s_21 :
  if(match_cons(t_21, sym_SOpt_2))
    {
      u_21 = ATgetArgument(t_21, 0);
      v_21 = ATgetArgument(t_21, 1);
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_21 = NULL;
            t = not_null(u_21);
            {
              ATerm a_22 = NULL;
              t = q_0(t);
              {
                y_21 = t;
                {
                  t = not_null(v_21);
                  {
                    t = r_0(t);
                    {
                      a_22 = t;
                      t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(y_21), not_null(a_22));
                    }
                  }
                }
              }
            }
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            {
              ATerm e_22 = NULL;
              t = not_null(u_21);
              {
                ATerm g_22 = NULL;
                t = q_0(t);
                {
                  e_22 = t;
                  {
                    t = not_null(v_21);
                    {
                      t = r_0(t);
                      {
                        g_22 = t;
                        t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(e_22), not_null(g_22));
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
ATerm Vspace_0 (ATerm t)
{
  ATerm t_22 = NULL,v_22 = NULL;
  ATerm c_23 (ATerm t)
  {
    ATerm y_22 = NULL;
    ATerm z_22 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(v_22), term_h_8);
    {
      t = copy_0(t);
      {
        z_22 = t;
        if(((y_22 != NULL) && (y_22 != z_22)))
          _fail(z_22);
        else
          y_22 = z_22;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(y_22))));
    return(t);
  }
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm z_1 (ATerm t)
        {
          ATerm u_22 = NULL;
          u_22 = t;
          if(((t_22 != NULL) && (t_22 != u_22)))
            _fail(u_22);
          else
            t_22 = u_22;
          return(t);
        }
        t = SOpt_2(t, VS_0, z_1);
        return(t);
      }
      t = fetch_1(t, y_1);
      {
        t = not_null(t_22);
        t = string_to_int_0(t);
      }
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      t = term_l_6;
    }
  {
    v_22 = t;
    s_22 :
    if(match_int(v_22, 0))
      {
        ATerm z_11 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_q_10;
            LocalPopChoice(d_12);
          }
        else
          {
            t = z_11;
            t = c_23(t);
          }
      }
    else
      {
        t = c_23(t);
      }
  }
  return(t);
}
ATerm AC_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm j_23 = NULL,k_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym_AC_1))
    {
      k_23 = ATgetArgument(j_23, 0);
      {
        ATerm f_12 = t;
        int g_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_23 = NULL;
            t = not_null(k_23);
            {
              t = p_0(t);
              {
                m_23 = t;
                t = (ATerm) ATmakeAppl(sym_AC_1, not_null(m_23));
              }
            }
            LocalPopChoice(g_12);
          }
        else
          {
            t = f_12;
            {
              ATerm p_23 = NULL;
              t = not_null(k_23);
              {
                t = p_0(t);
                {
                  p_23 = t;
                  t = (ATerm) ATmakeAppl(sym_AC_1, not_null(p_23));
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
ATerm AR_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm a_24 = NULL,b_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym_AR_1))
    {
      b_24 = ATgetArgument(a_24, 0);
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_24 = NULL;
            t = not_null(b_24);
            {
              t = o_0(t);
              {
                d_24 = t;
                t = (ATerm) ATmakeAppl(sym_AR_1, not_null(d_24));
              }
            }
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
            {
              ATerm g_24 = NULL;
              t = not_null(b_24);
              {
                t = o_0(t);
                {
                  g_24 = t;
                  t = (ATerm) ATmakeAppl(sym_AR_1, not_null(g_24));
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
ATerm AL_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm r_24 = NULL,s_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym_AL_1))
    {
      s_24 = ATgetArgument(r_24, 0);
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_24 = NULL;
            t = not_null(s_24);
            {
              t = n_0(t);
              {
                u_24 = t;
                t = (ATerm) ATmakeAppl(sym_AL_1, not_null(u_24));
              }
            }
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            {
              ATerm x_24 = NULL;
              t = not_null(s_24);
              {
                t = n_0(t);
                {
                  x_24 = t;
                  t = (ATerm) ATmakeAppl(sym_AL_1, not_null(x_24));
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
  ATerm u_12 = t;
  int w_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = AL_1(t, _id);
      t = term_x_12;
      LocalPopChoice(w_12);
    }
  else
    {
      t = u_12;
      {
        ATerm y_12 = t;
        int d_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = AR_1(t, _id);
            t = term_e_13;
            LocalPopChoice(d_13);
          }
        else
          {
            t = y_12;
            {
              t = AC_1(t, _id);
              t = term_h_13;
            }
          }
      }
    }
  return(t);
}
ATerm make_hs_0 (ATerm t)
{
  ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
  ATerm t_25 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(n_25));
    return(t);
  }
  l_25 = t;
  g_25 :
  if(match_cons(l_25, sym_AL_1))
    {
      m_25 = ATgetArgument(l_25, 0);
      if(((k_25 != NULL) && (k_25 != m_25)))
        _fail(m_25);
      else
        k_25 = m_25;
    }
  else
    {
      if(match_cons(l_25, sym_AR_1))
        {
          m_25 = ATgetArgument(l_25, 0);
          if(((k_25 != NULL) && (k_25 != m_25)))
            _fail(m_25);
          else
            k_25 = m_25;
        }
      else
        {
          if(match_cons(l_25, sym_AC_1))
            {
              m_25 = ATgetArgument(l_25, 0);
              if(((k_25 != NULL) && (k_25 != m_25)))
                _fail(m_25);
              else
                k_25 = m_25;
            }
          else
            {
              _fail(t);
            }
        }
    }
  {
    t = not_null(k_25);
    {
      t = Hspace_0(t);
      {
        n_25 = t;
        j_25 :
        if(((ATermList) n_25 == ATempty))
          {
            {
            }
          }
        else
          {
            t = t_25(t);
          }
      }
    }
  }
  return(t);
}
ATerm toa_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  x_26 :
  if(match_cons(z_26, sym_R_2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      y_26 :
      if(((ATermList) a_27 == ATempty))
        {
          {
            ATerm d_27 = NULL,e_27 = NULL;
            ATerm f_27 = NULL,g_27 = NULL;
            t = term_p_9;
            {
              t = d_70(t);
              {
                f_27 = t;
                w_26 :
                if(match_cons(f_27, sym_AOPTIONS_1))
                  {
                    g_27 = ATgetArgument(f_27, 0);
                    {
                      ATerm c_29 = NULL;
                      if(((d_27 != NULL) && (d_27 != g_27)))
                        _fail(g_27);
                      else
                        d_27 = g_27;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_27), not_null(d_27));
                        {
                          ATerm f_29 (ATerm t)
                          {
                            ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL,k_27 = NULL,l_27 = NULL,m_27 = NULL,n_27 = NULL,o_27 = NULL,p_27 = NULL,q_27 = NULL,r_27 = NULL;
                            ATerm h_29 (ATerm t)
                            {
                              ATerm e_28 = NULL;
                              ATerm f_28 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_27), not_null(p_27));
                              {
                                t = f_29(t);
                                {
                                  f_28 = t;
                                  if(((e_28 != NULL) && (e_28 != f_28)))
                                    _fail(f_28);
                                  else
                                    e_28 = f_28;
                                }
                              }
                              t = (ATerm) ATinsert(CheckATermList(not_null(e_28)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, not_null(h_27), not_null(i_27)))));
                              return(t);
                            }
                            ATerm i_29 (ATerm t)
                            {
                              ATerm m_28 = NULL,o_28 = NULL,q_28 = NULL;
                              ATerm i_13;
                              i_13 = t;
                              {
                                ATerm n_28 = NULL;
                                t = not_null(q_27);
                                {
                                  t = aopt_0(t);
                                  {
                                    n_28 = t;
                                    if(((m_28 != NULL) && (m_28 != n_28)))
                                      _fail(n_28);
                                    else
                                      m_28 = n_28;
                                  }
                                }
                              }
                              t = i_13;
                              {
                                ATerm j_13;
                                j_13 = t;
                                {
                                  ATerm p_28 = NULL;
                                  t = not_null(q_27);
                                  {
                                    t = make_hs_0(t);
                                    {
                                      p_28 = t;
                                      if(((o_28 != NULL) && (o_28 != p_28)))
                                        _fail(p_28);
                                      else
                                        o_28 = p_28;
                                    }
                                  }
                                }
                                t = j_13;
                                {
                                  ATerm r_28 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_27)), not_null(j_27)), not_null(r_27));
                                  {
                                    t = f_29(t);
                                    {
                                      r_28 = t;
                                      if(((q_28 != NULL) && (q_28 != r_28)))
                                        _fail(r_28);
                                      else
                                        q_28 = r_28;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_28)), not_null(o_28)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(m_28)), not_null(n_27)));
                                }
                              }
                              return(t);
                            }
                            ATerm j_29 (ATerm t)
                            {
                              ATerm y_28 = NULL,a_29 = NULL;
                              ATerm o_13;
                              o_13 = t;
                              {
                                ATerm z_28 = NULL;
                                t = not_null(q_27);
                                {
                                  t = aopt_0(t);
                                  {
                                    z_28 = t;
                                    if(((y_28 != NULL) && (y_28 != z_28)))
                                      _fail(z_28);
                                    else
                                      y_28 = z_28;
                                  }
                                }
                              }
                              t = o_13;
                              {
                                ATerm b_29 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_27), not_null(r_27));
                                {
                                  t = f_29(t);
                                  {
                                    b_29 = t;
                                    if(((a_29 != NULL) && (a_29 != b_29)))
                                      _fail(b_29);
                                    else
                                      a_29 = b_29;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(a_29)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(y_28)), not_null(n_27)));
                              }
                              return(t);
                            }
                            l_27 = t;
                            g_26 :
                            if(match_cons(l_27, sym__2))
                              {
                                m_27 = ATgetArgument(l_27, 0);
                                p_27 = ATgetArgument(l_27, 1);
                                h_26 :
                                if(((ATermList) m_27 == ATempty))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(m_27) == AT_LIST) && ((ATermList) m_27 != ATempty)))
                                      {
                                        n_27 = ATgetFirst((ATermList) m_27);
                                        o_27 = (ATerm) ATgetNext((ATermList) m_27);
                                        i_26 :
                                        if(((ATgetType(p_27) == AT_LIST) && ((ATermList) p_27 != ATempty)))
                                          {
                                            q_27 = ATgetFirst((ATermList) p_27);
                                            r_27 = (ATerm) ATgetNext((ATermList) p_27);
                                            j_26 :
                                            if(((ATgetType(o_27) == AT_LIST) && ((ATermList) o_27 != ATempty)))
                                              {
                                                j_27 = ATgetFirst((ATermList) o_27);
                                                k_27 = (ATerm) ATgetNext((ATermList) o_27);
                                                k_26 :
                                                if(match_cons(n_27, sym_C_2))
                                                  {
                                                    h_27 = ATgetArgument(n_27, 0);
                                                    i_27 = ATgetArgument(n_27, 1);
                                                    {
                                                      ATerm p_13 = t;
                                                      int q_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = h_29(t);
                                                          LocalPopChoice(q_13);
                                                        }
                                                      else
                                                        {
                                                          t = p_13;
                                                          {
                                                            ATerm r_13 = t;
                                                            int t_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = i_29(t);
                                                                LocalPopChoice(t_13);
                                                              }
                                                            else
                                                              {
                                                                t = r_13;
                                                                t = j_29(t);
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm u_13 = t;
                                                    int v_13 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = i_29(t);
                                                        LocalPopChoice(v_13);
                                                      }
                                                    else
                                                      {
                                                        t = u_13;
                                                        t = j_29(t);
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                l_26 :
                                                if(match_cons(n_27, sym_C_2))
                                                  {
                                                    h_27 = ATgetArgument(n_27, 0);
                                                    i_27 = ATgetArgument(n_27, 1);
                                                    {
                                                      ATerm w_13 = t;
                                                      int x_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = h_29(t);
                                                          LocalPopChoice(x_13);
                                                        }
                                                      else
                                                        {
                                                          t = w_13;
                                                          t = j_29(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = j_29(t);
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            t_26 :
                                            u_26 :
                                            if(match_cons(n_27, sym_C_2))
                                              {
                                                h_27 = ATgetArgument(n_27, 0);
                                                i_27 = ATgetArgument(n_27, 1);
                                                t = h_29(t);
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
                          t = f_29(t);
                          {
                            c_29 = t;
                            if(((e_27 != NULL) && (e_27 != c_29)))
                              _fail(c_29);
                            else
                              e_27 = c_29;
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
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_k_10), (ATerm) ATinsert(ATempty, not_null(e_27)));
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
ATerm R_2 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm y_29 = NULL,z_29 = NULL,a_30 = NULL;
  y_29 = t;
  x_29 :
  if(match_cons(y_29, sym_R_2))
    {
      z_29 = ATgetArgument(y_29, 0);
      a_30 = ATgetArgument(y_29, 1);
      {
        ATerm y_13 = t;
        int z_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_30 = NULL;
            t = not_null(z_29);
            {
              ATerm f_30 = NULL;
              t = l_0(t);
              {
                d_30 = t;
                {
                  t = not_null(a_30);
                  {
                    t = m_0(t);
                    {
                      f_30 = t;
                      t = (ATerm) ATmakeAppl(sym_R_2, not_null(d_30), not_null(f_30));
                    }
                  }
                }
              }
            }
            LocalPopChoice(z_13);
          }
        else
          {
            t = y_13;
            {
              ATerm j_30 = NULL;
              t = not_null(z_29);
              {
                ATerm l_30 = NULL;
                t = l_0(t);
                {
                  j_30 = t;
                  {
                    t = not_null(a_30);
                    {
                      t = m_0(t);
                      {
                        l_30 = t;
                        t = (ATerm) ATmakeAppl(sym_R_2, not_null(j_30), not_null(l_30));
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
ATerm construct_rows_0 (ATerm t)
{
  ATerm a_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, a_2);
  {
    ATerm d_32 (ATerm t)
    {
      ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
      ATerm h_32 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), (ATerm) ATinsert(CheckATermList(not_null(i_31)), not_null(g_31)));
        t = d_32(t);
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
                        ATerm a_14 = t;
                        int f_14 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm t_31 = NULL,v_31 = NULL;
                            ATerm g_14;
                            g_14 = t;
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
                            t = g_14;
                            {
                              ATerm w_31 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_31), (ATerm) ATempty);
                              {
                                t = d_32(t);
                                {
                                  w_31 = t;
                                  if(((v_31 != NULL) && (v_31 != w_31)))
                                    _fail(w_31);
                                  else
                                    v_31 = w_31;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_31)), (ATerm) ATmakeAppl(sym_R_2, not_null(c_31), not_null(d_31))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(t_31)));
                            }
                            LocalPopChoice(f_14);
                          }
                        else
                          {
                            t = a_14;
                            t = h_32(t);
                          }
                      }
                    }
                  else
                    {
                      t = h_32(t);
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
    t = d_32(t);
    {
      ATerm b_2 (ATerm t)
      {
        ATerm j_14 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = j_14;
          }
        return(t);
      }
      t = filter_1(t, b_2);
    }
  }
  return(t);
}
ATerm Abox2html_0 (ATerm t)
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
              t = term_k_14;
            }
          else
            {
              if(match_cons(s_37, sym_L_2))
                {
                  t_37 = ATgetArgument(s_37, 0);
                  r_37 = ATgetArgument(s_37, 1);
                  t = term_k_14;
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
                                        ATerm l_14 = t;
                                        int m_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm t_38 = NULL;
                                            t_38 = t;
                                            l_33 :
                                            if(((ATermList) t_38 == ATempty))
                                              {
                                                {
                                                  t = not_null(r_37);
                                                  {
                                                    ATerm f_2 (ATerm t)
                                                    {
                                                      ATerm n_14 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = Nil_0(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = n_14;
                                                        }
                                                      return(t);
                                                    }
                                                    t = filter_1(t, f_2);
                                                  }
                                                }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(m_14);
                                          }
                                        else
                                          {
                                            t = l_14;
                                            {
                                              ATerm u_38 = NULL;
                                              ATerm v_38 = NULL;
                                              ATerm g_2 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, term_o_14);
                                                return(t);
                                              }
                                              t = at_last_1(t, g_2);
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
                                                      ATerm h_2 (ATerm t)
                                                      {
                                                        ATerm p_14 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = p_14;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, h_2);
                                                      {
                                                        ATerm i_2 (ATerm t)
                                                        {
                                                          t = not_null(q_38);
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, i_2);
                                                        {
                                                          w_38 = t;
                                                          if(((v_38 != NULL) && (v_38 != w_38)))
                                                            _fail(w_38);
                                                          else
                                                            v_38 = w_38;
                                                        }
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_38)), term_q_14);
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
                                                      ATerm j_2 (ATerm t)
                                                      {
                                                        ATerm r_14 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = r_14;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, j_2);
                                                      {
                                                        ATerm k_2 (ATerm t)
                                                        {
                                                          ATerm m_2 (ATerm t)
                                                          {
                                                            t = term_q_10;
                                                            return(t);
                                                          }
                                                          t = tov_1(t, m_2);
                                                          return(t);
                                                        }
                                                        ATerm l_2 (ATerm t)
                                                        {
                                                          ATerm n_2 (ATerm t)
                                                          {
                                                            ATerm o_2 (ATerm t)
                                                            {
                                                              t = not_null(a_39);
                                                              return(t);
                                                            }
                                                            t = tov_1(t, o_2);
                                                            return(t);
                                                          }
                                                          t = map_1(t, n_2);
                                                          return(t);
                                                        }
                                                        t = Cons_2(t, k_2, l_2);
                                                        {
                                                          ATerm p_2 (ATerm t)
                                                          {
                                                            t = not_null(b_39);
                                                            return(t);
                                                          }
                                                          t = separate_by_1(t, p_2);
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
                                    }
                                    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, not_null(c_39))), term_q_14);
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
                                                  ATerm q_2 (ATerm t)
                                                  {
                                                    ATerm s_14 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = s_14;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, q_2);
                                                  {
                                                    ATerm r_2 (ATerm t)
                                                    {
                                                      t = not_null(i_39);
                                                      return(t);
                                                    }
                                                    t = sep_by_1(t, r_2);
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
                                              ATerm t_14 = t;
                                              int u_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = KW_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_z_14), (ATerm) ATinsert(ATempty, not_null(r_37)));
                                                  LocalPopChoice(u_14);
                                                }
                                              else
                                                {
                                                  t = t_14;
                                                  {
                                                    ATerm a_15 = t;
                                                    int c_15 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = VAR_0(t);
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_e_15), (ATerm) ATinsert(ATempty, not_null(r_37)));
                                                        LocalPopChoice(c_15);
                                                      }
                                                    else
                                                      {
                                                        t = a_15;
                                                        {
                                                          ATerm f_15 = t;
                                                          int g_15 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = NUM_0(t);
                                                              t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_h_15), (ATerm) ATinsert(ATempty, not_null(r_37)));
                                                              LocalPopChoice(g_15);
                                                            }
                                                          else
                                                            {
                                                              t = f_15;
                                                              {
                                                                ATerm j_15 = t;
                                                                int l_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = MATH_0(t);
                                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_m_15), (ATerm) ATinsert(ATempty, not_null(r_37)));
                                                                    LocalPopChoice(l_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = j_15;
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
                                                      ATerm s_2 (ATerm t)
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
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      t = map_1(t, s_2);
                                                      {
                                                        w_39 = t;
                                                        {
                                                          if(((r_39 != NULL) && (r_39 != w_39)))
                                                            _fail(w_39);
                                                          else
                                                            r_39 = w_39;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_n_15), (ATerm) ATinsert(ATempty, not_null(r_39))))));
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
                                                {
                                                  _fail(t);
                                                }
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
          ATerm t_2 (ATerm t)
          {
            t = not_null(g_41);
            return(t);
          }
          t = at_end_1(t, t_2);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm k_63 (ATerm))
{
  ATerm k_41 (ATerm t)
  {
    ATerm o_15 = t;
    int p_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = k_63(t);
        LocalPopChoice(p_15);
      }
    else
      {
        t = o_15;
        t = Cons_2(t, _id, k_41);
      }
    return(t);
  }
  t = k_41(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm e_63 (ATerm))
{
  ATerm l_41 (ATerm t)
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_63(t);
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        t = Cons_2(t, _id, l_41);
      }
    return(t);
  }
  t = l_41(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm x_62 (ATerm))
{
  ATerm n_41 = NULL;
  ATerm u_2 (ATerm t)
  {
    t = Cons_2(t, x_62, _id);
    {
      ATerm v_2 (ATerm t)
      {
        ATerm o_41 = NULL;
        o_41 = t;
        if(((n_41 != NULL) && (n_41 != o_41)))
          _fail(o_41);
        else
          n_41 = o_41;
        return(t);
      }
      t = Cons_2(t, _id, v_2);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, u_2);
  {
    ATerm w_2 (ATerm t)
    {
      t = not_null(n_41);
      return(t);
    }
    t = split_2(t, _id, w_2);
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
        ATerm g_42 = NULL,h_42 = NULL,i_42 = NULL,q_42 = NULL,r_42 = NULL,s_42 = NULL;
        t = not_null(d_42);
        {
          ATerm y_2 (ATerm t)
          {
            ATerm j_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
            j_42 = t;
            s_41 :
            if(match_cons(j_42, sym_V_2))
              {
                m_42 = ATgetArgument(j_42, 0);
                n_42 = ATgetArgument(j_42, 1);
                t_41 :
                if(((ATgetType(n_42) == AT_LIST) && ((ATermList) n_42 != ATempty)))
                  {
                    o_42 = ATgetFirst((ATermList) n_42);
                    p_42 = (ATerm) ATgetNext((ATermList) n_42);
                    {
                      if(((g_42 != NULL) && (g_42 != m_42)))
                        _fail(m_42);
                      else
                        g_42 = m_42;
                      {
                        if(((h_42 != NULL) && (h_42 != o_42)))
                          _fail(o_42);
                        else
                          h_42 = o_42;
                        if(((i_42 != NULL) && (i_42 != p_42)))
                          _fail(p_42);
                        else
                          i_42 = p_42;
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
          t = split_fetch_1(t, y_2);
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
                    ATerm s_15 = t;
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
                          {
                            _fail(t);
                          }
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = s_15;
                      }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(i_42)), not_null(h_42));
                      {
                        ATerm a_43 = NULL;
                        ATerm a_3 (ATerm t)
                        {
                          ATerm j_3 (ATerm t)
                          {
                            ATerm x_42 = NULL;
                            x_42 = t;
                            if(((w_42 != NULL) && (w_42 != x_42)))
                              _fail(x_42);
                            else
                              w_42 = x_42;
                            return(t);
                          }
                          t = Cons_2(t, j_3, Nil_0);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, not_null(c_42), (ATerm) ATinsert(CheckATermList(not_null(s_42)), not_null(w_42))));
                          return(t);
                        }
                        t = at_last_1(t, a_3);
                        {
                          y_42 = t;
                          {
                            ATerm b_43 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(r_42), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(g_42), not_null(y_42))));
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
  ATerm k_3 (ATerm t)
  {
    ATerm l_3 (ATerm t)
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
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
          LocalPopChoice(u_15);
        }
      else
        {
          t = t_15;
          t = Distribute_0(t);
        }
      return(t);
    }
    t = try_1(t, l_3);
    return(t);
  }
  t = topdown_1(t, k_3);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm z_43 = NULL;
  t = normalize_0(t);
  {
    ATerm q_3 (ATerm t)
    {
      t = try_1(t, Abox2html_0);
      return(t);
    }
    t = topdown_1(t, q_3);
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
ATerm _2 (ATerm t, ATerm f_37 (ATerm), ATerm g_37 (ATerm))
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
          t = f_37(t);
          {
            l_44 = t;
            {
              t = not_null(i_44);
              {
                t = g_37(t);
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
    {
      _fail(t);
    }
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
  ATerm v_15;
  v_15 = t;
  {
    ATerm w_15 = t;
    int x_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_3 (ATerm t)
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
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, r_3);
        LocalPopChoice(x_15);
      }
    else
      {
        t = w_15;
        {
          ATerm c_45 = NULL;
          t = term_a_16;
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
  t = v_15;
  {
    ATerm s_3 (ATerm t)
    {
      t = not_null(z_44);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_3);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm x_53 (ATerm))
{
  ATerm b_16;
  b_16 = t;
  {
    ATerm h_45 = NULL,j_45 = NULL;
    ATerm c_16;
    c_16 = t;
    {
      ATerm i_45 = NULL;
      t = x_53(t);
      {
        i_45 = t;
        if(((h_45 != NULL) && (h_45 != i_45)))
          _fail(i_45);
        else
          h_45 = i_45;
      }
    }
    t = c_16;
    {
      ATerm k_45 = NULL;
      k_45 = t;
      if(((j_45 != NULL) && (j_45 != k_45)))
        _fail(k_45);
      else
        j_45 = k_45;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_45)), not_null(h_45)));
        t = printnl_0(t);
      }
    }
  }
  t = b_16;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm e_54 (ATerm))
{
  ATerm d_16;
  d_16 = t;
  {
    t = e_54(t);
    {
      ATerm t_3 (ATerm t)
      {
        t = term_e_16;
        return(t);
      }
      t = debug_1(t, t_3);
    }
  }
  t = d_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm r_45 = NULL,s_45 = NULL;
  ATerm f_16 = t;
  int g_16 = stack_ptr;
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
        {
          _fail(t);
        }
      LocalPopChoice(g_16);
    }
  else
    {
      t = f_16;
      {
        ATerm w_45 = NULL;
        ATerm x_45 = NULL;
        ATerm u_3 (ATerm t)
        {
          t = term_h_16;
          return(t);
        }
        t = obsolete_1(t, u_3);
        {
          w_45 = t;
          {
            if(((s_45 != NULL) && (s_45 != w_45)))
              _fail(w_45);
            else
              s_45 = w_45;
            {
              ATerm i_16;
              i_16 = t;
              {
                ATerm y_45 = NULL;
                t = term_l_16;
                {
                  y_45 = t;
                  if(((x_45 != NULL) && (x_45 != y_45)))
                    _fail(y_45);
                  else
                    x_45 = y_45;
                }
              }
              t = i_16;
              t = SSL_open_file(not_null(s_45), not_null(x_45));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm u_62 (ATerm))
{
  ATerm c_46 (ATerm t)
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_62, _id);
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        t = Cons_2(t, _id, c_46);
      }
    return(t);
  }
  t = c_46(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_52 (ATerm))
{
  t = fetch_1(t, g_52);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm f_46 = NULL;
  ATerm o_16;
  o_16 = t;
  {
    ATerm z_3 (ATerm t)
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
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, z_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_16), not_null(f_46)), term_q_16));
      {
        t = printnl_0(t);
        {
          t = term_l_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_16;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_46 = NULL;
  k_46 = t;
  j_46 :
  if(!(match_cons(k_46, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_53 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm t_16 = t;
    int u_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_16);
      }
    else
      {
        t = t_16;
        {
          ATerm v_16 = t;
          int x_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(x_16);
            }
          else
            {
              t = v_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_4);
  t = b_53(t);
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
  q_46 = t;
  o_46 :
  if(match_string(q_46, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
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
                ATerm y_16;
                y_16 = t;
                {
                  t = not_null(r_46);
                  t = i_0(t);
                }
                t = y_16;
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
  ATerm z_16 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm q_47 = NULL;
        q_47 = t;
        d_47 :
        if(!(match_string(q_47, "-S")))
          {
            if(!(match_string(q_47, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_c_17;
        return(t);
      }
      ATerm e_4 (ATerm t)
      {
        t = term_d_17;
        return(t);
      }
      t = Option_3(t, b_4, d_4, e_4);
      LocalPopChoice(b_17);
    }
  else
    {
      t = z_16;
      {
        ATerm e_17 = t;
        int f_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_4 (ATerm t)
            {
              ATerm r_47 = NULL;
              r_47 = t;
              e_47 :
              if(!(match_string(r_47, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_4 (ATerm t)
            {
              t = term_g_17;
              return(t);
            }
            ATerm i_4 (ATerm t)
            {
              t = term_h_17;
              return(t);
            }
            t = Option_3(t, g_4, h_4, i_4);
            LocalPopChoice(f_17);
          }
        else
          {
            t = e_17;
            {
              ATerm i_17 = t;
              int j_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm j_4 (ATerm t)
                  {
                    ATerm s_47 = NULL;
                    s_47 = t;
                    f_47 :
                    if(!(match_string(s_47, "-v")))
                      {
                        if(!(match_string(s_47, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm k_4 (ATerm t)
                  {
                    t = term_k_17;
                    return(t);
                  }
                  ATerm l_4 (ATerm t)
                  {
                    t = term_q_17;
                    return(t);
                  }
                  t = Option_3(t, j_4, k_4, l_4);
                  LocalPopChoice(j_17);
                }
              else
                {
                  t = i_17;
                  {
                    ATerm r_17 = t;
                    int s_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm m_4 (ATerm t)
                        {
                          ATerm t_47 = NULL;
                          t_47 = t;
                          g_47 :
                          if(!(match_string(t_47, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm n_4 (ATerm t)
                        {
                          ATerm u_47 = NULL;
                          ATerm v_47 = NULL;
                          v_47 = t;
                          if(((u_47 != NULL) && (u_47 != v_47)))
                            _fail(v_47);
                          else
                            u_47 = v_47;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(u_47));
                          return(t);
                        }
                        ATerm o_4 (ATerm t)
                        {
                          t = term_t_17;
                          return(t);
                        }
                        t = ArgOption_3(t, m_4, n_4, o_4);
                        LocalPopChoice(s_17);
                      }
                    else
                      {
                        t = r_17;
                        {
                          ATerm w_17 = t;
                          int x_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm p_4 (ATerm t)
                              {
                                ATerm z_47 = NULL;
                                z_47 = t;
                                i_47 :
                                if(!(match_string(z_47, "-i")))
                                  {
                                    if(!(match_string(z_47, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm q_4 (ATerm t)
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
                              ATerm r_4 (ATerm t)
                              {
                                t = term_y_17;
                                return(t);
                              }
                              t = ArgOption_3(t, p_4, q_4, r_4);
                              LocalPopChoice(x_17);
                            }
                          else
                            {
                              t = w_17;
                              {
                                ATerm z_17 = t;
                                int a_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm s_4 (ATerm t)
                                    {
                                      ATerm c_48 = NULL;
                                      c_48 = t;
                                      k_47 :
                                      if(!(match_string(c_48, "-o")))
                                        {
                                          if(!(match_string(c_48, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm x_4 (ATerm t)
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
                                    ATerm y_4 (ATerm t)
                                    {
                                      t = term_b_18;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, s_4, x_4, y_4);
                                    LocalPopChoice(a_18);
                                  }
                                else
                                  {
                                    t = z_17;
                                    {
                                      ATerm c_18 = t;
                                      int d_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm z_4 (ATerm t)
                                          {
                                            ATerm f_48 = NULL;
                                            f_48 = t;
                                            m_47 :
                                            if(!(match_string(f_48, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm a_5 (ATerm t)
                                          {
                                            t = term_e_18;
                                            return(t);
                                          }
                                          ATerm b_5 (ATerm t)
                                          {
                                            t = term_f_18;
                                            return(t);
                                          }
                                          t = Option_3(t, z_4, a_5, b_5);
                                          LocalPopChoice(d_18);
                                        }
                                      else
                                        {
                                          t = c_18;
                                          {
                                            ATerm c_5 (ATerm t)
                                            {
                                              ATerm g_48 = NULL;
                                              g_48 = t;
                                              n_47 :
                                              if(!(match_string(g_48, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm d_5 (ATerm t)
                                            {
                                              t = term_j_18;
                                              return(t);
                                            }
                                            ATerm e_5 (ATerm t)
                                            {
                                              t = term_l_18;
                                              return(t);
                                            }
                                            t = Option_3(t, c_5, d_5, e_5);
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
ATerm at_end_1 (ATerm t, ATerm a_63 (ATerm))
{
  ATerm w_48 (ATerm t)
  {
    ATerm m_18 = t;
    int p_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_48);
        LocalPopChoice(p_18);
      }
    else
      {
        t = m_18;
        {
          t = Nil_0(t);
          t = a_63(t);
        }
      }
    return(t);
  }
  t = w_48(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm q_18 = t;
  int s_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_18);
    }
  else
    {
      t = q_18;
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
                ATerm f_5 (ATerm t)
                {
                  t = not_null(b_49);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, f_5);
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
ATerm long_description_1 (ATerm t, ATerm i_51 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm k_49 (ATerm t)
  {
    ATerm t_18 = t;
    int y_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(y_18);
      }
    else
      {
        t = t_18;
        t = Cons_2(t, m_62, k_49);
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
          ATerm z_18;
          z_18 = t;
          {
            ATerm x_49 = NULL,z_49 = NULL,b_50 = NULL;
            ATerm a_19;
            a_19 = t;
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
            t = a_19;
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
          t = z_18;
          {
            ATerm g_5 (ATerm t)
            {
              t = not_null(w_49);
              return(t);
            }
            t = reverse_acc_2(t, g_0, g_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) t_49 == ATempty))
        {
          {
            t = term_p_9;
            t = h_0(t);
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
  ATerm h_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_51 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_42 (ATerm))
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
          t = k_42(t);
          {
            n_50 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_50));
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
  ATerm v_50 = NULL;
  ATerm i_5 (ATerm t)
  {
    ATerm j_5 (ATerm t)
    {
      ATerm w_50 = NULL;
      w_50 = t;
      if(((v_50 != NULL) && (v_50 != w_50)))
        _fail(w_50);
      else
        v_50 = w_50;
      return(t);
    }
    t = Program_1(t, j_5);
    return(t);
  }
  t = option_defined_1(t, i_5);
  {
    ATerm k_5 (ATerm t)
    {
      ATerm x_50 = NULL;
      ATerm y_50 = NULL;
      t = term_p_9;
      {
        ATerm l_5 (ATerm t)
        {
          t = not_null(v_50);
          return(t);
        }
        t = short_description_1(t, l_5);
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
        t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATempty, not_null(x_50)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, k_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATempty, term_b_19));
      {
        t = printnl_0(t);
        {
          t = term_i_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm m_5 (ATerm t)
                {
                  ATerm z_50 = NULL;
                  z_50 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_50)), term_j_19));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, m_5);
                {
                  ATerm n_5 (ATerm t)
                  {
                    ATerm b_51 = NULL;
                    ATerm c_51 = NULL;
                    t = term_p_9;
                    {
                      ATerm o_5 (ATerm t)
                      {
                        t = not_null(v_50);
                        return(t);
                      }
                      t = long_description_1(t, o_5);
                      {
                        t = concat_strings_0(t);
                        {
                          c_51 = t;
                          if(((b_51 != NULL) && (b_51 != c_51)))
                            _fail(c_51);
                          else
                            b_51 = c_51;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_51)), term_k_19));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, n_5);
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
        ATerm l_19;
        l_19 = t;
        t = SSL_printnl(not_null(q_51), not_null(r_51));
        t = l_19;
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
  ATerm y_51 = NULL,z_51 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym_Undefined_1))
    {
      z_51 = ATgetArgument(y_51, 0);
      {
        ATerm b_52 = NULL;
        t = not_null(z_51);
        {
          t = l_42(t);
          {
            b_52 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_52));
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
  ATerm h_52 = NULL;
  h_52 = t;
  f_52 :
  if(!(match_cons(h_52, sym_Help_0)))
    {
      _fail(t);
    }
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
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL;
  t_52 = t;
  s_52 :
  if(match_cons(t_52, sym__3))
    {
      u_52 = ATgetArgument(t_52, 0);
      v_52 = ATgetArgument(t_52, 1);
      w_52 = ATgetArgument(t_52, 2);
      {
        ATerm r_19;
        r_19 = t;
        {
          ATerm a_53 = NULL;
          ATerm c_53 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_52), not_null(v_52));
          {
            ATerm t_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_19);
              }
            else
              {
                t = t_19;
                t = (ATerm) ATempty;
              }
            {
              c_53 = t;
              if(((a_53 != NULL) && (a_53 != c_53)))
                _fail(c_53);
              else
                a_53 = c_53;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_52), not_null(v_52), (ATerm) ATinsert(CheckATermList(not_null(a_53)), not_null(w_52)));
            t = table_put_0(t);
          }
        }
        t = r_19;
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
  ATerm g_53 = NULL;
  ATerm h_53 = NULL;
  t = term_p_9;
  {
    t = m_51(t);
    {
      h_53 = t;
      if(((g_53 != NULL) && (g_53 != h_53)))
        _fail(h_53);
      else
        g_53 = h_53;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_19, term_g_19, not_null(g_53));
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
    {
      t = register_usage_1(t, f_0);
    }
  else
    {
      if(((ATgetType(n_53) == AT_LIST) && ((ATermList) n_53 != ATempty)))
        {
          o_53 = ATgetFirst((ATermList) n_53);
          p_53 = (ATerm) ATgetNext((ATermList) n_53);
          {
            ATerm s_53 = NULL;
            ATerm y_19;
            y_19 = t;
            {
              t = not_null(o_53);
              t = b_0(t);
            }
            t = y_19;
            {
              ATerm t_53 = NULL;
              t = term_p_9;
              {
                t = c_0(t);
                {
                  t_53 = t;
                  if(((s_53 != NULL) && (s_53 != t_53)))
                    _fail(t_53);
                  else
                    s_53 = t_53;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(p_53)), not_null(s_53));
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
  ATerm p_5 (ATerm t)
  {
    ATerm z_53 = NULL;
    z_53 = t;
    y_53 :
    if(!(match_string(z_53, "--help")))
      {
        if(!(match_string(z_53, "-h")))
          {
            if(!(match_string(z_53, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_z_19;
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_a_20;
    return(t);
  }
  t = Option_3(t, p_5, q_5, r_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_54 = NULL,d_54 = NULL,f_54 = NULL;
  c_54 = t;
  b_54 :
  if(((ATgetType(c_54) == AT_LIST) && ((ATermList) c_54 != ATempty)))
    {
      d_54 = ATgetFirst((ATermList) c_54);
      f_54 = (ATerm) ATgetNext((ATermList) c_54);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_54)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_54)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_47 (ATerm), ATerm p_47 (ATerm))
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
          t = o_47(t);
          {
            s_54 = t;
            {
              t = not_null(p_54);
              {
                t = p_47(t);
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
    {
      _fail(t);
    }
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
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_51 (ATerm))
{
  ATerm b_20;
  b_20 = t;
  {
    ATerm s_5 (ATerm t)
    {
      t = term_f_20;
      t = k_51(t);
      return(t);
    }
    t = try_1(t, s_5);
  }
  t = b_20;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm c_55 = NULL;
      c_55 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_55));
      return(t);
    }
    ATerm u_5 (ATerm t)
    {
      ATerm h_20 = t;
      int i_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_20 = t;
          int o_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_20);
            }
          else
            {
              t = j_20;
              {
                t = k_51(t);
                t = Cons_2(t, _id, u_5);
              }
            }
          LocalPopChoice(i_20);
        }
      else
        {
          t = h_20;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, t_5, u_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_55 = NULL,j_55 = NULL,k_55 = NULL;
  ATerm p_20;
  p_20 = t;
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
      {
        _fail(t);
      }
  }
  t = p_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_51 (ATerm))
{
  ATerm r_55 = NULL;
  ATerm u_20;
  u_20 = t;
  {
    t = term_v_20;
    t = table_put_0(t);
  }
  t = u_20;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm w_20 = t;
      int z_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_51(t);
          LocalPopChoice(z_20);
        }
      else
        {
          t = w_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_5);
    {
      ATerm w_5 (ATerm t)
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
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
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            {
              ATerm x_5 (ATerm t)
              {
                ATerm y_5 (ATerm t)
                {
                  ATerm s_55 = NULL;
                  s_55 = t;
                  if(((r_55 != NULL) && (r_55 != s_55)))
                    _fail(s_55);
                  else
                    r_55 = s_55;
                  return(t);
                }
                t = Undefined_1(t, y_5);
                return(t);
              }
              t = option_defined_1(t, x_5);
              {
                ATerm c_21;
                c_21 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_55)), term_d_21));
                  t = printnl_0(t);
                }
                t = c_21;
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
      t = try_1(t, w_5);
      {
        ATerm f_21;
        f_21 = t;
        {
          t = term_f_19;
          t = table_destroy_0(t);
        }
        t = f_21;
      }
    }
  }
  return(t);
}
ATerm Abox_2_html_0 (ATerm t)
{
  ATerm c_56 = NULL;
  ATerm e_56 = NULL,f_56 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    c_56 = t;
    {
      ATerm g_21 = t;
      int j_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(j_21);
        }
      else
        {
          t = g_21;
          {
            ATerm k_21 = t;
            int l_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_21;
                m_21 = t;
                {
                  ATerm n_21 = t;
                  int o_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_5 (ATerm t)
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
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = option_defined_1(t, z_5);
                      {
                        t = not_null(f_56);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(o_21);
                    }
                  else
                    {
                      t = n_21;
                      {
                        ATerm i_56 = NULL;
                        t = term_p_21;
                        {
                          i_56 = t;
                          if(((f_56 != NULL) && (f_56 != i_56)))
                            _fail(i_56);
                          else
                            f_56 = i_56;
                        }
                      }
                    }
                }
                t = m_21;
                {
                  t = input_file_0(t);
                  {
                    ATerm a_6 (ATerm t)
                    {
                      ATerm j_56 = NULL;
                      t = abox2html_0(t);
                      {
                        j_56 = t;
                        if(((e_56 != NULL) && (e_56 != j_56)))
                          _fail(j_56);
                        else
                          e_56 = j_56;
                      }
                      return(t);
                    }
                    t = _2(t, _id, a_6);
                    {
                      t = not_null(e_56);
                      {
                        ATerm b_6 (ATerm t)
                        {
                          ATerm c_6 (ATerm t)
                          {
                            t = is_string_0(t);
                            {
                              ATerm q_21;
                              q_21 = t;
                              {
                                ATerm d_6 (ATerm t)
                                {
                                  t = not_null(f_56);
                                  return(t);
                                }
                                ATerm e_6 (ATerm t)
                                {
                                  ATerm k_56 = NULL;
                                  k_56 = t;
                                  t = (ATerm) ATinsert(ATempty, not_null(k_56));
                                  return(t);
                                }
                                t = split_2(t, d_6, e_6);
                                t = print_0(t);
                              }
                              t = q_21;
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
                LocalPopChoice(l_21);
              }
            else
              {
                t = k_21;
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
  t = Abox_2_html_0(t);
  return(t);
}

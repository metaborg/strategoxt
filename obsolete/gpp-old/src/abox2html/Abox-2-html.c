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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Silent_0;
Symbol sym_Verbose_1;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Verbose_0;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
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
  sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
  ATprotectSymbol(sym_Runtime_1);
  sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
  ATprotectSymbol(sym_DeclVersion_1);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_q_22;
ATerm term_x_21;
ATerm term_r_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_o_20;
ATerm term_j_20;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_q_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_l_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_x_17;
ATerm term_p_17;
ATerm term_j_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_l_16;
ATerm term_k_16;
ATerm term_f_16;
ATerm term_v_15;
ATerm term_n_15;
ATerm term_y_14;
ATerm term_n_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_g_14;
ATerm term_d_14;
ATerm term_y_13;
ATerm term_w_13;
ATerm term_s_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_w_12;
ATerm term_t_11;
ATerm term_g_11;
ATerm term_t_10;
ATerm term_j_10;
ATerm term_r_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
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
ATerm term_r_6;
ATerm term_q_6;
ATerm term_p_6;
ATerm term_n_6;
ATerm term_l_6;
ATerm term_f_6;
ATerm term_d_6;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
void init_constant_terms (void)
{
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_t_11));
  term_t_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_y_13));
  term_y_13 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_g_14));
  term_g_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_n_14));
  term_n_14 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_15));
  term_n_15 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_16));
  term_l_16 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_n_6, term_l_6);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_l_6);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym__2, term_s_18, term_t_10);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_t_10);
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_t_10);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_b_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym__3, term_a_20, term_b_20, (ATerm) ATempty);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(sym_stdout_0);
}
ATerm report_failure_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm z_73 (ATerm), ATerm a_74 (ATerm));
ATerm crush_2 (ATerm, ATerm o_75 (ATerm), ATerm p_75 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm l_67 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm n_72 (ATerm), ATerm o_72 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_88 (ATerm));
ATerm topdown_1 (ATerm, ATerm a_84 (ATerm));
ATerm Html2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm b_84 (ATerm));
ATerm html2text_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm q_85 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm p_80 (ATerm));
ATerm html_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm n_62 (ATerm));
ATerm make_html_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm sep_by_1 (ATerm, ATerm x_88 (ATerm));
ATerm filter_1 (ATerm, ATerm f_73 (ATerm));
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm d_81 (ATerm));
ATerm separate_by_1 (ATerm, ATerm e_81 (ATerm));
ATerm LNAT_2 (ATerm, ATerm v_0 (ATerm), ATerm w_0 (ATerm));
ATerm L_2 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm));
ATerm tov_1 (ATerm, ATerm w_88 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_87 (ATerm), ATerm z_87 (ATerm));
ATerm for_3 (ATerm, ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm));
ATerm copy_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm AC_1 (ATerm, ATerm q_0 (ATerm));
ATerm AR_1 (ATerm, ATerm p_0 (ATerm));
ATerm AL_1 (ATerm, ATerm o_0 (ATerm));
ATerm aopt_0 (ATerm);
ATerm make_hs_0 (ATerm);
ATerm toa_1 (ATerm, ATerm t_88 (ATerm));
ATerm R_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2html_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm i_80 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm d_80 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm w_79 (ATerm));
ATerm Distribute_0 (ATerm);
ATerm normalize_0 (ATerm);
ATerm abox2html_0 (ATerm);
ATerm _2 (ATerm, ATerm l_51 (ATerm), ATerm m_51 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm debug_1 (ATerm, ATerm c_70 (ATerm));
ATerm obsolete_1 (ATerm, ATerm j_70 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm t_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_67 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_69 (ATerm));
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm z_79 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_66 (ATerm));
ATerm map_1 (ATerm, ATerm l_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_66 (ATerm));
ATerm Program_1 (ATerm, ATerm v_56 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm w_56 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_66 (ATerm));
ATerm Option_3 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm e_62 (ATerm), ATerm f_62 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_66 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_66 (ATerm));
ATerm Abox_2_html_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATempty, term_v_5));
  {
    t = printnl_0(t);
    {
      t = term_w_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_5 = t;
  int y_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(y_5);
    }
  else
    {
      t = x_5;
      {
        ATerm z_5 = t;
        int a_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_0);
            LocalPopChoice(a_6);
          }
        else
          {
            t = z_5;
            {
              ATerm f_1 = NULL,g_1 = NULL,h_1 = NULL;
              f_1 = t;
              b_1 :
              if(match_cons(f_1, sym_Path_1))
                {
                  g_1 = ATgetArgument(f_1, 0);
                  t = not_null(g_1);
                }
              else
                {
                  if(match_cons(f_1, sym_Var_1))
                    {
                      g_1 = ATgetArgument(f_1, 0);
                      {
                        t = not_null(g_1);
                        {
                          ATerm b_6 = t;
                          int c_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(c_6);
                            }
                          else
                            {
                              t = b_6;
                              {
                                ATerm b_0 (ATerm t)
                                {
                                  t = term_d_6;
                                  return(t);
                                }
                                t = debug_1(t, b_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(f_1, sym_Prefix_2))
                        {
                          g_1 = ATgetArgument(f_1, 0);
                          h_1 = ATgetArgument(f_1, 1);
                          {
                            ATerm s_1 = NULL,x_1 = NULL;
                            ATerm e_6;
                            e_6 = t;
                            {
                              ATerm t_1 = NULL;
                              t = not_null(g_1);
                              {
                                t = eval_config_0(t);
                                {
                                  t_1 = t;
                                  if(((s_1 != NULL) && (s_1 != t_1)))
                                    _fail(t_1);
                                  else
                                    s_1 = t_1;
                                }
                              }
                            }
                            t = e_6;
                            {
                              ATerm y_1 = NULL;
                              t = not_null(h_1);
                              {
                                t = eval_config_0(t);
                                {
                                  y_1 = t;
                                  if(((x_1 != NULL) && (x_1 != y_1)))
                                    _fail(y_1);
                                  else
                                    x_1 = y_1;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_1), not_null(x_1));
                                t = conc_strings_0(t);
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
      }
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm p_2 = NULL;
  p_2 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_6, not_null(p_2));
    {
      t = table_get_0(t);
      {
        ATerm e_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm g_6;
            g_6 = t;
            {
              ATerm r_2 = NULL;
              ATerm v_2 = NULL;
              v_2 = t;
              if(((r_2 != NULL) && (r_2 != v_2)))
                _fail(v_2);
              else
                r_2 = v_2;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_f_6, not_null(p_2), not_null(r_2));
                t = table_put_0(t);
              }
            }
            t = g_6;
          }
          return(t);
        }
        t = try_1(t, e_0);
      }
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_4 = NULL;
  e_4 = t;
  t = SSL_TicksToSeconds(not_null(e_4));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_4 = NULL,q_4 = NULL,r_4 = NULL;
  p_4 = t;
  l_4 :
  if(match_cons(p_4, sym__2))
    {
      q_4 = ATgetArgument(p_4, 0);
      r_4 = ATgetArgument(p_4, 1);
      {
        ATerm h_6 = t;
        int i_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_4), not_null(r_4));
            LocalPopChoice(i_6);
          }
        else
          {
            t = h_6;
            t = SSL_addr(not_null(q_4), not_null(r_4));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm z_73 (ATerm), ATerm a_74 (ATerm))
{
  ATerm j_6 = t;
  int k_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_73(t);
      LocalPopChoice(k_6);
    }
  else
    {
      t = j_6;
      {
        ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
        e_8 = t;
        q_7 :
        if(((ATgetType(e_8) == AT_LIST) && ((ATermList) e_8 != ATempty)))
          {
            f_8 = ATgetFirst((ATermList) e_8);
            g_8 = (ATerm) ATgetNext((ATermList) e_8);
            {
              ATerm t_8 = NULL;
              ATerm x_8 = NULL;
              t = not_null(g_8);
              {
                t = foldr_2(t, z_73, a_74);
                {
                  x_8 = t;
                  if(((t_8 != NULL) && (t_8 != x_8)))
                    _fail(x_8);
                  else
                    t_8 = x_8;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(f_8), not_null(t_8));
                t = a_74(t);
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
ATerm crush_2 (ATerm t, ATerm o_75 (ATerm), ATerm p_75 (ATerm))
{
  ATerm e_9 = NULL;
  ATerm g_9 = NULL;
  e_9 = t;
  {
    ATerm h_9 = NULL;
    ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
    t = not_null(e_9);
    {
      h_9 = t;
      {
        t = SSL_explode_term(not_null(h_9));
        {
          j_9 = t;
          d_9 :
          if(match_cons(j_9, sym__2))
            {
              k_9 = ATgetArgument(j_9, 0);
              l_9 = ATgetArgument(j_9, 1);
              if(((g_9 != NULL) && (g_9 != l_9)))
                _fail(l_9);
              else
                g_9 = l_9;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_9);
      t = foldr_2(t, o_75, p_75);
    }
  }
  return(t);
}
ATerm times_0 (ATerm t)
{
  t = SSL_times();
  return(t);
}
ATerm run_time_0 (ATerm t)
{
  t = times_0(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = term_l_6;
      return(t);
    }
    t = crush_2(t, f_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm l_67 (ATerm))
{
  ATerm x_0 (ATerm t)
  {
    ATerm m_6;
    m_6 = t;
    {
      ATerm q_9 = NULL;
      ATerm r_9 = NULL;
      t = term_n_6;
      {
        t = get_config_0(t);
        {
          r_9 = t;
          if(((q_9 != NULL) && (q_9 != r_9)))
            _fail(r_9);
          else
            q_9 = r_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_9), term_w_5);
        t = geq_0(t);
      }
    }
    t = m_6;
    t = l_67(t);
    return(t);
  }
  t = try_1(t, x_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm v_9 = NULL,x_9 = NULL;
    ATerm o_6;
    o_6 = t;
    {
      ATerm w_9 = NULL;
      t = run_time_0(t);
      {
        w_9 = t;
        if(((v_9 != NULL) && (v_9 != w_9)))
          _fail(w_9);
        else
          v_9 = w_9;
      }
    }
    t = o_6;
    {
      ATerm y_9 = NULL;
      t = term_p_6;
      {
        t = get_config_0(t);
        {
          y_9 = t;
          if(((x_9 != NULL) && (x_9 != y_9)))
            _fail(y_9);
          else
            x_9 = y_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_6), not_null(v_9)), term_q_6), not_null(x_9)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_0);
  {
    t = term_l_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym__2))
    {
      e_10 = ATgetArgument(d_10, 0);
      f_10 = ATgetArgument(d_10, 1);
      {
        ATerm s_6;
        s_6 = t;
        t = SSL_print(not_null(e_10), not_null(f_10));
        t = s_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm n_72 (ATerm), ATerm o_72 (ATerm))
{
  ATerm l_10 = NULL,n_10 = NULL;
  ATerm t_6;
  t_6 = t;
  {
    ATerm m_10 = NULL;
    t = n_72(t);
    {
      m_10 = t;
      if(((l_10 != NULL) && (l_10 != m_10)))
        _fail(m_10);
      else
        l_10 = m_10;
    }
  }
  t = t_6;
  {
    ATerm o_10 = NULL;
    t = o_72(t);
    {
      o_10 = t;
      if(((n_10 != NULL) && (n_10 != o_10)))
        _fail(o_10);
      else
        n_10 = o_10;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_10), not_null(n_10));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm s_10 = NULL;
  s_10 = t;
  t = SSL_is_string(not_null(s_10));
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_88 (ATerm))
{
  ATerm u_6 = t;
  int v_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_88(t);
      LocalPopChoice(v_6);
    }
  else
    {
      t = u_6;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm a_84 (ATerm))
{
  t = a_84(t);
  {
    ATerm z_0 (ATerm t)
    {
      t = topdown_1(t, a_84);
      return(t);
    }
    t = _all(t, z_0);
  }
  return(t);
}
ATerm Html2text_0 (ATerm t)
{
  ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
  l_11 = t;
  i_11 :
  if(match_cons(l_11, sym_TABLE_2))
    {
      k_11 = ATgetArgument(l_11, 0);
      j_11 = ATgetArgument(l_11, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_6), not_null(j_11)), term_x_6), not_null(k_11)), term_w_6);
    }
  else
    {
      if(match_cons(l_11, sym_TR_2))
        {
          k_11 = ATgetArgument(l_11, 0);
          j_11 = ATgetArgument(l_11, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_7), not_null(j_11)), term_x_6), not_null(k_11)), term_z_6);
        }
      else
        {
          if(match_cons(l_11, sym_TD_2))
            {
              k_11 = ATgetArgument(l_11, 0);
              j_11 = ATgetArgument(l_11, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_7), not_null(j_11)), term_x_6), not_null(k_11)), term_b_7);
            }
          else
            {
              if(match_cons(l_11, sym_TD_p__1))
                {
                  k_11 = ATgetArgument(l_11, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_7), not_null(k_11)), term_c_7);
                }
              else
                {
                  if(match_cons(l_11, sym_SPAN_2))
                    {
                      k_11 = ATgetArgument(l_11, 0);
                      j_11 = ATgetArgument(l_11, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_7), not_null(j_11)), term_x_6), not_null(k_11)), term_e_7);
                    }
                  else
                    {
                      if(match_cons(l_11, sym_PRE_1))
                        {
                          k_11 = ATgetArgument(l_11, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_7), not_null(k_11)), term_g_7);
                        }
                      else
                        {
                          if(match_cons(l_11, sym_TDTR_1))
                            {
                              k_11 = ATgetArgument(l_11, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_7), not_null(k_11)), term_i_7);
                            }
                          else
                            {
                              if(match_cons(l_11, sym_HREF_2))
                                {
                                  k_11 = ATgetArgument(l_11, 0);
                                  j_11 = ATgetArgument(l_11, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_7), not_null(j_11)), term_l_7), not_null(k_11)), term_k_7);
                                }
                              else
                                {
                                  if(match_cons(l_11, sym_ANCHOR_1))
                                    {
                                      k_11 = ATgetArgument(l_11, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_o_7), not_null(k_11)), term_n_7);
                                    }
                                  else
                                    {
                                      if(match_cons(l_11, sym_BR_0))
                                        {
                                          t = term_p_7;
                                        }
                                      else
                                        {
                                          if(match_cons(l_11, sym_NBSP_0))
                                            {
                                              t = term_r_7;
                                            }
                                          else
                                            {
                                              if(match_cons(l_11, sym_HR_0))
                                                {
                                                  t = term_s_7;
                                                }
                                              else
                                                {
                                                  if(match_cons(l_11, sym_TDTD_0))
                                                    {
                                                      t = term_t_7;
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
ATerm bottomup_1 (ATerm t, ATerm b_84 (ATerm))
{
  ATerm a_1 (ATerm t)
  {
    t = bottomup_1(t, b_84);
    return(t);
  }
  t = _all(t, a_1);
  t = b_84(t);
  return(t);
}
ATerm html2text_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    t = try_1(t, Html2text_0);
    return(t);
  }
  t = bottomup_1(t, c_1);
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
  a_15 = t;
  z_14 :
  if(((ATermList) a_15 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(a_15) == AT_LIST) && ((ATermList) a_15 != ATempty)))
        {
          b_15 = ATgetFirst((ATermList) a_15);
          c_15 = (ATerm) ATgetNext((ATermList) a_15);
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
  ATerm h_15 = NULL,i_15 = NULL;
  ATerm u_7 = t;
  int v_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_7);
    }
  else
    {
      t = u_7;
      {
        ATerm w_7 = t;
        int x_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_15 = NULL,k_15 = NULL,l_15 = NULL;
            ATerm o_15 (ATerm t)
            {
              if(((h_15 != NULL) && (h_15 != k_15)))
                _fail(k_15);
              else
                h_15 = k_15;
              {
                if(((i_15 != NULL) && (i_15 != l_15)))
                  _fail(l_15);
                else
                  i_15 = l_15;
                {
                  t = not_null(h_15);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_15), not_null(i_15));
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
            j_15 = t;
            f_15 :
            if(((ATgetType(j_15) == AT_LIST) && ((ATermList) j_15 != ATempty)))
              {
                k_15 = ATgetFirst((ATermList) j_15);
                l_15 = (ATerm) ATgetNext((ATermList) j_15);
                g_15 :
                if(((ATermList) k_15 == ATempty))
                  {
                    {
                      ATerm y_7 = t;
                      int z_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((i_15 != NULL) && (i_15 != l_15)))
                            _fail(l_15);
                          else
                            i_15 = l_15;
                          {
                            ATerm d_1 (ATerm t)
                            {
                              t = not_null(i_15);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, d_1);
                          }
                          LocalPopChoice(z_7);
                        }
                      else
                        {
                          t = y_7;
                          t = o_15(t);
                        }
                    }
                  }
                else
                  {
                    t = o_15(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(x_7);
          }
        else
          {
            t = w_7;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm p_15 (ATerm t)
  {
    ATerm a_8 = t;
    int b_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_85(t);
        LocalPopChoice(b_8);
      }
    else
      {
        t = a_8;
        t = _one(t, p_15);
      }
    return(t);
  }
  t = p_15(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm w_15 = NULL,z_15 = NULL;
  ATerm e_1 (ATerm t)
  {
    ATerm x_15 = NULL;
    x_15 = t;
    q_15 :
    if(!(match_int(x_15, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm i_1 (ATerm t)
  {
    ATerm y_15 = NULL;
    y_15 = t;
    if(((w_15 != NULL) && (w_15 != y_15)))
      _fail(y_15);
    else
      w_15 = y_15;
    return(t);
  }
  t = Cons_2(t, e_1, i_1);
  {
    ATerm e_16 = NULL;
    t = not_null(w_15);
    {
      ATerm j_1 (ATerm t)
      {
        ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
        a_16 = t;
        t_15 :
        if(((ATgetType(a_16) == AT_LIST) && ((ATermList) a_16 != ATempty)))
          {
            b_16 = ATgetFirst((ATermList) a_16);
            c_16 = (ATerm) ATgetNext((ATermList) a_16);
            u_15 :
            if(match_int(b_16, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_16)), term_c_8), term_c_8);
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
      t = oncetd_1(t, j_1);
      {
        e_16 = t;
        if(((z_15 != NULL) && (z_15 != e_16)))
          _fail(e_16);
        else
          z_15 = e_16;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(z_15)), term_d_8), term_d_8);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm p_80 (ATerm))
{
  ATerm i_16 (ATerm t)
  {
    t = p_80(t);
    {
      ATerm h_8 = t;
      int i_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(i_8);
        }
      else
        {
          t = h_8;
          t = Cons_2(t, _id, i_16);
        }
    }
    return(t);
  }
  t = i_16(t);
  return(t);
}
ATerm html_string_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm k_1 (ATerm t)
    {
      t = try_1(t, replace_quotes_0);
      return(t);
    }
    t = listtd_1(t, k_1);
    {
      ATerm l_1 (ATerm t)
      {
        ATerm m_1 (ATerm t)
        {
          ATerm o_16 = NULL;
          o_16 = t;
          n_16 :
          if(match_int(o_16, 32))
            {
              t = term_r_7;
              t = explode_string_0(t);
            }
          else
            {
              if(match_int(o_16, 38))
                {
                  t = term_j_8;
                  t = explode_string_0(t);
                }
              else
                {
                  if(match_int(o_16, 60))
                    {
                      t = term_k_8;
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(o_16, 62))
                        {
                          t = term_l_8;
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
        t = try_1(t, m_1);
        return(t);
      }
      t = map_1(t, l_1);
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
  ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
  v_16 = t;
  u_16 :
  if(((ATgetType(v_16) == AT_LIST) && ((ATermList) v_16 != ATempty)))
    {
      w_16 = ATgetFirst((ATermList) v_16);
      x_16 = (ATerm) ATgetNext((ATermList) v_16);
      t = not_null(x_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm b_17 (ATerm t)
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, n_62, _id);
        {
          t = Tl_0(t);
          t = b_17(t);
        }
        LocalPopChoice(n_8);
      }
    else
      {
        t = m_8;
        {
        }
      }
    return(t);
  }
  t = b_17(t);
  return(t);
}
ATerm make_html_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = reverse_0(t);
    {
      ATerm n_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, n_1);
      {
        ATerm q_18 (ATerm t)
        {
          ATerm q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL,u_17 = NULL;
          ATerm t_18 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), (ATerm) ATinsert(CheckATermList(not_null(u_17)), not_null(s_17)));
            t = q_18(t);
            return(t);
          }
          q_17 = t;
          k_17 :
          if(match_cons(q_17, sym__2))
            {
              r_17 = ATgetArgument(q_17, 0);
              u_17 = ATgetArgument(q_17, 1);
              l_17 :
              if(((ATermList) r_17 == ATempty))
                {
                  {
                    ATerm y_17 = NULL;
                    ATerm a_18 = NULL;
                    t = not_null(u_17);
                    {
                      ATerm o_1 (ATerm t)
                      {
                        ATerm z_17 = NULL;
                        z_17 = t;
                        f_17 :
                        if(!(match_int(z_17, 9)))
                          {
                            if(!(match_int(z_17, 32)))
                              {
                                _fail(t);
                              }
                          }
                        return(t);
                      }
                      t = remove_trailing_1(t, o_1);
                      {
                        t = implode_string_0(t);
                        {
                          a_18 = t;
                          if(((y_17 != NULL) && (y_17 != a_18)))
                            _fail(a_18);
                          else
                            y_17 = a_18;
                        }
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(y_17));
                  }
                }
              else
                {
                  if(((ATgetType(r_17) == AT_LIST) && ((ATermList) r_17 != ATempty)))
                    {
                      s_17 = ATgetFirst((ATermList) r_17);
                      t_17 = (ATerm) ATgetNext((ATermList) r_17);
                      m_17 :
                      if(match_int(s_17, 10))
                        {
                          ATerm o_8 = t;
                          int p_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_18 = NULL,h_18 = NULL;
                              ATerm q_8;
                              q_8 = t;
                              {
                                ATerm g_18 = NULL;
                                t = not_null(u_17);
                                {
                                  ATerm p_1 (ATerm t)
                                  {
                                    ATerm f_18 = NULL;
                                    f_18 = t;
                                    h_17 :
                                    if(!(match_int(f_18, 9)))
                                      {
                                        if(!(match_int(f_18, 32)))
                                          {
                                            _fail(t);
                                          }
                                      }
                                    return(t);
                                  }
                                  t = remove_trailing_1(t, p_1);
                                  {
                                    t = implode_string_0(t);
                                    {
                                      g_18 = t;
                                      if(((e_18 != NULL) && (e_18 != g_18)))
                                        _fail(g_18);
                                      else
                                        e_18 = g_18;
                                    }
                                  }
                                }
                              }
                              t = q_8;
                              {
                                ATerm i_18 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_17), (ATerm) ATempty);
                                {
                                  t = q_18(t);
                                  {
                                    i_18 = t;
                                    if(((h_18 != NULL) && (h_18 != i_18)))
                                      _fail(i_18);
                                    else
                                      h_18 = i_18;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(h_18)), not_null(e_18));
                              }
                              LocalPopChoice(p_8);
                            }
                          else
                            {
                              t = o_8;
                              t = t_18(t);
                            }
                        }
                      else
                        {
                          t = t_18(t);
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
        t = q_18(t);
        {
          ATerm q_1 (ATerm t)
          {
            ATerm m_18 = NULL;
            m_18 = t;
            n_17 :
            if(!(match_string(m_18, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, q_1);
          {
            t = reverse_0(t);
            {
              ATerm r_1 (ATerm t)
              {
                ATerm n_18 = NULL;
                n_18 = t;
                o_17 :
                if(!(match_string(n_18, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, r_1);
              {
                ATerm u_1 (ATerm t)
                {
                  ATerm o_18 = NULL;
                  o_18 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_r_8), not_null(o_18));
                  return(t);
                }
                t = map_1(t, u_1);
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
  ATerm f_19 = NULL;
  f_19 = t;
  e_19 :
  if(match_cons(f_19, sym_MATH_0))
    {
      ATerm s_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_19 = NULL,j_19 = NULL;
          ATerm v_8;
          v_8 = t;
          {
            ATerm i_19 = NULL;
            t = SSLgetAnnotations(not_null(f_19));
            {
              i_19 = t;
              if(((h_19 != NULL) && (h_19 != i_19)))
                _fail(i_19);
              else
                h_19 = i_19;
            }
          }
          t = v_8;
          {
            ATerm k_19 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(h_19));
            {
              k_19 = t;
              if(((j_19 != NULL) && (j_19 != k_19)))
                _fail(k_19);
              else
                j_19 = k_19;
            }
            t = not_null(j_19);
          }
          LocalPopChoice(u_8);
        }
      else
        {
          t = s_8;
          {
            ATerm m_19 = NULL,o_19 = NULL;
            ATerm w_8;
            w_8 = t;
            {
              ATerm n_19 = NULL;
              t = SSLgetAnnotations(not_null(f_19));
              {
                n_19 = t;
                if(((m_19 != NULL) && (m_19 != n_19)))
                  _fail(n_19);
                else
                  m_19 = n_19;
              }
            }
            t = w_8;
            {
              ATerm p_19 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(m_19));
              {
                p_19 = t;
                if(((o_19 != NULL) && (o_19 != p_19)))
                  _fail(p_19);
                else
                  o_19 = p_19;
              }
              t = not_null(o_19);
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
ATerm NUM_0 (ATerm t)
{
  ATerm d_20 = NULL;
  d_20 = t;
  c_20 :
  if(match_cons(d_20, sym_NUM_0))
    {
      ATerm y_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_20 = NULL,h_20 = NULL;
          ATerm a_9;
          a_9 = t;
          {
            ATerm g_20 = NULL;
            t = SSLgetAnnotations(not_null(d_20));
            {
              g_20 = t;
              if(((f_20 != NULL) && (f_20 != g_20)))
                _fail(g_20);
              else
                f_20 = g_20;
            }
          }
          t = a_9;
          {
            ATerm i_20 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(f_20));
            {
              i_20 = t;
              if(((h_20 != NULL) && (h_20 != i_20)))
                _fail(i_20);
              else
                h_20 = i_20;
            }
            t = not_null(h_20);
          }
          LocalPopChoice(z_8);
        }
      else
        {
          t = y_8;
          {
            ATerm k_20 = NULL,m_20 = NULL;
            ATerm b_9;
            b_9 = t;
            {
              ATerm l_20 = NULL;
              t = SSLgetAnnotations(not_null(d_20));
              {
                l_20 = t;
                if(((k_20 != NULL) && (k_20 != l_20)))
                  _fail(l_20);
                else
                  k_20 = l_20;
              }
            }
            t = b_9;
            {
              ATerm n_20 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(k_20));
              {
                n_20 = t;
                if(((m_20 != NULL) && (m_20 != n_20)))
                  _fail(n_20);
                else
                  m_20 = n_20;
              }
              t = not_null(m_20);
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
ATerm VAR_0 (ATerm t)
{
  ATerm d_21 = NULL;
  d_21 = t;
  c_21 :
  if(match_cons(d_21, sym_VAR_0))
    {
      ATerm c_9 = t;
      int f_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_21 = NULL,h_21 = NULL;
          ATerm i_9;
          i_9 = t;
          {
            ATerm g_21 = NULL;
            t = SSLgetAnnotations(not_null(d_21));
            {
              g_21 = t;
              if(((f_21 != NULL) && (f_21 != g_21)))
                _fail(g_21);
              else
                f_21 = g_21;
            }
          }
          t = i_9;
          {
            ATerm i_21 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(f_21));
            {
              i_21 = t;
              if(((h_21 != NULL) && (h_21 != i_21)))
                _fail(i_21);
              else
                h_21 = i_21;
            }
            t = not_null(h_21);
          }
          LocalPopChoice(f_9);
        }
      else
        {
          t = c_9;
          {
            ATerm k_21 = NULL,m_21 = NULL;
            ATerm m_9;
            m_9 = t;
            {
              ATerm l_21 = NULL;
              t = SSLgetAnnotations(not_null(d_21));
              {
                l_21 = t;
                if(((k_21 != NULL) && (k_21 != l_21)))
                  _fail(l_21);
                else
                  k_21 = l_21;
              }
            }
            t = m_9;
            {
              ATerm n_21 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(k_21));
              {
                n_21 = t;
                if(((m_21 != NULL) && (m_21 != n_21)))
                  _fail(n_21);
                else
                  m_21 = n_21;
              }
              t = not_null(m_21);
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
ATerm KW_0 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  a_22 :
  if(match_cons(b_22, sym_KW_0))
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_22 = NULL,f_22 = NULL;
          ATerm p_9;
          p_9 = t;
          {
            ATerm e_22 = NULL;
            t = SSLgetAnnotations(not_null(b_22));
            {
              e_22 = t;
              if(((d_22 != NULL) && (d_22 != e_22)))
                _fail(e_22);
              else
                d_22 = e_22;
            }
          }
          t = p_9;
          {
            ATerm g_22 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(d_22));
            {
              g_22 = t;
              if(((f_22 != NULL) && (f_22 != g_22)))
                _fail(g_22);
              else
                f_22 = g_22;
            }
            t = not_null(f_22);
          }
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
          {
            ATerm i_22 = NULL,k_22 = NULL;
            ATerm s_9;
            s_9 = t;
            {
              ATerm j_22 = NULL;
              t = SSLgetAnnotations(not_null(b_22));
              {
                j_22 = t;
                if(((i_22 != NULL) && (i_22 != j_22)))
                  _fail(j_22);
                else
                  i_22 = j_22;
              }
            }
            t = s_9;
            {
              ATerm l_22 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(i_22));
              {
                l_22 = t;
                if(((k_22 != NULL) && (k_22 != l_22)))
                  _fail(l_22);
                else
                  k_22 = l_22;
              }
              t = not_null(k_22);
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
ATerm sep_by_1 (ATerm t, ATerm x_88 (ATerm))
{
  ATerm v_1 (ATerm t)
  {
    ATerm t_22 = NULL;
    t_22 = t;
    t = (ATerm) ATinsert(ATempty, not_null(t_22));
    return(t);
  }
  t = map_1(t, v_1);
  {
    t = separate_by_1(t, x_88);
    t = concat_0(t);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm f_73 (ATerm))
{
  ATerm t_9 = t;
  int u_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_9);
    }
  else
    {
      t = t_9;
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              t = filter_1(t, f_73);
              return(t);
            }
            t = Cons_2(t, f_73, w_1);
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            {
              ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
              y_22 = t;
              x_22 :
              if(((ATgetType(y_22) == AT_LIST) && ((ATermList) y_22 != ATempty)))
                {
                  z_22 = ATgetFirst((ATermList) y_22);
                  a_23 = (ATerm) ATgetNext((ATermList) y_22);
                  {
                    t = not_null(a_23);
                    t = filter_1(t, f_73);
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
  ATerm k_23 = NULL;
  k_23 = t;
  j_23 :
  if(match_cons(k_23, sym_HS_0))
    {
      ATerm b_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_23 = NULL,u_23 = NULL;
          ATerm h_10;
          h_10 = t;
          {
            ATerm t_23 = NULL;
            t = SSLgetAnnotations(not_null(k_23));
            {
              t_23 = t;
              if(((s_23 != NULL) && (s_23 != t_23)))
                _fail(t_23);
              else
                s_23 = t_23;
            }
          }
          t = h_10;
          {
            ATerm v_23 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(s_23));
            {
              v_23 = t;
              if(((u_23 != NULL) && (u_23 != v_23)))
                _fail(v_23);
              else
                u_23 = v_23;
            }
            t = not_null(u_23);
          }
          LocalPopChoice(g_10);
        }
      else
        {
          t = b_10;
          {
            ATerm x_23 = NULL,z_23 = NULL;
            ATerm i_10;
            i_10 = t;
            {
              ATerm y_23 = NULL;
              t = SSLgetAnnotations(not_null(k_23));
              {
                y_23 = t;
                if(((x_23 != NULL) && (x_23 != y_23)))
                  _fail(y_23);
                else
                  x_23 = y_23;
              }
            }
            t = i_10;
            {
              ATerm a_24 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(x_23));
              {
                a_24 = t;
                if(((z_23 != NULL) && (z_23 != a_24)))
                  _fail(a_24);
                else
                  z_23 = a_24;
              }
              t = not_null(z_23);
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
ATerm Hspace_0 (ATerm t)
{
  ATerm o_24 = NULL,q_24 = NULL;
  ATerm v_24 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_24), term_j_10);
    t = copy_0(t);
    return(t);
  }
  ATerm k_10 = t;
  int p_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          ATerm p_24 = NULL;
          p_24 = t;
          if(((o_24 != NULL) && (o_24 != p_24)))
            _fail(p_24);
          else
            o_24 = p_24;
          return(t);
        }
        t = SOpt_2(t, HS_0, a_2);
        return(t);
      }
      t = fetch_1(t, z_1);
      {
        t = not_null(o_24);
        t = string_to_int_0(t);
      }
      LocalPopChoice(p_10);
    }
  else
    {
      t = k_10;
      t = term_w_5;
    }
  {
    q_24 = t;
    n_24 :
    if(match_int(q_24, 0))
      {
        ATerm q_10 = t;
        int r_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATempty;
            LocalPopChoice(r_10);
          }
        else
          {
            t = q_10;
            t = v_24(t);
          }
      }
    else
      {
        t = v_24(t);
      }
  }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm d_81 (ATerm))
{
  ATerm a_25 = NULL,b_25 = NULL,c_25 = NULL;
  a_25 = t;
  y_24 :
  if(((ATgetType(a_25) == AT_LIST) && ((ATermList) a_25 != ATempty)))
    {
      b_25 = ATgetFirst((ATermList) a_25);
      c_25 = (ATerm) ATgetNext((ATermList) a_25);
      {
        ATerm f_25 = NULL;
        ATerm g_25 = NULL;
        t = term_t_10;
        {
          t = d_81(t);
          {
            g_25 = t;
            if(((f_25 != NULL) && (f_25 != g_25)))
              _fail(g_25);
            else
              f_25 = g_25;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_25)), not_null(b_25)), not_null(f_25));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm e_81 (ATerm))
{
  ATerm u_10 = t;
  int v_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_10);
    }
  else
    {
      t = u_10;
      {
        ATerm b_2 (ATerm t)
        {
          ATerm w_10 = t;
          int x_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(x_10);
            }
          else
            {
              t = w_10;
              {
                t = Cons_2(t, _id, b_2);
                t = Sep_1(t, e_81);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, b_2);
      }
    }
  return(t);
}
ATerm LNAT_2 (ATerm t, ATerm v_0 (ATerm), ATerm w_0 (ATerm))
{
  ATerm v_25 = NULL,w_25 = NULL,x_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_LNAT_2))
    {
      w_25 = ATgetArgument(v_25, 0);
      x_25 = ATgetArgument(v_25, 1);
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_26 = NULL,d_26 = NULL;
            ATerm c_26 = NULL;
            t = SSLgetAnnotations(not_null(v_25));
            {
              c_26 = t;
              if(((b_26 != NULL) && (b_26 != c_26)))
                _fail(c_26);
              else
                b_26 = c_26;
            }
            {
              t = not_null(w_25);
              {
                ATerm f_26 = NULL;
                t = v_0(t);
                {
                  d_26 = t;
                  {
                    t = not_null(x_25);
                    {
                      ATerm h_26 = NULL;
                      t = w_0(t);
                      {
                        f_26 = t;
                        {
                          ATerm i_26 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, not_null(d_26), not_null(f_26)), not_null(b_26));
                          {
                            i_26 = t;
                            if(((h_26 != NULL) && (h_26 != i_26)))
                              _fail(i_26);
                            else
                              h_26 = i_26;
                          }
                          t = not_null(h_26);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(z_10);
          }
        else
          {
            t = y_10;
            {
              ATerm u_26 = NULL,w_26 = NULL;
              ATerm v_26 = NULL;
              t = SSLgetAnnotations(not_null(v_25));
              {
                v_26 = t;
                if(((u_26 != NULL) && (u_26 != v_26)))
                  _fail(v_26);
                else
                  u_26 = v_26;
              }
              {
                t = not_null(w_25);
                {
                  ATerm a_27 = NULL;
                  t = v_0(t);
                  {
                    w_26 = t;
                    {
                      t = not_null(x_25);
                      {
                        ATerm c_27 = NULL;
                        t = w_0(t);
                        {
                          a_27 = t;
                          {
                            ATerm d_27 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, not_null(w_26), not_null(a_27)), not_null(u_26));
                            {
                              d_27 = t;
                              if(((c_27 != NULL) && (c_27 != d_27)))
                                _fail(d_27);
                              else
                                c_27 = d_27;
                            }
                            t = not_null(c_27);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm L_2 (ATerm t, ATerm t_0 (ATerm), ATerm u_0 (ATerm))
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym_L_2))
    {
      i_28 = ATgetArgument(h_28, 0);
      j_28 = ATgetArgument(h_28, 1);
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_28 = NULL,q_28 = NULL;
            ATerm p_28 = NULL;
            t = SSLgetAnnotations(not_null(h_28));
            {
              p_28 = t;
              if(((n_28 != NULL) && (n_28 != p_28)))
                _fail(p_28);
              else
                n_28 = p_28;
            }
            {
              t = not_null(i_28);
              {
                ATerm s_28 = NULL;
                t = t_0(t);
                {
                  q_28 = t;
                  {
                    t = not_null(j_28);
                    {
                      ATerm u_28 = NULL;
                      t = u_0(t);
                      {
                        s_28 = t;
                        {
                          ATerm v_28 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(q_28), not_null(s_28)), not_null(n_28));
                          {
                            v_28 = t;
                            if(((u_28 != NULL) && (u_28 != v_28)))
                              _fail(v_28);
                            else
                              u_28 = v_28;
                          }
                          t = not_null(u_28);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(b_11);
          }
        else
          {
            t = a_11;
            {
              ATerm z_28 = NULL,b_29 = NULL;
              ATerm a_29 = NULL;
              t = SSLgetAnnotations(not_null(h_28));
              {
                a_29 = t;
                if(((z_28 != NULL) && (z_28 != a_29)))
                  _fail(a_29);
                else
                  z_28 = a_29;
              }
              {
                t = not_null(i_28);
                {
                  ATerm d_29 = NULL;
                  t = t_0(t);
                  {
                    b_29 = t;
                    {
                      t = not_null(j_28);
                      {
                        ATerm f_29 = NULL;
                        t = u_0(t);
                        {
                          d_29 = t;
                          {
                            ATerm g_29 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(b_29), not_null(d_29)), not_null(z_28));
                            {
                              g_29 = t;
                              if(((f_29 != NULL) && (f_29 != g_29)))
                                _fail(g_29);
                              else
                                f_29 = g_29;
                            }
                            t = not_null(f_29);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tov_1 (ATerm t, ATerm w_88 (ATerm))
{
  ATerm u_29 = NULL,y_29 = NULL;
  ATerm c_11 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2(t, _id, _id);
      LocalPopChoice(d_11);
    }
  else
    {
      t = c_11;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2(t, _id, _id);
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm v_29 = NULL;
              ATerm w_29 = NULL;
              v_29 = t;
              {
                if(((u_29 != NULL) && (u_29 != v_29)))
                  _fail(v_29);
                else
                  u_29 = v_29;
                {
                  ATerm x_29 = NULL;
                  t = term_t_10;
                  {
                    t = w_88(t);
                    {
                      x_29 = t;
                      if(((w_29 != NULL) && (w_29 != x_29)))
                        _fail(x_29);
                      else
                        w_29 = x_29;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_g_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(u_29)))), not_null(w_29)))));
                }
              }
            }
          }
      }
    }
  {
    y_29 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_g_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(y_29)))));
  }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm k_30 = NULL;
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym_IS_0))
    {
      ATerm h_11 = t;
      int m_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm s_30 = NULL,u_30 = NULL;
          ATerm n_11;
          n_11 = t;
          {
            ATerm t_30 = NULL;
            t = SSLgetAnnotations(not_null(k_30));
            {
              t_30 = t;
              if(((s_30 != NULL) && (s_30 != t_30)))
                _fail(t_30);
              else
                s_30 = t_30;
            }
          }
          t = n_11;
          {
            ATerm v_30 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(s_30));
            {
              v_30 = t;
              if(((u_30 != NULL) && (u_30 != v_30)))
                _fail(v_30);
              else
                u_30 = v_30;
            }
            t = not_null(u_30);
          }
          LocalPopChoice(m_11);
        }
      else
        {
          t = h_11;
          {
            ATerm y_30 = NULL,a_31 = NULL;
            ATerm o_11;
            o_11 = t;
            {
              ATerm z_30 = NULL;
              t = SSLgetAnnotations(not_null(k_30));
              {
                z_30 = t;
                if(((y_30 != NULL) && (y_30 != z_30)))
                  _fail(z_30);
                else
                  y_30 = z_30;
              }
            }
            t = o_11;
            {
              ATerm b_31 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(y_30));
              {
                b_31 = t;
                if(((a_31 != NULL) && (a_31 != b_31)))
                  _fail(b_31);
                else
                  a_31 = b_31;
              }
              t = not_null(a_31);
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
ATerm Ispace_0 (ATerm t)
{
  ATerm n_31 = NULL,p_31 = NULL;
  ATerm w_31 (ATerm t)
  {
    ATerm s_31 = NULL;
    ATerm t_31 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_31), term_j_10);
    {
      t = copy_0(t);
      {
        t_31 = t;
        if(((s_31 != NULL) && (s_31 != t_31)))
          _fail(t_31);
        else
          s_31 = t_31;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(s_31));
    return(t);
  }
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        ATerm d_2 (ATerm t)
        {
          ATerm o_31 = NULL;
          o_31 = t;
          if(((n_31 != NULL) && (n_31 != o_31)))
            _fail(o_31);
          else
            n_31 = o_31;
          return(t);
        }
        t = SOpt_2(t, IS_0, d_2);
        return(t);
      }
      t = fetch_1(t, c_2);
      {
        t = not_null(n_31);
        t = string_to_int_0(t);
      }
      LocalPopChoice(q_11);
    }
  else
    {
      t = p_11;
      t = term_l_6;
    }
  {
    p_31 = t;
    m_31 :
    if(match_int(p_31, 0))
      {
        ATerm r_11 = t;
        int s_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_11;
            LocalPopChoice(s_11);
          }
        else
          {
            t = r_11;
            t = w_31(t);
          }
      }
    else
      {
        t = w_31(t);
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  z_31 :
  if(match_cons(c_32, sym__2))
    {
      d_32 = ATgetArgument(c_32, 0);
      e_32 = ATgetArgument(c_32, 1);
      {
        ATerm u_11 = t;
        int v_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(d_32), not_null(e_32));
            LocalPopChoice(v_11);
          }
        else
          {
            t = u_11;
            t = SSL_subtr(not_null(d_32), not_null(e_32));
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
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  m_32 = t;
  l_32 :
  if(match_cons(m_32, sym__2))
    {
      n_32 = ATgetArgument(m_32, 0);
      o_32 = ATgetArgument(m_32, 1);
      {
        ATerm w_11;
        w_11 = t;
        {
          ATerm x_11 = t;
          int y_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_32), not_null(o_32));
              LocalPopChoice(y_11);
            }
          else
            {
              t = x_11;
              t = SSL_gtr(not_null(n_32), not_null(o_32));
            }
        }
        t = w_11;
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
  ATerm u_32 = NULL;
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
      v_32 = t;
      t_32 :
      if(match_cons(v_32, sym__2))
        {
          w_32 = ATgetArgument(v_32, 0);
          x_32 = ATgetArgument(v_32, 1);
          {
            if(((u_32 != NULL) && (u_32 != w_32)))
              _fail(w_32);
            else
              u_32 = w_32;
            if(((u_32 != NULL) && (u_32 != x_32)))
              _fail(x_32);
            else
              u_32 = x_32;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_12);
    }
  else
    {
      t = z_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm y_87 (ATerm), ATerm z_87 (ATerm))
{
  ATerm z_32 (ATerm t)
  {
    ATerm b_12 = t;
    int c_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_87(t);
        LocalPopChoice(c_12);
      }
    else
      {
        t = b_12;
        {
          t = z_87(t);
          t = z_32(t);
        }
      }
    return(t);
  }
  t = z_32(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm))
{
  t = b_88(t);
  t = while_not_2(t, c_88, d_88);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
    m_33 = t;
    d_33 :
    if(match_cons(m_33, sym__2))
      {
        n_33 = ATgetArgument(m_33, 0);
        o_33 = ATgetArgument(m_33, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(n_33), not_null(o_33), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL,u_33 = NULL;
    r_33 = t;
    f_33 :
    if(match_cons(r_33, sym__3))
      {
        s_33 = ATgetArgument(r_33, 0);
        t_33 = ATgetArgument(r_33, 1);
        u_33 = ATgetArgument(r_33, 2);
        h_33 :
        if(match_int(s_33, 0))
          {
            t = not_null(u_33);
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
  ATerm g_2 (ATerm t)
  {
    ATerm x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
    x_33 = t;
    l_33 :
    if(match_cons(x_33, sym__3))
      {
        y_33 = ATgetArgument(x_33, 0);
        z_33 = ATgetArgument(x_33, 1);
        a_34 = ATgetArgument(x_33, 2);
        {
          ATerm e_34 = NULL;
          ATerm d_12;
          d_12 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), term_w_5);
            t = geq_0(t);
          }
          t = d_12;
          {
            ATerm f_34 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_33), term_w_5);
            {
              t = subt_0(t);
              {
                f_34 = t;
                if(((e_34 != NULL) && (e_34 != f_34)))
                  _fail(f_34);
                else
                  e_34 = f_34;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_34), not_null(z_33), (ATerm) ATinsert(CheckATermList(not_null(a_34)), not_null(z_33)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, e_2, f_2, g_2);
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm r_34 = NULL;
  r_34 = t;
  q_34 :
  if(match_cons(r_34, sym_VS_0))
    {
      ATerm e_12 = t;
      int f_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_34 = NULL,v_34 = NULL;
          ATerm g_12;
          g_12 = t;
          {
            ATerm u_34 = NULL;
            t = SSLgetAnnotations(not_null(r_34));
            {
              u_34 = t;
              if(((t_34 != NULL) && (t_34 != u_34)))
                _fail(u_34);
              else
                t_34 = u_34;
            }
          }
          t = g_12;
          {
            ATerm z_34 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(t_34));
            {
              z_34 = t;
              if(((v_34 != NULL) && (v_34 != z_34)))
                _fail(z_34);
              else
                v_34 = z_34;
            }
            t = not_null(v_34);
          }
          LocalPopChoice(f_12);
        }
      else
        {
          t = e_12;
          {
            ATerm b_35 = NULL,d_35 = NULL;
            ATerm h_12;
            h_12 = t;
            {
              ATerm c_35 = NULL;
              t = SSLgetAnnotations(not_null(r_34));
              {
                c_35 = t;
                if(((b_35 != NULL) && (b_35 != c_35)))
                  _fail(c_35);
                else
                  b_35 = c_35;
              }
            }
            t = h_12;
            {
              ATerm e_35 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(b_35));
              {
                e_35 = t;
                if(((d_35 != NULL) && (d_35 != e_35)))
                  _fail(e_35);
                else
                  d_35 = e_35;
              }
              t = not_null(d_35);
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
ATerm SOpt_2 (ATerm t, ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm w_35 = NULL,x_35 = NULL,y_35 = NULL;
  w_35 = t;
  v_35 :
  if(match_cons(w_35, sym_SOpt_2))
    {
      x_35 = ATgetArgument(w_35, 0);
      y_35 = ATgetArgument(w_35, 1);
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_36 = NULL,e_36 = NULL;
            ATerm d_36 = NULL;
            t = SSLgetAnnotations(not_null(w_35));
            {
              d_36 = t;
              if(((c_36 != NULL) && (c_36 != d_36)))
                _fail(d_36);
              else
                c_36 = d_36;
            }
            {
              t = not_null(x_35);
              {
                ATerm g_36 = NULL;
                t = r_0(t);
                {
                  e_36 = t;
                  {
                    t = not_null(y_35);
                    {
                      ATerm i_36 = NULL;
                      t = s_0(t);
                      {
                        g_36 = t;
                        {
                          ATerm j_36 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(e_36), not_null(g_36)), not_null(c_36));
                          {
                            j_36 = t;
                            if(((i_36 != NULL) && (i_36 != j_36)))
                              _fail(j_36);
                            else
                              i_36 = j_36;
                          }
                          t = not_null(i_36);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(j_12);
          }
        else
          {
            t = i_12;
            {
              ATerm n_36 = NULL,p_36 = NULL;
              ATerm o_36 = NULL;
              t = SSLgetAnnotations(not_null(w_35));
              {
                o_36 = t;
                if(((n_36 != NULL) && (n_36 != o_36)))
                  _fail(o_36);
                else
                  n_36 = o_36;
              }
              {
                t = not_null(x_35);
                {
                  ATerm r_36 = NULL;
                  t = r_0(t);
                  {
                    p_36 = t;
                    {
                      t = not_null(y_35);
                      {
                        ATerm t_36 = NULL;
                        t = s_0(t);
                        {
                          r_36 = t;
                          {
                            ATerm u_36 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(p_36), not_null(r_36)), not_null(n_36));
                            {
                              u_36 = t;
                              if(((t_36 != NULL) && (t_36 != u_36)))
                                _fail(u_36);
                              else
                                t_36 = u_36;
                            }
                            t = not_null(t_36);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  ATerm k_37 = NULL,m_37 = NULL;
  ATerm t_37 (ATerm t)
  {
    ATerm p_37 = NULL;
    ATerm q_37 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_37), term_r_8);
    {
      t = copy_0(t);
      {
        q_37 = t;
        if(((p_37 != NULL) && (p_37 != q_37)))
          _fail(q_37);
        else
          p_37 = q_37;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(p_37))));
    return(t);
  }
  ATerm k_12 = t;
  int l_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        ATerm i_2 (ATerm t)
        {
          ATerm l_37 = NULL;
          l_37 = t;
          if(((k_37 != NULL) && (k_37 != l_37)))
            _fail(l_37);
          else
            k_37 = l_37;
          return(t);
        }
        t = SOpt_2(t, VS_0, i_2);
        return(t);
      }
      t = fetch_1(t, h_2);
      {
        t = not_null(k_37);
        t = string_to_int_0(t);
      }
      LocalPopChoice(l_12);
    }
  else
    {
      t = k_12;
      t = term_l_6;
    }
  {
    m_37 = t;
    j_37 :
    if(match_int(m_37, 0))
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_t_11;
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            t = t_37(t);
          }
      }
    else
      {
        t = t_37(t);
      }
  }
  return(t);
}
ATerm AC_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm e_38 = NULL,f_38 = NULL;
  e_38 = t;
  d_38 :
  if(match_cons(e_38, sym_AC_1))
    {
      f_38 = ATgetArgument(e_38, 0);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_38 = NULL,k_38 = NULL;
            ATerm j_38 = NULL;
            t = SSLgetAnnotations(not_null(e_38));
            {
              j_38 = t;
              if(((i_38 != NULL) && (i_38 != j_38)))
                _fail(j_38);
              else
                i_38 = j_38;
            }
            {
              t = not_null(f_38);
              {
                ATerm m_38 = NULL;
                t = q_0(t);
                {
                  k_38 = t;
                  {
                    ATerm n_38 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(k_38)), not_null(i_38));
                    {
                      n_38 = t;
                      if(((m_38 != NULL) && (m_38 != n_38)))
                        _fail(n_38);
                      else
                        m_38 = n_38;
                    }
                    t = not_null(m_38);
                  }
                }
              }
            }
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm q_38 = NULL,s_38 = NULL;
              ATerm r_38 = NULL;
              t = SSLgetAnnotations(not_null(e_38));
              {
                r_38 = t;
                if(((q_38 != NULL) && (q_38 != r_38)))
                  _fail(r_38);
                else
                  q_38 = r_38;
              }
              {
                t = not_null(f_38);
                {
                  ATerm u_38 = NULL;
                  t = q_0(t);
                  {
                    s_38 = t;
                    {
                      ATerm v_38 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(s_38)), not_null(q_38));
                      {
                        v_38 = t;
                        if(((u_38 != NULL) && (u_38 != v_38)))
                          _fail(v_38);
                        else
                          u_38 = v_38;
                      }
                      t = not_null(u_38);
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
ATerm AR_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm n_39 = NULL,o_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym_AR_1))
    {
      o_39 = ATgetArgument(n_39, 0);
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_39 = NULL,v_39 = NULL;
            ATerm u_39 = NULL;
            t = SSLgetAnnotations(not_null(n_39));
            {
              u_39 = t;
              if(((r_39 != NULL) && (r_39 != u_39)))
                _fail(u_39);
              else
                r_39 = u_39;
            }
            {
              t = not_null(o_39);
              {
                ATerm x_39 = NULL;
                t = p_0(t);
                {
                  v_39 = t;
                  {
                    ATerm y_39 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(v_39)), not_null(r_39));
                    {
                      y_39 = t;
                      if(((x_39 != NULL) && (x_39 != y_39)))
                        _fail(y_39);
                      else
                        x_39 = y_39;
                    }
                    t = not_null(x_39);
                  }
                }
              }
            }
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            {
              ATerm i_40 = NULL,k_40 = NULL;
              ATerm j_40 = NULL;
              t = SSLgetAnnotations(not_null(n_39));
              {
                j_40 = t;
                if(((i_40 != NULL) && (i_40 != j_40)))
                  _fail(j_40);
                else
                  i_40 = j_40;
              }
              {
                t = not_null(o_39);
                {
                  ATerm m_40 = NULL;
                  t = p_0(t);
                  {
                    k_40 = t;
                    {
                      ATerm n_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(k_40)), not_null(i_40));
                      {
                        n_40 = t;
                        if(((m_40 != NULL) && (m_40 != n_40)))
                          _fail(n_40);
                        else
                          m_40 = n_40;
                      }
                      t = not_null(m_40);
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
ATerm AL_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm f_41 = NULL,g_41 = NULL;
  f_41 = t;
  e_41 :
  if(match_cons(f_41, sym_AL_1))
    {
      g_41 = ATgetArgument(f_41, 0);
      {
        ATerm s_12 = t;
        int t_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_41 = NULL,l_41 = NULL;
            ATerm k_41 = NULL;
            t = SSLgetAnnotations(not_null(f_41));
            {
              k_41 = t;
              if(((j_41 != NULL) && (j_41 != k_41)))
                _fail(k_41);
              else
                j_41 = k_41;
            }
            {
              t = not_null(g_41);
              {
                ATerm o_41 = NULL;
                t = o_0(t);
                {
                  l_41 = t;
                  {
                    ATerm p_41 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(l_41)), not_null(j_41));
                    {
                      p_41 = t;
                      if(((o_41 != NULL) && (o_41 != p_41)))
                        _fail(p_41);
                      else
                        o_41 = p_41;
                    }
                    t = not_null(o_41);
                  }
                }
              }
            }
            LocalPopChoice(t_12);
          }
        else
          {
            t = s_12;
            {
              ATerm s_41 = NULL,u_41 = NULL;
              ATerm t_41 = NULL;
              t = SSLgetAnnotations(not_null(f_41));
              {
                t_41 = t;
                if(((s_41 != NULL) && (s_41 != t_41)))
                  _fail(t_41);
                else
                  s_41 = t_41;
              }
              {
                t = not_null(g_41);
                {
                  ATerm w_41 = NULL;
                  t = o_0(t);
                  {
                    u_41 = t;
                    {
                      ATerm x_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(u_41)), not_null(s_41));
                      {
                        x_41 = t;
                        if(((w_41 != NULL) && (w_41 != x_41)))
                          _fail(x_41);
                        else
                          w_41 = x_41;
                      }
                      t = not_null(w_41);
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
ATerm aopt_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = AL_1(t, _id);
      t = term_w_12;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = AR_1(t, _id);
            t = term_z_12;
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            {
              t = AC_1(t, _id);
              t = term_a_13;
            }
          }
      }
    }
  return(t);
}
ATerm make_hs_0 (ATerm t)
{
  ATerm n_42 = NULL,o_42 = NULL,p_42 = NULL,q_42 = NULL;
  ATerm w_42 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(q_42));
    return(t);
  }
  o_42 = t;
  j_42 :
  if(match_cons(o_42, sym_AL_1))
    {
      p_42 = ATgetArgument(o_42, 0);
      if(((n_42 != NULL) && (n_42 != p_42)))
        _fail(p_42);
      else
        n_42 = p_42;
    }
  else
    {
      if(match_cons(o_42, sym_AR_1))
        {
          p_42 = ATgetArgument(o_42, 0);
          if(((n_42 != NULL) && (n_42 != p_42)))
            _fail(p_42);
          else
            n_42 = p_42;
        }
      else
        {
          if(match_cons(o_42, sym_AC_1))
            {
              p_42 = ATgetArgument(o_42, 0);
              if(((n_42 != NULL) && (n_42 != p_42)))
                _fail(p_42);
              else
                n_42 = p_42;
            }
          else
            {
              _fail(t);
            }
        }
    }
  {
    t = not_null(n_42);
    {
      t = Hspace_0(t);
      {
        q_42 = t;
        m_42 :
        if(((ATermList) q_42 == ATempty))
          {
            {
            }
          }
        else
          {
            t = w_42(t);
          }
      }
    }
  }
  return(t);
}
ATerm toa_1 (ATerm t, ATerm t_88 (ATerm))
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  t_43 :
  if(match_cons(v_43, sym_R_2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      u_43 :
      if(((ATermList) w_43 == ATempty))
        {
          {
            ATerm z_43 = NULL,a_44 = NULL;
            ATerm b_44 = NULL,c_44 = NULL;
            t = term_t_10;
            {
              t = t_88(t);
              {
                b_44 = t;
                s_43 :
                if(match_cons(b_44, sym_AOPTIONS_1))
                  {
                    c_44 = ATgetArgument(b_44, 0);
                    {
                      ATerm b_46 = NULL;
                      if(((z_43 != NULL) && (z_43 != c_44)))
                        _fail(c_44);
                      else
                        z_43 = c_44;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_43), not_null(z_43));
                        {
                          ATerm e_46 (ATerm t)
                          {
                            ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL;
                            ATerm j_46 (ATerm t)
                            {
                              ATerm a_45 = NULL;
                              ATerm b_45 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(k_44), not_null(l_44));
                              {
                                t = e_46(t);
                                {
                                  b_45 = t;
                                  if(((a_45 != NULL) && (a_45 != b_45)))
                                    _fail(b_45);
                                  else
                                    a_45 = b_45;
                                }
                              }
                              t = (ATerm) ATinsert(CheckATermList(not_null(a_45)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, not_null(d_44), not_null(e_44)))));
                              return(t);
                            }
                            ATerm k_46 (ATerm t)
                            {
                              ATerm i_45 = NULL,k_45 = NULL,m_45 = NULL;
                              ATerm b_13;
                              b_13 = t;
                              {
                                ATerm j_45 = NULL;
                                t = not_null(m_44);
                                {
                                  t = aopt_0(t);
                                  {
                                    j_45 = t;
                                    if(((i_45 != NULL) && (i_45 != j_45)))
                                      _fail(j_45);
                                    else
                                      i_45 = j_45;
                                  }
                                }
                              }
                              t = b_13;
                              {
                                ATerm c_13;
                                c_13 = t;
                                {
                                  ATerm l_45 = NULL;
                                  t = not_null(m_44);
                                  {
                                    t = make_hs_0(t);
                                    {
                                      l_45 = t;
                                      if(((k_45 != NULL) && (k_45 != l_45)))
                                        _fail(l_45);
                                      else
                                        k_45 = l_45;
                                    }
                                  }
                                }
                                t = c_13;
                                {
                                  ATerm n_45 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_44)), not_null(f_44)), not_null(n_44));
                                  {
                                    t = e_46(t);
                                    {
                                      n_45 = t;
                                      if(((m_45 != NULL) && (m_45 != n_45)))
                                        _fail(n_45);
                                      else
                                        m_45 = n_45;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(m_45)), not_null(k_45)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(i_45)), not_null(j_44)));
                                }
                              }
                              return(t);
                            }
                            ATerm l_46 (ATerm t)
                            {
                              ATerm w_45 = NULL,z_45 = NULL;
                              ATerm d_13;
                              d_13 = t;
                              {
                                ATerm x_45 = NULL;
                                t = not_null(m_44);
                                {
                                  t = aopt_0(t);
                                  {
                                    x_45 = t;
                                    if(((w_45 != NULL) && (w_45 != x_45)))
                                      _fail(x_45);
                                    else
                                      w_45 = x_45;
                                  }
                                }
                              }
                              t = d_13;
                              {
                                ATerm a_46 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_44), not_null(n_44));
                                {
                                  t = e_46(t);
                                  {
                                    a_46 = t;
                                    if(((z_45 != NULL) && (z_45 != a_46)))
                                      _fail(a_46);
                                    else
                                      z_45 = a_46;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(z_45)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(w_45)), not_null(j_44)));
                              }
                              return(t);
                            }
                            h_44 = t;
                            j_43 :
                            if(match_cons(h_44, sym__2))
                              {
                                i_44 = ATgetArgument(h_44, 0);
                                l_44 = ATgetArgument(h_44, 1);
                                k_43 :
                                if(((ATermList) i_44 == ATempty))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(i_44) == AT_LIST) && ((ATermList) i_44 != ATempty)))
                                      {
                                        j_44 = ATgetFirst((ATermList) i_44);
                                        k_44 = (ATerm) ATgetNext((ATermList) i_44);
                                        l_43 :
                                        if(((ATgetType(l_44) == AT_LIST) && ((ATermList) l_44 != ATempty)))
                                          {
                                            m_44 = ATgetFirst((ATermList) l_44);
                                            n_44 = (ATerm) ATgetNext((ATermList) l_44);
                                            m_43 :
                                            if(((ATgetType(k_44) == AT_LIST) && ((ATermList) k_44 != ATempty)))
                                              {
                                                f_44 = ATgetFirst((ATermList) k_44);
                                                g_44 = (ATerm) ATgetNext((ATermList) k_44);
                                                n_43 :
                                                if(match_cons(j_44, sym_C_2))
                                                  {
                                                    d_44 = ATgetArgument(j_44, 0);
                                                    e_44 = ATgetArgument(j_44, 1);
                                                    {
                                                      ATerm e_13 = t;
                                                      int f_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_46(t);
                                                          LocalPopChoice(f_13);
                                                        }
                                                      else
                                                        {
                                                          t = e_13;
                                                          {
                                                            ATerm g_13 = t;
                                                            int h_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = k_46(t);
                                                                LocalPopChoice(h_13);
                                                              }
                                                            else
                                                              {
                                                                t = g_13;
                                                                t = l_46(t);
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm i_13 = t;
                                                    int j_13 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = k_46(t);
                                                        LocalPopChoice(j_13);
                                                      }
                                                    else
                                                      {
                                                        t = i_13;
                                                        t = l_46(t);
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                o_43 :
                                                if(match_cons(j_44, sym_C_2))
                                                  {
                                                    d_44 = ATgetArgument(j_44, 0);
                                                    e_44 = ATgetArgument(j_44, 1);
                                                    {
                                                      ATerm k_13 = t;
                                                      int l_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = j_46(t);
                                                          LocalPopChoice(l_13);
                                                        }
                                                      else
                                                        {
                                                          t = k_13;
                                                          t = l_46(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = l_46(t);
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            p_43 :
                                            q_43 :
                                            if(match_cons(j_44, sym_C_2))
                                              {
                                                d_44 = ATgetArgument(j_44, 0);
                                                e_44 = ATgetArgument(j_44, 1);
                                                t = j_46(t);
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
                          t = e_46(t);
                          {
                            b_46 = t;
                            if(((a_44 != NULL) && (a_44 != b_46)))
                              _fail(b_46);
                            else
                              a_44 = b_46;
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
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_g_11), (ATerm) ATinsert(ATempty, not_null(a_44)));
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
ATerm R_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm k_47 = NULL,l_47 = NULL,m_47 = NULL;
  k_47 = t;
  j_47 :
  if(match_cons(k_47, sym_R_2))
    {
      l_47 = ATgetArgument(k_47, 0);
      m_47 = ATgetArgument(k_47, 1);
      {
        ATerm m_13 = t;
        int n_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_47 = NULL,s_47 = NULL;
            ATerm r_47 = NULL;
            t = SSLgetAnnotations(not_null(k_47));
            {
              r_47 = t;
              if(((q_47 != NULL) && (q_47 != r_47)))
                _fail(r_47);
              else
                q_47 = r_47;
            }
            {
              t = not_null(l_47);
              {
                ATerm u_47 = NULL;
                t = m_0(t);
                {
                  s_47 = t;
                  {
                    t = not_null(m_47);
                    {
                      ATerm w_50 = NULL;
                      t = n_0(t);
                      {
                        u_47 = t;
                        {
                          ATerm k_51 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(s_47), not_null(u_47)), not_null(q_47));
                          {
                            k_51 = t;
                            if(((w_50 != NULL) && (w_50 != k_51)))
                              _fail(k_51);
                            else
                              w_50 = k_51;
                          }
                          t = not_null(w_50);
                        }
                      }
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
              ATerm q_51 = NULL,s_51 = NULL;
              ATerm r_51 = NULL;
              t = SSLgetAnnotations(not_null(k_47));
              {
                r_51 = t;
                if(((q_51 != NULL) && (q_51 != r_51)))
                  _fail(r_51);
                else
                  q_51 = r_51;
              }
              {
                t = not_null(l_47);
                {
                  ATerm u_51 = NULL;
                  t = m_0(t);
                  {
                    s_51 = t;
                    {
                      t = not_null(m_47);
                      {
                        ATerm w_51 = NULL;
                        t = n_0(t);
                        {
                          u_51 = t;
                          {
                            ATerm x_51 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(s_51), not_null(u_51)), not_null(q_51));
                            {
                              x_51 = t;
                              if(((w_51 != NULL) && (w_51 != x_51)))
                                _fail(x_51);
                              else
                                w_51 = x_51;
                            }
                            t = not_null(w_51);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm j_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, j_2);
  {
    ATerm q_53 (ATerm t)
    {
      ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL,v_52 = NULL,w_52 = NULL,x_52 = NULL;
      ATerm t_53 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_52), (ATerm) ATinsert(CheckATermList(not_null(x_52)), not_null(v_52)));
        t = q_53(t);
        return(t);
      }
      t_52 = t;
      o_52 :
      if(match_cons(t_52, sym__2))
        {
          u_52 = ATgetArgument(t_52, 0);
          x_52 = ATgetArgument(t_52, 1);
          p_52 :
          if(((ATermList) u_52 == ATempty))
            {
              {
                ATerm c_53 = NULL;
                ATerm d_53 = NULL;
                t = not_null(x_52);
                {
                  t = reverse_0(t);
                  {
                    d_53 = t;
                    if(((c_53 != NULL) && (c_53 != d_53)))
                      _fail(d_53);
                    else
                      c_53 = d_53;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(c_53)));
              }
            }
          else
            {
              if(((ATgetType(u_52) == AT_LIST) && ((ATermList) u_52 != ATempty)))
                {
                  v_52 = ATgetFirst((ATermList) u_52);
                  w_52 = (ATerm) ATgetNext((ATermList) u_52);
                  q_52 :
                  if(match_cons(v_52, sym_R_2))
                    {
                      r_52 = ATgetArgument(v_52, 0);
                      s_52 = ATgetArgument(v_52, 1);
                      {
                        ATerm o_13 = t;
                        int p_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm i_53 = NULL,k_53 = NULL;
                            ATerm q_13;
                            q_13 = t;
                            {
                              ATerm j_53 = NULL;
                              t = not_null(x_52);
                              {
                                t = reverse_0(t);
                                {
                                  j_53 = t;
                                  if(((i_53 != NULL) && (i_53 != j_53)))
                                    _fail(j_53);
                                  else
                                    i_53 = j_53;
                                }
                              }
                            }
                            t = q_13;
                            {
                              ATerm l_53 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(w_52), (ATerm) ATempty);
                              {
                                t = q_53(t);
                                {
                                  l_53 = t;
                                  if(((k_53 != NULL) && (k_53 != l_53)))
                                    _fail(l_53);
                                  else
                                    k_53 = l_53;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(k_53)), (ATerm) ATmakeAppl(sym_R_2, not_null(r_52), not_null(s_52))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(i_53)));
                            }
                            LocalPopChoice(p_13);
                          }
                        else
                          {
                            t = o_13;
                            t = t_53(t);
                          }
                      }
                    }
                  else
                    {
                      t = t_53(t);
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
    t = q_53(t);
    {
      ATerm k_2 (ATerm t)
      {
        ATerm r_13 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_13;
          }
        return(t);
      }
      t = filter_1(t, k_2);
    }
  }
  return(t);
}
ATerm Abox2html_0 (ATerm t)
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL,h_55 = NULL;
  g_55 = t;
  c_55 :
  if(match_cons(g_55, sym_REF_2))
    {
      h_55 = ATgetArgument(g_55, 0);
      f_55 = ATgetArgument(g_55, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, not_null(h_55), not_null(f_55));
    }
  else
    {
      if(match_cons(g_55, sym_LBL_2))
        {
          h_55 = ATgetArgument(g_55, 0);
          f_55 = ATgetArgument(g_55, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(f_55)), (ATerm) ATmakeAppl(sym_ANCHOR_1, not_null(h_55)));
        }
      else
        {
          if(match_cons(g_55, sym_LNAT_2))
            {
              h_55 = ATgetArgument(g_55, 0);
              f_55 = ATgetArgument(g_55, 1);
              t = term_s_13;
            }
          else
            {
              if(match_cons(g_55, sym_L_2))
                {
                  h_55 = ATgetArgument(g_55, 0);
                  f_55 = ATgetArgument(g_55, 1);
                  t = term_s_13;
                }
              else
                {
                  if(match_cons(g_55, sym_ALT_2))
                    {
                      h_55 = ATgetArgument(g_55, 0);
                      f_55 = ATgetArgument(g_55, 1);
                      t = not_null(h_55);
                    }
                  else
                    {
                      if(match_cons(g_55, sym_A_3))
                        {
                          h_55 = ATgetArgument(g_55, 0);
                          f_55 = ATgetArgument(g_55, 1);
                          e_55 = ATgetArgument(g_55, 2);
                          {
                            ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
                            ATerm y_55 = NULL;
                            t = not_null(e_55);
                            {
                              ATerm z_55 = NULL;
                              t = construct_rows_0(t);
                              {
                                y_55 = t;
                                {
                                  if(((v_55 != NULL) && (v_55 != y_55)))
                                    _fail(y_55);
                                  else
                                    v_55 = y_55;
                                  {
                                    t = not_null(f_55);
                                    {
                                      ATerm a_56 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        z_55 = t;
                                        {
                                          if(((w_55 != NULL) && (w_55 != z_55)))
                                            _fail(z_55);
                                          else
                                            w_55 = z_55;
                                          {
                                            t = not_null(v_55);
                                            {
                                              ATerm l_2 (ATerm t)
                                              {
                                                ATerm m_2 (ATerm t)
                                                {
                                                  t = not_null(h_55);
                                                  return(t);
                                                }
                                                t = toa_1(t, m_2);
                                                return(t);
                                              }
                                              t = map_1(t, l_2);
                                              {
                                                ATerm n_2 (ATerm t)
                                                {
                                                  t = not_null(w_55);
                                                  return(t);
                                                }
                                                t = separate_by_1(t, n_2);
                                                {
                                                  a_56 = t;
                                                  if(((x_55 != NULL) && (x_55 != a_56)))
                                                    _fail(a_56);
                                                  else
                                                    x_55 = a_56;
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
                            t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(x_55))))));
                          }
                        }
                      else
                        {
                          if(match_cons(g_55, sym_HV_2))
                            {
                              h_55 = ATgetArgument(g_55, 0);
                              f_55 = ATgetArgument(g_55, 1);
                              {
                                ATerm d_56 = NULL,e_56 = NULL,f_56 = NULL;
                                ATerm g_56 = NULL;
                                t = not_null(h_55);
                                {
                                  ATerm l_56 = NULL;
                                  t = Hspace_0(t);
                                  {
                                    g_56 = t;
                                    {
                                      if(((d_56 != NULL) && (d_56 != g_56)))
                                        _fail(g_56);
                                      else
                                        d_56 = g_56;
                                      {
                                        ATerm t_13 = t;
                                        int u_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm h_56 = NULL;
                                            h_56 = t;
                                            o_54 :
                                            if(((ATermList) h_56 == ATempty))
                                              {
                                                {
                                                  t = not_null(f_55);
                                                  {
                                                    ATerm o_2 (ATerm t)
                                                    {
                                                      ATerm v_13 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = Nil_0(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = v_13;
                                                        }
                                                      return(t);
                                                    }
                                                    t = filter_1(t, o_2);
                                                  }
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
                                            {
                                              ATerm i_56 = NULL;
                                              ATerm j_56 = NULL;
                                              ATerm q_2 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, term_w_13);
                                                return(t);
                                              }
                                              t = at_last_1(t, q_2);
                                              {
                                                i_56 = t;
                                                {
                                                  if(((e_56 != NULL) && (e_56 != i_56)))
                                                    _fail(i_56);
                                                  else
                                                    e_56 = i_56;
                                                  {
                                                    ATerm k_56 = NULL;
                                                    t = not_null(f_55);
                                                    {
                                                      ATerm s_2 (ATerm t)
                                                      {
                                                        ATerm x_13 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = x_13;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, s_2);
                                                      {
                                                        ATerm t_2 (ATerm t)
                                                        {
                                                          t = not_null(e_56);
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, t_2);
                                                        {
                                                          k_56 = t;
                                                          if(((j_56 != NULL) && (j_56 != k_56)))
                                                            _fail(k_56);
                                                          else
                                                            j_56 = k_56;
                                                        }
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_56)), term_y_13);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        {
                                          l_56 = t;
                                          if(((f_56 != NULL) && (f_56 != l_56)))
                                            _fail(l_56);
                                          else
                                            f_56 = l_56;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = not_null(f_56);
                              }
                            }
                          else
                            {
                              if(match_cons(g_55, sym_V_2))
                                {
                                  h_55 = ATgetArgument(g_55, 0);
                                  f_55 = ATgetArgument(g_55, 1);
                                  {
                                    ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
                                    ATerm r_56 = NULL;
                                    t = not_null(h_55);
                                    {
                                      ATerm s_56 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        r_56 = t;
                                        {
                                          if(((p_56 != NULL) && (p_56 != r_56)))
                                            _fail(r_56);
                                          else
                                            p_56 = r_56;
                                          {
                                            t = not_null(h_55);
                                            {
                                              ATerm t_56 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                s_56 = t;
                                                {
                                                  if(((o_56 != NULL) && (o_56 != s_56)))
                                                    _fail(s_56);
                                                  else
                                                    o_56 = s_56;
                                                  {
                                                    t = not_null(f_55);
                                                    {
                                                      ATerm u_2 (ATerm t)
                                                      {
                                                        ATerm z_13 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = z_13;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, u_2);
                                                      {
                                                        ATerm w_2 (ATerm t)
                                                        {
                                                          ATerm y_2 (ATerm t)
                                                          {
                                                            t = term_t_11;
                                                            return(t);
                                                          }
                                                          t = tov_1(t, y_2);
                                                          return(t);
                                                        }
                                                        ATerm x_2 (ATerm t)
                                                        {
                                                          ATerm z_2 (ATerm t)
                                                          {
                                                            ATerm a_3 (ATerm t)
                                                            {
                                                              t = not_null(o_56);
                                                              return(t);
                                                            }
                                                            t = tov_1(t, a_3);
                                                            return(t);
                                                          }
                                                          t = map_1(t, z_2);
                                                          return(t);
                                                        }
                                                        t = Cons_2(t, w_2, x_2);
                                                        {
                                                          ATerm b_3 (ATerm t)
                                                          {
                                                            t = not_null(p_56);
                                                            return(t);
                                                          }
                                                          t = separate_by_1(t, b_3);
                                                          {
                                                            t_56 = t;
                                                            if(((q_56 != NULL) && (q_56 != t_56)))
                                                              _fail(t_56);
                                                            else
                                                              q_56 = t_56;
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
                                    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, not_null(q_56))), term_y_13);
                                  }
                                }
                              else
                                {
                                  if(match_cons(g_55, sym_H_2))
                                    {
                                      h_55 = ATgetArgument(g_55, 0);
                                      f_55 = ATgetArgument(g_55, 1);
                                      {
                                        ATerm y_56 = NULL,z_56 = NULL;
                                        ATerm a_57 = NULL;
                                        t = not_null(h_55);
                                        {
                                          ATerm b_57 = NULL;
                                          t = Hspace_0(t);
                                          {
                                            a_57 = t;
                                            {
                                              if(((y_56 != NULL) && (y_56 != a_57)))
                                                _fail(a_57);
                                              else
                                                y_56 = a_57;
                                              {
                                                t = not_null(f_55);
                                                {
                                                  ATerm c_3 (ATerm t)
                                                  {
                                                    ATerm a_14 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = a_14;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, c_3);
                                                  {
                                                    ATerm d_3 (ATerm t)
                                                    {
                                                      t = not_null(y_56);
                                                      return(t);
                                                    }
                                                    t = sep_by_1(t, d_3);
                                                    {
                                                      b_57 = t;
                                                      if(((z_56 != NULL) && (z_56 != b_57)))
                                                        _fail(b_57);
                                                      else
                                                        z_56 = b_57;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = not_null(z_56);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(g_55, sym_FBOX_2))
                                        {
                                          h_55 = ATgetArgument(g_55, 0);
                                          f_55 = ATgetArgument(g_55, 1);
                                          {
                                            ATerm e_57 = NULL;
                                            ATerm f_57 = NULL;
                                            t = not_null(h_55);
                                            {
                                              ATerm b_14 = t;
                                              int c_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = KW_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_d_14), (ATerm) ATinsert(ATempty, not_null(f_55)));
                                                  LocalPopChoice(c_14);
                                                }
                                              else
                                                {
                                                  t = b_14;
                                                  {
                                                    ATerm e_14 = t;
                                                    int f_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = VAR_0(t);
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_g_14), (ATerm) ATinsert(ATempty, not_null(f_55)));
                                                        LocalPopChoice(f_14);
                                                      }
                                                    else
                                                      {
                                                        t = e_14;
                                                        {
                                                          ATerm h_14 = t;
                                                          int i_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = NUM_0(t);
                                                              t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_j_14), (ATerm) ATinsert(ATempty, not_null(f_55)));
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
                                                                    t = MATH_0(t);
                                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_m_14), (ATerm) ATinsert(ATempty, not_null(f_55)));
                                                                    LocalPopChoice(l_14);
                                                                  }
                                                                else
                                                                  {
                                                                    t = k_14;
                                                                    t = not_null(f_55);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              {
                                                f_57 = t;
                                                if(((e_57 != NULL) && (e_57 != f_57)))
                                                  _fail(f_57);
                                                else
                                                  e_57 = f_57;
                                              }
                                            }
                                            t = not_null(e_57);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(g_55, sym_C_2))
                                            {
                                              h_55 = ATgetArgument(g_55, 0);
                                              f_55 = ATgetArgument(g_55, 1);
                                              d_55 :
                                              if(((ATermList) h_55 == ATempty))
                                                {
                                                  {
                                                    ATerm h_57 = NULL,i_57 = NULL;
                                                    ATerm m_57 = NULL;
                                                    t = not_null(f_55);
                                                    {
                                                      ATerm n_57 = NULL;
                                                      ATerm e_3 (ATerm t)
                                                      {
                                                        ATerm j_57 = NULL,k_57 = NULL;
                                                        j_57 = t;
                                                        z_54 :
                                                        if(match_cons(j_57, sym_S_1))
                                                          {
                                                            k_57 = ATgetArgument(j_57, 0);
                                                            {
                                                              t = not_null(k_57);
                                                              t = make_html_comment_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      t = map_1(t, e_3);
                                                      {
                                                        m_57 = t;
                                                        {
                                                          if(((h_57 != NULL) && (h_57 != m_57)))
                                                            _fail(m_57);
                                                          else
                                                            h_57 = m_57;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_n_14), (ATerm) ATinsert(ATempty, not_null(h_57))))));
                                                            {
                                                              n_57 = t;
                                                              if(((i_57 != NULL) && (i_57 != n_57)))
                                                                _fail(n_57);
                                                              else
                                                                i_57 = n_57;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    t = not_null(i_57);
                                                  }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(g_55, sym_S_1))
                                                {
                                                  h_55 = ATgetArgument(g_55, 0);
                                                  {
                                                    t = not_null(h_55);
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
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym__2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      {
        t = not_null(v_58);
        {
          ATerm f_3 (ATerm t)
          {
            t = not_null(w_58);
            return(t);
          }
          t = at_end_1(t, f_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm i_80 (ATerm))
{
  ATerm a_59 (ATerm t)
  {
    ATerm o_14 = t;
    int p_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = i_80(t);
        LocalPopChoice(p_14);
      }
    else
      {
        t = o_14;
        t = Cons_2(t, _id, a_59);
      }
    return(t);
  }
  t = a_59(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm b_59 (ATerm t)
  {
    ATerm q_14 = t;
    int r_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_80(t);
        LocalPopChoice(r_14);
      }
    else
      {
        t = q_14;
        t = Cons_2(t, _id, b_59);
      }
    return(t);
  }
  t = b_59(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm w_79 (ATerm))
{
  ATerm e_59 = NULL,g_59 = NULL;
  ATerm g_3 (ATerm t)
  {
    t = Cons_2(t, w_79, _id);
    {
      ATerm h_3 (ATerm t)
      {
        ATerm f_59 = NULL;
        f_59 = t;
        if(((e_59 != NULL) && (e_59 != f_59)))
          _fail(f_59);
        else
          e_59 = f_59;
        return(t);
      }
      t = Cons_2(t, _id, h_3);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, g_3);
  {
    ATerm h_59 = NULL;
    h_59 = t;
    if(((g_59 != NULL) && (g_59 != h_59)))
      _fail(h_59);
    else
      g_59 = h_59;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_59), not_null(e_59));
  }
  return(t);
}
ATerm Distribute_0 (ATerm t)
{
  ATerm v_59 = NULL,w_59 = NULL,x_59 = NULL;
  v_59 = t;
  u_59 :
  if(match_cons(v_59, sym_H_2))
    {
      w_59 = ATgetArgument(v_59, 0);
      x_59 = ATgetArgument(v_59, 1);
      {
        ATerm a_60 = NULL,b_60 = NULL,c_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
        t = not_null(x_59);
        {
          ATerm i_3 (ATerm t)
          {
            ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL;
            d_60 = t;
            m_59 :
            if(match_cons(d_60, sym_V_2))
              {
                e_60 = ATgetArgument(d_60, 0);
                f_60 = ATgetArgument(d_60, 1);
                n_59 :
                if(((ATgetType(f_60) == AT_LIST) && ((ATermList) f_60 != ATempty)))
                  {
                    g_60 = ATgetFirst((ATermList) f_60);
                    h_60 = (ATerm) ATgetNext((ATermList) f_60);
                    {
                      if(((a_60 != NULL) && (a_60 != e_60)))
                        _fail(e_60);
                      else
                        a_60 = e_60;
                      {
                        if(((b_60 != NULL) && (b_60 != g_60)))
                          _fail(g_60);
                        else
                          b_60 = g_60;
                        if(((c_60 != NULL) && (c_60 != h_60)))
                          _fail(h_60);
                        else
                          c_60 = h_60;
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
          t = split_fetch_1(t, i_3);
          {
            i_60 = t;
            t_59 :
            if(match_cons(i_60, sym__2))
              {
                j_60 = ATgetArgument(i_60, 0);
                k_60 = ATgetArgument(i_60, 1);
                {
                  ATerm o_60 = NULL,q_60 = NULL;
                  t = not_null(k_60);
                  {
                    ATerm s_14 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm n_60 = NULL;
                        n_60 = t;
                        p_59 :
                        if(((ATermList) n_60 == ATempty))
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
                        t = s_14;
                      }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(c_60)), not_null(b_60));
                      {
                        ATerm s_60 = NULL;
                        ATerm j_3 (ATerm t)
                        {
                          ATerm k_3 (ATerm t)
                          {
                            ATerm p_60 = NULL;
                            p_60 = t;
                            if(((o_60 != NULL) && (o_60 != p_60)))
                              _fail(p_60);
                            else
                              o_60 = p_60;
                            return(t);
                          }
                          t = Cons_2(t, k_3, Nil_0);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, not_null(w_59), (ATerm) ATinsert(CheckATermList(not_null(k_60)), not_null(o_60))));
                          return(t);
                        }
                        t = at_last_1(t, j_3);
                        {
                          q_60 = t;
                          {
                            ATerm t_60 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(j_60), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(a_60), not_null(q_60))));
                            {
                              t = conc_0(t);
                              {
                                t_60 = t;
                                if(((s_60 != NULL) && (s_60 != t_60)))
                                  _fail(t_60);
                                else
                                  s_60 = t_60;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_H_2, not_null(w_59), not_null(s_60));
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
  ATerm l_3 (ATerm t)
  {
    ATerm m_3 (ATerm t)
    {
      ATerm t_14 = t;
      int u_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_61 = NULL,i_61 = NULL,j_61 = NULL,k_61 = NULL,l_61 = NULL;
          h_61 = t;
          c_61 :
          if(match_cons(h_61, sym_H_2))
            {
              i_61 = ATgetArgument(h_61, 0);
              j_61 = ATgetArgument(h_61, 1);
              d_61 :
              if(((ATgetType(j_61) == AT_LIST) && ((ATermList) j_61 != ATempty)))
                {
                  k_61 = ATgetFirst((ATermList) j_61);
                  l_61 = (ATerm) ATgetNext((ATermList) j_61);
                  e_61 :
                  if(((ATermList) l_61 == ATempty))
                    {
                      t = not_null(k_61);
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
              if(match_cons(h_61, sym_V_2))
                {
                  i_61 = ATgetArgument(h_61, 0);
                  j_61 = ATgetArgument(h_61, 1);
                  f_61 :
                  if(((ATgetType(j_61) == AT_LIST) && ((ATermList) j_61 != ATempty)))
                    {
                      k_61 = ATgetFirst((ATermList) j_61);
                      l_61 = (ATerm) ATgetNext((ATermList) j_61);
                      g_61 :
                      if(((ATermList) l_61 == ATempty))
                        {
                          t = not_null(k_61);
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
          LocalPopChoice(u_14);
        }
      else
        {
          t = t_14;
          t = Distribute_0(t);
        }
      return(t);
    }
    t = try_1(t, m_3);
    return(t);
  }
  t = topdown_1(t, l_3);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm r_61 = NULL;
  t = normalize_0(t);
  {
    ATerm n_3 (ATerm t)
    {
      t = try_1(t, Abox2html_0);
      return(t);
    }
    t = topdown_1(t, n_3);
    {
      r_61 = t;
      {
        t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(r_61))))));
        t = html2text_0(t);
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm l_51 (ATerm), ATerm m_51 (ATerm))
{
  ATerm a_62 = NULL,b_62 = NULL,c_62 = NULL;
  a_62 = t;
  z_61 :
  if(match_cons(a_62, sym__2))
    {
      b_62 = ATgetArgument(a_62, 0);
      c_62 = ATgetArgument(a_62, 1);
      {
        ATerm i_62 = NULL,k_62 = NULL;
        ATerm j_62 = NULL;
        t = SSLgetAnnotations(not_null(a_62));
        {
          j_62 = t;
          if(((i_62 != NULL) && (i_62 != j_62)))
            _fail(j_62);
          else
            i_62 = j_62;
        }
        {
          t = not_null(b_62);
          {
            ATerm p_62 = NULL;
            t = l_51(t);
            {
              k_62 = t;
              {
                t = not_null(c_62);
                {
                  ATerm r_62 = NULL;
                  t = m_51(t);
                  {
                    p_62 = t;
                    {
                      ATerm s_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_62), not_null(p_62)), not_null(i_62));
                      {
                        s_62 = t;
                        if(((r_62 != NULL) && (r_62 != s_62)))
                          _fail(s_62);
                        else
                          r_62 = s_62;
                      }
                      t = not_null(r_62);
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm z_62 = NULL;
  z_62 = t;
  t = SSL_ReadFromFile(not_null(z_62));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_63 = NULL;
  ATerm v_14;
  v_14 = t;
  {
    ATerm w_14 = t;
    int x_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_3 (ATerm t)
        {
          ATerm g_63 = NULL,h_63 = NULL;
          g_63 = t;
          d_63 :
          if(match_cons(g_63, sym_Input_1))
            {
              h_63 = ATgetArgument(g_63, 0);
              if(((f_63 != NULL) && (f_63 != h_63)))
                _fail(h_63);
              else
                f_63 = h_63;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_3);
        LocalPopChoice(x_14);
      }
    else
      {
        t = w_14;
        {
          ATerm i_63 = NULL;
          t = term_y_14;
          {
            i_63 = t;
            if(((f_63 != NULL) && (f_63 != i_63)))
              _fail(i_63);
            else
              f_63 = i_63;
          }
        }
      }
  }
  t = v_14;
  {
    ATerm p_3 (ATerm t)
    {
      t = not_null(f_63);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_3);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm c_70 (ATerm))
{
  ATerm d_15;
  d_15 = t;
  {
    ATerm n_63 = NULL,p_63 = NULL;
    ATerm e_15;
    e_15 = t;
    {
      ATerm o_63 = NULL;
      t = c_70(t);
      {
        o_63 = t;
        if(((n_63 != NULL) && (n_63 != o_63)))
          _fail(o_63);
        else
          n_63 = o_63;
      }
    }
    t = e_15;
    {
      ATerm q_63 = NULL;
      q_63 = t;
      if(((p_63 != NULL) && (p_63 != q_63)))
        _fail(q_63);
      else
        p_63 = q_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_63)), not_null(n_63)));
        t = printnl_0(t);
      }
    }
  }
  t = d_15;
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm j_70 (ATerm))
{
  ATerm m_15;
  m_15 = t;
  {
    t = j_70(t);
    {
      ATerm q_3 (ATerm t)
      {
        t = term_n_15;
        return(t);
      }
      t = debug_1(t, q_3);
    }
  }
  t = m_15;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm x_63 = NULL,y_63 = NULL;
  ATerm r_15 = t;
  int s_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL;
      z_63 = t;
      u_63 :
      if(match_cons(z_63, sym__2))
        {
          a_64 = ATgetArgument(z_63, 0);
          b_64 = ATgetArgument(z_63, 1);
          {
            if(((y_63 != NULL) && (y_63 != a_64)))
              _fail(a_64);
            else
              y_63 = a_64;
            {
              if(((x_63 != NULL) && (x_63 != b_64)))
                _fail(b_64);
              else
                x_63 = b_64;
              t = SSL_open_file(not_null(y_63), not_null(x_63));
            }
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_15);
    }
  else
    {
      t = r_15;
      {
        ATerm c_64 = NULL;
        ATerm d_64 = NULL;
        ATerm r_3 (ATerm t)
        {
          t = term_v_15;
          return(t);
        }
        t = obsolete_1(t, r_3);
        {
          c_64 = t;
          {
            if(((y_63 != NULL) && (y_63 != c_64)))
              _fail(c_64);
            else
              y_63 = c_64;
            {
              ATerm d_16;
              d_16 = t;
              {
                ATerm e_64 = NULL;
                t = term_f_16;
                {
                  e_64 = t;
                  if(((d_64 != NULL) && (d_64 != e_64)))
                    _fail(e_64);
                  else
                    d_64 = e_64;
                }
              }
              t = d_16;
              t = SSL_open_file(not_null(y_63), not_null(d_64));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm i_64 (ATerm t)
  {
    ATerm g_16 = t;
    int h_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, t_79, _id);
        LocalPopChoice(h_16);
      }
    else
      {
        t = g_16;
        t = Cons_2(t, _id, i_64);
      }
    return(t);
  }
  t = i_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_67 (ATerm))
{
  t = fetch_1(t, j_67);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm l_64 = NULL;
  ATerm j_16;
  j_16 = t;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm m_64 = NULL,n_64 = NULL;
      m_64 = t;
      k_64 :
      if(match_cons(m_64, sym_Program_1))
        {
          n_64 = ATgetArgument(m_64, 0);
          if(((l_64 != NULL) && (l_64 != n_64)))
            _fail(n_64);
          else
            l_64 = n_64;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, s_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_16), not_null(l_64)), term_k_16));
      {
        t = printnl_0(t);
        {
          t = term_l_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_16;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_64 = NULL;
  t_64 = t;
  s_64 :
  if(match_cons(t_64, sym_Version_0))
    {
      ATerm v_64 = NULL,x_64 = NULL;
      ATerm m_16;
      m_16 = t;
      {
        ATerm w_64 = NULL;
        t = SSLgetAnnotations(not_null(t_64));
        {
          w_64 = t;
          if(((v_64 != NULL) && (v_64 != w_64)))
            _fail(w_64);
          else
            v_64 = w_64;
        }
      }
      t = m_16;
      {
        ATerm y_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_64));
        {
          y_64 = t;
          if(((x_64 != NULL) && (x_64 != y_64)))
            _fail(y_64);
          else
            x_64 = y_64;
        }
        t = not_null(x_64);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_69 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm p_16 = t;
    int q_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(q_16);
      }
    else
      {
        t = p_16;
        {
          ATerm r_16 = t;
          int s_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(s_16);
            }
          else
            {
              t = r_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_3);
  t = k_69(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm d_65 = NULL;
  d_65 = t;
  t = SSL_string_to_int(not_null(d_65));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm l_65 = NULL,m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL;
  l_65 = t;
  j_65 :
  if(match_string(l_65, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(l_65) == AT_LIST) && ((ATermList) l_65 != ATempty)))
        {
          m_65 = ATgetFirst((ATermList) l_65);
          n_65 = (ATerm) ATgetNext((ATermList) l_65);
          k_65 :
          if(((ATgetType(n_65) == AT_LIST) && ((ATermList) n_65 != ATempty)))
            {
              o_65 = ATgetFirst((ATermList) n_65);
              p_65 = (ATerm) ATgetNext((ATermList) n_65);
              {
                ATerm t_65 = NULL;
                ATerm t_16;
                t_16 = t;
                {
                  t = not_null(m_65);
                  t = j_0(t);
                }
                t = t_16;
                {
                  ATerm u_65 = NULL;
                  t = not_null(o_65);
                  {
                    t = k_0(t);
                    {
                      u_65 = t;
                      if(((t_65 != NULL) && (t_65 != u_65)))
                        _fail(u_65);
                      else
                        t_65 = u_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_65)), not_null(t_65));
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
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_3 (ATerm t)
      {
        ATerm r_66 = NULL;
        r_66 = t;
        y_65 :
        if(!(match_string(r_66, "-i")))
          {
            if(!(match_string(r_66, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        ATerm u_66 = NULL;
        ATerm a_17;
        a_17 = t;
        {
          ATerm s_66 = NULL;
          ATerm t_66 = NULL;
          t_66 = t;
          if(((s_66 != NULL) && (s_66 != t_66)))
            _fail(t_66);
          else
            s_66 = t_66;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_c_17, not_null(s_66));
            t = set_config_0(t);
          }
        }
        t = a_17;
        {
          ATerm v_66 = NULL;
          v_66 = t;
          if(((u_66 != NULL) && (u_66 != v_66)))
            _fail(v_66);
          else
            u_66 = v_66;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(u_66));
        }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_d_17;
        return(t);
      }
      t = ArgOption_3(t, u_3, v_3, w_3);
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm e_17 = t;
        int g_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_3 (ATerm t)
            {
              ATerm w_66 = NULL;
              w_66 = t;
              b_66 :
              if(!(match_string(w_66, "-o")))
                {
                  if(!(match_string(w_66, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              ATerm z_66 = NULL;
              ATerm i_17;
              i_17 = t;
              {
                ATerm x_66 = NULL;
                ATerm y_66 = NULL;
                y_66 = t;
                if(((x_66 != NULL) && (x_66 != y_66)))
                  _fail(y_66);
                else
                  x_66 = y_66;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_17, not_null(x_66));
                  t = set_config_0(t);
                }
              }
              t = i_17;
              {
                ATerm a_67 = NULL;
                a_67 = t;
                if(((z_66 != NULL) && (z_66 != a_67)))
                  _fail(a_67);
                else
                  z_66 = a_67;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_66));
              }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              t = term_p_17;
              return(t);
            }
            t = ArgOption_3(t, x_3, y_3, z_3);
            LocalPopChoice(g_17);
          }
        else
          {
            t = e_17;
            {
              ATerm v_17 = t;
              int w_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_4 (ATerm t)
                  {
                    ATerm b_67 = NULL;
                    b_67 = t;
                    e_66 :
                    if(!(match_string(b_67, "-S")))
                      {
                        if(!(match_string(b_67, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm b_4 (ATerm t)
                  {
                    t = term_x_17;
                    t = set_config_0(t);
                    t = term_b_18;
                    return(t);
                  }
                  ATerm c_4 (ATerm t)
                  {
                    t = term_c_18;
                    return(t);
                  }
                  t = Option_3(t, a_4, b_4, c_4);
                  LocalPopChoice(w_17);
                }
              else
                {
                  t = v_17;
                  {
                    ATerm d_18 = t;
                    int j_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm d_4 (ATerm t)
                        {
                          ATerm c_67 = NULL;
                          c_67 = t;
                          f_66 :
                          if(!(match_string(c_67, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_4 (ATerm t)
                        {
                          ATerm f_67 = NULL;
                          ATerm k_18;
                          k_18 = t;
                          {
                            ATerm d_67 = NULL;
                            ATerm e_67 = NULL;
                            t = string_to_int_0(t);
                            {
                              e_67 = t;
                              if(((d_67 != NULL) && (d_67 != e_67)))
                                _fail(e_67);
                              else
                                d_67 = e_67;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_n_6, not_null(d_67));
                              t = set_config_0(t);
                            }
                          }
                          t = k_18;
                          {
                            ATerm g_67 = NULL;
                            g_67 = t;
                            if(((f_67 != NULL) && (f_67 != g_67)))
                              _fail(g_67);
                            else
                              f_67 = g_67;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(f_67));
                          }
                          return(t);
                        }
                        ATerm g_4 (ATerm t)
                        {
                          t = term_l_18;
                          return(t);
                        }
                        t = ArgOption_3(t, d_4, f_4, g_4);
                        LocalPopChoice(j_18);
                      }
                    else
                      {
                        t = d_18;
                        {
                          ATerm p_18 = t;
                          int r_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_4 (ATerm t)
                              {
                                ATerm h_67 = NULL;
                                h_67 = t;
                                i_66 :
                                if(!(match_string(h_67, "-v")))
                                  {
                                    if(!(match_string(h_67, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm i_4 (ATerm t)
                              {
                                t = term_u_18;
                                t = set_config_0(t);
                                t = term_v_18;
                                return(t);
                              }
                              ATerm j_4 (ATerm t)
                              {
                                t = term_w_18;
                                return(t);
                              }
                              t = Option_3(t, h_4, i_4, j_4);
                              LocalPopChoice(r_18);
                            }
                          else
                            {
                              t = p_18;
                              {
                                ATerm x_18 = t;
                                int y_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm k_4 (ATerm t)
                                    {
                                      ATerm i_67 = NULL;
                                      i_67 = t;
                                      j_66 :
                                      if(!(match_string(i_67, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm m_4 (ATerm t)
                                    {
                                      t = term_a_19;
                                      t = set_config_0(t);
                                      t = term_b_19;
                                      return(t);
                                    }
                                    ATerm n_4 (ATerm t)
                                    {
                                      t = term_c_19;
                                      return(t);
                                    }
                                    t = Option_3(t, k_4, m_4, n_4);
                                    LocalPopChoice(y_18);
                                  }
                                else
                                  {
                                    t = x_18;
                                    {
                                      ATerm o_4 (ATerm t)
                                      {
                                        ATerm k_67 = NULL;
                                        k_67 = t;
                                        q_66 :
                                        if(!(match_string(k_67, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm s_4 (ATerm t)
                                      {
                                        t = term_g_19;
                                        t = set_config_0(t);
                                        t = term_l_19;
                                        return(t);
                                      }
                                      ATerm t_4 (ATerm t)
                                      {
                                        t = term_q_19;
                                        return(t);
                                      }
                                      t = Option_3(t, o_4, s_4, t_4);
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
  ATerm t_67 = NULL;
  t_67 = t;
  t = SSL_table_destroy(not_null(t_67));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_67 = NULL;
  x_67 = t;
  t = SSL_exit(not_null(x_67));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm b_68 = NULL;
  b_68 = t;
  t = SSL_implode_string(not_null(b_68));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm z_79 (ATerm))
{
  ATerm e_68 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_68);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        {
          t = Nil_0(t);
          t = z_79(t);
        }
      }
    return(t);
  }
  t = e_68(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      {
        ATerm h_68 = NULL,i_68 = NULL,j_68 = NULL;
        h_68 = t;
        g_68 :
        if(((ATgetType(h_68) == AT_LIST) && ((ATermList) h_68 != ATempty)))
          {
            i_68 = ATgetFirst((ATermList) h_68);
            j_68 = (ATerm) ATgetNext((ATermList) h_68);
            {
              t = not_null(i_68);
              {
                ATerm u_4 (ATerm t)
                {
                  t = not_null(j_68);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_4);
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
  ATerm p_68 = NULL;
  p_68 = t;
  t = SSL_explode_string(not_null(p_68));
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
ATerm long_description_1 (ATerm t, ATerm l_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm s_68 (ATerm t)
  {
    ATerm v_19 = t;
    int w_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_19);
      }
    else
      {
        t = v_19;
        t = Cons_2(t, l_79, s_68);
      }
    return(t);
  }
  t = s_68(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL;
  b_69 = t;
  y_68 :
  if(((ATgetType(b_69) == AT_LIST) && ((ATermList) b_69 != ATempty)))
    {
      z_68 = ATgetFirst((ATermList) b_69);
      a_69 = (ATerm) ATgetNext((ATermList) b_69);
      {
        ATerm e_69 = NULL;
        t = not_null(a_69);
        {
          ATerm x_19;
          x_19 = t;
          {
            ATerm f_69 = NULL,h_69 = NULL,j_69 = NULL;
            ATerm y_19;
            y_19 = t;
            {
              ATerm g_69 = NULL;
              t = i_0(t);
              {
                g_69 = t;
                if(((f_69 != NULL) && (f_69 != g_69)))
                  _fail(g_69);
                else
                  f_69 = g_69;
              }
            }
            t = y_19;
            {
              ATerm i_69 = NULL;
              t = not_null(z_68);
              {
                t = h_0(t);
                {
                  i_69 = t;
                  if(((h_69 != NULL) && (h_69 != i_69)))
                    _fail(i_69);
                  else
                    h_69 = i_69;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_69)), not_null(h_69));
                {
                  j_69 = t;
                  if(((e_69 != NULL) && (e_69 != j_69)))
                    _fail(j_69);
                  else
                    e_69 = j_69;
                }
              }
            }
          }
          t = x_19;
          {
            ATerm v_4 (ATerm t)
            {
              t = not_null(e_69);
              return(t);
            }
            t = reverse_acc_2(t, h_0, v_4);
          }
        }
      }
    }
  else
    {
      if(((ATermList) b_69 == ATempty))
        {
          {
            t = term_t_10;
            t = i_0(t);
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
  ATerm w_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_66 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm v_56 (ATerm))
{
  ATerm v_69 = NULL,w_69 = NULL;
  v_69 = t;
  u_69 :
  if(match_cons(v_69, sym_Program_1))
    {
      w_69 = ATgetArgument(v_69, 0);
      {
        ATerm z_69 = NULL,b_70 = NULL;
        ATerm a_70 = NULL;
        t = SSLgetAnnotations(not_null(v_69));
        {
          a_70 = t;
          if(((z_69 != NULL) && (z_69 != a_70)))
            _fail(a_70);
          else
            z_69 = a_70;
        }
        {
          t = not_null(w_69);
          {
            ATerm e_70 = NULL;
            t = v_56(t);
            {
              b_70 = t;
              {
                ATerm f_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_70)), not_null(z_69));
                {
                  f_70 = t;
                  if(((e_70 != NULL) && (e_70 != f_70)))
                    _fail(f_70);
                  else
                    e_70 = f_70;
                }
                t = not_null(e_70);
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
ATerm system_usage_0 (ATerm t)
{
  ATerm p_70 = NULL;
  ATerm x_4 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      ATerm q_70 = NULL;
      q_70 = t;
      if(((p_70 != NULL) && (p_70 != q_70)))
        _fail(q_70);
      else
        p_70 = q_70;
      return(t);
    }
    t = Program_1(t, y_4);
    return(t);
  }
  t = option_defined_1(t, x_4);
  {
    ATerm z_4 (ATerm t)
    {
      ATerm r_70 = NULL;
      ATerm s_70 = NULL;
      t = term_t_10;
      {
        ATerm a_5 (ATerm t)
        {
          t = not_null(p_70);
          return(t);
        }
        t = short_description_1(t, a_5);
        {
          t = concat_strings_0(t);
          {
            s_70 = t;
            if(((r_70 != NULL) && (r_70 != s_70)))
              _fail(s_70);
            else
              r_70 = s_70;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATempty, not_null(r_70)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, z_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATempty, term_z_19));
      {
        t = printnl_0(t);
        {
          t = term_e_20;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_5 (ATerm t)
                {
                  ATerm t_70 = NULL;
                  t_70 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_70)), term_j_20));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_5);
                {
                  ATerm c_5 (ATerm t)
                  {
                    ATerm v_70 = NULL;
                    ATerm w_70 = NULL;
                    t = term_t_10;
                    {
                      ATerm d_5 (ATerm t)
                      {
                        t = not_null(p_70);
                        return(t);
                      }
                      t = long_description_1(t, d_5);
                      {
                        t = concat_strings_0(t);
                        {
                          w_70 = t;
                          if(((v_70 != NULL) && (v_70 != w_70)))
                            _fail(w_70);
                          else
                            v_70 = w_70;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_70)), term_o_20));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, c_5);
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
  ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
  d_71 = t;
  c_71 :
  if(match_cons(d_71, sym__2))
    {
      e_71 = ATgetArgument(d_71, 0);
      f_71 = ATgetArgument(d_71, 1);
      {
        ATerm p_20;
        p_20 = t;
        t = SSL_printnl(not_null(e_71), not_null(f_71));
        t = p_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm w_56 (ATerm))
{
  ATerm o_71 = NULL,p_71 = NULL;
  o_71 = t;
  n_71 :
  if(match_cons(o_71, sym_Undefined_1))
    {
      p_71 = ATgetArgument(o_71, 0);
      {
        ATerm s_71 = NULL,u_71 = NULL;
        ATerm t_71 = NULL;
        t = SSLgetAnnotations(not_null(o_71));
        {
          t_71 = t;
          if(((s_71 != NULL) && (s_71 != t_71)))
            _fail(t_71);
          else
            s_71 = t_71;
        }
        {
          t = not_null(p_71);
          {
            ATerm w_71 = NULL;
            t = w_56(t);
            {
              u_71 = t;
              {
                ATerm x_71 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_71)), not_null(s_71));
                {
                  x_71 = t;
                  if(((w_71 != NULL) && (w_71 != x_71)))
                    _fail(x_71);
                  else
                    w_71 = x_71;
                }
                t = not_null(w_71);
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
ATerm Help_0 (ATerm t)
{
  ATerm g_72 = NULL;
  g_72 = t;
  f_72 :
  if(match_cons(g_72, sym_Help_0))
    {
      ATerm i_72 = NULL,k_72 = NULL;
      ATerm q_20;
      q_20 = t;
      {
        ATerm j_72 = NULL;
        t = SSLgetAnnotations(not_null(g_72));
        {
          j_72 = t;
          if(((i_72 != NULL) && (i_72 != j_72)))
            _fail(j_72);
          else
            i_72 = j_72;
        }
      }
      t = q_20;
      {
        ATerm l_72 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(i_72));
        {
          l_72 = t;
          if(((k_72 != NULL) && (k_72 != l_72)))
            _fail(l_72);
          else
            k_72 = l_72;
        }
        t = not_null(k_72);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_72 = NULL,u_72 = NULL,v_72 = NULL;
  t_72 = t;
  s_72 :
  if(match_cons(t_72, sym__2))
    {
      u_72 = ATgetArgument(t_72, 0);
      v_72 = ATgetArgument(t_72, 1);
      t = SSL_table_get(not_null(u_72), not_null(v_72));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_73 = NULL,d_73 = NULL,e_73 = NULL,g_73 = NULL;
  c_73 = t;
  b_73 :
  if(match_cons(c_73, sym__3))
    {
      d_73 = ATgetArgument(c_73, 0);
      e_73 = ATgetArgument(c_73, 1);
      g_73 = ATgetArgument(c_73, 2);
      {
        ATerm r_20;
        r_20 = t;
        {
          ATerm k_73 = NULL;
          ATerm l_73 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_73), not_null(e_73));
          {
            ATerm s_20 = t;
            int t_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_20);
              }
            else
              {
                t = s_20;
                t = (ATerm) ATempty;
              }
            {
              l_73 = t;
              if(((k_73 != NULL) && (k_73 != l_73)))
                _fail(l_73);
              else
                k_73 = l_73;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_73), not_null(e_73), (ATerm) ATinsert(CheckATermList(not_null(k_73)), not_null(g_73)));
            t = table_put_0(t);
          }
        }
        t = r_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_66 (ATerm))
{
  ATerm p_73 = NULL;
  ATerm q_73 = NULL;
  t = term_t_10;
  {
    t = p_66(t);
    {
      q_73 = t;
      if(((p_73 != NULL) && (p_73 != q_73)))
        _fail(q_73);
      else
        p_73 = q_73;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_20, term_b_20, not_null(p_73));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm w_73 = NULL,x_73 = NULL,y_73 = NULL;
  w_73 = t;
  v_73 :
  if(match_string(w_73, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(w_73) == AT_LIST) && ((ATermList) w_73 != ATempty)))
        {
          x_73 = ATgetFirst((ATermList) w_73);
          y_73 = (ATerm) ATgetNext((ATermList) w_73);
          {
            ATerm d_74 = NULL;
            ATerm u_20;
            u_20 = t;
            {
              t = not_null(x_73);
              t = c_0(t);
            }
            t = u_20;
            {
              ATerm e_74 = NULL;
              t = term_t_10;
              {
                t = d_0(t);
                {
                  e_74 = t;
                  if(((d_74 != NULL) && (d_74 != e_74)))
                    _fail(e_74);
                  else
                    d_74 = e_74;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_73)), not_null(d_74));
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
  ATerm e_5 (ATerm t)
  {
    ATerm j_74 = NULL;
    j_74 = t;
    i_74 :
    if(!(match_string(j_74, "--help")))
      {
        if(!(match_string(j_74, "-h")))
          {
            if(!(match_string(j_74, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm f_5 (ATerm t)
  {
    t = term_v_20;
    return(t);
  }
  ATerm g_5 (ATerm t)
  {
    t = term_w_20;
    return(t);
  }
  t = Option_3(t, e_5, f_5, g_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
  m_74 = t;
  l_74 :
  if(((ATgetType(m_74) == AT_LIST) && ((ATermList) m_74 != ATempty)))
    {
      n_74 = ATgetFirst((ATermList) m_74);
      o_74 = (ATerm) ATgetNext((ATermList) m_74);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_74)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_74)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm e_62 (ATerm), ATerm f_62 (ATerm))
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL;
  y_74 = t;
  x_74 :
  if(((ATgetType(y_74) == AT_LIST) && ((ATermList) y_74 != ATempty)))
    {
      z_74 = ATgetFirst((ATermList) y_74);
      a_75 = (ATerm) ATgetNext((ATermList) y_74);
      {
        ATerm e_75 = NULL,g_75 = NULL;
        ATerm f_75 = NULL;
        t = SSLgetAnnotations(not_null(y_74));
        {
          f_75 = t;
          if(((e_75 != NULL) && (e_75 != f_75)))
            _fail(f_75);
          else
            e_75 = f_75;
        }
        {
          t = not_null(z_74);
          {
            ATerm i_75 = NULL;
            t = e_62(t);
            {
              g_75 = t;
              {
                t = not_null(a_75);
                {
                  ATerm k_75 = NULL;
                  t = f_62(t);
                  {
                    i_75 = t;
                    {
                      ATerm l_75 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_75)), not_null(g_75)), not_null(e_75));
                      {
                        l_75 = t;
                        if(((k_75 != NULL) && (k_75 != l_75)))
                          _fail(l_75);
                        else
                          k_75 = l_75;
                      }
                      t = not_null(k_75);
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
ATerm Nil_0 (ATerm t)
{
  ATerm x_75 = NULL;
  x_75 = t;
  w_75 :
  if(((ATermList) x_75 == ATempty))
    {
      {
        ATerm z_75 = NULL,b_76 = NULL;
        ATerm x_20;
        x_20 = t;
        {
          ATerm a_76 = NULL;
          t = SSLgetAnnotations(not_null(x_75));
          {
            a_76 = t;
            if(((z_75 != NULL) && (z_75 != a_76)))
              _fail(a_76);
            else
              z_75 = a_76;
          }
        }
        t = x_20;
        {
          ATerm c_76 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(z_75));
          {
            c_76 = t;
            if(((b_76 != NULL) && (b_76 != c_76)))
              _fail(c_76);
            else
              b_76 = c_76;
          }
          t = not_null(b_76);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm i_76 = NULL,j_76 = NULL,k_76 = NULL;
  i_76 = t;
  h_76 :
  if(match_cons(i_76, sym__2))
    {
      j_76 = ATgetArgument(i_76, 0);
      k_76 = ATgetArgument(i_76, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_f_6, not_null(j_76), not_null(k_76));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_66 (ATerm))
{
  ATerm y_20;
  y_20 = t;
  {
    ATerm h_5 (ATerm t)
    {
      t = term_z_20;
      t = n_66(t);
      return(t);
    }
    t = try_1(t, h_5);
  }
  t = y_20;
  {
    ATerm i_5 (ATerm t)
    {
      ATerm s_76 = NULL;
      ATerm a_21;
      a_21 = t;
      {
        ATerm q_76 = NULL;
        ATerm r_76 = NULL;
        r_76 = t;
        if(((q_76 != NULL) && (q_76 != r_76)))
          _fail(r_76);
        else
          q_76 = r_76;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_6, not_null(q_76));
          t = set_config_0(t);
        }
      }
      t = a_21;
      {
        ATerm t_76 = NULL;
        t_76 = t;
        if(((s_76 != NULL) && (s_76 != t_76)))
          _fail(t_76);
        else
          s_76 = t_76;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_76));
      }
      return(t);
    }
    ATerm j_5 (ATerm t)
    {
      ATerm b_21 = t;
      int e_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_21 = t;
          int o_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_21);
            }
          else
            {
              t = j_21;
              {
                t = n_66(t);
                t = Cons_2(t, _id, j_5);
              }
            }
          LocalPopChoice(e_21);
        }
      else
        {
          t = b_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, i_5, j_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_76 = NULL,a_77 = NULL,b_77 = NULL;
  ATerm p_21;
  p_21 = t;
  {
    ATerm c_77 = NULL,d_77 = NULL,e_77 = NULL,f_77 = NULL;
    c_77 = t;
    y_76 :
    if(match_cons(c_77, sym__3))
      {
        d_77 = ATgetArgument(c_77, 0);
        e_77 = ATgetArgument(c_77, 1);
        f_77 = ATgetArgument(c_77, 2);
        {
          if(((z_76 != NULL) && (z_76 != d_77)))
            _fail(d_77);
          else
            z_76 = d_77;
          {
            if(((a_77 != NULL) && (a_77 != e_77)))
              _fail(e_77);
            else
              a_77 = e_77;
            {
              if(((b_77 != NULL) && (b_77 != f_77)))
                _fail(f_77);
              else
                b_77 = f_77;
              t = SSL_table_put(not_null(z_76), not_null(a_77), not_null(b_77));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_21;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm i_77 = NULL;
  ATerm q_21;
  q_21 = t;
  {
    t = term_r_21;
    t = table_put_0(t);
  }
  t = q_21;
  {
    ATerm k_5 (ATerm t)
    {
      ATerm s_21 = t;
      int t_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_66(t);
          LocalPopChoice(t_21);
        }
      else
        {
          t = s_21;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, k_5);
    {
      ATerm l_5 (ATerm t)
      {
        ATerm u_21 = t;
        int v_21 = stack_ptr;
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
            LocalPopChoice(v_21);
          }
        else
          {
            t = u_21;
            {
              ATerm m_5 (ATerm t)
              {
                ATerm n_5 (ATerm t)
                {
                  ATerm j_77 = NULL;
                  j_77 = t;
                  if(((i_77 != NULL) && (i_77 != j_77)))
                    _fail(j_77);
                  else
                    i_77 = j_77;
                  return(t);
                }
                t = Undefined_1(t, n_5);
                return(t);
              }
              t = option_defined_1(t, m_5);
              {
                ATerm w_21;
                w_21 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_77)), term_x_21));
                  t = printnl_0(t);
                }
                t = w_21;
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_5;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, l_5);
      {
        ATerm y_21;
        y_21 = t;
        {
          t = term_a_20;
          t = table_destroy_0(t);
        }
        t = y_21;
      }
    }
  }
  return(t);
}
ATerm Abox_2_html_0 (ATerm t)
{
  ATerm r_77 = NULL;
  ATerm t_77 = NULL,u_77 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    r_77 = t;
    {
      ATerm z_21 = t;
      int c_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(c_22);
        }
      else
        {
          t = z_21;
          {
            ATerm h_22 = t;
            int m_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_22;
                n_22 = t;
                {
                  ATerm o_22 = t;
                  int p_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_5 (ATerm t)
                      {
                        ATerm v_77 = NULL,w_77 = NULL;
                        v_77 = t;
                        n_77 :
                        if(match_cons(v_77, sym_Output_1))
                          {
                            w_77 = ATgetArgument(v_77, 0);
                            if(((u_77 != NULL) && (u_77 != w_77)))
                              _fail(w_77);
                            else
                              u_77 = w_77;
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = option_defined_1(t, o_5);
                      {
                        t = not_null(u_77);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(p_22);
                    }
                  else
                    {
                      t = o_22;
                      {
                        ATerm x_77 = NULL;
                        t = term_q_22;
                        {
                          x_77 = t;
                          if(((u_77 != NULL) && (u_77 != x_77)))
                            _fail(x_77);
                          else
                            u_77 = x_77;
                        }
                      }
                    }
                }
                t = n_22;
                {
                  t = input_file_0(t);
                  {
                    ATerm p_5 (ATerm t)
                    {
                      ATerm y_77 = NULL;
                      t = abox2html_0(t);
                      {
                        y_77 = t;
                        if(((t_77 != NULL) && (t_77 != y_77)))
                          _fail(y_77);
                        else
                          t_77 = y_77;
                      }
                      return(t);
                    }
                    t = _2(t, _id, p_5);
                    {
                      t = not_null(t_77);
                      {
                        ATerm q_5 (ATerm t)
                        {
                          ATerm r_5 (ATerm t)
                          {
                            t = is_string_0(t);
                            {
                              ATerm r_22;
                              r_22 = t;
                              {
                                ATerm s_5 (ATerm t)
                                {
                                  t = not_null(u_77);
                                  return(t);
                                }
                                ATerm t_5 (ATerm t)
                                {
                                  ATerm z_77 = NULL;
                                  z_77 = t;
                                  t = (ATerm) ATinsert(ATempty, not_null(z_77));
                                  return(t);
                                }
                                t = split_2(t, s_5, t_5);
                                t = print_0(t);
                              }
                              t = r_22;
                            }
                            return(t);
                          }
                          t = try_1(t, r_5);
                          return(t);
                        }
                        t = topdown_1(t, q_5);
                        t = report_success_0(t);
                      }
                    }
                  }
                }
                LocalPopChoice(m_22);
              }
            else
              {
                t = h_22;
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

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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_Verbose_0;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  init_constant_terms();
}
ATerm term_t_23;
ATerm term_j_23;
ATerm term_b_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_e_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_r_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_v_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_v_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_a_17;
ATerm term_v_16;
ATerm term_i_16;
ATerm term_f_16;
ATerm term_f_15;
ATerm term_d_15;
ATerm term_r_14;
ATerm term_e_14;
ATerm term_b_14;
ATerm term_w_13;
ATerm term_u_13;
ATerm term_q_13;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_r_11;
ATerm term_i_11;
ATerm term_z_10;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_u_10;
ATerm term_e_10;
ATerm term_q_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_i_8;
ATerm term_b_8;
ATerm term_a_8;
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
ATerm term_p_6;
ATerm term_k_6;
ATerm term_j_6;
ATerm term_i_6;
ATerm term_g_6;
ATerm term_c_6;
ATerm term_x_5;
ATerm term_w_5;
ATerm term_v_5;
void init_constant_terms (void)
{
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>", 0, ATtrue));
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_11));
  term_i_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_u_13));
  term_u_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_w_13));
  term_w_13 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_v_17, term_z_10);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_g_6, term_c_6);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_c_6);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym__2, term_v_18, term_z_10);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym__2, term_s_19, term_z_10);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(sym__2, term_z_20, term_e_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_t_22, term_z_10);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(sym__3, term_z_20, term_e_21, (ATerm) ATempty);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm));
ATerm crush_2 (ATerm, ATerm t_78 (ATerm), ATerm u_78 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm b_87 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_81 (ATerm), ATerm l_81 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_65 (ATerm));
ATerm topdown_1 (ATerm, ATerm e_67 (ATerm));
ATerm Html2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm f_67 (ATerm));
ATerm html2text_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm u_68 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm o_74 (ATerm));
ATerm html_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm j_93 (ATerm));
ATerm make_html_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm sep_by_1 (ATerm, ATerm m_65 (ATerm));
ATerm filter_1 (ATerm, ATerm y_80 (ATerm));
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm c_87 (ATerm));
ATerm dissuader_1 (ATerm, ATerm n_84 (ATerm));
ATerm separate_by_1 (ATerm, ATerm d_73 (ATerm));
ATerm LNAT_2 (ATerm, ATerm v_0 (ATerm), ATerm w_0 (ATerm));
ATerm L_2 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm));
ATerm tov_1 (ATerm, ATerm l_65 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_66 (ATerm), ATerm w_66 (ATerm));
ATerm for_3 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm a_67 (ATerm));
ATerm copy_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm AC_1 (ATerm, ATerm q_0 (ATerm));
ATerm AR_1 (ATerm, ATerm p_0 (ATerm));
ATerm AL_1 (ATerm, ATerm o_0 (ATerm));
ATerm aopt_0 (ATerm);
ATerm make_hs_0 (ATerm);
ATerm toa_1 (ATerm, ATerm o_65 (ATerm));
ATerm R_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2html_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm h_74 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm a_74 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm t_73 (ATerm));
ATerm Distribute_0 (ATerm);
ATerm normalize_0 (ATerm);
ATerm abox2html_0 (ATerm);
ATerm _2 (ATerm, ATerm l_54 (ATerm), ATerm m_54 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm obsolete_1 (ATerm, ATerm m_84 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm q_73 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_88 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm h_85 (ATerm));
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm e_89 (ATerm));
ATerm Program_1 (ATerm, ATerm d_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm g_84 (ATerm));
ATerm Undefined_1 (ATerm, ATerm e_61 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm w_73 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm f_84 (ATerm));
ATerm map_1 (ATerm, ATerm h_73 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm j_89 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_55 (ATerm), ATerm v_55 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm h_89 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm g_89 (ATerm));
ATerm Abox_2_html_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, term_w_5));
  {
    t = printnl_0(t);
    {
      t = term_x_5;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_0 = NULL;
  e_0 = t;
  t = SSL_TicksToSeconds(not_null(e_0));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm n_1 = NULL,r_1 = NULL,s_1 = NULL;
  n_1 = t;
  m_1 :
  if(match_cons(n_1, sym__2))
    {
      r_1 = ATgetArgument(n_1, 0);
      s_1 = ATgetArgument(n_1, 1);
      {
        ATerm y_5 = t;
        int z_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_1), not_null(s_1));
            LocalPopChoice(z_5);
          }
        else
          {
            t = y_5;
            t = SSL_addr(not_null(r_1), not_null(s_1));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm))
{
  ATerm a_6 = t;
  int b_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_79(t);
      LocalPopChoice(b_6);
    }
  else
    {
      t = a_6;
      {
        ATerm j_2 = NULL,l_2 = NULL,p_2 = NULL;
        j_2 = t;
        f_2 :
        if(((ATgetType(j_2) == AT_LIST) && !(ATisEmpty(j_2))))
          {
            l_2 = ATgetFirst((ATermList) j_2);
            p_2 = (ATerm) ATgetNext((ATermList) j_2);
            {
              ATerm v_2 = NULL;
              ATerm w_2 = NULL;
              t = not_null(p_2);
              {
                t = foldr_2(t, v_79, w_79);
                {
                  w_2 = t;
                  if(((v_2 != NULL) && (v_2 != w_2)))
                    _fail(w_2);
                  else
                    v_2 = w_2;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_2), not_null(v_2));
                t = w_79(t);
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
ATerm crush_2 (ATerm t, ATerm t_78 (ATerm), ATerm u_78 (ATerm))
{
  ATerm p_4 = NULL;
  ATerm r_4 = NULL;
  p_4 = t;
  {
    ATerm v_4 = NULL;
    ATerm x_4 = NULL,o_7 = NULL,p_7 = NULL;
    t = not_null(p_4);
    {
      v_4 = t;
      {
        t = SSL_explode_term(not_null(v_4));
        {
          x_4 = t;
          l_4 :
          if(match_cons(x_4, sym__2))
            {
              o_7 = ATgetArgument(x_4, 0);
              p_7 = ATgetArgument(x_4, 1);
              if(((r_4 != NULL) && (r_4 != p_7)))
                _fail(p_7);
              else
                r_4 = p_7;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_4);
      t = foldr_2(t, t_78, u_78);
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
    ATerm b_0 (ATerm t)
    {
      t = term_c_6;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm d_6 = t;
  int e_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_6;
      f_6 = t;
      {
        ATerm r_8 = NULL;
        ATerm s_8 = NULL;
        t = term_g_6;
        {
          t = get_config_0(t);
          {
            s_8 = t;
            if(((r_8 != NULL) && (r_8 != s_8)))
              _fail(s_8);
            else
              r_8 = s_8;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), term_x_5);
          t = geq_0(t);
        }
      }
      t = f_6;
      t = b_87(t);
      LocalPopChoice(e_6);
    }
  else
    {
      t = d_6;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm z_8 = NULL,b_9 = NULL;
    ATerm h_6;
    h_6 = t;
    {
      ATerm a_9 = NULL;
      t = run_time_0(t);
      {
        a_9 = t;
        if(((z_8 != NULL) && (z_8 != a_9)))
          _fail(a_9);
        else
          z_8 = a_9;
      }
    }
    t = h_6;
    {
      ATerm c_9 = NULL;
      t = term_i_6;
      {
        t = get_config_0(t);
        {
          c_9 = t;
          if(((b_9 != NULL) && (b_9 != c_9)))
            _fail(c_9);
          else
            b_9 = c_9;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_6), not_null(z_8)), term_j_6), not_null(b_9)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_0);
  {
    t = term_c_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm h_9 = NULL,i_9 = NULL,j_9 = NULL;
  h_9 = t;
  g_9 :
  if(match_cons(h_9, sym__2))
    {
      i_9 = ATgetArgument(h_9, 0);
      j_9 = ATgetArgument(h_9, 1);
      {
        ATerm l_6;
        l_6 = t;
        t = SSL_print(not_null(i_9), not_null(j_9));
        t = l_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_81 (ATerm), ATerm l_81 (ATerm))
{
  ATerm p_9 = NULL,r_9 = NULL;
  ATerm m_6;
  m_6 = t;
  {
    ATerm q_9 = NULL;
    t = k_81(t);
    {
      q_9 = t;
      if(((p_9 != NULL) && (p_9 != q_9)))
        _fail(q_9);
      else
        p_9 = q_9;
    }
  }
  t = m_6;
  {
    ATerm s_9 = NULL;
    t = l_81(t);
    {
      s_9 = t;
      if(((r_9 != NULL) && (r_9 != s_9)))
        _fail(s_9);
      else
        r_9 = s_9;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(p_9), not_null(r_9));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm w_9 = NULL;
  w_9 = t;
  t = SSL_is_string(not_null(w_9));
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_65 (ATerm))
{
  ATerm n_6 = t;
  int o_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_65(t);
      LocalPopChoice(o_6);
    }
  else
    {
      t = n_6;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_67 (ATerm))
{
  t = e_67(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = topdown_1(t, e_67);
      return(t);
    }
    t = _all(t, f_0);
  }
  return(t);
}
ATerm Html2text_0 (ATerm t)
{
  ATerm n_10 = NULL,o_10 = NULL,p_10 = NULL;
  p_10 = t;
  m_10 :
  if(match_cons(p_10, sym_TABLE_2))
    {
      o_10 = ATgetArgument(p_10, 0);
      n_10 = ATgetArgument(p_10, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_6), not_null(n_10)), term_q_6), not_null(o_10)), term_p_6);
    }
  else
    {
      if(match_cons(p_10, sym_TR_2))
        {
          o_10 = ATgetArgument(p_10, 0);
          n_10 = ATgetArgument(p_10, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_6), not_null(n_10)), term_q_6), not_null(o_10)), term_s_6);
        }
      else
        {
          if(match_cons(p_10, sym_TD_2))
            {
              o_10 = ATgetArgument(p_10, 0);
              n_10 = ATgetArgument(p_10, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_6), not_null(n_10)), term_q_6), not_null(o_10)), term_u_6);
            }
          else
            {
              if(match_cons(p_10, sym_TD_p__1))
                {
                  o_10 = ATgetArgument(p_10, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_6), not_null(o_10)), term_v_6);
                }
              else
                {
                  if(match_cons(p_10, sym_SPAN_2))
                    {
                      o_10 = ATgetArgument(p_10, 0);
                      n_10 = ATgetArgument(p_10, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_6), not_null(n_10)), term_q_6), not_null(o_10)), term_x_6);
                    }
                  else
                    {
                      if(match_cons(p_10, sym_PRE_1))
                        {
                          o_10 = ATgetArgument(p_10, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_7), not_null(o_10)), term_z_6);
                        }
                      else
                        {
                          if(match_cons(p_10, sym_TDTR_1))
                            {
                              o_10 = ATgetArgument(p_10, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_7), not_null(o_10)), term_b_7);
                            }
                          else
                            {
                              if(match_cons(p_10, sym_HREF_2))
                                {
                                  o_10 = ATgetArgument(p_10, 0);
                                  n_10 = ATgetArgument(p_10, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_f_7), not_null(n_10)), term_e_7), not_null(o_10)), term_d_7);
                                }
                              else
                                {
                                  if(match_cons(p_10, sym_ANCHOR_1))
                                    {
                                      o_10 = ATgetArgument(p_10, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_7), not_null(o_10)), term_g_7);
                                    }
                                  else
                                    {
                                      if(match_cons(p_10, sym_BR_0))
                                        {
                                          t = term_i_7;
                                        }
                                      else
                                        {
                                          if(match_cons(p_10, sym_NBSP_0))
                                            {
                                              t = term_j_7;
                                            }
                                          else
                                            {
                                              if(match_cons(p_10, sym_HR_0))
                                                {
                                                  t = term_k_7;
                                                }
                                              else
                                                {
                                                  if(match_cons(p_10, sym_TDTD_0))
                                                    {
                                                      t = term_l_7;
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
ATerm bottomup_1 (ATerm t, ATerm f_67 (ATerm))
{
  ATerm x_0 (ATerm t)
  {
    t = bottomup_1(t, f_67);
    return(t);
  }
  t = _all(t, x_0);
  t = f_67(t);
  return(t);
}
ATerm html2text_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm m_7 = t;
    int n_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Html2text_0(t);
        LocalPopChoice(n_7);
      }
    else
      {
        t = m_7;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, y_0);
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm h_14 = NULL,i_14 = NULL;
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_14 = NULL,k_14 = NULL,l_14 = NULL;
            ATerm o_14 (ATerm t)
            {
              if(((h_14 != NULL) && (h_14 != k_14)))
                _fail(k_14);
              else
                h_14 = k_14;
              {
                if(((i_14 != NULL) && (i_14 != l_14)))
                  _fail(l_14);
                else
                  i_14 = l_14;
                {
                  t = not_null(h_14);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_14), not_null(i_14));
                      {
                        ATerm u_7 = t;
                        int v_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(v_7);
                          }
                        else
                          {
                            t = u_7;
                            t = conc_more_lists_0(t);
                          }
                        t = flat_list_0(t);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            j_14 = t;
            f_14 :
            if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
              {
                k_14 = ATgetFirst((ATermList) j_14);
                l_14 = (ATerm) ATgetNext((ATermList) j_14);
                g_14 :
                if(((ATgetType(k_14) == AT_LIST) && ATisEmpty(k_14)))
                  {
                    {
                      ATerm w_7 = t;
                      int x_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((i_14 != NULL) && (i_14 != l_14)))
                            _fail(l_14);
                          else
                            i_14 = l_14;
                          {
                            ATerm z_0 (ATerm t)
                            {
                              t = not_null(i_14);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, z_0);
                          }
                          LocalPopChoice(x_7);
                        }
                      else
                        {
                          t = w_7;
                          t = o_14(t);
                        }
                    }
                  }
                else
                  {
                    t = o_14(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm u_68 (ATerm))
{
  ATerm p_14 (ATerm t)
  {
    ATerm y_7 = t;
    int z_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_68(t);
        LocalPopChoice(z_7);
      }
    else
      {
        t = y_7;
        t = _one(t, p_14);
      }
    return(t);
  }
  t = p_14(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm w_14 = NULL,z_14 = NULL;
  ATerm a_1 (ATerm t)
  {
    ATerm x_14 = NULL;
    x_14 = t;
    q_14 :
    if(!(match_int(x_14, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm b_1 (ATerm t)
  {
    ATerm y_14 = NULL;
    y_14 = t;
    if(((w_14 != NULL) && (w_14 != y_14)))
      _fail(y_14);
    else
      w_14 = y_14;
    return(t);
  }
  t = Cons_2(t, a_1, b_1);
  {
    ATerm e_15 = NULL;
    t = not_null(w_14);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL;
        a_15 = t;
        t_14 :
        if(((ATgetType(a_15) == AT_LIST) && !(ATisEmpty(a_15))))
          {
            b_15 = ATgetFirst((ATermList) a_15);
            c_15 = (ATerm) ATgetNext((ATermList) a_15);
            u_14 :
            if(match_int(b_15, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_15)), term_a_8), term_a_8);
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
      t = oncetd_1(t, c_1);
      {
        e_15 = t;
        if(((z_14 != NULL) && (z_14 != e_15)))
          _fail(e_15);
        else
          z_14 = e_15;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(z_14)), term_b_8), term_b_8);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm i_15 (ATerm t)
  {
    t = o_74(t);
    {
      ATerm c_8 = t;
      int d_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(d_8);
        }
      else
        {
          t = c_8;
          t = Cons_2(t, _id, i_15);
        }
    }
    return(t);
  }
  t = i_15(t);
  return(t);
}
ATerm html_string_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm d_1 (ATerm t)
    {
      ATerm e_8 = t;
      int f_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = replace_quotes_0(t);
          LocalPopChoice(f_8);
        }
      else
        {
          t = e_8;
          {
          }
        }
      return(t);
    }
    t = listtd_1(t, d_1);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm g_8 = t;
        int h_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_15 = NULL;
            o_15 = t;
            n_15 :
            if(match_int(o_15, 32))
              {
                t = term_j_7;
                t = explode_string_0(t);
              }
            else
              {
                if(match_int(o_15, 38))
                  {
                    t = term_i_8;
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(o_15, 60))
                      {
                        t = term_j_8;
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(o_15, 62))
                          {
                            t = term_k_8;
                            t = explode_string_0(t);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                  }
              }
            LocalPopChoice(h_8);
          }
        else
          {
            t = g_8;
            {
            }
          }
        return(t);
      }
      t = map_1(t, e_1);
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
  ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
  v_15 = t;
  u_15 :
  if(((ATgetType(v_15) == AT_LIST) && !(ATisEmpty(v_15))))
    {
      w_15 = ATgetFirst((ATermList) v_15);
      x_15 = (ATerm) ATgetNext((ATermList) v_15);
      t = not_null(x_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm j_93 (ATerm))
{
  ATerm a_16 (ATerm t)
  {
    ATerm l_8 = t;
    int m_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, j_93, _id);
        {
          t = Tl_0(t);
          t = a_16(t);
        }
        LocalPopChoice(m_8);
      }
    else
      {
        t = l_8;
        {
        }
      }
    return(t);
  }
  t = a_16(t);
  return(t);
}
ATerm make_html_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm f_1 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2(t, _id, f_1);
    {
      ATerm g_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, g_1);
      {
        ATerm p_17 (ATerm t)
        {
          ATerm p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
          ATerm s_17 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), (ATerm) ATinsert(CheckATermList(not_null(t_16)), not_null(r_16)));
            t = p_17(t);
            return(t);
          }
          p_16 = t;
          j_16 :
          if(match_cons(p_16, sym__2))
            {
              q_16 = ATgetArgument(p_16, 0);
              t_16 = ATgetArgument(p_16, 1);
              k_16 :
              if(((ATgetType(q_16) == AT_LIST) && ATisEmpty(q_16)))
                {
                  {
                    ATerm x_16 = NULL;
                    ATerm z_16 = NULL;
                    t = not_null(t_16);
                    {
                      ATerm h_1 (ATerm t)
                      {
                        ATerm y_16 = NULL;
                        y_16 = t;
                        e_16 :
                        if(!(match_int(y_16, 9)))
                          {
                            if(!(match_int(y_16, 32)))
                              {
                                _fail(t);
                              }
                          }
                        return(t);
                      }
                      t = remove_trailing_1(t, h_1);
                      {
                        t = implode_string_0(t);
                        {
                          z_16 = t;
                          if(((x_16 != NULL) && (x_16 != z_16)))
                            _fail(z_16);
                          else
                            x_16 = z_16;
                        }
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(x_16));
                  }
                }
              else
                {
                  if(((ATgetType(q_16) == AT_LIST) && !(ATisEmpty(q_16))))
                    {
                      r_16 = ATgetFirst((ATermList) q_16);
                      s_16 = (ATerm) ATgetNext((ATermList) q_16);
                      l_16 :
                      if(match_int(r_16, 10))
                        {
                          ATerm n_8 = t;
                          int o_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_17 = NULL,g_17 = NULL;
                              ATerm p_8;
                              p_8 = t;
                              {
                                ATerm f_17 = NULL;
                                t = not_null(t_16);
                                {
                                  ATerm i_1 (ATerm t)
                                  {
                                    ATerm e_17 = NULL;
                                    e_17 = t;
                                    g_16 :
                                    if(!(match_int(e_17, 9)))
                                      {
                                        if(!(match_int(e_17, 32)))
                                          {
                                            _fail(t);
                                          }
                                      }
                                    return(t);
                                  }
                                  t = remove_trailing_1(t, i_1);
                                  {
                                    t = implode_string_0(t);
                                    {
                                      f_17 = t;
                                      if(((d_17 != NULL) && (d_17 != f_17)))
                                        _fail(f_17);
                                      else
                                        d_17 = f_17;
                                    }
                                  }
                                }
                              }
                              t = p_8;
                              {
                                ATerm h_17 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_16), (ATerm) ATempty);
                                {
                                  t = p_17(t);
                                  {
                                    h_17 = t;
                                    if(((g_17 != NULL) && (g_17 != h_17)))
                                      _fail(h_17);
                                    else
                                      g_17 = h_17;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(g_17)), not_null(d_17));
                              }
                              LocalPopChoice(o_8);
                            }
                          else
                            {
                              t = n_8;
                              t = s_17(t);
                            }
                        }
                      else
                        {
                          t = s_17(t);
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
        t = p_17(t);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm l_17 = NULL;
            l_17 = t;
            m_16 :
            if(!(match_string(l_17, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, j_1);
          {
            ATerm k_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, k_1);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm m_17 = NULL;
                m_17 = t;
                n_16 :
                if(!(match_string(m_17, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, l_1);
              {
                ATerm o_1 (ATerm t)
                {
                  ATerm n_17 = NULL;
                  n_17 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_q_8), not_null(n_17));
                  return(t);
                }
                t = map_1(t, o_1);
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
  ATerm e_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym_MATH_0))
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_18 = NULL,i_18 = NULL;
          ATerm v_8;
          v_8 = t;
          {
            ATerm h_18 = NULL;
            t = SSLgetAnnotations(not_null(e_18));
            {
              h_18 = t;
              if(((g_18 != NULL) && (g_18 != h_18)))
                _fail(h_18);
              else
                g_18 = h_18;
            }
          }
          t = v_8;
          {
            ATerm j_18 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(g_18));
            {
              j_18 = t;
              if(((i_18 != NULL) && (i_18 != j_18)))
                _fail(j_18);
              else
                i_18 = j_18;
            }
            t = not_null(i_18);
          }
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          {
            ATerm l_18 = NULL,n_18 = NULL;
            ATerm w_8;
            w_8 = t;
            {
              ATerm m_18 = NULL;
              t = SSLgetAnnotations(not_null(e_18));
              {
                m_18 = t;
                if(((l_18 != NULL) && (l_18 != m_18)))
                  _fail(m_18);
                else
                  l_18 = m_18;
              }
            }
            t = w_8;
            {
              ATerm o_18 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(l_18));
              {
                o_18 = t;
                if(((n_18 != NULL) && (n_18 != o_18)))
                  _fail(o_18);
                else
                  n_18 = o_18;
              }
              t = not_null(n_18);
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
  ATerm c_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym_NUM_0))
    {
      ATerm x_8 = t;
      int y_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_19 = NULL,g_19 = NULL;
          ATerm d_9;
          d_9 = t;
          {
            ATerm f_19 = NULL;
            t = SSLgetAnnotations(not_null(c_19));
            {
              f_19 = t;
              if(((e_19 != NULL) && (e_19 != f_19)))
                _fail(f_19);
              else
                e_19 = f_19;
            }
          }
          t = d_9;
          {
            ATerm h_19 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(e_19));
            {
              h_19 = t;
              if(((g_19 != NULL) && (g_19 != h_19)))
                _fail(h_19);
              else
                g_19 = h_19;
            }
            t = not_null(g_19);
          }
          LocalPopChoice(y_8);
        }
      else
        {
          t = x_8;
          {
            ATerm j_19 = NULL,l_19 = NULL;
            ATerm e_9;
            e_9 = t;
            {
              ATerm k_19 = NULL;
              t = SSLgetAnnotations(not_null(c_19));
              {
                k_19 = t;
                if(((j_19 != NULL) && (j_19 != k_19)))
                  _fail(k_19);
                else
                  j_19 = k_19;
              }
            }
            t = e_9;
            {
              ATerm m_19 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(j_19));
              {
                m_19 = t;
                if(((l_19 != NULL) && (l_19 != m_19)))
                  _fail(m_19);
                else
                  l_19 = m_19;
              }
              t = not_null(l_19);
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
  ATerm a_20 = NULL;
  a_20 = t;
  z_19 :
  if(match_cons(a_20, sym_VAR_0))
    {
      ATerm f_9 = t;
      int k_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_20 = NULL,e_20 = NULL;
          ATerm l_9;
          l_9 = t;
          {
            ATerm d_20 = NULL;
            t = SSLgetAnnotations(not_null(a_20));
            {
              d_20 = t;
              if(((c_20 != NULL) && (c_20 != d_20)))
                _fail(d_20);
              else
                c_20 = d_20;
            }
          }
          t = l_9;
          {
            ATerm f_20 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(c_20));
            {
              f_20 = t;
              if(((e_20 != NULL) && (e_20 != f_20)))
                _fail(f_20);
              else
                e_20 = f_20;
            }
            t = not_null(e_20);
          }
          LocalPopChoice(k_9);
        }
      else
        {
          t = f_9;
          {
            ATerm h_20 = NULL,j_20 = NULL;
            ATerm m_9;
            m_9 = t;
            {
              ATerm i_20 = NULL;
              t = SSLgetAnnotations(not_null(a_20));
              {
                i_20 = t;
                if(((h_20 != NULL) && (h_20 != i_20)))
                  _fail(i_20);
                else
                  h_20 = i_20;
              }
            }
            t = m_9;
            {
              ATerm k_20 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(h_20));
              {
                k_20 = t;
                if(((j_20 != NULL) && (j_20 != k_20)))
                  _fail(k_20);
                else
                  j_20 = k_20;
              }
              t = not_null(j_20);
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
  ATerm y_20 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym_KW_0))
    {
      ATerm n_9 = t;
      int o_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_21 = NULL,c_21 = NULL;
          ATerm t_9;
          t_9 = t;
          {
            ATerm b_21 = NULL;
            t = SSLgetAnnotations(not_null(y_20));
            {
              b_21 = t;
              if(((a_21 != NULL) && (a_21 != b_21)))
                _fail(b_21);
              else
                a_21 = b_21;
            }
          }
          t = t_9;
          {
            ATerm d_21 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(a_21));
            {
              d_21 = t;
              if(((c_21 != NULL) && (c_21 != d_21)))
                _fail(d_21);
              else
                c_21 = d_21;
            }
            t = not_null(c_21);
          }
          LocalPopChoice(o_9);
        }
      else
        {
          t = n_9;
          {
            ATerm f_21 = NULL,w_21 = NULL;
            ATerm u_9;
            u_9 = t;
            {
              ATerm g_21 = NULL;
              t = SSLgetAnnotations(not_null(y_20));
              {
                g_21 = t;
                if(((f_21 != NULL) && (f_21 != g_21)))
                  _fail(g_21);
                else
                  f_21 = g_21;
              }
            }
            t = u_9;
            {
              ATerm x_21 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(f_21));
              {
                x_21 = t;
                if(((w_21 != NULL) && (w_21 != x_21)))
                  _fail(x_21);
                else
                  w_21 = x_21;
              }
              t = not_null(w_21);
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
ATerm sep_by_1 (ATerm t, ATerm m_65 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm a_25 = NULL;
    a_25 = t;
    t = (ATerm) ATinsert(ATempty, not_null(a_25));
    return(t);
  }
  t = map_1(t, p_1);
  {
    t = separate_by_1(t, m_65);
    t = concat_0(t);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm y_80 (ATerm))
{
  ATerm v_9 = t;
  int x_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_9);
    }
  else
    {
      t = v_9;
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              t = filter_1(t, y_80);
              return(t);
            }
            t = Cons_2(t, y_80, q_1);
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            {
              ATerm f_25 = NULL,g_25 = NULL,h_25 = NULL;
              f_25 = t;
              e_25 :
              if(((ATgetType(f_25) == AT_LIST) && !(ATisEmpty(f_25))))
                {
                  g_25 = ATgetFirst((ATermList) f_25);
                  h_25 = (ATerm) ATgetNext((ATermList) f_25);
                  {
                    t = not_null(h_25);
                    t = filter_1(t, y_80);
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
  ATerm r_25 = NULL;
  r_25 = t;
  q_25 :
  if(match_cons(r_25, sym_HS_0))
    {
      ATerm a_10 = t;
      int b_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_25 = NULL,v_25 = NULL;
          ATerm c_10;
          c_10 = t;
          {
            ATerm u_25 = NULL;
            t = SSLgetAnnotations(not_null(r_25));
            {
              u_25 = t;
              if(((t_25 != NULL) && (t_25 != u_25)))
                _fail(u_25);
              else
                t_25 = u_25;
            }
          }
          t = c_10;
          {
            ATerm w_25 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(t_25));
            {
              w_25 = t;
              if(((v_25 != NULL) && (v_25 != w_25)))
                _fail(w_25);
              else
                v_25 = w_25;
            }
            t = not_null(v_25);
          }
          LocalPopChoice(b_10);
        }
      else
        {
          t = a_10;
          {
            ATerm a_26 = NULL,h_26 = NULL;
            ATerm d_10;
            d_10 = t;
            {
              ATerm b_26 = NULL;
              t = SSLgetAnnotations(not_null(r_25));
              {
                b_26 = t;
                if(((a_26 != NULL) && (a_26 != b_26)))
                  _fail(b_26);
                else
                  a_26 = b_26;
              }
            }
            t = d_10;
            {
              ATerm i_26 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(a_26));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  ATerm u_26 = NULL,a_27 = NULL;
  ATerm f_27 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(a_27), term_e_10);
    t = copy_0(t);
    return(t);
  }
  ATerm f_10 = t;
  int g_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          ATerm y_26 = NULL;
          y_26 = t;
          if(((u_26 != NULL) && (u_26 != y_26)))
            _fail(y_26);
          else
            u_26 = y_26;
          return(t);
        }
        t = SOpt_2(t, HS_0, u_1);
        return(t);
      }
      t = fetch_1(t, t_1);
      {
        t = not_null(u_26);
        t = string_to_int_0(t);
      }
      LocalPopChoice(g_10);
    }
  else
    {
      t = f_10;
      t = term_x_5;
    }
  {
    a_27 = t;
    t_26 :
    if(match_int(a_27, 0))
      {
        ATerm h_10 = t;
        int i_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATempty;
            LocalPopChoice(i_10);
          }
        else
          {
            t = h_10;
            t = f_27(t);
          }
      }
    else
      {
        t = f_27(t);
      }
  }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym__2))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      {
        t = not_null(l_27);
        {
          ATerm j_10 = t;
          int k_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_10);
            }
          else
            {
              t = j_10;
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm l_10 = t;
                  int q_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(q_10);
                    }
                  else
                    {
                      t = l_10;
                      {
                        ATerm o_27 = NULL;
                        t = Cons_2(t, _id, v_1);
                        {
                          ATerm p_27 = NULL;
                          p_27 = t;
                          if(((o_27 != NULL) && (o_27 != p_27)))
                            _fail(p_27);
                          else
                            o_27 = p_27;
                          t = (ATerm) ATinsert(CheckATermList(not_null(o_27)), not_null(k_27));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, v_1);
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
ATerm if_verbose2_1 (ATerm t, ATerm c_87 (ATerm))
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_10;
      t_10 = t;
      {
        ATerm u_27 = NULL;
        ATerm v_27 = NULL;
        t = term_g_6;
        {
          t = get_config_0(t);
          {
            v_27 = t;
            if(((u_27 != NULL) && (u_27 != v_27)))
              _fail(v_27);
            else
              u_27 = v_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_27), term_u_10);
          t = geq_0(t);
        }
      }
      t = t_10;
      t = c_87(t);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm n_84 (ATerm))
{
  ATerm v_10;
  v_10 = t;
  {
    ATerm w_1 (ATerm t)
    {
      t = n_84(t);
      {
        ATerm x_1 (ATerm t)
        {
          t = term_w_10;
          return(t);
        }
        t = debug_1(t, x_1);
      }
      return(t);
    }
    t = if_verbose2_1(t, w_1);
  }
  t = v_10;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm d_73 (ATerm))
{
  ATerm z_27 = NULL,b_28 = NULL;
  ATerm y_1 (ATerm t)
  {
    t = term_x_10;
    return(t);
  }
  t = dissuader_1(t, y_1);
  {
    ATerm y_10;
    y_10 = t;
    {
      ATerm a_28 = NULL;
      a_28 = t;
      if(((z_27 != NULL) && (z_27 != a_28)))
        _fail(a_28);
      else
        z_27 = a_28;
    }
    t = y_10;
    {
      ATerm c_28 = NULL;
      t = term_z_10;
      {
        t = d_73(t);
        {
          c_28 = t;
          if(((b_28 != NULL) && (b_28 != c_28)))
            _fail(c_28);
          else
            b_28 = c_28;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_28), not_null(z_27));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm LNAT_2 (ATerm t, ATerm v_0 (ATerm), ATerm w_0 (ATerm))
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym_LNAT_2))
    {
      r_28 = ATgetArgument(q_28, 0);
      s_28 = ATgetArgument(q_28, 1);
      {
        ATerm a_11 = t;
        int b_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_28 = NULL,y_28 = NULL;
            ATerm x_28 = NULL;
            t = SSLgetAnnotations(not_null(q_28));
            {
              x_28 = t;
              if(((w_28 != NULL) && (w_28 != x_28)))
                _fail(x_28);
              else
                w_28 = x_28;
            }
            {
              t = not_null(r_28);
              {
                ATerm a_29 = NULL;
                t = v_0(t);
                {
                  y_28 = t;
                  {
                    t = not_null(s_28);
                    {
                      ATerm c_29 = NULL;
                      t = w_0(t);
                      {
                        a_29 = t;
                        {
                          ATerm d_29 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, not_null(y_28), not_null(a_29)), not_null(w_28));
                          {
                            d_29 = t;
                            if(((c_29 != NULL) && (c_29 != d_29)))
                              _fail(d_29);
                            else
                              c_29 = d_29;
                          }
                          t = not_null(c_29);
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
              ATerm h_29 = NULL,j_29 = NULL;
              ATerm i_29 = NULL;
              t = SSLgetAnnotations(not_null(q_28));
              {
                i_29 = t;
                if(((h_29 != NULL) && (h_29 != i_29)))
                  _fail(i_29);
                else
                  h_29 = i_29;
              }
              {
                t = not_null(r_28);
                {
                  ATerm l_29 = NULL;
                  t = v_0(t);
                  {
                    j_29 = t;
                    {
                      t = not_null(s_28);
                      {
                        ATerm n_29 = NULL;
                        t = w_0(t);
                        {
                          l_29 = t;
                          {
                            ATerm o_29 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, not_null(j_29), not_null(l_29)), not_null(h_29));
                            {
                              o_29 = t;
                              if(((n_29 != NULL) && (n_29 != o_29)))
                                _fail(o_29);
                              else
                                n_29 = o_29;
                            }
                            t = not_null(n_29);
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
  ATerm k_30 = NULL,l_30 = NULL,m_30 = NULL;
  k_30 = t;
  j_30 :
  if(match_cons(k_30, sym_L_2))
    {
      l_30 = ATgetArgument(k_30, 0);
      m_30 = ATgetArgument(k_30, 1);
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_30 = NULL,s_30 = NULL;
            ATerm r_30 = NULL;
            t = SSLgetAnnotations(not_null(k_30));
            {
              r_30 = t;
              if(((q_30 != NULL) && (q_30 != r_30)))
                _fail(r_30);
              else
                q_30 = r_30;
            }
            {
              t = not_null(l_30);
              {
                ATerm u_30 = NULL;
                t = t_0(t);
                {
                  s_30 = t;
                  {
                    t = not_null(m_30);
                    {
                      ATerm w_30 = NULL;
                      t = u_0(t);
                      {
                        u_30 = t;
                        {
                          ATerm x_30 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(s_30), not_null(u_30)), not_null(q_30));
                          {
                            x_30 = t;
                            if(((w_30 != NULL) && (w_30 != x_30)))
                              _fail(x_30);
                            else
                              w_30 = x_30;
                          }
                          t = not_null(w_30);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm b_31 = NULL,d_31 = NULL;
              ATerm c_31 = NULL;
              t = SSLgetAnnotations(not_null(k_30));
              {
                c_31 = t;
                if(((b_31 != NULL) && (b_31 != c_31)))
                  _fail(c_31);
                else
                  b_31 = c_31;
              }
              {
                t = not_null(l_30);
                {
                  ATerm f_31 = NULL;
                  t = t_0(t);
                  {
                    d_31 = t;
                    {
                      t = not_null(m_30);
                      {
                        ATerm h_31 = NULL;
                        t = u_0(t);
                        {
                          f_31 = t;
                          {
                            ATerm i_31 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(d_31), not_null(f_31)), not_null(b_31));
                            {
                              i_31 = t;
                              if(((h_31 != NULL) && (h_31 != i_31)))
                                _fail(i_31);
                              else
                                h_31 = i_31;
                            }
                            t = not_null(h_31);
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
ATerm tov_1 (ATerm t, ATerm l_65 (ATerm))
{
  ATerm x_31 = NULL,b_32 = NULL;
  ATerm e_11 = t;
  int f_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2(t, _id, _id);
      LocalPopChoice(f_11);
    }
  else
    {
      t = e_11;
      {
        ATerm g_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2(t, _id, _id);
            LocalPopChoice(h_11);
          }
        else
          {
            t = g_11;
            {
              ATerm y_31 = NULL;
              ATerm z_31 = NULL;
              y_31 = t;
              {
                if(((x_31 != NULL) && (x_31 != y_31)))
                  _fail(y_31);
                else
                  x_31 = y_31;
                {
                  ATerm a_32 = NULL;
                  t = term_z_10;
                  {
                    t = l_65(t);
                    {
                      a_32 = t;
                      if(((z_31 != NULL) && (z_31 != a_32)))
                        _fail(a_32);
                      else
                        z_31 = a_32;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_i_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(x_31)))), not_null(z_31)))));
                }
              }
            }
          }
      }
    }
  {
    b_32 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_i_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_32)))));
  }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm w_32 = NULL;
  w_32 = t;
  v_32 :
  if(match_cons(w_32, sym_IS_0))
    {
      ATerm j_11 = t;
      int k_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_32 = NULL,a_33 = NULL;
          ATerm l_11;
          l_11 = t;
          {
            ATerm z_32 = NULL;
            t = SSLgetAnnotations(not_null(w_32));
            {
              z_32 = t;
              if(((y_32 != NULL) && (y_32 != z_32)))
                _fail(z_32);
              else
                y_32 = z_32;
            }
          }
          t = l_11;
          {
            ATerm b_33 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(y_32));
            {
              b_33 = t;
              if(((a_33 != NULL) && (a_33 != b_33)))
                _fail(b_33);
              else
                a_33 = b_33;
            }
            t = not_null(a_33);
          }
          LocalPopChoice(k_11);
        }
      else
        {
          t = j_11;
          {
            ATerm d_33 = NULL,f_33 = NULL;
            ATerm m_11;
            m_11 = t;
            {
              ATerm e_33 = NULL;
              t = SSLgetAnnotations(not_null(w_32));
              {
                e_33 = t;
                if(((d_33 != NULL) && (d_33 != e_33)))
                  _fail(e_33);
                else
                  d_33 = e_33;
              }
            }
            t = m_11;
            {
              ATerm g_33 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(d_33));
              {
                g_33 = t;
                if(((f_33 != NULL) && (f_33 != g_33)))
                  _fail(g_33);
                else
                  f_33 = g_33;
              }
              t = not_null(f_33);
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
  ATerm s_33 = NULL,u_33 = NULL;
  ATerm b_34 (ATerm t)
  {
    ATerm x_33 = NULL;
    ATerm y_33 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_33), term_e_10);
    {
      t = copy_0(t);
      {
        y_33 = t;
        if(((x_33 != NULL) && (x_33 != y_33)))
          _fail(y_33);
        else
          x_33 = y_33;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(x_33));
    return(t);
  }
  ATerm n_11 = t;
  int o_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          ATerm t_33 = NULL;
          t_33 = t;
          if(((s_33 != NULL) && (s_33 != t_33)))
            _fail(t_33);
          else
            s_33 = t_33;
          return(t);
        }
        t = SOpt_2(t, IS_0, a_2);
        return(t);
      }
      t = fetch_1(t, z_1);
      {
        t = not_null(s_33);
        t = string_to_int_0(t);
      }
      LocalPopChoice(o_11);
    }
  else
    {
      t = n_11;
      t = term_c_6;
    }
  {
    u_33 = t;
    r_33 :
    if(match_int(u_33, 0))
      {
        ATerm p_11 = t;
        int q_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_11;
            LocalPopChoice(q_11);
          }
        else
          {
            t = p_11;
            t = b_34(t);
          }
      }
    else
      {
        t = b_34(t);
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym__2))
    {
      g_34 = ATgetArgument(f_34, 0);
      h_34 = ATgetArgument(f_34, 1);
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(g_34), not_null(h_34));
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            t = SSL_subtr(not_null(g_34), not_null(h_34));
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
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL;
  n_34 = t;
  m_34 :
  if(match_cons(n_34, sym__2))
    {
      o_34 = ATgetArgument(n_34, 0);
      p_34 = ATgetArgument(n_34, 1);
      {
        ATerm u_11;
        u_11 = t;
        {
          ATerm v_11 = t;
          int w_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_34), not_null(p_34));
              LocalPopChoice(w_11);
            }
          else
            {
              t = v_11;
              t = SSL_gtr(not_null(o_34), not_null(p_34));
            }
        }
        t = u_11;
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
  ATerm v_34 = NULL;
  ATerm x_11 = t;
  int y_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
      w_34 = t;
      u_34 :
      if(match_cons(w_34, sym__2))
        {
          x_34 = ATgetArgument(w_34, 0);
          y_34 = ATgetArgument(w_34, 1);
          {
            if(((v_34 != NULL) && (v_34 != x_34)))
              _fail(x_34);
            else
              v_34 = x_34;
            if(((v_34 != NULL) && (v_34 != y_34)))
              _fail(y_34);
            else
              v_34 = y_34;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_11);
    }
  else
    {
      t = x_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm v_66 (ATerm), ATerm w_66 (ATerm))
{
  ATerm a_35 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_66(t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        {
          t = w_66(t);
          t = a_35(t);
        }
      }
    return(t);
  }
  t = a_35(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm), ATerm a_67 (ATerm))
{
  t = y_66(t);
  t = while_not_2(t, z_66, a_67);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm b_2 (ATerm t)
  {
    ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
    j_35 = t;
    c_35 :
    if(match_cons(j_35, sym__2))
      {
        k_35 = ATgetArgument(j_35, 0);
        l_35 = ATgetArgument(j_35, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(k_35), not_null(l_35), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm c_2 (ATerm t)
  {
    ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL,r_35 = NULL;
    o_35 = t;
    e_35 :
    if(match_cons(o_35, sym__3))
      {
        p_35 = ATgetArgument(o_35, 0);
        q_35 = ATgetArgument(o_35, 1);
        r_35 = ATgetArgument(o_35, 2);
        f_35 :
        if(match_int(p_35, 0))
          {
            t = not_null(r_35);
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
  ATerm d_2 (ATerm t)
  {
    ATerm u_35 = NULL,v_35 = NULL,w_35 = NULL,x_35 = NULL;
    u_35 = t;
    i_35 :
    if(match_cons(u_35, sym__3))
      {
        v_35 = ATgetArgument(u_35, 0);
        w_35 = ATgetArgument(u_35, 1);
        x_35 = ATgetArgument(u_35, 2);
        {
          ATerm b_36 = NULL;
          ATerm b_12;
          b_12 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_35), term_x_5);
            t = geq_0(t);
          }
          t = b_12;
          {
            ATerm c_36 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_35), term_x_5);
            {
              t = subt_0(t);
              {
                c_36 = t;
                if(((b_36 != NULL) && (b_36 != c_36)))
                  _fail(c_36);
                else
                  b_36 = c_36;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_36), not_null(w_35), (ATerm) ATinsert(CheckATermList(not_null(x_35)), not_null(w_35)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, b_2, c_2, d_2);
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm o_36 = NULL;
  o_36 = t;
  n_36 :
  if(match_cons(o_36, sym_VS_0))
    {
      ATerm c_12 = t;
      int d_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_36 = NULL,s_36 = NULL;
          ATerm e_12;
          e_12 = t;
          {
            ATerm r_36 = NULL;
            t = SSLgetAnnotations(not_null(o_36));
            {
              r_36 = t;
              if(((q_36 != NULL) && (q_36 != r_36)))
                _fail(r_36);
              else
                q_36 = r_36;
            }
          }
          t = e_12;
          {
            ATerm t_36 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(q_36));
            {
              t_36 = t;
              if(((s_36 != NULL) && (s_36 != t_36)))
                _fail(t_36);
              else
                s_36 = t_36;
            }
            t = not_null(s_36);
          }
          LocalPopChoice(d_12);
        }
      else
        {
          t = c_12;
          {
            ATerm v_36 = NULL,x_36 = NULL;
            ATerm f_12;
            f_12 = t;
            {
              ATerm w_36 = NULL;
              t = SSLgetAnnotations(not_null(o_36));
              {
                w_36 = t;
                if(((v_36 != NULL) && (v_36 != w_36)))
                  _fail(w_36);
                else
                  v_36 = w_36;
              }
            }
            t = f_12;
            {
              ATerm y_36 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(v_36));
              {
                y_36 = t;
                if(((x_36 != NULL) && (x_36 != y_36)))
                  _fail(y_36);
                else
                  x_36 = y_36;
              }
              t = not_null(x_36);
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
  ATerm q_37 = NULL,r_37 = NULL,s_37 = NULL;
  q_37 = t;
  p_37 :
  if(match_cons(q_37, sym_SOpt_2))
    {
      r_37 = ATgetArgument(q_37, 0);
      s_37 = ATgetArgument(q_37, 1);
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_37 = NULL,y_37 = NULL;
            ATerm x_37 = NULL;
            t = SSLgetAnnotations(not_null(q_37));
            {
              x_37 = t;
              if(((w_37 != NULL) && (w_37 != x_37)))
                _fail(x_37);
              else
                w_37 = x_37;
            }
            {
              t = not_null(r_37);
              {
                ATerm a_38 = NULL;
                t = r_0(t);
                {
                  y_37 = t;
                  {
                    t = not_null(s_37);
                    {
                      ATerm c_38 = NULL;
                      t = s_0(t);
                      {
                        a_38 = t;
                        {
                          ATerm d_38 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(y_37), not_null(a_38)), not_null(w_37));
                          {
                            d_38 = t;
                            if(((c_38 != NULL) && (c_38 != d_38)))
                              _fail(d_38);
                            else
                              c_38 = d_38;
                          }
                          t = not_null(c_38);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            {
              ATerm h_38 = NULL,j_38 = NULL;
              ATerm i_38 = NULL;
              t = SSLgetAnnotations(not_null(q_37));
              {
                i_38 = t;
                if(((h_38 != NULL) && (h_38 != i_38)))
                  _fail(i_38);
                else
                  h_38 = i_38;
              }
              {
                t = not_null(r_37);
                {
                  ATerm l_38 = NULL;
                  t = r_0(t);
                  {
                    j_38 = t;
                    {
                      t = not_null(s_37);
                      {
                        ATerm n_38 = NULL;
                        t = s_0(t);
                        {
                          l_38 = t;
                          {
                            ATerm o_38 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(j_38), not_null(l_38)), not_null(h_38));
                            {
                              o_38 = t;
                              if(((n_38 != NULL) && (n_38 != o_38)))
                                _fail(o_38);
                              else
                                n_38 = o_38;
                            }
                            t = not_null(n_38);
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
  ATerm h_39 = NULL,j_39 = NULL;
  ATerm q_39 (ATerm t)
  {
    ATerm m_39 = NULL;
    ATerm n_39 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_39), term_q_8);
    {
      t = copy_0(t);
      {
        n_39 = t;
        if(((m_39 != NULL) && (m_39 != n_39)))
          _fail(n_39);
        else
          m_39 = n_39;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(m_39))));
    return(t);
  }
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          ATerm i_39 = NULL;
          i_39 = t;
          if(((h_39 != NULL) && (h_39 != i_39)))
            _fail(i_39);
          else
            h_39 = i_39;
          return(t);
        }
        t = SOpt_2(t, VS_0, g_2);
        return(t);
      }
      t = fetch_1(t, e_2);
      {
        t = not_null(h_39);
        t = string_to_int_0(t);
      }
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
      t = term_c_6;
    }
  {
    j_39 = t;
    g_39 :
    if(match_int(j_39, 0))
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_r_11;
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            t = q_39(t);
          }
      }
    else
      {
        t = q_39(t);
      }
  }
  return(t);
}
ATerm AC_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm b_40 = NULL,c_40 = NULL;
  b_40 = t;
  a_40 :
  if(match_cons(b_40, sym_AC_1))
    {
      c_40 = ATgetArgument(b_40, 0);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_40 = NULL,h_40 = NULL;
            ATerm g_40 = NULL;
            t = SSLgetAnnotations(not_null(b_40));
            {
              g_40 = t;
              if(((f_40 != NULL) && (f_40 != g_40)))
                _fail(g_40);
              else
                f_40 = g_40;
            }
            {
              t = not_null(c_40);
              {
                ATerm j_40 = NULL;
                t = q_0(t);
                {
                  h_40 = t;
                  {
                    ATerm k_40 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(h_40)), not_null(f_40));
                    {
                      k_40 = t;
                      if(((j_40 != NULL) && (j_40 != k_40)))
                        _fail(k_40);
                      else
                        j_40 = k_40;
                    }
                    t = not_null(j_40);
                  }
                }
              }
            }
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
            {
              ATerm n_40 = NULL,q_40 = NULL;
              ATerm o_40 = NULL;
              t = SSLgetAnnotations(not_null(b_40));
              {
                o_40 = t;
                if(((n_40 != NULL) && (n_40 != o_40)))
                  _fail(o_40);
                else
                  n_40 = o_40;
              }
              {
                t = not_null(c_40);
                {
                  ATerm s_40 = NULL;
                  t = q_0(t);
                  {
                    q_40 = t;
                    {
                      ATerm t_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(q_40)), not_null(n_40));
                      {
                        t_40 = t;
                        if(((s_40 != NULL) && (s_40 != t_40)))
                          _fail(t_40);
                        else
                          s_40 = t_40;
                      }
                      t = not_null(s_40);
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
  ATerm p_41 = NULL,q_41 = NULL;
  p_41 = t;
  o_41 :
  if(match_cons(p_41, sym_AR_1))
    {
      q_41 = ATgetArgument(p_41, 0);
      {
        ATerm o_12 = t;
        int p_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_41 = NULL,x_41 = NULL;
            ATerm w_41 = NULL;
            t = SSLgetAnnotations(not_null(p_41));
            {
              w_41 = t;
              if(((t_41 != NULL) && (t_41 != w_41)))
                _fail(w_41);
              else
                t_41 = w_41;
            }
            {
              t = not_null(q_41);
              {
                ATerm z_41 = NULL;
                t = p_0(t);
                {
                  x_41 = t;
                  {
                    ATerm b_42 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(x_41)), not_null(t_41));
                    {
                      b_42 = t;
                      if(((z_41 != NULL) && (z_41 != b_42)))
                        _fail(b_42);
                      else
                        z_41 = b_42;
                    }
                    t = not_null(z_41);
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
              ATerm e_42 = NULL,g_42 = NULL;
              ATerm f_42 = NULL;
              t = SSLgetAnnotations(not_null(p_41));
              {
                f_42 = t;
                if(((e_42 != NULL) && (e_42 != f_42)))
                  _fail(f_42);
                else
                  e_42 = f_42;
              }
              {
                t = not_null(q_41);
                {
                  ATerm i_42 = NULL;
                  t = p_0(t);
                  {
                    g_42 = t;
                    {
                      ATerm j_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(g_42)), not_null(e_42));
                      {
                        j_42 = t;
                        if(((i_42 != NULL) && (i_42 != j_42)))
                          _fail(j_42);
                        else
                          i_42 = j_42;
                      }
                      t = not_null(i_42);
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
  ATerm d_43 = NULL,i_43 = NULL;
  d_43 = t;
  a_43 :
  if(match_cons(d_43, sym_AL_1))
    {
      i_43 = ATgetArgument(d_43, 0);
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_43 = NULL,o_43 = NULL;
            ATerm n_43 = NULL;
            t = SSLgetAnnotations(not_null(d_43));
            {
              n_43 = t;
              if(((l_43 != NULL) && (l_43 != n_43)))
                _fail(n_43);
              else
                l_43 = n_43;
            }
            {
              t = not_null(i_43);
              {
                ATerm q_43 = NULL;
                t = o_0(t);
                {
                  o_43 = t;
                  {
                    ATerm r_43 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(o_43)), not_null(l_43));
                    {
                      r_43 = t;
                      if(((q_43 != NULL) && (q_43 != r_43)))
                        _fail(r_43);
                      else
                        q_43 = r_43;
                    }
                    t = not_null(q_43);
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
              ATerm v_43 = NULL,x_43 = NULL;
              ATerm w_43 = NULL;
              t = SSLgetAnnotations(not_null(d_43));
              {
                w_43 = t;
                if(((v_43 != NULL) && (v_43 != w_43)))
                  _fail(w_43);
                else
                  v_43 = w_43;
              }
              {
                t = not_null(i_43);
                {
                  ATerm z_43 = NULL;
                  t = o_0(t);
                  {
                    x_43 = t;
                    {
                      ATerm a_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(x_43)), not_null(v_43));
                      {
                        a_44 = t;
                        if(((z_43 != NULL) && (z_43 != a_44)))
                          _fail(a_44);
                        else
                          z_43 = a_44;
                      }
                      t = not_null(z_43);
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
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = AL_1(t, _id);
      t = term_u_12;
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        ATerm v_12 = t;
        int w_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = AR_1(t, _id);
            t = term_x_12;
            LocalPopChoice(w_12);
          }
        else
          {
            t = v_12;
            {
              t = AC_1(t, _id);
              t = term_y_12;
            }
          }
      }
    }
  return(t);
}
ATerm make_hs_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  ATerm z_44 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(t_44));
    return(t);
  }
  r_44 = t;
  m_44 :
  if(match_cons(r_44, sym_AL_1))
    {
      s_44 = ATgetArgument(r_44, 0);
      if(((q_44 != NULL) && (q_44 != s_44)))
        _fail(s_44);
      else
        q_44 = s_44;
    }
  else
    {
      if(match_cons(r_44, sym_AR_1))
        {
          s_44 = ATgetArgument(r_44, 0);
          if(((q_44 != NULL) && (q_44 != s_44)))
            _fail(s_44);
          else
            q_44 = s_44;
        }
      else
        {
          if(match_cons(r_44, sym_AC_1))
            {
              s_44 = ATgetArgument(r_44, 0);
              if(((q_44 != NULL) && (q_44 != s_44)))
                _fail(s_44);
              else
                q_44 = s_44;
            }
          else
            {
              _fail(t);
            }
        }
    }
  {
    t = not_null(q_44);
    {
      t = Hspace_0(t);
      {
        t_44 = t;
        p_44 :
        if(((ATgetType(t_44) == AT_LIST) && ATisEmpty(t_44)))
          {
            {
            }
          }
        else
          {
            t = z_44(t);
          }
      }
    }
  }
  return(t);
}
ATerm toa_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  y_45 = t;
  w_45 :
  if(match_cons(y_45, sym_R_2))
    {
      z_45 = ATgetArgument(y_45, 0);
      a_46 = ATgetArgument(y_45, 1);
      x_45 :
      if(((ATgetType(z_45) == AT_LIST) && ATisEmpty(z_45)))
        {
          {
            ATerm c_46 = NULL,d_46 = NULL;
            ATerm e_46 = NULL,f_46 = NULL;
            t = term_z_10;
            {
              t = o_65(t);
              {
                e_46 = t;
                v_45 :
                if(match_cons(e_46, sym_AOPTIONS_1))
                  {
                    f_46 = ATgetArgument(e_46, 0);
                    {
                      ATerm t_48 = NULL;
                      if(((c_46 != NULL) && (c_46 != f_46)))
                        _fail(f_46);
                      else
                        c_46 = f_46;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_46), not_null(c_46));
                        {
                          ATerm w_48 (ATerm t)
                          {
                            ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL,r_46 = NULL;
                            ATerm y_48 (ATerm t)
                            {
                              ATerm q_47 = NULL;
                              ATerm r_47 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_46), not_null(p_46));
                              {
                                t = w_48(t);
                                {
                                  r_47 = t;
                                  if(((q_47 != NULL) && (q_47 != r_47)))
                                    _fail(r_47);
                                  else
                                    q_47 = r_47;
                                }
                              }
                              t = (ATerm) ATinsert(CheckATermList(not_null(q_47)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, not_null(g_46), not_null(h_46)))));
                              return(t);
                            }
                            ATerm z_48 (ATerm t)
                            {
                              ATerm c_48 = NULL,e_48 = NULL,g_48 = NULL;
                              ATerm z_12;
                              z_12 = t;
                              {
                                ATerm d_48 = NULL;
                                t = not_null(q_46);
                                {
                                  t = aopt_0(t);
                                  {
                                    d_48 = t;
                                    if(((c_48 != NULL) && (c_48 != d_48)))
                                      _fail(d_48);
                                    else
                                      c_48 = d_48;
                                  }
                                }
                              }
                              t = z_12;
                              {
                                ATerm a_13;
                                a_13 = t;
                                {
                                  ATerm f_48 = NULL;
                                  t = not_null(q_46);
                                  {
                                    t = make_hs_0(t);
                                    {
                                      f_48 = t;
                                      if(((e_48 != NULL) && (e_48 != f_48)))
                                        _fail(f_48);
                                      else
                                        e_48 = f_48;
                                    }
                                  }
                                }
                                t = a_13;
                                {
                                  ATerm h_48 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_46)), not_null(i_46)), not_null(r_46));
                                  {
                                    t = w_48(t);
                                    {
                                      h_48 = t;
                                      if(((g_48 != NULL) && (g_48 != h_48)))
                                        _fail(h_48);
                                      else
                                        g_48 = h_48;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_48)), not_null(e_48)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(c_48)), not_null(n_46)));
                                }
                              }
                              return(t);
                            }
                            ATerm a_49 (ATerm t)
                            {
                              ATerm o_48 = NULL,q_48 = NULL;
                              ATerm b_13;
                              b_13 = t;
                              {
                                ATerm p_48 = NULL;
                                t = not_null(q_46);
                                {
                                  t = aopt_0(t);
                                  {
                                    p_48 = t;
                                    if(((o_48 != NULL) && (o_48 != p_48)))
                                      _fail(p_48);
                                    else
                                      o_48 = p_48;
                                  }
                                }
                              }
                              t = b_13;
                              {
                                ATerm s_48 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_46), not_null(r_46));
                                {
                                  t = w_48(t);
                                  {
                                    s_48 = t;
                                    if(((q_48 != NULL) && (q_48 != s_48)))
                                      _fail(s_48);
                                    else
                                      q_48 = s_48;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(q_48)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(o_48)), not_null(n_46)));
                              }
                              return(t);
                            }
                            l_46 = t;
                            m_45 :
                            if(match_cons(l_46, sym__2))
                              {
                                m_46 = ATgetArgument(l_46, 0);
                                p_46 = ATgetArgument(l_46, 1);
                                n_45 :
                                if(((ATgetType(m_46) == AT_LIST) && ATisEmpty(m_46)))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(m_46) == AT_LIST) && !(ATisEmpty(m_46))))
                                      {
                                        n_46 = ATgetFirst((ATermList) m_46);
                                        o_46 = (ATerm) ATgetNext((ATermList) m_46);
                                        o_45 :
                                        if(((ATgetType(p_46) == AT_LIST) && !(ATisEmpty(p_46))))
                                          {
                                            q_46 = ATgetFirst((ATermList) p_46);
                                            r_46 = (ATerm) ATgetNext((ATermList) p_46);
                                            p_45 :
                                            if(((ATgetType(o_46) == AT_LIST) && !(ATisEmpty(o_46))))
                                              {
                                                i_46 = ATgetFirst((ATermList) o_46);
                                                k_46 = (ATerm) ATgetNext((ATermList) o_46);
                                                q_45 :
                                                if(match_cons(n_46, sym_C_2))
                                                  {
                                                    g_46 = ATgetArgument(n_46, 0);
                                                    h_46 = ATgetArgument(n_46, 1);
                                                    {
                                                      ATerm c_13 = t;
                                                      int d_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = y_48(t);
                                                          LocalPopChoice(d_13);
                                                        }
                                                      else
                                                        {
                                                          t = c_13;
                                                          {
                                                            ATerm e_13 = t;
                                                            int f_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = z_48(t);
                                                                LocalPopChoice(f_13);
                                                              }
                                                            else
                                                              {
                                                                t = e_13;
                                                                t = a_49(t);
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm g_13 = t;
                                                    int h_13 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = z_48(t);
                                                        LocalPopChoice(h_13);
                                                      }
                                                    else
                                                      {
                                                        t = g_13;
                                                        t = a_49(t);
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                r_45 :
                                                if(match_cons(n_46, sym_C_2))
                                                  {
                                                    g_46 = ATgetArgument(n_46, 0);
                                                    h_46 = ATgetArgument(n_46, 1);
                                                    {
                                                      ATerm i_13 = t;
                                                      int j_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = y_48(t);
                                                          LocalPopChoice(j_13);
                                                        }
                                                      else
                                                        {
                                                          t = i_13;
                                                          t = a_49(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = a_49(t);
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            s_45 :
                                            t_45 :
                                            if(match_cons(n_46, sym_C_2))
                                              {
                                                g_46 = ATgetArgument(n_46, 0);
                                                h_46 = ATgetArgument(n_46, 1);
                                                t = y_48(t);
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
                          t = w_48(t);
                          {
                            t_48 = t;
                            if(((d_46 != NULL) && (d_46 != t_48)))
                              _fail(t_48);
                            else
                              d_46 = t_48;
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
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_i_11), (ATerm) ATinsert(ATempty, not_null(d_46)));
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
  ATerm w_49 = NULL,x_49 = NULL,y_49 = NULL;
  w_49 = t;
  v_49 :
  if(match_cons(w_49, sym_R_2))
    {
      x_49 = ATgetArgument(w_49, 0);
      y_49 = ATgetArgument(w_49, 1);
      {
        ATerm k_13 = t;
        int l_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_50 = NULL,e_50 = NULL;
            ATerm d_50 = NULL;
            t = SSLgetAnnotations(not_null(w_49));
            {
              d_50 = t;
              if(((c_50 != NULL) && (c_50 != d_50)))
                _fail(d_50);
              else
                c_50 = d_50;
            }
            {
              t = not_null(x_49);
              {
                ATerm g_50 = NULL;
                t = m_0(t);
                {
                  e_50 = t;
                  {
                    t = not_null(y_49);
                    {
                      ATerm i_50 = NULL;
                      t = n_0(t);
                      {
                        g_50 = t;
                        {
                          ATerm j_50 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(e_50), not_null(g_50)), not_null(c_50));
                          {
                            j_50 = t;
                            if(((i_50 != NULL) && (i_50 != j_50)))
                              _fail(j_50);
                            else
                              i_50 = j_50;
                          }
                          t = not_null(i_50);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(l_13);
          }
        else
          {
            t = k_13;
            {
              ATerm n_50 = NULL,p_50 = NULL;
              ATerm o_50 = NULL;
              t = SSLgetAnnotations(not_null(w_49));
              {
                o_50 = t;
                if(((n_50 != NULL) && (n_50 != o_50)))
                  _fail(o_50);
                else
                  n_50 = o_50;
              }
              {
                t = not_null(x_49);
                {
                  ATerm r_50 = NULL;
                  t = m_0(t);
                  {
                    p_50 = t;
                    {
                      t = not_null(y_49);
                      {
                        ATerm t_50 = NULL;
                        t = n_0(t);
                        {
                          r_50 = t;
                          {
                            ATerm u_50 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(p_50), not_null(r_50)), not_null(n_50));
                            {
                              u_50 = t;
                              if(((t_50 != NULL) && (t_50 != u_50)))
                                _fail(u_50);
                              else
                                t_50 = u_50;
                            }
                            t = not_null(t_50);
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
  ATerm h_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, h_2);
  {
    ATerm t_52 (ATerm t)
    {
      ATerm u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL,a_52 = NULL;
      ATerm w_52 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_51), (ATerm) ATinsert(CheckATermList(not_null(a_52)), not_null(y_51)));
        t = t_52(t);
        return(t);
      }
      w_51 = t;
      r_51 :
      if(match_cons(w_51, sym__2))
        {
          x_51 = ATgetArgument(w_51, 0);
          a_52 = ATgetArgument(w_51, 1);
          s_51 :
          if(((ATgetType(x_51) == AT_LIST) && ATisEmpty(x_51)))
            {
              {
                ATerm f_52 = NULL;
                ATerm g_52 = NULL;
                t = not_null(a_52);
                {
                  ATerm i_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2(t, _id, i_2);
                  {
                    g_52 = t;
                    if(((f_52 != NULL) && (f_52 != g_52)))
                      _fail(g_52);
                    else
                      f_52 = g_52;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(f_52)));
              }
            }
          else
            {
              if(((ATgetType(x_51) == AT_LIST) && !(ATisEmpty(x_51))))
                {
                  y_51 = ATgetFirst((ATermList) x_51);
                  z_51 = (ATerm) ATgetNext((ATermList) x_51);
                  t_51 :
                  if(match_cons(y_51, sym_R_2))
                    {
                      u_51 = ATgetArgument(y_51, 0);
                      v_51 = ATgetArgument(y_51, 1);
                      {
                        ATerm m_13 = t;
                        int n_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm l_52 = NULL,n_52 = NULL;
                            ATerm o_13;
                            o_13 = t;
                            {
                              ATerm m_52 = NULL;
                              t = not_null(a_52);
                              {
                                ATerm k_2 (ATerm t)
                                {
                                  t = (ATerm) ATempty;
                                  return(t);
                                }
                                t = reverse_acc_2(t, _id, k_2);
                                {
                                  m_52 = t;
                                  if(((l_52 != NULL) && (l_52 != m_52)))
                                    _fail(m_52);
                                  else
                                    l_52 = m_52;
                                }
                              }
                            }
                            t = o_13;
                            {
                              ATerm o_52 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(z_51), (ATerm) ATempty);
                              {
                                t = t_52(t);
                                {
                                  o_52 = t;
                                  if(((n_52 != NULL) && (n_52 != o_52)))
                                    _fail(o_52);
                                  else
                                    n_52 = o_52;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_52)), (ATerm) ATmakeAppl(sym_R_2, not_null(u_51), not_null(v_51))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(l_52)));
                            }
                            LocalPopChoice(n_13);
                          }
                        else
                          {
                            t = m_13;
                            t = w_52(t);
                          }
                      }
                    }
                  else
                    {
                      t = w_52(t);
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
    t = t_52(t);
    {
      ATerm m_2 (ATerm t)
      {
        ATerm p_13 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_13;
          }
        return(t);
      }
      t = filter_1(t, m_2);
    }
  }
  return(t);
}
ATerm Abox2html_0 (ATerm t)
{
  ATerm h_54 = NULL,k_54 = NULL,n_54 = NULL,o_54 = NULL;
  n_54 = t;
  f_54 :
  if(match_cons(n_54, sym_REF_2))
    {
      o_54 = ATgetArgument(n_54, 0);
      k_54 = ATgetArgument(n_54, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, not_null(o_54), not_null(k_54));
    }
  else
    {
      if(match_cons(n_54, sym_LBL_2))
        {
          o_54 = ATgetArgument(n_54, 0);
          k_54 = ATgetArgument(n_54, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_54)), (ATerm) ATmakeAppl(sym_ANCHOR_1, not_null(o_54)));
        }
      else
        {
          if(match_cons(n_54, sym_LNAT_2))
            {
              o_54 = ATgetArgument(n_54, 0);
              k_54 = ATgetArgument(n_54, 1);
              t = term_q_13;
            }
          else
            {
              if(match_cons(n_54, sym_L_2))
                {
                  o_54 = ATgetArgument(n_54, 0);
                  k_54 = ATgetArgument(n_54, 1);
                  t = term_q_13;
                }
              else
                {
                  if(match_cons(n_54, sym_ALT_2))
                    {
                      o_54 = ATgetArgument(n_54, 0);
                      k_54 = ATgetArgument(n_54, 1);
                      t = not_null(o_54);
                    }
                  else
                    {
                      if(match_cons(n_54, sym_A_3))
                        {
                          o_54 = ATgetArgument(n_54, 0);
                          k_54 = ATgetArgument(n_54, 1);
                          h_54 = ATgetArgument(n_54, 2);
                          {
                            ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
                            ATerm f_55 = NULL;
                            t = not_null(h_54);
                            {
                              ATerm g_55 = NULL;
                              t = construct_rows_0(t);
                              {
                                f_55 = t;
                                {
                                  if(((c_55 != NULL) && (c_55 != f_55)))
                                    _fail(f_55);
                                  else
                                    c_55 = f_55;
                                  {
                                    t = not_null(k_54);
                                    {
                                      ATerm h_55 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        g_55 = t;
                                        {
                                          if(((d_55 != NULL) && (d_55 != g_55)))
                                            _fail(g_55);
                                          else
                                            d_55 = g_55;
                                          {
                                            t = not_null(c_55);
                                            {
                                              ATerm n_2 (ATerm t)
                                              {
                                                ATerm o_2 (ATerm t)
                                                {
                                                  t = not_null(o_54);
                                                  return(t);
                                                }
                                                t = toa_1(t, o_2);
                                                return(t);
                                              }
                                              t = map_1(t, n_2);
                                              {
                                                ATerm q_2 (ATerm t)
                                                {
                                                  t = not_null(d_55);
                                                  return(t);
                                                }
                                                t = separate_by_1(t, q_2);
                                                {
                                                  h_55 = t;
                                                  if(((e_55 != NULL) && (e_55 != h_55)))
                                                    _fail(h_55);
                                                  else
                                                    e_55 = h_55;
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
                            t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_55))))));
                          }
                        }
                      else
                        {
                          if(match_cons(n_54, sym_HV_2))
                            {
                              o_54 = ATgetArgument(n_54, 0);
                              k_54 = ATgetArgument(n_54, 1);
                              {
                                ATerm k_55 = NULL,l_55 = NULL,m_55 = NULL;
                                ATerm n_55 = NULL;
                                t = not_null(o_54);
                                {
                                  ATerm s_55 = NULL;
                                  t = Hspace_0(t);
                                  {
                                    n_55 = t;
                                    {
                                      if(((k_55 != NULL) && (k_55 != n_55)))
                                        _fail(n_55);
                                      else
                                        k_55 = n_55;
                                      {
                                        ATerm r_13 = t;
                                        int s_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_55 = NULL;
                                            o_55 = t;
                                            r_53 :
                                            if(((ATgetType(o_55) == AT_LIST) && ATisEmpty(o_55)))
                                              {
                                                {
                                                  t = not_null(k_54);
                                                  {
                                                    ATerm r_2 (ATerm t)
                                                    {
                                                      ATerm t_13 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = Nil_0(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = t_13;
                                                        }
                                                      return(t);
                                                    }
                                                    t = filter_1(t, r_2);
                                                  }
                                                }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(s_13);
                                          }
                                        else
                                          {
                                            t = r_13;
                                            {
                                              ATerm p_55 = NULL;
                                              ATerm q_55 = NULL;
                                              ATerm s_2 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, term_u_13);
                                                return(t);
                                              }
                                              t = at_last_1(t, s_2);
                                              {
                                                p_55 = t;
                                                {
                                                  if(((l_55 != NULL) && (l_55 != p_55)))
                                                    _fail(p_55);
                                                  else
                                                    l_55 = p_55;
                                                  {
                                                    ATerm r_55 = NULL;
                                                    t = not_null(k_54);
                                                    {
                                                      ATerm t_2 (ATerm t)
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
                                                      t = filter_1(t, t_2);
                                                      {
                                                        ATerm u_2 (ATerm t)
                                                        {
                                                          t = not_null(l_55);
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, u_2);
                                                        {
                                                          r_55 = t;
                                                          if(((q_55 != NULL) && (q_55 != r_55)))
                                                            _fail(r_55);
                                                          else
                                                            q_55 = r_55;
                                                        }
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_55)), term_w_13);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        {
                                          s_55 = t;
                                          if(((m_55 != NULL) && (m_55 != s_55)))
                                            _fail(s_55);
                                          else
                                            m_55 = s_55;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = not_null(m_55);
                              }
                            }
                          else
                            {
                              if(match_cons(n_54, sym_V_2))
                                {
                                  o_54 = ATgetArgument(n_54, 0);
                                  k_54 = ATgetArgument(n_54, 1);
                                  {
                                    ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
                                    ATerm a_56 = NULL;
                                    t = not_null(o_54);
                                    {
                                      ATerm b_56 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        a_56 = t;
                                        {
                                          if(((y_55 != NULL) && (y_55 != a_56)))
                                            _fail(a_56);
                                          else
                                            y_55 = a_56;
                                          {
                                            t = not_null(o_54);
                                            {
                                              ATerm c_56 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                b_56 = t;
                                                {
                                                  if(((x_55 != NULL) && (x_55 != b_56)))
                                                    _fail(b_56);
                                                  else
                                                    x_55 = b_56;
                                                  {
                                                    t = not_null(k_54);
                                                    {
                                                      ATerm x_2 (ATerm t)
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
                                                      t = filter_1(t, x_2);
                                                      {
                                                        ATerm y_2 (ATerm t)
                                                        {
                                                          ATerm a_3 (ATerm t)
                                                          {
                                                            t = term_r_11;
                                                            return(t);
                                                          }
                                                          t = tov_1(t, a_3);
                                                          return(t);
                                                        }
                                                        ATerm z_2 (ATerm t)
                                                        {
                                                          ATerm b_3 (ATerm t)
                                                          {
                                                            ATerm c_3 (ATerm t)
                                                            {
                                                              t = not_null(x_55);
                                                              return(t);
                                                            }
                                                            t = tov_1(t, c_3);
                                                            return(t);
                                                          }
                                                          t = map_1(t, b_3);
                                                          return(t);
                                                        }
                                                        t = Cons_2(t, y_2, z_2);
                                                        {
                                                          ATerm d_3 (ATerm t)
                                                          {
                                                            t = not_null(y_55);
                                                            return(t);
                                                          }
                                                          t = separate_by_1(t, d_3);
                                                          {
                                                            c_56 = t;
                                                            if(((z_55 != NULL) && (z_55 != c_56)))
                                                              _fail(c_56);
                                                            else
                                                              z_55 = c_56;
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
                                    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, not_null(z_55))), term_w_13);
                                  }
                                }
                              else
                                {
                                  if(match_cons(n_54, sym_H_2))
                                    {
                                      o_54 = ATgetArgument(n_54, 0);
                                      k_54 = ATgetArgument(n_54, 1);
                                      {
                                        ATerm f_56 = NULL,g_56 = NULL;
                                        ATerm h_56 = NULL;
                                        t = not_null(o_54);
                                        {
                                          ATerm i_56 = NULL;
                                          t = Hspace_0(t);
                                          {
                                            h_56 = t;
                                            {
                                              if(((f_56 != NULL) && (f_56 != h_56)))
                                                _fail(h_56);
                                              else
                                                f_56 = h_56;
                                              {
                                                t = not_null(k_54);
                                                {
                                                  ATerm e_3 (ATerm t)
                                                  {
                                                    ATerm y_13 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = y_13;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, e_3);
                                                  {
                                                    ATerm f_3 (ATerm t)
                                                    {
                                                      t = not_null(f_56);
                                                      return(t);
                                                    }
                                                    t = sep_by_1(t, f_3);
                                                    {
                                                      i_56 = t;
                                                      if(((g_56 != NULL) && (g_56 != i_56)))
                                                        _fail(i_56);
                                                      else
                                                        g_56 = i_56;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = not_null(g_56);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(n_54, sym_FBOX_2))
                                        {
                                          o_54 = ATgetArgument(n_54, 0);
                                          k_54 = ATgetArgument(n_54, 1);
                                          {
                                            ATerm l_56 = NULL;
                                            ATerm m_56 = NULL;
                                            t = not_null(o_54);
                                            {
                                              ATerm z_13 = t;
                                              int a_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = KW_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_b_14), (ATerm) ATinsert(ATempty, not_null(k_54)));
                                                  LocalPopChoice(a_14);
                                                }
                                              else
                                                {
                                                  t = z_13;
                                                  {
                                                    ATerm c_14 = t;
                                                    int d_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = VAR_0(t);
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_e_14), (ATerm) ATinsert(ATempty, not_null(k_54)));
                                                        LocalPopChoice(d_14);
                                                      }
                                                    else
                                                      {
                                                        t = c_14;
                                                        {
                                                          ATerm m_14 = t;
                                                          int n_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = NUM_0(t);
                                                              t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_r_14), (ATerm) ATinsert(ATempty, not_null(k_54)));
                                                              LocalPopChoice(n_14);
                                                            }
                                                          else
                                                            {
                                                              t = m_14;
                                                              {
                                                                ATerm s_14 = t;
                                                                int v_14 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = MATH_0(t);
                                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_d_15), (ATerm) ATinsert(ATempty, not_null(k_54)));
                                                                    LocalPopChoice(v_14);
                                                                  }
                                                                else
                                                                  {
                                                                    t = s_14;
                                                                    t = not_null(k_54);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              {
                                                m_56 = t;
                                                if(((l_56 != NULL) && (l_56 != m_56)))
                                                  _fail(m_56);
                                                else
                                                  l_56 = m_56;
                                              }
                                            }
                                            t = not_null(l_56);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(n_54, sym_C_2))
                                            {
                                              o_54 = ATgetArgument(n_54, 0);
                                              k_54 = ATgetArgument(n_54, 1);
                                              g_54 :
                                              if(((ATgetType(o_54) == AT_LIST) && ATisEmpty(o_54)))
                                                {
                                                  {
                                                    ATerm o_56 = NULL,p_56 = NULL;
                                                    ATerm t_56 = NULL;
                                                    t = not_null(k_54);
                                                    {
                                                      ATerm u_56 = NULL;
                                                      ATerm g_3 (ATerm t)
                                                      {
                                                        ATerm q_56 = NULL,r_56 = NULL;
                                                        q_56 = t;
                                                        c_54 :
                                                        if(match_cons(q_56, sym_S_1))
                                                          {
                                                            r_56 = ATgetArgument(q_56, 0);
                                                            {
                                                              t = not_null(r_56);
                                                              t = make_html_comment_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      t = map_1(t, g_3);
                                                      {
                                                        t_56 = t;
                                                        {
                                                          if(((o_56 != NULL) && (o_56 != t_56)))
                                                            _fail(t_56);
                                                          else
                                                            o_56 = t_56;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_f_15), (ATerm) ATinsert(ATempty, not_null(o_56))))));
                                                            {
                                                              u_56 = t;
                                                              if(((p_56 != NULL) && (p_56 != u_56)))
                                                                _fail(u_56);
                                                              else
                                                                p_56 = u_56;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    t = not_null(p_56);
                                                  }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(n_54, sym_S_1))
                                                {
                                                  o_54 = ATgetArgument(n_54, 0);
                                                  {
                                                    t = not_null(o_54);
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
ATerm at_last_1 (ATerm t, ATerm h_74 (ATerm))
{
  ATerm z_57 (ATerm t)
  {
    ATerm g_15 = t;
    int h_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = h_74(t);
        LocalPopChoice(h_15);
      }
    else
      {
        t = g_15;
        t = Cons_2(t, _id, z_57);
      }
    return(t);
  }
  t = z_57(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm a_58 (ATerm t)
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_74(t);
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        t = Cons_2(t, _id, a_58);
      }
    return(t);
  }
  t = a_58(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm t_73 (ATerm))
{
  ATerm d_58 = NULL,f_58 = NULL;
  ATerm h_3 (ATerm t)
  {
    t = Cons_2(t, t_73, _id);
    {
      ATerm i_3 (ATerm t)
      {
        ATerm e_58 = NULL;
        e_58 = t;
        if(((d_58 != NULL) && (d_58 != e_58)))
          _fail(e_58);
        else
          d_58 = e_58;
        return(t);
      }
      t = Cons_2(t, _id, i_3);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, h_3);
  {
    ATerm g_58 = NULL;
    g_58 = t;
    if(((f_58 != NULL) && (f_58 != g_58)))
      _fail(g_58);
    else
      f_58 = g_58;
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_58), not_null(d_58));
  }
  return(t);
}
ATerm Distribute_0 (ATerm t)
{
  ATerm u_58 = NULL,v_58 = NULL,w_58 = NULL;
  u_58 = t;
  t_58 :
  if(match_cons(u_58, sym_H_2))
    {
      v_58 = ATgetArgument(u_58, 0);
      w_58 = ATgetArgument(u_58, 1);
      {
        ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL;
        t = not_null(w_58);
        {
          ATerm j_3 (ATerm t)
          {
            ATerm c_59 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL;
            c_59 = t;
            l_58 :
            if(match_cons(c_59, sym_V_2))
              {
                d_59 = ATgetArgument(c_59, 0);
                e_59 = ATgetArgument(c_59, 1);
                m_58 :
                if(((ATgetType(e_59) == AT_LIST) && !(ATisEmpty(e_59))))
                  {
                    f_59 = ATgetFirst((ATermList) e_59);
                    g_59 = (ATerm) ATgetNext((ATermList) e_59);
                    {
                      if(((z_58 != NULL) && (z_58 != d_59)))
                        _fail(d_59);
                      else
                        z_58 = d_59;
                      {
                        if(((a_59 != NULL) && (a_59 != f_59)))
                          _fail(f_59);
                        else
                          a_59 = f_59;
                        if(((b_59 != NULL) && (b_59 != g_59)))
                          _fail(g_59);
                        else
                          b_59 = g_59;
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
          t = split_fetch_1(t, j_3);
          {
            h_59 = t;
            s_58 :
            if(match_cons(h_59, sym__2))
              {
                i_59 = ATgetArgument(h_59, 0);
                j_59 = ATgetArgument(h_59, 1);
                {
                  ATerm n_59 = NULL,p_59 = NULL;
                  t = not_null(j_59);
                  {
                    ATerm l_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm m_59 = NULL;
                        m_59 = t;
                        o_58 :
                        if(((ATgetType(m_59) == AT_LIST) && ATisEmpty(m_59)))
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
                        t = l_15;
                      }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_59)), not_null(a_59));
                      {
                        ATerm r_59 = NULL;
                        ATerm k_3 (ATerm t)
                        {
                          ATerm l_3 (ATerm t)
                          {
                            ATerm o_59 = NULL;
                            o_59 = t;
                            if(((n_59 != NULL) && (n_59 != o_59)))
                              _fail(o_59);
                            else
                              n_59 = o_59;
                            return(t);
                          }
                          t = Cons_2(t, l_3, Nil_0);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, not_null(v_58), (ATerm) ATinsert(CheckATermList(not_null(j_59)), not_null(n_59))));
                          return(t);
                        }
                        t = at_last_1(t, k_3);
                        {
                          p_59 = t;
                          {
                            ATerm s_59 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_59), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(z_58), not_null(p_59))));
                            {
                              ATerm m_15 = t;
                              int p_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = conc_two_lists_0(t);
                                  LocalPopChoice(p_15);
                                }
                              else
                                {
                                  t = m_15;
                                  t = conc_more_lists_0(t);
                                }
                              {
                                s_59 = t;
                                if(((r_59 != NULL) && (r_59 != s_59)))
                                  _fail(s_59);
                                else
                                  r_59 = s_59;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_H_2, not_null(v_58), not_null(r_59));
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
  ATerm m_3 (ATerm t)
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_15 = t;
        int t_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL,k_60 = NULL;
            g_60 = t;
            b_60 :
            if(match_cons(g_60, sym_H_2))
              {
                h_60 = ATgetArgument(g_60, 0);
                i_60 = ATgetArgument(g_60, 1);
                c_60 :
                if(((ATgetType(i_60) == AT_LIST) && !(ATisEmpty(i_60))))
                  {
                    j_60 = ATgetFirst((ATermList) i_60);
                    k_60 = (ATerm) ATgetNext((ATermList) i_60);
                    d_60 :
                    if(((ATgetType(k_60) == AT_LIST) && ATisEmpty(k_60)))
                      {
                        t = not_null(j_60);
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
                if(match_cons(g_60, sym_V_2))
                  {
                    h_60 = ATgetArgument(g_60, 0);
                    i_60 = ATgetArgument(g_60, 1);
                    e_60 :
                    if(((ATgetType(i_60) == AT_LIST) && !(ATisEmpty(i_60))))
                      {
                        j_60 = ATgetFirst((ATermList) i_60);
                        k_60 = (ATerm) ATgetNext((ATermList) i_60);
                        f_60 :
                        if(((ATgetType(k_60) == AT_LIST) && ATisEmpty(k_60)))
                          {
                            t = not_null(j_60);
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
            LocalPopChoice(t_15);
          }
        else
          {
            t = s_15;
            t = Distribute_0(t);
          }
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, m_3);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm q_60 = NULL;
  t = normalize_0(t);
  {
    ATerm n_3 (ATerm t)
    {
      ATerm y_15 = t;
      int z_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Abox2html_0(t);
          LocalPopChoice(z_15);
        }
      else
        {
          t = y_15;
          {
          }
        }
      return(t);
    }
    t = topdown_1(t, n_3);
    {
      q_60 = t;
      {
        t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(q_60))))));
        t = html2text_0(t);
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm l_54 (ATerm), ATerm m_54 (ATerm))
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
  z_60 = t;
  y_60 :
  if(match_cons(z_60, sym__2))
    {
      a_61 = ATgetArgument(z_60, 0);
      b_61 = ATgetArgument(z_60, 1);
      {
        ATerm h_61 = NULL,j_61 = NULL;
        ATerm i_61 = NULL;
        t = SSLgetAnnotations(not_null(z_60));
        {
          i_61 = t;
          if(((h_61 != NULL) && (h_61 != i_61)))
            _fail(i_61);
          else
            h_61 = i_61;
        }
        {
          t = not_null(a_61);
          {
            ATerm l_61 = NULL;
            t = l_54(t);
            {
              j_61 = t;
              {
                t = not_null(b_61);
                {
                  ATerm n_61 = NULL;
                  t = m_54(t);
                  {
                    l_61 = t;
                    {
                      ATerm o_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_61), not_null(l_61)), not_null(h_61));
                      {
                        o_61 = t;
                        if(((n_61 != NULL) && (n_61 != o_61)))
                          _fail(o_61);
                        else
                          n_61 = o_61;
                      }
                      t = not_null(n_61);
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
  ATerm v_61 = NULL;
  v_61 = t;
  t = SSL_ReadFromFile(not_null(v_61));
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm b_62 = NULL;
  ATerm b_16;
  b_16 = t;
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_3 (ATerm t)
        {
          ATerm c_62 = NULL,d_62 = NULL;
          c_62 = t;
          z_61 :
          if(match_cons(c_62, sym_Input_1))
            {
              d_62 = ATgetArgument(c_62, 0);
              if(((b_62 != NULL) && (b_62 != d_62)))
                _fail(d_62);
              else
                b_62 = d_62;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, o_3);
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        {
          ATerm e_62 = NULL;
          t = term_f_16;
          {
            e_62 = t;
            if(((b_62 != NULL) && (b_62 != e_62)))
              _fail(e_62);
            else
              b_62 = e_62;
          }
        }
      }
  }
  t = b_16;
  {
    ATerm p_3 (ATerm t)
    {
      t = not_null(b_62);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_3);
  }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm m_84 (ATerm))
{
  ATerm h_16;
  h_16 = t;
  {
    t = m_84(t);
    {
      ATerm q_3 (ATerm t)
      {
        t = term_i_16;
        return(t);
      }
      t = debug_1(t, q_3);
    }
  }
  t = h_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL;
  ATerm o_16 = t;
  int u_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_62 = NULL,o_62 = NULL,p_62 = NULL;
      n_62 = t;
      i_62 :
      if(match_cons(n_62, sym__2))
        {
          o_62 = ATgetArgument(n_62, 0);
          p_62 = ATgetArgument(n_62, 1);
          {
            if(((m_62 != NULL) && (m_62 != o_62)))
              _fail(o_62);
            else
              m_62 = o_62;
            if(((l_62 != NULL) && (l_62 != p_62)))
              _fail(p_62);
            else
              l_62 = p_62;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_16);
      t = SSL_open_file(not_null(m_62), not_null(l_62));
    }
  else
    {
      t = o_16;
      {
        ATerm q_62 = NULL;
        ATerm r_62 = NULL;
        ATerm r_3 (ATerm t)
        {
          t = term_v_16;
          return(t);
        }
        t = obsolete_1(t, r_3);
        {
          q_62 = t;
          {
            if(((m_62 != NULL) && (m_62 != q_62)))
              _fail(q_62);
            else
              m_62 = q_62;
            {
              ATerm w_16;
              w_16 = t;
              {
                ATerm s_62 = NULL;
                t = term_a_17;
                {
                  s_62 = t;
                  if(((r_62 != NULL) && (r_62 != s_62)))
                    _fail(s_62);
                  else
                    r_62 = s_62;
                }
              }
              t = w_16;
              t = SSL_open_file(not_null(m_62), not_null(r_62));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm q_73 (ATerm))
{
  ATerm w_62 (ATerm t)
  {
    ATerm b_17 = t;
    int c_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, q_73, _id);
        LocalPopChoice(c_17);
      }
    else
      {
        t = b_17;
        t = Cons_2(t, _id, w_62);
      }
    return(t);
  }
  t = w_62(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_88 (ATerm))
{
  t = fetch_1(t, e_88);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm z_62 = NULL;
  ATerm i_17;
  i_17 = t;
  {
    ATerm s_3 (ATerm t)
    {
      ATerm a_63 = NULL,b_63 = NULL;
      a_63 = t;
      y_62 :
      if(match_cons(a_63, sym_Program_1))
        {
          b_63 = ATgetArgument(a_63, 0);
          if(((z_62 != NULL) && (z_62 != b_63)))
            _fail(b_63);
          else
            z_62 = b_63;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, s_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_17), not_null(z_62)), term_j_17));
      {
        t = printnl_0(t);
        {
          t = term_c_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_17;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm h_63 = NULL;
  h_63 = t;
  g_63 :
  if(match_cons(h_63, sym_Version_0))
    {
      ATerm j_63 = NULL,l_63 = NULL;
      ATerm o_17;
      o_17 = t;
      {
        ATerm k_63 = NULL;
        t = SSLgetAnnotations(not_null(h_63));
        {
          k_63 = t;
          if(((j_63 != NULL) && (j_63 != k_63)))
            _fail(k_63);
          else
            j_63 = k_63;
        }
      }
      t = o_17;
      {
        ATerm m_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(j_63));
        {
          m_63 = t;
          if(((l_63 != NULL) && (l_63 != m_63)))
            _fail(m_63);
          else
            l_63 = m_63;
        }
        t = not_null(l_63);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm q_17 = t;
    int r_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(r_17);
      }
    else
      {
        t = q_17;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, t_3);
  t = h_85(t);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm u_3 (ATerm t)
  {
    ATerm r_63 = NULL;
    r_63 = t;
    q_63 :
    if(!(match_string(r_63, "-v")))
      {
        if(!(match_string(r_63, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    t = term_w_17;
    t = set_config_0(t);
    t = term_x_17;
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_y_17;
    return(t);
  }
  t = Option_3(t, u_3, v_3, w_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm u_63 = NULL;
    u_63 = t;
    s_63 :
    if(!(match_string(u_63, "-k")))
      {
        if(!(match_string(u_63, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm z_17;
    z_17 = t;
    {
      ATerm v_63 = NULL;
      ATerm w_63 = NULL;
      t = string_to_int_0(t);
      {
        w_63 = t;
        if(((v_63 != NULL) && (v_63 != w_63)))
          _fail(w_63);
        else
          v_63 = w_63;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_18, not_null(v_63));
        t = set_config_0(t);
      }
    }
    t = z_17;
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_b_18;
    return(t);
  }
  t = ArgOption_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm z_63 = NULL;
  z_63 = t;
  t = SSL_string_to_int(not_null(z_63));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm c_18 = t;
  int f_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_4 (ATerm t)
      {
        ATerm h_64 = NULL;
        h_64 = t;
        c_64 :
        if(!(match_string(h_64, "-S")))
          {
            if(!(match_string(h_64, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        t = term_k_18;
        t = set_config_0(t);
        t = term_p_18;
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        t = term_q_18;
        return(t);
      }
      t = Option_3(t, a_4, b_4, c_4);
      LocalPopChoice(f_18);
    }
  else
    {
      t = c_18;
      {
        ATerm r_18 = t;
        int s_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_4 (ATerm t)
            {
              ATerm i_64 = NULL;
              i_64 = t;
              d_64 :
              if(!(match_string(i_64, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm e_4 (ATerm t)
            {
              ATerm l_64 = NULL;
              ATerm t_18;
              t_18 = t;
              {
                ATerm j_64 = NULL;
                ATerm k_64 = NULL;
                t = string_to_int_0(t);
                {
                  k_64 = t;
                  if(((j_64 != NULL) && (j_64 != k_64)))
                    _fail(k_64);
                  else
                    j_64 = k_64;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_6, not_null(j_64));
                  t = set_config_0(t);
                }
              }
              t = t_18;
              {
                ATerm m_64 = NULL;
                m_64 = t;
                if(((l_64 != NULL) && (l_64 != m_64)))
                  _fail(m_64);
                else
                  l_64 = m_64;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(l_64));
              }
              return(t);
            }
            ATerm f_4 (ATerm t)
            {
              t = term_u_18;
              return(t);
            }
            t = ArgOption_3(t, d_4, e_4, f_4);
            LocalPopChoice(s_18);
          }
        else
          {
            t = r_18;
            {
              ATerm g_4 (ATerm t)
              {
                ATerm n_64 = NULL;
                n_64 = t;
                g_64 :
                if(!(match_string(n_64, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm h_4 (ATerm t)
              {
                t = term_w_18;
                t = set_config_0(t);
                t = term_x_18;
                return(t);
              }
              ATerm i_4 (ATerm t)
              {
                t = term_y_18;
                return(t);
              }
              t = Option_3(t, g_4, h_4, i_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm z_18 = t;
  int a_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(a_19);
    }
  else
    {
      t = z_18;
      {
        ATerm d_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(i_19);
          }
        else
          {
            t = d_19;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm t_64 = NULL;
    t_64 = t;
    q_64 :
    if(!(match_string(t_64, "-o")))
      {
        if(!(match_string(t_64, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    ATerm w_64 = NULL;
    ATerm n_19;
    n_19 = t;
    {
      ATerm u_64 = NULL;
      ATerm v_64 = NULL;
      v_64 = t;
      if(((u_64 != NULL) && (u_64 != v_64)))
        _fail(v_64);
      else
        u_64 = v_64;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_19, not_null(u_64));
        t = set_config_0(t);
      }
    }
    t = n_19;
    {
      ATerm x_64 = NULL;
      x_64 = t;
      if(((w_64 != NULL) && (w_64 != x_64)))
        _fail(x_64);
      else
        w_64 = x_64;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(w_64));
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_p_19;
    return(t);
  }
  t = ArgOption_3(t, j_4, k_4, m_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm q_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = q_19;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm b_65 = NULL;
          b_65 = t;
          a_65 :
          if(!(match_string(b_65, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_t_19;
          t = set_config_0(t);
          t = term_u_19;
          return(t);
        }
        ATerm q_4 (ATerm t)
        {
          t = term_v_19;
          return(t);
        }
        t = Option_3(t, n_4, o_4, q_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL,r_65 = NULL,s_65 = NULL;
  h_65 = t;
  f_65 :
  if(match_string(h_65, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(h_65) == AT_LIST) && !(ATisEmpty(h_65))))
        {
          i_65 = ATgetFirst((ATermList) h_65);
          j_65 = (ATerm) ATgetNext((ATermList) h_65);
          g_65 :
          if(((ATgetType(j_65) == AT_LIST) && !(ATisEmpty(j_65))))
            {
              r_65 = ATgetFirst((ATermList) j_65);
              s_65 = (ATerm) ATgetNext((ATermList) j_65);
              {
                ATerm w_65 = NULL;
                ATerm w_19;
                w_19 = t;
                {
                  t = not_null(i_65);
                  t = j_0(t);
                }
                t = w_19;
                {
                  ATerm x_65 = NULL;
                  t = not_null(r_65);
                  {
                    t = k_0(t);
                    {
                      x_65 = t;
                      if(((w_65 != NULL) && (w_65 != x_65)))
                        _fail(x_65);
                      else
                        w_65 = x_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_65)), not_null(w_65));
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
ATerm input_option_0 (ATerm t)
{
  ATerm s_4 (ATerm t)
  {
    ATerm e_66 = NULL;
    e_66 = t;
    b_66 :
    if(!(match_string(e_66, "-i")))
      {
        if(!(match_string(e_66, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    ATerm h_66 = NULL;
    ATerm x_19;
    x_19 = t;
    {
      ATerm f_66 = NULL;
      ATerm g_66 = NULL;
      g_66 = t;
      if(((f_66 != NULL) && (f_66 != g_66)))
        _fail(g_66);
      else
        f_66 = g_66;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_19, not_null(f_66));
        t = set_config_0(t);
      }
    }
    t = x_19;
    {
      ATerm i_66 = NULL;
      i_66 = t;
      if(((h_66 != NULL) && (h_66 != i_66)))
        _fail(i_66);
      else
        h_66 = i_66;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(h_66));
    }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    t = term_b_20;
    return(t);
  }
  t = ArgOption_3(t, s_4, t_4, u_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm g_20 = t;
  int l_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(l_20);
    }
  else
    {
      t = g_20;
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm m_66 = NULL;
  m_66 = t;
  t = SSL_table_destroy(not_null(m_66));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm q_66 = NULL;
  q_66 = t;
  t = SSL_exit(not_null(q_66));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm u_66 = NULL,b_67 = NULL,c_67 = NULL;
  u_66 = t;
  t_66 :
  if(((ATgetType(u_66) == AT_LIST) && ATisEmpty(u_66)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(u_66) == AT_LIST) && !(ATisEmpty(u_66))))
        {
          b_67 = ATgetFirst((ATermList) u_66);
          c_67 = (ATerm) ATgetNext((ATermList) u_66);
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
ATerm echo_0 (ATerm t)
{
  ATerm o_20;
  o_20 = t;
  {
    ATerm h_67 = NULL;
    ATerm k_67 = NULL;
    ATerm p_20 = t;
    int q_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(q_20);
      }
    else
      {
        t = p_20;
        {
          ATerm i_67 = NULL;
          ATerm j_67 = NULL;
          j_67 = t;
          if(((i_67 != NULL) && (i_67 != j_67)))
            _fail(j_67);
          else
            i_67 = j_67;
          t = (ATerm) ATinsert(ATempty, not_null(i_67));
        }
      }
    {
      k_67 = t;
      if(((h_67 != NULL) && (h_67 != k_67)))
        _fail(k_67);
      else
        h_67 = k_67;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_20, not_null(h_67));
      t = printnl_0(t);
    }
  }
  t = o_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm f_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
  v_67 = t;
  s_67 :
  if(((ATgetType(v_67) == AT_LIST) && !(ATisEmpty(v_67))))
    {
      t_67 = ATgetFirst((ATermList) v_67);
      u_67 = (ATerm) ATgetNext((ATermList) v_67);
      {
        ATerm y_67 = NULL;
        t = not_null(u_67);
        {
          ATerm s_20;
          s_20 = t;
          {
            ATerm z_67 = NULL,b_68 = NULL,d_68 = NULL;
            ATerm t_20;
            t_20 = t;
            {
              ATerm a_68 = NULL;
              t = i_0(t);
              {
                a_68 = t;
                if(((z_67 != NULL) && (z_67 != a_68)))
                  _fail(a_68);
                else
                  z_67 = a_68;
              }
            }
            t = t_20;
            {
              ATerm c_68 = NULL;
              t = not_null(t_67);
              {
                t = h_0(t);
                {
                  c_68 = t;
                  if(((b_68 != NULL) && (b_68 != c_68)))
                    _fail(c_68);
                  else
                    b_68 = c_68;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_67)), not_null(b_68));
                {
                  d_68 = t;
                  if(((y_67 != NULL) && (y_67 != d_68)))
                    _fail(d_68);
                  else
                    y_67 = d_68;
                }
              }
            }
          }
          t = s_20;
          {
            ATerm w_4 (ATerm t)
            {
              t = not_null(y_67);
              return(t);
            }
            t = reverse_acc_2(t, h_0, w_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(v_67) == AT_LIST) && ATisEmpty(v_67)))
        {
          {
            t = term_z_10;
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
  ATerm y_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, y_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm e_89 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_61 (ATerm))
{
  ATerm o_68 = NULL,p_68 = NULL;
  o_68 = t;
  n_68 :
  if(match_cons(o_68, sym_Program_1))
    {
      p_68 = ATgetArgument(o_68, 0);
      {
        ATerm s_68 = NULL,w_68 = NULL;
        ATerm t_68 = NULL;
        t = SSLgetAnnotations(not_null(o_68));
        {
          t_68 = t;
          if(((s_68 != NULL) && (s_68 != t_68)))
            _fail(t_68);
          else
            s_68 = t_68;
        }
        {
          t = not_null(p_68);
          {
            ATerm y_68 = NULL;
            t = d_61(t);
            {
              w_68 = t;
              {
                ATerm z_68 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(w_68)), not_null(s_68));
                {
                  z_68 = t;
                  if(((y_68 != NULL) && (y_68 != z_68)))
                    _fail(z_68);
                  else
                    y_68 = z_68;
                }
                t = not_null(y_68);
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
  ATerm h_69 = NULL;
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_69 = NULL;
      t = term_i_6;
      {
        t = get_config_0(t);
        {
          i_69 = t;
          if(((h_69 != NULL) && (h_69 != i_69)))
            _fail(i_69);
          else
            h_69 = i_69;
        }
      }
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm z_4 (ATerm t)
        {
          ATerm a_5 (ATerm t)
          {
            ATerm j_69 = NULL;
            j_69 = t;
            if(((h_69 != NULL) && (h_69 != j_69)))
              _fail(j_69);
            else
              h_69 = j_69;
            return(t);
          }
          t = Program_1(t, a_5);
          return(t);
        }
        t = fetch_1(t, z_4);
      }
    }
  {
    t = term_w_20;
    {
      t = echo_0(t);
      {
        t = term_h_21;
        {
          t = table_get_0(t);
          {
            ATerm b_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, b_5);
            {
              ATerm c_5 (ATerm t)
              {
                ATerm k_69 = NULL;
                ATerm l_69 = NULL;
                l_69 = t;
                if(((k_69 != NULL) && (k_69 != l_69)))
                  _fail(l_69);
                else
                  k_69 = l_69;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_69)), term_i_21);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, c_5);
            }
          }
        }
      }
    }
  }
  return(t);
}
ATerm debug_0 (ATerm t)
{
  ATerm j_21;
  j_21 = t;
  {
    ATerm q_69 = NULL;
    ATerm r_69 = NULL;
    r_69 = t;
    if(((q_69 != NULL) && (q_69 != r_69)))
      _fail(r_69);
    else
      q_69 = r_69;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATempty, not_null(q_69)));
      t = printnl_0(t);
    }
  }
  t = j_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm g_84 (ATerm))
{
  ATerm k_21;
  k_21 = t;
  {
    t = g_84(t);
    t = debug_0(t);
  }
  t = k_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_61 (ATerm))
{
  ATerm y_69 = NULL,z_69 = NULL;
  y_69 = t;
  x_69 :
  if(match_cons(y_69, sym_Undefined_1))
    {
      z_69 = ATgetArgument(y_69, 0);
      {
        ATerm c_70 = NULL,e_70 = NULL;
        ATerm d_70 = NULL;
        t = SSLgetAnnotations(not_null(y_69));
        {
          d_70 = t;
          if(((c_70 != NULL) && (c_70 != d_70)))
            _fail(d_70);
          else
            c_70 = d_70;
        }
        {
          t = not_null(z_69);
          {
            ATerm g_70 = NULL;
            t = e_61(t);
            {
              e_70 = t;
              {
                ATerm h_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_70)), not_null(c_70));
                {
                  h_70 = t;
                  if(((g_70 != NULL) && (g_70 != h_70)))
                    _fail(h_70);
                  else
                    g_70 = h_70;
                }
                t = not_null(g_70);
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
  ATerm q_70 = NULL;
  q_70 = t;
  p_70 :
  if(match_cons(q_70, sym_Help_0))
    {
      ATerm s_70 = NULL,u_70 = NULL;
      ATerm l_21;
      l_21 = t;
      {
        ATerm t_70 = NULL;
        t = SSLgetAnnotations(not_null(q_70));
        {
          t_70 = t;
          if(((s_70 != NULL) && (s_70 != t_70)))
            _fail(t_70);
          else
            s_70 = t_70;
        }
      }
      t = l_21;
      {
        ATerm v_70 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_70));
        {
          v_70 = t;
          if(((u_70 != NULL) && (u_70 != v_70)))
            _fail(v_70);
          else
            u_70 = v_70;
        }
        t = not_null(u_70);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm a_71 = NULL;
  a_71 = t;
  t = SSL_implode_string(not_null(a_71));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      {
        ATerm f_71 = NULL,g_71 = NULL,h_71 = NULL;
        f_71 = t;
        e_71 :
        if(((ATgetType(f_71) == AT_LIST) && !(ATisEmpty(f_71))))
          {
            g_71 = ATgetFirst((ATermList) f_71);
            h_71 = (ATerm) ATgetNext((ATermList) f_71);
            {
              t = not_null(g_71);
              {
                ATerm d_5 (ATerm t)
                {
                  t = not_null(h_71);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, d_5);
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
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm r_71 = NULL;
  ATerm t_71 = NULL;
  r_71 = t;
  {
    ATerm u_71 = NULL;
    ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
    t = not_null(r_71);
    {
      u_71 = t;
      {
        t = SSL_explode_term(not_null(u_71));
        {
          w_71 = t;
          p_71 :
          if(match_cons(w_71, sym__2))
            {
              x_71 = ATgetArgument(w_71, 0);
              y_71 = ATgetArgument(w_71, 1);
              q_71 :
              if(match_string(x_71, ""))
                {
                  if(((t_71 != NULL) && (t_71 != y_71)))
                    _fail(y_71);
                  else
                    t_71 = y_71;
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
      }
    }
    {
      t = not_null(t_71);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm w_73 (ATerm))
{
  ATerm c_72 (ATerm t)
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_72);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
          t = Nil_0(t);
          t = w_73(t);
        }
      }
    return(t);
  }
  t = c_72(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm f_72 = NULL,g_72 = NULL,h_72 = NULL;
  f_72 = t;
  e_72 :
  if(match_cons(f_72, sym__2))
    {
      g_72 = ATgetArgument(f_72, 0);
      h_72 = ATgetArgument(f_72, 1);
      {
        t = not_null(g_72);
        {
          ATerm e_5 (ATerm t)
          {
            t = not_null(h_72);
            return(t);
          }
          t = at_end_1(t, e_5);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm m_72 = NULL;
  m_72 = t;
  t = SSL_explode_string(not_null(m_72));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm s_21 = t;
    int t_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(t_21);
      }
    else
      {
        t = s_21;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm r_72 = NULL,s_72 = NULL,t_72 = NULL;
  r_72 = t;
  q_72 :
  if(match_cons(r_72, sym__2))
    {
      s_72 = ATgetArgument(r_72, 0);
      t_72 = ATgetArgument(r_72, 1);
      {
        ATerm u_21;
        u_21 = t;
        t = SSL_printnl(not_null(s_72), not_null(t_72));
        t = u_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm f_84 (ATerm))
{
  ATerm v_21;
  v_21 = t;
  {
    ATerm z_72 = NULL,b_73 = NULL;
    ATerm y_21;
    y_21 = t;
    {
      ATerm a_73 = NULL;
      t = f_84(t);
      {
        a_73 = t;
        if(((z_72 != NULL) && (z_72 != a_73)))
          _fail(a_73);
        else
          z_72 = a_73;
      }
    }
    t = y_21;
    {
      ATerm e_73 = NULL;
      e_73 = t;
      if(((b_73 != NULL) && (b_73 != e_73)))
        _fail(e_73);
      else
        b_73 = e_73;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_73)), not_null(z_72)));
        t = printnl_0(t);
      }
    }
  }
  t = v_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm k_73 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        t = Cons_2(t, h_73, k_73);
      }
    return(t);
  }
  t = k_73(t);
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      {
        ATerm d_22 = t;
        int e_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_5 (ATerm t)
            {
              ATerm f_22 = t;
              int g_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(g_22);
                }
              else
                {
                  t = f_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, f_5);
            LocalPopChoice(e_22);
          }
        else
          {
            t = d_22;
            {
              ATerm u_73 = NULL,v_73 = NULL,y_73 = NULL;
              u_73 = t;
              s_73 :
              if(match_cons(u_73, sym_Path_1))
                {
                  v_73 = ATgetArgument(u_73, 0);
                  t = not_null(v_73);
                }
              else
                {
                  if(match_cons(u_73, sym_Var_1))
                    {
                      v_73 = ATgetArgument(u_73, 0);
                      {
                        t = not_null(v_73);
                        {
                          ATerm h_22 = t;
                          int i_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(i_22);
                            }
                          else
                            {
                              t = h_22;
                              {
                                ATerm g_5 (ATerm t)
                                {
                                  t = term_j_22;
                                  return(t);
                                }
                                t = debug_1(t, g_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_73, sym_Prefix_2))
                        {
                          v_73 = ATgetArgument(u_73, 0);
                          y_73 = ATgetArgument(u_73, 1);
                          {
                            ATerm f_74 = NULL,j_74 = NULL;
                            ATerm k_22;
                            k_22 = t;
                            {
                              ATerm g_74 = NULL;
                              t = not_null(v_73);
                              {
                                t = eval_config_0(t);
                                {
                                  g_74 = t;
                                  if(((f_74 != NULL) && (f_74 != g_74)))
                                    _fail(g_74);
                                  else
                                    f_74 = g_74;
                                }
                              }
                            }
                            t = k_22;
                            {
                              ATerm k_74 = NULL;
                              t = not_null(y_73);
                              {
                                t = eval_config_0(t);
                                {
                                  k_74 = t;
                                  if(((j_74 != NULL) && (j_74 != k_74)))
                                    _fail(k_74);
                                  else
                                    j_74 = k_74;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_74), not_null(j_74));
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
  ATerm u_74 = NULL;
  u_74 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_22, not_null(u_74));
    {
      t = table_get_0(t);
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm o_22;
              o_22 = t;
              {
                ATerm w_74 = NULL;
                ATerm x_74 = NULL;
                x_74 = t;
                if(((w_74 != NULL) && (w_74 != x_74)))
                  _fail(x_74);
                else
                  w_74 = x_74;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_l_22, not_null(u_74), not_null(w_74));
                  t = table_put_0(t);
                }
              }
              t = o_22;
            }
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_75 = NULL,d_75 = NULL,e_75 = NULL;
  c_75 = t;
  b_75 :
  if(match_cons(c_75, sym__2))
    {
      d_75 = ATgetArgument(c_75, 0);
      e_75 = ATgetArgument(c_75, 1);
      t = SSL_table_get(not_null(d_75), not_null(e_75));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL;
  l_75 = t;
  k_75 :
  if(match_cons(l_75, sym__3))
    {
      m_75 = ATgetArgument(l_75, 0);
      n_75 = ATgetArgument(l_75, 1);
      o_75 = ATgetArgument(l_75, 2);
      {
        ATerm p_22;
        p_22 = t;
        {
          ATerm s_75 = NULL;
          ATerm t_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_75), not_null(n_75));
          {
            ATerm q_22 = t;
            int r_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_22);
              }
            else
              {
                t = q_22;
                t = (ATerm) ATempty;
              }
            {
              t_75 = t;
              if(((s_75 != NULL) && (s_75 != t_75)))
                _fail(t_75);
              else
                s_75 = t_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_75), not_null(n_75), (ATerm) ATinsert(CheckATermList(not_null(s_75)), not_null(o_75)));
            t = table_put_0(t);
          }
        }
        t = p_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm j_89 (ATerm))
{
  ATerm x_75 = NULL;
  ATerm y_75 = NULL;
  t = term_z_10;
  {
    t = j_89(t);
    {
      y_75 = t;
      if(((x_75 != NULL) && (x_75 != y_75)))
        _fail(y_75);
      else
        x_75 = y_75;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_z_20, term_e_21, not_null(x_75));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm e_76 = NULL,f_76 = NULL,g_76 = NULL;
  e_76 = t;
  d_76 :
  if(match_string(e_76, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(e_76) == AT_LIST) && !(ATisEmpty(e_76))))
        {
          f_76 = ATgetFirst((ATermList) e_76);
          g_76 = (ATerm) ATgetNext((ATermList) e_76);
          {
            ATerm j_76 = NULL;
            ATerm s_22;
            s_22 = t;
            {
              t = not_null(f_76);
              t = a_0(t);
            }
            t = s_22;
            {
              ATerm k_76 = NULL;
              t = term_z_10;
              {
                t = d_0(t);
                {
                  k_76 = t;
                  if(((j_76 != NULL) && (j_76 != k_76)))
                    _fail(k_76);
                  else
                    j_76 = k_76;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_76)), not_null(j_76));
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
  ATerm h_5 (ATerm t)
  {
    ATerm p_76 = NULL;
    p_76 = t;
    o_76 :
    if(!(match_string(p_76, "--help")))
      {
        if(!(match_string(p_76, "-h")))
          {
            if(!(match_string(p_76, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm i_5 (ATerm t)
  {
    t = term_u_22;
    {
      t = set_config_0(t);
      t = term_v_22;
    }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_w_22;
    return(t);
  }
  t = Option_3(t, h_5, i_5, j_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_76 = NULL,t_76 = NULL,u_76 = NULL;
  s_76 = t;
  r_76 :
  if(((ATgetType(s_76) == AT_LIST) && !(ATisEmpty(s_76))))
    {
      t_76 = ATgetFirst((ATermList) s_76);
      u_76 = (ATerm) ATgetNext((ATermList) s_76);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_76)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_76)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_55 (ATerm), ATerm v_55 (ATerm))
{
  ATerm e_77 = NULL,f_77 = NULL,g_77 = NULL;
  e_77 = t;
  d_77 :
  if(((ATgetType(e_77) == AT_LIST) && !(ATisEmpty(e_77))))
    {
      f_77 = ATgetFirst((ATermList) e_77);
      g_77 = (ATerm) ATgetNext((ATermList) e_77);
      {
        ATerm k_77 = NULL,m_77 = NULL;
        ATerm l_77 = NULL;
        t = SSLgetAnnotations(not_null(e_77));
        {
          l_77 = t;
          if(((k_77 != NULL) && (k_77 != l_77)))
            _fail(l_77);
          else
            k_77 = l_77;
        }
        {
          t = not_null(f_77);
          {
            ATerm o_77 = NULL;
            t = u_55(t);
            {
              m_77 = t;
              {
                t = not_null(g_77);
                {
                  ATerm q_77 = NULL;
                  t = v_55(t);
                  {
                    o_77 = t;
                    {
                      ATerm r_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_77)), not_null(m_77)), not_null(k_77));
                      {
                        r_77 = t;
                        if(((q_77 != NULL) && (q_77 != r_77)))
                          _fail(r_77);
                        else
                          q_77 = r_77;
                      }
                      t = not_null(q_77);
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
  ATerm b_78 = NULL;
  b_78 = t;
  a_78 :
  if(((ATgetType(b_78) == AT_LIST) && ATisEmpty(b_78)))
    {
      {
        ATerm d_78 = NULL,f_78 = NULL;
        ATerm x_22;
        x_22 = t;
        {
          ATerm e_78 = NULL;
          t = SSLgetAnnotations(not_null(b_78));
          {
            e_78 = t;
            if(((d_78 != NULL) && (d_78 != e_78)))
              _fail(e_78);
            else
              d_78 = e_78;
          }
        }
        t = x_22;
        {
          ATerm g_78 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(d_78));
          {
            g_78 = t;
            if(((f_78 != NULL) && (f_78 != g_78)))
              _fail(g_78);
            else
              f_78 = g_78;
          }
          t = not_null(f_78);
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
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL;
  m_78 = t;
  l_78 :
  if(match_cons(m_78, sym__2))
    {
      n_78 = ATgetArgument(m_78, 0);
      o_78 = ATgetArgument(m_78, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_l_22, not_null(n_78), not_null(o_78));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm h_89 (ATerm))
{
  ATerm y_22;
  y_22 = t;
  {
    ATerm z_22 = t;
    int a_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_23;
        t = h_89(t);
        LocalPopChoice(a_23);
      }
    else
      {
        t = z_22;
        {
        }
      }
  }
  t = y_22;
  {
    ATerm k_5 (ATerm t)
    {
      ATerm y_78 = NULL;
      ATerm c_23;
      c_23 = t;
      {
        ATerm w_78 = NULL;
        ATerm x_78 = NULL;
        x_78 = t;
        if(((w_78 != NULL) && (w_78 != x_78)))
          _fail(x_78);
        else
          w_78 = x_78;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_i_6, not_null(w_78));
          t = set_config_0(t);
        }
      }
      t = c_23;
      {
        ATerm z_78 = NULL;
        z_78 = t;
        if(((y_78 != NULL) && (y_78 != z_78)))
          _fail(z_78);
        else
          y_78 = z_78;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(y_78));
      }
      return(t);
    }
    ATerm l_5 (ATerm t)
    {
      ATerm d_23 = t;
      int e_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_23 = t;
          int g_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(g_23);
            }
          else
            {
              t = f_23;
              {
                t = h_89(t);
                t = Cons_2(t, _id, l_5);
              }
            }
          LocalPopChoice(e_23);
        }
      else
        {
          t = d_23;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_5, l_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm f_79 = NULL,g_79 = NULL,h_79 = NULL;
  ATerm h_23;
  h_23 = t;
  {
    ATerm i_79 = NULL,j_79 = NULL,k_79 = NULL,l_79 = NULL;
    i_79 = t;
    e_79 :
    if(match_cons(i_79, sym__3))
      {
        j_79 = ATgetArgument(i_79, 0);
        k_79 = ATgetArgument(i_79, 1);
        l_79 = ATgetArgument(i_79, 2);
        {
          if(((f_79 != NULL) && (f_79 != j_79)))
            _fail(j_79);
          else
            f_79 = j_79;
          {
            if(((g_79 != NULL) && (g_79 != k_79)))
              _fail(k_79);
            else
              g_79 = k_79;
            {
              if(((h_79 != NULL) && (h_79 != l_79)))
                _fail(l_79);
              else
                h_79 = l_79;
              t = SSL_table_put(not_null(f_79), not_null(g_79), not_null(h_79));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm g_89 (ATerm))
{
  ATerm o_79 = NULL;
  ATerm i_23;
  i_23 = t;
  {
    t = term_j_23;
    t = table_put_0(t);
  }
  t = i_23;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm k_23 = t;
      int l_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = g_89(t);
          LocalPopChoice(l_23);
        }
      else
        {
          t = k_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_5);
    {
      ATerm m_23 = t;
      int n_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_23;
          o_23 = t;
          {
            ATerm p_23 = t;
            int q_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_22;
                t = get_config_0(t);
                LocalPopChoice(q_23);
              }
            else
              {
                t = p_23;
                t = fetch_1(t, Help_0);
              }
          }
          t = o_23;
          {
            t = system_usage_0(t);
            {
              t = term_c_6;
              t = exit_0(t);
            }
          }
          LocalPopChoice(n_23);
        }
      else
        {
          t = m_23;
          {
            ATerm r_23 = t;
            int s_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_5 (ATerm t)
                {
                  ATerm o_5 (ATerm t)
                  {
                    ATerm p_79 = NULL;
                    p_79 = t;
                    if(((o_79 != NULL) && (o_79 != p_79)))
                      _fail(p_79);
                    else
                      o_79 = p_79;
                    return(t);
                  }
                  t = Undefined_1(t, o_5);
                  return(t);
                }
                t = fetch_1(t, n_5);
                {
                  ATerm p_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_79)), term_t_23);
                    return(t);
                  }
                  t = say_1(t, p_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_x_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(s_23);
              }
            else
              {
                t = r_23;
                {
                }
              }
          }
        }
      {
        ATerm u_23;
        u_23 = t;
        {
          t = term_z_20;
          t = table_destroy_0(t);
        }
        t = u_23;
      }
    }
  }
  return(t);
}
ATerm Abox_2_html_0 (ATerm t)
{
  ATerm z_79 = NULL;
  ATerm b_80 = NULL,c_80 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    z_79 = t;
    {
      ATerm v_23 = t;
      int w_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(w_23);
        }
      else
        {
          t = v_23;
          {
            ATerm x_23 = t;
            int y_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_23;
                z_23 = t;
                {
                  ATerm a_24 = t;
                  int b_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm q_5 (ATerm t)
                      {
                        ATerm d_80 = NULL,e_80 = NULL;
                        d_80 = t;
                        t_79 :
                        if(match_cons(d_80, sym_Output_1))
                          {
                            e_80 = ATgetArgument(d_80, 0);
                            if(((c_80 != NULL) && (c_80 != e_80)))
                              _fail(e_80);
                            else
                              c_80 = e_80;
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = fetch_1(t, q_5);
                      {
                        t = not_null(c_80);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(b_24);
                    }
                  else
                    {
                      t = a_24;
                      {
                        ATerm f_80 = NULL;
                        t = term_r_20;
                        {
                          f_80 = t;
                          if(((c_80 != NULL) && (c_80 != f_80)))
                            _fail(f_80);
                          else
                            c_80 = f_80;
                        }
                      }
                    }
                }
                t = z_23;
                {
                  t = input_file_0(t);
                  {
                    ATerm r_5 (ATerm t)
                    {
                      ATerm g_80 = NULL;
                      t = abox2html_0(t);
                      {
                        g_80 = t;
                        if(((b_80 != NULL) && (b_80 != g_80)))
                          _fail(g_80);
                        else
                          b_80 = g_80;
                      }
                      return(t);
                    }
                    t = _2(t, _id, r_5);
                    {
                      t = not_null(b_80);
                      {
                        ATerm s_5 (ATerm t)
                        {
                          ATerm c_24 = t;
                          int d_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_string_0(t);
                              {
                                ATerm e_24;
                                e_24 = t;
                                {
                                  ATerm t_5 (ATerm t)
                                  {
                                    t = not_null(c_80);
                                    return(t);
                                  }
                                  ATerm u_5 (ATerm t)
                                  {
                                    ATerm h_80 = NULL;
                                    h_80 = t;
                                    t = (ATerm) ATinsert(ATempty, not_null(h_80));
                                    return(t);
                                  }
                                  t = split_2(t, t_5, u_5);
                                  t = print_0(t);
                                }
                                t = e_24;
                              }
                              LocalPopChoice(d_24);
                            }
                          else
                            {
                              t = c_24;
                              {
                              }
                            }
                          return(t);
                        }
                        t = topdown_1(t, s_5);
                        t = report_success_0(t);
                      }
                    }
                  }
                }
                LocalPopChoice(y_23);
              }
            else
              {
                t = x_23;
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

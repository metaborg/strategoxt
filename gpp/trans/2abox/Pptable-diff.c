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
Symbol sym_Old_Table_1;
Symbol sym_New_Table_1;
Symbol sym_Verbose_0;
Symbol sym_Patch_0;
Symbol sym_Prune_0;
Symbol sym_Patched_1;
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
Symbol sym_Pipe_2;
Symbol sym_F__OK_0;
Symbol sym_R__OK_0;
Symbol sym_W__OK_0;
Symbol sym_X__OK_0;
Symbol sym_Stream_1;
Symbol sym_Path_1;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
Symbol sym_EpochTime_1;
Symbol sym_ComponentTime_3;
Symbol sym_DayTime_3;
Symbol sym_Date_3;
Symbol sym_Dupl_2;
Symbol sym_January_0;
Symbol sym_February_0;
Symbol sym_March_0;
Symbol sym_April_0;
Symbol sym_May_0;
Symbol sym_June_0;
Symbol sym_July_0;
Symbol sym_August_0;
Symbol sym_September_0;
Symbol sym_October_0;
Symbol sym_November_0;
Symbol sym_December_0;
Symbol sym_Sunday_0;
Symbol sym_Monday_0;
Symbol sym_Tuesday_0;
Symbol sym_Wednesday_0;
Symbol sym_Thursday_0;
Symbol sym_Friday_0;
Symbol sym_Saturday_0;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_S_1;
Symbol sym_NatCon_1;
Symbol sym_plus_1;
Symbol sym_minus_1;
Symbol sym_L_2;
Symbol sym_LNAT_2;
Symbol sym_C_2;
Symbol sym_LBL_2;
Symbol sym_REF_2;
Symbol sym_KW_0;
Symbol sym_VAR_0;
Symbol sym_NUM_0;
Symbol sym_MATH_0;
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
Symbol sym_SOptB_2;
Symbol sym_VS_0;
Symbol sym_HS_0;
Symbol sym_IS_0;
Symbol sym_NatCon_1;
Symbol sym_plus_1;
Symbol sym_minus_1;
Symbol sym_Strict_0;
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
  sym_Old_Table_1 = ATmakeSymbol("Old-Table", 1, ATfalse);
  ATprotectSymbol(sym_Old_Table_1);
  sym_New_Table_1 = ATmakeSymbol("New-Table", 1, ATfalse);
  ATprotectSymbol(sym_New_Table_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Patch_0 = ATmakeSymbol("Patch", 0, ATfalse);
  ATprotectSymbol(sym_Patch_0);
  sym_Prune_0 = ATmakeSymbol("Prune", 0, ATfalse);
  ATprotectSymbol(sym_Prune_0);
  sym_Patched_1 = ATmakeSymbol("Patched", 1, ATfalse);
  ATprotectSymbol(sym_Patched_1);
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
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
  sym_F__OK_0 = ATmakeSymbol("F_OK", 0, ATfalse);
  ATprotectSymbol(sym_F__OK_0);
  sym_R__OK_0 = ATmakeSymbol("R_OK", 0, ATfalse);
  ATprotectSymbol(sym_R__OK_0);
  sym_W__OK_0 = ATmakeSymbol("W_OK", 0, ATfalse);
  ATprotectSymbol(sym_W__OK_0);
  sym_X__OK_0 = ATmakeSymbol("X_OK", 0, ATfalse);
  ATprotectSymbol(sym_X__OK_0);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
  sym_EpochTime_1 = ATmakeSymbol("EpochTime", 1, ATfalse);
  ATprotectSymbol(sym_EpochTime_1);
  sym_ComponentTime_3 = ATmakeSymbol("ComponentTime", 3, ATfalse);
  ATprotectSymbol(sym_ComponentTime_3);
  sym_DayTime_3 = ATmakeSymbol("DayTime", 3, ATfalse);
  ATprotectSymbol(sym_DayTime_3);
  sym_Date_3 = ATmakeSymbol("Date", 3, ATfalse);
  ATprotectSymbol(sym_Date_3);
  sym_Dupl_2 = ATmakeSymbol("Dupl", 2, ATfalse);
  ATprotectSymbol(sym_Dupl_2);
  sym_January_0 = ATmakeSymbol("January", 0, ATfalse);
  ATprotectSymbol(sym_January_0);
  sym_February_0 = ATmakeSymbol("February", 0, ATfalse);
  ATprotectSymbol(sym_February_0);
  sym_March_0 = ATmakeSymbol("March", 0, ATfalse);
  ATprotectSymbol(sym_March_0);
  sym_April_0 = ATmakeSymbol("April", 0, ATfalse);
  ATprotectSymbol(sym_April_0);
  sym_May_0 = ATmakeSymbol("May", 0, ATfalse);
  ATprotectSymbol(sym_May_0);
  sym_June_0 = ATmakeSymbol("June", 0, ATfalse);
  ATprotectSymbol(sym_June_0);
  sym_July_0 = ATmakeSymbol("July", 0, ATfalse);
  ATprotectSymbol(sym_July_0);
  sym_August_0 = ATmakeSymbol("August", 0, ATfalse);
  ATprotectSymbol(sym_August_0);
  sym_September_0 = ATmakeSymbol("September", 0, ATfalse);
  ATprotectSymbol(sym_September_0);
  sym_October_0 = ATmakeSymbol("October", 0, ATfalse);
  ATprotectSymbol(sym_October_0);
  sym_November_0 = ATmakeSymbol("November", 0, ATfalse);
  ATprotectSymbol(sym_November_0);
  sym_December_0 = ATmakeSymbol("December", 0, ATfalse);
  ATprotectSymbol(sym_December_0);
  sym_Sunday_0 = ATmakeSymbol("Sunday", 0, ATfalse);
  ATprotectSymbol(sym_Sunday_0);
  sym_Monday_0 = ATmakeSymbol("Monday", 0, ATfalse);
  ATprotectSymbol(sym_Monday_0);
  sym_Tuesday_0 = ATmakeSymbol("Tuesday", 0, ATfalse);
  ATprotectSymbol(sym_Tuesday_0);
  sym_Wednesday_0 = ATmakeSymbol("Wednesday", 0, ATfalse);
  ATprotectSymbol(sym_Wednesday_0);
  sym_Thursday_0 = ATmakeSymbol("Thursday", 0, ATfalse);
  ATprotectSymbol(sym_Thursday_0);
  sym_Friday_0 = ATmakeSymbol("Friday", 0, ATfalse);
  ATprotectSymbol(sym_Friday_0);
  sym_Saturday_0 = ATmakeSymbol("Saturday", 0, ATfalse);
  ATprotectSymbol(sym_Saturday_0);
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
  ATprotectSymbol(sym_PP_Entry_2);
  sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
  ATprotectSymbol(sym_Path1_1);
  sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
  ATprotectSymbol(sym_Path_2);
  sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
  ATprotectSymbol(sym_selector_2);
  sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
  ATprotectSymbol(sym_Arg_1);
  sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
  ATprotectSymbol(sym_Arg2_2);
  sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
  ATprotectSymbol(sym_S_1);
  sym_NatCon_1 = ATmakeSymbol("NatCon", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
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
  sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
  ATprotectSymbol(sym_SOptB_2);
  sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
  ATprotectSymbol(sym_VS_0);
  sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
  ATprotectSymbol(sym_HS_0);
  sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
  ATprotectSymbol(sym_IS_0);
  sym_NatCon_1 = ATmakeSymbol("NatCon", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  init_constant_terms();
}
ATerm term_d_29;
ATerm term_r_28;
ATerm term_f_28;
ATerm term_c_28;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_g_27;
ATerm term_u_26;
ATerm term_i_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_i_22;
ATerm term_h_22;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_p_21;
ATerm term_j_21;
ATerm term_f_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_r_20;
ATerm term_n_20;
ATerm term_k_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_c_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_n_18;
ATerm term_l_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_o_17;
ATerm term_e_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_y_15;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_p_15;
ATerm term_k_13;
ATerm term_g_13;
ATerm term_f_13;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_h_10;
ATerm term_e_9;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_w_7;
ATerm term_v_7;
void init_constant_terms (void)
{
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_f_13));
  term_f_13 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_t_17, term_u_17);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_w_10);
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify new table with --new switch", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_f_13, term_z_10);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(sym__2, term_r_19, term_q_8);
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym__2, term_k_20, term_n_20);
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_20);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_q_8);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_p_8, term_q_8);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(sym__2, term_h_22, term_i_22);
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(sym__2, term_j_23, term_q_8);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(sym__3, term_h_22, term_i_22, (ATerm) ATempty);
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_r_28));
  term_r_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
}
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm g_87 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_1 (ATerm, ATerm p_91 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm j_96 (ATerm));
ATerm termid_set_1 (ATerm, ATerm r_96 (ATerm));
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm double_quote_0 (ATerm);
ATerm Escape_linefeed_0 (ATerm);
ATerm Escape_backslash_0 (ATerm);
ATerm Escape_double_quote_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_chars_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm desugar_0 (ATerm);
ATerm table_getlist_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm m_70 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm j_90 (ATerm));
ATerm table_remove_0 (ATerm);
ATerm prune_0 (ATerm);
ATerm patch_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm diff_1 (ATerm, ATerm u_78 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm));
ATerm zip_1 (ATerm, ATerm f_77 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm z_68 (ATerm), ATerm a_69 (ATerm));
ATerm for_3 (ATerm, ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm e_69 (ATerm));
ATerm diff_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm o_65 (ATerm));
ATerm S_1 (ATerm, ATerm r_65 (ATerm));
ATerm union_1 (ATerm, ATerm y_78 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm a_81 (ATerm));
ATerm crush_3 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm));
ATerm collect_om_1 (ATerm, ATerm u_79 (ATerm));
ATerm collect_1 (ATerm, ATerm v_79 (ATerm));
ATerm Fst_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm));
ATerm isect_1 (ATerm, ATerm s_78 (ATerm));
ATerm isect_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_rename_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm selector_2 (ATerm, ATerm m_65 (ATerm), ATerm n_65 (ATerm));
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm z_75 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm x_83 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm i_84 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm d_67 (ATerm), ATerm e_67 (ATerm));
ATerm Arg2_2 (ATerm, ATerm p_65 (ATerm), ATerm q_65 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm i_69 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm i_96 (ATerm));
ATerm termid_check_1 (ATerm, ATerm p_96 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm notify_1 (ATerm, ATerm x_96 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm New_Table_1 (ATerm, ATerm n_59 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm k_75 (ATerm));
ATerm get_options_0 (ATerm);
ATerm option_value_2 (ATerm, ATerm k_90 (ATerm), ATerm l_90 (ATerm));
ATerm Old_Table_1 (ATerm, ATerm m_59 (ATerm));
ATerm pptable_diff_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm output_options_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm l_93 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_80 (ATerm), ATerm x_80 (ATerm));
ATerm crush_2 (ATerm, ATerm p_84 (ATerm), ATerm q_84 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_88 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_91 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm h_93 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm g_93 (ATerm));
ATerm Program_1 (ATerm, ATerm e_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm f_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm g_92 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_75 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm b_58 (ATerm), ATerm c_58 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm s_86 (ATerm));
ATerm map_1 (ATerm, ATerm z_74 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_67 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm j_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm i_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm m_91 (ATerm), ATerm n_91 (ATerm));
ATerm io_Pptable_diff_0 (ATerm);
ATerm main_0 (ATerm);
ATerm fputc_0 (ATerm t)
{
  ATerm o_2 = NULL,p_2 = NULL,h_3 = NULL,i_3 = NULL;
  o_2 = t;
  z_1 :
  if(match_cons(o_2, sym__2))
    {
      p_2 = ATgetArgument(o_2, 0);
      h_3 = ATgetArgument(o_2, 1);
      n_2 :
      if(match_cons(h_3, sym_Stream_1))
        {
          i_3 = ATgetArgument(h_3, 0);
          {
            ATerm o_3 = NULL;
            t = SSL_fputc(not_null(p_2), not_null(i_3));
            {
              ATerm p_3 = NULL;
              p_3 = t;
              if(((o_3 != NULL) && (o_3 != p_3)))
                _fail(p_3);
              else
                o_3 = p_3;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_3));
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
ATerm write_in_text_to_stream_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  w_3 = t;
  u_3 :
  if(match_cons(w_3, sym__2))
    {
      x_3 = ATgetArgument(w_3, 0);
      z_3 = ATgetArgument(w_3, 1);
      v_3 :
      if(match_cons(x_3, sym_Stream_1))
        {
          y_3 = ATgetArgument(x_3, 0);
          {
            ATerm c_4 = NULL;
            t = SSL_write_term_to_stream_text(not_null(y_3), not_null(z_3));
            {
              ATerm d_4 = NULL;
              d_4 = t;
              if(((c_4 != NULL) && (c_4 != d_4)))
                _fail(d_4);
              else
                c_4 = d_4;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_4));
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
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm c_0 (ATerm t)
  {
    ATerm h_4 = NULL;
    t = write_in_text_to_stream_0(t);
    {
      ATerm i_4 = NULL;
      i_4 = t;
      if(((h_4 != NULL) && (h_4 != i_4)))
        _fail(i_4);
      else
        h_4 = i_4;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(h_4));
        t = fputc_0(t);
      }
    }
    return(t);
  }
  t = WriteToFile_1(t, c_0);
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL,r_4 = NULL;
  o_4 = t;
  m_4 :
  if(match_cons(o_4, sym__2))
    {
      p_4 = ATgetArgument(o_4, 0);
      r_4 = ATgetArgument(o_4, 1);
      n_4 :
      if(match_cons(p_4, sym_Stream_1))
        {
          q_4 = ATgetArgument(p_4, 0);
          {
            ATerm u_4 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(q_4), not_null(r_4));
            {
              ATerm v_4 = NULL;
              v_4 = t;
              if(((u_4 != NULL) && (u_4 != v_4)))
                _fail(v_4);
              else
                u_4 = v_4;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_4));
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
ATerm WriteToFile_1 (ATerm t, ATerm g_87 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL,e_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym__2))
    {
      d_5 = ATgetArgument(c_5, 0);
      e_5 = ATgetArgument(c_5, 1);
      {
        ATerm h_5 = NULL,j_5 = NULL;
        t = not_null(d_5);
        {
          ATerm i_5 = NULL;
          i_5 = t;
          if(((h_5 != NULL) && (h_5 != i_5)))
            _fail(i_5);
          else
            h_5 = i_5;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), term_w_7);
            {
              t = open_stream_0(t);
              {
                ATerm k_5 = NULL;
                k_5 = t;
                if(((j_5 != NULL) && (j_5 != k_5)))
                  _fail(k_5);
                else
                  j_5 = k_5;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_5), not_null(e_5));
                  {
                    t = g_87(t);
                    {
                      t = fclose_0(t);
                      t = not_null(e_5);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  t = WriteToFile_1(t, write_in_baf_to_stream_0);
  return(t);
}
ATerm output_1 (ATerm t, ATerm p_91 (ATerm))
{
  ATerm q_5 = NULL,s_5 = NULL;
  t = p_91(t);
  {
    ATerm c_8;
    c_8 = t;
    {
      ATerm r_5 = NULL;
      ATerm d_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_k_8;
          t = get_config_0(t);
          ;
          LocalPopChoice(e_8);
        }
      else
        {
          t = d_8;
          t = term_l_8;
        }
      {
        r_5 = t;
        if(((q_5 != NULL) && (q_5 != r_5)))
          _fail(r_5);
        else
          q_5 = r_5;
      }
    }
    t = c_8;
    {
      ATerm t_5 = NULL;
      t_5 = t;
      if(((s_5 != NULL) && (s_5 != t_5)))
        _fail(t_5);
      else
        s_5 = t_5;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_5), not_null(s_5));
        {
          ATerm m_8 = t;
          int n_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm o_8;
              o_8 = t;
              {
                t = term_p_8;
                t = get_config_0(t);
              }
              t = o_8;
              LocalPopChoice(n_8);
              t = WriteToBinaryFile_0(t);
            }
          else
            {
              t = m_8;
              t = WriteToTextFile_0(t);
            }
        }
      }
    }
  }
  return(t);
}
ATerm mkterm_0 (ATerm t)
{
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL;
  y_5 = t;
  x_5 :
  if(match_cons(y_5, sym__2))
    {
      z_5 = ATgetArgument(y_5, 0);
      a_6 = ATgetArgument(y_5, 1);
      t = SSL_mkterm(not_null(z_5), not_null(a_6));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm j_96 (ATerm))
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL;
  j_6 = t;
  h_6 :
  if(match_cons(j_6, sym__2))
    {
      k_6 = ATgetArgument(j_6, 0);
      l_6 = ATgetArgument(j_6, 1);
      i_6 :
      if(match_string(k_6, "out-type"))
        {
          ATerm n_6 = NULL;
          ATerm o_6 = NULL,q_6 = NULL;
          ATerm p_6 = NULL;
          t = term_q_8;
          {
            t = j_96(t);
            {
              p_6 = t;
              if(((o_6 != NULL) && (o_6 != p_6)))
                _fail(p_6);
              else
                o_6 = p_6;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_6), (ATerm) ATinsert(ATempty, not_null(l_6)));
            {
              t = mkterm_0(t);
              {
                q_6 = t;
                if(((n_6 != NULL) && (n_6 != q_6)))
                  _fail(q_6);
                else
                  n_6 = q_6;
              }
            }
          }
          t = not_null(n_6);
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
ATerm termid_set_1 (ATerm t, ATerm r_96 (ATerm))
{
  ATerm w_6 = NULL;
  ATerm y_6 = NULL;
  w_6 = t;
  {
    ATerm z_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(w_6));
    {
      t = OutId_1(t, r_96);
      {
        z_6 = t;
        if(((y_6 != NULL) && (y_6 != z_6)))
          _fail(z_6);
        else
          y_6 = z_6;
      }
    }
    t = not_null(y_6);
  }
  return(t);
}
ATerm quote_chars_0 (ATerm t)
{
  ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL;
  e_7 = t;
  d_7 :
  if(match_cons(e_7, sym__2))
    {
      f_7 = ATgetArgument(e_7, 0);
      g_7 = ATgetArgument(e_7, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(g_7)), not_null(f_7)), (ATerm) ATinsert(ATempty, not_null(f_7)));
        t = conc_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm l_7 = NULL;
  ATerm m_7 = NULL;
  m_7 = t;
  if(((l_7 != NULL) && (l_7 != m_7)))
    _fail(m_7);
  else
    l_7 = m_7;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(l_7));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm Escape_linefeed_0 (ATerm t)
{
  ATerm r_7 = NULL,s_7 = NULL,t_7 = NULL;
  r_7 = t;
  p_7 :
  if(((ATgetType(r_7) == AT_LIST) && !(ATisEmpty(r_7))))
    {
      s_7 = ATgetFirst((ATermList) r_7);
      t_7 = (ATerm) ATgetNext((ATermList) r_7);
      q_7 :
      if(match_int(s_7, 10))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_7)), term_e_9), term_b_9);
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
ATerm Escape_backslash_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  x_7 :
  if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
    {
      a_8 = ATgetFirst((ATermList) z_7);
      b_8 = (ATerm) ATgetNext((ATermList) z_7);
      y_7 :
      if(match_int(a_8, 92))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_8)), term_b_9), term_b_9);
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
ATerm Escape_double_quote_0 (ATerm t)
{
  ATerm h_8 = NULL,i_8 = NULL,j_8 = NULL;
  h_8 = t;
  f_8 :
  if(((ATgetType(h_8) == AT_LIST) && !(ATisEmpty(h_8))))
    {
      i_8 = ATgetFirst((ATermList) h_8);
      j_8 = (ATerm) ATgetNext((ATermList) h_8);
      g_8 :
      if(match_int(i_8, 34))
        {
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(j_8)), term_y_8), term_b_9);
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
ATerm Escape_0 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm h_9 = t;
        int i_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(i_9);
          }
        else
          {
            t = h_9;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_0(t);
      {
        ATerm e_0 (ATerm t)
        {
          t = Cons_2(t, _id, escape_chars_0);
          return(t);
        }
        t = Cons_2(t, _id, e_0);
      }
      ;
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      {
        ATerm m_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(o_9);
          }
        else
          {
            t = m_9;
            t = Nil_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_0 (ATerm t)
{
  t = string_as_chars_1(t, escape_chars_0);
  return(t);
}
ATerm desugar_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm h_0 (ATerm t)
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arg_1(t, int_to_string_0);
          ;
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
                t = Arg2_2(t, int_to_string_0, int_to_string_0);
                ;
                LocalPopChoice(v_9);
              }
            else
              {
                t = t_9;
                {
                  ATerm w_9 = t;
                  int b_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SOpt_2(t, _id, _id);
                      ;
                      LocalPopChoice(b_10);
                    }
                  else
                    {
                      t = w_9;
                      {
                        ATerm c_10 = t;
                        int e_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm m_0 (ATerm t)
                            {
                              t = escape_0(t);
                              t = double_quote_0(t);
                              return(t);
                            }
                            t = S_1(t, m_0);
                            ;
                            LocalPopChoice(e_10);
                          }
                        else
                          {
                            t = c_10;
                            {
                              ATerm f_10 = t;
                              int g_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = selector_2(t, int_to_string_0, _id);
                                  ;
                                  LocalPopChoice(g_10);
                                }
                              else
                                {
                                  t = f_10;
                                  {
                                    ATerm t_8 = NULL,u_8 = NULL,v_8 = NULL,w_8 = NULL;
                                    u_8 = t;
                                    r_8 :
                                    if(match_cons(u_8, sym_Patched_1))
                                      {
                                        v_8 = ATgetArgument(u_8, 0);
                                        s_8 :
                                        if(match_cons(v_8, sym_Path_2))
                                          {
                                            w_8 = ATgetArgument(v_8, 0);
                                            t_8 = ATgetArgument(v_8, 1);
                                            {
                                              ATerm z_8 = NULL;
                                              ATerm a_9 = NULL;
                                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_8)), term_h_10);
                                              {
                                                t = concat_strings_0(t);
                                                {
                                                  a_9 = t;
                                                  if(((z_8 != NULL) && (z_8 != a_9)))
                                                    _fail(a_9);
                                                  else
                                                    z_8 = a_9;
                                                }
                                              }
                                              t = (ATerm) ATmakeAppl(sym_Path_2, not_null(z_8), not_null(t_8));
                                            }
                                          }
                                        else
                                          {
                                            if(match_cons(v_8, sym_Path1_1))
                                              {
                                                w_8 = ATgetArgument(v_8, 0);
                                                {
                                                  ATerm c_9 = NULL;
                                                  ATerm d_9 = NULL;
                                                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_8)), term_h_10);
                                                  {
                                                    t = concat_strings_0(t);
                                                    {
                                                      d_9 = t;
                                                      if(((c_9 != NULL) && (c_9 != d_9)))
                                                        _fail(d_9);
                                                      else
                                                        c_9 = d_9;
                                                    }
                                                  }
                                                  t = (ATerm) ATmakeAppl(sym_Path1_1, not_null(c_9));
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
    t = try_1(t, h_0);
    return(t);
  }
  t = topdown_1(t, f_0);
  return(t);
}
ATerm table_getlist_0 (ATerm t)
{
  ATerm l_9 = NULL;
  l_9 = t;
  {
    t = table_keys_0(t);
    {
      ATerm n_0 (ATerm t)
      {
        ATerm n_9 = NULL;
        ATerm p_9 = NULL;
        n_9 = t;
        {
          ATerm q_9 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_9), not_null(n_9));
          {
            t = table_get_0(t);
            {
              q_9 = t;
              if(((p_9 != NULL) && (p_9 != q_9)))
                _fail(q_9);
              else
                p_9 = q_9;
            }
          }
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_9), not_null(p_9));
        }
        return(t);
      }
      t = map_1(t, n_0);
    }
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm u_9 (ATerm t)
  {
    ATerm j_10 = t;
    int m_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_70(t);
        ;
        LocalPopChoice(m_10);
      }
    else
      {
        t = j_10;
        t = _one(t, u_9);
      }
    return(t);
  }
  t = u_9(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm y_9 = NULL,z_9 = NULL,a_10 = NULL;
  y_9 = t;
  x_9 :
  if(match_cons(y_9, sym__2))
    {
      z_9 = ATgetArgument(y_9, 0);
      a_10 = ATgetArgument(y_9, 1);
      {
        ATerm n_10;
        n_10 = t;
        {
          t = not_null(a_10);
          {
            ATerm o_0 (ATerm t)
            {
              ATerm d_10 = NULL;
              d_10 = t;
              if(((z_9 != NULL) && (z_9 != d_10)))
                _fail(d_10);
              else
                z_9 = d_10;
              return(t);
            }
            t = oncetd_1(t, o_0);
          }
        }
        t = n_10;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm i_10 = NULL;
  ATerm k_10 = NULL;
  i_10 = t;
  {
    ATerm l_10 = NULL;
    t = get_options_0(t);
    {
      l_10 = t;
      {
        if(((k_10 != NULL) && (k_10 != l_10)))
          _fail(l_10);
        else
          k_10 = l_10;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_10), not_null(k_10));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_q_8;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm j_90 (ATerm))
{
  ATerm o_10;
  o_10 = t;
  {
    t = term_q_8;
    {
      t = j_90(t);
      t = check_option_0(t);
    }
  }
  t = o_10;
  return(t);
}
ATerm table_remove_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  ATerm v_10;
  v_10 = t;
  {
    ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL;
    s_10 = t;
    p_10 :
    if(match_cons(s_10, sym__2))
      {
        t_10 = ATgetArgument(s_10, 0);
        u_10 = ATgetArgument(s_10, 1);
        {
          if(((q_10 != NULL) && (q_10 != t_10)))
            _fail(t_10);
          else
            q_10 = t_10;
          {
            if(((r_10 != NULL) && (r_10 != u_10)))
              _fail(u_10);
            else
              r_10 = u_10;
            t = SSL_table_remove(not_null(q_10), not_null(r_10));
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_10;
  return(t);
}
ATerm prune_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm x_10 = NULL;
    ATerm y_10 = NULL;
    y_10 = t;
    if(((x_10 != NULL) && (x_10 != y_10)))
      _fail(y_10);
    else
      x_10 = y_10;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(x_10));
      t = table_remove_0(t);
    }
    return(t);
  }
  t = map_1(t, p_0);
  return(t);
}
ATerm patch_0 (ATerm t)
{
  ATerm i_11 = NULL,j_11 = NULL,k_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym__2))
    {
      j_11 = ATgetArgument(i_11, 0);
      k_11 = ATgetArgument(i_11, 1);
      {
        t = not_null(j_11);
        {
          ATerm q_0 (ATerm t)
          {
            ATerm n_11 = NULL;
            ATerm p_11 = NULL;
            n_11 = t;
            {
              ATerm q_11 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(n_11));
              {
                t = table_get_0(t);
                {
                  q_11 = t;
                  if(((p_11 != NULL) && (p_11 != q_11)))
                    _fail(q_11);
                  else
                    p_11 = q_11;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, term_w_10, not_null(n_11), not_null(p_11));
                t = table_put_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, q_0);
          {
            t = not_null(k_11);
            {
              ATerm r_0 (ATerm t)
              {
                ATerm r_11 = NULL;
                ATerm x_11 = NULL;
                r_11 = t;
                {
                  ATerm a_11;
                  a_11 = t;
                  {
                    ATerm v_11 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(r_11));
                    {
                      t = table_get_0(t);
                      {
                        ATerm s_0 (ATerm t)
                        {
                          ATerm t_11 = NULL;
                          ATerm u_11 = NULL;
                          u_11 = t;
                          if(((t_11 != NULL) && (t_11 != u_11)))
                            _fail(u_11);
                          else
                            t_11 = u_11;
                          t = (ATerm) ATmakeAppl(sym_Patched_1, not_null(t_11));
                          return(t);
                        }
                        t = _2(t, s_0, _id);
                        {
                          ATerm w_11 = NULL;
                          w_11 = t;
                          if(((v_11 != NULL) && (v_11 != w_11)))
                            _fail(w_11);
                          else
                            v_11 = w_11;
                          {
                            t = (ATerm) ATmakeAppl(sym__3, term_w_10, (ATerm)ATmakeAppl(sym_Patched_1, not_null(r_11)), not_null(v_11));
                            t = table_put_0(t);
                          }
                        }
                      }
                    }
                  }
                  t = a_11;
                  {
                    ATerm y_11 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(r_11));
                    {
                      t = table_get_0(t);
                      {
                        y_11 = t;
                        if(((x_11 != NULL) && (x_11 != y_11)))
                          _fail(y_11);
                        else
                          x_11 = y_11;
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__3, term_w_10, not_null(r_11), not_null(x_11));
                      t = table_put_0(t);
                    }
                  }
                }
                return(t);
              }
              t = map_1(t, r_0);
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
ATerm concat_strings_0 (ATerm t)
{
  t = map_1(t, explode_string_0);
  {
    t = concat_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm h_12 = NULL;
  h_12 = t;
  t = SSL_int_to_string(not_null(h_12));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm r_12 = NULL,s_12 = NULL,t_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym_Path1_1))
    {
      s_12 = ATgetArgument(r_12, 0);
      t = not_null(s_12);
    }
  else
    {
      if(match_cons(r_12, sym_Path_2))
        {
          s_12 = ATgetArgument(r_12, 0);
          t_12 = ATgetArgument(r_12, 1);
          {
            ATerm b_13 = NULL,j_13 = NULL;
            t = not_null(t_12);
            {
              ATerm t_0 (ATerm t)
              {
                ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
                c_13 = t;
                o_12 :
                if(match_cons(c_13, sym_selector_2))
                  {
                    d_13 = ATgetArgument(c_13, 0);
                    e_13 = ATgetArgument(c_13, 1);
                    {
                      ATerm h_13 = NULL;
                      ATerm i_13 = NULL;
                      t = not_null(d_13);
                      {
                        t = int_to_string_0(t);
                        {
                          i_13 = t;
                          if(((h_13 != NULL) && (h_13 != i_13)))
                            _fail(i_13);
                          else
                            h_13 = i_13;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_13)), term_c_11), not_null(h_13)), term_b_11);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, t_0);
              {
                t = concat_0(t);
                {
                  j_13 = t;
                  {
                    if(((b_13 != NULL) && (b_13 != j_13)))
                      _fail(j_13);
                    else
                      b_13 = j_13;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(b_13)), not_null(s_12));
                      t = concat_strings_0(t);
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
  return(t);
}
ATerm diff_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm r_13 = NULL,s_13 = NULL,t_13 = NULL;
  r_13 = t;
  q_13 :
  if(match_cons(r_13, sym__2))
    {
      s_13 = ATgetArgument(r_13, 0);
      t_13 = ATgetArgument(r_13, 1);
      {
        t = not_null(s_13);
        {
          ATerm x_13 (ATerm t)
          {
            ATerm d_11 = t;
            int e_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
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
                      ATerm u_0 (ATerm t)
                      {
                        t = not_null(t_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, u_78, u_0);
                      t = x_13(t);
                      ;
                      LocalPopChoice(g_11);
                    }
                  else
                    {
                      t = f_11;
                      t = Cons_2(t, _id, x_13);
                    }
                }
              }
            return(t);
          }
          t = x_13(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfShift_0 (ATerm t)
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  b_14 = t;
  z_13 :
  if(match_cons(b_14, sym__2))
    {
      c_14 = ATgetArgument(b_14, 0);
      d_14 = ATgetArgument(b_14, 1);
      a_14 :
      if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
        {
          e_14 = ATgetFirst((ATermList) d_14);
          f_14 = (ATerm) ATgetNext((ATermList) d_14);
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(c_14)), not_null(e_14)), not_null(f_14));
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
ATerm Zip3_0 (ATerm t)
{
  ATerm m_14 = NULL,n_14 = NULL,o_14 = NULL;
  m_14 = t;
  l_14 :
  if(match_cons(m_14, sym__2))
    {
      n_14 = ATgetArgument(m_14, 0);
      o_14 = ATgetArgument(m_14, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_14)), not_null(n_14));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Zip2_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL;
  w_14 = t;
  t_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      a_15 = ATgetArgument(w_14, 1);
      u_14 :
      if(((ATgetType(x_14) == AT_LIST) && !(ATisEmpty(x_14))))
        {
          y_14 = ATgetFirst((ATermList) x_14);
          z_14 = (ATerm) ATgetNext((ATermList) x_14);
          v_14 :
          if(((ATgetType(a_15) == AT_LIST) && !(ATisEmpty(a_15))))
            {
              b_15 = ATgetFirst((ATermList) a_15);
              c_15 = (ATerm) ATgetNext((ATermList) a_15);
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_14), not_null(b_15)), (ATerm) ATmakeAppl(sym__2, not_null(z_14), not_null(c_15)));
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
  return(t);
}
ATerm Zip1_0 (ATerm t)
{
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  j_15 :
  if(match_cons(m_15, sym__2))
    {
      n_15 = ATgetArgument(m_15, 0);
      o_15 = ATgetArgument(m_15, 1);
      k_15 :
      if(((ATgetType(n_15) == AT_LIST) && ATisEmpty(n_15)))
        {
          l_15 :
          if(((ATgetType(o_15) == AT_LIST) && ATisEmpty(o_15)))
            {
              t = (ATerm) ATempty;
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
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm), ATerm d_77 (ATerm))
{
  ATerm q_15 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_77(t);
        ;
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          t = b_77(t);
          {
            t = _2(t, d_77, q_15);
            t = c_77(t);
          }
        }
      }
    return(t);
  }
  t = q_15(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm f_77 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, f_77);
  return(t);
}
ATerm UfDecompose_0 (ATerm t)
{
  ATerm b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL;
  b_16 = t;
  z_15 :
  if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
    {
      c_16 = ATgetFirst((ATermList) b_16);
      f_16 = (ATerm) ATgetNext((ATermList) b_16);
      a_16 :
      if(match_cons(c_16, sym__2))
        {
          d_16 = ATgetArgument(c_16, 0);
          e_16 = ATgetArgument(c_16, 1);
          {
            ATerm j_16 = NULL,k_16 = NULL,q_16 = NULL,w_16 = NULL;
            ATerm o_11;
            o_11 = t;
            {
              ATerm l_16 = NULL;
              ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL;
              t = not_null(e_16);
              {
                l_16 = t;
                {
                  t = SSL_explode_term(not_null(l_16));
                  {
                    n_16 = t;
                    u_15 :
                    if(match_cons(n_16, sym__2))
                      {
                        o_16 = ATgetArgument(n_16, 0);
                        p_16 = ATgetArgument(n_16, 1);
                        {
                          if(((j_16 != NULL) && (j_16 != o_16)))
                            _fail(o_16);
                          else
                            j_16 = o_16;
                          if(((k_16 != NULL) && (k_16 != p_16)))
                            _fail(p_16);
                          else
                            k_16 = p_16;
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
            t = o_11;
            {
              ATerm s_11;
              s_11 = t;
              {
                ATerm r_16 = NULL;
                ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL;
                t = not_null(d_16);
                {
                  r_16 = t;
                  {
                    t = SSL_explode_term(not_null(r_16));
                    {
                      t_16 = t;
                      x_15 :
                      if(match_cons(t_16, sym__2))
                        {
                          u_16 = ATgetArgument(t_16, 0);
                          v_16 = ATgetArgument(t_16, 1);
                          {
                            if(((j_16 != NULL) && (j_16 != u_16)))
                              _fail(u_16);
                            else
                              j_16 = u_16;
                            if(((q_16 != NULL) && (q_16 != v_16)))
                              _fail(v_16);
                            else
                              q_16 = v_16;
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
              t = s_11;
              {
                ATerm x_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_16), not_null(k_16));
                {
                  t = zip_1(t, _id);
                  {
                    x_16 = t;
                    if(((w_16 != NULL) && (w_16 != x_16)))
                      _fail(x_16);
                    else
                      w_16 = x_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(w_16), not_null(f_16));
                  t = conc_0(t);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UfIdem_0 (ATerm t)
{
  ATerm h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL;
  h_17 = t;
  f_17 :
  if(((ATgetType(h_17) == AT_LIST) && !(ATisEmpty(h_17))))
    {
      i_17 = ATgetFirst((ATermList) h_17);
      l_17 = (ATerm) ATgetNext((ATermList) h_17);
      g_17 :
      if(match_cons(i_17, sym__2))
        {
          j_17 = ATgetArgument(i_17, 0);
          k_17 = ATgetArgument(i_17, 1);
          {
            ATerm n_17 = NULL;
            if(((j_17 != NULL) && (j_17 != k_17)))
              _fail(k_17);
            else
              j_17 = k_17;
            {
              if(((n_17 != NULL) && (n_17 != l_17)))
                _fail(l_17);
              else
                n_17 = l_17;
              t = not_null(n_17);
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
ATerm while_not_2 (ATerm t, ATerm z_68 (ATerm), ATerm a_69 (ATerm))
{
  ATerm p_17 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_68(t);
        ;
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        {
          t = a_69(t);
          t = p_17(t);
        }
      }
    return(t);
  }
  t = p_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm c_69 (ATerm), ATerm d_69 (ATerm), ATerm e_69 (ATerm))
{
  t = c_69(t);
  t = while_not_2(t, d_69, e_69);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm b_12 = t;
  int c_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_0 (ATerm t)
      {
        ATerm r_17 = NULL;
        r_17 = t;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATempty, not_null(r_17));
        return(t);
      }
      ATerm w_0 (ATerm t)
      {
        t = _2(t, _id, Nil_0);
        return(t);
      }
      ATerm x_0 (ATerm t)
      {
        ATerm d_12 = t;
        int e_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm f_12 = t;
              int g_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(g_12);
                }
              else
                {
                  t = f_12;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, y_0);
            ;
            LocalPopChoice(e_12);
          }
        else
          {
            t = d_12;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, v_0, w_0, x_0);
      ;
      LocalPopChoice(c_12);
    }
  else
    {
      t = b_12;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm z_17 = NULL,a_18 = NULL;
  z_17 = t;
  y_17 :
  if(match_cons(z_17, sym_Arg_1))
    {
      a_18 = ATgetArgument(z_17, 0);
      {
        ATerm d_18 = NULL,f_18 = NULL;
        ATerm e_18 = NULL;
        t = SSLgetAnnotations(not_null(z_17));
        {
          e_18 = t;
          if(((d_18 != NULL) && (d_18 != e_18)))
            _fail(e_18);
          else
            d_18 = e_18;
        }
        {
          t = not_null(a_18);
          {
            ATerm h_18 = NULL;
            t = o_65(t);
            {
              f_18 = t;
              {
                ATerm i_18 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(f_18)), not_null(d_18));
                {
                  i_18 = t;
                  if(((h_18 != NULL) && (h_18 != i_18)))
                    _fail(i_18);
                  else
                    h_18 = i_18;
                }
                t = not_null(h_18);
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
ATerm S_1 (ATerm t, ATerm r_65 (ATerm))
{
  ATerm s_18 = NULL,t_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym_S_1))
    {
      t_18 = ATgetArgument(s_18, 0);
      {
        ATerm w_18 = NULL,y_18 = NULL;
        ATerm x_18 = NULL;
        t = SSLgetAnnotations(not_null(s_18));
        {
          x_18 = t;
          if(((w_18 != NULL) && (w_18 != x_18)))
            _fail(x_18);
          else
            w_18 = x_18;
        }
        {
          t = not_null(t_18);
          {
            ATerm a_19 = NULL;
            t = r_65(t);
            {
              y_18 = t;
              {
                ATerm b_19 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(y_18)), not_null(w_18));
                {
                  b_19 = t;
                  if(((a_19 != NULL) && (a_19 != b_19)))
                    _fail(b_19);
                  else
                    a_19 = b_19;
                }
                t = not_null(a_19);
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
ATerm union_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym__2))
    {
      j_19 = ATgetArgument(i_19, 0);
      k_19 = ATgetArgument(i_19, 1);
      {
        t = not_null(j_19);
        {
          ATerm o_19 (ATerm t)
          {
            ATerm i_12 = t;
            int j_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(k_19);
                ;
                LocalPopChoice(j_12);
              }
            else
              {
                t = i_12;
                {
                  ATerm k_12 = t;
                  int l_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_0 (ATerm t)
                      {
                        t = not_null(k_19);
                        return(t);
                      }
                      t = HdMember_p__2(t, y_78, z_0);
                      t = o_19(t);
                      ;
                      LocalPopChoice(l_12);
                    }
                  else
                    {
                      t = k_12;
                      t = Cons_2(t, _id, o_19);
                    }
                }
              }
            return(t);
          }
          t = o_19(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  t = union_1(t, eq_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm y_80 (ATerm), ATerm z_80 (ATerm), ATerm a_81 (ATerm))
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_80(t);
      ;
      LocalPopChoice(n_12);
    }
  else
    {
      t = m_12;
      {
        ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
        t_19 = t;
        s_19 :
        if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
          {
            u_19 = ATgetFirst((ATermList) t_19);
            v_19 = (ATerm) ATgetNext((ATermList) t_19);
            {
              ATerm y_19 = NULL,a_20 = NULL;
              ATerm p_12;
              p_12 = t;
              {
                ATerm z_19 = NULL;
                t = not_null(u_19);
                {
                  t = a_81(t);
                  {
                    z_19 = t;
                    if(((y_19 != NULL) && (y_19 != z_19)))
                      _fail(z_19);
                    else
                      y_19 = z_19;
                  }
                }
              }
              t = p_12;
              {
                ATerm b_20 = NULL;
                t = not_null(v_19);
                {
                  t = foldr_3(t, y_80, z_80, a_81);
                  {
                    b_20 = t;
                    if(((a_20 != NULL) && (a_20 != b_20)))
                      _fail(b_20);
                    else
                      a_20 = b_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), not_null(a_20));
                  t = z_80(t);
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
  return(t);
}
ATerm crush_3 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm), ATerm t_84 (ATerm))
{
  ATerm j_20 = NULL;
  ATerm l_20 = NULL;
  j_20 = t;
  {
    ATerm m_20 = NULL;
    ATerm o_20 = NULL,p_20 = NULL,q_20 = NULL;
    t = not_null(j_20);
    {
      m_20 = t;
      {
        t = SSL_explode_term(not_null(m_20));
        {
          o_20 = t;
          i_20 :
          if(match_cons(o_20, sym__2))
            {
              p_20 = ATgetArgument(o_20, 0);
              q_20 = ATgetArgument(o_20, 1);
              if(((l_20 != NULL) && (l_20 != q_20)))
                _fail(q_20);
              else
                l_20 = q_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(l_20);
      t = foldr_3(t, r_84, s_84, t_84);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_20 = NULL;
      ATerm w_20 = NULL;
      t = u_79(t);
      {
        w_20 = t;
        if(((v_20 != NULL) && (v_20 != w_20)))
          _fail(w_20);
        else
          v_20 = w_20;
      }
      t = (ATerm) ATinsert(ATempty, not_null(v_20));
      ;
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        ATerm a_1 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm b_1 (ATerm t)
        {
          t = collect_om_1(t, u_79);
          return(t);
        }
        t = crush_3(t, a_1, union_0, b_1);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm v_79 (ATerm))
{
  t = collect_om_1(t, v_79);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm e_21 = NULL;
  ATerm g_21 = NULL,h_21 = NULL;
  e_21 = t;
  {
    ATerm i_21 = NULL;
    ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL,n_21 = NULL,o_21 = NULL;
    t = not_null(e_21);
    {
      i_21 = t;
      {
        t = SSL_explode_term(not_null(i_21));
        {
          k_21 = t;
          b_21 :
          if(match_cons(k_21, sym__2))
            {
              l_21 = ATgetArgument(k_21, 0);
              m_21 = ATgetArgument(k_21, 1);
              c_21 :
              if(match_string(l_21, ""))
                {
                  d_21 :
                  if(((ATgetType(m_21) == AT_LIST) && !(ATisEmpty(m_21))))
                    {
                      n_21 = ATgetFirst((ATermList) m_21);
                      o_21 = (ATerm) ATgetNext((ATermList) m_21);
                      {
                        if(((h_21 != NULL) && (h_21 != n_21)))
                          _fail(n_21);
                        else
                          h_21 = n_21;
                        if(((g_21 != NULL) && (g_21 != o_21)))
                          _fail(o_21);
                        else
                          g_21 = o_21;
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
          else
            {
              _fail(t);
            }
        }
      }
    }
    t = not_null(h_21);
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm c_23 = NULL,f_23 = NULL,g_23 = NULL;
  c_23 = t;
  a_23 :
  if(match_cons(c_23, sym__2))
    {
      f_23 = ATgetArgument(c_23, 0);
      g_23 = ATgetArgument(c_23, 1);
      if(((f_23 != NULL) && (f_23 != g_23)))
        _fail(g_23);
      else
        f_23 = g_23;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm))
{
  ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL;
  m_23 = t;
  l_23 :
  if(((ATgetType(m_23) == AT_LIST) && !(ATisEmpty(m_23))))
    {
      n_23 = ATgetFirst((ATermList) m_23);
      o_23 = (ATerm) ATgetNext((ATermList) m_23);
      {
        t = d_79(t);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm r_23 = NULL;
            r_23 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(n_23), not_null(r_23));
              t = c_79(t);
            }
            return(t);
          }
          t = fetch_1(t, c_1);
        }
        t = not_null(o_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_1 (ATerm t, ATerm s_78 (ATerm))
{
  ATerm z_23 = NULL,a_24 = NULL,b_24 = NULL;
  z_23 = t;
  y_23 :
  if(match_cons(z_23, sym__2))
    {
      a_24 = ATgetArgument(z_23, 0);
      b_24 = ATgetArgument(z_23, 1);
      {
        t = not_null(a_24);
        {
          ATerm j_24 (ATerm t)
          {
            ATerm w_12 = t;
            int x_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
                LocalPopChoice(x_12);
              }
            else
              {
                t = w_12;
                {
                  ATerm y_12 = t;
                  int z_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_13;
                      a_13 = t;
                      {
                        ATerm d_1 (ATerm t)
                        {
                          t = not_null(b_24);
                          return(t);
                        }
                        t = HdMember_p__2(t, s_78, d_1);
                      }
                      t = a_13;
                      t = Cons_2(t, _id, j_24);
                      ;
                      LocalPopChoice(z_12);
                    }
                  else
                    {
                      t = y_12;
                      {
                        ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
                        e_24 = t;
                        x_23 :
                        if(((ATgetType(e_24) == AT_LIST) && !(ATisEmpty(e_24))))
                          {
                            f_24 = ATgetFirst((ATermList) e_24);
                            g_24 = (ATerm) ATgetNext((ATermList) e_24);
                            {
                              t = not_null(g_24);
                              t = j_24(t);
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
          t = j_24(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isect_0 (ATerm t)
{
  t = isect_1(t, eq_0);
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm r_24 = NULL;
  r_24 = t;
  t = SSL_table_keys(not_null(r_24));
  return(t);
}
ATerm table_rename_0 (ATerm t)
{
  ATerm x_24 = NULL,y_24 = NULL,z_24 = NULL;
  x_24 = t;
  v_24 :
  if(match_cons(x_24, sym__2))
    {
      y_24 = ATgetArgument(x_24, 0);
      z_24 = ATgetArgument(x_24, 1);
      t = SSL_table_rename(not_null(y_24), not_null(z_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm mk_key_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL,r_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym_Path1_1))
    {
      q_25 = ATgetArgument(p_25, 0);
      t = (ATerm) ATinsert(ATempty, not_null(q_25));
    }
  else
    {
      if(match_cons(p_25, sym_Path_2))
        {
          q_25 = ATgetArgument(p_25, 0);
          r_25 = ATgetArgument(p_25, 1);
          {
            ATerm z_25 = NULL,h_26 = NULL;
            t = not_null(r_25);
            {
              ATerm e_1 (ATerm t)
              {
                ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL;
                a_26 = t;
                m_25 :
                if(match_cons(a_26, sym_selector_2))
                  {
                    b_26 = ATgetArgument(a_26, 0);
                    c_26 = ATgetArgument(a_26, 1);
                    t = not_null(b_26);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, e_1);
              {
                h_26 = t;
                {
                  if(((z_25 != NULL) && (z_25 != h_26)))
                    _fail(h_26);
                  else
                    z_25 = h_26;
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_25)), not_null(q_25));
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
  return(t);
}
ATerm StoreEntry_0 (ATerm t)
{
  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL;
  q_26 = t;
  p_26 :
  if(match_cons(q_26, sym_PP_Entry_2))
    {
      r_26 = ATgetArgument(q_26, 0);
      s_26 = ATgetArgument(q_26, 1);
      {
        ATerm v_26 = NULL,x_26 = NULL;
        ATerm w_26 = NULL;
        t = not_null(r_26);
        {
          t = mk_key_0(t);
          {
            w_26 = t;
            if(((v_26 != NULL) && (v_26 != w_26)))
              _fail(w_26);
            else
              v_26 = w_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_f_13, not_null(v_26), (ATerm) ATmakeAppl(sym__2, not_null(r_26), not_null(s_26)));
          {
            t = table_put_0(t);
            {
              ATerm y_26 = NULL;
              t = not_null(r_26);
              {
                t = path_to_string_0(t);
                {
                  y_26 = t;
                  if(((x_26 != NULL) && (x_26 != y_26)))
                    _fail(y_26);
                  else
                    x_26 = y_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), not_null(s_26));
                {
                  ATerm f_1 (ATerm t)
                  {
                    t = term_g_13;
                    return(t);
                  }
                  t = notify_1(t, f_1);
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
ATerm selector_2 (ATerm t, ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  ATerm m_27 = NULL,n_27 = NULL,o_27 = NULL;
  m_27 = t;
  l_27 :
  if(match_cons(m_27, sym_selector_2))
    {
      n_27 = ATgetArgument(m_27, 0);
      o_27 = ATgetArgument(m_27, 1);
      {
        ATerm u_27 = NULL,w_27 = NULL;
        ATerm v_27 = NULL;
        t = SSLgetAnnotations(not_null(m_27));
        {
          v_27 = t;
          if(((u_27 != NULL) && (u_27 != v_27)))
            _fail(v_27);
          else
            u_27 = v_27;
        }
        {
          t = not_null(n_27);
          {
            ATerm y_27 = NULL;
            t = m_65(t);
            {
              w_27 = t;
              {
                t = not_null(o_27);
                {
                  ATerm a_28 = NULL;
                  t = n_65(t);
                  {
                    y_27 = t;
                    {
                      ATerm b_28 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(w_27), not_null(y_27)), not_null(u_27));
                      {
                        b_28 = t;
                        if(((a_28 != NULL) && (a_28 != b_28)))
                          _fail(b_28);
                        else
                          a_28 = b_28;
                      }
                      t = not_null(a_28);
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
ATerm UnEscape_tab_0 (ATerm t)
{
  ATerm m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL;
  m_28 = t;
  i_28 :
  if(((ATgetType(m_28) == AT_LIST) && !(ATisEmpty(m_28))))
    {
      n_28 = ATgetFirst((ATermList) m_28);
      o_28 = (ATerm) ATgetNext((ATermList) m_28);
      j_28 :
      if(match_int(n_28, 92))
        {
          k_28 :
          if(((ATgetType(o_28) == AT_LIST) && !(ATisEmpty(o_28))))
            {
              p_28 = ATgetFirst((ATermList) o_28);
              q_28 = (ATerm) ATgetNext((ATermList) o_28);
              l_28 :
              if(match_int(p_28, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_28)), term_k_13);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnEscape_linefeed_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL,b_29 = NULL,c_29 = NULL;
  y_28 = t;
  u_28 :
  if(((ATgetType(y_28) == AT_LIST) && !(ATisEmpty(y_28))))
    {
      z_28 = ATgetFirst((ATermList) y_28);
      a_29 = (ATerm) ATgetNext((ATermList) y_28);
      v_28 :
      if(match_int(z_28, 92))
        {
          w_28 :
          if(((ATgetType(a_29) == AT_LIST) && !(ATisEmpty(a_29))))
            {
              b_29 = ATgetFirst((ATermList) a_29);
              c_29 = (ATerm) ATgetNext((ATermList) a_29);
              x_28 :
              if(match_int(b_29, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_29)), term_v_7);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnEscape_backslash_0 (ATerm t)
{
  ATerm q_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  q_29 = t;
  g_29 :
  if(((ATgetType(q_29) == AT_LIST) && !(ATisEmpty(q_29))))
    {
      u_29 = ATgetFirst((ATermList) q_29);
      v_29 = (ATerm) ATgetNext((ATermList) q_29);
      h_29 :
      if(match_int(u_29, 92))
        {
          i_29 :
          if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
            {
              w_29 = ATgetFirst((ATermList) v_29);
              x_29 = (ATerm) ATgetNext((ATermList) v_29);
              p_29 :
              if(match_int(w_29, 92))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_29)), term_b_9);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnEscape_double_quote_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL,i_30 = NULL,j_30 = NULL;
  f_30 = t;
  b_30 :
  if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
    {
      g_30 = ATgetFirst((ATermList) f_30);
      h_30 = (ATerm) ATgetNext((ATermList) f_30);
      c_30 :
      if(match_int(g_30, 92))
        {
          d_30 :
          if(((ATgetType(h_30) == AT_LIST) && !(ATisEmpty(h_30))))
            {
              i_30 = ATgetFirst((ATermList) h_30);
              j_30 = (ATerm) ATgetNext((ATermList) h_30);
              e_30 :
              if(match_int(i_30, 34))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_30)), term_y_8);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm UnEscape_0 (ATerm t)
{
  ATerm l_13 = t;
  int m_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_double_quote_0(t);
      ;
      LocalPopChoice(m_13);
    }
  else
    {
      t = l_13;
      {
        ATerm n_13 = t;
        int o_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UnEscape_backslash_0(t);
            ;
            LocalPopChoice(o_13);
          }
        else
          {
            t = n_13;
            {
              ATerm p_13 = t;
              int u_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UnEscape_linefeed_0(t);
                  ;
                  LocalPopChoice(u_13);
                }
              else
                {
                  t = p_13;
                  t = UnEscape_tab_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm unescape_chars_0 (ATerm t)
{
  t = try_1(t, UnEscape_0);
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, unescape_chars_0);
        ;
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        t = Nil_0(t);
      }
  }
  return(t);
}
ATerm unescape_0 (ATerm t)
{
  t = string_as_chars_1(t, unescape_chars_0);
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm n_30 (ATerm t)
  {
    ATerm y_13 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = z_75(t);
        ;
        LocalPopChoice(g_14);
      }
    else
      {
        t = y_13;
        t = Cons_2(t, _id, n_30);
      }
    return(t);
  }
  t = n_30(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm u_30 = NULL,v_30 = NULL,w_30 = NULL;
  u_30 = t;
  t_30 :
  if(((ATgetType(u_30) == AT_LIST) && !(ATisEmpty(u_30))))
    {
      v_30 = ATgetFirst((ATermList) u_30);
      w_30 = (ATerm) ATgetNext((ATermList) u_30);
      t = not_null(w_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
  c_31 = t;
  a_31 :
  if(((ATgetType(c_31) == AT_LIST) && !(ATisEmpty(c_31))))
    {
      d_31 = ATgetFirst((ATermList) c_31);
      e_31 = (ATerm) ATgetNext((ATermList) c_31);
      b_31 :
      if(((ATgetType(e_31) == AT_LIST) && ATisEmpty(e_31)))
        {
          t = not_null(d_31);
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
ATerm last_0 (ATerm t)
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  j_31 :
  if(((ATgetType(k_31) == AT_LIST) && !(ATisEmpty(k_31))))
    {
      l_31 = ATgetFirst((ATermList) k_31);
      m_31 = (ATerm) ATgetNext((ATermList) k_31);
      t = not_null(l_31);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm x_83 (ATerm))
{
  ATerm j_14;
  j_14 = t;
  {
    t = Hd_0(t);
    t = x_83(t);
  }
  t = j_14;
  {
    ATerm k_14;
    k_14 = t;
    {
      t = last_0(t);
      t = x_83(t);
    }
    t = k_14;
    {
      t = Tl_0(t);
      t = init_0(t);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm q_31 = NULL;
    q_31 = t;
    p_31 :
    if(!(match_int(q_31, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, g_1);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm i_84 (ATerm))
{
  t = explode_string_0(t);
  {
    t = i_84(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, un_double_quote_chars_0);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm d_67 (ATerm), ATerm e_67 (ATerm))
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL;
  x_31 = t;
  w_31 :
  if(match_cons(x_31, sym_SOpt_2))
    {
      y_31 = ATgetArgument(x_31, 0);
      z_31 = ATgetArgument(x_31, 1);
      {
        ATerm f_32 = NULL,h_32 = NULL;
        ATerm g_32 = NULL;
        t = SSLgetAnnotations(not_null(x_31));
        {
          g_32 = t;
          if(((f_32 != NULL) && (f_32 != g_32)))
            _fail(g_32);
          else
            f_32 = g_32;
        }
        {
          t = not_null(y_31);
          {
            ATerm j_32 = NULL;
            t = d_67(t);
            {
              h_32 = t;
              {
                t = not_null(z_31);
                {
                  ATerm l_32 = NULL;
                  t = e_67(t);
                  {
                    j_32 = t;
                    {
                      ATerm m_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(h_32), not_null(j_32)), not_null(f_32));
                      {
                        m_32 = t;
                        if(((l_32 != NULL) && (l_32 != m_32)))
                          _fail(m_32);
                        else
                          l_32 = m_32;
                      }
                      t = not_null(l_32);
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
ATerm Arg2_2 (ATerm t, ATerm p_65 (ATerm), ATerm q_65 (ATerm))
{
  ATerm y_32 = NULL,z_32 = NULL,a_33 = NULL;
  y_32 = t;
  x_32 :
  if(match_cons(y_32, sym_Arg2_2))
    {
      z_32 = ATgetArgument(y_32, 0);
      a_33 = ATgetArgument(y_32, 1);
      {
        ATerm e_33 = NULL,g_33 = NULL;
        ATerm f_33 = NULL;
        t = SSLgetAnnotations(not_null(y_32));
        {
          f_33 = t;
          if(((e_33 != NULL) && (e_33 != f_33)))
            _fail(f_33);
          else
            e_33 = f_33;
        }
        {
          t = not_null(z_32);
          {
            ATerm i_33 = NULL;
            t = p_65(t);
            {
              g_33 = t;
              {
                t = not_null(a_33);
                {
                  ATerm k_33 = NULL;
                  t = q_65(t);
                  {
                    i_33 = t;
                    {
                      ATerm l_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, not_null(g_33), not_null(i_33)), not_null(e_33));
                      {
                        l_33 = t;
                        if(((k_33 != NULL) && (k_33 != l_33)))
                          _fail(l_33);
                        else
                          k_33 = l_33;
                      }
                      t = not_null(k_33);
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
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm p_14 = t;
  int q_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1(t, string_to_int_0);
      ;
      LocalPopChoice(q_14);
    }
  else
    {
      t = p_14;
      {
        ATerm r_14 = t;
        int s_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg2_2(t, string_to_int_0, string_to_int_0);
            ;
            LocalPopChoice(s_14);
          }
        else
          {
            t = r_14;
            {
              ATerm d_15 = t;
              int e_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2(t, _id, _id);
                  ;
                  LocalPopChoice(e_15);
                }
              else
                {
                  t = d_15;
                  {
                    ATerm f_15 = t;
                    int g_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_1 (ATerm t)
                        {
                          t = un_double_quote_0(t);
                          t = unescape_0(t);
                          return(t);
                        }
                        t = S_1(t, h_1);
                        ;
                        LocalPopChoice(g_15);
                      }
                    else
                      {
                        t = f_15;
                        t = selector_2(t, string_to_int_0, _id);
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm i_69 (ATerm))
{
  t = i_69(t);
  {
    ATerm i_1 (ATerm t)
    {
      t = topdown_1(t, i_69);
      return(t);
    }
    t = _all(t, i_1);
  }
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm j_1 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, j_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym_PP_Table_1))
    {
      u_33 = ATgetArgument(t_33, 0);
      {
        t = not_null(u_33);
        {
          t = reverse_0(t);
          {
            ATerm k_1 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, k_1);
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
ATerm type_failure_0 (ATerm t)
{
  ATerm h_15 = t;
  int i_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        t = term_p_15;
        return(t);
      }
      t = has_option_1(t, l_1);
      {
        t = (ATerm) ATinsert(ATempty, term_r_15);
        t = fatal_error_0(t);
      }
      ;
      LocalPopChoice(i_15);
    }
  else
    {
      t = h_15;
      {
        t = (ATerm) ATinsert(ATempty, term_s_15);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm i_96 (ATerm))
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  d_34 :
  if(match_cons(f_34, sym__2))
    {
      g_34 = ATgetArgument(f_34, 0);
      h_34 = ATgetArgument(f_34, 1);
      e_34 :
      if(match_string(g_34, "in-type"))
        {
          ATerm j_34 = NULL,k_34 = NULL;
          ATerm t_15;
          t_15 = t;
          {
            ATerm l_34 = NULL;
            ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL,r_34 = NULL;
            t = not_null(h_34);
            {
              l_34 = t;
              {
                t = SSL_explode_term(not_null(l_34));
                {
                  n_34 = t;
                  a_34 :
                  if(match_cons(n_34, sym__2))
                    {
                      o_34 = ATgetArgument(n_34, 0);
                      p_34 = ATgetArgument(n_34, 1);
                      b_34 :
                      if(((ATgetType(p_34) == AT_LIST) && !(ATisEmpty(p_34))))
                        {
                          q_34 = ATgetFirst((ATermList) p_34);
                          r_34 = (ATerm) ATgetNext((ATermList) p_34);
                          c_34 :
                          if(((ATgetType(r_34) == AT_LIST) && ATisEmpty(r_34)))
                            {
                              {
                                if(((k_34 != NULL) && (k_34 != o_34)))
                                  _fail(o_34);
                                else
                                  k_34 = o_34;
                                if(((j_34 != NULL) && (j_34 != q_34)))
                                  _fail(q_34);
                                else
                                  j_34 = q_34;
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
                  else
                    {
                      _fail(t);
                    }
                }
              }
            }
          }
          t = t_15;
          {
            t = not_null(k_34);
            {
              ATerm v_15 = t;
              int w_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_96(t);
                  ;
                  LocalPopChoice(w_15);
                }
              else
                {
                  t = v_15;
                  t = type_failure_0(t);
                }
            }
            t = not_null(j_34);
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
ATerm termid_check_1 (ATerm t, ATerm p_96 (ATerm))
{
  ATerm x_34 = NULL;
  ATerm z_34 = NULL;
  x_34 = t;
  {
    ATerm a_35 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_y_15, not_null(x_34));
    {
      t = InId_1(t, p_96);
      {
        a_35 = t;
        if(((z_34 != NULL) && (z_34 != a_35)))
          _fail(a_35);
        else
          z_34 = a_35;
      }
    }
    t = not_null(z_34);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm g_35 = NULL,h_35 = NULL;
  ATerm n_35 (ATerm t)
  {
    t = SSL_fclose(not_null(h_35));
    return(t);
  }
  h_35 = t;
  f_35 :
  if(match_cons(h_35, sym_Stream_1))
    {
      g_35 = ATgetArgument(h_35, 0);
      {
        ATerm g_16 = t;
        int h_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(g_35));
            ;
            LocalPopChoice(h_16);
          }
        else
          {
            t = g_16;
            t = n_35(t);
          }
      }
    }
  else
    {
      t = n_35(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm q_35 = NULL,r_35 = NULL;
  q_35 = t;
  p_35 :
  if(match_cons(q_35, sym_Stream_1))
    {
      r_35 = ATgetArgument(q_35, 0);
      t = SSL_read_term_from_stream(not_null(r_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym__2))
    {
      y_35 = ATgetArgument(x_35, 0);
      z_35 = ATgetArgument(x_35, 1);
      {
        ATerm c_36 = NULL;
        t = SSL_fopen(not_null(y_35), not_null(z_35));
        {
          ATerm d_36 = NULL;
          d_36 = t;
          if(((c_36 != NULL) && (c_36 != d_36)))
            _fail(d_36);
          else
            c_36 = d_36;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_36));
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdin_stream_0 (ATerm t)
{
  ATerm h_36 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm i_36 = NULL;
    i_36 = t;
    if(((h_36 != NULL) && (h_36 != i_36)))
      _fail(i_36);
    else
      h_36 = i_36;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(h_36));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm l_36 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm m_36 = NULL;
    m_36 = t;
    if(((l_36 != NULL) && (l_36 != m_36)))
      _fail(m_36);
    else
      l_36 = m_36;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(l_36));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm r_36 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm t_36 = NULL;
    t_36 = t;
    if(((r_36 != NULL) && (r_36 != t_36)))
      _fail(t_36);
    else
      r_36 = t_36;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(r_36));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm m_37 = NULL;
  m_37 = t;
  l_37 :
  if(match_cons(m_37, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(m_37, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(m_37, sym_stdin_0))
            {
              t = stdin_stream_0(t);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  u_37 = t;
  t_37 :
  if(match_cons(u_37, sym__2))
    {
      v_37 = ATgetArgument(u_37, 0);
      w_37 = ATgetArgument(u_37, 1);
      {
        ATerm i_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(m_16);
          }
        else
          {
            t = i_16;
            {
              ATerm s_16 = t;
              int y_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm x_37 = NULL,y_37 = NULL;
                    x_37 = t;
                    s_37 :
                    if(match_cons(x_37, sym_Path_1))
                      {
                        y_37 = ATgetArgument(x_37, 0);
                        t = not_null(y_37);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, m_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(y_16);
                }
              else
                {
                  t = s_16;
                  {
                    t = _2(t, is_string_0, _id);
                    t = fopen_0(t);
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
  ATerm g_38 = NULL;
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_38 = NULL;
      ATerm f_38 = NULL;
      f_38 = t;
      if(((e_38 != NULL) && (e_38 != f_38)))
        _fail(f_38);
      else
        e_38 = f_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_38), term_b_17);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      {
        ATerm n_1 (ATerm t)
        {
          t = term_c_17;
          return(t);
        }
        t = debug_1(t, n_1);
        _fail(t);
      }
    }
  {
    ATerm d_17;
    d_17 = t;
    {
      ATerm h_38 = NULL;
      t = read_from_stream_0(t);
      {
        h_38 = t;
        if(((g_38 != NULL) && (g_38 != h_38)))
          _fail(h_38);
        else
          g_38 = h_38;
      }
    }
    t = d_17;
    {
      t = fclose_0(t);
      t = not_null(g_38);
    }
  }
  return(t);
}
ATerm notify_1 (ATerm t, ATerm x_96 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    t = debug_1(t, x_96);
    return(t);
  }
  t = if_verbose1_1(t, o_1);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm m_38 = NULL;
  m_38 = t;
  {
    t = term_f_13;
    {
      t = table_create_0(t);
      {
        t = not_null(m_38);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              t = term_e_17;
              return(t);
            }
            t = notify_1(t, q_1);
            {
              t = ReadFromFile_0(t);
              {
                ATerm r_1 (ATerm t)
                {
                  ATerm o_38 = NULL;
                  o_38 = t;
                  l_38 :
                  if(!(match_string(o_38, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, r_1);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, p_1);
        }
      }
    }
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm m_17;
  m_17 = t;
  {
    ATerm r_38 = NULL;
    ATerm s_38 = NULL;
    s_38 = t;
    if(((r_38 != NULL) && (r_38 != s_38)))
      _fail(s_38);
    else
      r_38 = s_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_17, not_null(r_38));
      t = printnl_0(t);
    }
  }
  t = m_17;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm q_17;
  q_17 = t;
  {
    t = error_0(t);
    {
      t = term_s_17;
      t = exit_0(t);
    }
  }
  t = q_17;
  return(t);
}
ATerm New_Table_1 (ATerm t, ATerm n_59 (ATerm))
{
  ATerm b_39 = NULL,c_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym_New_Table_1))
    {
      c_39 = ATgetArgument(b_39, 0);
      {
        ATerm h_39 = NULL,j_39 = NULL;
        ATerm i_39 = NULL;
        t = SSLgetAnnotations(not_null(b_39));
        {
          i_39 = t;
          if(((h_39 != NULL) && (h_39 != i_39)))
            _fail(i_39);
          else
            h_39 = i_39;
        }
        {
          t = not_null(c_39);
          {
            ATerm l_39 = NULL;
            t = n_59(t);
            {
              j_39 = t;
              {
                ATerm m_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_New_Table_1, not_null(j_39)), not_null(h_39));
                {
                  m_39 = t;
                  if(((l_39 != NULL) && (l_39 != m_39)))
                    _fail(m_39);
                  else
                    l_39 = m_39;
                }
                t = not_null(l_39);
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
ATerm fetch_elem_1 (ATerm t, ATerm k_75 (ATerm))
{
  ATerm s_39 = NULL;
  ATerm s_1 (ATerm t)
  {
    ATerm t_39 = NULL;
    t = k_75(t);
    {
      t_39 = t;
      if(((s_39 != NULL) && (s_39 != t_39)))
        _fail(t_39);
      else
        s_39 = t_39;
    }
    return(t);
  }
  t = fetch_1(t, s_1);
  t = not_null(s_39);
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = term_v_17;
  t = table_get_0(t);
  return(t);
}
ATerm option_value_2 (ATerm t, ATerm k_90 (ATerm), ATerm l_90 (ATerm))
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0(t);
      t = fetch_elem_1(t, k_90);
      ;
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      t = l_90(t);
    }
  return(t);
}
ATerm Old_Table_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm a_40 = NULL,b_40 = NULL;
  a_40 = t;
  z_39 :
  if(match_cons(a_40, sym_Old_Table_1))
    {
      b_40 = ATgetArgument(a_40, 0);
      {
        ATerm g_40 = NULL,i_40 = NULL;
        ATerm h_40 = NULL;
        t = SSLgetAnnotations(not_null(a_40));
        {
          h_40 = t;
          if(((g_40 != NULL) && (g_40 != h_40)))
            _fail(h_40);
          else
            g_40 = h_40;
        }
        {
          t = not_null(b_40);
          {
            ATerm l_40 = NULL;
            t = m_59(t);
            {
              i_40 = t;
              {
                ATerm m_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Old_Table_1, not_null(i_40)), not_null(g_40));
                {
                  m_40 = t;
                  if(((l_40 != NULL) && (l_40 != m_40)))
                    _fail(m_40);
                  else
                    l_40 = m_40;
                }
                t = not_null(l_40);
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
ATerm pptable_diff_0 (ATerm t)
{
  ATerm a_42 = NULL,c_42 = NULL,e_42 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm v_1 (ATerm t)
    {
      ATerm b_42 = NULL;
      b_42 = t;
      if(((a_42 != NULL) && (a_42 != b_42)))
        _fail(b_42);
      else
        a_42 = b_42;
      return(t);
    }
    t = Old_Table_1(t, v_1);
    return(t);
  }
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_b_18);
    t = fatal_error_0(t);
    return(t);
  }
  t = option_value_2(t, t_1, u_1);
  {
    t = (ATerm) ATinsert(ATempty, not_null(a_42));
    {
      t = read_pp_tables_0(t);
      {
        t = term_c_18;
        {
          t = table_rename_0(t);
          {
            ATerm w_1 (ATerm t)
            {
              ATerm y_1 (ATerm t)
              {
                ATerm d_42 = NULL;
                d_42 = t;
                if(((c_42 != NULL) && (c_42 != d_42)))
                  _fail(d_42);
                else
                  c_42 = d_42;
                return(t);
              }
              t = New_Table_1(t, y_1);
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_g_18);
              t = fatal_error_0(t);
              return(t);
            }
            t = option_value_2(t, w_1, x_1);
            {
              t = (ATerm) ATinsert(ATempty, not_null(c_42));
              {
                t = read_pp_tables_0(t);
                {
                  t = term_j_18;
                  {
                    t = table_rename_0(t);
                    {
                      t = term_w_10;
                      {
                        ATerm g_42 = NULL;
                        t = table_keys_0(t);
                        {
                          e_42 = t;
                          {
                            t = term_z_10;
                            {
                              ATerm o_42 = NULL;
                              t = table_keys_0(t);
                              {
                                g_42 = t;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_42), not_null(g_42));
                                  {
                                    ATerm q_42 = NULL;
                                    t = isect_0(t);
                                    {
                                      o_42 = t;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_42), not_null(g_42));
                                        {
                                          ATerm w_42 = NULL;
                                          t = diff_0(t);
                                          {
                                            q_42 = t;
                                            {
                                              ATerm a_2 (ATerm t)
                                              {
                                                ATerm s_42 = NULL;
                                                ATerm t_42 = NULL;
                                                t_42 = t;
                                                if(((s_42 != NULL) && (s_42 != t_42)))
                                                  _fail(t_42);
                                                else
                                                  s_42 = t_42;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(s_42));
                                                  {
                                                    t = table_get_0(t);
                                                    {
                                                      t = Fst_0(t);
                                                      t = path_to_string_0(t);
                                                    }
                                                  }
                                                }
                                                return(t);
                                              }
                                              t = map_1(t, a_2);
                                              {
                                                ATerm b_2 (ATerm t)
                                                {
                                                  ATerm u_42 = NULL;
                                                  ATerm k_18 = t;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Nil_0(t);
                                                      PopChoice();
                                                      _fail(t);
                                                    }
                                                  else
                                                    {
                                                      t = k_18;
                                                    }
                                                  {
                                                    ATerm v_42 = NULL;
                                                    v_42 = t;
                                                    if(((u_42 != NULL) && (u_42 != v_42)))
                                                      _fail(v_42);
                                                    else
                                                      u_42 = v_42;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_42)), term_l_18));
                                                      t = printnl_0(t);
                                                    }
                                                  }
                                                  return(t);
                                                }
                                                t = try_1(t, b_2);
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_42), not_null(e_42));
                                                  {
                                                    ATerm q_43 = NULL;
                                                    t = diff_0(t);
                                                    {
                                                      w_42 = t;
                                                      {
                                                        ATerm c_2 (ATerm t)
                                                        {
                                                          ATerm y_42 = NULL;
                                                          ATerm z_42 = NULL;
                                                          z_42 = t;
                                                          if(((y_42 != NULL) && (y_42 != z_42)))
                                                            _fail(z_42);
                                                          else
                                                            y_42 = z_42;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(y_42));
                                                            {
                                                              t = table_get_0(t);
                                                              {
                                                                t = Fst_0(t);
                                                                t = path_to_string_0(t);
                                                              }
                                                            }
                                                          }
                                                          return(t);
                                                        }
                                                        t = map_1(t, c_2);
                                                        {
                                                          ATerm d_2 (ATerm t)
                                                          {
                                                            ATerm a_43 = NULL;
                                                            ATerm m_18 = t;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = Nil_0(t);
                                                                PopChoice();
                                                                _fail(t);
                                                              }
                                                            else
                                                              {
                                                                t = m_18;
                                                              }
                                                            {
                                                              ATerm b_43 = NULL;
                                                              b_43 = t;
                                                              if(((a_43 != NULL) && (a_43 != b_43)))
                                                                _fail(b_43);
                                                              else
                                                                a_43 = b_43;
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_43)), term_n_18));
                                                                t = printnl_0(t);
                                                              }
                                                            }
                                                            return(t);
                                                          }
                                                          t = try_1(t, d_2);
                                                          {
                                                            t = not_null(o_42);
                                                            {
                                                              ATerm g_44 = NULL;
                                                              ATerm e_2 (ATerm t)
                                                              {
                                                                ATerm c_43 = NULL;
                                                                ATerm e_43 = NULL,f_43 = NULL;
                                                                c_43 = t;
                                                                {
                                                                  ATerm g_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
                                                                  ATerm h_43 = NULL;
                                                                  h_43 = t;
                                                                  if(((g_43 != NULL) && (g_43 != h_43)))
                                                                    _fail(h_43);
                                                                  else
                                                                    g_43 = h_43;
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(g_43));
                                                                    {
                                                                      t = table_get_0(t);
                                                                      {
                                                                        ATerm f_2 (ATerm t)
                                                                        {
                                                                          ATerm g_2 (ATerm t)
                                                                          {
                                                                            ATerm o_18 = t;
                                                                            int p_18 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = S_1(t, _id);
                                                                                ;
                                                                                LocalPopChoice(p_18);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = o_18;
                                                                                {
                                                                                  ATerm q_18 = t;
                                                                                  int u_18 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = Arg_1(t, _id);
                                                                                      ;
                                                                                      LocalPopChoice(u_18);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = q_18;
                                                                                      {
                                                                                        ATerm i_43 = NULL,j_43 = NULL,k_43 = NULL;
                                                                                        i_43 = t;
                                                                                        f_41 :
                                                                                        if(match_cons(i_43, sym_Arg2_2))
                                                                                          {
                                                                                            j_43 = ATgetArgument(i_43, 0);
                                                                                            k_43 = ATgetArgument(i_43, 1);
                                                                                            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(j_43));
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
                                                                          t = collect_1(t, g_2);
                                                                          return(t);
                                                                        }
                                                                        t = _2(t, _id, f_2);
                                                                        {
                                                                          n_43 = t;
                                                                          h_41 :
                                                                          if(match_cons(n_43, sym__2))
                                                                            {
                                                                              o_43 = ATgetArgument(n_43, 0);
                                                                              p_43 = ATgetArgument(n_43, 1);
                                                                              {
                                                                                if(((e_43 != NULL) && (e_43 != o_43)))
                                                                                  _fail(o_43);
                                                                                else
                                                                                  e_43 = o_43;
                                                                                if(((f_43 != NULL) && (f_43 != p_43)))
                                                                                  _fail(p_43);
                                                                                else
                                                                                  f_43 = p_43;
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
                                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(c_43), not_null(e_43), not_null(f_43));
                                                                }
                                                                return(t);
                                                              }
                                                              t = map_1(t, e_2);
                                                              {
                                                                q_43 = t;
                                                                {
                                                                  t = not_null(o_42);
                                                                  {
                                                                    ATerm i_44 = NULL;
                                                                    ATerm h_2 (ATerm t)
                                                                    {
                                                                      ATerm s_43 = NULL;
                                                                      ATerm u_43 = NULL,v_43 = NULL;
                                                                      s_43 = t;
                                                                      {
                                                                        ATerm w_43 = NULL,d_44 = NULL,e_44 = NULL,f_44 = NULL;
                                                                        ATerm x_43 = NULL;
                                                                        x_43 = t;
                                                                        if(((w_43 != NULL) && (w_43 != x_43)))
                                                                          _fail(x_43);
                                                                        else
                                                                          w_43 = x_43;
                                                                        {
                                                                          t = (ATerm) ATmakeAppl(sym__2, term_z_10, not_null(w_43));
                                                                          {
                                                                            t = table_get_0(t);
                                                                            {
                                                                              ATerm i_2 (ATerm t)
                                                                              {
                                                                                ATerm j_2 (ATerm t)
                                                                                {
                                                                                  ATerm v_18 = t;
                                                                                  int z_18 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = S_1(t, _id);
                                                                                      ;
                                                                                      LocalPopChoice(z_18);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = v_18;
                                                                                      {
                                                                                        ATerm c_19 = t;
                                                                                        int d_19 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            t = Arg_1(t, _id);
                                                                                            ;
                                                                                            LocalPopChoice(d_19);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = c_19;
                                                                                            {
                                                                                              ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL;
                                                                                              y_43 = t;
                                                                                              m_41 :
                                                                                              if(match_cons(y_43, sym_Arg2_2))
                                                                                                {
                                                                                                  z_43 = ATgetArgument(y_43, 0);
                                                                                                  a_44 = ATgetArgument(y_43, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(z_43));
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
                                                                                t = collect_1(t, j_2);
                                                                                return(t);
                                                                              }
                                                                              t = _2(t, _id, i_2);
                                                                              {
                                                                                d_44 = t;
                                                                                o_41 :
                                                                                if(match_cons(d_44, sym__2))
                                                                                  {
                                                                                    e_44 = ATgetArgument(d_44, 0);
                                                                                    f_44 = ATgetArgument(d_44, 1);
                                                                                    {
                                                                                      if(((u_43 != NULL) && (u_43 != e_44)))
                                                                                        _fail(e_44);
                                                                                      else
                                                                                        u_43 = e_44;
                                                                                      if(((v_43 != NULL) && (v_43 != f_44)))
                                                                                        _fail(f_44);
                                                                                      else
                                                                                        v_43 = f_44;
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
                                                                        t = (ATerm) ATmakeAppl(sym__3, not_null(s_43), not_null(u_43), not_null(v_43));
                                                                      }
                                                                      return(t);
                                                                    }
                                                                    t = map_1(t, h_2);
                                                                    {
                                                                      g_44 = t;
                                                                      {
                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_43), not_null(g_44));
                                                                        {
                                                                          t = diff_0(t);
                                                                          {
                                                                            ATerm e_19;
                                                                            e_19 = t;
                                                                            {
                                                                              ATerm o_44 = NULL;
                                                                              ATerm k_2 (ATerm t)
                                                                              {
                                                                                ATerm j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL;
                                                                                j_44 = t;
                                                                                r_41 :
                                                                                if(match_cons(j_44, sym__3))
                                                                                  {
                                                                                    k_44 = ATgetArgument(j_44, 0);
                                                                                    l_44 = ATgetArgument(j_44, 1);
                                                                                    m_44 = ATgetArgument(j_44, 2);
                                                                                    t = not_null(k_44);
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = map_1(t, k_2);
                                                                              {
                                                                                o_44 = t;
                                                                                if(((i_44 != NULL) && (i_44 != o_44)))
                                                                                  _fail(o_44);
                                                                                else
                                                                                  i_44 = o_44;
                                                                              }
                                                                            }
                                                                            t = e_19;
                                                                            {
                                                                              ATerm l_2 (ATerm t)
                                                                              {
                                                                                ATerm p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL;
                                                                                p_44 = t;
                                                                                u_41 :
                                                                                if(match_cons(p_44, sym__3))
                                                                                  {
                                                                                    q_44 = ATgetArgument(p_44, 0);
                                                                                    r_44 = ATgetArgument(p_44, 1);
                                                                                    s_44 = ATgetArgument(p_44, 2);
                                                                                    {
                                                                                      t = not_null(r_44);
                                                                                      t = path_to_string_0(t);
                                                                                    }
                                                                                  }
                                                                                else
                                                                                  {
                                                                                    _fail(t);
                                                                                  }
                                                                                return(t);
                                                                              }
                                                                              t = map_1(t, l_2);
                                                                              {
                                                                                ATerm m_2 (ATerm t)
                                                                                {
                                                                                  ATerm u_44 = NULL;
                                                                                  ATerm f_19 = t;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = Nil_0(t);
                                                                                      PopChoice();
                                                                                      _fail(t);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = f_19;
                                                                                    }
                                                                                  {
                                                                                    ATerm v_44 = NULL;
                                                                                    v_44 = t;
                                                                                    if(((u_44 != NULL) && (u_44 != v_44)))
                                                                                      _fail(v_44);
                                                                                    else
                                                                                      u_44 = v_44;
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_44)), term_g_19));
                                                                                      t = printnl_0(t);
                                                                                    }
                                                                                  }
                                                                                  return(t);
                                                                                }
                                                                                t = try_1(t, m_2);
                                                                                {
                                                                                  ATerm q_2 (ATerm t)
                                                                                  {
                                                                                    ATerm r_2 (ATerm t)
                                                                                    {
                                                                                      t = term_l_19;
                                                                                      return(t);
                                                                                    }
                                                                                    t = has_option_1(t, r_2);
                                                                                    {
                                                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(w_42), not_null(i_44));
                                                                                      t = patch_0(t);
                                                                                    }
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, q_2);
                                                                                  {
                                                                                    ATerm s_2 (ATerm t)
                                                                                    {
                                                                                      ATerm t_2 (ATerm t)
                                                                                      {
                                                                                        t = term_m_19;
                                                                                        return(t);
                                                                                      }
                                                                                      t = has_option_1(t, t_2);
                                                                                      {
                                                                                        t = not_null(q_42);
                                                                                        t = prune_0(t);
                                                                                      }
                                                                                      return(t);
                                                                                    }
                                                                                    t = try_1(t, s_2);
                                                                                    {
                                                                                      ATerm u_2 (ATerm t)
                                                                                      {
                                                                                        ATerm d_45 = NULL;
                                                                                        ATerm n_19 = t;
                                                                                        int p_19 = stack_ptr;
                                                                                        if((PushChoice() == 0))
                                                                                          {
                                                                                            ATerm v_2 (ATerm t)
                                                                                            {
                                                                                              t = term_l_19;
                                                                                              return(t);
                                                                                            }
                                                                                            t = has_option_1(t, v_2);
                                                                                            ;
                                                                                            LocalPopChoice(p_19);
                                                                                          }
                                                                                        else
                                                                                          {
                                                                                            t = n_19;
                                                                                            {
                                                                                              ATerm w_2 (ATerm t)
                                                                                              {
                                                                                                t = term_m_19;
                                                                                                return(t);
                                                                                              }
                                                                                              t = has_option_1(t, w_2);
                                                                                            }
                                                                                          }
                                                                                        {
                                                                                          t = term_w_10;
                                                                                          {
                                                                                            t = table_getlist_0(t);
                                                                                            {
                                                                                              ATerm x_2 (ATerm t)
                                                                                              {
                                                                                                ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL,z_44 = NULL,a_45 = NULL;
                                                                                                w_44 = t;
                                                                                                x_41 :
                                                                                                if(match_cons(w_44, sym__2))
                                                                                                  {
                                                                                                    x_44 = ATgetArgument(w_44, 0);
                                                                                                    y_44 = ATgetArgument(w_44, 1);
                                                                                                    y_41 :
                                                                                                    if(match_cons(y_44, sym__2))
                                                                                                      {
                                                                                                        z_44 = ATgetArgument(y_44, 0);
                                                                                                        a_45 = ATgetArgument(y_44, 1);
                                                                                                        t = (ATerm) ATmakeAppl(sym_PP_Entry_2, not_null(z_44), not_null(a_45));
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
                                                                                              t = map_1(t, x_2);
                                                                                              {
                                                                                                t = desugar_0(t);
                                                                                                {
                                                                                                  ATerm e_45 = NULL;
                                                                                                  e_45 = t;
                                                                                                  if(((d_45 != NULL) && (d_45 != e_45)))
                                                                                                    _fail(e_45);
                                                                                                  else
                                                                                                    d_45 = e_45;
                                                                                                  {
                                                                                                    t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(d_45));
                                                                                                    {
                                                                                                      ATerm y_2 (ATerm t)
                                                                                                      {
                                                                                                        t = term_q_19;
                                                                                                        return(t);
                                                                                                      }
                                                                                                      t = termid_set_1(t, y_2);
                                                                                                      t = output_1(t, _id);
                                                                                                    }
                                                                                                  }
                                                                                                }
                                                                                              }
                                                                                            }
                                                                                          }
                                                                                        }
                                                                                        return(t);
                                                                                      }
                                                                                      t = try_1(t, u_2);
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
ATerm version_option_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm q_46 = NULL;
    q_46 = t;
    p_46 :
    if(!(match_string(q_46, "-v")))
      {
        if(!(match_string(q_46, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_w_19;
    t = set_config_0(t);
    t = term_x_19;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_c_20;
    return(t);
  }
  t = Option_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm t_46 = NULL;
    t_46 = t;
    r_46 :
    if(!(match_string(t_46, "-k")))
      {
        if(!(match_string(t_46, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm d_20;
    d_20 = t;
    {
      ATerm u_46 = NULL;
      ATerm v_46 = NULL;
      t = string_to_int_0(t);
      {
        v_46 = t;
        if(((u_46 != NULL) && (u_46 != v_46)))
          _fail(v_46);
        else
          u_46 = v_46;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_20, not_null(u_46));
        t = set_config_0(t);
      }
    }
    t = d_20;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_f_20;
    return(t);
  }
  t = ArgOption_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm a_47 = NULL;
  a_47 = t;
  t = SSL_string_to_int(not_null(a_47));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm g_20 = t;
  int h_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 (ATerm t)
      {
        ATerm n_47 = NULL;
        n_47 = t;
        d_47 :
        if(!(match_string(n_47, "-S")))
          {
            if(!(match_string(n_47, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_r_20;
        t = set_config_0(t);
        t = term_s_20;
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = term_t_20;
        return(t);
      }
      t = Option_3(t, f_3, g_3, j_3);
      ;
      LocalPopChoice(h_20);
    }
  else
    {
      t = g_20;
      {
        ATerm u_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_3 (ATerm t)
            {
              ATerm o_47 = NULL;
              o_47 = t;
              e_47 :
              if(!(match_string(o_47, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              ATerm r_47 = NULL;
              ATerm y_20;
              y_20 = t;
              {
                ATerm p_47 = NULL;
                ATerm q_47 = NULL;
                t = string_to_int_0(t);
                {
                  q_47 = t;
                  if(((p_47 != NULL) && (p_47 != q_47)))
                    _fail(q_47);
                  else
                    p_47 = q_47;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_k_20, not_null(p_47));
                  t = set_config_0(t);
                }
              }
              t = y_20;
              {
                ATerm s_47 = NULL;
                s_47 = t;
                if(((r_47 != NULL) && (r_47 != s_47)))
                  _fail(s_47);
                else
                  r_47 = s_47;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_47));
              }
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              t = term_z_20;
              return(t);
            }
            t = ArgOption_3(t, k_3, l_3, m_3);
            ;
            LocalPopChoice(x_20);
          }
        else
          {
            t = u_20;
            {
              ATerm n_3 (ATerm t)
              {
                ATerm t_47 = NULL;
                t_47 = t;
                m_47 :
                if(!(match_string(t_47, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = term_f_21;
                t = set_config_0(t);
                t = term_j_21;
                return(t);
              }
              ATerm r_3 (ATerm t)
              {
                t = term_p_21;
                return(t);
              }
              t = Option_3(t, n_3, q_3, r_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm q_21 = t;
  int r_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(r_21);
    }
  else
    {
      t = q_21;
      {
        ATerm s_21 = t;
        int t_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(t_21);
          }
        else
          {
            t = s_21;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm a_48 = NULL;
    a_48 = t;
    w_47 :
    if(!(match_string(a_48, "-o")))
      {
        if(!(match_string(a_48, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm d_48 = NULL;
    ATerm u_21;
    u_21 = t;
    {
      ATerm b_48 = NULL;
      ATerm c_48 = NULL;
      c_48 = t;
      if(((b_48 != NULL) && (b_48 != c_48)))
        _fail(c_48);
      else
        b_48 = c_48;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(b_48));
        t = set_config_0(t);
      }
    }
    t = u_21;
    {
      ATerm e_48 = NULL;
      e_48 = t;
      if(((d_48 != NULL) && (d_48 != e_48)))
        _fail(e_48);
      else
        d_48 = e_48;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(d_48));
    }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_v_21;
    return(t);
  }
  t = ArgOption_3(t, s_3, t_3, a_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm w_21 = t;
  int x_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(x_21);
    }
  else
    {
      t = w_21;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm i_48 = NULL;
          i_48 = t;
          h_48 :
          if(!(match_string(i_48, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_4 (ATerm t)
        {
          t = term_y_21;
          t = set_config_0(t);
          t = term_z_21;
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          t = term_a_22;
          return(t);
        }
        t = Option_3(t, b_4, e_4, f_4);
      }
    }
  return(t);
}
ATerm output_options_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = aterm_output_option_0(t);
      ;
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
      t = general_options_0(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm o_48 = NULL,p_48 = NULL,q_48 = NULL,r_48 = NULL,s_48 = NULL;
  o_48 = t;
  m_48 :
  if(match_string(o_48, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(o_48) == AT_LIST) && !(ATisEmpty(o_48))))
        {
          p_48 = ATgetFirst((ATermList) o_48);
          q_48 = (ATerm) ATgetNext((ATermList) o_48);
          n_48 :
          if(((ATgetType(q_48) == AT_LIST) && !(ATisEmpty(q_48))))
            {
              r_48 = ATgetFirst((ATermList) q_48);
              s_48 = (ATerm) ATgetNext((ATermList) q_48);
              {
                ATerm a_49 = NULL;
                ATerm d_22;
                d_22 = t;
                {
                  t = not_null(p_48);
                  t = j_0(t);
                }
                t = d_22;
                {
                  ATerm b_49 = NULL;
                  t = not_null(r_48);
                  {
                    t = k_0(t);
                    {
                      b_49 = t;
                      if(((a_49 != NULL) && (a_49 != b_49)))
                        _fail(b_49);
                      else
                        a_49 = b_49;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_48)), not_null(a_49));
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
ATerm table_push_0 (ATerm t)
{
  ATerm i_49 = NULL,j_49 = NULL,k_49 = NULL,l_49 = NULL;
  i_49 = t;
  h_49 :
  if(match_cons(i_49, sym__3))
    {
      j_49 = ATgetArgument(i_49, 0);
      k_49 = ATgetArgument(i_49, 1);
      l_49 = ATgetArgument(i_49, 2);
      {
        ATerm e_22;
        e_22 = t;
        {
          ATerm p_49 = NULL;
          ATerm q_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_49), not_null(k_49));
          {
            ATerm f_22 = t;
            int g_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(g_22);
              }
            else
              {
                t = f_22;
                t = (ATerm) ATempty;
              }
            {
              q_49 = t;
              if(((p_49 != NULL) && (p_49 != q_49)))
                _fail(q_49);
              else
                p_49 = q_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_49), not_null(k_49), (ATerm) ATinsert(CheckATermList(not_null(p_49)), not_null(l_49)));
            t = table_put_0(t);
          }
        }
        t = e_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm u_49 = NULL;
  ATerm v_49 = NULL;
  t = term_q_8;
  {
    t = l_93(t);
    {
      v_49 = t;
      if(((u_49 != NULL) && (u_49 != v_49)))
        _fail(v_49);
      else
        u_49 = v_49;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_22, term_i_22, not_null(u_49));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm b_50 = NULL,c_50 = NULL,d_50 = NULL;
  b_50 = t;
  a_50 :
  if(match_string(b_50, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(b_50) == AT_LIST) && !(ATisEmpty(b_50))))
        {
          c_50 = ATgetFirst((ATermList) b_50);
          d_50 = (ATerm) ATgetNext((ATermList) b_50);
          {
            ATerm g_50 = NULL;
            ATerm j_22;
            j_22 = t;
            {
              t = not_null(c_50);
              t = d_0(t);
            }
            t = j_22;
            {
              ATerm h_50 = NULL;
              t = term_q_8;
              {
                t = g_0(t);
                {
                  h_50 = t;
                  if(((g_50 != NULL) && (g_50 != h_50)))
                    _fail(h_50);
                  else
                    g_50 = h_50;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_50)), not_null(g_50));
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
ATerm default_usage_0 (ATerm t)
{
  ATerm k_22;
  k_22 = t;
  {
    ATerm m_50 = NULL;
    ATerm n_50 = NULL;
    t = term_q_8;
    {
      t = whoami_0(t);
      {
        n_50 = t;
        if(((m_50 != NULL) && (m_50 != n_50)))
          _fail(n_50);
        else
          m_50 = n_50;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_22), not_null(m_50)), term_l_22));
      {
        t = printnl_0(t);
        {
          t = term_s_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_22;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm q_50 = NULL;
  t = report_run_time_0(t);
  {
    ATerm r_50 = NULL;
    t = term_q_8;
    {
      t = whoami_0(t);
      {
        r_50 = t;
        if(((q_50 != NULL) && (q_50 != r_50)))
          _fail(r_50);
        else
          q_50 = r_50;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, term_n_22), not_null(q_50)));
      {
        t = printnl_0(t);
        {
          t = term_s_17;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_o_22;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_50 = NULL;
  u_50 = t;
  t = SSL_TicksToSeconds(not_null(u_50));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_50 = NULL,a_51 = NULL,b_51 = NULL;
  z_50 = t;
  y_50 :
  if(match_cons(z_50, sym__2))
    {
      a_51 = ATgetArgument(z_50, 0);
      b_51 = ATgetArgument(z_50, 1);
      {
        ATerm p_22 = t;
        int q_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_51), not_null(b_51));
            ;
            LocalPopChoice(q_22);
          }
        else
          {
            t = p_22;
            t = SSL_addr(not_null(a_51), not_null(b_51));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_80 (ATerm), ATerm x_80 (ATerm))
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_80(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm n_51 = NULL,o_51 = NULL,p_51 = NULL;
        n_51 = t;
        m_51 :
        if(((ATgetType(n_51) == AT_LIST) && !(ATisEmpty(n_51))))
          {
            o_51 = ATgetFirst((ATermList) n_51);
            p_51 = (ATerm) ATgetNext((ATermList) n_51);
            {
              ATerm z_51 = NULL;
              ATerm a_52 = NULL;
              t = not_null(p_51);
              {
                t = foldr_2(t, w_80, x_80);
                {
                  a_52 = t;
                  if(((z_51 != NULL) && (z_51 != a_52)))
                    _fail(a_52);
                  else
                    z_51 = a_52;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_51), not_null(z_51));
                t = x_80(t);
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
ATerm crush_2 (ATerm t, ATerm p_84 (ATerm), ATerm q_84 (ATerm))
{
  ATerm h_52 = NULL;
  ATerm j_52 = NULL;
  h_52 = t;
  {
    ATerm k_52 = NULL;
    ATerm m_52 = NULL,n_52 = NULL,o_52 = NULL;
    t = not_null(h_52);
    {
      k_52 = t;
      {
        t = SSL_explode_term(not_null(k_52));
        {
          m_52 = t;
          g_52 :
          if(match_cons(m_52, sym__2))
            {
              n_52 = ATgetArgument(m_52, 0);
              o_52 = ATgetArgument(m_52, 1);
              if(((j_52 != NULL) && (j_52 != o_52)))
                _fail(o_52);
              else
                j_52 = o_52;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_52);
      t = foldr_2(t, p_84, q_84);
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
    ATerm g_4 (ATerm t)
    {
      t = term_n_20;
      return(t);
    }
    t = crush_2(t, g_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_52 = NULL,x_52 = NULL,y_52 = NULL;
  w_52 = t;
  v_52 :
  if(match_cons(w_52, sym__2))
    {
      x_52 = ATgetArgument(w_52, 0);
      y_52 = ATgetArgument(w_52, 1);
      {
        ATerm t_22;
        t_22 = t;
        {
          ATerm u_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_52), not_null(y_52));
              ;
              LocalPopChoice(v_22);
            }
          else
            {
              t = u_22;
              t = SSL_gtr(not_null(x_52), not_null(y_52));
            }
        }
        t = t_22;
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
  ATerm e_53 = NULL;
  ATerm w_22 = t;
  int x_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_53 = NULL,s_53 = NULL,t_53 = NULL;
      r_53 = t;
      d_53 :
      if(match_cons(r_53, sym__2))
        {
          s_53 = ATgetArgument(r_53, 0);
          t_53 = ATgetArgument(r_53, 1);
          {
            if(((e_53 != NULL) && (e_53 != s_53)))
              _fail(s_53);
            else
              e_53 = s_53;
            if(((e_53 != NULL) && (e_53 != t_53)))
              _fail(t_53);
            else
              e_53 = t_53;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(x_22);
    }
  else
    {
      t = w_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_88 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm y_22;
    y_22 = t;
    {
      ATerm w_53 = NULL;
      ATerm x_53 = NULL;
      t = term_k_20;
      {
        t = get_config_0(t);
        {
          x_53 = t;
          if(((w_53 != NULL) && (w_53 != x_53)))
            _fail(x_53);
          else
            w_53 = x_53;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_53), term_s_17);
        t = geq_0(t);
      }
    }
    t = y_22;
    t = j_88(t);
    return(t);
  }
  t = try_1(t, j_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
  {
    ATerm b_54 = NULL,d_54 = NULL;
    ATerm z_22;
    z_22 = t;
    {
      ATerm c_54 = NULL;
      t = run_time_0(t);
      {
        c_54 = t;
        if(((b_54 != NULL) && (b_54 != c_54)))
          _fail(c_54);
        else
          b_54 = c_54;
      }
    }
    t = z_22;
    {
      ATerm e_54 = NULL;
      t = term_q_8;
      {
        t = whoami_0(t);
        {
          e_54 = t;
          if(((d_54 != NULL) && (d_54 != e_54)))
            _fail(e_54);
          else
            d_54 = e_54;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_23), not_null(b_54)), term_b_23), not_null(d_54)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, k_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_n_20;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm l_54 = NULL;
  l_54 = t;
  k_54 :
  if(match_cons(l_54, sym_Version_0))
    {
      ATerm n_54 = NULL,p_54 = NULL;
      ATerm e_23;
      e_23 = t;
      {
        ATerm o_54 = NULL;
        t = SSLgetAnnotations(not_null(l_54));
        {
          o_54 = t;
          if(((n_54 != NULL) && (n_54 != o_54)))
            _fail(o_54);
          else
            n_54 = o_54;
        }
      }
      t = e_23;
      {
        ATerm q_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(n_54));
        {
          q_54 = t;
          if(((p_54 != NULL) && (p_54 != q_54)))
            _fail(q_54);
          else
            p_54 = q_54;
        }
        t = not_null(p_54);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_91 (ATerm))
{
  ATerm h_23 = t;
  int i_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_j_23;
      t = get_config_0(t);
      ;
      LocalPopChoice(i_23);
    }
  else
    {
      t = h_23;
      {
        ATerm l_4 (ATerm t)
        {
          ATerm k_23 = t;
          int p_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(p_23);
            }
          else
            {
              t = k_23;
              {
                ATerm q_23 = t;
                int s_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(s_23);
                  }
                else
                  {
                    t = q_23;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, l_4);
      }
    }
  t = g_91(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm v_54 = NULL;
  v_54 = t;
  t = SSL_table_create(not_null(v_54));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm z_54 = NULL;
  z_54 = t;
  {
    ATerm t_23;
    t_23 = t;
    {
      t = term_t_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_17, term_u_17, not_null(z_54));
          t = table_put_0(t);
        }
      }
    }
    t = t_23;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm d_55 = NULL;
  d_55 = t;
  t = SSL_table_destroy(not_null(d_55));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_55 = NULL;
  h_55 = t;
  t = SSL_exit(not_null(h_55));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm l_55 = NULL,m_55 = NULL,n_55 = NULL;
  l_55 = t;
  k_55 :
  if(((ATgetType(l_55) == AT_LIST) && ATisEmpty(l_55)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(l_55) == AT_LIST) && !(ATisEmpty(l_55))))
        {
          m_55 = ATgetFirst((ATermList) l_55);
          n_55 = (ATerm) ATgetNext((ATermList) l_55);
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
  ATerm u_23;
  u_23 = t;
  {
    ATerm q_55 = NULL;
    ATerm t_55 = NULL;
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        {
          ATerm r_55 = NULL;
          ATerm s_55 = NULL;
          s_55 = t;
          if(((r_55 != NULL) && (r_55 != s_55)))
            _fail(s_55);
          else
            r_55 = s_55;
          t = (ATerm) ATinsert(ATempty, not_null(r_55));
        }
      }
    {
      t_55 = t;
      if(((q_55 != NULL) && (q_55 != t_55)))
        _fail(t_55);
      else
        q_55 = t_55;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_l_8, not_null(q_55));
      t = printnl_0(t);
    }
  }
  t = u_23;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm h_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm))
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL;
  g_57 = t;
  p_56 :
  if(((ATgetType(g_57) == AT_LIST) && !(ATisEmpty(g_57))))
    {
      e_57 = ATgetFirst((ATermList) g_57);
      f_57 = (ATerm) ATgetNext((ATermList) g_57);
      {
        ATerm j_57 = NULL;
        t = not_null(f_57);
        {
          ATerm c_24;
          c_24 = t;
          {
            ATerm o_57 = NULL,q_57 = NULL,u_57 = NULL;
            ATerm d_24;
            d_24 = t;
            {
              ATerm p_57 = NULL;
              t = b_0(t);
              {
                p_57 = t;
                if(((o_57 != NULL) && (o_57 != p_57)))
                  _fail(p_57);
                else
                  o_57 = p_57;
              }
            }
            t = d_24;
            {
              ATerm t_57 = NULL;
              t = not_null(e_57);
              {
                t = a_0(t);
                {
                  t_57 = t;
                  if(((q_57 != NULL) && (q_57 != t_57)))
                    _fail(t_57);
                  else
                    q_57 = t_57;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(o_57)), not_null(q_57));
                {
                  u_57 = t;
                  if(((j_57 != NULL) && (j_57 != u_57)))
                    _fail(u_57);
                  else
                    j_57 = u_57;
                }
              }
            }
          }
          t = c_24;
          {
            ATerm s_4 (ATerm t)
            {
              t = not_null(j_57);
              return(t);
            }
            t = reverse_acc_2(t, a_0, s_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(g_57) == AT_LIST) && ATisEmpty(g_57)))
        {
          {
            t = term_q_8;
            t = b_0(t);
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
  ATerm t_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm g_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm j_58 = NULL,k_58 = NULL;
  j_58 = t;
  i_58 :
  if(match_cons(j_58, sym_Program_1))
    {
      k_58 = ATgetArgument(j_58, 0);
      {
        ATerm n_58 = NULL,p_58 = NULL;
        ATerm o_58 = NULL;
        t = SSLgetAnnotations(not_null(j_58));
        {
          o_58 = t;
          if(((n_58 != NULL) && (n_58 != o_58)))
            _fail(o_58);
          else
            n_58 = o_58;
        }
        {
          t = not_null(k_58);
          {
            ATerm r_58 = NULL;
            t = e_65(t);
            {
              p_58 = t;
              {
                ATerm s_58 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_58)), not_null(n_58));
                {
                  s_58 = t;
                  if(((r_58 != NULL) && (r_58 != s_58)))
                    _fail(s_58);
                  else
                    r_58 = s_58;
                }
                t = not_null(r_58);
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
  ATerm b_59 = NULL;
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_59 = NULL;
      t = term_o_22;
      {
        t = get_config_0(t);
        {
          c_59 = t;
          if(((b_59 != NULL) && (b_59 != c_59)))
            _fail(c_59);
          else
            b_59 = c_59;
        }
      }
      ;
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      {
        ATerm w_4 (ATerm t)
        {
          ATerm x_4 (ATerm t)
          {
            ATerm d_59 = NULL;
            d_59 = t;
            if(((b_59 != NULL) && (b_59 != d_59)))
              _fail(d_59);
            else
              b_59 = d_59;
            return(t);
          }
          t = Program_1(t, x_4);
          return(t);
        }
        t = option_defined_1(t, w_4);
      }
    }
  {
    ATerm y_4 (ATerm t)
    {
      ATerm z_4 (ATerm t)
      {
        t = not_null(b_59);
        return(t);
      }
      t = short_description_1(t, z_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, y_4);
    {
      t = term_k_24;
      {
        t = echo_0(t);
        {
          t = term_l_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm e_59 = NULL;
                  ATerm f_59 = NULL;
                  f_59 = t;
                  if(((e_59 != NULL) && (e_59 != f_59)))
                    _fail(f_59);
                  else
                    e_59 = f_59;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_59)), term_m_24);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_5);
                {
                  ATerm f_5 (ATerm t)
                  {
                    ATerm g_59 = NULL;
                    ATerm h_59 = NULL;
                    ATerm g_5 (ATerm t)
                    {
                      t = not_null(b_59);
                      return(t);
                    }
                    t = long_description_1(t, g_5);
                    {
                      h_59 = t;
                      if(((g_59 != NULL) && (g_59 != h_59)))
                        _fail(h_59);
                      else
                        g_59 = h_59;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(g_59)), term_n_24);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, f_5);
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
  ATerm s_59 = NULL,t_59 = NULL,u_59 = NULL;
  s_59 = t;
  r_59 :
  if(match_cons(s_59, sym__2))
    {
      t_59 = ATgetArgument(s_59, 0);
      u_59 = ATgetArgument(s_59, 1);
      {
        ATerm o_24;
        o_24 = t;
        t = SSL_printnl(not_null(t_59), not_null(u_59));
        t = o_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm f_65 (ATerm))
{
  ATerm d_60 = NULL,e_60 = NULL;
  d_60 = t;
  c_60 :
  if(match_cons(d_60, sym_Undefined_1))
    {
      e_60 = ATgetArgument(d_60, 0);
      {
        ATerm h_60 = NULL,j_60 = NULL;
        ATerm i_60 = NULL;
        t = SSLgetAnnotations(not_null(d_60));
        {
          i_60 = t;
          if(((h_60 != NULL) && (h_60 != i_60)))
            _fail(i_60);
          else
            h_60 = i_60;
        }
        {
          t = not_null(e_60);
          {
            ATerm l_60 = NULL;
            t = f_65(t);
            {
              j_60 = t;
              {
                ATerm m_60 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(j_60)), not_null(h_60));
                {
                  m_60 = t;
                  if(((l_60 != NULL) && (l_60 != m_60)))
                    _fail(m_60);
                  else
                    l_60 = m_60;
                }
                t = not_null(l_60);
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
ATerm fetch_1 (ATerm t, ATerm i_75 (ATerm))
{
  ATerm r_60 (ATerm t)
  {
    ATerm p_24 = t;
    int q_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_75, _id);
        ;
        LocalPopChoice(q_24);
      }
    else
      {
        t = p_24;
        t = Cons_2(t, _id, r_60);
      }
    return(t);
  }
  t = r_60(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm g_92 (ATerm))
{
  t = fetch_1(t, g_92);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_60 = NULL;
  w_60 = t;
  v_60 :
  if(match_cons(w_60, sym_Help_0))
    {
      ATerm y_60 = NULL,a_61 = NULL;
      ATerm s_24;
      s_24 = t;
      {
        ATerm z_60 = NULL;
        t = SSLgetAnnotations(not_null(w_60));
        {
          z_60 = t;
          if(((y_60 != NULL) && (y_60 != z_60)))
            _fail(z_60);
          else
            y_60 = z_60;
        }
      }
      t = s_24;
      {
        ATerm b_61 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_60));
        {
          b_61 = t;
          if(((a_61 != NULL) && (a_61 != b_61)))
            _fail(b_61);
          else
            a_61 = b_61;
        }
        t = not_null(a_61);
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
  ATerm g_61 = NULL;
  g_61 = t;
  t = SSL_implode_string(not_null(g_61));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_24 = t;
  int u_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(u_24);
    }
  else
    {
      t = t_24;
      {
        ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
        l_61 = t;
        k_61 :
        if(((ATgetType(l_61) == AT_LIST) && !(ATisEmpty(l_61))))
          {
            m_61 = ATgetFirst((ATermList) l_61);
            n_61 = (ATerm) ATgetNext((ATermList) l_61);
            {
              t = not_null(m_61);
              {
                ATerm l_5 (ATerm t)
                {
                  t = not_null(n_61);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, l_5);
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
  ATerm x_61 = NULL;
  ATerm z_61 = NULL;
  x_61 = t;
  {
    ATerm a_62 = NULL;
    ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL;
    t = not_null(x_61);
    {
      a_62 = t;
      {
        t = SSL_explode_term(not_null(a_62));
        {
          c_62 = t;
          v_61 :
          if(match_cons(c_62, sym__2))
            {
              d_62 = ATgetArgument(c_62, 0);
              e_62 = ATgetArgument(c_62, 1);
              w_61 :
              if(match_string(d_62, ""))
                {
                  if(((z_61 != NULL) && (z_61 != e_62)))
                    _fail(e_62);
                  else
                    z_61 = e_62;
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
      t = not_null(z_61);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_75 (ATerm))
{
  ATerm i_62 (ATerm t)
  {
    ATerm w_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, i_62);
        ;
        LocalPopChoice(a_25);
      }
    else
      {
        t = w_24;
        {
          t = Nil_0(t);
          t = o_75(t);
        }
      }
    return(t);
  }
  t = i_62(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
  l_62 = t;
  k_62 :
  if(match_cons(l_62, sym__2))
    {
      m_62 = ATgetArgument(l_62, 0);
      n_62 = ATgetArgument(l_62, 1);
      {
        t = not_null(m_62);
        {
          ATerm m_5 (ATerm t)
          {
            t = not_null(n_62);
            return(t);
          }
          t = at_end_1(t, m_5);
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
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm s_62 = NULL;
  s_62 = t;
  t = SSL_explode_string(not_null(s_62));
  return(t);
}
ATerm _2 (ATerm t, ATerm b_58 (ATerm), ATerm c_58 (ATerm))
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
  b_63 = t;
  a_63 :
  if(match_cons(b_63, sym__2))
    {
      c_63 = ATgetArgument(b_63, 0);
      d_63 = ATgetArgument(b_63, 1);
      {
        ATerm h_63 = NULL,j_63 = NULL;
        ATerm i_63 = NULL;
        t = SSLgetAnnotations(not_null(b_63));
        {
          i_63 = t;
          if(((h_63 != NULL) && (h_63 != i_63)))
            _fail(i_63);
          else
            h_63 = i_63;
        }
        {
          t = not_null(c_63);
          {
            ATerm l_63 = NULL;
            t = b_58(t);
            {
              j_63 = t;
              {
                t = not_null(d_63);
                {
                  ATerm n_63 = NULL;
                  t = c_58(t);
                  {
                    l_63 = t;
                    {
                      ATerm o_63 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(j_63), not_null(l_63)), not_null(h_63));
                      {
                        o_63 = t;
                        if(((n_63 != NULL) && (n_63 != o_63)))
                          _fail(o_63);
                        else
                          n_63 = o_63;
                      }
                      t = not_null(n_63);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm s_86 (ATerm))
{
  ATerm d_25;
  d_25 = t;
  {
    ATerm w_63 = NULL,y_63 = NULL;
    ATerm e_25;
    e_25 = t;
    {
      ATerm x_63 = NULL;
      t = s_86(t);
      {
        x_63 = t;
        if(((w_63 != NULL) && (w_63 != x_63)))
          _fail(x_63);
        else
          w_63 = x_63;
      }
    }
    t = e_25;
    {
      ATerm z_63 = NULL;
      z_63 = t;
      if(((y_63 != NULL) && (y_63 != z_63)))
        _fail(z_63);
      else
        y_63 = z_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_63)), not_null(w_63)));
        t = printnl_0(t);
      }
    }
  }
  t = d_25;
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm c_64 (ATerm t)
  {
    ATerm f_25 = t;
    int g_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(g_25);
      }
    else
      {
        t = f_25;
        t = Cons_2(t, z_74, c_64);
      }
    return(t);
  }
  t = c_64(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm e_64 = NULL;
  e_64 = t;
  t = SSL_is_string(not_null(e_64));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_25 = t;
  int i_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(i_25);
    }
  else
    {
      t = h_25;
      {
        ATerm j_25 = t;
        int k_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, n_5);
            ;
            LocalPopChoice(k_25);
          }
        else
          {
            t = j_25;
            {
              ATerm n_64 = NULL,o_64 = NULL,p_64 = NULL;
              n_64 = t;
              m_64 :
              if(match_cons(n_64, sym_Path_1))
                {
                  o_64 = ATgetArgument(n_64, 0);
                  t = not_null(o_64);
                }
              else
                {
                  if(match_cons(n_64, sym_Var_1))
                    {
                      o_64 = ATgetArgument(n_64, 0);
                      {
                        t = not_null(o_64);
                        {
                          ATerm l_25 = t;
                          int n_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(n_25);
                            }
                          else
                            {
                              t = l_25;
                              {
                                ATerm o_5 (ATerm t)
                                {
                                  t = term_s_25;
                                  return(t);
                                }
                                t = debug_1(t, o_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(n_64, sym_Prefix_2))
                        {
                          o_64 = ATgetArgument(n_64, 0);
                          p_64 = ATgetArgument(n_64, 1);
                          {
                            ATerm u_64 = NULL,w_64 = NULL;
                            ATerm t_25;
                            t_25 = t;
                            {
                              ATerm v_64 = NULL;
                              t = not_null(o_64);
                              {
                                t = eval_config_0(t);
                                {
                                  v_64 = t;
                                  if(((u_64 != NULL) && (u_64 != v_64)))
                                    _fail(v_64);
                                  else
                                    u_64 = v_64;
                                }
                              }
                            }
                            t = t_25;
                            {
                              ATerm x_64 = NULL;
                              t = not_null(p_64);
                              {
                                t = eval_config_0(t);
                                {
                                  x_64 = t;
                                  if(((w_64 != NULL) && (w_64 != x_64)))
                                    _fail(x_64);
                                  else
                                    w_64 = x_64;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_64), not_null(w_64));
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
ATerm table_get_0 (ATerm t)
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
  h_65 = t;
  g_65 :
  if(match_cons(h_65, sym__2))
    {
      i_65 = ATgetArgument(h_65, 0);
      j_65 = ATgetArgument(h_65, 1);
      t = SSL_table_get(not_null(i_65), not_null(j_65));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm v_65 = NULL;
  v_65 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_25, not_null(v_65));
    {
      t = table_get_0(t);
      {
        ATerm p_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm v_25;
            v_25 = t;
            {
              ATerm x_65 = NULL;
              ATerm y_65 = NULL;
              y_65 = t;
              if(((x_65 != NULL) && (x_65 != y_65)))
                _fail(y_65);
              else
                x_65 = y_65;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_u_25, not_null(v_65), not_null(x_65));
                t = table_put_0(t);
              }
            }
            t = v_25;
          }
          return(t);
        }
        t = try_1(t, p_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_67 (ATerm))
{
  ATerm w_25 = t;
  int x_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_67(t);
      ;
      LocalPopChoice(x_25);
    }
  else
    {
      t = w_25;
      {
      }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm u_5 (ATerm t)
  {
    ATerm c_66 = NULL;
    c_66 = t;
    b_66 :
    if(!(match_string(c_66, "--help")))
      {
        if(!(match_string(c_66, "-h")))
          {
            if(!(match_string(c_66, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_y_25;
    {
      t = set_config_0(t);
      t = term_d_26;
    }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    t = term_e_26;
    return(t);
  }
  t = Option_3(t, u_5, v_5, w_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL;
  f_66 = t;
  e_66 :
  if(((ATgetType(f_66) == AT_LIST) && !(ATisEmpty(f_66))))
    {
      g_66 = ATgetFirst((ATermList) f_66);
      h_66 = (ATerm) ATgetNext((ATermList) f_66);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_66)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(g_66)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm r_66 = NULL,s_66 = NULL,t_66 = NULL;
  r_66 = t;
  q_66 :
  if(((ATgetType(r_66) == AT_LIST) && !(ATisEmpty(r_66))))
    {
      s_66 = ATgetFirst((ATermList) r_66);
      t_66 = (ATerm) ATgetNext((ATermList) r_66);
      {
        ATerm x_66 = NULL,z_66 = NULL;
        ATerm y_66 = NULL;
        t = SSLgetAnnotations(not_null(r_66));
        {
          y_66 = t;
          if(((x_66 != NULL) && (x_66 != y_66)))
            _fail(y_66);
          else
            x_66 = y_66;
        }
        {
          t = not_null(s_66);
          {
            ATerm b_67 = NULL;
            t = k_59(t);
            {
              z_66 = t;
              {
                t = not_null(t_66);
                {
                  ATerm f_67 = NULL;
                  t = l_59(t);
                  {
                    b_67 = t;
                    {
                      ATerm g_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(b_67)), not_null(z_66)), not_null(x_66));
                      {
                        g_67 = t;
                        if(((f_67 != NULL) && (f_67 != g_67)))
                          _fail(g_67);
                        else
                          f_67 = g_67;
                      }
                      t = not_null(f_67);
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
  ATerm r_67 = NULL;
  r_67 = t;
  q_67 :
  if(((ATgetType(r_67) == AT_LIST) && ATisEmpty(r_67)))
    {
      {
        ATerm t_67 = NULL,v_67 = NULL;
        ATerm f_26;
        f_26 = t;
        {
          ATerm u_67 = NULL;
          t = SSLgetAnnotations(not_null(r_67));
          {
            u_67 = t;
            if(((t_67 != NULL) && (t_67 != u_67)))
              _fail(u_67);
            else
              t_67 = u_67;
          }
        }
        t = f_26;
        {
          ATerm w_67 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_67));
          {
            w_67 = t;
            if(((v_67 != NULL) && (v_67 != w_67)))
              _fail(w_67);
            else
              v_67 = w_67;
          }
          t = not_null(v_67);
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
  ATerm c_68 = NULL,d_68 = NULL,e_68 = NULL;
  c_68 = t;
  b_68 :
  if(match_cons(c_68, sym__2))
    {
      d_68 = ATgetArgument(c_68, 0);
      e_68 = ATgetArgument(c_68, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_25, not_null(d_68), not_null(e_68));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm j_93 (ATerm))
{
  ATerm g_26;
  g_26 = t;
  {
    ATerm b_6 (ATerm t)
    {
      t = term_i_26;
      t = j_93(t);
      return(t);
    }
    t = try_1(t, b_6);
  }
  t = g_26;
  {
    ATerm c_6 (ATerm t)
    {
      ATerm m_68 = NULL;
      ATerm j_26;
      j_26 = t;
      {
        ATerm k_68 = NULL;
        ATerm l_68 = NULL;
        l_68 = t;
        if(((k_68 != NULL) && (k_68 != l_68)))
          _fail(l_68);
        else
          k_68 = l_68;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_22, not_null(k_68));
          t = set_config_0(t);
        }
      }
      t = j_26;
      {
        ATerm n_68 = NULL;
        n_68 = t;
        if(((m_68 != NULL) && (m_68 != n_68)))
          _fail(n_68);
        else
          m_68 = n_68;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_68));
      }
      return(t);
    }
    ATerm d_6 (ATerm t)
    {
      ATerm k_26 = t;
      int l_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_26 = t;
          int n_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(n_26);
            }
          else
            {
              t = m_26;
              {
                t = j_93(t);
                t = Cons_2(t, _id, d_6);
              }
            }
          ;
          LocalPopChoice(l_26);
        }
      else
        {
          t = k_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_6, d_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_68 = NULL,u_68 = NULL,v_68 = NULL;
  ATerm o_26;
  o_26 = t;
  {
    ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,f_69 = NULL;
    w_68 = t;
    s_68 :
    if(match_cons(w_68, sym__3))
      {
        x_68 = ATgetArgument(w_68, 0);
        y_68 = ATgetArgument(w_68, 1);
        f_69 = ATgetArgument(w_68, 2);
        {
          if(((t_68 != NULL) && (t_68 != x_68)))
            _fail(x_68);
          else
            t_68 = x_68;
          {
            if(((u_68 != NULL) && (u_68 != y_68)))
              _fail(y_68);
            else
              u_68 = y_68;
            {
              if(((v_68 != NULL) && (v_68 != f_69)))
                _fail(f_69);
              else
                v_68 = f_69;
              t = SSL_table_put(not_null(t_68), not_null(u_68), not_null(v_68));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = o_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm i_93 (ATerm))
{
  ATerm j_69 = NULL;
  ATerm t_26;
  t_26 = t;
  {
    t = term_u_26;
    t = table_put_0(t);
  }
  t = t_26;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm z_26 = t;
      int a_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = i_93(t);
          ;
          LocalPopChoice(a_27);
        }
      else
        {
          t = z_26;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_6);
    {
      ATerm f_6 (ATerm t)
      {
        ATerm b_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_27;
            d_27 = t;
            {
              ATerm e_27 = t;
              int f_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_j_23;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(f_27);
                }
              else
                {
                  t = e_27;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = d_27;
            {
              t = system_usage_0(t);
              {
                t = term_n_20;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = b_27;
            {
              ATerm g_6 (ATerm t)
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm k_69 = NULL;
                  k_69 = t;
                  if(((j_69 != NULL) && (j_69 != k_69)))
                    _fail(k_69);
                  else
                    j_69 = k_69;
                  return(t);
                }
                t = Undefined_1(t, m_6);
                return(t);
              }
              t = option_defined_1(t, g_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_o_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_69)), term_g_27));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_s_17;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, f_6);
      {
        ATerm h_27;
        h_27 = t;
        {
          t = term_h_22;
          t = table_destroy_0(t);
        }
        t = h_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm))
{
  t = parse_options_1(t, i_91);
  {
    t = store_options_0(t);
    {
      t = k_91(t);
      {
        ATerm i_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_91);
            ;
            LocalPopChoice(j_27);
          }
        else
          {
            t = i_27;
            {
              ATerm k_27 = t;
              int p_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_91(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(p_27);
                }
              else
                {
                  t = k_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm m_91 (ATerm), ATerm n_91 (ATerm))
{
  t = option_wrap_4(t, m_91, default_usage_0, _id, n_91);
  return(t);
}
ATerm io_Pptable_diff_0 (ATerm t)
{
  ATerm r_6 (ATerm t)
  {
    ATerm q_27 = t;
    int r_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_6 (ATerm t)
        {
          ATerm t_69 = NULL;
          t_69 = t;
          m_69 :
          if(!(match_string(t_69, "-V")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_6 (ATerm t)
        {
          t = term_s_27;
          return(t);
        }
        ATerm u_6 (ATerm t)
        {
          t = term_t_27;
          return(t);
        }
        t = Option_3(t, s_6, t_6, u_6);
        ;
        LocalPopChoice(r_27);
      }
    else
      {
        t = q_27;
        {
          ATerm x_27 = t;
          int z_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_6 (ATerm t)
              {
                ATerm u_69 = NULL;
                u_69 = t;
                n_69 :
                if(!(match_string(u_69, "--patch")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm x_6 (ATerm t)
              {
                t = term_l_19;
                return(t);
              }
              ATerm a_7 (ATerm t)
              {
                t = term_c_28;
                return(t);
              }
              t = Option_3(t, v_6, x_6, a_7);
              ;
              LocalPopChoice(z_27);
            }
          else
            {
              t = x_27;
              {
                ATerm d_28 = t;
                int e_28 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm b_7 (ATerm t)
                    {
                      ATerm v_69 = NULL;
                      v_69 = t;
                      o_69 :
                      if(!(match_string(v_69, "--prune")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm c_7 (ATerm t)
                    {
                      t = term_m_19;
                      return(t);
                    }
                    ATerm h_7 (ATerm t)
                    {
                      t = term_f_28;
                      return(t);
                    }
                    t = Option_3(t, b_7, c_7, h_7);
                    ;
                    LocalPopChoice(e_28);
                  }
                else
                  {
                    t = d_28;
                    {
                      ATerm g_28 = t;
                      int h_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm i_7 (ATerm t)
                          {
                            ATerm w_69 = NULL;
                            w_69 = t;
                            p_69 :
                            if(!(match_string(w_69, "--old")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm j_7 (ATerm t)
                          {
                            ATerm x_69 = NULL;
                            x_69 = t;
                            t = (ATerm) ATmakeAppl(sym_Old_Table_1, not_null(x_69));
                            return(t);
                          }
                          ATerm k_7 (ATerm t)
                          {
                            t = term_r_28;
                            return(t);
                          }
                          t = ArgOption_3(t, i_7, j_7, k_7);
                          ;
                          LocalPopChoice(h_28);
                        }
                      else
                        {
                          t = g_28;
                          {
                            ATerm s_28 = t;
                            int t_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm n_7 (ATerm t)
                                {
                                  ATerm z_69 = NULL;
                                  z_69 = t;
                                  r_69 :
                                  if(!(match_string(z_69, "--new")))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                ATerm o_7 (ATerm t)
                                {
                                  ATerm a_70 = NULL;
                                  a_70 = t;
                                  t = (ATerm) ATmakeAppl(sym_New_Table_1, not_null(a_70));
                                  return(t);
                                }
                                ATerm u_7 (ATerm t)
                                {
                                  t = term_d_29;
                                  return(t);
                                }
                                t = ArgOption_3(t, n_7, o_7, u_7);
                                ;
                                LocalPopChoice(t_28);
                              }
                            else
                              {
                                t = s_28;
                                t = output_options_0(t);
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
  t = option_wrap_2(t, r_6, pptable_diff_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Pptable_diff_0(t);
  return(t);
}

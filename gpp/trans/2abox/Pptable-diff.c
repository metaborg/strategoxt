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
ATerm term_o_28;
ATerm term_c_28;
ATerm term_r_27;
ATerm term_n_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_v_26;
ATerm term_j_26;
ATerm term_t_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_d_24;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_w_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_r_21;
ATerm term_q_21;
ATerm term_n_21;
ATerm term_k_21;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_c_19;
ATerm term_z_18;
ATerm term_v_18;
ATerm term_c_18;
ATerm term_x_17;
ATerm term_v_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_m_17;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_a_17;
ATerm term_y_16;
ATerm term_m_16;
ATerm term_i_16;
ATerm term_p_15;
ATerm term_f_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_g_10;
ATerm term_b_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_q_8;
ATerm term_p_8;
ATerm term_o_8;
ATerm term_k_8;
ATerm term_e_8;
ATerm term_v_7;
ATerm term_u_7;
void init_constant_terms (void)
{
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--saved-entry--", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("old-table", 0, ATtrue));
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("new-table", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(sym__2, term_d_17, term_e_17);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify old table with --old switch", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_v_10);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("please specify new table with --new switch", 0, ATtrue));
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(sym__2, term_v_12, term_w_10);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Obsolete entries: ", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("New entries: ", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Changed productions: ", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(sym_Patch_0);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_Prune_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_g_19, term_p_8);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_z_19);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_z_19);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym__2, term_q_20, term_p_8);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_o_8, term_p_8);
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(sym__2, term_y_21, term_z_21);
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(sym__2, term_w_22, term_p_8);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(sym__3, term_y_21, term_z_21, (ATerm) ATempty);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--patch          Bring old table up-o-date", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--prune          Remove obsolete pp entries", 0, ATtrue));
  ATprotect(&(term_c_28));
  term_c_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--old <table>    Old table", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("--new <table>    New table", 0, ATtrue));
}
ATerm fputc_0 (ATerm);
ATerm write_in_text_to_stream_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm f_87 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_1 (ATerm, ATerm o_91 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm i_96 (ATerm));
ATerm termid_set_1 (ATerm, ATerm q_96 (ATerm));
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
ATerm oncetd_1 (ATerm, ATerm l_70 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm i_90 (ATerm));
ATerm table_remove_0 (ATerm);
ATerm prune_0 (ATerm);
ATerm patch_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm diff_1 (ATerm, ATerm t_78 (ATerm));
ATerm UfShift_0 (ATerm);
ATerm Zip3_0 (ATerm);
ATerm Zip2_0 (ATerm);
ATerm Zip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm));
ATerm zip_1 (ATerm, ATerm e_77 (ATerm));
ATerm UfDecompose_0 (ATerm);
ATerm UfIdem_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm y_68 (ATerm), ATerm z_68 (ATerm));
ATerm for_3 (ATerm, ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm d_69 (ATerm));
ATerm diff_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm n_65 (ATerm));
ATerm S_1 (ATerm, ATerm q_65 (ATerm));
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm b_79 (ATerm), ATerm c_79 (ATerm));
ATerm union_1 (ATerm, ATerm x_78 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm z_80 (ATerm));
ATerm crush_3 (ATerm, ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm collect_om_1 (ATerm, ATerm t_79 (ATerm));
ATerm collect_1 (ATerm, ATerm u_79 (ATerm));
ATerm Fst_0 (ATerm);
ATerm table_keys_0 (ATerm);
ATerm table_rename_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm selector_2 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm));
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm y_75 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm w_83 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm h_84 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm c_67 (ATerm), ATerm d_67 (ATerm));
ATerm Arg2_2 (ATerm, ATerm o_65 (ATerm), ATerm p_65 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm h_69 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm h_96 (ATerm));
ATerm termid_check_1 (ATerm, ATerm o_96 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm notify_1 (ATerm, ATerm w_96 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm New_Table_1 (ATerm, ATerm m_59 (ATerm));
ATerm fetch_elem_1 (ATerm, ATerm j_75 (ATerm));
ATerm get_options_0 (ATerm);
ATerm option_value_2 (ATerm, ATerm j_90 (ATerm), ATerm k_90 (ATerm));
ATerm Old_Table_1 (ATerm, ATerm l_59 (ATerm));
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
ATerm register_usage_1 (ATerm, ATerm k_93 (ATerm));
ATerm Option_3 (ATerm, ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm v_80 (ATerm), ATerm w_80 (ATerm));
ATerm crush_2 (ATerm, ATerm o_84 (ATerm), ATerm p_84 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_88 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_91 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_93 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_93 (ATerm));
ATerm Program_1 (ATerm, ATerm d_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm e_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_92 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_75 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm a_58 (ATerm), ATerm b_58 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm r_86 (ATerm));
ATerm map_1 (ATerm, ATerm y_74 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm n_67 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm j_59 (ATerm), ATerm k_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm l_91 (ATerm), ATerm m_91 (ATerm));
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
        t = (ATerm) ATmakeAppl(sym__2, term_u_7, not_null(h_4));
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
ATerm WriteToFile_1 (ATerm t, ATerm f_87 (ATerm))
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
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_5), term_v_7);
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
                    t = f_87(t);
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
ATerm output_1 (ATerm t, ATerm o_91 (ATerm))
{
  ATerm q_5 = NULL,s_5 = NULL;
  t = o_91(t);
  {
    ATerm w_7;
    w_7 = t;
    {
      ATerm r_5 = NULL;
      ATerm c_8 = t;
      int d_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = term_e_8;
          t = get_config_0(t);
          ;
          LocalPopChoice(d_8);
        }
      else
        {
          t = c_8;
          t = term_k_8;
        }
      {
        r_5 = t;
        if(((q_5 != NULL) && (q_5 != r_5)))
          _fail(r_5);
        else
          q_5 = r_5;
      }
    }
    t = w_7;
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
          ATerm l_8 = t;
          int m_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm n_8;
              n_8 = t;
              {
                t = term_o_8;
                t = get_config_0(t);
              }
              t = n_8;
              LocalPopChoice(m_8);
              t = WriteToBinaryFile_0(t);
            }
          else
            {
              t = l_8;
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
ATerm OutId_1 (ATerm t, ATerm i_96 (ATerm))
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
          t = term_p_8;
          {
            t = i_96(t);
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
ATerm termid_set_1 (ATerm t, ATerm q_96 (ATerm))
{
  ATerm w_6 = NULL;
  ATerm y_6 = NULL;
  w_6 = t;
  {
    ATerm z_6 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_q_8, not_null(w_6));
    {
      t = OutId_1(t, q_96);
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
    t = (ATerm) ATmakeAppl(sym__2, term_x_8, not_null(l_7));
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_7)), term_b_9), term_y_8);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(b_8)), term_y_8), term_y_8);
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
          t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(j_8)), term_x_8), term_y_8);
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
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Escape_double_quote_0(t);
      ;
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm g_9 = t;
        int h_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape_backslash_0(t);
            ;
            LocalPopChoice(h_9);
          }
        else
          {
            t = g_9;
            t = Escape_linefeed_0(t);
          }
      }
    }
  return(t);
}
ATerm escape_chars_0 (ATerm t)
{
  ATerm i_9 = t;
  int j_9 = stack_ptr;
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
      LocalPopChoice(j_9);
    }
  else
    {
      t = i_9;
      {
        ATerm k_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, _id, escape_chars_0);
            ;
            LocalPopChoice(m_9);
          }
        else
          {
            t = k_9;
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
      ATerm o_9 = t;
      int r_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Arg_1(t, int_to_string_0);
          ;
          LocalPopChoice(r_9);
        }
      else
        {
          t = o_9;
          {
            ATerm s_9 = t;
            int t_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Arg2_2(t, int_to_string_0, int_to_string_0);
                ;
                LocalPopChoice(t_9);
              }
            else
              {
                t = s_9;
                {
                  ATerm v_9 = t;
                  int w_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = SOpt_2(t, _id, _id);
                      ;
                      LocalPopChoice(w_9);
                    }
                  else
                    {
                      t = v_9;
                      {
                        ATerm b_10 = t;
                        int c_10 = stack_ptr;
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
                            LocalPopChoice(c_10);
                          }
                        else
                          {
                            t = b_10;
                            {
                              ATerm e_10 = t;
                              int f_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = selector_2(t, int_to_string_0, _id);
                                  ;
                                  LocalPopChoice(f_10);
                                }
                              else
                                {
                                  t = e_10;
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
                                              t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_8)), term_g_10);
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
                                                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_8)), term_g_10);
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
ATerm oncetd_1 (ATerm t, ATerm l_70 (ATerm))
{
  ATerm u_9 (ATerm t)
  {
    ATerm h_10 = t;
    int j_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = l_70(t);
        ;
        LocalPopChoice(j_10);
      }
    else
      {
        t = h_10;
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
        ATerm m_10;
        m_10 = t;
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
        t = m_10;
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
    t = term_p_8;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm i_90 (ATerm))
{
  ATerm n_10;
  n_10 = t;
  {
    t = term_p_8;
    {
      t = i_90(t);
      t = check_option_0(t);
    }
  }
  t = n_10;
  return(t);
}
ATerm table_remove_0 (ATerm t)
{
  ATerm q_10 = NULL,r_10 = NULL;
  ATerm o_10;
  o_10 = t;
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
  t = o_10;
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
      t = (ATerm) ATmakeAppl(sym__2, term_v_10, not_null(x_10));
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
              t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(n_11));
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
                t = (ATerm) ATmakeAppl(sym__3, term_v_10, not_null(n_11), not_null(p_11));
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
                  ATerm z_10;
                  z_10 = t;
                  {
                    ATerm v_11 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_v_10, not_null(r_11));
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
                            t = (ATerm) ATmakeAppl(sym__3, term_v_10, (ATerm)ATmakeAppl(sym_Patched_1, not_null(r_11)), not_null(v_11));
                            t = table_put_0(t);
                          }
                        }
                      }
                    }
                  }
                  t = z_10;
                  {
                    ATerm y_11 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(r_11));
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
                      t = (ATerm) ATmakeAppl(sym__3, term_v_10, not_null(r_11), not_null(x_11));
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(e_13)), term_b_11), not_null(h_13)), term_a_11);
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
ATerm diff_1 (ATerm t, ATerm t_78 (ATerm))
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
            ATerm c_11 = t;
            int d_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                ;
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
                      ATerm u_0 (ATerm t)
                      {
                        t = not_null(t_13);
                        return(t);
                      }
                      t = HdMember_p__2(t, t_78, u_0);
                      t = x_13(t);
                      ;
                      LocalPopChoice(f_11);
                    }
                  else
                    {
                      t = e_11;
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
ATerm genzip_4 (ATerm t, ATerm z_76 (ATerm), ATerm a_77 (ATerm), ATerm b_77 (ATerm), ATerm c_77 (ATerm))
{
  ATerm q_15 (ATerm t)
  {
    ATerm g_11 = t;
    int l_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_76(t);
        ;
        LocalPopChoice(l_11);
      }
    else
      {
        t = g_11;
        {
          t = a_77(t);
          {
            t = _2(t, c_77, q_15);
            t = b_77(t);
          }
        }
      }
    return(t);
  }
  t = q_15(t);
  return(t);
}
ATerm zip_1 (ATerm t, ATerm e_77 (ATerm))
{
  t = genzip_4(t, Zip1_0, Zip2_0, Zip3_0, e_77);
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
            ATerm m_11;
            m_11 = t;
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
            t = m_11;
            {
              ATerm o_11;
              o_11 = t;
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
              t = o_11;
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
ATerm while_not_2 (ATerm t, ATerm y_68 (ATerm), ATerm z_68 (ATerm))
{
  ATerm p_17 (ATerm t)
  {
    ATerm s_11 = t;
    int z_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_68(t);
        ;
        LocalPopChoice(z_11);
      }
    else
      {
        t = s_11;
        {
          t = z_68(t);
          t = p_17(t);
        }
      }
    return(t);
  }
  t = p_17(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm b_69 (ATerm), ATerm c_69 (ATerm), ATerm d_69 (ATerm))
{
  t = b_69(t);
  t = while_not_2(t, c_69, d_69);
  return(t);
}
ATerm diff_0 (ATerm t)
{
  ATerm a_12 = t;
  int b_12 = stack_ptr;
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
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_0 (ATerm t)
            {
              ATerm e_12 = t;
              int f_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UfIdem_0(t);
                  ;
                  LocalPopChoice(f_12);
                }
              else
                {
                  t = e_12;
                  t = UfDecompose_0(t);
                }
              return(t);
            }
            t = _2(t, _id, y_0);
            ;
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            t = UfShift_0(t);
          }
        return(t);
      }
      t = for_3(t, v_0, w_0, x_0);
      ;
      LocalPopChoice(b_12);
    }
  else
    {
      t = a_12;
      t = diff_1(t, eq_0);
    }
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm n_65 (ATerm))
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
            t = n_65(t);
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
ATerm S_1 (ATerm t, ATerm q_65 (ATerm))
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
            t = q_65(t);
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
ATerm eq_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL;
  i_19 = t;
  h_19 :
  if(match_cons(i_19, sym__2))
    {
      j_19 = ATgetArgument(i_19, 0);
      k_19 = ATgetArgument(i_19, 1);
      if(((j_19 != NULL) && (j_19 != k_19)))
        _fail(k_19);
      else
        j_19 = k_19;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm b_79 (ATerm), ATerm c_79 (ATerm))
{
  ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
  q_19 = t;
  p_19 :
  if(((ATgetType(q_19) == AT_LIST) && !(ATisEmpty(q_19))))
    {
      r_19 = ATgetFirst((ATermList) q_19);
      s_19 = (ATerm) ATgetNext((ATermList) q_19);
      {
        t = c_79(t);
        {
          ATerm z_0 (ATerm t)
          {
            ATerm v_19 = NULL;
            v_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_19), not_null(v_19));
              t = b_79(t);
            }
            return(t);
          }
          t = fetch_1(t, z_0);
        }
        t = not_null(s_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm x_78 (ATerm))
{
  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
  b_20 = t;
  a_20 :
  if(match_cons(b_20, sym__2))
    {
      c_20 = ATgetArgument(b_20, 0);
      d_20 = ATgetArgument(b_20, 1);
      {
        t = not_null(c_20);
        {
          ATerm h_20 (ATerm t)
          {
            ATerm g_12 = t;
            int i_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(d_20);
                ;
                LocalPopChoice(i_12);
              }
            else
              {
                t = g_12;
                {
                  ATerm j_12 = t;
                  int k_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_1 (ATerm t)
                      {
                        t = not_null(d_20);
                        return(t);
                      }
                      t = HdMember_p__2(t, x_78, a_1);
                      t = h_20(t);
                      ;
                      LocalPopChoice(k_12);
                    }
                  else
                    {
                      t = j_12;
                      t = Cons_2(t, _id, h_20);
                    }
                }
              }
            return(t);
          }
          t = h_20(t);
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
ATerm foldr_3 (ATerm t, ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm z_80 (ATerm))
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_80(t);
      ;
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      {
        ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
        m_20 = t;
        l_20 :
        if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
          {
            n_20 = ATgetFirst((ATermList) m_20);
            o_20 = (ATerm) ATgetNext((ATermList) m_20);
            {
              ATerm r_20 = NULL,t_20 = NULL;
              ATerm n_12;
              n_12 = t;
              {
                ATerm s_20 = NULL;
                t = not_null(n_20);
                {
                  t = z_80(t);
                  {
                    s_20 = t;
                    if(((r_20 != NULL) && (r_20 != s_20)))
                      _fail(s_20);
                    else
                      r_20 = s_20;
                  }
                }
              }
              t = n_12;
              {
                ATerm u_20 = NULL;
                t = not_null(o_20);
                {
                  t = foldr_3(t, x_80, y_80, z_80);
                  {
                    u_20 = t;
                    if(((t_20 != NULL) && (t_20 != u_20)))
                      _fail(u_20);
                    else
                      t_20 = u_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), not_null(t_20));
                  t = y_80(t);
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
ATerm crush_3 (ATerm t, ATerm q_84 (ATerm), ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  ATerm c_21 = NULL;
  ATerm e_21 = NULL;
  c_21 = t;
  {
    ATerm f_21 = NULL;
    ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
    t = not_null(c_21);
    {
      f_21 = t;
      {
        t = SSL_explode_term(not_null(f_21));
        {
          h_21 = t;
          b_21 :
          if(match_cons(h_21, sym__2))
            {
              i_21 = ATgetArgument(h_21, 0);
              j_21 = ATgetArgument(h_21, 1);
              if(((e_21 != NULL) && (e_21 != j_21)))
                _fail(j_21);
              else
                e_21 = j_21;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_21);
      t = foldr_3(t, q_84, r_84, s_84);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm t_79 (ATerm))
{
  ATerm p_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_21 = NULL;
      ATerm p_21 = NULL;
      t = t_79(t);
      {
        p_21 = t;
        if(((o_21 != NULL) && (o_21 != p_21)))
          _fail(p_21);
        else
          o_21 = p_21;
      }
      t = (ATerm) ATinsert(ATempty, not_null(o_21));
      ;
      LocalPopChoice(u_12);
    }
  else
    {
      t = p_12;
      {
        ATerm b_1 (ATerm t)
        {
          t = (ATerm) ATempty;
          return(t);
        }
        ATerm c_1 (ATerm t)
        {
          t = collect_om_1(t, t_79);
          return(t);
        }
        t = crush_3(t, b_1, union_0, c_1);
      }
    }
  return(t);
}
ATerm collect_1 (ATerm t, ATerm u_79 (ATerm))
{
  t = collect_om_1(t, u_79);
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm g_23 = NULL;
  ATerm i_23 = NULL,j_23 = NULL;
  g_23 = t;
  {
    ATerm k_23 = NULL;
    ATerm m_23 = NULL,n_23 = NULL,o_23 = NULL,p_23 = NULL,q_23 = NULL;
    t = not_null(g_23);
    {
      k_23 = t;
      {
        t = SSL_explode_term(not_null(k_23));
        {
          m_23 = t;
          b_23 :
          if(match_cons(m_23, sym__2))
            {
              n_23 = ATgetArgument(m_23, 0);
              o_23 = ATgetArgument(m_23, 1);
              e_23 :
              if(match_string(n_23, ""))
                {
                  f_23 :
                  if(((ATgetType(o_23) == AT_LIST) && !(ATisEmpty(o_23))))
                    {
                      p_23 = ATgetFirst((ATermList) o_23);
                      q_23 = (ATerm) ATgetNext((ATermList) o_23);
                      {
                        if(((j_23 != NULL) && (j_23 != p_23)))
                          _fail(p_23);
                        else
                          j_23 = p_23;
                        if(((i_23 != NULL) && (i_23 != q_23)))
                          _fail(q_23);
                        else
                          i_23 = q_23;
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
    t = not_null(j_23);
  }
  return(t);
}
ATerm table_keys_0 (ATerm t)
{
  ATerm v_23 = NULL;
  v_23 = t;
  t = SSL_table_keys(not_null(v_23));
  return(t);
}
ATerm table_rename_0 (ATerm t)
{
  ATerm a_24 = NULL,b_24 = NULL,c_24 = NULL;
  a_24 = t;
  z_23 :
  if(match_cons(a_24, sym__2))
    {
      b_24 = ATgetArgument(a_24, 0);
      c_24 = ATgetArgument(a_24, 1);
      t = SSL_table_rename(not_null(b_24), not_null(c_24));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm mk_key_0 (ATerm t)
{
  ATerm r_24 = NULL,s_24 = NULL,t_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym_Path1_1))
    {
      s_24 = ATgetArgument(r_24, 0);
      t = (ATerm) ATinsert(ATempty, not_null(s_24));
    }
  else
    {
      if(match_cons(r_24, sym_Path_2))
        {
          s_24 = ATgetArgument(r_24, 0);
          t_24 = ATgetArgument(r_24, 1);
          {
            ATerm c_25 = NULL,q_25 = NULL;
            t = not_null(t_24);
            {
              ATerm d_1 (ATerm t)
              {
                ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL;
                j_25 = t;
                j_24 :
                if(match_cons(j_25, sym_selector_2))
                  {
                    k_25 = ATgetArgument(j_25, 0);
                    l_25 = ATgetArgument(j_25, 1);
                    t = not_null(k_25);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, d_1);
              {
                q_25 = t;
                {
                  if(((c_25 != NULL) && (c_25 != q_25)))
                    _fail(q_25);
                  else
                    c_25 = q_25;
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_25)), not_null(s_24));
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
  ATerm z_25 = NULL,a_26 = NULL,b_26 = NULL;
  z_25 = t;
  y_25 :
  if(match_cons(z_25, sym_PP_Entry_2))
    {
      a_26 = ATgetArgument(z_25, 0);
      b_26 = ATgetArgument(z_25, 1);
      {
        ATerm e_26 = NULL,g_26 = NULL;
        ATerm f_26 = NULL;
        t = not_null(a_26);
        {
          t = mk_key_0(t);
          {
            f_26 = t;
            if(((e_26 != NULL) && (e_26 != f_26)))
              _fail(f_26);
            else
              e_26 = f_26;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_12, not_null(e_26), (ATerm) ATmakeAppl(sym__2, not_null(a_26), not_null(b_26)));
          {
            t = table_put_0(t);
            {
              ATerm h_26 = NULL;
              t = not_null(a_26);
              {
                t = path_to_string_0(t);
                {
                  h_26 = t;
                  if(((g_26 != NULL) && (g_26 != h_26)))
                    _fail(h_26);
                  else
                    g_26 = h_26;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_26), not_null(b_26));
                {
                  ATerm e_1 (ATerm t)
                  {
                    t = term_w_12;
                    return(t);
                  }
                  t = notify_1(t, e_1);
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
ATerm selector_2 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm))
{
  ATerm r_26 = NULL,s_26 = NULL,t_26 = NULL;
  r_26 = t;
  q_26 :
  if(match_cons(r_26, sym_selector_2))
    {
      s_26 = ATgetArgument(r_26, 0);
      t_26 = ATgetArgument(r_26, 1);
      {
        ATerm x_26 = NULL,z_26 = NULL;
        ATerm y_26 = NULL;
        t = SSLgetAnnotations(not_null(r_26));
        {
          y_26 = t;
          if(((x_26 != NULL) && (x_26 != y_26)))
            _fail(y_26);
          else
            x_26 = y_26;
        }
        {
          t = not_null(s_26);
          {
            ATerm b_27 = NULL;
            t = l_65(t);
            {
              z_26 = t;
              {
                t = not_null(t_26);
                {
                  ATerm d_27 = NULL;
                  t = m_65(t);
                  {
                    b_27 = t;
                    {
                      ATerm e_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(z_26), not_null(b_27)), not_null(x_26));
                      {
                        e_27 = t;
                        if(((d_27 != NULL) && (d_27 != e_27)))
                          _fail(e_27);
                        else
                          d_27 = e_27;
                      }
                      t = not_null(d_27);
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
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL,y_27 = NULL,z_27 = NULL;
  v_27 = t;
  p_27 :
  if(((ATgetType(v_27) == AT_LIST) && !(ATisEmpty(v_27))))
    {
      w_27 = ATgetFirst((ATermList) v_27);
      x_27 = (ATerm) ATgetNext((ATermList) v_27);
      s_27 :
      if(match_int(w_27, 92))
        {
          t_27 :
          if(((ATgetType(x_27) == AT_LIST) && !(ATisEmpty(x_27))))
            {
              y_27 = ATgetFirst((ATermList) x_27);
              z_27 = (ATerm) ATgetNext((ATermList) x_27);
              u_27 :
              if(match_int(y_27, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_27)), term_x_12);
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
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL,k_28 = NULL,l_28 = NULL;
  h_28 = t;
  d_28 :
  if(((ATgetType(h_28) == AT_LIST) && !(ATisEmpty(h_28))))
    {
      i_28 = ATgetFirst((ATermList) h_28);
      j_28 = (ATerm) ATgetNext((ATermList) h_28);
      e_28 :
      if(match_int(i_28, 92))
        {
          f_28 :
          if(((ATgetType(j_28) == AT_LIST) && !(ATisEmpty(j_28))))
            {
              k_28 = ATgetFirst((ATermList) j_28);
              l_28 = (ATerm) ATgetNext((ATermList) j_28);
              g_28 :
              if(match_int(k_28, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_28)), term_u_7);
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
  ATerm t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL;
  t_28 = t;
  p_28 :
  if(((ATgetType(t_28) == AT_LIST) && !(ATisEmpty(t_28))))
    {
      u_28 = ATgetFirst((ATermList) t_28);
      v_28 = (ATerm) ATgetNext((ATermList) t_28);
      q_28 :
      if(match_int(u_28, 92))
        {
          r_28 :
          if(((ATgetType(v_28) == AT_LIST) && !(ATisEmpty(v_28))))
            {
              w_28 = ATgetFirst((ATermList) v_28);
              x_28 = (ATerm) ATgetNext((ATermList) v_28);
              s_28 :
              if(match_int(w_28, 92))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_28)), term_y_8);
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
  ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL,i_29 = NULL,j_29 = NULL;
  f_29 = t;
  b_29 :
  if(((ATgetType(f_29) == AT_LIST) && !(ATisEmpty(f_29))))
    {
      g_29 = ATgetFirst((ATermList) f_29);
      h_29 = (ATerm) ATgetNext((ATermList) f_29);
      c_29 :
      if(match_int(g_29, 92))
        {
          d_29 :
          if(((ATgetType(h_29) == AT_LIST) && !(ATisEmpty(h_29))))
            {
              i_29 = ATgetFirst((ATermList) h_29);
              j_29 = (ATerm) ATgetNext((ATermList) h_29);
              e_29 :
              if(match_int(i_29, 34))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_29)), term_x_8);
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
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_double_quote_0(t);
      ;
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm a_13 = t;
        int f_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UnEscape_backslash_0(t);
            ;
            LocalPopChoice(f_13);
          }
        else
          {
            t = a_13;
            {
              ATerm g_13 = t;
              int k_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UnEscape_linefeed_0(t);
                  ;
                  LocalPopChoice(k_13);
                }
              else
                {
                  t = g_13;
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
    ATerm l_13 = t;
    int m_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, unescape_chars_0);
        ;
        LocalPopChoice(m_13);
      }
    else
      {
        t = l_13;
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
ATerm at_last_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm u_29 (ATerm t)
  {
    ATerm n_13 = t;
    int o_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = y_75(t);
        ;
        LocalPopChoice(o_13);
      }
    else
      {
        t = n_13;
        t = Cons_2(t, _id, u_29);
      }
    return(t);
  }
  t = u_29(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  w_29 :
  if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
    {
      y_29 = ATgetFirst((ATermList) x_29);
      z_29 = (ATerm) ATgetNext((ATermList) x_29);
      t = not_null(z_29);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm f_30 = NULL,g_30 = NULL,h_30 = NULL;
  f_30 = t;
  d_30 :
  if(((ATgetType(f_30) == AT_LIST) && !(ATisEmpty(f_30))))
    {
      g_30 = ATgetFirst((ATermList) f_30);
      h_30 = (ATerm) ATgetNext((ATermList) f_30);
      e_30 :
      if(((ATgetType(h_30) == AT_LIST) && ATisEmpty(h_30)))
        {
          t = not_null(g_30);
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
  ATerm p_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(u_13);
    }
  else
    {
      t = p_13;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  m_30 :
  if(((ATgetType(r_30) == AT_LIST) && !(ATisEmpty(r_30))))
    {
      s_30 = ATgetFirst((ATermList) r_30);
      t_30 = (ATerm) ATgetNext((ATermList) r_30);
      t = not_null(s_30);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm v_13;
  v_13 = t;
  {
    t = Hd_0(t);
    t = w_83(t);
  }
  t = v_13;
  {
    ATerm w_13;
    w_13 = t;
    {
      t = last_0(t);
      t = w_83(t);
    }
    t = w_13;
    {
      t = Tl_0(t);
      t = init_0(t);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm x_30 = NULL;
    x_30 = t;
    w_30 :
    if(!(match_int(x_30, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, f_1);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm h_84 (ATerm))
{
  t = explode_string_0(t);
  {
    t = h_84(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, un_double_quote_chars_0);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm c_67 (ATerm), ATerm d_67 (ATerm))
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym_SOpt_2))
    {
      f_31 = ATgetArgument(e_31, 0);
      g_31 = ATgetArgument(e_31, 1);
      {
        ATerm k_31 = NULL,m_31 = NULL;
        ATerm l_31 = NULL;
        t = SSLgetAnnotations(not_null(e_31));
        {
          l_31 = t;
          if(((k_31 != NULL) && (k_31 != l_31)))
            _fail(l_31);
          else
            k_31 = l_31;
        }
        {
          t = not_null(f_31);
          {
            ATerm o_31 = NULL;
            t = c_67(t);
            {
              m_31 = t;
              {
                t = not_null(g_31);
                {
                  ATerm q_31 = NULL;
                  t = d_67(t);
                  {
                    o_31 = t;
                    {
                      ATerm r_31 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(m_31), not_null(o_31)), not_null(k_31));
                      {
                        r_31 = t;
                        if(((q_31 != NULL) && (q_31 != r_31)))
                          _fail(r_31);
                        else
                          q_31 = r_31;
                      }
                      t = not_null(q_31);
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
ATerm Arg2_2 (ATerm t, ATerm o_65 (ATerm), ATerm p_65 (ATerm))
{
  ATerm f_32 = NULL,g_32 = NULL,h_32 = NULL;
  f_32 = t;
  e_32 :
  if(match_cons(f_32, sym_Arg2_2))
    {
      g_32 = ATgetArgument(f_32, 0);
      h_32 = ATgetArgument(f_32, 1);
      {
        ATerm l_32 = NULL,n_32 = NULL;
        ATerm m_32 = NULL;
        t = SSLgetAnnotations(not_null(f_32));
        {
          m_32 = t;
          if(((l_32 != NULL) && (l_32 != m_32)))
            _fail(m_32);
          else
            l_32 = m_32;
        }
        {
          t = not_null(g_32);
          {
            ATerm p_32 = NULL;
            t = o_65(t);
            {
              n_32 = t;
              {
                t = not_null(h_32);
                {
                  ATerm r_32 = NULL;
                  t = p_65(t);
                  {
                    p_32 = t;
                    {
                      ATerm s_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, not_null(n_32), not_null(p_32)), not_null(l_32));
                      {
                        s_32 = t;
                        if(((r_32 != NULL) && (r_32 != s_32)))
                          _fail(s_32);
                        else
                          r_32 = s_32;
                      }
                      t = not_null(r_32);
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
  ATerm y_13 = t;
  int g_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1(t, string_to_int_0);
      ;
      LocalPopChoice(g_14);
    }
  else
    {
      t = y_13;
      {
        ATerm h_14 = t;
        int i_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg2_2(t, string_to_int_0, string_to_int_0);
            ;
            LocalPopChoice(i_14);
          }
        else
          {
            t = h_14;
            {
              ATerm j_14 = t;
              int k_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2(t, _id, _id);
                  ;
                  LocalPopChoice(k_14);
                }
              else
                {
                  t = j_14;
                  {
                    ATerm p_14 = t;
                    int q_14 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm g_1 (ATerm t)
                        {
                          t = un_double_quote_0(t);
                          t = unescape_0(t);
                          return(t);
                        }
                        t = S_1(t, g_1);
                        ;
                        LocalPopChoice(q_14);
                      }
                    else
                      {
                        t = p_14;
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
ATerm topdown_1 (ATerm t, ATerm h_69 (ATerm))
{
  t = h_69(t);
  {
    ATerm h_1 (ATerm t)
    {
      t = topdown_1(t, h_69);
      return(t);
    }
    t = _all(t, h_1);
  }
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm i_1 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, i_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm a_33 = NULL,b_33 = NULL;
  a_33 = t;
  z_32 :
  if(match_cons(a_33, sym_PP_Table_1))
    {
      b_33 = ATgetArgument(a_33, 0);
      {
        t = not_null(b_33);
        {
          t = reverse_0(t);
          {
            ATerm j_1 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, j_1);
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
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_1 (ATerm t)
      {
        t = term_d_15;
        return(t);
      }
      t = has_option_1(t, k_1);
      {
        t = (ATerm) ATinsert(ATempty, term_e_15);
        t = fatal_error_0(t);
      }
      ;
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        t = (ATerm) ATinsert(ATempty, term_f_15);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm h_96 (ATerm))
{
  ATerm m_33 = NULL,n_33 = NULL,o_33 = NULL;
  m_33 = t;
  k_33 :
  if(match_cons(m_33, sym__2))
    {
      n_33 = ATgetArgument(m_33, 0);
      o_33 = ATgetArgument(m_33, 1);
      l_33 :
      if(match_string(n_33, "in-type"))
        {
          ATerm q_33 = NULL,r_33 = NULL;
          ATerm g_15;
          g_15 = t;
          {
            ATerm s_33 = NULL;
            ATerm u_33 = NULL,v_33 = NULL,w_33 = NULL,x_33 = NULL,y_33 = NULL;
            t = not_null(o_33);
            {
              s_33 = t;
              {
                t = SSL_explode_term(not_null(s_33));
                {
                  u_33 = t;
                  h_33 :
                  if(match_cons(u_33, sym__2))
                    {
                      v_33 = ATgetArgument(u_33, 0);
                      w_33 = ATgetArgument(u_33, 1);
                      i_33 :
                      if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
                        {
                          x_33 = ATgetFirst((ATermList) w_33);
                          y_33 = (ATerm) ATgetNext((ATermList) w_33);
                          j_33 :
                          if(((ATgetType(y_33) == AT_LIST) && ATisEmpty(y_33)))
                            {
                              {
                                if(((r_33 != NULL) && (r_33 != v_33)))
                                  _fail(v_33);
                                else
                                  r_33 = v_33;
                                if(((q_33 != NULL) && (q_33 != x_33)))
                                  _fail(x_33);
                                else
                                  q_33 = x_33;
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
          t = g_15;
          {
            t = not_null(r_33);
            {
              ATerm h_15 = t;
              int i_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = h_96(t);
                  ;
                  LocalPopChoice(i_15);
                }
              else
                {
                  t = h_15;
                  t = type_failure_0(t);
                }
            }
            t = not_null(q_33);
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
ATerm termid_check_1 (ATerm t, ATerm o_96 (ATerm))
{
  ATerm e_34 = NULL;
  ATerm g_34 = NULL;
  e_34 = t;
  {
    ATerm h_34 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_p_15, not_null(e_34));
    {
      t = InId_1(t, o_96);
      {
        h_34 = t;
        if(((g_34 != NULL) && (g_34 != h_34)))
          _fail(h_34);
        else
          g_34 = h_34;
      }
    }
    t = not_null(g_34);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm n_34 = NULL,o_34 = NULL;
  ATerm u_34 (ATerm t)
  {
    t = SSL_fclose(not_null(o_34));
    return(t);
  }
  o_34 = t;
  m_34 :
  if(match_cons(o_34, sym_Stream_1))
    {
      n_34 = ATgetArgument(o_34, 0);
      {
        ATerm r_15 = t;
        int s_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(n_34));
            ;
            LocalPopChoice(s_15);
          }
        else
          {
            t = r_15;
            t = u_34(t);
          }
      }
    }
  else
    {
      t = u_34(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm x_34 = NULL,y_34 = NULL;
  x_34 = t;
  w_34 :
  if(match_cons(x_34, sym_Stream_1))
    {
      y_34 = ATgetArgument(x_34, 0);
      t = SSL_read_term_from_stream(not_null(y_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  d_35 :
  if(match_cons(e_35, sym__2))
    {
      f_35 = ATgetArgument(e_35, 0);
      g_35 = ATgetArgument(e_35, 1);
      {
        ATerm j_35 = NULL;
        t = SSL_fopen(not_null(f_35), not_null(g_35));
        {
          ATerm k_35 = NULL;
          k_35 = t;
          if(((j_35 != NULL) && (j_35 != k_35)))
            _fail(k_35);
          else
            j_35 = k_35;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(j_35));
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
  ATerm o_35 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm p_35 = NULL;
    p_35 = t;
    if(((o_35 != NULL) && (o_35 != p_35)))
      _fail(p_35);
    else
      o_35 = p_35;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(o_35));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm s_35 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm t_35 = NULL;
    t_35 = t;
    if(((s_35 != NULL) && (s_35 != t_35)))
      _fail(t_35);
    else
      s_35 = t_35;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(s_35));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm w_35 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm x_35 = NULL;
    x_35 = t;
    if(((w_35 != NULL) && (w_35 != x_35)))
      _fail(x_35);
    else
      w_35 = x_35;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(w_35));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  c_36 :
  if(match_cons(d_36, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(d_36, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(d_36, sym_stdin_0))
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
  ATerm l_36 = NULL,o_36 = NULL,p_36 = NULL;
  l_36 = t;
  k_36 :
  if(match_cons(l_36, sym__2))
    {
      o_36 = ATgetArgument(l_36, 0);
      p_36 = ATgetArgument(l_36, 1);
      {
        ATerm t_15 = t;
        int v_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(v_15);
          }
        else
          {
            t = t_15;
            {
              ATerm w_15 = t;
              int y_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_1 (ATerm t)
                  {
                    ATerm q_36 = NULL,s_36 = NULL;
                    q_36 = t;
                    j_36 :
                    if(match_cons(q_36, sym_Path_1))
                      {
                        s_36 = ATgetArgument(q_36, 0);
                        t = not_null(s_36);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, l_1, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(y_15);
                }
              else
                {
                  t = w_15;
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
  ATerm n_37 = NULL;
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_37 = NULL;
      ATerm m_37 = NULL;
      m_37 = t;
      if(((l_37 != NULL) && (l_37 != m_37)))
        _fail(m_37);
      else
        l_37 = m_37;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_37), term_i_16);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
        ATerm m_1 (ATerm t)
        {
          t = term_m_16;
          return(t);
        }
        t = debug_1(t, m_1);
        _fail(t);
      }
    }
  {
    ATerm s_16;
    s_16 = t;
    {
      ATerm o_37 = NULL;
      t = read_from_stream_0(t);
      {
        o_37 = t;
        if(((n_37 != NULL) && (n_37 != o_37)))
          _fail(o_37);
        else
          n_37 = o_37;
      }
    }
    t = s_16;
    {
      t = fclose_0(t);
      t = not_null(n_37);
    }
  }
  return(t);
}
ATerm notify_1 (ATerm t, ATerm w_96 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    t = debug_1(t, w_96);
    return(t);
  }
  t = if_verbose1_1(t, n_1);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm t_37 = NULL;
  t_37 = t;
  {
    t = term_v_12;
    {
      t = table_create_0(t);
      {
        t = not_null(t_37);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm p_1 (ATerm t)
            {
              t = term_y_16;
              return(t);
            }
            t = notify_1(t, p_1);
            {
              t = ReadFromFile_0(t);
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm v_37 = NULL;
                  v_37 = t;
                  s_37 :
                  if(!(match_string(v_37, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, q_1);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, o_1);
        }
      }
    }
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm z_16;
  z_16 = t;
  {
    ATerm y_37 = NULL;
    ATerm z_37 = NULL;
    z_37 = t;
    if(((y_37 != NULL) && (y_37 != z_37)))
      _fail(z_37);
    else
      y_37 = z_37;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_17, not_null(y_37));
      t = printnl_0(t);
    }
  }
  t = z_16;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm b_17;
  b_17 = t;
  {
    t = error_0(t);
    {
      t = term_c_17;
      t = exit_0(t);
    }
  }
  t = b_17;
  return(t);
}
ATerm New_Table_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm g_38 = NULL,h_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_New_Table_1))
    {
      h_38 = ATgetArgument(g_38, 0);
      {
        ATerm k_38 = NULL,m_38 = NULL;
        ATerm l_38 = NULL;
        t = SSLgetAnnotations(not_null(g_38));
        {
          l_38 = t;
          if(((k_38 != NULL) && (k_38 != l_38)))
            _fail(l_38);
          else
            k_38 = l_38;
        }
        {
          t = not_null(h_38);
          {
            ATerm o_38 = NULL;
            t = m_59(t);
            {
              m_38 = t;
              {
                ATerm p_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_New_Table_1, not_null(m_38)), not_null(k_38));
                {
                  p_38 = t;
                  if(((o_38 != NULL) && (o_38 != p_38)))
                    _fail(p_38);
                  else
                    o_38 = p_38;
                }
                t = not_null(o_38);
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
ATerm fetch_elem_1 (ATerm t, ATerm j_75 (ATerm))
{
  ATerm v_38 = NULL;
  ATerm r_1 (ATerm t)
  {
    ATerm w_38 = NULL;
    t = j_75(t);
    {
      w_38 = t;
      if(((v_38 != NULL) && (v_38 != w_38)))
        _fail(w_38);
      else
        v_38 = w_38;
    }
    return(t);
  }
  t = fetch_1(t, r_1);
  t = not_null(v_38);
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = term_m_17;
  t = table_get_0(t);
  return(t);
}
ATerm option_value_2 (ATerm t, ATerm j_90 (ATerm), ATerm k_90 (ATerm))
{
  ATerm o_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = get_options_0(t);
      t = fetch_elem_1(t, j_90);
      ;
      LocalPopChoice(q_17);
    }
  else
    {
      t = o_17;
      t = k_90(t);
    }
  return(t);
}
ATerm Old_Table_1 (ATerm t, ATerm l_59 (ATerm))
{
  ATerm h_39 = NULL,i_39 = NULL;
  h_39 = t;
  g_39 :
  if(match_cons(h_39, sym_Old_Table_1))
    {
      i_39 = ATgetArgument(h_39, 0);
      {
        ATerm l_39 = NULL,n_39 = NULL;
        ATerm m_39 = NULL;
        t = SSLgetAnnotations(not_null(h_39));
        {
          m_39 = t;
          if(((l_39 != NULL) && (l_39 != m_39)))
            _fail(m_39);
          else
            l_39 = m_39;
        }
        {
          t = not_null(i_39);
          {
            ATerm p_39 = NULL;
            t = l_59(t);
            {
              n_39 = t;
              {
                ATerm q_39 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Old_Table_1, not_null(n_39)), not_null(l_39));
                {
                  q_39 = t;
                  if(((p_39 != NULL) && (p_39 != q_39)))
                    _fail(q_39);
                  else
                    p_39 = q_39;
                }
                t = not_null(p_39);
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
  ATerm g_41 = NULL,i_41 = NULL,k_41 = NULL;
  ATerm s_1 (ATerm t)
  {
    ATerm u_1 (ATerm t)
    {
      ATerm h_41 = NULL;
      h_41 = t;
      if(((g_41 != NULL) && (g_41 != h_41)))
        _fail(h_41);
      else
        g_41 = h_41;
      return(t);
    }
    t = Old_Table_1(t, u_1);
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, term_s_17);
    t = fatal_error_0(t);
    return(t);
  }
  t = option_value_2(t, s_1, t_1);
  {
    t = (ATerm) ATinsert(ATempty, not_null(g_41));
    {
      t = read_pp_tables_0(t);
      {
        t = term_t_17;
        {
          t = table_rename_0(t);
          {
            ATerm v_1 (ATerm t)
            {
              ATerm x_1 (ATerm t)
              {
                ATerm j_41 = NULL;
                j_41 = t;
                if(((i_41 != NULL) && (i_41 != j_41)))
                  _fail(j_41);
                else
                  i_41 = j_41;
                return(t);
              }
              t = New_Table_1(t, x_1);
              return(t);
            }
            ATerm w_1 (ATerm t)
            {
              t = (ATerm) ATinsert(ATempty, term_u_17);
              t = fatal_error_0(t);
              return(t);
            }
            t = option_value_2(t, v_1, w_1);
            {
              t = (ATerm) ATinsert(ATempty, not_null(i_41));
              {
                t = read_pp_tables_0(t);
                {
                  t = term_v_17;
                  {
                    t = table_rename_0(t);
                    {
                      t = term_v_10;
                      {
                        ATerm m_41 = NULL;
                        t = table_keys_0(t);
                        {
                          k_41 = t;
                          {
                            t = term_w_10;
                            {
                              ATerm o_41 = NULL;
                              t = table_keys_0(t);
                              {
                                m_41 = t;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_41), not_null(m_41));
                                  {
                                    ATerm u_41 = NULL;
                                    t = diff_0(t);
                                    {
                                      o_41 = t;
                                      {
                                        ATerm y_1 (ATerm t)
                                        {
                                          ATerm q_41 = NULL;
                                          ATerm r_41 = NULL;
                                          r_41 = t;
                                          if(((q_41 != NULL) && (q_41 != r_41)))
                                            _fail(r_41);
                                          else
                                            q_41 = r_41;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, term_v_10, not_null(q_41));
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
                                        t = map_1(t, y_1);
                                        {
                                          ATerm a_2 (ATerm t)
                                          {
                                            ATerm s_41 = NULL;
                                            ATerm w_17 = t;
                                            if((PushChoice() == 0))
                                              {
                                                t = Nil_0(t);
                                                PopChoice();
                                                _fail(t);
                                              }
                                            else
                                              {
                                                t = w_17;
                                              }
                                            {
                                              ATerm t_41 = NULL;
                                              t_41 = t;
                                              if(((s_41 != NULL) && (s_41 != t_41)))
                                                _fail(t_41);
                                              else
                                                s_41 = t_41;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_41)), term_x_17));
                                                t = printnl_0(t);
                                              }
                                            }
                                            return(t);
                                          }
                                          t = try_1(t, a_2);
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(m_41), not_null(k_41));
                                            {
                                              ATerm u_42 = NULL;
                                              t = diff_0(t);
                                              {
                                                u_41 = t;
                                                {
                                                  ATerm b_2 (ATerm t)
                                                  {
                                                    ATerm w_41 = NULL;
                                                    ATerm x_41 = NULL;
                                                    x_41 = t;
                                                    if(((w_41 != NULL) && (w_41 != x_41)))
                                                      _fail(x_41);
                                                    else
                                                      w_41 = x_41;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(w_41));
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
                                                  t = map_1(t, b_2);
                                                  {
                                                    ATerm c_2 (ATerm t)
                                                    {
                                                      ATerm y_41 = NULL;
                                                      ATerm b_18 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = Nil_0(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = b_18;
                                                        }
                                                      {
                                                        ATerm z_41 = NULL;
                                                        z_41 = t;
                                                        if(((y_41 != NULL) && (y_41 != z_41)))
                                                          _fail(z_41);
                                                        else
                                                          y_41 = z_41;
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_41)), term_c_18));
                                                          t = printnl_0(t);
                                                        }
                                                      }
                                                      return(t);
                                                    }
                                                    t = try_1(t, c_2);
                                                    {
                                                      t = not_null(k_41);
                                                      {
                                                        ATerm k_43 = NULL;
                                                        ATerm d_2 (ATerm t)
                                                        {
                                                          ATerm a_42 = NULL;
                                                          ATerm c_42 = NULL,d_42 = NULL;
                                                          a_42 = t;
                                                          {
                                                            ATerm e_42 = NULL,r_42 = NULL,s_42 = NULL,t_42 = NULL;
                                                            ATerm f_42 = NULL;
                                                            f_42 = t;
                                                            if(((e_42 != NULL) && (e_42 != f_42)))
                                                              _fail(f_42);
                                                            else
                                                              e_42 = f_42;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, term_v_10, not_null(e_42));
                                                              {
                                                                t = table_get_0(t);
                                                                {
                                                                  ATerm e_2 (ATerm t)
                                                                  {
                                                                    ATerm f_2 (ATerm t)
                                                                    {
                                                                      ATerm g_18 = t;
                                                                      int j_18 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = S_1(t, _id);
                                                                          ;
                                                                          LocalPopChoice(j_18);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = g_18;
                                                                          {
                                                                            ATerm k_18 = t;
                                                                            int l_18 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Arg_1(t, _id);
                                                                                ;
                                                                                LocalPopChoice(l_18);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = k_18;
                                                                                {
                                                                                  ATerm g_42 = NULL,n_42 = NULL,o_42 = NULL;
                                                                                  g_42 = t;
                                                                                  l_40 :
                                                                                  if(match_cons(g_42, sym_Arg2_2))
                                                                                    {
                                                                                      n_42 = ATgetArgument(g_42, 0);
                                                                                      o_42 = ATgetArgument(g_42, 1);
                                                                                      t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(n_42));
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
                                                                    t = collect_1(t, f_2);
                                                                    return(t);
                                                                  }
                                                                  t = _2(t, _id, e_2);
                                                                  {
                                                                    r_42 = t;
                                                                    n_40 :
                                                                    if(match_cons(r_42, sym__2))
                                                                      {
                                                                        s_42 = ATgetArgument(r_42, 0);
                                                                        t_42 = ATgetArgument(r_42, 1);
                                                                        {
                                                                          if(((c_42 != NULL) && (c_42 != s_42)))
                                                                            _fail(s_42);
                                                                          else
                                                                            c_42 = s_42;
                                                                          if(((d_42 != NULL) && (d_42 != t_42)))
                                                                            _fail(t_42);
                                                                          else
                                                                            d_42 = t_42;
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
                                                            t = (ATerm) ATmakeAppl(sym__3, not_null(a_42), not_null(c_42), not_null(d_42));
                                                          }
                                                          return(t);
                                                        }
                                                        t = map_1(t, d_2);
                                                        {
                                                          u_42 = t;
                                                          {
                                                            t = not_null(m_41);
                                                            {
                                                              ATerm m_43 = NULL;
                                                              ATerm g_2 (ATerm t)
                                                              {
                                                                ATerm w_42 = NULL;
                                                                ATerm y_42 = NULL,z_42 = NULL;
                                                                w_42 = t;
                                                                {
                                                                  ATerm a_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL;
                                                                  ATerm b_43 = NULL;
                                                                  b_43 = t;
                                                                  if(((a_43 != NULL) && (a_43 != b_43)))
                                                                    _fail(b_43);
                                                                  else
                                                                    a_43 = b_43;
                                                                  {
                                                                    t = (ATerm) ATmakeAppl(sym__2, term_w_10, not_null(a_43));
                                                                    {
                                                                      t = table_get_0(t);
                                                                      {
                                                                        ATerm h_2 (ATerm t)
                                                                        {
                                                                          ATerm i_2 (ATerm t)
                                                                          {
                                                                            ATerm m_18 = t;
                                                                            int n_18 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = S_1(t, _id);
                                                                                ;
                                                                                LocalPopChoice(n_18);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = m_18;
                                                                                {
                                                                                  ATerm o_18 = t;
                                                                                  int p_18 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = Arg_1(t, _id);
                                                                                      ;
                                                                                      LocalPopChoice(p_18);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = o_18;
                                                                                      {
                                                                                        ATerm c_43 = NULL,d_43 = NULL,e_43 = NULL;
                                                                                        c_43 = t;
                                                                                        s_40 :
                                                                                        if(match_cons(c_43, sym_Arg2_2))
                                                                                          {
                                                                                            d_43 = ATgetArgument(c_43, 0);
                                                                                            e_43 = ATgetArgument(c_43, 1);
                                                                                            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(d_43));
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
                                                                          t = collect_1(t, i_2);
                                                                          return(t);
                                                                        }
                                                                        t = _2(t, _id, h_2);
                                                                        {
                                                                          h_43 = t;
                                                                          u_40 :
                                                                          if(match_cons(h_43, sym__2))
                                                                            {
                                                                              i_43 = ATgetArgument(h_43, 0);
                                                                              j_43 = ATgetArgument(h_43, 1);
                                                                              {
                                                                                if(((y_42 != NULL) && (y_42 != i_43)))
                                                                                  _fail(i_43);
                                                                                else
                                                                                  y_42 = i_43;
                                                                                if(((z_42 != NULL) && (z_42 != j_43)))
                                                                                  _fail(j_43);
                                                                                else
                                                                                  z_42 = j_43;
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
                                                                  t = (ATerm) ATmakeAppl(sym__3, not_null(w_42), not_null(y_42), not_null(z_42));
                                                                }
                                                                return(t);
                                                              }
                                                              t = map_1(t, g_2);
                                                              {
                                                                k_43 = t;
                                                                {
                                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_42), not_null(k_43));
                                                                  {
                                                                    t = diff_0(t);
                                                                    {
                                                                      ATerm q_18;
                                                                      q_18 = t;
                                                                      {
                                                                        ATerm s_43 = NULL;
                                                                        ATerm j_2 (ATerm t)
                                                                        {
                                                                          ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL,q_43 = NULL;
                                                                          n_43 = t;
                                                                          x_40 :
                                                                          if(match_cons(n_43, sym__3))
                                                                            {
                                                                              o_43 = ATgetArgument(n_43, 0);
                                                                              p_43 = ATgetArgument(n_43, 1);
                                                                              q_43 = ATgetArgument(n_43, 2);
                                                                              t = not_null(o_43);
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, j_2);
                                                                        {
                                                                          s_43 = t;
                                                                          if(((m_43 != NULL) && (m_43 != s_43)))
                                                                            _fail(s_43);
                                                                          else
                                                                            m_43 = s_43;
                                                                        }
                                                                      }
                                                                      t = q_18;
                                                                      {
                                                                        ATerm k_2 (ATerm t)
                                                                        {
                                                                          ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
                                                                          t_43 = t;
                                                                          a_41 :
                                                                          if(match_cons(t_43, sym__3))
                                                                            {
                                                                              u_43 = ATgetArgument(t_43, 0);
                                                                              v_43 = ATgetArgument(t_43, 1);
                                                                              w_43 = ATgetArgument(t_43, 2);
                                                                              {
                                                                                t = not_null(v_43);
                                                                                t = path_to_string_0(t);
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              _fail(t);
                                                                            }
                                                                          return(t);
                                                                        }
                                                                        t = map_1(t, k_2);
                                                                        {
                                                                          ATerm l_2 (ATerm t)
                                                                          {
                                                                            ATerm y_43 = NULL;
                                                                            ATerm u_18 = t;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = Nil_0(t);
                                                                                PopChoice();
                                                                                _fail(t);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = u_18;
                                                                              }
                                                                            {
                                                                              ATerm z_43 = NULL;
                                                                              z_43 = t;
                                                                              if(((y_43 != NULL) && (y_43 != z_43)))
                                                                                _fail(z_43);
                                                                              else
                                                                                y_43 = z_43;
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_43)), term_v_18));
                                                                                t = printnl_0(t);
                                                                              }
                                                                            }
                                                                            return(t);
                                                                          }
                                                                          t = try_1(t, l_2);
                                                                          {
                                                                            ATerm m_2 (ATerm t)
                                                                            {
                                                                              ATerm q_2 (ATerm t)
                                                                              {
                                                                                t = term_z_18;
                                                                                return(t);
                                                                              }
                                                                              t = has_option_1(t, q_2);
                                                                              {
                                                                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_41), not_null(m_43));
                                                                                t = patch_0(t);
                                                                              }
                                                                              return(t);
                                                                            }
                                                                            t = try_1(t, m_2);
                                                                            {
                                                                              ATerm r_2 (ATerm t)
                                                                              {
                                                                                ATerm s_2 (ATerm t)
                                                                                {
                                                                                  t = term_c_19;
                                                                                  return(t);
                                                                                }
                                                                                t = has_option_1(t, s_2);
                                                                                {
                                                                                  t = not_null(o_41);
                                                                                  t = prune_0(t);
                                                                                }
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, r_2);
                                                                              {
                                                                                ATerm t_2 (ATerm t)
                                                                                {
                                                                                  ATerm h_44 = NULL;
                                                                                  ATerm d_19 = t;
                                                                                  int e_19 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      ATerm u_2 (ATerm t)
                                                                                      {
                                                                                        t = term_z_18;
                                                                                        return(t);
                                                                                      }
                                                                                      t = has_option_1(t, u_2);
                                                                                      ;
                                                                                      LocalPopChoice(e_19);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_19;
                                                                                      {
                                                                                        ATerm v_2 (ATerm t)
                                                                                        {
                                                                                          t = term_c_19;
                                                                                          return(t);
                                                                                        }
                                                                                        t = has_option_1(t, v_2);
                                                                                      }
                                                                                    }
                                                                                  {
                                                                                    t = term_v_10;
                                                                                    {
                                                                                      t = table_getlist_0(t);
                                                                                      {
                                                                                        ATerm w_2 (ATerm t)
                                                                                        {
                                                                                          ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL;
                                                                                          a_44 = t;
                                                                                          d_41 :
                                                                                          if(match_cons(a_44, sym__2))
                                                                                            {
                                                                                              b_44 = ATgetArgument(a_44, 0);
                                                                                              c_44 = ATgetArgument(a_44, 1);
                                                                                              e_41 :
                                                                                              if(match_cons(c_44, sym__2))
                                                                                                {
                                                                                                  d_44 = ATgetArgument(c_44, 0);
                                                                                                  e_44 = ATgetArgument(c_44, 1);
                                                                                                  t = (ATerm) ATmakeAppl(sym_PP_Entry_2, not_null(d_44), not_null(e_44));
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
                                                                                        t = map_1(t, w_2);
                                                                                        {
                                                                                          t = desugar_0(t);
                                                                                          {
                                                                                            ATerm i_44 = NULL;
                                                                                            i_44 = t;
                                                                                            if(((h_44 != NULL) && (h_44 != i_44)))
                                                                                              _fail(i_44);
                                                                                            else
                                                                                              h_44 = i_44;
                                                                                            {
                                                                                              t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(h_44));
                                                                                              {
                                                                                                ATerm x_2 (ATerm t)
                                                                                                {
                                                                                                  t = term_f_19;
                                                                                                  return(t);
                                                                                                }
                                                                                                t = termid_set_1(t, x_2);
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
                                                                                t = try_1(t, t_2);
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
  ATerm y_2 (ATerm t)
  {
    ATerm k_45 = NULL;
    k_45 = t;
    j_45 :
    if(!(match_string(k_45, "-v")))
      {
        if(!(match_string(k_45, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_l_19;
    t = set_config_0(t);
    t = term_m_19;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  t = Option_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm r_45 = NULL;
    r_45 = t;
    l_45 :
    if(!(match_string(r_45, "-k")))
      {
        if(!(match_string(r_45, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm c_3 (ATerm t)
  {
    ATerm o_19;
    o_19 = t;
    {
      ATerm x_45 = NULL;
      ATerm y_45 = NULL;
      t = string_to_int_0(t);
      {
        y_45 = t;
        if(((x_45 != NULL) && (x_45 != y_45)))
          _fail(y_45);
        else
          x_45 = y_45;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_19, not_null(x_45));
        t = set_config_0(t);
      }
    }
    t = o_19;
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  t = ArgOption_3(t, b_3, c_3, d_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_46 = NULL;
  b_46 = t;
  t = SSL_string_to_int(not_null(b_46));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_3 (ATerm t)
      {
        ATerm j_46 = NULL;
        j_46 = t;
        e_46 :
        if(!(match_string(j_46, "-S")))
          {
            if(!(match_string(j_46, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_3 (ATerm t)
      {
        t = term_e_20;
        t = set_config_0(t);
        t = term_f_20;
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_g_20;
        return(t);
      }
      t = Option_3(t, e_3, f_3, g_3);
      ;
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        ATerm i_20 = t;
        int j_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_3 (ATerm t)
            {
              ATerm k_46 = NULL;
              k_46 = t;
              f_46 :
              if(!(match_string(k_46, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              ATerm n_46 = NULL;
              ATerm k_20;
              k_20 = t;
              {
                ATerm l_46 = NULL;
                ATerm m_46 = NULL;
                t = string_to_int_0(t);
                {
                  m_46 = t;
                  if(((l_46 != NULL) && (l_46 != m_46)))
                    _fail(m_46);
                  else
                    l_46 = m_46;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_y_19, not_null(l_46));
                  t = set_config_0(t);
                }
              }
              t = k_20;
              {
                ATerm o_46 = NULL;
                o_46 = t;
                if(((n_46 != NULL) && (n_46 != o_46)))
                  _fail(o_46);
                else
                  n_46 = o_46;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_46));
              }
              return(t);
            }
            ATerm l_3 (ATerm t)
            {
              t = term_p_20;
              return(t);
            }
            t = ArgOption_3(t, j_3, k_3, l_3);
            ;
            LocalPopChoice(j_20);
          }
        else
          {
            t = i_20;
            {
              ATerm m_3 (ATerm t)
              {
                ATerm p_46 = NULL;
                p_46 = t;
                i_46 :
                if(!(match_string(p_46, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_v_20;
                t = set_config_0(t);
                t = term_w_20;
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = term_x_20;
                return(t);
              }
              t = Option_3(t, m_3, n_3, q_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm y_20 = t;
  int z_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(z_20);
    }
  else
    {
      t = y_20;
      {
        ATerm a_21 = t;
        int d_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(d_21);
          }
        else
          {
            t = a_21;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_3 (ATerm t)
  {
    ATerm x_46 = NULL;
    x_46 = t;
    s_46 :
    if(!(match_string(x_46, "-o")))
      {
        if(!(match_string(x_46, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    ATerm a_47 = NULL;
    ATerm g_21;
    g_21 = t;
    {
      ATerm y_46 = NULL;
      ATerm z_46 = NULL;
      z_46 = t;
      if(((y_46 != NULL) && (y_46 != z_46)))
        _fail(z_46);
      else
        y_46 = z_46;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_8, not_null(y_46));
        t = set_config_0(t);
      }
    }
    t = g_21;
    {
      ATerm b_47 = NULL;
      b_47 = t;
      if(((a_47 != NULL) && (a_47 != b_47)))
        _fail(b_47);
      else
        a_47 = b_47;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(a_47));
    }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    t = term_k_21;
    return(t);
  }
  t = ArgOption_3(t, r_3, s_3, t_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm a_4 (ATerm t)
        {
          ATerm k_47 = NULL;
          k_47 = t;
          j_47 :
          if(!(match_string(k_47, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_4 (ATerm t)
        {
          t = term_n_21;
          t = set_config_0(t);
          t = term_q_21;
          return(t);
        }
        ATerm e_4 (ATerm t)
        {
          t = term_r_21;
          return(t);
        }
        t = Option_3(t, a_4, b_4, e_4);
      }
    }
  return(t);
}
ATerm output_options_0 (ATerm t)
{
  ATerm s_21 = t;
  int t_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = aterm_output_option_0(t);
      ;
      LocalPopChoice(t_21);
    }
  else
    {
      t = s_21;
      t = general_options_0(t);
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL,t_47 = NULL,u_47 = NULL;
  q_47 = t;
  o_47 :
  if(match_string(q_47, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_47) == AT_LIST) && !(ATisEmpty(q_47))))
        {
          r_47 = ATgetFirst((ATermList) q_47);
          s_47 = (ATerm) ATgetNext((ATermList) q_47);
          p_47 :
          if(((ATgetType(s_47) == AT_LIST) && !(ATisEmpty(s_47))))
            {
              t_47 = ATgetFirst((ATermList) s_47);
              u_47 = (ATerm) ATgetNext((ATermList) s_47);
              {
                ATerm z_47 = NULL;
                ATerm u_21;
                u_21 = t;
                {
                  t = not_null(r_47);
                  t = j_0(t);
                }
                t = u_21;
                {
                  ATerm a_48 = NULL;
                  t = not_null(t_47);
                  {
                    t = k_0(t);
                    {
                      a_48 = t;
                      if(((z_47 != NULL) && (z_47 != a_48)))
                        _fail(a_48);
                      else
                        z_47 = a_48;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_47)), not_null(z_47));
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
  ATerm h_48 = NULL,i_48 = NULL,j_48 = NULL,k_48 = NULL;
  h_48 = t;
  g_48 :
  if(match_cons(h_48, sym__3))
    {
      i_48 = ATgetArgument(h_48, 0);
      j_48 = ATgetArgument(h_48, 1);
      k_48 = ATgetArgument(h_48, 2);
      {
        ATerm v_21;
        v_21 = t;
        {
          ATerm o_48 = NULL;
          ATerm p_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_48), not_null(j_48));
          {
            ATerm w_21 = t;
            int x_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(x_21);
              }
            else
              {
                t = w_21;
                t = (ATerm) ATempty;
              }
            {
              p_48 = t;
              if(((o_48 != NULL) && (o_48 != p_48)))
                _fail(p_48);
              else
                o_48 = p_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(i_48), not_null(j_48), (ATerm) ATinsert(CheckATermList(not_null(o_48)), not_null(k_48)));
            t = table_put_0(t);
          }
        }
        t = v_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_93 (ATerm))
{
  ATerm x_48 = NULL;
  ATerm y_48 = NULL;
  t = term_p_8;
  {
    t = k_93(t);
    {
      y_48 = t;
      if(((x_48 != NULL) && (x_48 != y_48)))
        _fail(y_48);
      else
        x_48 = y_48;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_21, term_z_21, not_null(x_48));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm d_0 (ATerm), ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  e_49 = t;
  d_49 :
  if(match_string(e_49, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(e_49) == AT_LIST) && !(ATisEmpty(e_49))))
        {
          f_49 = ATgetFirst((ATermList) e_49);
          g_49 = (ATerm) ATgetNext((ATermList) e_49);
          {
            ATerm j_49 = NULL;
            ATerm a_22;
            a_22 = t;
            {
              t = not_null(f_49);
              t = d_0(t);
            }
            t = a_22;
            {
              ATerm k_49 = NULL;
              t = term_p_8;
              {
                t = g_0(t);
                {
                  k_49 = t;
                  if(((j_49 != NULL) && (j_49 != k_49)))
                    _fail(k_49);
                  else
                    j_49 = k_49;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_49)), not_null(j_49));
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
  ATerm b_22;
  b_22 = t;
  {
    ATerm p_49 = NULL;
    ATerm q_49 = NULL;
    t = term_p_8;
    {
      t = whoami_0(t);
      {
        q_49 = t;
        if(((p_49 != NULL) && (p_49 != q_49)))
          _fail(q_49);
        else
          p_49 = q_49;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_22), not_null(p_49)), term_c_22));
      {
        t = printnl_0(t);
        {
          t = term_c_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_22;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm t_49 = NULL;
  t = report_run_time_0(t);
  {
    ATerm u_49 = NULL;
    t = term_p_8;
    {
      t = whoami_0(t);
      {
        u_49 = t;
        if(((t_49 != NULL) && (t_49 != u_49)))
          _fail(u_49);
        else
          t_49 = u_49;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, term_e_22), not_null(t_49)));
      {
        t = printnl_0(t);
        {
          t = term_c_17;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_f_22;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_49 = NULL;
  x_49 = t;
  t = SSL_TicksToSeconds(not_null(x_49));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_50 = NULL,d_50 = NULL,e_50 = NULL;
  c_50 = t;
  b_50 :
  if(match_cons(c_50, sym__2))
    {
      d_50 = ATgetArgument(c_50, 0);
      e_50 = ATgetArgument(c_50, 1);
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_50), not_null(e_50));
            ;
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            t = SSL_addr(not_null(d_50), not_null(e_50));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm v_80 (ATerm), ATerm w_80 (ATerm))
{
  ATerm i_22 = t;
  int j_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_80(t);
      ;
      LocalPopChoice(j_22);
    }
  else
    {
      t = i_22;
      {
        ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
        l_50 = t;
        k_50 :
        if(((ATgetType(l_50) == AT_LIST) && !(ATisEmpty(l_50))))
          {
            m_50 = ATgetFirst((ATermList) l_50);
            n_50 = (ATerm) ATgetNext((ATermList) l_50);
            {
              ATerm q_50 = NULL;
              ATerm r_50 = NULL;
              t = not_null(n_50);
              {
                t = foldr_2(t, v_80, w_80);
                {
                  r_50 = t;
                  if(((q_50 != NULL) && (q_50 != r_50)))
                    _fail(r_50);
                  else
                    q_50 = r_50;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_50), not_null(q_50));
                t = w_80(t);
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
ATerm crush_2 (ATerm t, ATerm o_84 (ATerm), ATerm p_84 (ATerm))
{
  ATerm y_50 = NULL;
  ATerm a_51 = NULL;
  y_50 = t;
  {
    ATerm b_51 = NULL;
    ATerm i_51 = NULL,j_51 = NULL,k_51 = NULL;
    t = not_null(y_50);
    {
      b_51 = t;
      {
        t = SSL_explode_term(not_null(b_51));
        {
          i_51 = t;
          x_50 :
          if(match_cons(i_51, sym__2))
            {
              j_51 = ATgetArgument(i_51, 0);
              k_51 = ATgetArgument(i_51, 1);
              if(((a_51 != NULL) && (a_51 != k_51)))
                _fail(k_51);
              else
                a_51 = k_51;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_51);
      t = foldr_2(t, o_84, p_84);
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
    ATerm f_4 (ATerm t)
    {
      t = term_z_19;
      return(t);
    }
    t = crush_2(t, f_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_51 = NULL,y_51 = NULL,z_51 = NULL;
  x_51 = t;
  p_51 :
  if(match_cons(x_51, sym__2))
    {
      y_51 = ATgetArgument(x_51, 0);
      z_51 = ATgetArgument(x_51, 1);
      {
        ATerm k_22;
        k_22 = t;
        {
          ATerm l_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(y_51), not_null(z_51));
              ;
              LocalPopChoice(m_22);
            }
          else
            {
              t = l_22;
              t = SSL_gtr(not_null(y_51), not_null(z_51));
            }
        }
        t = k_22;
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
  ATerm f_52 = NULL;
  ATerm n_22 = t;
  int o_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_52 = NULL,h_52 = NULL,i_52 = NULL;
      g_52 = t;
      e_52 :
      if(match_cons(g_52, sym__2))
        {
          h_52 = ATgetArgument(g_52, 0);
          i_52 = ATgetArgument(g_52, 1);
          {
            if(((f_52 != NULL) && (f_52 != h_52)))
              _fail(h_52);
            else
              f_52 = h_52;
            if(((f_52 != NULL) && (f_52 != i_52)))
              _fail(i_52);
            else
              f_52 = i_52;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(o_22);
    }
  else
    {
      t = n_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_88 (ATerm))
{
  ATerm g_4 (ATerm t)
  {
    ATerm p_22;
    p_22 = t;
    {
      ATerm l_52 = NULL;
      ATerm m_52 = NULL;
      t = term_y_19;
      {
        t = get_config_0(t);
        {
          m_52 = t;
          if(((l_52 != NULL) && (l_52 != m_52)))
            _fail(m_52);
          else
            l_52 = m_52;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_52), term_c_17);
        t = geq_0(t);
      }
    }
    t = p_22;
    t = i_88(t);
    return(t);
  }
  t = try_1(t, g_4);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm j_4 (ATerm t)
  {
    ATerm q_52 = NULL,u_52 = NULL;
    ATerm q_22;
    q_22 = t;
    {
      ATerm r_52 = NULL;
      t = run_time_0(t);
      {
        r_52 = t;
        if(((q_52 != NULL) && (q_52 != r_52)))
          _fail(r_52);
        else
          q_52 = r_52;
      }
    }
    t = q_22;
    {
      ATerm v_52 = NULL;
      t = term_p_8;
      {
        t = whoami_0(t);
        {
          v_52 = t;
          if(((u_52 != NULL) && (u_52 != v_52)))
            _fail(v_52);
          else
            u_52 = v_52;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_22), not_null(q_52)), term_r_22), not_null(u_52)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, j_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_z_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_53 = NULL;
  c_53 = t;
  b_53 :
  if(match_cons(c_53, sym_Version_0))
    {
      ATerm q_53 = NULL,s_53 = NULL;
      ATerm t_22;
      t_22 = t;
      {
        ATerm r_53 = NULL;
        t = SSLgetAnnotations(not_null(c_53));
        {
          r_53 = t;
          if(((q_53 != NULL) && (q_53 != r_53)))
            _fail(r_53);
          else
            q_53 = r_53;
        }
      }
      t = t_22;
      {
        ATerm t_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(q_53));
        {
          t_53 = t;
          if(((s_53 != NULL) && (s_53 != t_53)))
            _fail(t_53);
          else
            s_53 = t_53;
        }
        t = not_null(s_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_91 (ATerm))
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_w_22;
      t = get_config_0(t);
      ;
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm k_4 (ATerm t)
        {
          ATerm x_22 = t;
          int y_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(y_22);
            }
          else
            {
              t = x_22;
              {
                ATerm z_22 = t;
                int a_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(a_23);
                  }
                else
                  {
                    t = z_22;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, k_4);
      }
    }
  t = f_91(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm y_53 = NULL;
  y_53 = t;
  t = SSL_table_create(not_null(y_53));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm c_54 = NULL;
  c_54 = t;
  {
    ATerm c_23;
    c_23 = t;
    {
      t = term_d_17;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_17, term_e_17, not_null(c_54));
          t = table_put_0(t);
        }
      }
    }
    t = c_23;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm g_54 = NULL;
  g_54 = t;
  t = SSL_table_destroy(not_null(g_54));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm k_54 = NULL;
  k_54 = t;
  t = SSL_exit(not_null(k_54));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm o_54 = NULL,p_54 = NULL,q_54 = NULL;
  o_54 = t;
  n_54 :
  if(((ATgetType(o_54) == AT_LIST) && ATisEmpty(o_54)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(o_54) == AT_LIST) && !(ATisEmpty(o_54))))
        {
          p_54 = ATgetFirst((ATermList) o_54);
          q_54 = (ATerm) ATgetNext((ATermList) o_54);
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
  ATerm d_23;
  d_23 = t;
  {
    ATerm t_54 = NULL;
    ATerm w_54 = NULL;
    ATerm h_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(l_23);
      }
    else
      {
        t = h_23;
        {
          ATerm u_54 = NULL;
          ATerm v_54 = NULL;
          v_54 = t;
          if(((u_54 != NULL) && (u_54 != v_54)))
            _fail(v_54);
          else
            u_54 = v_54;
          t = (ATerm) ATinsert(ATempty, not_null(u_54));
        }
      }
    {
      w_54 = t;
      if(((t_54 != NULL) && (t_54 != w_54)))
        _fail(w_54);
      else
        t_54 = w_54;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_8, not_null(t_54));
      t = printnl_0(t);
    }
  }
  t = d_23;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm))
{
  ATerm f_55 = NULL,g_55 = NULL,h_55 = NULL;
  h_55 = t;
  e_55 :
  if(((ATgetType(h_55) == AT_LIST) && !(ATisEmpty(h_55))))
    {
      f_55 = ATgetFirst((ATermList) h_55);
      g_55 = (ATerm) ATgetNext((ATermList) h_55);
      {
        ATerm k_55 = NULL;
        t = not_null(g_55);
        {
          ATerm r_23;
          r_23 = t;
          {
            ATerm l_55 = NULL,n_55 = NULL,p_55 = NULL;
            ATerm s_23;
            s_23 = t;
            {
              ATerm m_55 = NULL;
              t = b_0(t);
              {
                m_55 = t;
                if(((l_55 != NULL) && (l_55 != m_55)))
                  _fail(m_55);
                else
                  l_55 = m_55;
              }
            }
            t = s_23;
            {
              ATerm o_55 = NULL;
              t = not_null(f_55);
              {
                t = a_0(t);
                {
                  o_55 = t;
                  if(((n_55 != NULL) && (n_55 != o_55)))
                    _fail(o_55);
                  else
                    n_55 = o_55;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(l_55)), not_null(n_55));
                {
                  p_55 = t;
                  if(((k_55 != NULL) && (k_55 != p_55)))
                    _fail(p_55);
                  else
                    k_55 = p_55;
                }
              }
            }
          }
          t = r_23;
          {
            ATerm l_4 (ATerm t)
            {
              t = not_null(k_55);
              return(t);
            }
            t = reverse_acc_2(t, a_0, l_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_55) == AT_LIST) && ATisEmpty(h_55)))
        {
          {
            t = term_p_8;
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
  ATerm s_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm d_65 (ATerm))
{
  ATerm o_56 = NULL,d_57 = NULL;
  o_56 = t;
  n_56 :
  if(match_cons(o_56, sym_Program_1))
    {
      d_57 = ATgetArgument(o_56, 0);
      {
        ATerm g_57 = NULL,i_57 = NULL;
        ATerm h_57 = NULL;
        t = SSLgetAnnotations(not_null(o_56));
        {
          h_57 = t;
          if(((g_57 != NULL) && (g_57 != h_57)))
            _fail(h_57);
          else
            g_57 = h_57;
        }
        {
          t = not_null(d_57);
          {
            ATerm o_57 = NULL;
            t = d_65(t);
            {
              i_57 = t;
              {
                ATerm p_57 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(i_57)), not_null(g_57));
                {
                  p_57 = t;
                  if(((o_57 != NULL) && (o_57 != p_57)))
                    _fail(p_57);
                  else
                    o_57 = p_57;
                }
                t = not_null(o_57);
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
  ATerm e_58 = NULL;
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_58 = NULL;
      t = term_f_22;
      {
        t = get_config_0(t);
        {
          f_58 = t;
          if(((e_58 != NULL) && (e_58 != f_58)))
            _fail(f_58);
          else
            e_58 = f_58;
        }
      }
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      {
        ATerm t_4 (ATerm t)
        {
          ATerm w_4 (ATerm t)
          {
            ATerm g_58 = NULL;
            g_58 = t;
            if(((e_58 != NULL) && (e_58 != g_58)))
              _fail(g_58);
            else
              e_58 = g_58;
            return(t);
          }
          t = Program_1(t, w_4);
          return(t);
        }
        t = option_defined_1(t, t_4);
      }
    }
  {
    ATerm x_4 (ATerm t)
    {
      ATerm y_4 (ATerm t)
      {
        t = not_null(e_58);
        return(t);
      }
      t = short_description_1(t, y_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, x_4);
    {
      t = term_w_23;
      {
        t = echo_0(t);
        {
          t = term_x_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_4 (ATerm t)
                {
                  ATerm h_58 = NULL;
                  ATerm i_58 = NULL;
                  i_58 = t;
                  if(((h_58 != NULL) && (h_58 != i_58)))
                    _fail(i_58);
                  else
                    h_58 = i_58;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_58)), term_y_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_4);
                {
                  ATerm a_5 (ATerm t)
                  {
                    ATerm j_58 = NULL;
                    ATerm k_58 = NULL;
                    ATerm f_5 (ATerm t)
                    {
                      t = not_null(e_58);
                      return(t);
                    }
                    t = long_description_1(t, f_5);
                    {
                      k_58 = t;
                      if(((j_58 != NULL) && (j_58 != k_58)))
                        _fail(k_58);
                      else
                        j_58 = k_58;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_58)), term_d_24);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_5);
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
  ATerm r_58 = NULL,s_58 = NULL,t_58 = NULL;
  r_58 = t;
  q_58 :
  if(match_cons(r_58, sym__2))
    {
      s_58 = ATgetArgument(r_58, 0);
      t_58 = ATgetArgument(r_58, 1);
      {
        ATerm e_24;
        e_24 = t;
        t = SSL_printnl(not_null(s_58), not_null(t_58));
        t = e_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm e_65 (ATerm))
{
  ATerm c_59 = NULL,d_59 = NULL;
  c_59 = t;
  b_59 :
  if(match_cons(c_59, sym_Undefined_1))
    {
      d_59 = ATgetArgument(c_59, 0);
      {
        ATerm g_59 = NULL,i_59 = NULL;
        ATerm h_59 = NULL;
        t = SSLgetAnnotations(not_null(c_59));
        {
          h_59 = t;
          if(((g_59 != NULL) && (g_59 != h_59)))
            _fail(h_59);
          else
            g_59 = h_59;
        }
        {
          t = not_null(d_59);
          {
            ATerm o_59 = NULL;
            t = e_65(t);
            {
              i_59 = t;
              {
                ATerm p_59 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_59)), not_null(g_59));
                {
                  p_59 = t;
                  if(((o_59 != NULL) && (o_59 != p_59)))
                    _fail(p_59);
                  else
                    o_59 = p_59;
                }
                t = not_null(o_59);
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
ATerm fetch_1 (ATerm t, ATerm h_75 (ATerm))
{
  ATerm u_59 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_75, _id);
        ;
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        t = Cons_2(t, _id, u_59);
      }
    return(t);
  }
  t = u_59(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_92 (ATerm))
{
  t = fetch_1(t, f_92);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_59 = NULL;
  z_59 = t;
  y_59 :
  if(match_cons(z_59, sym_Help_0))
    {
      ATerm b_60 = NULL,d_60 = NULL;
      ATerm h_24;
      h_24 = t;
      {
        ATerm c_60 = NULL;
        t = SSLgetAnnotations(not_null(z_59));
        {
          c_60 = t;
          if(((b_60 != NULL) && (b_60 != c_60)))
            _fail(c_60);
          else
            b_60 = c_60;
        }
      }
      t = h_24;
      {
        ATerm e_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_60));
        {
          e_60 = t;
          if(((d_60 != NULL) && (d_60 != e_60)))
            _fail(e_60);
          else
            d_60 = e_60;
        }
        t = not_null(d_60);
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
  ATerm j_60 = NULL;
  j_60 = t;
  t = SSL_implode_string(not_null(j_60));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm i_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(k_24);
    }
  else
    {
      t = i_24;
      {
        ATerm o_60 = NULL,p_60 = NULL,q_60 = NULL;
        o_60 = t;
        n_60 :
        if(((ATgetType(o_60) == AT_LIST) && !(ATisEmpty(o_60))))
          {
            p_60 = ATgetFirst((ATermList) o_60);
            q_60 = (ATerm) ATgetNext((ATermList) o_60);
            {
              t = not_null(p_60);
              {
                ATerm g_5 (ATerm t)
                {
                  t = not_null(q_60);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_5);
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
  ATerm a_61 = NULL;
  ATerm c_61 = NULL;
  a_61 = t;
  {
    ATerm d_61 = NULL;
    ATerm f_61 = NULL,g_61 = NULL,h_61 = NULL;
    t = not_null(a_61);
    {
      d_61 = t;
      {
        t = SSL_explode_term(not_null(d_61));
        {
          f_61 = t;
          y_60 :
          if(match_cons(f_61, sym__2))
            {
              g_61 = ATgetArgument(f_61, 0);
              h_61 = ATgetArgument(f_61, 1);
              z_60 :
              if(match_string(g_61, ""))
                {
                  if(((c_61 != NULL) && (c_61 != h_61)))
                    _fail(h_61);
                  else
                    c_61 = h_61;
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
      t = not_null(c_61);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm l_61 (ATerm t)
  {
    ATerm l_24 = t;
    int m_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_61);
        ;
        LocalPopChoice(m_24);
      }
    else
      {
        t = l_24;
        {
          t = Nil_0(t);
          t = n_75(t);
        }
      }
    return(t);
  }
  t = l_61(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm o_61 = NULL,p_61 = NULL,q_61 = NULL;
  o_61 = t;
  n_61 :
  if(match_cons(o_61, sym__2))
    {
      p_61 = ATgetArgument(o_61, 0);
      q_61 = ATgetArgument(o_61, 1);
      {
        t = not_null(p_61);
        {
          ATerm l_5 (ATerm t)
          {
            t = not_null(q_61);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm n_24 = t;
  int o_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(o_24);
    }
  else
    {
      t = n_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_61 = NULL;
  v_61 = t;
  t = SSL_explode_string(not_null(v_61));
  return(t);
}
ATerm _2 (ATerm t, ATerm a_58 (ATerm), ATerm b_58 (ATerm))
{
  ATerm e_62 = NULL,f_62 = NULL,g_62 = NULL;
  e_62 = t;
  d_62 :
  if(match_cons(e_62, sym__2))
    {
      f_62 = ATgetArgument(e_62, 0);
      g_62 = ATgetArgument(e_62, 1);
      {
        ATerm k_62 = NULL,m_62 = NULL;
        ATerm l_62 = NULL;
        t = SSLgetAnnotations(not_null(e_62));
        {
          l_62 = t;
          if(((k_62 != NULL) && (k_62 != l_62)))
            _fail(l_62);
          else
            k_62 = l_62;
        }
        {
          t = not_null(f_62);
          {
            ATerm o_62 = NULL;
            t = a_58(t);
            {
              m_62 = t;
              {
                t = not_null(g_62);
                {
                  ATerm q_62 = NULL;
                  t = b_58(t);
                  {
                    o_62 = t;
                    {
                      ATerm r_62 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(m_62), not_null(o_62)), not_null(k_62));
                      {
                        r_62 = t;
                        if(((q_62 != NULL) && (q_62 != r_62)))
                          _fail(r_62);
                        else
                          q_62 = r_62;
                      }
                      t = not_null(q_62);
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
ATerm debug_1 (ATerm t, ATerm r_86 (ATerm))
{
  ATerm p_24;
  p_24 = t;
  {
    ATerm z_62 = NULL,b_63 = NULL;
    ATerm u_24;
    u_24 = t;
    {
      ATerm a_63 = NULL;
      t = r_86(t);
      {
        a_63 = t;
        if(((z_62 != NULL) && (z_62 != a_63)))
          _fail(a_63);
        else
          z_62 = a_63;
      }
    }
    t = u_24;
    {
      ATerm c_63 = NULL;
      c_63 = t;
      if(((b_63 != NULL) && (b_63 != c_63)))
        _fail(c_63);
      else
        b_63 = c_63;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_63)), not_null(z_62)));
        t = printnl_0(t);
      }
    }
  }
  t = p_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_74 (ATerm))
{
  ATerm f_63 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = Cons_2(t, y_74, f_63);
      }
    return(t);
  }
  t = f_63(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm h_63 = NULL;
  h_63 = t;
  t = SSL_is_string(not_null(h_63));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm x_24 = t;
  int y_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(y_24);
    }
  else
    {
      t = x_24;
      {
        ATerm z_24 = t;
        int a_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_5);
            ;
            LocalPopChoice(a_25);
          }
        else
          {
            t = z_24;
            {
              ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL;
              q_63 = t;
              p_63 :
              if(match_cons(q_63, sym_Path_1))
                {
                  r_63 = ATgetArgument(q_63, 0);
                  t = not_null(r_63);
                }
              else
                {
                  if(match_cons(q_63, sym_Var_1))
                    {
                      r_63 = ATgetArgument(q_63, 0);
                      {
                        t = not_null(r_63);
                        {
                          ATerm b_25 = t;
                          int d_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(d_25);
                            }
                          else
                            {
                              t = b_25;
                              {
                                ATerm n_5 (ATerm t)
                                {
                                  t = term_e_25;
                                  return(t);
                                }
                                t = debug_1(t, n_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(q_63, sym_Prefix_2))
                        {
                          r_63 = ATgetArgument(q_63, 0);
                          s_63 = ATgetArgument(q_63, 1);
                          {
                            ATerm x_63 = NULL,z_63 = NULL;
                            ATerm f_25;
                            f_25 = t;
                            {
                              ATerm y_63 = NULL;
                              t = not_null(r_63);
                              {
                                t = eval_config_0(t);
                                {
                                  y_63 = t;
                                  if(((x_63 != NULL) && (x_63 != y_63)))
                                    _fail(y_63);
                                  else
                                    x_63 = y_63;
                                }
                              }
                            }
                            t = f_25;
                            {
                              ATerm a_64 = NULL;
                              t = not_null(s_63);
                              {
                                t = eval_config_0(t);
                                {
                                  a_64 = t;
                                  if(((z_63 != NULL) && (z_63 != a_64)))
                                    _fail(a_64);
                                  else
                                    z_63 = a_64;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_63), not_null(z_63));
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
  ATerm i_64 = NULL,j_64 = NULL,k_64 = NULL;
  i_64 = t;
  h_64 :
  if(match_cons(i_64, sym__2))
    {
      j_64 = ATgetArgument(i_64, 0);
      k_64 = ATgetArgument(i_64, 1);
      t = SSL_table_get(not_null(j_64), not_null(k_64));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_config_0 (ATerm t)
{
  ATerm q_64 = NULL;
  q_64 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_g_25, not_null(q_64));
    {
      t = table_get_0(t);
      {
        ATerm o_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm h_25;
            h_25 = t;
            {
              ATerm s_64 = NULL;
              ATerm t_64 = NULL;
              t_64 = t;
              if(((s_64 != NULL) && (s_64 != t_64)))
                _fail(t_64);
              else
                s_64 = t_64;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_g_25, not_null(q_64), not_null(s_64));
                t = table_put_0(t);
              }
            }
            t = h_25;
          }
          return(t);
        }
        t = try_1(t, o_5);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm n_67 (ATerm))
{
  ATerm i_25 = t;
  int m_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = n_67(t);
      ;
      LocalPopChoice(m_25);
    }
  else
    {
      t = i_25;
      {
      }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm p_5 (ATerm t)
  {
    ATerm x_64 = NULL;
    x_64 = t;
    w_64 :
    if(!(match_string(x_64, "--help")))
      {
        if(!(match_string(x_64, "-h")))
          {
            if(!(match_string(x_64, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm u_5 (ATerm t)
  {
    t = term_n_25;
    {
      t = set_config_0(t);
      t = term_o_25;
    }
    return(t);
  }
  ATerm v_5 (ATerm t)
  {
    t = term_p_25;
    return(t);
  }
  t = Option_3(t, p_5, u_5, v_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm a_65 = NULL,b_65 = NULL,c_65 = NULL;
  a_65 = t;
  z_64 :
  if(((ATgetType(a_65) == AT_LIST) && !(ATisEmpty(a_65))))
    {
      b_65 = ATgetFirst((ATermList) a_65);
      c_65 = (ATerm) ATgetNext((ATermList) a_65);
      t = (ATerm) ATinsert(CheckATermList(not_null(c_65)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(b_65)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm j_59 (ATerm), ATerm k_59 (ATerm))
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
  u_65 = t;
  t_65 :
  if(((ATgetType(u_65) == AT_LIST) && !(ATisEmpty(u_65))))
    {
      v_65 = ATgetFirst((ATermList) u_65);
      w_65 = (ATerm) ATgetNext((ATermList) u_65);
      {
        ATerm a_66 = NULL,c_66 = NULL;
        ATerm b_66 = NULL;
        t = SSLgetAnnotations(not_null(u_65));
        {
          b_66 = t;
          if(((a_66 != NULL) && (a_66 != b_66)))
            _fail(b_66);
          else
            a_66 = b_66;
        }
        {
          t = not_null(v_65);
          {
            ATerm e_66 = NULL;
            t = j_59(t);
            {
              c_66 = t;
              {
                t = not_null(w_65);
                {
                  ATerm g_66 = NULL;
                  t = k_59(t);
                  {
                    e_66 = t;
                    {
                      ATerm h_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(e_66)), not_null(c_66)), not_null(a_66));
                      {
                        h_66 = t;
                        if(((g_66 != NULL) && (g_66 != h_66)))
                          _fail(h_66);
                        else
                          g_66 = h_66;
                      }
                      t = not_null(g_66);
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
  ATerm r_66 = NULL;
  r_66 = t;
  q_66 :
  if(((ATgetType(r_66) == AT_LIST) && ATisEmpty(r_66)))
    {
      {
        ATerm t_66 = NULL,v_66 = NULL;
        ATerm r_25;
        r_25 = t;
        {
          ATerm u_66 = NULL;
          t = SSLgetAnnotations(not_null(r_66));
          {
            u_66 = t;
            if(((t_66 != NULL) && (t_66 != u_66)))
              _fail(u_66);
            else
              t_66 = u_66;
          }
        }
        t = r_25;
        {
          ATerm w_66 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(t_66));
          {
            w_66 = t;
            if(((v_66 != NULL) && (v_66 != w_66)))
              _fail(w_66);
            else
              v_66 = w_66;
          }
          t = not_null(v_66);
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
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
  e_67 = t;
  b_67 :
  if(match_cons(e_67, sym__2))
    {
      f_67 = ATgetArgument(e_67, 0);
      g_67 = ATgetArgument(e_67, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_g_25, not_null(f_67), not_null(g_67));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_93 (ATerm))
{
  ATerm s_25;
  s_25 = t;
  {
    ATerm w_5 (ATerm t)
    {
      t = term_t_25;
      t = i_93(t);
      return(t);
    }
    t = try_1(t, w_5);
  }
  t = s_25;
  {
    ATerm b_6 (ATerm t)
    {
      ATerm p_67 = NULL;
      ATerm u_25;
      u_25 = t;
      {
        ATerm m_67 = NULL;
        ATerm o_67 = NULL;
        o_67 = t;
        if(((m_67 != NULL) && (m_67 != o_67)))
          _fail(o_67);
        else
          m_67 = o_67;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_22, not_null(m_67));
          t = set_config_0(t);
        }
      }
      t = u_25;
      {
        ATerm q_67 = NULL;
        q_67 = t;
        if(((p_67 != NULL) && (p_67 != q_67)))
          _fail(q_67);
        else
          p_67 = q_67;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_67));
      }
      return(t);
    }
    ATerm c_6 (ATerm t)
    {
      ATerm v_25 = t;
      int w_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_25 = t;
          int c_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(c_26);
            }
          else
            {
              t = x_25;
              {
                t = i_93(t);
                t = Cons_2(t, _id, c_6);
              }
            }
          ;
          LocalPopChoice(w_25);
        }
      else
        {
          t = v_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_6, c_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL;
  ATerm d_26;
  d_26 = t;
  {
    ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
    z_67 = t;
    v_67 :
    if(match_cons(z_67, sym__3))
      {
        a_68 = ATgetArgument(z_67, 0);
        b_68 = ATgetArgument(z_67, 1);
        c_68 = ATgetArgument(z_67, 2);
        {
          if(((w_67 != NULL) && (w_67 != a_68)))
            _fail(a_68);
          else
            w_67 = a_68;
          {
            if(((x_67 != NULL) && (x_67 != b_68)))
              _fail(b_68);
            else
              x_67 = b_68;
            {
              if(((y_67 != NULL) && (y_67 != c_68)))
                _fail(c_68);
              else
                y_67 = c_68;
              t = SSL_table_put(not_null(w_67), not_null(x_67), not_null(y_67));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_93 (ATerm))
{
  ATerm f_68 = NULL;
  ATerm i_26;
  i_26 = t;
  {
    t = term_j_26;
    t = table_put_0(t);
  }
  t = i_26;
  {
    ATerm d_6 (ATerm t)
    {
      ATerm k_26 = t;
      int l_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_93(t);
          ;
          LocalPopChoice(l_26);
        }
      else
        {
          t = k_26;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, d_6);
    {
      ATerm e_6 (ATerm t)
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_26;
            o_26 = t;
            {
              ATerm p_26 = t;
              int u_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_w_22;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(u_26);
                }
              else
                {
                  t = p_26;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = o_26;
            {
              t = system_usage_0(t);
              {
                t = term_z_19;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            {
              ATerm f_6 (ATerm t)
              {
                ATerm g_6 (ATerm t)
                {
                  ATerm g_68 = NULL;
                  g_68 = t;
                  if(((f_68 != NULL) && (f_68 != g_68)))
                    _fail(g_68);
                  else
                    f_68 = g_68;
                  return(t);
                }
                t = Undefined_1(t, g_6);
                return(t);
              }
              t = option_defined_1(t, f_6);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_a_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_68)), term_v_26));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_17;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, e_6);
      {
        ATerm w_26;
        w_26 = t;
        {
          t = term_y_21;
          t = table_destroy_0(t);
        }
        t = w_26;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_91 (ATerm), ATerm i_91 (ATerm), ATerm j_91 (ATerm), ATerm k_91 (ATerm))
{
  t = parse_options_1(t, h_91);
  {
    t = store_options_0(t);
    {
      t = j_91(t);
      {
        ATerm a_27 = t;
        int c_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_91);
            ;
            LocalPopChoice(c_27);
          }
        else
          {
            t = a_27;
            {
              ATerm f_27 = t;
              int g_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_91(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(g_27);
                }
              else
                {
                  t = f_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm))
{
  t = option_wrap_4(t, l_91, default_usage_0, _id, m_91);
  return(t);
}
ATerm io_Pptable_diff_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm h_27 = t;
    int i_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_6 (ATerm t)
        {
          ATerm p_68 = NULL;
          p_68 = t;
          i_68 :
          if(!(match_string(p_68, "-V")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_6 (ATerm t)
        {
          t = term_j_27;
          return(t);
        }
        ATerm t_6 (ATerm t)
        {
          t = term_k_27;
          return(t);
        }
        t = Option_3(t, r_6, s_6, t_6);
        ;
        LocalPopChoice(i_27);
      }
    else
      {
        t = h_27;
        {
          ATerm l_27 = t;
          int m_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm u_6 (ATerm t)
              {
                ATerm q_68 = NULL;
                q_68 = t;
                j_68 :
                if(!(match_string(q_68, "--patch")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_6 (ATerm t)
              {
                t = term_z_18;
                return(t);
              }
              ATerm x_6 (ATerm t)
              {
                t = term_n_27;
                return(t);
              }
              t = Option_3(t, u_6, v_6, x_6);
              ;
              LocalPopChoice(m_27);
            }
          else
            {
              t = l_27;
              {
                ATerm o_27 = t;
                int q_27 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_7 (ATerm t)
                    {
                      ATerm r_68 = NULL;
                      r_68 = t;
                      k_68 :
                      if(!(match_string(r_68, "--prune")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm b_7 (ATerm t)
                    {
                      t = term_c_19;
                      return(t);
                    }
                    ATerm c_7 (ATerm t)
                    {
                      t = term_r_27;
                      return(t);
                    }
                    t = Option_3(t, a_7, b_7, c_7);
                    ;
                    LocalPopChoice(q_27);
                  }
                else
                  {
                    t = o_27;
                    {
                      ATerm a_28 = t;
                      int b_28 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_7 (ATerm t)
                          {
                            ATerm s_68 = NULL;
                            s_68 = t;
                            l_68 :
                            if(!(match_string(s_68, "--old")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm i_7 (ATerm t)
                          {
                            ATerm t_68 = NULL;
                            t_68 = t;
                            t = (ATerm) ATmakeAppl(sym_Old_Table_1, not_null(t_68));
                            return(t);
                          }
                          ATerm j_7 (ATerm t)
                          {
                            t = term_c_28;
                            return(t);
                          }
                          t = ArgOption_3(t, h_7, i_7, j_7);
                          ;
                          LocalPopChoice(b_28);
                        }
                      else
                        {
                          t = a_28;
                          {
                            ATerm m_28 = t;
                            int n_28 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm k_7 (ATerm t)
                                {
                                  ATerm v_68 = NULL;
                                  v_68 = t;
                                  n_68 :
                                  if(!(match_string(v_68, "--new")))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                ATerm n_7 (ATerm t)
                                {
                                  ATerm w_68 = NULL;
                                  w_68 = t;
                                  t = (ATerm) ATmakeAppl(sym_New_Table_1, not_null(w_68));
                                  return(t);
                                }
                                ATerm o_7 (ATerm t)
                                {
                                  t = term_o_28;
                                  return(t);
                                }
                                t = ArgOption_3(t, k_7, n_7, o_7);
                                ;
                                LocalPopChoice(n_28);
                              }
                            else
                              {
                                t = m_28;
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
  t = option_wrap_2(t, m_6, pptable_diff_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Pptable_diff_0(t);
  return(t);
}

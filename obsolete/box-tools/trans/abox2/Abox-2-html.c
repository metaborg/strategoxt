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
Symbol sym_PP_Table_1;
Symbol sym_PP_Entry_2;
Symbol sym_Path1_1;
Symbol sym_Path_2;
Symbol sym_selector_2;
Symbol sym_Arg_1;
Symbol sym_Arg2_2;
Symbol sym_NatCon_1;
Symbol sym_plus_1;
Symbol sym_minus_1;
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
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
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
  sym_NatCon_1 = ATmakeSymbol("NatCon", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
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
  sym_FILE_1 = ATmakeSymbol("FILE", 1, ATfalse);
  ATprotectSymbol(sym_FILE_1);
  sym_DIR_1 = ATmakeSymbol("DIR", 1, ATfalse);
  ATprotectSymbol(sym_DIR_1);
  sym_TEMP_0 = ATmakeSymbol("TEMP", 0, ATfalse);
  ATprotectSymbol(sym_TEMP_0);
  sym_TempFiles_0 = ATmakeSymbol("TempFiles", 0, ATfalse);
  ATprotectSymbol(sym_TempFiles_0);
  sym_Tool_1 = ATmakeSymbol("Tool", 1, ATfalse);
  ATprotectSymbol(sym_Tool_1);
  sym_Repository_0 = ATmakeSymbol("Repository", 0, ATfalse);
  ATprotectSymbol(sym_Repository_0);
  sym_Import_0 = ATmakeSymbol("Import", 0, ATfalse);
  ATprotectSymbol(sym_Import_0);
  sym_Imported_1 = ATmakeSymbol("Imported", 1, ATfalse);
  ATprotectSymbol(sym_Imported_1);
  sym_XTC_0 = ATmakeSymbol("XTC", 0, ATfalse);
  ATprotectSymbol(sym_XTC_0);
  init_constant_terms();
}
ATerm term_o_25;
ATerm term_e_25;
ATerm term_w_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_i_24;
ATerm term_g_24;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_m_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_k_21;
ATerm term_h_21;
ATerm term_f_21;
ATerm term_d_21;
ATerm term_t_20;
ATerm term_k_20;
ATerm term_h_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_x_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_m_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_x_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_c_18;
ATerm term_z_17;
ATerm term_w_17;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_o_15;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_f_14;
ATerm term_c_14;
ATerm term_v_13;
ATerm term_q_13;
ATerm term_h_13;
ATerm term_s_11;
ATerm term_r_11;
ATerm term_q_11;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_z_9;
ATerm term_y_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_b_9;
ATerm term_x_8;
ATerm term_w_8;
ATerm term_v_8;
ATerm term_s_8;
ATerm term_r_8;
ATerm term_h_8;
ATerm term_g_8;
ATerm term_f_8;
ATerm term_e_8;
ATerm term_d_8;
ATerm term_c_8;
ATerm term_b_8;
ATerm term_a_8;
ATerm term_z_7;
ATerm term_y_7;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_j_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_d_7;
ATerm term_a_7;
ATerm term_y_6;
void init_constant_terms (void)
{
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_d_8));
  term_d_8 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_s_8));
  term_s_8 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_z_9));
  term_z_9 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(sym__2, term_j_7, term_y_6);
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_g_7);
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(sym__2, term_v_9, term_m_10);
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_10);
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__2, term_i_19, term_g_7);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(sym__2, term_f_20, term_g_7);
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_f_23, term_g_23);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_24));
  term_i_24 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_q_24, term_g_7);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym__3, term_f_23, term_g_23, (ATerm) ATempty);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_file_0 (ATerm);
ATerm print_0 (ATerm);
ATerm assert_1 (ATerm, ATerm g_86 (ATerm));
ATerm obsolete_1 (ATerm, ATerm u_86 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm topdown_print_to_0 (ATerm);
ATerm Html2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm m_69 (ATerm));
ATerm html2text_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm b_71 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm w_76 (ATerm));
ATerm html_string_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm r_95 (ATerm));
ATerm make_html_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm sep_by_1 (ATerm, ATerm n_67 (ATerm));
ATerm filter_1 (ATerm, ATerm g_83 (ATerm));
ATerm hs_length_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm k_89 (ATerm));
ATerm dissuader_1 (ATerm, ATerm v_86 (ATerm));
ATerm separate_by_1 (ATerm, ATerm l_75 (ATerm));
ATerm LNAT_2 (ATerm, ATerm u_65 (ATerm), ATerm v_65 (ATerm));
ATerm L_2 (ATerm, ATerm s_65 (ATerm), ATerm t_65 (ATerm));
ATerm tov_1 (ATerm, ATerm m_67 (ATerm));
ATerm is_length_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm c_69 (ATerm), ATerm d_69 (ATerm));
ATerm for_3 (ATerm, ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm h_69 (ATerm));
ATerm copy_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm a_67 (ATerm), ATerm b_67 (ATerm));
ATerm SOpt_value_1 (ATerm, ATerm u_95 (ATerm));
ATerm vs_length_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm aopt_0 (ATerm);
ATerm SOpts_of_alignment_0 (ATerm);
ATerm make_hs_0 (ATerm);
ATerm toa_1 (ATerm, ATerm p_67 (ATerm));
ATerm R_2 (ATerm, ATerm m_66 (ATerm), ATerm n_66 (ATerm));
ATerm split_2 (ATerm, ATerm s_83 (ATerm), ATerm t_83 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2html_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_69 (ATerm));
ATerm at_last_1 (ATerm, ATerm p_76 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm i_76 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm b_76 (ATerm));
ATerm Distribute_0 (ATerm);
ATerm normalize_0 (ATerm);
ATerm abox2html_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm Tl_0 (ATerm);
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm d_86 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm g_68 (ATerm), ATerm h_68 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm c_86 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm d_96 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm e_96 (ATerm));
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
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm d_82 (ATerm), ATerm e_82 (ATerm));
ATerm crush_2 (ATerm, ATerm b_81 (ATerm), ATerm c_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm j_89 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm p_87 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm n_91 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm m_91 (ATerm));
ATerm Program_1 (ATerm, ATerm t_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm o_86 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_64 (ATerm));
ATerm fetch_1 (ATerm, ATerm y_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_90 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm e_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm p_57 (ATerm), ATerm q_57 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm n_86 (ATerm));
ATerm map_1 (ATerm, ATerm p_75 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_67 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm r_91 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm y_58 (ATerm), ATerm z_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm p_91 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm o_91 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm y_87 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm z_87 (ATerm), ATerm a_88 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm i_96 (ATerm), ATerm j_96 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm h_96 (ATerm));
ATerm io_Abox_2_html_0 (ATerm);
ATerm main_0 (ATerm);
ATerm close_file_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_close_file(not_null(c_0));
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm v_0 = NULL,w_0 = NULL,x_0 = NULL;
  v_0 = t;
  r_0 :
  if(match_cons(v_0, sym__2))
    {
      w_0 = ATgetArgument(v_0, 0);
      x_0 = ATgetArgument(v_0, 1);
      {
        ATerm i_5;
        i_5 = t;
        t = SSL_print(not_null(w_0), not_null(x_0));
        t = i_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm r_2 = NULL,v_2 = NULL,w_2 = NULL;
  r_2 = t;
  q_2 :
  if(match_cons(r_2, sym__2))
    {
      v_2 = ATgetArgument(r_2, 0);
      w_2 = ATgetArgument(r_2, 1);
      {
        ATerm m_3 = NULL,n_3 = NULL,f_4 = NULL;
        ATerm v_6;
        v_6 = t;
        {
          ATerm g_4 = NULL;
          ATerm h_4 = NULL,l_4 = NULL,m_4 = NULL;
          t = g_86(t);
          {
            g_4 = t;
            {
              if(((m_3 != NULL) && (m_3 != g_4)))
                _fail(g_4);
              else
                m_3 = g_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(m_3), not_null(v_2), not_null(w_2));
                {
                  t = table_push_0(t);
                  {
                    ATerm w_6 = t;
                    int x_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_3), term_y_6);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(x_6);
                      }
                    else
                      {
                        t = w_6;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      h_4 = t;
                      p_2 :
                      if(((ATgetType(h_4) == AT_LIST) && !(ATisEmpty(h_4))))
                        {
                          l_4 = ATgetFirst((ATermList) h_4);
                          m_4 = (ATerm) ATgetNext((ATermList) h_4);
                          {
                            if(((n_3 != NULL) && (n_3 != l_4)))
                              _fail(l_4);
                            else
                              n_3 = l_4;
                            {
                              if(((f_4 != NULL) && (f_4 != m_4)))
                                _fail(m_4);
                              else
                                f_4 = m_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(m_3), term_y_6, (ATerm) ATinsert(CheckATermList(not_null(f_4)), (ATerm) ATinsert(CheckATermList(not_null(n_3)), not_null(v_2))));
                                t = table_put_0(t);
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
        }
        t = v_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm u_86 (ATerm))
{
  ATerm z_6;
  z_6 = t;
  {
    t = u_86(t);
    {
      ATerm b_0 (ATerm t)
      {
        t = term_a_7;
        return(t);
      }
      t = debug_1(t, b_0);
    }
  }
  t = z_6;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm u_4 = NULL,v_4 = NULL;
  ATerm b_7 = t;
  int c_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_4 = NULL,x_4 = NULL,y_4 = NULL;
      w_4 = t;
      r_4 :
      if(match_cons(w_4, sym__2))
        {
          x_4 = ATgetArgument(w_4, 0);
          y_4 = ATgetArgument(w_4, 1);
          {
            if(((v_4 != NULL) && (v_4 != x_4)))
              _fail(x_4);
            else
              v_4 = x_4;
            if(((u_4 != NULL) && (u_4 != y_4)))
              _fail(y_4);
            else
              u_4 = y_4;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(c_7);
      t = SSL_open_file(not_null(v_4), not_null(u_4));
    }
  else
    {
      t = b_7;
      {
        ATerm z_4 = NULL;
        ATerm a_5 = NULL;
        ATerm e_0 (ATerm t)
        {
          t = term_d_7;
          return(t);
        }
        t = obsolete_1(t, e_0);
        {
          z_4 = t;
          {
            if(((v_4 != NULL) && (v_4 != z_4)))
              _fail(z_4);
            else
              v_4 = z_4;
            {
              ATerm e_7;
              e_7 = t;
              {
                ATerm b_5 = NULL;
                t = term_f_7;
                {
                  b_5 = t;
                  if(((a_5 != NULL) && (a_5 != b_5)))
                    _fail(b_5);
                  else
                    a_5 = b_5;
                }
              }
              t = e_7;
              t = SSL_open_file(not_null(v_4), not_null(a_5));
            }
          }
        }
      }
    }
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm new_file_0 (ATerm t)
{
  ATerm g_5 = NULL;
  ATerm h_5 = NULL;
  t = term_g_7;
  {
    t = new_0(t);
    {
      h_5 = t;
      if(((g_5 != NULL) && (g_5 != h_5)))
        _fail(h_5);
      else
        g_5 = h_5;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_5), term_h_7);
    {
      t = conc_strings_0(t);
      {
        ATerm f_0 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, f_0);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm l_5 = NULL;
  t = new_file_0(t);
  {
    l_5 = t;
    {
      ATerm i_7;
      i_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), term_f_7);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_5), term_g_7);
            {
              ATerm n_0 (ATerm t)
              {
                t = term_j_7;
                return(t);
              }
              t = assert_1(t, n_0);
            }
          }
        }
      }
      t = i_7;
    }
  }
  return(t);
}
ATerm topdown_print_to_0 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm t_5 = NULL;
  r_5 = t;
  {
    ATerm u_5 = NULL;
    t = xtc_new_file_0(t);
    {
      u_5 = t;
      {
        if(((t_5 != NULL) && (t_5 != u_5)))
          _fail(u_5);
        else
          t_5 = u_5;
        {
          t = not_null(r_5);
          {
            ATerm o_0 (ATerm t)
            {
              ATerm p_0 (ATerm t)
              {
                t = is_string_0(t);
                {
                  ATerm k_7;
                  k_7 = t;
                  {
                    ATerm v_5 = NULL;
                    ATerm w_5 = NULL;
                    w_5 = t;
                    if(((v_5 != NULL) && (v_5 != w_5)))
                      _fail(w_5);
                    else
                      v_5 = w_5;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), (ATerm) ATinsert(ATempty, not_null(v_5)));
                      t = print_0(t);
                    }
                  }
                  t = k_7;
                }
                return(t);
              }
              t = try_1(t, p_0);
              return(t);
            }
            t = topdown_1(t, o_0);
            {
              t = not_null(t_5);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(t_5));
  }
  return(t);
}
ATerm Html2text_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL;
  q_6 = t;
  n_6 :
  if(match_cons(q_6, sym_TABLE_2))
    {
      p_6 = ATgetArgument(q_6, 0);
      o_6 = ATgetArgument(q_6, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_7), not_null(o_6)), term_m_7), not_null(p_6)), term_l_7);
    }
  else
    {
      if(match_cons(q_6, sym_TR_2))
        {
          p_6 = ATgetArgument(q_6, 0);
          o_6 = ATgetArgument(q_6, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(o_6)), term_m_7), not_null(p_6)), term_o_7);
        }
      else
        {
          if(match_cons(q_6, sym_TD_2))
            {
              p_6 = ATgetArgument(q_6, 0);
              o_6 = ATgetArgument(q_6, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_7), not_null(o_6)), term_m_7), not_null(p_6)), term_q_7);
            }
          else
            {
              if(match_cons(q_6, sym_TD_p__1))
                {
                  p_6 = ATgetArgument(q_6, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_7), not_null(p_6)), term_r_7);
                }
              else
                {
                  if(match_cons(q_6, sym_SPAN_2))
                    {
                      p_6 = ATgetArgument(q_6, 0);
                      o_6 = ATgetArgument(q_6, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_7), not_null(o_6)), term_m_7), not_null(p_6)), term_t_7);
                    }
                  else
                    {
                      if(match_cons(q_6, sym_PRE_1))
                        {
                          p_6 = ATgetArgument(q_6, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(p_6)), term_v_7);
                        }
                      else
                        {
                          if(match_cons(q_6, sym_TDTR_1))
                            {
                              p_6 = ATgetArgument(q_6, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(p_6)), term_x_7);
                            }
                          else
                            {
                              if(match_cons(q_6, sym_HREF_2))
                                {
                                  p_6 = ATgetArgument(q_6, 0);
                                  o_6 = ATgetArgument(q_6, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_8), not_null(o_6)), term_a_8), not_null(p_6)), term_z_7);
                                }
                              else
                                {
                                  if(match_cons(q_6, sym_ANCHOR_1))
                                    {
                                      p_6 = ATgetArgument(q_6, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_8), not_null(p_6)), term_c_8);
                                    }
                                  else
                                    {
                                      if(match_cons(q_6, sym_BR_0))
                                        {
                                          t = term_e_8;
                                        }
                                      else
                                        {
                                          if(match_cons(q_6, sym_NBSP_0))
                                            {
                                              t = term_f_8;
                                            }
                                          else
                                            {
                                              if(match_cons(q_6, sym_HR_0))
                                                {
                                                  t = term_g_8;
                                                }
                                              else
                                                {
                                                  if(match_cons(q_6, sym_TDTD_0))
                                                    {
                                                      t = term_h_8;
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
ATerm bottomup_1 (ATerm t, ATerm m_69 (ATerm))
{
  ATerm q_0 (ATerm t)
  {
    t = bottomup_1(t, m_69);
    return(t);
  }
  t = _all(t, q_0);
  t = m_69(t);
  return(t);
}
ATerm html2text_0 (ATerm t)
{
  ATerm s_0 (ATerm t)
  {
    t = try_1(t, Html2text_0);
    return(t);
  }
  t = bottomup_1(t, s_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  g_10 = t;
  f_10 :
  if(((ATgetType(g_10) == AT_LIST) && !(ATisEmpty(g_10))))
    {
      h_10 = ATgetFirst((ATermList) g_10);
      i_10 = (ATerm) ATgetNext((ATermList) g_10);
      t = not_null(h_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm i_8 = t;
  int j_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(j_8);
    }
  else
    {
      t = i_8;
      {
        ATerm k_8 = t;
        int l_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, Nil_0, flat_list_0);
            ;
            LocalPopChoice(l_8);
          }
        else
          {
            t = k_8;
            {
              ATerm m_8 = t;
              int n_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_10 = NULL,r_10 = NULL;
                  t = Cons_2(t, is_list_0, _id);
                  {
                    ATerm o_8;
                    o_8 = t;
                    {
                      ATerm q_10 = NULL;
                      t = Hd_0(t);
                      {
                        q_10 = t;
                        if(((p_10 != NULL) && (p_10 != q_10)))
                          _fail(q_10);
                        else
                          p_10 = q_10;
                      }
                    }
                    t = o_8;
                    {
                      ATerm s_10 = NULL;
                      t = Tl_0(t);
                      {
                        s_10 = t;
                        if(((r_10 != NULL) && (r_10 != s_10)))
                          _fail(s_10);
                        else
                          r_10 = s_10;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_10), not_null(r_10));
                        {
                          t = conc_0(t);
                          t = flat_list_0(t);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(n_8);
                }
              else
                {
                  t = m_8;
                  t = Cons_2(t, _id, flat_list_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm b_71 (ATerm))
{
  ATerm w_10 (ATerm t)
  {
    ATerm p_8 = t;
    int q_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_71(t);
        ;
        LocalPopChoice(q_8);
      }
    else
      {
        t = p_8;
        t = _one(t, w_10);
      }
    return(t);
  }
  t = w_10(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm d_11 = NULL,g_11 = NULL;
  ATerm t_0 (ATerm t)
  {
    ATerm e_11 = NULL;
    e_11 = t;
    x_10 :
    if(!(match_int(e_11, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    ATerm f_11 = NULL;
    f_11 = t;
    if(((d_11 != NULL) && (d_11 != f_11)))
      _fail(f_11);
    else
      d_11 = f_11;
    return(t);
  }
  t = Cons_2(t, t_0, u_0);
  {
    ATerm l_11 = NULL;
    t = not_null(d_11);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
        h_11 = t;
        a_11 :
        if(((ATgetType(h_11) == AT_LIST) && !(ATisEmpty(h_11))))
          {
            i_11 = ATgetFirst((ATermList) h_11);
            j_11 = (ATerm) ATgetNext((ATermList) h_11);
            b_11 :
            if(match_int(i_11, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(j_11)), term_r_8), term_r_8);
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
      t = oncetd_1(t, y_0);
      {
        l_11 = t;
        if(((g_11 != NULL) && (g_11 != l_11)))
          _fail(l_11);
        else
          g_11 = l_11;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_11)), term_s_8), term_s_8);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm p_11 (ATerm t)
  {
    t = w_76(t);
    {
      ATerm t_8 = t;
      int u_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          ;
          LocalPopChoice(u_8);
        }
      else
        {
          t = t_8;
          t = Cons_2(t, _id, p_11);
        }
    }
    return(t);
  }
  t = p_11(t);
  return(t);
}
ATerm html_string_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm z_0 (ATerm t)
    {
      t = try_1(t, replace_quotes_0);
      return(t);
    }
    t = listtd_1(t, z_0);
    {
      ATerm a_1 (ATerm t)
      {
        ATerm b_1 (ATerm t)
        {
          ATerm v_11 = NULL;
          v_11 = t;
          u_11 :
          if(match_int(v_11, 32))
            {
              t = term_f_8;
              t = explode_string_0(t);
            }
          else
            {
              if(match_int(v_11, 38))
                {
                  t = term_v_8;
                  t = explode_string_0(t);
                }
              else
                {
                  if(match_int(v_11, 60))
                    {
                      t = term_w_8;
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(v_11, 62))
                        {
                          t = term_x_8;
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
        t = try_1(t, b_1);
        return(t);
      }
      t = map_1(t, a_1);
      {
        t = flat_list_0(t);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm r_95 (ATerm))
{
  ATerm g_12 (ATerm t)
  {
    ATerm c_1 (ATerm t)
    {
      ATerm c_12 = NULL,d_12 = NULL,e_12 = NULL;
      t = Cons_2(t, r_95, _id);
      {
        c_12 = t;
        b_12 :
        if(((ATgetType(c_12) == AT_LIST) && !(ATisEmpty(c_12))))
          {
            d_12 = ATgetFirst((ATermList) c_12);
            e_12 = (ATerm) ATgetNext((ATermList) c_12);
            {
              t = not_null(e_12);
              t = g_12(t);
            }
          }
        else
          {
            _fail(t);
          }
      }
      return(t);
    }
    t = try_1(t, c_1);
    return(t);
  }
  t = g_12(t);
  return(t);
}
ATerm make_html_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = reverse_0(t);
    {
      ATerm d_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, d_1);
      {
        ATerm w_13 (ATerm t)
        {
          ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL;
          ATerm z_13 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_12), (ATerm) ATinsert(CheckATermList(not_null(a_13)), not_null(y_12)));
            t = w_13(t);
            return(t);
          }
          w_12 = t;
          q_12 :
          if(match_cons(w_12, sym__2))
            {
              x_12 = ATgetArgument(w_12, 0);
              a_13 = ATgetArgument(w_12, 1);
              r_12 :
              if(((ATgetType(x_12) == AT_LIST) && ATisEmpty(x_12)))
                {
                  {
                    ATerm e_13 = NULL;
                    ATerm g_13 = NULL;
                    t = not_null(a_13);
                    {
                      ATerm e_1 (ATerm t)
                      {
                        ATerm f_13 = NULL;
                        f_13 = t;
                        l_12 :
                        if(!(match_int(f_13, 9)))
                          {
                            if(!(match_int(f_13, 32)))
                              {
                                _fail(t);
                              }
                          }
                        return(t);
                      }
                      t = remove_trailing_1(t, e_1);
                      {
                        t = implode_string_0(t);
                        {
                          g_13 = t;
                          if(((e_13 != NULL) && (e_13 != g_13)))
                            _fail(g_13);
                          else
                            e_13 = g_13;
                        }
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(e_13));
                  }
                }
              else
                {
                  if(((ATgetType(x_12) == AT_LIST) && !(ATisEmpty(x_12))))
                    {
                      y_12 = ATgetFirst((ATermList) x_12);
                      z_12 = (ATerm) ATgetNext((ATermList) x_12);
                      s_12 :
                      if(match_int(y_12, 10))
                        {
                          ATerm y_8 = t;
                          int z_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_13 = NULL,n_13 = NULL;
                              ATerm a_9;
                              a_9 = t;
                              {
                                ATerm m_13 = NULL;
                                t = not_null(a_13);
                                {
                                  ATerm f_1 (ATerm t)
                                  {
                                    ATerm l_13 = NULL;
                                    l_13 = t;
                                    n_12 :
                                    if(!(match_int(l_13, 9)))
                                      {
                                        if(!(match_int(l_13, 32)))
                                          {
                                            _fail(t);
                                          }
                                      }
                                    return(t);
                                  }
                                  t = remove_trailing_1(t, f_1);
                                  {
                                    t = implode_string_0(t);
                                    {
                                      m_13 = t;
                                      if(((k_13 != NULL) && (k_13 != m_13)))
                                        _fail(m_13);
                                      else
                                        k_13 = m_13;
                                    }
                                  }
                                }
                              }
                              t = a_9;
                              {
                                ATerm o_13 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(z_12), (ATerm) ATempty);
                                {
                                  t = w_13(t);
                                  {
                                    o_13 = t;
                                    if(((n_13 != NULL) && (n_13 != o_13)))
                                      _fail(o_13);
                                    else
                                      n_13 = o_13;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(n_13)), not_null(k_13));
                              }
                              ;
                              LocalPopChoice(z_8);
                            }
                          else
                            {
                              t = y_8;
                              t = z_13(t);
                            }
                        }
                      else
                        {
                          t = z_13(t);
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
        t = w_13(t);
        {
          ATerm g_1 (ATerm t)
          {
            ATerm s_13 = NULL;
            s_13 = t;
            t_12 :
            if(!(match_string(s_13, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, g_1);
          {
            t = reverse_0(t);
            {
              ATerm h_1 (ATerm t)
              {
                ATerm t_13 = NULL;
                t_13 = t;
                u_12 :
                if(!(match_string(t_13, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, h_1);
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm u_13 = NULL;
                  u_13 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_b_9), not_null(u_13));
                  return(t);
                }
                t = map_1(t, i_1);
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
  ATerm i_14 = NULL;
  i_14 = t;
  h_14 :
  if(match_cons(i_14, sym_MATH_0))
    {
      ATerm k_14 = NULL,m_14 = NULL;
      ATerm c_9;
      c_9 = t;
      {
        ATerm l_14 = NULL;
        t = SSLgetAnnotations(not_null(i_14));
        {
          l_14 = t;
          if(((k_14 != NULL) && (k_14 != l_14)))
            _fail(l_14);
          else
            k_14 = l_14;
        }
      }
      t = c_9;
      {
        ATerm n_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(k_14));
        {
          n_14 = t;
          if(((m_14 != NULL) && (m_14 != n_14)))
            _fail(n_14);
          else
            m_14 = n_14;
        }
        t = not_null(m_14);
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
  ATerm v_14 = NULL;
  v_14 = t;
  u_14 :
  if(match_cons(v_14, sym_NUM_0))
    {
      ATerm x_14 = NULL,z_14 = NULL;
      ATerm d_9;
      d_9 = t;
      {
        ATerm y_14 = NULL;
        t = SSLgetAnnotations(not_null(v_14));
        {
          y_14 = t;
          if(((x_14 != NULL) && (x_14 != y_14)))
            _fail(y_14);
          else
            x_14 = y_14;
        }
      }
      t = d_9;
      {
        ATerm a_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(x_14));
        {
          a_15 = t;
          if(((z_14 != NULL) && (z_14 != a_15)))
            _fail(a_15);
          else
            z_14 = a_15;
        }
        t = not_null(z_14);
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
  ATerm i_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_VAR_0))
    {
      ATerm k_15 = NULL,m_15 = NULL;
      ATerm e_9;
      e_9 = t;
      {
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(i_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
      }
      t = e_9;
      {
        ATerm n_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(k_15));
        {
          n_15 = t;
          if(((m_15 != NULL) && (m_15 != n_15)))
            _fail(n_15);
          else
            m_15 = n_15;
        }
        t = not_null(m_15);
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
  ATerm v_15 = NULL;
  v_15 = t;
  u_15 :
  if(match_cons(v_15, sym_KW_0))
    {
      ATerm x_15 = NULL,z_15 = NULL;
      ATerm f_9;
      f_9 = t;
      {
        ATerm y_15 = NULL;
        t = SSLgetAnnotations(not_null(v_15));
        {
          y_15 = t;
          if(((x_15 != NULL) && (x_15 != y_15)))
            _fail(y_15);
          else
            x_15 = y_15;
        }
      }
      t = f_9;
      {
        ATerm a_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(x_15));
        {
          a_16 = t;
          if(((z_15 != NULL) && (z_15 != a_16)))
            _fail(a_16);
          else
            z_15 = a_16;
        }
        t = not_null(z_15);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sep_by_1 (ATerm t, ATerm n_67 (ATerm))
{
  ATerm j_1 (ATerm t)
  {
    ATerm f_16 = NULL;
    f_16 = t;
    t = (ATerm) ATinsert(ATempty, not_null(f_16));
    return(t);
  }
  t = map_1(t, j_1);
  {
    t = separate_by_1(t, n_67);
    t = concat_0(t);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm g_83 (ATerm))
{
  ATerm g_9 = t;
  int h_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(h_9);
    }
  else
    {
      t = g_9;
      {
        ATerm i_9 = t;
        int j_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_1 (ATerm t)
            {
              t = filter_1(t, g_83);
              return(t);
            }
            t = Cons_2(t, g_83, k_1);
            ;
            LocalPopChoice(j_9);
          }
        else
          {
            t = i_9;
            {
              ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
              k_16 = t;
              j_16 :
              if(((ATgetType(k_16) == AT_LIST) && !(ATisEmpty(k_16))))
                {
                  l_16 = ATgetFirst((ATermList) k_16);
                  m_16 = (ATerm) ATgetNext((ATermList) k_16);
                  {
                    t = not_null(m_16);
                    t = filter_1(t, g_83);
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
ATerm hs_length_0 (ATerm t)
{
  ATerm k_9 = t;
  int l_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_1 (ATerm t)
      {
        ATerm q_16 = NULL;
        q_16 = t;
        p_16 :
        if(!(match_cons(q_16, sym_HS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, l_1);
      ;
      LocalPopChoice(l_9);
    }
  else
    {
      t = k_9;
      t = term_m_9;
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  t = hs_length_0(t);
  {
    ATerm n_9 = t;
    int o_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_16 = NULL;
        u_16 = t;
        s_16 :
        if(match_int(u_16, 0))
          {
            t = (ATerm) ATempty;
          }
        else
          {
            _fail(t);
          }
        ;
        LocalPopChoice(o_9);
      }
    else
      {
        t = n_9;
        {
          ATerm v_16 = NULL;
          ATerm w_16 = NULL;
          w_16 = t;
          if(((v_16 != NULL) && (v_16 != w_16)))
            _fail(w_16);
          else
            v_16 = w_16;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_16), term_p_9);
            t = copy_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm c_17 = NULL,d_17 = NULL,e_17 = NULL;
  c_17 = t;
  b_17 :
  if(match_cons(c_17, sym__2))
    {
      d_17 = ATgetArgument(c_17, 0);
      e_17 = ATgetArgument(c_17, 1);
      {
        t = not_null(e_17);
        {
          ATerm q_9 = t;
          int r_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(r_9);
            }
          else
            {
              t = q_9;
              {
                ATerm m_1 (ATerm t)
                {
                  ATerm s_9 = t;
                  int t_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      ;
                      LocalPopChoice(t_9);
                    }
                  else
                    {
                      t = s_9;
                      {
                        ATerm h_17 = NULL;
                        t = Cons_2(t, _id, m_1);
                        {
                          ATerm i_17 = NULL;
                          i_17 = t;
                          if(((h_17 != NULL) && (h_17 != i_17)))
                            _fail(i_17);
                          else
                            h_17 = i_17;
                          t = (ATerm) ATinsert(CheckATermList(not_null(h_17)), not_null(d_17));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, m_1);
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
ATerm if_verbose2_1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm n_1 (ATerm t)
  {
    ATerm u_9;
    u_9 = t;
    {
      ATerm n_17 = NULL;
      ATerm o_17 = NULL;
      t = term_v_9;
      {
        t = get_config_0(t);
        {
          o_17 = t;
          if(((n_17 != NULL) && (n_17 != o_17)))
            _fail(o_17);
          else
            n_17 = o_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), term_w_9);
        t = geq_0(t);
      }
    }
    t = u_9;
    t = k_89(t);
    return(t);
  }
  t = try_1(t, n_1);
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm v_86 (ATerm))
{
  ATerm x_9;
  x_9 = t;
  {
    ATerm o_1 (ATerm t)
    {
      t = v_86(t);
      {
        ATerm p_1 (ATerm t)
        {
          t = term_y_9;
          return(t);
        }
        t = debug_1(t, p_1);
      }
      return(t);
    }
    t = if_verbose2_1(t, o_1);
  }
  t = x_9;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm l_75 (ATerm))
{
  ATerm s_17 = NULL,u_17 = NULL;
  ATerm q_1 (ATerm t)
  {
    t = term_z_9;
    return(t);
  }
  t = dissuader_1(t, q_1);
  {
    ATerm a_10;
    a_10 = t;
    {
      ATerm t_17 = NULL;
      t_17 = t;
      if(((s_17 != NULL) && (s_17 != t_17)))
        _fail(t_17);
      else
        s_17 = t_17;
    }
    t = a_10;
    {
      ATerm v_17 = NULL;
      t = term_g_7;
      {
        t = l_75(t);
        {
          v_17 = t;
          if(((u_17 != NULL) && (u_17 != v_17)))
            _fail(v_17);
          else
            u_17 = v_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_17), not_null(s_17));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm LNAT_2 (ATerm t, ATerm u_65 (ATerm), ATerm v_65 (ATerm))
{
  ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
  e_18 = t;
  d_18 :
  if(match_cons(e_18, sym_LNAT_2))
    {
      f_18 = ATgetArgument(e_18, 0);
      g_18 = ATgetArgument(e_18, 1);
      {
        ATerm k_18 = NULL,m_18 = NULL;
        ATerm l_18 = NULL;
        t = SSLgetAnnotations(not_null(e_18));
        {
          l_18 = t;
          if(((k_18 != NULL) && (k_18 != l_18)))
            _fail(l_18);
          else
            k_18 = l_18;
        }
        {
          t = not_null(f_18);
          {
            ATerm o_18 = NULL;
            t = u_65(t);
            {
              m_18 = t;
              {
                t = not_null(g_18);
                {
                  ATerm q_18 = NULL;
                  t = v_65(t);
                  {
                    o_18 = t;
                    {
                      ATerm r_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, not_null(m_18), not_null(o_18)), not_null(k_18));
                      {
                        r_18 = t;
                        if(((q_18 != NULL) && (q_18 != r_18)))
                          _fail(r_18);
                        else
                          q_18 = r_18;
                      }
                      t = not_null(q_18);
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
ATerm L_2 (ATerm t, ATerm s_65 (ATerm), ATerm t_65 (ATerm))
{
  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
  d_19 = t;
  c_19 :
  if(match_cons(d_19, sym_L_2))
    {
      e_19 = ATgetArgument(d_19, 0);
      f_19 = ATgetArgument(d_19, 1);
      {
        ATerm j_19 = NULL,l_19 = NULL;
        ATerm k_19 = NULL;
        t = SSLgetAnnotations(not_null(d_19));
        {
          k_19 = t;
          if(((j_19 != NULL) && (j_19 != k_19)))
            _fail(k_19);
          else
            j_19 = k_19;
        }
        {
          t = not_null(e_19);
          {
            ATerm n_19 = NULL;
            t = s_65(t);
            {
              l_19 = t;
              {
                t = not_null(f_19);
                {
                  ATerm p_19 = NULL;
                  t = t_65(t);
                  {
                    n_19 = t;
                    {
                      ATerm q_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(l_19), not_null(n_19)), not_null(j_19));
                      {
                        q_19 = t;
                        if(((p_19 != NULL) && (p_19 != q_19)))
                          _fail(q_19);
                        else
                          p_19 = q_19;
                      }
                      t = not_null(p_19);
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
ATerm tov_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm z_19 = NULL,d_20 = NULL;
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2(t, _id, _id);
      ;
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2(t, _id, _id);
            ;
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            {
              ATerm a_20 = NULL;
              ATerm b_20 = NULL;
              a_20 = t;
              {
                if(((z_19 != NULL) && (z_19 != a_20)))
                  _fail(a_20);
                else
                  z_19 = a_20;
                {
                  ATerm c_20 = NULL;
                  t = term_g_7;
                  {
                    t = m_67(t);
                    {
                      c_20 = t;
                      if(((b_20 != NULL) && (b_20 != c_20)))
                        _fail(c_20);
                      else
                        b_20 = c_20;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_j_10), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(z_19)))), not_null(b_20)))));
                }
              }
            }
          }
      }
    }
  {
    d_20 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_j_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(d_20)))));
  }
  return(t);
}
ATerm is_length_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_1 (ATerm t)
      {
        ATerm j_20 = NULL;
        j_20 = t;
        i_20 :
        if(!(match_cons(j_20, sym_IS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, r_1);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      t = term_m_10;
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  t = is_length_0(t);
  {
    ATerm n_10 = t;
    int o_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_20 = NULL;
        o_20 = t;
        l_20 :
        if(match_int(o_20, 0))
          {
            t = term_t_10;
          }
        else
          {
            _fail(t);
          }
        ;
        LocalPopChoice(o_10);
      }
    else
      {
        t = n_10;
        {
          ATerm p_20 = NULL;
          ATerm q_20 = NULL,s_20 = NULL;
          ATerm r_20 = NULL;
          r_20 = t;
          if(((q_20 != NULL) && (q_20 != r_20)))
            _fail(r_20);
          else
            q_20 = r_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), term_p_9);
            {
              t = copy_0(t);
              {
                s_20 = t;
                if(((p_20 != NULL) && (p_20 != s_20)))
                  _fail(s_20);
                else
                  p_20 = s_20;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(p_20));
        }
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm y_20 = NULL,z_20 = NULL,a_21 = NULL;
  y_20 = t;
  x_20 :
  if(match_cons(y_20, sym__2))
    {
      z_20 = ATgetArgument(y_20, 0);
      a_21 = ATgetArgument(y_20, 1);
      {
        ATerm u_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(z_20), not_null(a_21));
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = u_10;
            t = SSL_subtr(not_null(z_20), not_null(a_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm c_69 (ATerm), ATerm d_69 (ATerm))
{
  ATerm e_21 (ATerm t)
  {
    ATerm y_10 = t;
    int z_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_69(t);
        ;
        LocalPopChoice(z_10);
      }
    else
      {
        t = y_10;
        {
          t = d_69(t);
          t = e_21(t);
        }
      }
    return(t);
  }
  t = e_21(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm f_69 (ATerm), ATerm g_69 (ATerm), ATerm h_69 (ATerm))
{
  t = f_69(t);
  t = while_not_2(t, g_69, h_69);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm n_21 = NULL,o_21 = NULL,p_21 = NULL;
    n_21 = t;
    g_21 :
    if(match_cons(n_21, sym__2))
      {
        o_21 = ATgetArgument(n_21, 0);
        p_21 = ATgetArgument(n_21, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(o_21), not_null(p_21), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm t_1 (ATerm t)
  {
    ATerm s_21 = NULL,t_21 = NULL,u_21 = NULL,v_21 = NULL;
    s_21 = t;
    i_21 :
    if(match_cons(s_21, sym__3))
      {
        t_21 = ATgetArgument(s_21, 0);
        u_21 = ATgetArgument(s_21, 1);
        v_21 = ATgetArgument(s_21, 2);
        j_21 :
        if(match_int(t_21, 0))
          {
            t = not_null(v_21);
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
  ATerm u_1 (ATerm t)
  {
    ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL,b_22 = NULL;
    y_21 = t;
    m_21 :
    if(match_cons(y_21, sym__3))
      {
        z_21 = ATgetArgument(y_21, 0);
        a_22 = ATgetArgument(y_21, 1);
        b_22 = ATgetArgument(y_21, 2);
        {
          ATerm f_22 = NULL;
          ATerm c_11;
          c_11 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_21), term_m_9);
            t = geq_0(t);
          }
          t = c_11;
          {
            ATerm g_22 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_21), term_m_9);
            {
              t = subt_0(t);
              {
                g_22 = t;
                if(((f_22 != NULL) && (f_22 != g_22)))
                  _fail(g_22);
                else
                  f_22 = g_22;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(f_22), not_null(a_22), (ATerm) ATinsert(CheckATermList(not_null(b_22)), not_null(a_22)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, s_1, t_1, u_1);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm a_67 (ATerm), ATerm b_67 (ATerm))
{
  ATerm w_22 = NULL,m_25 = NULL,n_25 = NULL;
  w_22 = t;
  q_22 :
  if(match_cons(w_22, sym_SOpt_2))
    {
      m_25 = ATgetArgument(w_22, 0);
      n_25 = ATgetArgument(w_22, 1);
      {
        ATerm r_25 = NULL,t_25 = NULL;
        ATerm s_25 = NULL;
        t = SSLgetAnnotations(not_null(w_22));
        {
          s_25 = t;
          if(((r_25 != NULL) && (r_25 != s_25)))
            _fail(s_25);
          else
            r_25 = s_25;
        }
        {
          t = not_null(m_25);
          {
            ATerm v_25 = NULL;
            t = a_67(t);
            {
              t_25 = t;
              {
                t = not_null(n_25);
                {
                  ATerm x_25 = NULL;
                  t = b_67(t);
                  {
                    v_25 = t;
                    {
                      ATerm y_25 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(t_25), not_null(v_25)), not_null(r_25));
                      {
                        y_25 = t;
                        if(((x_25 != NULL) && (x_25 != y_25)))
                          _fail(y_25);
                        else
                          x_25 = y_25;
                      }
                      t = not_null(x_25);
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
ATerm SOpt_value_1 (ATerm t, ATerm u_95 (ATerm))
{
  ATerm f_26 = NULL;
  ATerm v_1 (ATerm t)
  {
    ATerm w_1 (ATerm t)
    {
      ATerm g_26 = NULL;
      g_26 = t;
      if(((f_26 != NULL) && (f_26 != g_26)))
        _fail(g_26);
      else
        f_26 = g_26;
      return(t);
    }
    t = SOpt_2(t, u_95, w_1);
    return(t);
  }
  t = fetch_1(t, v_1);
  {
    t = not_null(f_26);
    t = string_to_int_0(t);
  }
  return(t);
}
ATerm vs_length_0 (ATerm t)
{
  ATerm k_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm j_26 = NULL;
        j_26 = t;
        i_26 :
        if(!(match_cons(j_26, sym_VS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, x_1);
      ;
      LocalPopChoice(m_11);
    }
  else
    {
      t = k_11;
      t = term_m_10;
    }
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  t = vs_length_0(t);
  {
    ATerm n_11 = t;
    int o_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_26 = NULL;
        o_26 = t;
        l_26 :
        if(match_int(o_26, 0))
          {
            t = term_t_10;
          }
        else
          {
            _fail(t);
          }
        ;
        LocalPopChoice(o_11);
      }
    else
      {
        t = n_11;
        {
          ATerm p_26 = NULL;
          ATerm q_26 = NULL,s_26 = NULL;
          ATerm r_26 = NULL;
          r_26 = t;
          if(((q_26 != NULL) && (q_26 != r_26)))
            _fail(r_26);
          else
            q_26 = r_26;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_26), term_b_9);
            {
              t = copy_0(t);
              {
                s_26 = t;
                if(((p_26 != NULL) && (p_26 != s_26)))
                  _fail(s_26);
                else
                  p_26 = s_26;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(p_26))));
        }
      }
  }
  return(t);
}
ATerm aopt_0 (ATerm t)
{
  ATerm h_27 = NULL,i_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym_AL_1))
    {
      i_27 = ATgetArgument(h_27, 0);
      t = term_q_11;
    }
  else
    {
      if(match_cons(h_27, sym_AR_1))
        {
          i_27 = ATgetArgument(h_27, 0);
          t = term_r_11;
        }
      else
        {
          if(match_cons(h_27, sym_AC_1))
            {
              i_27 = ATgetArgument(h_27, 0);
              t = term_s_11;
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm SOpts_of_alignment_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym_AC_1))
    {
      x_27 = ATgetArgument(w_27, 0);
      t = not_null(x_27);
    }
  else
    {
      if(match_cons(w_27, sym_AR_1))
        {
          x_27 = ATgetArgument(w_27, 0);
          t = not_null(x_27);
        }
      else
        {
          if(match_cons(w_27, sym_AL_1))
            {
              x_27 = ATgetArgument(w_27, 0);
              t = not_null(x_27);
            }
          else
            {
              _fail(t);
            }
        }
    }
  return(t);
}
ATerm make_hs_0 (ATerm t)
{
  t = SOpts_of_alignment_0(t);
  {
    t = Hspace_0(t);
    {
      ATerm t_11 = t;
      int w_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_28 = NULL;
          g_28 = t;
          e_28 :
          if(((ATgetType(g_28) == AT_LIST) && ATisEmpty(g_28)))
            {
              {
              }
            }
          else
            {
              _fail(t);
            }
          ;
          LocalPopChoice(w_11);
        }
      else
        {
          t = t_11;
          {
            ATerm h_28 = NULL;
            ATerm i_28 = NULL;
            i_28 = t;
            if(((h_28 != NULL) && (h_28 != i_28)))
              _fail(i_28);
            else
              h_28 = i_28;
            t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(h_28));
          }
        }
    }
  }
  return(t);
}
ATerm toa_1 (ATerm t, ATerm p_67 (ATerm))
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  i_29 = t;
  g_29 :
  if(match_cons(i_29, sym_R_2))
    {
      j_29 = ATgetArgument(i_29, 0);
      k_29 = ATgetArgument(i_29, 1);
      h_29 :
      if(((ATgetType(j_29) == AT_LIST) && ATisEmpty(j_29)))
        {
          {
            ATerm m_29 = NULL,n_29 = NULL;
            ATerm o_29 = NULL,p_29 = NULL;
            t = term_g_7;
            {
              t = p_67(t);
              {
                o_29 = t;
                f_29 :
                if(match_cons(o_29, sym_AOPTIONS_1))
                  {
                    p_29 = ATgetArgument(o_29, 0);
                    {
                      ATerm l_31 = NULL;
                      if(((m_29 != NULL) && (m_29 != p_29)))
                        _fail(p_29);
                      else
                        m_29 = p_29;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(k_29), not_null(m_29));
                        {
                          ATerm o_31 (ATerm t)
                          {
                            ATerm q_29 = NULL,r_29 = NULL,s_29 = NULL,t_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL;
                            ATerm q_31 (ATerm t)
                            {
                              ATerm n_30 = NULL;
                              ATerm o_30 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(x_29), not_null(y_29));
                              {
                                t = o_31(t);
                                {
                                  o_30 = t;
                                  if(((n_30 != NULL) && (n_30 != o_30)))
                                    _fail(o_30);
                                  else
                                    n_30 = o_30;
                                }
                              }
                              t = (ATerm) ATinsert(CheckATermList(not_null(n_30)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, not_null(q_29), not_null(r_29)))));
                              return(t);
                            }
                            ATerm r_31 (ATerm t)
                            {
                              ATerm v_30 = NULL,x_30 = NULL,z_30 = NULL;
                              ATerm x_11;
                              x_11 = t;
                              {
                                ATerm w_30 = NULL;
                                t = not_null(z_29);
                                {
                                  t = aopt_0(t);
                                  {
                                    w_30 = t;
                                    if(((v_30 != NULL) && (v_30 != w_30)))
                                      _fail(w_30);
                                    else
                                      v_30 = w_30;
                                  }
                                }
                              }
                              t = x_11;
                              {
                                ATerm y_11;
                                y_11 = t;
                                {
                                  ATerm y_30 = NULL;
                                  t = not_null(z_29);
                                  {
                                    t = make_hs_0(t);
                                    {
                                      y_30 = t;
                                      if(((x_30 != NULL) && (x_30 != y_30)))
                                        _fail(y_30);
                                      else
                                        x_30 = y_30;
                                    }
                                  }
                                }
                                t = y_11;
                                {
                                  ATerm a_31 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_29)), not_null(s_29)), not_null(a_30));
                                  {
                                    t = o_31(t);
                                    {
                                      a_31 = t;
                                      if(((z_30 != NULL) && (z_30 != a_31)))
                                        _fail(a_31);
                                      else
                                        z_30 = a_31;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(z_30)), not_null(x_30)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(v_30)), not_null(w_29)));
                                }
                              }
                              return(t);
                            }
                            ATerm s_31 (ATerm t)
                            {
                              ATerm h_31 = NULL,j_31 = NULL;
                              ATerm z_11;
                              z_11 = t;
                              {
                                ATerm i_31 = NULL;
                                t = not_null(z_29);
                                {
                                  t = aopt_0(t);
                                  {
                                    i_31 = t;
                                    if(((h_31 != NULL) && (h_31 != i_31)))
                                      _fail(i_31);
                                    else
                                      h_31 = i_31;
                                  }
                                }
                              }
                              t = z_11;
                              {
                                ATerm k_31 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(x_29), not_null(a_30));
                                {
                                  t = o_31(t);
                                  {
                                    k_31 = t;
                                    if(((j_31 != NULL) && (j_31 != k_31)))
                                      _fail(k_31);
                                    else
                                      j_31 = k_31;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(j_31)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(h_31)), not_null(w_29)));
                              }
                              return(t);
                            }
                            u_29 = t;
                            w_28 :
                            if(match_cons(u_29, sym__2))
                              {
                                v_29 = ATgetArgument(u_29, 0);
                                y_29 = ATgetArgument(u_29, 1);
                                x_28 :
                                if(((ATgetType(v_29) == AT_LIST) && ATisEmpty(v_29)))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(v_29) == AT_LIST) && !(ATisEmpty(v_29))))
                                      {
                                        w_29 = ATgetFirst((ATermList) v_29);
                                        x_29 = (ATerm) ATgetNext((ATermList) v_29);
                                        y_28 :
                                        if(((ATgetType(y_29) == AT_LIST) && !(ATisEmpty(y_29))))
                                          {
                                            z_29 = ATgetFirst((ATermList) y_29);
                                            a_30 = (ATerm) ATgetNext((ATermList) y_29);
                                            z_28 :
                                            if(((ATgetType(x_29) == AT_LIST) && !(ATisEmpty(x_29))))
                                              {
                                                s_29 = ATgetFirst((ATermList) x_29);
                                                t_29 = (ATerm) ATgetNext((ATermList) x_29);
                                                a_29 :
                                                if(match_cons(w_29, sym_C_2))
                                                  {
                                                    q_29 = ATgetArgument(w_29, 0);
                                                    r_29 = ATgetArgument(w_29, 1);
                                                    {
                                                      ATerm a_12 = t;
                                                      int f_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = q_31(t);
                                                          ;
                                                          LocalPopChoice(f_12);
                                                        }
                                                      else
                                                        {
                                                          t = a_12;
                                                          {
                                                            ATerm h_12 = t;
                                                            int i_12 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = r_31(t);
                                                                ;
                                                                LocalPopChoice(i_12);
                                                              }
                                                            else
                                                              {
                                                                t = h_12;
                                                                t = s_31(t);
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm j_12 = t;
                                                    int k_12 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = r_31(t);
                                                        ;
                                                        LocalPopChoice(k_12);
                                                      }
                                                    else
                                                      {
                                                        t = j_12;
                                                        t = s_31(t);
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                b_29 :
                                                if(match_cons(w_29, sym_C_2))
                                                  {
                                                    q_29 = ATgetArgument(w_29, 0);
                                                    r_29 = ATgetArgument(w_29, 1);
                                                    {
                                                      ATerm m_12 = t;
                                                      int o_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = q_31(t);
                                                          ;
                                                          LocalPopChoice(o_12);
                                                        }
                                                      else
                                                        {
                                                          t = m_12;
                                                          t = s_31(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = s_31(t);
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            c_29 :
                                            d_29 :
                                            if(match_cons(w_29, sym_C_2))
                                              {
                                                q_29 = ATgetArgument(w_29, 0);
                                                r_29 = ATgetArgument(w_29, 1);
                                                t = q_31(t);
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
                          t = o_31(t);
                          {
                            l_31 = t;
                            if(((n_29 != NULL) && (n_29 != l_31)))
                              _fail(l_31);
                            else
                              n_29 = l_31;
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
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_j_10), (ATerm) ATinsert(ATempty, not_null(n_29)));
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
ATerm R_2 (ATerm t, ATerm m_66 (ATerm), ATerm n_66 (ATerm))
{
  ATerm h_32 = NULL,i_32 = NULL,j_32 = NULL;
  h_32 = t;
  f_32 :
  if(match_cons(h_32, sym_R_2))
    {
      i_32 = ATgetArgument(h_32, 0);
      j_32 = ATgetArgument(h_32, 1);
      {
        ATerm n_32 = NULL,p_32 = NULL;
        ATerm o_32 = NULL;
        t = SSLgetAnnotations(not_null(h_32));
        {
          o_32 = t;
          if(((n_32 != NULL) && (n_32 != o_32)))
            _fail(o_32);
          else
            n_32 = o_32;
        }
        {
          t = not_null(i_32);
          {
            ATerm r_32 = NULL;
            t = m_66(t);
            {
              p_32 = t;
              {
                t = not_null(j_32);
                {
                  ATerm t_32 = NULL;
                  t = n_66(t);
                  {
                    r_32 = t;
                    {
                      ATerm u_32 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(p_32), not_null(r_32)), not_null(n_32));
                      {
                        u_32 = t;
                        if(((t_32 != NULL) && (t_32 != u_32)))
                          _fail(u_32);
                        else
                          t_32 = u_32;
                      }
                      t = not_null(t_32);
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
ATerm split_2 (ATerm t, ATerm s_83 (ATerm), ATerm t_83 (ATerm))
{
  ATerm e_33 = NULL,g_33 = NULL;
  ATerm p_12;
  p_12 = t;
  {
    ATerm f_33 = NULL;
    t = s_83(t);
    {
      f_33 = t;
      if(((e_33 != NULL) && (e_33 != f_33)))
        _fail(f_33);
      else
        e_33 = f_33;
    }
  }
  t = p_12;
  {
    ATerm h_33 = NULL;
    t = t_83(t);
    {
      h_33 = t;
      if(((g_33 != NULL) && (g_33 != h_33)))
        _fail(h_33);
      else
        g_33 = h_33;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), not_null(g_33));
  }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm y_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, y_1);
  {
    ATerm z_34 (ATerm t)
    {
      ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL,d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL;
      ATerm c_35 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_34), (ATerm) ATinsert(CheckATermList(not_null(g_34)), not_null(e_34)));
        t = z_34(t);
        return(t);
      }
      c_34 = t;
      x_33 :
      if(match_cons(c_34, sym__2))
        {
          d_34 = ATgetArgument(c_34, 0);
          g_34 = ATgetArgument(c_34, 1);
          y_33 :
          if(((ATgetType(d_34) == AT_LIST) && ATisEmpty(d_34)))
            {
              {
                ATerm l_34 = NULL;
                ATerm m_34 = NULL;
                t = not_null(g_34);
                {
                  t = reverse_0(t);
                  {
                    m_34 = t;
                    if(((l_34 != NULL) && (l_34 != m_34)))
                      _fail(m_34);
                    else
                      l_34 = m_34;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(l_34)));
              }
            }
          else
            {
              if(((ATgetType(d_34) == AT_LIST) && !(ATisEmpty(d_34))))
                {
                  e_34 = ATgetFirst((ATermList) d_34);
                  f_34 = (ATerm) ATgetNext((ATermList) d_34);
                  z_33 :
                  if(match_cons(e_34, sym_R_2))
                    {
                      a_34 = ATgetArgument(e_34, 0);
                      b_34 = ATgetArgument(e_34, 1);
                      {
                        ATerm v_12 = t;
                        int b_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm r_34 = NULL,t_34 = NULL;
                            ATerm c_13;
                            c_13 = t;
                            {
                              ATerm s_34 = NULL;
                              t = not_null(g_34);
                              {
                                t = reverse_0(t);
                                {
                                  s_34 = t;
                                  if(((r_34 != NULL) && (r_34 != s_34)))
                                    _fail(s_34);
                                  else
                                    r_34 = s_34;
                                }
                              }
                            }
                            t = c_13;
                            {
                              ATerm u_34 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(f_34), (ATerm) ATempty);
                              {
                                t = z_34(t);
                                {
                                  u_34 = t;
                                  if(((t_34 != NULL) && (t_34 != u_34)))
                                    _fail(u_34);
                                  else
                                    t_34 = u_34;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_34)), (ATerm) ATmakeAppl(sym_R_2, not_null(a_34), not_null(b_34))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(r_34)));
                            }
                            ;
                            LocalPopChoice(b_13);
                          }
                        else
                          {
                            t = v_12;
                            t = c_35(t);
                          }
                      }
                    }
                  else
                    {
                      t = c_35(t);
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
    t = z_34(t);
    {
      ATerm z_1 (ATerm t)
      {
        ATerm d_13 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = d_13;
          }
        return(t);
      }
      t = filter_1(t, z_1);
    }
  }
  return(t);
}
ATerm Abox2html_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL,p_36 = NULL;
  o_36 = t;
  k_36 :
  if(match_cons(o_36, sym_REF_2))
    {
      p_36 = ATgetArgument(o_36, 0);
      n_36 = ATgetArgument(o_36, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, not_null(p_36), not_null(n_36));
    }
  else
    {
      if(match_cons(o_36, sym_LBL_2))
        {
          p_36 = ATgetArgument(o_36, 0);
          n_36 = ATgetArgument(o_36, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_36)), (ATerm) ATmakeAppl(sym_ANCHOR_1, not_null(p_36)));
        }
      else
        {
          if(match_cons(o_36, sym_LNAT_2))
            {
              p_36 = ATgetArgument(o_36, 0);
              n_36 = ATgetArgument(o_36, 1);
              t = term_h_13;
            }
          else
            {
              if(match_cons(o_36, sym_L_2))
                {
                  p_36 = ATgetArgument(o_36, 0);
                  n_36 = ATgetArgument(o_36, 1);
                  t = term_h_13;
                }
              else
                {
                  if(match_cons(o_36, sym_ALT_2))
                    {
                      p_36 = ATgetArgument(o_36, 0);
                      n_36 = ATgetArgument(o_36, 1);
                      t = not_null(p_36);
                    }
                  else
                    {
                      if(match_cons(o_36, sym_A_3))
                        {
                          p_36 = ATgetArgument(o_36, 0);
                          n_36 = ATgetArgument(o_36, 1);
                          m_36 = ATgetArgument(o_36, 2);
                          {
                            ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
                            ATerm g_37 = NULL;
                            t = not_null(m_36);
                            {
                              ATerm h_37 = NULL;
                              t = construct_rows_0(t);
                              {
                                g_37 = t;
                                {
                                  if(((d_37 != NULL) && (d_37 != g_37)))
                                    _fail(g_37);
                                  else
                                    d_37 = g_37;
                                  {
                                    t = not_null(n_36);
                                    {
                                      ATerm i_37 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        h_37 = t;
                                        {
                                          if(((e_37 != NULL) && (e_37 != h_37)))
                                            _fail(h_37);
                                          else
                                            e_37 = h_37;
                                          {
                                            t = not_null(d_37);
                                            {
                                              ATerm a_2 (ATerm t)
                                              {
                                                ATerm b_2 (ATerm t)
                                                {
                                                  t = not_null(p_36);
                                                  return(t);
                                                }
                                                t = toa_1(t, b_2);
                                                return(t);
                                              }
                                              t = map_1(t, a_2);
                                              {
                                                ATerm c_2 (ATerm t)
                                                {
                                                  t = not_null(e_37);
                                                  return(t);
                                                }
                                                t = separate_by_1(t, c_2);
                                                {
                                                  i_37 = t;
                                                  if(((f_37 != NULL) && (f_37 != i_37)))
                                                    _fail(i_37);
                                                  else
                                                    f_37 = i_37;
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
                            t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(f_37))))));
                          }
                        }
                      else
                        {
                          if(match_cons(o_36, sym_HV_2))
                            {
                              p_36 = ATgetArgument(o_36, 0);
                              n_36 = ATgetArgument(o_36, 1);
                              {
                                ATerm l_37 = NULL,m_37 = NULL,n_37 = NULL;
                                ATerm o_37 = NULL;
                                t = not_null(p_36);
                                {
                                  ATerm t_37 = NULL;
                                  t = Hspace_0(t);
                                  {
                                    o_37 = t;
                                    {
                                      if(((l_37 != NULL) && (l_37 != o_37)))
                                        _fail(o_37);
                                      else
                                        l_37 = o_37;
                                      {
                                        ATerm i_13 = t;
                                        int j_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm p_37 = NULL;
                                            p_37 = t;
                                            x_35 :
                                            if(((ATgetType(p_37) == AT_LIST) && ATisEmpty(p_37)))
                                              {
                                                {
                                                  t = not_null(n_36);
                                                  {
                                                    ATerm d_2 (ATerm t)
                                                    {
                                                      ATerm p_13 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = Nil_0(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = p_13;
                                                        }
                                                      return(t);
                                                    }
                                                    t = filter_1(t, d_2);
                                                  }
                                                }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            ;
                                            LocalPopChoice(j_13);
                                          }
                                        else
                                          {
                                            t = i_13;
                                            {
                                              ATerm q_37 = NULL;
                                              ATerm r_37 = NULL;
                                              ATerm e_2 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, term_q_13);
                                                return(t);
                                              }
                                              t = at_last_1(t, e_2);
                                              {
                                                q_37 = t;
                                                {
                                                  if(((m_37 != NULL) && (m_37 != q_37)))
                                                    _fail(q_37);
                                                  else
                                                    m_37 = q_37;
                                                  {
                                                    ATerm s_37 = NULL;
                                                    t = not_null(n_36);
                                                    {
                                                      ATerm f_2 (ATerm t)
                                                      {
                                                        ATerm r_13 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = r_13;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, f_2);
                                                      {
                                                        ATerm g_2 (ATerm t)
                                                        {
                                                          t = not_null(m_37);
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, g_2);
                                                        {
                                                          s_37 = t;
                                                          if(((r_37 != NULL) && (r_37 != s_37)))
                                                            _fail(s_37);
                                                          else
                                                            r_37 = s_37;
                                                        }
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_37)), term_v_13);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        {
                                          t_37 = t;
                                          if(((n_37 != NULL) && (n_37 != t_37)))
                                            _fail(t_37);
                                          else
                                            n_37 = t_37;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = not_null(n_37);
                              }
                            }
                          else
                            {
                              if(match_cons(o_36, sym_V_2))
                                {
                                  p_36 = ATgetArgument(o_36, 0);
                                  n_36 = ATgetArgument(o_36, 1);
                                  {
                                    ATerm w_37 = NULL,x_37 = NULL,y_37 = NULL;
                                    ATerm z_37 = NULL;
                                    t = not_null(p_36);
                                    {
                                      ATerm a_38 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        z_37 = t;
                                        {
                                          if(((x_37 != NULL) && (x_37 != z_37)))
                                            _fail(z_37);
                                          else
                                            x_37 = z_37;
                                          {
                                            t = not_null(p_36);
                                            {
                                              ATerm b_38 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                a_38 = t;
                                                {
                                                  if(((w_37 != NULL) && (w_37 != a_38)))
                                                    _fail(a_38);
                                                  else
                                                    w_37 = a_38;
                                                  {
                                                    t = not_null(n_36);
                                                    {
                                                      ATerm h_2 (ATerm t)
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
                                                      t = filter_1(t, h_2);
                                                      {
                                                        ATerm i_2 (ATerm t)
                                                        {
                                                          ATerm k_2 (ATerm t)
                                                          {
                                                            t = term_t_10;
                                                            return(t);
                                                          }
                                                          t = tov_1(t, k_2);
                                                          return(t);
                                                        }
                                                        ATerm j_2 (ATerm t)
                                                        {
                                                          ATerm l_2 (ATerm t)
                                                          {
                                                            ATerm m_2 (ATerm t)
                                                            {
                                                              t = not_null(w_37);
                                                              return(t);
                                                            }
                                                            t = tov_1(t, m_2);
                                                            return(t);
                                                          }
                                                          t = map_1(t, l_2);
                                                          return(t);
                                                        }
                                                        t = Cons_2(t, i_2, j_2);
                                                        {
                                                          ATerm n_2 (ATerm t)
                                                          {
                                                            t = not_null(x_37);
                                                            return(t);
                                                          }
                                                          t = separate_by_1(t, n_2);
                                                          {
                                                            b_38 = t;
                                                            if(((y_37 != NULL) && (y_37 != b_38)))
                                                              _fail(b_38);
                                                            else
                                                              y_37 = b_38;
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
                                    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, not_null(y_37))), term_v_13);
                                  }
                                }
                              else
                                {
                                  if(match_cons(o_36, sym_H_2))
                                    {
                                      p_36 = ATgetArgument(o_36, 0);
                                      n_36 = ATgetArgument(o_36, 1);
                                      {
                                        ATerm e_38 = NULL,f_38 = NULL;
                                        ATerm g_38 = NULL;
                                        t = not_null(p_36);
                                        {
                                          ATerm h_38 = NULL;
                                          t = Hspace_0(t);
                                          {
                                            g_38 = t;
                                            {
                                              if(((e_38 != NULL) && (e_38 != g_38)))
                                                _fail(g_38);
                                              else
                                                e_38 = g_38;
                                              {
                                                t = not_null(n_36);
                                                {
                                                  ATerm o_2 (ATerm t)
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
                                                  t = filter_1(t, o_2);
                                                  {
                                                    ATerm s_2 (ATerm t)
                                                    {
                                                      t = not_null(e_38);
                                                      return(t);
                                                    }
                                                    t = sep_by_1(t, s_2);
                                                    {
                                                      h_38 = t;
                                                      if(((f_38 != NULL) && (f_38 != h_38)))
                                                        _fail(h_38);
                                                      else
                                                        f_38 = h_38;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = not_null(f_38);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(o_36, sym_FBOX_2))
                                        {
                                          p_36 = ATgetArgument(o_36, 0);
                                          n_36 = ATgetArgument(o_36, 1);
                                          {
                                            ATerm k_38 = NULL;
                                            ATerm l_38 = NULL;
                                            t = not_null(p_36);
                                            {
                                              ATerm a_14 = t;
                                              int b_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = KW_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_c_14), (ATerm) ATinsert(ATempty, not_null(n_36)));
                                                  ;
                                                  LocalPopChoice(b_14);
                                                }
                                              else
                                                {
                                                  t = a_14;
                                                  {
                                                    ATerm d_14 = t;
                                                    int e_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = VAR_0(t);
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_f_14), (ATerm) ATinsert(ATempty, not_null(n_36)));
                                                        ;
                                                        LocalPopChoice(e_14);
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
                                                        {
                                                          ATerm g_14 = t;
                                                          int j_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = NUM_0(t);
                                                              t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_o_14), (ATerm) ATinsert(ATempty, not_null(n_36)));
                                                              ;
                                                              LocalPopChoice(j_14);
                                                            }
                                                          else
                                                            {
                                                              t = g_14;
                                                              {
                                                                ATerm p_14 = t;
                                                                int q_14 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = MATH_0(t);
                                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_r_14), (ATerm) ATinsert(ATempty, not_null(n_36)));
                                                                    ;
                                                                    LocalPopChoice(q_14);
                                                                  }
                                                                else
                                                                  {
                                                                    t = p_14;
                                                                    t = not_null(n_36);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              {
                                                l_38 = t;
                                                if(((k_38 != NULL) && (k_38 != l_38)))
                                                  _fail(l_38);
                                                else
                                                  k_38 = l_38;
                                              }
                                            }
                                            t = not_null(k_38);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(o_36, sym_C_2))
                                            {
                                              p_36 = ATgetArgument(o_36, 0);
                                              n_36 = ATgetArgument(o_36, 1);
                                              l_36 :
                                              if(((ATgetType(p_36) == AT_LIST) && ATisEmpty(p_36)))
                                                {
                                                  {
                                                    ATerm n_38 = NULL;
                                                    ATerm r_38 = NULL;
                                                    t = not_null(n_36);
                                                    {
                                                      ATerm t_2 (ATerm t)
                                                      {
                                                        ATerm o_38 = NULL,p_38 = NULL;
                                                        o_38 = t;
                                                        i_36 :
                                                        if(match_cons(o_38, sym_S_1))
                                                          {
                                                            p_38 = ATgetArgument(o_38, 0);
                                                            {
                                                              t = not_null(p_38);
                                                              t = make_html_comment_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      t = map_1(t, t_2);
                                                      {
                                                        r_38 = t;
                                                        if(((n_38 != NULL) && (n_38 != r_38)))
                                                          _fail(r_38);
                                                        else
                                                          n_38 = r_38;
                                                      }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_s_14), (ATerm) ATinsert(ATempty, not_null(n_38))))));
                                                  }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(o_36, sym_S_1))
                                                {
                                                  p_36 = ATgetArgument(o_36, 0);
                                                  {
                                                    t = not_null(p_36);
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
ATerm topdown_1 (ATerm t, ATerm l_69 (ATerm))
{
  t = l_69(t);
  {
    ATerm u_2 (ATerm t)
    {
      t = topdown_1(t, l_69);
      return(t);
    }
    t = _all(t, u_2);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm p_76 (ATerm))
{
  ATerm y_39 (ATerm t)
  {
    ATerm t_14 = t;
    int w_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = p_76(t);
        ;
        LocalPopChoice(w_14);
      }
    else
      {
        t = t_14;
        t = Cons_2(t, _id, y_39);
      }
    return(t);
  }
  t = y_39(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm i_76 (ATerm))
{
  ATerm z_39 (ATerm t)
  {
    ATerm b_15 = t;
    int c_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_76(t);
        ;
        LocalPopChoice(c_15);
      }
    else
      {
        t = b_15;
        t = Cons_2(t, _id, z_39);
      }
    return(t);
  }
  t = z_39(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm b_76 (ATerm))
{
  ATerm c_40 = NULL,e_40 = NULL;
  ATerm x_2 (ATerm t)
  {
    t = Cons_2(t, b_76, _id);
    {
      ATerm y_2 (ATerm t)
      {
        ATerm d_40 = NULL;
        d_40 = t;
        if(((c_40 != NULL) && (c_40 != d_40)))
          _fail(d_40);
        else
          c_40 = d_40;
        return(t);
      }
      t = Cons_2(t, _id, y_2);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, x_2);
  {
    ATerm f_40 = NULL;
    f_40 = t;
    if(((e_40 != NULL) && (e_40 != f_40)))
      _fail(f_40);
    else
      e_40 = f_40;
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_40), not_null(c_40));
  }
  return(t);
}
ATerm Distribute_0 (ATerm t)
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym_H_2))
    {
      u_40 = ATgetArgument(t_40, 0);
      v_40 = ATgetArgument(t_40, 1);
      {
        ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL,g_41 = NULL,h_41 = NULL,i_41 = NULL;
        t = not_null(v_40);
        {
          ATerm z_2 (ATerm t)
          {
            ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL,e_41 = NULL,f_41 = NULL;
            b_41 = t;
            k_40 :
            if(match_cons(b_41, sym_V_2))
              {
                c_41 = ATgetArgument(b_41, 0);
                d_41 = ATgetArgument(b_41, 1);
                l_40 :
                if(((ATgetType(d_41) == AT_LIST) && !(ATisEmpty(d_41))))
                  {
                    e_41 = ATgetFirst((ATermList) d_41);
                    f_41 = (ATerm) ATgetNext((ATermList) d_41);
                    {
                      if(((y_40 != NULL) && (y_40 != c_41)))
                        _fail(c_41);
                      else
                        y_40 = c_41;
                      {
                        if(((z_40 != NULL) && (z_40 != e_41)))
                          _fail(e_41);
                        else
                          z_40 = e_41;
                        if(((a_41 != NULL) && (a_41 != f_41)))
                          _fail(f_41);
                        else
                          a_41 = f_41;
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
          t = split_fetch_1(t, z_2);
          {
            g_41 = t;
            r_40 :
            if(match_cons(g_41, sym__2))
              {
                h_41 = ATgetArgument(g_41, 0);
                i_41 = ATgetArgument(g_41, 1);
                {
                  ATerm n_41 = NULL,r_41 = NULL;
                  t = not_null(i_41);
                  {
                    ATerm d_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm m_41 = NULL;
                        m_41 = t;
                        n_40 :
                        if(((ATgetType(m_41) == AT_LIST) && ATisEmpty(m_41)))
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
                        t = d_15;
                      }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(a_41)), not_null(z_40));
                      {
                        ATerm t_41 = NULL;
                        ATerm a_3 (ATerm t)
                        {
                          ATerm b_3 (ATerm t)
                          {
                            ATerm o_41 = NULL;
                            o_41 = t;
                            if(((n_41 != NULL) && (n_41 != o_41)))
                              _fail(o_41);
                            else
                              n_41 = o_41;
                            return(t);
                          }
                          t = Cons_2(t, b_3, Nil_0);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, not_null(u_40), (ATerm) ATinsert(CheckATermList(not_null(i_41)), not_null(n_41))));
                          return(t);
                        }
                        t = at_last_1(t, a_3);
                        {
                          r_41 = t;
                          {
                            ATerm u_41 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(h_41), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(y_40), not_null(r_41))));
                            {
                              t = conc_0(t);
                              {
                                u_41 = t;
                                if(((t_41 != NULL) && (t_41 != u_41)))
                                  _fail(u_41);
                                else
                                  t_41 = u_41;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_H_2, not_null(u_40), not_null(t_41));
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
  ATerm c_3 (ATerm t)
  {
    ATerm d_3 (ATerm t)
    {
      ATerm e_15 = t;
      int f_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_42 = NULL,l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL;
          k_42 = t;
          f_42 :
          if(match_cons(k_42, sym_H_2))
            {
              l_42 = ATgetArgument(k_42, 0);
              m_42 = ATgetArgument(k_42, 1);
              g_42 :
              if(((ATgetType(m_42) == AT_LIST) && !(ATisEmpty(m_42))))
                {
                  n_42 = ATgetFirst((ATermList) m_42);
                  o_42 = (ATerm) ATgetNext((ATermList) m_42);
                  h_42 :
                  if(((ATgetType(o_42) == AT_LIST) && ATisEmpty(o_42)))
                    {
                      t = not_null(n_42);
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
              if(match_cons(k_42, sym_V_2))
                {
                  l_42 = ATgetArgument(k_42, 0);
                  m_42 = ATgetArgument(k_42, 1);
                  i_42 :
                  if(((ATgetType(m_42) == AT_LIST) && !(ATisEmpty(m_42))))
                    {
                      n_42 = ATgetFirst((ATermList) m_42);
                      o_42 = (ATerm) ATgetNext((ATermList) m_42);
                      j_42 :
                      if(((ATgetType(o_42) == AT_LIST) && ATisEmpty(o_42)))
                        {
                          t = not_null(n_42);
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
          ;
          LocalPopChoice(f_15);
        }
      else
        {
          t = e_15;
          t = Distribute_0(t);
        }
      return(t);
    }
    t = try_1(t, d_3);
    return(t);
  }
  t = topdown_1(t, c_3);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm h_43 = NULL;
  t = normalize_0(t);
  {
    ATerm e_3 (ATerm t)
    {
      t = try_1(t, Abox2html_0);
      return(t);
    }
    t = topdown_1(t, e_3);
    {
      ATerm i_43 = NULL;
      i_43 = t;
      if(((h_43 != NULL) && (h_43 != i_43)))
        _fail(i_43);
      else
        h_43 = i_43;
      {
        t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(h_43))))));
        t = html2text_0(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm l_43 = NULL;
  ATerm g_15 = t;
  int j_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_43 = NULL;
      m_43 = t;
      {
        if(((l_43 != NULL) && (l_43 != m_43)))
          _fail(m_43);
        else
          l_43 = m_43;
        t = SSL_ReadFromFile(not_null(l_43));
      }
      ;
      LocalPopChoice(j_15);
    }
  else
    {
      t = g_15;
      {
        ATerm f_3 (ATerm t)
        {
          t = term_o_15;
          return(t);
        }
        t = debug_1(t, f_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm q_43 = NULL;
  ATerm s_43 = NULL;
  q_43 = t;
  {
    ATerm p_15;
    p_15 = t;
    {
      ATerm t_43 = NULL;
      t = term_q_15;
      {
        t_43 = t;
        if(((s_43 != NULL) && (s_43 != t_43)))
          _fail(t_43);
        else
          s_43 = t_43;
      }
    }
    t = p_15;
    {
      t = SSL_open_file(not_null(q_43), not_null(s_43));
      t = SSL_close_file(not_null(q_43));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm k_44 = NULL,l_44 = NULL;
  k_44 = t;
  j_44 :
  if(match_cons(k_44, sym_stdin_0))
    {
      ATerm m_44 = NULL;
      ATerm o_44 = NULL;
      t = term_r_15;
      {
        t = ReadFromFile_0(t);
        {
          o_44 = t;
          if(((m_44 != NULL) && (m_44 != o_44)))
            _fail(o_44);
          else
            m_44 = o_44;
        }
      }
      t = not_null(m_44);
    }
  else
    {
      if(match_cons(k_44, sym_FILE_1))
        {
          l_44 = ATgetArgument(k_44, 0);
          {
            ATerm q_44 = NULL;
            ATerm r_44 = NULL;
            t = not_null(l_44);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  r_44 = t;
                  if(((q_44 != NULL) && (q_44 != r_44)))
                    _fail(r_44);
                  else
                    q_44 = r_44;
                }
              }
            }
            t = not_null(q_44);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  y_44 = t;
  x_44 :
  if(match_cons(y_44, sym__2))
    {
      z_44 = ATgetArgument(y_44, 0);
      a_45 = ATgetArgument(y_44, 1);
      t = SSL_copy(not_null(z_44), not_null(a_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm i_45 = NULL;
  i_45 = t;
  h_45 :
  if(match_cons(i_45, sym_stderr_0))
    {
      ATerm k_45 = NULL,m_45 = NULL;
      ATerm s_15;
      s_15 = t;
      {
        ATerm l_45 = NULL;
        t = SSLgetAnnotations(not_null(i_45));
        {
          l_45 = t;
          if(((k_45 != NULL) && (k_45 != l_45)))
            _fail(l_45);
          else
            k_45 = l_45;
        }
      }
      t = s_15;
      {
        ATerm n_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(k_45));
        {
          n_45 = t;
          if(((m_45 != NULL) && (m_45 != n_45)))
            _fail(n_45);
          else
            m_45 = n_45;
        }
        t = not_null(m_45);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stdout_0 (ATerm t)
{
  ATerm v_45 = NULL;
  v_45 = t;
  u_45 :
  if(match_cons(v_45, sym_stdout_0))
    {
      ATerm x_45 = NULL,z_45 = NULL;
      ATerm t_15;
      t_15 = t;
      {
        ATerm y_45 = NULL;
        t = SSLgetAnnotations(not_null(v_45));
        {
          y_45 = t;
          if(((x_45 != NULL) && (x_45 != y_45)))
            _fail(y_45);
          else
            x_45 = y_45;
        }
      }
      t = t_15;
      {
        ATerm a_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(x_45));
        {
          a_46 = t;
          if(((z_45 != NULL) && (z_45 != a_46)))
            _fail(a_46);
          else
            z_45 = a_46;
        }
        t = not_null(z_45);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm copy_to_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm m_46 = NULL,n_46 = NULL;
  m_46 = t;
  l_46 :
  if(match_cons(m_46, sym_FILE_1))
    {
      n_46 = ATgetArgument(m_46, 0);
      {
        ATerm w_15 = t;
        int b_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_46 = NULL;
            ATerm q_46 = NULL;
            t = m_0(t);
            {
              q_46 = t;
              {
                if(((p_46 != NULL) && (p_46 != q_46)))
                  _fail(q_46);
                else
                  p_46 = q_46;
                {
                  ATerm c_16 = t;
                  int d_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(d_16);
                    }
                  else
                    {
                      t = c_16;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_46), not_null(p_46));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_46));
            ;
            LocalPopChoice(b_16);
          }
        else
          {
            t = w_15;
            {
              ATerm e_16 = t;
              int g_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_46 = NULL;
                  ATerm t_46 = NULL;
                  t = m_0(t);
                  {
                    t_46 = t;
                    {
                      if(((s_46 != NULL) && (s_46 != t_46)))
                        _fail(t_46);
                      else
                        s_46 = t_46;
                      {
                        ATerm h_16 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm i_16 = t;
                            int n_16 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(n_16);
                              }
                            else
                              {
                                t = i_16;
                                {
                                  ATerm o_16 = t;
                                  int r_16 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(r_16);
                                    }
                                  else
                                    {
                                      t = o_16;
                                      {
                                        ATerm u_46 = NULL;
                                        u_46 = t;
                                        if(((n_46 != NULL) && (n_46 != u_46)))
                                          _fail(u_46);
                                        else
                                          n_46 = u_46;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = h_16;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_46), not_null(s_46));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_46));
                  ;
                  LocalPopChoice(g_16);
                }
              else
                {
                  t = e_16;
                  {
                    ATerm y_46 = NULL;
                    t = m_0(t);
                    {
                      y_46 = t;
                      if(((n_46 != NULL) && (n_46 != y_46)))
                        _fail(y_46);
                      else
                        n_46 = y_46;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_46));
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
ATerm Tl_0 (ATerm t)
{
  ATerm j_47 = NULL,k_47 = NULL,l_47 = NULL;
  j_47 = t;
  i_47 :
  if(((ATgetType(j_47) == AT_LIST) && !(ATisEmpty(j_47))))
    {
      k_47 = ATgetFirst((ATermList) j_47);
      l_47 = (ATerm) ATgetNext((ATermList) j_47);
      t = not_null(l_47);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm s_47 = NULL,u_47 = NULL,v_47 = NULL;
  s_47 = t;
  r_47 :
  if(match_cons(s_47, sym__2))
    {
      u_47 = ATgetArgument(s_47, 0);
      v_47 = ATgetArgument(s_47, 1);
      {
        ATerm t_16;
        t_16 = t;
        {
          ATerm a_48 = NULL;
          ATerm b_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_47), not_null(v_47));
          {
            ATerm x_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(y_16);
              }
            else
              {
                t = x_16;
                t = (ATerm) ATempty;
              }
            {
              b_48 = t;
              if(((a_48 != NULL) && (a_48 != b_48)))
                _fail(b_48);
              else
                a_48 = b_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(u_47), not_null(v_47), not_null(a_48));
            t = table_put_0(t);
          }
        }
        t = t_16;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  ATerm z_16;
  z_16 = t;
  {
    ATerm v_48 = NULL;
    ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
    t = d_86(t);
    {
      v_48 = t;
      {
        if(((u_48 != NULL) && (u_48 != v_48)))
          _fail(v_48);
        else
          u_48 = v_48;
        {
          ATerm a_17 = t;
          int f_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_48), term_y_6);
              t = table_get_0(t);
              ;
              LocalPopChoice(f_17);
            }
          else
            {
              t = a_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            w_48 = t;
            r_48 :
            if(((ATgetType(w_48) == AT_LIST) && !(ATisEmpty(w_48))))
              {
                x_48 = ATgetFirst((ATermList) w_48);
                y_48 = (ATerm) ATgetNext((ATermList) w_48);
                {
                  if(((t_48 != NULL) && (t_48 != x_48)))
                    _fail(x_48);
                  else
                    t_48 = x_48;
                  {
                    if(((s_48 != NULL) && (s_48 != y_48)))
                      _fail(y_48);
                    else
                      s_48 = y_48;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(u_48), term_y_6, not_null(s_48));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(t_48);
                          {
                            ATerm g_3 (ATerm t)
                            {
                              ATerm d_49 = NULL;
                              d_49 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(u_48), not_null(d_49));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, g_3);
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
  }
  t = z_16;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm j_49 = NULL;
  j_49 = t;
  t = SSL_remove(not_null(j_49));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm g_68 (ATerm), ATerm h_68 (ATerm))
{
  ATerm g_17 = t;
  int j_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = g_68(t);
      t = h_68(t);
      ;
      LocalPopChoice(j_17);
    }
  else
    {
      t = g_17;
      {
        t = h_68(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm c_86 (ATerm))
{
  ATerm o_49 = NULL;
  ATerm k_17;
  k_17 = t;
  {
    ATerm p_49 = NULL;
    ATerm q_49 = NULL;
    t = c_86(t);
    {
      p_49 = t;
      {
        if(((o_49 != NULL) && (o_49 != p_49)))
          _fail(p_49);
        else
          o_49 = p_49;
        {
          ATerm r_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_49), term_y_6);
          {
            ATerm l_17 = t;
            int m_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(m_17);
              }
            else
              {
                t = l_17;
                t = (ATerm) ATempty;
              }
            {
              r_49 = t;
              if(((q_49 != NULL) && (q_49 != r_49)))
                _fail(r_49);
              else
                q_49 = r_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_49), term_y_6, (ATerm) ATinsert(CheckATermList(not_null(q_49)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = k_17;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm d_96 (ATerm))
{
  ATerm x_49 = NULL,y_49 = NULL;
  ATerm h_3 (ATerm t)
  {
    t = term_j_7;
    return(t);
  }
  t = begin_scope_1(t, h_3);
  {
    ATerm i_3 (ATerm t)
    {
      ATerm p_17;
      p_17 = t;
      {
        ATerm z_49 = NULL,a_50 = NULL,b_50 = NULL;
        ATerm q_17 = t;
        int r_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_w_17;
            t = table_get_0(t);
            ;
            LocalPopChoice(r_17);
          }
        else
          {
            t = q_17;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          z_49 = t;
          v_49 :
          if(((ATgetType(z_49) == AT_LIST) && !(ATisEmpty(z_49))))
            {
              a_50 = ATgetFirst((ATermList) z_49);
              b_50 = (ATerm) ATgetNext((ATermList) z_49);
              {
                if(((y_49 != NULL) && (y_49 != a_50)))
                  _fail(a_50);
                else
                  y_49 = a_50;
                {
                  if(((x_49 != NULL) && (x_49 != b_50)))
                    _fail(b_50);
                  else
                    x_49 = b_50;
                  {
                    t = not_null(y_49);
                    {
                      ATerm j_3 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, j_3);
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
      t = p_17;
      {
        ATerm k_3 (ATerm t)
        {
          t = term_j_7;
          return(t);
        }
        t = end_scope_1(t, k_3);
      }
      return(t);
    }
    t = restore_always_2(t, d_96, i_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm x_17 = t;
    int y_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_50 = NULL;
        ATerm f_50 = NULL;
        t = term_z_17;
        {
          t = get_config_0(t);
          {
            f_50 = t;
            if(((e_50 != NULL) && (e_50 != f_50)))
              _fail(f_50);
            else
              e_50 = f_50;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(e_50));
        ;
        LocalPopChoice(y_17);
      }
    else
      {
        t = x_17;
        t = term_r_15;
      }
    {
      t = e_96(t);
      {
        ATerm o_3 (ATerm t)
        {
          ATerm a_18 = t;
          int b_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_c_18;
              t = get_config_0(t);
              ;
              LocalPopChoice(b_18);
            }
          else
            {
              t = a_18;
              t = term_h_18;
            }
          return(t);
        }
        t = copy_to_1(t, o_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, l_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm p_3 (ATerm t)
  {
    ATerm i_50 = NULL;
    i_50 = t;
    h_50 :
    if(!(match_string(i_50, "-v")))
      {
        if(!(match_string(i_50, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_j_18;
    t = set_config_0(t);
    t = term_n_18;
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    t = term_p_18;
    return(t);
  }
  t = Option_3(t, p_3, q_3, r_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm l_50 = NULL;
    l_50 = t;
    j_50 :
    if(!(match_string(l_50, "-k")))
      {
        if(!(match_string(l_50, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm s_18;
    s_18 = t;
    {
      ATerm m_50 = NULL;
      ATerm n_50 = NULL;
      t = string_to_int_0(t);
      {
        n_50 = t;
        if(((m_50 != NULL) && (m_50 != n_50)))
          _fail(n_50);
        else
          m_50 = n_50;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_18, not_null(m_50));
        t = set_config_0(t);
      }
    }
    t = s_18;
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_u_18;
    return(t);
  }
  t = ArgOption_3(t, s_3, t_3, u_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_50 = NULL;
  q_50 = t;
  t = SSL_string_to_int(not_null(q_50));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_18 = t;
  int w_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_3 (ATerm t)
      {
        ATerm d_51 = NULL;
        d_51 = t;
        t_50 :
        if(!(match_string(d_51, "-S")))
          {
            if(!(match_string(d_51, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm w_3 (ATerm t)
      {
        t = term_x_18;
        t = set_config_0(t);
        t = term_y_18;
        return(t);
      }
      ATerm x_3 (ATerm t)
      {
        t = term_z_18;
        return(t);
      }
      t = Option_3(t, v_3, w_3, x_3);
      ;
      LocalPopChoice(w_18);
    }
  else
    {
      t = v_18;
      {
        ATerm a_19 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_3 (ATerm t)
            {
              ATerm e_51 = NULL;
              e_51 = t;
              u_50 :
              if(!(match_string(e_51, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm z_3 (ATerm t)
            {
              ATerm h_51 = NULL;
              ATerm g_19;
              g_19 = t;
              {
                ATerm f_51 = NULL;
                ATerm g_51 = NULL;
                t = string_to_int_0(t);
                {
                  g_51 = t;
                  if(((f_51 != NULL) && (f_51 != g_51)))
                    _fail(g_51);
                  else
                    f_51 = g_51;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_9, not_null(f_51));
                  t = set_config_0(t);
                }
              }
              t = g_19;
              {
                ATerm i_51 = NULL;
                i_51 = t;
                if(((h_51 != NULL) && (h_51 != i_51)))
                  _fail(i_51);
                else
                  h_51 = i_51;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_51));
              }
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = term_h_19;
              return(t);
            }
            t = ArgOption_3(t, y_3, z_3, a_4);
            ;
            LocalPopChoice(b_19);
          }
        else
          {
            t = a_19;
            {
              ATerm b_4 (ATerm t)
              {
                ATerm j_51 = NULL;
                j_51 = t;
                c_51 :
                if(!(match_string(j_51, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_4 (ATerm t)
              {
                t = term_m_19;
                t = set_config_0(t);
                t = term_o_19;
                return(t);
              }
              ATerm d_4 (ATerm t)
              {
                t = term_r_19;
                return(t);
              }
              t = Option_3(t, b_4, c_4, d_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm u_19 = t;
        int v_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(v_19);
          }
        else
          {
            t = u_19;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm p_51 = NULL;
    p_51 = t;
    m_51 :
    if(!(match_string(p_51, "-o")))
      {
        if(!(match_string(p_51, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    ATerm s_51 = NULL;
    ATerm w_19;
    w_19 = t;
    {
      ATerm q_51 = NULL;
      ATerm r_51 = NULL;
      r_51 = t;
      if(((q_51 != NULL) && (q_51 != r_51)))
        _fail(r_51);
      else
        q_51 = r_51;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_18, not_null(q_51));
        t = set_config_0(t);
      }
    }
    t = w_19;
    {
      ATerm t_51 = NULL;
      t_51 = t;
      if(((s_51 != NULL) && (s_51 != t_51)))
        _fail(t_51);
      else
        s_51 = t_51;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_51));
    }
    return(t);
  }
  ATerm j_4 (ATerm t)
  {
    t = term_x_19;
    return(t);
  }
  t = ArgOption_3(t, e_4, i_4, j_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_19 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(e_20);
    }
  else
    {
      t = y_19;
      {
        ATerm k_4 (ATerm t)
        {
          ATerm x_51 = NULL;
          x_51 = t;
          w_51 :
          if(!(match_string(x_51, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm n_4 (ATerm t)
        {
          t = term_g_20;
          t = set_config_0(t);
          t = term_h_20;
          return(t);
        }
        ATerm o_4 (ATerm t)
        {
          t = term_k_20;
          return(t);
        }
        t = Option_3(t, k_4, n_4, o_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL,n_52 = NULL,o_52 = NULL;
  d_52 = t;
  b_52 :
  if(match_string(d_52, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_52) == AT_LIST) && !(ATisEmpty(d_52))))
        {
          e_52 = ATgetFirst((ATermList) d_52);
          f_52 = (ATerm) ATgetNext((ATermList) d_52);
          c_52 :
          if(((ATgetType(f_52) == AT_LIST) && !(ATisEmpty(f_52))))
            {
              n_52 = ATgetFirst((ATermList) f_52);
              o_52 = (ATerm) ATgetNext((ATermList) f_52);
              {
                ATerm s_52 = NULL;
                ATerm m_20;
                m_20 = t;
                {
                  t = not_null(e_52);
                  t = j_0(t);
                }
                t = m_20;
                {
                  ATerm t_52 = NULL;
                  t = not_null(n_52);
                  {
                    t = k_0(t);
                    {
                      t_52 = t;
                      if(((s_52 != NULL) && (s_52 != t_52)))
                        _fail(t_52);
                      else
                        s_52 = t_52;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_52)), not_null(s_52));
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
  ATerm p_4 (ATerm t)
  {
    ATerm a_53 = NULL;
    a_53 = t;
    x_52 :
    if(!(match_string(a_53, "-i")))
      {
        if(!(match_string(a_53, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_4 (ATerm t)
  {
    ATerm d_53 = NULL;
    ATerm n_20;
    n_20 = t;
    {
      ATerm b_53 = NULL;
      ATerm c_53 = NULL;
      c_53 = t;
      if(((b_53 != NULL) && (b_53 != c_53)))
        _fail(c_53);
      else
        b_53 = c_53;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_17, not_null(b_53));
        t = set_config_0(t);
      }
    }
    t = n_20;
    {
      ATerm e_53 = NULL;
      e_53 = t;
      if(((d_53 != NULL) && (d_53 != e_53)))
        _fail(e_53);
      else
        d_53 = e_53;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_53));
    }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_t_20;
    return(t);
  }
  t = ArgOption_3(t, p_4, q_4, s_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm u_20 = t;
  int v_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(v_20);
    }
  else
    {
      t = u_20;
      {
        ATerm w_20 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(b_21);
          }
        else
          {
            t = w_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm j_53 = NULL;
  ATerm c_21;
  c_21 = t;
  {
    ATerm t_4 (ATerm t)
    {
      ATerm k_53 = NULL,l_53 = NULL;
      k_53 = t;
      i_53 :
      if(match_cons(k_53, sym_Program_1))
        {
          l_53 = ATgetArgument(k_53, 0);
          if(((j_53 != NULL) && (j_53 != l_53)))
            _fail(l_53);
          else
            j_53 = l_53;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, t_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_21), not_null(j_53)), term_f_21));
      {
        t = printnl_0(t);
        {
          t = term_m_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATempty, term_k_21));
  {
    t = printnl_0(t);
    {
      t = term_m_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm o_53 = NULL;
  o_53 = t;
  t = SSL_TicksToSeconds(not_null(o_53));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm t_53 = NULL,u_53 = NULL,v_53 = NULL;
  t_53 = t;
  s_53 :
  if(match_cons(t_53, sym__2))
    {
      u_53 = ATgetArgument(t_53, 0);
      v_53 = ATgetArgument(t_53, 1);
      {
        ATerm l_21 = t;
        int q_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(u_53), not_null(v_53));
            ;
            LocalPopChoice(q_21);
          }
        else
          {
            t = l_21;
            t = SSL_addr(not_null(u_53), not_null(v_53));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm d_82 (ATerm), ATerm e_82 (ATerm))
{
  ATerm r_21 = t;
  int w_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = d_82(t);
      ;
      LocalPopChoice(w_21);
    }
  else
    {
      t = r_21;
      {
        ATerm c_54 = NULL,d_54 = NULL,e_54 = NULL;
        c_54 = t;
        b_54 :
        if(((ATgetType(c_54) == AT_LIST) && !(ATisEmpty(c_54))))
          {
            d_54 = ATgetFirst((ATermList) c_54);
            e_54 = (ATerm) ATgetNext((ATermList) c_54);
            {
              ATerm h_54 = NULL;
              ATerm i_54 = NULL;
              t = not_null(e_54);
              {
                t = foldr_2(t, d_82, e_82);
                {
                  i_54 = t;
                  if(((h_54 != NULL) && (h_54 != i_54)))
                    _fail(i_54);
                  else
                    h_54 = i_54;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_54), not_null(h_54));
                t = e_82(t);
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
ATerm crush_2 (ATerm t, ATerm b_81 (ATerm), ATerm c_81 (ATerm))
{
  ATerm p_54 = NULL;
  ATerm r_54 = NULL;
  p_54 = t;
  {
    ATerm s_54 = NULL;
    ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
    t = not_null(p_54);
    {
      s_54 = t;
      {
        t = SSL_explode_term(not_null(s_54));
        {
          u_54 = t;
          o_54 :
          if(match_cons(u_54, sym__2))
            {
              v_54 = ATgetArgument(u_54, 0);
              w_54 = ATgetArgument(u_54, 1);
              if(((r_54 != NULL) && (r_54 != w_54)))
                _fail(w_54);
              else
                r_54 = w_54;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(r_54);
      t = foldr_2(t, b_81, c_81);
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
    ATerm c_5 (ATerm t)
    {
      t = term_m_10;
      return(t);
    }
    t = crush_2(t, c_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
  c_55 = t;
  b_55 :
  if(match_cons(c_55, sym__2))
    {
      d_55 = ATgetArgument(c_55, 0);
      e_55 = ATgetArgument(c_55, 1);
      {
        ATerm x_21;
        x_21 = t;
        {
          ATerm c_22 = t;
          int d_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_55), not_null(e_55));
              ;
              LocalPopChoice(d_22);
            }
          else
            {
              t = c_22;
              t = SSL_gtr(not_null(d_55), not_null(e_55));
            }
        }
        t = x_21;
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
  ATerm k_55 = NULL;
  ATerm e_22 = t;
  int h_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_55 = NULL,w_55 = NULL,x_55 = NULL;
      v_55 = t;
      j_55 :
      if(match_cons(v_55, sym__2))
        {
          w_55 = ATgetArgument(v_55, 0);
          x_55 = ATgetArgument(v_55, 1);
          {
            if(((k_55 != NULL) && (k_55 != w_55)))
              _fail(w_55);
            else
              k_55 = w_55;
            if(((k_55 != NULL) && (k_55 != x_55)))
              _fail(x_55);
            else
              k_55 = x_55;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(h_22);
    }
  else
    {
      t = e_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm j_89 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm i_22;
    i_22 = t;
    {
      ATerm a_56 = NULL;
      ATerm b_56 = NULL;
      t = term_v_9;
      {
        t = get_config_0(t);
        {
          b_56 = t;
          if(((a_56 != NULL) && (a_56 != b_56)))
            _fail(b_56);
          else
            a_56 = b_56;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_56), term_m_9);
        t = geq_0(t);
      }
    }
    t = i_22;
    t = j_89(t);
    return(t);
  }
  t = try_1(t, d_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_5 (ATerm t)
  {
    ATerm f_56 = NULL,h_56 = NULL;
    ATerm j_22;
    j_22 = t;
    {
      ATerm g_56 = NULL;
      t = run_time_0(t);
      {
        g_56 = t;
        if(((f_56 != NULL) && (f_56 != g_56)))
          _fail(g_56);
        else
          f_56 = g_56;
      }
    }
    t = j_22;
    {
      ATerm q_56 = NULL;
      t = term_k_22;
      {
        t = get_config_0(t);
        {
          q_56 = t;
          if(((h_56 != NULL) && (h_56 != q_56)))
            _fail(q_56);
          else
            h_56 = q_56;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_22), not_null(f_56)), term_l_22), not_null(h_56)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_5);
  {
    t = term_m_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm a_57 = NULL;
  a_57 = t;
  x_56 :
  if(match_cons(a_57, sym_Version_0))
    {
      ATerm c_57 = NULL,e_57 = NULL;
      ATerm n_22;
      n_22 = t;
      {
        ATerm d_57 = NULL;
        t = SSLgetAnnotations(not_null(a_57));
        {
          d_57 = t;
          if(((c_57 != NULL) && (c_57 != d_57)))
            _fail(d_57);
          else
            c_57 = d_57;
        }
      }
      t = n_22;
      {
        ATerm f_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(c_57));
        {
          f_57 = t;
          if(((e_57 != NULL) && (e_57 != f_57)))
            _fail(f_57);
          else
            e_57 = f_57;
        }
        t = not_null(e_57);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm o_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(p_22);
      }
    else
      {
        t = o_22;
        {
          ATerm r_22 = t;
          int s_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(s_22);
            }
          else
            {
              t = r_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, f_5);
  t = p_87(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm k_57 = NULL;
  k_57 = t;
  t = SSL_table_create(not_null(k_57));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm s_57 = NULL;
  s_57 = t;
  {
    ATerm t_22;
    t_22 = t;
    {
      t = term_u_22;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_u_22, term_v_22, not_null(s_57));
          t = table_put_0(t);
        }
      }
    }
    t = t_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm w_57 = NULL;
  w_57 = t;
  t = SSL_table_destroy(not_null(w_57));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm a_58 = NULL;
  a_58 = t;
  t = SSL_exit(not_null(a_58));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm e_58 = NULL,f_58 = NULL,g_58 = NULL;
  e_58 = t;
  d_58 :
  if(((ATgetType(e_58) == AT_LIST) && ATisEmpty(e_58)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(e_58) == AT_LIST) && !(ATisEmpty(e_58))))
        {
          f_58 = ATgetFirst((ATermList) e_58);
          g_58 = (ATerm) ATgetNext((ATermList) e_58);
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
  ATerm x_22;
  x_22 = t;
  {
    ATerm j_58 = NULL;
    ATerm m_58 = NULL;
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        {
          ATerm k_58 = NULL;
          ATerm l_58 = NULL;
          l_58 = t;
          if(((k_58 != NULL) && (k_58 != l_58)))
            _fail(l_58);
          else
            k_58 = l_58;
          t = (ATerm) ATinsert(ATempty, not_null(k_58));
        }
      }
    {
      m_58 = t;
      if(((j_58 != NULL) && (j_58 != m_58)))
        _fail(m_58);
      else
        j_58 = m_58;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_18, not_null(j_58));
      t = printnl_0(t);
    }
  }
  t = x_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm n_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL;
  x_58 = t;
  u_58 :
  if(((ATgetType(x_58) == AT_LIST) && !(ATisEmpty(x_58))))
    {
      v_58 = ATgetFirst((ATermList) x_58);
      w_58 = (ATerm) ATgetNext((ATermList) x_58);
      {
        ATerm c_59 = NULL;
        t = not_null(w_58);
        {
          ATerm a_23;
          a_23 = t;
          {
            ATerm d_59 = NULL,f_59 = NULL,h_59 = NULL;
            ATerm b_23;
            b_23 = t;
            {
              ATerm e_59 = NULL;
              t = i_0(t);
              {
                e_59 = t;
                if(((d_59 != NULL) && (d_59 != e_59)))
                  _fail(e_59);
                else
                  d_59 = e_59;
              }
            }
            t = b_23;
            {
              ATerm g_59 = NULL;
              t = not_null(v_58);
              {
                t = h_0(t);
                {
                  g_59 = t;
                  if(((f_59 != NULL) && (f_59 != g_59)))
                    _fail(g_59);
                  else
                    f_59 = g_59;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(d_59)), not_null(f_59));
                {
                  h_59 = t;
                  if(((c_59 != NULL) && (c_59 != h_59)))
                    _fail(h_59);
                  else
                    c_59 = h_59;
                }
              }
            }
          }
          t = a_23;
          {
            ATerm j_5 (ATerm t)
            {
              t = not_null(c_59);
              return(t);
            }
            t = reverse_acc_2(t, h_0, j_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(x_58) == AT_LIST) && ATisEmpty(x_58)))
        {
          {
            t = term_g_7;
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
  ATerm k_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, k_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm m_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_64 (ATerm))
{
  ATerm s_59 = NULL,t_59 = NULL;
  s_59 = t;
  r_59 :
  if(match_cons(s_59, sym_Program_1))
    {
      t_59 = ATgetArgument(s_59, 0);
      {
        ATerm w_59 = NULL,y_59 = NULL;
        ATerm x_59 = NULL;
        t = SSLgetAnnotations(not_null(s_59));
        {
          x_59 = t;
          if(((w_59 != NULL) && (w_59 != x_59)))
            _fail(x_59);
          else
            w_59 = x_59;
        }
        {
          t = not_null(t_59);
          {
            ATerm a_60 = NULL;
            t = t_64(t);
            {
              y_59 = t;
              {
                ATerm b_60 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(y_59)), not_null(w_59));
                {
                  b_60 = t;
                  if(((a_60 != NULL) && (a_60 != b_60)))
                    _fail(b_60);
                  else
                    a_60 = b_60;
                }
                t = not_null(a_60);
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
  ATerm k_60 = NULL;
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_60 = NULL;
      t = term_k_22;
      {
        t = get_config_0(t);
        {
          l_60 = t;
          if(((k_60 != NULL) && (k_60 != l_60)))
            _fail(l_60);
          else
            k_60 = l_60;
        }
      }
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm m_5 (ATerm t)
        {
          ATerm n_5 (ATerm t)
          {
            ATerm m_60 = NULL;
            m_60 = t;
            if(((k_60 != NULL) && (k_60 != m_60)))
              _fail(m_60);
            else
              k_60 = m_60;
            return(t);
          }
          t = Program_1(t, n_5);
          return(t);
        }
        t = option_defined_1(t, m_5);
      }
    }
  {
    ATerm o_5 (ATerm t)
    {
      ATerm p_5 (ATerm t)
      {
        t = not_null(k_60);
        return(t);
      }
      t = short_description_1(t, p_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, o_5);
    {
      t = term_e_23;
      {
        t = echo_0(t);
        {
          t = term_h_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm q_5 (ATerm t)
                {
                  ATerm n_60 = NULL;
                  ATerm o_60 = NULL;
                  o_60 = t;
                  if(((n_60 != NULL) && (n_60 != o_60)))
                    _fail(o_60);
                  else
                    n_60 = o_60;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_60)), term_i_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, q_5);
                {
                  ATerm s_5 (ATerm t)
                  {
                    ATerm p_60 = NULL;
                    ATerm q_60 = NULL;
                    ATerm x_5 (ATerm t)
                    {
                      t = not_null(k_60);
                      return(t);
                    }
                    t = long_description_1(t, x_5);
                    {
                      q_60 = t;
                      if(((p_60 != NULL) && (p_60 != q_60)))
                        _fail(q_60);
                      else
                        p_60 = q_60;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(p_60)), term_j_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, s_5);
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
ATerm debug_0 (ATerm t)
{
  ATerm k_23;
  k_23 = t;
  {
    ATerm w_60 = NULL;
    ATerm x_60 = NULL;
    x_60 = t;
    if(((w_60 != NULL) && (w_60 != x_60)))
      _fail(x_60);
    else
      w_60 = x_60;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATempty, not_null(w_60)));
      t = printnl_0(t);
    }
  }
  t = k_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm o_86 (ATerm))
{
  ATerm l_23;
  l_23 = t;
  {
    t = o_86(t);
    t = debug_0(t);
  }
  t = l_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_64 (ATerm))
{
  ATerm e_61 = NULL,f_61 = NULL;
  e_61 = t;
  d_61 :
  if(match_cons(e_61, sym_Undefined_1))
    {
      f_61 = ATgetArgument(e_61, 0);
      {
        ATerm i_61 = NULL,k_61 = NULL;
        ATerm j_61 = NULL;
        t = SSLgetAnnotations(not_null(e_61));
        {
          j_61 = t;
          if(((i_61 != NULL) && (i_61 != j_61)))
            _fail(j_61);
          else
            i_61 = j_61;
        }
        {
          t = not_null(f_61);
          {
            ATerm m_61 = NULL;
            t = u_64(t);
            {
              k_61 = t;
              {
                ATerm n_61 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(k_61)), not_null(i_61));
                {
                  n_61 = t;
                  if(((m_61 != NULL) && (m_61 != n_61)))
                    _fail(n_61);
                  else
                    m_61 = n_61;
                }
                t = not_null(m_61);
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
ATerm fetch_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm s_61 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, y_75, _id);
        ;
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = Cons_2(t, _id, s_61);
      }
    return(t);
  }
  t = s_61(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_90 (ATerm))
{
  t = fetch_1(t, m_90);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm x_61 = NULL;
  x_61 = t;
  w_61 :
  if(match_cons(x_61, sym_Help_0))
    {
      ATerm z_61 = NULL,b_62 = NULL;
      ATerm o_23;
      o_23 = t;
      {
        ATerm a_62 = NULL;
        t = SSLgetAnnotations(not_null(x_61));
        {
          a_62 = t;
          if(((z_61 != NULL) && (z_61 != a_62)))
            _fail(a_62);
          else
            z_61 = a_62;
        }
      }
      t = o_23;
      {
        ATerm c_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(z_61));
        {
          c_62 = t;
          if(((b_62 != NULL) && (b_62 != c_62)))
            _fail(c_62);
          else
            b_62 = c_62;
        }
        t = not_null(b_62);
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
  ATerm h_62 = NULL;
  h_62 = t;
  t = SSL_implode_string(not_null(h_62));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
        ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
        m_62 = t;
        l_62 :
        if(((ATgetType(m_62) == AT_LIST) && !(ATisEmpty(m_62))))
          {
            n_62 = ATgetFirst((ATermList) m_62);
            o_62 = (ATerm) ATgetNext((ATermList) m_62);
            {
              t = not_null(n_62);
              {
                ATerm y_5 (ATerm t)
                {
                  t = not_null(o_62);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_5);
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
  ATerm y_62 = NULL;
  ATerm a_63 = NULL;
  y_62 = t;
  {
    ATerm b_63 = NULL;
    ATerm d_63 = NULL,e_63 = NULL,f_63 = NULL;
    t = not_null(y_62);
    {
      b_63 = t;
      {
        t = SSL_explode_term(not_null(b_63));
        {
          d_63 = t;
          w_62 :
          if(match_cons(d_63, sym__2))
            {
              e_63 = ATgetArgument(d_63, 0);
              f_63 = ATgetArgument(d_63, 1);
              x_62 :
              if(match_string(e_63, ""))
                {
                  if(((a_63 != NULL) && (a_63 != f_63)))
                    _fail(f_63);
                  else
                    a_63 = f_63;
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
      t = not_null(a_63);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm e_76 (ATerm))
{
  ATerm j_63 (ATerm t)
  {
    ATerm r_23 = t;
    int s_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_63);
        ;
        LocalPopChoice(s_23);
      }
    else
      {
        t = r_23;
        {
          t = Nil_0(t);
          t = e_76(t);
        }
      }
    return(t);
  }
  t = j_63(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym__2))
    {
      n_63 = ATgetArgument(m_63, 0);
      o_63 = ATgetArgument(m_63, 1);
      {
        t = not_null(n_63);
        {
          ATerm z_5 (ATerm t)
          {
            t = not_null(o_63);
            return(t);
          }
          t = at_end_1(t, z_5);
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
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_63 = NULL;
  t_63 = t;
  t = SSL_explode_string(not_null(t_63));
  return(t);
}
ATerm _2 (ATerm t, ATerm p_57 (ATerm), ATerm q_57 (ATerm))
{
  ATerm c_64 = NULL,d_64 = NULL,e_64 = NULL;
  c_64 = t;
  b_64 :
  if(match_cons(c_64, sym__2))
    {
      d_64 = ATgetArgument(c_64, 0);
      e_64 = ATgetArgument(c_64, 1);
      {
        ATerm i_64 = NULL,k_64 = NULL;
        ATerm j_64 = NULL;
        t = SSLgetAnnotations(not_null(c_64));
        {
          j_64 = t;
          if(((i_64 != NULL) && (i_64 != j_64)))
            _fail(j_64);
          else
            i_64 = j_64;
        }
        {
          t = not_null(d_64);
          {
            ATerm m_64 = NULL;
            t = p_57(t);
            {
              k_64 = t;
              {
                t = not_null(e_64);
                {
                  ATerm o_64 = NULL;
                  t = q_57(t);
                  {
                    m_64 = t;
                    {
                      ATerm p_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(k_64), not_null(m_64)), not_null(i_64));
                      {
                        p_64 = t;
                        if(((o_64 != NULL) && (o_64 != p_64)))
                          _fail(p_64);
                        else
                          o_64 = p_64;
                      }
                      t = not_null(o_64);
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
ATerm printnl_0 (ATerm t)
{
  ATerm z_64 = NULL,a_65 = NULL,b_65 = NULL;
  z_64 = t;
  y_64 :
  if(match_cons(z_64, sym__2))
    {
      a_65 = ATgetArgument(z_64, 0);
      b_65 = ATgetArgument(z_64, 1);
      {
        ATerm v_23;
        v_23 = t;
        t = SSL_printnl(not_null(a_65), not_null(b_65));
        t = v_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm n_86 (ATerm))
{
  ATerm w_23;
  w_23 = t;
  {
    ATerm h_65 = NULL,j_65 = NULL;
    ATerm x_23;
    x_23 = t;
    {
      ATerm i_65 = NULL;
      t = n_86(t);
      {
        i_65 = t;
        if(((h_65 != NULL) && (h_65 != i_65)))
          _fail(i_65);
        else
          h_65 = i_65;
      }
    }
    t = x_23;
    {
      ATerm k_65 = NULL;
      k_65 = t;
      if(((j_65 != NULL) && (j_65 != k_65)))
        _fail(k_65);
      else
        j_65 = k_65;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_21, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_65)), not_null(h_65)));
        t = printnl_0(t);
      }
    }
  }
  t = w_23;
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_75 (ATerm))
{
  ATerm n_65 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = Cons_2(t, p_75, n_65);
      }
    return(t);
  }
  t = n_65(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_65 = NULL;
  p_65 = t;
  t = SSL_is_string(not_null(p_65));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm a_24 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(b_24);
    }
  else
    {
      t = a_24;
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, a_6);
            ;
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            {
              ATerm c_66 = NULL,d_66 = NULL,e_66 = NULL;
              c_66 = t;
              b_66 :
              if(match_cons(c_66, sym_Path_1))
                {
                  d_66 = ATgetArgument(c_66, 0);
                  t = not_null(d_66);
                }
              else
                {
                  if(match_cons(c_66, sym_Var_1))
                    {
                      d_66 = ATgetArgument(c_66, 0);
                      {
                        t = not_null(d_66);
                        {
                          ATerm e_24 = t;
                          int f_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(f_24);
                            }
                          else
                            {
                              t = e_24;
                              {
                                ATerm b_6 (ATerm t)
                                {
                                  t = term_g_24;
                                  return(t);
                                }
                                t = debug_1(t, b_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_66, sym_Prefix_2))
                        {
                          d_66 = ATgetArgument(c_66, 0);
                          e_66 = ATgetArgument(c_66, 1);
                          {
                            ATerm j_66 = NULL,l_66 = NULL;
                            ATerm h_24;
                            h_24 = t;
                            {
                              ATerm k_66 = NULL;
                              t = not_null(d_66);
                              {
                                t = eval_config_0(t);
                                {
                                  k_66 = t;
                                  if(((j_66 != NULL) && (j_66 != k_66)))
                                    _fail(k_66);
                                  else
                                    j_66 = k_66;
                                }
                              }
                            }
                            t = h_24;
                            {
                              ATerm o_66 = NULL;
                              t = not_null(e_66);
                              {
                                t = eval_config_0(t);
                                {
                                  o_66 = t;
                                  if(((l_66 != NULL) && (l_66 != o_66)))
                                    _fail(o_66);
                                  else
                                    l_66 = o_66;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_66), not_null(l_66));
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
  ATerm w_66 = NULL;
  w_66 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_24, not_null(w_66));
    {
      t = table_get_0(t);
      {
        ATerm c_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_24;
            j_24 = t;
            {
              ATerm y_66 = NULL;
              ATerm z_66 = NULL;
              z_66 = t;
              if(((y_66 != NULL) && (y_66 != z_66)))
                _fail(z_66);
              else
                y_66 = z_66;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_i_24, not_null(w_66), not_null(y_66));
                t = table_put_0(t);
              }
            }
            t = j_24;
          }
          return(t);
        }
        t = try_1(t, c_6);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_67 (ATerm))
{
  ATerm k_24 = t;
  int l_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_67(t);
      ;
      LocalPopChoice(l_24);
    }
  else
    {
      t = k_24;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
  g_67 = t;
  f_67 :
  if(match_cons(g_67, sym__2))
    {
      h_67 = ATgetArgument(g_67, 0);
      i_67 = ATgetArgument(g_67, 1);
      t = SSL_table_get(not_null(h_67), not_null(i_67));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_67 = NULL,w_67 = NULL,x_67 = NULL,y_67 = NULL;
  v_67 = t;
  u_67 :
  if(match_cons(v_67, sym__3))
    {
      w_67 = ATgetArgument(v_67, 0);
      x_67 = ATgetArgument(v_67, 1);
      y_67 = ATgetArgument(v_67, 2);
      {
        ATerm m_24;
        m_24 = t;
        {
          ATerm c_68 = NULL;
          ATerm d_68 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_67), not_null(x_67));
          {
            ATerm n_24 = t;
            int o_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(o_24);
              }
            else
              {
                t = n_24;
                t = (ATerm) ATempty;
              }
            {
              d_68 = t;
              if(((c_68 != NULL) && (c_68 != d_68)))
                _fail(d_68);
              else
                c_68 = d_68;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_67), not_null(x_67), (ATerm) ATinsert(CheckATermList(not_null(c_68)), not_null(y_67)));
            t = table_put_0(t);
          }
        }
        t = m_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm j_68 = NULL;
  ATerm k_68 = NULL;
  t = term_g_7;
  {
    t = r_91(t);
    {
      k_68 = t;
      if(((j_68 != NULL) && (j_68 != k_68)))
        _fail(k_68);
      else
        j_68 = k_68;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_f_23, term_g_23, not_null(j_68));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm q_68 = NULL,r_68 = NULL,s_68 = NULL;
  q_68 = t;
  p_68 :
  if(match_string(q_68, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(q_68) == AT_LIST) && !(ATisEmpty(q_68))))
        {
          r_68 = ATgetFirst((ATermList) q_68);
          s_68 = (ATerm) ATgetNext((ATermList) q_68);
          {
            ATerm v_68 = NULL;
            ATerm p_24;
            p_24 = t;
            {
              t = not_null(r_68);
              t = a_0(t);
            }
            t = p_24;
            {
              ATerm w_68 = NULL;
              t = term_g_7;
              {
                t = d_0(t);
                {
                  w_68 = t;
                  if(((v_68 != NULL) && (v_68 != w_68)))
                    _fail(w_68);
                  else
                    v_68 = w_68;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_68)), not_null(v_68));
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
  ATerm d_6 (ATerm t)
  {
    ATerm b_69 = NULL;
    b_69 = t;
    a_69 :
    if(!(match_string(b_69, "--help")))
      {
        if(!(match_string(b_69, "-h")))
          {
            if(!(match_string(b_69, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    t = term_r_24;
    {
      t = set_config_0(t);
      t = term_s_24;
    }
    return(t);
  }
  ATerm f_6 (ATerm t)
  {
    t = term_t_24;
    return(t);
  }
  t = Option_3(t, d_6, e_6, f_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_69 = NULL,n_69 = NULL,o_69 = NULL;
  k_69 = t;
  j_69 :
  if(((ATgetType(k_69) == AT_LIST) && !(ATisEmpty(k_69))))
    {
      n_69 = ATgetFirst((ATermList) k_69);
      o_69 = (ATerm) ATgetNext((ATermList) k_69);
      t = (ATerm) ATinsert(CheckATermList(not_null(o_69)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(n_69)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm y_58 (ATerm), ATerm z_58 (ATerm))
{
  ATerm y_69 = NULL,z_69 = NULL,a_70 = NULL;
  y_69 = t;
  x_69 :
  if(((ATgetType(y_69) == AT_LIST) && !(ATisEmpty(y_69))))
    {
      z_69 = ATgetFirst((ATermList) y_69);
      a_70 = (ATerm) ATgetNext((ATermList) y_69);
      {
        ATerm e_70 = NULL,g_70 = NULL;
        ATerm f_70 = NULL;
        t = SSLgetAnnotations(not_null(y_69));
        {
          f_70 = t;
          if(((e_70 != NULL) && (e_70 != f_70)))
            _fail(f_70);
          else
            e_70 = f_70;
        }
        {
          t = not_null(z_69);
          {
            ATerm i_70 = NULL;
            t = y_58(t);
            {
              g_70 = t;
              {
                t = not_null(a_70);
                {
                  ATerm k_70 = NULL;
                  t = z_58(t);
                  {
                    i_70 = t;
                    {
                      ATerm l_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_70)), not_null(g_70)), not_null(e_70));
                      {
                        l_70 = t;
                        if(((k_70 != NULL) && (k_70 != l_70)))
                          _fail(l_70);
                        else
                          k_70 = l_70;
                      }
                      t = not_null(k_70);
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
  ATerm v_70 = NULL;
  v_70 = t;
  u_70 :
  if(((ATgetType(v_70) == AT_LIST) && ATisEmpty(v_70)))
    {
      {
        ATerm x_70 = NULL,z_70 = NULL;
        ATerm u_24;
        u_24 = t;
        {
          ATerm y_70 = NULL;
          t = SSLgetAnnotations(not_null(v_70));
          {
            y_70 = t;
            if(((x_70 != NULL) && (x_70 != y_70)))
              _fail(y_70);
            else
              x_70 = y_70;
          }
        }
        t = u_24;
        {
          ATerm a_71 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(x_70));
          {
            a_71 = t;
            if(((z_70 != NULL) && (z_70 != a_71)))
              _fail(a_71);
            else
              z_70 = a_71;
          }
          t = not_null(z_70);
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
  ATerm i_71 = NULL,j_71 = NULL,k_71 = NULL;
  i_71 = t;
  h_71 :
  if(match_cons(i_71, sym__2))
    {
      j_71 = ATgetArgument(i_71, 0);
      k_71 = ATgetArgument(i_71, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_i_24, not_null(j_71), not_null(k_71));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm p_91 (ATerm))
{
  ATerm v_24;
  v_24 = t;
  {
    ATerm g_6 (ATerm t)
    {
      t = term_w_24;
      t = p_91(t);
      return(t);
    }
    t = try_1(t, g_6);
  }
  t = v_24;
  {
    ATerm h_6 (ATerm t)
    {
      ATerm s_71 = NULL;
      ATerm x_24;
      x_24 = t;
      {
        ATerm q_71 = NULL;
        ATerm r_71 = NULL;
        r_71 = t;
        if(((q_71 != NULL) && (q_71 != r_71)))
          _fail(r_71);
        else
          q_71 = r_71;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_k_22, not_null(q_71));
          t = set_config_0(t);
        }
      }
      t = x_24;
      {
        ATerm t_71 = NULL;
        t_71 = t;
        if(((s_71 != NULL) && (s_71 != t_71)))
          _fail(t_71);
        else
          s_71 = t_71;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_71));
      }
      return(t);
    }
    ATerm i_6 (ATerm t)
    {
      ATerm y_24 = t;
      int z_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_25 = t;
          int b_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(b_25);
            }
          else
            {
              t = a_25;
              {
                t = p_91(t);
                t = Cons_2(t, _id, i_6);
              }
            }
          ;
          LocalPopChoice(z_24);
        }
      else
        {
          t = y_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_6, i_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL;
  ATerm c_25;
  c_25 = t;
  {
    ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL;
    c_72 = t;
    y_71 :
    if(match_cons(c_72, sym__3))
      {
        d_72 = ATgetArgument(c_72, 0);
        e_72 = ATgetArgument(c_72, 1);
        f_72 = ATgetArgument(c_72, 2);
        {
          if(((z_71 != NULL) && (z_71 != d_72)))
            _fail(d_72);
          else
            z_71 = d_72;
          {
            if(((a_72 != NULL) && (a_72 != e_72)))
              _fail(e_72);
            else
              a_72 = e_72;
            {
              if(((b_72 != NULL) && (b_72 != f_72)))
                _fail(f_72);
              else
                b_72 = f_72;
              t = SSL_table_put(not_null(z_71), not_null(a_72), not_null(b_72));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = c_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm o_91 (ATerm))
{
  ATerm i_72 = NULL;
  ATerm d_25;
  d_25 = t;
  {
    t = term_e_25;
    t = table_put_0(t);
  }
  t = d_25;
  {
    ATerm j_6 (ATerm t)
    {
      ATerm f_25 = t;
      int g_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = o_91(t);
          ;
          LocalPopChoice(g_25);
        }
      else
        {
          t = f_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_6);
    {
      ATerm k_6 (ATerm t)
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_25;
            j_25 = t;
            {
              ATerm k_25 = t;
              int l_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_q_24;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(l_25);
                }
              else
                {
                  t = k_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = j_25;
            {
              t = system_usage_0(t);
              {
                t = term_m_10;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            {
              ATerm l_6 (ATerm t)
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm j_72 = NULL;
                  j_72 = t;
                  if(((i_72 != NULL) && (i_72 != j_72)))
                    _fail(j_72);
                  else
                    i_72 = j_72;
                  return(t);
                }
                t = Undefined_1(t, m_6);
                return(t);
              }
              t = option_defined_1(t, l_6);
              {
                ATerm r_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_72)), term_o_25);
                  return(t);
                }
                t = say_1(t, r_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_m_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_6);
      {
        ATerm p_25;
        p_25 = t;
        {
          t = term_f_23;
          t = table_destroy_0(t);
        }
        t = p_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm v_87 (ATerm), ATerm w_87 (ATerm), ATerm x_87 (ATerm), ATerm y_87 (ATerm))
{
  t = parse_options_1(t, v_87);
  {
    t = store_options_0(t);
    {
      t = x_87(t);
      {
        ATerm q_25 = t;
        int u_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, w_87);
            ;
            LocalPopChoice(u_25);
          }
        else
          {
            t = q_25;
            {
              ATerm w_25 = t;
              int z_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_87(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(z_25);
                }
              else
                {
                  t = w_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm z_87 (ATerm), ATerm a_88 (ATerm))
{
  t = option_wrap_4(t, z_87, default_usage_0, _id, a_88);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm i_96 (ATerm), ATerm j_96 (ATerm))
{
  ATerm s_6 (ATerm t)
  {
    ATerm a_26 = t;
    int b_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_96(t);
        ;
        LocalPopChoice(b_26);
      }
    else
      {
        t = a_26;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm t_6 (ATerm t)
  {
    t = xtc_io_1(t, j_96);
    return(t);
  }
  t = option_wrap_2(t, s_6, t_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm h_96 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, h_96);
  return(t);
}
ATerm io_Abox_2_html_0 (ATerm t)
{
  ATerm u_6 (ATerm t)
  {
    t = read_from_0(t);
    {
      t = abox2html_0(t);
      t = topdown_print_to_0(t);
    }
    return(t);
  }
  t = xtc_io_wrap_1(t, u_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Abox_2_html_0(t);
  return(t);
}

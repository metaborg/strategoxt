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
ATerm term_z_26;
ATerm term_k_26;
ATerm term_w_25;
ATerm term_n_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_a_25;
ATerm term_y_24;
ATerm term_x_23;
ATerm term_w_23;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_d_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_n_21;
ATerm term_j_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_u_20;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_e_19;
ATerm term_d_19;
ATerm term_c_19;
ATerm term_b_19;
ATerm term_v_18;
ATerm term_j_18;
ATerm term_k_16;
ATerm term_j_16;
ATerm term_b_16;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_r_14;
ATerm term_m_14;
ATerm term_j_14;
ATerm term_z_13;
ATerm term_x_13;
ATerm term_l_13;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_w_10;
ATerm term_t_10;
ATerm term_m_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_c_10;
ATerm term_u_9;
ATerm term_r_9;
ATerm term_g_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_r_8;
ATerm term_q_8;
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
ATerm term_k_7;
ATerm term_j_7;
ATerm term_i_7;
ATerm term_h_7;
ATerm term_g_7;
ATerm term_c_7;
ATerm term_u_6;
ATerm term_t_6;
ATerm term_s_6;
ATerm term_q_6;
ATerm term_n_6;
ATerm term_l_6;
void init_constant_terms (void)
{
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_q_6));
  term_q_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>\n", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>\n", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_y_7));
  term_y_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_q_8));
  term_q_8 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_r_8));
  term_r_8 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_r_9));
  term_r_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_z_13));
  term_z_13 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_j_16));
  term_j_16 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_c_7, term_l_6);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_19));
  term_b_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(sym__2, term_d_19, term_t_6);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(sym__2, term_c_10, term_t_10);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_t_10);
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_t_6);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_c_21, term_t_6);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(sym__2, term_u_23, term_v_23);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(sym__2, term_k_25, term_t_6);
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(sym__3, term_u_23, term_v_23, (ATerm) ATempty);
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm close_file_0 (ATerm);
ATerm print_0 (ATerm);
ATerm assert_1 (ATerm, ATerm s_85 (ATerm));
ATerm obsolete_1 (ATerm, ATerm g_86 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm topdown_print_to_0 (ATerm);
ATerm Html2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm z_68 (ATerm));
ATerm html2text_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm o_70 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm i_76 (ATerm));
ATerm html_string_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm d_95 (ATerm));
ATerm make_html_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm sep_by_1 (ATerm, ATerm g_67 (ATerm));
ATerm filter_1 (ATerm, ATerm s_82 (ATerm));
ATerm hs_length_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm w_88 (ATerm));
ATerm dissuader_1 (ATerm, ATerm h_86 (ATerm));
ATerm separate_by_1 (ATerm, ATerm x_74 (ATerm));
ATerm LNAT_2 (ATerm, ATerm n_65 (ATerm), ATerm o_65 (ATerm));
ATerm L_2 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm));
ATerm tov_1 (ATerm, ATerm f_67 (ATerm));
ATerm is_length_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm p_68 (ATerm), ATerm q_68 (ATerm));
ATerm for_3 (ATerm, ATerm s_68 (ATerm), ATerm t_68 (ATerm), ATerm u_68 (ATerm));
ATerm copy_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm t_66 (ATerm), ATerm u_66 (ATerm));
ATerm SOpt_value_1 (ATerm, ATerm g_95 (ATerm));
ATerm vs_length_0 (ATerm);
ATerm Vspace_0 (ATerm);
ATerm aopt_0 (ATerm);
ATerm SOpts_of_alignment_0 (ATerm);
ATerm make_hs_0 (ATerm);
ATerm toa_1 (ATerm, ATerm i_67 (ATerm));
ATerm R_2 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm split_2 (ATerm, ATerm e_83 (ATerm), ATerm f_83 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2html_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_68 (ATerm));
ATerm at_last_1 (ATerm, ATerm b_76 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm u_75 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm n_75 (ATerm));
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
ATerm end_scope_1 (ATerm, ATerm p_85 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm u_67 (ATerm), ATerm v_67 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm o_85 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm p_95 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm q_95 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm p_81 (ATerm), ATerm q_81 (ATerm));
ATerm crush_2 (ATerm, ATerm n_80 (ATerm), ATerm o_80 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm v_88 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_87 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_90 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_90 (ATerm));
ATerm Program_1 (ATerm, ATerm m_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm a_86 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_64 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_75 (ATerm));
ATerm option_defined_1 (ATerm, ATerm y_89 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_75 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm i_57 (ATerm), ATerm j_57 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm z_85 (ATerm));
ATerm map_1 (ATerm, ATerm b_75 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_67 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_91 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_58 (ATerm), ATerm s_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_91 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_91 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm k_87 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm l_87 (ATerm), ATerm m_87 (ATerm));
ATerm xtc_io_wrap_2 (ATerm, ATerm u_95 (ATerm), ATerm v_95 (ATerm));
ATerm xtc_io_wrap_1 (ATerm, ATerm t_95 (ATerm));
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
  ATerm x_0 = NULL,c_1 = NULL,k_2 = NULL;
  x_0 = t;
  v_0 :
  if(match_cons(x_0, sym__2))
    {
      c_1 = ATgetArgument(x_0, 0);
      k_2 = ATgetArgument(x_0, 1);
      {
        ATerm q_5;
        q_5 = t;
        t = SSL_print(not_null(c_1), not_null(k_2));
        t = q_5;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm s_85 (ATerm))
{
  ATerm f_4 = NULL,g_4 = NULL,h_4 = NULL;
  f_4 = t;
  m_3 :
  if(match_cons(f_4, sym__2))
    {
      g_4 = ATgetArgument(f_4, 0);
      h_4 = ATgetArgument(f_4, 1);
      {
        ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
        ATerm i_6;
        i_6 = t;
        {
          ATerm r_4 = NULL;
          ATerm s_4 = NULL,t_4 = NULL,u_4 = NULL;
          t = s_85(t);
          {
            r_4 = t;
            {
              if(((o_4 != NULL) && (o_4 != r_4)))
                _fail(r_4);
              else
                o_4 = r_4;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(o_4), not_null(g_4), not_null(h_4));
                {
                  t = table_push_0(t);
                  {
                    ATerm j_6 = t;
                    int k_6 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_4), term_l_6);
                        t = table_get_0(t);
                        LocalPopChoice(k_6);
                      }
                    else
                      {
                        t = j_6;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      s_4 = t;
                      l_3 :
                      if(((ATgetType(s_4) == AT_LIST) && !(ATisEmpty(s_4))))
                        {
                          t_4 = ATgetFirst((ATermList) s_4);
                          u_4 = (ATerm) ATgetNext((ATermList) s_4);
                          {
                            if(((p_4 != NULL) && (p_4 != t_4)))
                              _fail(t_4);
                            else
                              p_4 = t_4;
                            {
                              if(((q_4 != NULL) && (q_4 != u_4)))
                                _fail(u_4);
                              else
                                q_4 = u_4;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(o_4), term_l_6, (ATerm) ATinsert(CheckATermList(not_null(q_4)), (ATerm) ATinsert(CheckATermList(not_null(p_4)), not_null(g_4))));
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
        t = i_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm m_6;
  m_6 = t;
  {
    t = g_86(t);
    {
      ATerm b_0 (ATerm t)
      {
        t = term_n_6;
        return(t);
      }
      t = debug_1(t, b_0);
    }
  }
  t = m_6;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm c_5 = NULL,d_5 = NULL;
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL;
      e_5 = t;
      z_4 :
      if(match_cons(e_5, sym__2))
        {
          f_5 = ATgetArgument(e_5, 0);
          g_5 = ATgetArgument(e_5, 1);
          {
            if(((d_5 != NULL) && (d_5 != f_5)))
              _fail(f_5);
            else
              d_5 = f_5;
            if(((c_5 != NULL) && (c_5 != g_5)))
              _fail(g_5);
            else
              c_5 = g_5;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_6);
      t = SSL_open_file(not_null(d_5), not_null(c_5));
    }
  else
    {
      t = o_6;
      {
        ATerm h_5 = NULL;
        ATerm i_5 = NULL;
        ATerm e_0 (ATerm t)
        {
          t = term_q_6;
          return(t);
        }
        t = obsolete_1(t, e_0);
        {
          h_5 = t;
          {
            if(((d_5 != NULL) && (d_5 != h_5)))
              _fail(h_5);
            else
              d_5 = h_5;
            {
              ATerm r_6;
              r_6 = t;
              {
                ATerm j_5 = NULL;
                t = term_s_6;
                {
                  j_5 = t;
                  if(((i_5 != NULL) && (i_5 != j_5)))
                    _fail(j_5);
                  else
                    i_5 = j_5;
                }
              }
              t = r_6;
              t = SSL_open_file(not_null(d_5), not_null(i_5));
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
  ATerm o_5 = NULL;
  ATerm p_5 = NULL;
  t = term_t_6;
  {
    t = new_0(t);
    {
      p_5 = t;
      if(((o_5 != NULL) && (o_5 != p_5)))
        _fail(p_5);
      else
        o_5 = p_5;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(o_5), term_u_6);
    {
      t = conc_strings_0(t);
      {
        ATerm z_6 = t;
        int a_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(a_7);
          }
        else
          {
            t = z_6;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm t_5 = NULL;
  t = new_file_0(t);
  {
    t_5 = t;
    {
      ATerm b_7;
      b_7 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), term_s_6);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(t_5), term_t_6);
            {
              ATerm f_0 (ATerm t)
              {
                t = term_c_7;
                return(t);
              }
              t = assert_1(t, f_0);
            }
          }
        }
      }
      t = b_7;
    }
  }
  return(t);
}
ATerm topdown_print_to_0 (ATerm t)
{
  ATerm z_5 = NULL;
  ATerm b_6 = NULL;
  z_5 = t;
  {
    ATerm c_6 = NULL;
    t = xtc_new_file_0(t);
    {
      c_6 = t;
      {
        if(((b_6 != NULL) && (b_6 != c_6)))
          _fail(c_6);
        else
          b_6 = c_6;
        {
          t = not_null(z_5);
          {
            ATerm n_0 (ATerm t)
            {
              ATerm d_7 = t;
              int e_7 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = is_string_0(t);
                  {
                    ATerm f_7;
                    f_7 = t;
                    {
                      ATerm d_6 = NULL;
                      ATerm e_6 = NULL;
                      e_6 = t;
                      if(((d_6 != NULL) && (d_6 != e_6)))
                        _fail(e_6);
                      else
                        d_6 = e_6;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(b_6), (ATerm) ATinsert(ATempty, not_null(d_6)));
                        t = print_0(t);
                      }
                    }
                    t = f_7;
                  }
                  LocalPopChoice(e_7);
                }
              else
                {
                  t = d_7;
                  {
                  }
                }
              return(t);
            }
            t = topdown_1(t, n_0);
            {
              t = not_null(b_6);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(b_6));
  }
  return(t);
}
ATerm Html2text_0 (ATerm t)
{
  ATerm w_6 = NULL,x_6 = NULL,y_6 = NULL;
  y_6 = t;
  v_6 :
  if(match_cons(y_6, sym_TABLE_2))
    {
      x_6 = ATgetArgument(y_6, 0);
      w_6 = ATgetArgument(y_6, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_7), not_null(w_6)), term_h_7), not_null(x_6)), term_g_7);
    }
  else
    {
      if(match_cons(y_6, sym_TR_2))
        {
          x_6 = ATgetArgument(y_6, 0);
          w_6 = ATgetArgument(y_6, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_k_7), not_null(w_6)), term_h_7), not_null(x_6)), term_j_7);
        }
      else
        {
          if(match_cons(y_6, sym_TD_2))
            {
              x_6 = ATgetArgument(y_6, 0);
              w_6 = ATgetArgument(y_6, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_m_7), not_null(w_6)), term_h_7), not_null(x_6)), term_l_7);
            }
          else
            {
              if(match_cons(y_6, sym_TD_p__1))
                {
                  x_6 = ATgetArgument(y_6, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_7), not_null(x_6)), term_m_7);
                }
              else
                {
                  if(match_cons(y_6, sym_SPAN_2))
                    {
                      x_6 = ATgetArgument(y_6, 0);
                      w_6 = ATgetArgument(y_6, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(w_6)), term_h_7), not_null(x_6)), term_o_7);
                    }
                  else
                    {
                      if(match_cons(y_6, sym_PRE_1))
                        {
                          x_6 = ATgetArgument(y_6, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_7), not_null(x_6)), term_q_7);
                        }
                      else
                        {
                          if(match_cons(y_6, sym_TDTR_1))
                            {
                              x_6 = ATgetArgument(y_6, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_7), not_null(x_6)), term_s_7);
                            }
                          else
                            {
                              if(match_cons(y_6, sym_HREF_2))
                                {
                                  x_6 = ATgetArgument(y_6, 0);
                                  w_6 = ATgetArgument(y_6, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_7), not_null(w_6)), term_v_7), not_null(x_6)), term_u_7);
                                }
                              else
                                {
                                  if(match_cons(y_6, sym_ANCHOR_1))
                                    {
                                      x_6 = ATgetArgument(y_6, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_y_7), not_null(x_6)), term_x_7);
                                    }
                                  else
                                    {
                                      if(match_cons(y_6, sym_BR_0))
                                        {
                                          t = term_z_7;
                                        }
                                      else
                                        {
                                          if(match_cons(y_6, sym_NBSP_0))
                                            {
                                              t = term_a_8;
                                            }
                                          else
                                            {
                                              if(match_cons(y_6, sym_HR_0))
                                                {
                                                  t = term_b_8;
                                                }
                                              else
                                                {
                                                  if(match_cons(y_6, sym_TDTD_0))
                                                    {
                                                      t = term_c_8;
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
ATerm bottomup_1 (ATerm t, ATerm z_68 (ATerm))
{
  ATerm o_0 (ATerm t)
  {
    t = bottomup_1(t, z_68);
    return(t);
  }
  t = _all(t, o_0);
  t = z_68(t);
  return(t);
}
ATerm html2text_0 (ATerm t)
{
  ATerm p_0 (ATerm t)
  {
    ATerm d_8 = t;
    int e_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Html2text_0(t);
        LocalPopChoice(e_8);
      }
    else
      {
        t = d_8;
        {
        }
      }
    return(t);
  }
  t = bottomup_1(t, p_0);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(((ATgetType(o_10) == AT_LIST) && !(ATisEmpty(o_10))))
    {
      p_10 = ATgetFirst((ATermList) o_10);
      q_10 = (ATerm) ATgetNext((ATermList) o_10);
      t = not_null(p_10);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm f_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_8);
    }
  else
    {
      t = f_8;
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, Nil_0, flat_list_0);
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
            {
              ATerm j_8 = t;
              int k_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm x_10 = NULL,z_10 = NULL;
                  t = Cons_2(t, is_list_0, _id);
                  {
                    ATerm l_8;
                    l_8 = t;
                    {
                      ATerm y_10 = NULL;
                      t = Hd_0(t);
                      {
                        y_10 = t;
                        if(((x_10 != NULL) && (x_10 != y_10)))
                          _fail(y_10);
                        else
                          x_10 = y_10;
                      }
                    }
                    t = l_8;
                    {
                      ATerm a_11 = NULL;
                      t = Tl_0(t);
                      {
                        a_11 = t;
                        if(((z_10 != NULL) && (z_10 != a_11)))
                          _fail(a_11);
                        else
                          z_10 = a_11;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(x_10), not_null(z_10));
                        {
                          ATerm m_8 = t;
                          int n_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = conc_two_lists_0(t);
                              LocalPopChoice(n_8);
                            }
                          else
                            {
                              t = m_8;
                              t = conc_more_lists_0(t);
                            }
                          t = flat_list_0(t);
                        }
                      }
                    }
                  }
                  LocalPopChoice(k_8);
                }
              else
                {
                  t = j_8;
                  t = Cons_2(t, _id, flat_list_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm e_11 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_70(t);
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        t = _one(t, e_11);
      }
    return(t);
  }
  t = e_11(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm l_11 = NULL,o_11 = NULL;
  ATerm q_0 (ATerm t)
  {
    ATerm m_11 = NULL;
    m_11 = t;
    f_11 :
    if(!(match_int(m_11, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm r_0 (ATerm t)
  {
    ATerm n_11 = NULL;
    n_11 = t;
    if(((l_11 != NULL) && (l_11 != n_11)))
      _fail(n_11);
    else
      l_11 = n_11;
    return(t);
  }
  t = Cons_2(t, q_0, r_0);
  {
    ATerm t_11 = NULL;
    t = not_null(l_11);
    {
      ATerm s_0 (ATerm t)
      {
        ATerm p_11 = NULL,q_11 = NULL,r_11 = NULL;
        p_11 = t;
        i_11 :
        if(((ATgetType(p_11) == AT_LIST) && !(ATisEmpty(p_11))))
          {
            q_11 = ATgetFirst((ATermList) p_11);
            r_11 = (ATerm) ATgetNext((ATermList) p_11);
            j_11 :
            if(match_int(q_11, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_11)), term_q_8), term_q_8);
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
      t = oncetd_1(t, s_0);
      {
        t_11 = t;
        if(((o_11 != NULL) && (o_11 != t_11)))
          _fail(t_11);
        else
          o_11 = t_11;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(o_11)), term_r_8), term_r_8);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm i_76 (ATerm))
{
  ATerm x_11 (ATerm t)
  {
    t = i_76(t);
    {
      ATerm s_8 = t;
      int t_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(t_8);
        }
      else
        {
          t = s_8;
          t = Cons_2(t, _id, x_11);
        }
    }
    return(t);
  }
  t = x_11(t);
  return(t);
}
ATerm html_string_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm t_0 (ATerm t)
    {
      ATerm u_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = replace_quotes_0(t);
          LocalPopChoice(v_8);
        }
      else
        {
          t = u_8;
          {
          }
        }
      return(t);
    }
    t = listtd_1(t, t_0);
    {
      ATerm u_0 (ATerm t)
      {
        ATerm w_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_12 = NULL;
            d_12 = t;
            c_12 :
            if(match_int(d_12, 32))
              {
                t = term_a_8;
                t = explode_string_0(t);
              }
            else
              {
                if(match_int(d_12, 38))
                  {
                    t = term_y_8;
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(d_12, 60))
                      {
                        t = term_z_8;
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(d_12, 62))
                          {
                            t = term_a_9;
                            t = explode_string_0(t);
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                  }
              }
            LocalPopChoice(x_8);
          }
        else
          {
            t = w_8;
            {
            }
          }
        return(t);
      }
      t = map_1(t, u_0);
      {
        t = flat_list_0(t);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm d_95 (ATerm))
{
  ATerm o_12 (ATerm t)
  {
    ATerm b_9 = t;
    int c_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_12 = NULL,l_12 = NULL,m_12 = NULL;
        t = Cons_2(t, d_95, _id);
        {
          k_12 = t;
          j_12 :
          if(((ATgetType(k_12) == AT_LIST) && !(ATisEmpty(k_12))))
            {
              l_12 = ATgetFirst((ATermList) k_12);
              m_12 = (ATerm) ATgetNext((ATermList) k_12);
              {
                t = not_null(m_12);
                t = o_12(t);
              }
            }
          else
            {
              _fail(t);
            }
        }
        LocalPopChoice(c_9);
      }
    else
      {
        t = b_9;
        {
        }
      }
    return(t);
  }
  t = o_12(t);
  return(t);
}
ATerm make_html_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm w_0 (ATerm t)
    {
      t = (ATerm) ATempty;
      return(t);
    }
    t = reverse_acc_2(t, _id, w_0);
    {
      ATerm y_0 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, y_0);
      {
        ATerm e_14 (ATerm t)
        {
          ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL;
          ATerm h_14 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), (ATerm) ATinsert(CheckATermList(not_null(i_13)), not_null(g_13)));
            t = e_14(t);
            return(t);
          }
          e_13 = t;
          y_12 :
          if(match_cons(e_13, sym__2))
            {
              f_13 = ATgetArgument(e_13, 0);
              i_13 = ATgetArgument(e_13, 1);
              z_12 :
              if(((ATgetType(f_13) == AT_LIST) && ATisEmpty(f_13)))
                {
                  {
                    ATerm m_13 = NULL;
                    ATerm o_13 = NULL;
                    t = not_null(i_13);
                    {
                      ATerm z_0 (ATerm t)
                      {
                        ATerm n_13 = NULL;
                        n_13 = t;
                        t_12 :
                        if(!(match_int(n_13, 9)))
                          {
                            if(!(match_int(n_13, 32)))
                              {
                                _fail(t);
                              }
                          }
                        return(t);
                      }
                      t = remove_trailing_1(t, z_0);
                      {
                        t = implode_string_0(t);
                        {
                          o_13 = t;
                          if(((m_13 != NULL) && (m_13 != o_13)))
                            _fail(o_13);
                          else
                            m_13 = o_13;
                        }
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(m_13));
                  }
                }
              else
                {
                  if(((ATgetType(f_13) == AT_LIST) && !(ATisEmpty(f_13))))
                    {
                      g_13 = ATgetFirst((ATermList) f_13);
                      h_13 = (ATerm) ATgetNext((ATermList) f_13);
                      a_13 :
                      if(match_int(g_13, 10))
                        {
                          ATerm d_9 = t;
                          int e_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_13 = NULL,v_13 = NULL;
                              ATerm f_9;
                              f_9 = t;
                              {
                                ATerm u_13 = NULL;
                                t = not_null(i_13);
                                {
                                  ATerm a_1 (ATerm t)
                                  {
                                    ATerm t_13 = NULL;
                                    t_13 = t;
                                    v_12 :
                                    if(!(match_int(t_13, 9)))
                                      {
                                        if(!(match_int(t_13, 32)))
                                          {
                                            _fail(t);
                                          }
                                      }
                                    return(t);
                                  }
                                  t = remove_trailing_1(t, a_1);
                                  {
                                    t = implode_string_0(t);
                                    {
                                      u_13 = t;
                                      if(((s_13 != NULL) && (s_13 != u_13)))
                                        _fail(u_13);
                                      else
                                        s_13 = u_13;
                                    }
                                  }
                                }
                              }
                              t = f_9;
                              {
                                ATerm w_13 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_13), (ATerm) ATempty);
                                {
                                  t = e_14(t);
                                  {
                                    w_13 = t;
                                    if(((v_13 != NULL) && (v_13 != w_13)))
                                      _fail(w_13);
                                    else
                                      v_13 = w_13;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(v_13)), not_null(s_13));
                              }
                              LocalPopChoice(e_9);
                            }
                          else
                            {
                              t = d_9;
                              t = h_14(t);
                            }
                        }
                      else
                        {
                          t = h_14(t);
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
        t = e_14(t);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm a_14 = NULL;
            a_14 = t;
            b_13 :
            if(!(match_string(a_14, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, b_1);
          {
            ATerm d_1 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, d_1);
            {
              ATerm e_1 (ATerm t)
              {
                ATerm b_14 = NULL;
                b_14 = t;
                c_13 :
                if(!(match_string(b_14, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, e_1);
              {
                ATerm f_1 (ATerm t)
                {
                  ATerm c_14 = NULL;
                  c_14 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_g_9), not_null(c_14));
                  return(t);
                }
                t = map_1(t, f_1);
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
  ATerm q_14 = NULL;
  q_14 = t;
  p_14 :
  if(match_cons(q_14, sym_MATH_0))
    {
      ATerm s_14 = NULL,u_14 = NULL;
      ATerm h_9;
      h_9 = t;
      {
        ATerm t_14 = NULL;
        t = SSLgetAnnotations(not_null(q_14));
        {
          t_14 = t;
          if(((s_14 != NULL) && (s_14 != t_14)))
            _fail(t_14);
          else
            s_14 = t_14;
        }
      }
      t = h_9;
      {
        ATerm v_14 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(s_14));
        {
          v_14 = t;
          if(((u_14 != NULL) && (u_14 != v_14)))
            _fail(v_14);
          else
            u_14 = v_14;
        }
        t = not_null(u_14);
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
  ATerm d_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_NUM_0))
    {
      ATerm f_15 = NULL,h_15 = NULL;
      ATerm i_9;
      i_9 = t;
      {
        ATerm g_15 = NULL;
        t = SSLgetAnnotations(not_null(d_15));
        {
          g_15 = t;
          if(((f_15 != NULL) && (f_15 != g_15)))
            _fail(g_15);
          else
            f_15 = g_15;
        }
      }
      t = i_9;
      {
        ATerm i_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(f_15));
        {
          i_15 = t;
          if(((h_15 != NULL) && (h_15 != i_15)))
            _fail(i_15);
          else
            h_15 = i_15;
        }
        t = not_null(h_15);
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
  ATerm q_15 = NULL;
  q_15 = t;
  p_15 :
  if(match_cons(q_15, sym_VAR_0))
    {
      ATerm s_15 = NULL,u_15 = NULL;
      ATerm j_9;
      j_9 = t;
      {
        ATerm t_15 = NULL;
        t = SSLgetAnnotations(not_null(q_15));
        {
          t_15 = t;
          if(((s_15 != NULL) && (s_15 != t_15)))
            _fail(t_15);
          else
            s_15 = t_15;
        }
      }
      t = j_9;
      {
        ATerm v_15 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(s_15));
        {
          v_15 = t;
          if(((u_15 != NULL) && (u_15 != v_15)))
            _fail(v_15);
          else
            u_15 = v_15;
        }
        t = not_null(u_15);
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
  ATerm d_16 = NULL;
  d_16 = t;
  c_16 :
  if(match_cons(d_16, sym_KW_0))
    {
      ATerm f_16 = NULL,h_16 = NULL;
      ATerm k_9;
      k_9 = t;
      {
        ATerm g_16 = NULL;
        t = SSLgetAnnotations(not_null(d_16));
        {
          g_16 = t;
          if(((f_16 != NULL) && (f_16 != g_16)))
            _fail(g_16);
          else
            f_16 = g_16;
        }
      }
      t = k_9;
      {
        ATerm i_16 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(f_16));
        {
          i_16 = t;
          if(((h_16 != NULL) && (h_16 != i_16)))
            _fail(i_16);
          else
            h_16 = i_16;
        }
        t = not_null(h_16);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm sep_by_1 (ATerm t, ATerm g_67 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    ATerm n_16 = NULL;
    n_16 = t;
    t = (ATerm) ATinsert(ATempty, not_null(n_16));
    return(t);
  }
  t = map_1(t, g_1);
  {
    t = separate_by_1(t, g_67);
    t = concat_0(t);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm s_82 (ATerm))
{
  ATerm l_9 = t;
  int m_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_9);
    }
  else
    {
      t = l_9;
      {
        ATerm n_9 = t;
        int o_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_1 (ATerm t)
            {
              t = filter_1(t, s_82);
              return(t);
            }
            t = Cons_2(t, s_82, h_1);
            LocalPopChoice(o_9);
          }
        else
          {
            t = n_9;
            {
              ATerm s_16 = NULL,t_16 = NULL,u_16 = NULL;
              s_16 = t;
              r_16 :
              if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
                {
                  t_16 = ATgetFirst((ATermList) s_16);
                  u_16 = (ATerm) ATgetNext((ATermList) s_16);
                  {
                    t = not_null(u_16);
                    t = filter_1(t, s_82);
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
  ATerm p_9 = t;
  int q_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_1 (ATerm t)
      {
        ATerm y_16 = NULL;
        y_16 = t;
        x_16 :
        if(!(match_cons(y_16, sym_HS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, i_1);
      LocalPopChoice(q_9);
    }
  else
    {
      t = p_9;
      t = term_r_9;
    }
  return(t);
}
ATerm Hspace_0 (ATerm t)
{
  t = hs_length_0(t);
  {
    ATerm s_9 = t;
    int t_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm c_17 = NULL;
        c_17 = t;
        a_17 :
        if(match_int(c_17, 0))
          {
            t = (ATerm) ATempty;
          }
        else
          {
            _fail(t);
          }
        LocalPopChoice(t_9);
      }
    else
      {
        t = s_9;
        {
          ATerm d_17 = NULL;
          ATerm e_17 = NULL;
          e_17 = t;
          if(((d_17 != NULL) && (d_17 != e_17)))
            _fail(e_17);
          else
            d_17 = e_17;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(d_17), term_u_9);
            t = copy_0(t);
          }
        }
      }
  }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm k_17 = NULL,l_17 = NULL,m_17 = NULL;
  k_17 = t;
  j_17 :
  if(match_cons(k_17, sym__2))
    {
      l_17 = ATgetArgument(k_17, 0);
      m_17 = ATgetArgument(k_17, 1);
      {
        t = not_null(m_17);
        {
          ATerm v_9 = t;
          int w_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(w_9);
            }
          else
            {
              t = v_9;
              {
                ATerm j_1 (ATerm t)
                {
                  ATerm x_9 = t;
                  int y_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(y_9);
                    }
                  else
                    {
                      t = x_9;
                      {
                        ATerm p_17 = NULL;
                        t = Cons_2(t, _id, j_1);
                        {
                          ATerm q_17 = NULL;
                          q_17 = t;
                          if(((p_17 != NULL) && (p_17 != q_17)))
                            _fail(q_17);
                          else
                            p_17 = q_17;
                          t = (ATerm) ATinsert(CheckATermList(not_null(p_17)), not_null(l_17));
                        }
                      }
                    }
                  return(t);
                }
                t = Cons_2(t, _id, j_1);
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
ATerm if_verbose2_1 (ATerm t, ATerm w_88 (ATerm))
{
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_10;
      b_10 = t;
      {
        ATerm v_17 = NULL;
        ATerm w_17 = NULL;
        t = term_c_10;
        {
          t = get_config_0(t);
          {
            w_17 = t;
            if(((v_17 != NULL) && (v_17 != w_17)))
              _fail(w_17);
            else
              v_17 = w_17;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_17), term_d_10);
          t = geq_0(t);
        }
      }
      t = b_10;
      t = w_88(t);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm h_86 (ATerm))
{
  ATerm e_10;
  e_10 = t;
  {
    ATerm k_1 (ATerm t)
    {
      t = h_86(t);
      {
        ATerm l_1 (ATerm t)
        {
          t = term_f_10;
          return(t);
        }
        t = debug_1(t, l_1);
      }
      return(t);
    }
    t = if_verbose2_1(t, k_1);
  }
  t = e_10;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm a_18 = NULL,c_18 = NULL;
  ATerm m_1 (ATerm t)
  {
    t = term_g_10;
    return(t);
  }
  t = dissuader_1(t, m_1);
  {
    ATerm h_10;
    h_10 = t;
    {
      ATerm b_18 = NULL;
      b_18 = t;
      if(((a_18 != NULL) && (a_18 != b_18)))
        _fail(b_18);
      else
        a_18 = b_18;
    }
    t = h_10;
    {
      ATerm d_18 = NULL;
      t = term_t_6;
      {
        t = x_74(t);
        {
          d_18 = t;
          if(((c_18 != NULL) && (c_18 != d_18)))
            _fail(d_18);
          else
            c_18 = d_18;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), not_null(a_18));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm LNAT_2 (ATerm t, ATerm n_65 (ATerm), ATerm o_65 (ATerm))
{
  ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
  m_18 = t;
  l_18 :
  if(match_cons(m_18, sym_LNAT_2))
    {
      n_18 = ATgetArgument(m_18, 0);
      o_18 = ATgetArgument(m_18, 1);
      {
        ATerm s_18 = NULL,u_18 = NULL;
        ATerm t_18 = NULL;
        t = SSLgetAnnotations(not_null(m_18));
        {
          t_18 = t;
          if(((s_18 != NULL) && (s_18 != t_18)))
            _fail(t_18);
          else
            s_18 = t_18;
        }
        {
          t = not_null(n_18);
          {
            ATerm w_18 = NULL;
            t = n_65(t);
            {
              u_18 = t;
              {
                t = not_null(o_18);
                {
                  ATerm y_18 = NULL;
                  t = o_65(t);
                  {
                    w_18 = t;
                    {
                      ATerm z_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, not_null(u_18), not_null(w_18)), not_null(s_18));
                      {
                        z_18 = t;
                        if(((y_18 != NULL) && (y_18 != z_18)))
                          _fail(z_18);
                        else
                          y_18 = z_18;
                      }
                      t = not_null(y_18);
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
ATerm L_2 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm))
{
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym_L_2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      {
        ATerm r_19 = NULL,t_19 = NULL;
        ATerm s_19 = NULL;
        t = SSLgetAnnotations(not_null(l_19));
        {
          s_19 = t;
          if(((r_19 != NULL) && (r_19 != s_19)))
            _fail(s_19);
          else
            r_19 = s_19;
        }
        {
          t = not_null(m_19);
          {
            ATerm v_19 = NULL;
            t = l_65(t);
            {
              t_19 = t;
              {
                t = not_null(n_19);
                {
                  ATerm x_19 = NULL;
                  t = m_65(t);
                  {
                    v_19 = t;
                    {
                      ATerm y_19 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(t_19), not_null(v_19)), not_null(r_19));
                      {
                        y_19 = t;
                        if(((x_19 != NULL) && (x_19 != y_19)))
                          _fail(y_19);
                        else
                          x_19 = y_19;
                      }
                      t = not_null(x_19);
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
ATerm tov_1 (ATerm t, ATerm f_67 (ATerm))
{
  ATerm h_20 = NULL,l_20 = NULL;
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2(t, _id, _id);
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2(t, _id, _id);
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
              ATerm i_20 = NULL;
              ATerm j_20 = NULL;
              i_20 = t;
              {
                if(((h_20 != NULL) && (h_20 != i_20)))
                  _fail(i_20);
                else
                  h_20 = i_20;
                {
                  ATerm k_20 = NULL;
                  t = term_t_6;
                  {
                    t = f_67(t);
                    {
                      k_20 = t;
                      if(((j_20 != NULL) && (j_20 != k_20)))
                        _fail(k_20);
                      else
                        j_20 = k_20;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_m_10), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(h_20)))), not_null(j_20)))));
                }
              }
            }
          }
      }
    }
  {
    l_20 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_m_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_20)))));
  }
  return(t);
}
ATerm is_length_0 (ATerm t)
{
  ATerm r_10 = t;
  int s_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_1 (ATerm t)
      {
        ATerm r_20 = NULL;
        r_20 = t;
        q_20 :
        if(!(match_cons(r_20, sym_IS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, n_1);
      LocalPopChoice(s_10);
    }
  else
    {
      t = r_10;
      t = term_t_10;
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  t = is_length_0(t);
  {
    ATerm u_10 = t;
    int v_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_20 = NULL;
        w_20 = t;
        t_20 :
        if(match_int(w_20, 0))
          {
            t = term_w_10;
          }
        else
          {
            _fail(t);
          }
        LocalPopChoice(v_10);
      }
    else
      {
        t = u_10;
        {
          ATerm x_20 = NULL;
          ATerm y_20 = NULL,a_21 = NULL;
          ATerm z_20 = NULL;
          z_20 = t;
          if(((y_20 != NULL) && (y_20 != z_20)))
            _fail(z_20);
          else
            y_20 = z_20;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_20), term_u_9);
            {
              t = copy_0(t);
              {
                a_21 = t;
                if(((x_20 != NULL) && (x_20 != a_21)))
                  _fail(a_21);
                else
                  x_20 = a_21;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(x_20));
        }
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm g_21 = NULL,h_21 = NULL,i_21 = NULL;
  g_21 = t;
  f_21 :
  if(match_cons(g_21, sym__2))
    {
      h_21 = ATgetArgument(g_21, 0);
      i_21 = ATgetArgument(g_21, 1);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_21), not_null(i_21));
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            t = SSL_subtr(not_null(h_21), not_null(i_21));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm p_68 (ATerm), ATerm q_68 (ATerm))
{
  ATerm m_21 (ATerm t)
  {
    ATerm d_11 = t;
    int g_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_68(t);
        LocalPopChoice(g_11);
      }
    else
      {
        t = d_11;
        {
          t = q_68(t);
          t = m_21(t);
        }
      }
    return(t);
  }
  t = m_21(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm s_68 (ATerm), ATerm t_68 (ATerm), ATerm u_68 (ATerm))
{
  t = s_68(t);
  t = while_not_2(t, t_68, u_68);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
    v_21 = t;
    o_21 :
    if(match_cons(v_21, sym__2))
      {
        w_21 = ATgetArgument(v_21, 0);
        x_21 = ATgetArgument(v_21, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(w_21), not_null(x_21), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm p_1 (ATerm t)
  {
    ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL;
    a_22 = t;
    q_21 :
    if(match_cons(a_22, sym__3))
      {
        b_22 = ATgetArgument(a_22, 0);
        c_22 = ATgetArgument(a_22, 1);
        d_22 = ATgetArgument(a_22, 2);
        r_21 :
        if(match_int(b_22, 0))
          {
            t = not_null(d_22);
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
  ATerm q_1 (ATerm t)
  {
    ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL;
    g_22 = t;
    u_21 :
    if(match_cons(g_22, sym__3))
      {
        h_22 = ATgetArgument(g_22, 0);
        i_22 = ATgetArgument(g_22, 1);
        j_22 = ATgetArgument(g_22, 2);
        {
          ATerm n_22 = NULL;
          ATerm h_11;
          h_11 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), term_r_9);
            t = geq_0(t);
          }
          t = h_11;
          {
            ATerm r_22 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), term_r_9);
            {
              t = subt_0(t);
              {
                r_22 = t;
                if(((n_22 != NULL) && (n_22 != r_22)))
                  _fail(r_22);
                else
                  n_22 = r_22;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_22), not_null(i_22), (ATerm) ATinsert(CheckATermList(not_null(j_22)), not_null(i_22)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, o_1, p_1, q_1);
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm t_66 (ATerm), ATerm u_66 (ATerm))
{
  ATerm r_25 = NULL,s_25 = NULL,t_25 = NULL;
  r_25 = t;
  q_25 :
  if(match_cons(r_25, sym_SOpt_2))
    {
      s_25 = ATgetArgument(r_25, 0);
      t_25 = ATgetArgument(r_25, 1);
      {
        ATerm x_25 = NULL,z_25 = NULL;
        ATerm y_25 = NULL;
        t = SSLgetAnnotations(not_null(r_25));
        {
          y_25 = t;
          if(((x_25 != NULL) && (x_25 != y_25)))
            _fail(y_25);
          else
            x_25 = y_25;
        }
        {
          t = not_null(s_25);
          {
            ATerm b_26 = NULL;
            t = t_66(t);
            {
              z_25 = t;
              {
                t = not_null(t_25);
                {
                  ATerm d_26 = NULL;
                  t = u_66(t);
                  {
                    b_26 = t;
                    {
                      ATerm e_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(z_25), not_null(b_26)), not_null(x_25));
                      {
                        e_26 = t;
                        if(((d_26 != NULL) && (d_26 != e_26)))
                          _fail(e_26);
                        else
                          d_26 = e_26;
                      }
                      t = not_null(d_26);
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
ATerm SOpt_value_1 (ATerm t, ATerm g_95 (ATerm))
{
  ATerm l_26 = NULL;
  ATerm r_1 (ATerm t)
  {
    ATerm s_1 (ATerm t)
    {
      ATerm o_26 = NULL;
      o_26 = t;
      if(((l_26 != NULL) && (l_26 != o_26)))
        _fail(o_26);
      else
        l_26 = o_26;
      return(t);
    }
    t = SOpt_2(t, g_95, s_1);
    return(t);
  }
  t = fetch_1(t, r_1);
  {
    t = not_null(l_26);
    t = string_to_int_0(t);
  }
  return(t);
}
ATerm vs_length_0 (ATerm t)
{
  ATerm k_11 = t;
  int s_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm w_26 = NULL;
        w_26 = t;
        v_26 :
        if(!(match_cons(w_26, sym_VS_0)))
          {
            _fail(t);
          }
        return(t);
      }
      t = SOpt_value_1(t, t_1);
      LocalPopChoice(s_11);
    }
  else
    {
      t = k_11;
      t = term_t_10;
    }
  return(t);
}
ATerm Vspace_0 (ATerm t)
{
  t = vs_length_0(t);
  {
    ATerm u_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm b_27 = NULL;
        b_27 = t;
        y_26 :
        if(match_int(b_27, 0))
          {
            t = term_w_10;
          }
        else
          {
            _fail(t);
          }
        LocalPopChoice(v_11);
      }
    else
      {
        t = u_11;
        {
          ATerm d_27 = NULL;
          ATerm e_27 = NULL,g_27 = NULL;
          ATerm f_27 = NULL;
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_27), term_g_9);
            {
              t = copy_0(t);
              {
                g_27 = t;
                if(((d_27 != NULL) && (d_27 != g_27)))
                  _fail(g_27);
                else
                  d_27 = g_27;
              }
            }
          }
          t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(d_27))));
        }
      }
  }
  return(t);
}
ATerm aopt_0 (ATerm t)
{
  ATerm t_27 = NULL,u_27 = NULL;
  t_27 = t;
  s_27 :
  if(match_cons(t_27, sym_AL_1))
    {
      u_27 = ATgetArgument(t_27, 0);
      t = term_w_11;
    }
  else
    {
      if(match_cons(t_27, sym_AR_1))
        {
          u_27 = ATgetArgument(t_27, 0);
          t = term_y_11;
        }
      else
        {
          if(match_cons(t_27, sym_AC_1))
            {
              u_27 = ATgetArgument(t_27, 0);
              t = term_z_11;
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
  ATerm c_28 = NULL,d_28 = NULL;
  c_28 = t;
  b_28 :
  if(match_cons(c_28, sym_AC_1))
    {
      d_28 = ATgetArgument(c_28, 0);
      t = not_null(d_28);
    }
  else
    {
      if(match_cons(c_28, sym_AR_1))
        {
          d_28 = ATgetArgument(c_28, 0);
          t = not_null(d_28);
        }
      else
        {
          if(match_cons(c_28, sym_AL_1))
            {
              d_28 = ATgetArgument(c_28, 0);
              t = not_null(d_28);
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
      ATerm a_12 = t;
      int b_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_28 = NULL;
          m_28 = t;
          k_28 :
          if(((ATgetType(m_28) == AT_LIST) && ATisEmpty(m_28)))
            {
              {
              }
            }
          else
            {
              _fail(t);
            }
          LocalPopChoice(b_12);
        }
      else
        {
          t = a_12;
          {
            ATerm n_28 = NULL;
            ATerm o_28 = NULL;
            o_28 = t;
            if(((n_28 != NULL) && (n_28 != o_28)))
              _fail(o_28);
            else
              n_28 = o_28;
            t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(n_28));
          }
        }
    }
  }
  return(t);
}
ATerm toa_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm o_29 = NULL,p_29 = NULL,q_29 = NULL;
  o_29 = t;
  m_29 :
  if(match_cons(o_29, sym_R_2))
    {
      p_29 = ATgetArgument(o_29, 0);
      q_29 = ATgetArgument(o_29, 1);
      n_29 :
      if(((ATgetType(p_29) == AT_LIST) && ATisEmpty(p_29)))
        {
          {
            ATerm s_29 = NULL,t_29 = NULL;
            ATerm u_29 = NULL,v_29 = NULL;
            t = term_t_6;
            {
              t = i_67(t);
              {
                u_29 = t;
                l_29 :
                if(match_cons(u_29, sym_AOPTIONS_1))
                  {
                    v_29 = ATgetArgument(u_29, 0);
                    {
                      ATerm r_31 = NULL;
                      if(((s_29 != NULL) && (s_29 != v_29)))
                        _fail(v_29);
                      else
                        s_29 = v_29;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_29), not_null(s_29));
                        {
                          ATerm u_31 (ATerm t)
                          {
                            ATerm w_29 = NULL,x_29 = NULL,y_29 = NULL,z_29 = NULL,a_30 = NULL,b_30 = NULL,c_30 = NULL,d_30 = NULL,e_30 = NULL,f_30 = NULL,g_30 = NULL;
                            ATerm w_31 (ATerm t)
                            {
                              ATerm t_30 = NULL;
                              ATerm u_30 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(d_30), not_null(e_30));
                              {
                                t = u_31(t);
                                {
                                  u_30 = t;
                                  if(((t_30 != NULL) && (t_30 != u_30)))
                                    _fail(u_30);
                                  else
                                    t_30 = u_30;
                                }
                              }
                              t = (ATerm) ATinsert(CheckATermList(not_null(t_30)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, not_null(w_29), not_null(x_29)))));
                              return(t);
                            }
                            ATerm x_31 (ATerm t)
                            {
                              ATerm b_31 = NULL,d_31 = NULL,f_31 = NULL;
                              ATerm e_12;
                              e_12 = t;
                              {
                                ATerm c_31 = NULL;
                                t = not_null(f_30);
                                {
                                  t = aopt_0(t);
                                  {
                                    c_31 = t;
                                    if(((b_31 != NULL) && (b_31 != c_31)))
                                      _fail(c_31);
                                    else
                                      b_31 = c_31;
                                  }
                                }
                              }
                              t = e_12;
                              {
                                ATerm f_12;
                                f_12 = t;
                                {
                                  ATerm e_31 = NULL;
                                  t = not_null(f_30);
                                  {
                                    t = make_hs_0(t);
                                    {
                                      e_31 = t;
                                      if(((d_31 != NULL) && (d_31 != e_31)))
                                        _fail(e_31);
                                      else
                                        d_31 = e_31;
                                    }
                                  }
                                }
                                t = f_12;
                                {
                                  ATerm g_31 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_29)), not_null(y_29)), not_null(g_30));
                                  {
                                    t = u_31(t);
                                    {
                                      g_31 = t;
                                      if(((f_31 != NULL) && (f_31 != g_31)))
                                        _fail(g_31);
                                      else
                                        f_31 = g_31;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(f_31)), not_null(d_31)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(b_31)), not_null(c_30)));
                                }
                              }
                              return(t);
                            }
                            ATerm y_31 (ATerm t)
                            {
                              ATerm n_31 = NULL,p_31 = NULL;
                              ATerm g_12;
                              g_12 = t;
                              {
                                ATerm o_31 = NULL;
                                t = not_null(f_30);
                                {
                                  t = aopt_0(t);
                                  {
                                    o_31 = t;
                                    if(((n_31 != NULL) && (n_31 != o_31)))
                                      _fail(o_31);
                                    else
                                      n_31 = o_31;
                                  }
                                }
                              }
                              t = g_12;
                              {
                                ATerm q_31 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_30), not_null(g_30));
                                {
                                  t = u_31(t);
                                  {
                                    q_31 = t;
                                    if(((p_31 != NULL) && (p_31 != q_31)))
                                      _fail(q_31);
                                    else
                                      p_31 = q_31;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(p_31)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(n_31)), not_null(c_30)));
                              }
                              return(t);
                            }
                            a_30 = t;
                            c_29 :
                            if(match_cons(a_30, sym__2))
                              {
                                b_30 = ATgetArgument(a_30, 0);
                                e_30 = ATgetArgument(a_30, 1);
                                d_29 :
                                if(((ATgetType(b_30) == AT_LIST) && ATisEmpty(b_30)))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(b_30) == AT_LIST) && !(ATisEmpty(b_30))))
                                      {
                                        c_30 = ATgetFirst((ATermList) b_30);
                                        d_30 = (ATerm) ATgetNext((ATermList) b_30);
                                        e_29 :
                                        if(((ATgetType(e_30) == AT_LIST) && !(ATisEmpty(e_30))))
                                          {
                                            f_30 = ATgetFirst((ATermList) e_30);
                                            g_30 = (ATerm) ATgetNext((ATermList) e_30);
                                            f_29 :
                                            if(((ATgetType(d_30) == AT_LIST) && !(ATisEmpty(d_30))))
                                              {
                                                y_29 = ATgetFirst((ATermList) d_30);
                                                z_29 = (ATerm) ATgetNext((ATermList) d_30);
                                                g_29 :
                                                if(match_cons(c_30, sym_C_2))
                                                  {
                                                    w_29 = ATgetArgument(c_30, 0);
                                                    x_29 = ATgetArgument(c_30, 1);
                                                    {
                                                      ATerm h_12 = t;
                                                      int i_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = w_31(t);
                                                          LocalPopChoice(i_12);
                                                        }
                                                      else
                                                        {
                                                          t = h_12;
                                                          {
                                                            ATerm n_12 = t;
                                                            int p_12 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = x_31(t);
                                                                LocalPopChoice(p_12);
                                                              }
                                                            else
                                                              {
                                                                t = n_12;
                                                                t = y_31(t);
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm q_12 = t;
                                                    int r_12 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = x_31(t);
                                                        LocalPopChoice(r_12);
                                                      }
                                                    else
                                                      {
                                                        t = q_12;
                                                        t = y_31(t);
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                h_29 :
                                                if(match_cons(c_30, sym_C_2))
                                                  {
                                                    w_29 = ATgetArgument(c_30, 0);
                                                    x_29 = ATgetArgument(c_30, 1);
                                                    {
                                                      ATerm s_12 = t;
                                                      int u_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = w_31(t);
                                                          LocalPopChoice(u_12);
                                                        }
                                                      else
                                                        {
                                                          t = s_12;
                                                          t = y_31(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = y_31(t);
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            i_29 :
                                            j_29 :
                                            if(match_cons(c_30, sym_C_2))
                                              {
                                                w_29 = ATgetArgument(c_30, 0);
                                                x_29 = ATgetArgument(c_30, 1);
                                                t = w_31(t);
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
                          t = u_31(t);
                          {
                            r_31 = t;
                            if(((t_29 != NULL) && (t_29 != r_31)))
                              _fail(r_31);
                            else
                              t_29 = r_31;
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
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_m_10), (ATerm) ATinsert(ATempty, not_null(t_29)));
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
ATerm R_2 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  m_32 :
  if(match_cons(n_32, sym_R_2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      {
        ATerm t_32 = NULL,x_32 = NULL;
        ATerm u_32 = NULL;
        t = SSLgetAnnotations(not_null(n_32));
        {
          u_32 = t;
          if(((t_32 != NULL) && (t_32 != u_32)))
            _fail(u_32);
          else
            t_32 = u_32;
        }
        {
          t = not_null(o_32);
          {
            ATerm z_32 = NULL;
            t = f_66(t);
            {
              x_32 = t;
              {
                t = not_null(p_32);
                {
                  ATerm b_33 = NULL;
                  t = g_66(t);
                  {
                    z_32 = t;
                    {
                      ATerm j_33 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(x_32), not_null(z_32)), not_null(t_32));
                      {
                        j_33 = t;
                        if(((b_33 != NULL) && (b_33 != j_33)))
                          _fail(j_33);
                        else
                          b_33 = j_33;
                      }
                      t = not_null(b_33);
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
ATerm split_2 (ATerm t, ATerm e_83 (ATerm), ATerm f_83 (ATerm))
{
  ATerm r_33 = NULL,t_33 = NULL;
  ATerm w_12;
  w_12 = t;
  {
    ATerm s_33 = NULL;
    t = e_83(t);
    {
      s_33 = t;
      if(((r_33 != NULL) && (r_33 != s_33)))
        _fail(s_33);
      else
        r_33 = s_33;
    }
  }
  t = w_12;
  {
    ATerm u_33 = NULL;
    t = f_83(t);
    {
      u_33 = t;
      if(((t_33 != NULL) && (t_33 != u_33)))
        _fail(u_33);
      else
        t_33 = u_33;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_33), not_null(t_33));
  }
  return(t);
}
ATerm construct_rows_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, u_1);
  {
    ATerm f_35 (ATerm t)
    {
      ATerm g_34 = NULL,h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL,l_34 = NULL,m_34 = NULL;
      ATerm i_35 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_34), (ATerm) ATinsert(CheckATermList(not_null(m_34)), not_null(k_34)));
        t = f_35(t);
        return(t);
      }
      i_34 = t;
      d_34 :
      if(match_cons(i_34, sym__2))
        {
          j_34 = ATgetArgument(i_34, 0);
          m_34 = ATgetArgument(i_34, 1);
          e_34 :
          if(((ATgetType(j_34) == AT_LIST) && ATisEmpty(j_34)))
            {
              {
                ATerm r_34 = NULL;
                ATerm s_34 = NULL;
                t = not_null(m_34);
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2(t, _id, v_1);
                  {
                    s_34 = t;
                    if(((r_34 != NULL) && (r_34 != s_34)))
                      _fail(s_34);
                    else
                      r_34 = s_34;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(r_34)));
              }
            }
          else
            {
              if(((ATgetType(j_34) == AT_LIST) && !(ATisEmpty(j_34))))
                {
                  k_34 = ATgetFirst((ATermList) j_34);
                  l_34 = (ATerm) ATgetNext((ATermList) j_34);
                  f_34 :
                  if(match_cons(k_34, sym_R_2))
                    {
                      g_34 = ATgetArgument(k_34, 0);
                      h_34 = ATgetArgument(k_34, 1);
                      {
                        ATerm x_12 = t;
                        int d_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm x_34 = NULL,z_34 = NULL;
                            ATerm j_13;
                            j_13 = t;
                            {
                              ATerm y_34 = NULL;
                              t = not_null(m_34);
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  t = (ATerm) ATempty;
                                  return(t);
                                }
                                t = reverse_acc_2(t, _id, w_1);
                                {
                                  y_34 = t;
                                  if(((x_34 != NULL) && (x_34 != y_34)))
                                    _fail(y_34);
                                  else
                                    x_34 = y_34;
                                }
                              }
                            }
                            t = j_13;
                            {
                              ATerm a_35 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(l_34), (ATerm) ATempty);
                              {
                                t = f_35(t);
                                {
                                  a_35 = t;
                                  if(((z_34 != NULL) && (z_34 != a_35)))
                                    _fail(a_35);
                                  else
                                    z_34 = a_35;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(z_34)), (ATerm) ATmakeAppl(sym_R_2, not_null(g_34), not_null(h_34))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(x_34)));
                            }
                            LocalPopChoice(d_13);
                          }
                        else
                          {
                            t = x_12;
                            t = i_35(t);
                          }
                      }
                    }
                  else
                    {
                      t = i_35(t);
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
    t = f_35(t);
    {
      ATerm x_1 (ATerm t)
      {
        ATerm k_13 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_13;
          }
        return(t);
      }
      t = filter_1(t, x_1);
    }
  }
  return(t);
}
ATerm Abox2html_0 (ATerm t)
{
  ATerm s_36 = NULL,t_36 = NULL,u_36 = NULL,v_36 = NULL;
  u_36 = t;
  q_36 :
  if(match_cons(u_36, sym_REF_2))
    {
      v_36 = ATgetArgument(u_36, 0);
      t_36 = ATgetArgument(u_36, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, not_null(v_36), not_null(t_36));
    }
  else
    {
      if(match_cons(u_36, sym_LBL_2))
        {
          v_36 = ATgetArgument(u_36, 0);
          t_36 = ATgetArgument(u_36, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_36)), (ATerm) ATmakeAppl(sym_ANCHOR_1, not_null(v_36)));
        }
      else
        {
          if(match_cons(u_36, sym_LNAT_2))
            {
              v_36 = ATgetArgument(u_36, 0);
              t_36 = ATgetArgument(u_36, 1);
              t = term_l_13;
            }
          else
            {
              if(match_cons(u_36, sym_L_2))
                {
                  v_36 = ATgetArgument(u_36, 0);
                  t_36 = ATgetArgument(u_36, 1);
                  t = term_l_13;
                }
              else
                {
                  if(match_cons(u_36, sym_ALT_2))
                    {
                      v_36 = ATgetArgument(u_36, 0);
                      t_36 = ATgetArgument(u_36, 1);
                      t = not_null(v_36);
                    }
                  else
                    {
                      if(match_cons(u_36, sym_A_3))
                        {
                          v_36 = ATgetArgument(u_36, 0);
                          t_36 = ATgetArgument(u_36, 1);
                          s_36 = ATgetArgument(u_36, 2);
                          {
                            ATerm j_37 = NULL,k_37 = NULL,l_37 = NULL;
                            ATerm m_37 = NULL;
                            t = not_null(s_36);
                            {
                              ATerm n_37 = NULL;
                              t = construct_rows_0(t);
                              {
                                m_37 = t;
                                {
                                  if(((j_37 != NULL) && (j_37 != m_37)))
                                    _fail(m_37);
                                  else
                                    j_37 = m_37;
                                  {
                                    t = not_null(t_36);
                                    {
                                      ATerm o_37 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        n_37 = t;
                                        {
                                          if(((k_37 != NULL) && (k_37 != n_37)))
                                            _fail(n_37);
                                          else
                                            k_37 = n_37;
                                          {
                                            t = not_null(j_37);
                                            {
                                              ATerm y_1 (ATerm t)
                                              {
                                                ATerm z_1 (ATerm t)
                                                {
                                                  t = not_null(v_36);
                                                  return(t);
                                                }
                                                t = toa_1(t, z_1);
                                                return(t);
                                              }
                                              t = map_1(t, y_1);
                                              {
                                                ATerm a_2 (ATerm t)
                                                {
                                                  t = not_null(k_37);
                                                  return(t);
                                                }
                                                t = separate_by_1(t, a_2);
                                                {
                                                  o_37 = t;
                                                  if(((l_37 != NULL) && (l_37 != o_37)))
                                                    _fail(o_37);
                                                  else
                                                    l_37 = o_37;
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
                            t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(l_37))))));
                          }
                        }
                      else
                        {
                          if(match_cons(u_36, sym_HV_2))
                            {
                              v_36 = ATgetArgument(u_36, 0);
                              t_36 = ATgetArgument(u_36, 1);
                              {
                                ATerm r_37 = NULL,s_37 = NULL,t_37 = NULL;
                                ATerm u_37 = NULL;
                                t = not_null(v_36);
                                {
                                  ATerm z_37 = NULL;
                                  t = Hspace_0(t);
                                  {
                                    u_37 = t;
                                    {
                                      if(((r_37 != NULL) && (r_37 != u_37)))
                                        _fail(u_37);
                                      else
                                        r_37 = u_37;
                                      {
                                        ATerm p_13 = t;
                                        int q_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm v_37 = NULL;
                                            v_37 = t;
                                            d_36 :
                                            if(((ATgetType(v_37) == AT_LIST) && ATisEmpty(v_37)))
                                              {
                                                {
                                                  t = not_null(t_36);
                                                  {
                                                    ATerm b_2 (ATerm t)
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
                                                    t = filter_1(t, b_2);
                                                  }
                                                }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(q_13);
                                          }
                                        else
                                          {
                                            t = p_13;
                                            {
                                              ATerm w_37 = NULL;
                                              ATerm x_37 = NULL;
                                              ATerm c_2 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, term_x_13);
                                                return(t);
                                              }
                                              t = at_last_1(t, c_2);
                                              {
                                                w_37 = t;
                                                {
                                                  if(((s_37 != NULL) && (s_37 != w_37)))
                                                    _fail(w_37);
                                                  else
                                                    s_37 = w_37;
                                                  {
                                                    ATerm y_37 = NULL;
                                                    t = not_null(t_36);
                                                    {
                                                      ATerm d_2 (ATerm t)
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
                                                      t = filter_1(t, d_2);
                                                      {
                                                        ATerm e_2 (ATerm t)
                                                        {
                                                          t = not_null(s_37);
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, e_2);
                                                        {
                                                          y_37 = t;
                                                          if(((x_37 != NULL) && (x_37 != y_37)))
                                                            _fail(y_37);
                                                          else
                                                            x_37 = y_37;
                                                        }
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_37)), term_z_13);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        {
                                          z_37 = t;
                                          if(((t_37 != NULL) && (t_37 != z_37)))
                                            _fail(z_37);
                                          else
                                            t_37 = z_37;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = not_null(t_37);
                              }
                            }
                          else
                            {
                              if(match_cons(u_36, sym_V_2))
                                {
                                  v_36 = ATgetArgument(u_36, 0);
                                  t_36 = ATgetArgument(u_36, 1);
                                  {
                                    ATerm c_38 = NULL,d_38 = NULL,e_38 = NULL;
                                    ATerm f_38 = NULL;
                                    t = not_null(v_36);
                                    {
                                      ATerm g_38 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        f_38 = t;
                                        {
                                          if(((d_38 != NULL) && (d_38 != f_38)))
                                            _fail(f_38);
                                          else
                                            d_38 = f_38;
                                          {
                                            t = not_null(v_36);
                                            {
                                              ATerm h_38 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                g_38 = t;
                                                {
                                                  if(((c_38 != NULL) && (c_38 != g_38)))
                                                    _fail(g_38);
                                                  else
                                                    c_38 = g_38;
                                                  {
                                                    t = not_null(t_36);
                                                    {
                                                      ATerm f_2 (ATerm t)
                                                      {
                                                        ATerm d_14 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = d_14;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, f_2);
                                                      {
                                                        ATerm g_2 (ATerm t)
                                                        {
                                                          ATerm i_2 (ATerm t)
                                                          {
                                                            t = term_w_10;
                                                            return(t);
                                                          }
                                                          t = tov_1(t, i_2);
                                                          return(t);
                                                        }
                                                        ATerm h_2 (ATerm t)
                                                        {
                                                          ATerm j_2 (ATerm t)
                                                          {
                                                            ATerm l_2 (ATerm t)
                                                            {
                                                              t = not_null(c_38);
                                                              return(t);
                                                            }
                                                            t = tov_1(t, l_2);
                                                            return(t);
                                                          }
                                                          t = map_1(t, j_2);
                                                          return(t);
                                                        }
                                                        t = Cons_2(t, g_2, h_2);
                                                        {
                                                          ATerm m_2 (ATerm t)
                                                          {
                                                            t = not_null(d_38);
                                                            return(t);
                                                          }
                                                          t = separate_by_1(t, m_2);
                                                          {
                                                            h_38 = t;
                                                            if(((e_38 != NULL) && (e_38 != h_38)))
                                                              _fail(h_38);
                                                            else
                                                              e_38 = h_38;
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
                                    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, not_null(e_38))), term_z_13);
                                  }
                                }
                              else
                                {
                                  if(match_cons(u_36, sym_H_2))
                                    {
                                      v_36 = ATgetArgument(u_36, 0);
                                      t_36 = ATgetArgument(u_36, 1);
                                      {
                                        ATerm k_38 = NULL,l_38 = NULL;
                                        ATerm m_38 = NULL;
                                        t = not_null(v_36);
                                        {
                                          ATerm n_38 = NULL;
                                          t = Hspace_0(t);
                                          {
                                            m_38 = t;
                                            {
                                              if(((k_38 != NULL) && (k_38 != m_38)))
                                                _fail(m_38);
                                              else
                                                k_38 = m_38;
                                              {
                                                t = not_null(t_36);
                                                {
                                                  ATerm n_2 (ATerm t)
                                                  {
                                                    ATerm f_14 = t;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = Nil_0(t);
                                                        PopChoice();
                                                        _fail(t);
                                                      }
                                                    else
                                                      {
                                                        t = f_14;
                                                      }
                                                    return(t);
                                                  }
                                                  t = filter_1(t, n_2);
                                                  {
                                                    ATerm o_2 (ATerm t)
                                                    {
                                                      t = not_null(k_38);
                                                      return(t);
                                                    }
                                                    t = sep_by_1(t, o_2);
                                                    {
                                                      n_38 = t;
                                                      if(((l_38 != NULL) && (l_38 != n_38)))
                                                        _fail(n_38);
                                                      else
                                                        l_38 = n_38;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = not_null(l_38);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(u_36, sym_FBOX_2))
                                        {
                                          v_36 = ATgetArgument(u_36, 0);
                                          t_36 = ATgetArgument(u_36, 1);
                                          {
                                            ATerm q_38 = NULL;
                                            ATerm r_38 = NULL;
                                            t = not_null(v_36);
                                            {
                                              ATerm g_14 = t;
                                              int i_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = KW_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_j_14), (ATerm) ATinsert(ATempty, not_null(t_36)));
                                                  LocalPopChoice(i_14);
                                                }
                                              else
                                                {
                                                  t = g_14;
                                                  {
                                                    ATerm k_14 = t;
                                                    int l_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = VAR_0(t);
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_m_14), (ATerm) ATinsert(ATempty, not_null(t_36)));
                                                        LocalPopChoice(l_14);
                                                      }
                                                    else
                                                      {
                                                        t = k_14;
                                                        {
                                                          ATerm n_14 = t;
                                                          int o_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = NUM_0(t);
                                                              t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_r_14), (ATerm) ATinsert(ATempty, not_null(t_36)));
                                                              LocalPopChoice(o_14);
                                                            }
                                                          else
                                                            {
                                                              t = n_14;
                                                              {
                                                                ATerm w_14 = t;
                                                                int x_14 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = MATH_0(t);
                                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_y_14), (ATerm) ATinsert(ATempty, not_null(t_36)));
                                                                    LocalPopChoice(x_14);
                                                                  }
                                                                else
                                                                  {
                                                                    t = w_14;
                                                                    t = not_null(t_36);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              {
                                                r_38 = t;
                                                if(((q_38 != NULL) && (q_38 != r_38)))
                                                  _fail(r_38);
                                                else
                                                  q_38 = r_38;
                                              }
                                            }
                                            t = not_null(q_38);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(u_36, sym_C_2))
                                            {
                                              v_36 = ATgetArgument(u_36, 0);
                                              t_36 = ATgetArgument(u_36, 1);
                                              r_36 :
                                              if(((ATgetType(v_36) == AT_LIST) && ATisEmpty(v_36)))
                                                {
                                                  {
                                                    ATerm t_38 = NULL;
                                                    ATerm x_38 = NULL;
                                                    t = not_null(t_36);
                                                    {
                                                      ATerm p_2 (ATerm t)
                                                      {
                                                        ATerm u_38 = NULL,v_38 = NULL;
                                                        u_38 = t;
                                                        o_36 :
                                                        if(match_cons(u_38, sym_S_1))
                                                          {
                                                            v_38 = ATgetArgument(u_38, 0);
                                                            {
                                                              t = not_null(v_38);
                                                              t = make_html_comment_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      t = map_1(t, p_2);
                                                      {
                                                        x_38 = t;
                                                        if(((t_38 != NULL) && (t_38 != x_38)))
                                                          _fail(x_38);
                                                        else
                                                          t_38 = x_38;
                                                      }
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_z_14), (ATerm) ATinsert(ATempty, not_null(t_38))))));
                                                  }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(u_36, sym_S_1))
                                                {
                                                  v_36 = ATgetArgument(u_36, 0);
                                                  {
                                                    t = not_null(v_36);
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
ATerm topdown_1 (ATerm t, ATerm y_68 (ATerm))
{
  t = y_68(t);
  {
    ATerm q_2 (ATerm t)
    {
      t = topdown_1(t, y_68);
      return(t);
    }
    t = _all(t, q_2);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm b_76 (ATerm))
{
  ATerm e_40 (ATerm t)
  {
    ATerm a_15 = t;
    int b_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = b_76(t);
        LocalPopChoice(b_15);
      }
    else
      {
        t = a_15;
        t = Cons_2(t, _id, e_40);
      }
    return(t);
  }
  t = e_40(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm f_40 (ATerm t)
  {
    ATerm e_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_75(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = e_15;
        t = Cons_2(t, _id, f_40);
      }
    return(t);
  }
  t = f_40(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm n_75 (ATerm))
{
  ATerm i_40 = NULL,k_40 = NULL;
  ATerm r_2 (ATerm t)
  {
    t = Cons_2(t, n_75, _id);
    {
      ATerm s_2 (ATerm t)
      {
        ATerm j_40 = NULL;
        j_40 = t;
        if(((i_40 != NULL) && (i_40 != j_40)))
          _fail(j_40);
        else
          i_40 = j_40;
        return(t);
      }
      t = Cons_2(t, _id, s_2);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, r_2);
  {
    ATerm l_40 = NULL;
    l_40 = t;
    if(((k_40 != NULL) && (k_40 != l_40)))
      _fail(l_40);
    else
      k_40 = l_40;
    t = (ATerm) ATmakeAppl(sym__2, not_null(k_40), not_null(i_40));
  }
  return(t);
}
ATerm Distribute_0 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
  z_40 = t;
  y_40 :
  if(match_cons(z_40, sym_H_2))
    {
      a_41 = ATgetArgument(z_40, 0);
      b_41 = ATgetArgument(z_40, 1);
      {
        ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL,r_41 = NULL,s_41 = NULL,t_41 = NULL;
        t = not_null(b_41);
        {
          ATerm t_2 (ATerm t)
          {
            ATerm k_41 = NULL,l_41 = NULL,m_41 = NULL,n_41 = NULL,q_41 = NULL;
            k_41 = t;
            q_40 :
            if(match_cons(k_41, sym_V_2))
              {
                l_41 = ATgetArgument(k_41, 0);
                m_41 = ATgetArgument(k_41, 1);
                r_40 :
                if(((ATgetType(m_41) == AT_LIST) && !(ATisEmpty(m_41))))
                  {
                    n_41 = ATgetFirst((ATermList) m_41);
                    q_41 = (ATerm) ATgetNext((ATermList) m_41);
                    {
                      if(((f_41 != NULL) && (f_41 != l_41)))
                        _fail(l_41);
                      else
                        f_41 = l_41;
                      {
                        if(((g_41 != NULL) && (g_41 != n_41)))
                          _fail(n_41);
                        else
                          g_41 = n_41;
                        if(((h_41 != NULL) && (h_41 != q_41)))
                          _fail(q_41);
                        else
                          h_41 = q_41;
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
          t = split_fetch_1(t, t_2);
          {
            r_41 = t;
            x_40 :
            if(match_cons(r_41, sym__2))
              {
                s_41 = ATgetArgument(r_41, 0);
                t_41 = ATgetArgument(r_41, 1);
                {
                  ATerm x_41 = NULL,z_41 = NULL;
                  t = not_null(t_41);
                  {
                    ATerm k_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm w_41 = NULL;
                        w_41 = t;
                        t_40 :
                        if(((ATgetType(w_41) == AT_LIST) && ATisEmpty(w_41)))
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
                        t = k_15;
                      }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(h_41)), not_null(g_41));
                      {
                        ATerm b_42 = NULL;
                        ATerm u_2 (ATerm t)
                        {
                          ATerm v_2 (ATerm t)
                          {
                            ATerm y_41 = NULL;
                            y_41 = t;
                            if(((x_41 != NULL) && (x_41 != y_41)))
                              _fail(y_41);
                            else
                              x_41 = y_41;
                            return(t);
                          }
                          t = Cons_2(t, v_2, Nil_0);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, not_null(a_41), (ATerm) ATinsert(CheckATermList(not_null(t_41)), not_null(x_41))));
                          return(t);
                        }
                        t = at_last_1(t, u_2);
                        {
                          z_41 = t;
                          {
                            ATerm c_42 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(s_41), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(f_41), not_null(z_41))));
                            {
                              ATerm l_15 = t;
                              int m_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = conc_two_lists_0(t);
                                  LocalPopChoice(m_15);
                                }
                              else
                                {
                                  t = l_15;
                                  t = conc_more_lists_0(t);
                                }
                              {
                                c_42 = t;
                                if(((b_42 != NULL) && (b_42 != c_42)))
                                  _fail(c_42);
                                else
                                  b_42 = c_42;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_H_2, not_null(a_41), not_null(b_42));
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
  ATerm w_2 (ATerm t)
  {
    ATerm n_15 = t;
    int o_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_15 = t;
        int w_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_43 = NULL,e_43 = NULL,f_43 = NULL,g_43 = NULL,h_43 = NULL;
            d_43 = t;
            n_42 :
            if(match_cons(d_43, sym_H_2))
              {
                e_43 = ATgetArgument(d_43, 0);
                f_43 = ATgetArgument(d_43, 1);
                z_42 :
                if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
                  {
                    g_43 = ATgetFirst((ATermList) f_43);
                    h_43 = (ATerm) ATgetNext((ATermList) f_43);
                    a_43 :
                    if(((ATgetType(h_43) == AT_LIST) && ATisEmpty(h_43)))
                      {
                        t = not_null(g_43);
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
                if(match_cons(d_43, sym_V_2))
                  {
                    e_43 = ATgetArgument(d_43, 0);
                    f_43 = ATgetArgument(d_43, 1);
                    b_43 :
                    if(((ATgetType(f_43) == AT_LIST) && !(ATisEmpty(f_43))))
                      {
                        g_43 = ATgetFirst((ATermList) f_43);
                        h_43 = (ATerm) ATgetNext((ATermList) f_43);
                        c_43 :
                        if(((ATgetType(h_43) == AT_LIST) && ATisEmpty(h_43)))
                          {
                            t = not_null(g_43);
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
            LocalPopChoice(w_15);
          }
        else
          {
            t = r_15;
            t = Distribute_0(t);
          }
        LocalPopChoice(o_15);
      }
    else
      {
        t = n_15;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, w_2);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm r_43 = NULL;
  t = normalize_0(t);
  {
    ATerm x_2 (ATerm t)
    {
      ATerm x_15 = t;
      int y_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Abox2html_0(t);
          LocalPopChoice(y_15);
        }
      else
        {
          t = x_15;
          {
          }
        }
      return(t);
    }
    t = topdown_1(t, x_2);
    {
      ATerm w_43 = NULL;
      w_43 = t;
      if(((r_43 != NULL) && (r_43 != w_43)))
        _fail(w_43);
      else
        r_43 = w_43;
      {
        t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(r_43))))));
        t = html2text_0(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm z_43 = NULL;
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_44 = NULL;
      b_44 = t;
      {
        if(((z_43 != NULL) && (z_43 != b_44)))
          _fail(b_44);
        else
          z_43 = b_44;
        t = SSL_ReadFromFile(not_null(z_43));
      }
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm y_2 (ATerm t)
        {
          t = term_b_16;
          return(t);
        }
        t = debug_1(t, y_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm f_44 = NULL;
  ATerm i_44 = NULL;
  f_44 = t;
  {
    ATerm e_16;
    e_16 = t;
    {
      ATerm j_44 = NULL;
      t = term_j_16;
      {
        j_44 = t;
        if(((i_44 != NULL) && (i_44 != j_44)))
          _fail(j_44);
        else
          i_44 = j_44;
      }
    }
    t = e_16;
    {
      t = SSL_open_file(not_null(f_44), not_null(i_44));
      t = SSL_close_file(not_null(f_44));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm r_44 = NULL,s_44 = NULL;
  r_44 = t;
  q_44 :
  if(match_cons(r_44, sym_stdin_0))
    {
      ATerm t_44 = NULL;
      ATerm u_44 = NULL;
      t = term_k_16;
      {
        t = ReadFromFile_0(t);
        {
          u_44 = t;
          if(((t_44 != NULL) && (t_44 != u_44)))
            _fail(u_44);
          else
            t_44 = u_44;
        }
      }
      t = not_null(t_44);
    }
  else
    {
      if(match_cons(r_44, sym_FILE_1))
        {
          s_44 = ATgetArgument(r_44, 0);
          {
            ATerm w_44 = NULL;
            ATerm x_44 = NULL;
            t = not_null(s_44);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  x_44 = t;
                  if(((w_44 != NULL) && (w_44 != x_44)))
                    _fail(x_44);
                  else
                    w_44 = x_44;
                }
              }
            }
            t = not_null(w_44);
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
  ATerm e_45 = NULL,f_45 = NULL,g_45 = NULL;
  e_45 = t;
  d_45 :
  if(match_cons(e_45, sym__2))
    {
      f_45 = ATgetArgument(e_45, 0);
      g_45 = ATgetArgument(e_45, 1);
      t = SSL_copy(not_null(f_45), not_null(g_45));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm o_45 = NULL;
  o_45 = t;
  n_45 :
  if(match_cons(o_45, sym_stderr_0))
    {
      ATerm q_45 = NULL,s_45 = NULL;
      ATerm l_16;
      l_16 = t;
      {
        ATerm r_45 = NULL;
        t = SSLgetAnnotations(not_null(o_45));
        {
          r_45 = t;
          if(((q_45 != NULL) && (q_45 != r_45)))
            _fail(r_45);
          else
            q_45 = r_45;
        }
      }
      t = l_16;
      {
        ATerm t_45 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(q_45));
        {
          t_45 = t;
          if(((s_45 != NULL) && (s_45 != t_45)))
            _fail(t_45);
          else
            s_45 = t_45;
        }
        t = not_null(s_45);
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
  ATerm b_46 = NULL;
  b_46 = t;
  a_46 :
  if(match_cons(b_46, sym_stdout_0))
    {
      ATerm d_46 = NULL,f_46 = NULL;
      ATerm m_16;
      m_16 = t;
      {
        ATerm e_46 = NULL;
        t = SSLgetAnnotations(not_null(b_46));
        {
          e_46 = t;
          if(((d_46 != NULL) && (d_46 != e_46)))
            _fail(e_46);
          else
            d_46 = e_46;
        }
      }
      t = m_16;
      {
        ATerm g_46 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(d_46));
        {
          g_46 = t;
          if(((f_46 != NULL) && (f_46 != g_46)))
            _fail(g_46);
          else
            f_46 = g_46;
        }
        t = not_null(f_46);
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
  ATerm u_46 = NULL,w_46 = NULL;
  u_46 = t;
  t_46 :
  if(match_cons(u_46, sym_FILE_1))
    {
      w_46 = ATgetArgument(u_46, 0);
      {
        ATerm o_16 = t;
        int p_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_46 = NULL;
            ATerm z_46 = NULL;
            t = m_0(t);
            {
              z_46 = t;
              {
                if(((y_46 != NULL) && (y_46 != z_46)))
                  _fail(z_46);
                else
                  y_46 = z_46;
                {
                  ATerm q_16 = t;
                  int v_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(v_16);
                    }
                  else
                    {
                      t = q_16;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_46), not_null(y_46));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_46));
            LocalPopChoice(p_16);
          }
        else
          {
            t = o_16;
            {
              ATerm w_16 = t;
              int z_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_47 = NULL;
                  ATerm c_47 = NULL;
                  t = m_0(t);
                  {
                    c_47 = t;
                    {
                      if(((b_47 != NULL) && (b_47 != c_47)))
                        _fail(c_47);
                      else
                        b_47 = c_47;
                      {
                        ATerm b_17 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm f_17 = t;
                            int g_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(g_17);
                              }
                            else
                              {
                                t = f_17;
                                {
                                  ATerm h_17 = t;
                                  int i_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(i_17);
                                    }
                                  else
                                    {
                                      t = h_17;
                                      {
                                        ATerm d_47 = NULL;
                                        d_47 = t;
                                        if(((w_46 != NULL) && (w_46 != d_47)))
                                          _fail(d_47);
                                        else
                                          w_46 = d_47;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = b_17;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_46), not_null(b_47));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_46));
                  LocalPopChoice(z_16);
                }
              else
                {
                  t = w_16;
                  {
                    ATerm f_47 = NULL;
                    t = m_0(t);
                    {
                      f_47 = t;
                      if(((w_46 != NULL) && (w_46 != f_47)))
                        _fail(f_47);
                      else
                        w_46 = f_47;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(w_46));
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
  ATerm t_47 = NULL,u_47 = NULL,v_47 = NULL;
  t_47 = t;
  q_47 :
  if(((ATgetType(t_47) == AT_LIST) && !(ATisEmpty(t_47))))
    {
      u_47 = ATgetFirst((ATermList) t_47);
      v_47 = (ATerm) ATgetNext((ATermList) t_47);
      t = not_null(v_47);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_pop_0 (ATerm t)
{
  ATerm l_48 = NULL,m_48 = NULL,n_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym__2))
    {
      m_48 = ATgetArgument(l_48, 0);
      n_48 = ATgetArgument(l_48, 1);
      {
        ATerm n_17;
        n_17 = t;
        {
          ATerm q_48 = NULL;
          ATerm r_48 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_48), not_null(n_48));
          {
            ATerm o_17 = t;
            int r_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(r_17);
              }
            else
              {
                t = o_17;
                t = (ATerm) ATempty;
              }
            {
              r_48 = t;
              if(((q_48 != NULL) && (q_48 != r_48)))
                _fail(r_48);
              else
                q_48 = r_48;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_48), not_null(n_48), not_null(q_48));
            t = table_put_0(t);
          }
        }
        t = n_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm p_85 (ATerm))
{
  ATerm c_49 = NULL,d_49 = NULL,e_49 = NULL;
  ATerm s_17;
  s_17 = t;
  {
    ATerm f_49 = NULL;
    ATerm g_49 = NULL,h_49 = NULL,i_49 = NULL;
    t = p_85(t);
    {
      f_49 = t;
      {
        if(((e_49 != NULL) && (e_49 != f_49)))
          _fail(f_49);
        else
          e_49 = f_49;
        {
          ATerm t_17 = t;
          int u_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_49), term_l_6);
              t = table_get_0(t);
              LocalPopChoice(u_17);
            }
          else
            {
              t = t_17;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            g_49 = t;
            b_49 :
            if(((ATgetType(g_49) == AT_LIST) && !(ATisEmpty(g_49))))
              {
                h_49 = ATgetFirst((ATermList) g_49);
                i_49 = (ATerm) ATgetNext((ATermList) g_49);
                {
                  if(((d_49 != NULL) && (d_49 != h_49)))
                    _fail(h_49);
                  else
                    d_49 = h_49;
                  {
                    if(((c_49 != NULL) && (c_49 != i_49)))
                      _fail(i_49);
                    else
                      c_49 = i_49;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(e_49), term_l_6, not_null(c_49));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(d_49);
                          {
                            ATerm z_2 (ATerm t)
                            {
                              ATerm j_49 = NULL;
                              j_49 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_49), not_null(j_49));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, z_2);
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
  t = s_17;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm q_49 = NULL;
  q_49 = t;
  t = SSL_remove(not_null(q_49));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm u_67 (ATerm), ATerm v_67 (ATerm))
{
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = u_67(t);
      t = v_67(t);
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        t = v_67(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm v_49 = NULL;
  ATerm z_17;
  z_17 = t;
  {
    ATerm w_49 = NULL;
    ATerm x_49 = NULL;
    t = o_85(t);
    {
      w_49 = t;
      {
        if(((v_49 != NULL) && (v_49 != w_49)))
          _fail(w_49);
        else
          v_49 = w_49;
        {
          ATerm y_49 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_49), term_l_6);
          {
            ATerm e_18 = t;
            int f_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(f_18);
              }
            else
              {
                t = e_18;
                t = (ATerm) ATempty;
              }
            {
              y_49 = t;
              if(((x_49 != NULL) && (x_49 != y_49)))
                _fail(y_49);
              else
                x_49 = y_49;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(v_49), term_l_6, (ATerm) ATinsert(CheckATermList(not_null(x_49)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = z_17;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm p_95 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL;
  ATerm a_3 (ATerm t)
  {
    t = term_c_7;
    return(t);
  }
  t = begin_scope_1(t, a_3);
  {
    ATerm b_3 (ATerm t)
    {
      ATerm g_18;
      g_18 = t;
      {
        ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
        ATerm h_18 = t;
        int i_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_j_18;
            t = table_get_0(t);
            LocalPopChoice(i_18);
          }
        else
          {
            t = h_18;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          f_50 = t;
          c_50 :
          if(((ATgetType(f_50) == AT_LIST) && !(ATisEmpty(f_50))))
            {
              g_50 = ATgetFirst((ATermList) f_50);
              h_50 = (ATerm) ATgetNext((ATermList) f_50);
              {
                if(((e_50 != NULL) && (e_50 != g_50)))
                  _fail(g_50);
                else
                  e_50 = g_50;
                {
                  if(((d_50 != NULL) && (d_50 != h_50)))
                    _fail(h_50);
                  else
                    d_50 = h_50;
                  {
                    t = not_null(e_50);
                    {
                      ATerm c_3 (ATerm t)
                      {
                        ATerm k_18 = t;
                        int p_18 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(p_18);
                          }
                        else
                          {
                            t = k_18;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, c_3);
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
      t = g_18;
      {
        ATerm d_3 (ATerm t)
        {
          t = term_c_7;
          return(t);
        }
        t = end_scope_1(t, d_3);
      }
      return(t);
    }
    t = restore_always_2(t, p_95, b_3);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    ATerm q_18 = t;
    int r_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_50 = NULL;
        ATerm l_50 = NULL;
        t = term_v_18;
        {
          t = get_config_0(t);
          {
            l_50 = t;
            if(((k_50 != NULL) && (k_50 != l_50)))
              _fail(l_50);
            else
              k_50 = l_50;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(k_50));
        LocalPopChoice(r_18);
      }
    else
      {
        t = q_18;
        t = term_k_16;
      }
    {
      t = q_95(t);
      {
        ATerm f_3 (ATerm t)
        {
          ATerm x_18 = t;
          int a_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_b_19;
              t = get_config_0(t);
              LocalPopChoice(a_19);
            }
          else
            {
              t = x_18;
              t = term_c_19;
            }
          return(t);
        }
        t = copy_to_1(t, f_3);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, e_3);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm o_50 = NULL;
    o_50 = t;
    n_50 :
    if(!(match_string(o_50, "-v")))
      {
        if(!(match_string(o_50, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_e_19;
    t = set_config_0(t);
    t = term_f_19;
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_g_19;
    return(t);
  }
  t = Option_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm w_50 = NULL;
    w_50 = t;
    u_50 :
    if(!(match_string(w_50, "-k")))
      {
        if(!(match_string(w_50, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm h_19;
    h_19 = t;
    {
      ATerm x_50 = NULL;
      ATerm y_50 = NULL;
      t = string_to_int_0(t);
      {
        y_50 = t;
        if(((x_50 != NULL) && (x_50 != y_50)))
          _fail(y_50);
        else
          x_50 = y_50;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_i_19, not_null(x_50));
        t = set_config_0(t);
      }
    }
    t = h_19;
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_j_19;
    return(t);
  }
  t = ArgOption_3(t, j_3, k_3, n_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm b_51 = NULL;
  b_51 = t;
  t = SSL_string_to_int(not_null(b_51));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm o_19 = t;
  int p_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_3 (ATerm t)
      {
        ATerm j_51 = NULL;
        j_51 = t;
        e_51 :
        if(!(match_string(j_51, "-S")))
          {
            if(!(match_string(j_51, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm p_3 (ATerm t)
      {
        t = term_q_19;
        t = set_config_0(t);
        t = term_u_19;
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        t = term_w_19;
        return(t);
      }
      t = Option_3(t, o_3, p_3, q_3);
      LocalPopChoice(p_19);
    }
  else
    {
      t = o_19;
      {
        ATerm z_19 = t;
        int a_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              ATerm k_51 = NULL;
              k_51 = t;
              f_51 :
              if(!(match_string(k_51, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm s_3 (ATerm t)
            {
              ATerm n_51 = NULL;
              ATerm b_20;
              b_20 = t;
              {
                ATerm l_51 = NULL;
                ATerm m_51 = NULL;
                t = string_to_int_0(t);
                {
                  m_51 = t;
                  if(((l_51 != NULL) && (l_51 != m_51)))
                    _fail(m_51);
                  else
                    l_51 = m_51;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_10, not_null(l_51));
                  t = set_config_0(t);
                }
              }
              t = b_20;
              {
                ATerm o_51 = NULL;
                o_51 = t;
                if(((n_51 != NULL) && (n_51 != o_51)))
                  _fail(o_51);
                else
                  n_51 = o_51;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(n_51));
              }
              return(t);
            }
            ATerm t_3 (ATerm t)
            {
              t = term_c_20;
              return(t);
            }
            t = ArgOption_3(t, r_3, s_3, t_3);
            LocalPopChoice(a_20);
          }
        else
          {
            t = z_19;
            {
              ATerm u_3 (ATerm t)
              {
                ATerm p_51 = NULL;
                p_51 = t;
                i_51 :
                if(!(match_string(p_51, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm v_3 (ATerm t)
              {
                t = term_e_20;
                t = set_config_0(t);
                t = term_f_20;
                return(t);
              }
              ATerm w_3 (ATerm t)
              {
                t = term_g_20;
                return(t);
              }
              t = Option_3(t, u_3, v_3, w_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_20 = t;
  int n_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(n_20);
    }
  else
    {
      t = m_20;
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm v_51 = NULL;
    v_51 = t;
    s_51 :
    if(!(match_string(v_51, "-o")))
      {
        if(!(match_string(v_51, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    ATerm y_51 = NULL;
    ATerm s_20;
    s_20 = t;
    {
      ATerm w_51 = NULL;
      ATerm x_51 = NULL;
      x_51 = t;
      if(((w_51 != NULL) && (w_51 != x_51)))
        _fail(x_51);
      else
        w_51 = x_51;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_b_19, not_null(w_51));
        t = set_config_0(t);
      }
    }
    t = s_20;
    {
      ATerm g_52 = NULL;
      g_52 = t;
      if(((y_51 != NULL) && (y_51 != g_52)))
        _fail(g_52);
      else
        y_51 = g_52;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_51));
    }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_u_20;
    return(t);
  }
  t = ArgOption_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_20 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(b_21);
    }
  else
    {
      t = v_20;
      {
        ATerm a_4 (ATerm t)
        {
          ATerm k_52 = NULL;
          k_52 = t;
          j_52 :
          if(!(match_string(k_52, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm b_4 (ATerm t)
        {
          t = term_d_21;
          t = set_config_0(t);
          t = term_e_21;
          return(t);
        }
        ATerm c_4 (ATerm t)
        {
          t = term_j_21;
          return(t);
        }
        t = Option_3(t, a_4, b_4, c_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_52 = NULL,r_52 = NULL,s_52 = NULL,t_52 = NULL,u_52 = NULL;
  q_52 = t;
  o_52 :
  if(match_string(q_52, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_52) == AT_LIST) && !(ATisEmpty(q_52))))
        {
          r_52 = ATgetFirst((ATermList) q_52);
          s_52 = (ATerm) ATgetNext((ATermList) q_52);
          p_52 :
          if(((ATgetType(s_52) == AT_LIST) && !(ATisEmpty(s_52))))
            {
              t_52 = ATgetFirst((ATermList) s_52);
              u_52 = (ATerm) ATgetNext((ATermList) s_52);
              {
                ATerm y_52 = NULL;
                ATerm k_21;
                k_21 = t;
                {
                  t = not_null(r_52);
                  t = j_0(t);
                }
                t = k_21;
                {
                  ATerm z_52 = NULL;
                  t = not_null(t_52);
                  {
                    t = k_0(t);
                    {
                      z_52 = t;
                      if(((y_52 != NULL) && (y_52 != z_52)))
                        _fail(z_52);
                      else
                        y_52 = z_52;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_52)), not_null(y_52));
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
  ATerm d_4 (ATerm t)
  {
    ATerm g_53 = NULL;
    g_53 = t;
    d_53 :
    if(!(match_string(g_53, "-i")))
      {
        if(!(match_string(g_53, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_4 (ATerm t)
  {
    ATerm j_53 = NULL;
    ATerm l_21;
    l_21 = t;
    {
      ATerm h_53 = NULL;
      ATerm i_53 = NULL;
      i_53 = t;
      if(((h_53 != NULL) && (h_53 != i_53)))
        _fail(i_53);
      else
        h_53 = i_53;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_18, not_null(h_53));
        t = set_config_0(t);
      }
    }
    t = l_21;
    {
      ATerm k_53 = NULL;
      k_53 = t;
      if(((j_53 != NULL) && (j_53 != k_53)))
        _fail(k_53);
      else
        j_53 = k_53;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(j_53));
    }
    return(t);
  }
  ATerm i_4 (ATerm t)
  {
    t = term_n_21;
    return(t);
  }
  t = ArgOption_3(t, d_4, e_4, i_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm p_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = p_21;
      {
        ATerm t_21 = t;
        int y_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(y_21);
          }
        else
          {
            t = t_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm p_53 = NULL;
  ATerm z_21;
  z_21 = t;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm q_53 = NULL,r_53 = NULL;
      q_53 = t;
      o_53 :
      if(match_cons(q_53, sym_Program_1))
        {
          r_53 = ATgetArgument(q_53, 0);
          if(((p_53 != NULL) && (p_53 != r_53)))
            _fail(r_53);
          else
            p_53 = r_53;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, j_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_22), not_null(p_53)), term_f_22));
      {
        t = printnl_0(t);
        {
          t = term_r_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_21;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATempty, term_l_22));
  {
    t = printnl_0(t);
    {
      t = term_r_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm u_53 = NULL;
  u_53 = t;
  t = SSL_TicksToSeconds(not_null(u_53));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm z_53 = NULL,a_54 = NULL,b_54 = NULL;
  z_53 = t;
  y_53 :
  if(match_cons(z_53, sym__2))
    {
      a_54 = ATgetArgument(z_53, 0);
      b_54 = ATgetArgument(z_53, 1);
      {
        ATerm m_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(a_54), not_null(b_54));
            LocalPopChoice(o_22);
          }
        else
          {
            t = m_22;
            t = SSL_addr(not_null(a_54), not_null(b_54));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm p_81 (ATerm), ATerm q_81 (ATerm))
{
  ATerm p_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_81(t);
      LocalPopChoice(q_22);
    }
  else
    {
      t = p_22;
      {
        ATerm i_54 = NULL,j_54 = NULL,k_54 = NULL;
        i_54 = t;
        h_54 :
        if(((ATgetType(i_54) == AT_LIST) && !(ATisEmpty(i_54))))
          {
            j_54 = ATgetFirst((ATermList) i_54);
            k_54 = (ATerm) ATgetNext((ATermList) i_54);
            {
              ATerm n_54 = NULL;
              ATerm o_54 = NULL;
              t = not_null(k_54);
              {
                t = foldr_2(t, p_81, q_81);
                {
                  o_54 = t;
                  if(((n_54 != NULL) && (n_54 != o_54)))
                    _fail(o_54);
                  else
                    n_54 = o_54;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(j_54), not_null(n_54));
                t = q_81(t);
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
ATerm crush_2 (ATerm t, ATerm n_80 (ATerm), ATerm o_80 (ATerm))
{
  ATerm v_54 = NULL;
  ATerm x_54 = NULL;
  v_54 = t;
  {
    ATerm y_54 = NULL;
    ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL;
    t = not_null(v_54);
    {
      y_54 = t;
      {
        t = SSL_explode_term(not_null(y_54));
        {
          a_55 = t;
          u_54 :
          if(match_cons(a_55, sym__2))
            {
              b_55 = ATgetArgument(a_55, 0);
              c_55 = ATgetArgument(a_55, 1);
              if(((x_54 != NULL) && (x_54 != c_55)))
                _fail(c_55);
              else
                x_54 = c_55;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(x_54);
      t = foldr_2(t, n_80, o_80);
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
    ATerm k_4 (ATerm t)
    {
      t = term_t_10;
      return(t);
    }
    t = crush_2(t, k_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm s_55 = NULL,t_55 = NULL,u_55 = NULL;
  s_55 = t;
  r_55 :
  if(match_cons(s_55, sym__2))
    {
      t_55 = ATgetArgument(s_55, 0);
      u_55 = ATgetArgument(s_55, 1);
      {
        ATerm s_22;
        s_22 = t;
        {
          ATerm t_22 = t;
          int u_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(t_55), not_null(u_55));
              LocalPopChoice(u_22);
            }
          else
            {
              t = t_22;
              t = SSL_gtr(not_null(t_55), not_null(u_55));
            }
        }
        t = s_22;
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
  ATerm a_56 = NULL;
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_56 = NULL,k_56 = NULL,l_56 = NULL;
      j_56 = t;
      z_55 :
      if(match_cons(j_56, sym__2))
        {
          k_56 = ATgetArgument(j_56, 0);
          l_56 = ATgetArgument(j_56, 1);
          {
            if(((a_56 != NULL) && (a_56 != k_56)))
              _fail(k_56);
            else
              a_56 = k_56;
            if(((a_56 != NULL) && (a_56 != l_56)))
              _fail(l_56);
            else
              a_56 = l_56;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm v_88 (ATerm))
{
  ATerm x_22 = t;
  int y_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_22;
      z_22 = t;
      {
        ATerm o_56 = NULL;
        ATerm q_56 = NULL;
        t = term_c_10;
        {
          t = get_config_0(t);
          {
            q_56 = t;
            if(((o_56 != NULL) && (o_56 != q_56)))
              _fail(q_56);
            else
              o_56 = q_56;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_56), term_r_9);
          t = geq_0(t);
        }
      }
      t = z_22;
      t = v_88(t);
      LocalPopChoice(y_22);
    }
  else
    {
      t = x_22;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm l_4 (ATerm t)
  {
    ATerm w_56 = NULL,y_56 = NULL;
    ATerm a_23;
    a_23 = t;
    {
      ATerm x_56 = NULL;
      t = run_time_0(t);
      {
        x_56 = t;
        if(((w_56 != NULL) && (w_56 != x_56)))
          _fail(x_56);
        else
          w_56 = x_56;
      }
    }
    t = a_23;
    {
      ATerm z_56 = NULL;
      t = term_b_23;
      {
        t = get_config_0(t);
        {
          z_56 = t;
          if(((y_56 != NULL) && (y_56 != z_56)))
            _fail(z_56);
          else
            y_56 = z_56;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_d_23), not_null(w_56)), term_c_23), not_null(y_56)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, l_4);
  {
    t = term_t_10;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm k_57 = NULL;
  k_57 = t;
  h_57 :
  if(match_cons(k_57, sym_Version_0))
    {
      ATerm m_57 = NULL,o_57 = NULL;
      ATerm e_23;
      e_23 = t;
      {
        ATerm n_57 = NULL;
        t = SSLgetAnnotations(not_null(k_57));
        {
          n_57 = t;
          if(((m_57 != NULL) && (m_57 != n_57)))
            _fail(n_57);
          else
            m_57 = n_57;
        }
      }
      t = e_23;
      {
        ATerm p_57 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(m_57));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm m_4 (ATerm t)
  {
    ATerm f_23 = t;
    int g_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_23);
      }
    else
      {
        t = f_23;
        {
          ATerm h_23 = t;
          int i_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(i_23);
            }
          else
            {
              t = h_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, m_4);
  t = b_87(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm u_57 = NULL;
  u_57 = t;
  t = SSL_table_create(not_null(u_57));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm y_57 = NULL;
  y_57 = t;
  {
    ATerm j_23;
    j_23 = t;
    {
      t = term_k_23;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_23, term_l_23, not_null(y_57));
          t = table_put_0(t);
        }
      }
    }
    t = j_23;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm c_58 = NULL;
  c_58 = t;
  t = SSL_table_destroy(not_null(c_58));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm g_58 = NULL;
  g_58 = t;
  t = SSL_exit(not_null(g_58));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm k_58 = NULL,l_58 = NULL,m_58 = NULL;
  k_58 = t;
  j_58 :
  if(((ATgetType(k_58) == AT_LIST) && ATisEmpty(k_58)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(k_58) == AT_LIST) && !(ATisEmpty(k_58))))
        {
          l_58 = ATgetFirst((ATermList) k_58);
          m_58 = (ATerm) ATgetNext((ATermList) k_58);
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
  ATerm m_23;
  m_23 = t;
  {
    ATerm p_58 = NULL;
    ATerm u_58 = NULL;
    ATerm n_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = n_23;
        {
          ATerm q_58 = NULL;
          ATerm t_58 = NULL;
          t_58 = t;
          if(((q_58 != NULL) && (q_58 != t_58)))
            _fail(t_58);
          else
            q_58 = t_58;
          t = (ATerm) ATinsert(ATempty, not_null(q_58));
        }
      }
    {
      u_58 = t;
      if(((p_58 != NULL) && (p_58 != u_58)))
        _fail(u_58);
      else
        p_58 = u_58;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_19, not_null(p_58));
      t = printnl_0(t);
    }
  }
  t = m_23;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm z_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL;
  f_59 = t;
  c_59 :
  if(((ATgetType(f_59) == AT_LIST) && !(ATisEmpty(f_59))))
    {
      d_59 = ATgetFirst((ATermList) f_59);
      e_59 = (ATerm) ATgetNext((ATermList) f_59);
      {
        ATerm i_59 = NULL;
        t = not_null(e_59);
        {
          ATerm p_23;
          p_23 = t;
          {
            ATerm j_59 = NULL,l_59 = NULL,n_59 = NULL;
            ATerm q_23;
            q_23 = t;
            {
              ATerm k_59 = NULL;
              t = i_0(t);
              {
                k_59 = t;
                if(((j_59 != NULL) && (j_59 != k_59)))
                  _fail(k_59);
                else
                  j_59 = k_59;
              }
            }
            t = q_23;
            {
              ATerm m_59 = NULL;
              t = not_null(d_59);
              {
                t = h_0(t);
                {
                  m_59 = t;
                  if(((l_59 != NULL) && (l_59 != m_59)))
                    _fail(m_59);
                  else
                    l_59 = m_59;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(j_59)), not_null(l_59));
                {
                  n_59 = t;
                  if(((i_59 != NULL) && (i_59 != n_59)))
                    _fail(n_59);
                  else
                    i_59 = n_59;
                }
              }
            }
          }
          t = p_23;
          {
            ATerm n_4 (ATerm t)
            {
              t = not_null(i_59);
              return(t);
            }
            t = reverse_acc_2(t, h_0, n_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(f_59) == AT_LIST) && ATisEmpty(f_59)))
        {
          {
            t = term_t_6;
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
  ATerm v_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_90 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_64 (ATerm))
{
  ATerm y_59 = NULL,z_59 = NULL;
  y_59 = t;
  x_59 :
  if(match_cons(y_59, sym_Program_1))
    {
      z_59 = ATgetArgument(y_59, 0);
      {
        ATerm c_60 = NULL,e_60 = NULL;
        ATerm d_60 = NULL;
        t = SSLgetAnnotations(not_null(y_59));
        {
          d_60 = t;
          if(((c_60 != NULL) && (c_60 != d_60)))
            _fail(d_60);
          else
            c_60 = d_60;
        }
        {
          t = not_null(z_59);
          {
            ATerm g_60 = NULL;
            t = m_64(t);
            {
              e_60 = t;
              {
                ATerm h_60 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(e_60)), not_null(c_60));
                {
                  h_60 = t;
                  if(((g_60 != NULL) && (g_60 != h_60)))
                    _fail(h_60);
                  else
                    g_60 = h_60;
                }
                t = not_null(g_60);
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
  ATerm p_60 = NULL;
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_60 = NULL;
      t = term_b_23;
      {
        t = get_config_0(t);
        {
          q_60 = t;
          if(((p_60 != NULL) && (p_60 != q_60)))
            _fail(q_60);
          else
            p_60 = q_60;
        }
      }
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm w_4 (ATerm t)
        {
          ATerm x_4 (ATerm t)
          {
            ATerm r_60 = NULL;
            r_60 = t;
            if(((p_60 != NULL) && (p_60 != r_60)))
              _fail(r_60);
            else
              p_60 = r_60;
            return(t);
          }
          t = Program_1(t, x_4);
          return(t);
        }
        t = fetch_1(t, w_4);
      }
    }
  {
    t = term_t_23;
    {
      t = echo_0(t);
      {
        t = term_w_23;
        {
          t = table_get_0(t);
          {
            ATerm y_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, y_4);
            {
              ATerm a_5 (ATerm t)
              {
                ATerm s_60 = NULL;
                ATerm t_60 = NULL;
                t_60 = t;
                if(((s_60 != NULL) && (s_60 != t_60)))
                  _fail(t_60);
                else
                  s_60 = t_60;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(s_60)), term_x_23);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, a_5);
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
  ATerm y_23;
  y_23 = t;
  {
    ATerm y_60 = NULL;
    ATerm z_60 = NULL;
    z_60 = t;
    if(((y_60 != NULL) && (y_60 != z_60)))
      _fail(z_60);
    else
      y_60 = z_60;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATempty, not_null(y_60)));
      t = printnl_0(t);
    }
  }
  t = y_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm z_23;
  z_23 = t;
  {
    t = a_86(t);
    t = debug_0(t);
  }
  t = z_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_64 (ATerm))
{
  ATerm g_61 = NULL,h_61 = NULL;
  g_61 = t;
  f_61 :
  if(match_cons(g_61, sym_Undefined_1))
    {
      h_61 = ATgetArgument(g_61, 0);
      {
        ATerm k_61 = NULL,m_61 = NULL;
        ATerm l_61 = NULL;
        t = SSLgetAnnotations(not_null(g_61));
        {
          l_61 = t;
          if(((k_61 != NULL) && (k_61 != l_61)))
            _fail(l_61);
          else
            k_61 = l_61;
        }
        {
          t = not_null(h_61);
          {
            ATerm o_61 = NULL;
            t = n_64(t);
            {
              m_61 = t;
              {
                ATerm p_61 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(m_61)), not_null(k_61));
                {
                  p_61 = t;
                  if(((o_61 != NULL) && (o_61 != p_61)))
                    _fail(p_61);
                  else
                    o_61 = p_61;
                }
                t = not_null(o_61);
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
ATerm fetch_1 (ATerm t, ATerm k_75 (ATerm))
{
  ATerm u_61 (ATerm t)
  {
    ATerm a_24 = t;
    int b_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_75, _id);
        LocalPopChoice(b_24);
      }
    else
      {
        t = a_24;
        t = Cons_2(t, _id, u_61);
      }
    return(t);
  }
  t = u_61(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm y_89 (ATerm))
{
  t = fetch_1(t, y_89);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm z_61 = NULL;
  z_61 = t;
  y_61 :
  if(match_cons(z_61, sym_Help_0))
    {
      ATerm b_62 = NULL,d_62 = NULL;
      ATerm c_24;
      c_24 = t;
      {
        ATerm c_62 = NULL;
        t = SSLgetAnnotations(not_null(z_61));
        {
          c_62 = t;
          if(((b_62 != NULL) && (b_62 != c_62)))
            _fail(c_62);
          else
            b_62 = c_62;
        }
      }
      t = c_24;
      {
        ATerm e_62 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(b_62));
        {
          e_62 = t;
          if(((d_62 != NULL) && (d_62 != e_62)))
            _fail(e_62);
          else
            d_62 = e_62;
        }
        t = not_null(d_62);
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
  ATerm j_62 = NULL;
  j_62 = t;
  t = SSL_implode_string(not_null(j_62));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm d_24 = t;
  int e_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_24);
    }
  else
    {
      t = d_24;
      {
        ATerm o_62 = NULL,p_62 = NULL,q_62 = NULL;
        o_62 = t;
        n_62 :
        if(((ATgetType(o_62) == AT_LIST) && !(ATisEmpty(o_62))))
          {
            p_62 = ATgetFirst((ATermList) o_62);
            q_62 = (ATerm) ATgetNext((ATermList) o_62);
            {
              t = not_null(p_62);
              {
                ATerm b_5 (ATerm t)
                {
                  t = not_null(q_62);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_5);
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
  ATerm a_63 = NULL;
  ATerm c_63 = NULL;
  a_63 = t;
  {
    ATerm d_63 = NULL;
    ATerm f_63 = NULL,g_63 = NULL,h_63 = NULL;
    t = not_null(a_63);
    {
      d_63 = t;
      {
        t = SSL_explode_term(not_null(d_63));
        {
          f_63 = t;
          y_62 :
          if(match_cons(f_63, sym__2))
            {
              g_63 = ATgetArgument(f_63, 0);
              h_63 = ATgetArgument(f_63, 1);
              z_62 :
              if(match_string(g_63, ""))
                {
                  if(((c_63 != NULL) && (c_63 != h_63)))
                    _fail(h_63);
                  else
                    c_63 = h_63;
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
      t = not_null(c_63);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_75 (ATerm))
{
  ATerm l_63 (ATerm t)
  {
    ATerm f_24 = t;
    int g_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, l_63);
        LocalPopChoice(g_24);
      }
    else
      {
        t = f_24;
        {
          t = Nil_0(t);
          t = q_75(t);
        }
      }
    return(t);
  }
  t = l_63(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  o_63 = t;
  n_63 :
  if(match_cons(o_63, sym__2))
    {
      p_63 = ATgetArgument(o_63, 0);
      q_63 = ATgetArgument(o_63, 1);
      {
        t = not_null(p_63);
        {
          ATerm k_5 (ATerm t)
          {
            t = not_null(q_63);
            return(t);
          }
          t = at_end_1(t, k_5);
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
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm v_63 = NULL;
  v_63 = t;
  t = SSL_explode_string(not_null(v_63));
  return(t);
}
ATerm _2 (ATerm t, ATerm i_57 (ATerm), ATerm j_57 (ATerm))
{
  ATerm e_64 = NULL,f_64 = NULL,g_64 = NULL;
  e_64 = t;
  d_64 :
  if(match_cons(e_64, sym__2))
    {
      f_64 = ATgetArgument(e_64, 0);
      g_64 = ATgetArgument(e_64, 1);
      {
        ATerm k_64 = NULL,o_64 = NULL;
        ATerm l_64 = NULL;
        t = SSLgetAnnotations(not_null(e_64));
        {
          l_64 = t;
          if(((k_64 != NULL) && (k_64 != l_64)))
            _fail(l_64);
          else
            k_64 = l_64;
        }
        {
          t = not_null(f_64);
          {
            ATerm q_64 = NULL;
            t = i_57(t);
            {
              o_64 = t;
              {
                t = not_null(g_64);
                {
                  ATerm s_64 = NULL;
                  t = j_57(t);
                  {
                    q_64 = t;
                    {
                      ATerm t_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_64), not_null(q_64)), not_null(k_64));
                      {
                        t_64 = t;
                        if(((s_64 != NULL) && (s_64 != t_64)))
                          _fail(t_64);
                        else
                          s_64 = t_64;
                      }
                      t = not_null(s_64);
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
    ATerm j_24 = t;
    int k_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(k_24);
      }
    else
      {
        t = j_24;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL;
  b_65 = t;
  a_65 :
  if(match_cons(b_65, sym__2))
    {
      c_65 = ATgetArgument(b_65, 0);
      d_65 = ATgetArgument(b_65, 1);
      {
        ATerm l_24;
        l_24 = t;
        t = SSL_printnl(not_null(c_65), not_null(d_65));
        t = l_24;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm m_24;
  m_24 = t;
  {
    ATerm j_65 = NULL,p_65 = NULL;
    ATerm n_24;
    n_24 = t;
    {
      ATerm k_65 = NULL;
      t = z_85(t);
      {
        k_65 = t;
        if(((j_65 != NULL) && (j_65 != k_65)))
          _fail(k_65);
        else
          j_65 = k_65;
      }
    }
    t = n_24;
    {
      ATerm q_65 = NULL;
      q_65 = t;
      if(((p_65 != NULL) && (p_65 != q_65)))
        _fail(q_65);
      else
        p_65 = q_65;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_e_22, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_65)), not_null(j_65)));
        t = printnl_0(t);
      }
    }
  }
  t = m_24;
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm t_65 (ATerm t)
  {
    ATerm o_24 = t;
    int p_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(p_24);
      }
    else
      {
        t = o_24;
        t = Cons_2(t, b_75, t_65);
      }
    return(t);
  }
  t = t_65(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm v_65 = NULL;
  v_65 = t;
  t = SSL_is_string(not_null(v_65));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm q_24 = t;
  int r_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(r_24);
    }
  else
    {
      t = q_24;
      {
        ATerm s_24 = t;
        int t_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_5 (ATerm t)
            {
              ATerm u_24 = t;
              int v_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(v_24);
                }
              else
                {
                  t = u_24;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, l_5);
            LocalPopChoice(t_24);
          }
        else
          {
            t = s_24;
            {
              ATerm e_66 = NULL,h_66 = NULL,i_66 = NULL;
              e_66 = t;
              d_66 :
              if(match_cons(e_66, sym_Path_1))
                {
                  h_66 = ATgetArgument(e_66, 0);
                  t = not_null(h_66);
                }
              else
                {
                  if(match_cons(e_66, sym_Var_1))
                    {
                      h_66 = ATgetArgument(e_66, 0);
                      {
                        t = not_null(h_66);
                        {
                          ATerm w_24 = t;
                          int x_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_24);
                            }
                          else
                            {
                              t = w_24;
                              {
                                ATerm m_5 (ATerm t)
                                {
                                  t = term_y_24;
                                  return(t);
                                }
                                t = debug_1(t, m_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(e_66, sym_Prefix_2))
                        {
                          h_66 = ATgetArgument(e_66, 0);
                          i_66 = ATgetArgument(e_66, 1);
                          {
                            ATerm n_66 = NULL,p_66 = NULL;
                            ATerm z_24;
                            z_24 = t;
                            {
                              ATerm o_66 = NULL;
                              t = not_null(h_66);
                              {
                                t = eval_config_0(t);
                                {
                                  o_66 = t;
                                  if(((n_66 != NULL) && (n_66 != o_66)))
                                    _fail(o_66);
                                  else
                                    n_66 = o_66;
                                }
                              }
                            }
                            t = z_24;
                            {
                              ATerm q_66 = NULL;
                              t = not_null(i_66);
                              {
                                t = eval_config_0(t);
                                {
                                  q_66 = t;
                                  if(((p_66 != NULL) && (p_66 != q_66)))
                                    _fail(q_66);
                                  else
                                    p_66 = q_66;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_66), not_null(p_66));
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
  ATerm a_67 = NULL;
  a_67 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_25, not_null(a_67));
    {
      t = table_get_0(t);
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm d_25;
              d_25 = t;
              {
                ATerm c_67 = NULL;
                ATerm d_67 = NULL;
                d_67 = t;
                if(((c_67 != NULL) && (c_67 != d_67)))
                  _fail(d_67);
                else
                  c_67 = d_67;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_25, not_null(a_67), not_null(c_67));
                  t = table_put_0(t);
                }
              }
              t = d_25;
            }
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_67 (ATerm))
{
  ATerm e_25 = t;
  int f_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_67(t);
      LocalPopChoice(f_25);
    }
  else
    {
      t = e_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm o_67 = NULL,p_67 = NULL,q_67 = NULL;
  o_67 = t;
  n_67 :
  if(match_cons(o_67, sym__2))
    {
      p_67 = ATgetArgument(o_67, 0);
      q_67 = ATgetArgument(o_67, 1);
      t = SSL_table_get(not_null(p_67), not_null(q_67));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL;
  z_67 = t;
  y_67 :
  if(match_cons(z_67, sym__3))
    {
      a_68 = ATgetArgument(z_67, 0);
      b_68 = ATgetArgument(z_67, 1);
      c_68 = ATgetArgument(z_67, 2);
      {
        ATerm g_25;
        g_25 = t;
        {
          ATerm g_68 = NULL;
          ATerm h_68 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_68), not_null(b_68));
          {
            ATerm h_25 = t;
            int i_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(i_25);
              }
            else
              {
                t = h_25;
                t = (ATerm) ATempty;
              }
            {
              h_68 = t;
              if(((g_68 != NULL) && (g_68 != h_68)))
                _fail(h_68);
              else
                g_68 = h_68;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_68), not_null(b_68), (ATerm) ATinsert(CheckATermList(not_null(g_68)), not_null(c_68)));
            t = table_put_0(t);
          }
        }
        t = g_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_91 (ATerm))
{
  ATerm l_68 = NULL;
  ATerm m_68 = NULL;
  t = term_t_6;
  {
    t = d_91(t);
    {
      m_68 = t;
      if(((l_68 != NULL) && (l_68 != m_68)))
        _fail(m_68);
      else
        l_68 = m_68;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_u_23, term_v_23, not_null(l_68));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm a_69 = NULL,b_69 = NULL,c_69 = NULL;
  a_69 = t;
  x_68 :
  if(match_string(a_69, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(a_69) == AT_LIST) && !(ATisEmpty(a_69))))
        {
          b_69 = ATgetFirst((ATermList) a_69);
          c_69 = (ATerm) ATgetNext((ATermList) a_69);
          {
            ATerm f_69 = NULL;
            ATerm j_25;
            j_25 = t;
            {
              t = not_null(b_69);
              t = a_0(t);
            }
            t = j_25;
            {
              ATerm g_69 = NULL;
              t = term_t_6;
              {
                t = d_0(t);
                {
                  g_69 = t;
                  if(((f_69 != NULL) && (f_69 != g_69)))
                    _fail(g_69);
                  else
                    f_69 = g_69;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_69)), not_null(f_69));
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
  ATerm n_5 (ATerm t)
  {
    ATerm l_69 = NULL;
    l_69 = t;
    k_69 :
    if(!(match_string(l_69, "--help")))
      {
        if(!(match_string(l_69, "-h")))
          {
            if(!(match_string(l_69, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_l_25;
    {
      t = set_config_0(t);
      t = term_m_25;
    }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = term_n_25;
    return(t);
  }
  t = Option_3(t, n_5, r_5, s_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm o_69 = NULL,p_69 = NULL,q_69 = NULL;
  o_69 = t;
  n_69 :
  if(((ATgetType(o_69) == AT_LIST) && !(ATisEmpty(o_69))))
    {
      p_69 = ATgetFirst((ATermList) o_69);
      q_69 = (ATerm) ATgetNext((ATermList) o_69);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_69)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(p_69)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_58 (ATerm), ATerm s_58 (ATerm))
{
  ATerm a_70 = NULL,b_70 = NULL,c_70 = NULL;
  a_70 = t;
  z_69 :
  if(((ATgetType(a_70) == AT_LIST) && !(ATisEmpty(a_70))))
    {
      b_70 = ATgetFirst((ATermList) a_70);
      c_70 = (ATerm) ATgetNext((ATermList) a_70);
      {
        ATerm g_70 = NULL,i_70 = NULL;
        ATerm h_70 = NULL;
        t = SSLgetAnnotations(not_null(a_70));
        {
          h_70 = t;
          if(((g_70 != NULL) && (g_70 != h_70)))
            _fail(h_70);
          else
            g_70 = h_70;
        }
        {
          t = not_null(b_70);
          {
            ATerm k_70 = NULL;
            t = r_58(t);
            {
              i_70 = t;
              {
                t = not_null(c_70);
                {
                  ATerm m_70 = NULL;
                  t = s_58(t);
                  {
                    k_70 = t;
                    {
                      ATerm n_70 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(k_70)), not_null(i_70)), not_null(g_70));
                      {
                        n_70 = t;
                        if(((m_70 != NULL) && (m_70 != n_70)))
                          _fail(n_70);
                        else
                          m_70 = n_70;
                      }
                      t = not_null(m_70);
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
  ATerm z_70 = NULL;
  z_70 = t;
  y_70 :
  if(((ATgetType(z_70) == AT_LIST) && ATisEmpty(z_70)))
    {
      {
        ATerm b_71 = NULL,d_71 = NULL;
        ATerm o_25;
        o_25 = t;
        {
          ATerm c_71 = NULL;
          t = SSLgetAnnotations(not_null(z_70));
          {
            c_71 = t;
            if(((b_71 != NULL) && (b_71 != c_71)))
              _fail(c_71);
            else
              b_71 = c_71;
          }
        }
        t = o_25;
        {
          ATerm e_71 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_71));
          {
            e_71 = t;
            if(((d_71 != NULL) && (d_71 != e_71)))
              _fail(e_71);
            else
              d_71 = e_71;
          }
          t = not_null(d_71);
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
  ATerm k_71 = NULL,l_71 = NULL,m_71 = NULL;
  k_71 = t;
  j_71 :
  if(match_cons(k_71, sym__2))
    {
      l_71 = ATgetArgument(k_71, 0);
      m_71 = ATgetArgument(k_71, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_25, not_null(l_71), not_null(m_71));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_91 (ATerm))
{
  ATerm p_25;
  p_25 = t;
  {
    ATerm u_25 = t;
    int v_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_w_25;
        t = b_91(t);
        LocalPopChoice(v_25);
      }
    else
      {
        t = u_25;
        {
        }
      }
  }
  t = p_25;
  {
    ATerm u_5 (ATerm t)
    {
      ATerm u_71 = NULL;
      ATerm a_26;
      a_26 = t;
      {
        ATerm s_71 = NULL;
        ATerm t_71 = NULL;
        t_71 = t;
        if(((s_71 != NULL) && (s_71 != t_71)))
          _fail(t_71);
        else
          s_71 = t_71;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_b_23, not_null(s_71));
          t = set_config_0(t);
        }
      }
      t = a_26;
      {
        ATerm v_71 = NULL;
        v_71 = t;
        if(((u_71 != NULL) && (u_71 != v_71)))
          _fail(v_71);
        else
          u_71 = v_71;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_71));
      }
      return(t);
    }
    ATerm v_5 (ATerm t)
    {
      ATerm c_26 = t;
      int f_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_26 = t;
          int h_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_26);
            }
          else
            {
              t = g_26;
              {
                t = b_91(t);
                t = Cons_2(t, _id, v_5);
              }
            }
          LocalPopChoice(f_26);
        }
      else
        {
          t = c_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, u_5, v_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm b_72 = NULL,c_72 = NULL,d_72 = NULL;
  ATerm i_26;
  i_26 = t;
  {
    ATerm e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
    e_72 = t;
    a_72 :
    if(match_cons(e_72, sym__3))
      {
        f_72 = ATgetArgument(e_72, 0);
        g_72 = ATgetArgument(e_72, 1);
        h_72 = ATgetArgument(e_72, 2);
        {
          if(((b_72 != NULL) && (b_72 != f_72)))
            _fail(f_72);
          else
            b_72 = f_72;
          {
            if(((c_72 != NULL) && (c_72 != g_72)))
              _fail(g_72);
            else
              c_72 = g_72;
            {
              if(((d_72 != NULL) && (d_72 != h_72)))
                _fail(h_72);
              else
                d_72 = h_72;
              t = SSL_table_put(not_null(b_72), not_null(c_72), not_null(d_72));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_91 (ATerm))
{
  ATerm k_72 = NULL;
  ATerm j_26;
  j_26 = t;
  {
    t = term_k_26;
    t = table_put_0(t);
  }
  t = j_26;
  {
    ATerm w_5 (ATerm t)
    {
      ATerm m_26 = t;
      int n_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_91(t);
          LocalPopChoice(n_26);
        }
      else
        {
          t = m_26;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, w_5);
    {
      ATerm p_26 = t;
      int q_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_26;
          r_26 = t;
          {
            ATerm s_26 = t;
            int t_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_k_25;
                t = get_config_0(t);
                LocalPopChoice(t_26);
              }
            else
              {
                t = s_26;
                t = fetch_1(t, Help_0);
              }
          }
          t = r_26;
          {
            t = system_usage_0(t);
            {
              t = term_t_10;
              t = exit_0(t);
            }
          }
          LocalPopChoice(q_26);
        }
      else
        {
          t = p_26;
          {
            ATerm u_26 = t;
            int x_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm x_5 (ATerm t)
                {
                  ATerm y_5 (ATerm t)
                  {
                    ATerm l_72 = NULL;
                    l_72 = t;
                    if(((k_72 != NULL) && (k_72 != l_72)))
                      _fail(l_72);
                    else
                      k_72 = l_72;
                    return(t);
                  }
                  t = Undefined_1(t, y_5);
                  return(t);
                }
                t = fetch_1(t, x_5);
                {
                  ATerm a_6 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_72)), term_z_26);
                    return(t);
                  }
                  t = say_1(t, a_6);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_r_9;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(x_26);
              }
            else
              {
                t = u_26;
                {
                }
              }
          }
        }
      {
        ATerm a_27;
        a_27 = t;
        {
          t = term_u_23;
          t = table_destroy_0(t);
        }
        t = a_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_87 (ATerm), ATerm i_87 (ATerm), ATerm j_87 (ATerm), ATerm k_87 (ATerm))
{
  t = parse_options_1(t, h_87);
  {
    t = store_options_0(t);
    {
      t = j_87(t);
      {
        ATerm c_27 = t;
        int h_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_87);
            LocalPopChoice(h_27);
          }
        else
          {
            t = c_27;
            {
              ATerm i_27 = t;
              int j_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_87(t);
                  t = report_success_0(t);
                  LocalPopChoice(j_27);
                }
              else
                {
                  t = i_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm l_87 (ATerm), ATerm m_87 (ATerm))
{
  t = option_wrap_4(t, l_87, default_usage_0, _id, m_87);
  return(t);
}
ATerm xtc_io_wrap_2 (ATerm t, ATerm u_95 (ATerm), ATerm v_95 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm k_27 = t;
    int l_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_95(t);
        LocalPopChoice(l_27);
      }
    else
      {
        t = k_27;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm g_6 (ATerm t)
  {
    t = xtc_io_1(t, v_95);
    return(t);
  }
  t = option_wrap_2(t, f_6, g_6);
  return(t);
}
ATerm xtc_io_wrap_1 (ATerm t, ATerm t_95 (ATerm))
{
  t = xtc_io_wrap_2(t, _fail, t_95);
  return(t);
}
ATerm io_Abox_2_html_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    t = read_from_0(t);
    {
      t = abox2html_0(t);
      t = topdown_print_to_0(t);
    }
    return(t);
  }
  t = xtc_io_wrap_2(t, _fail, h_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Abox_2_html_0(t);
  return(t);
}
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
ATerm term_q_24;
ATerm term_g_24;
ATerm term_y_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_i_23;
ATerm term_g_23;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_v_20;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_b_20;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_t_19;
ATerm term_s_19;
ATerm term_i_19;
ATerm term_d_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_y_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_s_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_j_17;
ATerm term_c_17;
ATerm term_w_16;
ATerm term_u_16;
ATerm term_f_16;
ATerm term_g_15;
ATerm term_f_15;
ATerm term_s_14;
ATerm term_m_14;
ATerm term_c_14;
ATerm term_x_13;
ATerm term_v_13;
ATerm term_r_13;
ATerm term_z_12;
ATerm term_y_12;
ATerm term_v_12;
ATerm term_s_11;
ATerm term_j_11;
ATerm term_a_11;
ATerm term_y_10;
ATerm term_x_10;
ATerm term_v_10;
ATerm term_f_10;
ATerm term_t_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_j_8;
ATerm term_c_8;
ATerm term_b_8;
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
ATerm term_d_6;
ATerm term_y_5;
ATerm term_x_5;
ATerm term_w_5;
void init_constant_terms (void)
{
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_5));
  term_y_5 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_l_6));
  term_l_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
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
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_c_8));
  term_c_8 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_11));
  term_j_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_v_13));
  term_v_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_f_15));
  term_f_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_u_16));
  term_u_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_a_11);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(sym__2, term_h_6, term_d_6);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_6);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(sym__2, term_z_18, term_a_11);
  ATprotect(&(term_d_19));
  term_d_19 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_s_19));
  term_s_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_a_11);
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_m_21);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__2, term_q_23, term_a_11);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(sym__3, term_l_21, term_m_21, (ATerm) ATempty);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_82 (ATerm), ATerm r_82 (ATerm));
ATerm crush_2 (ATerm, ATerm o_81 (ATerm), ATerm p_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_89 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm f_84 (ATerm), ATerm g_84 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm l_68 (ATerm));
ATerm topdown_1 (ATerm, ATerm z_69 (ATerm));
ATerm Html2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm a_70 (ATerm));
ATerm html2text_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm p_71 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm j_77 (ATerm));
ATerm html_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm e_96 (ATerm));
ATerm make_html_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm sep_by_1 (ATerm, ATerm h_68 (ATerm));
ATerm filter_1 (ATerm, ATerm t_83 (ATerm));
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm x_89 (ATerm));
ATerm dissuader_1 (ATerm, ATerm i_87 (ATerm));
ATerm separate_by_1 (ATerm, ATerm y_75 (ATerm));
ATerm LNAT_2 (ATerm, ATerm v_0 (ATerm), ATerm w_0 (ATerm));
ATerm L_2 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm));
ATerm tov_1 (ATerm, ATerm g_68 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm q_69 (ATerm), ATerm r_69 (ATerm));
ATerm for_3 (ATerm, ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm v_69 (ATerm));
ATerm copy_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm AC_1 (ATerm, ATerm q_0 (ATerm));
ATerm AR_1 (ATerm, ATerm p_0 (ATerm));
ATerm AL_1 (ATerm, ATerm o_0 (ATerm));
ATerm aopt_0 (ATerm);
ATerm make_hs_0 (ATerm);
ATerm toa_1 (ATerm, ATerm j_68 (ATerm));
ATerm R_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2html_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm c_77 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm v_76 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm o_76 (ATerm));
ATerm Distribute_0 (ATerm);
ATerm normalize_0 (ATerm);
ATerm abox2html_0 (ATerm);
ATerm _2 (ATerm, ATerm u_56 (ATerm), ATerm v_56 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm obsolete_1 (ATerm, ATerm h_87 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm l_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm z_90 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm c_88 (ATerm));
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
ATerm long_description_1 (ATerm, ATerm a_92 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm z_91 (ATerm));
ATerm Program_1 (ATerm, ATerm y_63 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm b_87 (ATerm));
ATerm Undefined_1 (ATerm, ATerm z_63 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm a_87 (ATerm));
ATerm map_1 (ATerm, ATerm c_76 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm e_92 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_58 (ATerm), ATerm e_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm c_92 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm b_92 (ATerm));
ATerm Abox_2_html_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATempty, term_x_5));
  {
    t = printnl_0(t);
    {
      t = term_y_5;
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
        ATerm z_5 = t;
        int a_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_1), not_null(s_1));
            LocalPopChoice(a_6);
          }
        else
          {
            t = z_5;
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
ATerm foldr_2 (ATerm t, ATerm q_82 (ATerm), ATerm r_82 (ATerm))
{
  ATerm b_6 = t;
  int c_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_82(t);
      LocalPopChoice(c_6);
    }
  else
    {
      t = b_6;
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
                t = foldr_2(t, q_82, r_82);
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
                t = r_82(t);
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
ATerm crush_2 (ATerm t, ATerm o_81 (ATerm), ATerm p_81 (ATerm))
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
      t = foldr_2(t, o_81, p_81);
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
      t = term_d_6;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_89 (ATerm))
{
  ATerm e_6 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_6;
      g_6 = t;
      {
        ATerm r_8 = NULL;
        ATerm s_8 = NULL;
        t = term_h_6;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), term_y_5);
          t = geq_0(t);
        }
      }
      t = g_6;
      t = w_89(t);
      LocalPopChoice(f_6);
    }
  else
    {
      t = e_6;
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
    ATerm i_6;
    i_6 = t;
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
    t = i_6;
    {
      ATerm c_9 = NULL;
      t = term_j_6;
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
        t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_l_6), not_null(z_8)), term_k_6), not_null(b_9)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_0);
  {
    t = term_d_6;
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
        ATerm m_6;
        m_6 = t;
        t = SSL_print(not_null(i_9), not_null(j_9));
        t = m_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm f_84 (ATerm), ATerm g_84 (ATerm))
{
  ATerm p_9 = NULL,r_9 = NULL;
  ATerm n_6;
  n_6 = t;
  {
    ATerm q_9 = NULL;
    t = f_84(t);
    {
      q_9 = t;
      if(((p_9 != NULL) && (p_9 != q_9)))
        _fail(q_9);
      else
        p_9 = q_9;
    }
  }
  t = n_6;
  {
    ATerm s_9 = NULL;
    t = g_84(t);
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
ATerm try_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm o_6 = t;
  int p_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = l_68(t);
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
ATerm topdown_1 (ATerm t, ATerm z_69 (ATerm))
{
  t = z_69(t);
  {
    ATerm f_0 (ATerm t)
    {
      t = topdown_1(t, z_69);
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
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_6), not_null(n_10)), term_r_6), not_null(o_10)), term_q_6);
    }
  else
    {
      if(match_cons(p_10, sym_TR_2))
        {
          o_10 = ATgetArgument(p_10, 0);
          n_10 = ATgetArgument(p_10, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_u_6), not_null(n_10)), term_r_6), not_null(o_10)), term_t_6);
        }
      else
        {
          if(match_cons(p_10, sym_TD_2))
            {
              o_10 = ATgetArgument(p_10, 0);
              n_10 = ATgetArgument(p_10, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_6), not_null(n_10)), term_r_6), not_null(o_10)), term_v_6);
            }
          else
            {
              if(match_cons(p_10, sym_TD_p__1))
                {
                  o_10 = ATgetArgument(p_10, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_6), not_null(o_10)), term_w_6);
                }
              else
                {
                  if(match_cons(p_10, sym_SPAN_2))
                    {
                      o_10 = ATgetArgument(p_10, 0);
                      n_10 = ATgetArgument(p_10, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_6), not_null(n_10)), term_r_6), not_null(o_10)), term_y_6);
                    }
                  else
                    {
                      if(match_cons(p_10, sym_PRE_1))
                        {
                          o_10 = ATgetArgument(p_10, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_7), not_null(o_10)), term_a_7);
                        }
                      else
                        {
                          if(match_cons(p_10, sym_TDTR_1))
                            {
                              o_10 = ATgetArgument(p_10, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_7), not_null(o_10)), term_c_7);
                            }
                          else
                            {
                              if(match_cons(p_10, sym_HREF_2))
                                {
                                  o_10 = ATgetArgument(p_10, 0);
                                  n_10 = ATgetArgument(p_10, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_g_7), not_null(n_10)), term_f_7), not_null(o_10)), term_e_7);
                                }
                              else
                                {
                                  if(match_cons(p_10, sym_ANCHOR_1))
                                    {
                                      o_10 = ATgetArgument(p_10, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_i_7), not_null(o_10)), term_h_7);
                                    }
                                  else
                                    {
                                      if(match_cons(p_10, sym_BR_0))
                                        {
                                          t = term_j_7;
                                        }
                                      else
                                        {
                                          if(match_cons(p_10, sym_NBSP_0))
                                            {
                                              t = term_k_7;
                                            }
                                          else
                                            {
                                              if(match_cons(p_10, sym_HR_0))
                                                {
                                                  t = term_l_7;
                                                }
                                              else
                                                {
                                                  if(match_cons(p_10, sym_TDTD_0))
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
ATerm bottomup_1 (ATerm t, ATerm a_70 (ATerm))
{
  ATerm x_0 (ATerm t)
  {
    t = bottomup_1(t, a_70);
    return(t);
  }
  t = _all(t, x_0);
  t = a_70(t);
  return(t);
}
ATerm html2text_0 (ATerm t)
{
  ATerm y_0 (ATerm t)
  {
    ATerm n_7 = t;
    int q_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Html2text_0(t);
        LocalPopChoice(q_7);
      }
    else
      {
        t = n_7;
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
  ATerm r_7 = t;
  int s_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_7);
    }
  else
    {
      t = r_7;
      {
        ATerm t_7 = t;
        int u_7 = stack_ptr;
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
                        ATerm v_7 = t;
                        int w_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(w_7);
                          }
                        else
                          {
                            t = v_7;
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
                      ATerm x_7 = t;
                      int y_7 = stack_ptr;
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
                          LocalPopChoice(y_7);
                        }
                      else
                        {
                          t = x_7;
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
            LocalPopChoice(u_7);
          }
        else
          {
            t = t_7;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm p_14 (ATerm t)
  {
    ATerm z_7 = t;
    int a_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_71(t);
        LocalPopChoice(a_8);
      }
    else
      {
        t = z_7;
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
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(c_15)), term_b_8), term_b_8);
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
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(z_14)), term_c_8), term_c_8);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm j_77 (ATerm))
{
  ATerm i_15 (ATerm t)
  {
    t = j_77(t);
    {
      ATerm d_8 = t;
      int e_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Nil_0(t);
          LocalPopChoice(e_8);
        }
      else
        {
          t = d_8;
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
      ATerm f_8 = t;
      int g_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = replace_quotes_0(t);
          LocalPopChoice(g_8);
        }
      else
        {
          t = f_8;
          {
          }
        }
      return(t);
    }
    t = listtd_1(t, d_1);
    {
      ATerm e_1 (ATerm t)
      {
        ATerm h_8 = t;
        int i_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_15 = NULL;
            o_15 = t;
            n_15 :
            if(match_int(o_15, 32))
              {
                t = term_k_7;
                t = explode_string_0(t);
              }
            else
              {
                if(match_int(o_15, 38))
                  {
                    t = term_j_8;
                    t = explode_string_0(t);
                  }
                else
                  {
                    if(match_int(o_15, 60))
                      {
                        t = term_k_8;
                        t = explode_string_0(t);
                      }
                    else
                      {
                        if(match_int(o_15, 62))
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
            LocalPopChoice(i_8);
          }
        else
          {
            t = h_8;
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
ATerm remove_trailing_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm a_16 (ATerm t)
  {
    ATerm m_8 = t;
    int n_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, e_96, _id);
        {
          t = Tl_0(t);
          t = a_16(t);
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
                          ATerm o_8 = t;
                          int p_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm d_17 = NULL,g_17 = NULL;
                              ATerm q_8;
                              q_8 = t;
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
                              t = q_8;
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
                              LocalPopChoice(p_8);
                            }
                          else
                            {
                              t = o_8;
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
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_t_8), not_null(n_17));
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
      ATerm u_8 = t;
      int v_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_18 = NULL,i_18 = NULL;
          ATerm w_8;
          w_8 = t;
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
          t = w_8;
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
          LocalPopChoice(v_8);
        }
      else
        {
          t = u_8;
          {
            ATerm l_18 = NULL,n_18 = NULL;
            ATerm x_8;
            x_8 = t;
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
            t = x_8;
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
      ATerm y_8 = t;
      int d_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_19 = NULL,g_19 = NULL;
          ATerm e_9;
          e_9 = t;
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
          t = e_9;
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
          LocalPopChoice(d_9);
        }
      else
        {
          t = y_8;
          {
            ATerm j_19 = NULL,l_19 = NULL;
            ATerm f_9;
            f_9 = t;
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
            t = f_9;
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
      ATerm k_9 = t;
      int l_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_20 = NULL,e_20 = NULL;
          ATerm m_9;
          m_9 = t;
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
          t = m_9;
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
          LocalPopChoice(l_9);
        }
      else
        {
          t = k_9;
          {
            ATerm h_20 = NULL,j_20 = NULL;
            ATerm n_9;
            n_9 = t;
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
            t = n_9;
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
      ATerm o_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm a_21 = NULL,c_21 = NULL;
          ATerm u_9;
          u_9 = t;
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
          t = u_9;
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
          LocalPopChoice(t_9);
        }
      else
        {
          t = o_9;
          {
            ATerm f_21 = NULL,h_21 = NULL;
            ATerm v_9;
            v_9 = t;
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
            t = v_9;
            {
              ATerm i_21 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(f_21));
              {
                i_21 = t;
                if(((h_21 != NULL) && (h_21 != i_21)))
                  _fail(i_21);
                else
                  h_21 = i_21;
              }
              t = not_null(h_21);
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
ATerm sep_by_1 (ATerm t, ATerm h_68 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_21 = NULL;
    q_21 = t;
    t = (ATerm) ATinsert(ATempty, not_null(q_21));
    return(t);
  }
  t = map_1(t, p_1);
  {
    t = separate_by_1(t, h_68);
    t = concat_0(t);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm t_83 (ATerm))
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
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_1 (ATerm t)
            {
              t = filter_1(t, t_83);
              return(t);
            }
            t = Cons_2(t, t_83, q_1);
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            {
              ATerm v_21 = NULL,w_21 = NULL,x_21 = NULL;
              v_21 = t;
              u_21 :
              if(((ATgetType(v_21) == AT_LIST) && !(ATisEmpty(v_21))))
                {
                  w_21 = ATgetFirst((ATermList) v_21);
                  x_21 = (ATerm) ATgetNext((ATermList) v_21);
                  {
                    t = not_null(x_21);
                    t = filter_1(t, t_83);
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
  ATerm h_22 = NULL;
  h_22 = t;
  g_22 :
  if(match_cons(h_22, sym_HS_0))
    {
      ATerm b_10 = t;
      int c_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_22 = NULL,l_22 = NULL;
          ATerm d_10;
          d_10 = t;
          {
            ATerm k_22 = NULL;
            t = SSLgetAnnotations(not_null(h_22));
            {
              k_22 = t;
              if(((j_22 != NULL) && (j_22 != k_22)))
                _fail(k_22);
              else
                j_22 = k_22;
            }
          }
          t = d_10;
          {
            ATerm m_22 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(j_22));
            {
              m_22 = t;
              if(((l_22 != NULL) && (l_22 != m_22)))
                _fail(m_22);
              else
                l_22 = m_22;
            }
            t = not_null(l_22);
          }
          LocalPopChoice(c_10);
        }
      else
        {
          t = b_10;
          {
            ATerm o_22 = NULL,q_22 = NULL;
            ATerm e_10;
            e_10 = t;
            {
              ATerm p_22 = NULL;
              t = SSLgetAnnotations(not_null(h_22));
              {
                p_22 = t;
                if(((o_22 != NULL) && (o_22 != p_22)))
                  _fail(p_22);
                else
                  o_22 = p_22;
              }
            }
            t = e_10;
            {
              ATerm r_22 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(o_22));
              {
                r_22 = t;
                if(((q_22 != NULL) && (q_22 != r_22)))
                  _fail(r_22);
                else
                  q_22 = r_22;
              }
              t = not_null(q_22);
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
  ATerm c_23 = NULL,e_23 = NULL;
  ATerm j_26 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), term_f_10);
    t = copy_0(t);
    return(t);
  }
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          ATerm d_23 = NULL;
          d_23 = t;
          if(((c_23 != NULL) && (c_23 != d_23)))
            _fail(d_23);
          else
            c_23 = d_23;
          return(t);
        }
        t = SOpt_2(t, HS_0, u_1);
        return(t);
      }
      t = fetch_1(t, t_1);
      {
        t = not_null(c_23);
        t = string_to_int_0(t);
      }
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      t = term_y_5;
    }
  {
    e_23 = t;
    b_23 :
    if(match_int(e_23, 0))
      {
        ATerm i_10 = t;
        int j_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATempty;
            LocalPopChoice(j_10);
          }
        else
          {
            t = i_10;
            t = j_26(t);
          }
      }
    else
      {
        t = j_26(t);
      }
  }
  return(t);
}
ATerm separate_by_0 (ATerm t)
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym__2))
    {
      y_26 = ATgetArgument(x_26, 0);
      z_26 = ATgetArgument(x_26, 1);
      {
        t = not_null(z_26);
        {
          ATerm k_10 = t;
          int l_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(l_10);
            }
          else
            {
              t = k_10;
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm q_10 = t;
                  int r_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(r_10);
                    }
                  else
                    {
                      t = q_10;
                      {
                        ATerm c_27 = NULL;
                        t = Cons_2(t, _id, v_1);
                        {
                          ATerm d_27 = NULL;
                          d_27 = t;
                          if(((c_27 != NULL) && (c_27 != d_27)))
                            _fail(d_27);
                          else
                            c_27 = d_27;
                          t = (ATerm) ATinsert(CheckATermList(not_null(c_27)), not_null(y_26));
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
ATerm if_verbose2_1 (ATerm t, ATerm x_89 (ATerm))
{
  ATerm s_10 = t;
  int t_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_10;
      u_10 = t;
      {
        ATerm i_27 = NULL;
        ATerm j_27 = NULL;
        t = term_h_6;
        {
          t = get_config_0(t);
          {
            j_27 = t;
            if(((i_27 != NULL) && (i_27 != j_27)))
              _fail(j_27);
            else
              i_27 = j_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_27), term_v_10);
          t = geq_0(t);
        }
      }
      t = u_10;
      t = x_89(t);
      LocalPopChoice(t_10);
    }
  else
    {
      t = s_10;
      {
      }
    }
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm i_87 (ATerm))
{
  ATerm w_10;
  w_10 = t;
  {
    ATerm w_1 (ATerm t)
    {
      t = i_87(t);
      {
        ATerm x_1 (ATerm t)
        {
          t = term_x_10;
          return(t);
        }
        t = debug_1(t, x_1);
      }
      return(t);
    }
    t = if_verbose2_1(t, w_1);
  }
  t = w_10;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm n_27 = NULL,p_27 = NULL;
  ATerm y_1 (ATerm t)
  {
    t = term_y_10;
    return(t);
  }
  t = dissuader_1(t, y_1);
  {
    ATerm z_10;
    z_10 = t;
    {
      ATerm o_27 = NULL;
      o_27 = t;
      if(((n_27 != NULL) && (n_27 != o_27)))
        _fail(o_27);
      else
        n_27 = o_27;
    }
    t = z_10;
    {
      ATerm q_27 = NULL;
      t = term_a_11;
      {
        t = y_75(t);
        {
          q_27 = t;
          if(((p_27 != NULL) && (p_27 != q_27)))
            _fail(q_27);
          else
            p_27 = q_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(p_27), not_null(n_27));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm LNAT_2 (ATerm t, ATerm v_0 (ATerm), ATerm w_0 (ATerm))
{
  ATerm l_28 = NULL,m_28 = NULL,o_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym_LNAT_2))
    {
      m_28 = ATgetArgument(l_28, 0);
      o_28 = ATgetArgument(l_28, 1);
      {
        ATerm b_11 = t;
        int c_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_28 = NULL,x_28 = NULL;
            ATerm t_28 = NULL;
            t = SSLgetAnnotations(not_null(l_28));
            {
              t_28 = t;
              if(((s_28 != NULL) && (s_28 != t_28)))
                _fail(t_28);
              else
                s_28 = t_28;
            }
            {
              t = not_null(m_28);
              {
                ATerm a_29 = NULL;
                t = v_0(t);
                {
                  x_28 = t;
                  {
                    t = not_null(o_28);
                    {
                      ATerm c_29 = NULL;
                      t = w_0(t);
                      {
                        a_29 = t;
                        {
                          ATerm d_29 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, not_null(x_28), not_null(a_29)), not_null(s_28));
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
            LocalPopChoice(c_11);
          }
        else
          {
            t = b_11;
            {
              ATerm h_29 = NULL,j_29 = NULL;
              ATerm i_29 = NULL;
              t = SSLgetAnnotations(not_null(l_28));
              {
                i_29 = t;
                if(((h_29 != NULL) && (h_29 != i_29)))
                  _fail(i_29);
                else
                  h_29 = i_29;
              }
              {
                t = not_null(m_28);
                {
                  ATerm l_29 = NULL;
                  t = v_0(t);
                  {
                    j_29 = t;
                    {
                      t = not_null(o_28);
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
        ATerm d_11 = t;
        int e_11 = stack_ptr;
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
            LocalPopChoice(e_11);
          }
        else
          {
            t = d_11;
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
ATerm tov_1 (ATerm t, ATerm g_68 (ATerm))
{
  ATerm w_31 = NULL,a_32 = NULL;
  ATerm f_11 = t;
  int g_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2(t, _id, _id);
      LocalPopChoice(g_11);
    }
  else
    {
      t = f_11;
      {
        ATerm h_11 = t;
        int i_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2(t, _id, _id);
            LocalPopChoice(i_11);
          }
        else
          {
            t = h_11;
            {
              ATerm x_31 = NULL;
              ATerm y_31 = NULL;
              x_31 = t;
              {
                if(((w_31 != NULL) && (w_31 != x_31)))
                  _fail(x_31);
                else
                  w_31 = x_31;
                {
                  ATerm z_31 = NULL;
                  t = term_a_11;
                  {
                    t = g_68(t);
                    {
                      z_31 = t;
                      if(((y_31 != NULL) && (y_31 != z_31)))
                        _fail(z_31);
                      else
                        y_31 = z_31;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_j_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(w_31)))), not_null(y_31)))));
                }
              }
            }
          }
      }
    }
  {
    a_32 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_j_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(a_32)))));
  }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm m_32 = NULL;
  m_32 = t;
  l_32 :
  if(match_cons(m_32, sym_IS_0))
    {
      ATerm k_11 = t;
      int l_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_32 = NULL,q_32 = NULL;
          ATerm m_11;
          m_11 = t;
          {
            ATerm p_32 = NULL;
            t = SSLgetAnnotations(not_null(m_32));
            {
              p_32 = t;
              if(((o_32 != NULL) && (o_32 != p_32)))
                _fail(p_32);
              else
                o_32 = p_32;
            }
          }
          t = m_11;
          {
            ATerm r_32 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(o_32));
            {
              r_32 = t;
              if(((q_32 != NULL) && (q_32 != r_32)))
                _fail(r_32);
              else
                q_32 = r_32;
            }
            t = not_null(q_32);
          }
          LocalPopChoice(l_11);
        }
      else
        {
          t = k_11;
          {
            ATerm t_32 = NULL,v_32 = NULL;
            ATerm n_11;
            n_11 = t;
            {
              ATerm u_32 = NULL;
              t = SSLgetAnnotations(not_null(m_32));
              {
                u_32 = t;
                if(((t_32 != NULL) && (t_32 != u_32)))
                  _fail(u_32);
                else
                  t_32 = u_32;
              }
            }
            t = n_11;
            {
              ATerm w_32 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(t_32));
              {
                w_32 = t;
                if(((v_32 != NULL) && (v_32 != w_32)))
                  _fail(w_32);
                else
                  v_32 = w_32;
              }
              t = not_null(v_32);
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
  ATerm i_33 = NULL,l_33 = NULL;
  ATerm s_33 (ATerm t)
  {
    ATerm o_33 = NULL;
    ATerm p_33 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(l_33), term_f_10);
    {
      t = copy_0(t);
      {
        p_33 = t;
        if(((o_33 != NULL) && (o_33 != p_33)))
          _fail(p_33);
        else
          o_33 = p_33;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(o_33));
    return(t);
  }
  ATerm o_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_1 (ATerm t)
      {
        ATerm a_2 (ATerm t)
        {
          ATerm j_33 = NULL;
          j_33 = t;
          if(((i_33 != NULL) && (i_33 != j_33)))
            _fail(j_33);
          else
            i_33 = j_33;
          return(t);
        }
        t = SOpt_2(t, IS_0, a_2);
        return(t);
      }
      t = fetch_1(t, z_1);
      {
        t = not_null(i_33);
        t = string_to_int_0(t);
      }
      LocalPopChoice(p_11);
    }
  else
    {
      t = o_11;
      t = term_d_6;
    }
  {
    l_33 = t;
    h_33 :
    if(match_int(l_33, 0))
      {
        ATerm q_11 = t;
        int r_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_11;
            LocalPopChoice(r_11);
          }
        else
          {
            t = q_11;
            t = s_33(t);
          }
      }
    else
      {
        t = s_33(t);
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL;
  w_33 = t;
  v_33 :
  if(match_cons(w_33, sym__2))
    {
      x_33 = ATgetArgument(w_33, 0);
      y_33 = ATgetArgument(w_33, 1);
      {
        ATerm t_11 = t;
        int u_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(x_33), not_null(y_33));
            LocalPopChoice(u_11);
          }
        else
          {
            t = t_11;
            t = SSL_subtr(not_null(x_33), not_null(y_33));
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
  ATerm e_34 = NULL,f_34 = NULL,i_34 = NULL;
  e_34 = t;
  d_34 :
  if(match_cons(e_34, sym__2))
    {
      f_34 = ATgetArgument(e_34, 0);
      i_34 = ATgetArgument(e_34, 1);
      {
        ATerm v_11;
        v_11 = t;
        {
          ATerm w_11 = t;
          int x_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(f_34), not_null(i_34));
              LocalPopChoice(x_11);
            }
          else
            {
              t = w_11;
              t = SSL_gtr(not_null(f_34), not_null(i_34));
            }
        }
        t = v_11;
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
  ATerm y_11 = t;
  int z_11 = stack_ptr;
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
      LocalPopChoice(z_11);
    }
  else
    {
      t = y_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm q_69 (ATerm), ATerm r_69 (ATerm))
{
  ATerm a_35 (ATerm t)
  {
    ATerm a_12 = t;
    int b_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_69(t);
        LocalPopChoice(b_12);
      }
    else
      {
        t = a_12;
        {
          t = r_69(t);
          t = a_35(t);
        }
      }
    return(t);
  }
  t = a_35(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm t_69 (ATerm), ATerm u_69 (ATerm), ATerm v_69 (ATerm))
{
  t = t_69(t);
  t = while_not_2(t, u_69, v_69);
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
          ATerm c_12;
          c_12 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_35), term_y_5);
            t = geq_0(t);
          }
          t = c_12;
          {
            ATerm c_36 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(v_35), term_y_5);
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
      ATerm d_12 = t;
      int e_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_36 = NULL,s_36 = NULL;
          ATerm f_12;
          f_12 = t;
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
          t = f_12;
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
          LocalPopChoice(e_12);
        }
      else
        {
          t = d_12;
          {
            ATerm v_36 = NULL,x_36 = NULL;
            ATerm g_12;
            g_12 = t;
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
            t = g_12;
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
        ATerm h_12 = t;
        int i_12 = stack_ptr;
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
            LocalPopChoice(i_12);
          }
        else
          {
            t = h_12;
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
  ATerm e_39 = NULL,g_39 = NULL;
  ATerm n_39 (ATerm t)
  {
    ATerm j_39 = NULL;
    ATerm k_39 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_39), term_t_8);
    {
      t = copy_0(t);
      {
        k_39 = t;
        if(((j_39 != NULL) && (j_39 != k_39)))
          _fail(k_39);
        else
          j_39 = k_39;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(j_39))));
    return(t);
  }
  ATerm j_12 = t;
  int k_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm g_2 (ATerm t)
        {
          ATerm f_39 = NULL;
          f_39 = t;
          if(((e_39 != NULL) && (e_39 != f_39)))
            _fail(f_39);
          else
            e_39 = f_39;
          return(t);
        }
        t = SOpt_2(t, VS_0, g_2);
        return(t);
      }
      t = fetch_1(t, e_2);
      {
        t = not_null(e_39);
        t = string_to_int_0(t);
      }
      LocalPopChoice(k_12);
    }
  else
    {
      t = j_12;
      t = term_d_6;
    }
  {
    g_39 = t;
    d_39 :
    if(match_int(g_39, 0))
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_s_11;
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            t = n_39(t);
          }
      }
    else
      {
        t = n_39(t);
      }
  }
  return(t);
}
ATerm AC_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm y_39 = NULL,z_39 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym_AC_1))
    {
      z_39 = ATgetArgument(y_39, 0);
      {
        ATerm n_12 = t;
        int o_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_40 = NULL,e_40 = NULL;
            ATerm d_40 = NULL;
            t = SSLgetAnnotations(not_null(y_39));
            {
              d_40 = t;
              if(((c_40 != NULL) && (c_40 != d_40)))
                _fail(d_40);
              else
                c_40 = d_40;
            }
            {
              t = not_null(z_39);
              {
                ATerm g_40 = NULL;
                t = q_0(t);
                {
                  e_40 = t;
                  {
                    ATerm h_40 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(e_40)), not_null(c_40));
                    {
                      h_40 = t;
                      if(((g_40 != NULL) && (g_40 != h_40)))
                        _fail(h_40);
                      else
                        g_40 = h_40;
                    }
                    t = not_null(g_40);
                  }
                }
              }
            }
            LocalPopChoice(o_12);
          }
        else
          {
            t = n_12;
            {
              ATerm k_40 = NULL,m_40 = NULL;
              ATerm l_40 = NULL;
              t = SSLgetAnnotations(not_null(y_39));
              {
                l_40 = t;
                if(((k_40 != NULL) && (k_40 != l_40)))
                  _fail(l_40);
                else
                  k_40 = l_40;
              }
              {
                t = not_null(z_39);
                {
                  ATerm o_40 = NULL;
                  t = q_0(t);
                  {
                    m_40 = t;
                    {
                      ATerm p_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(m_40)), not_null(k_40));
                      {
                        p_40 = t;
                        if(((o_40 != NULL) && (o_40 != p_40)))
                          _fail(p_40);
                        else
                          o_40 = p_40;
                      }
                      t = not_null(o_40);
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
  ATerm k_41 = NULL,l_41 = NULL;
  k_41 = t;
  j_41 :
  if(match_cons(k_41, sym_AR_1))
    {
      l_41 = ATgetArgument(k_41, 0);
      {
        ATerm p_12 = t;
        int q_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_41 = NULL,q_41 = NULL;
            ATerm p_41 = NULL;
            t = SSLgetAnnotations(not_null(k_41));
            {
              p_41 = t;
              if(((o_41 != NULL) && (o_41 != p_41)))
                _fail(p_41);
              else
                o_41 = p_41;
            }
            {
              t = not_null(l_41);
              {
                ATerm s_41 = NULL;
                t = p_0(t);
                {
                  q_41 = t;
                  {
                    ATerm t_41 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(q_41)), not_null(o_41));
                    {
                      t_41 = t;
                      if(((s_41 != NULL) && (s_41 != t_41)))
                        _fail(t_41);
                      else
                        s_41 = t_41;
                    }
                    t = not_null(s_41);
                  }
                }
              }
            }
            LocalPopChoice(q_12);
          }
        else
          {
            t = p_12;
            {
              ATerm w_41 = NULL,y_41 = NULL;
              ATerm x_41 = NULL;
              t = SSLgetAnnotations(not_null(k_41));
              {
                x_41 = t;
                if(((w_41 != NULL) && (w_41 != x_41)))
                  _fail(x_41);
                else
                  w_41 = x_41;
              }
              {
                t = not_null(l_41);
                {
                  ATerm a_42 = NULL;
                  t = p_0(t);
                  {
                    y_41 = t;
                    {
                      ATerm b_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(y_41)), not_null(w_41));
                      {
                        b_42 = t;
                        if(((a_42 != NULL) && (a_42 != b_42)))
                          _fail(b_42);
                        else
                          a_42 = b_42;
                      }
                      t = not_null(a_42);
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
  ATerm w_42 = NULL,x_42 = NULL;
  w_42 = t;
  v_42 :
  if(match_cons(w_42, sym_AL_1))
    {
      x_42 = ATgetArgument(w_42, 0);
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_43 = NULL,e_43 = NULL;
            ATerm d_43 = NULL;
            t = SSLgetAnnotations(not_null(w_42));
            {
              d_43 = t;
              if(((c_43 != NULL) && (c_43 != d_43)))
                _fail(d_43);
              else
                c_43 = d_43;
            }
            {
              t = not_null(x_42);
              {
                ATerm g_43 = NULL;
                t = o_0(t);
                {
                  e_43 = t;
                  {
                    ATerm h_43 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(e_43)), not_null(c_43));
                    {
                      h_43 = t;
                      if(((g_43 != NULL) && (g_43 != h_43)))
                        _fail(h_43);
                      else
                        g_43 = h_43;
                    }
                    t = not_null(g_43);
                  }
                }
              }
            }
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            {
              ATerm k_43 = NULL,m_43 = NULL;
              ATerm l_43 = NULL;
              t = SSLgetAnnotations(not_null(w_42));
              {
                l_43 = t;
                if(((k_43 != NULL) && (k_43 != l_43)))
                  _fail(l_43);
                else
                  k_43 = l_43;
              }
              {
                t = not_null(x_42);
                {
                  ATerm o_43 = NULL;
                  t = o_0(t);
                  {
                    m_43 = t;
                    {
                      ATerm p_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(m_43)), not_null(k_43));
                      {
                        p_43 = t;
                        if(((o_43 != NULL) && (o_43 != p_43)))
                          _fail(p_43);
                        else
                          o_43 = p_43;
                      }
                      t = not_null(o_43);
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
  ATerm t_12 = t;
  int u_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = AL_1(t, _id);
      t = term_v_12;
      LocalPopChoice(u_12);
    }
  else
    {
      t = t_12;
      {
        ATerm w_12 = t;
        int x_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = AR_1(t, _id);
            t = term_y_12;
            LocalPopChoice(x_12);
          }
        else
          {
            t = w_12;
            {
              t = AC_1(t, _id);
              t = term_z_12;
            }
          }
      }
    }
  return(t);
}
ATerm make_hs_0 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL;
  ATerm r_44 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(l_44));
    return(t);
  }
  j_44 = t;
  e_44 :
  if(match_cons(j_44, sym_AL_1))
    {
      k_44 = ATgetArgument(j_44, 0);
      if(((i_44 != NULL) && (i_44 != k_44)))
        _fail(k_44);
      else
        i_44 = k_44;
    }
  else
    {
      if(match_cons(j_44, sym_AR_1))
        {
          k_44 = ATgetArgument(j_44, 0);
          if(((i_44 != NULL) && (i_44 != k_44)))
            _fail(k_44);
          else
            i_44 = k_44;
        }
      else
        {
          if(match_cons(j_44, sym_AC_1))
            {
              k_44 = ATgetArgument(j_44, 0);
              if(((i_44 != NULL) && (i_44 != k_44)))
                _fail(k_44);
              else
                i_44 = k_44;
            }
          else
            {
              _fail(t);
            }
        }
    }
  {
    t = not_null(i_44);
    {
      t = Hspace_0(t);
      {
        l_44 = t;
        h_44 :
        if(((ATgetType(l_44) == AT_LIST) && ATisEmpty(l_44)))
          {
            {
            }
          }
        else
          {
            t = r_44(t);
          }
      }
    }
  }
  return(t);
}
ATerm toa_1 (ATerm t, ATerm j_68 (ATerm))
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
            t = term_a_11;
            {
              t = j_68(t);
              {
                e_46 = t;
                v_45 :
                if(match_cons(e_46, sym_AOPTIONS_1))
                  {
                    f_46 = ATgetArgument(e_46, 0);
                    {
                      ATerm b_48 = NULL;
                      if(((c_46 != NULL) && (c_46 != f_46)))
                        _fail(f_46);
                      else
                        c_46 = f_46;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(a_46), not_null(c_46));
                        {
                          ATerm e_48 (ATerm t)
                          {
                            ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL,n_46 = NULL,o_46 = NULL,p_46 = NULL,q_46 = NULL;
                            ATerm g_48 (ATerm t)
                            {
                              ATerm d_47 = NULL;
                              ATerm e_47 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_46), not_null(o_46));
                              {
                                t = e_48(t);
                                {
                                  e_47 = t;
                                  if(((d_47 != NULL) && (d_47 != e_47)))
                                    _fail(e_47);
                                  else
                                    d_47 = e_47;
                                }
                              }
                              t = (ATerm) ATinsert(CheckATermList(not_null(d_47)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, not_null(g_46), not_null(h_46)))));
                              return(t);
                            }
                            ATerm h_48 (ATerm t)
                            {
                              ATerm l_47 = NULL,n_47 = NULL,p_47 = NULL;
                              ATerm a_13;
                              a_13 = t;
                              {
                                ATerm m_47 = NULL;
                                t = not_null(p_46);
                                {
                                  t = aopt_0(t);
                                  {
                                    m_47 = t;
                                    if(((l_47 != NULL) && (l_47 != m_47)))
                                      _fail(m_47);
                                    else
                                      l_47 = m_47;
                                  }
                                }
                              }
                              t = a_13;
                              {
                                ATerm b_13;
                                b_13 = t;
                                {
                                  ATerm o_47 = NULL;
                                  t = not_null(p_46);
                                  {
                                    t = make_hs_0(t);
                                    {
                                      o_47 = t;
                                      if(((n_47 != NULL) && (n_47 != o_47)))
                                        _fail(o_47);
                                      else
                                        n_47 = o_47;
                                    }
                                  }
                                }
                                t = b_13;
                                {
                                  ATerm q_47 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_46)), not_null(i_46)), not_null(q_46));
                                  {
                                    t = e_48(t);
                                    {
                                      q_47 = t;
                                      if(((p_47 != NULL) && (p_47 != q_47)))
                                        _fail(q_47);
                                      else
                                        p_47 = q_47;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_47)), not_null(n_47)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(l_47)), not_null(m_46)));
                                }
                              }
                              return(t);
                            }
                            ATerm i_48 (ATerm t)
                            {
                              ATerm x_47 = NULL,z_47 = NULL;
                              ATerm c_13;
                              c_13 = t;
                              {
                                ATerm y_47 = NULL;
                                t = not_null(p_46);
                                {
                                  t = aopt_0(t);
                                  {
                                    y_47 = t;
                                    if(((x_47 != NULL) && (x_47 != y_47)))
                                      _fail(y_47);
                                    else
                                      x_47 = y_47;
                                  }
                                }
                              }
                              t = c_13;
                              {
                                ATerm a_48 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_46), not_null(q_46));
                                {
                                  t = e_48(t);
                                  {
                                    a_48 = t;
                                    if(((z_47 != NULL) && (z_47 != a_48)))
                                      _fail(a_48);
                                    else
                                      z_47 = a_48;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(z_47)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(x_47)), not_null(m_46)));
                              }
                              return(t);
                            }
                            k_46 = t;
                            k_45 :
                            if(match_cons(k_46, sym__2))
                              {
                                l_46 = ATgetArgument(k_46, 0);
                                o_46 = ATgetArgument(k_46, 1);
                                m_45 :
                                if(((ATgetType(l_46) == AT_LIST) && ATisEmpty(l_46)))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(l_46) == AT_LIST) && !(ATisEmpty(l_46))))
                                      {
                                        m_46 = ATgetFirst((ATermList) l_46);
                                        n_46 = (ATerm) ATgetNext((ATermList) l_46);
                                        n_45 :
                                        if(((ATgetType(o_46) == AT_LIST) && !(ATisEmpty(o_46))))
                                          {
                                            p_46 = ATgetFirst((ATermList) o_46);
                                            q_46 = (ATerm) ATgetNext((ATermList) o_46);
                                            o_45 :
                                            if(((ATgetType(n_46) == AT_LIST) && !(ATisEmpty(n_46))))
                                              {
                                                i_46 = ATgetFirst((ATermList) n_46);
                                                j_46 = (ATerm) ATgetNext((ATermList) n_46);
                                                p_45 :
                                                if(match_cons(m_46, sym_C_2))
                                                  {
                                                    g_46 = ATgetArgument(m_46, 0);
                                                    h_46 = ATgetArgument(m_46, 1);
                                                    {
                                                      ATerm d_13 = t;
                                                      int e_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_48(t);
                                                          LocalPopChoice(e_13);
                                                        }
                                                      else
                                                        {
                                                          t = d_13;
                                                          {
                                                            ATerm f_13 = t;
                                                            int g_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = h_48(t);
                                                                LocalPopChoice(g_13);
                                                              }
                                                            else
                                                              {
                                                                t = f_13;
                                                                t = i_48(t);
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
                                                        t = h_48(t);
                                                        LocalPopChoice(i_13);
                                                      }
                                                    else
                                                      {
                                                        t = h_13;
                                                        t = i_48(t);
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                q_45 :
                                                if(match_cons(m_46, sym_C_2))
                                                  {
                                                    g_46 = ATgetArgument(m_46, 0);
                                                    h_46 = ATgetArgument(m_46, 1);
                                                    {
                                                      ATerm j_13 = t;
                                                      int k_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = g_48(t);
                                                          LocalPopChoice(k_13);
                                                        }
                                                      else
                                                        {
                                                          t = j_13;
                                                          t = i_48(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = i_48(t);
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            s_45 :
                                            t_45 :
                                            if(match_cons(m_46, sym_C_2))
                                              {
                                                g_46 = ATgetArgument(m_46, 0);
                                                h_46 = ATgetArgument(m_46, 1);
                                                t = g_48(t);
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
                          t = e_48(t);
                          {
                            b_48 = t;
                            if(((d_46 != NULL) && (d_46 != b_48)))
                              _fail(b_48);
                            else
                              d_46 = b_48;
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
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_j_11), (ATerm) ATinsert(ATempty, not_null(d_46)));
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
  ATerm e_49 = NULL,f_49 = NULL,g_49 = NULL;
  e_49 = t;
  b_49 :
  if(match_cons(e_49, sym_R_2))
    {
      f_49 = ATgetArgument(e_49, 0);
      g_49 = ATgetArgument(e_49, 1);
      {
        ATerm l_13 = t;
        int m_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_49 = NULL,w_49 = NULL;
            ATerm v_49 = NULL;
            t = SSLgetAnnotations(not_null(e_49));
            {
              v_49 = t;
              if(((k_49 != NULL) && (k_49 != v_49)))
                _fail(v_49);
              else
                k_49 = v_49;
            }
            {
              t = not_null(f_49);
              {
                ATerm y_49 = NULL;
                t = m_0(t);
                {
                  w_49 = t;
                  {
                    t = not_null(g_49);
                    {
                      ATerm a_50 = NULL;
                      t = n_0(t);
                      {
                        y_49 = t;
                        {
                          ATerm b_50 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(w_49), not_null(y_49)), not_null(k_49));
                          {
                            b_50 = t;
                            if(((a_50 != NULL) && (a_50 != b_50)))
                              _fail(b_50);
                            else
                              a_50 = b_50;
                          }
                          t = not_null(a_50);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(m_13);
          }
        else
          {
            t = l_13;
            {
              ATerm j_50 = NULL,l_50 = NULL;
              ATerm k_50 = NULL;
              t = SSLgetAnnotations(not_null(e_49));
              {
                k_50 = t;
                if(((j_50 != NULL) && (j_50 != k_50)))
                  _fail(k_50);
                else
                  j_50 = k_50;
              }
              {
                t = not_null(f_49);
                {
                  ATerm n_50 = NULL;
                  t = m_0(t);
                  {
                    l_50 = t;
                    {
                      t = not_null(g_49);
                      {
                        ATerm p_50 = NULL;
                        t = n_0(t);
                        {
                          n_50 = t;
                          {
                            ATerm q_50 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(l_50), not_null(n_50)), not_null(j_50));
                            {
                              q_50 = t;
                              if(((p_50 != NULL) && (p_50 != q_50)))
                                _fail(q_50);
                              else
                                p_50 = q_50;
                            }
                            t = not_null(p_50);
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
    ATerm n_52 (ATerm t)
    {
      ATerm l_51 = NULL,m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL,r_51 = NULL;
      ATerm q_52 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_51), (ATerm) ATinsert(CheckATermList(not_null(r_51)), not_null(p_51)));
        t = n_52(t);
        return(t);
      }
      n_51 = t;
      i_51 :
      if(match_cons(n_51, sym__2))
        {
          o_51 = ATgetArgument(n_51, 0);
          r_51 = ATgetArgument(n_51, 1);
          j_51 :
          if(((ATgetType(o_51) == AT_LIST) && ATisEmpty(o_51)))
            {
              {
                ATerm w_51 = NULL;
                ATerm x_51 = NULL;
                t = not_null(r_51);
                {
                  ATerm i_2 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2(t, _id, i_2);
                  {
                    x_51 = t;
                    if(((w_51 != NULL) && (w_51 != x_51)))
                      _fail(x_51);
                    else
                      w_51 = x_51;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(w_51)));
              }
            }
          else
            {
              if(((ATgetType(o_51) == AT_LIST) && !(ATisEmpty(o_51))))
                {
                  p_51 = ATgetFirst((ATermList) o_51);
                  q_51 = (ATerm) ATgetNext((ATermList) o_51);
                  k_51 :
                  if(match_cons(p_51, sym_R_2))
                    {
                      l_51 = ATgetArgument(p_51, 0);
                      m_51 = ATgetArgument(p_51, 1);
                      {
                        ATerm n_13 = t;
                        int o_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm f_52 = NULL,h_52 = NULL;
                            ATerm p_13;
                            p_13 = t;
                            {
                              ATerm g_52 = NULL;
                              t = not_null(r_51);
                              {
                                ATerm k_2 (ATerm t)
                                {
                                  t = (ATerm) ATempty;
                                  return(t);
                                }
                                t = reverse_acc_2(t, _id, k_2);
                                {
                                  g_52 = t;
                                  if(((f_52 != NULL) && (f_52 != g_52)))
                                    _fail(g_52);
                                  else
                                    f_52 = g_52;
                                }
                              }
                            }
                            t = p_13;
                            {
                              ATerm i_52 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(q_51), (ATerm) ATempty);
                              {
                                t = n_52(t);
                                {
                                  i_52 = t;
                                  if(((h_52 != NULL) && (h_52 != i_52)))
                                    _fail(i_52);
                                  else
                                    h_52 = i_52;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(h_52)), (ATerm) ATmakeAppl(sym_R_2, not_null(l_51), not_null(m_51))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(f_52)));
                            }
                            LocalPopChoice(o_13);
                          }
                        else
                          {
                            t = n_13;
                            t = q_52(t);
                          }
                      }
                    }
                  else
                    {
                      t = q_52(t);
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
    t = n_52(t);
    {
      ATerm m_2 (ATerm t)
      {
        ATerm q_13 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = q_13;
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
  ATerm h_54 = NULL,i_54 = NULL,j_54 = NULL,k_54 = NULL;
  j_54 = t;
  f_54 :
  if(match_cons(j_54, sym_REF_2))
    {
      k_54 = ATgetArgument(j_54, 0);
      i_54 = ATgetArgument(j_54, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, not_null(k_54), not_null(i_54));
    }
  else
    {
      if(match_cons(j_54, sym_LBL_2))
        {
          k_54 = ATgetArgument(j_54, 0);
          i_54 = ATgetArgument(j_54, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_54)), (ATerm) ATmakeAppl(sym_ANCHOR_1, not_null(k_54)));
        }
      else
        {
          if(match_cons(j_54, sym_LNAT_2))
            {
              k_54 = ATgetArgument(j_54, 0);
              i_54 = ATgetArgument(j_54, 1);
              t = term_r_13;
            }
          else
            {
              if(match_cons(j_54, sym_L_2))
                {
                  k_54 = ATgetArgument(j_54, 0);
                  i_54 = ATgetArgument(j_54, 1);
                  t = term_r_13;
                }
              else
                {
                  if(match_cons(j_54, sym_ALT_2))
                    {
                      k_54 = ATgetArgument(j_54, 0);
                      i_54 = ATgetArgument(j_54, 1);
                      t = not_null(k_54);
                    }
                  else
                    {
                      if(match_cons(j_54, sym_A_3))
                        {
                          k_54 = ATgetArgument(j_54, 0);
                          i_54 = ATgetArgument(j_54, 1);
                          h_54 = ATgetArgument(j_54, 2);
                          {
                            ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
                            ATerm b_55 = NULL;
                            t = not_null(h_54);
                            {
                              ATerm c_55 = NULL;
                              t = construct_rows_0(t);
                              {
                                b_55 = t;
                                {
                                  if(((y_54 != NULL) && (y_54 != b_55)))
                                    _fail(b_55);
                                  else
                                    y_54 = b_55;
                                  {
                                    t = not_null(i_54);
                                    {
                                      ATerm d_55 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        c_55 = t;
                                        {
                                          if(((z_54 != NULL) && (z_54 != c_55)))
                                            _fail(c_55);
                                          else
                                            z_54 = c_55;
                                          {
                                            t = not_null(y_54);
                                            {
                                              ATerm n_2 (ATerm t)
                                              {
                                                ATerm o_2 (ATerm t)
                                                {
                                                  t = not_null(k_54);
                                                  return(t);
                                                }
                                                t = toa_1(t, o_2);
                                                return(t);
                                              }
                                              t = map_1(t, n_2);
                                              {
                                                ATerm q_2 (ATerm t)
                                                {
                                                  t = not_null(z_54);
                                                  return(t);
                                                }
                                                t = separate_by_1(t, q_2);
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
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(a_55))))));
                          }
                        }
                      else
                        {
                          if(match_cons(j_54, sym_HV_2))
                            {
                              k_54 = ATgetArgument(j_54, 0);
                              i_54 = ATgetArgument(j_54, 1);
                              {
                                ATerm g_55 = NULL,h_55 = NULL,i_55 = NULL;
                                ATerm j_55 = NULL;
                                t = not_null(k_54);
                                {
                                  ATerm o_55 = NULL;
                                  t = Hspace_0(t);
                                  {
                                    j_55 = t;
                                    {
                                      if(((g_55 != NULL) && (g_55 != j_55)))
                                        _fail(j_55);
                                      else
                                        g_55 = j_55;
                                      {
                                        ATerm s_13 = t;
                                        int t_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm k_55 = NULL;
                                            k_55 = t;
                                            r_53 :
                                            if(((ATgetType(k_55) == AT_LIST) && ATisEmpty(k_55)))
                                              {
                                                {
                                                  t = not_null(i_54);
                                                  {
                                                    ATerm r_2 (ATerm t)
                                                    {
                                                      ATerm u_13 = t;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = Nil_0(t);
                                                          PopChoice();
                                                          _fail(t);
                                                        }
                                                      else
                                                        {
                                                          t = u_13;
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
                                            LocalPopChoice(t_13);
                                          }
                                        else
                                          {
                                            t = s_13;
                                            {
                                              ATerm l_55 = NULL;
                                              ATerm m_55 = NULL;
                                              ATerm s_2 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, term_v_13);
                                                return(t);
                                              }
                                              t = at_last_1(t, s_2);
                                              {
                                                l_55 = t;
                                                {
                                                  if(((h_55 != NULL) && (h_55 != l_55)))
                                                    _fail(l_55);
                                                  else
                                                    h_55 = l_55;
                                                  {
                                                    ATerm n_55 = NULL;
                                                    t = not_null(i_54);
                                                    {
                                                      ATerm t_2 (ATerm t)
                                                      {
                                                        ATerm w_13 = t;
                                                        if((PushChoice() == 0))
                                                          {
                                                            t = Nil_0(t);
                                                            PopChoice();
                                                            _fail(t);
                                                          }
                                                        else
                                                          {
                                                            t = w_13;
                                                          }
                                                        return(t);
                                                      }
                                                      t = filter_1(t, t_2);
                                                      {
                                                        ATerm u_2 (ATerm t)
                                                        {
                                                          t = not_null(h_55);
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, u_2);
                                                        {
                                                          n_55 = t;
                                                          if(((m_55 != NULL) && (m_55 != n_55)))
                                                            _fail(n_55);
                                                          else
                                                            m_55 = n_55;
                                                        }
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_55)), term_x_13);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        {
                                          o_55 = t;
                                          if(((i_55 != NULL) && (i_55 != o_55)))
                                            _fail(o_55);
                                          else
                                            i_55 = o_55;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = not_null(i_55);
                              }
                            }
                          else
                            {
                              if(match_cons(j_54, sym_V_2))
                                {
                                  k_54 = ATgetArgument(j_54, 0);
                                  i_54 = ATgetArgument(j_54, 1);
                                  {
                                    ATerm r_55 = NULL,s_55 = NULL,t_55 = NULL;
                                    ATerm u_55 = NULL;
                                    t = not_null(k_54);
                                    {
                                      ATerm v_55 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        u_55 = t;
                                        {
                                          if(((s_55 != NULL) && (s_55 != u_55)))
                                            _fail(u_55);
                                          else
                                            s_55 = u_55;
                                          {
                                            t = not_null(k_54);
                                            {
                                              ATerm w_55 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                v_55 = t;
                                                {
                                                  if(((r_55 != NULL) && (r_55 != v_55)))
                                                    _fail(v_55);
                                                  else
                                                    r_55 = v_55;
                                                  {
                                                    t = not_null(i_54);
                                                    {
                                                      ATerm x_2 (ATerm t)
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
                                                      t = filter_1(t, x_2);
                                                      {
                                                        ATerm y_2 (ATerm t)
                                                        {
                                                          ATerm a_3 (ATerm t)
                                                          {
                                                            t = term_s_11;
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
                                                              t = not_null(r_55);
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
                                                            t = not_null(s_55);
                                                            return(t);
                                                          }
                                                          t = separate_by_1(t, d_3);
                                                          {
                                                            w_55 = t;
                                                            if(((t_55 != NULL) && (t_55 != w_55)))
                                                              _fail(w_55);
                                                            else
                                                              t_55 = w_55;
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
                                    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, not_null(t_55))), term_x_13);
                                  }
                                }
                              else
                                {
                                  if(match_cons(j_54, sym_H_2))
                                    {
                                      k_54 = ATgetArgument(j_54, 0);
                                      i_54 = ATgetArgument(j_54, 1);
                                      {
                                        ATerm z_55 = NULL,a_56 = NULL;
                                        ATerm b_56 = NULL;
                                        t = not_null(k_54);
                                        {
                                          ATerm c_56 = NULL;
                                          t = Hspace_0(t);
                                          {
                                            b_56 = t;
                                            {
                                              if(((z_55 != NULL) && (z_55 != b_56)))
                                                _fail(b_56);
                                              else
                                                z_55 = b_56;
                                              {
                                                t = not_null(i_54);
                                                {
                                                  ATerm e_3 (ATerm t)
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
                                                  t = filter_1(t, e_3);
                                                  {
                                                    ATerm f_3 (ATerm t)
                                                    {
                                                      t = not_null(z_55);
                                                      return(t);
                                                    }
                                                    t = sep_by_1(t, f_3);
                                                    {
                                                      c_56 = t;
                                                      if(((a_56 != NULL) && (a_56 != c_56)))
                                                        _fail(c_56);
                                                      else
                                                        a_56 = c_56;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = not_null(a_56);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(j_54, sym_FBOX_2))
                                        {
                                          k_54 = ATgetArgument(j_54, 0);
                                          i_54 = ATgetArgument(j_54, 1);
                                          {
                                            ATerm f_56 = NULL;
                                            ATerm g_56 = NULL;
                                            t = not_null(k_54);
                                            {
                                              ATerm a_14 = t;
                                              int b_14 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = KW_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_c_14), (ATerm) ATinsert(ATempty, not_null(i_54)));
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
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_m_14), (ATerm) ATinsert(ATempty, not_null(i_54)));
                                                        LocalPopChoice(e_14);
                                                      }
                                                    else
                                                      {
                                                        t = d_14;
                                                        {
                                                          ATerm n_14 = t;
                                                          int r_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = NUM_0(t);
                                                              t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_s_14), (ATerm) ATinsert(ATempty, not_null(i_54)));
                                                              LocalPopChoice(r_14);
                                                            }
                                                          else
                                                            {
                                                              t = n_14;
                                                              {
                                                                ATerm v_14 = t;
                                                                int d_15 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = MATH_0(t);
                                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_f_15), (ATerm) ATinsert(ATempty, not_null(i_54)));
                                                                    LocalPopChoice(d_15);
                                                                  }
                                                                else
                                                                  {
                                                                    t = v_14;
                                                                    t = not_null(i_54);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              {
                                                g_56 = t;
                                                if(((f_56 != NULL) && (f_56 != g_56)))
                                                  _fail(g_56);
                                                else
                                                  f_56 = g_56;
                                              }
                                            }
                                            t = not_null(f_56);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(j_54, sym_C_2))
                                            {
                                              k_54 = ATgetArgument(j_54, 0);
                                              i_54 = ATgetArgument(j_54, 1);
                                              g_54 :
                                              if(((ATgetType(k_54) == AT_LIST) && ATisEmpty(k_54)))
                                                {
                                                  {
                                                    ATerm i_56 = NULL,j_56 = NULL;
                                                    ATerm n_56 = NULL;
                                                    t = not_null(i_54);
                                                    {
                                                      ATerm o_56 = NULL;
                                                      ATerm g_3 (ATerm t)
                                                      {
                                                        ATerm k_56 = NULL,l_56 = NULL;
                                                        k_56 = t;
                                                        c_54 :
                                                        if(match_cons(k_56, sym_S_1))
                                                          {
                                                            l_56 = ATgetArgument(k_56, 0);
                                                            {
                                                              t = not_null(l_56);
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
                                                        n_56 = t;
                                                        {
                                                          if(((i_56 != NULL) && (i_56 != n_56)))
                                                            _fail(n_56);
                                                          else
                                                            i_56 = n_56;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_g_15), (ATerm) ATinsert(ATempty, not_null(i_56))))));
                                                            {
                                                              o_56 = t;
                                                              if(((j_56 != NULL) && (j_56 != o_56)))
                                                                _fail(o_56);
                                                              else
                                                                j_56 = o_56;
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                    t = not_null(j_56);
                                                  }
                                                }
                                              else
                                                {
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(j_54, sym_S_1))
                                                {
                                                  k_54 = ATgetArgument(j_54, 0);
                                                  {
                                                    t = not_null(k_54);
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
ATerm at_last_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm x_57 (ATerm t)
  {
    ATerm h_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = c_77(t);
        LocalPopChoice(j_15);
      }
    else
      {
        t = h_15;
        t = Cons_2(t, _id, x_57);
      }
    return(t);
  }
  t = x_57(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm v_76 (ATerm))
{
  ATerm y_57 (ATerm t)
  {
    ATerm k_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_76(t);
        LocalPopChoice(l_15);
      }
    else
      {
        t = k_15;
        t = Cons_2(t, _id, y_57);
      }
    return(t);
  }
  t = y_57(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm o_76 (ATerm))
{
  ATerm b_58 = NULL,f_58 = NULL;
  ATerm h_3 (ATerm t)
  {
    t = Cons_2(t, o_76, _id);
    {
      ATerm i_3 (ATerm t)
      {
        ATerm c_58 = NULL;
        c_58 = t;
        if(((b_58 != NULL) && (b_58 != c_58)))
          _fail(c_58);
        else
          b_58 = c_58;
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
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_58), not_null(b_58));
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
                    ATerm m_15 = t;
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
                        t = m_15;
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
                              ATerm p_15 = t;
                              int q_15 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = conc_two_lists_0(t);
                                  LocalPopChoice(q_15);
                                }
                              else
                                {
                                  t = p_15;
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
    ATerm r_15 = t;
    int s_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_15 = t;
        int y_15 = stack_ptr;
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
            LocalPopChoice(y_15);
          }
        else
          {
            t = t_15;
            t = Distribute_0(t);
          }
        LocalPopChoice(s_15);
      }
    else
      {
        t = r_15;
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
      ATerm z_15 = t;
      int b_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = Abox2html_0(t);
          LocalPopChoice(b_16);
        }
      else
        {
          t = z_15;
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
ATerm _2 (ATerm t, ATerm u_56 (ATerm), ATerm v_56 (ATerm))
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
  z_60 = t;
  y_60 :
  if(match_cons(z_60, sym__2))
    {
      a_61 = ATgetArgument(z_60, 0);
      b_61 = ATgetArgument(z_60, 1);
      {
        ATerm f_61 = NULL,h_61 = NULL;
        ATerm g_61 = NULL;
        t = SSLgetAnnotations(not_null(z_60));
        {
          g_61 = t;
          if(((f_61 != NULL) && (f_61 != g_61)))
            _fail(g_61);
          else
            f_61 = g_61;
        }
        {
          t = not_null(a_61);
          {
            ATerm j_61 = NULL;
            t = u_56(t);
            {
              h_61 = t;
              {
                t = not_null(b_61);
                {
                  ATerm l_61 = NULL;
                  t = v_56(t);
                  {
                    j_61 = t;
                    {
                      ATerm m_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(h_61), not_null(j_61)), not_null(f_61));
                      {
                        m_61 = t;
                        if(((l_61 != NULL) && (l_61 != m_61)))
                          _fail(m_61);
                        else
                          l_61 = m_61;
                      }
                      t = not_null(l_61);
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
  ATerm t_61 = NULL;
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_61 = NULL;
      u_61 = t;
      {
        if(((t_61 != NULL) && (t_61 != u_61)))
          _fail(u_61);
        else
          t_61 = u_61;
        t = SSL_ReadFromFile(not_null(t_61));
      }
      LocalPopChoice(d_16);
    }
  else
    {
      t = c_16;
      {
        ATerm o_3 (ATerm t)
        {
          t = term_f_16;
          return(t);
        }
        t = debug_1(t, o_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm z_61 = NULL;
  ATerm h_16;
  h_16 = t;
  {
    ATerm i_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_3 (ATerm t)
        {
          ATerm a_62 = NULL,b_62 = NULL;
          a_62 = t;
          x_61 :
          if(match_cons(a_62, sym_Input_1))
            {
              b_62 = ATgetArgument(a_62, 0);
              if(((z_61 != NULL) && (z_61 != b_62)))
                _fail(b_62);
              else
                z_61 = b_62;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, p_3);
        LocalPopChoice(o_16);
      }
    else
      {
        t = i_16;
        {
          ATerm c_62 = NULL;
          t = term_u_16;
          {
            c_62 = t;
            if(((z_61 != NULL) && (z_61 != c_62)))
              _fail(c_62);
            else
              z_61 = c_62;
          }
        }
      }
  }
  t = h_16;
  {
    ATerm q_3 (ATerm t)
    {
      t = not_null(z_61);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, q_3);
  }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm h_87 (ATerm))
{
  ATerm v_16;
  v_16 = t;
  {
    t = h_87(t);
    {
      ATerm r_3 (ATerm t)
      {
        t = term_w_16;
        return(t);
      }
      t = debug_1(t, r_3);
    }
  }
  t = v_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm j_62 = NULL,k_62 = NULL;
  ATerm a_17 = t;
  int b_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL;
      l_62 = t;
      g_62 :
      if(match_cons(l_62, sym__2))
        {
          m_62 = ATgetArgument(l_62, 0);
          n_62 = ATgetArgument(l_62, 1);
          {
            if(((k_62 != NULL) && (k_62 != m_62)))
              _fail(m_62);
            else
              k_62 = m_62;
            if(((j_62 != NULL) && (j_62 != n_62)))
              _fail(n_62);
            else
              j_62 = n_62;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(b_17);
      t = SSL_open_file(not_null(k_62), not_null(j_62));
    }
  else
    {
      t = a_17;
      {
        ATerm o_62 = NULL;
        ATerm p_62 = NULL;
        ATerm s_3 (ATerm t)
        {
          t = term_c_17;
          return(t);
        }
        t = obsolete_1(t, s_3);
        {
          o_62 = t;
          {
            if(((k_62 != NULL) && (k_62 != o_62)))
              _fail(o_62);
            else
              k_62 = o_62;
            {
              ATerm i_17;
              i_17 = t;
              {
                ATerm q_62 = NULL;
                t = term_j_17;
                {
                  q_62 = t;
                  if(((p_62 != NULL) && (p_62 != q_62)))
                    _fail(q_62);
                  else
                    p_62 = q_62;
                }
              }
              t = i_17;
              t = SSL_open_file(not_null(k_62), not_null(p_62));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_76 (ATerm))
{
  ATerm u_62 (ATerm t)
  {
    ATerm k_17 = t;
    int o_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_76, _id);
        LocalPopChoice(o_17);
      }
    else
      {
        t = k_17;
        t = Cons_2(t, _id, u_62);
      }
    return(t);
  }
  t = u_62(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm z_90 (ATerm))
{
  t = fetch_1(t, z_90);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm x_62 = NULL;
  ATerm q_17;
  q_17 = t;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm y_62 = NULL,z_62 = NULL;
      y_62 = t;
      w_62 :
      if(match_cons(y_62, sym_Program_1))
        {
          z_62 = ATgetArgument(y_62, 0);
          if(((x_62 != NULL) && (x_62 != z_62)))
            _fail(z_62);
          else
            x_62 = z_62;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, t_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_t_17), not_null(x_62)), term_r_17));
      {
        t = printnl_0(t);
        {
          t = term_d_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_17;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm f_63 = NULL;
  f_63 = t;
  e_63 :
  if(match_cons(f_63, sym_Version_0))
    {
      ATerm h_63 = NULL,j_63 = NULL;
      ATerm u_17;
      u_17 = t;
      {
        ATerm i_63 = NULL;
        t = SSLgetAnnotations(not_null(f_63));
        {
          i_63 = t;
          if(((h_63 != NULL) && (h_63 != i_63)))
            _fail(i_63);
          else
            h_63 = i_63;
        }
      }
      t = u_17;
      {
        ATerm k_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(h_63));
        {
          k_63 = t;
          if(((j_63 != NULL) && (j_63 != k_63)))
            _fail(k_63);
          else
            j_63 = k_63;
        }
        t = not_null(j_63);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm c_88 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm v_17 = t;
    int w_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(w_17);
      }
    else
      {
        t = v_17;
        {
          ATerm x_17 = t;
          int y_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(y_17);
            }
          else
            {
              t = x_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, u_3);
  t = c_88(t);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm p_63 = NULL;
    p_63 = t;
    o_63 :
    if(!(match_string(p_63, "-v")))
      {
        if(!(match_string(p_63, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_a_18;
    t = set_config_0(t);
    t = term_b_18;
    return(t);
  }
  ATerm x_3 (ATerm t)
  {
    t = term_c_18;
    return(t);
  }
  t = Option_3(t, v_3, w_3, x_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm s_63 = NULL;
    s_63 = t;
    q_63 :
    if(!(match_string(s_63, "-k")))
      {
        if(!(match_string(s_63, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    ATerm f_18;
    f_18 = t;
    {
      ATerm t_63 = NULL;
      ATerm u_63 = NULL;
      t = string_to_int_0(t);
      {
        u_63 = t;
        if(((t_63 != NULL) && (t_63 != u_63)))
          _fail(u_63);
        else
          t_63 = u_63;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_k_18, not_null(t_63));
        t = set_config_0(t);
      }
    }
    t = f_18;
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_p_18;
    return(t);
  }
  t = ArgOption_3(t, y_3, z_3, a_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_63 = NULL;
  x_63 = t;
  t = SSL_string_to_int(not_null(x_63));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_18 = t;
  int r_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
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
      ATerm c_4 (ATerm t)
      {
        t = term_s_18;
        t = set_config_0(t);
        t = term_t_18;
        return(t);
      }
      ATerm d_4 (ATerm t)
      {
        t = term_u_18;
        return(t);
      }
      t = Option_3(t, b_4, c_4, d_4);
      LocalPopChoice(r_18);
    }
  else
    {
      t = q_18;
      {
        ATerm v_18 = t;
        int w_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
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
            ATerm f_4 (ATerm t)
            {
              ATerm l_64 = NULL;
              ATerm x_18;
              x_18 = t;
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
                  t = (ATerm) ATmakeAppl(sym__2, term_h_6, not_null(j_64));
                  t = set_config_0(t);
                }
              }
              t = x_18;
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
            ATerm g_4 (ATerm t)
            {
              t = term_y_18;
              return(t);
            }
            t = ArgOption_3(t, e_4, f_4, g_4);
            LocalPopChoice(w_18);
          }
        else
          {
            t = v_18;
            {
              ATerm h_4 (ATerm t)
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
              ATerm i_4 (ATerm t)
              {
                t = term_a_19;
                t = set_config_0(t);
                t = term_d_19;
                return(t);
              }
              ATerm j_4 (ATerm t)
              {
                t = term_i_19;
                return(t);
              }
              t = Option_3(t, h_4, i_4, j_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm n_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(o_19);
    }
  else
    {
      t = n_19;
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_4 (ATerm t)
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
  ATerm m_4 (ATerm t)
  {
    ATerm w_64 = NULL;
    ATerm r_19;
    r_19 = t;
    {
      ATerm u_64 = NULL;
      ATerm v_64 = NULL;
      v_64 = t;
      if(((u_64 != NULL) && (u_64 != v_64)))
        _fail(v_64);
      else
        u_64 = v_64;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_19, not_null(u_64));
        t = set_config_0(t);
      }
    }
    t = r_19;
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
  ATerm n_4 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  t = ArgOption_3(t, k_4, m_4, n_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm u_19 = t;
  int v_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(v_19);
    }
  else
    {
      t = u_19;
      {
        ATerm o_4 (ATerm t)
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
        ATerm q_4 (ATerm t)
        {
          t = term_x_19;
          t = set_config_0(t);
          t = term_y_19;
          return(t);
        }
        ATerm s_4 (ATerm t)
        {
          t = term_b_20;
          return(t);
        }
        t = Option_3(t, o_4, q_4, s_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL,k_65 = NULL,l_65 = NULL;
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
              k_65 = ATgetFirst((ATermList) j_65);
              l_65 = (ATerm) ATgetNext((ATermList) j_65);
              {
                ATerm p_65 = NULL;
                ATerm g_20;
                g_20 = t;
                {
                  t = not_null(i_65);
                  t = j_0(t);
                }
                t = g_20;
                {
                  ATerm q_65 = NULL;
                  t = not_null(k_65);
                  {
                    t = k_0(t);
                    {
                      q_65 = t;
                      if(((p_65 != NULL) && (p_65 != q_65)))
                        _fail(q_65);
                      else
                        p_65 = q_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_65)), not_null(p_65));
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
  ATerm t_4 (ATerm t)
  {
    ATerm x_65 = NULL;
    x_65 = t;
    u_65 :
    if(!(match_string(x_65, "-i")))
      {
        if(!(match_string(x_65, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_4 (ATerm t)
  {
    ATerm a_66 = NULL;
    ATerm l_20;
    l_20 = t;
    {
      ATerm y_65 = NULL;
      ATerm z_65 = NULL;
      z_65 = t;
      if(((y_65 != NULL) && (y_65 != z_65)))
        _fail(z_65);
      else
        y_65 = z_65;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_m_20, not_null(y_65));
        t = set_config_0(t);
      }
    }
    t = l_20;
    {
      ATerm b_66 = NULL;
      b_66 = t;
      if(((a_66 != NULL) && (a_66 != b_66)))
        _fail(b_66);
      else
        a_66 = b_66;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(a_66));
    }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_n_20;
    return(t);
  }
  t = ArgOption_3(t, t_4, u_4, w_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm f_66 = NULL;
  f_66 = t;
  t = SSL_table_destroy(not_null(f_66));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_66 = NULL;
  j_66 = t;
  t = SSL_exit(not_null(j_66));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm n_66 = NULL,o_66 = NULL,p_66 = NULL;
  n_66 = t;
  m_66 :
  if(((ATgetType(n_66) == AT_LIST) && ATisEmpty(n_66)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(n_66) == AT_LIST) && !(ATisEmpty(n_66))))
        {
          o_66 = ATgetFirst((ATermList) n_66);
          p_66 = (ATerm) ATgetNext((ATermList) n_66);
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
  ATerm s_20;
  s_20 = t;
  {
    ATerm s_66 = NULL;
    ATerm v_66 = NULL;
    ATerm t_20 = t;
    int u_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(u_20);
      }
    else
      {
        t = t_20;
        {
          ATerm t_66 = NULL;
          ATerm u_66 = NULL;
          u_66 = t;
          if(((t_66 != NULL) && (t_66 != u_66)))
            _fail(u_66);
          else
            t_66 = u_66;
          t = (ATerm) ATinsert(ATempty, not_null(t_66));
        }
      }
    {
      v_66 = t;
      if(((s_66 != NULL) && (s_66 != v_66)))
        _fail(v_66);
      else
        s_66 = v_66;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_20, not_null(s_66));
      t = printnl_0(t);
    }
  }
  t = s_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm a_92 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_67 = NULL,f_67 = NULL,g_67 = NULL;
  g_67 = t;
  d_67 :
  if(((ATgetType(g_67) == AT_LIST) && !(ATisEmpty(g_67))))
    {
      e_67 = ATgetFirst((ATermList) g_67);
      f_67 = (ATerm) ATgetNext((ATermList) g_67);
      {
        ATerm j_67 = NULL;
        t = not_null(f_67);
        {
          ATerm w_20;
          w_20 = t;
          {
            ATerm k_67 = NULL,m_67 = NULL,o_67 = NULL;
            ATerm z_20;
            z_20 = t;
            {
              ATerm l_67 = NULL;
              t = i_0(t);
              {
                l_67 = t;
                if(((k_67 != NULL) && (k_67 != l_67)))
                  _fail(l_67);
                else
                  k_67 = l_67;
              }
            }
            t = z_20;
            {
              ATerm n_67 = NULL;
              t = not_null(e_67);
              {
                t = h_0(t);
                {
                  n_67 = t;
                  if(((m_67 != NULL) && (m_67 != n_67)))
                    _fail(n_67);
                  else
                    m_67 = n_67;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(k_67)), not_null(m_67));
                {
                  o_67 = t;
                  if(((j_67 != NULL) && (j_67 != o_67)))
                    _fail(o_67);
                  else
                    j_67 = o_67;
                }
              }
            }
          }
          t = w_20;
          {
            ATerm y_4 (ATerm t)
            {
              t = not_null(j_67);
              return(t);
            }
            t = reverse_acc_2(t, h_0, y_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(g_67) == AT_LIST) && ATisEmpty(g_67)))
        {
          {
            t = term_a_11;
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
  ATerm z_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm z_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_63 (ATerm))
{
  ATerm z_67 = NULL,a_68 = NULL;
  z_67 = t;
  y_67 :
  if(match_cons(z_67, sym_Program_1))
    {
      a_68 = ATgetArgument(z_67, 0);
      {
        ATerm d_68 = NULL,m_68 = NULL;
        ATerm e_68 = NULL;
        t = SSLgetAnnotations(not_null(z_67));
        {
          e_68 = t;
          if(((d_68 != NULL) && (d_68 != e_68)))
            _fail(e_68);
          else
            d_68 = e_68;
        }
        {
          t = not_null(a_68);
          {
            ATerm o_68 = NULL;
            t = y_63(t);
            {
              m_68 = t;
              {
                ATerm p_68 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_68)), not_null(d_68));
                {
                  p_68 = t;
                  if(((o_68 != NULL) && (o_68 != p_68)))
                    _fail(p_68);
                  else
                    o_68 = p_68;
                }
                t = not_null(o_68);
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
  ATerm x_68 = NULL;
  ATerm e_21 = t;
  int j_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_68 = NULL;
      t = term_j_6;
      {
        t = get_config_0(t);
        {
          y_68 = t;
          if(((x_68 != NULL) && (x_68 != y_68)))
            _fail(y_68);
          else
            x_68 = y_68;
        }
      }
      LocalPopChoice(j_21);
    }
  else
    {
      t = e_21;
      {
        ATerm a_5 (ATerm t)
        {
          ATerm b_5 (ATerm t)
          {
            ATerm z_68 = NULL;
            z_68 = t;
            if(((x_68 != NULL) && (x_68 != z_68)))
              _fail(z_68);
            else
              x_68 = z_68;
            return(t);
          }
          t = Program_1(t, b_5);
          return(t);
        }
        t = fetch_1(t, a_5);
      }
    }
  {
    t = term_k_21;
    {
      t = echo_0(t);
      {
        t = term_n_21;
        {
          t = table_get_0(t);
          {
            ATerm c_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, c_5);
            {
              ATerm d_5 (ATerm t)
              {
                ATerm a_69 = NULL;
                ATerm b_69 = NULL;
                b_69 = t;
                if(((a_69 != NULL) && (a_69 != b_69)))
                  _fail(b_69);
                else
                  a_69 = b_69;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(a_69)), term_o_21);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, d_5);
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
  ATerm p_21;
  p_21 = t;
  {
    ATerm g_69 = NULL;
    ATerm h_69 = NULL;
    h_69 = t;
    if(((g_69 != NULL) && (g_69 != h_69)))
      _fail(h_69);
    else
      g_69 = h_69;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATempty, not_null(g_69)));
      t = printnl_0(t);
    }
  }
  t = p_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm b_87 (ATerm))
{
  ATerm r_21;
  r_21 = t;
  {
    t = b_87(t);
    t = debug_0(t);
  }
  t = r_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm z_63 (ATerm))
{
  ATerm o_69 = NULL,p_69 = NULL;
  o_69 = t;
  n_69 :
  if(match_cons(o_69, sym_Undefined_1))
    {
      p_69 = ATgetArgument(o_69, 0);
      {
        ATerm y_69 = NULL,c_70 = NULL;
        ATerm b_70 = NULL;
        t = SSLgetAnnotations(not_null(o_69));
        {
          b_70 = t;
          if(((y_69 != NULL) && (y_69 != b_70)))
            _fail(b_70);
          else
            y_69 = b_70;
        }
        {
          t = not_null(p_69);
          {
            ATerm e_70 = NULL;
            t = z_63(t);
            {
              c_70 = t;
              {
                ATerm f_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(c_70)), not_null(y_69));
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
ATerm Help_0 (ATerm t)
{
  ATerm o_70 = NULL;
  o_70 = t;
  n_70 :
  if(match_cons(o_70, sym_Help_0))
    {
      ATerm q_70 = NULL,s_70 = NULL;
      ATerm s_21;
      s_21 = t;
      {
        ATerm r_70 = NULL;
        t = SSLgetAnnotations(not_null(o_70));
        {
          r_70 = t;
          if(((q_70 != NULL) && (q_70 != r_70)))
            _fail(r_70);
          else
            q_70 = r_70;
        }
      }
      t = s_21;
      {
        ATerm t_70 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_70));
        {
          t_70 = t;
          if(((s_70 != NULL) && (s_70 != t_70)))
            _fail(t_70);
          else
            s_70 = t_70;
        }
        t = not_null(s_70);
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
  ATerm y_70 = NULL;
  y_70 = t;
  t = SSL_implode_string(not_null(y_70));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm t_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(y_21);
    }
  else
    {
      t = t_21;
      {
        ATerm d_71 = NULL,e_71 = NULL,f_71 = NULL;
        d_71 = t;
        c_71 :
        if(((ATgetType(d_71) == AT_LIST) && !(ATisEmpty(d_71))))
          {
            e_71 = ATgetFirst((ATermList) d_71);
            f_71 = (ATerm) ATgetNext((ATermList) d_71);
            {
              t = not_null(e_71);
              {
                ATerm e_5 (ATerm t)
                {
                  t = not_null(f_71);
                  t = concat_0(t);
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
          n_71 :
          if(match_cons(w_71, sym__2))
            {
              x_71 = ATgetArgument(w_71, 0);
              y_71 = ATgetArgument(w_71, 1);
              o_71 :
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
ATerm at_end_1 (ATerm t, ATerm r_76 (ATerm))
{
  ATerm c_72 (ATerm t)
  {
    ATerm z_21 = t;
    int a_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_72);
        LocalPopChoice(a_22);
      }
    else
      {
        t = z_21;
        {
          t = Nil_0(t);
          t = r_76(t);
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
          ATerm f_5 (ATerm t)
          {
            t = not_null(h_72);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm b_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = b_22;
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
    ATerm d_22 = t;
    int e_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(e_22);
      }
    else
      {
        t = d_22;
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
        ATerm f_22;
        f_22 = t;
        t = SSL_printnl(not_null(s_72), not_null(t_72));
        t = f_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm a_87 (ATerm))
{
  ATerm i_22;
  i_22 = t;
  {
    ATerm z_72 = NULL,b_73 = NULL;
    ATerm n_22;
    n_22 = t;
    {
      ATerm a_73 = NULL;
      t = a_87(t);
      {
        a_73 = t;
        if(((z_72 != NULL) && (z_72 != a_73)))
          _fail(a_73);
        else
          z_72 = a_73;
      }
    }
    t = n_22;
    {
      ATerm c_73 = NULL;
      c_73 = t;
      if(((b_73 != NULL) && (b_73 != c_73)))
        _fail(c_73);
      else
        b_73 = c_73;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_5, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_73)), not_null(z_72)));
        t = printnl_0(t);
      }
    }
  }
  t = i_22;
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_76 (ATerm))
{
  ATerm f_73 (ATerm t)
  {
    ATerm s_22 = t;
    int t_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_22);
      }
    else
      {
        t = s_22;
        t = Cons_2(t, c_76, f_73);
      }
    return(t);
  }
  t = f_73(t);
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_22 = t;
  int v_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_22);
    }
  else
    {
      t = u_22;
      {
        ATerm w_22 = t;
        int x_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              ATerm y_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = y_22;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, g_5);
            LocalPopChoice(x_22);
          }
        else
          {
            t = w_22;
            {
              ATerm m_73 = NULL,n_73 = NULL,o_73 = NULL;
              m_73 = t;
              l_73 :
              if(match_cons(m_73, sym_Path_1))
                {
                  n_73 = ATgetArgument(m_73, 0);
                  t = not_null(n_73);
                }
              else
                {
                  if(match_cons(m_73, sym_Var_1))
                    {
                      n_73 = ATgetArgument(m_73, 0);
                      {
                        t = not_null(n_73);
                        {
                          ATerm a_23 = t;
                          int f_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(f_23);
                            }
                          else
                            {
                              t = a_23;
                              {
                                ATerm h_5 (ATerm t)
                                {
                                  t = term_g_23;
                                  return(t);
                                }
                                t = debug_1(t, h_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(m_73, sym_Prefix_2))
                        {
                          n_73 = ATgetArgument(m_73, 0);
                          o_73 = ATgetArgument(m_73, 1);
                          {
                            ATerm t_73 = NULL,v_73 = NULL;
                            ATerm h_23;
                            h_23 = t;
                            {
                              ATerm u_73 = NULL;
                              t = not_null(n_73);
                              {
                                t = eval_config_0(t);
                                {
                                  u_73 = t;
                                  if(((t_73 != NULL) && (t_73 != u_73)))
                                    _fail(u_73);
                                  else
                                    t_73 = u_73;
                                }
                              }
                            }
                            t = h_23;
                            {
                              ATerm w_73 = NULL;
                              t = not_null(o_73);
                              {
                                t = eval_config_0(t);
                                {
                                  w_73 = t;
                                  if(((v_73 != NULL) && (v_73 != w_73)))
                                    _fail(w_73);
                                  else
                                    v_73 = w_73;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(t_73), not_null(v_73));
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
  ATerm e_74 = NULL;
  e_74 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_i_23, not_null(e_74));
    {
      t = table_get_0(t);
      {
        ATerm j_23 = t;
        int k_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm l_23;
              l_23 = t;
              {
                ATerm g_74 = NULL;
                ATerm h_74 = NULL;
                h_74 = t;
                if(((g_74 != NULL) && (g_74 != h_74)))
                  _fail(h_74);
                else
                  g_74 = h_74;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_i_23, not_null(e_74), not_null(g_74));
                  t = table_put_0(t);
                }
              }
              t = l_23;
            }
            LocalPopChoice(k_23);
          }
        else
          {
            t = j_23;
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
  ATerm m_74 = NULL,n_74 = NULL,o_74 = NULL;
  m_74 = t;
  l_74 :
  if(match_cons(m_74, sym__2))
    {
      n_74 = ATgetArgument(m_74, 0);
      o_74 = ATgetArgument(m_74, 1);
      t = SSL_table_get(not_null(n_74), not_null(o_74));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL,y_74 = NULL;
  v_74 = t;
  u_74 :
  if(match_cons(v_74, sym__3))
    {
      w_74 = ATgetArgument(v_74, 0);
      x_74 = ATgetArgument(v_74, 1);
      y_74 = ATgetArgument(v_74, 2);
      {
        ATerm m_23;
        m_23 = t;
        {
          ATerm c_75 = NULL;
          ATerm d_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_74), not_null(x_74));
          {
            ATerm n_23 = t;
            int o_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(o_23);
              }
            else
              {
                t = n_23;
                t = (ATerm) ATempty;
              }
            {
              d_75 = t;
              if(((c_75 != NULL) && (c_75 != d_75)))
                _fail(d_75);
              else
                c_75 = d_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_74), not_null(x_74), (ATerm) ATinsert(CheckATermList(not_null(c_75)), not_null(y_74)));
            t = table_put_0(t);
          }
        }
        t = m_23;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm e_92 (ATerm))
{
  ATerm h_75 = NULL;
  ATerm i_75 = NULL;
  t = term_a_11;
  {
    t = e_92(t);
    {
      i_75 = t;
      if(((h_75 != NULL) && (h_75 != i_75)))
        _fail(i_75);
      else
        h_75 = i_75;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_l_21, term_m_21, not_null(h_75));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL;
  o_75 = t;
  n_75 :
  if(match_string(o_75, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_75) == AT_LIST) && !(ATisEmpty(o_75))))
        {
          p_75 = ATgetFirst((ATermList) o_75);
          q_75 = (ATerm) ATgetNext((ATermList) o_75);
          {
            ATerm t_75 = NULL;
            ATerm p_23;
            p_23 = t;
            {
              t = not_null(p_75);
              t = a_0(t);
            }
            t = p_23;
            {
              ATerm u_75 = NULL;
              t = term_a_11;
              {
                t = d_0(t);
                {
                  u_75 = t;
                  if(((t_75 != NULL) && (t_75 != u_75)))
                    _fail(u_75);
                  else
                    t_75 = u_75;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_75)), not_null(t_75));
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
  ATerm i_5 (ATerm t)
  {
    ATerm e_76 = NULL;
    e_76 = t;
    b_76 :
    if(!(match_string(e_76, "--help")))
      {
        if(!(match_string(e_76, "-h")))
          {
            if(!(match_string(e_76, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm j_5 (ATerm t)
  {
    t = term_r_23;
    {
      t = set_config_0(t);
      t = term_s_23;
    }
    return(t);
  }
  ATerm k_5 (ATerm t)
  {
    t = term_t_23;
    return(t);
  }
  t = Option_3(t, i_5, j_5, k_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm h_76 = NULL,i_76 = NULL,j_76 = NULL;
  h_76 = t;
  g_76 :
  if(((ATgetType(h_76) == AT_LIST) && !(ATisEmpty(h_76))))
    {
      i_76 = ATgetFirst((ATermList) h_76);
      j_76 = (ATerm) ATgetNext((ATermList) h_76);
      t = (ATerm) ATinsert(CheckATermList(not_null(j_76)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(i_76)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_58 (ATerm), ATerm e_58 (ATerm))
{
  ATerm a_77 = NULL,b_77 = NULL,e_77 = NULL;
  a_77 = t;
  z_76 :
  if(((ATgetType(a_77) == AT_LIST) && !(ATisEmpty(a_77))))
    {
      b_77 = ATgetFirst((ATermList) a_77);
      e_77 = (ATerm) ATgetNext((ATermList) a_77);
      {
        ATerm i_77 = NULL,m_77 = NULL;
        ATerm l_77 = NULL;
        t = SSLgetAnnotations(not_null(a_77));
        {
          l_77 = t;
          if(((i_77 != NULL) && (i_77 != l_77)))
            _fail(l_77);
          else
            i_77 = l_77;
        }
        {
          t = not_null(b_77);
          {
            ATerm o_77 = NULL;
            t = d_58(t);
            {
              m_77 = t;
              {
                t = not_null(e_77);
                {
                  ATerm q_77 = NULL;
                  t = e_58(t);
                  {
                    o_77 = t;
                    {
                      ATerm r_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_77)), not_null(m_77)), not_null(i_77));
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
        ATerm u_23;
        u_23 = t;
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
        t = u_23;
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
        t = (ATerm) ATmakeAppl(sym__3, term_i_23, not_null(n_78), not_null(o_78));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm c_92 (ATerm))
{
  ATerm v_23;
  v_23 = t;
  {
    ATerm w_23 = t;
    int x_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_y_23;
        t = c_92(t);
        LocalPopChoice(x_23);
      }
    else
      {
        t = w_23;
        {
        }
      }
  }
  t = v_23;
  {
    ATerm l_5 (ATerm t)
    {
      ATerm w_78 = NULL;
      ATerm z_23;
      z_23 = t;
      {
        ATerm u_78 = NULL;
        ATerm v_78 = NULL;
        v_78 = t;
        if(((u_78 != NULL) && (u_78 != v_78)))
          _fail(v_78);
        else
          u_78 = v_78;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(u_78));
          t = set_config_0(t);
        }
      }
      t = z_23;
      {
        ATerm x_78 = NULL;
        x_78 = t;
        if(((w_78 != NULL) && (w_78 != x_78)))
          _fail(x_78);
        else
          w_78 = x_78;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_78));
      }
      return(t);
    }
    ATerm m_5 (ATerm t)
    {
      ATerm a_24 = t;
      int b_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              {
                t = c_92(t);
                t = Cons_2(t, _id, m_5);
              }
            }
          LocalPopChoice(b_24);
        }
      else
        {
          t = a_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, l_5, m_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
  ATerm e_24;
  e_24 = t;
  {
    ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL;
    g_79 = t;
    c_79 :
    if(match_cons(g_79, sym__3))
      {
        h_79 = ATgetArgument(g_79, 0);
        i_79 = ATgetArgument(g_79, 1);
        j_79 = ATgetArgument(g_79, 2);
        {
          if(((d_79 != NULL) && (d_79 != h_79)))
            _fail(h_79);
          else
            d_79 = h_79;
          {
            if(((e_79 != NULL) && (e_79 != i_79)))
              _fail(i_79);
            else
              e_79 = i_79;
            {
              if(((f_79 != NULL) && (f_79 != j_79)))
                _fail(j_79);
              else
                f_79 = j_79;
              t = SSL_table_put(not_null(d_79), not_null(e_79), not_null(f_79));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = e_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm b_92 (ATerm))
{
  ATerm m_79 = NULL;
  ATerm f_24;
  f_24 = t;
  {
    t = term_g_24;
    t = table_put_0(t);
  }
  t = f_24;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm h_24 = t;
      int i_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = b_92(t);
          LocalPopChoice(i_24);
        }
      else
        {
          t = h_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_5);
    {
      ATerm j_24 = t;
      int k_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_24;
          l_24 = t;
          {
            ATerm m_24 = t;
            int n_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_q_23;
                t = get_config_0(t);
                LocalPopChoice(n_24);
              }
            else
              {
                t = m_24;
                t = fetch_1(t, Help_0);
              }
          }
          t = l_24;
          {
            t = system_usage_0(t);
            {
              t = term_d_6;
              t = exit_0(t);
            }
          }
          LocalPopChoice(k_24);
        }
      else
        {
          t = j_24;
          {
            ATerm o_24 = t;
            int p_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_5 (ATerm t)
                {
                  ATerm p_5 (ATerm t)
                  {
                    ATerm n_79 = NULL;
                    n_79 = t;
                    if(((m_79 != NULL) && (m_79 != n_79)))
                      _fail(n_79);
                    else
                      m_79 = n_79;
                    return(t);
                  }
                  t = Undefined_1(t, p_5);
                  return(t);
                }
                t = fetch_1(t, o_5);
                {
                  ATerm q_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_79)), term_q_24);
                    return(t);
                  }
                  t = say_1(t, q_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_y_5;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(p_24);
              }
            else
              {
                t = o_24;
                {
                }
              }
          }
        }
      {
        ATerm r_24;
        r_24 = t;
        {
          t = term_l_21;
          t = table_destroy_0(t);
        }
        t = r_24;
      }
    }
  }
  return(t);
}
ATerm Abox_2_html_0 (ATerm t)
{
  ATerm v_79 = NULL;
  ATerm x_79 = NULL,y_79 = NULL;
  t = parse_options_1(t, io_options_0);
  {
    v_79 = t;
    {
      ATerm s_24 = t;
      int t_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(t_24);
        }
      else
        {
          t = s_24;
          {
            ATerm u_24 = t;
            int v_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm w_24;
                w_24 = t;
                {
                  ATerm x_24 = t;
                  int y_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm r_5 (ATerm t)
                      {
                        ATerm z_79 = NULL,a_80 = NULL;
                        z_79 = t;
                        r_79 :
                        if(match_cons(z_79, sym_Output_1))
                          {
                            a_80 = ATgetArgument(z_79, 0);
                            if(((y_79 != NULL) && (y_79 != a_80)))
                              _fail(a_80);
                            else
                              y_79 = a_80;
                          }
                        else
                          {
                            _fail(t);
                          }
                        return(t);
                      }
                      t = fetch_1(t, r_5);
                      {
                        t = not_null(y_79);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(y_24);
                    }
                  else
                    {
                      t = x_24;
                      {
                        ATerm b_80 = NULL;
                        t = term_v_20;
                        {
                          b_80 = t;
                          if(((y_79 != NULL) && (y_79 != b_80)))
                            _fail(b_80);
                          else
                            y_79 = b_80;
                        }
                      }
                    }
                }
                t = w_24;
                {
                  t = input_file_0(t);
                  {
                    ATerm s_5 (ATerm t)
                    {
                      ATerm c_80 = NULL;
                      t = abox2html_0(t);
                      {
                        c_80 = t;
                        if(((x_79 != NULL) && (x_79 != c_80)))
                          _fail(c_80);
                        else
                          x_79 = c_80;
                      }
                      return(t);
                    }
                    t = _2(t, _id, s_5);
                    {
                      t = not_null(x_79);
                      {
                        ATerm t_5 (ATerm t)
                        {
                          ATerm z_24 = t;
                          int a_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = is_string_0(t);
                              {
                                ATerm b_25;
                                b_25 = t;
                                {
                                  ATerm u_5 (ATerm t)
                                  {
                                    t = not_null(y_79);
                                    return(t);
                                  }
                                  ATerm v_5 (ATerm t)
                                  {
                                    ATerm d_80 = NULL;
                                    d_80 = t;
                                    t = (ATerm) ATinsert(ATempty, not_null(d_80));
                                    return(t);
                                  }
                                  t = split_2(t, u_5, v_5);
                                  t = print_0(t);
                                }
                                t = b_25;
                              }
                              LocalPopChoice(a_25);
                            }
                          else
                            {
                              t = z_24;
                              {
                              }
                            }
                          return(t);
                        }
                        t = topdown_1(t, t_5);
                        t = report_success_0(t);
                      }
                    }
                  }
                }
                LocalPopChoice(v_24);
              }
            else
              {
                t = u_24;
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

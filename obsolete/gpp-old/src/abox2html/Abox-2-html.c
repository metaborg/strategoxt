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
ATerm term_a_24;
ATerm term_r_23;
ATerm term_j_23;
ATerm term_e_23;
ATerm term_d_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_q_22;
ATerm term_o_22;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_x_20;
ATerm term_s_20;
ATerm term_p_20;
ATerm term_k_20;
ATerm term_u_19;
ATerm term_r_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_r_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_o_18;
ATerm term_n_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_r_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_o_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_t_16;
ATerm term_o_16;
ATerm term_b_16;
ATerm term_y_15;
ATerm term_s_15;
ATerm term_c_15;
ATerm term_a_15;
ATerm term_w_14;
ATerm term_k_14;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_q_13;
ATerm term_m_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_q_12;
ATerm term_n_11;
ATerm term_e_11;
ATerm term_v_10;
ATerm term_t_10;
ATerm term_s_10;
ATerm term_q_10;
ATerm term_c_10;
ATerm term_u_8;
ATerm term_m_8;
ATerm term_l_8;
ATerm term_k_8;
ATerm term_h_8;
ATerm term_e_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_t_7;
ATerm term_s_7;
ATerm term_r_7;
ATerm term_q_7;
ATerm term_p_7;
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
ATerm term_t_6;
ATerm term_s_6;
ATerm term_r_6;
ATerm term_p_6;
ATerm term_n_6;
ATerm term_i_6;
ATerm term_h_6;
ATerm term_g_6;
void init_constant_terms (void)
{
  ATprotect(&(term_g_6));
  term_g_6 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_6));
  term_h_6 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_p_6));
  term_p_6 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_6));
  term_r_6 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_s_6));
  term_s_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_6));
  term_t_6 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_y_6));
  term_y_6 = (ATerm) ATmakeAppl(ATmakeSymbol("<table align=\"left\" border=\"0\" cellspacing=\"0\" cellpadding=\"0\"", 0, ATtrue));
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol(">", 0, ATtrue));
  ATprotect(&(term_a_7));
  term_a_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</table>", 0, ATtrue));
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</tr>", 0, ATtrue));
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td ", 0, ATtrue));
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td>", 0, ATtrue));
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<td>", 0, ATtrue));
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<span ", 0, ATtrue));
  ATprotect(&(term_h_7));
  term_h_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</span>", 0, ATtrue));
  ATprotect(&(term_i_7));
  term_i_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<pre>", 0, ATtrue));
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</pre>", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td></tr>", 0, ATtrue));
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<tr><td>", 0, ATtrue));
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a href=\"", 0, ATtrue));
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\">", 0, ATtrue));
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</a>", 0, ATtrue));
  ATprotect(&(term_q_7));
  term_q_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<a name=\"", 0, ATtrue));
  ATprotect(&(term_r_7));
  term_r_7 = (ATerm) ATmakeAppl(ATmakeSymbol("\"></a>", 0, ATtrue));
  ATprotect(&(term_s_7));
  term_s_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<br>", 0, ATtrue));
  ATprotect(&(term_t_7));
  term_t_7 = (ATerm) ATmakeAppl(ATmakeSymbol("&nbsp;", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol("<hr>", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("</td><td>", 0, ATtrue));
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(39);
  ATprotect(&(term_h_8));
  term_h_8 = (ATerm) ATmakeInt(96);
  ATprotect(&(term_k_8));
  term_k_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&amp;", 0, ATtrue));
  ATprotect(&(term_l_8));
  term_l_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&lt;", 0, ATtrue));
  ATprotect(&(term_m_8));
  term_m_8 = (ATerm) ATmakeAppl(ATmakeSymbol("&gt;", 0, ATtrue));
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(sym_BR_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_NBSP_0);
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("dissuasive library strategy: ", 0, ATtrue));
  ATprotect(&(term_t_10));
  term_t_10 = (ATerm) ATmakeAppl(ATmakeSymbol("separate-by/1; Use separate-by/0 and term wrap patterns: <separate-by> (a, <id>)", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("valign=\"top\"", 0, ATtrue));
  ATprotect(&(term_n_11));
  term_n_11 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"left\"", 0, ATtrue));
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"right\"", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("align=\"center\"", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(sym_HR_0);
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(sym_TDTD_0);
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"keyword\"", 0, ATtrue));
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"variable\"", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"number\"", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("class=\"math\"", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("colspan=\"100\" class=\"comment\"", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-i abox] [-o html] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym__2, term_o_17, term_v_10);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(sym__2, term_p_6, term_n_6);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_Verbose_1, term_n_6);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym__2, term_o_18, term_v_10);
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_v_10);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_s_20, term_x_20);
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym__2, term_a_23, term_v_10);
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym__3, term_s_20, term_x_20, (ATerm) ATempty);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm w_82 (ATerm), ATerm x_82 (ATerm));
ATerm crush_2 (ATerm, ATerm u_81 (ATerm), ATerm v_81 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm c_90 (ATerm));
ATerm report_success_0 (ATerm);
ATerm print_0 (ATerm);
ATerm split_2 (ATerm, ATerm l_84 (ATerm), ATerm m_84 (ATerm));
ATerm is_string_0 (ATerm);
ATerm try_1 (ATerm, ATerm p_68 (ATerm));
ATerm topdown_1 (ATerm, ATerm e_70 (ATerm));
ATerm Html2text_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm f_70 (ATerm));
ATerm html2text_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm u_71 (ATerm));
ATerm replace_quotes_0 (ATerm);
ATerm listtd_1 (ATerm, ATerm p_77 (ATerm));
ATerm html_string_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm remove_trailing_1 (ATerm, ATerm k_96 (ATerm));
ATerm make_html_comment_0 (ATerm);
ATerm MATH_0 (ATerm);
ATerm NUM_0 (ATerm);
ATerm VAR_0 (ATerm);
ATerm KW_0 (ATerm);
ATerm sep_by_1 (ATerm, ATerm l_68 (ATerm));
ATerm filter_1 (ATerm, ATerm z_83 (ATerm));
ATerm HS_0 (ATerm);
ATerm Hspace_0 (ATerm);
ATerm separate_by_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm d_90 (ATerm));
ATerm dissuader_1 (ATerm, ATerm o_87 (ATerm));
ATerm separate_by_1 (ATerm, ATerm e_76 (ATerm));
ATerm LNAT_2 (ATerm, ATerm v_0 (ATerm), ATerm w_0 (ATerm));
ATerm L_2 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm));
ATerm tov_1 (ATerm, ATerm k_68 (ATerm));
ATerm IS_0 (ATerm);
ATerm Ispace_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm while_not_2 (ATerm, ATerm v_69 (ATerm), ATerm w_69 (ATerm));
ATerm for_3 (ATerm, ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm a_70 (ATerm));
ATerm copy_0 (ATerm);
ATerm VS_0 (ATerm);
ATerm SOpt_2 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm Vspace_0 (ATerm);
ATerm AC_1 (ATerm, ATerm q_0 (ATerm));
ATerm AR_1 (ATerm, ATerm p_0 (ATerm));
ATerm AL_1 (ATerm, ATerm o_0 (ATerm));
ATerm aopt_0 (ATerm);
ATerm make_hs_0 (ATerm);
ATerm toa_1 (ATerm, ATerm n_68 (ATerm));
ATerm R_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm construct_rows_0 (ATerm);
ATerm Abox2html_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm i_77 (ATerm));
ATerm at_suffix_1 (ATerm, ATerm b_77 (ATerm));
ATerm split_fetch_1 (ATerm, ATerm u_76 (ATerm));
ATerm Distribute_0 (ATerm);
ATerm normalize_0 (ATerm);
ATerm abox2html_0 (ATerm);
ATerm _2 (ATerm, ATerm y_56 (ATerm), ATerm z_56 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm input_file_0 (ATerm);
ATerm obsolete_1 (ATerm, ATerm n_87 (ATerm));
ATerm open_file_0 (ATerm);
ATerm fetch_1 (ATerm, ATerm r_76 (ATerm));
ATerm option_defined_1 (ATerm, ATerm f_91 (ATerm));
ATerm usage_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_88 (ATerm));
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
ATerm long_description_1 (ATerm, ATerm g_92 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_92 (ATerm));
ATerm Program_1 (ATerm, ATerm c_64 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm h_87 (ATerm));
ATerm Undefined_1 (ATerm, ATerm d_64 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm x_76 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_87 (ATerm));
ATerm map_1 (ATerm, ATerm i_76 (ATerm));
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_92 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_58 (ATerm), ATerm i_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_92 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_92 (ATerm));
ATerm Abox_2_html_0 (ATerm);
ATerm main_0 (ATerm);
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_g_6, (ATerm) ATinsert(ATempty, term_h_6));
  {
    t = printnl_0(t);
    {
      t = term_i_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_0 = NULL;
  c_0 = t;
  t = SSL_TicksToSeconds(not_null(c_0));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm g_1 = NULL,h_1 = NULL,l_1 = NULL;
  g_1 = t;
  f_1 :
  if(match_cons(g_1, sym__2))
    {
      h_1 = ATgetArgument(g_1, 0);
      l_1 = ATgetArgument(g_1, 1);
      {
        ATerm j_6 = t;
        int k_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(h_1), not_null(l_1));
            LocalPopChoice(k_6);
          }
        else
          {
            t = j_6;
            t = SSL_addr(not_null(h_1), not_null(l_1));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm w_82 (ATerm), ATerm x_82 (ATerm))
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = w_82(t);
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm y_1 = NULL,z_1 = NULL,d_2 = NULL;
        y_1 = t;
        x_1 :
        if(((ATgetType(y_1) == AT_LIST) && !(ATisEmpty(y_1))))
          {
            z_1 = ATgetFirst((ATermList) y_1);
            d_2 = (ATerm) ATgetNext((ATermList) y_1);
            {
              ATerm j_2 = NULL;
              ATerm k_2 = NULL;
              t = not_null(d_2);
              {
                t = foldr_2(t, w_82, x_82);
                {
                  k_2 = t;
                  if(((j_2 != NULL) && (j_2 != k_2)))
                    _fail(k_2);
                  else
                    j_2 = k_2;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_1), not_null(j_2));
                t = x_82(t);
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
ATerm crush_2 (ATerm t, ATerm u_81 (ATerm), ATerm v_81 (ATerm))
{
  ATerm x_2 = NULL;
  ATerm e_4 = NULL;
  x_2 = t;
  {
    ATerm f_4 = NULL;
    ATerm k_4 = NULL,l_4 = NULL,p_4 = NULL;
    t = not_null(x_2);
    {
      f_4 = t;
      {
        t = SSL_explode_term(not_null(f_4));
        {
          k_4 = t;
          w_2 :
          if(match_cons(k_4, sym__2))
            {
              l_4 = ATgetArgument(k_4, 0);
              p_4 = ATgetArgument(k_4, 1);
              if(((e_4 != NULL) && (e_4 != p_4)))
                _fail(p_4);
              else
                e_4 = p_4;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_4);
      t = foldr_2(t, u_81, v_81);
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
      t = term_n_6;
      return(t);
    }
    t = crush_2(t, b_0, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    ATerm o_6;
    o_6 = t;
    {
      ATerm x_4 = NULL;
      ATerm o_7 = NULL;
      t = term_p_6;
      {
        t = get_config_0(t);
        {
          o_7 = t;
          if(((x_4 != NULL) && (x_4 != o_7)))
            _fail(o_7);
          else
            x_4 = o_7;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_4), term_i_6);
        t = geq_0(t);
      }
    }
    t = o_6;
    t = c_90(t);
    return(t);
  }
  t = try_1(t, e_0);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_0 (ATerm t)
  {
    ATerm f_8 = NULL,r_8 = NULL;
    ATerm q_6;
    q_6 = t;
    {
      ATerm g_8 = NULL;
      t = run_time_0(t);
      {
        g_8 = t;
        if(((f_8 != NULL) && (f_8 != g_8)))
          _fail(g_8);
        else
          f_8 = g_8;
      }
    }
    t = q_6;
    {
      ATerm s_8 = NULL;
      t = term_r_6;
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
        t = (ATerm) ATmakeAppl(sym__2, term_g_6, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_6), not_null(f_8)), term_s_6), not_null(r_8)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, f_0);
  {
    t = term_n_6;
    t = exit_0(t);
  }
  return(t);
}
ATerm print_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym__2))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      {
        ATerm u_6;
        u_6 = t;
        t = SSL_print(not_null(b_9), not_null(c_9));
        t = u_6;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm i_9 = NULL,k_9 = NULL;
  ATerm v_6;
  v_6 = t;
  {
    ATerm j_9 = NULL;
    t = l_84(t);
    {
      j_9 = t;
      if(((i_9 != NULL) && (i_9 != j_9)))
        _fail(j_9);
      else
        i_9 = j_9;
    }
  }
  t = v_6;
  {
    ATerm l_9 = NULL;
    t = m_84(t);
    {
      l_9 = t;
      if(((k_9 != NULL) && (k_9 != l_9)))
        _fail(l_9);
      else
        k_9 = l_9;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), not_null(k_9));
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_9 = NULL;
  p_9 = t;
  t = SSL_is_string(not_null(p_9));
  return(t);
}
ATerm try_1 (ATerm t, ATerm p_68 (ATerm))
{
  ATerm w_6 = t;
  int x_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = p_68(t);
      LocalPopChoice(x_6);
    }
  else
    {
      t = w_6;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_70 (ATerm))
{
  t = e_70(t);
  {
    ATerm x_0 (ATerm t)
    {
      t = topdown_1(t, e_70);
      return(t);
    }
    t = _all(t, x_0);
  }
  return(t);
}
ATerm Html2text_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL;
  i_10 = t;
  f_10 :
  if(match_cons(i_10, sym_TABLE_2))
    {
      h_10 = ATgetArgument(i_10, 0);
      g_10 = ATgetArgument(i_10, 1);
      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_7), not_null(g_10)), term_z_6), not_null(h_10)), term_y_6);
    }
  else
    {
      if(match_cons(i_10, sym_TR_2))
        {
          h_10 = ATgetArgument(i_10, 0);
          g_10 = ATgetArgument(i_10, 1);
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_c_7), not_null(g_10)), term_z_6), not_null(h_10)), term_b_7);
        }
      else
        {
          if(match_cons(i_10, sym_TD_2))
            {
              h_10 = ATgetArgument(i_10, 0);
              g_10 = ATgetArgument(i_10, 1);
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_7), not_null(g_10)), term_z_6), not_null(h_10)), term_d_7);
            }
          else
            {
              if(match_cons(i_10, sym_TD_p__1))
                {
                  h_10 = ATgetArgument(i_10, 0);
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_f_7), not_null(h_10)), term_e_7);
                }
              else
                {
                  if(match_cons(i_10, sym_SPAN_2))
                    {
                      h_10 = ATgetArgument(i_10, 0);
                      g_10 = ATgetArgument(i_10, 1);
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_7), not_null(g_10)), term_z_6), not_null(h_10)), term_g_7);
                    }
                  else
                    {
                      if(match_cons(i_10, sym_PRE_1))
                        {
                          h_10 = ATgetArgument(i_10, 0);
                          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_7), not_null(h_10)), term_i_7);
                        }
                      else
                        {
                          if(match_cons(i_10, sym_TDTR_1))
                            {
                              h_10 = ATgetArgument(i_10, 0);
                              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_7), not_null(h_10)), term_k_7);
                            }
                          else
                            {
                              if(match_cons(i_10, sym_HREF_2))
                                {
                                  h_10 = ATgetArgument(i_10, 0);
                                  g_10 = ATgetArgument(i_10, 1);
                                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_7), not_null(g_10)), term_n_7), not_null(h_10)), term_m_7);
                                }
                              else
                                {
                                  if(match_cons(i_10, sym_ANCHOR_1))
                                    {
                                      h_10 = ATgetArgument(i_10, 0);
                                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_7), not_null(h_10)), term_q_7);
                                    }
                                  else
                                    {
                                      if(match_cons(i_10, sym_BR_0))
                                        {
                                          t = term_s_7;
                                        }
                                      else
                                        {
                                          if(match_cons(i_10, sym_NBSP_0))
                                            {
                                              t = term_t_7;
                                            }
                                          else
                                            {
                                              if(match_cons(i_10, sym_HR_0))
                                                {
                                                  t = term_u_7;
                                                }
                                              else
                                                {
                                                  if(match_cons(i_10, sym_TDTD_0))
                                                    {
                                                      t = term_v_7;
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
ATerm bottomup_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm y_0 (ATerm t)
  {
    t = bottomup_1(t, f_70);
    return(t);
  }
  t = _all(t, y_0);
  t = f_70(t);
  return(t);
}
ATerm html2text_0 (ATerm t)
{
  ATerm z_0 (ATerm t)
  {
    t = try_1(t, Html2text_0);
    return(t);
  }
  t = bottomup_1(t, z_0);
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm a_14 = NULL,b_14 = NULL;
  ATerm w_7 = t;
  int x_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(x_7);
    }
  else
    {
      t = w_7;
      {
        ATerm y_7 = t;
        int z_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL;
            ATerm h_14 (ATerm t)
            {
              if(((a_14 != NULL) && (a_14 != d_14)))
                _fail(d_14);
              else
                a_14 = d_14;
              {
                if(((b_14 != NULL) && (b_14 != e_14)))
                  _fail(e_14);
                else
                  b_14 = e_14;
                {
                  t = not_null(a_14);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), not_null(b_14));
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
            c_14 = t;
            y_13 :
            if(((ATgetType(c_14) == AT_LIST) && !(ATisEmpty(c_14))))
              {
                d_14 = ATgetFirst((ATermList) c_14);
                e_14 = (ATerm) ATgetNext((ATermList) c_14);
                z_13 :
                if(((ATgetType(d_14) == AT_LIST) && ATisEmpty(d_14)))
                  {
                    {
                      ATerm a_8 = t;
                      int b_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((b_14 != NULL) && (b_14 != e_14)))
                            _fail(e_14);
                          else
                            b_14 = e_14;
                          {
                            ATerm a_1 (ATerm t)
                            {
                              t = not_null(b_14);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, a_1);
                          }
                          LocalPopChoice(b_8);
                        }
                      else
                        {
                          t = a_8;
                          t = h_14(t);
                        }
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
            LocalPopChoice(z_7);
          }
        else
          {
            t = y_7;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm i_14 (ATerm t)
  {
    ATerm c_8 = t;
    int d_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_71(t);
        LocalPopChoice(d_8);
      }
    else
      {
        t = c_8;
        t = _one(t, i_14);
      }
    return(t);
  }
  t = i_14(t);
  return(t);
}
ATerm replace_quotes_0 (ATerm t)
{
  ATerm p_14 = NULL,s_14 = NULL;
  ATerm b_1 (ATerm t)
  {
    ATerm q_14 = NULL;
    q_14 = t;
    j_14 :
    if(!(match_int(q_14, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm c_1 (ATerm t)
  {
    ATerm r_14 = NULL;
    r_14 = t;
    if(((p_14 != NULL) && (p_14 != r_14)))
      _fail(r_14);
    else
      p_14 = r_14;
    return(t);
  }
  t = Cons_2(t, b_1, c_1);
  {
    ATerm x_14 = NULL;
    t = not_null(p_14);
    {
      ATerm d_1 (ATerm t)
      {
        ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL;
        t_14 = t;
        m_14 :
        if(((ATgetType(t_14) == AT_LIST) && !(ATisEmpty(t_14))))
          {
            u_14 = ATgetFirst((ATermList) t_14);
            v_14 = (ATerm) ATgetNext((ATermList) t_14);
            n_14 :
            if(match_int(u_14, 34))
              {
                t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_14)), term_e_8), term_e_8);
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
      t = oncetd_1(t, d_1);
      {
        x_14 = t;
        if(((s_14 != NULL) && (s_14 != x_14)))
          _fail(x_14);
        else
          s_14 = x_14;
      }
    }
    t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(s_14)), term_h_8), term_h_8);
  }
  return(t);
}
ATerm listtd_1 (ATerm t, ATerm p_77 (ATerm))
{
  ATerm b_15 (ATerm t)
  {
    t = p_77(t);
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
          t = Cons_2(t, _id, b_15);
        }
    }
    return(t);
  }
  t = b_15(t);
  return(t);
}
ATerm html_string_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm e_1 (ATerm t)
    {
      t = try_1(t, replace_quotes_0);
      return(t);
    }
    t = listtd_1(t, e_1);
    {
      ATerm i_1 (ATerm t)
      {
        ATerm j_1 (ATerm t)
        {
          ATerm h_15 = NULL;
          h_15 = t;
          g_15 :
          if(match_int(h_15, 32))
            {
              t = term_t_7;
              t = explode_string_0(t);
            }
          else
            {
              if(match_int(h_15, 38))
                {
                  t = term_k_8;
                  t = explode_string_0(t);
                }
              else
                {
                  if(match_int(h_15, 60))
                    {
                      t = term_l_8;
                      t = explode_string_0(t);
                    }
                  else
                    {
                      if(match_int(h_15, 62))
                        {
                          t = term_m_8;
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
        t = try_1(t, j_1);
        return(t);
      }
      t = map_1(t, i_1);
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
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL;
  o_15 = t;
  n_15 :
  if(((ATgetType(o_15) == AT_LIST) && !(ATisEmpty(o_15))))
    {
      p_15 = ATgetFirst((ATermList) o_15);
      q_15 = (ATerm) ATgetNext((ATermList) o_15);
      t = not_null(q_15);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_trailing_1 (ATerm t, ATerm k_96 (ATerm))
{
  ATerm t_15 (ATerm t)
  {
    ATerm n_8 = t;
    int o_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_96, _id);
        {
          t = Tl_0(t);
          t = t_15(t);
        }
        LocalPopChoice(o_8);
      }
    else
      {
        t = n_8;
        {
        }
      }
    return(t);
  }
  t = t_15(t);
  return(t);
}
ATerm make_html_comment_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = reverse_0(t);
    {
      ATerm k_1 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = split_2(t, _id, k_1);
      {
        ATerm i_17 (ATerm t)
        {
          ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL;
          ATerm l_17 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), (ATerm) ATinsert(CheckATermList(not_null(m_16)), not_null(k_16)));
            t = i_17(t);
            return(t);
          }
          i_16 = t;
          c_16 :
          if(match_cons(i_16, sym__2))
            {
              j_16 = ATgetArgument(i_16, 0);
              m_16 = ATgetArgument(i_16, 1);
              d_16 :
              if(((ATgetType(j_16) == AT_LIST) && ATisEmpty(j_16)))
                {
                  {
                    ATerm q_16 = NULL;
                    ATerm s_16 = NULL;
                    t = not_null(m_16);
                    {
                      ATerm m_1 (ATerm t)
                      {
                        ATerm r_16 = NULL;
                        r_16 = t;
                        x_15 :
                        if(!(match_int(r_16, 9)))
                          {
                            if(!(match_int(r_16, 32)))
                              {
                                _fail(t);
                              }
                          }
                        return(t);
                      }
                      t = remove_trailing_1(t, m_1);
                      {
                        t = implode_string_0(t);
                        {
                          s_16 = t;
                          if(((q_16 != NULL) && (q_16 != s_16)))
                            _fail(s_16);
                          else
                            q_16 = s_16;
                        }
                      }
                    }
                    t = (ATerm) ATinsert(ATempty, not_null(q_16));
                  }
                }
              else
                {
                  if(((ATgetType(j_16) == AT_LIST) && !(ATisEmpty(j_16))))
                    {
                      k_16 = ATgetFirst((ATermList) j_16);
                      l_16 = (ATerm) ATgetNext((ATermList) j_16);
                      e_16 :
                      if(match_int(k_16, 10))
                        {
                          ATerm p_8 = t;
                          int q_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm w_16 = NULL,z_16 = NULL;
                              ATerm t_8;
                              t_8 = t;
                              {
                                ATerm y_16 = NULL;
                                t = not_null(m_16);
                                {
                                  ATerm n_1 (ATerm t)
                                  {
                                    ATerm x_16 = NULL;
                                    x_16 = t;
                                    z_15 :
                                    if(!(match_int(x_16, 9)))
                                      {
                                        if(!(match_int(x_16, 32)))
                                          {
                                            _fail(t);
                                          }
                                      }
                                    return(t);
                                  }
                                  t = remove_trailing_1(t, n_1);
                                  {
                                    t = implode_string_0(t);
                                    {
                                      y_16 = t;
                                      if(((w_16 != NULL) && (w_16 != y_16)))
                                        _fail(y_16);
                                      else
                                        w_16 = y_16;
                                    }
                                  }
                                }
                              }
                              t = t_8;
                              {
                                ATerm a_17 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), (ATerm) ATempty);
                                {
                                  t = i_17(t);
                                  {
                                    a_17 = t;
                                    if(((z_16 != NULL) && (z_16 != a_17)))
                                      _fail(a_17);
                                    else
                                      z_16 = a_17;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(z_16)), not_null(w_16));
                              }
                              LocalPopChoice(q_8);
                            }
                          else
                            {
                              t = p_8;
                              t = l_17(t);
                            }
                        }
                      else
                        {
                          t = l_17(t);
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
        t = i_17(t);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm e_17 = NULL;
            e_17 = t;
            f_16 :
            if(!(match_string(e_17, "")))
              {
                _fail(t);
              }
            return(t);
          }
          t = remove_trailing_1(t, o_1);
          {
            t = reverse_0(t);
            {
              ATerm p_1 (ATerm t)
              {
                ATerm f_17 = NULL;
                f_17 = t;
                g_16 :
                if(!(match_string(f_17, "")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = remove_trailing_1(t, p_1);
              {
                ATerm q_1 (ATerm t)
                {
                  ATerm g_17 = NULL;
                  g_17 = t;
                  t = (ATerm) ATinsert(ATinsert(ATempty, term_u_8), not_null(g_17));
                  return(t);
                }
                t = map_1(t, q_1);
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
  ATerm x_17 = NULL;
  x_17 = t;
  w_17 :
  if(match_cons(x_17, sym_MATH_0))
    {
      ATerm v_8 = t;
      int w_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_17 = NULL,b_18 = NULL;
          ATerm x_8;
          x_8 = t;
          {
            ATerm a_18 = NULL;
            t = SSLgetAnnotations(not_null(x_17));
            {
              a_18 = t;
              if(((z_17 != NULL) && (z_17 != a_18)))
                _fail(a_18);
              else
                z_17 = a_18;
            }
          }
          t = x_8;
          {
            ATerm c_18 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(z_17));
            {
              c_18 = t;
              if(((b_18 != NULL) && (b_18 != c_18)))
                _fail(c_18);
              else
                b_18 = c_18;
            }
            t = not_null(b_18);
          }
          LocalPopChoice(w_8);
        }
      else
        {
          t = v_8;
          {
            ATerm e_18 = NULL,g_18 = NULL;
            ATerm y_8;
            y_8 = t;
            {
              ATerm f_18 = NULL;
              t = SSLgetAnnotations(not_null(x_17));
              {
                f_18 = t;
                if(((e_18 != NULL) && (e_18 != f_18)))
                  _fail(f_18);
                else
                  e_18 = f_18;
              }
            }
            t = y_8;
            {
              ATerm h_18 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_MATH_0), not_null(e_18));
              {
                h_18 = t;
                if(((g_18 != NULL) && (g_18 != h_18)))
                  _fail(h_18);
                else
                  g_18 = h_18;
              }
              t = not_null(g_18);
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
  ATerm v_18 = NULL;
  v_18 = t;
  u_18 :
  if(match_cons(v_18, sym_NUM_0))
    {
      ATerm d_9 = t;
      int e_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_18 = NULL,z_18 = NULL;
          ATerm f_9;
          f_9 = t;
          {
            ATerm y_18 = NULL;
            t = SSLgetAnnotations(not_null(v_18));
            {
              y_18 = t;
              if(((x_18 != NULL) && (x_18 != y_18)))
                _fail(y_18);
              else
                x_18 = y_18;
            }
          }
          t = f_9;
          {
            ATerm a_19 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(x_18));
            {
              a_19 = t;
              if(((z_18 != NULL) && (z_18 != a_19)))
                _fail(a_19);
              else
                z_18 = a_19;
            }
            t = not_null(z_18);
          }
          LocalPopChoice(e_9);
        }
      else
        {
          t = d_9;
          {
            ATerm c_19 = NULL,e_19 = NULL;
            ATerm g_9;
            g_9 = t;
            {
              ATerm d_19 = NULL;
              t = SSLgetAnnotations(not_null(v_18));
              {
                d_19 = t;
                if(((c_19 != NULL) && (c_19 != d_19)))
                  _fail(d_19);
                else
                  c_19 = d_19;
              }
            }
            t = g_9;
            {
              ATerm f_19 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_NUM_0), not_null(c_19));
              {
                f_19 = t;
                if(((e_19 != NULL) && (e_19 != f_19)))
                  _fail(f_19);
                else
                  e_19 = f_19;
              }
              t = not_null(e_19);
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
  ATerm t_19 = NULL;
  t_19 = t;
  s_19 :
  if(match_cons(t_19, sym_VAR_0))
    {
      ATerm h_9 = t;
      int m_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_19 = NULL,x_19 = NULL;
          ATerm n_9;
          n_9 = t;
          {
            ATerm w_19 = NULL;
            t = SSLgetAnnotations(not_null(t_19));
            {
              w_19 = t;
              if(((v_19 != NULL) && (v_19 != w_19)))
                _fail(w_19);
              else
                v_19 = w_19;
            }
          }
          t = n_9;
          {
            ATerm y_19 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(v_19));
            {
              y_19 = t;
              if(((x_19 != NULL) && (x_19 != y_19)))
                _fail(y_19);
              else
                x_19 = y_19;
            }
            t = not_null(x_19);
          }
          LocalPopChoice(m_9);
        }
      else
        {
          t = h_9;
          {
            ATerm a_20 = NULL,c_20 = NULL;
            ATerm o_9;
            o_9 = t;
            {
              ATerm b_20 = NULL;
              t = SSLgetAnnotations(not_null(t_19));
              {
                b_20 = t;
                if(((a_20 != NULL) && (a_20 != b_20)))
                  _fail(b_20);
                else
                  a_20 = b_20;
              }
            }
            t = o_9;
            {
              ATerm d_20 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VAR_0), not_null(a_20));
              {
                d_20 = t;
                if(((c_20 != NULL) && (c_20 != d_20)))
                  _fail(d_20);
                else
                  c_20 = d_20;
              }
              t = not_null(c_20);
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
  ATerm r_20 = NULL;
  r_20 = t;
  q_20 :
  if(match_cons(r_20, sym_KW_0))
    {
      ATerm q_9 = t;
      int r_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_20 = NULL,v_20 = NULL;
          ATerm s_9;
          s_9 = t;
          {
            ATerm u_20 = NULL;
            t = SSLgetAnnotations(not_null(r_20));
            {
              u_20 = t;
              if(((t_20 != NULL) && (t_20 != u_20)))
                _fail(u_20);
              else
                t_20 = u_20;
            }
          }
          t = s_9;
          {
            ATerm w_20 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(t_20));
            {
              w_20 = t;
              if(((v_20 != NULL) && (v_20 != w_20)))
                _fail(w_20);
              else
                v_20 = w_20;
            }
            t = not_null(v_20);
          }
          LocalPopChoice(r_9);
        }
      else
        {
          t = q_9;
          {
            ATerm y_20 = NULL,a_21 = NULL;
            ATerm t_9;
            t_9 = t;
            {
              ATerm z_20 = NULL;
              t = SSLgetAnnotations(not_null(r_20));
              {
                z_20 = t;
                if(((y_20 != NULL) && (y_20 != z_20)))
                  _fail(z_20);
                else
                  y_20 = z_20;
              }
            }
            t = t_9;
            {
              ATerm b_21 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_KW_0), not_null(y_20));
              {
                b_21 = t;
                if(((a_21 != NULL) && (a_21 != b_21)))
                  _fail(b_21);
                else
                  a_21 = b_21;
              }
              t = not_null(a_21);
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
ATerm sep_by_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm j_21 = NULL;
    j_21 = t;
    t = (ATerm) ATinsert(ATempty, not_null(j_21));
    return(t);
  }
  t = map_1(t, r_1);
  {
    t = separate_by_1(t, l_68);
    t = concat_0(t);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm z_83 (ATerm))
{
  ATerm u_9 = t;
  int v_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_9);
    }
  else
    {
      t = u_9;
      {
        ATerm w_9 = t;
        int x_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_1 (ATerm t)
            {
              t = filter_1(t, z_83);
              return(t);
            }
            t = Cons_2(t, z_83, s_1);
            LocalPopChoice(x_9);
          }
        else
          {
            t = w_9;
            {
              ATerm o_21 = NULL,p_21 = NULL,q_21 = NULL;
              o_21 = t;
              n_21 :
              if(((ATgetType(o_21) == AT_LIST) && !(ATisEmpty(o_21))))
                {
                  p_21 = ATgetFirst((ATermList) o_21);
                  q_21 = (ATerm) ATgetNext((ATermList) o_21);
                  {
                    t = not_null(q_21);
                    t = filter_1(t, z_83);
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
  ATerm a_22 = NULL;
  a_22 = t;
  z_21 :
  if(match_cons(a_22, sym_HS_0))
    {
      ATerm y_9 = t;
      int z_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_22 = NULL,e_22 = NULL;
          ATerm a_10;
          a_10 = t;
          {
            ATerm d_22 = NULL;
            t = SSLgetAnnotations(not_null(a_22));
            {
              d_22 = t;
              if(((c_22 != NULL) && (c_22 != d_22)))
                _fail(d_22);
              else
                c_22 = d_22;
            }
          }
          t = a_10;
          {
            ATerm f_22 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(c_22));
            {
              f_22 = t;
              if(((e_22 != NULL) && (e_22 != f_22)))
                _fail(f_22);
              else
                e_22 = f_22;
            }
            t = not_null(e_22);
          }
          LocalPopChoice(z_9);
        }
      else
        {
          t = y_9;
          {
            ATerm h_22 = NULL,j_22 = NULL;
            ATerm b_10;
            b_10 = t;
            {
              ATerm i_22 = NULL;
              t = SSLgetAnnotations(not_null(a_22));
              {
                i_22 = t;
                if(((h_22 != NULL) && (h_22 != i_22)))
                  _fail(i_22);
                else
                  h_22 = i_22;
              }
            }
            t = b_10;
            {
              ATerm k_22 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_HS_0), not_null(h_22));
              {
                k_22 = t;
                if(((j_22 != NULL) && (j_22 != k_22)))
                  _fail(k_22);
                else
                  j_22 = k_22;
              }
              t = not_null(j_22);
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
  ATerm v_22 = NULL,x_22 = NULL;
  ATerm c_23 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_22), term_c_10);
    t = copy_0(t);
    return(t);
  }
  ATerm d_10 = t;
  int e_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm u_1 (ATerm t)
        {
          ATerm w_22 = NULL;
          w_22 = t;
          if(((v_22 != NULL) && (v_22 != w_22)))
            _fail(w_22);
          else
            v_22 = w_22;
          return(t);
        }
        t = SOpt_2(t, HS_0, u_1);
        return(t);
      }
      t = fetch_1(t, t_1);
      {
        t = not_null(v_22);
        t = string_to_int_0(t);
      }
      LocalPopChoice(e_10);
    }
  else
    {
      t = d_10;
      t = term_i_6;
    }
  {
    x_22 = t;
    u_22 :
    if(match_int(x_22, 0))
      {
        ATerm j_10 = t;
        int k_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = (ATerm) ATempty;
            LocalPopChoice(k_10);
          }
        else
          {
            t = j_10;
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
ATerm separate_by_0 (ATerm t)
{
  ATerm g_23 = NULL,y_23 = NULL,v_26 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym__2))
    {
      y_23 = ATgetArgument(g_23, 0);
      v_26 = ATgetArgument(g_23, 1);
      {
        t = not_null(v_26);
        {
          ATerm l_10 = t;
          int m_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(m_10);
            }
          else
            {
              t = l_10;
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm n_10 = t;
                  int o_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Nil_0(t);
                      LocalPopChoice(o_10);
                    }
                  else
                    {
                      t = n_10;
                      {
                        ATerm y_26 = NULL;
                        t = Cons_2(t, _id, v_1);
                        {
                          ATerm z_26 = NULL;
                          z_26 = t;
                          if(((y_26 != NULL) && (y_26 != z_26)))
                            _fail(z_26);
                          else
                            y_26 = z_26;
                          t = (ATerm) ATinsert(CheckATermList(not_null(y_26)), not_null(y_23));
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
ATerm if_verbose2_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm w_1 (ATerm t)
  {
    ATerm p_10;
    p_10 = t;
    {
      ATerm e_27 = NULL;
      ATerm f_27 = NULL;
      t = term_p_6;
      {
        t = get_config_0(t);
        {
          f_27 = t;
          if(((e_27 != NULL) && (e_27 != f_27)))
            _fail(f_27);
          else
            e_27 = f_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_27), term_q_10);
        t = geq_0(t);
      }
    }
    t = p_10;
    t = d_90(t);
    return(t);
  }
  t = try_1(t, w_1);
  return(t);
}
ATerm dissuader_1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm r_10;
  r_10 = t;
  {
    ATerm a_2 (ATerm t)
    {
      t = o_87(t);
      {
        ATerm b_2 (ATerm t)
        {
          t = term_s_10;
          return(t);
        }
        t = debug_1(t, b_2);
      }
      return(t);
    }
    t = if_verbose2_1(t, a_2);
  }
  t = r_10;
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm e_76 (ATerm))
{
  ATerm j_27 = NULL,l_27 = NULL;
  ATerm c_2 (ATerm t)
  {
    t = term_t_10;
    return(t);
  }
  t = dissuader_1(t, c_2);
  {
    ATerm u_10;
    u_10 = t;
    {
      ATerm k_27 = NULL;
      k_27 = t;
      if(((j_27 != NULL) && (j_27 != k_27)))
        _fail(k_27);
      else
        j_27 = k_27;
    }
    t = u_10;
    {
      ATerm m_27 = NULL;
      t = term_v_10;
      {
        t = e_76(t);
        {
          m_27 = t;
          if(((l_27 != NULL) && (l_27 != m_27)))
            _fail(m_27);
          else
            l_27 = m_27;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), not_null(j_27));
        t = separate_by_0(t);
      }
    }
  }
  return(t);
}
ATerm LNAT_2 (ATerm t, ATerm v_0 (ATerm), ATerm w_0 (ATerm))
{
  ATerm a_28 = NULL,d_28 = NULL,e_28 = NULL;
  a_28 = t;
  z_27 :
  if(match_cons(a_28, sym_LNAT_2))
    {
      d_28 = ATgetArgument(a_28, 0);
      e_28 = ATgetArgument(a_28, 1);
      {
        ATerm w_10 = t;
        int x_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_28 = NULL,p_28 = NULL;
            ATerm o_28 = NULL;
            t = SSLgetAnnotations(not_null(a_28));
            {
              o_28 = t;
              if(((n_28 != NULL) && (n_28 != o_28)))
                _fail(o_28);
              else
                n_28 = o_28;
            }
            {
              t = not_null(d_28);
              {
                ATerm s_28 = NULL;
                t = v_0(t);
                {
                  p_28 = t;
                  {
                    t = not_null(e_28);
                    {
                      ATerm u_28 = NULL;
                      t = w_0(t);
                      {
                        s_28 = t;
                        {
                          ATerm v_28 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, not_null(p_28), not_null(s_28)), not_null(n_28));
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
            LocalPopChoice(x_10);
          }
        else
          {
            t = w_10;
            {
              ATerm d_29 = NULL,f_29 = NULL;
              ATerm e_29 = NULL;
              t = SSLgetAnnotations(not_null(a_28));
              {
                e_29 = t;
                if(((d_29 != NULL) && (d_29 != e_29)))
                  _fail(e_29);
                else
                  d_29 = e_29;
              }
              {
                t = not_null(d_28);
                {
                  ATerm h_29 = NULL;
                  t = v_0(t);
                  {
                    f_29 = t;
                    {
                      t = not_null(e_28);
                      {
                        ATerm j_29 = NULL;
                        t = w_0(t);
                        {
                          h_29 = t;
                          {
                            ATerm k_29 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_LNAT_2, not_null(f_29), not_null(h_29)), not_null(d_29));
                            {
                              k_29 = t;
                              if(((j_29 != NULL) && (j_29 != k_29)))
                                _fail(k_29);
                              else
                                j_29 = k_29;
                            }
                            t = not_null(j_29);
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
  ATerm g_30 = NULL,h_30 = NULL,i_30 = NULL;
  g_30 = t;
  f_30 :
  if(match_cons(g_30, sym_L_2))
    {
      h_30 = ATgetArgument(g_30, 0);
      i_30 = ATgetArgument(g_30, 1);
      {
        ATerm y_10 = t;
        int z_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_30 = NULL,o_30 = NULL;
            ATerm n_30 = NULL;
            t = SSLgetAnnotations(not_null(g_30));
            {
              n_30 = t;
              if(((m_30 != NULL) && (m_30 != n_30)))
                _fail(n_30);
              else
                m_30 = n_30;
            }
            {
              t = not_null(h_30);
              {
                ATerm q_30 = NULL;
                t = t_0(t);
                {
                  o_30 = t;
                  {
                    t = not_null(i_30);
                    {
                      ATerm s_30 = NULL;
                      t = u_0(t);
                      {
                        q_30 = t;
                        {
                          ATerm t_30 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(o_30), not_null(q_30)), not_null(m_30));
                          {
                            t_30 = t;
                            if(((s_30 != NULL) && (s_30 != t_30)))
                              _fail(t_30);
                            else
                              s_30 = t_30;
                          }
                          t = not_null(s_30);
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
              ATerm x_30 = NULL,z_30 = NULL;
              ATerm y_30 = NULL;
              t = SSLgetAnnotations(not_null(g_30));
              {
                y_30 = t;
                if(((x_30 != NULL) && (x_30 != y_30)))
                  _fail(y_30);
                else
                  x_30 = y_30;
              }
              {
                t = not_null(h_30);
                {
                  ATerm b_31 = NULL;
                  t = t_0(t);
                  {
                    z_30 = t;
                    {
                      t = not_null(i_30);
                      {
                        ATerm d_31 = NULL;
                        t = u_0(t);
                        {
                          b_31 = t;
                          {
                            ATerm e_31 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_L_2, not_null(z_30), not_null(b_31)), not_null(x_30));
                            {
                              e_31 = t;
                              if(((d_31 != NULL) && (d_31 != e_31)))
                                _fail(e_31);
                              else
                                d_31 = e_31;
                            }
                            t = not_null(d_31);
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
ATerm tov_1 (ATerm t, ATerm k_68 (ATerm))
{
  ATerm s_31 = NULL,w_31 = NULL;
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = L_2(t, _id, _id);
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
        ATerm c_11 = t;
        int d_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = LNAT_2(t, _id, _id);
            LocalPopChoice(d_11);
          }
        else
          {
            t = c_11;
            {
              ATerm t_31 = NULL;
              ATerm u_31 = NULL;
              t_31 = t;
              {
                if(((s_31 != NULL) && (s_31 != t_31)))
                  _fail(t_31);
                else
                  s_31 = t_31;
                {
                  ATerm v_31 = NULL;
                  t = term_v_10;
                  {
                    t = k_68(t);
                    {
                      v_31 = t;
                      if(((u_31 != NULL) && (u_31 != v_31)))
                        _fail(v_31);
                      else
                        u_31 = v_31;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_e_11), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(s_31)))), not_null(u_31)))));
                }
              }
            }
          }
      }
    }
  {
    w_31 = t;
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_e_11), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(w_31)))));
  }
  return(t);
}
ATerm IS_0 (ATerm t)
{
  ATerm i_32 = NULL;
  i_32 = t;
  h_32 :
  if(match_cons(i_32, sym_IS_0))
    {
      ATerm f_11 = t;
      int g_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_32 = NULL,m_32 = NULL;
          ATerm h_11;
          h_11 = t;
          {
            ATerm l_32 = NULL;
            t = SSLgetAnnotations(not_null(i_32));
            {
              l_32 = t;
              if(((k_32 != NULL) && (k_32 != l_32)))
                _fail(l_32);
              else
                k_32 = l_32;
            }
          }
          t = h_11;
          {
            ATerm n_32 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(k_32));
            {
              n_32 = t;
              if(((m_32 != NULL) && (m_32 != n_32)))
                _fail(n_32);
              else
                m_32 = n_32;
            }
            t = not_null(m_32);
          }
          LocalPopChoice(g_11);
        }
      else
        {
          t = f_11;
          {
            ATerm p_32 = NULL,r_32 = NULL;
            ATerm i_11;
            i_11 = t;
            {
              ATerm q_32 = NULL;
              t = SSLgetAnnotations(not_null(i_32));
              {
                q_32 = t;
                if(((p_32 != NULL) && (p_32 != q_32)))
                  _fail(q_32);
                else
                  p_32 = q_32;
              }
            }
            t = i_11;
            {
              ATerm s_32 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_IS_0), not_null(p_32));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ispace_0 (ATerm t)
{
  ATerm e_33 = NULL,g_33 = NULL;
  ATerm n_33 (ATerm t)
  {
    ATerm j_33 = NULL;
    ATerm k_33 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_33), term_c_10);
    {
      t = copy_0(t);
      {
        k_33 = t;
        if(((j_33 != NULL) && (j_33 != k_33)))
          _fail(k_33);
        else
          j_33 = k_33;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(j_33));
    return(t);
  }
  ATerm j_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm f_2 (ATerm t)
        {
          ATerm f_33 = NULL;
          f_33 = t;
          if(((e_33 != NULL) && (e_33 != f_33)))
            _fail(f_33);
          else
            e_33 = f_33;
          return(t);
        }
        t = SOpt_2(t, IS_0, f_2);
        return(t);
      }
      t = fetch_1(t, e_2);
      {
        t = not_null(e_33);
        t = string_to_int_0(t);
      }
      LocalPopChoice(k_11);
    }
  else
    {
      t = j_11;
      t = term_n_6;
    }
  {
    g_33 = t;
    d_33 :
    if(match_int(g_33, 0))
      {
        ATerm l_11 = t;
        int m_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_n_11;
            LocalPopChoice(m_11);
          }
        else
          {
            t = l_11;
            t = n_33(t);
          }
      }
    else
      {
        t = n_33(t);
      }
  }
  return(t);
}
ATerm subt_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL;
  s_33 = t;
  r_33 :
  if(match_cons(s_33, sym__2))
    {
      t_33 = ATgetArgument(s_33, 0);
      u_33 = ATgetArgument(s_33, 1);
      {
        ATerm o_11 = t;
        int p_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(t_33), not_null(u_33));
            LocalPopChoice(p_11);
          }
        else
          {
            t = o_11;
            t = SSL_subtr(not_null(t_33), not_null(u_33));
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
  ATerm a_34 = NULL,b_34 = NULL,c_34 = NULL;
  a_34 = t;
  z_33 :
  if(match_cons(a_34, sym__2))
    {
      b_34 = ATgetArgument(a_34, 0);
      c_34 = ATgetArgument(a_34, 1);
      {
        ATerm q_11;
        q_11 = t;
        {
          ATerm r_11 = t;
          int s_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(b_34), not_null(c_34));
              LocalPopChoice(s_11);
            }
          else
            {
              t = r_11;
              t = SSL_gtr(not_null(b_34), not_null(c_34));
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
ATerm geq_0 (ATerm t)
{
  ATerm i_34 = NULL;
  ATerm t_11 = t;
  int u_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_34 = NULL,m_34 = NULL,n_34 = NULL;
      j_34 = t;
      h_34 :
      if(match_cons(j_34, sym__2))
        {
          m_34 = ATgetArgument(j_34, 0);
          n_34 = ATgetArgument(j_34, 1);
          {
            if(((i_34 != NULL) && (i_34 != m_34)))
              _fail(m_34);
            else
              i_34 = m_34;
            if(((i_34 != NULL) && (i_34 != n_34)))
              _fail(n_34);
            else
              i_34 = n_34;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_11);
    }
  else
    {
      t = t_11;
      t = gt_0(t);
    }
  return(t);
}
ATerm while_not_2 (ATerm t, ATerm v_69 (ATerm), ATerm w_69 (ATerm))
{
  ATerm p_34 (ATerm t)
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_69(t);
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        {
          t = w_69(t);
          t = p_34(t);
        }
      }
    return(t);
  }
  t = p_34(t);
  return(t);
}
ATerm for_3 (ATerm t, ATerm y_69 (ATerm), ATerm z_69 (ATerm), ATerm a_70 (ATerm))
{
  t = y_69(t);
  t = while_not_2(t, z_69, a_70);
  return(t);
}
ATerm copy_0 (ATerm t)
{
  ATerm g_2 (ATerm t)
  {
    ATerm f_35 = NULL,g_35 = NULL,h_35 = NULL;
    f_35 = t;
    y_34 :
    if(match_cons(f_35, sym__2))
      {
        g_35 = ATgetArgument(f_35, 0);
        h_35 = ATgetArgument(f_35, 1);
        t = (ATerm) ATmakeAppl(sym__3, not_null(g_35), not_null(h_35), (ATerm) ATempty);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL,n_35 = NULL;
    k_35 = t;
    a_35 :
    if(match_cons(k_35, sym__3))
      {
        l_35 = ATgetArgument(k_35, 0);
        m_35 = ATgetArgument(k_35, 1);
        n_35 = ATgetArgument(k_35, 2);
        b_35 :
        if(match_int(l_35, 0))
          {
            t = not_null(n_35);
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
  ATerm i_2 (ATerm t)
  {
    ATerm q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL;
    q_35 = t;
    e_35 :
    if(match_cons(q_35, sym__3))
      {
        r_35 = ATgetArgument(q_35, 0);
        s_35 = ATgetArgument(q_35, 1);
        t_35 = ATgetArgument(q_35, 2);
        {
          ATerm x_35 = NULL;
          ATerm x_11;
          x_11 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_35), term_i_6);
            t = geq_0(t);
          }
          t = x_11;
          {
            ATerm y_35 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_35), term_i_6);
            {
              t = subt_0(t);
              {
                y_35 = t;
                if(((x_35 != NULL) && (x_35 != y_35)))
                  _fail(y_35);
                else
                  x_35 = y_35;
              }
            }
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_35), not_null(s_35), (ATerm) ATinsert(CheckATermList(not_null(t_35)), not_null(s_35)));
          }
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = for_3(t, g_2, h_2, i_2);
  return(t);
}
ATerm VS_0 (ATerm t)
{
  ATerm k_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym_VS_0))
    {
      ATerm y_11 = t;
      int z_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_36 = NULL,o_36 = NULL;
          ATerm a_12;
          a_12 = t;
          {
            ATerm n_36 = NULL;
            t = SSLgetAnnotations(not_null(k_36));
            {
              n_36 = t;
              if(((m_36 != NULL) && (m_36 != n_36)))
                _fail(n_36);
              else
                m_36 = n_36;
            }
          }
          t = a_12;
          {
            ATerm p_36 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(m_36));
            {
              p_36 = t;
              if(((o_36 != NULL) && (o_36 != p_36)))
                _fail(p_36);
              else
                o_36 = p_36;
            }
            t = not_null(o_36);
          }
          LocalPopChoice(z_11);
        }
      else
        {
          t = y_11;
          {
            ATerm r_36 = NULL,t_36 = NULL;
            ATerm b_12;
            b_12 = t;
            {
              ATerm s_36 = NULL;
              t = SSLgetAnnotations(not_null(k_36));
              {
                s_36 = t;
                if(((r_36 != NULL) && (r_36 != s_36)))
                  _fail(s_36);
                else
                  r_36 = s_36;
              }
            }
            t = b_12;
            {
              ATerm u_36 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_VS_0), not_null(r_36));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm SOpt_2 (ATerm t, ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  m_37 = t;
  l_37 :
  if(match_cons(m_37, sym_SOpt_2))
    {
      n_37 = ATgetArgument(m_37, 0);
      o_37 = ATgetArgument(m_37, 1);
      {
        ATerm c_12 = t;
        int d_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_37 = NULL,u_37 = NULL;
            ATerm t_37 = NULL;
            t = SSLgetAnnotations(not_null(m_37));
            {
              t_37 = t;
              if(((s_37 != NULL) && (s_37 != t_37)))
                _fail(t_37);
              else
                s_37 = t_37;
            }
            {
              t = not_null(n_37);
              {
                ATerm w_37 = NULL;
                t = r_0(t);
                {
                  u_37 = t;
                  {
                    t = not_null(o_37);
                    {
                      ATerm y_37 = NULL;
                      t = s_0(t);
                      {
                        w_37 = t;
                        {
                          ATerm z_37 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(u_37), not_null(w_37)), not_null(s_37));
                          {
                            z_37 = t;
                            if(((y_37 != NULL) && (y_37 != z_37)))
                              _fail(z_37);
                            else
                              y_37 = z_37;
                          }
                          t = not_null(y_37);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(d_12);
          }
        else
          {
            t = c_12;
            {
              ATerm d_38 = NULL,f_38 = NULL;
              ATerm e_38 = NULL;
              t = SSLgetAnnotations(not_null(m_37));
              {
                e_38 = t;
                if(((d_38 != NULL) && (d_38 != e_38)))
                  _fail(e_38);
                else
                  d_38 = e_38;
              }
              {
                t = not_null(n_37);
                {
                  ATerm h_38 = NULL;
                  t = r_0(t);
                  {
                    f_38 = t;
                    {
                      t = not_null(o_37);
                      {
                        ATerm j_38 = NULL;
                        t = s_0(t);
                        {
                          h_38 = t;
                          {
                            ATerm k_38 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(f_38), not_null(h_38)), not_null(d_38));
                            {
                              k_38 = t;
                              if(((j_38 != NULL) && (j_38 != k_38)))
                                _fail(k_38);
                              else
                                j_38 = k_38;
                            }
                            t = not_null(j_38);
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
  ATerm a_39 = NULL,c_39 = NULL;
  ATerm j_39 (ATerm t)
  {
    ATerm f_39 = NULL;
    ATerm g_39 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_39), term_u_8);
    {
      t = copy_0(t);
      {
        g_39 = t;
        if(((f_39 != NULL) && (f_39 != g_39)))
          _fail(g_39);
        else
          f_39 = g_39;
      }
    }
    t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(f_39))));
    return(t);
  }
  ATerm e_12 = t;
  int f_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm m_2 (ATerm t)
        {
          ATerm b_39 = NULL;
          b_39 = t;
          if(((a_39 != NULL) && (a_39 != b_39)))
            _fail(b_39);
          else
            a_39 = b_39;
          return(t);
        }
        t = SOpt_2(t, VS_0, m_2);
        return(t);
      }
      t = fetch_1(t, l_2);
      {
        t = not_null(a_39);
        t = string_to_int_0(t);
      }
      LocalPopChoice(f_12);
    }
  else
    {
      t = e_12;
      t = term_n_6;
    }
  {
    c_39 = t;
    z_38 :
    if(match_int(c_39, 0))
      {
        ATerm g_12 = t;
        int h_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_n_11;
            LocalPopChoice(h_12);
          }
        else
          {
            t = g_12;
            t = j_39(t);
          }
      }
    else
      {
        t = j_39(t);
      }
  }
  return(t);
}
ATerm AC_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm u_39 = NULL,v_39 = NULL;
  u_39 = t;
  t_39 :
  if(match_cons(u_39, sym_AC_1))
    {
      v_39 = ATgetArgument(u_39, 0);
      {
        ATerm i_12 = t;
        int j_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_39 = NULL,a_40 = NULL;
            ATerm z_39 = NULL;
            t = SSLgetAnnotations(not_null(u_39));
            {
              z_39 = t;
              if(((y_39 != NULL) && (y_39 != z_39)))
                _fail(z_39);
              else
                y_39 = z_39;
            }
            {
              t = not_null(v_39);
              {
                ATerm c_40 = NULL;
                t = q_0(t);
                {
                  a_40 = t;
                  {
                    ATerm d_40 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(a_40)), not_null(y_39));
                    {
                      d_40 = t;
                      if(((c_40 != NULL) && (c_40 != d_40)))
                        _fail(d_40);
                      else
                        c_40 = d_40;
                    }
                    t = not_null(c_40);
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
              ATerm g_40 = NULL,i_40 = NULL;
              ATerm h_40 = NULL;
              t = SSLgetAnnotations(not_null(u_39));
              {
                h_40 = t;
                if(((g_40 != NULL) && (g_40 != h_40)))
                  _fail(h_40);
                else
                  g_40 = h_40;
              }
              {
                t = not_null(v_39);
                {
                  ATerm k_40 = NULL;
                  t = q_0(t);
                  {
                    i_40 = t;
                    {
                      ATerm l_40 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AC_1, not_null(i_40)), not_null(g_40));
                      {
                        l_40 = t;
                        if(((k_40 != NULL) && (k_40 != l_40)))
                          _fail(l_40);
                        else
                          k_40 = l_40;
                      }
                      t = not_null(k_40);
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
  ATerm g_41 = NULL,h_41 = NULL;
  g_41 = t;
  f_41 :
  if(match_cons(g_41, sym_AR_1))
    {
      h_41 = ATgetArgument(g_41, 0);
      {
        ATerm k_12 = t;
        int l_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_41 = NULL,m_41 = NULL;
            ATerm l_41 = NULL;
            t = SSLgetAnnotations(not_null(g_41));
            {
              l_41 = t;
              if(((k_41 != NULL) && (k_41 != l_41)))
                _fail(l_41);
              else
                k_41 = l_41;
            }
            {
              t = not_null(h_41);
              {
                ATerm o_41 = NULL;
                t = p_0(t);
                {
                  m_41 = t;
                  {
                    ATerm p_41 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(m_41)), not_null(k_41));
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
            LocalPopChoice(l_12);
          }
        else
          {
            t = k_12;
            {
              ATerm s_41 = NULL,u_41 = NULL;
              ATerm t_41 = NULL;
              t = SSLgetAnnotations(not_null(g_41));
              {
                t_41 = t;
                if(((s_41 != NULL) && (s_41 != t_41)))
                  _fail(t_41);
                else
                  s_41 = t_41;
              }
              {
                t = not_null(h_41);
                {
                  ATerm w_41 = NULL;
                  t = p_0(t);
                  {
                    u_41 = t;
                    {
                      ATerm x_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AR_1, not_null(u_41)), not_null(s_41));
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
ATerm AL_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm p_42 = NULL,q_42 = NULL;
  p_42 = t;
  o_42 :
  if(match_cons(p_42, sym_AL_1))
    {
      q_42 = ATgetArgument(p_42, 0);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_42 = NULL,w_42 = NULL;
            ATerm v_42 = NULL;
            t = SSLgetAnnotations(not_null(p_42));
            {
              v_42 = t;
              if(((u_42 != NULL) && (u_42 != v_42)))
                _fail(v_42);
              else
                u_42 = v_42;
            }
            {
              t = not_null(q_42);
              {
                ATerm a_43 = NULL;
                t = o_0(t);
                {
                  w_42 = t;
                  {
                    ATerm b_43 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(w_42)), not_null(u_42));
                    {
                      b_43 = t;
                      if(((a_43 != NULL) && (a_43 != b_43)))
                        _fail(b_43);
                      else
                        a_43 = b_43;
                    }
                    t = not_null(a_43);
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
              ATerm g_43 = NULL,i_43 = NULL;
              ATerm h_43 = NULL;
              t = SSLgetAnnotations(not_null(p_42));
              {
                h_43 = t;
                if(((g_43 != NULL) && (g_43 != h_43)))
                  _fail(h_43);
                else
                  g_43 = h_43;
              }
              {
                t = not_null(q_42);
                {
                  ATerm k_43 = NULL;
                  t = o_0(t);
                  {
                    i_43 = t;
                    {
                      ATerm l_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_AL_1, not_null(i_43)), not_null(g_43));
                      {
                        l_43 = t;
                        if(((k_43 != NULL) && (k_43 != l_43)))
                          _fail(l_43);
                        else
                          k_43 = l_43;
                      }
                      t = not_null(k_43);
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
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = AL_1(t, _id);
      t = term_q_12;
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm r_12 = t;
        int s_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = AR_1(t, _id);
            t = term_t_12;
            LocalPopChoice(s_12);
          }
        else
          {
            t = r_12;
            {
              t = AC_1(t, _id);
              t = term_u_12;
            }
          }
      }
    }
  return(t);
}
ATerm make_hs_0 (ATerm t)
{
  ATerm e_44 = NULL,f_44 = NULL,g_44 = NULL,h_44 = NULL;
  ATerm n_44 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(h_44));
    return(t);
  }
  f_44 = t;
  z_43 :
  if(match_cons(f_44, sym_AL_1))
    {
      g_44 = ATgetArgument(f_44, 0);
      if(((e_44 != NULL) && (e_44 != g_44)))
        _fail(g_44);
      else
        e_44 = g_44;
    }
  else
    {
      if(match_cons(f_44, sym_AR_1))
        {
          g_44 = ATgetArgument(f_44, 0);
          if(((e_44 != NULL) && (e_44 != g_44)))
            _fail(g_44);
          else
            e_44 = g_44;
        }
      else
        {
          if(match_cons(f_44, sym_AC_1))
            {
              g_44 = ATgetArgument(f_44, 0);
              if(((e_44 != NULL) && (e_44 != g_44)))
                _fail(g_44);
              else
                e_44 = g_44;
            }
          else
            {
              _fail(t);
            }
        }
    }
  {
    t = not_null(e_44);
    {
      t = Hspace_0(t);
      {
        h_44 = t;
        c_44 :
        if(((ATgetType(h_44) == AT_LIST) && ATisEmpty(h_44)))
          {
            {
            }
          }
        else
          {
            t = n_44(t);
          }
      }
    }
  }
  return(t);
}
ATerm toa_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm t_45 = NULL,u_45 = NULL,w_45 = NULL;
  t_45 = t;
  r_45 :
  if(match_cons(t_45, sym_R_2))
    {
      u_45 = ATgetArgument(t_45, 0);
      w_45 = ATgetArgument(t_45, 1);
      s_45 :
      if(((ATgetType(u_45) == AT_LIST) && ATisEmpty(u_45)))
        {
          {
            ATerm y_45 = NULL,z_45 = NULL;
            ATerm a_46 = NULL,b_46 = NULL;
            t = term_v_10;
            {
              t = n_68(t);
              {
                a_46 = t;
                q_45 :
                if(match_cons(a_46, sym_AOPTIONS_1))
                  {
                    b_46 = ATgetArgument(a_46, 0);
                    {
                      ATerm x_47 = NULL;
                      if(((y_45 != NULL) && (y_45 != b_46)))
                        _fail(b_46);
                      else
                        y_45 = b_46;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(w_45), not_null(y_45));
                        {
                          ATerm a_48 (ATerm t)
                          {
                            ATerm c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,l_46 = NULL,m_46 = NULL;
                            ATerm c_48 (ATerm t)
                            {
                              ATerm z_46 = NULL;
                              ATerm a_47 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(j_46), not_null(k_46));
                              {
                                t = a_48(t);
                                {
                                  a_47 = t;
                                  if(((z_46 != NULL) && (z_46 != a_47)))
                                    _fail(a_47);
                                  else
                                    z_46 = a_47;
                                }
                              }
                              t = (ATerm) ATinsert(CheckATermList(not_null(z_46)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_C_2, not_null(c_46), not_null(d_46)))));
                              return(t);
                            }
                            ATerm d_48 (ATerm t)
                            {
                              ATerm h_47 = NULL,j_47 = NULL,l_47 = NULL;
                              ATerm v_12;
                              v_12 = t;
                              {
                                ATerm i_47 = NULL;
                                t = not_null(l_46);
                                {
                                  t = aopt_0(t);
                                  {
                                    i_47 = t;
                                    if(((h_47 != NULL) && (h_47 != i_47)))
                                      _fail(i_47);
                                    else
                                      h_47 = i_47;
                                  }
                                }
                              }
                              t = v_12;
                              {
                                ATerm w_12;
                                w_12 = t;
                                {
                                  ATerm k_47 = NULL;
                                  t = not_null(l_46);
                                  {
                                    t = make_hs_0(t);
                                    {
                                      k_47 = t;
                                      if(((j_47 != NULL) && (j_47 != k_47)))
                                        _fail(k_47);
                                      else
                                        j_47 = k_47;
                                    }
                                  }
                                }
                                t = w_12;
                                {
                                  ATerm m_47 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_46)), not_null(e_46)), not_null(m_46));
                                  {
                                    t = a_48(t);
                                    {
                                      m_47 = t;
                                      if(((l_47 != NULL) && (l_47 != m_47)))
                                        _fail(m_47);
                                      else
                                        l_47 = m_47;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(l_47)), not_null(j_47)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(h_47)), not_null(i_46)));
                                }
                              }
                              return(t);
                            }
                            ATerm e_48 (ATerm t)
                            {
                              ATerm t_47 = NULL,v_47 = NULL;
                              ATerm x_12;
                              x_12 = t;
                              {
                                ATerm u_47 = NULL;
                                t = not_null(l_46);
                                {
                                  t = aopt_0(t);
                                  {
                                    u_47 = t;
                                    if(((t_47 != NULL) && (t_47 != u_47)))
                                      _fail(u_47);
                                    else
                                      t_47 = u_47;
                                  }
                                }
                              }
                              t = x_12;
                              {
                                ATerm w_47 = NULL;
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_46), not_null(m_46));
                                {
                                  t = a_48(t);
                                  {
                                    w_47 = t;
                                    if(((v_47 != NULL) && (v_47 != w_47)))
                                      _fail(w_47);
                                    else
                                      v_47 = w_47;
                                  }
                                }
                                t = (ATerm) ATinsert(CheckATermList(not_null(v_47)), (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, not_null(t_47)), not_null(i_46)));
                              }
                              return(t);
                            }
                            g_46 = t;
                            a_45 :
                            if(match_cons(g_46, sym__2))
                              {
                                h_46 = ATgetArgument(g_46, 0);
                                k_46 = ATgetArgument(g_46, 1);
                                b_45 :
                                if(((ATgetType(h_46) == AT_LIST) && ATisEmpty(h_46)))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(h_46) == AT_LIST) && !(ATisEmpty(h_46))))
                                      {
                                        i_46 = ATgetFirst((ATermList) h_46);
                                        j_46 = (ATerm) ATgetNext((ATermList) h_46);
                                        c_45 :
                                        if(((ATgetType(k_46) == AT_LIST) && !(ATisEmpty(k_46))))
                                          {
                                            l_46 = ATgetFirst((ATermList) k_46);
                                            m_46 = (ATerm) ATgetNext((ATermList) k_46);
                                            d_45 :
                                            if(((ATgetType(j_46) == AT_LIST) && !(ATisEmpty(j_46))))
                                              {
                                                e_46 = ATgetFirst((ATermList) j_46);
                                                f_46 = (ATerm) ATgetNext((ATermList) j_46);
                                                g_45 :
                                                if(match_cons(i_46, sym_C_2))
                                                  {
                                                    c_46 = ATgetArgument(i_46, 0);
                                                    d_46 = ATgetArgument(i_46, 1);
                                                    {
                                                      ATerm y_12 = t;
                                                      int z_12 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = c_48(t);
                                                          LocalPopChoice(z_12);
                                                        }
                                                      else
                                                        {
                                                          t = y_12;
                                                          {
                                                            ATerm a_13 = t;
                                                            int b_13 = stack_ptr;
                                                            if((PushChoice() == 0))
                                                              {
                                                                t = d_48(t);
                                                                LocalPopChoice(b_13);
                                                              }
                                                            else
                                                              {
                                                                t = a_13;
                                                                t = e_48(t);
                                                              }
                                                          }
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    ATerm c_13 = t;
                                                    int d_13 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = d_48(t);
                                                        LocalPopChoice(d_13);
                                                      }
                                                    else
                                                      {
                                                        t = c_13;
                                                        t = e_48(t);
                                                      }
                                                  }
                                              }
                                            else
                                              {
                                                l_45 :
                                                if(match_cons(i_46, sym_C_2))
                                                  {
                                                    c_46 = ATgetArgument(i_46, 0);
                                                    d_46 = ATgetArgument(i_46, 1);
                                                    {
                                                      ATerm e_13 = t;
                                                      int f_13 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = c_48(t);
                                                          LocalPopChoice(f_13);
                                                        }
                                                      else
                                                        {
                                                          t = e_13;
                                                          t = e_48(t);
                                                        }
                                                    }
                                                  }
                                                else
                                                  {
                                                    t = e_48(t);
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            m_45 :
                                            n_45 :
                                            if(match_cons(i_46, sym_C_2))
                                              {
                                                c_46 = ATgetArgument(i_46, 0);
                                                d_46 = ATgetArgument(i_46, 1);
                                                t = c_48(t);
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
                          t = a_48(t);
                          {
                            x_47 = t;
                            if(((z_45 != NULL) && (z_45 != x_47)))
                              _fail(x_47);
                            else
                              z_45 = x_47;
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
            t = (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATinsert(ATempty, term_e_11), (ATerm) ATinsert(ATempty, not_null(z_45)));
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
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
  y_48 = t;
  x_48 :
  if(match_cons(y_48, sym_R_2))
    {
      z_48 = ATgetArgument(y_48, 0);
      a_49 = ATgetArgument(y_48, 1);
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_49 = NULL,i_49 = NULL;
            ATerm f_49 = NULL;
            t = SSLgetAnnotations(not_null(y_48));
            {
              f_49 = t;
              if(((e_49 != NULL) && (e_49 != f_49)))
                _fail(f_49);
              else
                e_49 = f_49;
            }
            {
              t = not_null(z_48);
              {
                ATerm k_49 = NULL;
                t = m_0(t);
                {
                  i_49 = t;
                  {
                    t = not_null(a_49);
                    {
                      ATerm m_49 = NULL;
                      t = n_0(t);
                      {
                        k_49 = t;
                        {
                          ATerm n_49 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(i_49), not_null(k_49)), not_null(e_49));
                          {
                            n_49 = t;
                            if(((m_49 != NULL) && (m_49 != n_49)))
                              _fail(n_49);
                            else
                              m_49 = n_49;
                          }
                          t = not_null(m_49);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            {
              ATerm b_50 = NULL,d_50 = NULL;
              ATerm c_50 = NULL;
              t = SSLgetAnnotations(not_null(y_48));
              {
                c_50 = t;
                if(((b_50 != NULL) && (b_50 != c_50)))
                  _fail(c_50);
                else
                  b_50 = c_50;
              }
              {
                t = not_null(z_48);
                {
                  ATerm f_50 = NULL;
                  t = m_0(t);
                  {
                    d_50 = t;
                    {
                      t = not_null(a_49);
                      {
                        ATerm l_50 = NULL;
                        t = n_0(t);
                        {
                          f_50 = t;
                          {
                            ATerm m_50 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_R_2, not_null(d_50), not_null(f_50)), not_null(b_50));
                            {
                              m_50 = t;
                              if(((l_50 != NULL) && (l_50 != m_50)))
                                _fail(m_50);
                              else
                                l_50 = m_50;
                            }
                            t = not_null(l_50);
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
  ATerm n_2 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = split_2(t, _id, n_2);
  {
    ATerm j_52 (ATerm t)
    {
      ATerm h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
      ATerm m_52 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_51), (ATerm) ATinsert(CheckATermList(not_null(n_51)), not_null(l_51)));
        t = j_52(t);
        return(t);
      }
      j_51 = t;
      d_51 :
      if(match_cons(j_51, sym__2))
        {
          k_51 = ATgetArgument(j_51, 0);
          n_51 = ATgetArgument(j_51, 1);
          f_51 :
          if(((ATgetType(k_51) == AT_LIST) && ATisEmpty(k_51)))
            {
              {
                ATerm s_51 = NULL;
                ATerm t_51 = NULL;
                t = not_null(n_51);
                {
                  t = reverse_0(t);
                  {
                    t_51 = t;
                    if(((s_51 != NULL) && (s_51 != t_51)))
                      _fail(t_51);
                    else
                      s_51 = t_51;
                  }
                }
                t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(s_51)));
              }
            }
          else
            {
              if(((ATgetType(k_51) == AT_LIST) && !(ATisEmpty(k_51))))
                {
                  l_51 = ATgetFirst((ATermList) k_51);
                  m_51 = (ATerm) ATgetNext((ATermList) k_51);
                  g_51 :
                  if(match_cons(l_51, sym_R_2))
                    {
                      h_51 = ATgetArgument(l_51, 0);
                      i_51 = ATgetArgument(l_51, 1);
                      {
                        ATerm i_13 = t;
                        int j_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            ATerm y_51 = NULL,a_52 = NULL;
                            ATerm k_13;
                            k_13 = t;
                            {
                              ATerm z_51 = NULL;
                              t = not_null(n_51);
                              {
                                t = reverse_0(t);
                                {
                                  z_51 = t;
                                  if(((y_51 != NULL) && (y_51 != z_51)))
                                    _fail(z_51);
                                  else
                                    y_51 = z_51;
                                }
                              }
                            }
                            t = k_13;
                            {
                              ATerm b_52 = NULL;
                              t = (ATerm) ATmakeAppl(sym__2, not_null(m_51), (ATerm) ATempty);
                              {
                                t = j_52(t);
                                {
                                  b_52 = t;
                                  if(((a_52 != NULL) && (a_52 != b_52)))
                                    _fail(b_52);
                                  else
                                    a_52 = b_52;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_52)), (ATerm) ATmakeAppl(sym_R_2, not_null(h_51), not_null(i_51))), (ATerm) ATmakeAppl(sym_R_2, (ATerm)ATempty, not_null(y_51)));
                            }
                            LocalPopChoice(j_13);
                          }
                        else
                          {
                            t = i_13;
                            t = m_52(t);
                          }
                      }
                    }
                  else
                    {
                      t = m_52(t);
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
    t = j_52(t);
    {
      ATerm o_2 (ATerm t)
      {
        ATerm l_13 = t;
        if((PushChoice() == 0))
          {
            t = R_2(t, _id, Nil_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_13;
          }
        return(t);
      }
      t = filter_1(t, o_2);
    }
  }
  return(t);
}
ATerm Abox2html_0 (ATerm t)
{
  ATerm d_54 = NULL,e_54 = NULL,f_54 = NULL,g_54 = NULL;
  f_54 = t;
  b_54 :
  if(match_cons(f_54, sym_REF_2))
    {
      g_54 = ATgetArgument(f_54, 0);
      e_54 = ATgetArgument(f_54, 1);
      t = (ATerm) ATmakeAppl(sym_HREF_2, not_null(g_54), not_null(e_54));
    }
  else
    {
      if(match_cons(f_54, sym_LBL_2))
        {
          g_54 = ATgetArgument(f_54, 0);
          e_54 = ATgetArgument(f_54, 1);
          t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_54)), (ATerm) ATmakeAppl(sym_ANCHOR_1, not_null(g_54)));
        }
      else
        {
          if(match_cons(f_54, sym_LNAT_2))
            {
              g_54 = ATgetArgument(f_54, 0);
              e_54 = ATgetArgument(f_54, 1);
              t = term_m_13;
            }
          else
            {
              if(match_cons(f_54, sym_L_2))
                {
                  g_54 = ATgetArgument(f_54, 0);
                  e_54 = ATgetArgument(f_54, 1);
                  t = term_m_13;
                }
              else
                {
                  if(match_cons(f_54, sym_ALT_2))
                    {
                      g_54 = ATgetArgument(f_54, 0);
                      e_54 = ATgetArgument(f_54, 1);
                      t = not_null(g_54);
                    }
                  else
                    {
                      if(match_cons(f_54, sym_A_3))
                        {
                          g_54 = ATgetArgument(f_54, 0);
                          e_54 = ATgetArgument(f_54, 1);
                          d_54 = ATgetArgument(f_54, 2);
                          {
                            ATerm u_54 = NULL,v_54 = NULL,w_54 = NULL;
                            ATerm x_54 = NULL;
                            t = not_null(d_54);
                            {
                              ATerm y_54 = NULL;
                              t = construct_rows_0(t);
                              {
                                x_54 = t;
                                {
                                  if(((u_54 != NULL) && (u_54 != x_54)))
                                    _fail(x_54);
                                  else
                                    u_54 = x_54;
                                  {
                                    t = not_null(e_54);
                                    {
                                      ATerm z_54 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        y_54 = t;
                                        {
                                          if(((v_54 != NULL) && (v_54 != y_54)))
                                            _fail(y_54);
                                          else
                                            v_54 = y_54;
                                          {
                                            t = not_null(u_54);
                                            {
                                              ATerm p_2 (ATerm t)
                                              {
                                                ATerm q_2 (ATerm t)
                                                {
                                                  t = not_null(g_54);
                                                  return(t);
                                                }
                                                t = toa_1(t, q_2);
                                                return(t);
                                              }
                                              t = map_1(t, p_2);
                                              {
                                                ATerm r_2 (ATerm t)
                                                {
                                                  t = not_null(v_54);
                                                  return(t);
                                                }
                                                t = separate_by_1(t, r_2);
                                                {
                                                  z_54 = t;
                                                  if(((w_54 != NULL) && (w_54 != z_54)))
                                                    _fail(z_54);
                                                  else
                                                    w_54 = z_54;
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
                            t = (ATerm) ATmakeAppl(sym_TD_p__1, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(w_54))))));
                          }
                        }
                      else
                        {
                          if(match_cons(f_54, sym_HV_2))
                            {
                              g_54 = ATgetArgument(f_54, 0);
                              e_54 = ATgetArgument(f_54, 1);
                              {
                                ATerm c_55 = NULL,d_55 = NULL,e_55 = NULL;
                                ATerm f_55 = NULL;
                                t = not_null(g_54);
                                {
                                  ATerm k_55 = NULL;
                                  t = Hspace_0(t);
                                  {
                                    f_55 = t;
                                    {
                                      if(((c_55 != NULL) && (c_55 != f_55)))
                                        _fail(f_55);
                                      else
                                        c_55 = f_55;
                                      {
                                        ATerm n_13 = t;
                                        int o_13 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm g_55 = NULL;
                                            g_55 = t;
                                            h_53 :
                                            if(((ATgetType(g_55) == AT_LIST) && ATisEmpty(g_55)))
                                              {
                                                {
                                                  t = not_null(e_54);
                                                  {
                                                    ATerm s_2 (ATerm t)
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
                                                    t = filter_1(t, s_2);
                                                  }
                                                }
                                              }
                                            else
                                              {
                                                _fail(t);
                                              }
                                            LocalPopChoice(o_13);
                                          }
                                        else
                                          {
                                            t = n_13;
                                            {
                                              ATerm h_55 = NULL;
                                              ATerm i_55 = NULL;
                                              ATerm t_2 (ATerm t)
                                              {
                                                t = (ATerm) ATinsert(ATempty, term_q_13);
                                                return(t);
                                              }
                                              t = at_last_1(t, t_2);
                                              {
                                                h_55 = t;
                                                {
                                                  if(((d_55 != NULL) && (d_55 != h_55)))
                                                    _fail(h_55);
                                                  else
                                                    d_55 = h_55;
                                                  {
                                                    ATerm j_55 = NULL;
                                                    t = not_null(e_54);
                                                    {
                                                      ATerm u_2 (ATerm t)
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
                                                      t = filter_1(t, u_2);
                                                      {
                                                        ATerm v_2 (ATerm t)
                                                        {
                                                          t = not_null(d_55);
                                                          return(t);
                                                        }
                                                        t = separate_by_1(t, v_2);
                                                        {
                                                          j_55 = t;
                                                          if(((i_55 != NULL) && (i_55 != j_55)))
                                                            _fail(j_55);
                                                          else
                                                            i_55 = j_55;
                                                        }
                                                      }
                                                    }
                                                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_55)), term_s_13);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        {
                                          k_55 = t;
                                          if(((e_55 != NULL) && (e_55 != k_55)))
                                            _fail(k_55);
                                          else
                                            e_55 = k_55;
                                        }
                                      }
                                    }
                                  }
                                }
                                t = not_null(e_55);
                              }
                            }
                          else
                            {
                              if(match_cons(f_54, sym_V_2))
                                {
                                  g_54 = ATgetArgument(f_54, 0);
                                  e_54 = ATgetArgument(f_54, 1);
                                  {
                                    ATerm n_55 = NULL,o_55 = NULL,p_55 = NULL;
                                    ATerm q_55 = NULL;
                                    t = not_null(g_54);
                                    {
                                      ATerm r_55 = NULL;
                                      t = Vspace_0(t);
                                      {
                                        q_55 = t;
                                        {
                                          if(((o_55 != NULL) && (o_55 != q_55)))
                                            _fail(q_55);
                                          else
                                            o_55 = q_55;
                                          {
                                            t = not_null(g_54);
                                            {
                                              ATerm s_55 = NULL;
                                              t = Ispace_0(t);
                                              {
                                                r_55 = t;
                                                {
                                                  if(((n_55 != NULL) && (n_55 != r_55)))
                                                    _fail(r_55);
                                                  else
                                                    n_55 = r_55;
                                                  {
                                                    t = not_null(e_54);
                                                    {
                                                      ATerm y_2 (ATerm t)
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
                                                      t = filter_1(t, y_2);
                                                      {
                                                        ATerm z_2 (ATerm t)
                                                        {
                                                          ATerm b_3 (ATerm t)
                                                          {
                                                            t = term_n_11;
                                                            return(t);
                                                          }
                                                          t = tov_1(t, b_3);
                                                          return(t);
                                                        }
                                                        ATerm a_3 (ATerm t)
                                                        {
                                                          ATerm c_3 (ATerm t)
                                                          {
                                                            ATerm d_3 (ATerm t)
                                                            {
                                                              t = not_null(n_55);
                                                              return(t);
                                                            }
                                                            t = tov_1(t, d_3);
                                                            return(t);
                                                          }
                                                          t = map_1(t, c_3);
                                                          return(t);
                                                        }
                                                        t = Cons_2(t, z_2, a_3);
                                                        {
                                                          ATerm e_3 (ATerm t)
                                                          {
                                                            t = not_null(o_55);
                                                            return(t);
                                                          }
                                                          t = separate_by_1(t, e_3);
                                                          {
                                                            s_55 = t;
                                                            if(((p_55 != NULL) && (p_55 != s_55)))
                                                              _fail(s_55);
                                                            else
                                                              p_55 = s_55;
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
                                    t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, not_null(p_55))), term_s_13);
                                  }
                                }
                              else
                                {
                                  if(match_cons(f_54, sym_H_2))
                                    {
                                      g_54 = ATgetArgument(f_54, 0);
                                      e_54 = ATgetArgument(f_54, 1);
                                      {
                                        ATerm v_55 = NULL,w_55 = NULL;
                                        ATerm x_55 = NULL;
                                        t = not_null(g_54);
                                        {
                                          ATerm y_55 = NULL;
                                          t = Hspace_0(t);
                                          {
                                            x_55 = t;
                                            {
                                              if(((v_55 != NULL) && (v_55 != x_55)))
                                                _fail(x_55);
                                              else
                                                v_55 = x_55;
                                              {
                                                t = not_null(e_54);
                                                {
                                                  ATerm f_3 (ATerm t)
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
                                                  t = filter_1(t, f_3);
                                                  {
                                                    ATerm g_3 (ATerm t)
                                                    {
                                                      t = not_null(v_55);
                                                      return(t);
                                                    }
                                                    t = sep_by_1(t, g_3);
                                                    {
                                                      y_55 = t;
                                                      if(((w_55 != NULL) && (w_55 != y_55)))
                                                        _fail(y_55);
                                                      else
                                                        w_55 = y_55;
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        t = not_null(w_55);
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(f_54, sym_FBOX_2))
                                        {
                                          g_54 = ATgetArgument(f_54, 0);
                                          e_54 = ATgetArgument(f_54, 1);
                                          {
                                            ATerm b_56 = NULL;
                                            ATerm c_56 = NULL;
                                            t = not_null(g_54);
                                            {
                                              ATerm v_13 = t;
                                              int w_13 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = KW_0(t);
                                                  t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_x_13), (ATerm) ATinsert(ATempty, not_null(e_54)));
                                                  LocalPopChoice(w_13);
                                                }
                                              else
                                                {
                                                  t = v_13;
                                                  {
                                                    ATerm f_14 = t;
                                                    int g_14 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        t = VAR_0(t);
                                                        t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_k_14), (ATerm) ATinsert(ATempty, not_null(e_54)));
                                                        LocalPopChoice(g_14);
                                                      }
                                                    else
                                                      {
                                                        t = f_14;
                                                        {
                                                          ATerm l_14 = t;
                                                          int o_14 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = NUM_0(t);
                                                              t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_w_14), (ATerm) ATinsert(ATempty, not_null(e_54)));
                                                              LocalPopChoice(o_14);
                                                            }
                                                          else
                                                            {
                                                              t = l_14;
                                                              {
                                                                ATerm y_14 = t;
                                                                int z_14 = stack_ptr;
                                                                if((PushChoice() == 0))
                                                                  {
                                                                    t = MATH_0(t);
                                                                    t = (ATerm) ATmakeAppl(sym_SPAN_2, (ATerm)ATinsert(ATempty, term_a_15), (ATerm) ATinsert(ATempty, not_null(e_54)));
                                                                    LocalPopChoice(z_14);
                                                                  }
                                                                else
                                                                  {
                                                                    t = y_14;
                                                                    t = not_null(e_54);
                                                                  }
                                                              }
                                                            }
                                                        }
                                                      }
                                                  }
                                                }
                                              {
                                                c_56 = t;
                                                if(((b_56 != NULL) && (b_56 != c_56)))
                                                  _fail(c_56);
                                                else
                                                  b_56 = c_56;
                                              }
                                            }
                                            t = not_null(b_56);
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(f_54, sym_C_2))
                                            {
                                              g_54 = ATgetArgument(f_54, 0);
                                              e_54 = ATgetArgument(f_54, 1);
                                              c_54 :
                                              if(((ATgetType(g_54) == AT_LIST) && ATisEmpty(g_54)))
                                                {
                                                  {
                                                    ATerm e_56 = NULL,f_56 = NULL;
                                                    ATerm j_56 = NULL;
                                                    t = not_null(e_54);
                                                    {
                                                      ATerm k_56 = NULL;
                                                      ATerm h_3 (ATerm t)
                                                      {
                                                        ATerm g_56 = NULL,h_56 = NULL;
                                                        g_56 = t;
                                                        y_53 :
                                                        if(match_cons(g_56, sym_S_1))
                                                          {
                                                            h_56 = ATgetArgument(g_56, 0);
                                                            {
                                                              t = not_null(h_56);
                                                              t = make_html_comment_0(t);
                                                            }
                                                          }
                                                        else
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      t = map_1(t, h_3);
                                                      {
                                                        j_56 = t;
                                                        {
                                                          if(((e_56 != NULL) && (e_56 != j_56)))
                                                            _fail(j_56);
                                                          else
                                                            e_56 = j_56;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym_TDTR_1, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATinsert(ATempty, term_c_15), (ATerm) ATinsert(ATempty, not_null(e_56))))));
                                                            {
                                                              k_56 = t;
                                                              if(((f_56 != NULL) && (f_56 != k_56)))
                                                                _fail(k_56);
                                                              else
                                                                f_56 = k_56;
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
                                                  _fail(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_cons(f_54, sym_S_1))
                                                {
                                                  g_54 = ATgetArgument(f_54, 0);
                                                  {
                                                    t = not_null(g_54);
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
ATerm at_last_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm t_57 (ATerm t)
  {
    ATerm d_15 = t;
    int e_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = i_77(t);
        LocalPopChoice(e_15);
      }
    else
      {
        t = d_15;
        t = Cons_2(t, _id, t_57);
      }
    return(t);
  }
  t = t_57(t);
  return(t);
}
ATerm at_suffix_1 (ATerm t, ATerm b_77 (ATerm))
{
  ATerm u_57 (ATerm t)
  {
    ATerm f_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_77(t);
        LocalPopChoice(i_15);
      }
    else
      {
        t = f_15;
        t = Cons_2(t, _id, u_57);
      }
    return(t);
  }
  t = u_57(t);
  return(t);
}
ATerm split_fetch_1 (ATerm t, ATerm u_76 (ATerm))
{
  ATerm x_57 = NULL,z_57 = NULL;
  ATerm i_3 (ATerm t)
  {
    t = Cons_2(t, u_76, _id);
    {
      ATerm j_3 (ATerm t)
      {
        ATerm y_57 = NULL;
        y_57 = t;
        if(((x_57 != NULL) && (x_57 != y_57)))
          _fail(y_57);
        else
          x_57 = y_57;
        return(t);
      }
      t = Cons_2(t, _id, j_3);
      t = (ATerm) ATempty;
    }
    return(t);
  }
  t = at_suffix_1(t, i_3);
  {
    ATerm a_58 = NULL;
    a_58 = t;
    if(((z_57 != NULL) && (z_57 != a_58)))
      _fail(a_58);
    else
      z_57 = a_58;
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_57), not_null(x_57));
  }
  return(t);
}
ATerm Distribute_0 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  q_58 = t;
  p_58 :
  if(match_cons(q_58, sym_H_2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      {
        ATerm v_58 = NULL,w_58 = NULL,x_58 = NULL,d_59 = NULL,e_59 = NULL,f_59 = NULL;
        t = not_null(s_58);
        {
          ATerm k_3 (ATerm t)
          {
            ATerm y_58 = NULL,z_58 = NULL,a_59 = NULL,b_59 = NULL,c_59 = NULL;
            y_58 = t;
            f_58 :
            if(match_cons(y_58, sym_V_2))
              {
                z_58 = ATgetArgument(y_58, 0);
                a_59 = ATgetArgument(y_58, 1);
                g_58 :
                if(((ATgetType(a_59) == AT_LIST) && !(ATisEmpty(a_59))))
                  {
                    b_59 = ATgetFirst((ATermList) a_59);
                    c_59 = (ATerm) ATgetNext((ATermList) a_59);
                    {
                      if(((v_58 != NULL) && (v_58 != z_58)))
                        _fail(z_58);
                      else
                        v_58 = z_58;
                      {
                        if(((w_58 != NULL) && (w_58 != b_59)))
                          _fail(b_59);
                        else
                          w_58 = b_59;
                        if(((x_58 != NULL) && (x_58 != c_59)))
                          _fail(c_59);
                        else
                          x_58 = c_59;
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
          t = split_fetch_1(t, k_3);
          {
            d_59 = t;
            o_58 :
            if(match_cons(d_59, sym__2))
              {
                e_59 = ATgetArgument(d_59, 0);
                f_59 = ATgetArgument(d_59, 1);
                {
                  ATerm j_59 = NULL,l_59 = NULL;
                  t = not_null(f_59);
                  {
                    ATerm j_15 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm i_59 = NULL;
                        i_59 = t;
                        k_58 :
                        if(((ATgetType(i_59) == AT_LIST) && ATisEmpty(i_59)))
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
                        t = j_15;
                      }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(x_58)), not_null(w_58));
                      {
                        ATerm n_59 = NULL;
                        ATerm l_3 (ATerm t)
                        {
                          ATerm m_3 (ATerm t)
                          {
                            ATerm k_59 = NULL;
                            k_59 = t;
                            if(((j_59 != NULL) && (j_59 != k_59)))
                              _fail(k_59);
                            else
                              j_59 = k_59;
                            return(t);
                          }
                          t = Cons_2(t, m_3, Nil_0);
                          t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, not_null(r_58), (ATerm) ATinsert(CheckATermList(not_null(f_59)), not_null(j_59))));
                          return(t);
                        }
                        t = at_last_1(t, l_3);
                        {
                          l_59 = t;
                          {
                            ATerm o_59 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_59), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_V_2, not_null(v_58), not_null(l_59))));
                            {
                              t = conc_0(t);
                              {
                                o_59 = t;
                                if(((n_59 != NULL) && (n_59 != o_59)))
                                  _fail(o_59);
                                else
                                  n_59 = o_59;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_H_2, not_null(r_58), not_null(n_59));
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
  ATerm n_3 (ATerm t)
  {
    ATerm o_3 (ATerm t)
    {
      ATerm k_15 = t;
      int l_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_60 = NULL,d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL;
          c_60 = t;
          x_59 :
          if(match_cons(c_60, sym_H_2))
            {
              d_60 = ATgetArgument(c_60, 0);
              e_60 = ATgetArgument(c_60, 1);
              y_59 :
              if(((ATgetType(e_60) == AT_LIST) && !(ATisEmpty(e_60))))
                {
                  f_60 = ATgetFirst((ATermList) e_60);
                  g_60 = (ATerm) ATgetNext((ATermList) e_60);
                  z_59 :
                  if(((ATgetType(g_60) == AT_LIST) && ATisEmpty(g_60)))
                    {
                      t = not_null(f_60);
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
              if(match_cons(c_60, sym_V_2))
                {
                  d_60 = ATgetArgument(c_60, 0);
                  e_60 = ATgetArgument(c_60, 1);
                  a_60 :
                  if(((ATgetType(e_60) == AT_LIST) && !(ATisEmpty(e_60))))
                    {
                      f_60 = ATgetFirst((ATermList) e_60);
                      g_60 = (ATerm) ATgetNext((ATermList) e_60);
                      b_60 :
                      if(((ATgetType(g_60) == AT_LIST) && ATisEmpty(g_60)))
                        {
                          t = not_null(f_60);
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
          LocalPopChoice(l_15);
        }
      else
        {
          t = k_15;
          t = Distribute_0(t);
        }
      return(t);
    }
    t = try_1(t, o_3);
    return(t);
  }
  t = topdown_1(t, n_3);
  return(t);
}
ATerm abox2html_0 (ATerm t)
{
  ATerm m_60 = NULL;
  t = normalize_0(t);
  {
    ATerm p_3 (ATerm t)
    {
      t = try_1(t, Abox2html_0);
      return(t);
    }
    t = topdown_1(t, p_3);
    {
      m_60 = t;
      {
        t = (ATerm) ATmakeAppl(sym_TABLE_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TR_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_TD_2, (ATerm)ATempty, not_null(m_60))))));
        t = html2text_0(t);
      }
    }
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm y_56 (ATerm), ATerm z_56 (ATerm))
{
  ATerm v_60 = NULL,w_60 = NULL,x_60 = NULL;
  v_60 = t;
  u_60 :
  if(match_cons(v_60, sym__2))
    {
      w_60 = ATgetArgument(v_60, 0);
      x_60 = ATgetArgument(v_60, 1);
      {
        ATerm b_61 = NULL,d_61 = NULL;
        ATerm c_61 = NULL;
        t = SSLgetAnnotations(not_null(v_60));
        {
          c_61 = t;
          if(((b_61 != NULL) && (b_61 != c_61)))
            _fail(c_61);
          else
            b_61 = c_61;
        }
        {
          t = not_null(w_60);
          {
            ATerm f_61 = NULL;
            t = y_56(t);
            {
              d_61 = t;
              {
                t = not_null(x_60);
                {
                  ATerm h_61 = NULL;
                  t = z_56(t);
                  {
                    f_61 = t;
                    {
                      ATerm i_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_61), not_null(f_61)), not_null(b_61));
                      {
                        i_61 = t;
                        if(((h_61 != NULL) && (h_61 != i_61)))
                          _fail(i_61);
                        else
                          h_61 = i_61;
                      }
                      t = not_null(h_61);
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
  ATerm p_61 = NULL;
  ATerm m_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_61 = NULL;
      q_61 = t;
      {
        if(((p_61 != NULL) && (p_61 != q_61)))
          _fail(q_61);
        else
          p_61 = q_61;
        t = SSL_ReadFromFile(not_null(p_61));
      }
      LocalPopChoice(r_15);
    }
  else
    {
      t = m_15;
      {
        ATerm q_3 (ATerm t)
        {
          t = term_s_15;
          return(t);
        }
        t = debug_1(t, q_3);
        _fail(t);
      }
    }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_61 = NULL;
  ATerm u_15;
  u_15 = t;
  {
    ATerm v_15 = t;
    int w_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_3 (ATerm t)
        {
          ATerm w_61 = NULL,x_61 = NULL;
          w_61 = t;
          t_61 :
          if(match_cons(w_61, sym_Input_1))
            {
              x_61 = ATgetArgument(w_61, 0);
              if(((v_61 != NULL) && (v_61 != x_61)))
                _fail(x_61);
              else
                v_61 = x_61;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, r_3);
        LocalPopChoice(w_15);
      }
    else
      {
        t = v_15;
        {
          ATerm y_61 = NULL;
          t = term_y_15;
          {
            y_61 = t;
            if(((v_61 != NULL) && (v_61 != y_61)))
              _fail(y_61);
            else
              v_61 = y_61;
          }
        }
      }
  }
  t = u_15;
  {
    ATerm s_3 (ATerm t)
    {
      t = not_null(v_61);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_3);
  }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm n_87 (ATerm))
{
  ATerm a_16;
  a_16 = t;
  {
    t = n_87(t);
    {
      ATerm t_3 (ATerm t)
      {
        t = term_b_16;
        return(t);
      }
      t = debug_1(t, t_3);
    }
  }
  t = a_16;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm f_62 = NULL,g_62 = NULL;
  ATerm h_16 = t;
  int n_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_62 = NULL,i_62 = NULL,j_62 = NULL;
      h_62 = t;
      c_62 :
      if(match_cons(h_62, sym__2))
        {
          i_62 = ATgetArgument(h_62, 0);
          j_62 = ATgetArgument(h_62, 1);
          {
            if(((g_62 != NULL) && (g_62 != i_62)))
              _fail(i_62);
            else
              g_62 = i_62;
            if(((f_62 != NULL) && (f_62 != j_62)))
              _fail(j_62);
            else
              f_62 = j_62;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_16);
      t = SSL_open_file(not_null(g_62), not_null(f_62));
    }
  else
    {
      t = h_16;
      {
        ATerm k_62 = NULL;
        ATerm l_62 = NULL;
        ATerm u_3 (ATerm t)
        {
          t = term_o_16;
          return(t);
        }
        t = obsolete_1(t, u_3);
        {
          k_62 = t;
          {
            if(((g_62 != NULL) && (g_62 != k_62)))
              _fail(k_62);
            else
              g_62 = k_62;
            {
              ATerm p_16;
              p_16 = t;
              {
                ATerm m_62 = NULL;
                t = term_t_16;
                {
                  m_62 = t;
                  if(((l_62 != NULL) && (l_62 != m_62)))
                    _fail(m_62);
                  else
                    l_62 = m_62;
                }
              }
              t = p_16;
              t = SSL_open_file(not_null(g_62), not_null(l_62));
            }
          }
        }
      }
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm r_76 (ATerm))
{
  ATerm q_62 (ATerm t)
  {
    ATerm u_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, r_76, _id);
        LocalPopChoice(v_16);
      }
    else
      {
        t = u_16;
        t = Cons_2(t, _id, q_62);
      }
    return(t);
  }
  t = q_62(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm f_91 (ATerm))
{
  t = fetch_1(t, f_91);
  return(t);
}
ATerm usage_0 (ATerm t)
{
  ATerm t_62 = NULL;
  ATerm b_17;
  b_17 = t;
  {
    ATerm v_3 (ATerm t)
    {
      ATerm u_62 = NULL,v_62 = NULL;
      u_62 = t;
      s_62 :
      if(match_cons(u_62, sym_Program_1))
        {
          v_62 = ATgetArgument(u_62, 0);
          if(((t_62 != NULL) && (t_62 != v_62)))
            _fail(v_62);
          else
            t_62 = v_62;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, v_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_6, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_17), not_null(t_62)), term_c_17));
      {
        t = printnl_0(t);
        {
          t = term_n_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_17;
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_63 = NULL;
  b_63 = t;
  a_63 :
  if(match_cons(b_63, sym_Version_0))
    {
      ATerm d_63 = NULL,f_63 = NULL;
      ATerm h_17;
      h_17 = t;
      {
        ATerm e_63 = NULL;
        t = SSLgetAnnotations(not_null(b_63));
        {
          e_63 = t;
          if(((d_63 != NULL) && (d_63 != e_63)))
            _fail(e_63);
          else
            d_63 = e_63;
        }
      }
      t = h_17;
      {
        ATerm g_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_63));
        {
          g_63 = t;
          if(((f_63 != NULL) && (f_63 != g_63)))
            _fail(g_63);
          else
            f_63 = g_63;
        }
        t = not_null(f_63);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_88 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm j_17 = t;
    int k_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(k_17);
      }
    else
      {
        t = j_17;
        {
          ATerm m_17 = t;
          int n_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_17);
            }
          else
            {
              t = m_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, w_3);
  t = i_88(t);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm x_3 (ATerm t)
  {
    ATerm l_63 = NULL;
    l_63 = t;
    k_63 :
    if(!(match_string(l_63, "-v")))
      {
        if(!(match_string(l_63, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_p_17;
    t = set_config_0(t);
    t = term_q_17;
    return(t);
  }
  ATerm z_3 (ATerm t)
  {
    t = term_r_17;
    return(t);
  }
  t = Option_3(t, x_3, y_3, z_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm a_4 (ATerm t)
  {
    ATerm o_63 = NULL;
    o_63 = t;
    m_63 :
    if(!(match_string(o_63, "-k")))
      {
        if(!(match_string(o_63, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm s_17;
    s_17 = t;
    {
      ATerm p_63 = NULL;
      ATerm q_63 = NULL;
      t = string_to_int_0(t);
      {
        q_63 = t;
        if(((p_63 != NULL) && (p_63 != q_63)))
          _fail(q_63);
        else
          p_63 = q_63;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_17, not_null(p_63));
        t = set_config_0(t);
      }
    }
    t = s_17;
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_u_17;
    return(t);
  }
  t = ArgOption_3(t, a_4, b_4, c_4);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm t_63 = NULL;
  t_63 = t;
  t = SSL_string_to_int(not_null(t_63));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm v_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_4 (ATerm t)
      {
        ATerm b_64 = NULL;
        b_64 = t;
        w_63 :
        if(!(match_string(b_64, "-S")))
          {
            if(!(match_string(b_64, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_4 (ATerm t)
      {
        t = term_d_18;
        t = set_config_0(t);
        t = term_i_18;
        return(t);
      }
      ATerm h_4 (ATerm t)
      {
        t = term_j_18;
        return(t);
      }
      t = Option_3(t, d_4, g_4, h_4);
      LocalPopChoice(y_17);
    }
  else
    {
      t = v_17;
      {
        ATerm k_18 = t;
        int l_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_4 (ATerm t)
            {
              ATerm e_64 = NULL;
              e_64 = t;
              x_63 :
              if(!(match_string(e_64, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_4 (ATerm t)
            {
              ATerm h_64 = NULL;
              ATerm m_18;
              m_18 = t;
              {
                ATerm f_64 = NULL;
                ATerm g_64 = NULL;
                t = string_to_int_0(t);
                {
                  g_64 = t;
                  if(((f_64 != NULL) && (f_64 != g_64)))
                    _fail(g_64);
                  else
                    f_64 = g_64;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_6, not_null(f_64));
                  t = set_config_0(t);
                }
              }
              t = m_18;
              {
                ATerm i_64 = NULL;
                i_64 = t;
                if(((h_64 != NULL) && (h_64 != i_64)))
                  _fail(i_64);
                else
                  h_64 = i_64;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_64));
              }
              return(t);
            }
            ATerm m_4 (ATerm t)
            {
              t = term_n_18;
              return(t);
            }
            t = ArgOption_3(t, i_4, j_4, m_4);
            LocalPopChoice(l_18);
          }
        else
          {
            t = k_18;
            {
              ATerm n_4 (ATerm t)
              {
                ATerm j_64 = NULL;
                j_64 = t;
                a_64 :
                if(!(match_string(j_64, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm o_4 (ATerm t)
              {
                t = term_p_18;
                t = set_config_0(t);
                t = term_q_18;
                return(t);
              }
              ATerm q_4 (ATerm t)
              {
                t = term_r_18;
                return(t);
              }
              t = Option_3(t, n_4, o_4, q_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm s_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(t_18);
    }
  else
    {
      t = s_18;
      {
        ATerm w_18 = t;
        int b_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(b_19);
          }
        else
          {
            t = w_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm r_4 (ATerm t)
  {
    ATerm p_64 = NULL;
    p_64 = t;
    m_64 :
    if(!(match_string(p_64, "-o")))
      {
        if(!(match_string(p_64, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    ATerm s_64 = NULL;
    ATerm g_19;
    g_19 = t;
    {
      ATerm q_64 = NULL;
      ATerm r_64 = NULL;
      r_64 = t;
      if(((q_64 != NULL) && (q_64 != r_64)))
        _fail(r_64);
      else
        q_64 = r_64;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_19, not_null(q_64));
        t = set_config_0(t);
      }
    }
    t = g_19;
    {
      ATerm t_64 = NULL;
      t_64 = t;
      if(((s_64 != NULL) && (s_64 != t_64)))
        _fail(t_64);
      else
        s_64 = t_64;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_64));
    }
    return(t);
  }
  ATerm t_4 (ATerm t)
  {
    t = term_i_19;
    return(t);
  }
  t = ArgOption_3(t, r_4, s_4, t_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_19 = t;
  int k_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(k_19);
    }
  else
    {
      t = j_19;
      {
        ATerm u_4 (ATerm t)
        {
          ATerm x_64 = NULL;
          x_64 = t;
          w_64 :
          if(!(match_string(x_64, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = term_m_19;
          t = set_config_0(t);
          t = term_n_19;
          return(t);
        }
        ATerm w_4 (ATerm t)
        {
          t = term_o_19;
          return(t);
        }
        t = Option_3(t, u_4, v_4, w_4);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm d_65 = NULL,e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL;
  d_65 = t;
  b_65 :
  if(match_string(d_65, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(d_65) == AT_LIST) && !(ATisEmpty(d_65))))
        {
          e_65 = ATgetFirst((ATermList) d_65);
          f_65 = (ATerm) ATgetNext((ATermList) d_65);
          c_65 :
          if(((ATgetType(f_65) == AT_LIST) && !(ATisEmpty(f_65))))
            {
              g_65 = ATgetFirst((ATermList) f_65);
              h_65 = (ATerm) ATgetNext((ATermList) f_65);
              {
                ATerm l_65 = NULL;
                ATerm p_19;
                p_19 = t;
                {
                  t = not_null(e_65);
                  t = j_0(t);
                }
                t = p_19;
                {
                  ATerm m_65 = NULL;
                  t = not_null(g_65);
                  {
                    t = k_0(t);
                    {
                      m_65 = t;
                      if(((l_65 != NULL) && (l_65 != m_65)))
                        _fail(m_65);
                      else
                        l_65 = m_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_65)), not_null(l_65));
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
  ATerm y_4 (ATerm t)
  {
    ATerm t_65 = NULL;
    t_65 = t;
    q_65 :
    if(!(match_string(t_65, "-i")))
      {
        if(!(match_string(t_65, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    ATerm w_65 = NULL;
    ATerm q_19;
    q_19 = t;
    {
      ATerm u_65 = NULL;
      ATerm v_65 = NULL;
      v_65 = t;
      if(((u_65 != NULL) && (u_65 != v_65)))
        _fail(v_65);
      else
        u_65 = v_65;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_19, not_null(u_65));
        t = set_config_0(t);
      }
    }
    t = q_19;
    {
      ATerm x_65 = NULL;
      x_65 = t;
      if(((w_65 != NULL) && (w_65 != x_65)))
        _fail(x_65);
      else
        w_65 = x_65;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(w_65));
    }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  t = ArgOption_3(t, y_4, z_4, a_5);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_19 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(e_20);
    }
  else
    {
      t = z_19;
      {
        ATerm f_20 = t;
        int g_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(g_20);
          }
        else
          {
            t = f_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_66 = NULL;
  b_66 = t;
  t = SSL_table_destroy(not_null(b_66));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_66 = NULL;
  f_66 = t;
  t = SSL_exit(not_null(f_66));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm j_66 = NULL,k_66 = NULL,l_66 = NULL;
  j_66 = t;
  i_66 :
  if(((ATgetType(j_66) == AT_LIST) && ATisEmpty(j_66)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_66) == AT_LIST) && !(ATisEmpty(j_66))))
        {
          k_66 = ATgetFirst((ATermList) j_66);
          l_66 = (ATerm) ATgetNext((ATermList) j_66);
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
  ATerm h_20;
  h_20 = t;
  {
    ATerm o_66 = NULL;
    ATerm r_66 = NULL;
    ATerm i_20 = t;
    int j_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(j_20);
      }
    else
      {
        t = i_20;
        {
          ATerm p_66 = NULL;
          ATerm q_66 = NULL;
          q_66 = t;
          if(((p_66 != NULL) && (p_66 != q_66)))
            _fail(q_66);
          else
            p_66 = q_66;
          t = (ATerm) ATinsert(ATempty, not_null(p_66));
        }
      }
    {
      r_66 = t;
      if(((o_66 != NULL) && (o_66 != r_66)))
        _fail(r_66);
      else
        o_66 = r_66;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_k_20, not_null(o_66));
      t = printnl_0(t);
    }
  }
  t = h_20;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm g_92 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  c_67 = t;
  z_66 :
  if(((ATgetType(c_67) == AT_LIST) && !(ATisEmpty(c_67))))
    {
      a_67 = ATgetFirst((ATermList) c_67);
      b_67 = (ATerm) ATgetNext((ATermList) c_67);
      {
        ATerm f_67 = NULL;
        t = not_null(b_67);
        {
          ATerm l_20;
          l_20 = t;
          {
            ATerm g_67 = NULL,i_67 = NULL,k_67 = NULL;
            ATerm m_20;
            m_20 = t;
            {
              ATerm h_67 = NULL;
              t = i_0(t);
              {
                h_67 = t;
                if(((g_67 != NULL) && (g_67 != h_67)))
                  _fail(h_67);
                else
                  g_67 = h_67;
              }
            }
            t = m_20;
            {
              ATerm j_67 = NULL;
              t = not_null(a_67);
              {
                t = h_0(t);
                {
                  j_67 = t;
                  if(((i_67 != NULL) && (i_67 != j_67)))
                    _fail(j_67);
                  else
                    i_67 = j_67;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(g_67)), not_null(i_67));
                {
                  k_67 = t;
                  if(((f_67 != NULL) && (f_67 != k_67)))
                    _fail(k_67);
                  else
                    f_67 = k_67;
                }
              }
            }
          }
          t = l_20;
          {
            ATerm b_5 (ATerm t)
            {
              t = not_null(f_67);
              return(t);
            }
            t = reverse_acc_2(t, h_0, b_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(c_67) == AT_LIST) && ATisEmpty(c_67)))
        {
          {
            t = term_v_10;
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
  ATerm c_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_92 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm c_64 (ATerm))
{
  ATerm v_67 = NULL,w_67 = NULL;
  v_67 = t;
  u_67 :
  if(match_cons(v_67, sym_Program_1))
    {
      w_67 = ATgetArgument(v_67, 0);
      {
        ATerm z_67 = NULL,b_68 = NULL;
        ATerm a_68 = NULL;
        t = SSLgetAnnotations(not_null(v_67));
        {
          a_68 = t;
          if(((z_67 != NULL) && (z_67 != a_68)))
            _fail(a_68);
          else
            z_67 = a_68;
        }
        {
          t = not_null(w_67);
          {
            ATerm d_68 = NULL;
            t = c_64(t);
            {
              b_68 = t;
              {
                ATerm e_68 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(b_68)), not_null(z_67));
                {
                  e_68 = t;
                  if(((d_68 != NULL) && (d_68 != e_68)))
                    _fail(e_68);
                  else
                    d_68 = e_68;
                }
                t = not_null(d_68);
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
  ATerm u_68 = NULL;
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_68 = NULL;
      t = term_r_6;
      {
        t = get_config_0(t);
        {
          v_68 = t;
          if(((u_68 != NULL) && (u_68 != v_68)))
            _fail(v_68);
          else
            u_68 = v_68;
        }
      }
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      {
        ATerm d_5 (ATerm t)
        {
          ATerm e_5 (ATerm t)
          {
            ATerm w_68 = NULL;
            w_68 = t;
            if(((u_68 != NULL) && (u_68 != w_68)))
              _fail(w_68);
            else
              u_68 = w_68;
            return(t);
          }
          t = Program_1(t, e_5);
          return(t);
        }
        t = option_defined_1(t, d_5);
      }
    }
  {
    ATerm f_5 (ATerm t)
    {
      ATerm g_5 (ATerm t)
      {
        t = not_null(u_68);
        return(t);
      }
      t = short_description_1(t, g_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, f_5);
    {
      t = term_p_20;
      {
        t = echo_0(t);
        {
          t = term_c_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm x_68 = NULL;
                  ATerm y_68 = NULL;
                  y_68 = t;
                  if(((x_68 != NULL) && (x_68 != y_68)))
                    _fail(y_68);
                  else
                    x_68 = y_68;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_68)), term_d_21);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, h_5);
                {
                  ATerm i_5 (ATerm t)
                  {
                    ATerm z_68 = NULL;
                    ATerm a_69 = NULL;
                    ATerm j_5 (ATerm t)
                    {
                      t = not_null(u_68);
                      return(t);
                    }
                    t = long_description_1(t, j_5);
                    {
                      a_69 = t;
                      if(((z_68 != NULL) && (z_68 != a_69)))
                        _fail(a_69);
                      else
                        z_68 = a_69;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(z_68)), term_e_21);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, i_5);
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
  ATerm f_21;
  f_21 = t;
  {
    ATerm g_69 = NULL;
    ATerm h_69 = NULL;
    h_69 = t;
    if(((g_69 != NULL) && (g_69 != h_69)))
      _fail(h_69);
    else
      g_69 = h_69;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_6, (ATerm) ATinsert(ATempty, not_null(g_69)));
      t = printnl_0(t);
    }
  }
  t = f_21;
  return(t);
}
ATerm say_1 (ATerm t, ATerm h_87 (ATerm))
{
  ATerm g_21;
  g_21 = t;
  {
    t = h_87(t);
    t = debug_0(t);
  }
  t = g_21;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm o_69 = NULL,p_69 = NULL;
  o_69 = t;
  n_69 :
  if(match_cons(o_69, sym_Undefined_1))
    {
      p_69 = ATgetArgument(o_69, 0);
      {
        ATerm s_69 = NULL,u_69 = NULL;
        ATerm t_69 = NULL;
        t = SSLgetAnnotations(not_null(o_69));
        {
          t_69 = t;
          if(((s_69 != NULL) && (s_69 != t_69)))
            _fail(t_69);
          else
            s_69 = t_69;
        }
        {
          t = not_null(p_69);
          {
            ATerm c_70 = NULL;
            t = d_64(t);
            {
              u_69 = t;
              {
                ATerm d_70 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(u_69)), not_null(s_69));
                {
                  d_70 = t;
                  if(((c_70 != NULL) && (c_70 != d_70)))
                    _fail(d_70);
                  else
                    c_70 = d_70;
                }
                t = not_null(c_70);
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
      ATerm h_21;
      h_21 = t;
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
      t = h_21;
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
  ATerm i_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = i_21;
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
                ATerm k_5 (ATerm t)
                {
                  t = not_null(f_71);
                  t = concat_0(t);
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
      }
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm p_71 = NULL;
  ATerm r_71 = NULL;
  p_71 = t;
  {
    ATerm s_71 = NULL;
    ATerm w_71 = NULL,x_71 = NULL,y_71 = NULL;
    t = not_null(p_71);
    {
      s_71 = t;
      {
        t = SSL_explode_term(not_null(s_71));
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
                  if(((r_71 != NULL) && (r_71 != y_71)))
                    _fail(y_71);
                  else
                    r_71 = y_71;
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
      t = not_null(r_71);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm x_76 (ATerm))
{
  ATerm c_72 (ATerm t)
  {
    ATerm l_21 = t;
    int m_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, c_72);
        LocalPopChoice(m_21);
      }
    else
      {
        t = l_21;
        {
          t = Nil_0(t);
          t = x_76(t);
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
          ATerm l_5 (ATerm t)
          {
            t = not_null(h_72);
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
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
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
    t = conc_0(t);
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
        ATerm t_21;
        t_21 = t;
        t = SSL_printnl(not_null(s_72), not_null(t_72));
        t = t_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm g_87 (ATerm))
{
  ATerm u_21;
  u_21 = t;
  {
    ATerm z_72 = NULL,b_73 = NULL;
    ATerm v_21;
    v_21 = t;
    {
      ATerm a_73 = NULL;
      t = g_87(t);
      {
        a_73 = t;
        if(((z_72 != NULL) && (z_72 != a_73)))
          _fail(a_73);
        else
          z_72 = a_73;
      }
    }
    t = v_21;
    {
      ATerm c_73 = NULL;
      c_73 = t;
      if(((b_73 != NULL) && (b_73 != c_73)))
        _fail(c_73);
      else
        b_73 = c_73;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_6, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_73)), not_null(z_72)));
        t = printnl_0(t);
      }
    }
  }
  t = u_21;
  return(t);
}
ATerm map_1 (ATerm t, ATerm i_76 (ATerm))
{
  ATerm f_73 (ATerm t)
  {
    ATerm w_21 = t;
    int x_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_21);
      }
    else
      {
        t = w_21;
        t = Cons_2(t, i_76, f_73);
      }
    return(t);
  }
  t = f_73(t);
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm y_21 = t;
  int b_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(b_22);
    }
  else
    {
      t = y_21;
      {
        ATerm g_22 = t;
        int l_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, m_5);
            LocalPopChoice(l_22);
          }
        else
          {
            t = g_22;
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
                          ATerm m_22 = t;
                          int n_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(n_22);
                            }
                          else
                            {
                              t = m_22;
                              {
                                ATerm n_5 (ATerm t)
                                {
                                  t = term_o_22;
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
                      if(match_cons(m_73, sym_Prefix_2))
                        {
                          n_73 = ATgetArgument(m_73, 0);
                          o_73 = ATgetArgument(m_73, 1);
                          {
                            ATerm t_73 = NULL,v_73 = NULL;
                            ATerm p_22;
                            p_22 = t;
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
                            t = p_22;
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
    t = (ATerm) ATmakeAppl(sym__2, term_q_22, not_null(e_74));
    {
      t = table_get_0(t);
      {
        ATerm o_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm r_22;
            r_22 = t;
            {
              ATerm g_74 = NULL;
              ATerm h_74 = NULL;
              h_74 = t;
              if(((g_74 != NULL) && (g_74 != h_74)))
                _fail(h_74);
              else
                g_74 = h_74;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_q_22, not_null(e_74), not_null(g_74));
                t = table_put_0(t);
              }
            }
            t = r_22;
          }
          return(t);
        }
        t = try_1(t, o_5);
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
        ATerm s_22;
        s_22 = t;
        {
          ATerm c_75 = NULL;
          ATerm d_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_74), not_null(x_74));
          {
            ATerm t_22 = t;
            int y_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_22);
              }
            else
              {
                t = t_22;
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
        t = s_22;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_92 (ATerm))
{
  ATerm h_75 = NULL;
  ATerm i_75 = NULL;
  t = term_v_10;
  {
    t = k_92(t);
    {
      i_75 = t;
      if(((h_75 != NULL) && (h_75 != i_75)))
        _fail(i_75);
      else
        h_75 = i_75;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_s_20, term_x_20, not_null(h_75));
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
            ATerm z_22;
            z_22 = t;
            {
              t = not_null(p_75);
              t = a_0(t);
            }
            t = z_22;
            {
              ATerm u_75 = NULL;
              t = term_v_10;
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
  ATerm p_5 (ATerm t)
  {
    ATerm z_75 = NULL;
    z_75 = t;
    y_75 :
    if(!(match_string(z_75, "--help")))
      {
        if(!(match_string(z_75, "-h")))
          {
            if(!(match_string(z_75, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = term_b_23;
    {
      t = set_config_0(t);
      t = term_d_23;
    }
    return(t);
  }
  ATerm r_5 (ATerm t)
  {
    t = term_e_23;
    return(t);
  }
  t = Option_3(t, p_5, q_5, r_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_76 = NULL,f_76 = NULL,h_76 = NULL;
  c_76 = t;
  b_76 :
  if(((ATgetType(c_76) == AT_LIST) && !(ATisEmpty(c_76))))
    {
      f_76 = ATgetFirst((ATermList) c_76);
      h_76 = (ATerm) ATgetNext((ATermList) c_76);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_76)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(f_76)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_58 (ATerm), ATerm i_58 (ATerm))
{
  ATerm w_76 = NULL,z_76 = NULL,a_77 = NULL;
  w_76 = t;
  v_76 :
  if(((ATgetType(w_76) == AT_LIST) && !(ATisEmpty(w_76))))
    {
      z_76 = ATgetFirst((ATermList) w_76);
      a_77 = (ATerm) ATgetNext((ATermList) w_76);
      {
        ATerm g_77 = NULL,k_77 = NULL;
        ATerm h_77 = NULL;
        t = SSLgetAnnotations(not_null(w_76));
        {
          h_77 = t;
          if(((g_77 != NULL) && (g_77 != h_77)))
            _fail(h_77);
          else
            g_77 = h_77;
        }
        {
          t = not_null(z_76);
          {
            ATerm m_77 = NULL;
            t = h_58(t);
            {
              k_77 = t;
              {
                t = not_null(a_77);
                {
                  ATerm o_77 = NULL;
                  t = i_58(t);
                  {
                    m_77 = t;
                    {
                      ATerm r_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(m_77)), not_null(k_77)), not_null(g_77));
                      {
                        r_77 = t;
                        if(((o_77 != NULL) && (o_77 != r_77)))
                          _fail(r_77);
                        else
                          o_77 = r_77;
                      }
                      t = not_null(o_77);
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
        ATerm h_23;
        h_23 = t;
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
        t = h_23;
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
        t = (ATerm) ATmakeAppl(sym__3, term_q_22, not_null(n_78), not_null(o_78));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_92 (ATerm))
{
  ATerm i_23;
  i_23 = t;
  {
    ATerm s_5 (ATerm t)
    {
      t = term_j_23;
      t = i_92(t);
      return(t);
    }
    t = try_1(t, s_5);
  }
  t = i_23;
  {
    ATerm t_5 (ATerm t)
    {
      ATerm w_78 = NULL;
      ATerm k_23;
      k_23 = t;
      {
        ATerm u_78 = NULL;
        ATerm v_78 = NULL;
        v_78 = t;
        if(((u_78 != NULL) && (u_78 != v_78)))
          _fail(v_78);
        else
          u_78 = v_78;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_r_6, not_null(u_78));
          t = set_config_0(t);
        }
      }
      t = k_23;
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
    ATerm u_5 (ATerm t)
    {
      ATerm l_23 = t;
      int m_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_23 = t;
          int o_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(o_23);
            }
          else
            {
              t = n_23;
              {
                t = i_92(t);
                t = Cons_2(t, _id, u_5);
              }
            }
          LocalPopChoice(m_23);
        }
      else
        {
          t = l_23;
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
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL;
  ATerm p_23;
  p_23 = t;
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
  t = p_23;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_92 (ATerm))
{
  ATerm m_79 = NULL;
  ATerm q_23;
  q_23 = t;
  {
    t = term_r_23;
    t = table_put_0(t);
  }
  t = q_23;
  {
    ATerm v_5 (ATerm t)
    {
      ATerm s_23 = t;
      int t_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = h_92(t);
          LocalPopChoice(t_23);
        }
      else
        {
          t = s_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, v_5);
    {
      ATerm w_5 (ATerm t)
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_23;
            w_23 = t;
            {
              ATerm x_23 = t;
              int z_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_a_23;
                  t = get_config_0(t);
                  LocalPopChoice(z_23);
                }
              else
                {
                  t = x_23;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = w_23;
            {
              t = system_usage_0(t);
              {
                t = term_n_6;
                t = exit_0(t);
              }
            }
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm x_5 (ATerm t)
              {
                ATerm y_5 (ATerm t)
                {
                  ATerm n_79 = NULL;
                  n_79 = t;
                  if(((m_79 != NULL) && (m_79 != n_79)))
                    _fail(n_79);
                  else
                    m_79 = n_79;
                  return(t);
                }
                t = Undefined_1(t, y_5);
                return(t);
              }
              t = option_defined_1(t, x_5);
              {
                ATerm z_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_79)), term_a_24);
                  return(t);
                }
                t = say_1(t, z_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_6;
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
        ATerm b_24;
        b_24 = t;
        {
          t = term_s_20;
          t = table_destroy_0(t);
        }
        t = b_24;
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
      ATerm c_24 = t;
      int d_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, usage_0);
          LocalPopChoice(d_24);
        }
      else
        {
          t = c_24;
          {
            ATerm e_24 = t;
            int f_24 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_24;
                g_24 = t;
                {
                  ATerm h_24 = t;
                  int i_24 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_6 (ATerm t)
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
                      t = option_defined_1(t, a_6);
                      {
                        t = not_null(y_79);
                        t = open_file_0(t);
                      }
                      LocalPopChoice(i_24);
                    }
                  else
                    {
                      t = h_24;
                      {
                        ATerm b_80 = NULL;
                        t = term_k_20;
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
                t = g_24;
                {
                  t = input_file_0(t);
                  {
                    ATerm b_6 (ATerm t)
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
                    t = _2(t, _id, b_6);
                    {
                      t = not_null(x_79);
                      {
                        ATerm c_6 (ATerm t)
                        {
                          ATerm d_6 (ATerm t)
                          {
                            t = is_string_0(t);
                            {
                              ATerm j_24;
                              j_24 = t;
                              {
                                ATerm e_6 (ATerm t)
                                {
                                  t = not_null(y_79);
                                  return(t);
                                }
                                ATerm f_6 (ATerm t)
                                {
                                  ATerm d_80 = NULL;
                                  d_80 = t;
                                  t = (ATerm) ATinsert(ATempty, not_null(d_80));
                                  return(t);
                                }
                                t = split_2(t, e_6, f_6);
                                t = print_0(t);
                              }
                              t = j_24;
                            }
                            return(t);
                          }
                          t = try_1(t, d_6);
                          return(t);
                        }
                        t = topdown_1(t, c_6);
                        t = report_success_0(t);
                      }
                    }
                  }
                }
                LocalPopChoice(f_24);
              }
            else
              {
                t = e_24;
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

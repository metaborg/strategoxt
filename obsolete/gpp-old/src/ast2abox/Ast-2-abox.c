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
Symbol sym_PP_Table_1;
Symbol sym_Verbose_0;
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
Symbol sym_Strict_0;
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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_layout_0;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_opt_1;
Symbol sym_seq_1;
Symbol sym_lit_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_alt_2;
Symbol sym_char_class_1;
Symbol sym_sort_1;
Symbol sym_varsym_1;
Symbol sym_atr_1;
Symbol sym_term_1;
Symbol sym_cons_1;
Symbol sym_bracket_0;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_flatlex_2;
Symbol sym_meta_var_1;
Symbol sym_meta_listvar_1;
Symbol sym_parsetree_2;
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
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
  ATprotectSymbol(sym_seq_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
  ATprotectSymbol(sym_atr_1);
  sym_term_1 = ATmakeSymbol("term", 1, ATfalse);
  ATprotectSymbol(sym_term_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
  ATprotectSymbol(sym_appl_2);
  sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
  ATprotectSymbol(sym_amb_1);
  sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
  ATprotectSymbol(sym_flatlex_2);
  sym_meta_var_1 = ATmakeSymbol("meta-var", 1, ATfalse);
  ATprotectSymbol(sym_meta_var_1);
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  init_constant_terms();
}
ATerm term_m_26;
ATerm term_b_26;
ATerm term_t_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_v_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_e_23;
ATerm term_l_22;
ATerm term_j_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_d_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_k_21;
ATerm term_i_21;
ATerm term_h_21;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_g_19;
ATerm term_r_18;
ATerm term_n_18;
ATerm term_k_18;
ATerm term_i_18;
ATerm term_e_17;
ATerm term_d_17;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_a_16;
ATerm term_x_15;
ATerm term_w_15;
ATerm term_l_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_p_14;
ATerm term_y_12;
ATerm term_x_12;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_g_12;
ATerm term_r_11;
ATerm term_p_11;
ATerm term_o_9;
ATerm term_y_8;
ATerm term_x_8;
ATerm term_j_8;
ATerm term_w_7;
void init_constant_terms (void)
{
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_j_8));
  term_j_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_x_8));
  term_x_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_11));
  term_p_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_y_12));
  term_y_12 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_16));
  term_a_16 = (ATerm) ATmakeAppl(sym__2, term_w_15, term_x_15);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(sym__2, term_a_20, term_j_8);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_n_18, term_x_8);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_8);
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_j_8);
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(sym__2, term_d_22, term_j_8);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(sym__2, term_p_24, term_q_24);
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(sym__2, term_f_25, term_j_8);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(sym__3, term_p_24, term_q_24, (ATerm) ATempty);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm Option_2 (ATerm, ATerm y_90 (ATerm), ATerm z_90 (ATerm));
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm m_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm f_74 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm tuple2list_0 (ATerm);
ATerm symbol2abox7_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm v_93 (ATerm));
ATerm length_0 (ATerm);
ATerm collect_p__1 (ATerm, ATerm c_100 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm n_71 (ATerm));
ATerm symbol2abox6_0 (ATerm);
ATerm symbol2abox5_0 (ATerm);
ATerm symbol2abox4_0 (ATerm);
ATerm symbol2abox3_0 (ATerm);
ATerm symbol2abox2_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm n_87 (ATerm));
ATerm index_0 (ATerm);
ATerm symbol2abox1_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm selector_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm get_symbol_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm p_80 (ATerm));
ATerm pp_table_get_0 (ATerm);
ATerm pp_table_get_p__0 (ATerm);
ATerm trm2abox_appl_0 (ATerm);
ATerm trm2abox_list_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm trm2abox_int_0 (ATerm);
ATerm trm2abox_string_0 (ATerm);
ATerm trm2abox_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm c_79 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm j_0 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm e_74 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm u_71 (ATerm));
ATerm termid_check_1 (ATerm, ATerm b_72 (ATerm));
ATerm oncetd_1 (ATerm, ATerm u_75 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm h_72 (ATerm));
ATerm notify_1 (ATerm, ATerm h_100 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm d_84 (ATerm), ATerm e_84 (ATerm));
ATerm union_1 (ATerm, ATerm z_83 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm));
ATerm crush_3 (ATerm, ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm));
ATerm collect_om_1 (ATerm, ATerm p_82 (ATerm));
ATerm collect_1 (ATerm, ATerm r_82 (ATerm));
ATerm ast2abox_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_78 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm s_92 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm g_72 (ATerm));
ATerm debug_1 (ATerm, ATerm o_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm j_88 (ATerm), ATerm k_88 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm q_84 (ATerm), ATerm r_84 (ATerm));
ATerm crush_2 (ATerm, ATerm o_83 (ATerm), ATerm p_83 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_92 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_72 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm u_91 (ATerm));
ATerm map_1 (ATerm, ATerm c_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm t_91 (ATerm));
ATerm Program_1 (ATerm, ATerm k_67 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm p_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm l_67 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_90 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm i_77 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_91 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_91 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_91 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm));
ATerm iowrap_4 (ATerm, ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm e_73 (ATerm));
ATerm iowrap_3 (ATerm, ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm x_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm t_72 (ATerm), ATerm u_72 (ATerm));
ATerm Ast_2_abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm j_2 = NULL,u_2 = NULL,v_2 = NULL,w_2 = NULL,a_3 = NULL;
  j_2 = t;
  h_2 :
  if(match_string(j_2, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(j_2) == AT_LIST) && !(ATisEmpty(j_2))))
        {
          u_2 = ATgetFirst((ATermList) j_2);
          v_2 = (ATerm) ATgetNext((ATermList) j_2);
          i_2 :
          if(((ATgetType(v_2) == AT_LIST) && !(ATisEmpty(v_2))))
            {
              w_2 = ATgetFirst((ATermList) v_2);
              a_3 = (ATerm) ATgetNext((ATermList) v_2);
              {
                ATerm e_3 = NULL;
                ATerm s_3;
                s_3 = t;
                {
                  t = not_null(u_2);
                  t = n_0(t);
                }
                t = s_3;
                {
                  ATerm f_3 = NULL;
                  t = not_null(w_2);
                  {
                    t = o_0(t);
                    {
                      f_3 = t;
                      if(((e_3 != NULL) && (e_3 != f_3)))
                        _fail(f_3);
                      else
                        e_3 = f_3;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_3)), not_null(e_3));
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
ATerm Option_2 (ATerm t, ATerm y_90 (ATerm), ATerm z_90 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = term_w_7;
    return(t);
  }
  t = Option_3(t, y_90, z_90, b_0);
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm n_3 = NULL,o_3 = NULL;
  ATerm x_7 = t;
  int z_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_7);
    }
  else
    {
      t = x_7;
      {
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_3 = NULL,q_3 = NULL,r_3 = NULL;
            ATerm u_3 (ATerm t)
            {
              if(((n_3 != NULL) && (n_3 != q_3)))
                _fail(q_3);
              else
                n_3 = q_3;
              {
                if(((o_3 != NULL) && (o_3 != r_3)))
                  _fail(r_3);
                else
                  o_3 = r_3;
                {
                  t = not_null(n_3);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_3), not_null(o_3));
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
            p_3 = t;
            l_3 :
            if(((ATgetType(p_3) == AT_LIST) && !(ATisEmpty(p_3))))
              {
                q_3 = ATgetFirst((ATermList) p_3);
                r_3 = (ATerm) ATgetNext((ATermList) p_3);
                m_3 :
                if(((ATgetType(q_3) == AT_LIST) && ATisEmpty(q_3)))
                  {
                    {
                      ATerm h_8 = t;
                      int i_8 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((o_3 != NULL) && (o_3 != r_3)))
                            _fail(r_3);
                          else
                            o_3 = r_3;
                          {
                            ATerm c_0 (ATerm t)
                            {
                              t = not_null(o_3);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, c_0);
                          }
                          LocalPopChoice(i_8);
                        }
                      else
                        {
                          t = h_8;
                          t = u_3(t);
                        }
                    }
                  }
                else
                  {
                    t = u_3(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
  e_4 = t;
  c_4 :
  if(match_cons(e_4, sym_Arg2_2))
    {
      f_4 = ATgetArgument(e_4, 0);
      d_4 = ATgetArgument(e_4, 1);
      {
        ATerm i_4 = NULL,j_4 = NULL;
        ATerm k_4 = NULL,m_4 = NULL;
        ATerm l_4 = NULL;
        t = term_j_8;
        {
          t = m_0(t);
          {
            l_4 = t;
            if(((k_4 != NULL) && (k_4 != l_4)))
              _fail(l_4);
            else
              k_4 = l_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_4), not_null(k_4));
          {
            ATerm n_4 = NULL;
            t = index_0(t);
            {
              m_4 = t;
              {
                if(((i_4 != NULL) && (i_4 != m_4)))
                  _fail(m_4);
                else
                  i_4 = m_4;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_4), not_null(i_4));
                  {
                    t = index_0(t);
                    {
                      n_4 = t;
                      if(((j_4 != NULL) && (j_4 != n_4)))
                        _fail(n_4);
                      else
                        j_4 = n_4;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(j_4);
      }
    }
  else
    {
      if(match_cons(e_4, sym_Arg_1))
        {
          f_4 = ATgetArgument(e_4, 0);
          {
            ATerm p_4 = NULL;
            ATerm q_4 = NULL,s_4 = NULL;
            ATerm r_4 = NULL;
            t = term_j_8;
            {
              t = m_0(t);
              {
                r_4 = t;
                if(((q_4 != NULL) && (q_4 != r_4)))
                  _fail(r_4);
                else
                  q_4 = r_4;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(f_4), not_null(q_4));
              {
                t = index_0(t);
                {
                  s_4 = t;
                  if(((p_4 != NULL) && (p_4 != s_4)))
                    _fail(s_4);
                  else
                    p_4 = s_4;
                }
              }
            }
            t = not_null(p_4);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    t = bottomup_1(t, f_74);
    return(t);
  }
  t = _all(t, e_0);
  t = f_74(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm d_5 = NULL,e_5 = NULL,f_5 = NULL;
  d_5 = t;
  c_5 :
  if(match_cons(d_5, sym__2))
    {
      e_5 = ATgetArgument(d_5, 0);
      f_5 = ATgetArgument(d_5, 1);
      {
        ATerm i_5 = NULL;
        ATerm j_5 = NULL;
        t = not_null(e_5);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm q_0 (ATerm t)
            {
              ATerm k_8 = t;
              int m_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_0 (ATerm t)
                  {
                    t = not_null(f_5);
                    return(t);
                  }
                  t = Instantiate_1(t, r_0);
                  LocalPopChoice(m_8);
                }
              else
                {
                  t = k_8;
                  t = flat_list_0(t);
                }
              return(t);
            }
            t = try_1(t, q_0);
            return(t);
          }
          t = bottomup_1(t, f_0);
          {
            j_5 = t;
            if(((i_5 != NULL) && (i_5 != j_5)))
              _fail(j_5);
            else
              i_5 = j_5;
          }
        }
        t = not_null(i_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm tuple2list_0 (ATerm t)
{
  ATerm r_5 = NULL;
  ATerm t_5 = NULL;
  r_5 = t;
  {
    ATerm u_5 = NULL;
    ATerm w_5 = NULL,x_5 = NULL,y_5 = NULL;
    t = not_null(r_5);
    {
      u_5 = t;
      {
        t = SSL_explode_term(not_null(u_5));
        {
          w_5 = t;
          p_5 :
          if(match_cons(w_5, sym__2))
            {
              x_5 = ATgetArgument(w_5, 0);
              y_5 = ATgetArgument(w_5, 1);
              q_5 :
              if(match_string(x_5, ""))
                {
                  if(((t_5 != NULL) && (t_5 != y_5)))
                    _fail(y_5);
                  else
                    t_5 = y_5;
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
    t = not_null(t_5);
  }
  return(t);
}
ATerm symbol2abox7_0 (ATerm t)
{
  ATerm j_6 = NULL,k_6 = NULL,l_6 = NULL,m_6 = NULL,n_6 = NULL;
  j_6 = t;
  h_6 :
  if(match_cons(j_6, sym__4))
    {
      k_6 = ATgetArgument(j_6, 0);
      l_6 = ATgetArgument(j_6, 1);
      m_6 = ATgetArgument(j_6, 2);
      n_6 = ATgetArgument(j_6, 3);
      i_6 :
      if(match_string(k_6, "seq"))
        {
          ATerm a_7 = NULL;
          t = not_null(n_6);
          {
            t = tuple2list_0(t);
            {
              ATerm s_0 (ATerm t)
              {
                ATerm r_6 = NULL,s_6 = NULL,t_6 = NULL;
                r_6 = t;
                f_6 :
                if(match_cons(r_6, sym__2))
                  {
                    s_6 = ATgetArgument(r_6, 0);
                    t_6 = ATgetArgument(r_6, 1);
                    {
                      ATerm w_6 = NULL;
                      ATerm x_6 = NULL;
                      t = (ATerm) ATmakeAppl(sym__3, not_null(s_6), not_null(l_6), not_null(t_6));
                      {
                        t = arg2abox_0(t);
                        {
                          x_6 = t;
                          if(((w_6 != NULL) && (w_6 != x_6)))
                            _fail(x_6);
                          else
                            w_6 = x_6;
                        }
                      }
                      t = not_null(w_6);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = nzip_1(t, s_0);
              {
                a_7 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_6), not_null(a_7));
                  t = instantiate_0(t);
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
ATerm instantiate_sep_list_1 (ATerm t, ATerm v_93 (ATerm))
{
  ATerm u_7 (ATerm t)
  {
    ATerm k_7 = NULL,l_7 = NULL,m_7 = NULL;
    ATerm p_8 = t;
    int u_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_8);
      }
    else
      {
        t = p_8;
        {
          ATerm v_8 = t;
          int w_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              LocalPopChoice(w_8);
            }
          else
            {
              t = v_8;
              {
                ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL,r_7 = NULL;
                n_7 = t;
                i_7 :
                if(((ATgetType(n_7) == AT_LIST) && !(ATisEmpty(n_7))))
                  {
                    o_7 = ATgetFirst((ATermList) n_7);
                    p_7 = (ATerm) ATgetNext((ATermList) n_7);
                    j_7 :
                    if(((ATgetType(p_7) == AT_LIST) && !(ATisEmpty(p_7))))
                      {
                        q_7 = ATgetFirst((ATermList) p_7);
                        r_7 = (ATerm) ATgetNext((ATermList) p_7);
                        {
                          if(((k_7 != NULL) && (k_7 != o_7)))
                            _fail(o_7);
                          else
                            k_7 = o_7;
                          {
                            if(((l_7 != NULL) && (l_7 != q_7)))
                              _fail(q_7);
                            else
                              l_7 = q_7;
                            {
                              if(((m_7 != NULL) && (m_7 != r_7)))
                                _fail(r_7);
                              else
                                m_7 = r_7;
                              {
                                ATerm t_0 (ATerm t)
                                {
                                  ATerm s_7 = NULL;
                                  ATerm t_7 = NULL;
                                  t = term_j_8;
                                  {
                                    t = v_93(t);
                                    {
                                      t_7 = t;
                                      if(((s_7 != NULL) && (s_7 != t_7)))
                                        _fail(t_7);
                                      else
                                        s_7 = t_7;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(s_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(l_7)), not_null(k_7)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm u_0 (ATerm t)
                                {
                                  t = not_null(m_7);
                                  t = u_7(t);
                                  return(t);
                                }
                                t = Cons_2(t, t_0, u_0);
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
              }
            }
        }
      }
    return(t);
  }
  t = u_7(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm v_0 (ATerm t)
  {
    t = term_x_8;
    return(t);
  }
  ATerm w_0 (ATerm t)
  {
    t = term_y_8;
    return(t);
  }
  t = foldr_3(t, v_0, add_0, w_0);
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm c_100 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm z_8 = t;
    int a_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_7 = NULL;
        t = c_100(t);
        {
          y_7 = t;
          t = (ATerm) ATinsert(ATempty, not_null(y_7));
        }
        LocalPopChoice(a_9);
      }
    else
      {
        t = z_8;
        {
          ATerm x_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, x_0, conc_0, a_8);
        }
      }
    return(t);
  }
  t = a_8(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm e_8 = NULL,f_8 = NULL,g_8 = NULL;
  e_8 = t;
  d_8 :
  if(match_cons(e_8, sym__2))
    {
      f_8 = ATgetArgument(e_8, 0);
      g_8 = ATgetArgument(e_8, 1);
      t = SSL_mod(not_null(f_8), not_null(g_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_8 = NULL;
      ATerm q_8 = NULL;
      o_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_8), term_o_9);
        {
          t = mod_0(t);
          {
            q_8 = t;
            l_8 :
            if(!(match_int(q_8, 0)))
              {
                _fail(t);
              }
          }
        }
      }
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm p_9;
        p_9 = t;
        {
          ATerm r_8 = NULL,t_8 = NULL;
          ATerm s_8 = NULL;
          s_8 = t;
          if(((r_8 != NULL) && (r_8 != s_8)))
            _fail(s_8);
          else
            r_8 = s_8;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_8), term_o_9);
            {
              t = mod_0(t);
              {
                t_8 = t;
                n_8 :
                if(!(match_int(t_8, 0)))
                  {
                    _fail(t);
                  }
              }
            }
          }
        }
        t = p_9;
      }
    }
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm c_9 = NULL,d_9 = NULL,e_9 = NULL;
  c_9 = t;
  b_9 :
  if(match_cons(c_9, sym__2))
    {
      d_9 = ATgetArgument(c_9, 0);
      e_9 = ATgetArgument(c_9, 1);
      {
        ATerm h_9 = NULL;
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_9 = NULL,k_9 = NULL;
            t = not_null(d_9);
            {
              t = even_0(t);
              {
                ATerm j_9 = NULL;
                t = term_j_8;
                {
                  t = n_71(t);
                  {
                    j_9 = t;
                    if(((i_9 != NULL) && (i_9 != j_9)))
                      _fail(j_9);
                    else
                      i_9 = j_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_o_9, not_null(i_9), not_null(e_9));
                  {
                    t = arg2abox_0(t);
                    {
                      k_9 = t;
                      if(((h_9 != NULL) && (h_9 != k_9)))
                        _fail(k_9);
                      else
                        h_9 = k_9;
                    }
                  }
                }
              }
            }
            LocalPopChoice(r_9);
          }
        else
          {
            t = q_9;
            {
              ATerm l_9 = NULL,n_9 = NULL;
              ATerm m_9 = NULL;
              t = term_j_8;
              {
                t = n_71(t);
                {
                  m_9 = t;
                  if(((l_9 != NULL) && (l_9 != m_9)))
                    _fail(m_9);
                  else
                    l_9 = m_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, term_y_8, not_null(l_9), not_null(e_9));
                {
                  t = arg2abox_0(t);
                  {
                    n_9 = t;
                    if(((h_9 != NULL) && (h_9 != n_9)))
                      _fail(n_9);
                    else
                      h_9 = n_9;
                  }
                }
              }
            }
          }
        t = not_null(h_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox6_0 (ATerm t)
{
  ATerm g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
  j_10 = t;
  v_9 :
  if(match_cons(j_10, sym__4))
    {
      k_10 = ATgetArgument(j_10, 0);
      l_10 = ATgetArgument(j_10, 1);
      m_10 = ATgetArgument(j_10, 2);
      n_10 = ATgetArgument(j_10, 3);
      w_9 :
      if(match_string(k_10, "iter-sep"))
        {
          if(((g_10 != NULL) && (g_10 != l_10)))
            _fail(l_10);
          else
            g_10 = l_10;
          {
            if(((h_10 != NULL) && (h_10 != m_10)))
              _fail(m_10);
            else
              h_10 = m_10;
            if(((i_10 != NULL) && (i_10 != n_10)))
              _fail(n_10);
            else
              i_10 = n_10;
          }
        }
      else
        {
          if(match_string(k_10, "iter-star-sep"))
            {
              if(((g_10 != NULL) && (g_10 != l_10)))
                _fail(l_10);
              else
                g_10 = l_10;
              {
                if(((h_10 != NULL) && (h_10 != m_10)))
                  _fail(m_10);
                else
                  h_10 = m_10;
                if(((i_10 != NULL) && (i_10 != n_10)))
                  _fail(n_10);
                else
                  i_10 = n_10;
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
  {
    t = not_null(i_10);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          t = not_null(g_10);
          return(t);
        }
        t = BuildSepList_1(t, z_0);
        return(t);
      }
      t = nzip_1(t, y_0);
      {
        o_10 = t;
        {
          ATerm s_9 = t;
          int t_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_10 = NULL;
              t = not_null(h_10);
              {
                ATerm a_1 (ATerm t)
                {
                  t = S_1(t, _id);
                  return(t);
                }
                t = collect_p__1(t, a_1);
                {
                  t = length_0(t);
                  {
                    q_10 = t;
                    f_10 :
                    if(match_int(q_10, 1))
                      {
                        t = not_null(o_10);
                        {
                          ATerm g_11 (ATerm t)
                          {
                            ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
                            ATerm j_11 (ATerm t)
                            {
                              ATerm a_11 = NULL;
                              ATerm b_11 = NULL;
                              t = not_null(t_10);
                              {
                                t = g_11(t);
                                {
                                  b_11 = t;
                                  if(((a_11 != NULL) && (a_11 != b_11)))
                                    _fail(b_11);
                                  else
                                    a_11 = b_11;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_11)), not_null(s_10)), not_null(s_10));
                              return(t);
                            }
                            r_10 = t;
                            d_10 :
                            if(((ATgetType(r_10) == AT_LIST) && ATisEmpty(r_10)))
                              {
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                if(((ATgetType(r_10) == AT_LIST) && !(ATisEmpty(r_10))))
                                  {
                                    s_10 = ATgetFirst((ATermList) r_10);
                                    t_10 = (ATerm) ATgetNext((ATermList) r_10);
                                    e_10 :
                                    if(((ATgetType(t_10) == AT_LIST) && ATisEmpty(t_10)))
                                      {
                                        {
                                          ATerm u_9 = t;
                                          int x_9 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(s_10));
                                              LocalPopChoice(x_9);
                                            }
                                          else
                                            {
                                              t = u_9;
                                              t = j_11(t);
                                            }
                                        }
                                      }
                                    else
                                      {
                                        t = j_11(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            return(t);
                          }
                          t = g_11(t);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
                }
              }
              LocalPopChoice(t_9);
            }
          else
            {
              t = s_9;
              t = not_null(o_10);
            }
          {
            ATerm b_1 (ATerm t)
            {
              t = not_null(h_10);
              return(t);
            }
            t = instantiate_sep_list_1(t, b_1);
          }
        }
      }
    }
  }
  return(t);
}
ATerm symbol2abox5_0 (ATerm t)
{
  ATerm s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL,x_11 = NULL,y_11 = NULL,z_11 = NULL,f_12 = NULL;
  v_11 = t;
  n_11 :
  if(match_cons(v_11, sym__4))
    {
      w_11 = ATgetArgument(v_11, 0);
      x_11 = ATgetArgument(v_11, 1);
      y_11 = ATgetArgument(v_11, 2);
      z_11 = ATgetArgument(v_11, 3);
      o_11 :
      if(match_string(w_11, "iter"))
        {
          if(((s_11 != NULL) && (s_11 != x_11)))
            _fail(x_11);
          else
            s_11 = x_11;
          {
            if(((t_11 != NULL) && (t_11 != y_11)))
              _fail(y_11);
            else
              t_11 = y_11;
            if(((u_11 != NULL) && (u_11 != z_11)))
              _fail(z_11);
            else
              u_11 = z_11;
          }
        }
      else
        {
          if(match_string(w_11, "iter-star"))
            {
              if(((s_11 != NULL) && (s_11 != x_11)))
                _fail(x_11);
              else
                s_11 = x_11;
              {
                if(((t_11 != NULL) && (t_11 != y_11)))
                  _fail(y_11);
                else
                  t_11 = y_11;
                if(((u_11 != NULL) && (u_11 != z_11)))
                  _fail(z_11);
                else
                  u_11 = z_11;
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
  {
    t = not_null(u_11);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm a_12 = NULL;
        ATerm c_12 = NULL;
        a_12 = t;
        {
          ATerm d_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, term_y_8, not_null(s_11), not_null(a_12));
          {
            t = arg2abox_0(t);
            {
              d_12 = t;
              if(((c_12 != NULL) && (c_12 != d_12)))
                _fail(d_12);
              else
                c_12 = d_12;
            }
          }
          t = not_null(c_12);
        }
        return(t);
      }
      t = map_1(t, c_1);
      {
        f_12 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_11), (ATerm) ATinsert(ATempty, not_null(f_12)));
          t = instantiate_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm symbol2abox4_0 (ATerm t)
{
  ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,t_12 = NULL;
  p_12 = t;
  n_12 :
  if(match_cons(p_12, sym__4))
    {
      q_12 = ATgetArgument(p_12, 0);
      r_12 = ATgetArgument(p_12, 1);
      s_12 = ATgetArgument(p_12, 2);
      t_12 = ATgetArgument(p_12, 3);
      o_12 :
      if(match_cons(t_12, sym_None_0))
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
  return(t);
}
ATerm symbol2abox3_0 (ATerm t)
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  c_13 = t;
  a_13 :
  if(match_cons(c_13, sym__4))
    {
      d_13 = ATgetArgument(c_13, 0);
      e_13 = ATgetArgument(c_13, 1);
      f_13 = ATgetArgument(c_13, 2);
      g_13 = ATgetArgument(c_13, 3);
      b_13 :
      if(match_cons(g_13, sym_Some_1))
        {
          h_13 = ATgetArgument(g_13, 0);
          {
            ATerm m_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, term_y_8, not_null(e_13), not_null(h_13));
            {
              t = arg2abox_0(t);
              {
                m_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_13), (ATerm) ATinsert(ATempty, not_null(m_13)));
                  t = instantiate_0(t);
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
ATerm symbol2abox2_0 (ATerm t)
{
  ATerm x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL;
  x_13 = t;
  t_13 :
  if(match_cons(x_13, sym__4))
    {
      y_13 = ATgetArgument(x_13, 0);
      z_13 = ATgetArgument(x_13, 1);
      a_14 = ATgetArgument(x_13, 2);
      b_14 = ATgetArgument(x_13, 3);
      u_13 :
      if(match_cons(b_14, sym_alt_2))
        {
          c_14 = ATgetArgument(b_14, 0);
          d_14 = ATgetArgument(b_14, 1);
          v_13 :
          if(((ATgetType(d_14) == AT_LIST) && !(ATisEmpty(d_14))))
            {
              e_14 = ATgetFirst((ATermList) d_14);
              f_14 = (ATerm) ATgetNext((ATermList) d_14);
              w_13 :
              if(((ATgetType(f_14) == AT_LIST) && ATisEmpty(f_14)))
                {
                  {
                    ATerm l_14 = NULL;
                    t = (ATerm) ATmakeAppl(sym__3, not_null(c_14), not_null(z_13), not_null(e_14));
                    {
                      ATerm n_14 = NULL;
                      t = arg2abox_0(t);
                      {
                        l_14 = t;
                        {
                          ATerm o_14 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_14), not_null(a_14));
                          {
                            t = index_0(t);
                            {
                              o_14 = t;
                              if(((n_14 != NULL) && (n_14 != o_14)))
                                _fail(o_14);
                              else
                                n_14 = o_14;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(n_14)), (ATerm) ATinsert(ATempty, not_null(l_14)));
                            t = instantiate_0(t);
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
ATerm Ind1_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL;
  w_14 = t;
  t_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      u_14 :
      if(match_int(x_14, 1))
        {
          v_14 :
          if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
            {
              z_14 = ATgetFirst((ATermList) y_14);
              a_15 = (ATerm) ATgetNext((ATermList) y_14);
              t = not_null(z_14);
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
ATerm subt_0 (ATerm t)
{
  ATerm g_15 = NULL,h_15 = NULL,i_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym__2))
    {
      h_15 = ATgetArgument(g_15, 0);
      i_15 = ATgetArgument(g_15, 1);
      {
        ATerm y_9 = t;
        int z_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_15), not_null(i_15));
            LocalPopChoice(z_9);
          }
        else
          {
            t = y_9;
            t = SSL_subtr(not_null(h_15), not_null(i_15));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL;
  q_15 = t;
  o_15 :
  if(match_cons(q_15, sym__2))
    {
      r_15 = ATgetArgument(q_15, 0);
      s_15 = ATgetArgument(q_15, 1);
      p_15 :
      if(((ATgetType(s_15) == AT_LIST) && !(ATisEmpty(s_15))))
        {
          t_15 = ATgetFirst((ATermList) s_15);
          u_15 = (ATerm) ATgetNext((ATermList) s_15);
          {
            ATerm y_15 = NULL;
            ATerm a_10;
            a_10 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_15), term_o_9);
              t = geq_0(t);
            }
            t = a_10;
            {
              ATerm z_15 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_15), term_y_8);
              {
                t = subt_0(t);
                {
                  z_15 = t;
                  if(((y_15 != NULL) && (y_15 != z_15)))
                    _fail(z_15);
                  else
                    y_15 = z_15;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_15), not_null(u_15));
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
ATerm repeat_1 (ATerm t, ATerm n_87 (ATerm))
{
  ATerm c_16 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      t = n_87(t);
      t = c_16(t);
      return(t);
    }
    t = try_1(t, d_1);
    return(t);
  }
  t = c_16(t);
  return(t);
}
ATerm index_0 (ATerm t)
{
  t = repeat_1(t, Ind2_0);
  t = Ind1_0(t);
  return(t);
}
ATerm symbol2abox1_0 (ATerm t)
{
  ATerm i_16 = NULL,j_16 = NULL,k_16 = NULL,l_16 = NULL,m_16 = NULL,n_16 = NULL,o_16 = NULL;
  i_16 = t;
  f_16 :
  if(match_cons(i_16, sym__4))
    {
      j_16 = ATgetArgument(i_16, 0);
      k_16 = ATgetArgument(i_16, 1);
      l_16 = ATgetArgument(i_16, 2);
      m_16 = ATgetArgument(i_16, 3);
      g_16 :
      if(match_cons(m_16, sym_alt_2))
        {
          n_16 = ATgetArgument(m_16, 0);
          o_16 = ATgetArgument(m_16, 1);
          h_16 :
          if(((ATgetType(o_16) == AT_LIST) && ATisEmpty(o_16)))
            {
              {
                ATerm t_16 = NULL;
                ATerm u_16 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), not_null(l_16));
                {
                  t = index_0(t);
                  {
                    u_16 = t;
                    if(((t_16 != NULL) && (t_16 != u_16)))
                      _fail(u_16);
                    else
                      t_16 = u_16;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(t_16)), (ATerm) ATempty);
                  t = instantiate_0(t);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_0 (ATerm t)
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = symbol2abox1_0(t);
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm p_10 = t;
        int u_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = symbol2abox2_0(t);
            LocalPopChoice(u_10);
          }
        else
          {
            t = p_10;
            {
              ATerm v_10 = t;
              int w_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = symbol2abox3_0(t);
                  LocalPopChoice(w_10);
                }
              else
                {
                  t = v_10;
                  {
                    ATerm x_10 = t;
                    int y_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = symbol2abox4_0(t);
                        LocalPopChoice(y_10);
                      }
                    else
                      {
                        t = x_10;
                        {
                          ATerm z_10 = t;
                          int c_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = symbol2abox5_0(t);
                              LocalPopChoice(c_11);
                            }
                          else
                            {
                              t = z_10;
                              {
                                ATerm d_11 = t;
                                int e_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = symbol2abox6_0(t);
                                    LocalPopChoice(e_11);
                                  }
                                else
                                  {
                                    t = d_11;
                                    t = symbol2abox7_0(t);
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
ATerm selector_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL;
  i_17 = t;
  h_17 :
  if(match_cons(i_17, sym_selector_2))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      {
        ATerm f_11 = t;
        int h_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_17 = NULL,q_17 = NULL;
            ATerm p_17 = NULL;
            t = SSLgetAnnotations(not_null(i_17));
            {
              p_17 = t;
              if(((o_17 != NULL) && (o_17 != p_17)))
                _fail(p_17);
              else
                o_17 = p_17;
            }
            {
              t = not_null(j_17);
              {
                ATerm s_17 = NULL;
                t = k_0(t);
                {
                  q_17 = t;
                  {
                    t = not_null(k_17);
                    {
                      ATerm u_17 = NULL;
                      t = l_0(t);
                      {
                        s_17 = t;
                        {
                          ATerm v_17 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(q_17), not_null(s_17)), not_null(o_17));
                          {
                            v_17 = t;
                            if(((u_17 != NULL) && (u_17 != v_17)))
                              _fail(v_17);
                            else
                              u_17 = v_17;
                          }
                          t = not_null(u_17);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(h_11);
          }
        else
          {
            t = f_11;
            {
              ATerm z_17 = NULL,b_18 = NULL;
              ATerm a_18 = NULL;
              t = SSLgetAnnotations(not_null(i_17));
              {
                a_18 = t;
                if(((z_17 != NULL) && (z_17 != a_18)))
                  _fail(a_18);
                else
                  z_17 = a_18;
              }
              {
                t = not_null(j_17);
                {
                  ATerm d_18 = NULL;
                  t = k_0(t);
                  {
                    b_18 = t;
                    {
                      t = not_null(k_17);
                      {
                        ATerm f_18 = NULL;
                        t = l_0(t);
                        {
                          d_18 = t;
                          {
                            ATerm g_18 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(b_18), not_null(d_18)), not_null(z_17));
                            {
                              g_18 = t;
                              if(((f_18 != NULL) && (f_18 != g_18)))
                                _fail(g_18);
                              else
                                f_18 = g_18;
                            }
                            t = not_null(f_18);
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
ATerm get_symbol_0 (ATerm t)
{
  ATerm u_18 = NULL,v_18 = NULL,w_18 = NULL;
  u_18 = t;
  t_18 :
  if(match_cons(u_18, sym_Path_2))
    {
      v_18 = ATgetArgument(u_18, 0);
      w_18 = ATgetArgument(u_18, 1);
      {
        ATerm z_18 = NULL;
        t = not_null(w_18);
        {
          ATerm e_1 (ATerm t)
          {
            ATerm f_1 (ATerm t)
            {
              ATerm g_1 (ATerm t)
              {
                ATerm a_19 = NULL;
                a_19 = t;
                if(((z_18 != NULL) && (z_18 != a_19)))
                  _fail(a_19);
                else
                  z_18 = a_19;
                return(t);
              }
              t = selector_2(t, _id, g_1);
              return(t);
            }
            t = Cons_2(t, f_1, Nil_0);
            return(t);
          }
          t = at_last_1(t, e_1);
        }
        t = not_null(z_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm arg2abox_0 (ATerm t)
{
  ATerm j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL;
  j_19 = t;
  i_19 :
  if(match_cons(j_19, sym__3))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      m_19 = ATgetArgument(j_19, 2);
      {
        ATerm q_19 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_19), (ATerm) ATinsert(ATempty, not_null(k_19)));
        {
          ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
          t = conc_0(t);
          {
            q_19 = t;
            {
              ATerm i_11 = t;
              int k_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL;
                  t = pp_table_get_0(t);
                  {
                    v_19 = t;
                    h_19 :
                    if(match_cons(v_19, sym__2))
                      {
                        w_19 = ATgetArgument(v_19, 0);
                        x_19 = ATgetArgument(v_19, 1);
                        {
                          ATerm y_19 = NULL;
                          if(((s_19 != NULL) && (s_19 != w_19)))
                            _fail(w_19);
                          else
                            s_19 = w_19;
                          {
                            if(((u_19 != NULL) && (u_19 != x_19)))
                              _fail(x_19);
                            else
                              u_19 = x_19;
                            {
                              t = not_null(s_19);
                              {
                                t = get_symbol_0(t);
                                {
                                  y_19 = t;
                                  {
                                    if(((t_19 != NULL) && (t_19 != y_19)))
                                      _fail(y_19);
                                    else
                                      t_19 = y_19;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__4, not_null(t_19), not_null(q_19), not_null(u_19), not_null(m_19));
                                      t = symbol2abox_0(t);
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
                  }
                  LocalPopChoice(k_11);
                }
              else
                {
                  t = i_11;
                  {
                    t = not_null(m_19);
                    t = trm2abox_0(t);
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
ATerm NZip3_0 (ATerm t)
{
  ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
  f_20 = t;
  e_20 :
  if(match_cons(f_20, sym__2))
    {
      g_20 = ATgetArgument(f_20, 0);
      h_20 = ATgetArgument(f_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(h_20)), not_null(g_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm p_20 = NULL,q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL;
  p_20 = t;
  n_20 :
  if(match_cons(p_20, sym__2))
    {
      q_20 = ATgetArgument(p_20, 0);
      r_20 = ATgetArgument(p_20, 1);
      o_20 :
      if(((ATgetType(r_20) == AT_LIST) && !(ATisEmpty(r_20))))
        {
          s_20 = ATgetFirst((ATermList) r_20);
          t_20 = (ATerm) ATgetNext((ATermList) r_20);
          {
            ATerm x_20 = NULL;
            ATerm y_20 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(q_20), term_y_8);
            {
              t = add_0(t);
              {
                y_20 = t;
                if(((x_20 != NULL) && (x_20 != y_20)))
                  _fail(y_20);
                else
                  x_20 = y_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(q_20), not_null(s_20)), (ATerm) ATmakeAppl(sym__2, not_null(x_20), not_null(t_20)));
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
ATerm NZip1_0 (ATerm t)
{
  ATerm e_21 = NULL,f_21 = NULL,g_21 = NULL;
  e_21 = t;
  c_21 :
  if(match_cons(e_21, sym__2))
    {
      f_21 = ATgetArgument(e_21, 0);
      g_21 = ATgetArgument(e_21, 1);
      d_21 :
      if(((ATgetType(g_21) == AT_LIST) && ATisEmpty(g_21)))
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
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm d_80 (ATerm), ATerm e_80 (ATerm), ATerm f_80 (ATerm), ATerm g_80 (ATerm))
{
  ATerm j_21 (ATerm t)
  {
    ATerm l_11 = t;
    int m_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_80(t);
        LocalPopChoice(m_11);
      }
    else
      {
        t = l_11;
        {
          t = e_80(t);
          {
            t = _2(t, g_80, j_21);
            t = f_80(t);
          }
        }
      }
    return(t);
  }
  t = j_21(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm l_21 = NULL;
  l_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(l_21));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm p_80 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, p_80);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm r_21 = NULL;
  ATerm t_21 = NULL,u_21 = NULL,v_21 = NULL;
  r_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_11, not_null(r_21));
    {
      t = table_get_0(t);
      {
        t_21 = t;
        q_21 :
        if(match_cons(t_21, sym__2))
          {
            u_21 = ATgetArgument(t_21, 0);
            v_21 = ATgetArgument(t_21, 1);
            {
              ATerm q_11;
              q_11 = t;
              {
                t = not_null(u_21);
                {
                  t = path_to_string_0(t);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      t = term_r_11;
                      return(t);
                    }
                    t = notify_1(t, h_1);
                  }
                }
              }
              t = q_11;
            }
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
ATerm pp_table_get_p__0 (ATerm t)
{
  ATerm b_22 = NULL;
  b_22 = t;
  {
    ATerm b_12 = t;
    int e_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0(t);
        LocalPopChoice(e_12);
      }
    else
      {
        t = b_12;
        {
          ATerm i_1 (ATerm t)
          {
            t = term_g_12;
            return(t);
          }
          t = debug_1(t, i_1);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm trm2abox_appl_0 (ATerm t)
{
  ATerm n_22 = NULL;
  ATerm p_22 = NULL,q_22 = NULL,w_22 = NULL,x_22 = NULL,y_22 = NULL;
  n_22 = t;
  {
    ATerm r_22 = NULL;
    ATerm t_22 = NULL,u_22 = NULL,v_22 = NULL;
    t = not_null(n_22);
    {
      r_22 = t;
      {
        t = SSL_explode_term(not_null(r_22));
        {
          t_22 = t;
          h_22 :
          if(match_cons(t_22, sym__2))
            {
              u_22 = ATgetArgument(t_22, 0);
              v_22 = ATgetArgument(t_22, 1);
              {
                if(((p_22 != NULL) && (p_22 != u_22)))
                  _fail(u_22);
                else
                  p_22 = u_22;
                if(((q_22 != NULL) && (q_22 != v_22)))
                  _fail(v_22);
                else
                  q_22 = v_22;
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
      t = (ATerm) ATinsert(ATempty, not_null(p_22));
      {
        t = pp_table_get_p__0(t);
        {
          w_22 = t;
          m_22 :
          if(match_cons(w_22, sym__2))
            {
              x_22 = ATgetArgument(w_22, 0);
              y_22 = ATgetArgument(w_22, 1);
              {
                ATerm g_23 = NULL;
                t = not_null(q_22);
                {
                  ATerm j_1 (ATerm t)
                  {
                    ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
                    b_23 = t;
                    k_22 :
                    if(match_cons(b_23, sym__2))
                      {
                        c_23 = ATgetArgument(b_23, 0);
                        d_23 = ATgetArgument(b_23, 1);
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(c_23), (ATerm)ATinsert(ATempty, not_null(p_22)), not_null(d_23));
                          t = arg2abox_0(t);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = nzip_1(t, j_1);
                  {
                    g_23 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_22), not_null(g_23));
                      t = instantiate_0(t);
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
  return(t);
}
ATerm trm2abox_list_0 (ATerm t)
{
  t = is_list_0(t);
  t = map_1(t, trm2abox_0);
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm p_23 = NULL;
  p_23 = t;
  t = SSL_is_int(not_null(p_23));
  return(t);
}
ATerm trm2abox_int_0 (ATerm t)
{
  ATerm u_23 = NULL;
  ATerm w_23 = NULL;
  u_23 = t;
  {
    t = is_int_0(t);
    {
      ATerm x_23 = NULL;
      t = int_to_string_0(t);
      {
        x_23 = t;
        if(((w_23 != NULL) && (w_23 != x_23)))
          _fail(x_23);
        else
          w_23 = x_23;
      }
      t = (ATerm) ATmakeAppl(sym_S_1, not_null(w_23));
    }
  }
  return(t);
}
ATerm trm2abox_string_0 (ATerm t)
{
  ATerm b_24 = NULL;
  b_24 = t;
  {
    t = is_string_0(t);
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(b_24));
  }
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = trm2abox_string_0(t);
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = trm2abox_int_0(t);
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm l_12 = t;
              int m_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0(t);
                  LocalPopChoice(m_12);
                }
              else
                {
                  t = l_12;
                  t = trm2abox_appl_0(t);
                }
            }
          }
      }
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
  ATerm y_26 = NULL;
  y_26 = t;
  t = SSL_int_to_string(not_null(y_26));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL;
  j_28 = t;
  i_28 :
  if(match_cons(j_28, sym_Path1_1))
    {
      k_28 = ATgetArgument(j_28, 0);
      t = not_null(k_28);
    }
  else
    {
      if(match_cons(j_28, sym_Path_2))
        {
          k_28 = ATgetArgument(j_28, 0);
          l_28 = ATgetArgument(j_28, 1);
          {
            ATerm e_29 = NULL,o_29 = NULL;
            t = not_null(l_28);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm f_29 = NULL,g_29 = NULL,h_29 = NULL;
                f_29 = t;
                e_28 :
                if(match_cons(f_29, sym_selector_2))
                  {
                    g_29 = ATgetArgument(f_29, 0);
                    h_29 = ATgetArgument(f_29, 1);
                    {
                      ATerm m_29 = NULL;
                      ATerm n_29 = NULL;
                      t = not_null(g_29);
                      {
                        t = int_to_string_0(t);
                        {
                          n_29 = t;
                          if(((m_29 != NULL) && (m_29 != n_29)))
                            _fail(n_29);
                          else
                            m_29 = n_29;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(h_29)), term_v_12), not_null(m_29)), term_u_12);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, k_1);
              {
                t = concat_0(t);
                {
                  o_29 = t;
                  {
                    if(((e_29 != NULL) && (e_29 != o_29)))
                      _fail(o_29);
                    else
                      e_29 = o_29;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(e_29)), not_null(k_28));
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
ATerm mk_key_0 (ATerm t)
{
  ATerm i_30 = NULL,j_30 = NULL,k_30 = NULL;
  i_30 = t;
  h_30 :
  if(match_cons(i_30, sym_Path1_1))
    {
      j_30 = ATgetArgument(i_30, 0);
      t = (ATerm) ATinsert(ATempty, not_null(j_30));
    }
  else
    {
      if(match_cons(i_30, sym_Path_2))
        {
          j_30 = ATgetArgument(i_30, 0);
          k_30 = ATgetArgument(i_30, 1);
          {
            ATerm x_30 = NULL,f_31 = NULL;
            t = not_null(k_30);
            {
              ATerm l_1 (ATerm t)
              {
                ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
                y_30 = t;
                f_30 :
                if(match_cons(y_30, sym_selector_2))
                  {
                    z_30 = ATgetArgument(y_30, 0);
                    a_31 = ATgetArgument(y_30, 1);
                    t = not_null(z_30);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, l_1);
              {
                f_31 = t;
                {
                  if(((x_30 != NULL) && (x_30 != f_31)))
                    _fail(f_31);
                  else
                    x_30 = f_31;
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_30)), not_null(j_30));
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
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  r_31 :
  if(match_cons(s_31, sym_PP_Entry_2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      {
        ATerm x_31 = NULL;
        ATerm y_31 = NULL;
        t = not_null(t_31);
        {
          t = mk_key_0(t);
          {
            y_31 = t;
            if(((x_31 != NULL) && (x_31 != y_31)))
              _fail(y_31);
            else
              x_31 = y_31;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_p_11, not_null(x_31), (ATerm) ATmakeAppl(sym__2, not_null(t_31), not_null(u_31)));
          {
            t = table_put_0(t);
            {
              t = not_null(t_31);
              {
                t = path_to_string_0(t);
                {
                  ATerm m_1 (ATerm t)
                  {
                    t = term_w_12;
                    return(t);
                  }
                  t = notify_1(t, m_1);
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
ATerm De_Escape4_0 (ATerm t)
{
  ATerm d_32 = NULL;
  d_32 = t;
  c_32 :
  if(((ATgetType(d_32) == AT_LIST) && ATisEmpty(d_32)))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm De_Escape3_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  i_32 = t;
  h_32 :
  if(((ATgetType(i_32) == AT_LIST) && !(ATisEmpty(i_32))))
    {
      j_32 = ATgetFirst((ATermList) i_32);
      k_32 = (ATerm) ATgetNext((ATermList) i_32);
      {
        ATerm n_32 = NULL;
        ATerm o_32 = NULL;
        t = not_null(k_32);
        {
          t = De_Escape_0(t);
          {
            o_32 = t;
            if(((n_32 != NULL) && (n_32 != o_32)))
              _fail(o_32);
            else
              n_32 = o_32;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(n_32)), not_null(j_32));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm De_Escape2_0 (ATerm t)
{
  ATerm x_32 = NULL,y_32 = NULL,z_32 = NULL,a_33 = NULL,g_33 = NULL;
  x_32 = t;
  t_32 :
  if(((ATgetType(x_32) == AT_LIST) && !(ATisEmpty(x_32))))
    {
      y_32 = ATgetFirst((ATermList) x_32);
      z_32 = (ATerm) ATgetNext((ATermList) x_32);
      u_32 :
      if(match_int(y_32, 92))
        {
          v_32 :
          if(((ATgetType(z_32) == AT_LIST) && !(ATisEmpty(z_32))))
            {
              a_33 = ATgetFirst((ATermList) z_32);
              g_33 = (ATerm) ATgetNext((ATermList) z_32);
              w_32 :
              if(match_int(a_33, 92))
                {
                  ATerm i_33 = NULL;
                  ATerm j_33 = NULL;
                  t = not_null(g_33);
                  {
                    t = De_Escape_0(t);
                    {
                      j_33 = t;
                      if(((i_33 != NULL) && (i_33 != j_33)))
                        _fail(j_33);
                      else
                        i_33 = j_33;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_33)), term_x_12);
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
ATerm De_Escape1_0 (ATerm t)
{
  ATerm s_33 = NULL,t_33 = NULL,u_33 = NULL,v_33 = NULL,w_33 = NULL;
  s_33 = t;
  o_33 :
  if(((ATgetType(s_33) == AT_LIST) && !(ATisEmpty(s_33))))
    {
      t_33 = ATgetFirst((ATermList) s_33);
      u_33 = (ATerm) ATgetNext((ATermList) s_33);
      p_33 :
      if(match_int(t_33, 92))
        {
          q_33 :
          if(((ATgetType(u_33) == AT_LIST) && !(ATisEmpty(u_33))))
            {
              v_33 = ATgetFirst((ATermList) u_33);
              w_33 = (ATerm) ATgetNext((ATermList) u_33);
              r_33 :
              if(match_int(v_33, 34))
                {
                  ATerm y_33 = NULL;
                  ATerm z_33 = NULL;
                  t = not_null(w_33);
                  {
                    t = De_Escape_0(t);
                    {
                      z_33 = t;
                      if(((y_33 != NULL) && (y_33 != z_33)))
                        _fail(z_33);
                      else
                        y_33 = z_33;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_33)), term_y_12);
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
ATerm De_Escape_0 (ATerm t)
{
  ATerm z_12 = t;
  int i_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(i_13);
    }
  else
    {
      t = z_12;
      {
        ATerm j_13 = t;
        int k_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(k_13);
          }
        else
          {
            t = j_13;
            {
              ATerm l_13 = t;
              int n_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(n_13);
                }
              else
                {
                  t = l_13;
                  t = De_Escape4_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm de_escape_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = De_Escape_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm c_79 (ATerm))
{
  ATerm c_34 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = c_79(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = Cons_2(t, _id, c_34);
      }
    return(t);
  }
  t = c_34(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  l_34 :
  if(((ATgetType(m_34) == AT_LIST) && !(ATisEmpty(m_34))))
    {
      n_34 = ATgetFirst((ATermList) m_34);
      o_34 = (ATerm) ATgetNext((ATermList) m_34);
      t = not_null(o_34);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
  t_34 = t;
  s_34 :
  if(((ATgetType(t_34) == AT_LIST) && !(ATisEmpty(t_34))))
    {
      u_34 = ATgetFirst((ATermList) t_34);
      v_34 = (ATerm) ATgetNext((ATermList) t_34);
      t = not_null(u_34);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm q_13;
    q_13 = t;
    {
      ATerm d_35 = NULL;
      t = Hd_0(t);
      {
        d_35 = t;
        y_34 :
        if(!(match_int(d_35, 34)))
          {
            _fail(t);
          }
      }
    }
    t = q_13;
    {
      t = Tl_0(t);
      {
        ATerm n_1 (ATerm t)
        {
          ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
          e_35 = t;
          a_35 :
          if(((ATgetType(e_35) == AT_LIST) && !(ATisEmpty(e_35))))
            {
              f_35 = ATgetFirst((ATermList) e_35);
              g_35 = (ATerm) ATgetNext((ATermList) e_35);
              b_35 :
              if(match_int(f_35, 34))
                {
                  c_35 :
                  if(((ATgetType(g_35) == AT_LIST) && ATisEmpty(g_35)))
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
        t = at_last_1(t, n_1);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm S_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm r_35 = NULL,s_35 = NULL;
  r_35 = t;
  q_35 :
  if(match_cons(r_35, sym_S_1))
    {
      s_35 = ATgetArgument(r_35, 0);
      {
        ATerm r_13 = t;
        int s_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_35 = NULL,x_35 = NULL;
            ATerm w_35 = NULL;
            t = SSLgetAnnotations(not_null(r_35));
            {
              w_35 = t;
              if(((v_35 != NULL) && (v_35 != w_35)))
                _fail(w_35);
              else
                v_35 = w_35;
            }
            {
              t = not_null(s_35);
              {
                ATerm b_36 = NULL;
                t = j_0(t);
                {
                  x_35 = t;
                  {
                    ATerm c_36 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(x_35)), not_null(v_35));
                    {
                      c_36 = t;
                      if(((b_36 != NULL) && (b_36 != c_36)))
                        _fail(c_36);
                      else
                        b_36 = c_36;
                    }
                    t = not_null(b_36);
                  }
                }
              }
            }
            LocalPopChoice(s_13);
          }
        else
          {
            t = r_13;
            {
              ATerm h_36 = NULL,m_36 = NULL;
              ATerm l_36 = NULL;
              t = SSLgetAnnotations(not_null(r_35));
              {
                l_36 = t;
                if(((h_36 != NULL) && (h_36 != l_36)))
                  _fail(l_36);
                else
                  h_36 = l_36;
              }
              {
                t = not_null(s_35);
                {
                  ATerm o_36 = NULL;
                  t = j_0(t);
                  {
                    m_36 = t;
                    {
                      ATerm p_36 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(m_36)), not_null(h_36));
                      {
                        p_36 = t;
                        if(((o_36 != NULL) && (o_36 != p_36)))
                          _fail(p_36);
                        else
                          o_36 = p_36;
                      }
                      t = not_null(o_36);
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
  ATerm m_37 = NULL,n_37 = NULL,o_37 = NULL;
  ATerm g_14 = t;
  int h_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_37 = NULL,q_37 = NULL,r_37 = NULL;
      p_37 = t;
      i_37 :
      if(match_cons(p_37, sym_Arg_1))
        {
          q_37 = ATgetArgument(p_37, 0);
          {
            ATerm s_37 = NULL;
            if(((n_37 != NULL) && (n_37 != q_37)))
              _fail(q_37);
            else
              n_37 = q_37;
            {
              ATerm t_37 = NULL;
              t = not_null(n_37);
              {
                t = string_to_int_0(t);
                {
                  t_37 = t;
                  if(((s_37 != NULL) && (s_37 != t_37)))
                    _fail(t_37);
                  else
                    s_37 = t_37;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(s_37));
            }
          }
        }
      else
        {
          if(match_cons(p_37, sym_Arg2_2))
            {
              q_37 = ATgetArgument(p_37, 0);
              r_37 = ATgetArgument(p_37, 1);
              {
                ATerm u_37 = NULL,w_37 = NULL;
                if(((n_37 != NULL) && (n_37 != q_37)))
                  _fail(q_37);
                else
                  n_37 = q_37;
                {
                  if(((m_37 != NULL) && (m_37 != r_37)))
                    _fail(r_37);
                  else
                    m_37 = r_37;
                  {
                    ATerm i_14;
                    i_14 = t;
                    {
                      ATerm v_37 = NULL;
                      t = not_null(n_37);
                      {
                        t = string_to_int_0(t);
                        {
                          v_37 = t;
                          if(((u_37 != NULL) && (u_37 != v_37)))
                            _fail(v_37);
                          else
                            u_37 = v_37;
                        }
                      }
                    }
                    t = i_14;
                    {
                      ATerm x_37 = NULL;
                      t = not_null(m_37);
                      {
                        t = string_to_int_0(t);
                        {
                          x_37 = t;
                          if(((w_37 != NULL) && (w_37 != x_37)))
                            _fail(x_37);
                          else
                            w_37 = x_37;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(u_37), not_null(w_37));
                    }
                  }
                }
              }
            }
          else
            {
              if(match_cons(p_37, sym_SOpt_2))
                {
                  q_37 = ATgetArgument(p_37, 0);
                  r_37 = ATgetArgument(p_37, 1);
                  {
                    if(((o_37 != NULL) && (o_37 != q_37)))
                      _fail(q_37);
                    else
                      o_37 = q_37;
                    {
                      if(((n_37 != NULL) && (n_37 != r_37)))
                        _fail(r_37);
                      else
                        n_37 = r_37;
                      t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(o_37), not_null(n_37));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      LocalPopChoice(h_14);
    }
  else
    {
      t = g_14;
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_1 (ATerm t)
            {
              t = de_quote_0(t);
              t = de_escape_0(t);
              return(t);
            }
            t = S_1(t, o_1);
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            {
              ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
              y_37 = t;
              l_37 :
              if(match_cons(y_37, sym_selector_2))
                {
                  z_37 = ATgetArgument(y_37, 0);
                  a_38 = ATgetArgument(y_37, 1);
                  {
                    ATerm b_38 = NULL;
                    if(((n_37 != NULL) && (n_37 != z_37)))
                      _fail(z_37);
                    else
                      n_37 = z_37;
                    {
                      if(((o_37 != NULL) && (o_37 != a_38)))
                        _fail(a_38);
                      else
                        o_37 = a_38;
                      {
                        ATerm c_38 = NULL;
                        t = not_null(n_37);
                        {
                          t = string_to_int_0(t);
                          {
                            c_38 = t;
                            if(((b_38 != NULL) && (b_38 != c_38)))
                              _fail(c_38);
                            else
                              b_38 = c_38;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(b_38), not_null(o_37));
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
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm e_74 (ATerm))
{
  t = e_74(t);
  {
    ATerm p_1 (ATerm t)
    {
      t = topdown_1(t, e_74);
      return(t);
    }
    t = _all(t, p_1);
  }
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, q_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm n_38 = NULL,o_38 = NULL;
  n_38 = t;
  m_38 :
  if(match_cons(n_38, sym_PP_Table_1))
    {
      o_38 = ATgetArgument(n_38, 0);
      {
        t = not_null(o_38);
        {
          t = reverse_0(t);
          {
            ATerm r_1 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, r_1);
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
ATerm error_0 (ATerm t)
{
  ATerm m_14;
  m_14 = t;
  {
    ATerm s_38 = NULL;
    ATerm t_38 = NULL;
    t_38 = t;
    if(((s_38 != NULL) && (s_38 != t_38)))
      _fail(t_38);
    else
      s_38 = t_38;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_14, not_null(s_38));
      t = printnl_0(t);
    }
  }
  t = m_14;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm q_14;
  q_14 = t;
  {
    t = error_0(t);
    {
      t = term_y_8;
      t = exit_0(t);
    }
  }
  t = q_14;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        t = term_b_15;
        return(t);
      }
      t = has_option_1(t, s_1);
      {
        t = (ATerm) ATinsert(ATempty, term_c_15);
        t = fatal_error_0(t);
      }
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        t = (ATerm) ATinsert(ATempty, term_d_15);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm d_39 = NULL,e_39 = NULL,f_39 = NULL;
  d_39 = t;
  b_39 :
  if(match_cons(d_39, sym__2))
    {
      e_39 = ATgetArgument(d_39, 0);
      f_39 = ATgetArgument(d_39, 1);
      c_39 :
      if(match_string(e_39, "in-type"))
        {
          ATerm h_39 = NULL,i_39 = NULL;
          ATerm e_15;
          e_15 = t;
          {
            ATerm j_39 = NULL;
            ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL,p_39 = NULL;
            t = not_null(f_39);
            {
              j_39 = t;
              {
                t = SSL_explode_term(not_null(j_39));
                {
                  l_39 = t;
                  y_38 :
                  if(match_cons(l_39, sym__2))
                    {
                      m_39 = ATgetArgument(l_39, 0);
                      n_39 = ATgetArgument(l_39, 1);
                      z_38 :
                      if(((ATgetType(n_39) == AT_LIST) && !(ATisEmpty(n_39))))
                        {
                          o_39 = ATgetFirst((ATermList) n_39);
                          p_39 = (ATerm) ATgetNext((ATermList) n_39);
                          a_39 :
                          if(((ATgetType(p_39) == AT_LIST) && ATisEmpty(p_39)))
                            {
                              {
                                if(((i_39 != NULL) && (i_39 != m_39)))
                                  _fail(m_39);
                                else
                                  i_39 = m_39;
                                if(((h_39 != NULL) && (h_39 != o_39)))
                                  _fail(o_39);
                                else
                                  h_39 = o_39;
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
          t = e_15;
          {
            t = not_null(i_39);
            {
              ATerm j_15 = t;
              int k_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = u_71(t);
                  LocalPopChoice(k_15);
                }
              else
                {
                  t = j_15;
                  t = type_failure_0(t);
                }
            }
            t = not_null(h_39);
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
ATerm termid_check_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm v_39 = NULL;
  ATerm x_39 = NULL;
  v_39 = t;
  {
    ATerm y_39 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_l_15, not_null(v_39));
    {
      t = InId_1(t, b_72);
      {
        y_39 = t;
        if(((x_39 != NULL) && (x_39 != y_39)))
          _fail(y_39);
        else
          x_39 = y_39;
      }
    }
    t = not_null(x_39);
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm u_75 (ATerm))
{
  ATerm b_40 (ATerm t)
  {
    ATerm m_15 = t;
    int n_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_75(t);
        LocalPopChoice(n_15);
      }
    else
      {
        t = m_15;
        t = _one(t, b_40);
      }
    return(t);
  }
  t = b_40(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL;
  f_40 = t;
  e_40 :
  if(match_cons(f_40, sym__2))
    {
      g_40 = ATgetArgument(f_40, 0);
      h_40 = ATgetArgument(f_40, 1);
      {
        ATerm v_15;
        v_15 = t;
        {
          t = not_null(h_40);
          {
            ATerm t_1 (ATerm t)
            {
              ATerm k_40 = NULL;
              k_40 = t;
              if(((g_40 != NULL) && (g_40 != k_40)))
                _fail(k_40);
              else
                g_40 = k_40;
              return(t);
            }
            t = oncetd_1(t, t_1);
          }
        }
        t = v_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = term_a_16;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm p_40 = NULL;
  ATerm r_40 = NULL;
  p_40 = t;
  {
    ATerm s_40 = NULL;
    t = get_options_0(t);
    {
      s_40 = t;
      {
        if(((r_40 != NULL) && (r_40 != s_40)))
          _fail(s_40);
        else
          r_40 = s_40;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_40), not_null(r_40));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_j_8;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm h_72 (ATerm))
{
  ATerm b_16;
  b_16 = t;
  {
    t = term_j_8;
    {
      t = h_72(t);
      t = check_option_0(t);
    }
  }
  t = b_16;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm h_100 (ATerm))
{
  ATerm u_1 (ATerm t)
  {
    ATerm d_16;
    d_16 = t;
    {
      ATerm e_16;
      e_16 = t;
      {
        ATerm v_1 (ATerm t)
        {
          t = term_p_16;
          return(t);
        }
        t = has_option_1(t, v_1);
      }
      t = e_16;
      t = debug_1(t, h_100);
    }
    t = d_16;
    return(t);
  }
  t = try_1(t, u_1);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm x_40 = NULL;
  x_40 = t;
  {
    t = term_p_11;
    {
      t = table_create_0(t);
      {
        t = not_null(x_40);
        {
          ATerm w_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              t = term_q_16;
              return(t);
            }
            t = notify_1(t, x_1);
            {
              t = ReadFromFile_0(t);
              {
                ATerm y_1 (ATerm t)
                {
                  ATerm z_40 = NULL;
                  z_40 = t;
                  w_40 :
                  if(!(match_string(z_40, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, y_1);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, w_1);
        }
      }
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm d_41 = NULL,e_41 = NULL,f_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym__2))
    {
      e_41 = ATgetArgument(d_41, 0);
      f_41 = ATgetArgument(d_41, 1);
      if(((e_41 != NULL) && (e_41 != f_41)))
        _fail(f_41);
      else
        e_41 = f_41;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm d_84 (ATerm), ATerm e_84 (ATerm))
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  k_41 :
  if(((ATgetType(l_41) == AT_LIST) && !(ATisEmpty(l_41))))
    {
      m_41 = ATgetFirst((ATermList) l_41);
      n_41 = (ATerm) ATgetNext((ATermList) l_41);
      {
        t = e_84(t);
        {
          ATerm z_1 (ATerm t)
          {
            ATerm q_41 = NULL;
            q_41 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(m_41), not_null(q_41));
              t = d_84(t);
            }
            return(t);
          }
          t = fetch_1(t, z_1);
        }
        t = not_null(n_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm z_83 (ATerm))
{
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL;
  w_41 = t;
  v_41 :
  if(match_cons(w_41, sym__2))
    {
      x_41 = ATgetArgument(w_41, 0);
      y_41 = ATgetArgument(w_41, 1);
      {
        t = not_null(x_41);
        {
          ATerm c_42 (ATerm t)
          {
            ATerm r_16 = t;
            int s_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(y_41);
                LocalPopChoice(s_16);
              }
            else
              {
                t = r_16;
                {
                  ATerm v_16 = t;
                  int w_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_2 (ATerm t)
                      {
                        t = not_null(y_41);
                        return(t);
                      }
                      t = HdMember_p__2(t, z_83, a_2);
                      t = c_42(t);
                      LocalPopChoice(w_16);
                    }
                  else
                    {
                      t = v_16;
                      t = Cons_2(t, _id, c_42);
                    }
                }
              }
            return(t);
          }
          t = c_42(t);
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
ATerm foldr_3 (ATerm t, ATerm s_84 (ATerm), ATerm t_84 (ATerm), ATerm u_84 (ATerm))
{
  ATerm x_16 = t;
  int y_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_84(t);
      LocalPopChoice(y_16);
    }
  else
    {
      t = x_16;
      {
        ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
        h_42 = t;
        g_42 :
        if(((ATgetType(h_42) == AT_LIST) && !(ATisEmpty(h_42))))
          {
            i_42 = ATgetFirst((ATermList) h_42);
            j_42 = (ATerm) ATgetNext((ATermList) h_42);
            {
              ATerm m_42 = NULL,o_42 = NULL;
              ATerm z_16;
              z_16 = t;
              {
                ATerm n_42 = NULL;
                t = not_null(i_42);
                {
                  t = u_84(t);
                  {
                    n_42 = t;
                    if(((m_42 != NULL) && (m_42 != n_42)))
                      _fail(n_42);
                    else
                      m_42 = n_42;
                  }
                }
              }
              t = z_16;
              {
                ATerm p_42 = NULL;
                t = not_null(j_42);
                {
                  t = foldr_3(t, s_84, t_84, u_84);
                  {
                    p_42 = t;
                    if(((o_42 != NULL) && (o_42 != p_42)))
                      _fail(p_42);
                    else
                      o_42 = p_42;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_42), not_null(o_42));
                  t = t_84(t);
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
ATerm crush_3 (ATerm t, ATerm q_83 (ATerm), ATerm r_83 (ATerm), ATerm s_83 (ATerm))
{
  ATerm x_42 = NULL;
  ATerm c_43 = NULL;
  x_42 = t;
  {
    ATerm d_43 = NULL;
    ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
    t = not_null(x_42);
    {
      d_43 = t;
      {
        t = SSL_explode_term(not_null(d_43));
        {
          f_43 = t;
          w_42 :
          if(match_cons(f_43, sym__2))
            {
              g_43 = ATgetArgument(f_43, 0);
              h_43 = ATgetArgument(f_43, 1);
              if(((c_43 != NULL) && (c_43 != h_43)))
                _fail(h_43);
              else
                c_43 = h_43;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_43);
      t = foldr_3(t, q_83, r_83, s_83);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm p_82 (ATerm))
{
  ATerm o_43 (ATerm t)
  {
    ATerm a_17 = t;
    int b_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_43 = NULL;
        ATerm n_43 = NULL;
        t = p_82(t);
        {
          n_43 = t;
          if(((m_43 != NULL) && (m_43 != n_43)))
            _fail(n_43);
          else
            m_43 = n_43;
        }
        t = (ATerm) ATinsert(ATempty, not_null(m_43));
        LocalPopChoice(b_17);
      }
    else
      {
        t = a_17;
        {
          ATerm b_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, b_2, union_0, o_43);
        }
      }
    return(t);
  }
  t = o_43(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm r_82 (ATerm))
{
  t = collect_om_1(t, r_82);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm v_43 = NULL,w_43 = NULL,x_43 = NULL;
  v_43 = t;
  u_43 :
  if(match_cons(v_43, sym__2))
    {
      w_43 = ATgetArgument(v_43, 0);
      x_43 = ATgetArgument(v_43, 1);
      {
        t = not_null(w_43);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm a_44 = NULL,b_44 = NULL;
            a_44 = t;
            s_43 :
            if(match_cons(a_44, sym_PP_Table_1))
              {
                b_44 = ATgetArgument(a_44, 0);
                t = not_null(b_44);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = collect_1(t, c_2);
          {
            t = reverse_0(t);
            {
              t = read_pp_tables_0(t);
              {
                t = not_null(x_43);
                {
                  t = trm2abox_0(t);
                  {
                    ATerm d_2 (ATerm t)
                    {
                      ATerm d_44 = NULL;
                      t = is_list_0(t);
                      {
                        d_44 = t;
                        t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(d_44));
                      }
                      return(t);
                    }
                    t = try_1(t, d_2);
                    {
                      ATerm e_2 (ATerm t)
                      {
                        t = not_null(w_43);
                        return(t);
                      }
                      t = split_2(t, e_2, _id);
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
ATerm default_usage_0 (ATerm t)
{
  ATerm m_44 = NULL;
  ATerm c_17;
  c_17 = t;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm n_44 = NULL,o_44 = NULL;
      n_44 = t;
      j_44 :
      if(match_cons(n_44, sym_Program_1))
        {
          o_44 = ATgetArgument(n_44, 0);
          if(((m_44 != NULL) && (m_44 != o_44)))
            _fail(o_44);
          else
            m_44 = o_44;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, f_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_17), not_null(m_44)), term_d_17));
      {
        t = printnl_0(t);
        {
          t = term_y_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = c_17;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm v_44 = NULL,y_44 = NULL,z_44 = NULL;
  v_44 = t;
  u_44 :
  if(match_cons(v_44, sym__2))
    {
      y_44 = ATgetArgument(v_44, 0);
      z_44 = ATgetArgument(v_44, 1);
      {
        ATerm f_17;
        f_17 = t;
        t = SSL_printnl(not_null(y_44), not_null(z_44));
        t = f_17;
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
  ATerm e_45 = NULL;
  e_45 = t;
  t = SSL_implode_string(not_null(e_45));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_17);
    }
  else
    {
      t = g_17;
      {
        ATerm j_45 = NULL,k_45 = NULL,l_45 = NULL;
        j_45 = t;
        i_45 :
        if(((ATgetType(j_45) == AT_LIST) && !(ATisEmpty(j_45))))
          {
            k_45 = ATgetFirst((ATermList) j_45);
            l_45 = (ATerm) ATgetNext((ATermList) j_45);
            {
              t = not_null(k_45);
              {
                ATerm g_2 (ATerm t)
                {
                  t = not_null(l_45);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, g_2);
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
  ATerm a_46 = NULL;
  ATerm c_46 = NULL;
  a_46 = t;
  {
    ATerm d_46 = NULL;
    ATerm f_46 = NULL,g_46 = NULL,h_46 = NULL;
    t = not_null(a_46);
    {
      d_46 = t;
      {
        t = SSL_explode_term(not_null(d_46));
        {
          f_46 = t;
          y_45 :
          if(match_cons(f_46, sym__2))
            {
              g_46 = ATgetArgument(f_46, 0);
              h_46 = ATgetArgument(f_46, 1);
              z_45 :
              if(match_string(g_46, ""))
                {
                  if(((c_46 != NULL) && (c_46 != h_46)))
                    _fail(h_46);
                  else
                    c_46 = h_46;
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
      t = not_null(c_46);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_78 (ATerm))
{
  ATerm o_46 (ATerm t)
  {
    ATerm m_17 = t;
    int n_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_46);
        LocalPopChoice(n_17);
      }
    else
      {
        t = m_17;
        {
          t = Nil_0(t);
          t = r_78(t);
        }
      }
    return(t);
  }
  t = o_46(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  q_46 :
  if(match_cons(r_46, sym__2))
    {
      s_46 = ATgetArgument(r_46, 0);
      t_46 = ATgetArgument(r_46, 1);
      {
        t = not_null(s_46);
        {
          ATerm k_2 (ATerm t)
          {
            t = not_null(t_46);
            return(t);
          }
          t = at_end_1(t, k_2);
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
  ATerm r_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(t_17);
    }
  else
    {
      t = r_17;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm y_46 = NULL;
  y_46 = t;
  t = SSL_explode_string(not_null(y_46));
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
ATerm is_string_0 (ATerm t)
{
  ATerm c_47 = NULL;
  c_47 = t;
  t = SSL_is_string(not_null(c_47));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm y_17 = t;
        int c_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, l_2);
            LocalPopChoice(c_18);
          }
        else
          {
            t = y_17;
            {
              ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL;
              l_47 = t;
              k_47 :
              if(match_cons(l_47, sym_Path_1))
                {
                  m_47 = ATgetArgument(l_47, 0);
                  t = not_null(m_47);
                }
              else
                {
                  if(match_cons(l_47, sym_Var_1))
                    {
                      m_47 = ATgetArgument(l_47, 0);
                      {
                        t = not_null(m_47);
                        {
                          ATerm e_18 = t;
                          int h_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(h_18);
                            }
                          else
                            {
                              t = e_18;
                              {
                                ATerm m_2 (ATerm t)
                                {
                                  t = term_i_18;
                                  return(t);
                                }
                                t = debug_1(t, m_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(l_47, sym_Prefix_2))
                        {
                          m_47 = ATgetArgument(l_47, 0);
                          n_47 = ATgetArgument(l_47, 1);
                          {
                            ATerm s_47 = NULL,u_47 = NULL;
                            ATerm j_18;
                            j_18 = t;
                            {
                              ATerm t_47 = NULL;
                              t = not_null(m_47);
                              {
                                t = eval_config_0(t);
                                {
                                  t_47 = t;
                                  if(((s_47 != NULL) && (s_47 != t_47)))
                                    _fail(t_47);
                                  else
                                    s_47 = t_47;
                                }
                              }
                            }
                            t = j_18;
                            {
                              ATerm c_48 = NULL;
                              t = not_null(n_47);
                              {
                                t = eval_config_0(t);
                                {
                                  c_48 = t;
                                  if(((u_47 != NULL) && (u_47 != c_48)))
                                    _fail(c_48);
                                  else
                                    u_47 = c_48;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_47), not_null(u_47));
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
  ATerm k_48 = NULL;
  k_48 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_18, not_null(k_48));
    {
      t = table_get_0(t);
      {
        ATerm n_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm l_18;
            l_18 = t;
            {
              ATerm m_48 = NULL;
              ATerm n_48 = NULL;
              n_48 = t;
              if(((m_48 != NULL) && (m_48 != n_48)))
                _fail(n_48);
              else
                m_48 = n_48;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_k_18, not_null(k_48), not_null(m_48));
                t = table_put_0(t);
              }
            }
            t = l_18;
          }
          return(t);
        }
        t = try_1(t, n_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm s_92 (ATerm))
{
  ATerm o_2 (ATerm t)
  {
    ATerm m_18;
    m_18 = t;
    {
      ATerm r_48 = NULL;
      ATerm s_48 = NULL;
      t = term_n_18;
      {
        t = get_config_0(t);
        {
          s_48 = t;
          if(((r_48 != NULL) && (r_48 != s_48)))
            _fail(s_48);
          else
            r_48 = s_48;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_48), term_o_9);
        t = geq_0(t);
      }
    }
    t = m_18;
    t = s_92(t);
    return(t);
  }
  t = try_1(t, o_2);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm w_48 = NULL,x_48 = NULL,y_48 = NULL;
  w_48 = t;
  v_48 :
  if(match_cons(w_48, sym__2))
    {
      x_48 = ATgetArgument(w_48, 0);
      y_48 = ATgetArgument(w_48, 1);
      t = SSL_WriteToTextFile(not_null(x_48), not_null(y_48));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm j_49 = NULL,k_49 = NULL,l_49 = NULL;
  j_49 = t;
  i_49 :
  if(match_cons(j_49, sym__2))
    {
      k_49 = ATgetArgument(j_49, 0);
      l_49 = ATgetArgument(j_49, 1);
      {
        ATerm p_49 = NULL,r_49 = NULL;
        ATerm q_49 = NULL;
        t = SSLgetAnnotations(not_null(j_49));
        {
          q_49 = t;
          if(((p_49 != NULL) && (p_49 != q_49)))
            _fail(q_49);
          else
            p_49 = q_49;
        }
        {
          t = not_null(k_49);
          {
            ATerm t_49 = NULL;
            t = k_59(t);
            {
              r_49 = t;
              {
                t = not_null(l_49);
                {
                  ATerm v_49 = NULL;
                  t = l_59(t);
                  {
                    t_49 = t;
                    {
                      ATerm w_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_49), not_null(t_49)), not_null(p_49));
                      {
                        w_49 = t;
                        if(((v_49 != NULL) && (v_49 != w_49)))
                          _fail(w_49);
                        else
                          v_49 = w_49;
                      }
                      t = not_null(v_49);
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
  ATerm e_50 = NULL,f_50 = NULL,g_50 = NULL;
  e_50 = t;
  d_50 :
  if(match_cons(e_50, sym__2))
    {
      f_50 = ATgetArgument(e_50, 0);
      g_50 = ATgetArgument(e_50, 1);
      t = SSL_WriteToBinaryFile(not_null(f_50), not_null(g_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm o_50 = NULL;
  ATerm o_18;
  o_18 = t;
  {
    ATerm p_2 (ATerm t)
    {
      ATerm p_18 = t;
      int q_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm u_50 = NULL,v_50 = NULL;
            u_50 = t;
            l_50 :
            if(match_cons(u_50, sym_Output_1))
              {
                v_50 = ATgetArgument(u_50, 0);
                if(((o_50 != NULL) && (o_50 != v_50)))
                  _fail(v_50);
                else
                  o_50 = v_50;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_2);
          LocalPopChoice(q_18);
        }
      else
        {
          t = p_18;
          {
            ATerm w_50 = NULL;
            t = term_r_18;
            {
              w_50 = t;
              if(((o_50 != NULL) && (o_50 != w_50)))
                _fail(w_50);
              else
                o_50 = w_50;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_2, _id);
  }
  t = o_18;
  {
    ATerm r_2 (ATerm t)
    {
      ATerm s_2 (ATerm t)
      {
        t = not_null(o_50);
        return(t);
      }
      t = split_2(t, s_2, _id);
      return(t);
    }
    t = _2(t, _id, r_2);
    {
      ATerm s_18 = t;
      int x_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_2 (ATerm t)
          {
            ATerm x_2 (ATerm t)
            {
              ATerm x_50 = NULL;
              x_50 = t;
              n_50 :
              if(!(match_cons(x_50, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, x_2);
            return(t);
          }
          t = _2(t, t_2, WriteToBinaryFile_0);
          LocalPopChoice(x_18);
        }
      else
        {
          t = s_18;
          t = _2(t, _id, WriteToTextFile_0);
        }
    }
  }
  return(t);
}
ATerm dtime_0 (ATerm t)
{
  t = SSL_dtime();
  return(t);
}
ATerm apply_strategy_1 (ATerm t, ATerm g_72 (ATerm))
{
  ATerm h_51 = NULL,l_51 = NULL,m_51 = NULL,n_51 = NULL;
  ATerm y_18;
  y_18 = t;
  t = dtime_0(t);
  t = y_18;
  {
    t = g_72(t);
    {
      ATerm b_19;
      b_19 = t;
      {
        ATerm k_51 = NULL;
        t = dtime_0(t);
        {
          k_51 = t;
          if(((h_51 != NULL) && (h_51 != k_51)))
            _fail(k_51);
          else
            h_51 = k_51;
        }
      }
      t = b_19;
      {
        l_51 = t;
        g_51 :
        if(match_cons(l_51, sym__2))
          {
            m_51 = ATgetArgument(l_51, 0);
            n_51 = ATgetArgument(l_51, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_51)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_51))), not_null(n_51));
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
ATerm debug_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm c_19;
  c_19 = t;
  {
    ATerm a_52 = NULL,c_52 = NULL;
    ATerm d_19;
    d_19 = t;
    {
      ATerm b_52 = NULL;
      t = o_73(t);
      {
        b_52 = t;
        if(((a_52 != NULL) && (a_52 != b_52)))
          _fail(b_52);
        else
          a_52 = b_52;
      }
    }
    t = d_19;
    {
      ATerm d_52 = NULL;
      d_52 = t;
      if(((c_52 != NULL) && (c_52 != d_52)))
        _fail(d_52);
      else
        c_52 = d_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_52)), not_null(a_52)));
        t = printnl_0(t);
      }
    }
  }
  t = c_19;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_52 = NULL;
  ATerm e_19 = t;
  int f_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_52 = NULL;
      i_52 = t;
      {
        if(((h_52 != NULL) && (h_52 != i_52)))
          _fail(i_52);
        else
          h_52 = i_52;
        t = SSL_ReadFromFile(not_null(h_52));
      }
      LocalPopChoice(f_19);
    }
  else
    {
      t = e_19;
      {
        ATerm y_2 (ATerm t)
        {
          t = term_g_19;
          return(t);
        }
        t = debug_1(t, y_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm j_88 (ATerm), ATerm k_88 (ATerm))
{
  ATerm m_52 = NULL,o_52 = NULL;
  ATerm n_19;
  n_19 = t;
  {
    ATerm n_52 = NULL;
    t = j_88(t);
    {
      n_52 = t;
      if(((m_52 != NULL) && (m_52 != n_52)))
        _fail(n_52);
      else
        m_52 = n_52;
    }
  }
  t = n_19;
  {
    ATerm p_52 = NULL;
    t = k_88(t);
    {
      p_52 = t;
      if(((o_52 != NULL) && (o_52 != p_52)))
        _fail(p_52);
      else
        o_52 = p_52;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_52), not_null(o_52));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_52 = NULL;
  ATerm o_19;
  o_19 = t;
  {
    ATerm p_19 = t;
    int r_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm z_2 (ATerm t)
        {
          ATerm w_52 = NULL,x_52 = NULL;
          w_52 = t;
          t_52 :
          if(match_cons(w_52, sym_Input_1))
            {
              x_52 = ATgetArgument(w_52, 0);
              if(((v_52 != NULL) && (v_52 != x_52)))
                _fail(x_52);
              else
                v_52 = x_52;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, z_2);
        LocalPopChoice(r_19);
      }
    else
      {
        t = p_19;
        {
          ATerm y_52 = NULL;
          t = term_z_19;
          {
            y_52 = t;
            if(((v_52 != NULL) && (v_52 != y_52)))
              _fail(y_52);
            else
              v_52 = y_52;
          }
        }
      }
  }
  t = o_19;
  {
    ATerm b_3 (ATerm t)
    {
      t = not_null(v_52);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, b_3);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm c_53 = NULL;
    c_53 = t;
    b_53 :
    if(!(match_string(c_53, "-v")))
      {
        if(!(match_string(c_53, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    t = term_b_20;
    t = set_config_0(t);
    t = term_c_20;
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    t = term_d_20;
    return(t);
  }
  t = Option_3(t, c_3, d_3, g_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm f_53 = NULL;
    f_53 = t;
    d_53 :
    if(!(match_string(f_53, "-k")))
      {
        if(!(match_string(f_53, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm i_20;
    i_20 = t;
    {
      ATerm g_53 = NULL;
      ATerm h_53 = NULL;
      t = string_to_int_0(t);
      {
        h_53 = t;
        if(((g_53 != NULL) && (g_53 != h_53)))
          _fail(h_53);
        else
          g_53 = h_53;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_20, not_null(g_53));
        t = set_config_0(t);
      }
    }
    t = i_20;
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_k_20;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, j_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_53 = NULL;
  k_53 = t;
  t = SSL_string_to_int(not_null(k_53));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm l_20 = t;
  int m_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_3 (ATerm t)
      {
        ATerm s_53 = NULL;
        s_53 = t;
        n_53 :
        if(!(match_string(s_53, "-S")))
          {
            if(!(match_string(s_53, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_3 (ATerm t)
      {
        t = term_u_20;
        t = set_config_0(t);
        t = term_v_20;
        return(t);
      }
      ATerm v_3 (ATerm t)
      {
        t = term_w_20;
        return(t);
      }
      t = Option_3(t, k_3, t_3, v_3);
      LocalPopChoice(m_20);
    }
  else
    {
      t = l_20;
      {
        ATerm z_20 = t;
        int a_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              ATerm t_53 = NULL;
              t_53 = t;
              o_53 :
              if(!(match_string(t_53, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_3 (ATerm t)
            {
              ATerm w_53 = NULL;
              ATerm b_21;
              b_21 = t;
              {
                ATerm u_53 = NULL;
                ATerm v_53 = NULL;
                t = string_to_int_0(t);
                {
                  v_53 = t;
                  if(((u_53 != NULL) && (u_53 != v_53)))
                    _fail(v_53);
                  else
                    u_53 = v_53;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_18, not_null(u_53));
                  t = set_config_0(t);
                }
              }
              t = b_21;
              {
                ATerm x_53 = NULL;
                x_53 = t;
                if(((w_53 != NULL) && (w_53 != x_53)))
                  _fail(x_53);
                else
                  w_53 = x_53;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_53));
              }
              return(t);
            }
            ATerm y_3 (ATerm t)
            {
              t = term_h_21;
              return(t);
            }
            t = ArgOption_3(t, w_3, x_3, y_3);
            LocalPopChoice(a_21);
          }
        else
          {
            t = z_20;
            {
              ATerm z_3 (ATerm t)
              {
                ATerm y_53 = NULL;
                y_53 = t;
                r_53 :
                if(!(match_string(y_53, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm a_4 (ATerm t)
              {
                t = term_k_21;
                t = set_config_0(t);
                t = term_m_21;
                return(t);
              }
              ATerm b_4 (ATerm t)
              {
                t = term_n_21;
                return(t);
              }
              t = Option_3(t, z_3, a_4, b_4);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      {
        ATerm s_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(w_21);
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
  ATerm g_4 (ATerm t)
  {
    ATerm q_54 = NULL;
    q_54 = t;
    b_54 :
    if(!(match_string(q_54, "-o")))
      {
        if(!(match_string(q_54, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm t_54 = NULL;
    ATerm x_21;
    x_21 = t;
    {
      ATerm r_54 = NULL;
      ATerm s_54 = NULL;
      s_54 = t;
      if(((r_54 != NULL) && (r_54 != s_54)))
        _fail(s_54);
      else
        r_54 = s_54;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_y_21, not_null(r_54));
        t = set_config_0(t);
      }
    }
    t = x_21;
    {
      ATerm u_54 = NULL;
      u_54 = t;
      if(((t_54 != NULL) && (t_54 != u_54)))
        _fail(u_54);
      else
        t_54 = u_54;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_54));
    }
    return(t);
  }
  ATerm o_4 (ATerm t)
  {
    t = term_z_21;
    return(t);
  }
  t = ArgOption_3(t, g_4, h_4, o_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm a_22 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = a_22;
      {
        ATerm t_4 (ATerm t)
        {
          ATerm y_54 = NULL;
          y_54 = t;
          x_54 :
          if(!(match_string(y_54, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm u_4 (ATerm t)
        {
          t = term_e_22;
          t = set_config_0(t);
          t = term_f_22;
          return(t);
        }
        ATerm v_4 (ATerm t)
        {
          t = term_g_22;
          return(t);
        }
        t = Option_3(t, t_4, u_4, v_4);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm w_4 (ATerm t)
  {
    ATerm c_55 = NULL;
    c_55 = t;
    z_54 :
    if(!(match_string(c_55, "-i")))
      {
        if(!(match_string(c_55, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    ATerm f_55 = NULL;
    ATerm i_22;
    i_22 = t;
    {
      ATerm d_55 = NULL;
      ATerm e_55 = NULL;
      e_55 = t;
      if(((d_55 != NULL) && (d_55 != e_55)))
        _fail(e_55);
      else
        d_55 = e_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_22, not_null(d_55));
        t = set_config_0(t);
      }
    }
    t = i_22;
    {
      ATerm g_55 = NULL;
      g_55 = t;
      if(((f_55 != NULL) && (f_55 != g_55)))
        _fail(g_55);
      else
        f_55 = g_55;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(f_55));
    }
    return(t);
  }
  ATerm y_4 (ATerm t)
  {
    t = term_l_22;
    return(t);
  }
  t = ArgOption_3(t, w_4, x_4, y_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(s_22);
    }
  else
    {
      t = o_22;
      {
        ATerm z_22 = t;
        int a_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(a_23);
          }
        else
          {
            t = z_22;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_p_14, (ATerm) ATinsert(ATempty, term_e_23));
  {
    t = printnl_0(t);
    {
      t = term_y_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm k_55 = NULL;
  k_55 = t;
  t = SSL_TicksToSeconds(not_null(k_55));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm p_55 = NULL,q_55 = NULL,r_55 = NULL;
  p_55 = t;
  o_55 :
  if(match_cons(p_55, sym__2))
    {
      q_55 = ATgetArgument(p_55, 0);
      r_55 = ATgetArgument(p_55, 1);
      {
        ATerm f_23 = t;
        int h_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(q_55), not_null(r_55));
            LocalPopChoice(h_23);
          }
        else
          {
            t = f_23;
            t = SSL_addr(not_null(q_55), not_null(r_55));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_84 (ATerm), ATerm r_84 (ATerm))
{
  ATerm i_23 = t;
  int j_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_84(t);
      LocalPopChoice(j_23);
    }
  else
    {
      t = i_23;
      {
        ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL;
        y_55 = t;
        x_55 :
        if(((ATgetType(y_55) == AT_LIST) && !(ATisEmpty(y_55))))
          {
            z_55 = ATgetFirst((ATermList) y_55);
            a_56 = (ATerm) ATgetNext((ATermList) y_55);
            {
              ATerm d_56 = NULL;
              ATerm e_56 = NULL;
              t = not_null(a_56);
              {
                t = foldr_2(t, q_84, r_84);
                {
                  e_56 = t;
                  if(((d_56 != NULL) && (d_56 != e_56)))
                    _fail(e_56);
                  else
                    d_56 = e_56;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(z_55), not_null(d_56));
                t = r_84(t);
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
ATerm crush_2 (ATerm t, ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  ATerm l_56 = NULL;
  ATerm n_56 = NULL;
  l_56 = t;
  {
    ATerm o_56 = NULL;
    ATerm q_56 = NULL,r_56 = NULL,s_56 = NULL;
    t = not_null(l_56);
    {
      o_56 = t;
      {
        t = SSL_explode_term(not_null(o_56));
        {
          q_56 = t;
          k_56 :
          if(match_cons(q_56, sym__2))
            {
              r_56 = ATgetArgument(q_56, 0);
              s_56 = ATgetArgument(q_56, 1);
              if(((n_56 != NULL) && (n_56 != s_56)))
                _fail(s_56);
              else
                n_56 = s_56;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(n_56);
      t = foldr_2(t, o_83, p_83);
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
    ATerm z_4 (ATerm t)
    {
      t = term_x_8;
      return(t);
    }
    t = crush_2(t, z_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
  y_56 = t;
  x_56 :
  if(match_cons(y_56, sym__2))
    {
      z_56 = ATgetArgument(y_56, 0);
      a_57 = ATgetArgument(y_56, 1);
      {
        ATerm k_23;
        k_23 = t;
        {
          ATerm l_23 = t;
          int m_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(z_56), not_null(a_57));
              LocalPopChoice(m_23);
            }
          else
            {
              t = l_23;
              t = SSL_gtr(not_null(z_56), not_null(a_57));
            }
        }
        t = k_23;
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
  ATerm g_57 = NULL;
  ATerm n_23 = t;
  int o_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
      h_57 = t;
      f_57 :
      if(match_cons(h_57, sym__2))
        {
          i_57 = ATgetArgument(h_57, 0);
          j_57 = ATgetArgument(h_57, 1);
          {
            if(((g_57 != NULL) && (g_57 != i_57)))
              _fail(i_57);
            else
              g_57 = i_57;
            if(((g_57 != NULL) && (g_57 != j_57)))
              _fail(j_57);
            else
              g_57 = j_57;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(o_23);
    }
  else
    {
      t = n_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_92 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm q_23;
    q_23 = t;
    {
      ATerm m_57 = NULL;
      ATerm n_57 = NULL;
      t = term_n_18;
      {
        t = get_config_0(t);
        {
          n_57 = t;
          if(((m_57 != NULL) && (m_57 != n_57)))
            _fail(n_57);
          else
            m_57 = n_57;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(m_57), term_y_8);
        t = geq_0(t);
      }
    }
    t = q_23;
    t = r_92(t);
    return(t);
  }
  t = try_1(t, a_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_5 (ATerm t)
  {
    ATerm r_57 = NULL,t_57 = NULL;
    ATerm r_23;
    r_23 = t;
    {
      ATerm s_57 = NULL;
      t = run_time_0(t);
      {
        s_57 = t;
        if(((r_57 != NULL) && (r_57 != s_57)))
          _fail(s_57);
        else
          r_57 = s_57;
      }
    }
    t = r_23;
    {
      ATerm u_57 = NULL;
      t = term_s_23;
      {
        t = get_config_0(t);
        {
          u_57 = t;
          if(((t_57 != NULL) && (t_57 != u_57)))
            _fail(u_57);
          else
            t_57 = u_57;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_23), not_null(r_57)), term_t_23), not_null(t_57)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_5);
  {
    t = term_x_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_58 = NULL;
  b_58 = t;
  a_58 :
  if(match_cons(b_58, sym_Version_0))
    {
      ATerm d_58 = NULL,f_58 = NULL;
      ATerm y_23;
      y_23 = t;
      {
        ATerm e_58 = NULL;
        t = SSLgetAnnotations(not_null(b_58));
        {
          e_58 = t;
          if(((d_58 != NULL) && (d_58 != e_58)))
            _fail(e_58);
          else
            d_58 = e_58;
        }
      }
      t = y_23;
      {
        ATerm g_58 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_58));
        {
          g_58 = t;
          if(((f_58 != NULL) && (f_58 != g_58)))
            _fail(g_58);
          else
            f_58 = g_58;
        }
        t = not_null(f_58);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_72 (ATerm))
{
  ATerm g_5 (ATerm t)
  {
    ATerm z_23 = t;
    int a_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(a_24);
      }
    else
      {
        t = z_23;
        {
          ATerm c_24 = t;
          int d_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(d_24);
            }
          else
            {
              t = c_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, g_5);
  t = e_72(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm l_58 = NULL;
  l_58 = t;
  t = SSL_table_create(not_null(l_58));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm p_58 = NULL;
  p_58 = t;
  {
    ATerm e_24;
    e_24 = t;
    {
      t = term_w_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_15, term_x_15, not_null(p_58));
          t = table_put_0(t);
        }
      }
    }
    t = e_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm t_58 = NULL;
  t_58 = t;
  t = SSL_table_destroy(not_null(t_58));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm x_58 = NULL;
  x_58 = t;
  t = SSL_exit(not_null(x_58));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL;
  b_59 = t;
  a_59 :
  if(((ATgetType(b_59) == AT_LIST) && ATisEmpty(b_59)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(b_59) == AT_LIST) && !(ATisEmpty(b_59))))
        {
          c_59 = ATgetFirst((ATermList) b_59);
          d_59 = (ATerm) ATgetNext((ATermList) b_59);
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
  ATerm f_24;
  f_24 = t;
  {
    ATerm m_59 = NULL;
    ATerm p_59 = NULL;
    ATerm g_24 = t;
    int h_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(h_24);
      }
    else
      {
        t = g_24;
        {
          ATerm n_59 = NULL;
          ATerm o_59 = NULL;
          o_59 = t;
          if(((n_59 != NULL) && (n_59 != o_59)))
            _fail(o_59);
          else
            n_59 = o_59;
          t = (ATerm) ATinsert(ATempty, not_null(n_59));
        }
      }
    {
      p_59 = t;
      if(((m_59 != NULL) && (m_59 != p_59)))
        _fail(p_59);
      else
        m_59 = p_59;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_18, not_null(m_59));
      t = printnl_0(t);
    }
  }
  t = f_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm u_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm s_59 (ATerm t)
  {
    ATerm i_24 = t;
    int j_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_24);
      }
    else
      {
        t = i_24;
        t = Cons_2(t, c_78, s_59);
      }
    return(t);
  }
  t = s_59(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_59 = NULL,a_60 = NULL,b_60 = NULL;
  b_60 = t;
  y_59 :
  if(((ATgetType(b_60) == AT_LIST) && !(ATisEmpty(b_60))))
    {
      z_59 = ATgetFirst((ATermList) b_60);
      a_60 = (ATerm) ATgetNext((ATermList) b_60);
      {
        ATerm e_60 = NULL;
        t = not_null(a_60);
        {
          ATerm k_24;
          k_24 = t;
          {
            ATerm f_60 = NULL,h_60 = NULL,j_60 = NULL;
            ATerm l_24;
            l_24 = t;
            {
              ATerm g_60 = NULL;
              t = i_0(t);
              {
                g_60 = t;
                if(((f_60 != NULL) && (f_60 != g_60)))
                  _fail(g_60);
                else
                  f_60 = g_60;
              }
            }
            t = l_24;
            {
              ATerm i_60 = NULL;
              t = not_null(z_59);
              {
                t = h_0(t);
                {
                  i_60 = t;
                  if(((h_60 != NULL) && (h_60 != i_60)))
                    _fail(i_60);
                  else
                    h_60 = i_60;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_60)), not_null(h_60));
                {
                  j_60 = t;
                  if(((e_60 != NULL) && (e_60 != j_60)))
                    _fail(j_60);
                  else
                    e_60 = j_60;
                }
              }
            }
          }
          t = k_24;
          {
            ATerm h_5 (ATerm t)
            {
              t = not_null(e_60);
              return(t);
            }
            t = reverse_acc_2(t, h_0, h_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(b_60) == AT_LIST) && ATisEmpty(b_60)))
        {
          {
            t = term_j_8;
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
ATerm short_description_1 (ATerm t, ATerm t_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_67 (ATerm))
{
  ATerm w_60 = NULL,x_60 = NULL;
  w_60 = t;
  v_60 :
  if(match_cons(w_60, sym_Program_1))
    {
      x_60 = ATgetArgument(w_60, 0);
      {
        ATerm a_61 = NULL,c_61 = NULL;
        ATerm b_61 = NULL;
        t = SSLgetAnnotations(not_null(w_60));
        {
          b_61 = t;
          if(((a_61 != NULL) && (a_61 != b_61)))
            _fail(b_61);
          else
            a_61 = b_61;
        }
        {
          t = not_null(x_60);
          {
            ATerm e_61 = NULL;
            t = k_67(t);
            {
              c_61 = t;
              {
                ATerm f_61 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_61)), not_null(a_61));
                {
                  f_61 = t;
                  if(((e_61 != NULL) && (e_61 != f_61)))
                    _fail(f_61);
                  else
                    e_61 = f_61;
                }
                t = not_null(e_61);
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
  ATerm o_61 = NULL;
  ATerm m_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_61 = NULL;
      t = term_s_23;
      {
        t = get_config_0(t);
        {
          p_61 = t;
          if(((o_61 != NULL) && (o_61 != p_61)))
            _fail(p_61);
          else
            o_61 = p_61;
        }
      }
      LocalPopChoice(n_24);
    }
  else
    {
      t = m_24;
      {
        ATerm l_5 (ATerm t)
        {
          ATerm m_5 (ATerm t)
          {
            ATerm q_61 = NULL;
            q_61 = t;
            if(((o_61 != NULL) && (o_61 != q_61)))
              _fail(q_61);
            else
              o_61 = q_61;
            return(t);
          }
          t = Program_1(t, m_5);
          return(t);
        }
        t = option_defined_1(t, l_5);
      }
    }
  {
    ATerm n_5 (ATerm t)
    {
      ATerm o_5 (ATerm t)
      {
        t = not_null(o_61);
        return(t);
      }
      t = short_description_1(t, o_5);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, n_5);
    {
      t = term_o_24;
      {
        t = echo_0(t);
        {
          t = term_r_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm r_61 = NULL;
                  ATerm s_61 = NULL;
                  s_61 = t;
                  if(((r_61 != NULL) && (r_61 != s_61)))
                    _fail(s_61);
                  else
                    r_61 = s_61;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_61)), term_s_24);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, s_5);
                {
                  ATerm v_5 (ATerm t)
                  {
                    ATerm t_61 = NULL;
                    ATerm u_61 = NULL;
                    ATerm z_5 (ATerm t)
                    {
                      t = not_null(o_61);
                      return(t);
                    }
                    t = long_description_1(t, z_5);
                    {
                      u_61 = t;
                      if(((t_61 != NULL) && (t_61 != u_61)))
                        _fail(u_61);
                      else
                        t_61 = u_61;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(t_61)), term_t_24);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, v_5);
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
  ATerm u_24;
  u_24 = t;
  {
    ATerm a_62 = NULL;
    ATerm b_62 = NULL;
    b_62 = t;
    if(((a_62 != NULL) && (a_62 != b_62)))
      _fail(b_62);
    else
      a_62 = b_62;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_14, (ATerm) ATinsert(ATempty, not_null(a_62)));
      t = printnl_0(t);
    }
  }
  t = u_24;
  return(t);
}
ATerm say_1 (ATerm t, ATerm p_73 (ATerm))
{
  ATerm v_24;
  v_24 = t;
  {
    t = p_73(t);
    t = debug_0(t);
  }
  t = v_24;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_67 (ATerm))
{
  ATerm i_62 = NULL,j_62 = NULL;
  i_62 = t;
  h_62 :
  if(match_cons(i_62, sym_Undefined_1))
    {
      j_62 = ATgetArgument(i_62, 0);
      {
        ATerm m_62 = NULL,o_62 = NULL;
        ATerm n_62 = NULL;
        t = SSLgetAnnotations(not_null(i_62));
        {
          n_62 = t;
          if(((m_62 != NULL) && (m_62 != n_62)))
            _fail(n_62);
          else
            m_62 = n_62;
        }
        {
          t = not_null(j_62);
          {
            ATerm q_62 = NULL;
            t = l_67(t);
            {
              o_62 = t;
              {
                ATerm r_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(o_62)), not_null(m_62));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm w_62 (ATerm t)
  {
    ATerm w_24 = t;
    int x_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_78, _id);
        LocalPopChoice(x_24);
      }
    else
      {
        t = w_24;
        t = Cons_2(t, _id, w_62);
      }
    return(t);
  }
  t = w_62(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_90 (ATerm))
{
  t = fetch_1(t, t_90);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm b_63 = NULL;
  b_63 = t;
  a_63 :
  if(match_cons(b_63, sym_Help_0))
    {
      ATerm d_63 = NULL,f_63 = NULL;
      ATerm y_24;
      y_24 = t;
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
      t = y_24;
      {
        ATerm g_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(d_63));
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
ATerm try_1 (ATerm t, ATerm i_77 (ATerm))
{
  ATerm z_24 = t;
  int a_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_77(t);
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
ATerm table_get_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym__2))
    {
      n_63 = ATgetArgument(m_63, 0);
      o_63 = ATgetArgument(m_63, 1);
      t = SSL_table_get(not_null(n_63), not_null(o_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL;
  v_63 = t;
  u_63 :
  if(match_cons(v_63, sym__3))
    {
      w_63 = ATgetArgument(v_63, 0);
      x_63 = ATgetArgument(v_63, 1);
      y_63 = ATgetArgument(v_63, 2);
      {
        ATerm b_25;
        b_25 = t;
        {
          ATerm c_64 = NULL;
          ATerm d_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_63), not_null(x_63));
          {
            ATerm c_25 = t;
            int d_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(d_25);
              }
            else
              {
                t = c_25;
                t = (ATerm) ATempty;
              }
            {
              d_64 = t;
              if(((c_64 != NULL) && (c_64 != d_64)))
                _fail(d_64);
              else
                c_64 = d_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_63), not_null(x_63), (ATerm) ATinsert(CheckATermList(not_null(c_64)), not_null(y_63)));
            t = table_put_0(t);
          }
        }
        t = b_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_91 (ATerm))
{
  ATerm h_64 = NULL;
  ATerm i_64 = NULL;
  t = term_j_8;
  {
    t = y_91(t);
    {
      i_64 = t;
      if(((h_64 != NULL) && (h_64 != i_64)))
        _fail(i_64);
      else
        h_64 = i_64;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_p_24, term_q_24, not_null(h_64));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm o_64 = NULL,p_64 = NULL,q_64 = NULL;
  o_64 = t;
  n_64 :
  if(match_string(o_64, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(o_64) == AT_LIST) && !(ATisEmpty(o_64))))
        {
          p_64 = ATgetFirst((ATermList) o_64);
          q_64 = (ATerm) ATgetNext((ATermList) o_64);
          {
            ATerm t_64 = NULL;
            ATerm e_25;
            e_25 = t;
            {
              t = not_null(p_64);
              t = a_0(t);
            }
            t = e_25;
            {
              ATerm u_64 = NULL;
              t = term_j_8;
              {
                t = d_0(t);
                {
                  u_64 = t;
                  if(((t_64 != NULL) && (t_64 != u_64)))
                    _fail(u_64);
                  else
                    t_64 = u_64;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_64)), not_null(t_64));
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
  ATerm a_6 (ATerm t)
  {
    ATerm z_64 = NULL;
    z_64 = t;
    y_64 :
    if(!(match_string(z_64, "--help")))
      {
        if(!(match_string(z_64, "-h")))
          {
            if(!(match_string(z_64, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = term_g_25;
    {
      t = set_config_0(t);
      t = term_h_25;
    }
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    t = term_i_25;
    return(t);
  }
  t = Option_3(t, a_6, b_6, c_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm c_65 = NULL,d_65 = NULL,e_65 = NULL;
  c_65 = t;
  b_65 :
  if(((ATgetType(c_65) == AT_LIST) && !(ATisEmpty(c_65))))
    {
      d_65 = ATgetFirst((ATermList) c_65);
      e_65 = (ATerm) ATgetNext((ATermList) c_65);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_65)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(d_65)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm o_65 = NULL,p_65 = NULL,q_65 = NULL;
  o_65 = t;
  n_65 :
  if(((ATgetType(o_65) == AT_LIST) && !(ATisEmpty(o_65))))
    {
      p_65 = ATgetFirst((ATermList) o_65);
      q_65 = (ATerm) ATgetNext((ATermList) o_65);
      {
        ATerm u_65 = NULL,w_65 = NULL;
        ATerm v_65 = NULL;
        t = SSLgetAnnotations(not_null(o_65));
        {
          v_65 = t;
          if(((u_65 != NULL) && (u_65 != v_65)))
            _fail(v_65);
          else
            u_65 = v_65;
        }
        {
          t = not_null(p_65);
          {
            ATerm y_65 = NULL;
            t = t_60(t);
            {
              w_65 = t;
              {
                t = not_null(q_65);
                {
                  ATerm a_66 = NULL;
                  t = u_60(t);
                  {
                    y_65 = t;
                    {
                      ATerm b_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_65)), not_null(w_65)), not_null(u_65));
                      {
                        b_66 = t;
                        if(((a_66 != NULL) && (a_66 != b_66)))
                          _fail(b_66);
                        else
                          a_66 = b_66;
                      }
                      t = not_null(a_66);
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
  ATerm l_66 = NULL;
  l_66 = t;
  k_66 :
  if(((ATgetType(l_66) == AT_LIST) && ATisEmpty(l_66)))
    {
      {
        ATerm n_66 = NULL,p_66 = NULL;
        ATerm j_25;
        j_25 = t;
        {
          ATerm o_66 = NULL;
          t = SSLgetAnnotations(not_null(l_66));
          {
            o_66 = t;
            if(((n_66 != NULL) && (n_66 != o_66)))
              _fail(o_66);
            else
              n_66 = o_66;
          }
        }
        t = j_25;
        {
          ATerm q_66 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(n_66));
          {
            q_66 = t;
            if(((p_66 != NULL) && (p_66 != q_66)))
              _fail(q_66);
            else
              p_66 = q_66;
          }
          t = not_null(p_66);
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
  ATerm w_66 = NULL,x_66 = NULL,y_66 = NULL;
  w_66 = t;
  v_66 :
  if(match_cons(w_66, sym__2))
    {
      x_66 = ATgetArgument(w_66, 0);
      y_66 = ATgetArgument(w_66, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_18, not_null(x_66), not_null(y_66));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_91 (ATerm))
{
  ATerm k_25;
  k_25 = t;
  {
    ATerm d_6 (ATerm t)
    {
      t = term_l_25;
      t = w_91(t);
      return(t);
    }
    t = try_1(t, d_6);
  }
  t = k_25;
  {
    ATerm e_6 (ATerm t)
    {
      ATerm g_67 = NULL;
      ATerm m_25;
      m_25 = t;
      {
        ATerm e_67 = NULL;
        ATerm f_67 = NULL;
        f_67 = t;
        if(((e_67 != NULL) && (e_67 != f_67)))
          _fail(f_67);
        else
          e_67 = f_67;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_23, not_null(e_67));
          t = set_config_0(t);
        }
      }
      t = m_25;
      {
        ATerm h_67 = NULL;
        h_67 = t;
        if(((g_67 != NULL) && (g_67 != h_67)))
          _fail(h_67);
        else
          g_67 = h_67;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_67));
      }
      return(t);
    }
    ATerm g_6 (ATerm t)
    {
      ATerm n_25 = t;
      int o_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_25 = t;
          int q_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(q_25);
            }
          else
            {
              t = p_25;
              {
                t = w_91(t);
                t = Cons_2(t, _id, g_6);
              }
            }
          LocalPopChoice(o_25);
        }
      else
        {
          t = n_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, e_6, g_6);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_67 = NULL,q_67 = NULL,r_67 = NULL;
  ATerm r_25;
  r_25 = t;
  {
    ATerm s_67 = NULL,t_67 = NULL,u_67 = NULL,v_67 = NULL;
    s_67 = t;
    o_67 :
    if(match_cons(s_67, sym__3))
      {
        t_67 = ATgetArgument(s_67, 0);
        u_67 = ATgetArgument(s_67, 1);
        v_67 = ATgetArgument(s_67, 2);
        {
          if(((p_67 != NULL) && (p_67 != t_67)))
            _fail(t_67);
          else
            p_67 = t_67;
          {
            if(((q_67 != NULL) && (q_67 != u_67)))
              _fail(u_67);
            else
              q_67 = u_67;
            {
              if(((r_67 != NULL) && (r_67 != v_67)))
                _fail(v_67);
              else
                r_67 = v_67;
              t = SSL_table_put(not_null(p_67), not_null(q_67), not_null(r_67));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = r_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_91 (ATerm))
{
  ATerm y_67 = NULL;
  ATerm s_25;
  s_25 = t;
  {
    t = term_t_25;
    t = table_put_0(t);
  }
  t = s_25;
  {
    ATerm o_6 (ATerm t)
    {
      ATerm u_25 = t;
      int v_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_91(t);
          LocalPopChoice(v_25);
        }
      else
        {
          t = u_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_6);
    {
      ATerm p_6 (ATerm t)
      {
        ATerm w_25 = t;
        int x_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_25;
            y_25 = t;
            {
              ATerm z_25 = t;
              int a_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_f_25;
                  t = get_config_0(t);
                  LocalPopChoice(a_26);
                }
              else
                {
                  t = z_25;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = y_25;
            {
              t = system_usage_0(t);
              {
                t = term_x_8;
                t = exit_0(t);
              }
            }
            LocalPopChoice(x_25);
          }
        else
          {
            t = w_25;
            {
              ATerm q_6 (ATerm t)
              {
                ATerm u_6 (ATerm t)
                {
                  ATerm z_67 = NULL;
                  z_67 = t;
                  if(((y_67 != NULL) && (y_67 != z_67)))
                    _fail(z_67);
                  else
                    y_67 = z_67;
                  return(t);
                }
                t = Undefined_1(t, u_6);
                return(t);
              }
              t = option_defined_1(t, q_6);
              {
                ATerm v_6 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_67)), term_b_26);
                  return(t);
                }
                t = say_1(t, v_6);
                {
                  t = system_usage_0(t);
                  {
                    t = term_y_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, p_6);
      {
        ATerm c_26;
        c_26 = t;
        {
          t = term_p_24;
          t = table_destroy_0(t);
        }
        t = c_26;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm k_72 (ATerm), ATerm l_72 (ATerm), ATerm m_72 (ATerm), ATerm n_72 (ATerm))
{
  t = parse_options_1(t, k_72);
  {
    t = store_options_0(t);
    {
      t = m_72(t);
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, l_72);
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            {
              ATerm f_26 = t;
              int g_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_72(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_26);
                }
              else
                {
                  t = f_26;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm b_73 (ATerm), ATerm c_73 (ATerm), ATerm d_73 (ATerm), ATerm e_73 (ATerm))
{
  ATerm y_6 (ATerm t)
  {
    ATerm h_26 = t;
    int i_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_73(t);
        LocalPopChoice(i_26);
      }
    else
      {
        t = h_26;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm z_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, b_73);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_6, d_73, e_73, z_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm v_72 (ATerm), ATerm w_72 (ATerm), ATerm x_72 (ATerm))
{
  ATerm b_7 (ATerm t)
  {
    ATerm c_7 (ATerm t)
    {
      ATerm j_26;
      j_26 = t;
      {
        ATerm c_68 = NULL;
        ATerm d_68 = NULL;
        t = term_s_23;
        {
          t = get_config_0(t);
          {
            d_68 = t;
            if(((c_68 != NULL) && (c_68 != d_68)))
              _fail(d_68);
            else
              c_68 = d_68;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_14, (ATerm) ATinsert(ATempty, not_null(c_68)));
          t = printnl_0(t);
        }
      }
      t = j_26;
      return(t);
    }
    t = if_verbose2_1(t, c_7);
    return(t);
  }
  t = iowrap_4(t, v_72, w_72, x_72, b_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm t_72 (ATerm), ATerm u_72 (ATerm))
{
  t = iowrap_3(t, t_72, u_72, default_usage_0);
  return(t);
}
ATerm Ast_2_abox_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm k_26 = t;
    int l_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_7 (ATerm t)
        {
          ATerm i_68 = NULL;
          i_68 = t;
          f_68 :
          if(!(match_string(i_68, "-v")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm f_7 (ATerm t)
        {
          t = term_p_16;
          return(t);
        }
        t = Option_2(t, e_7, f_7);
        LocalPopChoice(l_26);
      }
    else
      {
        t = k_26;
        {
          ATerm g_7 (ATerm t)
          {
            ATerm j_68 = NULL;
            j_68 = t;
            g_68 :
            if(!(match_string(j_68, "-p")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm h_7 (ATerm t)
          {
            ATerm k_68 = NULL;
            k_68 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(k_68));
            return(t);
          }
          ATerm v_7 (ATerm t)
          {
            t = term_m_26;
            return(t);
          }
          t = ArgOption_3(t, g_7, h_7, v_7);
        }
      }
    return(t);
  }
  t = iowrap_2(t, ast2abox_0, d_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ast_2_abox_0(t);
  return(t);
}
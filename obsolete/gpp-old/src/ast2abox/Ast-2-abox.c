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
ATerm term_h_27;
ATerm term_v_26;
ATerm term_l_26;
ATerm term_d_26;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_w_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_n_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_g_23;
ATerm term_u_22;
ATerm term_r_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_e_22;
ATerm term_v_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_o_21;
ATerm term_n_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_o_20;
ATerm term_t_19;
ATerm term_j_19;
ATerm term_w_18;
ATerm term_u_18;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_c_16;
ATerm term_b_16;
ATerm term_t_15;
ATerm term_p_15;
ATerm term_h_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_q_14;
ATerm term_a_13;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_w_11;
ATerm term_r_11;
ATerm term_o_11;
ATerm term_b_9;
ATerm term_n_8;
ATerm term_i_8;
ATerm term_k_7;
ATerm term_v_6;
void init_constant_terms (void)
{
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_i_8));
  term_i_8 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_8));
  term_n_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_b_9));
  term_b_9 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_t_15));
  term_t_15 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(sym__2, term_t_15, term_b_16);
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_k_7);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(sym__2, term_j_19, term_i_8);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_i_8);
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_e_22));
  term_e_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(sym__2, term_f_22, term_k_7);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(sym__2, term_g_23, term_k_7);
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_23));
  term_w_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym__2, term_g_25, term_h_25);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(sym__2, term_v_25, term_k_7);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(sym__3, term_g_25, term_h_25, (ATerm) ATempty);
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm ArgOption_3 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm Option_2 (ATerm, ATerm t_90 (ATerm), ATerm u_90 (ATerm));
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm m_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm c_74 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm tuple2list_0 (ATerm);
ATerm symbol2abox7_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm q_93 (ATerm));
ATerm length_0 (ATerm);
ATerm collect_p__1 (ATerm, ATerm x_99 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm k_71 (ATerm));
ATerm symbol2abox6_0 (ATerm);
ATerm symbol2abox5_0 (ATerm);
ATerm symbol2abox4_0 (ATerm);
ATerm symbol2abox3_0 (ATerm);
ATerm symbol2abox2_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm g_87 (ATerm), ATerm h_87 (ATerm));
ATerm repeat_1 (ATerm, ATerm j_87 (ATerm));
ATerm index_0 (ATerm);
ATerm symbol2abox1_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm selector_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm get_symbol_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm l_80 (ATerm));
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
ATerm at_last_1 (ATerm, ATerm y_78 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm j_0 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm b_74 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm r_71 (ATerm));
ATerm termid_check_1 (ATerm, ATerm y_71 (ATerm));
ATerm oncetd_1 (ATerm, ATerm r_75 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm e_72 (ATerm));
ATerm notify_1 (ATerm, ATerm c_100 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm eq_0 (ATerm);
ATerm HdMember_p__2 (ATerm, ATerm z_83 (ATerm), ATerm a_84 (ATerm));
ATerm union_1 (ATerm, ATerm v_83 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm));
ATerm crush_3 (ATerm, ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm o_83 (ATerm));
ATerm collect_om_1 (ATerm, ATerm l_82 (ATerm));
ATerm collect_1 (ATerm, ATerm n_82 (ATerm));
ATerm ast2abox_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_78 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm n_92 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm h_59 (ATerm), ATerm i_59 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm d_72 (ATerm));
ATerm debug_1 (ATerm, ATerm l_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm e_88 (ATerm), ATerm f_88 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm m_84 (ATerm), ATerm n_84 (ATerm));
ATerm crush_2 (ATerm, ATerm k_83 (ATerm), ATerm l_83 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm m_92 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm b_72 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm p_91 (ATerm));
ATerm map_1 (ATerm, ATerm y_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm o_91 (ATerm));
ATerm Program_1 (ATerm, ATerm h_67 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm m_73 (ATerm));
ATerm Undefined_1 (ATerm, ATerm i_67 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm o_90 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_77 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm t_91 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm q_60 (ATerm), ATerm r_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm r_91 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm q_91 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm b_73 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_72 (ATerm), ATerm t_72 (ATerm), ATerm u_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_72 (ATerm), ATerm r_72 (ATerm));
ATerm Ast_2_abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_3 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm u_2 = NULL,w_2 = NULL,a_3 = NULL,b_3 = NULL,d_3 = NULL;
  u_2 = t;
  h_2 :
  if(match_string(u_2, "register-usage-info"))
    {
      t = register_usage_1(t, p_0);
    }
  else
    {
      if(((ATgetType(u_2) == AT_LIST) && !(ATisEmpty(u_2))))
        {
          w_2 = ATgetFirst((ATermList) u_2);
          a_3 = (ATerm) ATgetNext((ATermList) u_2);
          i_2 :
          if(((ATgetType(a_3) == AT_LIST) && !(ATisEmpty(a_3))))
            {
              b_3 = ATgetFirst((ATermList) a_3);
              d_3 = (ATerm) ATgetNext((ATermList) a_3);
              {
                ATerm i_3 = NULL;
                ATerm y_3;
                y_3 = t;
                {
                  t = not_null(w_2);
                  t = n_0(t);
                }
                t = y_3;
                {
                  ATerm k_3 = NULL;
                  t = not_null(b_3);
                  {
                    t = o_0(t);
                    {
                      k_3 = t;
                      if(((i_3 != NULL) && (i_3 != k_3)))
                        _fail(k_3);
                      else
                        i_3 = k_3;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_3)), not_null(i_3));
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
ATerm Option_2 (ATerm t, ATerm t_90 (ATerm), ATerm u_90 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = term_v_6;
    return(t);
  }
  t = Option_3(t, t_90, u_90, b_0);
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm t_3 = NULL,u_3 = NULL;
  ATerm w_6 = t;
  int a_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_7);
    }
  else
    {
      t = w_6;
      {
        ATerm b_7 = t;
        int e_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
            ATerm a_4 (ATerm t)
            {
              if(((t_3 != NULL) && (t_3 != w_3)))
                _fail(w_3);
              else
                t_3 = w_3;
              {
                if(((u_3 != NULL) && (u_3 != x_3)))
                  _fail(x_3);
                else
                  u_3 = x_3;
                {
                  t = not_null(t_3);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_3), not_null(u_3));
                      {
                        ATerm f_7 = t;
                        int h_7 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = conc_two_lists_0(t);
                            LocalPopChoice(h_7);
                          }
                        else
                          {
                            t = f_7;
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
            v_3 = t;
            r_3 :
            if(((ATgetType(v_3) == AT_LIST) && !(ATisEmpty(v_3))))
              {
                w_3 = ATgetFirst((ATermList) v_3);
                x_3 = (ATerm) ATgetNext((ATermList) v_3);
                s_3 :
                if(((ATgetType(w_3) == AT_LIST) && ATisEmpty(w_3)))
                  {
                    {
                      ATerm i_7 = t;
                      int j_7 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((u_3 != NULL) && (u_3 != x_3)))
                            _fail(x_3);
                          else
                            u_3 = x_3;
                          {
                            ATerm c_0 (ATerm t)
                            {
                              t = not_null(u_3);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, c_0);
                          }
                          LocalPopChoice(j_7);
                        }
                      else
                        {
                          t = i_7;
                          t = a_4(t);
                        }
                    }
                  }
                else
                  {
                    t = a_4(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(e_7);
          }
        else
          {
            t = b_7;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm j_4 = NULL,k_4 = NULL,l_4 = NULL;
  k_4 = t;
  i_4 :
  if(match_cons(k_4, sym_Arg2_2))
    {
      l_4 = ATgetArgument(k_4, 0);
      j_4 = ATgetArgument(k_4, 1);
      {
        ATerm o_4 = NULL,p_4 = NULL;
        ATerm q_4 = NULL,s_4 = NULL;
        ATerm r_4 = NULL;
        t = term_k_7;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), not_null(q_4));
          {
            ATerm t_4 = NULL;
            t = index_0(t);
            {
              s_4 = t;
              {
                if(((o_4 != NULL) && (o_4 != s_4)))
                  _fail(s_4);
                else
                  o_4 = s_4;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_4), not_null(o_4));
                  {
                    t = index_0(t);
                    {
                      t_4 = t;
                      if(((p_4 != NULL) && (p_4 != t_4)))
                        _fail(t_4);
                      else
                        p_4 = t_4;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(p_4);
      }
    }
  else
    {
      if(match_cons(k_4, sym_Arg_1))
        {
          l_4 = ATgetArgument(k_4, 0);
          {
            ATerm v_4 = NULL;
            ATerm w_4 = NULL,y_4 = NULL;
            ATerm x_4 = NULL;
            t = term_k_7;
            {
              t = m_0(t);
              {
                x_4 = t;
                if(((w_4 != NULL) && (w_4 != x_4)))
                  _fail(x_4);
                else
                  w_4 = x_4;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_4), not_null(w_4));
              {
                t = index_0(t);
                {
                  y_4 = t;
                  if(((v_4 != NULL) && (v_4 != y_4)))
                    _fail(y_4);
                  else
                    v_4 = y_4;
                }
              }
            }
            t = not_null(v_4);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm c_74 (ATerm))
{
  ATerm e_0 (ATerm t)
  {
    t = bottomup_1(t, c_74);
    return(t);
  }
  t = _all(t, e_0);
  t = c_74(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__2))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      {
        ATerm o_5 = NULL;
        ATerm p_5 = NULL;
        t = not_null(k_5);
        {
          ATerm f_0 (ATerm t)
          {
            ATerm l_7 = t;
            int m_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm n_7 = t;
                int b_8 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_0 (ATerm t)
                    {
                      t = not_null(l_5);
                      return(t);
                    }
                    t = Instantiate_1(t, q_0);
                    LocalPopChoice(b_8);
                  }
                else
                  {
                    t = n_7;
                    t = flat_list_0(t);
                  }
                LocalPopChoice(m_7);
              }
            else
              {
                t = l_7;
                {
                }
              }
            return(t);
          }
          t = bottomup_1(t, f_0);
          {
            p_5 = t;
            if(((o_5 != NULL) && (o_5 != p_5)))
              _fail(p_5);
            else
              o_5 = p_5;
          }
        }
        t = not_null(o_5);
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
  ATerm x_5 = NULL;
  ATerm z_5 = NULL;
  x_5 = t;
  {
    ATerm a_6 = NULL;
    ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
    t = not_null(x_5);
    {
      a_6 = t;
      {
        t = SSL_explode_term(not_null(a_6));
        {
          c_6 = t;
          v_5 :
          if(match_cons(c_6, sym__2))
            {
              d_6 = ATgetArgument(c_6, 0);
              e_6 = ATgetArgument(c_6, 1);
              w_5 :
              if(match_string(d_6, ""))
                {
                  if(((z_5 != NULL) && (z_5 != e_6)))
                    _fail(e_6);
                  else
                    z_5 = e_6;
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
    t = not_null(z_5);
  }
  return(t);
}
ATerm symbol2abox7_0 (ATerm t)
{
  ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL;
  p_6 = t;
  n_6 :
  if(match_cons(p_6, sym__4))
    {
      q_6 = ATgetArgument(p_6, 0);
      r_6 = ATgetArgument(p_6, 1);
      s_6 = ATgetArgument(p_6, 2);
      t_6 = ATgetArgument(p_6, 3);
      o_6 :
      if(match_string(q_6, "seq"))
        {
          ATerm g_7 = NULL;
          t = not_null(t_6);
          {
            t = tuple2list_0(t);
            {
              ATerm r_0 (ATerm t)
              {
                ATerm x_6 = NULL,y_6 = NULL,z_6 = NULL;
                x_6 = t;
                l_6 :
                if(match_cons(x_6, sym__2))
                  {
                    y_6 = ATgetArgument(x_6, 0);
                    z_6 = ATgetArgument(x_6, 1);
                    {
                      ATerm c_7 = NULL;
                      ATerm d_7 = NULL;
                      t = (ATerm) ATmakeAppl(sym__3, not_null(y_6), not_null(r_6), not_null(z_6));
                      {
                        t = arg2abox_0(t);
                        {
                          d_7 = t;
                          if(((c_7 != NULL) && (c_7 != d_7)))
                            _fail(d_7);
                          else
                            c_7 = d_7;
                        }
                      }
                      t = not_null(c_7);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = nzip_1(t, r_0);
              {
                g_7 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_6), not_null(g_7));
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
ATerm instantiate_sep_list_1 (ATerm t, ATerm q_93 (ATerm))
{
  ATerm a_8 (ATerm t)
  {
    ATerm q_7 = NULL,r_7 = NULL,s_7 = NULL;
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
        {
          ATerm f_8 = t;
          int h_8 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              LocalPopChoice(h_8);
            }
          else
            {
              t = f_8;
              {
                ATerm t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL;
                t_7 = t;
                o_7 :
                if(((ATgetType(t_7) == AT_LIST) && !(ATisEmpty(t_7))))
                  {
                    u_7 = ATgetFirst((ATermList) t_7);
                    v_7 = (ATerm) ATgetNext((ATermList) t_7);
                    p_7 :
                    if(((ATgetType(v_7) == AT_LIST) && !(ATisEmpty(v_7))))
                      {
                        w_7 = ATgetFirst((ATermList) v_7);
                        x_7 = (ATerm) ATgetNext((ATermList) v_7);
                        {
                          if(((q_7 != NULL) && (q_7 != u_7)))
                            _fail(u_7);
                          else
                            q_7 = u_7;
                          {
                            if(((r_7 != NULL) && (r_7 != w_7)))
                              _fail(w_7);
                            else
                              r_7 = w_7;
                            {
                              if(((s_7 != NULL) && (s_7 != x_7)))
                                _fail(x_7);
                              else
                                s_7 = x_7;
                              {
                                ATerm s_0 (ATerm t)
                                {
                                  ATerm y_7 = NULL;
                                  ATerm z_7 = NULL;
                                  t = term_k_7;
                                  {
                                    t = q_93(t);
                                    {
                                      z_7 = t;
                                      if(((y_7 != NULL) && (y_7 != z_7)))
                                        _fail(z_7);
                                      else
                                        y_7 = z_7;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(r_7)), not_null(q_7)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm t_0 (ATerm t)
                                {
                                  t = not_null(s_7);
                                  t = a_8(t);
                                  return(t);
                                }
                                t = Cons_2(t, s_0, t_0);
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
  t = a_8(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm u_0 (ATerm t)
  {
    t = term_i_8;
    return(t);
  }
  ATerm v_0 (ATerm t)
  {
    t = term_n_8;
    return(t);
  }
  t = foldr_3(t, u_0, add_0, v_0);
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm x_99 (ATerm))
{
  ATerm g_8 (ATerm t)
  {
    ATerm o_8 = t;
    int p_8 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_8 = NULL;
        t = x_99(t);
        {
          e_8 = t;
          t = (ATerm) ATinsert(ATempty, not_null(e_8));
        }
        LocalPopChoice(p_8);
      }
    else
      {
        t = o_8;
        {
          ATerm w_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm x_0 (ATerm t)
          {
            ATerm q_8 = t;
            int s_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(s_8);
              }
            else
              {
                t = q_8;
                t = conc_more_lists_0(t);
              }
            return(t);
          }
          t = crush_3(t, w_0, x_0, g_8);
        }
      }
    return(t);
  }
  t = g_8(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym__2))
    {
      l_8 = ATgetArgument(k_8, 0);
      m_8 = ATgetArgument(k_8, 1);
      t = SSL_mod(not_null(l_8), not_null(m_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm v_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_8 = NULL;
      ATerm w_8 = NULL;
      u_8 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_8), term_b_9);
        {
          t = mod_0(t);
          {
            w_8 = t;
            r_8 :
            if(!(match_int(w_8, 0)))
              {
                _fail(t);
              }
          }
        }
      }
      LocalPopChoice(a_9);
    }
  else
    {
      t = v_8;
      {
        ATerm c_9;
        c_9 = t;
        {
          ATerm x_8 = NULL,z_8 = NULL;
          ATerm y_8 = NULL;
          y_8 = t;
          if(((x_8 != NULL) && (x_8 != y_8)))
            _fail(y_8);
          else
            x_8 = y_8;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_8), term_b_9);
            {
              t = mod_0(t);
              {
                z_8 = t;
                t_8 :
                if(!(match_int(z_8, 0)))
                  {
                    _fail(t);
                  }
              }
            }
          }
        }
        t = c_9;
      }
    }
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm k_71 (ATerm))
{
  ATerm i_9 = NULL,j_9 = NULL,k_9 = NULL;
  i_9 = t;
  h_9 :
  if(match_cons(i_9, sym__2))
    {
      j_9 = ATgetArgument(i_9, 0);
      k_9 = ATgetArgument(i_9, 1);
      {
        ATerm n_9 = NULL;
        ATerm d_9 = t;
        int e_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_9 = NULL,q_9 = NULL;
            t = not_null(j_9);
            {
              t = even_0(t);
              {
                ATerm p_9 = NULL;
                t = term_k_7;
                {
                  t = k_71(t);
                  {
                    p_9 = t;
                    if(((o_9 != NULL) && (o_9 != p_9)))
                      _fail(p_9);
                    else
                      o_9 = p_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_b_9, not_null(o_9), not_null(k_9));
                  {
                    t = arg2abox_0(t);
                    {
                      q_9 = t;
                      if(((n_9 != NULL) && (n_9 != q_9)))
                        _fail(q_9);
                      else
                        n_9 = q_9;
                    }
                  }
                }
              }
            }
            LocalPopChoice(e_9);
          }
        else
          {
            t = d_9;
            {
              ATerm r_9 = NULL,t_9 = NULL;
              ATerm s_9 = NULL;
              t = term_k_7;
              {
                t = k_71(t);
                {
                  s_9 = t;
                  if(((r_9 != NULL) && (r_9 != s_9)))
                    _fail(s_9);
                  else
                    r_9 = s_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_8, not_null(r_9), not_null(k_9));
                {
                  t = arg2abox_0(t);
                  {
                    t_9 = t;
                    if(((n_9 != NULL) && (n_9 != t_9)))
                      _fail(t_9);
                    else
                      n_9 = t_9;
                  }
                }
              }
            }
          }
        t = not_null(n_9);
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
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  p_10 = t;
  b_10 :
  if(match_cons(p_10, sym__4))
    {
      q_10 = ATgetArgument(p_10, 0);
      r_10 = ATgetArgument(p_10, 1);
      s_10 = ATgetArgument(p_10, 2);
      t_10 = ATgetArgument(p_10, 3);
      c_10 :
      if(match_string(q_10, "iter-sep"))
        {
          if(((m_10 != NULL) && (m_10 != r_10)))
            _fail(r_10);
          else
            m_10 = r_10;
          {
            if(((n_10 != NULL) && (n_10 != s_10)))
              _fail(s_10);
            else
              n_10 = s_10;
            if(((o_10 != NULL) && (o_10 != t_10)))
              _fail(t_10);
            else
              o_10 = t_10;
          }
        }
      else
        {
          if(match_string(q_10, "iter-star-sep"))
            {
              if(((m_10 != NULL) && (m_10 != r_10)))
                _fail(r_10);
              else
                m_10 = r_10;
              {
                if(((n_10 != NULL) && (n_10 != s_10)))
                  _fail(s_10);
                else
                  n_10 = s_10;
                if(((o_10 != NULL) && (o_10 != t_10)))
                  _fail(t_10);
                else
                  o_10 = t_10;
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
    t = not_null(o_10);
    {
      ATerm y_0 (ATerm t)
      {
        ATerm z_0 (ATerm t)
        {
          t = not_null(m_10);
          return(t);
        }
        t = BuildSepList_1(t, z_0);
        return(t);
      }
      t = nzip_1(t, y_0);
      {
        u_10 = t;
        {
          ATerm f_9 = t;
          int g_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_10 = NULL;
              t = not_null(n_10);
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
                    w_10 = t;
                    l_10 :
                    if(match_int(w_10, 1))
                      {
                        t = not_null(u_10);
                        {
                          ATerm m_11 (ATerm t)
                          {
                            ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
                            ATerm p_11 (ATerm t)
                            {
                              ATerm g_11 = NULL;
                              ATerm h_11 = NULL;
                              t = not_null(z_10);
                              {
                                t = m_11(t);
                                {
                                  h_11 = t;
                                  if(((g_11 != NULL) && (g_11 != h_11)))
                                    _fail(h_11);
                                  else
                                    g_11 = h_11;
                                }
                              }
                              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_11)), not_null(y_10)), not_null(y_10));
                              return(t);
                            }
                            x_10 = t;
                            j_10 :
                            if(((ATgetType(x_10) == AT_LIST) && ATisEmpty(x_10)))
                              {
                                t = (ATerm) ATempty;
                              }
                            else
                              {
                                if(((ATgetType(x_10) == AT_LIST) && !(ATisEmpty(x_10))))
                                  {
                                    y_10 = ATgetFirst((ATermList) x_10);
                                    z_10 = (ATerm) ATgetNext((ATermList) x_10);
                                    k_10 :
                                    if(((ATgetType(z_10) == AT_LIST) && ATisEmpty(z_10)))
                                      {
                                        {
                                          ATerm l_9 = t;
                                          int m_9 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = (ATerm) ATinsert(ATempty, not_null(y_10));
                                              LocalPopChoice(m_9);
                                            }
                                          else
                                            {
                                              t = l_9;
                                              t = p_11(t);
                                            }
                                        }
                                      }
                                    else
                                      {
                                        t = p_11(t);
                                      }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                            return(t);
                          }
                          t = m_11(t);
                        }
                      }
                    else
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
              t = not_null(u_10);
            }
          {
            ATerm b_1 (ATerm t)
            {
              t = not_null(n_10);
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
  ATerm y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL,l_12 = NULL;
  b_12 = t;
  t_11 :
  if(match_cons(b_12, sym__4))
    {
      c_12 = ATgetArgument(b_12, 0);
      d_12 = ATgetArgument(b_12, 1);
      e_12 = ATgetArgument(b_12, 2);
      f_12 = ATgetArgument(b_12, 3);
      u_11 :
      if(match_string(c_12, "iter"))
        {
          if(((y_11 != NULL) && (y_11 != d_12)))
            _fail(d_12);
          else
            y_11 = d_12;
          {
            if(((z_11 != NULL) && (z_11 != e_12)))
              _fail(e_12);
            else
              z_11 = e_12;
            if(((a_12 != NULL) && (a_12 != f_12)))
              _fail(f_12);
            else
              a_12 = f_12;
          }
        }
      else
        {
          if(match_string(c_12, "iter-star"))
            {
              if(((y_11 != NULL) && (y_11 != d_12)))
                _fail(d_12);
              else
                y_11 = d_12;
              {
                if(((z_11 != NULL) && (z_11 != e_12)))
                  _fail(e_12);
                else
                  z_11 = e_12;
                if(((a_12 != NULL) && (a_12 != f_12)))
                  _fail(f_12);
                else
                  a_12 = f_12;
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
    t = not_null(a_12);
    {
      ATerm c_1 (ATerm t)
      {
        ATerm g_12 = NULL;
        ATerm i_12 = NULL;
        g_12 = t;
        {
          ATerm j_12 = NULL;
          t = (ATerm) ATmakeAppl(sym__3, term_n_8, not_null(y_11), not_null(g_12));
          {
            t = arg2abox_0(t);
            {
              j_12 = t;
              if(((i_12 != NULL) && (i_12 != j_12)))
                _fail(j_12);
              else
                i_12 = j_12;
            }
          }
          t = not_null(i_12);
        }
        return(t);
      }
      t = map_1(t, c_1);
      {
        l_12 = t;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_11), (ATerm) ATinsert(ATempty, not_null(l_12)));
          t = instantiate_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm symbol2abox4_0 (ATerm t)
{
  ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL;
  v_12 = t;
  t_12 :
  if(match_cons(v_12, sym__4))
    {
      w_12 = ATgetArgument(v_12, 0);
      x_12 = ATgetArgument(v_12, 1);
      y_12 = ATgetArgument(v_12, 2);
      z_12 = ATgetArgument(v_12, 3);
      u_12 :
      if(match_cons(z_12, sym_None_0))
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
  ATerm i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  i_13 = t;
  g_13 :
  if(match_cons(i_13, sym__4))
    {
      j_13 = ATgetArgument(i_13, 0);
      k_13 = ATgetArgument(i_13, 1);
      l_13 = ATgetArgument(i_13, 2);
      m_13 = ATgetArgument(i_13, 3);
      h_13 :
      if(match_cons(m_13, sym_Some_1))
        {
          n_13 = ATgetArgument(m_13, 0);
          {
            ATerm s_13 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, term_n_8, not_null(k_13), not_null(n_13));
            {
              t = arg2abox_0(t);
              {
                s_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_13), (ATerm) ATinsert(ATempty, not_null(s_13)));
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
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL;
  d_14 = t;
  z_13 :
  if(match_cons(d_14, sym__4))
    {
      e_14 = ATgetArgument(d_14, 0);
      f_14 = ATgetArgument(d_14, 1);
      g_14 = ATgetArgument(d_14, 2);
      h_14 = ATgetArgument(d_14, 3);
      a_14 :
      if(match_cons(h_14, sym_alt_2))
        {
          i_14 = ATgetArgument(h_14, 0);
          j_14 = ATgetArgument(h_14, 1);
          b_14 :
          if(((ATgetType(j_14) == AT_LIST) && !(ATisEmpty(j_14))))
            {
              k_14 = ATgetFirst((ATermList) j_14);
              l_14 = (ATerm) ATgetNext((ATermList) j_14);
              c_14 :
              if(((ATgetType(l_14) == AT_LIST) && ATisEmpty(l_14)))
                {
                  {
                    ATerm r_14 = NULL;
                    t = (ATerm) ATmakeAppl(sym__3, not_null(i_14), not_null(f_14), not_null(k_14));
                    {
                      ATerm t_14 = NULL;
                      t = arg2abox_0(t);
                      {
                        r_14 = t;
                        {
                          ATerm u_14 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(i_14), not_null(g_14));
                          {
                            t = index_0(t);
                            {
                              u_14 = t;
                              if(((t_14 != NULL) && (t_14 != u_14)))
                                _fail(u_14);
                              else
                                t_14 = u_14;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(t_14)), (ATerm) ATinsert(ATempty, not_null(r_14)));
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
  ATerm c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL;
  c_15 = t;
  z_14 :
  if(match_cons(c_15, sym__2))
    {
      d_15 = ATgetArgument(c_15, 0);
      e_15 = ATgetArgument(c_15, 1);
      a_15 :
      if(match_int(d_15, 1))
        {
          b_15 :
          if(((ATgetType(e_15) == AT_LIST) && !(ATisEmpty(e_15))))
            {
              f_15 = ATgetFirst((ATermList) e_15);
              g_15 = (ATerm) ATgetNext((ATermList) e_15);
              t = not_null(f_15);
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
  ATerm m_15 = NULL,n_15 = NULL,o_15 = NULL;
  m_15 = t;
  l_15 :
  if(match_cons(m_15, sym__2))
    {
      n_15 = ATgetArgument(m_15, 0);
      o_15 = ATgetArgument(m_15, 1);
      {
        ATerm u_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(n_15), not_null(o_15));
            LocalPopChoice(v_9);
          }
        else
          {
            t = u_9;
            t = SSL_subtr(not_null(n_15), not_null(o_15));
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
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
  w_15 = t;
  u_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      v_15 :
      if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
        {
          z_15 = ATgetFirst((ATermList) y_15);
          a_16 = (ATerm) ATgetNext((ATermList) y_15);
          {
            ATerm e_16 = NULL;
            ATerm w_9;
            w_9 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), term_b_9);
              t = geq_0(t);
            }
            t = w_9;
            {
              ATerm f_16 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), term_n_8);
              {
                t = subt_0(t);
                {
                  f_16 = t;
                  if(((e_16 != NULL) && (e_16 != f_16)))
                    _fail(f_16);
                  else
                    e_16 = f_16;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_16), not_null(a_16));
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
ATerm repeat_2 (ATerm t, ATerm g_87 (ATerm), ATerm h_87 (ATerm))
{
  ATerm i_16 (ATerm t)
  {
    ATerm x_9 = t;
    int y_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_87(t);
        t = i_16(t);
        LocalPopChoice(y_9);
      }
    else
      {
        t = x_9;
        t = h_87(t);
      }
    return(t);
  }
  t = i_16(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm j_87 (ATerm))
{
  t = repeat_2(t, j_87, _id);
  return(t);
}
ATerm index_0 (ATerm t)
{
  t = repeat_2(t, Ind2_0, _id);
  t = Ind1_0(t);
  return(t);
}
ATerm symbol2abox1_0 (ATerm t)
{
  ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  o_16 = t;
  l_16 :
  if(match_cons(o_16, sym__4))
    {
      p_16 = ATgetArgument(o_16, 0);
      q_16 = ATgetArgument(o_16, 1);
      r_16 = ATgetArgument(o_16, 2);
      s_16 = ATgetArgument(o_16, 3);
      m_16 :
      if(match_cons(s_16, sym_alt_2))
        {
          t_16 = ATgetArgument(s_16, 0);
          u_16 = ATgetArgument(s_16, 1);
          n_16 :
          if(((ATgetType(u_16) == AT_LIST) && ATisEmpty(u_16)))
            {
              {
                ATerm z_16 = NULL;
                ATerm a_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), not_null(r_16));
                {
                  t = index_0(t);
                  {
                    a_17 = t;
                    if(((z_16 != NULL) && (z_16 != a_17)))
                      _fail(a_17);
                    else
                      z_16 = a_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(z_16)), (ATerm) ATempty);
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
  ATerm z_9 = t;
  int a_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = symbol2abox1_0(t);
      LocalPopChoice(a_10);
    }
  else
    {
      t = z_9;
      {
        ATerm d_10 = t;
        int e_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = symbol2abox2_0(t);
            LocalPopChoice(e_10);
          }
        else
          {
            t = d_10;
            {
              ATerm f_10 = t;
              int g_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = symbol2abox3_0(t);
                  LocalPopChoice(g_10);
                }
              else
                {
                  t = f_10;
                  {
                    ATerm h_10 = t;
                    int i_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = symbol2abox4_0(t);
                        LocalPopChoice(i_10);
                      }
                    else
                      {
                        t = h_10;
                        {
                          ATerm v_10 = t;
                          int a_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = symbol2abox5_0(t);
                              LocalPopChoice(a_11);
                            }
                          else
                            {
                              t = v_10;
                              {
                                ATerm b_11 = t;
                                int c_11 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = symbol2abox6_0(t);
                                    LocalPopChoice(c_11);
                                  }
                                else
                                  {
                                    t = b_11;
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
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym_selector_2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      {
        ATerm d_11 = t;
        int e_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_17 = NULL,w_17 = NULL;
            ATerm v_17 = NULL;
            t = SSLgetAnnotations(not_null(o_17));
            {
              v_17 = t;
              if(((u_17 != NULL) && (u_17 != v_17)))
                _fail(v_17);
              else
                u_17 = v_17;
            }
            {
              t = not_null(p_17);
              {
                ATerm y_17 = NULL;
                t = k_0(t);
                {
                  w_17 = t;
                  {
                    t = not_null(q_17);
                    {
                      ATerm a_18 = NULL;
                      t = l_0(t);
                      {
                        y_17 = t;
                        {
                          ATerm b_18 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(w_17), not_null(y_17)), not_null(u_17));
                          {
                            b_18 = t;
                            if(((a_18 != NULL) && (a_18 != b_18)))
                              _fail(b_18);
                            else
                              a_18 = b_18;
                          }
                          t = not_null(a_18);
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
              ATerm f_18 = NULL,h_18 = NULL;
              ATerm g_18 = NULL;
              t = SSLgetAnnotations(not_null(o_17));
              {
                g_18 = t;
                if(((f_18 != NULL) && (f_18 != g_18)))
                  _fail(g_18);
                else
                  f_18 = g_18;
              }
              {
                t = not_null(p_17);
                {
                  ATerm j_18 = NULL;
                  t = k_0(t);
                  {
                    h_18 = t;
                    {
                      t = not_null(q_17);
                      {
                        ATerm l_18 = NULL;
                        t = l_0(t);
                        {
                          j_18 = t;
                          {
                            ATerm m_18 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(h_18), not_null(j_18)), not_null(f_18));
                            {
                              m_18 = t;
                              if(((l_18 != NULL) && (l_18 != m_18)))
                                _fail(m_18);
                              else
                                l_18 = m_18;
                            }
                            t = not_null(l_18);
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
  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
  a_19 = t;
  z_18 :
  if(match_cons(a_19, sym_Path_2))
    {
      b_19 = ATgetArgument(a_19, 0);
      c_19 = ATgetArgument(a_19, 1);
      {
        ATerm f_19 = NULL;
        t = not_null(c_19);
        {
          ATerm d_1 (ATerm t)
          {
            ATerm e_1 (ATerm t)
            {
              ATerm f_1 (ATerm t)
              {
                ATerm g_19 = NULL;
                g_19 = t;
                if(((f_19 != NULL) && (f_19 != g_19)))
                  _fail(g_19);
                else
                  f_19 = g_19;
                return(t);
              }
              t = selector_2(t, _id, f_1);
              return(t);
            }
            t = Cons_2(t, e_1, Nil_0);
            return(t);
          }
          t = at_last_1(t, d_1);
        }
        t = not_null(f_19);
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
  ATerm p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL;
  p_19 = t;
  o_19 :
  if(match_cons(p_19, sym__3))
    {
      q_19 = ATgetArgument(p_19, 0);
      r_19 = ATgetArgument(p_19, 1);
      s_19 = ATgetArgument(p_19, 2);
      {
        ATerm w_19 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_19), (ATerm) ATinsert(ATempty, not_null(q_19)));
        {
          ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
          ATerm f_11 = t;
          int i_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(i_11);
            }
          else
            {
              t = f_11;
              t = conc_more_lists_0(t);
            }
          {
            w_19 = t;
            {
              ATerm j_11 = t;
              int k_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm b_20 = NULL,c_20 = NULL,d_20 = NULL;
                  t = pp_table_get_0(t);
                  {
                    b_20 = t;
                    n_19 :
                    if(match_cons(b_20, sym__2))
                      {
                        c_20 = ATgetArgument(b_20, 0);
                        d_20 = ATgetArgument(b_20, 1);
                        {
                          ATerm e_20 = NULL;
                          if(((y_19 != NULL) && (y_19 != c_20)))
                            _fail(c_20);
                          else
                            y_19 = c_20;
                          {
                            if(((a_20 != NULL) && (a_20 != d_20)))
                              _fail(d_20);
                            else
                              a_20 = d_20;
                            {
                              t = not_null(y_19);
                              {
                                t = get_symbol_0(t);
                                {
                                  e_20 = t;
                                  {
                                    if(((z_19 != NULL) && (z_19 != e_20)))
                                      _fail(e_20);
                                    else
                                      z_19 = e_20;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__4, not_null(z_19), not_null(w_19), not_null(a_20), not_null(s_19));
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
                  t = j_11;
                  {
                    t = not_null(s_19);
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
  ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL;
  l_20 = t;
  k_20 :
  if(match_cons(l_20, sym__2))
    {
      m_20 = ATgetArgument(l_20, 0);
      n_20 = ATgetArgument(l_20, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_20)), not_null(m_20));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm v_20 = NULL,w_20 = NULL,x_20 = NULL,y_20 = NULL,z_20 = NULL;
  v_20 = t;
  t_20 :
  if(match_cons(v_20, sym__2))
    {
      w_20 = ATgetArgument(v_20, 0);
      x_20 = ATgetArgument(v_20, 1);
      u_20 :
      if(((ATgetType(x_20) == AT_LIST) && !(ATisEmpty(x_20))))
        {
          y_20 = ATgetFirst((ATermList) x_20);
          z_20 = (ATerm) ATgetNext((ATermList) x_20);
          {
            ATerm d_21 = NULL;
            ATerm e_21 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_20), term_n_8);
            {
              t = add_0(t);
              {
                e_21 = t;
                if(((d_21 != NULL) && (d_21 != e_21)))
                  _fail(e_21);
                else
                  d_21 = e_21;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_20), not_null(y_20)), (ATerm) ATmakeAppl(sym__2, not_null(d_21), not_null(z_20)));
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
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  i_21 :
  if(match_cons(k_21, sym__2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      j_21 :
      if(((ATgetType(m_21) == AT_LIST) && ATisEmpty(m_21)))
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
ATerm genzip_4 (ATerm t, ATerm z_79 (ATerm), ATerm a_80 (ATerm), ATerm b_80 (ATerm), ATerm c_80 (ATerm))
{
  ATerm p_21 (ATerm t)
  {
    ATerm l_11 = t;
    int n_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_79(t);
        LocalPopChoice(n_11);
      }
    else
      {
        t = l_11;
        {
          t = a_80(t);
          {
            t = _2(t, c_80, p_21);
            t = b_80(t);
          }
        }
      }
    return(t);
  }
  t = p_21(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_8, not_null(r_21));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm l_80 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, l_80);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm x_21 = NULL;
  ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
  x_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_11, not_null(x_21));
    {
      t = table_get_0(t);
      {
        z_21 = t;
        w_21 :
        if(match_cons(z_21, sym__2))
          {
            a_22 = ATgetArgument(z_21, 0);
            b_22 = ATgetArgument(z_21, 1);
            {
              ATerm q_11;
              q_11 = t;
              {
                t = not_null(a_22);
                {
                  t = path_to_string_0(t);
                  {
                    ATerm g_1 (ATerm t)
                    {
                      t = term_r_11;
                      return(t);
                    }
                    t = notify_1(t, g_1);
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
  ATerm h_22 = NULL;
  h_22 = t;
  {
    ATerm s_11 = t;
    int v_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0(t);
        LocalPopChoice(v_11);
      }
    else
      {
        t = s_11;
        {
          ATerm h_1 (ATerm t)
          {
            t = term_w_11;
            return(t);
          }
          t = debug_1(t, h_1);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm trm2abox_appl_0 (ATerm t)
{
  ATerm t_22 = NULL;
  ATerm v_22 = NULL,w_22 = NULL,c_23 = NULL,d_23 = NULL,e_23 = NULL;
  t_22 = t;
  {
    ATerm x_22 = NULL;
    ATerm z_22 = NULL,a_23 = NULL,b_23 = NULL;
    t = not_null(t_22);
    {
      x_22 = t;
      {
        t = SSL_explode_term(not_null(x_22));
        {
          z_22 = t;
          n_22 :
          if(match_cons(z_22, sym__2))
            {
              a_23 = ATgetArgument(z_22, 0);
              b_23 = ATgetArgument(z_22, 1);
              {
                if(((v_22 != NULL) && (v_22 != a_23)))
                  _fail(a_23);
                else
                  v_22 = a_23;
                if(((w_22 != NULL) && (w_22 != b_23)))
                  _fail(b_23);
                else
                  w_22 = b_23;
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
      t = (ATerm) ATinsert(ATempty, not_null(v_22));
      {
        t = pp_table_get_p__0(t);
        {
          c_23 = t;
          s_22 :
          if(match_cons(c_23, sym__2))
            {
              d_23 = ATgetArgument(c_23, 0);
              e_23 = ATgetArgument(c_23, 1);
              {
                ATerm m_23 = NULL;
                t = not_null(w_22);
                {
                  ATerm i_1 (ATerm t)
                  {
                    ATerm h_23 = NULL,i_23 = NULL,j_23 = NULL;
                    h_23 = t;
                    q_22 :
                    if(match_cons(h_23, sym__2))
                      {
                        i_23 = ATgetArgument(h_23, 0);
                        j_23 = ATgetArgument(h_23, 1);
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(i_23), (ATerm)ATinsert(ATempty, not_null(v_22)), not_null(j_23));
                          t = arg2abox_0(t);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = nzip_1(t, i_1);
                  {
                    m_23 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_23), not_null(m_23));
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
  ATerm v_23 = NULL;
  v_23 = t;
  t = SSL_is_int(not_null(v_23));
  return(t);
}
ATerm trm2abox_int_0 (ATerm t)
{
  ATerm a_24 = NULL;
  ATerm c_24 = NULL;
  a_24 = t;
  {
    t = is_int_0(t);
    {
      ATerm d_24 = NULL;
      t = int_to_string_0(t);
      {
        d_24 = t;
        if(((c_24 != NULL) && (c_24 != d_24)))
          _fail(d_24);
        else
          c_24 = d_24;
      }
      t = (ATerm) ATmakeAppl(sym_S_1, not_null(c_24));
    }
  }
  return(t);
}
ATerm trm2abox_string_0 (ATerm t)
{
  ATerm y_26 = NULL;
  y_26 = t;
  {
    t = is_string_0(t);
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(y_26));
  }
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm x_11 = t;
  int h_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = trm2abox_string_0(t);
      LocalPopChoice(h_12);
    }
  else
    {
      t = x_11;
      {
        ATerm k_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = trm2abox_int_0(t);
            LocalPopChoice(m_12);
          }
        else
          {
            t = k_12;
            {
              ATerm n_12 = t;
              int o_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0(t);
                  LocalPopChoice(o_12);
                }
              else
                {
                  t = n_12;
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
  ATerm x_27 = NULL;
  x_27 = t;
  t = SSL_int_to_string(not_null(x_27));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm p_28 = NULL,q_28 = NULL,r_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym_Path1_1))
    {
      q_28 = ATgetArgument(p_28, 0);
      t = not_null(q_28);
    }
  else
    {
      if(match_cons(p_28, sym_Path_2))
        {
          q_28 = ATgetArgument(p_28, 0);
          r_28 = ATgetArgument(p_28, 1);
          {
            ATerm i_29 = NULL,a_30 = NULL;
            t = not_null(r_28);
            {
              ATerm j_1 (ATerm t)
              {
                ATerm j_29 = NULL,m_29 = NULL,n_29 = NULL;
                j_29 = t;
                k_28 :
                if(match_cons(j_29, sym_selector_2))
                  {
                    m_29 = ATgetArgument(j_29, 0);
                    n_29 = ATgetArgument(j_29, 1);
                    {
                      ATerm y_29 = NULL;
                      ATerm z_29 = NULL;
                      t = not_null(m_29);
                      {
                        t = int_to_string_0(t);
                        {
                          z_29 = t;
                          if(((y_29 != NULL) && (y_29 != z_29)))
                            _fail(z_29);
                          else
                            y_29 = z_29;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(n_29)), term_q_12), not_null(y_29)), term_p_12);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, j_1);
              {
                t = concat_0(t);
                {
                  a_30 = t;
                  {
                    if(((i_29 != NULL) && (i_29 != a_30)))
                      _fail(a_30);
                    else
                      i_29 = a_30;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(i_29)), not_null(q_28));
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
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  l_30 :
  if(match_cons(r_30, sym_Path1_1))
    {
      s_30 = ATgetArgument(r_30, 0);
      t = (ATerm) ATinsert(ATempty, not_null(s_30));
    }
  else
    {
      if(match_cons(r_30, sym_Path_2))
        {
          s_30 = ATgetArgument(r_30, 0);
          t_30 = ATgetArgument(r_30, 1);
          {
            ATerm b_31 = NULL,o_31 = NULL;
            t = not_null(t_30);
            {
              ATerm k_1 (ATerm t)
              {
                ATerm c_31 = NULL,d_31 = NULL,e_31 = NULL;
                c_31 = t;
                j_30 :
                if(match_cons(c_31, sym_selector_2))
                  {
                    d_31 = ATgetArgument(c_31, 0);
                    e_31 = ATgetArgument(c_31, 1);
                    t = not_null(d_31);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, k_1);
              {
                o_31 = t;
                {
                  if(((b_31 != NULL) && (b_31 != o_31)))
                    _fail(o_31);
                  else
                    b_31 = o_31;
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_31)), not_null(s_30));
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
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  v_31 :
  if(match_cons(w_31, sym_PP_Entry_2))
    {
      x_31 = ATgetArgument(w_31, 0);
      y_31 = ATgetArgument(w_31, 1);
      {
        ATerm b_32 = NULL;
        ATerm c_32 = NULL;
        t = not_null(x_31);
        {
          t = mk_key_0(t);
          {
            c_32 = t;
            if(((b_32 != NULL) && (b_32 != c_32)))
              _fail(c_32);
            else
              b_32 = c_32;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_11, not_null(b_32), (ATerm) ATmakeAppl(sym__2, not_null(x_31), not_null(y_31)));
          {
            t = table_put_0(t);
            {
              t = not_null(x_31);
              {
                t = path_to_string_0(t);
                {
                  ATerm l_1 (ATerm t)
                  {
                    t = term_r_12;
                    return(t);
                  }
                  t = notify_1(t, l_1);
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
  ATerm h_32 = NULL;
  h_32 = t;
  g_32 :
  if(((ATgetType(h_32) == AT_LIST) && ATisEmpty(h_32)))
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
  ATerm m_32 = NULL,n_32 = NULL,o_32 = NULL;
  m_32 = t;
  l_32 :
  if(((ATgetType(m_32) == AT_LIST) && !(ATisEmpty(m_32))))
    {
      n_32 = ATgetFirst((ATermList) m_32);
      o_32 = (ATerm) ATgetNext((ATermList) m_32);
      {
        ATerm r_32 = NULL;
        ATerm s_32 = NULL;
        t = not_null(o_32);
        {
          t = De_Escape_0(t);
          {
            s_32 = t;
            if(((r_32 != NULL) && (r_32 != s_32)))
              _fail(s_32);
            else
              r_32 = s_32;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(r_32)), not_null(n_32));
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
  ATerm g_33 = NULL,h_33 = NULL,i_33 = NULL,j_33 = NULL,k_33 = NULL;
  g_33 = t;
  x_32 :
  if(((ATgetType(g_33) == AT_LIST) && !(ATisEmpty(g_33))))
    {
      h_33 = ATgetFirst((ATermList) g_33);
      i_33 = (ATerm) ATgetNext((ATermList) g_33);
      d_33 :
      if(match_int(h_33, 92))
        {
          e_33 :
          if(((ATgetType(i_33) == AT_LIST) && !(ATisEmpty(i_33))))
            {
              j_33 = ATgetFirst((ATermList) i_33);
              k_33 = (ATerm) ATgetNext((ATermList) i_33);
              f_33 :
              if(match_int(j_33, 92))
                {
                  ATerm m_33 = NULL;
                  ATerm n_33 = NULL;
                  t = not_null(k_33);
                  {
                    t = De_Escape_0(t);
                    {
                      n_33 = t;
                      if(((m_33 != NULL) && (m_33 != n_33)))
                        _fail(n_33);
                      else
                        m_33 = n_33;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_33)), term_s_12);
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
  ATerm w_33 = NULL,x_33 = NULL,y_33 = NULL,z_33 = NULL,a_34 = NULL;
  w_33 = t;
  s_33 :
  if(((ATgetType(w_33) == AT_LIST) && !(ATisEmpty(w_33))))
    {
      x_33 = ATgetFirst((ATermList) w_33);
      y_33 = (ATerm) ATgetNext((ATermList) w_33);
      t_33 :
      if(match_int(x_33, 92))
        {
          u_33 :
          if(((ATgetType(y_33) == AT_LIST) && !(ATisEmpty(y_33))))
            {
              z_33 = ATgetFirst((ATermList) y_33);
              a_34 = (ATerm) ATgetNext((ATermList) y_33);
              v_33 :
              if(match_int(z_33, 34))
                {
                  ATerm j_34 = NULL;
                  ATerm k_34 = NULL;
                  t = not_null(a_34);
                  {
                    t = De_Escape_0(t);
                    {
                      k_34 = t;
                      if(((j_34 != NULL) && (j_34 != k_34)))
                        _fail(k_34);
                      else
                        j_34 = k_34;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_34)), term_a_13);
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
  ATerm b_13 = t;
  int c_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(c_13);
    }
  else
    {
      t = b_13;
      {
        ATerm d_13 = t;
        int e_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(e_13);
          }
        else
          {
            t = d_13;
            {
              ATerm f_13 = t;
              int o_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(o_13);
                }
              else
                {
                  t = f_13;
                  {
                    ATerm p_34 = NULL;
                    p_34 = t;
                    o_34 :
                    if(((ATgetType(p_34) == AT_LIST) && ATisEmpty(p_34)))
                      {
                        t = (ATerm) ATempty;
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
ATerm de_escape_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = De_Escape_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm y_78 (ATerm))
{
  ATerm r_34 (ATerm t)
  {
    ATerm p_13 = t;
    int q_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = y_78(t);
        LocalPopChoice(q_13);
      }
    else
      {
        t = p_13;
        t = Cons_2(t, _id, r_34);
      }
    return(t);
  }
  t = r_34(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm u_34 = NULL,v_34 = NULL,w_34 = NULL;
  u_34 = t;
  t_34 :
  if(((ATgetType(u_34) == AT_LIST) && !(ATisEmpty(u_34))))
    {
      v_34 = ATgetFirst((ATermList) u_34);
      w_34 = (ATerm) ATgetNext((ATermList) u_34);
      t = not_null(w_34);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  a_35 :
  if(((ATgetType(b_35) == AT_LIST) && !(ATisEmpty(b_35))))
    {
      c_35 = ATgetFirst((ATermList) b_35);
      d_35 = (ATerm) ATgetNext((ATermList) b_35);
      t = not_null(c_35);
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
    ATerm r_13;
    r_13 = t;
    {
      ATerm l_35 = NULL;
      t = Hd_0(t);
      {
        l_35 = t;
        g_35 :
        if(!(match_int(l_35, 34)))
          {
            _fail(t);
          }
      }
    }
    t = r_13;
    {
      t = Tl_0(t);
      {
        ATerm m_1 (ATerm t)
        {
          ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
          m_35 = t;
          i_35 :
          if(((ATgetType(m_35) == AT_LIST) && !(ATisEmpty(m_35))))
            {
              n_35 = ATgetFirst((ATermList) m_35);
              o_35 = (ATerm) ATgetNext((ATermList) m_35);
              j_35 :
              if(match_int(n_35, 34))
                {
                  k_35 :
                  if(((ATgetType(o_35) == AT_LIST) && ATisEmpty(o_35)))
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
        t = at_last_1(t, m_1);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm S_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm d_36 = NULL,e_36 = NULL;
  d_36 = t;
  a_36 :
  if(match_cons(d_36, sym_S_1))
    {
      e_36 = ATgetArgument(d_36, 0);
      {
        ATerm t_13 = t;
        int u_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_36 = NULL,m_36 = NULL;
            ATerm l_36 = NULL;
            t = SSLgetAnnotations(not_null(d_36));
            {
              l_36 = t;
              if(((k_36 != NULL) && (k_36 != l_36)))
                _fail(l_36);
              else
                k_36 = l_36;
            }
            {
              t = not_null(e_36);
              {
                ATerm o_36 = NULL;
                t = j_0(t);
                {
                  m_36 = t;
                  {
                    ATerm p_36 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(m_36)), not_null(k_36));
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
            LocalPopChoice(u_13);
          }
        else
          {
            t = t_13;
            {
              ATerm s_36 = NULL,u_36 = NULL;
              ATerm t_36 = NULL;
              t = SSLgetAnnotations(not_null(d_36));
              {
                t_36 = t;
                if(((s_36 != NULL) && (s_36 != t_36)))
                  _fail(t_36);
                else
                  s_36 = t_36;
              }
              {
                t = not_null(e_36);
                {
                  ATerm w_36 = NULL;
                  t = j_0(t);
                  {
                    u_36 = t;
                    {
                      ATerm b_37 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(u_36)), not_null(s_36));
                      {
                        b_37 = t;
                        if(((w_36 != NULL) && (w_36 != b_37)))
                          _fail(b_37);
                        else
                          w_36 = b_37;
                      }
                      t = not_null(w_36);
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
  ATerm u_37 = NULL,v_37 = NULL,w_37 = NULL;
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_37 = NULL,y_37 = NULL,z_37 = NULL;
      x_37 = t;
      q_37 :
      if(match_cons(x_37, sym_Arg_1))
        {
          y_37 = ATgetArgument(x_37, 0);
          {
            ATerm a_38 = NULL;
            if(((v_37 != NULL) && (v_37 != y_37)))
              _fail(y_37);
            else
              v_37 = y_37;
            {
              ATerm b_38 = NULL;
              t = not_null(v_37);
              {
                t = string_to_int_0(t);
                {
                  b_38 = t;
                  if(((a_38 != NULL) && (a_38 != b_38)))
                    _fail(b_38);
                  else
                    a_38 = b_38;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(a_38));
            }
          }
        }
      else
        {
          if(match_cons(x_37, sym_Arg2_2))
            {
              y_37 = ATgetArgument(x_37, 0);
              z_37 = ATgetArgument(x_37, 1);
              {
                ATerm c_38 = NULL,e_38 = NULL;
                if(((v_37 != NULL) && (v_37 != y_37)))
                  _fail(y_37);
                else
                  v_37 = y_37;
                {
                  if(((u_37 != NULL) && (u_37 != z_37)))
                    _fail(z_37);
                  else
                    u_37 = z_37;
                  {
                    ATerm x_13;
                    x_13 = t;
                    {
                      ATerm d_38 = NULL;
                      t = not_null(v_37);
                      {
                        t = string_to_int_0(t);
                        {
                          d_38 = t;
                          if(((c_38 != NULL) && (c_38 != d_38)))
                            _fail(d_38);
                          else
                            c_38 = d_38;
                        }
                      }
                    }
                    t = x_13;
                    {
                      ATerm f_38 = NULL;
                      t = not_null(u_37);
                      {
                        t = string_to_int_0(t);
                        {
                          f_38 = t;
                          if(((e_38 != NULL) && (e_38 != f_38)))
                            _fail(f_38);
                          else
                            e_38 = f_38;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(c_38), not_null(e_38));
                    }
                  }
                }
              }
            }
          else
            {
              if(match_cons(x_37, sym_SOpt_2))
                {
                  y_37 = ATgetArgument(x_37, 0);
                  z_37 = ATgetArgument(x_37, 1);
                  {
                    if(((w_37 != NULL) && (w_37 != y_37)))
                      _fail(y_37);
                    else
                      w_37 = y_37;
                    {
                      if(((v_37 != NULL) && (v_37 != z_37)))
                        _fail(z_37);
                      else
                        v_37 = z_37;
                      t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(w_37), not_null(v_37));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm y_13 = t;
        int m_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_1 (ATerm t)
            {
              t = de_quote_0(t);
              t = de_escape_0(t);
              return(t);
            }
            t = S_1(t, n_1);
            LocalPopChoice(m_14);
          }
        else
          {
            t = y_13;
            {
              ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
              g_38 = t;
              t_37 :
              if(match_cons(g_38, sym_selector_2))
                {
                  h_38 = ATgetArgument(g_38, 0);
                  i_38 = ATgetArgument(g_38, 1);
                  {
                    ATerm j_38 = NULL;
                    if(((v_37 != NULL) && (v_37 != h_38)))
                      _fail(h_38);
                    else
                      v_37 = h_38;
                    {
                      if(((w_37 != NULL) && (w_37 != i_38)))
                        _fail(i_38);
                      else
                        w_37 = i_38;
                      {
                        ATerm k_38 = NULL;
                        t = not_null(v_37);
                        {
                          t = string_to_int_0(t);
                          {
                            k_38 = t;
                            if(((j_38 != NULL) && (j_38 != k_38)))
                              _fail(k_38);
                            else
                              j_38 = k_38;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(j_38), not_null(w_37));
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
ATerm topdown_1 (ATerm t, ATerm b_74 (ATerm))
{
  t = b_74(t);
  {
    ATerm o_1 (ATerm t)
    {
      t = topdown_1(t, b_74);
      return(t);
    }
    t = _all(t, o_1);
  }
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm n_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MakePPTerm_0(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = n_14;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, p_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm v_38 = NULL,w_38 = NULL;
  v_38 = t;
  u_38 :
  if(match_cons(v_38, sym_PP_Table_1))
    {
      w_38 = ATgetArgument(v_38, 0);
      {
        t = not_null(w_38);
        {
          ATerm q_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = reverse_acc_2(t, _id, q_1);
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
  ATerm p_14;
  p_14 = t;
  {
    ATerm a_39 = NULL;
    ATerm b_39 = NULL;
    b_39 = t;
    if(((a_39 != NULL) && (a_39 != b_39)))
      _fail(b_39);
    else
      a_39 = b_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_14, not_null(a_39));
      t = printnl_0(t);
    }
  }
  t = p_14;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm s_14;
  s_14 = t;
  {
    t = error_0(t);
    {
      t = term_n_8;
      t = exit_0(t);
    }
  }
  t = s_14;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_1 (ATerm t)
      {
        t = term_x_14;
        return(t);
      }
      t = has_option_1(t, s_1);
      {
        t = (ATerm) ATinsert(ATempty, term_y_14);
        t = fatal_error_0(t);
      }
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
        t = (ATerm) ATinsert(ATempty, term_h_15);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm r_71 (ATerm))
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL;
  l_39 = t;
  j_39 :
  if(match_cons(l_39, sym__2))
    {
      m_39 = ATgetArgument(l_39, 0);
      n_39 = ATgetArgument(l_39, 1);
      k_39 :
      if(match_string(m_39, "in-type"))
        {
          ATerm p_39 = NULL,q_39 = NULL;
          ATerm i_15;
          i_15 = t;
          {
            ATerm r_39 = NULL;
            ATerm t_39 = NULL,u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL;
            t = not_null(n_39);
            {
              r_39 = t;
              {
                t = SSL_explode_term(not_null(r_39));
                {
                  t_39 = t;
                  g_39 :
                  if(match_cons(t_39, sym__2))
                    {
                      u_39 = ATgetArgument(t_39, 0);
                      v_39 = ATgetArgument(t_39, 1);
                      h_39 :
                      if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
                        {
                          w_39 = ATgetFirst((ATermList) v_39);
                          x_39 = (ATerm) ATgetNext((ATermList) v_39);
                          i_39 :
                          if(((ATgetType(x_39) == AT_LIST) && ATisEmpty(x_39)))
                            {
                              {
                                if(((q_39 != NULL) && (q_39 != u_39)))
                                  _fail(u_39);
                                else
                                  q_39 = u_39;
                                if(((p_39 != NULL) && (p_39 != w_39)))
                                  _fail(w_39);
                                else
                                  p_39 = w_39;
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
          t = i_15;
          {
            t = not_null(q_39);
            {
              ATerm j_15 = t;
              int k_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_71(t);
                  LocalPopChoice(k_15);
                }
              else
                {
                  t = j_15;
                  t = type_failure_0(t);
                }
            }
            t = not_null(p_39);
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
ATerm termid_check_1 (ATerm t, ATerm y_71 (ATerm))
{
  ATerm d_40 = NULL;
  ATerm f_40 = NULL;
  d_40 = t;
  {
    ATerm g_40 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_p_15, not_null(d_40));
    {
      t = InId_1(t, y_71);
      {
        g_40 = t;
        if(((f_40 != NULL) && (f_40 != g_40)))
          _fail(g_40);
        else
          f_40 = g_40;
      }
    }
    t = not_null(f_40);
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm j_40 (ATerm t)
  {
    ATerm q_15 = t;
    int r_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_75(t);
        LocalPopChoice(r_15);
      }
    else
      {
        t = q_15;
        t = _one(t, j_40);
      }
    return(t);
  }
  t = j_40(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
  n_40 = t;
  m_40 :
  if(match_cons(n_40, sym__2))
    {
      o_40 = ATgetArgument(n_40, 0);
      p_40 = ATgetArgument(n_40, 1);
      {
        ATerm s_15;
        s_15 = t;
        {
          t = not_null(p_40);
          {
            ATerm t_1 (ATerm t)
            {
              ATerm s_40 = NULL;
              s_40 = t;
              if(((o_40 != NULL) && (o_40 != s_40)))
                _fail(s_40);
              else
                o_40 = s_40;
              return(t);
            }
            t = oncetd_1(t, t_1);
          }
        }
        t = s_15;
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
  t = term_c_16;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm x_40 = NULL;
  ATerm z_40 = NULL;
  x_40 = t;
  {
    ATerm a_41 = NULL;
    t = get_options_0(t);
    {
      a_41 = t;
      {
        if(((z_40 != NULL) && (z_40 != a_41)))
          _fail(a_41);
        else
          z_40 = a_41;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_40), not_null(z_40));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_k_7;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm e_72 (ATerm))
{
  ATerm d_16;
  d_16 = t;
  {
    t = term_k_7;
    {
      t = e_72(t);
      t = check_option_0(t);
    }
  }
  t = d_16;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm c_100 (ATerm))
{
  ATerm g_16 = t;
  int h_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_16;
      j_16 = t;
      {
        ATerm k_16;
        k_16 = t;
        {
          ATerm u_1 (ATerm t)
          {
            t = term_v_16;
            return(t);
          }
          t = has_option_1(t, u_1);
        }
        t = k_16;
        t = debug_1(t, c_100);
      }
      t = j_16;
      LocalPopChoice(h_16);
    }
  else
    {
      t = g_16;
      {
      }
    }
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm f_41 = NULL;
  f_41 = t;
  {
    t = term_o_11;
    {
      t = table_create_0(t);
      {
        t = not_null(f_41);
        {
          ATerm v_1 (ATerm t)
          {
            ATerm w_1 (ATerm t)
            {
              t = term_w_16;
              return(t);
            }
            t = notify_1(t, w_1);
            {
              t = ReadFromFile_0(t);
              {
                ATerm x_1 (ATerm t)
                {
                  ATerm h_41 = NULL;
                  h_41 = t;
                  e_41 :
                  if(!(match_string(h_41, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, x_1);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, v_1);
        }
      }
    }
  }
  return(t);
}
ATerm eq_0 (ATerm t)
{
  ATerm l_41 = NULL,m_41 = NULL,n_41 = NULL;
  l_41 = t;
  k_41 :
  if(match_cons(l_41, sym__2))
    {
      m_41 = ATgetArgument(l_41, 0);
      n_41 = ATgetArgument(l_41, 1);
      if(((m_41 != NULL) && (m_41 != n_41)))
        _fail(n_41);
      else
        m_41 = n_41;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm HdMember_p__2 (ATerm t, ATerm z_83 (ATerm), ATerm a_84 (ATerm))
{
  ATerm t_41 = NULL,u_41 = NULL,v_41 = NULL;
  t_41 = t;
  s_41 :
  if(((ATgetType(t_41) == AT_LIST) && !(ATisEmpty(t_41))))
    {
      u_41 = ATgetFirst((ATermList) t_41);
      v_41 = (ATerm) ATgetNext((ATermList) t_41);
      {
        t = a_84(t);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm y_41 = NULL;
            y_41 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_41), not_null(y_41));
              t = z_83(t);
            }
            return(t);
          }
          t = fetch_1(t, y_1);
        }
        t = not_null(v_41);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_1 (ATerm t, ATerm v_83 (ATerm))
{
  ATerm e_42 = NULL,f_42 = NULL,g_42 = NULL;
  e_42 = t;
  d_42 :
  if(match_cons(e_42, sym__2))
    {
      f_42 = ATgetArgument(e_42, 0);
      g_42 = ATgetArgument(e_42, 1);
      {
        t = not_null(f_42);
        {
          ATerm k_42 (ATerm t)
          {
            ATerm x_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(g_42);
                LocalPopChoice(y_16);
              }
            else
              {
                t = x_16;
                {
                  ATerm b_17 = t;
                  int c_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm z_1 (ATerm t)
                      {
                        t = not_null(g_42);
                        return(t);
                      }
                      t = HdMember_p__2(t, v_83, z_1);
                      t = k_42(t);
                      LocalPopChoice(c_17);
                    }
                  else
                    {
                      t = b_17;
                      t = Cons_2(t, _id, k_42);
                    }
                }
              }
            return(t);
          }
          t = k_42(t);
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
ATerm foldr_3 (ATerm t, ATerm o_84 (ATerm), ATerm p_84 (ATerm), ATerm q_84 (ATerm))
{
  ATerm d_17 = t;
  int e_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = o_84(t);
      LocalPopChoice(e_17);
    }
  else
    {
      t = d_17;
      {
        ATerm p_42 = NULL,q_42 = NULL,r_42 = NULL;
        p_42 = t;
        o_42 :
        if(((ATgetType(p_42) == AT_LIST) && !(ATisEmpty(p_42))))
          {
            q_42 = ATgetFirst((ATermList) p_42);
            r_42 = (ATerm) ATgetNext((ATermList) p_42);
            {
              ATerm u_42 = NULL,z_42 = NULL;
              ATerm f_17;
              f_17 = t;
              {
                ATerm v_42 = NULL;
                t = not_null(q_42);
                {
                  t = q_84(t);
                  {
                    v_42 = t;
                    if(((u_42 != NULL) && (u_42 != v_42)))
                      _fail(v_42);
                    else
                      u_42 = v_42;
                  }
                }
              }
              t = f_17;
              {
                ATerm a_43 = NULL;
                t = not_null(r_42);
                {
                  t = foldr_3(t, o_84, p_84, q_84);
                  {
                    a_43 = t;
                    if(((z_42 != NULL) && (z_42 != a_43)))
                      _fail(a_43);
                    else
                      z_42 = a_43;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_42), not_null(z_42));
                  t = p_84(t);
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
ATerm crush_3 (ATerm t, ATerm m_83 (ATerm), ATerm n_83 (ATerm), ATerm o_83 (ATerm))
{
  ATerm i_43 = NULL;
  ATerm k_43 = NULL;
  i_43 = t;
  {
    ATerm l_43 = NULL;
    ATerm n_43 = NULL,o_43 = NULL,p_43 = NULL;
    t = not_null(i_43);
    {
      l_43 = t;
      {
        t = SSL_explode_term(not_null(l_43));
        {
          n_43 = t;
          h_43 :
          if(match_cons(n_43, sym__2))
            {
              o_43 = ATgetArgument(n_43, 0);
              p_43 = ATgetArgument(n_43, 1);
              if(((k_43 != NULL) && (k_43 != p_43)))
                _fail(p_43);
              else
                k_43 = p_43;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_43);
      t = foldr_3(t, m_83, n_83, o_83);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm w_43 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_43 = NULL;
        ATerm v_43 = NULL;
        t = l_82(t);
        {
          v_43 = t;
          if(((u_43 != NULL) && (u_43 != v_43)))
            _fail(v_43);
          else
            u_43 = v_43;
        }
        t = (ATerm) ATinsert(ATempty, not_null(u_43));
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        {
          ATerm a_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm b_2 (ATerm t)
          {
            t = union_1(t, eq_0);
            return(t);
          }
          t = crush_3(t, a_2, b_2, w_43);
        }
      }
    return(t);
  }
  t = w_43(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm n_82 (ATerm))
{
  t = collect_om_1(t, n_82);
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  c_44 :
  if(match_cons(d_44, sym__2))
    {
      e_44 = ATgetArgument(d_44, 0);
      f_44 = ATgetArgument(d_44, 1);
      {
        t = not_null(e_44);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm k_44 = NULL,l_44 = NULL;
            k_44 = t;
            a_44 :
            if(match_cons(k_44, sym_PP_Table_1))
              {
                l_44 = ATgetArgument(k_44, 0);
                t = not_null(l_44);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = collect_om_1(t, c_2);
          {
            ATerm d_2 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, d_2);
            {
              t = read_pp_tables_0(t);
              {
                t = not_null(f_44);
                {
                  t = trm2abox_0(t);
                  {
                    ATerm i_17 = t;
                    int j_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_44 = NULL;
                        t = is_list_0(t);
                        {
                          q_44 = t;
                          t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(q_44));
                        }
                        LocalPopChoice(j_17);
                      }
                    else
                      {
                        t = i_17;
                        {
                        }
                      }
                    {
                      ATerm e_2 (ATerm t)
                      {
                        t = not_null(e_44);
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
  ATerm z_44 = NULL;
  ATerm k_17;
  k_17 = t;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm a_45 = NULL,b_45 = NULL;
      a_45 = t;
      y_44 :
      if(match_cons(a_45, sym_Program_1))
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
    t = fetch_1(t, f_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_17), not_null(z_44)), term_l_17));
      {
        t = printnl_0(t);
        {
          t = term_n_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = k_17;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm f_45 = NULL,g_45 = NULL,h_45 = NULL;
  f_45 = t;
  e_45 :
  if(match_cons(f_45, sym__2))
    {
      g_45 = ATgetArgument(f_45, 0);
      h_45 = ATgetArgument(f_45, 1);
      {
        ATerm r_17;
        r_17 = t;
        t = SSL_printnl(not_null(g_45), not_null(h_45));
        t = r_17;
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
  ATerm q_45 = NULL;
  q_45 = t;
  t = SSL_implode_string(not_null(q_45));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
        ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
        w_45 = t;
        v_45 :
        if(((ATgetType(w_45) == AT_LIST) && !(ATisEmpty(w_45))))
          {
            x_45 = ATgetFirst((ATermList) w_45);
            y_45 = (ATerm) ATgetNext((ATermList) w_45);
            {
              t = not_null(x_45);
              {
                ATerm g_2 (ATerm t)
                {
                  t = not_null(y_45);
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
  ATerm l_46 = NULL;
  ATerm n_46 = NULL;
  l_46 = t;
  {
    ATerm o_46 = NULL;
    ATerm q_46 = NULL,r_46 = NULL,s_46 = NULL;
    t = not_null(l_46);
    {
      o_46 = t;
      {
        t = SSL_explode_term(not_null(o_46));
        {
          q_46 = t;
          g_46 :
          if(match_cons(q_46, sym__2))
            {
              r_46 = ATgetArgument(q_46, 0);
              s_46 = ATgetArgument(q_46, 1);
              h_46 :
              if(match_string(r_46, ""))
                {
                  if(((n_46 != NULL) && (n_46 != s_46)))
                    _fail(s_46);
                  else
                    n_46 = s_46;
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
      t = not_null(n_46);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_78 (ATerm))
{
  ATerm w_46 (ATerm t)
  {
    ATerm x_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_46);
        LocalPopChoice(z_17);
      }
    else
      {
        t = x_17;
        {
          t = Nil_0(t);
          t = n_78(t);
        }
      }
    return(t);
  }
  t = w_46(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm z_46 = NULL,a_47 = NULL,b_47 = NULL;
  z_46 = t;
  y_46 :
  if(match_cons(z_46, sym__2))
    {
      a_47 = ATgetArgument(z_46, 0);
      b_47 = ATgetArgument(z_46, 1);
      {
        t = not_null(a_47);
        {
          ATerm j_2 (ATerm t)
          {
            t = not_null(b_47);
            return(t);
          }
          t = at_end_1(t, j_2);
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
  ATerm c_18 = t;
  int d_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(d_18);
    }
  else
    {
      t = c_18;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm g_47 = NULL;
  g_47 = t;
  t = SSL_explode_string(not_null(g_47));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm e_18 = t;
    int i_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(i_18);
      }
    else
      {
        t = e_18;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm k_47 = NULL;
  k_47 = t;
  t = SSL_is_string(not_null(k_47));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_18 = t;
  int n_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(n_18);
    }
  else
    {
      t = k_18;
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_2 (ATerm t)
            {
              ATerm q_18 = t;
              int r_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(r_18);
                }
              else
                {
                  t = q_18;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, k_2);
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
            {
              ATerm a_48 = NULL,b_48 = NULL,c_48 = NULL;
              a_48 = t;
              z_47 :
              if(match_cons(a_48, sym_Path_1))
                {
                  b_48 = ATgetArgument(a_48, 0);
                  t = not_null(b_48);
                }
              else
                {
                  if(match_cons(a_48, sym_Var_1))
                    {
                      b_48 = ATgetArgument(a_48, 0);
                      {
                        t = not_null(b_48);
                        {
                          ATerm s_18 = t;
                          int t_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(t_18);
                            }
                          else
                            {
                              t = s_18;
                              {
                                ATerm l_2 (ATerm t)
                                {
                                  t = term_u_18;
                                  return(t);
                                }
                                t = debug_1(t, l_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(a_48, sym_Prefix_2))
                        {
                          b_48 = ATgetArgument(a_48, 0);
                          c_48 = ATgetArgument(a_48, 1);
                          {
                            ATerm h_48 = NULL,j_48 = NULL;
                            ATerm v_18;
                            v_18 = t;
                            {
                              ATerm i_48 = NULL;
                              t = not_null(b_48);
                              {
                                t = eval_config_0(t);
                                {
                                  i_48 = t;
                                  if(((h_48 != NULL) && (h_48 != i_48)))
                                    _fail(i_48);
                                  else
                                    h_48 = i_48;
                                }
                              }
                            }
                            t = v_18;
                            {
                              ATerm k_48 = NULL;
                              t = not_null(c_48);
                              {
                                t = eval_config_0(t);
                                {
                                  k_48 = t;
                                  if(((j_48 != NULL) && (j_48 != k_48)))
                                    _fail(k_48);
                                  else
                                    j_48 = k_48;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(h_48), not_null(j_48));
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
  ATerm s_48 = NULL;
  s_48 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_18, not_null(s_48));
    {
      t = table_get_0(t);
      {
        ATerm x_18 = t;
        int y_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm d_19;
              d_19 = t;
              {
                ATerm u_48 = NULL;
                ATerm v_48 = NULL;
                v_48 = t;
                if(((u_48 != NULL) && (u_48 != v_48)))
                  _fail(v_48);
                else
                  u_48 = v_48;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_w_18, not_null(s_48), not_null(u_48));
                  t = table_put_0(t);
                }
              }
              t = d_19;
            }
            LocalPopChoice(y_18);
          }
        else
          {
            t = x_18;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm e_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_19;
      i_19 = t;
      {
        ATerm a_49 = NULL;
        ATerm b_49 = NULL;
        t = term_j_19;
        {
          t = get_config_0(t);
          {
            b_49 = t;
            if(((a_49 != NULL) && (a_49 != b_49)))
              _fail(b_49);
            else
              a_49 = b_49;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_49), term_b_9);
          t = geq_0(t);
        }
      }
      t = i_19;
      t = n_92(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = e_19;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_49 = NULL,g_49 = NULL,h_49 = NULL;
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym__2))
    {
      g_49 = ATgetArgument(f_49, 0);
      h_49 = ATgetArgument(f_49, 1);
      t = SSL_WriteToTextFile(not_null(g_49), not_null(h_49));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm h_59 (ATerm), ATerm i_59 (ATerm))
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
  r_49 = t;
  q_49 :
  if(match_cons(r_49, sym__2))
    {
      s_49 = ATgetArgument(r_49, 0);
      t_49 = ATgetArgument(r_49, 1);
      {
        ATerm x_49 = NULL,z_49 = NULL;
        ATerm y_49 = NULL;
        t = SSLgetAnnotations(not_null(r_49));
        {
          y_49 = t;
          if(((x_49 != NULL) && (x_49 != y_49)))
            _fail(y_49);
          else
            x_49 = y_49;
        }
        {
          t = not_null(s_49);
          {
            ATerm b_50 = NULL;
            t = h_59(t);
            {
              z_49 = t;
              {
                t = not_null(t_49);
                {
                  ATerm d_50 = NULL;
                  t = i_59(t);
                  {
                    b_50 = t;
                    {
                      ATerm e_50 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(z_49), not_null(b_50)), not_null(x_49));
                      {
                        e_50 = t;
                        if(((d_50 != NULL) && (d_50 != e_50)))
                          _fail(e_50);
                        else
                          d_50 = e_50;
                      }
                      t = not_null(d_50);
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
  ATerm r_50 = NULL,s_50 = NULL,t_50 = NULL;
  r_50 = t;
  l_50 :
  if(match_cons(r_50, sym__2))
    {
      s_50 = ATgetArgument(r_50, 0);
      t_50 = ATgetArgument(r_50, 1);
      t = SSL_WriteToBinaryFile(not_null(s_50), not_null(t_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm h_51 = NULL;
  ATerm k_19;
  k_19 = t;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm l_19 = t;
      int m_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm n_2 (ATerm t)
          {
            ATerm i_51 = NULL,j_51 = NULL;
            i_51 = t;
            y_50 :
            if(match_cons(i_51, sym_Output_1))
              {
                j_51 = ATgetArgument(i_51, 0);
                if(((h_51 != NULL) && (h_51 != j_51)))
                  _fail(j_51);
                else
                  h_51 = j_51;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, n_2);
          LocalPopChoice(m_19);
        }
      else
        {
          t = l_19;
          {
            ATerm k_51 = NULL;
            t = term_t_19;
            {
              k_51 = t;
              if(((h_51 != NULL) && (h_51 != k_51)))
                _fail(k_51);
              else
                h_51 = k_51;
            }
          }
        }
      return(t);
    }
    t = _2(t, m_2, _id);
  }
  t = k_19;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm p_2 (ATerm t)
      {
        t = not_null(h_51);
        return(t);
      }
      t = split_2(t, p_2, _id);
      return(t);
    }
    t = _2(t, _id, o_2);
    {
      ATerm u_19 = t;
      int v_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_2 (ATerm t)
          {
            ATerm r_2 (ATerm t)
            {
              ATerm l_51 = NULL;
              l_51 = t;
              e_51 :
              if(!(match_cons(l_51, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, r_2);
            return(t);
          }
          t = _2(t, q_2, WriteToBinaryFile_0);
          LocalPopChoice(v_19);
        }
      else
        {
          t = u_19;
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
ATerm apply_strategy_1 (ATerm t, ATerm d_72 (ATerm))
{
  ATerm x_51 = NULL,z_51 = NULL,a_52 = NULL,b_52 = NULL;
  ATerm x_19;
  x_19 = t;
  t = dtime_0(t);
  t = x_19;
  {
    t = d_72(t);
    {
      ATerm f_20;
      f_20 = t;
      {
        ATerm y_51 = NULL;
        t = dtime_0(t);
        {
          y_51 = t;
          if(((x_51 != NULL) && (x_51 != y_51)))
            _fail(y_51);
          else
            x_51 = y_51;
        }
      }
      t = f_20;
      {
        z_51 = t;
        w_51 :
        if(match_cons(z_51, sym__2))
          {
            a_52 = ATgetArgument(z_51, 0);
            b_52 = ATgetArgument(z_51, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_52)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_51))), not_null(b_52));
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
ATerm debug_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm g_20;
  g_20 = t;
  {
    ATerm i_52 = NULL,k_52 = NULL;
    ATerm h_20;
    h_20 = t;
    {
      ATerm j_52 = NULL;
      t = l_73(t);
      {
        j_52 = t;
        if(((i_52 != NULL) && (i_52 != j_52)))
          _fail(j_52);
        else
          i_52 = j_52;
      }
    }
    t = h_20;
    {
      ATerm l_52 = NULL;
      l_52 = t;
      if(((k_52 != NULL) && (k_52 != l_52)))
        _fail(l_52);
      else
        k_52 = l_52;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_52)), not_null(i_52)));
        t = printnl_0(t);
      }
    }
  }
  t = g_20;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_52 = NULL;
  ATerm i_20 = t;
  int j_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_52 = NULL;
      q_52 = t;
      {
        if(((p_52 != NULL) && (p_52 != q_52)))
          _fail(q_52);
        else
          p_52 = q_52;
        t = SSL_ReadFromFile(not_null(p_52));
      }
      LocalPopChoice(j_20);
    }
  else
    {
      t = i_20;
      {
        ATerm s_2 (ATerm t)
        {
          t = term_o_20;
          return(t);
        }
        t = debug_1(t, s_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm e_88 (ATerm), ATerm f_88 (ATerm))
{
  ATerm u_52 = NULL,w_52 = NULL;
  ATerm p_20;
  p_20 = t;
  {
    ATerm v_52 = NULL;
    t = e_88(t);
    {
      v_52 = t;
      if(((u_52 != NULL) && (u_52 != v_52)))
        _fail(v_52);
      else
        u_52 = v_52;
    }
  }
  t = p_20;
  {
    ATerm x_52 = NULL;
    t = f_88(t);
    {
      x_52 = t;
      if(((w_52 != NULL) && (w_52 != x_52)))
        _fail(x_52);
      else
        w_52 = x_52;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_52), not_null(w_52));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_53 = NULL;
  ATerm q_20;
  q_20 = t;
  {
    ATerm r_20 = t;
    int s_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm t_2 (ATerm t)
        {
          ATerm e_53 = NULL,f_53 = NULL;
          e_53 = t;
          b_53 :
          if(match_cons(e_53, sym_Input_1))
            {
              f_53 = ATgetArgument(e_53, 0);
              if(((d_53 != NULL) && (d_53 != f_53)))
                _fail(f_53);
              else
                d_53 = f_53;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, t_2);
        LocalPopChoice(s_20);
      }
    else
      {
        t = r_20;
        {
          ATerm g_53 = NULL;
          t = term_a_21;
          {
            g_53 = t;
            if(((d_53 != NULL) && (d_53 != g_53)))
              _fail(g_53);
            else
              d_53 = g_53;
          }
        }
      }
  }
  t = q_20;
  {
    ATerm v_2 (ATerm t)
    {
      t = not_null(d_53);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, v_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm x_2 (ATerm t)
  {
    ATerm k_53 = NULL;
    k_53 = t;
    j_53 :
    if(!(match_string(k_53, "-v")))
      {
        if(!(match_string(k_53, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm y_2 (ATerm t)
  {
    t = term_c_21;
    t = set_config_0(t);
    t = term_f_21;
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    t = term_g_21;
    return(t);
  }
  t = Option_3(t, x_2, y_2, z_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm n_53 = NULL;
    n_53 = t;
    l_53 :
    if(!(match_string(n_53, "-k")))
      {
        if(!(match_string(n_53, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm h_21;
    h_21 = t;
    {
      ATerm o_53 = NULL;
      ATerm p_53 = NULL;
      t = string_to_int_0(t);
      {
        p_53 = t;
        if(((o_53 != NULL) && (o_53 != p_53)))
          _fail(p_53);
        else
          o_53 = p_53;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_21, not_null(o_53));
        t = set_config_0(t);
      }
    }
    t = h_21;
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_o_21;
    return(t);
  }
  t = ArgOption_3(t, c_3, e_3, f_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm s_53 = NULL;
  s_53 = t;
  t = SSL_string_to_int(not_null(s_53));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm q_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_3 (ATerm t)
      {
        ATerm a_54 = NULL;
        a_54 = t;
        v_53 :
        if(!(match_string(a_54, "-S")))
          {
            if(!(match_string(a_54, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = term_t_21;
        t = set_config_0(t);
        t = term_u_21;
        return(t);
      }
      ATerm j_3 (ATerm t)
      {
        t = term_v_21;
        return(t);
      }
      t = Option_3(t, g_3, h_3, j_3);
      LocalPopChoice(s_21);
    }
  else
    {
      t = q_21;
      {
        ATerm y_21 = t;
        int c_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm n_54 = NULL;
              n_54 = t;
              w_53 :
              if(!(match_string(n_54, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm m_3 (ATerm t)
            {
              ATerm q_54 = NULL;
              ATerm d_22;
              d_22 = t;
              {
                ATerm o_54 = NULL;
                ATerm p_54 = NULL;
                t = string_to_int_0(t);
                {
                  p_54 = t;
                  if(((o_54 != NULL) && (o_54 != p_54)))
                    _fail(p_54);
                  else
                    o_54 = p_54;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_19, not_null(o_54));
                  t = set_config_0(t);
                }
              }
              t = d_22;
              {
                ATerm r_54 = NULL;
                r_54 = t;
                if(((q_54 != NULL) && (q_54 != r_54)))
                  _fail(r_54);
                else
                  q_54 = r_54;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(q_54));
              }
              return(t);
            }
            ATerm n_3 (ATerm t)
            {
              t = term_e_22;
              return(t);
            }
            t = ArgOption_3(t, l_3, m_3, n_3);
            LocalPopChoice(c_22);
          }
        else
          {
            t = y_21;
            {
              ATerm o_3 (ATerm t)
              {
                ATerm s_54 = NULL;
                s_54 = t;
                z_53 :
                if(!(match_string(s_54, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                t = term_g_22;
                t = set_config_0(t);
                t = term_i_22;
                return(t);
              }
              ATerm q_3 (ATerm t)
              {
                t = term_j_22;
                return(t);
              }
              t = Option_3(t, o_3, p_3, q_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm k_22 = t;
  int l_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm m_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(o_22);
          }
        else
          {
            t = m_22;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm y_54 = NULL;
    y_54 = t;
    v_54 :
    if(!(match_string(y_54, "-o")))
      {
        if(!(match_string(y_54, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    ATerm b_55 = NULL;
    ATerm p_22;
    p_22 = t;
    {
      ATerm z_54 = NULL;
      ATerm a_55 = NULL;
      a_55 = t;
      if(((z_54 != NULL) && (z_54 != a_55)))
        _fail(a_55);
      else
        z_54 = a_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_22, not_null(z_54));
        t = set_config_0(t);
      }
    }
    t = p_22;
    {
      ATerm c_55 = NULL;
      c_55 = t;
      if(((b_55 != NULL) && (b_55 != c_55)))
        _fail(c_55);
      else
        b_55 = c_55;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(b_55));
    }
    return(t);
  }
  ATerm c_4 (ATerm t)
  {
    t = term_u_22;
    return(t);
  }
  t = ArgOption_3(t, z_3, b_4, c_4);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm y_22 = t;
  int f_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(f_23);
    }
  else
    {
      t = y_22;
      {
        ATerm d_4 (ATerm t)
        {
          ATerm g_55 = NULL;
          g_55 = t;
          f_55 :
          if(!(match_string(g_55, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm e_4 (ATerm t)
        {
          t = term_k_23;
          t = set_config_0(t);
          t = term_l_23;
          return(t);
        }
        ATerm f_4 (ATerm t)
        {
          t = term_n_23;
          return(t);
        }
        t = Option_3(t, d_4, e_4, f_4);
      }
    }
  return(t);
}
ATerm input_option_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    ATerm k_55 = NULL;
    k_55 = t;
    h_55 :
    if(!(match_string(k_55, "-i")))
      {
        if(!(match_string(k_55, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    ATerm n_55 = NULL;
    ATerm o_23;
    o_23 = t;
    {
      ATerm l_55 = NULL;
      ATerm m_55 = NULL;
      m_55 = t;
      if(((l_55 != NULL) && (l_55 != m_55)))
        _fail(m_55);
      else
        l_55 = m_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_23, not_null(l_55));
        t = set_config_0(t);
      }
    }
    t = o_23;
    {
      ATerm o_55 = NULL;
      o_55 = t;
      if(((n_55 != NULL) && (n_55 != o_55)))
        _fail(o_55);
      else
        n_55 = o_55;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_55));
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_q_23;
    return(t);
  }
  t = ArgOption_3(t, g_4, h_4, m_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm t_23 = t;
        int u_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(u_23);
          }
        else
          {
            t = t_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATempty, term_w_23));
  {
    t = printnl_0(t);
    {
      t = term_n_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm s_55 = NULL;
  s_55 = t;
  t = SSL_TicksToSeconds(not_null(s_55));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  w_55 :
  if(match_cons(x_55, sym__2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      {
        ATerm x_23 = t;
        int y_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(y_55), not_null(z_55));
            LocalPopChoice(y_23);
          }
        else
          {
            t = x_23;
            t = SSL_addr(not_null(y_55), not_null(z_55));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_84 (ATerm), ATerm n_84 (ATerm))
{
  ATerm z_23 = t;
  int b_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_84(t);
      LocalPopChoice(b_24);
    }
  else
    {
      t = z_23;
      {
        ATerm g_56 = NULL,h_56 = NULL,i_56 = NULL;
        g_56 = t;
        f_56 :
        if(((ATgetType(g_56) == AT_LIST) && !(ATisEmpty(g_56))))
          {
            h_56 = ATgetFirst((ATermList) g_56);
            i_56 = (ATerm) ATgetNext((ATermList) g_56);
            {
              ATerm l_56 = NULL;
              ATerm m_56 = NULL;
              t = not_null(i_56);
              {
                t = foldr_2(t, m_84, n_84);
                {
                  m_56 = t;
                  if(((l_56 != NULL) && (l_56 != m_56)))
                    _fail(m_56);
                  else
                    l_56 = m_56;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(h_56), not_null(l_56));
                t = n_84(t);
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
ATerm crush_2 (ATerm t, ATerm k_83 (ATerm), ATerm l_83 (ATerm))
{
  ATerm t_56 = NULL;
  ATerm v_56 = NULL;
  t_56 = t;
  {
    ATerm w_56 = NULL;
    ATerm y_56 = NULL,z_56 = NULL,a_57 = NULL;
    t = not_null(t_56);
    {
      w_56 = t;
      {
        t = SSL_explode_term(not_null(w_56));
        {
          y_56 = t;
          s_56 :
          if(match_cons(y_56, sym__2))
            {
              z_56 = ATgetArgument(y_56, 0);
              a_57 = ATgetArgument(y_56, 1);
              if(((v_56 != NULL) && (v_56 != a_57)))
                _fail(a_57);
              else
                v_56 = a_57;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(v_56);
      t = foldr_2(t, k_83, l_83);
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
    ATerm n_4 (ATerm t)
    {
      t = term_i_8;
      return(t);
    }
    t = crush_2(t, n_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm g_57 = NULL,h_57 = NULL,i_57 = NULL;
  g_57 = t;
  f_57 :
  if(match_cons(g_57, sym__2))
    {
      h_57 = ATgetArgument(g_57, 0);
      i_57 = ATgetArgument(g_57, 1);
      {
        ATerm e_24;
        e_24 = t;
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(h_57), not_null(i_57));
              LocalPopChoice(g_24);
            }
          else
            {
              t = f_24;
              t = SSL_gtr(not_null(h_57), not_null(i_57));
            }
        }
        t = e_24;
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
  ATerm o_57 = NULL;
  ATerm h_24 = t;
  int i_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_57 = NULL,q_57 = NULL,r_57 = NULL;
      p_57 = t;
      n_57 :
      if(match_cons(p_57, sym__2))
        {
          q_57 = ATgetArgument(p_57, 0);
          r_57 = ATgetArgument(p_57, 1);
          {
            if(((o_57 != NULL) && (o_57 != q_57)))
              _fail(q_57);
            else
              o_57 = q_57;
            if(((o_57 != NULL) && (o_57 != r_57)))
              _fail(r_57);
            else
              o_57 = r_57;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_24);
    }
  else
    {
      t = h_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm m_92 (ATerm))
{
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_24;
      l_24 = t;
      {
        ATerm u_57 = NULL;
        ATerm v_57 = NULL;
        t = term_j_19;
        {
          t = get_config_0(t);
          {
            v_57 = t;
            if(((u_57 != NULL) && (u_57 != v_57)))
              _fail(v_57);
            else
              u_57 = v_57;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_57), term_n_8);
          t = geq_0(t);
        }
      }
      t = l_24;
      t = m_92(t);
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    ATerm z_57 = NULL,b_58 = NULL;
    ATerm m_24;
    m_24 = t;
    {
      ATerm a_58 = NULL;
      t = run_time_0(t);
      {
        a_58 = t;
        if(((z_57 != NULL) && (z_57 != a_58)))
          _fail(a_58);
        else
          z_57 = a_58;
      }
    }
    t = m_24;
    {
      ATerm c_58 = NULL;
      t = term_n_24;
      {
        t = get_config_0(t);
        {
          c_58 = t;
          if(((b_58 != NULL) && (b_58 != c_58)))
            _fail(c_58);
          else
            b_58 = c_58;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_24), not_null(z_57)), term_o_24), not_null(b_58)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, u_4);
  {
    t = term_i_8;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_58 = NULL;
  j_58 = t;
  i_58 :
  if(match_cons(j_58, sym_Version_0))
    {
      ATerm l_58 = NULL,n_58 = NULL;
      ATerm q_24;
      q_24 = t;
      {
        ATerm m_58 = NULL;
        t = SSLgetAnnotations(not_null(j_58));
        {
          m_58 = t;
          if(((l_58 != NULL) && (l_58 != m_58)))
            _fail(m_58);
          else
            l_58 = m_58;
        }
      }
      t = q_24;
      {
        ATerm o_58 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_58));
        {
          o_58 = t;
          if(((n_58 != NULL) && (n_58 != o_58)))
            _fail(o_58);
          else
            n_58 = o_58;
        }
        t = not_null(n_58);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm b_72 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm r_24 = t;
    int s_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(s_24);
      }
    else
      {
        t = r_24;
        {
          ATerm t_24 = t;
          int u_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_24);
            }
          else
            {
              t = t_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, z_4);
  t = b_72(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_58 = NULL;
  t_58 = t;
  t = SSL_table_create(not_null(t_58));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_58 = NULL;
  x_58 = t;
  {
    ATerm v_24;
    v_24 = t;
    {
      t = term_t_15;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_15, term_b_16, not_null(x_58));
          t = table_put_0(t);
        }
      }
    }
    t = v_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_59 = NULL;
  b_59 = t;
  t = SSL_table_destroy(not_null(b_59));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_59 = NULL;
  l_59 = t;
  t = SSL_exit(not_null(l_59));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_59 = NULL,q_59 = NULL,r_59 = NULL;
  p_59 = t;
  o_59 :
  if(((ATgetType(p_59) == AT_LIST) && ATisEmpty(p_59)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_59) == AT_LIST) && !(ATisEmpty(p_59))))
        {
          q_59 = ATgetFirst((ATermList) p_59);
          r_59 = (ATerm) ATgetNext((ATermList) p_59);
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
  ATerm w_24;
  w_24 = t;
  {
    ATerm u_59 = NULL;
    ATerm x_59 = NULL;
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        {
          ATerm v_59 = NULL;
          ATerm w_59 = NULL;
          w_59 = t;
          if(((v_59 != NULL) && (v_59 != w_59)))
            _fail(w_59);
          else
            v_59 = w_59;
          t = (ATerm) ATinsert(ATempty, not_null(v_59));
        }
      }
    {
      x_59 = t;
      if(((u_59 != NULL) && (u_59 != x_59)))
        _fail(x_59);
      else
        u_59 = x_59;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_19, not_null(u_59));
      t = printnl_0(t);
    }
  }
  t = w_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm p_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm a_60 (ATerm t)
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        t = Cons_2(t, y_77, a_60);
      }
    return(t);
  }
  t = a_60(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_60 = NULL,i_60 = NULL,j_60 = NULL;
  j_60 = t;
  g_60 :
  if(((ATgetType(j_60) == AT_LIST) && !(ATisEmpty(j_60))))
    {
      h_60 = ATgetFirst((ATermList) j_60);
      i_60 = (ATerm) ATgetNext((ATermList) j_60);
      {
        ATerm m_60 = NULL;
        t = not_null(i_60);
        {
          ATerm b_25;
          b_25 = t;
          {
            ATerm n_60 = NULL,p_60 = NULL,t_60 = NULL;
            ATerm c_25;
            c_25 = t;
            {
              ATerm o_60 = NULL;
              t = i_0(t);
              {
                o_60 = t;
                if(((n_60 != NULL) && (n_60 != o_60)))
                  _fail(o_60);
                else
                  n_60 = o_60;
              }
            }
            t = c_25;
            {
              ATerm s_60 = NULL;
              t = not_null(h_60);
              {
                t = h_0(t);
                {
                  s_60 = t;
                  if(((p_60 != NULL) && (p_60 != s_60)))
                    _fail(s_60);
                  else
                    p_60 = s_60;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_60)), not_null(p_60));
                {
                  t_60 = t;
                  if(((m_60 != NULL) && (m_60 != t_60)))
                    _fail(t_60);
                  else
                    m_60 = t_60;
                }
              }
            }
          }
          t = b_25;
          {
            ATerm a_5 (ATerm t)
            {
              t = not_null(m_60);
              return(t);
            }
            t = reverse_acc_2(t, h_0, a_5);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_60) == AT_LIST) && ATisEmpty(j_60)))
        {
          {
            t = term_k_7;
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
  ATerm b_5 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_5);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm o_91 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm h_67 (ATerm))
{
  ATerm e_61 = NULL,f_61 = NULL;
  e_61 = t;
  d_61 :
  if(match_cons(e_61, sym_Program_1))
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
            t = h_67(t);
            {
              k_61 = t;
              {
                ATerm n_61 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(k_61)), not_null(i_61));
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
ATerm system_usage_0 (ATerm t)
{
  ATerm v_61 = NULL;
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_61 = NULL;
      t = term_n_24;
      {
        t = get_config_0(t);
        {
          w_61 = t;
          if(((v_61 != NULL) && (v_61 != w_61)))
            _fail(w_61);
          else
            v_61 = w_61;
        }
      }
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm c_5 (ATerm t)
        {
          ATerm d_5 (ATerm t)
          {
            ATerm x_61 = NULL;
            x_61 = t;
            if(((v_61 != NULL) && (v_61 != x_61)))
              _fail(x_61);
            else
              v_61 = x_61;
            return(t);
          }
          t = Program_1(t, d_5);
          return(t);
        }
        t = fetch_1(t, c_5);
      }
    }
  {
    t = term_f_25;
    {
      t = echo_0(t);
      {
        t = term_i_25;
        {
          t = table_get_0(t);
          {
            ATerm e_5 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, e_5);
            {
              ATerm f_5 (ATerm t)
              {
                ATerm y_61 = NULL;
                ATerm z_61 = NULL;
                z_61 = t;
                if(((y_61 != NULL) && (y_61 != z_61)))
                  _fail(z_61);
                else
                  y_61 = z_61;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_61)), term_j_25);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, f_5);
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
  ATerm k_25;
  k_25 = t;
  {
    ATerm e_62 = NULL;
    ATerm f_62 = NULL;
    f_62 = t;
    if(((e_62 != NULL) && (e_62 != f_62)))
      _fail(f_62);
    else
      e_62 = f_62;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATempty, not_null(e_62)));
      t = printnl_0(t);
    }
  }
  t = k_25;
  return(t);
}
ATerm say_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm l_25;
  l_25 = t;
  {
    t = m_73(t);
    t = debug_0(t);
  }
  t = l_25;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm i_67 (ATerm))
{
  ATerm m_62 = NULL,n_62 = NULL;
  m_62 = t;
  l_62 :
  if(match_cons(m_62, sym_Undefined_1))
    {
      n_62 = ATgetArgument(m_62, 0);
      {
        ATerm q_62 = NULL,s_62 = NULL;
        ATerm r_62 = NULL;
        t = SSLgetAnnotations(not_null(m_62));
        {
          r_62 = t;
          if(((q_62 != NULL) && (q_62 != r_62)))
            _fail(r_62);
          else
            q_62 = r_62;
        }
        {
          t = not_null(n_62);
          {
            ATerm u_62 = NULL;
            t = i_67(t);
            {
              s_62 = t;
              {
                ATerm v_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(s_62)), not_null(q_62));
                {
                  v_62 = t;
                  if(((u_62 != NULL) && (u_62 != v_62)))
                    _fail(v_62);
                  else
                    u_62 = v_62;
                }
                t = not_null(u_62);
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
ATerm fetch_1 (ATerm t, ATerm h_78 (ATerm))
{
  ATerm a_63 (ATerm t)
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_78, _id);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = Cons_2(t, _id, a_63);
      }
    return(t);
  }
  t = a_63(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm o_90 (ATerm))
{
  t = fetch_1(t, o_90);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm f_63 = NULL;
  f_63 = t;
  e_63 :
  if(match_cons(f_63, sym_Help_0))
    {
      ATerm h_63 = NULL,j_63 = NULL;
      ATerm o_25;
      o_25 = t;
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
      t = o_25;
      {
        ATerm k_63 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(h_63));
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
ATerm try_1 (ATerm t, ATerm f_77 (ATerm))
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_77(t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_63 = NULL,r_63 = NULL,s_63 = NULL;
  q_63 = t;
  p_63 :
  if(match_cons(q_63, sym__2))
    {
      r_63 = ATgetArgument(q_63, 0);
      s_63 = ATgetArgument(q_63, 1);
      t = SSL_table_get(not_null(r_63), not_null(s_63));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm z_63 = NULL,a_64 = NULL,b_64 = NULL,c_64 = NULL;
  z_63 = t;
  y_63 :
  if(match_cons(z_63, sym__3))
    {
      a_64 = ATgetArgument(z_63, 0);
      b_64 = ATgetArgument(z_63, 1);
      c_64 = ATgetArgument(z_63, 2);
      {
        ATerm r_25;
        r_25 = t;
        {
          ATerm g_64 = NULL;
          ATerm h_64 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_64), not_null(b_64));
          {
            ATerm s_25 = t;
            int t_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(t_25);
              }
            else
              {
                t = s_25;
                t = (ATerm) ATempty;
              }
            {
              h_64 = t;
              if(((g_64 != NULL) && (g_64 != h_64)))
                _fail(h_64);
              else
                g_64 = h_64;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_64), not_null(b_64), (ATerm) ATinsert(CheckATermList(not_null(g_64)), not_null(c_64)));
            t = table_put_0(t);
          }
        }
        t = r_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm t_91 (ATerm))
{
  ATerm l_64 = NULL;
  ATerm m_64 = NULL;
  t = term_k_7;
  {
    t = t_91(t);
    {
      m_64 = t;
      if(((l_64 != NULL) && (l_64 != m_64)))
        _fail(m_64);
      else
        l_64 = m_64;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_25, term_h_25, not_null(l_64));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm s_64 = NULL,t_64 = NULL,u_64 = NULL;
  s_64 = t;
  r_64 :
  if(match_string(s_64, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(s_64) == AT_LIST) && !(ATisEmpty(s_64))))
        {
          t_64 = ATgetFirst((ATermList) s_64);
          u_64 = (ATerm) ATgetNext((ATermList) s_64);
          {
            ATerm x_64 = NULL;
            ATerm u_25;
            u_25 = t;
            {
              t = not_null(t_64);
              t = a_0(t);
            }
            t = u_25;
            {
              ATerm y_64 = NULL;
              t = term_k_7;
              {
                t = d_0(t);
                {
                  y_64 = t;
                  if(((x_64 != NULL) && (x_64 != y_64)))
                    _fail(y_64);
                  else
                    x_64 = y_64;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(u_64)), not_null(x_64));
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
  ATerm g_5 (ATerm t)
  {
    ATerm d_65 = NULL;
    d_65 = t;
    c_65 :
    if(!(match_string(d_65, "--help")))
      {
        if(!(match_string(d_65, "-h")))
          {
            if(!(match_string(d_65, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_5 (ATerm t)
  {
    t = term_w_25;
    {
      t = set_config_0(t);
      t = term_x_25;
    }
    return(t);
  }
  ATerm m_5 (ATerm t)
  {
    t = term_y_25;
    return(t);
  }
  t = Option_3(t, g_5, h_5, m_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm g_65 = NULL,h_65 = NULL,i_65 = NULL;
  g_65 = t;
  f_65 :
  if(((ATgetType(g_65) == AT_LIST) && !(ATisEmpty(g_65))))
    {
      h_65 = ATgetFirst((ATermList) g_65);
      i_65 = (ATerm) ATgetNext((ATermList) g_65);
      t = (ATerm) ATinsert(CheckATermList(not_null(i_65)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_65)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm q_60 (ATerm), ATerm r_60 (ATerm))
{
  ATerm s_65 = NULL,t_65 = NULL,u_65 = NULL;
  s_65 = t;
  r_65 :
  if(((ATgetType(s_65) == AT_LIST) && !(ATisEmpty(s_65))))
    {
      t_65 = ATgetFirst((ATermList) s_65);
      u_65 = (ATerm) ATgetNext((ATermList) s_65);
      {
        ATerm y_65 = NULL,a_66 = NULL;
        ATerm z_65 = NULL;
        t = SSLgetAnnotations(not_null(s_65));
        {
          z_65 = t;
          if(((y_65 != NULL) && (y_65 != z_65)))
            _fail(z_65);
          else
            y_65 = z_65;
        }
        {
          t = not_null(t_65);
          {
            ATerm c_66 = NULL;
            t = q_60(t);
            {
              a_66 = t;
              {
                t = not_null(u_65);
                {
                  ATerm e_66 = NULL;
                  t = r_60(t);
                  {
                    c_66 = t;
                    {
                      ATerm f_66 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(c_66)), not_null(a_66)), not_null(y_65));
                      {
                        f_66 = t;
                        if(((e_66 != NULL) && (e_66 != f_66)))
                          _fail(f_66);
                        else
                          e_66 = f_66;
                      }
                      t = not_null(e_66);
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
  ATerm p_66 = NULL;
  p_66 = t;
  o_66 :
  if(((ATgetType(p_66) == AT_LIST) && ATisEmpty(p_66)))
    {
      {
        ATerm r_66 = NULL,t_66 = NULL;
        ATerm z_25;
        z_25 = t;
        {
          ATerm s_66 = NULL;
          t = SSLgetAnnotations(not_null(p_66));
          {
            s_66 = t;
            if(((r_66 != NULL) && (r_66 != s_66)))
              _fail(s_66);
            else
              r_66 = s_66;
          }
        }
        t = z_25;
        {
          ATerm u_66 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(r_66));
          {
            u_66 = t;
            if(((t_66 != NULL) && (t_66 != u_66)))
              _fail(u_66);
            else
              t_66 = u_66;
          }
          t = not_null(t_66);
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
  ATerm a_67 = NULL,b_67 = NULL,c_67 = NULL;
  a_67 = t;
  z_66 :
  if(match_cons(a_67, sym__2))
    {
      b_67 = ATgetArgument(a_67, 0);
      c_67 = ATgetArgument(a_67, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_18, not_null(b_67), not_null(c_67));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm r_91 (ATerm))
{
  ATerm a_26;
  a_26 = t;
  {
    ATerm b_26 = t;
    int c_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_d_26;
        t = r_91(t);
        LocalPopChoice(c_26);
      }
    else
      {
        t = b_26;
        {
        }
      }
  }
  t = a_26;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm m_67 = NULL;
      ATerm e_26;
      e_26 = t;
      {
        ATerm k_67 = NULL;
        ATerm l_67 = NULL;
        l_67 = t;
        if(((k_67 != NULL) && (k_67 != l_67)))
          _fail(l_67);
        else
          k_67 = l_67;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_24, not_null(k_67));
          t = set_config_0(t);
        }
      }
      t = e_26;
      {
        ATerm n_67 = NULL;
        n_67 = t;
        if(((m_67 != NULL) && (m_67 != n_67)))
          _fail(n_67);
        else
          m_67 = n_67;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(m_67));
      }
      return(t);
    }
    ATerm q_5 (ATerm t)
    {
      ATerm f_26 = t;
      int g_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_26 = t;
          int i_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_26);
            }
          else
            {
              t = h_26;
              {
                t = r_91(t);
                t = Cons_2(t, _id, q_5);
              }
            }
          LocalPopChoice(g_26);
        }
      else
        {
          t = f_26;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_5, q_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm t_67 = NULL,u_67 = NULL,v_67 = NULL;
  ATerm j_26;
  j_26 = t;
  {
    ATerm w_67 = NULL,x_67 = NULL,y_67 = NULL,z_67 = NULL;
    w_67 = t;
    s_67 :
    if(match_cons(w_67, sym__3))
      {
        x_67 = ATgetArgument(w_67, 0);
        y_67 = ATgetArgument(w_67, 1);
        z_67 = ATgetArgument(w_67, 2);
        {
          if(((t_67 != NULL) && (t_67 != x_67)))
            _fail(x_67);
          else
            t_67 = x_67;
          {
            if(((u_67 != NULL) && (u_67 != y_67)))
              _fail(y_67);
            else
              u_67 = y_67;
            {
              if(((v_67 != NULL) && (v_67 != z_67)))
                _fail(z_67);
              else
                v_67 = z_67;
              t = SSL_table_put(not_null(t_67), not_null(u_67), not_null(v_67));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm q_91 (ATerm))
{
  ATerm c_68 = NULL;
  ATerm k_26;
  k_26 = t;
  {
    t = term_l_26;
    t = table_put_0(t);
  }
  t = k_26;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm m_26 = t;
      int n_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = q_91(t);
          LocalPopChoice(n_26);
        }
      else
        {
          t = m_26;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_5);
    {
      ATerm o_26 = t;
      int p_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_26;
          q_26 = t;
          {
            ATerm r_26 = t;
            int s_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_v_25;
                t = get_config_0(t);
                LocalPopChoice(s_26);
              }
            else
              {
                t = r_26;
                t = fetch_1(t, Help_0);
              }
          }
          t = q_26;
          {
            t = system_usage_0(t);
            {
              t = term_i_8;
              t = exit_0(t);
            }
          }
          LocalPopChoice(p_26);
        }
      else
        {
          t = o_26;
          {
            ATerm t_26 = t;
            int u_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm t_5 (ATerm t)
                  {
                    ATerm d_68 = NULL;
                    d_68 = t;
                    if(((c_68 != NULL) && (c_68 != d_68)))
                      _fail(d_68);
                    else
                      c_68 = d_68;
                    return(t);
                  }
                  t = Undefined_1(t, t_5);
                  return(t);
                }
                t = fetch_1(t, s_5);
                {
                  ATerm u_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_68)), term_v_26);
                    return(t);
                  }
                  t = say_1(t, u_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_n_8;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(u_26);
              }
            else
              {
                t = t_26;
                {
                }
              }
          }
        }
      {
        ATerm w_26;
        w_26 = t;
        {
          t = term_g_25;
          t = table_destroy_0(t);
        }
        t = w_26;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_72 (ATerm), ATerm i_72 (ATerm), ATerm j_72 (ATerm), ATerm k_72 (ATerm))
{
  t = parse_options_1(t, h_72);
  {
    t = store_options_0(t);
    {
      t = j_72(t);
      {
        ATerm x_26 = t;
        int z_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_72);
            LocalPopChoice(z_26);
          }
        else
          {
            t = x_26;
            {
              ATerm a_27 = t;
              int b_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_72(t);
                  t = report_success_0(t);
                  LocalPopChoice(b_27);
                }
              else
                {
                  t = a_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_72 (ATerm), ATerm z_72 (ATerm), ATerm a_73 (ATerm), ATerm b_73 (ATerm))
{
  ATerm y_5 (ATerm t)
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_72(t);
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_72);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, y_5, a_73, b_73, b_6);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_72 (ATerm), ATerm t_72 (ATerm), ATerm u_72 (ATerm))
{
  ATerm f_6 (ATerm t)
  {
    ATerm g_6 (ATerm t)
    {
      ATerm e_27;
      e_27 = t;
      {
        ATerm g_68 = NULL;
        ATerm h_68 = NULL;
        t = term_n_24;
        {
          t = get_config_0(t);
          {
            h_68 = t;
            if(((g_68 != NULL) && (g_68 != h_68)))
              _fail(h_68);
            else
              g_68 = h_68;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_q_14, (ATerm) ATinsert(ATempty, not_null(g_68)));
          t = printnl_0(t);
        }
      }
      t = e_27;
      return(t);
    }
    t = if_verbose2_1(t, g_6);
    return(t);
  }
  t = iowrap_4(t, s_72, t_72, u_72, f_6);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_72 (ATerm), ATerm r_72 (ATerm))
{
  t = iowrap_3(t, q_72, r_72, default_usage_0);
  return(t);
}
ATerm Ast_2_abox_0 (ATerm t)
{
  ATerm h_6 (ATerm t)
  {
    ATerm f_27 = t;
    int g_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_6 (ATerm t)
        {
          ATerm m_68 = NULL;
          m_68 = t;
          j_68 :
          if(!(match_string(m_68, "-v")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm j_6 (ATerm t)
        {
          t = term_v_16;
          return(t);
        }
        t = Option_2(t, i_6, j_6);
        LocalPopChoice(g_27);
      }
    else
      {
        t = f_27;
        {
          ATerm k_6 (ATerm t)
          {
            ATerm n_68 = NULL;
            n_68 = t;
            k_68 :
            if(!(match_string(n_68, "-p")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm m_6 (ATerm t)
          {
            ATerm o_68 = NULL;
            o_68 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(o_68));
            return(t);
          }
          ATerm u_6 (ATerm t)
          {
            t = term_h_27;
            return(t);
          }
          t = ArgOption_3(t, k_6, m_6, u_6);
        }
      }
    return(t);
  }
  t = iowrap_2(t, ast2abox_0, h_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ast_2_abox_0(t);
  return(t);
}

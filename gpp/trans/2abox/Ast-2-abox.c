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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_FILE_1;
Symbol sym_DIR_1;
Symbol sym_TEMP_0;
Symbol sym_TempFiles_0;
Symbol sym_Tool_1;
Symbol sym_Repository_0;
Symbol sym_Import_0;
Symbol sym_Imported_1;
Symbol sym_XTC_0;
Symbol sym_None_0;
Symbol sym_Some_1;
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
Symbol sym_Scopes_0;
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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_WaitStatus_3;
Symbol sym_Signal_3;
Symbol sym_UnknownSignal_1;
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
  sym_Var_1 = ATmakeSymbol("Var", 1, ATfalse);
  ATprotectSymbol(sym_Var_1);
  sym_Path_1 = ATmakeSymbol("Path", 1, ATfalse);
  ATprotectSymbol(sym_Path_1);
  sym_Prefix_2 = ATmakeSymbol("Prefix", 2, ATfalse);
  ATprotectSymbol(sym_Prefix_2);
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
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Signal_3 = ATmakeSymbol("Signal", 3, ATfalse);
  ATprotectSymbol(sym_Signal_3);
  sym_UnknownSignal_1 = ATmakeSymbol("UnknownSignal", 1, ATfalse);
  ATprotectSymbol(sym_UnknownSignal_1);
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
ATerm term_z_27;
ATerm term_l_27;
ATerm term_y_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_h_26;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_k_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_u_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_n_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_d_23;
ATerm term_v_22;
ATerm term_p_22;
ATerm term_o_22;
ATerm term_n_22;
ATerm term_l_22;
ATerm term_k_22;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_v_20;
ATerm term_q_20;
ATerm term_h_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_i_19;
ATerm term_x_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_x_17;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_s_14;
ATerm term_p_14;
ATerm term_k_14;
ATerm term_g_12;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_q_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_f_11;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_d_10;
ATerm term_z_7;
ATerm term_k_7;
ATerm term_j_7;
ATerm term_n_6;
void init_constant_terms (void)
{
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_j_7));
  term_j_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_z_7));
  term_z_7 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_10));
  term_d_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_q_11));
  term_q_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file> (file, mode)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_F__OK_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_k_14));
  term_k_14 = (ATerm) ATmakeAppl(sym__2, term_x_11, term_k_11);
  ATprotect(&(term_p_14));
  term_p_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_i_18, term_j_18);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: Cannot open file: ", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym__2, term_d_21, term_n_6);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(sym__2, term_o_21, term_j_7);
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_7);
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_l_22));
  term_l_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(sym__2, term_l_22, term_n_6);
  ATprotect(&(term_o_22));
  term_o_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_p_22));
  term_p_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_d_23));
  term_d_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_d_23, term_n_6);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(ATmakeSymbol(": rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_25));
  term_k_25 = (ATerm) ATmakeAppl(sym__2, term_i_25, term_j_25);
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(sym__2, term_u_24, term_n_6);
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__3, term_i_25, term_j_25, (ATerm) ATempty);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm if_2 (ATerm, ATerm z_80 (ATerm), ATerm a_81 (ATerm));
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm n_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm c_78 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm TupleToList_0 (ATerm);
ATerm symbol2abox7_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm z_99 (ATerm));
ATerm length_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm));
ATerm crush_3 (ATerm, ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm));
ATerm collect_p__1 (ATerm, ATerm a_106 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm x_74 (ATerm));
ATerm symbol2abox6_helper_0 (ATerm);
ATerm symbol2abox6_0 (ATerm);
ATerm symbol2abox5_0 (ATerm);
ATerm symbol2abox4_0 (ATerm);
ATerm symbol2abox3_0 (ATerm);
ATerm symbol2abox2_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm c_92 (ATerm));
ATerm index_0 (ATerm);
ATerm symbol2abox1_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm get_symbol_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm y_84 (ATerm));
ATerm pp_table_get_0 (ATerm);
ATerm try_pp_table_get_0 (ATerm);
ATerm trm2abox_appl_0 (ATerm);
ATerm trm2abox_list_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm trm2abox_int_0 (ATerm);
ATerm trm2abox_string_0 (ATerm);
ATerm trm2abox_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm write_in_baf_to_stream_0 (ATerm);
ATerm WriteToFile_1 (ATerm, ATerm z_97 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm e_93 (ATerm));
ATerm obsolete_1 (ATerm, ATerm s_97 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm access_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm v_77 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm b_93 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm i_81 (ATerm), ATerm j_81 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm a_93 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm w_76 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm x_76 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm selector_2 (ATerm, ATerm n_71 (ATerm), ATerm o_71 (ATerm));
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm l_83 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm n_91 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm y_91 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm s_71 (ATerm));
ATerm SOpt_2 (ATerm, ATerm e_73 (ATerm), ATerm f_73 (ATerm));
ATerm Arg2_2 (ATerm, ATerm q_71 (ATerm), ATerm r_71 (ATerm));
ATerm Arg_1 (ATerm, ATerm p_71 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm b_78 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm f_79 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm i_93 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm n_99 (ATerm));
ATerm termid_check_1 (ATerm, ATerm u_99 (ATerm));
ATerm fclose_0 (ATerm);
ATerm read_from_stream_0 (ATerm);
ATerm fopen_0 (ATerm);
ATerm stdin_stream_0 (ATerm);
ATerm stdout_stream_0 (ATerm);
ATerm stderr_stream_0 (ATerm);
ATerm stdio_stream_0 (ATerm);
ATerm Fst_0 (ATerm);
ATerm open_stream_0 (ATerm);
ATerm ReadFromFile_0 (ATerm);
ATerm notify_1 (ATerm, ATerm f_106 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm get_config_p_0 (ATerm);
ATerm ast2abox_0 (ATerm);
ATerm extend_config_0 (ATerm);
ATerm pp_options_0 (ATerm);
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
ATerm ast2abox_options_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm whoami_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm x_88 (ATerm), ATerm y_88 (ATerm));
ATerm crush_2 (ATerm, ATerm v_86 (ATerm), ATerm w_86 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_74 (ATerm));
ATerm report_run_time_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_94 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm b_96 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_96 (ATerm));
ATerm Program_1 (ATerm, ATerm m_70 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_70 (ATerm));
ATerm fetch_1 (ATerm, ATerm u_82 (ATerm));
ATerm option_defined_1 (ATerm, ATerm a_95 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm a_83 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm d_64 (ATerm), ATerm e_64 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm l_97 (ATerm));
ATerm map_1 (ATerm, ATerm l_82 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm t_80 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm f_96 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm m_65 (ATerm), ATerm n_65 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm d_96 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm c_96 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm k_94 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm l_94 (ATerm), ATerm m_94 (ATerm));
ATerm io_Ast_2_abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm if_2 (ATerm t, ATerm z_80 (ATerm), ATerm a_81 (ATerm))
{
  ATerm d_2 = t;
  int u_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = z_80(t);
      LocalPopChoice(u_5);
      t = a_81(t);
    }
  else
    {
      t = d_2;
      {
      }
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm v_5 = t;
  int x_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(x_5);
    }
  else
    {
      t = v_5;
      {
        ATerm f_6 = t;
        int g_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, Nil_0, flat_list_0);
            ;
            LocalPopChoice(g_6);
          }
        else
          {
            t = f_6;
            {
              ATerm h_6 = t;
              int l_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_0 = NULL,b_2 = NULL;
                  t = Cons_2(t, is_list_0, _id);
                  {
                    ATerm m_6;
                    m_6 = t;
                    {
                      ATerm s_0 = NULL;
                      t = Hd_0(t);
                      {
                        s_0 = t;
                        if(((r_0 != NULL) && (r_0 != s_0)))
                          _fail(s_0);
                        else
                          r_0 = s_0;
                      }
                    }
                    t = m_6;
                    {
                      ATerm c_2 = NULL;
                      t = Tl_0(t);
                      {
                        c_2 = t;
                        if(((b_2 != NULL) && (b_2 != c_2)))
                          _fail(c_2);
                        else
                          b_2 = c_2;
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(r_0), not_null(b_2));
                        {
                          t = conc_0(t);
                          t = flat_list_0(t);
                        }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(l_6);
                }
              else
                {
                  t = h_6;
                  t = Cons_2(t, _id, flat_list_0);
                }
            }
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
  w_3 = t;
  u_3 :
  if(match_cons(w_3, sym_Arg2_2))
    {
      x_3 = ATgetArgument(w_3, 0);
      v_3 = ATgetArgument(w_3, 1);
      {
        ATerm a_4 = NULL,b_4 = NULL;
        ATerm c_4 = NULL,e_4 = NULL;
        ATerm d_4 = NULL;
        t = term_n_6;
        {
          t = n_0(t);
          {
            d_4 = t;
            if(((c_4 != NULL) && (c_4 != d_4)))
              _fail(d_4);
            else
              c_4 = d_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), not_null(c_4));
          {
            ATerm f_4 = NULL;
            t = index_0(t);
            {
              e_4 = t;
              {
                if(((a_4 != NULL) && (a_4 != e_4)))
                  _fail(e_4);
                else
                  a_4 = e_4;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_3), not_null(a_4));
                  {
                    t = index_0(t);
                    {
                      f_4 = t;
                      if(((b_4 != NULL) && (b_4 != f_4)))
                        _fail(f_4);
                      else
                        b_4 = f_4;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(b_4);
      }
    }
  else
    {
      if(match_cons(w_3, sym_Arg_1))
        {
          x_3 = ATgetArgument(w_3, 0);
          {
            ATerm h_4 = NULL;
            ATerm i_4 = NULL,k_4 = NULL;
            ATerm j_4 = NULL;
            t = term_n_6;
            {
              t = n_0(t);
              {
                j_4 = t;
                if(((i_4 != NULL) && (i_4 != j_4)))
                  _fail(j_4);
                else
                  i_4 = j_4;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_3), not_null(i_4));
              {
                t = index_0(t);
                {
                  k_4 = t;
                  if(((h_4 != NULL) && (h_4 != k_4)))
                    _fail(k_4);
                  else
                    h_4 = k_4;
                }
              }
            }
            t = not_null(h_4);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm c_0 (ATerm t)
  {
    t = bottomup_1(t, c_78);
    return(t);
  }
  t = _all(t, c_0);
  t = c_78(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm v_4 = NULL,w_4 = NULL,x_4 = NULL;
  v_4 = t;
  u_4 :
  if(match_cons(v_4, sym__2))
    {
      w_4 = ATgetArgument(v_4, 0);
      x_4 = ATgetArgument(v_4, 1);
      {
        ATerm a_5 = NULL;
        ATerm b_5 = NULL;
        t = not_null(w_4);
        {
          ATerm e_0 (ATerm t)
          {
            ATerm f_0 (ATerm t)
            {
              ATerm o_6 = t;
              int r_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm h_0 (ATerm t)
                  {
                    t = not_null(x_4);
                    return(t);
                  }
                  t = Instantiate_1(t, h_0);
                  ;
                  LocalPopChoice(r_6);
                }
              else
                {
                  t = o_6;
                  t = flat_list_0(t);
                }
              return(t);
            }
            t = try_1(t, f_0);
            return(t);
          }
          t = bottomup_1(t, e_0);
          {
            b_5 = t;
            if(((a_5 != NULL) && (a_5 != b_5)))
              _fail(b_5);
            else
              a_5 = b_5;
          }
        }
        t = not_null(a_5);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm TupleToList_0 (ATerm t)
{
  ATerm j_5 = NULL;
  ATerm l_5 = NULL;
  j_5 = t;
  {
    ATerm m_5 = NULL;
    ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL;
    t = not_null(j_5);
    {
      m_5 = t;
      {
        t = SSL_explode_term(not_null(m_5));
        {
          o_5 = t;
          h_5 :
          if(match_cons(o_5, sym__2))
            {
              p_5 = ATgetArgument(o_5, 0);
              q_5 = ATgetArgument(o_5, 1);
              i_5 :
              if(match_string(p_5, ""))
                {
                  if(((l_5 != NULL) && (l_5 != q_5)))
                    _fail(q_5);
                  else
                    l_5 = q_5;
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
    t = not_null(l_5);
  }
  return(t);
}
ATerm symbol2abox7_0 (ATerm t)
{
  ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL,e_6 = NULL;
  a_6 = t;
  y_5 :
  if(match_cons(a_6, sym__4))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      d_6 = ATgetArgument(a_6, 2);
      e_6 = ATgetArgument(a_6, 3);
      z_5 :
      if(match_string(b_6, "seq"))
        {
          ATerm p_6 = NULL;
          t = not_null(e_6);
          {
            t = TupleToList_0(t);
            {
              ATerm o_0 (ATerm t)
              {
                ATerm i_6 = NULL,j_6 = NULL,k_6 = NULL;
                i_6 = t;
                w_5 :
                if(match_cons(i_6, sym__2))
                  {
                    j_6 = ATgetArgument(i_6, 0);
                    k_6 = ATgetArgument(i_6, 1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(j_6), not_null(c_6), not_null(k_6));
                      t = arg2abox_0(t);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = nzip_1(t, o_0);
              {
                ATerm q_6 = NULL;
                q_6 = t;
                if(((p_6 != NULL) && (p_6 != q_6)))
                  _fail(q_6);
                else
                  p_6 = q_6;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_6), not_null(p_6));
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
ATerm instantiate_sep_list_1 (ATerm t, ATerm z_99 (ATerm))
{
  ATerm i_7 (ATerm t)
  {
    ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
    ATerm s_6 = t;
    int t_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(t_6);
      }
    else
      {
        t = s_6;
        {
          ATerm u_6 = t;
          int v_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              ;
              LocalPopChoice(v_6);
            }
          else
            {
              t = u_6;
              {
                ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
                b_7 = t;
                w_6 :
                if(((ATgetType(b_7) == AT_LIST) && !(ATisEmpty(b_7))))
                  {
                    c_7 = ATgetFirst((ATermList) b_7);
                    d_7 = (ATerm) ATgetNext((ATermList) b_7);
                    x_6 :
                    if(((ATgetType(d_7) == AT_LIST) && !(ATisEmpty(d_7))))
                      {
                        e_7 = ATgetFirst((ATermList) d_7);
                        f_7 = (ATerm) ATgetNext((ATermList) d_7);
                        {
                          if(((y_6 != NULL) && (y_6 != c_7)))
                            _fail(c_7);
                          else
                            y_6 = c_7;
                          {
                            if(((z_6 != NULL) && (z_6 != e_7)))
                              _fail(e_7);
                            else
                              z_6 = e_7;
                            {
                              if(((a_7 != NULL) && (a_7 != f_7)))
                                _fail(f_7);
                              else
                                a_7 = f_7;
                              {
                                ATerm p_0 (ATerm t)
                                {
                                  ATerm g_7 = NULL;
                                  ATerm h_7 = NULL;
                                  t = term_n_6;
                                  {
                                    t = z_99(t);
                                    {
                                      h_7 = t;
                                      if(((g_7 != NULL) && (g_7 != h_7)))
                                        _fail(h_7);
                                      else
                                        g_7 = h_7;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_6)), not_null(y_6)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm q_0 (ATerm t)
                                {
                                  t = not_null(a_7);
                                  t = i_7(t);
                                  return(t);
                                }
                                t = Cons_2(t, p_0, q_0);
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
  t = i_7(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm t_0 (ATerm t)
  {
    t = term_j_7;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    t = term_k_7;
    return(t);
  }
  t = foldr_3(t, t_0, add_0, u_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm z_88 (ATerm), ATerm a_89 (ATerm), ATerm b_89 (ATerm))
{
  ATerm l_7 = t;
  int m_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = z_88(t);
      ;
      LocalPopChoice(m_7);
    }
  else
    {
      t = l_7;
      {
        ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
        p_7 = t;
        o_7 :
        if(((ATgetType(p_7) == AT_LIST) && !(ATisEmpty(p_7))))
          {
            q_7 = ATgetFirst((ATermList) p_7);
            r_7 = (ATerm) ATgetNext((ATermList) p_7);
            {
              ATerm u_7 = NULL,w_7 = NULL;
              ATerm n_7;
              n_7 = t;
              {
                ATerm v_7 = NULL;
                t = not_null(q_7);
                {
                  t = b_89(t);
                  {
                    v_7 = t;
                    if(((u_7 != NULL) && (u_7 != v_7)))
                      _fail(v_7);
                    else
                      u_7 = v_7;
                  }
                }
              }
              t = n_7;
              {
                ATerm x_7 = NULL;
                t = not_null(r_7);
                {
                  t = foldr_3(t, z_88, a_89, b_89);
                  {
                    x_7 = t;
                    if(((w_7 != NULL) && (w_7 != x_7)))
                      _fail(x_7);
                    else
                      w_7 = x_7;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_7), not_null(w_7));
                  t = a_89(t);
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
ATerm crush_3 (ATerm t, ATerm x_86 (ATerm), ATerm y_86 (ATerm), ATerm z_86 (ATerm))
{
  ATerm f_8 = NULL;
  ATerm h_8 = NULL;
  f_8 = t;
  {
    ATerm i_8 = NULL;
    ATerm k_8 = NULL,l_8 = NULL,m_8 = NULL;
    t = not_null(f_8);
    {
      i_8 = t;
      {
        t = SSL_explode_term(not_null(i_8));
        {
          k_8 = t;
          e_8 :
          if(match_cons(k_8, sym__2))
            {
              l_8 = ATgetArgument(k_8, 0);
              m_8 = ATgetArgument(k_8, 1);
              if(((h_8 != NULL) && (h_8 != m_8)))
                _fail(m_8);
              else
                h_8 = m_8;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(h_8);
      t = foldr_3(t, x_86, y_86, z_86);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm a_106 (ATerm))
{
  ATerm t_8 (ATerm t)
  {
    ATerm s_7 = t;
    int t_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_8 = NULL;
        t = a_106(t);
        {
          ATerm s_8 = NULL;
          s_8 = t;
          if(((r_8 != NULL) && (r_8 != s_8)))
            _fail(s_8);
          else
            r_8 = s_8;
          t = (ATerm) ATinsert(ATempty, not_null(r_8));
        }
        ;
        LocalPopChoice(t_7);
      }
    else
      {
        t = s_7;
        {
          ATerm v_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, v_0, conc_0, t_8);
        }
      }
    return(t);
  }
  t = t_8(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm x_8 = NULL,y_8 = NULL,z_8 = NULL;
  x_8 = t;
  w_8 :
  if(match_cons(x_8, sym__2))
    {
      y_8 = ATgetArgument(x_8, 0);
      z_8 = ATgetArgument(x_8, 1);
      t = SSL_mod(not_null(y_8), not_null(z_8));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm y_7;
  y_7 = t;
  {
    ATerm f_9 = NULL,h_9 = NULL;
    ATerm g_9 = NULL;
    g_9 = t;
    if(((f_9 != NULL) && (f_9 != g_9)))
      _fail(g_9);
    else
      f_9 = g_9;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_9), term_z_7);
      {
        t = mod_0(t);
        {
          h_9 = t;
          e_9 :
          if(!(match_int(h_9, 0)))
            {
              _fail(t);
            }
        }
      }
    }
  }
  t = y_7;
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm x_74 (ATerm))
{
  ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
  p_9 = t;
  o_9 :
  if(match_cons(p_9, sym__2))
    {
      q_9 = ATgetArgument(p_9, 0);
      r_9 = ATgetArgument(p_9, 1);
      {
        ATerm u_9 = NULL;
        ATerm a_8 = t;
        int b_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_9 = NULL,x_9 = NULL;
            t = not_null(q_9);
            {
              t = even_0(t);
              {
                ATerm w_9 = NULL;
                t = term_n_6;
                {
                  t = x_74(t);
                  {
                    w_9 = t;
                    if(((v_9 != NULL) && (v_9 != w_9)))
                      _fail(w_9);
                    else
                      v_9 = w_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_z_7, not_null(v_9), not_null(r_9));
                  {
                    t = arg2abox_0(t);
                    {
                      x_9 = t;
                      if(((u_9 != NULL) && (u_9 != x_9)))
                        _fail(x_9);
                      else
                        u_9 = x_9;
                    }
                  }
                }
              }
            }
            ;
            LocalPopChoice(b_8);
          }
        else
          {
            t = a_8;
            {
              ATerm y_9 = NULL,a_10 = NULL;
              ATerm z_9 = NULL;
              t = term_n_6;
              {
                t = x_74(t);
                {
                  z_9 = t;
                  if(((y_9 != NULL) && (y_9 != z_9)))
                    _fail(z_9);
                  else
                    y_9 = z_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, term_k_7, not_null(y_9), not_null(r_9));
                {
                  t = arg2abox_0(t);
                  {
                    a_10 = t;
                    if(((u_9 != NULL) && (u_9 != a_10)))
                      _fail(a_10);
                    else
                      u_9 = a_10;
                  }
                }
              }
            }
          }
        t = not_null(u_9);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox6_helper_0 (ATerm t)
{
  ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL;
  r_10 = t;
  q_10 :
  if(match_cons(r_10, sym__3))
    {
      s_10 = ATgetArgument(r_10, 0);
      t_10 = ATgetArgument(r_10, 1);
      u_10 = ATgetArgument(r_10, 2);
      {
        ATerm y_10 = NULL;
        t = not_null(u_10);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              t = not_null(s_10);
              return(t);
            }
            t = BuildSepList_1(t, x_0);
            return(t);
          }
          t = nzip_1(t, w_0);
          {
            y_10 = t;
            {
              ATerm c_8 = t;
              int d_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_11 = NULL;
                  t = not_null(t_10);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      t = S_1(t, _id);
                      return(t);
                    }
                    t = collect_p__1(t, y_0);
                    {
                      t = length_0(t);
                      {
                        a_11 = t;
                        p_10 :
                        if(match_int(a_11, 1))
                          {
                            t = not_null(y_10);
                            {
                              ATerm s_11 (ATerm t)
                              {
                                ATerm b_11 = NULL,c_11 = NULL,d_11 = NULL;
                                ATerm v_11 (ATerm t)
                                {
                                  ATerm n_11 = NULL;
                                  ATerm o_11 = NULL;
                                  t = not_null(d_11);
                                  {
                                    t = s_11(t);
                                    {
                                      o_11 = t;
                                      if(((n_11 != NULL) && (n_11 != o_11)))
                                        _fail(o_11);
                                      else
                                        n_11 = o_11;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(n_11)), not_null(c_11)), not_null(c_11));
                                  return(t);
                                }
                                b_11 = t;
                                n_10 :
                                if(((ATgetType(b_11) == AT_LIST) && ATisEmpty(b_11)))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(b_11) == AT_LIST) && !(ATisEmpty(b_11))))
                                      {
                                        c_11 = ATgetFirst((ATermList) b_11);
                                        d_11 = (ATerm) ATgetNext((ATermList) b_11);
                                        o_10 :
                                        if(((ATgetType(d_11) == AT_LIST) && ATisEmpty(d_11)))
                                          {
                                            {
                                              ATerm g_8 = t;
                                              int j_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(c_11));
                                                  ;
                                                  LocalPopChoice(j_8);
                                                }
                                              else
                                                {
                                                  t = g_8;
                                                  t = v_11(t);
                                                }
                                            }
                                          }
                                        else
                                          {
                                            t = v_11(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              t = s_11(t);
                            }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    }
                  }
                  ;
                  LocalPopChoice(d_8);
                }
              else
                {
                  t = c_8;
                  t = not_null(y_10);
                }
              {
                ATerm z_0 (ATerm t)
                {
                  t = not_null(t_10);
                  return(t);
                }
                t = instantiate_sep_list_1(t, z_0);
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
ATerm symbol2abox6_0 (ATerm t)
{
  ATerm b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL,f_12 = NULL;
  b_12 = t;
  z_11 :
  if(match_cons(b_12, sym__4))
    {
      c_12 = ATgetArgument(b_12, 0);
      d_12 = ATgetArgument(b_12, 1);
      e_12 = ATgetArgument(b_12, 2);
      f_12 = ATgetArgument(b_12, 3);
      a_12 :
      if(match_string(c_12, "iter-star-sep"))
        {
          t = (ATerm) ATmakeAppl(sym__3, not_null(d_12), not_null(e_12), not_null(f_12));
          t = symbol2abox6_helper_0(t);
        }
      else
        {
          if(match_string(c_12, "iter-sep"))
            {
              t = (ATerm) ATmakeAppl(sym__3, not_null(d_12), not_null(e_12), not_null(f_12));
              t = symbol2abox6_helper_0(t);
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
ATerm symbol2abox5_0 (ATerm t)
{
  ATerm u_12 = NULL,v_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,g_13 = NULL;
  x_12 = t;
  q_12 :
  if(match_cons(x_12, sym__4))
    {
      y_12 = ATgetArgument(x_12, 0);
      z_12 = ATgetArgument(x_12, 1);
      a_13 = ATgetArgument(x_12, 2);
      b_13 = ATgetArgument(x_12, 3);
      r_12 :
      if(match_string(y_12, "iter"))
        {
          if(((u_12 != NULL) && (u_12 != z_12)))
            _fail(z_12);
          else
            u_12 = z_12;
          {
            if(((v_12 != NULL) && (v_12 != a_13)))
              _fail(a_13);
            else
              v_12 = a_13;
            if(((w_12 != NULL) && (w_12 != b_13)))
              _fail(b_13);
            else
              w_12 = b_13;
          }
        }
      else
        {
          if(match_string(y_12, "iter-star"))
            {
              if(((u_12 != NULL) && (u_12 != z_12)))
                _fail(z_12);
              else
                u_12 = z_12;
              {
                if(((v_12 != NULL) && (v_12 != a_13)))
                  _fail(a_13);
                else
                  v_12 = a_13;
                if(((w_12 != NULL) && (w_12 != b_13)))
                  _fail(b_13);
                else
                  w_12 = b_13;
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
    t = not_null(w_12);
    {
      ATerm a_1 (ATerm t)
      {
        ATerm c_13 = NULL;
        c_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_7, not_null(u_12), not_null(c_13));
          t = arg2abox_0(t);
        }
        return(t);
      }
      t = map_1(t, a_1);
      {
        ATerm h_13 = NULL;
        h_13 = t;
        if(((g_13 != NULL) && (g_13 != h_13)))
          _fail(h_13);
        else
          g_13 = h_13;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_12), (ATerm) ATinsert(ATempty, not_null(g_13)));
          t = instantiate_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm symbol2abox4_0 (ATerm t)
{
  ATerm p_13 = NULL,q_13 = NULL,r_13 = NULL,s_13 = NULL,t_13 = NULL;
  p_13 = t;
  n_13 :
  if(match_cons(p_13, sym__4))
    {
      q_13 = ATgetArgument(p_13, 0);
      r_13 = ATgetArgument(p_13, 1);
      s_13 = ATgetArgument(p_13, 2);
      t_13 = ATgetArgument(p_13, 3);
      o_13 :
      if(match_cons(t_13, sym_None_0))
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
  ATerm c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  c_14 = t;
  a_14 :
  if(match_cons(c_14, sym__4))
    {
      d_14 = ATgetArgument(c_14, 0);
      e_14 = ATgetArgument(c_14, 1);
      f_14 = ATgetArgument(c_14, 2);
      g_14 = ATgetArgument(c_14, 3);
      b_14 :
      if(match_cons(g_14, sym_Some_1))
        {
          h_14 = ATgetArgument(g_14, 0);
          {
            ATerm m_14 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, term_k_7, not_null(e_14), not_null(h_14));
            {
              t = arg2abox_0(t);
              {
                ATerm n_14 = NULL;
                n_14 = t;
                if(((m_14 != NULL) && (m_14 != n_14)))
                  _fail(n_14);
                else
                  m_14 = n_14;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_14), (ATerm) ATinsert(ATempty, not_null(m_14)));
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
  ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL,a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL;
  x_14 = t;
  t_14 :
  if(match_cons(x_14, sym__4))
    {
      y_14 = ATgetArgument(x_14, 0);
      z_14 = ATgetArgument(x_14, 1);
      a_15 = ATgetArgument(x_14, 2);
      b_15 = ATgetArgument(x_14, 3);
      u_14 :
      if(match_cons(b_15, sym_alt_2))
        {
          c_15 = ATgetArgument(b_15, 0);
          d_15 = ATgetArgument(b_15, 1);
          v_14 :
          if(((ATgetType(d_15) == AT_LIST) && !(ATisEmpty(d_15))))
            {
              e_15 = ATgetFirst((ATermList) d_15);
              f_15 = (ATerm) ATgetNext((ATermList) d_15);
              w_14 :
              if(((ATgetType(f_15) == AT_LIST) && ATisEmpty(f_15)))
                {
                  {
                    ATerm l_15 = NULL,n_15 = NULL;
                    t = (ATerm) ATmakeAppl(sym__3, not_null(c_15), not_null(z_14), not_null(e_15));
                    {
                      t = arg2abox_0(t);
                      {
                        ATerm n_8;
                        n_8 = t;
                        {
                          ATerm m_15 = NULL;
                          m_15 = t;
                          if(((l_15 != NULL) && (l_15 != m_15)))
                            _fail(m_15);
                          else
                            l_15 = m_15;
                        }
                        t = n_8;
                        {
                          ATerm o_15 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(c_15), not_null(a_15));
                          {
                            t = index_0(t);
                            {
                              o_15 = t;
                              if(((n_15 != NULL) && (n_15 != o_15)))
                                _fail(o_15);
                              else
                                n_15 = o_15;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(n_15)), (ATerm) ATinsert(ATempty, not_null(l_15)));
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
  ATerm w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL;
  w_15 = t;
  t_15 :
  if(match_cons(w_15, sym__2))
    {
      x_15 = ATgetArgument(w_15, 0);
      y_15 = ATgetArgument(w_15, 1);
      u_15 :
      if(match_int(x_15, 1))
        {
          v_15 :
          if(((ATgetType(y_15) == AT_LIST) && !(ATisEmpty(y_15))))
            {
              z_15 = ATgetFirst((ATermList) y_15);
              a_16 = (ATerm) ATgetNext((ATermList) y_15);
              t = not_null(z_15);
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
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL;
  g_16 = t;
  f_16 :
  if(match_cons(g_16, sym__2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      {
        ATerm o_8 = t;
        int p_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_16), not_null(i_16));
            ;
            LocalPopChoice(p_8);
          }
        else
          {
            t = o_8;
            t = SSL_subtr(not_null(h_16), not_null(i_16));
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
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL,u_16 = NULL;
  q_16 = t;
  o_16 :
  if(match_cons(q_16, sym__2))
    {
      r_16 = ATgetArgument(q_16, 0);
      s_16 = ATgetArgument(q_16, 1);
      p_16 :
      if(((ATgetType(s_16) == AT_LIST) && !(ATisEmpty(s_16))))
        {
          t_16 = ATgetFirst((ATermList) s_16);
          u_16 = (ATerm) ATgetNext((ATermList) s_16);
          {
            ATerm y_16 = NULL;
            ATerm q_8;
            q_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_z_7);
              t = geq_0(t);
            }
            t = q_8;
            {
              ATerm z_16 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_k_7);
              {
                t = subt_0(t);
                {
                  z_16 = t;
                  if(((y_16 != NULL) && (y_16 != z_16)))
                    _fail(z_16);
                  else
                    y_16 = z_16;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_16), not_null(u_16));
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
ATerm repeat_1 (ATerm t, ATerm c_92 (ATerm))
{
  ATerm c_17 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      t = c_92(t);
      t = c_17(t);
      return(t);
    }
    t = try_1(t, b_1);
    return(t);
  }
  t = c_17(t);
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
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL;
  i_17 = t;
  f_17 :
  if(match_cons(i_17, sym__4))
    {
      j_17 = ATgetArgument(i_17, 0);
      k_17 = ATgetArgument(i_17, 1);
      l_17 = ATgetArgument(i_17, 2);
      m_17 = ATgetArgument(i_17, 3);
      g_17 :
      if(match_cons(m_17, sym_alt_2))
        {
          n_17 = ATgetArgument(m_17, 0);
          o_17 = ATgetArgument(m_17, 1);
          h_17 :
          if(((ATgetType(o_17) == AT_LIST) && ATisEmpty(o_17)))
            {
              {
                ATerm t_17 = NULL;
                ATerm u_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_17), not_null(l_17));
                {
                  t = index_0(t);
                  {
                    u_17 = t;
                    if(((t_17 != NULL) && (t_17 != u_17)))
                      _fail(u_17);
                    else
                      t_17 = u_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(t_17)), (ATerm) ATempty);
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
  ATerm u_8 = t;
  int v_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = symbol2abox1_0(t);
      ;
      LocalPopChoice(v_8);
    }
  else
    {
      t = u_8;
      {
        ATerm a_9 = t;
        int b_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = symbol2abox2_0(t);
            ;
            LocalPopChoice(b_9);
          }
        else
          {
            t = a_9;
            {
              ATerm c_9 = t;
              int d_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = symbol2abox3_0(t);
                  ;
                  LocalPopChoice(d_9);
                }
              else
                {
                  t = c_9;
                  {
                    ATerm i_9 = t;
                    int j_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = symbol2abox4_0(t);
                        ;
                        LocalPopChoice(j_9);
                      }
                    else
                      {
                        t = i_9;
                        {
                          ATerm k_9 = t;
                          int l_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = symbol2abox5_0(t);
                              ;
                              LocalPopChoice(l_9);
                            }
                          else
                            {
                              t = k_9;
                              {
                                ATerm m_9 = t;
                                int n_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = symbol2abox6_0(t);
                                    ;
                                    LocalPopChoice(n_9);
                                  }
                                else
                                  {
                                    t = m_9;
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
ATerm get_symbol_0 (ATerm t)
{
  ATerm a_18 = NULL,b_18 = NULL,c_18 = NULL;
  a_18 = t;
  z_17 :
  if(match_cons(a_18, sym_Path_2))
    {
      b_18 = ATgetArgument(a_18, 0);
      c_18 = ATgetArgument(a_18, 1);
      {
        ATerm f_18 = NULL;
        t = not_null(c_18);
        {
          ATerm c_1 (ATerm t)
          {
            ATerm d_1 (ATerm t)
            {
              ATerm e_1 (ATerm t)
              {
                ATerm g_18 = NULL;
                g_18 = t;
                if(((f_18 != NULL) && (f_18 != g_18)))
                  _fail(g_18);
                else
                  f_18 = g_18;
                return(t);
              }
              t = selector_2(t, _id, e_1);
              return(t);
            }
            t = Cons_2(t, d_1, Nil_0);
            return(t);
          }
          t = at_last_1(t, c_1);
        }
        t = not_null(f_18);
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
  ATerm p_18 = NULL,q_18 = NULL,r_18 = NULL,s_18 = NULL;
  p_18 = t;
  o_18 :
  if(match_cons(p_18, sym__3))
    {
      q_18 = ATgetArgument(p_18, 0);
      r_18 = ATgetArgument(p_18, 1);
      s_18 = ATgetArgument(p_18, 2);
      {
        ATerm w_18 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), (ATerm) ATinsert(ATempty, not_null(q_18)));
        {
          ATerm y_18 = NULL,z_18 = NULL;
          t = conc_0(t);
          {
            w_18 = t;
            {
              ATerm s_9 = t;
              int t_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_19 = NULL,b_19 = NULL,c_19 = NULL;
                  t = pp_table_get_0(t);
                  {
                    a_19 = t;
                    n_18 :
                    if(match_cons(a_19, sym__2))
                      {
                        b_19 = ATgetArgument(a_19, 0);
                        c_19 = ATgetArgument(a_19, 1);
                        {
                          ATerm d_19 = NULL;
                          if(((y_18 != NULL) && (y_18 != b_19)))
                            _fail(b_19);
                          else
                            y_18 = b_19;
                          {
                            if(((z_18 != NULL) && (z_18 != c_19)))
                              _fail(c_19);
                            else
                              z_18 = c_19;
                            {
                              ATerm e_19 = NULL;
                              t = not_null(y_18);
                              {
                                t = get_symbol_0(t);
                                {
                                  e_19 = t;
                                  if(((d_19 != NULL) && (d_19 != e_19)))
                                    _fail(e_19);
                                  else
                                    d_19 = e_19;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__4, not_null(d_19), not_null(w_18), not_null(z_18), not_null(s_18));
                                t = symbol2abox_0(t);
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
                  ;
                  LocalPopChoice(t_9);
                }
              else
                {
                  t = s_9;
                  {
                    t = not_null(s_18);
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
  ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
  l_19 = t;
  k_19 :
  if(match_cons(l_19, sym__2))
    {
      m_19 = ATgetArgument(l_19, 0);
      n_19 = ATgetArgument(l_19, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_19)), not_null(m_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm v_19 = NULL,w_19 = NULL,x_19 = NULL,y_19 = NULL,z_19 = NULL;
  v_19 = t;
  t_19 :
  if(match_cons(v_19, sym__2))
    {
      w_19 = ATgetArgument(v_19, 0);
      x_19 = ATgetArgument(v_19, 1);
      u_19 :
      if(((ATgetType(x_19) == AT_LIST) && !(ATisEmpty(x_19))))
        {
          y_19 = ATgetFirst((ATermList) x_19);
          z_19 = (ATerm) ATgetNext((ATermList) x_19);
          {
            ATerm d_20 = NULL;
            ATerm e_20 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), term_k_7);
            {
              t = add_0(t);
              {
                e_20 = t;
                if(((d_20 != NULL) && (d_20 != e_20)))
                  _fail(e_20);
                else
                  d_20 = e_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(w_19), not_null(y_19)), (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(z_19)));
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
  ATerm k_20 = NULL,l_20 = NULL,m_20 = NULL;
  k_20 = t;
  i_20 :
  if(match_cons(k_20, sym__2))
    {
      l_20 = ATgetArgument(k_20, 0);
      m_20 = ATgetArgument(k_20, 1);
      j_20 :
      if(((ATgetType(m_20) == AT_LIST) && ATisEmpty(m_20)))
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
ATerm genzip_4 (ATerm t, ATerm m_84 (ATerm), ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm))
{
  ATerm p_20 (ATerm t)
  {
    ATerm b_10 = t;
    int c_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_84(t);
        ;
        LocalPopChoice(c_10);
      }
    else
      {
        t = b_10;
        {
          t = n_84(t);
          {
            t = _2(t, p_84, p_20);
            t = o_84(t);
          }
        }
      }
    return(t);
  }
  t = p_20(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm r_20 = NULL;
  r_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_k_7, not_null(r_20));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm y_84 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, y_84);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm x_20 = NULL;
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  x_20 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_d_10, not_null(x_20));
    {
      t = table_get_0(t);
      {
        z_20 = t;
        w_20 :
        if(match_cons(z_20, sym__2))
          {
            a_21 = ATgetArgument(z_20, 0);
            b_21 = ATgetArgument(z_20, 1);
            {
              ATerm e_10;
              e_10 = t;
              {
                t = not_null(a_21);
                {
                  t = path_to_string_0(t);
                  {
                    ATerm f_1 (ATerm t)
                    {
                      t = term_f_10;
                      return(t);
                    }
                    t = notify_1(t, f_1);
                  }
                }
              }
              t = e_10;
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
ATerm try_pp_table_get_0 (ATerm t)
{
  ATerm h_21 = NULL;
  h_21 = t;
  {
    ATerm g_10 = t;
    int h_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0(t);
        ;
        LocalPopChoice(h_10);
      }
    else
      {
        t = g_10;
        {
          ATerm g_1 (ATerm t)
          {
            t = term_i_10;
            return(t);
          }
          t = debug_1(t, g_1);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm trm2abox_appl_0 (ATerm t)
{
  ATerm t_21 = NULL;
  ATerm v_21 = NULL,w_21 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL;
  t_21 = t;
  {
    ATerm x_21 = NULL;
    ATerm z_21 = NULL,a_22 = NULL,b_22 = NULL;
    t = not_null(t_21);
    {
      x_21 = t;
      {
        t = SSL_explode_term(not_null(x_21));
        {
          z_21 = t;
          n_21 :
          if(match_cons(z_21, sym__2))
            {
              a_22 = ATgetArgument(z_21, 0);
              b_22 = ATgetArgument(z_21, 1);
              {
                if(((v_21 != NULL) && (v_21 != a_22)))
                  _fail(a_22);
                else
                  v_21 = a_22;
                if(((w_21 != NULL) && (w_21 != b_22)))
                  _fail(b_22);
                else
                  w_21 = b_22;
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
      t = (ATerm) ATinsert(ATempty, not_null(v_21));
      {
        t = try_pp_table_get_0(t);
        {
          c_22 = t;
          s_21 :
          if(match_cons(c_22, sym__2))
            {
              d_22 = ATgetArgument(c_22, 0);
              e_22 = ATgetArgument(c_22, 1);
              {
                ATerm m_22 = NULL;
                t = not_null(w_21);
                {
                  ATerm h_1 (ATerm t)
                  {
                    ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
                    h_22 = t;
                    q_21 :
                    if(match_cons(h_22, sym__2))
                      {
                        i_22 = ATgetArgument(h_22, 0);
                        j_22 = ATgetArgument(h_22, 1);
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(i_22), (ATerm)ATinsert(ATempty, not_null(v_21)), not_null(j_22));
                          t = arg2abox_0(t);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = nzip_1(t, h_1);
                  {
                    m_22 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(e_22), not_null(m_22));
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
  ATerm y_22 = NULL;
  ATerm a_23 = NULL,b_23 = NULL;
  y_22 = t;
  {
    ATerm j_10;
    j_10 = t;
    {
      ATerm c_23 = NULL;
      ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
      t = not_null(y_22);
      {
        c_23 = t;
        {
          t = SSL_explode_term(not_null(c_23));
          {
            e_23 = t;
            x_22 :
            if(match_cons(e_23, sym__2))
              {
                f_23 = ATgetArgument(e_23, 0);
                g_23 = ATgetArgument(e_23, 1);
                {
                  if(((a_23 != NULL) && (a_23 != f_23)))
                    _fail(f_23);
                  else
                    a_23 = f_23;
                  if(((b_23 != NULL) && (b_23 != g_23)))
                    _fail(g_23);
                  else
                    b_23 = g_23;
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
    t = j_10;
    {
      t = is_list_0(t);
      t = map_1(t, trm2abox_0);
    }
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm l_23 = NULL;
  l_23 = t;
  t = SSL_is_int(not_null(l_23));
  return(t);
}
ATerm trm2abox_int_0 (ATerm t)
{
  ATerm p_23 = NULL;
  t = is_int_0(t);
  {
    ATerm q_23 = NULL;
    t = int_to_string_0(t);
    {
      q_23 = t;
      if(((p_23 != NULL) && (p_23 != q_23)))
        _fail(q_23);
      else
        p_23 = q_23;
    }
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(p_23));
  }
  return(t);
}
ATerm trm2abox_string_0 (ATerm t)
{
  ATerm t_23 = NULL;
  t = is_string_0(t);
  {
    ATerm u_23 = NULL;
    u_23 = t;
    if(((t_23 != NULL) && (t_23 != u_23)))
      _fail(u_23);
    else
      t_23 = u_23;
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(t_23));
  }
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm k_10 = t;
  int l_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = trm2abox_string_0(t);
      ;
      LocalPopChoice(l_10);
    }
  else
    {
      t = k_10;
      {
        ATerm m_10 = t;
        int v_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = trm2abox_int_0(t);
            ;
            LocalPopChoice(v_10);
          }
        else
          {
            t = m_10;
            {
              ATerm w_10 = t;
              int x_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0(t);
                  ;
                  LocalPopChoice(x_10);
                }
              else
                {
                  t = w_10;
                  {
                    ATerm z_10 = t;
                    int e_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0(t);
                        ;
                        LocalPopChoice(e_11);
                      }
                    else
                      {
                        t = z_10;
                        {
                          ATerm x_23 = NULL;
                          ATerm l_26 = NULL;
                          l_26 = t;
                          if(((x_23 != NULL) && (x_23 != l_26)))
                            _fail(l_26);
                          else
                            x_23 = l_26;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_23)), term_f_11);
                            t = fatal_error_0(t);
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
ATerm close_file_0 (ATerm t)
{
  ATerm o_26 = NULL;
  o_26 = t;
  t = SSL_close_file(not_null(o_26));
  return(t);
}
ATerm write_in_baf_to_stream_0 (ATerm t)
{
  ATerm e_27 = NULL,f_27 = NULL,g_27 = NULL,j_27 = NULL;
  e_27 = t;
  x_26 :
  if(match_cons(e_27, sym__2))
    {
      f_27 = ATgetArgument(e_27, 0);
      j_27 = ATgetArgument(e_27, 1);
      d_27 :
      if(match_cons(f_27, sym_Stream_1))
        {
          g_27 = ATgetArgument(f_27, 0);
          {
            ATerm m_27 = NULL;
            t = SSL_write_term_to_stream_baf(not_null(g_27), not_null(j_27));
            {
              ATerm o_27 = NULL;
              o_27 = t;
              if(((m_27 != NULL) && (m_27 != o_27)))
                _fail(o_27);
              else
                m_27 = o_27;
              t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(m_27));
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
ATerm WriteToFile_1 (ATerm t, ATerm z_97 (ATerm))
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym__2))
    {
      w_27 = ATgetArgument(v_27, 0);
      x_27 = ATgetArgument(v_27, 1);
      {
        ATerm a_28 = NULL,m_28 = NULL;
        t = not_null(w_27);
        {
          ATerm b_28 = NULL;
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_28), term_g_11);
            {
              t = open_stream_0(t);
              {
                ATerm n_28 = NULL;
                n_28 = t;
                if(((m_28 != NULL) && (m_28 != n_28)))
                  _fail(n_28);
                else
                  m_28 = n_28;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_28), not_null(x_27));
                  {
                    t = z_97(t);
                    {
                      t = fclose_0(t);
                      t = not_null(x_27);
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
ATerm assert_1 (ATerm t, ATerm e_93 (ATerm))
{
  ATerm z_28 = NULL,a_29 = NULL,b_29 = NULL;
  z_28 = t;
  y_28 :
  if(match_cons(z_28, sym__2))
    {
      a_29 = ATgetArgument(z_28, 0);
      b_29 = ATgetArgument(z_28, 1);
      {
        ATerm e_29 = NULL,f_29 = NULL,l_29 = NULL;
        ATerm h_11;
        h_11 = t;
        {
          ATerm m_29 = NULL;
          ATerm n_29 = NULL,o_29 = NULL,p_29 = NULL;
          t = e_93(t);
          {
            m_29 = t;
            {
              if(((e_29 != NULL) && (e_29 != m_29)))
                _fail(m_29);
              else
                e_29 = m_29;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(e_29), not_null(a_29), not_null(b_29));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_11 = t;
                    int j_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), term_k_11);
                        t = table_get_0(t);
                        ;
                        LocalPopChoice(j_11);
                      }
                    else
                      {
                        t = i_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      n_29 = t;
                      x_28 :
                      if(((ATgetType(n_29) == AT_LIST) && !(ATisEmpty(n_29))))
                        {
                          o_29 = ATgetFirst((ATermList) n_29);
                          p_29 = (ATerm) ATgetNext((ATermList) n_29);
                          {
                            if(((f_29 != NULL) && (f_29 != o_29)))
                              _fail(o_29);
                            else
                              f_29 = o_29;
                            {
                              if(((l_29 != NULL) && (l_29 != p_29)))
                                _fail(p_29);
                              else
                                l_29 = p_29;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(e_29), term_k_11, (ATerm) ATinsert(CheckATermList(not_null(l_29)), (ATerm) ATinsert(CheckATermList(not_null(f_29)), not_null(a_29))));
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
        t = h_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm s_97 (ATerm))
{
  ATerm l_11;
  l_11 = t;
  {
    t = s_97(t);
    {
      ATerm i_1 (ATerm t)
      {
        t = term_m_11;
        return(t);
      }
      t = debug_1(t, i_1);
    }
  }
  t = l_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  ATerm g_30 (ATerm t)
  {
    ATerm p_11 = t;
    if((PushChoice() == 0))
      {
        ATerm b_30 = NULL,c_30 = NULL,d_30 = NULL;
        b_30 = t;
        v_29 :
        if(match_cons(b_30, sym__2))
          {
            c_30 = ATgetArgument(b_30, 0);
            d_30 = ATgetArgument(b_30, 1);
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
        t = p_11;
      }
    {
      ATerm j_1 (ATerm t)
      {
        t = term_q_11;
        return(t);
      }
      t = obsolete_1(t, j_1);
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_29), term_g_11);
        t = open_file_0(t);
      }
    }
    return(t);
  }
  ATerm h_30 (ATerm t)
  {
    t = SSL_open_file(not_null(y_29), not_null(z_29));
    return(t);
  }
  x_29 = t;
  w_29 :
  if(match_cons(x_29, sym__2))
    {
      y_29 = ATgetArgument(x_29, 0);
      z_29 = ATgetArgument(x_29, 1);
      {
        ATerm r_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = g_30(t);
            ;
            LocalPopChoice(t_11);
          }
        else
          {
            t = r_11;
            t = h_30(t);
          }
      }
    }
  else
    {
      t = g_30(t);
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
  ATerm j_30 = NULL;
  ATerm k_30 = NULL;
  t = term_n_6;
  {
    t = new_0(t);
    {
      k_30 = t;
      if(((j_30 != NULL) && (j_30 != k_30)))
        _fail(k_30);
      else
        j_30 = k_30;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_30), term_u_11);
    {
      t = conc_strings_0(t);
      {
        ATerm k_1 (ATerm t)
        {
          t = file_exists_0(t);
          t = new_file_0(t);
          return(t);
        }
        t = try_1(t, k_1);
      }
    }
  }
  return(t);
}
ATerm xtc_new_file_0 (ATerm t)
{
  ATerm o_30 = NULL;
  t = new_file_0(t);
  {
    o_30 = t;
    {
      ATerm w_11;
      w_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), term_g_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), term_n_6);
            {
              ATerm l_1 (ATerm t)
              {
                t = term_x_11;
                return(t);
              }
              t = assert_1(t, l_1);
            }
          }
        }
      }
      t = w_11;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm a_31 = NULL;
  ATerm c_31 = NULL;
  a_31 = t;
  {
    ATerm d_31 = NULL;
    t = xtc_new_file_0(t);
    {
      d_31 = t;
      {
        if(((c_31 != NULL) && (c_31 != d_31)))
          _fail(d_31);
        else
          c_31 = d_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_31), not_null(a_31));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(c_31);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(c_31));
  }
  return(t);
}
ATerm access_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym__2))
    {
      l_31 = ATgetArgument(k_31, 0);
      m_31 = ATgetArgument(k_31, 1);
      t = SSL_access(not_null(l_31), not_null(m_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm u_31 = NULL;
  ATerm v_31 = NULL;
  v_31 = t;
  if(((u_31 != NULL) && (u_31 != v_31)))
    _fail(v_31);
  else
    u_31 = v_31;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(u_31), (ATerm) ATinsert(ATempty, term_y_11));
    t = access_0(t);
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym_stdin_0))
    {
      ATerm e_32 = NULL;
      ATerm f_32 = NULL;
      t = term_g_12;
      {
        t = ReadFromFile_0(t);
        {
          f_32 = t;
          if(((e_32 != NULL) && (e_32 != f_32)))
            _fail(f_32);
          else
            e_32 = f_32;
        }
      }
      t = not_null(e_32);
    }
  else
    {
      if(match_cons(c_32, sym_FILE_1))
        {
          d_32 = ATgetArgument(c_32, 0);
          {
            ATerm h_32 = NULL;
            ATerm i_32 = NULL;
            t = not_null(d_32);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  i_32 = t;
                  if(((h_32 != NULL) && (h_32 != i_32)))
                    _fail(i_32);
                  else
                    h_32 = i_32;
                }
              }
            }
            t = not_null(h_32);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm v_77 (ATerm))
{
  t = read_from_0(t);
  {
    t = v_77(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t_32 :
  if(match_cons(u_32, sym__2))
    {
      v_32 = ATgetArgument(u_32, 0);
      w_32 = ATgetArgument(u_32, 1);
      t = SSL_copy(not_null(v_32), not_null(w_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  d_33 :
  if(match_cons(e_33, sym_stderr_0))
    {
      ATerm m_33 = NULL,o_33 = NULL;
      ATerm h_12;
      h_12 = t;
      {
        ATerm n_33 = NULL;
        t = SSLgetAnnotations(not_null(e_33));
        {
          n_33 = t;
          if(((m_33 != NULL) && (m_33 != n_33)))
            _fail(n_33);
          else
            m_33 = n_33;
        }
      }
      t = h_12;
      {
        ATerm p_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(m_33));
        {
          p_33 = t;
          if(((o_33 != NULL) && (o_33 != p_33)))
            _fail(p_33);
          else
            o_33 = p_33;
        }
        t = not_null(o_33);
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
  ATerm x_33 = NULL;
  x_33 = t;
  w_33 :
  if(match_cons(x_33, sym_stdout_0))
    {
      ATerm z_33 = NULL,b_34 = NULL;
      ATerm i_12;
      i_12 = t;
      {
        ATerm a_34 = NULL;
        t = SSLgetAnnotations(not_null(x_33));
        {
          a_34 = t;
          if(((z_33 != NULL) && (z_33 != a_34)))
            _fail(a_34);
          else
            z_33 = a_34;
        }
      }
      t = i_12;
      {
        ATerm c_34 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(z_33));
        {
          c_34 = t;
          if(((b_34 != NULL) && (b_34 != c_34)))
            _fail(c_34);
          else
            b_34 = c_34;
        }
        t = not_null(b_34);
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
  ATerm o_34 = NULL,p_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym_FILE_1))
    {
      p_34 = ATgetArgument(o_34, 0);
      {
        ATerm j_12 = t;
        int k_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_34 = NULL;
            ATerm s_34 = NULL;
            t = m_0(t);
            {
              s_34 = t;
              {
                if(((r_34 != NULL) && (r_34 != s_34)))
                  _fail(s_34);
                else
                  r_34 = s_34;
                {
                  ATerm l_12 = t;
                  int m_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(m_12);
                    }
                  else
                    {
                      t = l_12;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_34), not_null(r_34));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_34));
            ;
            LocalPopChoice(k_12);
          }
        else
          {
            t = j_12;
            {
              ATerm n_12 = t;
              int o_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_34 = NULL;
                  ATerm v_34 = NULL;
                  t = m_0(t);
                  {
                    v_34 = t;
                    {
                      if(((u_34 != NULL) && (u_34 != v_34)))
                        _fail(v_34);
                      else
                        u_34 = v_34;
                      {
                        ATerm p_12 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm s_12 = t;
                            int t_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(t_12);
                              }
                            else
                              {
                                t = s_12;
                                {
                                  ATerm d_13 = t;
                                  int e_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(e_13);
                                    }
                                  else
                                    {
                                      t = d_13;
                                      {
                                        ATerm w_34 = NULL;
                                        w_34 = t;
                                        if(((p_34 != NULL) && (p_34 != w_34)))
                                          _fail(w_34);
                                        else
                                          p_34 = w_34;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = p_12;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_34), not_null(u_34));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_34));
                  ;
                  LocalPopChoice(o_12);
                }
              else
                {
                  t = n_12;
                  {
                    ATerm y_34 = NULL;
                    t = m_0(t);
                    {
                      y_34 = t;
                      if(((p_34 != NULL) && (p_34 != y_34)))
                        _fail(y_34);
                      else
                        p_34 = y_34;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_34));
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
ATerm table_pop_0 (ATerm t)
{
  ATerm o_35 = NULL,p_35 = NULL,q_35 = NULL;
  o_35 = t;
  n_35 :
  if(match_cons(o_35, sym__2))
    {
      p_35 = ATgetArgument(o_35, 0);
      q_35 = ATgetArgument(o_35, 1);
      {
        ATerm f_13;
        f_13 = t;
        {
          ATerm t_35 = NULL;
          ATerm u_35 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_35), not_null(q_35));
          {
            ATerm i_13 = t;
            int j_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(j_13);
              }
            else
              {
                t = i_13;
                t = (ATerm) ATempty;
              }
            {
              u_35 = t;
              if(((t_35 != NULL) && (t_35 != u_35)))
                _fail(u_35);
              else
                t_35 = u_35;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_35), not_null(q_35), not_null(t_35));
            t = table_put_0(t);
          }
        }
        t = f_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm b_93 (ATerm))
{
  ATerm b_36 = NULL,j_36 = NULL,k_36 = NULL;
  ATerm k_13;
  k_13 = t;
  {
    ATerm l_36 = NULL;
    ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
    t = b_93(t);
    {
      l_36 = t;
      {
        if(((k_36 != NULL) && (k_36 != l_36)))
          _fail(l_36);
        else
          k_36 = l_36;
        {
          ATerm l_13 = t;
          int m_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_36), term_k_11);
              t = table_get_0(t);
              ;
              LocalPopChoice(m_13);
            }
          else
            {
              t = l_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            m_36 = t;
            a_36 :
            if(((ATgetType(m_36) == AT_LIST) && !(ATisEmpty(m_36))))
              {
                n_36 = ATgetFirst((ATermList) m_36);
                o_36 = (ATerm) ATgetNext((ATermList) m_36);
                {
                  if(((j_36 != NULL) && (j_36 != n_36)))
                    _fail(n_36);
                  else
                    j_36 = n_36;
                  {
                    if(((b_36 != NULL) && (b_36 != o_36)))
                      _fail(o_36);
                    else
                      b_36 = o_36;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(k_36), term_k_11, not_null(b_36));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(j_36);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              ATerm p_36 = NULL;
                              p_36 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_36), not_null(p_36));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, m_1);
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
  t = k_13;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm v_36 = NULL;
  v_36 = t;
  t = SSL_remove(not_null(v_36));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm i_81 (ATerm), ATerm j_81 (ATerm))
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_81(t);
      t = j_81(t);
      ;
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        t = j_81(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm a_93 (ATerm))
{
  ATerm a_37 = NULL;
  ATerm w_13;
  w_13 = t;
  {
    ATerm b_37 = NULL;
    ATerm c_37 = NULL;
    t = a_93(t);
    {
      b_37 = t;
      {
        if(((a_37 != NULL) && (a_37 != b_37)))
          _fail(b_37);
        else
          a_37 = b_37;
        {
          ATerm d_37 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_37), term_k_11);
          {
            ATerm x_13 = t;
            int y_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(y_13);
              }
            else
              {
                t = x_13;
                t = (ATerm) ATempty;
              }
            {
              d_37 = t;
              if(((c_37 != NULL) && (c_37 != d_37)))
                _fail(d_37);
              else
                c_37 = d_37;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(a_37), term_k_11, (ATerm) ATinsert(CheckATermList(not_null(c_37)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = w_13;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm w_76 (ATerm))
{
  ATerm i_37 = NULL,j_37 = NULL;
  ATerm n_1 (ATerm t)
  {
    t = term_x_11;
    return(t);
  }
  t = begin_scope_1(t, n_1);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm z_13;
      z_13 = t;
      {
        ATerm k_37 = NULL,l_37 = NULL,m_37 = NULL;
        ATerm i_14 = t;
        int j_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_k_14;
            t = table_get_0(t);
            ;
            LocalPopChoice(j_14);
          }
        else
          {
            t = i_14;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          k_37 = t;
          h_37 :
          if(((ATgetType(k_37) == AT_LIST) && !(ATisEmpty(k_37))))
            {
              l_37 = ATgetFirst((ATermList) k_37);
              m_37 = (ATerm) ATgetNext((ATermList) k_37);
              {
                if(((j_37 != NULL) && (j_37 != l_37)))
                  _fail(l_37);
                else
                  j_37 = l_37;
                {
                  if(((i_37 != NULL) && (i_37 != m_37)))
                    _fail(m_37);
                  else
                    i_37 = m_37;
                  {
                    t = not_null(j_37);
                    {
                      ATerm p_1 (ATerm t)
                      {
                        t = try_1(t, remove_file_0);
                        return(t);
                      }
                      t = map_1(t, p_1);
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
      t = z_13;
      {
        ATerm q_1 (ATerm t)
        {
          t = term_x_11;
          return(t);
        }
        t = end_scope_1(t, q_1);
      }
      return(t);
    }
    t = restore_always_2(t, w_76, o_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm x_76 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm l_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_37 = NULL;
        ATerm q_37 = NULL;
        t = term_p_14;
        {
          t = get_config_0(t);
          {
            q_37 = t;
            if(((p_37 != NULL) && (p_37 != q_37)))
              _fail(q_37);
            else
              p_37 = q_37;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(p_37));
        ;
        LocalPopChoice(o_14);
      }
    else
      {
        t = l_14;
        t = term_g_12;
      }
    {
      t = x_76(t);
      {
        ATerm s_1 (ATerm t)
        {
          ATerm q_14 = t;
          int r_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_s_14;
              t = get_config_0(t);
              ;
              LocalPopChoice(r_14);
            }
          else
            {
              t = q_14;
              t = term_g_15;
            }
          return(t);
        }
        t = copy_to_1(t, s_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, r_1);
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
  ATerm t_37 = NULL;
  t_37 = t;
  t = SSL_int_to_string(not_null(t_37));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  e_38 :
  if(match_cons(f_38, sym_Path1_1))
    {
      g_38 = ATgetArgument(f_38, 0);
      t = not_null(g_38);
    }
  else
    {
      if(match_cons(f_38, sym_Path_2))
        {
          g_38 = ATgetArgument(f_38, 0);
          h_38 = ATgetArgument(f_38, 1);
          {
            ATerm p_38 = NULL,x_38 = NULL;
            t = not_null(h_38);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
                q_38 = t;
                c_38 :
                if(match_cons(q_38, sym_selector_2))
                  {
                    r_38 = ATgetArgument(q_38, 0);
                    s_38 = ATgetArgument(q_38, 1);
                    {
                      ATerm v_38 = NULL;
                      ATerm w_38 = NULL;
                      t = not_null(r_38);
                      {
                        t = int_to_string_0(t);
                        {
                          w_38 = t;
                          if(((v_38 != NULL) && (v_38 != w_38)))
                            _fail(w_38);
                          else
                            v_38 = w_38;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(s_38)), term_i_15), not_null(v_38)), term_h_15);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, t_1);
              {
                t = concat_0(t);
                {
                  x_38 = t;
                  {
                    if(((p_38 != NULL) && (p_38 != x_38)))
                      _fail(x_38);
                    else
                      p_38 = x_38;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(p_38)), not_null(g_38));
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
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym_Path1_1))
    {
      o_39 = ATgetArgument(n_39, 0);
      t = (ATerm) ATinsert(ATempty, not_null(o_39));
    }
  else
    {
      if(match_cons(n_39, sym_Path_2))
        {
          o_39 = ATgetArgument(n_39, 0);
          p_39 = ATgetArgument(n_39, 1);
          {
            ATerm x_39 = NULL,f_40 = NULL;
            t = not_null(p_39);
            {
              ATerm u_1 (ATerm t)
              {
                ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
                y_39 = t;
                k_39 :
                if(match_cons(y_39, sym_selector_2))
                  {
                    z_39 = ATgetArgument(y_39, 0);
                    a_40 = ATgetArgument(y_39, 1);
                    t = not_null(z_39);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, u_1);
              {
                f_40 = t;
                {
                  if(((x_39 != NULL) && (x_39 != f_40)))
                    _fail(f_40);
                  else
                    x_39 = f_40;
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_39)), not_null(o_39));
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
  ATerm o_40 = NULL,p_40 = NULL,q_40 = NULL;
  o_40 = t;
  n_40 :
  if(match_cons(o_40, sym_PP_Entry_2))
    {
      p_40 = ATgetArgument(o_40, 0);
      q_40 = ATgetArgument(o_40, 1);
      {
        ATerm t_40 = NULL,v_40 = NULL;
        ATerm u_40 = NULL;
        t = not_null(p_40);
        {
          t = mk_key_0(t);
          {
            u_40 = t;
            if(((t_40 != NULL) && (t_40 != u_40)))
              _fail(u_40);
            else
              t_40 = u_40;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_d_10, not_null(t_40), (ATerm) ATmakeAppl(sym__2, not_null(p_40), not_null(q_40)));
          {
            t = table_put_0(t);
            {
              ATerm w_40 = NULL;
              t = not_null(p_40);
              {
                t = path_to_string_0(t);
                {
                  w_40 = t;
                  if(((v_40 != NULL) && (v_40 != w_40)))
                    _fail(w_40);
                  else
                    v_40 = w_40;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(v_40), not_null(q_40));
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = term_j_15;
                    return(t);
                  }
                  t = notify_1(t, v_1);
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
ATerm selector_2 (ATerm t, ATerm n_71 (ATerm), ATerm o_71 (ATerm))
{
  ATerm n_41 = NULL,o_41 = NULL,p_41 = NULL;
  n_41 = t;
  m_41 :
  if(match_cons(n_41, sym_selector_2))
    {
      o_41 = ATgetArgument(n_41, 0);
      p_41 = ATgetArgument(n_41, 1);
      {
        ATerm t_41 = NULL,v_41 = NULL;
        ATerm u_41 = NULL;
        t = SSLgetAnnotations(not_null(n_41));
        {
          u_41 = t;
          if(((t_41 != NULL) && (t_41 != u_41)))
            _fail(u_41);
          else
            t_41 = u_41;
        }
        {
          t = not_null(o_41);
          {
            ATerm x_41 = NULL;
            t = n_71(t);
            {
              v_41 = t;
              {
                t = not_null(p_41);
                {
                  ATerm z_41 = NULL;
                  t = o_71(t);
                  {
                    x_41 = t;
                    {
                      ATerm a_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(v_41), not_null(x_41)), not_null(t_41));
                      {
                        a_42 = t;
                        if(((z_41 != NULL) && (z_41 != a_42)))
                          _fail(a_42);
                        else
                          z_41 = a_42;
                      }
                      t = not_null(z_41);
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
  ATerm q_42 = NULL,r_42 = NULL,s_42 = NULL,x_42 = NULL,y_42 = NULL;
  q_42 = t;
  m_42 :
  if(((ATgetType(q_42) == AT_LIST) && !(ATisEmpty(q_42))))
    {
      r_42 = ATgetFirst((ATermList) q_42);
      s_42 = (ATerm) ATgetNext((ATermList) q_42);
      n_42 :
      if(match_int(r_42, 92))
        {
          o_42 :
          if(((ATgetType(s_42) == AT_LIST) && !(ATisEmpty(s_42))))
            {
              x_42 = ATgetFirst((ATermList) s_42);
              y_42 = (ATerm) ATgetNext((ATermList) s_42);
              p_42 :
              if(match_int(x_42, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_42)), term_k_15);
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
  ATerm g_43 = NULL,h_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  g_43 = t;
  c_43 :
  if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
    {
      h_43 = ATgetFirst((ATermList) g_43);
      i_43 = (ATerm) ATgetNext((ATermList) g_43);
      d_43 :
      if(match_int(h_43, 92))
        {
          e_43 :
          if(((ATgetType(i_43) == AT_LIST) && !(ATisEmpty(i_43))))
            {
              j_43 = ATgetFirst((ATermList) i_43);
              k_43 = (ATerm) ATgetNext((ATermList) i_43);
              f_43 :
              if(match_int(j_43, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_43)), term_p_15);
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
  ATerm y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL;
  y_43 = t;
  q_43 :
  if(((ATgetType(y_43) == AT_LIST) && !(ATisEmpty(y_43))))
    {
      z_43 = ATgetFirst((ATermList) y_43);
      a_44 = (ATerm) ATgetNext((ATermList) y_43);
      r_43 :
      if(match_int(z_43, 92))
        {
          s_43 :
          if(((ATgetType(a_44) == AT_LIST) && !(ATisEmpty(a_44))))
            {
              b_44 = ATgetFirst((ATermList) a_44);
              c_44 = (ATerm) ATgetNext((ATermList) a_44);
              x_43 :
              if(match_int(b_44, 92))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_44)), term_q_15);
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
  ATerm k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL;
  k_44 = t;
  g_44 :
  if(((ATgetType(k_44) == AT_LIST) && !(ATisEmpty(k_44))))
    {
      l_44 = ATgetFirst((ATermList) k_44);
      m_44 = (ATerm) ATgetNext((ATermList) k_44);
      h_44 :
      if(match_int(l_44, 92))
        {
          i_44 :
          if(((ATgetType(m_44) == AT_LIST) && !(ATisEmpty(m_44))))
            {
              n_44 = ATgetFirst((ATermList) m_44);
              o_44 = (ATerm) ATgetNext((ATermList) m_44);
              j_44 :
              if(match_int(n_44, 34))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_44)), term_r_15);
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
  ATerm s_15 = t;
  int b_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_double_quote_0(t);
      ;
      LocalPopChoice(b_16);
    }
  else
    {
      t = s_15;
      {
        ATerm c_16 = t;
        int d_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UnEscape_backslash_0(t);
            ;
            LocalPopChoice(d_16);
          }
        else
          {
            t = c_16;
            {
              ATerm e_16 = t;
              int j_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UnEscape_linefeed_0(t);
                  ;
                  LocalPopChoice(j_16);
                }
              else
                {
                  t = e_16;
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
    ATerm k_16 = t;
    int l_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, unescape_chars_0);
        ;
        LocalPopChoice(l_16);
      }
    else
      {
        t = k_16;
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
ATerm at_last_1 (ATerm t, ATerm l_83 (ATerm))
{
  ATerm s_44 (ATerm t)
  {
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = l_83(t);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
        t = Cons_2(t, _id, s_44);
      }
    return(t);
  }
  t = s_44(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
  v_44 = t;
  u_44 :
  if(((ATgetType(v_44) == AT_LIST) && !(ATisEmpty(v_44))))
    {
      w_44 = ATgetFirst((ATermList) v_44);
      x_44 = (ATerm) ATgetNext((ATermList) v_44);
      t = not_null(x_44);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,f_45 = NULL;
  d_45 = t;
  b_45 :
  if(((ATgetType(d_45) == AT_LIST) && !(ATisEmpty(d_45))))
    {
      e_45 = ATgetFirst((ATermList) d_45);
      f_45 = (ATerm) ATgetNext((ATermList) d_45);
      c_45 :
      if(((ATgetType(f_45) == AT_LIST) && ATisEmpty(f_45)))
        {
          t = not_null(e_45);
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
  ATerm v_16 = t;
  int w_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(w_16);
    }
  else
    {
      t = v_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm l_45 = NULL,m_45 = NULL,n_45 = NULL;
  l_45 = t;
  k_45 :
  if(((ATgetType(l_45) == AT_LIST) && !(ATisEmpty(l_45))))
    {
      m_45 = ATgetFirst((ATermList) l_45);
      n_45 = (ATerm) ATgetNext((ATermList) l_45);
      t = not_null(m_45);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm n_91 (ATerm))
{
  ATerm x_16;
  x_16 = t;
  {
    t = Hd_0(t);
    t = n_91(t);
  }
  t = x_16;
  {
    ATerm a_17;
    a_17 = t;
    {
      t = last_0(t);
      t = n_91(t);
    }
    t = a_17;
    {
      t = Tl_0(t);
      t = init_0(t);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm w_1 (ATerm t)
  {
    ATerm r_45 = NULL;
    r_45 = t;
    q_45 :
    if(!(match_int(r_45, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, w_1);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm y_91 (ATerm))
{
  t = explode_string_0(t);
  {
    t = y_91(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, un_double_quote_chars_0);
  return(t);
}
ATerm S_1 (ATerm t, ATerm s_71 (ATerm))
{
  ATerm x_45 = NULL,y_45 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym_S_1))
    {
      y_45 = ATgetArgument(x_45, 0);
      {
        ATerm b_46 = NULL,d_46 = NULL;
        ATerm c_46 = NULL;
        t = SSLgetAnnotations(not_null(x_45));
        {
          c_46 = t;
          if(((b_46 != NULL) && (b_46 != c_46)))
            _fail(c_46);
          else
            b_46 = c_46;
        }
        {
          t = not_null(y_45);
          {
            ATerm f_46 = NULL;
            t = s_71(t);
            {
              d_46 = t;
              {
                ATerm g_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(d_46)), not_null(b_46));
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
ATerm SOpt_2 (ATerm t, ATerm e_73 (ATerm), ATerm f_73 (ATerm))
{
  ATerm r_46 = NULL,s_46 = NULL,t_46 = NULL;
  r_46 = t;
  q_46 :
  if(match_cons(r_46, sym_SOpt_2))
    {
      s_46 = ATgetArgument(r_46, 0);
      t_46 = ATgetArgument(r_46, 1);
      {
        ATerm x_46 = NULL,z_46 = NULL;
        ATerm y_46 = NULL;
        t = SSLgetAnnotations(not_null(r_46));
        {
          y_46 = t;
          if(((x_46 != NULL) && (x_46 != y_46)))
            _fail(y_46);
          else
            x_46 = y_46;
        }
        {
          t = not_null(s_46);
          {
            ATerm b_47 = NULL;
            t = e_73(t);
            {
              z_46 = t;
              {
                t = not_null(t_46);
                {
                  ATerm d_47 = NULL;
                  t = f_73(t);
                  {
                    b_47 = t;
                    {
                      ATerm e_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(z_46), not_null(b_47)), not_null(x_46));
                      {
                        e_47 = t;
                        if(((d_47 != NULL) && (d_47 != e_47)))
                          _fail(e_47);
                        else
                          d_47 = e_47;
                      }
                      t = not_null(d_47);
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
ATerm Arg2_2 (ATerm t, ATerm q_71 (ATerm), ATerm r_71 (ATerm))
{
  ATerm q_47 = NULL,r_47 = NULL,s_47 = NULL;
  q_47 = t;
  p_47 :
  if(match_cons(q_47, sym_Arg2_2))
    {
      r_47 = ATgetArgument(q_47, 0);
      s_47 = ATgetArgument(q_47, 1);
      {
        ATerm w_47 = NULL,y_47 = NULL;
        ATerm x_47 = NULL;
        t = SSLgetAnnotations(not_null(q_47));
        {
          x_47 = t;
          if(((w_47 != NULL) && (w_47 != x_47)))
            _fail(x_47);
          else
            w_47 = x_47;
        }
        {
          t = not_null(r_47);
          {
            ATerm a_48 = NULL;
            t = q_71(t);
            {
              y_47 = t;
              {
                t = not_null(s_47);
                {
                  ATerm c_48 = NULL;
                  t = r_71(t);
                  {
                    a_48 = t;
                    {
                      ATerm d_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, not_null(y_47), not_null(a_48)), not_null(w_47));
                      {
                        d_48 = t;
                        if(((c_48 != NULL) && (c_48 != d_48)))
                          _fail(d_48);
                        else
                          c_48 = d_48;
                      }
                      t = not_null(c_48);
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
ATerm Arg_1 (ATerm t, ATerm p_71 (ATerm))
{
  ATerm f_49 = NULL,g_49 = NULL;
  f_49 = t;
  e_49 :
  if(match_cons(f_49, sym_Arg_1))
    {
      g_49 = ATgetArgument(f_49, 0);
      {
        ATerm r_49 = NULL,t_49 = NULL;
        ATerm s_49 = NULL;
        t = SSLgetAnnotations(not_null(f_49));
        {
          s_49 = t;
          if(((r_49 != NULL) && (r_49 != s_49)))
            _fail(s_49);
          else
            r_49 = s_49;
        }
        {
          t = not_null(g_49);
          {
            ATerm v_49 = NULL;
            t = p_71(t);
            {
              t_49 = t;
              {
                ATerm w_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(t_49)), not_null(r_49));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm b_17 = t;
  int d_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1(t, string_to_int_0);
      ;
      LocalPopChoice(d_17);
    }
  else
    {
      t = b_17;
      {
        ATerm e_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg2_2(t, string_to_int_0, string_to_int_0);
            ;
            LocalPopChoice(p_17);
          }
        else
          {
            t = e_17;
            {
              ATerm q_17 = t;
              int r_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = SOpt_2(t, _id, _id);
                  ;
                  LocalPopChoice(r_17);
                }
              else
                {
                  t = q_17;
                  {
                    ATerm s_17 = t;
                    int v_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_1 (ATerm t)
                        {
                          t = un_double_quote_0(t);
                          t = unescape_0(t);
                          return(t);
                        }
                        t = S_1(t, x_1);
                        ;
                        LocalPopChoice(v_17);
                      }
                    else
                      {
                        t = s_17;
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
ATerm topdown_1 (ATerm t, ATerm b_78 (ATerm))
{
  t = b_78(t);
  {
    ATerm y_1 (ATerm t)
    {
      t = topdown_1(t, b_78);
      return(t);
    }
    t = _all(t, y_1);
  }
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm z_1 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, z_1);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm i_50 = NULL,j_50 = NULL;
  i_50 = t;
  h_50 :
  if(match_cons(i_50, sym_PP_Table_1))
    {
      j_50 = ATgetArgument(i_50, 0);
      {
        t = not_null(j_50);
        {
          t = reverse_0(t);
          {
            ATerm a_2 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, a_2);
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
  ATerm w_17;
  w_17 = t;
  {
    ATerm n_50 = NULL;
    ATerm o_50 = NULL;
    o_50 = t;
    if(((n_50 != NULL) && (n_50 != o_50)))
      _fail(o_50);
    else
      n_50 = o_50;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_17, not_null(n_50));
      t = printnl_0(t);
    }
  }
  t = w_17;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm y_17;
  y_17 = t;
  {
    t = error_0(t);
    {
      t = term_k_7;
      t = exit_0(t);
    }
  }
  t = y_17;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm q_50 (ATerm t)
  {
    ATerm d_18 = t;
    int e_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_79(t);
        ;
        LocalPopChoice(e_18);
      }
    else
      {
        t = d_18;
        t = _one(t, q_50);
      }
    return(t);
  }
  t = q_50(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  u_50 = t;
  t_50 :
  if(match_cons(u_50, sym__2))
    {
      v_50 = ATgetArgument(u_50, 0);
      w_50 = ATgetArgument(u_50, 1);
      {
        ATerm h_18;
        h_18 = t;
        {
          t = not_null(w_50);
          {
            ATerm e_2 (ATerm t)
            {
              ATerm z_50 = NULL;
              z_50 = t;
              if(((v_50 != NULL) && (v_50 != z_50)))
                _fail(z_50);
              else
                v_50 = z_50;
              return(t);
            }
            t = oncetd_1(t, e_2);
          }
        }
        t = h_18;
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
  t = term_k_18;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm e_51 = NULL;
  ATerm g_51 = NULL;
  e_51 = t;
  {
    ATerm h_51 = NULL;
    t = get_options_0(t);
    {
      h_51 = t;
      {
        if(((g_51 != NULL) && (g_51 != h_51)))
          _fail(h_51);
        else
          g_51 = h_51;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_51), not_null(g_51));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_n_6;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm i_93 (ATerm))
{
  ATerm l_18;
  l_18 = t;
  {
    t = term_n_6;
    {
      t = i_93(t);
      t = check_option_0(t);
    }
  }
  t = l_18;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm m_18 = t;
  int t_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        t = term_u_18;
        return(t);
      }
      t = has_option_1(t, f_2);
      {
        t = (ATerm) ATinsert(ATempty, term_v_18);
        t = fatal_error_0(t);
      }
      ;
      LocalPopChoice(t_18);
    }
  else
    {
      t = m_18;
      {
        t = (ATerm) ATinsert(ATempty, term_x_18);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm n_99 (ATerm))
{
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL;
  s_51 = t;
  q_51 :
  if(match_cons(s_51, sym__2))
    {
      t_51 = ATgetArgument(s_51, 0);
      u_51 = ATgetArgument(s_51, 1);
      r_51 :
      if(match_string(t_51, "in-type"))
        {
          ATerm w_51 = NULL,x_51 = NULL;
          ATerm f_19;
          f_19 = t;
          {
            ATerm y_51 = NULL;
            ATerm a_52 = NULL,b_52 = NULL,c_52 = NULL,d_52 = NULL,e_52 = NULL;
            t = not_null(u_51);
            {
              y_51 = t;
              {
                t = SSL_explode_term(not_null(y_51));
                {
                  a_52 = t;
                  n_51 :
                  if(match_cons(a_52, sym__2))
                    {
                      b_52 = ATgetArgument(a_52, 0);
                      c_52 = ATgetArgument(a_52, 1);
                      o_51 :
                      if(((ATgetType(c_52) == AT_LIST) && !(ATisEmpty(c_52))))
                        {
                          d_52 = ATgetFirst((ATermList) c_52);
                          e_52 = (ATerm) ATgetNext((ATermList) c_52);
                          p_51 :
                          if(((ATgetType(e_52) == AT_LIST) && ATisEmpty(e_52)))
                            {
                              {
                                if(((x_51 != NULL) && (x_51 != b_52)))
                                  _fail(b_52);
                                else
                                  x_51 = b_52;
                                if(((w_51 != NULL) && (w_51 != d_52)))
                                  _fail(d_52);
                                else
                                  w_51 = d_52;
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
          t = f_19;
          {
            t = not_null(x_51);
            {
              ATerm g_19 = t;
              int h_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_99(t);
                  ;
                  LocalPopChoice(h_19);
                }
              else
                {
                  t = g_19;
                  t = type_failure_0(t);
                }
            }
            t = not_null(w_51);
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
ATerm termid_check_1 (ATerm t, ATerm u_99 (ATerm))
{
  ATerm k_52 = NULL;
  ATerm m_52 = NULL;
  k_52 = t;
  {
    ATerm n_52 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_i_19, not_null(k_52));
    {
      t = InId_1(t, u_99);
      {
        n_52 = t;
        if(((m_52 != NULL) && (m_52 != n_52)))
          _fail(n_52);
        else
          m_52 = n_52;
      }
    }
    t = not_null(m_52);
  }
  return(t);
}
ATerm fclose_0 (ATerm t)
{
  ATerm t_52 = NULL,u_52 = NULL;
  ATerm a_53 (ATerm t)
  {
    t = SSL_fclose(not_null(u_52));
    return(t);
  }
  u_52 = t;
  s_52 :
  if(match_cons(u_52, sym_Stream_1))
    {
      t_52 = ATgetArgument(u_52, 0);
      {
        ATerm j_19 = t;
        int o_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_fclose(not_null(t_52));
            ;
            LocalPopChoice(o_19);
          }
        else
          {
            t = j_19;
            t = a_53(t);
          }
      }
    }
  else
    {
      t = a_53(t);
    }
  return(t);
}
ATerm read_from_stream_0 (ATerm t)
{
  ATerm d_53 = NULL,e_53 = NULL;
  d_53 = t;
  c_53 :
  if(match_cons(d_53, sym_Stream_1))
    {
      e_53 = ATgetArgument(d_53, 0);
      t = SSL_read_term_from_stream(not_null(e_53));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fopen_0 (ATerm t)
{
  ATerm k_53 = NULL,l_53 = NULL,m_53 = NULL;
  k_53 = t;
  j_53 :
  if(match_cons(k_53, sym__2))
    {
      l_53 = ATgetArgument(k_53, 0);
      m_53 = ATgetArgument(k_53, 1);
      {
        ATerm p_53 = NULL;
        t = SSL_fopen(not_null(l_53), not_null(m_53));
        {
          ATerm q_53 = NULL;
          q_53 = t;
          if(((p_53 != NULL) && (p_53 != q_53)))
            _fail(q_53);
          else
            p_53 = q_53;
          t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(p_53));
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
  ATerm u_53 = NULL;
  t = SSL_stdin_stream();
  {
    ATerm v_53 = NULL;
    v_53 = t;
    if(((u_53 != NULL) && (u_53 != v_53)))
      _fail(v_53);
    else
      u_53 = v_53;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(u_53));
  }
  return(t);
}
ATerm stdout_stream_0 (ATerm t)
{
  ATerm y_53 = NULL;
  t = SSL_stdout_stream();
  {
    ATerm z_53 = NULL;
    z_53 = t;
    if(((y_53 != NULL) && (y_53 != z_53)))
      _fail(z_53);
    else
      y_53 = z_53;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(y_53));
  }
  return(t);
}
ATerm stderr_stream_0 (ATerm t)
{
  ATerm c_54 = NULL;
  t = SSL_stderr_stream();
  {
    ATerm d_54 = NULL;
    d_54 = t;
    if(((c_54 != NULL) && (c_54 != d_54)))
      _fail(d_54);
    else
      c_54 = d_54;
    t = (ATerm) ATmakeAppl(sym_Stream_1, not_null(c_54));
  }
  return(t);
}
ATerm stdio_stream_0 (ATerm t)
{
  ATerm j_54 = NULL;
  j_54 = t;
  i_54 :
  if(match_cons(j_54, sym_stderr_0))
    {
      t = stderr_stream_0(t);
    }
  else
    {
      if(match_cons(j_54, sym_stdout_0))
        {
          t = stdout_stream_0(t);
        }
      else
        {
          if(match_cons(j_54, sym_stdin_0))
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
ATerm Fst_0 (ATerm t)
{
  ATerm t_54 = NULL;
  ATerm v_54 = NULL,w_54 = NULL;
  t_54 = t;
  {
    ATerm x_54 = NULL;
    ATerm a_55 = NULL,b_55 = NULL,c_55 = NULL,d_55 = NULL,e_55 = NULL;
    t = not_null(t_54);
    {
      x_54 = t;
      {
        t = SSL_explode_term(not_null(x_54));
        {
          a_55 = t;
          q_54 :
          if(match_cons(a_55, sym__2))
            {
              b_55 = ATgetArgument(a_55, 0);
              c_55 = ATgetArgument(a_55, 1);
              r_54 :
              if(match_string(b_55, ""))
                {
                  s_54 :
                  if(((ATgetType(c_55) == AT_LIST) && !(ATisEmpty(c_55))))
                    {
                      d_55 = ATgetFirst((ATermList) c_55);
                      e_55 = (ATerm) ATgetNext((ATermList) c_55);
                      {
                        if(((w_54 != NULL) && (w_54 != d_55)))
                          _fail(d_55);
                        else
                          w_54 = d_55;
                        if(((v_54 != NULL) && (v_54 != e_55)))
                          _fail(e_55);
                        else
                          v_54 = e_55;
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
    t = not_null(w_54);
  }
  return(t);
}
ATerm open_stream_0 (ATerm t)
{
  ATerm m_55 = NULL,n_55 = NULL,o_55 = NULL;
  m_55 = t;
  l_55 :
  if(match_cons(m_55, sym__2))
    {
      n_55 = ATgetArgument(m_55, 0);
      o_55 = ATgetArgument(m_55, 1);
      {
        ATerm p_19 = t;
        int q_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Fst_0(t);
            t = stdio_stream_0(t);
            ;
            LocalPopChoice(q_19);
          }
        else
          {
            t = p_19;
            {
              ATerm r_19 = t;
              int s_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm g_2 (ATerm t)
                  {
                    ATerm p_55 = NULL,u_55 = NULL;
                    p_55 = t;
                    k_55 :
                    if(match_cons(p_55, sym_Path_1))
                      {
                        u_55 = ATgetArgument(p_55, 0);
                        t = not_null(u_55);
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = _2(t, g_2, _id);
                  t = fopen_0(t);
                  ;
                  LocalPopChoice(s_19);
                }
              else
                {
                  t = r_19;
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
  ATerm f_56 = NULL;
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_56 = NULL;
      ATerm e_56 = NULL;
      e_56 = t;
      if(((d_56 != NULL) && (d_56 != e_56)))
        _fail(e_56);
      else
        d_56 = e_56;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_56), term_c_20);
        t = open_stream_0(t);
      }
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        ATerm h_2 (ATerm t)
        {
          t = term_f_20;
          return(t);
        }
        t = debug_1(t, h_2);
        _fail(t);
      }
    }
  {
    ATerm g_20;
    g_20 = t;
    {
      ATerm g_56 = NULL;
      t = read_from_stream_0(t);
      {
        g_56 = t;
        if(((f_56 != NULL) && (f_56 != g_56)))
          _fail(g_56);
        else
          f_56 = g_56;
      }
    }
    t = g_20;
    {
      t = fclose_0(t);
      t = not_null(f_56);
    }
  }
  return(t);
}
ATerm notify_1 (ATerm t, ATerm f_106 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = debug_1(t, f_106);
    return(t);
  }
  t = if_verbose1_1(t, i_2);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm l_56 = NULL;
  l_56 = t;
  {
    t = term_d_10;
    {
      t = table_create_0(t);
      {
        t = not_null(l_56);
        {
          ATerm j_2 (ATerm t)
          {
            ATerm k_2 (ATerm t)
            {
              t = term_h_20;
              return(t);
            }
            t = notify_1(t, k_2);
            {
              t = ReadFromFile_0(t);
              {
                ATerm l_2 (ATerm t)
                {
                  ATerm n_56 = NULL;
                  n_56 = t;
                  k_56 :
                  if(!(match_string(n_56, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, l_2);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, j_2);
        }
      }
    }
  }
  return(t);
}
ATerm get_config_p_0 (ATerm t)
{
  ATerm n_20 = t;
  int o_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_q_20;
      t = get_config_0(t);
      ;
      LocalPopChoice(o_20);
    }
  else
    {
      t = n_20;
      t = (ATerm) ATempty;
    }
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm s_20;
  s_20 = t;
  {
    t = get_config_p_0(t);
    {
      t = reverse_0(t);
      t = read_pp_tables_0(t);
    }
  }
  t = s_20;
  {
    ATerm m_2 (ATerm t)
    {
      ATerm n_2 (ATerm t)
      {
        t = trm2abox_0(t);
        {
          ATerm o_2 (ATerm t)
          {
            ATerm q_56 = NULL;
            ATerm r_56 = NULL;
            r_56 = t;
            if(((q_56 != NULL) && (q_56 != r_56)))
              _fail(r_56);
            else
              q_56 = r_56;
            t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(q_56));
            return(t);
          }
          t = if_2(t, is_list_0, o_2);
        }
        return(t);
      }
      t = xtc_io_transform_1(t, n_2);
      return(t);
    }
    t = xtc_io_1(t, m_2);
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm x_56 = NULL,y_56 = NULL,z_56 = NULL;
  x_56 = t;
  w_56 :
  if(match_cons(x_56, sym__2))
    {
      y_56 = ATgetArgument(x_56, 0);
      z_56 = ATgetArgument(x_56, 1);
      {
        ATerm c_57 = NULL;
        ATerm d_57 = NULL,f_57 = NULL;
        ATerm e_57 = NULL;
        t = not_null(y_56);
        {
          ATerm t_20 = t;
          int u_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(u_20);
            }
          else
            {
              t = t_20;
              t = (ATerm) ATempty;
            }
          {
            e_57 = t;
            if(((d_57 != NULL) && (d_57 != e_57)))
              _fail(e_57);
            else
              d_57 = e_57;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_56), not_null(d_57));
          {
            t = conc_0(t);
            {
              f_57 = t;
              if(((c_57 != NULL) && (c_57 != f_57)))
                _fail(f_57);
              else
                c_57 = f_57;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_20, not_null(y_56), not_null(c_57));
          t = table_put_0(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm pp_options_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm p_57 = NULL;
    p_57 = t;
    j_57 :
    if(!(match_string(p_57, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm y_20;
    y_20 = t;
    {
      ATerm i_58 = NULL;
      ATerm j_58 = NULL;
      j_58 = t;
      if(((i_58 != NULL) && (i_58 != j_58)))
        _fail(j_58);
      else
        i_58 = j_58;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_20, (ATerm) ATinsert(ATempty, not_null(i_58)));
        t = extend_config_0(t);
      }
    }
    t = y_20;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_c_21;
    return(t);
  }
  t = ArgOption_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm o_58 = NULL;
    o_58 = t;
    n_58 :
    if(!(match_string(o_58, "-v")))
      {
        if(!(match_string(o_58, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_e_21;
    t = set_config_0(t);
    t = term_f_21;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_g_21;
    return(t);
  }
  t = Option_3(t, s_2, t_2, u_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm t_58 = NULL;
    t_58 = t;
    p_58 :
    if(!(match_string(t_58, "-k")))
      {
        if(!(match_string(t_58, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm i_21;
    i_21 = t;
    {
      ATerm u_58 = NULL;
      ATerm v_58 = NULL;
      t = string_to_int_0(t);
      {
        v_58 = t;
        if(((u_58 != NULL) && (u_58 != v_58)))
          _fail(v_58);
        else
          u_58 = v_58;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_21, not_null(u_58));
        t = set_config_0(t);
      }
    }
    t = i_21;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_k_21;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm y_58 = NULL;
  y_58 = t;
  t = SSL_string_to_int(not_null(y_58));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        ATerm s_59 = NULL;
        s_59 = t;
        n_59 :
        if(!(match_string(s_59, "-S")))
          {
            if(!(match_string(s_59, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_p_21;
        t = set_config_0(t);
        t = term_r_21;
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_u_21;
        return(t);
      }
      t = Option_3(t, y_2, z_2, a_3);
      ;
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm y_21 = t;
        int f_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              ATerm t_59 = NULL;
              t_59 = t;
              o_59 :
              if(!(match_string(t_59, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              ATerm w_59 = NULL;
              ATerm g_22;
              g_22 = t;
              {
                ATerm u_59 = NULL;
                ATerm v_59 = NULL;
                t = string_to_int_0(t);
                {
                  v_59 = t;
                  if(((u_59 != NULL) && (u_59 != v_59)))
                    _fail(v_59);
                  else
                    u_59 = v_59;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(u_59));
                  t = set_config_0(t);
                }
              }
              t = g_22;
              {
                ATerm x_59 = NULL;
                x_59 = t;
                if(((w_59 != NULL) && (w_59 != x_59)))
                  _fail(x_59);
                else
                  w_59 = x_59;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(w_59));
              }
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              t = term_k_22;
              return(t);
            }
            t = ArgOption_3(t, b_3, c_3, d_3);
            ;
            LocalPopChoice(f_22);
          }
        else
          {
            t = y_21;
            {
              ATerm e_3 (ATerm t)
              {
                ATerm y_59 = NULL;
                y_59 = t;
                r_59 :
                if(!(match_string(y_59, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm f_3 (ATerm t)
              {
                t = term_n_22;
                t = set_config_0(t);
                t = term_o_22;
                return(t);
              }
              ATerm g_3 (ATerm t)
              {
                t = term_p_22;
                return(t);
              }
              t = Option_3(t, e_3, f_3, g_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm q_22 = t;
  int r_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      ;
      LocalPopChoice(r_22);
    }
  else
    {
      t = q_22;
      {
        ATerm s_22 = t;
        int t_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(t_22);
          }
        else
          {
            t = s_22;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm e_60 = NULL;
    e_60 = t;
    b_60 :
    if(!(match_string(e_60, "-o")))
      {
        if(!(match_string(e_60, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    ATerm h_60 = NULL;
    ATerm u_22;
    u_22 = t;
    {
      ATerm f_60 = NULL;
      ATerm g_60 = NULL;
      g_60 = t;
      if(((f_60 != NULL) && (f_60 != g_60)))
        _fail(g_60);
      else
        f_60 = g_60;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_14, not_null(f_60));
        t = set_config_0(t);
      }
    }
    t = u_22;
    {
      ATerm i_60 = NULL;
      i_60 = t;
      if(((h_60 != NULL) && (h_60 != i_60)))
        _fail(i_60);
      else
        h_60 = i_60;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_60));
    }
    return(t);
  }
  ATerm j_3 (ATerm t)
  {
    t = term_v_22;
    return(t);
  }
  t = ArgOption_3(t, h_3, i_3, j_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm w_22 = t;
  int z_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(z_22);
    }
  else
    {
      t = w_22;
      {
        ATerm k_3 (ATerm t)
        {
          ATerm m_60 = NULL;
          m_60 = t;
          l_60 :
          if(!(match_string(m_60, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          t = term_h_23;
          t = set_config_0(t);
          t = term_i_23;
          return(t);
        }
        ATerm m_3 (ATerm t)
        {
          t = term_j_23;
          return(t);
        }
        t = Option_3(t, k_3, l_3, m_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL,v_60 = NULL,w_60 = NULL;
  s_60 = t;
  q_60 :
  if(match_string(s_60, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(s_60) == AT_LIST) && !(ATisEmpty(s_60))))
        {
          t_60 = ATgetFirst((ATermList) s_60);
          u_60 = (ATerm) ATgetNext((ATermList) s_60);
          r_60 :
          if(((ATgetType(u_60) == AT_LIST) && !(ATisEmpty(u_60))))
            {
              v_60 = ATgetFirst((ATermList) u_60);
              w_60 = (ATerm) ATgetNext((ATermList) u_60);
              {
                ATerm a_61 = NULL;
                ATerm k_23;
                k_23 = t;
                {
                  t = not_null(t_60);
                  t = j_0(t);
                }
                t = k_23;
                {
                  ATerm b_61 = NULL;
                  t = not_null(v_60);
                  {
                    t = k_0(t);
                    {
                      b_61 = t;
                      if(((a_61 != NULL) && (a_61 != b_61)))
                        _fail(b_61);
                      else
                        a_61 = b_61;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_60)), not_null(a_61));
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
  ATerm n_3 (ATerm t)
  {
    ATerm i_61 = NULL;
    i_61 = t;
    f_61 :
    if(!(match_string(i_61, "-i")))
      {
        if(!(match_string(i_61, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    ATerm l_61 = NULL;
    ATerm m_23;
    m_23 = t;
    {
      ATerm j_61 = NULL;
      ATerm k_61 = NULL;
      k_61 = t;
      if(((j_61 != NULL) && (j_61 != k_61)))
        _fail(k_61);
      else
        j_61 = k_61;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_14, not_null(j_61));
        t = set_config_0(t);
      }
    }
    t = m_23;
    {
      ATerm m_61 = NULL;
      m_61 = t;
      if(((l_61 != NULL) && (l_61 != m_61)))
        _fail(m_61);
      else
        l_61 = m_61;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(l_61));
    }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    t = term_n_23;
    return(t);
  }
  t = ArgOption_3(t, n_3, o_3, p_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_23 = t;
  int r_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(r_23);
    }
  else
    {
      t = o_23;
      {
        ATerm s_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(v_23);
          }
        else
          {
            t = s_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm ast2abox_options_0 (ATerm t)
{
  ATerm w_23 = t;
  int y_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      ;
      LocalPopChoice(y_23);
    }
  else
    {
      t = w_23;
      t = pp_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm z_23;
  z_23 = t;
  {
    ATerm q_61 = NULL;
    ATerm r_61 = NULL;
    t = term_n_6;
    {
      t = whoami_0(t);
      {
        r_61 = t;
        if(((q_61 != NULL) && (q_61 != r_61)))
          _fail(r_61);
        else
          q_61 = r_61;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_24), not_null(q_61)), term_a_24));
      {
        t = printnl_0(t);
        {
          t = term_k_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = z_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  ATerm u_61 = NULL;
  t = report_run_time_0(t);
  {
    ATerm v_61 = NULL;
    t = term_n_6;
    {
      t = whoami_0(t);
      {
        v_61 = t;
        if(((u_61 != NULL) && (u_61 != v_61)))
          _fail(v_61);
        else
          u_61 = v_61;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, term_c_24), not_null(u_61)));
      {
        t = printnl_0(t);
        {
          t = term_k_7;
          t = exit_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm whoami_0 (ATerm t)
{
  t = term_d_24;
  t = get_config_0(t);
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm y_61 = NULL;
  y_61 = t;
  t = SSL_TicksToSeconds(not_null(y_61));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm d_62 = NULL,e_62 = NULL,f_62 = NULL;
  d_62 = t;
  c_62 :
  if(match_cons(d_62, sym__2))
    {
      e_62 = ATgetArgument(d_62, 0);
      f_62 = ATgetArgument(d_62, 1);
      {
        ATerm e_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(e_62), not_null(f_62));
            ;
            LocalPopChoice(f_24);
          }
        else
          {
            t = e_24;
            t = SSL_addr(not_null(e_62), not_null(f_62));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm x_88 (ATerm), ATerm y_88 (ATerm))
{
  ATerm g_24 = t;
  int h_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = x_88(t);
      ;
      LocalPopChoice(h_24);
    }
  else
    {
      t = g_24;
      {
        ATerm m_62 = NULL,n_62 = NULL,o_62 = NULL;
        m_62 = t;
        l_62 :
        if(((ATgetType(m_62) == AT_LIST) && !(ATisEmpty(m_62))))
          {
            n_62 = ATgetFirst((ATermList) m_62);
            o_62 = (ATerm) ATgetNext((ATermList) m_62);
            {
              ATerm r_62 = NULL;
              ATerm s_62 = NULL;
              t = not_null(o_62);
              {
                t = foldr_2(t, x_88, y_88);
                {
                  s_62 = t;
                  if(((r_62 != NULL) && (r_62 != s_62)))
                    _fail(s_62);
                  else
                    r_62 = s_62;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_62), not_null(r_62));
                t = y_88(t);
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
ATerm crush_2 (ATerm t, ATerm v_86 (ATerm), ATerm w_86 (ATerm))
{
  ATerm z_62 = NULL;
  ATerm b_63 = NULL;
  z_62 = t;
  {
    ATerm c_63 = NULL;
    ATerm e_63 = NULL,f_63 = NULL,g_63 = NULL;
    t = not_null(z_62);
    {
      c_63 = t;
      {
        t = SSL_explode_term(not_null(c_63));
        {
          e_63 = t;
          y_62 :
          if(match_cons(e_63, sym__2))
            {
              f_63 = ATgetArgument(e_63, 0);
              g_63 = ATgetArgument(e_63, 1);
              if(((b_63 != NULL) && (b_63 != g_63)))
                _fail(g_63);
              else
                b_63 = g_63;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_63);
      t = foldr_2(t, v_86, w_86);
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
    ATerm q_3 (ATerm t)
    {
      t = term_j_7;
      return(t);
    }
    t = crush_2(t, q_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_63 = NULL,n_63 = NULL,o_63 = NULL;
  m_63 = t;
  l_63 :
  if(match_cons(m_63, sym__2))
    {
      n_63 = ATgetArgument(m_63, 0);
      o_63 = ATgetArgument(m_63, 1);
      {
        ATerm i_24;
        i_24 = t;
        {
          ATerm j_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_63), not_null(o_63));
              ;
              LocalPopChoice(k_24);
            }
          else
            {
              t = j_24;
              t = SSL_gtr(not_null(n_63), not_null(o_63));
            }
        }
        t = i_24;
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
  ATerm u_63 = NULL;
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL;
      v_63 = t;
      t_63 :
      if(match_cons(v_63, sym__2))
        {
          w_63 = ATgetArgument(v_63, 0);
          x_63 = ATgetArgument(v_63, 1);
          {
            if(((u_63 != NULL) && (u_63 != w_63)))
              _fail(w_63);
            else
              u_63 = w_63;
            if(((u_63 != NULL) && (u_63 != x_63)))
              _fail(x_63);
            else
              u_63 = x_63;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm n_24;
    n_24 = t;
    {
      ATerm c_64 = NULL;
      ATerm f_64 = NULL;
      t = term_o_21;
      {
        t = get_config_0(t);
        {
          f_64 = t;
          if(((c_64 != NULL) && (c_64 != f_64)))
            _fail(f_64);
          else
            c_64 = f_64;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_64), term_k_7);
        t = geq_0(t);
      }
    }
    t = n_24;
    t = z_74(t);
    return(t);
  }
  t = try_1(t, r_3);
  return(t);
}
ATerm report_run_time_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm j_64 = NULL,l_64 = NULL;
    ATerm o_24;
    o_24 = t;
    {
      ATerm k_64 = NULL;
      t = run_time_0(t);
      {
        k_64 = t;
        if(((j_64 != NULL) && (j_64 != k_64)))
          _fail(k_64);
        else
          j_64 = k_64;
      }
    }
    t = o_24;
    {
      ATerm m_64 = NULL;
      t = term_n_6;
      {
        t = whoami_0(t);
        {
          m_64 = t;
          if(((l_64 != NULL) && (l_64 != m_64)))
            _fail(m_64);
          else
            l_64 = m_64;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_q_24), not_null(j_64)), term_p_24), not_null(l_64)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  t = report_run_time_0(t);
  {
    t = term_j_7;
    t = exit_0(t);
  }
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
      ATerm r_24;
      r_24 = t;
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
      t = r_24;
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
ATerm need_help_1 (ATerm t, ATerm f_94 (ATerm))
{
  ATerm s_24 = t;
  int t_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_u_24;
      t = get_config_0(t);
      ;
      LocalPopChoice(t_24);
    }
  else
    {
      t = s_24;
      {
        ATerm t_3 (ATerm t)
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Help_0(t);
              ;
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              {
                ATerm x_24 = t;
                int y_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Undefined_1(t, _id);
                    ;
                    LocalPopChoice(y_24);
                  }
                else
                  {
                    t = x_24;
                    t = Version_0(t);
                  }
              }
            }
          return(t);
        }
        t = option_defined_1(t, t_3);
      }
    }
  t = f_94(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm d_65 = NULL;
  d_65 = t;
  t = SSL_table_create(not_null(d_65));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm h_65 = NULL;
  h_65 = t;
  {
    ATerm z_24;
    z_24 = t;
    {
      t = term_i_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_18, term_j_18, not_null(h_65));
          t = table_put_0(t);
        }
      }
    }
    t = z_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_65 = NULL;
  l_65 = t;
  t = SSL_table_destroy(not_null(l_65));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_65 = NULL;
  r_65 = t;
  t = SSL_exit(not_null(r_65));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm v_65 = NULL,w_65 = NULL,x_65 = NULL;
  v_65 = t;
  u_65 :
  if(((ATgetType(v_65) == AT_LIST) && ATisEmpty(v_65)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(v_65) == AT_LIST) && !(ATisEmpty(v_65))))
        {
          w_65 = ATgetFirst((ATermList) v_65);
          x_65 = (ATerm) ATgetNext((ATermList) v_65);
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
  ATerm a_25;
  a_25 = t;
  {
    ATerm a_66 = NULL;
    ATerm d_66 = NULL;
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        {
          ATerm b_66 = NULL;
          ATerm c_66 = NULL;
          c_66 = t;
          if(((b_66 != NULL) && (b_66 != c_66)))
            _fail(c_66);
          else
            b_66 = c_66;
          t = (ATerm) ATinsert(ATempty, not_null(b_66));
        }
      }
    {
      d_66 = t;
      if(((a_66 != NULL) && (a_66 != d_66)))
        _fail(d_66);
      else
        a_66 = d_66;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_15, not_null(a_66));
      t = printnl_0(t);
    }
  }
  t = a_25;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm b_96 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
  o_66 = t;
  l_66 :
  if(((ATgetType(o_66) == AT_LIST) && !(ATisEmpty(o_66))))
    {
      m_66 = ATgetFirst((ATermList) o_66);
      n_66 = (ATerm) ATgetNext((ATermList) o_66);
      {
        ATerm r_66 = NULL;
        t = not_null(n_66);
        {
          ATerm d_25;
          d_25 = t;
          {
            ATerm s_66 = NULL,u_66 = NULL,w_66 = NULL;
            ATerm e_25;
            e_25 = t;
            {
              ATerm t_66 = NULL;
              t = i_0(t);
              {
                t_66 = t;
                if(((s_66 != NULL) && (s_66 != t_66)))
                  _fail(t_66);
                else
                  s_66 = t_66;
              }
            }
            t = e_25;
            {
              ATerm v_66 = NULL;
              t = not_null(m_66);
              {
                t = g_0(t);
                {
                  v_66 = t;
                  if(((u_66 != NULL) && (u_66 != v_66)))
                    _fail(v_66);
                  else
                    u_66 = v_66;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_66)), not_null(u_66));
                {
                  w_66 = t;
                  if(((r_66 != NULL) && (r_66 != w_66)))
                    _fail(w_66);
                  else
                    r_66 = w_66;
                }
              }
            }
          }
          t = d_25;
          {
            ATerm y_3 (ATerm t)
            {
              t = not_null(r_66);
              return(t);
            }
            t = reverse_acc_2(t, g_0, y_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(o_66) == AT_LIST) && ATisEmpty(o_66)))
        {
          {
            t = term_n_6;
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
  ATerm z_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, z_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_96 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_70 (ATerm))
{
  ATerm h_67 = NULL,i_67 = NULL;
  h_67 = t;
  g_67 :
  if(match_cons(h_67, sym_Program_1))
    {
      i_67 = ATgetArgument(h_67, 0);
      {
        ATerm l_67 = NULL,n_67 = NULL;
        ATerm m_67 = NULL;
        t = SSLgetAnnotations(not_null(h_67));
        {
          m_67 = t;
          if(((l_67 != NULL) && (l_67 != m_67)))
            _fail(m_67);
          else
            l_67 = m_67;
        }
        {
          t = not_null(i_67);
          {
            ATerm p_67 = NULL;
            t = m_70(t);
            {
              n_67 = t;
              {
                ATerm q_67 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(n_67)), not_null(l_67));
                {
                  q_67 = t;
                  if(((p_67 != NULL) && (p_67 != q_67)))
                    _fail(q_67);
                  else
                    p_67 = q_67;
                }
                t = not_null(p_67);
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
  ATerm z_67 = NULL;
  ATerm f_25 = t;
  int g_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_68 = NULL;
      t = term_d_24;
      {
        t = get_config_0(t);
        {
          a_68 = t;
          if(((z_67 != NULL) && (z_67 != a_68)))
            _fail(a_68);
          else
            z_67 = a_68;
        }
      }
      ;
      LocalPopChoice(g_25);
    }
  else
    {
      t = f_25;
      {
        ATerm g_4 (ATerm t)
        {
          ATerm l_4 (ATerm t)
          {
            ATerm b_68 = NULL;
            b_68 = t;
            if(((z_67 != NULL) && (z_67 != b_68)))
              _fail(b_68);
            else
              z_67 = b_68;
            return(t);
          }
          t = Program_1(t, l_4);
          return(t);
        }
        t = option_defined_1(t, g_4);
      }
    }
  {
    ATerm m_4 (ATerm t)
    {
      ATerm n_4 (ATerm t)
      {
        t = not_null(z_67);
        return(t);
      }
      t = short_description_1(t, n_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, m_4);
    {
      t = term_h_25;
      {
        t = echo_0(t);
        {
          t = term_k_25;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_4 (ATerm t)
                {
                  ATerm c_68 = NULL;
                  ATerm d_68 = NULL;
                  d_68 = t;
                  if(((c_68 != NULL) && (c_68 != d_68)))
                    _fail(d_68);
                  else
                    c_68 = d_68;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_68)), term_l_25);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_4);
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm e_68 = NULL;
                    ATerm f_68 = NULL;
                    ATerm q_4 (ATerm t)
                    {
                      t = not_null(z_67);
                      return(t);
                    }
                    t = long_description_1(t, q_4);
                    {
                      f_68 = t;
                      if(((e_68 != NULL) && (e_68 != f_68)))
                        _fail(f_68);
                      else
                        e_68 = f_68;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(e_68)), term_m_25);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_4);
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
  ATerm m_68 = NULL,n_68 = NULL,o_68 = NULL;
  m_68 = t;
  l_68 :
  if(match_cons(m_68, sym__2))
    {
      n_68 = ATgetArgument(m_68, 0);
      o_68 = ATgetArgument(m_68, 1);
      {
        ATerm n_25;
        n_25 = t;
        t = SSL_printnl(not_null(n_68), not_null(o_68));
        t = n_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_70 (ATerm))
{
  ATerm x_68 = NULL,y_68 = NULL;
  x_68 = t;
  w_68 :
  if(match_cons(x_68, sym_Undefined_1))
    {
      y_68 = ATgetArgument(x_68, 0);
      {
        ATerm b_69 = NULL,d_69 = NULL;
        ATerm c_69 = NULL;
        t = SSLgetAnnotations(not_null(x_68));
        {
          c_69 = t;
          if(((b_69 != NULL) && (b_69 != c_69)))
            _fail(c_69);
          else
            b_69 = c_69;
        }
        {
          t = not_null(y_68);
          {
            ATerm f_69 = NULL;
            t = n_70(t);
            {
              d_69 = t;
              {
                ATerm g_69 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(d_69)), not_null(b_69));
                {
                  g_69 = t;
                  if(((f_69 != NULL) && (f_69 != g_69)))
                    _fail(g_69);
                  else
                    f_69 = g_69;
                }
                t = not_null(f_69);
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
ATerm fetch_1 (ATerm t, ATerm u_82 (ATerm))
{
  ATerm l_69 (ATerm t)
  {
    ATerm o_25 = t;
    int p_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, u_82, _id);
        ;
        LocalPopChoice(p_25);
      }
    else
      {
        t = o_25;
        t = Cons_2(t, _id, l_69);
      }
    return(t);
  }
  t = l_69(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm a_95 (ATerm))
{
  t = fetch_1(t, a_95);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_69 = NULL;
  q_69 = t;
  p_69 :
  if(match_cons(q_69, sym_Help_0))
    {
      ATerm s_69 = NULL,u_69 = NULL;
      ATerm q_25;
      q_25 = t;
      {
        ATerm t_69 = NULL;
        t = SSLgetAnnotations(not_null(q_69));
        {
          t_69 = t;
          if(((s_69 != NULL) && (s_69 != t_69)))
            _fail(t_69);
          else
            s_69 = t_69;
        }
      }
      t = q_25;
      {
        ATerm v_69 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(s_69));
        {
          v_69 = t;
          if(((u_69 != NULL) && (u_69 != v_69)))
            _fail(v_69);
          else
            u_69 = v_69;
        }
        t = not_null(u_69);
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
  ATerm a_70 = NULL;
  a_70 = t;
  t = SSL_implode_string(not_null(a_70));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
        f_70 = t;
        e_70 :
        if(((ATgetType(f_70) == AT_LIST) && !(ATisEmpty(f_70))))
          {
            g_70 = ATgetFirst((ATermList) f_70);
            h_70 = (ATerm) ATgetNext((ATermList) f_70);
            {
              t = not_null(g_70);
              {
                ATerm r_4 (ATerm t)
                {
                  t = not_null(h_70);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, r_4);
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
  ATerm t_70 = NULL;
  ATerm v_70 = NULL;
  t_70 = t;
  {
    ATerm w_70 = NULL;
    ATerm y_70 = NULL,z_70 = NULL,a_71 = NULL;
    t = not_null(t_70);
    {
      w_70 = t;
      {
        t = SSL_explode_term(not_null(w_70));
        {
          y_70 = t;
          r_70 :
          if(match_cons(y_70, sym__2))
            {
              z_70 = ATgetArgument(y_70, 0);
              a_71 = ATgetArgument(y_70, 1);
              s_70 :
              if(match_string(z_70, ""))
                {
                  if(((v_70 != NULL) && (v_70 != a_71)))
                    _fail(a_71);
                  else
                    v_70 = a_71;
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
      t = not_null(v_70);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm a_83 (ATerm))
{
  ATerm e_71 (ATerm t)
  {
    ATerm t_25 = t;
    int u_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_71);
        ;
        LocalPopChoice(u_25);
      }
    else
      {
        t = t_25;
        {
          t = Nil_0(t);
          t = a_83(t);
        }
      }
    return(t);
  }
  t = e_71(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
  h_71 = t;
  g_71 :
  if(match_cons(h_71, sym__2))
    {
      i_71 = ATgetArgument(h_71, 0);
      j_71 = ATgetArgument(h_71, 1);
      {
        t = not_null(i_71);
        {
          ATerm s_4 (ATerm t)
          {
            t = not_null(j_71);
            return(t);
          }
          t = at_end_1(t, s_4);
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
  ATerm v_25 = t;
  int w_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(w_25);
    }
  else
    {
      t = v_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_71 = NULL;
  u_71 = t;
  t = SSL_explode_string(not_null(u_71));
  return(t);
}
ATerm _2 (ATerm t, ATerm d_64 (ATerm), ATerm e_64 (ATerm))
{
  ATerm d_72 = NULL,e_72 = NULL,f_72 = NULL;
  d_72 = t;
  c_72 :
  if(match_cons(d_72, sym__2))
    {
      e_72 = ATgetArgument(d_72, 0);
      f_72 = ATgetArgument(d_72, 1);
      {
        ATerm j_72 = NULL,l_72 = NULL;
        ATerm k_72 = NULL;
        t = SSLgetAnnotations(not_null(d_72));
        {
          k_72 = t;
          if(((j_72 != NULL) && (j_72 != k_72)))
            _fail(k_72);
          else
            j_72 = k_72;
        }
        {
          t = not_null(e_72);
          {
            ATerm n_72 = NULL;
            t = d_64(t);
            {
              l_72 = t;
              {
                t = not_null(f_72);
                {
                  ATerm p_72 = NULL;
                  t = e_64(t);
                  {
                    n_72 = t;
                    {
                      ATerm q_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_72), not_null(n_72)), not_null(j_72));
                      {
                        q_72 = t;
                        if(((p_72 != NULL) && (p_72 != q_72)))
                          _fail(q_72);
                        else
                          p_72 = q_72;
                      }
                      t = not_null(p_72);
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
ATerm debug_1 (ATerm t, ATerm l_97 (ATerm))
{
  ATerm x_25;
  x_25 = t;
  {
    ATerm y_72 = NULL,a_73 = NULL;
    ATerm y_25;
    y_25 = t;
    {
      ATerm z_72 = NULL;
      t = l_97(t);
      {
        z_72 = t;
        if(((y_72 != NULL) && (y_72 != z_72)))
          _fail(z_72);
        else
          y_72 = z_72;
      }
    }
    t = y_25;
    {
      ATerm b_73 = NULL;
      b_73 = t;
      if(((a_73 != NULL) && (a_73 != b_73)))
        _fail(b_73);
      else
        a_73 = b_73;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_73)), not_null(y_72)));
        t = printnl_0(t);
      }
    }
  }
  t = x_25;
  return(t);
}
ATerm map_1 (ATerm t, ATerm l_82 (ATerm))
{
  ATerm g_73 (ATerm t)
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = Cons_2(t, l_82, g_73);
      }
    return(t);
  }
  t = g_73(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm i_73 = NULL;
  i_73 = t;
  t = SSL_is_string(not_null(i_73));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm b_26 = t;
  int c_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(c_26);
    }
  else
    {
      t = b_26;
      {
        ATerm d_26 = t;
        int e_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_4);
            ;
            LocalPopChoice(e_26);
          }
        else
          {
            t = d_26;
            {
              ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
              r_73 = t;
              q_73 :
              if(match_cons(r_73, sym_Path_1))
                {
                  s_73 = ATgetArgument(r_73, 0);
                  t = not_null(s_73);
                }
              else
                {
                  if(match_cons(r_73, sym_Var_1))
                    {
                      s_73 = ATgetArgument(r_73, 0);
                      {
                        t = not_null(s_73);
                        {
                          ATerm f_26 = t;
                          int g_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(g_26);
                            }
                          else
                            {
                              t = f_26;
                              {
                                ATerm y_4 (ATerm t)
                                {
                                  t = term_h_26;
                                  return(t);
                                }
                                t = debug_1(t, y_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(r_73, sym_Prefix_2))
                        {
                          s_73 = ATgetArgument(r_73, 0);
                          t_73 = ATgetArgument(r_73, 1);
                          {
                            ATerm y_73 = NULL,a_74 = NULL;
                            ATerm i_26;
                            i_26 = t;
                            {
                              ATerm z_73 = NULL;
                              t = not_null(s_73);
                              {
                                t = eval_config_0(t);
                                {
                                  z_73 = t;
                                  if(((y_73 != NULL) && (y_73 != z_73)))
                                    _fail(z_73);
                                  else
                                    y_73 = z_73;
                                }
                              }
                            }
                            t = i_26;
                            {
                              ATerm b_74 = NULL;
                              t = not_null(t_73);
                              {
                                t = eval_config_0(t);
                                {
                                  b_74 = t;
                                  if(((a_74 != NULL) && (a_74 != b_74)))
                                    _fail(b_74);
                                  else
                                    a_74 = b_74;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(y_73), not_null(a_74));
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
  ATerm j_74 = NULL;
  j_74 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_20, not_null(j_74));
    {
      t = table_get_0(t);
      {
        ATerm z_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm j_26;
            j_26 = t;
            {
              ATerm l_74 = NULL;
              ATerm m_74 = NULL;
              m_74 = t;
              if(((l_74 != NULL) && (l_74 != m_74)))
                _fail(m_74);
              else
                l_74 = m_74;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_20, not_null(j_74), not_null(l_74));
                t = table_put_0(t);
              }
            }
            t = j_26;
          }
          return(t);
        }
        t = try_1(t, z_4);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm k_26 = t;
  int m_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = t_80(t);
      ;
      LocalPopChoice(m_26);
    }
  else
    {
      t = k_26;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm r_74 = NULL,s_74 = NULL,t_74 = NULL;
  r_74 = t;
  q_74 :
  if(match_cons(r_74, sym__2))
    {
      s_74 = ATgetArgument(r_74, 0);
      t_74 = ATgetArgument(r_74, 1);
      t = SSL_table_get(not_null(s_74), not_null(t_74));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm d_75 = NULL,e_75 = NULL,f_75 = NULL,g_75 = NULL;
  d_75 = t;
  c_75 :
  if(match_cons(d_75, sym__3))
    {
      e_75 = ATgetArgument(d_75, 0);
      f_75 = ATgetArgument(d_75, 1);
      g_75 = ATgetArgument(d_75, 2);
      {
        ATerm n_26;
        n_26 = t;
        {
          ATerm k_75 = NULL;
          ATerm l_75 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(e_75), not_null(f_75));
          {
            ATerm p_26 = t;
            int q_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(q_26);
              }
            else
              {
                t = p_26;
                t = (ATerm) ATempty;
              }
            {
              l_75 = t;
              if(((k_75 != NULL) && (k_75 != l_75)))
                _fail(l_75);
              else
                k_75 = l_75;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(e_75), not_null(f_75), (ATerm) ATinsert(CheckATermList(not_null(k_75)), not_null(g_75)));
            t = table_put_0(t);
          }
        }
        t = n_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm f_96 (ATerm))
{
  ATerm p_75 = NULL;
  ATerm q_75 = NULL;
  t = term_n_6;
  {
    t = f_96(t);
    {
      q_75 = t;
      if(((p_75 != NULL) && (p_75 != q_75)))
        _fail(q_75);
      else
        p_75 = q_75;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_25, term_j_25, not_null(p_75));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL;
  w_75 = t;
  v_75 :
  if(match_string(w_75, "register-usage-info"))
    {
      t = register_usage_1(t, d_0);
    }
  else
    {
      if(((ATgetType(w_75) == AT_LIST) && !(ATisEmpty(w_75))))
        {
          x_75 = ATgetFirst((ATermList) w_75);
          y_75 = (ATerm) ATgetNext((ATermList) w_75);
          {
            ATerm b_76 = NULL;
            ATerm r_26;
            r_26 = t;
            {
              t = not_null(x_75);
              t = a_0(t);
            }
            t = r_26;
            {
              ATerm c_76 = NULL;
              t = term_n_6;
              {
                t = b_0(t);
                {
                  c_76 = t;
                  if(((b_76 != NULL) && (b_76 != c_76)))
                    _fail(c_76);
                  else
                    b_76 = c_76;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(y_75)), not_null(b_76));
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
  ATerm c_5 (ATerm t)
  {
    ATerm h_76 = NULL;
    h_76 = t;
    g_76 :
    if(!(match_string(h_76, "--help")))
      {
        if(!(match_string(h_76, "-h")))
          {
            if(!(match_string(h_76, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_s_26;
    {
      t = set_config_0(t);
      t = term_t_26;
    }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_u_26;
    return(t);
  }
  t = Option_3(t, c_5, d_5, e_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm k_76 = NULL,l_76 = NULL,m_76 = NULL;
  k_76 = t;
  j_76 :
  if(((ATgetType(k_76) == AT_LIST) && !(ATisEmpty(k_76))))
    {
      l_76 = ATgetFirst((ATermList) k_76);
      m_76 = (ATerm) ATgetNext((ATermList) k_76);
      t = (ATerm) ATinsert(CheckATermList(not_null(m_76)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(l_76)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
  y_76 = t;
  v_76 :
  if(((ATgetType(y_76) == AT_LIST) && !(ATisEmpty(y_76))))
    {
      z_76 = ATgetFirst((ATermList) y_76);
      a_77 = (ATerm) ATgetNext((ATermList) y_76);
      {
        ATerm e_77 = NULL,g_77 = NULL;
        ATerm f_77 = NULL;
        t = SSLgetAnnotations(not_null(y_76));
        {
          f_77 = t;
          if(((e_77 != NULL) && (e_77 != f_77)))
            _fail(f_77);
          else
            e_77 = f_77;
        }
        {
          t = not_null(z_76);
          {
            ATerm i_77 = NULL;
            t = m_65(t);
            {
              g_77 = t;
              {
                t = not_null(a_77);
                {
                  ATerm k_77 = NULL;
                  t = n_65(t);
                  {
                    i_77 = t;
                    {
                      ATerm l_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(i_77)), not_null(g_77)), not_null(e_77));
                      {
                        l_77 = t;
                        if(((k_77 != NULL) && (k_77 != l_77)))
                          _fail(l_77);
                        else
                          k_77 = l_77;
                      }
                      t = not_null(k_77);
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
  ATerm w_77 = NULL;
  w_77 = t;
  u_77 :
  if(((ATgetType(w_77) == AT_LIST) && ATisEmpty(w_77)))
    {
      {
        ATerm y_77 = NULL,a_78 = NULL;
        ATerm v_26;
        v_26 = t;
        {
          ATerm z_77 = NULL;
          t = SSLgetAnnotations(not_null(w_77));
          {
            z_77 = t;
            if(((y_77 != NULL) && (y_77 != z_77)))
              _fail(z_77);
            else
              y_77 = z_77;
          }
        }
        t = v_26;
        {
          ATerm d_78 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(y_77));
          {
            d_78 = t;
            if(((a_78 != NULL) && (a_78 != d_78)))
              _fail(d_78);
            else
              a_78 = d_78;
          }
          t = not_null(a_78);
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
  ATerm j_78 = NULL,k_78 = NULL,l_78 = NULL;
  j_78 = t;
  i_78 :
  if(match_cons(j_78, sym__2))
    {
      k_78 = ATgetArgument(j_78, 0);
      l_78 = ATgetArgument(j_78, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_20, not_null(k_78), not_null(l_78));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm d_96 (ATerm))
{
  ATerm w_26;
  w_26 = t;
  {
    ATerm f_5 (ATerm t)
    {
      t = term_y_26;
      t = d_96(t);
      return(t);
    }
    t = try_1(t, f_5);
  }
  t = w_26;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm t_78 = NULL;
      ATerm z_26;
      z_26 = t;
      {
        ATerm r_78 = NULL;
        ATerm s_78 = NULL;
        s_78 = t;
        if(((r_78 != NULL) && (r_78 != s_78)))
          _fail(s_78);
        else
          r_78 = s_78;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_24, not_null(r_78));
          t = set_config_0(t);
        }
      }
      t = z_26;
      {
        ATerm u_78 = NULL;
        u_78 = t;
        if(((t_78 != NULL) && (t_78 != u_78)))
          _fail(u_78);
        else
          t_78 = u_78;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_78));
      }
      return(t);
    }
    ATerm k_5 (ATerm t)
    {
      ATerm a_27 = t;
      int b_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_27 = t;
          int h_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(h_27);
            }
          else
            {
              t = c_27;
              {
                t = d_96(t);
                t = Cons_2(t, _id, k_5);
              }
            }
          ;
          LocalPopChoice(b_27);
        }
      else
        {
          t = a_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, g_5, k_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_79 = NULL,b_79 = NULL,c_79 = NULL;
  ATerm i_27;
  i_27 = t;
  {
    ATerm d_79 = NULL,e_79 = NULL,h_79 = NULL,i_79 = NULL;
    d_79 = t;
    z_78 :
    if(match_cons(d_79, sym__3))
      {
        e_79 = ATgetArgument(d_79, 0);
        h_79 = ATgetArgument(d_79, 1);
        i_79 = ATgetArgument(d_79, 2);
        {
          if(((a_79 != NULL) && (a_79 != e_79)))
            _fail(e_79);
          else
            a_79 = e_79;
          {
            if(((b_79 != NULL) && (b_79 != h_79)))
              _fail(h_79);
            else
              b_79 = h_79;
            {
              if(((c_79 != NULL) && (c_79 != i_79)))
                _fail(i_79);
              else
                c_79 = i_79;
              t = SSL_table_put(not_null(a_79), not_null(b_79), not_null(c_79));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_27;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm c_96 (ATerm))
{
  ATerm l_79 = NULL;
  ATerm k_27;
  k_27 = t;
  {
    t = term_l_27;
    t = table_put_0(t);
  }
  t = k_27;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm n_27 = t;
      int p_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = c_96(t);
          ;
          LocalPopChoice(p_27);
        }
      else
        {
          t = n_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_5);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm q_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_27;
            s_27 = t;
            {
              ATerm t_27 = t;
              int y_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_u_24;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(y_27);
                }
              else
                {
                  t = t_27;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_27;
            {
              t = system_usage_0(t);
              {
                t = term_j_7;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(r_27);
          }
        else
          {
            t = q_27;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm m_79 = NULL;
                  m_79 = t;
                  if(((l_79 != NULL) && (l_79 != m_79)))
                    _fail(m_79);
                  else
                    l_79 = m_79;
                  return(t);
                }
                t = Undefined_1(t, t_5);
                return(t);
              }
              t = option_defined_1(t, s_5);
              {
                t = (ATerm) ATmakeAppl(sym__2, term_x_17, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_79)), term_z_27));
                {
                  t = printnl_0(t);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_k_7;
                      t = exit_0(t);
                    }
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_5);
      {
        ATerm c_28;
        c_28 = t;
        {
          t = term_i_25;
          t = table_destroy_0(t);
        }
        t = c_28;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_94 (ATerm), ATerm i_94 (ATerm), ATerm j_94 (ATerm), ATerm k_94 (ATerm))
{
  t = parse_options_1(t, h_94);
  {
    t = store_options_0(t);
    {
      t = j_94(t);
      {
        ATerm d_28 = t;
        int e_28 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_94);
            ;
            LocalPopChoice(e_28);
          }
        else
          {
            t = d_28;
            {
              ATerm f_28 = t;
              int g_28 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_94(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(g_28);
                }
              else
                {
                  t = f_28;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm l_94 (ATerm), ATerm m_94 (ATerm))
{
  t = option_wrap_4(t, l_94, default_usage_0, _id, m_94);
  return(t);
}
ATerm io_Ast_2_abox_0 (ATerm t)
{
  t = option_wrap_2(t, ast2abox_options_0, ast2abox_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Ast_2_abox_0(t);
  return(t);
}

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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
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
ATerm term_i_27;
ATerm term_z_26;
ATerm term_l_26;
ATerm term_i_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_s_25;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_b_23;
ATerm term_w_22;
ATerm term_v_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_q_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_y_21;
ATerm term_u_21;
ATerm term_r_21;
ATerm term_l_21;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_y_20;
ATerm term_v_20;
ATerm term_u_20;
ATerm term_t_20;
ATerm term_s_20;
ATerm term_o_20;
ATerm term_f_20;
ATerm term_c_20;
ATerm term_r_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_h_19;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_t_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_h_18;
ATerm term_b_16;
ATerm term_s_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_p_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_r_14;
ATerm term_o_14;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_y_11;
ATerm term_w_11;
ATerm term_u_11;
ATerm term_r_11;
ATerm term_m_11;
ATerm term_k_11;
ATerm term_g_11;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_e_10;
ATerm term_a_8;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_o_6;
void init_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_a_8));
  term_a_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_g_11));
  term_g_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_k_11));
  term_k_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_14));
  term_o_14 = (ATerm) ATmakeAppl(sym__2, term_y_11, term_k_11);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_b_16));
  term_b_16 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym__2, term_h_18, term_i_18);
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no pretty-print tables specified with -p arguments", 0, ATtrue));
  ATprotect(&(term_o_20));
  term_o_20 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_20));
  term_s_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_20));
  term_u_20 = (ATerm) ATmakeAppl(sym__2, term_t_20, term_o_6);
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(sym__2, term_i_21, term_k_7);
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_Verbose_1, term_k_7);
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym__2, term_u_21, term_o_6);
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(sym__2, term_t_22, term_o_6);
  ATprotect(&(term_v_22));
  term_v_22 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_w_22));
  term_w_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(sym__2, term_o_24, term_p_24);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(sym__2, term_e_26, term_o_6);
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(sym__3, term_o_24, term_p_24, (ATerm) ATempty);
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm if_2 (ATerm, ATerm i_76 (ATerm), ATerm j_76 (ATerm));
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm n_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm z_72 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm TupleToList_0 (ATerm);
ATerm symbol2abox7_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm x_93 (ATerm));
ATerm length_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm));
ATerm crush_3 (ATerm, ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm));
ATerm collect_p__1 (ATerm, ATerm d_100 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm u_69 (ATerm));
ATerm symbol2abox6_helper_0 (ATerm);
ATerm symbol2abox6_0 (ATerm);
ATerm symbol2abox5_0 (ATerm);
ATerm symbol2abox4_0 (ATerm);
ATerm symbol2abox3_0 (ATerm);
ATerm symbol2abox2_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm repeat_1 (ATerm, ATerm z_90 (ATerm));
ATerm index_0 (ATerm);
ATerm symbol2abox1_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm get_symbol_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm y_79 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm h_80 (ATerm));
ATerm pp_table_get_0 (ATerm);
ATerm try_pp_table_get_0 (ATerm);
ATerm trm2abox_appl_0 (ATerm);
ATerm trm2abox_list_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm trm2abox_int_0 (ATerm);
ATerm trm2abox_string_0 (ATerm);
ATerm trm2abox_0 (ATerm);
ATerm close_file_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm assert_1 (ATerm, ATerm d_86 (ATerm));
ATerm obsolete_1 (ATerm, ATerm i_89 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm s_72 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm a_86 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm r_76 (ATerm), ATerm s_76 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm z_85 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm t_71 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm u_71 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm selector_2 (ATerm, ATerm k_66 (ATerm), ATerm l_66 (ATerm));
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm u_78 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm k_90 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm v_90 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm p_66 (ATerm));
ATerm SOpt_2 (ATerm, ATerm b_68 (ATerm), ATerm c_68 (ATerm));
ATerm Arg2_2 (ATerm, ATerm n_66 (ATerm), ATerm o_66 (ATerm));
ATerm Arg_1 (ATerm, ATerm m_66 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_72 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm o_74 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm j_86 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm l_93 (ATerm));
ATerm termid_check_1 (ATerm, ATerm s_93 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm notify_1 (ATerm, ATerm i_100 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
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
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm i_84 (ATerm), ATerm j_84 (ATerm));
ATerm crush_2 (ATerm, ATerm g_83 (ATerm), ATerm h_83 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm w_69 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm g_86 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm o_88 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm n_88 (ATerm));
ATerm Program_1 (ATerm, ATerm f_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm c_89 (ATerm));
ATerm Undefined_1 (ATerm, ATerm g_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm n_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_78 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm g_59 (ATerm), ATerm h_59 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm b_89 (ATerm));
ATerm map_1 (ATerm, ATerm u_77 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm c_76 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm s_88 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm p_60 (ATerm), ATerm q_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm q_88 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm p_88 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm q_86 (ATerm), ATerm r_86 (ATerm));
ATerm io_Ast_2_abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm if_2 (ATerm t, ATerm i_76 (ATerm), ATerm j_76 (ATerm))
{
  ATerm d_2 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_76(t);
      LocalPopChoice(v_5);
      t = j_76(t);
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
  ATerm x_5 = t;
  int f_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(f_6);
    }
  else
    {
      t = x_5;
      {
        ATerm g_6 = t;
        int h_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, Nil_0, flat_list_0);
            ;
            LocalPopChoice(h_6);
          }
        else
          {
            t = g_6;
            {
              ATerm l_6 = t;
              int m_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_0 = NULL,b_2 = NULL;
                  t = Cons_2(t, is_list_0, _id);
                  {
                    ATerm n_6;
                    n_6 = t;
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
                    t = n_6;
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
                  LocalPopChoice(m_6);
                }
              else
                {
                  t = l_6;
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
        t = term_o_6;
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
            t = term_o_6;
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
ATerm bottomup_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = bottomup_1(t, z_72);
    return(t);
  }
  t = _all(t, b_0);
  t = z_72(t);
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
          ATerm c_0 (ATerm t)
          {
            ATerm e_0 (ATerm t)
            {
              ATerm r_6 = t;
              int s_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_0 (ATerm t)
                  {
                    t = not_null(x_4);
                    return(t);
                  }
                  t = Instantiate_1(t, f_0);
                  ;
                  LocalPopChoice(s_6);
                }
              else
                {
                  t = r_6;
                  t = flat_list_0(t);
                }
              return(t);
            }
            t = try_1(t, e_0);
            return(t);
          }
          t = bottomup_1(t, c_0);
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
ATerm instantiate_sep_list_1 (ATerm t, ATerm x_93 (ATerm))
{
  ATerm i_7 (ATerm t)
  {
    ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL;
    ATerm t_6 = t;
    int u_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(u_6);
      }
    else
      {
        t = t_6;
        {
          ATerm v_6 = t;
          int j_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              ;
              LocalPopChoice(j_7);
            }
          else
            {
              t = v_6;
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
                                  t = term_o_6;
                                  {
                                    t = x_93(t);
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
    t = term_k_7;
    return(t);
  }
  ATerm u_0 (ATerm t)
  {
    t = term_l_7;
    return(t);
  }
  t = foldr_3(t, t_0, add_0, u_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm m_7 = t;
  int n_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_84(t);
      ;
      LocalPopChoice(n_7);
    }
  else
    {
      t = m_7;
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
              ATerm s_7;
              s_7 = t;
              {
                ATerm v_7 = NULL;
                t = not_null(q_7);
                {
                  t = m_84(t);
                  {
                    v_7 = t;
                    if(((u_7 != NULL) && (u_7 != v_7)))
                      _fail(v_7);
                    else
                      u_7 = v_7;
                  }
                }
              }
              t = s_7;
              {
                ATerm x_7 = NULL;
                t = not_null(r_7);
                {
                  t = foldr_3(t, k_84, l_84, m_84);
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
                  t = l_84(t);
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
ATerm crush_3 (ATerm t, ATerm i_83 (ATerm), ATerm j_83 (ATerm), ATerm k_83 (ATerm))
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
      t = foldr_3(t, i_83, j_83, k_83);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm d_100 (ATerm))
{
  ATerm t_8 (ATerm t)
  {
    ATerm t_7 = t;
    int y_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_8 = NULL;
        t = d_100(t);
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
        LocalPopChoice(y_7);
      }
    else
      {
        t = t_7;
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
  ATerm z_7;
  z_7 = t;
  {
    ATerm f_9 = NULL,h_9 = NULL;
    ATerm g_9 = NULL;
    g_9 = t;
    if(((f_9 != NULL) && (f_9 != g_9)))
      _fail(g_9);
    else
      f_9 = g_9;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(f_9), term_a_8);
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
  t = z_7;
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm u_69 (ATerm))
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
        ATerm b_8 = t;
        int c_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_9 = NULL,x_9 = NULL;
            t = not_null(q_9);
            {
              t = even_0(t);
              {
                ATerm w_9 = NULL;
                t = term_o_6;
                {
                  t = u_69(t);
                  {
                    w_9 = t;
                    if(((v_9 != NULL) && (v_9 != w_9)))
                      _fail(w_9);
                    else
                      v_9 = w_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_a_8, not_null(v_9), not_null(r_9));
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
            LocalPopChoice(c_8);
          }
        else
          {
            t = b_8;
            {
              ATerm y_9 = NULL,a_10 = NULL;
              ATerm z_9 = NULL;
              t = term_o_6;
              {
                t = u_69(t);
                {
                  z_9 = t;
                  if(((y_9 != NULL) && (y_9 != z_9)))
                    _fail(z_9);
                  else
                    y_9 = z_9;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, term_l_7, not_null(y_9), not_null(r_9));
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
              ATerm d_8 = t;
              int g_8 = stack_ptr;
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
                                              ATerm j_8 = t;
                                              int n_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(c_11));
                                                  ;
                                                  LocalPopChoice(n_8);
                                                }
                                              else
                                                {
                                                  t = j_8;
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
                  LocalPopChoice(g_8);
                }
              else
                {
                  t = d_8;
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
          t = (ATerm) ATmakeAppl(sym__3, term_l_7, not_null(u_12), not_null(c_13));
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
            t = (ATerm) ATmakeAppl(sym__3, term_l_7, not_null(e_14), not_null(h_14));
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
                        ATerm o_8;
                        o_8 = t;
                        {
                          ATerm m_15 = NULL;
                          m_15 = t;
                          if(((l_15 != NULL) && (l_15 != m_15)))
                            _fail(m_15);
                          else
                            l_15 = m_15;
                        }
                        t = o_8;
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
        ATerm p_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(h_16), not_null(i_16));
            ;
            LocalPopChoice(q_8);
          }
        else
          {
            t = p_8;
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
            ATerm u_8;
            u_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_a_8);
              t = geq_0(t);
            }
            t = u_8;
            {
              ATerm z_16 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_l_7);
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
ATerm repeat_1 (ATerm t, ATerm z_90 (ATerm))
{
  ATerm c_17 (ATerm t)
  {
    ATerm b_1 (ATerm t)
    {
      t = z_90(t);
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
  ATerm v_8 = t;
  int a_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = symbol2abox1_0(t);
      ;
      LocalPopChoice(a_9);
    }
  else
    {
      t = v_8;
      {
        ATerm b_9 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = symbol2abox2_0(t);
            ;
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            {
              ATerm d_9 = t;
              int i_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = symbol2abox3_0(t);
                  ;
                  LocalPopChoice(i_9);
                }
              else
                {
                  t = d_9;
                  {
                    ATerm j_9 = t;
                    int k_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = symbol2abox4_0(t);
                        ;
                        LocalPopChoice(k_9);
                      }
                    else
                      {
                        t = j_9;
                        {
                          ATerm l_9 = t;
                          int m_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = symbol2abox5_0(t);
                              ;
                              LocalPopChoice(m_9);
                            }
                          else
                            {
                              t = l_9;
                              {
                                ATerm n_9 = t;
                                int s_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = symbol2abox6_0(t);
                                    ;
                                    LocalPopChoice(s_9);
                                  }
                                else
                                  {
                                    t = n_9;
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
              ATerm t_9 = t;
              int b_10 = stack_ptr;
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
                  LocalPopChoice(b_10);
                }
              else
                {
                  t = t_9;
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
            t = (ATerm) ATmakeAppl(sym__2, not_null(w_19), term_l_7);
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
ATerm genzip_4 (ATerm t, ATerm v_79 (ATerm), ATerm w_79 (ATerm), ATerm x_79 (ATerm), ATerm y_79 (ATerm))
{
  ATerm p_20 (ATerm t)
  {
    ATerm c_10 = t;
    int d_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_79(t);
        ;
        LocalPopChoice(d_10);
      }
    else
      {
        t = c_10;
        {
          t = w_79(t);
          {
            t = _2(t, y_79, p_20);
            t = x_79(t);
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
  t = (ATerm) ATmakeAppl(sym__2, term_l_7, not_null(r_20));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm h_80 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, h_80);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm x_20 = NULL;
  ATerm z_20 = NULL,a_21 = NULL,b_21 = NULL;
  x_20 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_e_10, not_null(x_20));
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
              ATerm f_10;
              f_10 = t;
              {
                t = not_null(a_21);
                {
                  t = path_to_string_0(t);
                  {
                    ATerm f_1 (ATerm t)
                    {
                      t = term_g_10;
                      return(t);
                    }
                    t = notify_1(t, f_1);
                  }
                }
              }
              t = f_10;
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
    ATerm h_10 = t;
    int i_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0(t);
        ;
        LocalPopChoice(i_10);
      }
    else
      {
        t = h_10;
        {
          ATerm g_1 (ATerm t)
          {
            t = term_j_10;
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
  ATerm n_25 = NULL,o_25 = NULL;
  y_22 = t;
  {
    ATerm k_10;
    k_10 = t;
    {
      ATerm p_25 = NULL;
      ATerm t_25 = NULL,u_25 = NULL,x_25 = NULL;
      t = not_null(y_22);
      {
        p_25 = t;
        {
          t = SSL_explode_term(not_null(p_25));
          {
            t_25 = t;
            x_22 :
            if(match_cons(t_25, sym__2))
              {
                u_25 = ATgetArgument(t_25, 0);
                x_25 = ATgetArgument(t_25, 1);
                {
                  if(((n_25 != NULL) && (n_25 != u_25)))
                    _fail(u_25);
                  else
                    n_25 = u_25;
                  if(((o_25 != NULL) && (o_25 != x_25)))
                    _fail(x_25);
                  else
                    o_25 = x_25;
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
    t = k_10;
    {
      t = is_list_0(t);
      t = map_1(t, trm2abox_0);
    }
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm h_26 = NULL;
  h_26 = t;
  t = SSL_is_int(not_null(h_26));
  return(t);
}
ATerm trm2abox_int_0 (ATerm t)
{
  ATerm n_26 = NULL;
  t = is_int_0(t);
  {
    ATerm p_26 = NULL;
    t = int_to_string_0(t);
    {
      p_26 = t;
      if(((n_26 != NULL) && (n_26 != p_26)))
        _fail(p_26);
      else
        n_26 = p_26;
    }
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(n_26));
  }
  return(t);
}
ATerm trm2abox_string_0 (ATerm t)
{
  ATerm s_26 = NULL;
  t = is_string_0(t);
  {
    ATerm t_26 = NULL;
    t_26 = t;
    if(((s_26 != NULL) && (s_26 != t_26)))
      _fail(t_26);
    else
      s_26 = t_26;
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(s_26));
  }
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm l_10 = t;
  int m_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = trm2abox_string_0(t);
      ;
      LocalPopChoice(m_10);
    }
  else
    {
      t = l_10;
      {
        ATerm v_10 = t;
        int w_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = trm2abox_int_0(t);
            ;
            LocalPopChoice(w_10);
          }
        else
          {
            t = v_10;
            {
              ATerm x_10 = t;
              int z_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0(t);
                  ;
                  LocalPopChoice(z_10);
                }
              else
                {
                  t = x_10;
                  {
                    ATerm e_11 = t;
                    int f_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0(t);
                        ;
                        LocalPopChoice(f_11);
                      }
                    else
                      {
                        t = e_11;
                        {
                          ATerm w_26 = NULL;
                          ATerm x_26 = NULL;
                          x_26 = t;
                          if(((w_26 != NULL) && (w_26 != x_26)))
                            _fail(x_26);
                          else
                            w_26 = x_26;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_26)), term_g_11);
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
  ATerm a_27 = NULL;
  a_27 = t;
  t = SSL_close_file(not_null(a_27));
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm p_27 = NULL,q_27 = NULL,s_27 = NULL;
  p_27 = t;
  o_27 :
  if(match_cons(p_27, sym__2))
    {
      q_27 = ATgetArgument(p_27, 0);
      s_27 = ATgetArgument(p_27, 1);
      t = SSL_WriteToBinaryFile(not_null(q_27), not_null(s_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
  d_28 = t;
  c_28 :
  if(match_cons(d_28, sym__2))
    {
      e_28 = ATgetArgument(d_28, 0);
      f_28 = ATgetArgument(d_28, 1);
      {
        ATerm n_28 = NULL,o_28 = NULL,p_28 = NULL;
        ATerm h_11;
        h_11 = t;
        {
          ATerm q_28 = NULL;
          ATerm r_28 = NULL,s_28 = NULL,t_28 = NULL;
          t = d_86(t);
          {
            q_28 = t;
            {
              if(((n_28 != NULL) && (n_28 != q_28)))
                _fail(q_28);
              else
                n_28 = q_28;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(n_28), not_null(e_28), not_null(f_28));
                {
                  t = table_push_0(t);
                  {
                    ATerm i_11 = t;
                    int j_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(n_28), term_k_11);
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
                      r_28 = t;
                      b_28 :
                      if(((ATgetType(r_28) == AT_LIST) && !(ATisEmpty(r_28))))
                        {
                          s_28 = ATgetFirst((ATermList) r_28);
                          t_28 = (ATerm) ATgetNext((ATermList) r_28);
                          {
                            if(((o_28 != NULL) && (o_28 != s_28)))
                              _fail(s_28);
                            else
                              o_28 = s_28;
                            {
                              if(((p_28 != NULL) && (p_28 != t_28)))
                                _fail(t_28);
                              else
                                p_28 = t_28;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(n_28), term_k_11, (ATerm) ATinsert(CheckATermList(not_null(p_28)), (ATerm) ATinsert(CheckATermList(not_null(o_28)), not_null(e_28))));
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
ATerm obsolete_1 (ATerm t, ATerm i_89 (ATerm))
{
  ATerm l_11;
  l_11 = t;
  {
    t = i_89(t);
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
  ATerm b_29 = NULL,c_29 = NULL;
  ATerm p_11 = t;
  int q_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
      d_29 = t;
      y_28 :
      if(match_cons(d_29, sym__2))
        {
          e_29 = ATgetArgument(d_29, 0);
          f_29 = ATgetArgument(d_29, 1);
          {
            if(((c_29 != NULL) && (c_29 != e_29)))
              _fail(e_29);
            else
              c_29 = e_29;
            if(((b_29 != NULL) && (b_29 != f_29)))
              _fail(f_29);
            else
              b_29 = f_29;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(q_11);
      t = SSL_open_file(not_null(c_29), not_null(b_29));
    }
  else
    {
      t = p_11;
      {
        ATerm g_29 = NULL;
        ATerm h_29 = NULL;
        ATerm j_1 (ATerm t)
        {
          t = term_r_11;
          return(t);
        }
        t = obsolete_1(t, j_1);
        {
          g_29 = t;
          {
            if(((c_29 != NULL) && (c_29 != g_29)))
              _fail(g_29);
            else
              c_29 = g_29;
            {
              ATerm t_11;
              t_11 = t;
              {
                ATerm i_29 = NULL;
                t = term_u_11;
                {
                  i_29 = t;
                  if(((h_29 != NULL) && (h_29 != i_29)))
                    _fail(i_29);
                  else
                    h_29 = i_29;
                }
              }
              t = t_11;
              t = SSL_open_file(not_null(c_29), not_null(h_29));
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
  ATerm n_29 = NULL;
  ATerm o_29 = NULL;
  t = term_o_6;
  {
    t = new_0(t);
    {
      o_29 = t;
      if(((n_29 != NULL) && (n_29 != o_29)))
        _fail(o_29);
      else
        n_29 = o_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_29), term_w_11);
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
  ATerm z_29 = NULL;
  t = new_file_0(t);
  {
    z_29 = t;
    {
      ATerm x_11;
      x_11 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), term_u_11);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_29), term_o_6);
            {
              ATerm l_1 (ATerm t)
              {
                t = term_y_11;
                return(t);
              }
              t = assert_1(t, l_1);
            }
          }
        }
      }
      t = x_11;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm e_30 = NULL;
  ATerm i_30 = NULL;
  e_30 = t;
  {
    ATerm j_30 = NULL;
    t = xtc_new_file_0(t);
    {
      j_30 = t;
      {
        if(((i_30 != NULL) && (i_30 != j_30)))
          _fail(j_30);
        else
          i_30 = j_30;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_30), not_null(e_30));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(i_30);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(i_30));
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm o_30 = NULL;
  ATerm q_30 = NULL;
  o_30 = t;
  {
    ATerm g_12;
    g_12 = t;
    {
      ATerm s_30 = NULL;
      t = term_h_12;
      {
        s_30 = t;
        if(((q_30 != NULL) && (q_30 != s_30)))
          _fail(s_30);
        else
          q_30 = s_30;
      }
    }
    t = g_12;
    {
      t = SSL_open_file(not_null(o_30), not_null(q_30));
      t = SSL_close_file(not_null(o_30));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm a_31 = NULL,b_31 = NULL;
  a_31 = t;
  z_30 :
  if(match_cons(a_31, sym_stdin_0))
    {
      ATerm c_31 = NULL;
      ATerm d_31 = NULL;
      t = term_i_12;
      {
        t = ReadFromFile_0(t);
        {
          d_31 = t;
          if(((c_31 != NULL) && (c_31 != d_31)))
            _fail(d_31);
          else
            c_31 = d_31;
        }
      }
      t = not_null(c_31);
    }
  else
    {
      if(match_cons(a_31, sym_FILE_1))
        {
          b_31 = ATgetArgument(a_31, 0);
          {
            ATerm f_31 = NULL;
            ATerm g_31 = NULL;
            t = not_null(b_31);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  g_31 = t;
                  if(((f_31 != NULL) && (f_31 != g_31)))
                    _fail(g_31);
                  else
                    f_31 = g_31;
                }
              }
            }
            t = not_null(f_31);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm s_72 (ATerm))
{
  t = read_from_0(t);
  {
    t = s_72(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm n_31 = NULL,t_31 = NULL,u_31 = NULL;
  n_31 = t;
  m_31 :
  if(match_cons(n_31, sym__2))
    {
      t_31 = ATgetArgument(n_31, 0);
      u_31 = ATgetArgument(n_31, 1);
      t = SSL_copy(not_null(t_31), not_null(u_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm c_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym_stderr_0))
    {
      ATerm e_32 = NULL,g_32 = NULL;
      ATerm j_12;
      j_12 = t;
      {
        ATerm f_32 = NULL;
        t = SSLgetAnnotations(not_null(c_32));
        {
          f_32 = t;
          if(((e_32 != NULL) && (e_32 != f_32)))
            _fail(f_32);
          else
            e_32 = f_32;
        }
      }
      t = j_12;
      {
        ATerm n_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(e_32));
        {
          n_32 = t;
          if(((g_32 != NULL) && (g_32 != n_32)))
            _fail(n_32);
          else
            g_32 = n_32;
        }
        t = not_null(g_32);
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
  ATerm v_32 = NULL;
  v_32 = t;
  u_32 :
  if(match_cons(v_32, sym_stdout_0))
    {
      ATerm x_32 = NULL,z_32 = NULL;
      ATerm k_12;
      k_12 = t;
      {
        ATerm y_32 = NULL;
        t = SSLgetAnnotations(not_null(v_32));
        {
          y_32 = t;
          if(((x_32 != NULL) && (x_32 != y_32)))
            _fail(y_32);
          else
            x_32 = y_32;
        }
      }
      t = k_12;
      {
        ATerm a_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(x_32));
        {
          a_33 = t;
          if(((z_32 != NULL) && (z_32 != a_33)))
            _fail(a_33);
          else
            z_32 = a_33;
        }
        t = not_null(z_32);
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
  ATerm m_33 = NULL,n_33 = NULL;
  m_33 = t;
  l_33 :
  if(match_cons(m_33, sym_FILE_1))
    {
      n_33 = ATgetArgument(m_33, 0);
      {
        ATerm l_12 = t;
        int m_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_33 = NULL;
            ATerm q_33 = NULL;
            t = m_0(t);
            {
              q_33 = t;
              {
                if(((p_33 != NULL) && (p_33 != q_33)))
                  _fail(q_33);
                else
                  p_33 = q_33;
                {
                  ATerm n_12 = t;
                  int o_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      ;
                      LocalPopChoice(o_12);
                    }
                  else
                    {
                      t = n_12;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_33), not_null(p_33));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_33));
            ;
            LocalPopChoice(m_12);
          }
        else
          {
            t = l_12;
            {
              ATerm p_12 = t;
              int s_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm s_33 = NULL;
                  ATerm t_33 = NULL;
                  t = m_0(t);
                  {
                    t_33 = t;
                    {
                      if(((s_33 != NULL) && (s_33 != t_33)))
                        _fail(t_33);
                      else
                        s_33 = t_33;
                      {
                        ATerm t_12 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm d_13 = t;
                            int e_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                ;
                                LocalPopChoice(e_13);
                              }
                            else
                              {
                                t = d_13;
                                {
                                  ATerm f_13 = t;
                                  int i_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      ;
                                      LocalPopChoice(i_13);
                                    }
                                  else
                                    {
                                      t = f_13;
                                      {
                                        ATerm u_33 = NULL;
                                        u_33 = t;
                                        if(((n_33 != NULL) && (n_33 != u_33)))
                                          _fail(u_33);
                                        else
                                          n_33 = u_33;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = t_12;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(n_33), not_null(s_33));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_33));
                  ;
                  LocalPopChoice(s_12);
                }
              else
                {
                  t = p_12;
                  {
                    ATerm w_33 = NULL;
                    t = m_0(t);
                    {
                      w_33 = t;
                      if(((n_33 != NULL) && (n_33 != w_33)))
                        _fail(w_33);
                      else
                        n_33 = w_33;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_33));
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
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  l_34 :
  if(match_cons(m_34, sym__2))
    {
      n_34 = ATgetArgument(m_34, 0);
      o_34 = ATgetArgument(m_34, 1);
      {
        ATerm j_13;
        j_13 = t;
        {
          ATerm r_34 = NULL;
          ATerm s_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_34), not_null(o_34));
          {
            ATerm k_13 = t;
            int l_13 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                ;
                LocalPopChoice(l_13);
              }
            else
              {
                t = k_13;
                t = (ATerm) ATempty;
              }
            {
              s_34 = t;
              if(((r_34 != NULL) && (r_34 != s_34)))
                _fail(s_34);
              else
                r_34 = s_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(n_34), not_null(o_34), not_null(r_34));
            t = table_put_0(t);
          }
        }
        t = j_13;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm a_86 (ATerm))
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  ATerm m_13;
  m_13 = t;
  {
    ATerm c_35 = NULL;
    ATerm k_35 = NULL,l_35 = NULL,m_35 = NULL;
    t = a_86(t);
    {
      c_35 = t;
      {
        if(((b_35 != NULL) && (b_35 != c_35)))
          _fail(c_35);
        else
          b_35 = c_35;
        {
          ATerm u_13 = t;
          int v_13 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), term_k_11);
              t = table_get_0(t);
              ;
              LocalPopChoice(v_13);
            }
          else
            {
              t = u_13;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            k_35 = t;
            y_34 :
            if(((ATgetType(k_35) == AT_LIST) && !(ATisEmpty(k_35))))
              {
                l_35 = ATgetFirst((ATermList) k_35);
                m_35 = (ATerm) ATgetNext((ATermList) k_35);
                {
                  if(((a_35 != NULL) && (a_35 != l_35)))
                    _fail(l_35);
                  else
                    a_35 = l_35;
                  {
                    if(((z_34 != NULL) && (z_34 != m_35)))
                      _fail(m_35);
                    else
                      z_34 = m_35;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(b_35), term_k_11, not_null(z_34));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(a_35);
                          {
                            ATerm m_1 (ATerm t)
                            {
                              ATerm n_35 = NULL;
                              n_35 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_35), not_null(n_35));
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
  t = m_13;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm t_35 = NULL;
  t_35 = t;
  t = SSL_remove(not_null(t_35));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm r_76 (ATerm), ATerm s_76 (ATerm))
{
  ATerm w_13 = t;
  int x_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_76(t);
      t = s_76(t);
      ;
      LocalPopChoice(x_13);
    }
  else
    {
      t = w_13;
      {
        t = s_76(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm y_35 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm z_35 = NULL;
    ATerm a_36 = NULL;
    t = z_85(t);
    {
      z_35 = t;
      {
        if(((y_35 != NULL) && (y_35 != z_35)))
          _fail(z_35);
        else
          y_35 = z_35;
        {
          ATerm b_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_35), term_k_11);
          {
            ATerm z_13 = t;
            int i_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(i_14);
              }
            else
              {
                t = z_13;
                t = (ATerm) ATempty;
              }
            {
              b_36 = t;
              if(((a_36 != NULL) && (a_36 != b_36)))
                _fail(b_36);
              else
                a_36 = b_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(y_35), term_k_11, (ATerm) ATinsert(CheckATermList(not_null(a_36)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = y_13;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm t_71 (ATerm))
{
  ATerm g_36 = NULL,h_36 = NULL;
  ATerm n_1 (ATerm t)
  {
    t = term_y_11;
    return(t);
  }
  t = begin_scope_1(t, n_1);
  {
    ATerm o_1 (ATerm t)
    {
      ATerm j_14;
      j_14 = t;
      {
        ATerm i_36 = NULL,j_36 = NULL,k_36 = NULL;
        ATerm k_14 = t;
        int l_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_o_14;
            t = table_get_0(t);
            ;
            LocalPopChoice(l_14);
          }
        else
          {
            t = k_14;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          i_36 = t;
          f_36 :
          if(((ATgetType(i_36) == AT_LIST) && !(ATisEmpty(i_36))))
            {
              j_36 = ATgetFirst((ATermList) i_36);
              k_36 = (ATerm) ATgetNext((ATermList) i_36);
              {
                if(((h_36 != NULL) && (h_36 != j_36)))
                  _fail(j_36);
                else
                  h_36 = j_36;
                {
                  if(((g_36 != NULL) && (g_36 != k_36)))
                    _fail(k_36);
                  else
                    g_36 = k_36;
                  {
                    t = not_null(h_36);
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
      t = j_14;
      {
        ATerm q_1 (ATerm t)
        {
          t = term_y_11;
          return(t);
        }
        t = end_scope_1(t, q_1);
      }
      return(t);
    }
    t = restore_always_2(t, t_71, o_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm u_71 (ATerm))
{
  ATerm r_1 (ATerm t)
  {
    ATerm p_14 = t;
    int q_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_36 = NULL;
        ATerm o_36 = NULL;
        t = term_r_14;
        {
          t = get_config_0(t);
          {
            o_36 = t;
            if(((n_36 != NULL) && (n_36 != o_36)))
              _fail(o_36);
            else
              n_36 = o_36;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(n_36));
        ;
        LocalPopChoice(q_14);
      }
    else
      {
        t = p_14;
        t = term_i_12;
      }
    {
      t = u_71(t);
      {
        ATerm s_1 (ATerm t)
        {
          ATerm s_14 = t;
          int g_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_h_15;
              t = get_config_0(t);
              ;
              LocalPopChoice(g_15);
            }
          else
            {
              t = s_14;
              t = term_i_15;
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
  ATerm r_36 = NULL;
  r_36 = t;
  t = SSL_int_to_string(not_null(r_36));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm d_37 = NULL,e_37 = NULL,f_37 = NULL;
  d_37 = t;
  c_37 :
  if(match_cons(d_37, sym_Path1_1))
    {
      e_37 = ATgetArgument(d_37, 0);
      t = not_null(e_37);
    }
  else
    {
      if(match_cons(d_37, sym_Path_2))
        {
          e_37 = ATgetArgument(d_37, 0);
          f_37 = ATgetArgument(d_37, 1);
          {
            ATerm n_37 = NULL,v_37 = NULL;
            t = not_null(f_37);
            {
              ATerm t_1 (ATerm t)
              {
                ATerm o_37 = NULL,p_37 = NULL,q_37 = NULL;
                o_37 = t;
                a_37 :
                if(match_cons(o_37, sym_selector_2))
                  {
                    p_37 = ATgetArgument(o_37, 0);
                    q_37 = ATgetArgument(o_37, 1);
                    {
                      ATerm t_37 = NULL;
                      ATerm u_37 = NULL;
                      t = not_null(p_37);
                      {
                        t = int_to_string_0(t);
                        {
                          u_37 = t;
                          if(((t_37 != NULL) && (t_37 != u_37)))
                            _fail(u_37);
                          else
                            t_37 = u_37;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(q_37)), term_k_15), not_null(t_37)), term_j_15);
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
                  v_37 = t;
                  {
                    if(((n_37 != NULL) && (n_37 != v_37)))
                      _fail(v_37);
                    else
                      n_37 = v_37;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(n_37)), not_null(e_37));
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
  ATerm l_38 = NULL,m_38 = NULL,n_38 = NULL;
  l_38 = t;
  k_38 :
  if(match_cons(l_38, sym_Path1_1))
    {
      m_38 = ATgetArgument(l_38, 0);
      t = (ATerm) ATinsert(ATempty, not_null(m_38));
    }
  else
    {
      if(match_cons(l_38, sym_Path_2))
        {
          m_38 = ATgetArgument(l_38, 0);
          n_38 = ATgetArgument(l_38, 1);
          {
            ATerm v_38 = NULL,d_39 = NULL;
            t = not_null(n_38);
            {
              ATerm u_1 (ATerm t)
              {
                ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL;
                w_38 = t;
                i_38 :
                if(match_cons(w_38, sym_selector_2))
                  {
                    x_38 = ATgetArgument(w_38, 0);
                    y_38 = ATgetArgument(w_38, 1);
                    t = not_null(x_38);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, u_1);
              {
                d_39 = t;
                {
                  if(((v_38 != NULL) && (v_38 != d_39)))
                    _fail(d_39);
                  else
                    v_38 = d_39;
                  t = (ATerm) ATinsert(CheckATermList(not_null(v_38)), not_null(m_38));
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
  ATerm l_39 = NULL,w_39 = NULL,x_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym_PP_Entry_2))
    {
      w_39 = ATgetArgument(l_39, 0);
      x_39 = ATgetArgument(l_39, 1);
      {
        ATerm b_40 = NULL;
        ATerm c_40 = NULL;
        t = not_null(w_39);
        {
          t = mk_key_0(t);
          {
            c_40 = t;
            if(((b_40 != NULL) && (b_40 != c_40)))
              _fail(c_40);
            else
              b_40 = c_40;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_e_10, not_null(b_40), (ATerm) ATmakeAppl(sym__2, not_null(w_39), not_null(x_39)));
          {
            t = table_put_0(t);
            {
              t = not_null(w_39);
              {
                t = path_to_string_0(t);
                {
                  ATerm v_1 (ATerm t)
                  {
                    t = term_p_15;
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
ATerm selector_2 (ATerm t, ATerm k_66 (ATerm), ATerm l_66 (ATerm))
{
  ATerm t_40 = NULL,u_40 = NULL,v_40 = NULL;
  t_40 = t;
  s_40 :
  if(match_cons(t_40, sym_selector_2))
    {
      u_40 = ATgetArgument(t_40, 0);
      v_40 = ATgetArgument(t_40, 1);
      {
        ATerm e_41 = NULL,g_41 = NULL;
        ATerm f_41 = NULL;
        t = SSLgetAnnotations(not_null(t_40));
        {
          f_41 = t;
          if(((e_41 != NULL) && (e_41 != f_41)))
            _fail(f_41);
          else
            e_41 = f_41;
        }
        {
          t = not_null(u_40);
          {
            ATerm i_41 = NULL;
            t = k_66(t);
            {
              g_41 = t;
              {
                t = not_null(v_40);
                {
                  ATerm k_41 = NULL;
                  t = l_66(t);
                  {
                    i_41 = t;
                    {
                      ATerm l_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(g_41), not_null(i_41)), not_null(e_41));
                      {
                        l_41 = t;
                        if(((k_41 != NULL) && (k_41 != l_41)))
                          _fail(l_41);
                        else
                          k_41 = l_41;
                      }
                      t = not_null(k_41);
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
  ATerm w_41 = NULL,x_41 = NULL,y_41 = NULL,z_41 = NULL,a_42 = NULL;
  w_41 = t;
  s_41 :
  if(((ATgetType(w_41) == AT_LIST) && !(ATisEmpty(w_41))))
    {
      x_41 = ATgetFirst((ATermList) w_41);
      y_41 = (ATerm) ATgetNext((ATermList) w_41);
      t_41 :
      if(match_int(x_41, 92))
        {
          u_41 :
          if(((ATgetType(y_41) == AT_LIST) && !(ATisEmpty(y_41))))
            {
              z_41 = ATgetFirst((ATermList) y_41);
              a_42 = (ATerm) ATgetNext((ATermList) y_41);
              v_41 :
              if(match_int(z_41, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(a_42)), term_q_15);
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
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL;
  i_42 = t;
  e_42 :
  if(((ATgetType(i_42) == AT_LIST) && !(ATisEmpty(i_42))))
    {
      j_42 = ATgetFirst((ATermList) i_42);
      k_42 = (ATerm) ATgetNext((ATermList) i_42);
      f_42 :
      if(match_int(j_42, 92))
        {
          g_42 :
          if(((ATgetType(k_42) == AT_LIST) && !(ATisEmpty(k_42))))
            {
              l_42 = ATgetFirst((ATermList) k_42);
              m_42 = (ATerm) ATgetNext((ATermList) k_42);
              h_42 :
              if(match_int(l_42, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_42)), term_r_15);
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
  ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL,y_42 = NULL;
  u_42 = t;
  q_42 :
  if(((ATgetType(u_42) == AT_LIST) && !(ATisEmpty(u_42))))
    {
      v_42 = ATgetFirst((ATermList) u_42);
      w_42 = (ATerm) ATgetNext((ATermList) u_42);
      r_42 :
      if(match_int(v_42, 92))
        {
          s_42 :
          if(((ATgetType(w_42) == AT_LIST) && !(ATisEmpty(w_42))))
            {
              x_42 = ATgetFirst((ATermList) w_42);
              y_42 = (ATerm) ATgetNext((ATermList) w_42);
              t_42 :
              if(match_int(x_42, 92))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_42)), term_s_15);
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
  ATerm g_43 = NULL,l_43 = NULL,m_43 = NULL,n_43 = NULL,q_43 = NULL;
  g_43 = t;
  c_43 :
  if(((ATgetType(g_43) == AT_LIST) && !(ATisEmpty(g_43))))
    {
      l_43 = ATgetFirst((ATermList) g_43);
      m_43 = (ATerm) ATgetNext((ATermList) g_43);
      d_43 :
      if(match_int(l_43, 92))
        {
          e_43 :
          if(((ATgetType(m_43) == AT_LIST) && !(ATisEmpty(m_43))))
            {
              n_43 = ATgetFirst((ATermList) m_43);
              q_43 = (ATerm) ATgetNext((ATermList) m_43);
              f_43 :
              if(match_int(n_43, 34))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_43)), term_b_16);
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
  ATerm c_16 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_double_quote_0(t);
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
            t = UnEscape_backslash_0(t);
            ;
            LocalPopChoice(j_16);
          }
        else
          {
            t = e_16;
            {
              ATerm k_16 = t;
              int l_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UnEscape_linefeed_0(t);
                  ;
                  LocalPopChoice(l_16);
                }
              else
                {
                  t = k_16;
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
    ATerm m_16 = t;
    int n_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, unescape_chars_0);
        ;
        LocalPopChoice(n_16);
      }
    else
      {
        t = m_16;
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
ATerm at_last_1 (ATerm t, ATerm u_78 (ATerm))
{
  ATerm x_43 (ATerm t)
  {
    ATerm v_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = u_78(t);
        ;
        LocalPopChoice(w_16);
      }
    else
      {
        t = v_16;
        t = Cons_2(t, _id, x_43);
      }
    return(t);
  }
  t = x_43(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm a_44 = NULL,b_44 = NULL,c_44 = NULL;
  a_44 = t;
  z_43 :
  if(((ATgetType(a_44) == AT_LIST) && !(ATisEmpty(a_44))))
    {
      b_44 = ATgetFirst((ATermList) a_44);
      c_44 = (ATerm) ATgetNext((ATermList) a_44);
      t = not_null(c_44);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL;
  i_44 = t;
  g_44 :
  if(((ATgetType(i_44) == AT_LIST) && !(ATisEmpty(i_44))))
    {
      j_44 = ATgetFirst((ATermList) i_44);
      k_44 = (ATerm) ATgetNext((ATermList) i_44);
      h_44 :
      if(((ATgetType(k_44) == AT_LIST) && ATisEmpty(k_44)))
        {
          t = not_null(j_44);
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
  ATerm x_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      ;
      LocalPopChoice(a_17);
    }
  else
    {
      t = x_16;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm q_44 = NULL,r_44 = NULL,s_44 = NULL;
  q_44 = t;
  p_44 :
  if(((ATgetType(q_44) == AT_LIST) && !(ATisEmpty(q_44))))
    {
      r_44 = ATgetFirst((ATermList) q_44);
      s_44 = (ATerm) ATgetNext((ATermList) q_44);
      t = not_null(r_44);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm k_90 (ATerm))
{
  ATerm b_17;
  b_17 = t;
  {
    t = Hd_0(t);
    t = k_90(t);
  }
  t = b_17;
  {
    ATerm d_17;
    d_17 = t;
    {
      t = last_0(t);
      t = k_90(t);
    }
    t = d_17;
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
    ATerm w_44 = NULL;
    w_44 = t;
    v_44 :
    if(!(match_int(w_44, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, w_1);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm v_90 (ATerm))
{
  t = explode_string_0(t);
  {
    t = v_90(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, un_double_quote_chars_0);
  return(t);
}
ATerm S_1 (ATerm t, ATerm p_66 (ATerm))
{
  ATerm c_45 = NULL,d_45 = NULL;
  c_45 = t;
  b_45 :
  if(match_cons(c_45, sym_S_1))
    {
      d_45 = ATgetArgument(c_45, 0);
      {
        ATerm g_45 = NULL,i_45 = NULL;
        ATerm h_45 = NULL;
        t = SSLgetAnnotations(not_null(c_45));
        {
          h_45 = t;
          if(((g_45 != NULL) && (g_45 != h_45)))
            _fail(h_45);
          else
            g_45 = h_45;
        }
        {
          t = not_null(d_45);
          {
            ATerm k_45 = NULL;
            t = p_66(t);
            {
              i_45 = t;
              {
                ATerm l_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(i_45)), not_null(g_45));
                {
                  l_45 = t;
                  if(((k_45 != NULL) && (k_45 != l_45)))
                    _fail(l_45);
                  else
                    k_45 = l_45;
                }
                t = not_null(k_45);
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
ATerm SOpt_2 (ATerm t, ATerm b_68 (ATerm), ATerm c_68 (ATerm))
{
  ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL;
  w_45 = t;
  v_45 :
  if(match_cons(w_45, sym_SOpt_2))
    {
      x_45 = ATgetArgument(w_45, 0);
      y_45 = ATgetArgument(w_45, 1);
      {
        ATerm c_46 = NULL,e_46 = NULL;
        ATerm d_46 = NULL;
        t = SSLgetAnnotations(not_null(w_45));
        {
          d_46 = t;
          if(((c_46 != NULL) && (c_46 != d_46)))
            _fail(d_46);
          else
            c_46 = d_46;
        }
        {
          t = not_null(x_45);
          {
            ATerm g_46 = NULL;
            t = b_68(t);
            {
              e_46 = t;
              {
                t = not_null(y_45);
                {
                  ATerm i_46 = NULL;
                  t = c_68(t);
                  {
                    g_46 = t;
                    {
                      ATerm j_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(e_46), not_null(g_46)), not_null(c_46));
                      {
                        j_46 = t;
                        if(((i_46 != NULL) && (i_46 != j_46)))
                          _fail(j_46);
                        else
                          i_46 = j_46;
                      }
                      t = not_null(i_46);
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
ATerm Arg2_2 (ATerm t, ATerm n_66 (ATerm), ATerm o_66 (ATerm))
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
  v_46 = t;
  u_46 :
  if(match_cons(v_46, sym_Arg2_2))
    {
      w_46 = ATgetArgument(v_46, 0);
      x_46 = ATgetArgument(v_46, 1);
      {
        ATerm b_47 = NULL,d_47 = NULL;
        ATerm c_47 = NULL;
        t = SSLgetAnnotations(not_null(v_46));
        {
          c_47 = t;
          if(((b_47 != NULL) && (b_47 != c_47)))
            _fail(c_47);
          else
            b_47 = c_47;
        }
        {
          t = not_null(w_46);
          {
            ATerm f_47 = NULL;
            t = n_66(t);
            {
              d_47 = t;
              {
                t = not_null(x_46);
                {
                  ATerm h_47 = NULL;
                  t = o_66(t);
                  {
                    f_47 = t;
                    {
                      ATerm i_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, not_null(d_47), not_null(f_47)), not_null(b_47));
                      {
                        i_47 = t;
                        if(((h_47 != NULL) && (h_47 != i_47)))
                          _fail(i_47);
                        else
                          h_47 = i_47;
                      }
                      t = not_null(h_47);
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
ATerm Arg_1 (ATerm t, ATerm m_66 (ATerm))
{
  ATerm t_47 = NULL,u_47 = NULL;
  t_47 = t;
  s_47 :
  if(match_cons(t_47, sym_Arg_1))
    {
      u_47 = ATgetArgument(t_47, 0);
      {
        ATerm x_47 = NULL,z_47 = NULL;
        ATerm y_47 = NULL;
        t = SSLgetAnnotations(not_null(t_47));
        {
          y_47 = t;
          if(((x_47 != NULL) && (x_47 != y_47)))
            _fail(y_47);
          else
            x_47 = y_47;
        }
        {
          t = not_null(u_47);
          {
            ATerm b_48 = NULL;
            t = m_66(t);
            {
              z_47 = t;
              {
                ATerm c_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(z_47)), not_null(x_47));
                {
                  c_48 = t;
                  if(((b_48 != NULL) && (b_48 != c_48)))
                    _fail(c_48);
                  else
                    b_48 = c_48;
                }
                t = not_null(b_48);
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
  ATerm e_17 = t;
  int p_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1(t, string_to_int_0);
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
            t = Arg2_2(t, string_to_int_0, string_to_int_0);
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
                  t = SOpt_2(t, _id, _id);
                  ;
                  LocalPopChoice(v_17);
                }
              else
                {
                  t = s_17;
                  {
                    ATerm w_17 = t;
                    int x_17 = stack_ptr;
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
                        LocalPopChoice(x_17);
                      }
                    else
                      {
                        t = w_17;
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
ATerm topdown_1 (ATerm t, ATerm y_72 (ATerm))
{
  t = y_72(t);
  {
    ATerm y_1 (ATerm t)
    {
      t = topdown_1(t, y_72);
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
  ATerm q_48 = NULL,r_48 = NULL;
  q_48 = t;
  p_48 :
  if(match_cons(q_48, sym_PP_Table_1))
    {
      r_48 = ATgetArgument(q_48, 0);
      {
        t = not_null(r_48);
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
ATerm oncetd_1 (ATerm t, ATerm o_74 (ATerm))
{
  ATerm u_48 (ATerm t)
  {
    ATerm y_17 = t;
    int d_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_74(t);
        ;
        LocalPopChoice(d_18);
      }
    else
      {
        t = y_17;
        t = _one(t, u_48);
      }
    return(t);
  }
  t = u_48(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
  y_48 = t;
  x_48 :
  if(match_cons(y_48, sym__2))
    {
      z_48 = ATgetArgument(y_48, 0);
      a_49 = ATgetArgument(y_48, 1);
      {
        ATerm e_18;
        e_18 = t;
        {
          t = not_null(a_49);
          {
            ATerm e_2 (ATerm t)
            {
              ATerm d_49 = NULL;
              d_49 = t;
              if(((z_48 != NULL) && (z_48 != d_49)))
                _fail(d_49);
              else
                z_48 = d_49;
              return(t);
            }
            t = oncetd_1(t, e_2);
          }
        }
        t = e_18;
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
  t = term_j_18;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm k_49 = NULL;
  ATerm p_49 = NULL;
  k_49 = t;
  {
    ATerm q_49 = NULL;
    t = get_options_0(t);
    {
      q_49 = t;
      {
        if(((p_49 != NULL) && (p_49 != q_49)))
          _fail(q_49);
        else
          p_49 = q_49;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_49), not_null(p_49));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_o_6;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm k_18;
  k_18 = t;
  {
    t = term_o_6;
    {
      t = j_86(t);
      t = check_option_0(t);
    }
  }
  t = k_18;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm l_18 = t;
  int m_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_2 (ATerm t)
      {
        t = term_t_18;
        return(t);
      }
      t = has_option_1(t, f_2);
      {
        t = (ATerm) ATinsert(ATempty, term_u_18);
        t = fatal_error_0(t);
      }
      ;
      LocalPopChoice(m_18);
    }
  else
    {
      t = l_18;
      {
        t = (ATerm) ATinsert(ATempty, term_v_18);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm l_93 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  d_50 = t;
  b_50 :
  if(match_cons(d_50, sym__2))
    {
      e_50 = ATgetArgument(d_50, 0);
      f_50 = ATgetArgument(d_50, 1);
      c_50 :
      if(match_string(e_50, "in-type"))
        {
          ATerm h_50 = NULL,i_50 = NULL;
          ATerm x_18;
          x_18 = t;
          {
            ATerm j_50 = NULL;
            ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL,t_50 = NULL,u_50 = NULL;
            t = not_null(f_50);
            {
              j_50 = t;
              {
                t = SSL_explode_term(not_null(j_50));
                {
                  p_50 = t;
                  y_49 :
                  if(match_cons(p_50, sym__2))
                    {
                      q_50 = ATgetArgument(p_50, 0);
                      r_50 = ATgetArgument(p_50, 1);
                      z_49 :
                      if(((ATgetType(r_50) == AT_LIST) && !(ATisEmpty(r_50))))
                        {
                          t_50 = ATgetFirst((ATermList) r_50);
                          u_50 = (ATerm) ATgetNext((ATermList) r_50);
                          a_50 :
                          if(((ATgetType(u_50) == AT_LIST) && ATisEmpty(u_50)))
                            {
                              {
                                if(((i_50 != NULL) && (i_50 != q_50)))
                                  _fail(q_50);
                                else
                                  i_50 = q_50;
                                if(((h_50 != NULL) && (h_50 != t_50)))
                                  _fail(t_50);
                                else
                                  h_50 = t_50;
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
          t = x_18;
          {
            t = not_null(i_50);
            {
              ATerm f_19 = t;
              int g_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_93(t);
                  ;
                  LocalPopChoice(g_19);
                }
              else
                {
                  t = f_19;
                  t = type_failure_0(t);
                }
            }
            t = not_null(h_50);
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
ATerm termid_check_1 (ATerm t, ATerm s_93 (ATerm))
{
  ATerm a_51 = NULL;
  ATerm c_51 = NULL;
  a_51 = t;
  {
    ATerm d_51 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_h_19, not_null(a_51));
    {
      t = InId_1(t, s_93);
      {
        d_51 = t;
        if(((c_51 != NULL) && (c_51 != d_51)))
          _fail(d_51);
        else
          c_51 = d_51;
      }
    }
    t = not_null(c_51);
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm h_51 = NULL;
  ATerm i_19 = t;
  int j_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_51 = NULL;
      i_51 = t;
      {
        if(((h_51 != NULL) && (h_51 != i_51)))
          _fail(i_51);
        else
          h_51 = i_51;
        t = SSL_ReadFromFile(not_null(h_51));
      }
      ;
      LocalPopChoice(j_19);
    }
  else
    {
      t = i_19;
      {
        ATerm g_2 (ATerm t)
        {
          t = term_o_19;
          return(t);
        }
        t = debug_1(t, g_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm notify_1 (ATerm t, ATerm i_100 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    t = debug_1(t, i_100);
    return(t);
  }
  t = if_verbose1_1(t, h_2);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm n_51 = NULL;
  n_51 = t;
  {
    t = term_e_10;
    {
      t = table_create_0(t);
      {
        t = not_null(n_51);
        {
          ATerm i_2 (ATerm t)
          {
            ATerm j_2 (ATerm t)
            {
              t = term_p_19;
              return(t);
            }
            t = notify_1(t, j_2);
            {
              t = ReadFromFile_0(t);
              {
                ATerm k_2 (ATerm t)
                {
                  ATerm p_51 = NULL;
                  p_51 = t;
                  l_51 :
                  if(!(match_string(p_51, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, k_2);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, i_2);
        }
      }
    }
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm q_19;
  q_19 = t;
  {
    ATerm s_51 = NULL;
    ATerm t_51 = NULL;
    t_51 = t;
    if(((s_51 != NULL) && (s_51 != t_51)))
      _fail(t_51);
    else
      s_51 = t_51;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_19, not_null(s_51));
      t = printnl_0(t);
    }
  }
  t = q_19;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm s_19;
  s_19 = t;
  {
    t = error_0(t);
    {
      t = term_l_7;
      t = exit_0(t);
    }
  }
  t = s_19;
  return(t);
}
ATerm get_config_p_0 (ATerm t)
{
  ATerm a_20 = t;
  int b_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_c_20;
      t = get_config_0(t);
      ;
      LocalPopChoice(b_20);
    }
  else
    {
      t = a_20;
      {
        t = (ATerm) ATinsert(ATempty, term_f_20);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm g_20;
  g_20 = t;
  {
    t = get_config_p_0(t);
    {
      t = reverse_0(t);
      t = read_pp_tables_0(t);
    }
  }
  t = g_20;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm m_2 (ATerm t)
      {
        t = trm2abox_0(t);
        {
          ATerm n_2 (ATerm t)
          {
            ATerm w_51 = NULL;
            ATerm x_51 = NULL;
            x_51 = t;
            if(((w_51 != NULL) && (w_51 != x_51)))
              _fail(x_51);
            else
              w_51 = x_51;
            t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(w_51));
            return(t);
          }
          t = if_2(t, is_list_0, n_2);
        }
        return(t);
      }
      t = xtc_io_transform_1(t, m_2);
      return(t);
    }
    t = xtc_io_1(t, l_2);
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm d_52 = NULL,e_52 = NULL,f_52 = NULL;
  d_52 = t;
  c_52 :
  if(match_cons(d_52, sym__2))
    {
      e_52 = ATgetArgument(d_52, 0);
      f_52 = ATgetArgument(d_52, 1);
      {
        ATerm i_52 = NULL;
        ATerm j_52 = NULL,l_52 = NULL;
        ATerm k_52 = NULL;
        t = not_null(e_52);
        {
          ATerm h_20 = t;
          int n_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              ;
              LocalPopChoice(n_20);
            }
          else
            {
              t = h_20;
              t = (ATerm) ATempty;
            }
          {
            k_52 = t;
            if(((j_52 != NULL) && (j_52 != k_52)))
              _fail(k_52);
            else
              j_52 = k_52;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_52), not_null(j_52));
          {
            t = conc_0(t);
            {
              l_52 = t;
              if(((i_52 != NULL) && (i_52 != l_52)))
                _fail(l_52);
              else
                i_52 = l_52;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_20, not_null(e_52), not_null(i_52));
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
  ATerm o_2 (ATerm t)
  {
    ATerm p_53 = NULL;
    p_53 = t;
    l_53 :
    if(!(match_string(p_53, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm p_2 (ATerm t)
  {
    ATerm q_20;
    q_20 = t;
    {
      ATerm q_53 = NULL;
      ATerm r_53 = NULL;
      r_53 = t;
      if(((q_53 != NULL) && (q_53 != r_53)))
        _fail(r_53);
      else
        q_53 = r_53;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_20, (ATerm) ATinsert(ATempty, not_null(q_53)));
        t = extend_config_0(t);
      }
    }
    t = q_20;
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    t = term_s_20;
    return(t);
  }
  t = ArgOption_3(t, o_2, p_2, q_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm r_2 (ATerm t)
  {
    ATerm w_53 = NULL;
    w_53 = t;
    v_53 :
    if(!(match_string(w_53, "-v")))
      {
        if(!(match_string(w_53, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_u_20;
    t = set_config_0(t);
    t = term_v_20;
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_y_20;
    return(t);
  }
  t = Option_3(t, r_2, s_2, t_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm u_2 (ATerm t)
  {
    ATerm z_53 = NULL;
    z_53 = t;
    x_53 :
    if(!(match_string(z_53, "-k")))
      {
        if(!(match_string(z_53, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    ATerm c_21;
    c_21 = t;
    {
      ATerm a_54 = NULL;
      ATerm b_54 = NULL;
      t = string_to_int_0(t);
      {
        b_54 = t;
        if(((a_54 != NULL) && (a_54 != b_54)))
          _fail(b_54);
        else
          a_54 = b_54;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_21, not_null(a_54));
        t = set_config_0(t);
      }
    }
    t = c_21;
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_e_21;
    return(t);
  }
  t = ArgOption_3(t, u_2, v_2, w_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm q_54 = NULL;
  q_54 = t;
  t = SSL_string_to_int(not_null(q_54));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm f_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_2 (ATerm t)
      {
        ATerm y_54 = NULL;
        y_54 = t;
        t_54 :
        if(!(match_string(y_54, "-S")))
          {
            if(!(match_string(y_54, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_j_21;
        t = set_config_0(t);
        t = term_k_21;
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_l_21;
        return(t);
      }
      t = Option_3(t, x_2, y_2, z_2);
      ;
      LocalPopChoice(g_21);
    }
  else
    {
      t = f_21;
      {
        ATerm m_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_3 (ATerm t)
            {
              ATerm z_54 = NULL;
              z_54 = t;
              u_54 :
              if(!(match_string(z_54, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              ATerm c_55 = NULL;
              ATerm p_21;
              p_21 = t;
              {
                ATerm a_55 = NULL;
                ATerm b_55 = NULL;
                t = string_to_int_0(t);
                {
                  b_55 = t;
                  if(((a_55 != NULL) && (a_55 != b_55)))
                    _fail(b_55);
                  else
                    a_55 = b_55;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_i_21, not_null(a_55));
                  t = set_config_0(t);
                }
              }
              t = p_21;
              {
                ATerm d_55 = NULL;
                d_55 = t;
                if(((c_55 != NULL) && (c_55 != d_55)))
                  _fail(d_55);
                else
                  c_55 = d_55;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(c_55));
              }
              return(t);
            }
            ATerm c_3 (ATerm t)
            {
              t = term_r_21;
              return(t);
            }
            t = ArgOption_3(t, a_3, b_3, c_3);
            ;
            LocalPopChoice(o_21);
          }
        else
          {
            t = m_21;
            {
              ATerm d_3 (ATerm t)
              {
                ATerm e_55 = NULL;
                e_55 = t;
                x_54 :
                if(!(match_string(e_55, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_y_21;
                t = set_config_0(t);
                t = term_f_22;
                return(t);
              }
              ATerm f_3 (ATerm t)
              {
                t = term_g_22;
                return(t);
              }
              t = Option_3(t, d_3, e_3, f_3);
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
      ;
      LocalPopChoice(l_22);
    }
  else
    {
      t = k_22;
      {
        ATerm n_22 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            ;
            LocalPopChoice(o_22);
          }
        else
          {
            t = n_22;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm g_3 (ATerm t)
  {
    ATerm k_55 = NULL;
    k_55 = t;
    h_55 :
    if(!(match_string(k_55, "-o")))
      {
        if(!(match_string(k_55, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    ATerm n_55 = NULL;
    ATerm p_22;
    p_22 = t;
    {
      ATerm l_55 = NULL;
      ATerm m_55 = NULL;
      m_55 = t;
      if(((l_55 != NULL) && (l_55 != m_55)))
        _fail(m_55);
      else
        l_55 = m_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_15, not_null(l_55));
        t = set_config_0(t);
      }
    }
    t = p_22;
    {
      ATerm o_55 = NULL;
      o_55 = t;
      if(((n_55 != NULL) && (n_55 != o_55)))
        _fail(o_55);
      else
        n_55 = o_55;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(n_55));
    }
    return(t);
  }
  ATerm i_3 (ATerm t)
  {
    t = term_q_22;
    return(t);
  }
  t = ArgOption_3(t, g_3, h_3, i_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm r_22 = t;
  int s_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      ;
      LocalPopChoice(s_22);
    }
  else
    {
      t = r_22;
      {
        ATerm j_3 (ATerm t)
        {
          ATerm s_55 = NULL;
          s_55 = t;
          r_55 :
          if(!(match_string(s_55, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm k_3 (ATerm t)
        {
          t = term_u_22;
          t = set_config_0(t);
          t = term_v_22;
          return(t);
        }
        ATerm l_3 (ATerm t)
        {
          t = term_w_22;
          return(t);
        }
        t = Option_3(t, j_3, k_3, l_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm y_55 = NULL,z_55 = NULL,a_56 = NULL,b_56 = NULL,c_56 = NULL;
  y_55 = t;
  w_55 :
  if(match_string(y_55, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(y_55) == AT_LIST) && !(ATisEmpty(y_55))))
        {
          z_55 = ATgetFirst((ATermList) y_55);
          a_56 = (ATerm) ATgetNext((ATermList) y_55);
          x_55 :
          if(((ATgetType(a_56) == AT_LIST) && !(ATisEmpty(a_56))))
            {
              b_56 = ATgetFirst((ATermList) a_56);
              c_56 = (ATerm) ATgetNext((ATermList) a_56);
              {
                ATerm g_56 = NULL;
                ATerm z_22;
                z_22 = t;
                {
                  t = not_null(z_55);
                  t = j_0(t);
                }
                t = z_22;
                {
                  ATerm h_56 = NULL;
                  t = not_null(b_56);
                  {
                    t = k_0(t);
                    {
                      h_56 = t;
                      if(((g_56 != NULL) && (g_56 != h_56)))
                        _fail(h_56);
                      else
                        g_56 = h_56;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_56)), not_null(g_56));
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
  ATerm m_3 (ATerm t)
  {
    ATerm o_56 = NULL;
    o_56 = t;
    l_56 :
    if(!(match_string(o_56, "-i")))
      {
        if(!(match_string(o_56, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    ATerm r_56 = NULL;
    ATerm a_23;
    a_23 = t;
    {
      ATerm p_56 = NULL;
      ATerm q_56 = NULL;
      q_56 = t;
      if(((p_56 != NULL) && (p_56 != q_56)))
        _fail(q_56);
      else
        p_56 = q_56;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_14, not_null(p_56));
        t = set_config_0(t);
      }
    }
    t = a_23;
    {
      ATerm s_56 = NULL;
      s_56 = t;
      if(((r_56 != NULL) && (r_56 != s_56)))
        _fail(s_56);
      else
        r_56 = s_56;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(r_56));
    }
    return(t);
  }
  ATerm o_3 (ATerm t)
  {
    t = term_b_23;
    return(t);
  }
  t = ArgOption_3(t, m_3, n_3, o_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      ;
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm e_23 = t;
        int f_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            ;
            LocalPopChoice(f_23);
          }
        else
          {
            t = e_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm ast2abox_options_0 (ATerm t)
{
  ATerm g_23 = t;
  int h_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      ;
      LocalPopChoice(h_23);
    }
  else
    {
      t = g_23;
      t = pp_options_0(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm x_56 = NULL;
  ATerm i_23;
  i_23 = t;
  {
    ATerm p_3 (ATerm t)
    {
      ATerm y_56 = NULL,z_56 = NULL;
      y_56 = t;
      w_56 :
      if(match_cons(y_56, sym_Program_1))
        {
          z_56 = ATgetArgument(y_56, 0);
          if(((x_56 != NULL) && (x_56 != z_56)))
            _fail(z_56);
          else
            x_56 = z_56;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, p_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_k_23), not_null(x_56)), term_j_23));
      {
        t = printnl_0(t);
        {
          t = term_l_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = i_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATempty, term_l_23));
  {
    t = printnl_0(t);
    {
      t = term_l_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm c_57 = NULL;
  c_57 = t;
  t = SSL_TicksToSeconds(not_null(c_57));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_57 = NULL,i_57 = NULL,j_57 = NULL;
  h_57 = t;
  g_57 :
  if(match_cons(h_57, sym__2))
    {
      i_57 = ATgetArgument(h_57, 0);
      j_57 = ATgetArgument(h_57, 1);
      {
        ATerm m_23 = t;
        int n_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_57), not_null(j_57));
            ;
            LocalPopChoice(n_23);
          }
        else
          {
            t = m_23;
            t = SSL_addr(not_null(i_57), not_null(j_57));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm i_84 (ATerm), ATerm j_84 (ATerm))
{
  ATerm o_23 = t;
  int p_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = i_84(t);
      ;
      LocalPopChoice(p_23);
    }
  else
    {
      t = o_23;
      {
        ATerm q_57 = NULL,r_57 = NULL,s_57 = NULL;
        q_57 = t;
        p_57 :
        if(((ATgetType(q_57) == AT_LIST) && !(ATisEmpty(q_57))))
          {
            r_57 = ATgetFirst((ATermList) q_57);
            s_57 = (ATerm) ATgetNext((ATermList) q_57);
            {
              ATerm v_57 = NULL;
              ATerm w_57 = NULL;
              t = not_null(s_57);
              {
                t = foldr_2(t, i_84, j_84);
                {
                  w_57 = t;
                  if(((v_57 != NULL) && (v_57 != w_57)))
                    _fail(w_57);
                  else
                    v_57 = w_57;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(r_57), not_null(v_57));
                t = j_84(t);
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
ATerm crush_2 (ATerm t, ATerm g_83 (ATerm), ATerm h_83 (ATerm))
{
  ATerm d_58 = NULL;
  ATerm f_58 = NULL;
  d_58 = t;
  {
    ATerm g_58 = NULL;
    ATerm i_58 = NULL,j_58 = NULL,k_58 = NULL;
    t = not_null(d_58);
    {
      g_58 = t;
      {
        t = SSL_explode_term(not_null(g_58));
        {
          i_58 = t;
          c_58 :
          if(match_cons(i_58, sym__2))
            {
              j_58 = ATgetArgument(i_58, 0);
              k_58 = ATgetArgument(i_58, 1);
              if(((f_58 != NULL) && (f_58 != k_58)))
                _fail(k_58);
              else
                f_58 = k_58;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(f_58);
      t = foldr_2(t, g_83, h_83);
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
      t = term_k_7;
      return(t);
    }
    t = crush_2(t, q_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_58 = NULL,r_58 = NULL,s_58 = NULL;
  q_58 = t;
  p_58 :
  if(match_cons(q_58, sym__2))
    {
      r_58 = ATgetArgument(q_58, 0);
      s_58 = ATgetArgument(q_58, 1);
      {
        ATerm q_23;
        q_23 = t;
        {
          ATerm r_23 = t;
          int s_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_58), not_null(s_58));
              ;
              LocalPopChoice(s_23);
            }
          else
            {
              t = r_23;
              t = SSL_gtr(not_null(r_58), not_null(s_58));
            }
        }
        t = q_23;
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
  ATerm y_58 = NULL;
  ATerm t_23 = t;
  int u_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_58 = NULL,a_59 = NULL,b_59 = NULL;
      z_58 = t;
      x_58 :
      if(match_cons(z_58, sym__2))
        {
          a_59 = ATgetArgument(z_58, 0);
          b_59 = ATgetArgument(z_58, 1);
          {
            if(((y_58 != NULL) && (y_58 != a_59)))
              _fail(a_59);
            else
              y_58 = a_59;
            if(((y_58 != NULL) && (y_58 != b_59)))
              _fail(b_59);
            else
              y_58 = b_59;
          }
        }
      else
        {
          _fail(t);
        }
      ;
      LocalPopChoice(u_23);
    }
  else
    {
      t = t_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm w_69 (ATerm))
{
  ATerm r_3 (ATerm t)
  {
    ATerm v_23;
    v_23 = t;
    {
      ATerm i_59 = NULL;
      ATerm j_59 = NULL;
      t = term_i_21;
      {
        t = get_config_0(t);
        {
          j_59 = t;
          if(((i_59 != NULL) && (i_59 != j_59)))
            _fail(j_59);
          else
            i_59 = j_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(i_59), term_l_7);
        t = geq_0(t);
      }
    }
    t = v_23;
    t = w_69(t);
    return(t);
  }
  t = try_1(t, r_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm s_3 (ATerm t)
  {
    ATerm n_59 = NULL,p_59 = NULL;
    ATerm w_23;
    w_23 = t;
    {
      ATerm o_59 = NULL;
      t = run_time_0(t);
      {
        o_59 = t;
        if(((n_59 != NULL) && (n_59 != o_59)))
          _fail(o_59);
        else
          n_59 = o_59;
      }
    }
    t = w_23;
    {
      ATerm q_59 = NULL;
      t = term_x_23;
      {
        t = get_config_0(t);
        {
          q_59 = t;
          if(((p_59 != NULL) && (p_59 != q_59)))
            _fail(q_59);
          else
            p_59 = q_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_23), not_null(n_59)), term_y_23), not_null(p_59)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, s_3);
  {
    t = term_k_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_59 = NULL;
  x_59 = t;
  w_59 :
  if(match_cons(x_59, sym_Version_0))
    {
      ATerm z_59 = NULL,b_60 = NULL;
      ATerm a_24;
      a_24 = t;
      {
        ATerm a_60 = NULL;
        t = SSLgetAnnotations(not_null(x_59));
        {
          a_60 = t;
          if(((z_59 != NULL) && (z_59 != a_60)))
            _fail(a_60);
          else
            z_59 = a_60;
        }
      }
      t = a_24;
      {
        ATerm c_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(z_59));
        {
          c_60 = t;
          if(((b_60 != NULL) && (b_60 != c_60)))
            _fail(c_60);
          else
            b_60 = c_60;
        }
        t = not_null(b_60);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm g_86 (ATerm))
{
  ATerm t_3 (ATerm t)
  {
    ATerm b_24 = t;
    int c_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        ;
        LocalPopChoice(c_24);
      }
    else
      {
        t = b_24;
        {
          ATerm d_24 = t;
          int e_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              ;
              LocalPopChoice(e_24);
            }
          else
            {
              t = d_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_3);
  t = g_86(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm h_60 = NULL;
  h_60 = t;
  t = SSL_table_create(not_null(h_60));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm l_60 = NULL;
  l_60 = t;
  {
    ATerm f_24;
    f_24 = t;
    {
      t = term_h_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_18, term_i_18, not_null(l_60));
          t = table_put_0(t);
        }
      }
    }
    t = f_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm r_60 = NULL;
  r_60 = t;
  t = SSL_table_destroy(not_null(r_60));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm v_60 = NULL;
  v_60 = t;
  t = SSL_exit(not_null(v_60));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm z_60 = NULL,a_61 = NULL,b_61 = NULL;
  z_60 = t;
  y_60 :
  if(((ATgetType(z_60) == AT_LIST) && ATisEmpty(z_60)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(z_60) == AT_LIST) && !(ATisEmpty(z_60))))
        {
          a_61 = ATgetFirst((ATermList) z_60);
          b_61 = (ATerm) ATgetNext((ATermList) z_60);
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
  ATerm g_24;
  g_24 = t;
  {
    ATerm e_61 = NULL;
    ATerm j_61 = NULL;
    ATerm h_24 = t;
    int i_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        ;
        LocalPopChoice(i_24);
      }
    else
      {
        t = h_24;
        {
          ATerm h_61 = NULL;
          ATerm i_61 = NULL;
          i_61 = t;
          if(((h_61 != NULL) && (h_61 != i_61)))
            _fail(i_61);
          else
            h_61 = i_61;
          t = (ATerm) ATinsert(ATempty, not_null(h_61));
        }
      }
    {
      j_61 = t;
      if(((e_61 != NULL) && (e_61 != j_61)))
        _fail(j_61);
      else
        e_61 = j_61;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_15, not_null(e_61));
      t = printnl_0(t);
    }
  }
  t = g_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm o_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_61 = NULL,t_61 = NULL,u_61 = NULL;
  u_61 = t;
  r_61 :
  if(((ATgetType(u_61) == AT_LIST) && !(ATisEmpty(u_61))))
    {
      s_61 = ATgetFirst((ATermList) u_61);
      t_61 = (ATerm) ATgetNext((ATermList) u_61);
      {
        ATerm x_61 = NULL;
        t = not_null(t_61);
        {
          ATerm j_24;
          j_24 = t;
          {
            ATerm y_61 = NULL,a_62 = NULL,c_62 = NULL;
            ATerm k_24;
            k_24 = t;
            {
              ATerm z_61 = NULL;
              t = i_0(t);
              {
                z_61 = t;
                if(((y_61 != NULL) && (y_61 != z_61)))
                  _fail(z_61);
                else
                  y_61 = z_61;
              }
            }
            t = k_24;
            {
              ATerm b_62 = NULL;
              t = not_null(s_61);
              {
                t = h_0(t);
                {
                  b_62 = t;
                  if(((a_62 != NULL) && (a_62 != b_62)))
                    _fail(b_62);
                  else
                    a_62 = b_62;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(y_61)), not_null(a_62));
                {
                  c_62 = t;
                  if(((x_61 != NULL) && (x_61 != c_62)))
                    _fail(c_62);
                  else
                    x_61 = c_62;
                }
              }
            }
          }
          t = j_24;
          {
            ATerm y_3 (ATerm t)
            {
              t = not_null(x_61);
              return(t);
            }
            t = reverse_acc_2(t, h_0, y_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(u_61) == AT_LIST) && ATisEmpty(u_61)))
        {
          {
            t = term_o_6;
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
ATerm short_description_1 (ATerm t, ATerm n_88 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_61 (ATerm))
{
  ATerm n_62 = NULL,o_62 = NULL;
  n_62 = t;
  m_62 :
  if(match_cons(n_62, sym_Program_1))
    {
      o_62 = ATgetArgument(n_62, 0);
      {
        ATerm r_62 = NULL,t_62 = NULL;
        ATerm s_62 = NULL;
        t = SSLgetAnnotations(not_null(n_62));
        {
          s_62 = t;
          if(((r_62 != NULL) && (r_62 != s_62)))
            _fail(s_62);
          else
            r_62 = s_62;
        }
        {
          t = not_null(o_62);
          {
            ATerm v_62 = NULL;
            t = f_61(t);
            {
              t_62 = t;
              {
                ATerm w_62 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_62)), not_null(r_62));
                {
                  w_62 = t;
                  if(((v_62 != NULL) && (v_62 != w_62)))
                    _fail(w_62);
                  else
                    v_62 = w_62;
                }
                t = not_null(v_62);
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
  ATerm f_63 = NULL;
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_63 = NULL;
      t = term_x_23;
      {
        t = get_config_0(t);
        {
          g_63 = t;
          if(((f_63 != NULL) && (f_63 != g_63)))
            _fail(g_63);
          else
            f_63 = g_63;
        }
      }
      ;
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
        ATerm g_4 (ATerm t)
        {
          ATerm l_4 (ATerm t)
          {
            ATerm h_63 = NULL;
            h_63 = t;
            if(((f_63 != NULL) && (f_63 != h_63)))
              _fail(h_63);
            else
              f_63 = h_63;
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
        t = not_null(f_63);
        return(t);
      }
      t = short_description_1(t, n_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, m_4);
    {
      t = term_n_24;
      {
        t = echo_0(t);
        {
          t = term_q_24;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_4 (ATerm t)
                {
                  ATerm i_63 = NULL;
                  ATerm j_63 = NULL;
                  j_63 = t;
                  if(((i_63 != NULL) && (i_63 != j_63)))
                    _fail(j_63);
                  else
                    i_63 = j_63;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_63)), term_r_24);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_4);
                {
                  ATerm p_4 (ATerm t)
                  {
                    ATerm k_63 = NULL;
                    ATerm l_63 = NULL;
                    ATerm q_4 (ATerm t)
                    {
                      t = not_null(f_63);
                      return(t);
                    }
                    t = long_description_1(t, q_4);
                    {
                      l_63 = t;
                      if(((k_63 != NULL) && (k_63 != l_63)))
                        _fail(l_63);
                      else
                        k_63 = l_63;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(k_63)), term_s_24);
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
ATerm debug_0 (ATerm t)
{
  ATerm t_24;
  t_24 = t;
  {
    ATerm r_63 = NULL;
    ATerm s_63 = NULL;
    s_63 = t;
    if(((r_63 != NULL) && (r_63 != s_63)))
      _fail(s_63);
    else
      r_63 = s_63;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATempty, not_null(r_63)));
      t = printnl_0(t);
    }
  }
  t = t_24;
  return(t);
}
ATerm say_1 (ATerm t, ATerm c_89 (ATerm))
{
  ATerm u_24;
  u_24 = t;
  {
    t = c_89(t);
    t = debug_0(t);
  }
  t = u_24;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm z_63 = NULL,a_64 = NULL;
  z_63 = t;
  y_63 :
  if(match_cons(z_63, sym_Undefined_1))
    {
      a_64 = ATgetArgument(z_63, 0);
      {
        ATerm d_64 = NULL,f_64 = NULL;
        ATerm e_64 = NULL;
        t = SSLgetAnnotations(not_null(z_63));
        {
          e_64 = t;
          if(((d_64 != NULL) && (d_64 != e_64)))
            _fail(e_64);
          else
            d_64 = e_64;
        }
        {
          t = not_null(a_64);
          {
            ATerm h_64 = NULL;
            t = g_61(t);
            {
              f_64 = t;
              {
                ATerm i_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(f_64)), not_null(d_64));
                {
                  i_64 = t;
                  if(((h_64 != NULL) && (h_64 != i_64)))
                    _fail(i_64);
                  else
                    h_64 = i_64;
                }
                t = not_null(h_64);
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
ATerm fetch_1 (ATerm t, ATerm d_78 (ATerm))
{
  ATerm n_64 (ATerm t)
  {
    ATerm v_24 = t;
    int w_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_78, _id);
        ;
        LocalPopChoice(w_24);
      }
    else
      {
        t = v_24;
        t = Cons_2(t, _id, n_64);
      }
    return(t);
  }
  t = n_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm n_87 (ATerm))
{
  t = fetch_1(t, n_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm s_64 = NULL;
  s_64 = t;
  r_64 :
  if(match_cons(s_64, sym_Help_0))
    {
      ATerm u_64 = NULL,w_64 = NULL;
      ATerm x_24;
      x_24 = t;
      {
        ATerm v_64 = NULL;
        t = SSLgetAnnotations(not_null(s_64));
        {
          v_64 = t;
          if(((u_64 != NULL) && (u_64 != v_64)))
            _fail(v_64);
          else
            u_64 = v_64;
        }
      }
      t = x_24;
      {
        ATerm x_64 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(u_64));
        {
          x_64 = t;
          if(((w_64 != NULL) && (w_64 != x_64)))
            _fail(x_64);
          else
            w_64 = x_64;
        }
        t = not_null(w_64);
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
  ATerm c_65 = NULL;
  c_65 = t;
  t = SSL_implode_string(not_null(c_65));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_24 = t;
  int z_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      ;
      LocalPopChoice(z_24);
    }
  else
    {
      t = y_24;
      {
        ATerm h_65 = NULL,i_65 = NULL,j_65 = NULL;
        h_65 = t;
        g_65 :
        if(((ATgetType(h_65) == AT_LIST) && !(ATisEmpty(h_65))))
          {
            i_65 = ATgetFirst((ATermList) h_65);
            j_65 = (ATerm) ATgetNext((ATermList) h_65);
            {
              t = not_null(i_65);
              {
                ATerm r_4 (ATerm t)
                {
                  t = not_null(j_65);
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
  ATerm t_65 = NULL;
  ATerm v_65 = NULL;
  t_65 = t;
  {
    ATerm w_65 = NULL;
    ATerm y_65 = NULL,z_65 = NULL,a_66 = NULL;
    t = not_null(t_65);
    {
      w_65 = t;
      {
        t = SSL_explode_term(not_null(w_65));
        {
          y_65 = t;
          r_65 :
          if(match_cons(y_65, sym__2))
            {
              z_65 = ATgetArgument(y_65, 0);
              a_66 = ATgetArgument(y_65, 1);
              s_65 :
              if(match_string(z_65, ""))
                {
                  if(((v_65 != NULL) && (v_65 != a_66)))
                    _fail(a_66);
                  else
                    v_65 = a_66;
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
      t = not_null(v_65);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_78 (ATerm))
{
  ATerm e_66 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, e_66);
        ;
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          t = Nil_0(t);
          t = j_78(t);
        }
      }
    return(t);
  }
  t = e_66(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
  h_66 = t;
  g_66 :
  if(match_cons(h_66, sym__2))
    {
      i_66 = ATgetArgument(h_66, 0);
      j_66 = ATgetArgument(h_66, 1);
      {
        t = not_null(i_66);
        {
          ATerm s_4 (ATerm t)
          {
            t = not_null(j_66);
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
  ATerm c_25 = t;
  int d_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      ;
      LocalPopChoice(d_25);
    }
  else
    {
      t = c_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm u_66 = NULL;
  u_66 = t;
  t = SSL_explode_string(not_null(u_66));
  return(t);
}
ATerm _2 (ATerm t, ATerm g_59 (ATerm), ATerm h_59 (ATerm))
{
  ATerm d_67 = NULL,e_67 = NULL,f_67 = NULL;
  d_67 = t;
  c_67 :
  if(match_cons(d_67, sym__2))
    {
      e_67 = ATgetArgument(d_67, 0);
      f_67 = ATgetArgument(d_67, 1);
      {
        ATerm j_67 = NULL,l_67 = NULL;
        ATerm k_67 = NULL;
        t = SSLgetAnnotations(not_null(d_67));
        {
          k_67 = t;
          if(((j_67 != NULL) && (j_67 != k_67)))
            _fail(k_67);
          else
            j_67 = k_67;
        }
        {
          t = not_null(e_67);
          {
            ATerm n_67 = NULL;
            t = g_59(t);
            {
              l_67 = t;
              {
                t = not_null(f_67);
                {
                  ATerm p_67 = NULL;
                  t = h_59(t);
                  {
                    n_67 = t;
                    {
                      ATerm q_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(l_67), not_null(n_67)), not_null(j_67));
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
  ATerm y_67 = NULL,z_67 = NULL,a_68 = NULL;
  y_67 = t;
  x_67 :
  if(match_cons(y_67, sym__2))
    {
      z_67 = ATgetArgument(y_67, 0);
      a_68 = ATgetArgument(y_67, 1);
      {
        ATerm e_25;
        e_25 = t;
        t = SSL_printnl(not_null(z_67), not_null(a_68));
        t = e_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm b_89 (ATerm))
{
  ATerm f_25;
  f_25 = t;
  {
    ATerm i_68 = NULL,k_68 = NULL;
    ATerm g_25;
    g_25 = t;
    {
      ATerm j_68 = NULL;
      t = b_89(t);
      {
        j_68 = t;
        if(((i_68 != NULL) && (i_68 != j_68)))
          _fail(j_68);
        else
          i_68 = j_68;
      }
    }
    t = g_25;
    {
      ATerm l_68 = NULL;
      l_68 = t;
      if(((k_68 != NULL) && (k_68 != l_68)))
        _fail(l_68);
      else
        k_68 = l_68;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_r_19, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_68)), not_null(i_68)));
        t = printnl_0(t);
      }
    }
  }
  t = f_25;
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_77 (ATerm))
{
  ATerm o_68 (ATerm t)
  {
    ATerm h_25 = t;
    int i_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        ;
        LocalPopChoice(i_25);
      }
    else
      {
        t = h_25;
        t = Cons_2(t, u_77, o_68);
      }
    return(t);
  }
  t = o_68(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm q_68 = NULL;
  q_68 = t;
  t = SSL_is_string(not_null(q_68));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_25 = t;
  int k_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      ;
      LocalPopChoice(k_25);
    }
  else
    {
      t = j_25;
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, t_4);
            ;
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            {
              ATerm z_68 = NULL,a_69 = NULL,b_69 = NULL;
              z_68 = t;
              y_68 :
              if(match_cons(z_68, sym_Path_1))
                {
                  a_69 = ATgetArgument(z_68, 0);
                  t = not_null(a_69);
                }
              else
                {
                  if(match_cons(z_68, sym_Var_1))
                    {
                      a_69 = ATgetArgument(z_68, 0);
                      {
                        t = not_null(a_69);
                        {
                          ATerm q_25 = t;
                          int r_25 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              ;
                              LocalPopChoice(r_25);
                            }
                          else
                            {
                              t = q_25;
                              {
                                ATerm y_4 (ATerm t)
                                {
                                  t = term_s_25;
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
                      if(match_cons(z_68, sym_Prefix_2))
                        {
                          a_69 = ATgetArgument(z_68, 0);
                          b_69 = ATgetArgument(z_68, 1);
                          {
                            ATerm g_69 = NULL,i_69 = NULL;
                            ATerm v_25;
                            v_25 = t;
                            {
                              ATerm h_69 = NULL;
                              t = not_null(a_69);
                              {
                                t = eval_config_0(t);
                                {
                                  h_69 = t;
                                  if(((g_69 != NULL) && (g_69 != h_69)))
                                    _fail(h_69);
                                  else
                                    g_69 = h_69;
                                }
                              }
                            }
                            t = v_25;
                            {
                              ATerm j_69 = NULL;
                              t = not_null(b_69);
                              {
                                t = eval_config_0(t);
                                {
                                  j_69 = t;
                                  if(((i_69 != NULL) && (i_69 != j_69)))
                                    _fail(j_69);
                                  else
                                    i_69 = j_69;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_69), not_null(i_69));
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
  ATerm r_69 = NULL;
  r_69 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_20, not_null(r_69));
    {
      t = table_get_0(t);
      {
        ATerm z_4 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_25;
            w_25 = t;
            {
              ATerm t_69 = NULL;
              ATerm x_69 = NULL;
              x_69 = t;
              if(((t_69 != NULL) && (t_69 != x_69)))
                _fail(x_69);
              else
                t_69 = x_69;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_o_20, not_null(r_69), not_null(t_69));
                t = table_put_0(t);
              }
            }
            t = w_25;
          }
          return(t);
        }
        t = try_1(t, z_4);
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm c_76 (ATerm))
{
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = c_76(t);
      ;
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm c_70 = NULL,d_70 = NULL,e_70 = NULL;
  c_70 = t;
  b_70 :
  if(match_cons(c_70, sym__2))
    {
      d_70 = ATgetArgument(c_70, 0);
      e_70 = ATgetArgument(c_70, 1);
      t = SSL_table_get(not_null(d_70), not_null(e_70));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL;
  l_70 = t;
  k_70 :
  if(match_cons(l_70, sym__3))
    {
      m_70 = ATgetArgument(l_70, 0);
      n_70 = ATgetArgument(l_70, 1);
      o_70 = ATgetArgument(l_70, 2);
      {
        ATerm a_26;
        a_26 = t;
        {
          ATerm s_70 = NULL;
          ATerm t_70 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_70), not_null(n_70));
          {
            ATerm b_26 = t;
            int c_26 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                ;
                LocalPopChoice(c_26);
              }
            else
              {
                t = b_26;
                t = (ATerm) ATempty;
              }
            {
              t_70 = t;
              if(((s_70 != NULL) && (s_70 != t_70)))
                _fail(t_70);
              else
                s_70 = t_70;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_70), not_null(n_70), (ATerm) ATinsert(CheckATermList(not_null(s_70)), not_null(o_70)));
            t = table_put_0(t);
          }
        }
        t = a_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm s_88 (ATerm))
{
  ATerm x_70 = NULL;
  ATerm y_70 = NULL;
  t = term_o_6;
  {
    t = s_88(t);
    {
      y_70 = t;
      if(((x_70 != NULL) && (x_70 != y_70)))
        _fail(y_70);
      else
        x_70 = y_70;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_24, term_p_24, not_null(x_70));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm e_71 = NULL,f_71 = NULL,g_71 = NULL;
  e_71 = t;
  d_71 :
  if(match_string(e_71, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(e_71) == AT_LIST) && !(ATisEmpty(e_71))))
        {
          f_71 = ATgetFirst((ATermList) e_71);
          g_71 = (ATerm) ATgetNext((ATermList) e_71);
          {
            ATerm j_71 = NULL;
            ATerm d_26;
            d_26 = t;
            {
              t = not_null(f_71);
              t = a_0(t);
            }
            t = d_26;
            {
              ATerm k_71 = NULL;
              t = term_o_6;
              {
                t = d_0(t);
                {
                  k_71 = t;
                  if(((j_71 != NULL) && (j_71 != k_71)))
                    _fail(k_71);
                  else
                    j_71 = k_71;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(g_71)), not_null(j_71));
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
    ATerm p_71 = NULL;
    p_71 = t;
    o_71 :
    if(!(match_string(p_71, "--help")))
      {
        if(!(match_string(p_71, "-h")))
          {
            if(!(match_string(p_71, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_f_26;
    {
      t = set_config_0(t);
      t = term_g_26;
    }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    t = term_i_26;
    return(t);
  }
  t = Option_3(t, c_5, d_5, e_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_71 = NULL,v_71 = NULL,w_71 = NULL;
  s_71 = t;
  r_71 :
  if(((ATgetType(s_71) == AT_LIST) && !(ATisEmpty(s_71))))
    {
      v_71 = ATgetFirst((ATermList) s_71);
      w_71 = (ATerm) ATgetNext((ATermList) s_71);
      t = (ATerm) ATinsert(CheckATermList(not_null(w_71)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(v_71)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm p_60 (ATerm), ATerm q_60 (ATerm))
{
  ATerm g_72 = NULL,h_72 = NULL,i_72 = NULL;
  g_72 = t;
  f_72 :
  if(((ATgetType(g_72) == AT_LIST) && !(ATisEmpty(g_72))))
    {
      h_72 = ATgetFirst((ATermList) g_72);
      i_72 = (ATerm) ATgetNext((ATermList) g_72);
      {
        ATerm m_72 = NULL,o_72 = NULL;
        ATerm n_72 = NULL;
        t = SSLgetAnnotations(not_null(g_72));
        {
          n_72 = t;
          if(((m_72 != NULL) && (m_72 != n_72)))
            _fail(n_72);
          else
            m_72 = n_72;
        }
        {
          t = not_null(h_72);
          {
            ATerm q_72 = NULL;
            t = p_60(t);
            {
              o_72 = t;
              {
                t = not_null(i_72);
                {
                  ATerm t_72 = NULL;
                  t = q_60(t);
                  {
                    q_72 = t;
                    {
                      ATerm u_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(q_72)), not_null(o_72)), not_null(m_72));
                      {
                        u_72 = t;
                        if(((t_72 != NULL) && (t_72 != u_72)))
                          _fail(u_72);
                        else
                          t_72 = u_72;
                      }
                      t = not_null(t_72);
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
  ATerm g_73 = NULL;
  g_73 = t;
  f_73 :
  if(((ATgetType(g_73) == AT_LIST) && ATisEmpty(g_73)))
    {
      {
        ATerm i_73 = NULL,k_73 = NULL;
        ATerm j_26;
        j_26 = t;
        {
          ATerm j_73 = NULL;
          t = SSLgetAnnotations(not_null(g_73));
          {
            j_73 = t;
            if(((i_73 != NULL) && (i_73 != j_73)))
              _fail(j_73);
            else
              i_73 = j_73;
          }
        }
        t = j_26;
        {
          ATerm l_73 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_73));
          {
            l_73 = t;
            if(((k_73 != NULL) && (k_73 != l_73)))
              _fail(l_73);
            else
              k_73 = l_73;
          }
          t = not_null(k_73);
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
  ATerm r_73 = NULL,s_73 = NULL,t_73 = NULL;
  r_73 = t;
  q_73 :
  if(match_cons(r_73, sym__2))
    {
      s_73 = ATgetArgument(r_73, 0);
      t_73 = ATgetArgument(r_73, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_20, not_null(s_73), not_null(t_73));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm q_88 (ATerm))
{
  ATerm k_26;
  k_26 = t;
  {
    ATerm f_5 (ATerm t)
    {
      t = term_l_26;
      t = q_88(t);
      return(t);
    }
    t = try_1(t, f_5);
  }
  t = k_26;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm b_74 = NULL;
      ATerm m_26;
      m_26 = t;
      {
        ATerm z_73 = NULL;
        ATerm a_74 = NULL;
        a_74 = t;
        if(((z_73 != NULL) && (z_73 != a_74)))
          _fail(a_74);
        else
          z_73 = a_74;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_23, not_null(z_73));
          t = set_config_0(t);
        }
      }
      t = m_26;
      {
        ATerm c_74 = NULL;
        c_74 = t;
        if(((b_74 != NULL) && (b_74 != c_74)))
          _fail(c_74);
        else
          b_74 = c_74;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_74));
      }
      return(t);
    }
    ATerm k_5 (ATerm t)
    {
      ATerm o_26 = t;
      int q_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_26 = t;
          int u_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              ;
              LocalPopChoice(u_26);
            }
          else
            {
              t = r_26;
              {
                t = q_88(t);
                t = Cons_2(t, _id, k_5);
              }
            }
          ;
          LocalPopChoice(q_26);
        }
      else
        {
          t = o_26;
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
  ATerm i_74 = NULL,j_74 = NULL,k_74 = NULL;
  ATerm v_26;
  v_26 = t;
  {
    ATerm l_74 = NULL,m_74 = NULL,n_74 = NULL,q_74 = NULL;
    l_74 = t;
    h_74 :
    if(match_cons(l_74, sym__3))
      {
        m_74 = ATgetArgument(l_74, 0);
        n_74 = ATgetArgument(l_74, 1);
        q_74 = ATgetArgument(l_74, 2);
        {
          if(((i_74 != NULL) && (i_74 != m_74)))
            _fail(m_74);
          else
            i_74 = m_74;
          {
            if(((j_74 != NULL) && (j_74 != n_74)))
              _fail(n_74);
            else
              j_74 = n_74;
            {
              if(((k_74 != NULL) && (k_74 != q_74)))
                _fail(q_74);
              else
                k_74 = q_74;
              t = SSL_table_put(not_null(i_74), not_null(j_74), not_null(k_74));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = v_26;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm p_88 (ATerm))
{
  ATerm t_74 = NULL;
  ATerm y_26;
  y_26 = t;
  {
    t = term_z_26;
    t = table_put_0(t);
  }
  t = y_26;
  {
    ATerm n_5 (ATerm t)
    {
      ATerm b_27 = t;
      int c_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_88(t);
          ;
          LocalPopChoice(c_27);
        }
      else
        {
          t = b_27;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_5);
    {
      ATerm r_5 (ATerm t)
      {
        ATerm d_27 = t;
        int e_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_27;
            f_27 = t;
            {
              ATerm g_27 = t;
              int h_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_e_26;
                  t = get_config_0(t);
                  ;
                  LocalPopChoice(h_27);
                }
              else
                {
                  t = g_27;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = f_27;
            {
              t = system_usage_0(t);
              {
                t = term_k_7;
                t = exit_0(t);
              }
            }
            ;
            LocalPopChoice(e_27);
          }
        else
          {
            t = d_27;
            {
              ATerm s_5 (ATerm t)
              {
                ATerm t_5 (ATerm t)
                {
                  ATerm u_74 = NULL;
                  u_74 = t;
                  if(((t_74 != NULL) && (t_74 != u_74)))
                    _fail(u_74);
                  else
                    t_74 = u_74;
                  return(t);
                }
                t = Undefined_1(t, t_5);
                return(t);
              }
              t = option_defined_1(t, s_5);
              {
                ATerm u_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_74)), term_i_27);
                  return(t);
                }
                t = say_1(t, u_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_l_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_5);
      {
        ATerm j_27;
        j_27 = t;
        {
          t = term_o_24;
          t = table_destroy_0(t);
        }
        t = j_27;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm m_86 (ATerm), ATerm n_86 (ATerm), ATerm o_86 (ATerm), ATerm p_86 (ATerm))
{
  t = parse_options_1(t, m_86);
  {
    t = store_options_0(t);
    {
      t = o_86(t);
      {
        ATerm k_27 = t;
        int l_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_86);
            ;
            LocalPopChoice(l_27);
          }
        else
          {
            t = k_27;
            {
              ATerm m_27 = t;
              int n_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_86(t);
                  t = report_success_0(t);
                  ;
                  LocalPopChoice(n_27);
                }
              else
                {
                  t = m_27;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm q_86 (ATerm), ATerm r_86 (ATerm))
{
  t = option_wrap_4(t, q_86, default_usage_0, _id, r_86);
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

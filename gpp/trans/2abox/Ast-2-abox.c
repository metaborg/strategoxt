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
ATerm term_c_29;
ATerm term_f_28;
ATerm term_t_27;
ATerm term_o_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_j_27;
ATerm term_x_26;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_f_25;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_b_24;
ATerm term_a_24;
ATerm term_z_23;
ATerm term_r_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_i_23;
ATerm term_c_23;
ATerm term_b_23;
ATerm term_a_23;
ATerm term_z_22;
ATerm term_y_22;
ATerm term_u_22;
ATerm term_t_22;
ATerm term_s_22;
ATerm term_r_22;
ATerm term_n_22;
ATerm term_j_22;
ATerm term_b_22;
ATerm term_x_21;
ATerm term_u_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_o_21;
ATerm term_h_21;
ATerm term_g_21;
ATerm term_x_20;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_k_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_v_19;
ATerm term_r_19;
ATerm term_m_19;
ATerm term_l_19;
ATerm term_y_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_o_16;
ATerm term_n_16;
ATerm term_m_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_u_15;
ATerm term_l_15;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_b_12;
ATerm term_x_11;
ATerm term_u_11;
ATerm term_o_11;
ATerm term_z_10;
ATerm term_o_10;
ATerm term_m_10;
ATerm term_e_8;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_o_6;
void init_constant_terms (void)
{
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_8));
  term_e_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No pp entry found for: ", 0, ATtrue));
  ATprotect(&(term_o_11));
  term_o_11 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: cannot rewrite to box: ", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(sym_Scopes_0);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("<open-file> file; use <open-file>(file, mode)", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("w", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(ATmakeSymbol(".tmp", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_TempFiles_0);
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("r", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(sym__2, term_p_12, term_u_11);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_o_16));
  term_o_16 = (ATerm) ATmakeInt(9);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeInt(10);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(sym__2, term_l_19, term_m_19);
  ATprotect(&(term_v_19));
  term_v_19 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-p", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("** ERROR: no pretty-print tables specified with -p arguments", 0, ATtrue));
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-p file   Use pretty-print table in file", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(sym__2, term_s_21, term_o_6);
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_n_22));
  term_n_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_s_22));
  term_s_22 = (ATerm) ATmakeAppl(sym__2, term_r_22, term_m_7);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(sym_Verbose_1, term_m_7);
  ATprotect(&(term_u_22));
  term_u_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_22));
  term_z_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(sym__2, term_z_22, term_o_6);
  ATprotect(&(term_b_23));
  term_b_23 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_23));
  term_c_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(sym__2, term_l_23, term_o_6);
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
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
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(sym__2, term_j_27, term_o_6);
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(sym__3, term_g_25, term_h_25, (ATerm) ATempty);
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm if_2 (ATerm, ATerm s_75 (ATerm), ATerm t_75 (ATerm));
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm n_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm o_72 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm TupleToList_0 (ATerm);
ATerm symbol2abox7_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm d_93 (ATerm));
ATerm length_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm));
ATerm crush_3 (ATerm, ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm));
ATerm collect_p__1 (ATerm, ATerm k_99 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_1 (ATerm, ATerm n_69 (ATerm));
ATerm symbol2abox6_helper_0 (ATerm);
ATerm symbol2abox6_0 (ATerm);
ATerm symbol2abox5_0 (ATerm);
ATerm symbol2abox4_0 (ATerm);
ATerm symbol2abox3_0 (ATerm);
ATerm symbol2abox2_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm e_90 (ATerm), ATerm f_90 (ATerm));
ATerm repeat_1 (ATerm, ATerm h_90 (ATerm));
ATerm index_0 (ATerm);
ATerm symbol2abox1_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm get_symbol_0 (ATerm);
ATerm arg2abox_0 (ATerm);
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm p_79 (ATerm));
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
ATerm assert_1 (ATerm, ATerm l_85 (ATerm));
ATerm obsolete_1 (ATerm, ATerm q_88 (ATerm));
ATerm open_file_0 (ATerm);
ATerm new_0 (ATerm);
ATerm new_file_0 (ATerm);
ATerm xtc_new_file_0 (ATerm);
ATerm write_to_0 (ATerm);
ATerm file_exists_0 (ATerm);
ATerm read_from_0 (ATerm);
ATerm xtc_io_transform_1 (ATerm, ATerm h_72 (ATerm));
ATerm copy_file_0 (ATerm);
ATerm stderr_0 (ATerm);
ATerm stdout_0 (ATerm);
ATerm copy_to_1 (ATerm, ATerm m_0 (ATerm));
ATerm table_pop_0 (ATerm);
ATerm end_scope_1 (ATerm, ATerm i_85 (ATerm));
ATerm remove_file_0 (ATerm);
ATerm restore_always_2 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm));
ATerm begin_scope_1 (ATerm, ATerm h_85 (ATerm));
ATerm xtc_temp_files_1 (ATerm, ATerm m_71 (ATerm));
ATerm xtc_io_1 (ATerm, ATerm n_71 (ATerm));
ATerm concat_strings_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm selector_2 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm));
ATerm UnEscape_tab_0 (ATerm);
ATerm UnEscape_linefeed_0 (ATerm);
ATerm UnEscape_backslash_0 (ATerm);
ATerm UnEscape_double_quote_0 (ATerm);
ATerm UnEscape_0 (ATerm);
ATerm unescape_chars_0 (ATerm);
ATerm unescape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm c_78 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm s_89 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm d_90 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm h_66 (ATerm));
ATerm SOpt_2 (ATerm, ATerm t_67 (ATerm), ATerm u_67 (ATerm));
ATerm Arg2_2 (ATerm, ATerm f_66 (ATerm), ATerm g_66 (ATerm));
ATerm Arg_1 (ATerm, ATerm e_66 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm n_72 (ATerm));
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm d_74 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm r_85 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm r_92 (ATerm));
ATerm termid_check_1 (ATerm, ATerm y_92 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm notify_1 (ATerm, ATerm p_99 (ATerm));
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
ATerm foldr_2 (ATerm, ATerm q_83 (ATerm), ATerm r_83 (ATerm));
ATerm crush_2 (ATerm, ATerm o_82 (ATerm), ATerm p_82 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm p_69 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm o_85 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm w_87 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm v_87 (ATerm));
ATerm Program_1 (ATerm, ATerm x_60 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm k_88 (ATerm));
ATerm Undefined_1 (ATerm, ATerm y_60 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_77 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_77 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm _2 (ATerm, ATerm z_58 (ATerm), ATerm a_59 (ATerm));
ATerm conc_strings_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm debug_1 (ATerm, ATerm j_88 (ATerm));
ATerm map_1 (ATerm, ATerm c_77 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_75 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm a_88 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm i_60 (ATerm), ATerm j_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm y_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm x_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm));
ATerm option_wrap_2 (ATerm, ATerm y_85 (ATerm), ATerm z_85 (ATerm));
ATerm io_Ast_2_abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm if_2 (ATerm t, ATerm s_75 (ATerm), ATerm t_75 (ATerm))
{
  ATerm r_2 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_75(t);
      LocalPopChoice(q_5);
      t = t_75(t);
    }
  else
    {
      t = r_2;
      {
      }
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm u_5 = t;
  int v_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_5);
    }
  else
    {
      t = u_5;
      {
        ATerm w_5 = t;
        int x_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Cons_2(t, Nil_0, flat_list_0);
            LocalPopChoice(x_5);
          }
        else
          {
            t = w_5;
            {
              ATerm y_5 = t;
              int a_6 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_0 = NULL,b_2 = NULL;
                  t = Cons_2(t, is_list_0, _id);
                  {
                    ATerm i_6;
                    i_6 = t;
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
                    t = i_6;
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
                          ATerm j_6 = t;
                          int k_6 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = conc_two_lists_0(t);
                              LocalPopChoice(k_6);
                            }
                          else
                            {
                              t = j_6;
                              t = conc_more_lists_0(t);
                            }
                          t = flat_list_0(t);
                        }
                      }
                    }
                  }
                  LocalPopChoice(a_6);
                }
              else
                {
                  t = y_5;
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
  ATerm y_3 = NULL,z_3 = NULL,a_4 = NULL;
  z_3 = t;
  x_3 :
  if(match_cons(z_3, sym_Arg2_2))
    {
      a_4 = ATgetArgument(z_3, 0);
      y_3 = ATgetArgument(z_3, 1);
      {
        ATerm d_4 = NULL,e_4 = NULL;
        ATerm f_4 = NULL,h_4 = NULL;
        ATerm g_4 = NULL;
        t = term_o_6;
        {
          t = n_0(t);
          {
            g_4 = t;
            if(((f_4 != NULL) && (f_4 != g_4)))
              _fail(g_4);
            else
              f_4 = g_4;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_4), not_null(f_4));
          {
            ATerm i_4 = NULL;
            t = index_0(t);
            {
              h_4 = t;
              {
                if(((d_4 != NULL) && (d_4 != h_4)))
                  _fail(h_4);
                else
                  d_4 = h_4;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(y_3), not_null(d_4));
                  {
                    t = index_0(t);
                    {
                      i_4 = t;
                      if(((e_4 != NULL) && (e_4 != i_4)))
                        _fail(i_4);
                      else
                        e_4 = i_4;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(e_4);
      }
    }
  else
    {
      if(match_cons(z_3, sym_Arg_1))
        {
          a_4 = ATgetArgument(z_3, 0);
          {
            ATerm k_4 = NULL;
            ATerm l_4 = NULL,n_4 = NULL;
            ATerm m_4 = NULL;
            t = term_o_6;
            {
              t = n_0(t);
              {
                m_4 = t;
                if(((l_4 != NULL) && (l_4 != m_4)))
                  _fail(m_4);
                else
                  l_4 = m_4;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(a_4), not_null(l_4));
              {
                t = index_0(t);
                {
                  n_4 = t;
                  if(((k_4 != NULL) && (k_4 != n_4)))
                    _fail(n_4);
                  else
                    k_4 = n_4;
                }
              }
            }
            t = not_null(k_4);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm o_72 (ATerm))
{
  ATerm b_0 (ATerm t)
  {
    t = bottomup_1(t, o_72);
    return(t);
  }
  t = _all(t, b_0);
  t = o_72(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm y_4 = NULL,z_4 = NULL,a_5 = NULL;
  y_4 = t;
  x_4 :
  if(match_cons(y_4, sym__2))
    {
      z_4 = ATgetArgument(y_4, 0);
      a_5 = ATgetArgument(y_4, 1);
      {
        ATerm d_5 = NULL;
        ATerm e_5 = NULL;
        t = not_null(z_4);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm p_6 = t;
            int q_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm r_6 = t;
                int u_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm e_0 (ATerm t)
                    {
                      t = not_null(a_5);
                      return(t);
                    }
                    t = Instantiate_1(t, e_0);
                    LocalPopChoice(u_6);
                  }
                else
                  {
                    t = r_6;
                    t = flat_list_0(t);
                  }
                LocalPopChoice(q_6);
              }
            else
              {
                t = p_6;
                {
                }
              }
            return(t);
          }
          t = bottomup_1(t, c_0);
          {
            e_5 = t;
            if(((d_5 != NULL) && (d_5 != e_5)))
              _fail(e_5);
            else
              d_5 = e_5;
          }
        }
        t = not_null(d_5);
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
  ATerm m_5 = NULL;
  ATerm o_5 = NULL;
  m_5 = t;
  {
    ATerm p_5 = NULL;
    ATerm r_5 = NULL,s_5 = NULL,t_5 = NULL;
    t = not_null(m_5);
    {
      p_5 = t;
      {
        t = SSL_explode_term(not_null(p_5));
        {
          r_5 = t;
          k_5 :
          if(match_cons(r_5, sym__2))
            {
              s_5 = ATgetArgument(r_5, 0);
              t_5 = ATgetArgument(r_5, 1);
              l_5 :
              if(match_string(s_5, ""))
                {
                  if(((o_5 != NULL) && (o_5 != t_5)))
                    _fail(t_5);
                  else
                    o_5 = t_5;
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
    t = not_null(o_5);
  }
  return(t);
}
ATerm symbol2abox7_0 (ATerm t)
{
  ATerm d_6 = NULL,e_6 = NULL,f_6 = NULL,g_6 = NULL,h_6 = NULL;
  d_6 = t;
  b_6 :
  if(match_cons(d_6, sym__4))
    {
      e_6 = ATgetArgument(d_6, 0);
      f_6 = ATgetArgument(d_6, 1);
      g_6 = ATgetArgument(d_6, 2);
      h_6 = ATgetArgument(d_6, 3);
      c_6 :
      if(match_string(e_6, "seq"))
        {
          ATerm s_6 = NULL;
          t = not_null(h_6);
          {
            t = TupleToList_0(t);
            {
              ATerm f_0 (ATerm t)
              {
                ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL;
                l_6 = t;
                z_5 :
                if(match_cons(l_6, sym__2))
                  {
                    m_6 = ATgetArgument(l_6, 0);
                    n_6 = ATgetArgument(l_6, 1);
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(m_6), not_null(f_6), not_null(n_6));
                      t = arg2abox_0(t);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = nzip_1(t, f_0);
              {
                ATerm t_6 = NULL;
                t_6 = t;
                if(((s_6 != NULL) && (s_6 != t_6)))
                  _fail(t_6);
                else
                  s_6 = t_6;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_6), not_null(s_6));
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
ATerm instantiate_sep_list_1 (ATerm t, ATerm d_93 (ATerm))
{
  ATerm l_7 (ATerm t)
  {
    ATerm b_7 = NULL,c_7 = NULL,d_7 = NULL;
    ATerm v_6 = t;
    int w_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_6);
      }
    else
      {
        t = v_6;
        {
          ATerm x_6 = t;
          int y_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              LocalPopChoice(y_6);
            }
          else
            {
              t = x_6;
              {
                ATerm e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
                e_7 = t;
                z_6 :
                if(((ATgetType(e_7) == AT_LIST) && !(ATisEmpty(e_7))))
                  {
                    f_7 = ATgetFirst((ATermList) e_7);
                    g_7 = (ATerm) ATgetNext((ATermList) e_7);
                    a_7 :
                    if(((ATgetType(g_7) == AT_LIST) && !(ATisEmpty(g_7))))
                      {
                        h_7 = ATgetFirst((ATermList) g_7);
                        i_7 = (ATerm) ATgetNext((ATermList) g_7);
                        {
                          if(((b_7 != NULL) && (b_7 != f_7)))
                            _fail(f_7);
                          else
                            b_7 = f_7;
                          {
                            if(((c_7 != NULL) && (c_7 != h_7)))
                              _fail(h_7);
                            else
                              c_7 = h_7;
                            {
                              if(((d_7 != NULL) && (d_7 != i_7)))
                                _fail(i_7);
                              else
                                d_7 = i_7;
                              {
                                ATerm o_0 (ATerm t)
                                {
                                  ATerm j_7 = NULL;
                                  ATerm k_7 = NULL;
                                  t = term_o_6;
                                  {
                                    t = d_93(t);
                                    {
                                      k_7 = t;
                                      if(((j_7 != NULL) && (j_7 != k_7)))
                                        _fail(k_7);
                                      else
                                        j_7 = k_7;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), (ATerm) ATinsert(ATinsert(ATempty, not_null(c_7)), not_null(b_7)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm p_0 (ATerm t)
                                {
                                  t = not_null(d_7);
                                  t = l_7(t);
                                  return(t);
                                }
                                t = Cons_2(t, o_0, p_0);
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
  t = l_7(t);
  return(t);
}
ATerm length_0 (ATerm t)
{
  ATerm q_0 (ATerm t)
  {
    t = term_m_7;
    return(t);
  }
  ATerm t_0 (ATerm t)
  {
    t = term_n_7;
    return(t);
  }
  t = foldr_3(t, q_0, add_0, t_0);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm s_83 (ATerm), ATerm t_83 (ATerm), ATerm u_83 (ATerm))
{
  ATerm o_7 = t;
  int p_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = s_83(t);
      LocalPopChoice(p_7);
    }
  else
    {
      t = o_7;
      {
        ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
        s_7 = t;
        r_7 :
        if(((ATgetType(s_7) == AT_LIST) && !(ATisEmpty(s_7))))
          {
            t_7 = ATgetFirst((ATermList) s_7);
            u_7 = (ATerm) ATgetNext((ATermList) s_7);
            {
              ATerm x_7 = NULL,z_7 = NULL;
              ATerm q_7;
              q_7 = t;
              {
                ATerm y_7 = NULL;
                t = not_null(t_7);
                {
                  t = u_83(t);
                  {
                    y_7 = t;
                    if(((x_7 != NULL) && (x_7 != y_7)))
                      _fail(y_7);
                    else
                      x_7 = y_7;
                  }
                }
              }
              t = q_7;
              {
                ATerm a_8 = NULL;
                t = not_null(u_7);
                {
                  t = foldr_3(t, s_83, t_83, u_83);
                  {
                    a_8 = t;
                    if(((z_7 != NULL) && (z_7 != a_8)))
                      _fail(a_8);
                    else
                      z_7 = a_8;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_7), not_null(z_7));
                  t = t_83(t);
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
ATerm crush_3 (ATerm t, ATerm q_82 (ATerm), ATerm r_82 (ATerm), ATerm s_82 (ATerm))
{
  ATerm i_8 = NULL;
  ATerm k_8 = NULL;
  i_8 = t;
  {
    ATerm l_8 = NULL;
    ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL;
    t = not_null(i_8);
    {
      l_8 = t;
      {
        t = SSL_explode_term(not_null(l_8));
        {
          n_8 = t;
          h_8 :
          if(match_cons(n_8, sym__2))
            {
              o_8 = ATgetArgument(n_8, 0);
              p_8 = ATgetArgument(n_8, 1);
              if(((k_8 != NULL) && (k_8 != p_8)))
                _fail(p_8);
              else
                k_8 = p_8;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_8);
      t = foldr_3(t, q_82, r_82, s_82);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm k_99 (ATerm))
{
  ATerm w_8 (ATerm t)
  {
    ATerm v_7 = t;
    int w_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_8 = NULL;
        t = k_99(t);
        {
          ATerm v_8 = NULL;
          v_8 = t;
          if(((u_8 != NULL) && (u_8 != v_8)))
            _fail(v_8);
          else
            u_8 = v_8;
          t = (ATerm) ATinsert(ATempty, not_null(u_8));
        }
        LocalPopChoice(w_7);
      }
    else
      {
        t = v_7;
        {
          ATerm u_0 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm v_0 (ATerm t)
          {
            ATerm b_8 = t;
            int c_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(c_8);
              }
            else
              {
                t = b_8;
                t = conc_more_lists_0(t);
              }
            return(t);
          }
          t = crush_3(t, u_0, v_0, w_8);
        }
      }
    return(t);
  }
  t = w_8(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm a_9 = NULL,b_9 = NULL,c_9 = NULL;
  a_9 = t;
  z_8 :
  if(match_cons(a_9, sym__2))
    {
      b_9 = ATgetArgument(a_9, 0);
      c_9 = ATgetArgument(a_9, 1);
      t = SSL_mod(not_null(b_9), not_null(c_9));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm d_8;
  d_8 = t;
  {
    ATerm i_9 = NULL,k_9 = NULL;
    ATerm j_9 = NULL;
    j_9 = t;
    if(((i_9 != NULL) && (i_9 != j_9)))
      _fail(j_9);
    else
      i_9 = j_9;
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(i_9), term_e_8);
      {
        t = mod_0(t);
        {
          k_9 = t;
          h_9 :
          if(!(match_int(k_9, 0)))
            {
              _fail(t);
            }
        }
      }
    }
  }
  t = d_8;
  return(t);
}
ATerm BuildSepList_1 (ATerm t, ATerm n_69 (ATerm))
{
  ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL;
  s_9 = t;
  r_9 :
  if(match_cons(s_9, sym__2))
    {
      t_9 = ATgetArgument(s_9, 0);
      u_9 = ATgetArgument(s_9, 1);
      {
        ATerm x_9 = NULL;
        ATerm f_8 = t;
        int g_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_9 = NULL,a_10 = NULL;
            t = not_null(t_9);
            {
              t = even_0(t);
              {
                ATerm z_9 = NULL;
                t = term_o_6;
                {
                  t = n_69(t);
                  {
                    z_9 = t;
                    if(((y_9 != NULL) && (y_9 != z_9)))
                      _fail(z_9);
                    else
                      y_9 = z_9;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_e_8, not_null(y_9), not_null(u_9));
                  {
                    t = arg2abox_0(t);
                    {
                      a_10 = t;
                      if(((x_9 != NULL) && (x_9 != a_10)))
                        _fail(a_10);
                      else
                        x_9 = a_10;
                    }
                  }
                }
              }
            }
            LocalPopChoice(g_8);
          }
        else
          {
            t = f_8;
            {
              ATerm b_10 = NULL,d_10 = NULL;
              ATerm c_10 = NULL;
              t = term_o_6;
              {
                t = n_69(t);
                {
                  c_10 = t;
                  if(((b_10 != NULL) && (b_10 != c_10)))
                    _fail(c_10);
                  else
                    b_10 = c_10;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_7, not_null(b_10), not_null(u_9));
                {
                  t = arg2abox_0(t);
                  {
                    d_10 = t;
                    if(((x_9 != NULL) && (x_9 != d_10)))
                      _fail(d_10);
                    else
                      x_9 = d_10;
                  }
                }
              }
            }
          }
        t = not_null(x_9);
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
  ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL;
  u_10 = t;
  t_10 :
  if(match_cons(u_10, sym__3))
    {
      v_10 = ATgetArgument(u_10, 0);
      w_10 = ATgetArgument(u_10, 1);
      x_10 = ATgetArgument(u_10, 2);
      {
        ATerm b_11 = NULL;
        t = not_null(x_10);
        {
          ATerm w_0 (ATerm t)
          {
            ATerm x_0 (ATerm t)
            {
              t = not_null(v_10);
              return(t);
            }
            t = BuildSepList_1(t, x_0);
            return(t);
          }
          t = nzip_1(t, w_0);
          {
            b_11 = t;
            {
              ATerm j_8 = t;
              int m_8 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_11 = NULL;
                  t = not_null(w_10);
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
                        d_11 = t;
                        s_10 :
                        if(match_int(d_11, 1))
                          {
                            t = not_null(b_11);
                            {
                              ATerm v_11 (ATerm t)
                              {
                                ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
                                ATerm y_11 (ATerm t)
                                {
                                  ATerm q_11 = NULL;
                                  ATerm r_11 = NULL;
                                  t = not_null(g_11);
                                  {
                                    t = v_11(t);
                                    {
                                      r_11 = t;
                                      if(((q_11 != NULL) && (q_11 != r_11)))
                                        _fail(r_11);
                                      else
                                        q_11 = r_11;
                                    }
                                  }
                                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(q_11)), not_null(f_11)), not_null(f_11));
                                  return(t);
                                }
                                e_11 = t;
                                q_10 :
                                if(((ATgetType(e_11) == AT_LIST) && ATisEmpty(e_11)))
                                  {
                                    t = (ATerm) ATempty;
                                  }
                                else
                                  {
                                    if(((ATgetType(e_11) == AT_LIST) && !(ATisEmpty(e_11))))
                                      {
                                        f_11 = ATgetFirst((ATermList) e_11);
                                        g_11 = (ATerm) ATgetNext((ATermList) e_11);
                                        r_10 :
                                        if(((ATgetType(g_11) == AT_LIST) && ATisEmpty(g_11)))
                                          {
                                            {
                                              ATerm q_8 = t;
                                              int r_8 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = (ATerm) ATinsert(ATempty, not_null(f_11));
                                                  LocalPopChoice(r_8);
                                                }
                                              else
                                                {
                                                  t = q_8;
                                                  t = y_11(t);
                                                }
                                            }
                                          }
                                        else
                                          {
                                            t = y_11(t);
                                          }
                                      }
                                    else
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              t = v_11(t);
                            }
                          }
                        else
                          {
                            _fail(t);
                          }
                      }
                    }
                  }
                  LocalPopChoice(m_8);
                }
              else
                {
                  t = j_8;
                  t = not_null(b_11);
                }
              {
                ATerm z_0 (ATerm t)
                {
                  t = not_null(w_10);
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
  ATerm e_12 = NULL,f_12 = NULL,g_12 = NULL,h_12 = NULL,i_12 = NULL;
  e_12 = t;
  c_12 :
  if(match_cons(e_12, sym__4))
    {
      f_12 = ATgetArgument(e_12, 0);
      g_12 = ATgetArgument(e_12, 1);
      h_12 = ATgetArgument(e_12, 2);
      i_12 = ATgetArgument(e_12, 3);
      d_12 :
      if(match_string(f_12, "iter-star-sep"))
        {
          t = (ATerm) ATmakeAppl(sym__3, not_null(g_12), not_null(h_12), not_null(i_12));
          t = symbol2abox6_helper_0(t);
        }
      else
        {
          if(match_string(f_12, "iter-sep"))
            {
              t = (ATerm) ATmakeAppl(sym__3, not_null(g_12), not_null(h_12), not_null(i_12));
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
  ATerm x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,j_13 = NULL;
  a_13 = t;
  t_12 :
  if(match_cons(a_13, sym__4))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      d_13 = ATgetArgument(a_13, 2);
      e_13 = ATgetArgument(a_13, 3);
      u_12 :
      if(match_string(b_13, "iter"))
        {
          if(((x_12 != NULL) && (x_12 != c_13)))
            _fail(c_13);
          else
            x_12 = c_13;
          {
            if(((y_12 != NULL) && (y_12 != d_13)))
              _fail(d_13);
            else
              y_12 = d_13;
            if(((z_12 != NULL) && (z_12 != e_13)))
              _fail(e_13);
            else
              z_12 = e_13;
          }
        }
      else
        {
          if(match_string(b_13, "iter-star"))
            {
              if(((x_12 != NULL) && (x_12 != c_13)))
                _fail(c_13);
              else
                x_12 = c_13;
              {
                if(((y_12 != NULL) && (y_12 != d_13)))
                  _fail(d_13);
                else
                  y_12 = d_13;
                if(((z_12 != NULL) && (z_12 != e_13)))
                  _fail(e_13);
                else
                  z_12 = e_13;
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
    t = not_null(z_12);
    {
      ATerm a_1 (ATerm t)
      {
        ATerm f_13 = NULL;
        f_13 = t;
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_7, not_null(x_12), not_null(f_13));
          t = arg2abox_0(t);
        }
        return(t);
      }
      t = map_1(t, a_1);
      {
        ATerm k_13 = NULL;
        k_13 = t;
        if(((j_13 != NULL) && (j_13 != k_13)))
          _fail(k_13);
        else
          j_13 = k_13;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(y_12), (ATerm) ATinsert(ATempty, not_null(j_13)));
          t = instantiate_0(t);
        }
      }
    }
  }
  return(t);
}
ATerm symbol2abox4_0 (ATerm t)
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL,v_13 = NULL,w_13 = NULL;
  s_13 = t;
  q_13 :
  if(match_cons(s_13, sym__4))
    {
      t_13 = ATgetArgument(s_13, 0);
      u_13 = ATgetArgument(s_13, 1);
      v_13 = ATgetArgument(s_13, 2);
      w_13 = ATgetArgument(s_13, 3);
      r_13 :
      if(match_cons(w_13, sym_None_0))
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
  ATerm f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL,k_14 = NULL;
  f_14 = t;
  d_14 :
  if(match_cons(f_14, sym__4))
    {
      g_14 = ATgetArgument(f_14, 0);
      h_14 = ATgetArgument(f_14, 1);
      i_14 = ATgetArgument(f_14, 2);
      j_14 = ATgetArgument(f_14, 3);
      e_14 :
      if(match_cons(j_14, sym_Some_1))
        {
          k_14 = ATgetArgument(j_14, 0);
          {
            ATerm p_14 = NULL;
            t = (ATerm) ATmakeAppl(sym__3, term_n_7, not_null(h_14), not_null(k_14));
            {
              t = arg2abox_0(t);
              {
                ATerm q_14 = NULL;
                q_14 = t;
                if(((p_14 != NULL) && (p_14 != q_14)))
                  _fail(q_14);
                else
                  p_14 = q_14;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_14), (ATerm) ATinsert(ATempty, not_null(p_14)));
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
  ATerm a_15 = NULL,b_15 = NULL,c_15 = NULL,d_15 = NULL,e_15 = NULL,f_15 = NULL,g_15 = NULL,h_15 = NULL,i_15 = NULL;
  a_15 = t;
  w_14 :
  if(match_cons(a_15, sym__4))
    {
      b_15 = ATgetArgument(a_15, 0);
      c_15 = ATgetArgument(a_15, 1);
      d_15 = ATgetArgument(a_15, 2);
      e_15 = ATgetArgument(a_15, 3);
      x_14 :
      if(match_cons(e_15, sym_alt_2))
        {
          f_15 = ATgetArgument(e_15, 0);
          g_15 = ATgetArgument(e_15, 1);
          y_14 :
          if(((ATgetType(g_15) == AT_LIST) && !(ATisEmpty(g_15))))
            {
              h_15 = ATgetFirst((ATermList) g_15);
              i_15 = (ATerm) ATgetNext((ATermList) g_15);
              z_14 :
              if(((ATgetType(i_15) == AT_LIST) && ATisEmpty(i_15)))
                {
                  {
                    ATerm o_15 = NULL,q_15 = NULL;
                    t = (ATerm) ATmakeAppl(sym__3, not_null(f_15), not_null(c_15), not_null(h_15));
                    {
                      t = arg2abox_0(t);
                      {
                        ATerm s_8;
                        s_8 = t;
                        {
                          ATerm p_15 = NULL;
                          p_15 = t;
                          if(((o_15 != NULL) && (o_15 != p_15)))
                            _fail(p_15);
                          else
                            o_15 = p_15;
                        }
                        t = s_8;
                        {
                          ATerm r_15 = NULL;
                          t = (ATerm) ATmakeAppl(sym__2, not_null(f_15), not_null(d_15));
                          {
                            t = index_0(t);
                            {
                              r_15 = t;
                              if(((q_15 != NULL) && (q_15 != r_15)))
                                _fail(r_15);
                              else
                                q_15 = r_15;
                            }
                          }
                          {
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_15)), (ATerm) ATinsert(ATempty, not_null(o_15)));
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
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL;
  z_15 = t;
  w_15 :
  if(match_cons(z_15, sym__2))
    {
      a_16 = ATgetArgument(z_15, 0);
      b_16 = ATgetArgument(z_15, 1);
      x_15 :
      if(match_int(a_16, 1))
        {
          y_15 :
          if(((ATgetType(b_16) == AT_LIST) && !(ATisEmpty(b_16))))
            {
              c_16 = ATgetFirst((ATermList) b_16);
              d_16 = (ATerm) ATgetNext((ATermList) b_16);
              t = not_null(c_16);
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
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  j_16 = t;
  i_16 :
  if(match_cons(j_16, sym__2))
    {
      k_16 = ATgetArgument(j_16, 0);
      l_16 = ATgetArgument(j_16, 1);
      {
        ATerm t_8 = t;
        int x_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(k_16), not_null(l_16));
            LocalPopChoice(x_8);
          }
        else
          {
            t = t_8;
            t = SSL_subtr(not_null(k_16), not_null(l_16));
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
  ATerm t_16 = NULL,u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL;
  t_16 = t;
  r_16 :
  if(match_cons(t_16, sym__2))
    {
      u_16 = ATgetArgument(t_16, 0);
      v_16 = ATgetArgument(t_16, 1);
      s_16 :
      if(((ATgetType(v_16) == AT_LIST) && !(ATisEmpty(v_16))))
        {
          w_16 = ATgetFirst((ATermList) v_16);
          x_16 = (ATerm) ATgetNext((ATermList) v_16);
          {
            ATerm b_17 = NULL;
            ATerm y_8;
            y_8 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), term_e_8);
              t = geq_0(t);
            }
            t = y_8;
            {
              ATerm c_17 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(u_16), term_n_7);
              {
                t = subt_0(t);
                {
                  c_17 = t;
                  if(((b_17 != NULL) && (b_17 != c_17)))
                    _fail(c_17);
                  else
                    b_17 = c_17;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(b_17), not_null(x_16));
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
ATerm repeat_2 (ATerm t, ATerm e_90 (ATerm), ATerm f_90 (ATerm))
{
  ATerm f_17 (ATerm t)
  {
    ATerm d_9 = t;
    int e_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_90(t);
        t = f_17(t);
        LocalPopChoice(e_9);
      }
    else
      {
        t = d_9;
        t = f_90(t);
      }
    return(t);
  }
  t = f_17(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm h_90 (ATerm))
{
  t = repeat_2(t, h_90, _id);
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
  ATerm l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL;
  l_17 = t;
  i_17 :
  if(match_cons(l_17, sym__4))
    {
      m_17 = ATgetArgument(l_17, 0);
      n_17 = ATgetArgument(l_17, 1);
      o_17 = ATgetArgument(l_17, 2);
      p_17 = ATgetArgument(l_17, 3);
      j_17 :
      if(match_cons(p_17, sym_alt_2))
        {
          q_17 = ATgetArgument(p_17, 0);
          r_17 = ATgetArgument(p_17, 1);
          k_17 :
          if(((ATgetType(r_17) == AT_LIST) && ATisEmpty(r_17)))
            {
              {
                ATerm w_17 = NULL;
                ATerm x_17 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(q_17), not_null(o_17));
                {
                  t = index_0(t);
                  {
                    x_17 = t;
                    if(((w_17 != NULL) && (w_17 != x_17)))
                      _fail(x_17);
                    else
                      w_17 = x_17;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(w_17)), (ATerm) ATempty);
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
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = symbol2abox1_0(t);
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm l_9 = t;
        int m_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = symbol2abox2_0(t);
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
                  t = symbol2abox3_0(t);
                  LocalPopChoice(o_9);
                }
              else
                {
                  t = n_9;
                  {
                    ATerm p_9 = t;
                    int q_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = symbol2abox4_0(t);
                        LocalPopChoice(q_9);
                      }
                    else
                      {
                        t = p_9;
                        {
                          ATerm v_9 = t;
                          int w_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = symbol2abox5_0(t);
                              LocalPopChoice(w_9);
                            }
                          else
                            {
                              t = v_9;
                              {
                                ATerm e_10 = t;
                                int f_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = symbol2abox6_0(t);
                                    LocalPopChoice(f_10);
                                  }
                                else
                                  {
                                    t = e_10;
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
  ATerm d_18 = NULL,e_18 = NULL,f_18 = NULL;
  d_18 = t;
  c_18 :
  if(match_cons(d_18, sym_Path_2))
    {
      e_18 = ATgetArgument(d_18, 0);
      f_18 = ATgetArgument(d_18, 1);
      {
        ATerm i_18 = NULL;
        t = not_null(f_18);
        {
          ATerm b_1 (ATerm t)
          {
            ATerm c_1 (ATerm t)
            {
              ATerm d_1 (ATerm t)
              {
                ATerm j_18 = NULL;
                j_18 = t;
                if(((i_18 != NULL) && (i_18 != j_18)))
                  _fail(j_18);
                else
                  i_18 = j_18;
                return(t);
              }
              t = selector_2(t, _id, d_1);
              return(t);
            }
            t = Cons_2(t, c_1, Nil_0);
            return(t);
          }
          t = at_last_1(t, b_1);
        }
        t = not_null(i_18);
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
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym__3))
    {
      t_18 = ATgetArgument(s_18, 0);
      u_18 = ATgetArgument(s_18, 1);
      v_18 = ATgetArgument(s_18, 2);
      {
        ATerm z_18 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_18), (ATerm) ATinsert(ATempty, not_null(t_18)));
        {
          ATerm b_19 = NULL,c_19 = NULL;
          ATerm g_10 = t;
          int h_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(h_10);
            }
          else
            {
              t = g_10;
              t = conc_more_lists_0(t);
            }
          {
            z_18 = t;
            {
              ATerm i_10 = t;
              int j_10 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm d_19 = NULL,e_19 = NULL,f_19 = NULL;
                  t = pp_table_get_0(t);
                  {
                    d_19 = t;
                    q_18 :
                    if(match_cons(d_19, sym__2))
                      {
                        e_19 = ATgetArgument(d_19, 0);
                        f_19 = ATgetArgument(d_19, 1);
                        {
                          ATerm g_19 = NULL;
                          if(((b_19 != NULL) && (b_19 != e_19)))
                            _fail(e_19);
                          else
                            b_19 = e_19;
                          {
                            if(((c_19 != NULL) && (c_19 != f_19)))
                              _fail(f_19);
                            else
                              c_19 = f_19;
                            {
                              ATerm h_19 = NULL;
                              t = not_null(b_19);
                              {
                                t = get_symbol_0(t);
                                {
                                  h_19 = t;
                                  if(((g_19 != NULL) && (g_19 != h_19)))
                                    _fail(h_19);
                                  else
                                    g_19 = h_19;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__4, not_null(g_19), not_null(z_18), not_null(c_19), not_null(v_18));
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
                  LocalPopChoice(j_10);
                }
              else
                {
                  t = i_10;
                  {
                    t = not_null(v_18);
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
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL;
  o_19 = t;
  n_19 :
  if(match_cons(o_19, sym__2))
    {
      p_19 = ATgetArgument(o_19, 0);
      q_19 = ATgetArgument(o_19, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(q_19)), not_null(p_19));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL,b_20 = NULL,c_20 = NULL;
  y_19 = t;
  w_19 :
  if(match_cons(y_19, sym__2))
    {
      z_19 = ATgetArgument(y_19, 0);
      a_20 = ATgetArgument(y_19, 1);
      x_19 :
      if(((ATgetType(a_20) == AT_LIST) && !(ATisEmpty(a_20))))
        {
          b_20 = ATgetFirst((ATermList) a_20);
          c_20 = (ATerm) ATgetNext((ATermList) a_20);
          {
            ATerm g_20 = NULL;
            ATerm h_20 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_19), term_n_7);
            {
              t = add_0(t);
              {
                h_20 = t;
                if(((g_20 != NULL) && (g_20 != h_20)))
                  _fail(h_20);
                else
                  g_20 = h_20;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_19), not_null(b_20)), (ATerm) ATmakeAppl(sym__2, not_null(g_20), not_null(c_20)));
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
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
  n_20 = t;
  l_20 :
  if(match_cons(n_20, sym__2))
    {
      o_20 = ATgetArgument(n_20, 0);
      p_20 = ATgetArgument(n_20, 1);
      m_20 :
      if(((ATgetType(p_20) == AT_LIST) && ATisEmpty(p_20)))
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
ATerm genzip_4 (ATerm t, ATerm d_79 (ATerm), ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm))
{
  ATerm s_20 (ATerm t)
  {
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_79(t);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        {
          t = e_79(t);
          {
            t = _2(t, g_79, s_20);
            t = f_79(t);
          }
        }
      }
    return(t);
  }
  t = s_20(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm u_20 = NULL;
  u_20 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_7, not_null(u_20));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm p_79 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, p_79);
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm a_21 = NULL;
  ATerm c_21 = NULL,d_21 = NULL,e_21 = NULL;
  a_21 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_m_10, not_null(a_21));
    {
      t = table_get_0(t);
      {
        c_21 = t;
        z_20 :
        if(match_cons(c_21, sym__2))
          {
            d_21 = ATgetArgument(c_21, 0);
            e_21 = ATgetArgument(c_21, 1);
            {
              ATerm n_10;
              n_10 = t;
              {
                t = not_null(d_21);
                {
                  t = path_to_string_0(t);
                  {
                    ATerm e_1 (ATerm t)
                    {
                      t = term_o_10;
                      return(t);
                    }
                    t = notify_1(t, e_1);
                  }
                }
              }
              t = n_10;
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
  ATerm k_21 = NULL;
  k_21 = t;
  {
    ATerm p_10 = t;
    int y_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = pp_table_get_0(t);
        LocalPopChoice(y_10);
      }
    else
      {
        t = p_10;
        {
          ATerm f_1 (ATerm t)
          {
            t = term_z_10;
            return(t);
          }
          t = debug_1(t, f_1);
          _fail(t);
        }
      }
  }
  return(t);
}
ATerm trm2abox_appl_0 (ATerm t)
{
  ATerm w_21 = NULL;
  ATerm y_21 = NULL,z_21 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL;
  w_21 = t;
  {
    ATerm a_22 = NULL;
    ATerm c_22 = NULL,d_22 = NULL,e_22 = NULL;
    t = not_null(w_21);
    {
      a_22 = t;
      {
        t = SSL_explode_term(not_null(a_22));
        {
          c_22 = t;
          q_21 :
          if(match_cons(c_22, sym__2))
            {
              d_22 = ATgetArgument(c_22, 0);
              e_22 = ATgetArgument(c_22, 1);
              {
                if(((y_21 != NULL) && (y_21 != d_22)))
                  _fail(d_22);
                else
                  y_21 = d_22;
                if(((z_21 != NULL) && (z_21 != e_22)))
                  _fail(e_22);
                else
                  z_21 = e_22;
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
      t = (ATerm) ATinsert(ATempty, not_null(y_21));
      {
        t = try_pp_table_get_0(t);
        {
          f_22 = t;
          v_21 :
          if(match_cons(f_22, sym__2))
            {
              g_22 = ATgetArgument(f_22, 0);
              h_22 = ATgetArgument(f_22, 1);
              {
                ATerm p_22 = NULL;
                t = not_null(z_21);
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm k_22 = NULL,l_22 = NULL,m_22 = NULL;
                    k_22 = t;
                    t_21 :
                    if(match_cons(k_22, sym__2))
                      {
                        l_22 = ATgetArgument(k_22, 0);
                        m_22 = ATgetArgument(k_22, 1);
                        {
                          t = (ATerm) ATmakeAppl(sym__3, not_null(l_22), (ATerm)ATinsert(ATempty, not_null(y_21)), not_null(m_22));
                          t = arg2abox_0(t);
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = nzip_1(t, g_1);
                  {
                    p_22 = t;
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(h_22), not_null(p_22));
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
  ATerm q_25 = NULL;
  ATerm u_25 = NULL,v_25 = NULL;
  q_25 = t;
  {
    ATerm a_11;
    a_11 = t;
    {
      ATerm b_26 = NULL;
      ATerm d_26 = NULL,e_26 = NULL,h_26 = NULL;
      t = not_null(q_25);
      {
        b_26 = t;
        {
          t = SSL_explode_term(not_null(b_26));
          {
            d_26 = t;
            p_25 :
            if(match_cons(d_26, sym__2))
              {
                e_26 = ATgetArgument(d_26, 0);
                h_26 = ATgetArgument(d_26, 1);
                {
                  if(((u_25 != NULL) && (u_25 != e_26)))
                    _fail(e_26);
                  else
                    u_25 = e_26;
                  if(((v_25 != NULL) && (v_25 != h_26)))
                    _fail(h_26);
                  else
                    v_25 = h_26;
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
    t = a_11;
    {
      t = is_list_0(t);
      t = map_1(t, trm2abox_0);
    }
  }
  return(t);
}
ATerm is_int_0 (ATerm t)
{
  ATerm n_26 = NULL;
  n_26 = t;
  t = SSL_is_int(not_null(n_26));
  return(t);
}
ATerm trm2abox_int_0 (ATerm t)
{
  ATerm r_26 = NULL;
  t = is_int_0(t);
  {
    ATerm s_26 = NULL;
    t = int_to_string_0(t);
    {
      s_26 = t;
      if(((r_26 != NULL) && (r_26 != s_26)))
        _fail(s_26);
      else
        r_26 = s_26;
    }
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(r_26));
  }
  return(t);
}
ATerm trm2abox_string_0 (ATerm t)
{
  ATerm v_26 = NULL;
  t = is_string_0(t);
  {
    ATerm w_26 = NULL;
    w_26 = t;
    if(((v_26 != NULL) && (v_26 != w_26)))
      _fail(w_26);
    else
      v_26 = w_26;
    t = (ATerm) ATmakeAppl(sym_S_1, not_null(v_26));
  }
  return(t);
}
ATerm trm2abox_0 (ATerm t)
{
  ATerm c_11 = t;
  int h_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = trm2abox_string_0(t);
      LocalPopChoice(h_11);
    }
  else
    {
      t = c_11;
      {
        ATerm i_11 = t;
        int j_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = trm2abox_int_0(t);
            LocalPopChoice(j_11);
          }
        else
          {
            t = i_11;
            {
              ATerm k_11 = t;
              int l_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = trm2abox_list_0(t);
                  LocalPopChoice(l_11);
                }
              else
                {
                  t = k_11;
                  {
                    ATerm m_11 = t;
                    int n_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = trm2abox_appl_0(t);
                        LocalPopChoice(n_11);
                      }
                    else
                      {
                        t = m_11;
                        {
                          ATerm z_26 = NULL;
                          ATerm k_27 = NULL;
                          k_27 = t;
                          if(((z_26 != NULL) && (z_26 != k_27)))
                            _fail(k_27);
                          else
                            z_26 = k_27;
                          {
                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_26)), term_o_11);
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
  ATerm n_27 = NULL;
  n_27 = t;
  t = SSL_close_file(not_null(n_27));
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym__2))
    {
      w_27 = ATgetArgument(v_27, 0);
      x_27 = ATgetArgument(v_27, 1);
      t = SSL_WriteToBinaryFile(not_null(w_27), not_null(x_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm assert_1 (ATerm t, ATerm l_85 (ATerm))
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym__2))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      {
        ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
        ATerm p_11;
        p_11 = t;
        {
          ATerm t_28 = NULL;
          ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
          t = l_85(t);
          {
            t_28 = t;
            {
              if(((q_28 != NULL) && (q_28 != t_28)))
                _fail(t_28);
              else
                q_28 = t_28;
              {
                t = (ATerm) ATmakeAppl(sym__3, not_null(q_28), not_null(m_28), not_null(n_28));
                {
                  t = table_push_0(t);
                  {
                    ATerm s_11 = t;
                    int t_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(q_28), term_u_11);
                        t = table_get_0(t);
                        LocalPopChoice(t_11);
                      }
                    else
                      {
                        t = s_11;
                        t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
                      }
                    {
                      u_28 = t;
                      j_28 :
                      if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
                        {
                          v_28 = ATgetFirst((ATermList) u_28);
                          w_28 = (ATerm) ATgetNext((ATermList) u_28);
                          {
                            if(((r_28 != NULL) && (r_28 != v_28)))
                              _fail(v_28);
                            else
                              r_28 = v_28;
                            {
                              if(((s_28 != NULL) && (s_28 != w_28)))
                                _fail(w_28);
                              else
                                s_28 = w_28;
                              {
                                t = (ATerm) ATmakeAppl(sym__3, not_null(q_28), term_u_11, (ATerm) ATinsert(CheckATermList(not_null(s_28)), (ATerm) ATinsert(CheckATermList(not_null(r_28)), not_null(m_28))));
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
        t = p_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm obsolete_1 (ATerm t, ATerm q_88 (ATerm))
{
  ATerm w_11;
  w_11 = t;
  {
    t = q_88(t);
    {
      ATerm h_1 (ATerm t)
      {
        t = term_x_11;
        return(t);
      }
      t = debug_1(t, h_1);
    }
  }
  t = w_11;
  return(t);
}
ATerm open_file_0 (ATerm t)
{
  ATerm e_29 = NULL,f_29 = NULL;
  ATerm z_11 = t;
  int a_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_29 = NULL,h_29 = NULL,i_29 = NULL;
      g_29 = t;
      b_29 :
      if(match_cons(g_29, sym__2))
        {
          h_29 = ATgetArgument(g_29, 0);
          i_29 = ATgetArgument(g_29, 1);
          {
            if(((f_29 != NULL) && (f_29 != h_29)))
              _fail(h_29);
            else
              f_29 = h_29;
            if(((e_29 != NULL) && (e_29 != i_29)))
              _fail(i_29);
            else
              e_29 = i_29;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(a_12);
      t = SSL_open_file(not_null(f_29), not_null(e_29));
    }
  else
    {
      t = z_11;
      {
        ATerm j_29 = NULL;
        ATerm k_29 = NULL;
        ATerm i_1 (ATerm t)
        {
          t = term_b_12;
          return(t);
        }
        t = obsolete_1(t, i_1);
        {
          j_29 = t;
          {
            if(((f_29 != NULL) && (f_29 != j_29)))
              _fail(j_29);
            else
              f_29 = j_29;
            {
              ATerm j_12;
              j_12 = t;
              {
                ATerm l_29 = NULL;
                t = term_k_12;
                {
                  l_29 = t;
                  if(((k_29 != NULL) && (k_29 != l_29)))
                    _fail(l_29);
                  else
                    k_29 = l_29;
                }
              }
              t = j_12;
              t = SSL_open_file(not_null(f_29), not_null(k_29));
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
  ATerm x_29 = NULL;
  ATerm y_29 = NULL;
  t = term_o_6;
  {
    t = new_0(t);
    {
      y_29 = t;
      if(((x_29 != NULL) && (x_29 != y_29)))
        _fail(y_29);
      else
        x_29 = y_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_29), term_l_12);
    {
      t = conc_strings_0(t);
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = file_exists_0(t);
            t = new_file_0(t);
            LocalPopChoice(n_12);
          }
        else
          {
            t = m_12;
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
  ATerm e_30 = NULL;
  t = new_file_0(t);
  {
    e_30 = t;
    {
      ATerm o_12;
      o_12 = t;
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), term_k_12);
        {
          t = open_file_0(t);
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_30), term_o_6);
            {
              ATerm j_1 (ATerm t)
              {
                t = term_p_12;
                return(t);
              }
              t = assert_1(t, j_1);
            }
          }
        }
      }
      t = o_12;
    }
  }
  return(t);
}
ATerm write_to_0 (ATerm t)
{
  ATerm j_30 = NULL;
  ATerm l_30 = NULL;
  j_30 = t;
  {
    ATerm m_30 = NULL;
    t = xtc_new_file_0(t);
    {
      m_30 = t;
      {
        if(((l_30 != NULL) && (l_30 != m_30)))
          _fail(m_30);
        else
          l_30 = m_30;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_30), not_null(j_30));
          {
            t = WriteToBinaryFile_0(t);
            {
              t = not_null(l_30);
              t = close_file_0(t);
            }
          }
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(l_30));
  }
  return(t);
}
ATerm file_exists_0 (ATerm t)
{
  ATerm s_30 = NULL;
  ATerm u_30 = NULL;
  s_30 = t;
  {
    ATerm q_12;
    q_12 = t;
    {
      ATerm v_30 = NULL;
      t = term_r_12;
      {
        v_30 = t;
        if(((u_30 != NULL) && (u_30 != v_30)))
          _fail(v_30);
        else
          u_30 = v_30;
      }
    }
    t = q_12;
    {
      t = SSL_open_file(not_null(s_30), not_null(u_30));
      t = SSL_close_file(not_null(s_30));
    }
  }
  return(t);
}
ATerm read_from_0 (ATerm t)
{
  ATerm d_31 = NULL,e_31 = NULL;
  d_31 = t;
  c_31 :
  if(match_cons(d_31, sym_stdin_0))
    {
      ATerm f_31 = NULL;
      ATerm g_31 = NULL;
      t = term_s_12;
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
      t = not_null(f_31);
    }
  else
    {
      if(match_cons(d_31, sym_FILE_1))
        {
          e_31 = ATgetArgument(d_31, 0);
          {
            ATerm n_31 = NULL;
            ATerm o_31 = NULL;
            t = not_null(e_31);
            {
              t = file_exists_0(t);
              {
                t = ReadFromFile_0(t);
                {
                  o_31 = t;
                  if(((n_31 != NULL) && (n_31 != o_31)))
                    _fail(o_31);
                  else
                    n_31 = o_31;
                }
              }
            }
            t = not_null(n_31);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm xtc_io_transform_1 (ATerm t, ATerm h_72 (ATerm))
{
  t = read_from_0(t);
  {
    t = h_72(t);
    t = write_to_0(t);
  }
  return(t);
}
ATerm copy_file_0 (ATerm t)
{
  ATerm v_31 = NULL,w_31 = NULL,x_31 = NULL;
  v_31 = t;
  u_31 :
  if(match_cons(v_31, sym__2))
    {
      w_31 = ATgetArgument(v_31, 0);
      x_31 = ATgetArgument(v_31, 1);
      t = SSL_copy(not_null(w_31), not_null(x_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm stderr_0 (ATerm t)
{
  ATerm l_32 = NULL;
  l_32 = t;
  k_32 :
  if(match_cons(l_32, sym_stderr_0))
    {
      ATerm n_32 = NULL,p_32 = NULL;
      ATerm v_12;
      v_12 = t;
      {
        ATerm o_32 = NULL;
        t = SSLgetAnnotations(not_null(l_32));
        {
          o_32 = t;
          if(((n_32 != NULL) && (n_32 != o_32)))
            _fail(o_32);
          else
            n_32 = o_32;
        }
      }
      t = v_12;
      {
        ATerm q_32 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stderr_0), not_null(n_32));
        {
          q_32 = t;
          if(((p_32 != NULL) && (p_32 != q_32)))
            _fail(q_32);
          else
            p_32 = q_32;
        }
        t = not_null(p_32);
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
  ATerm y_32 = NULL;
  y_32 = t;
  x_32 :
  if(match_cons(y_32, sym_stdout_0))
    {
      ATerm a_33 = NULL,c_33 = NULL;
      ATerm w_12;
      w_12 = t;
      {
        ATerm b_33 = NULL;
        t = SSLgetAnnotations(not_null(y_32));
        {
          b_33 = t;
          if(((a_33 != NULL) && (a_33 != b_33)))
            _fail(b_33);
          else
            a_33 = b_33;
        }
      }
      t = w_12;
      {
        ATerm d_33 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_stdout_0), not_null(a_33));
        {
          d_33 = t;
          if(((c_33 != NULL) && (c_33 != d_33)))
            _fail(d_33);
          else
            c_33 = d_33;
        }
        t = not_null(c_33);
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
  ATerm p_33 = NULL,q_33 = NULL;
  p_33 = t;
  o_33 :
  if(match_cons(p_33, sym_FILE_1))
    {
      q_33 = ATgetArgument(p_33, 0);
      {
        ATerm g_13 = t;
        int h_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_33 = NULL;
            ATerm y_33 = NULL;
            t = m_0(t);
            {
              y_33 = t;
              {
                if(((s_33 != NULL) && (s_33 != y_33)))
                  _fail(y_33);
                else
                  s_33 = y_33;
                {
                  ATerm i_13 = t;
                  int l_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = stdout_0(t);
                      LocalPopChoice(l_13);
                    }
                  else
                    {
                      t = i_13;
                      t = stderr_0(t);
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(s_33));
                    t = copy_file_0(t);
                  }
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_33));
            LocalPopChoice(h_13);
          }
        else
          {
            t = g_13;
            {
              ATerm m_13 = t;
              int n_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_34 = NULL;
                  ATerm b_34 = NULL;
                  t = m_0(t);
                  {
                    b_34 = t;
                    {
                      if(((a_34 != NULL) && (a_34 != b_34)))
                        _fail(b_34);
                      else
                        a_34 = b_34;
                      {
                        ATerm o_13 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm p_13 = t;
                            int x_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = stdout_0(t);
                                LocalPopChoice(x_13);
                              }
                            else
                              {
                                t = p_13;
                                {
                                  ATerm y_13 = t;
                                  int z_13 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = stderr_0(t);
                                      LocalPopChoice(z_13);
                                    }
                                  else
                                    {
                                      t = y_13;
                                      {
                                        ATerm c_34 = NULL;
                                        c_34 = t;
                                        if(((q_33 != NULL) && (q_33 != c_34)))
                                          _fail(c_34);
                                        else
                                          q_33 = c_34;
                                      }
                                    }
                                }
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = o_13;
                          }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(q_33), not_null(a_34));
                          t = copy_file_0(t);
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_33));
                  LocalPopChoice(n_13);
                }
              else
                {
                  t = m_13;
                  {
                    ATerm e_34 = NULL;
                    t = m_0(t);
                    {
                      e_34 = t;
                      if(((q_33 != NULL) && (q_33 != e_34)))
                        _fail(e_34);
                      else
                        q_33 = e_34;
                    }
                    t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(q_33));
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
  ATerm p_34 = NULL,q_34 = NULL,r_34 = NULL;
  p_34 = t;
  o_34 :
  if(match_cons(p_34, sym__2))
    {
      q_34 = ATgetArgument(p_34, 0);
      r_34 = ATgetArgument(p_34, 1);
      {
        ATerm a_14;
        a_14 = t;
        {
          ATerm u_34 = NULL;
          ATerm v_34 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(q_34), not_null(r_34));
          {
            ATerm b_14 = t;
            int c_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                t = Tl_0(t);
                LocalPopChoice(c_14);
              }
            else
              {
                t = b_14;
                t = (ATerm) ATempty;
              }
            {
              v_34 = t;
              if(((u_34 != NULL) && (u_34 != v_34)))
                _fail(v_34);
              else
                u_34 = v_34;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(q_34), not_null(r_34), not_null(u_34));
            t = table_put_0(t);
          }
        }
        t = a_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm end_scope_1 (ATerm t, ATerm i_85 (ATerm))
{
  ATerm j_35 = NULL,k_35 = NULL,l_35 = NULL;
  ATerm l_14;
  l_14 = t;
  {
    ATerm m_35 = NULL;
    ATerm n_35 = NULL,o_35 = NULL,p_35 = NULL;
    t = i_85(t);
    {
      m_35 = t;
      {
        if(((l_35 != NULL) && (l_35 != m_35)))
          _fail(m_35);
        else
          l_35 = m_35;
        {
          ATerm m_14 = t;
          int n_14 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_35), term_u_11);
              t = table_get_0(t);
              LocalPopChoice(n_14);
            }
          else
            {
              t = m_14;
              t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
            }
          {
            n_35 = t;
            i_35 :
            if(((ATgetType(n_35) == AT_LIST) && !(ATisEmpty(n_35))))
              {
                o_35 = ATgetFirst((ATermList) n_35);
                p_35 = (ATerm) ATgetNext((ATermList) n_35);
                {
                  if(((k_35 != NULL) && (k_35 != o_35)))
                    _fail(o_35);
                  else
                    k_35 = o_35;
                  {
                    if(((j_35 != NULL) && (j_35 != p_35)))
                      _fail(p_35);
                    else
                      j_35 = p_35;
                    {
                      t = (ATerm) ATmakeAppl(sym__3, not_null(l_35), term_u_11, not_null(j_35));
                      {
                        t = table_put_0(t);
                        {
                          t = not_null(k_35);
                          {
                            ATerm k_1 (ATerm t)
                            {
                              ATerm q_35 = NULL;
                              q_35 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(l_35), not_null(q_35));
                                t = table_pop_0(t);
                              }
                              return(t);
                            }
                            t = map_1(t, k_1);
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
  t = l_14;
  return(t);
}
ATerm remove_file_0 (ATerm t)
{
  ATerm w_35 = NULL;
  w_35 = t;
  t = SSL_remove(not_null(w_35));
  return(t);
}
ATerm restore_always_2 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm))
{
  ATerm o_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = b_76(t);
      t = c_76(t);
      LocalPopChoice(r_14);
    }
  else
    {
      t = o_14;
      {
        t = c_76(t);
        _fail(t);
      }
    }
  return(t);
}
ATerm begin_scope_1 (ATerm t, ATerm h_85 (ATerm))
{
  ATerm b_36 = NULL;
  ATerm s_14;
  s_14 = t;
  {
    ATerm c_36 = NULL;
    ATerm d_36 = NULL;
    t = h_85(t);
    {
      c_36 = t;
      {
        if(((b_36 != NULL) && (b_36 != c_36)))
          _fail(c_36);
        else
          b_36 = c_36;
        {
          ATerm e_36 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), term_u_11);
          {
            ATerm t_14 = t;
            int u_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(u_14);
              }
            else
              {
                t = t_14;
                t = (ATerm) ATempty;
              }
            {
              e_36 = t;
              if(((d_36 != NULL) && (d_36 != e_36)))
                _fail(e_36);
              else
                d_36 = e_36;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(b_36), term_u_11, (ATerm) ATinsert(CheckATermList(not_null(d_36)), (ATerm) ATempty));
            t = table_put_0(t);
          }
        }
      }
    }
  }
  t = s_14;
  return(t);
}
ATerm xtc_temp_files_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm j_36 = NULL,k_36 = NULL;
  ATerm l_1 (ATerm t)
  {
    t = term_p_12;
    return(t);
  }
  t = begin_scope_1(t, l_1);
  {
    ATerm m_1 (ATerm t)
    {
      ATerm v_14;
      v_14 = t;
      {
        ATerm l_36 = NULL,m_36 = NULL,n_36 = NULL;
        ATerm j_15 = t;
        int k_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = term_l_15;
            t = table_get_0(t);
            LocalPopChoice(k_15);
          }
        else
          {
            t = j_15;
            t = (ATerm) ATinsert(ATempty, (ATerm) ATempty);
          }
        {
          l_36 = t;
          i_36 :
          if(((ATgetType(l_36) == AT_LIST) && !(ATisEmpty(l_36))))
            {
              m_36 = ATgetFirst((ATermList) l_36);
              n_36 = (ATerm) ATgetNext((ATermList) l_36);
              {
                if(((k_36 != NULL) && (k_36 != m_36)))
                  _fail(m_36);
                else
                  k_36 = m_36;
                {
                  if(((j_36 != NULL) && (j_36 != n_36)))
                    _fail(n_36);
                  else
                    j_36 = n_36;
                  {
                    t = not_null(k_36);
                    {
                      ATerm n_1 (ATerm t)
                      {
                        ATerm m_15 = t;
                        int n_15 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = remove_file_0(t);
                            LocalPopChoice(n_15);
                          }
                        else
                          {
                            t = m_15;
                            {
                            }
                          }
                        return(t);
                      }
                      t = map_1(t, n_1);
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
      t = v_14;
      {
        ATerm o_1 (ATerm t)
        {
          t = term_p_12;
          return(t);
        }
        t = end_scope_1(t, o_1);
      }
      return(t);
    }
    t = restore_always_2(t, m_71, m_1);
  }
  return(t);
}
ATerm xtc_io_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm p_1 (ATerm t)
  {
    ATerm s_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_36 = NULL;
        ATerm t_36 = NULL;
        t = term_u_15;
        {
          t = get_config_0(t);
          {
            t_36 = t;
            if(((s_36 != NULL) && (s_36 != t_36)))
              _fail(t_36);
            else
              s_36 = t_36;
          }
        }
        t = (ATerm) ATmakeAppl(sym_FILE_1, not_null(s_36));
        LocalPopChoice(t_15);
      }
    else
      {
        t = s_15;
        t = term_s_12;
      }
    {
      t = n_71(t);
      {
        ATerm q_1 (ATerm t)
        {
          ATerm v_15 = t;
          int e_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = term_f_16;
              t = get_config_0(t);
              LocalPopChoice(e_16);
            }
          else
            {
              t = v_15;
              t = term_g_16;
            }
          return(t);
        }
        t = copy_to_1(t, q_1);
      }
    }
    return(t);
  }
  t = xtc_temp_files_1(t, p_1);
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
  ATerm w_36 = NULL;
  w_36 = t;
  t = SSL_int_to_string(not_null(w_36));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
  g_37 = t;
  f_37 :
  if(match_cons(g_37, sym_Path1_1))
    {
      h_37 = ATgetArgument(g_37, 0);
      t = not_null(h_37);
    }
  else
    {
      if(match_cons(g_37, sym_Path_2))
        {
          h_37 = ATgetArgument(g_37, 0);
          i_37 = ATgetArgument(g_37, 1);
          {
            ATerm q_37 = NULL,c_38 = NULL;
            t = not_null(i_37);
            {
              ATerm r_1 (ATerm t)
              {
                ATerm r_37 = NULL,w_37 = NULL,x_37 = NULL;
                r_37 = t;
                d_37 :
                if(match_cons(r_37, sym_selector_2))
                  {
                    w_37 = ATgetArgument(r_37, 0);
                    x_37 = ATgetArgument(r_37, 1);
                    {
                      ATerm a_38 = NULL;
                      ATerm b_38 = NULL;
                      t = not_null(w_37);
                      {
                        t = int_to_string_0(t);
                        {
                          b_38 = t;
                          if(((a_38 != NULL) && (a_38 != b_38)))
                            _fail(b_38);
                          else
                            a_38 = b_38;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(x_37)), term_m_16), not_null(a_38)), term_h_16);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, r_1);
              {
                t = concat_0(t);
                {
                  c_38 = t;
                  {
                    if(((q_37 != NULL) && (q_37 != c_38)))
                      _fail(c_38);
                    else
                      q_37 = c_38;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(q_37)), not_null(h_37));
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
  ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
  o_38 = t;
  n_38 :
  if(match_cons(o_38, sym_Path1_1))
    {
      p_38 = ATgetArgument(o_38, 0);
      t = (ATerm) ATinsert(ATempty, not_null(p_38));
    }
  else
    {
      if(match_cons(o_38, sym_Path_2))
        {
          p_38 = ATgetArgument(o_38, 0);
          q_38 = ATgetArgument(o_38, 1);
          {
            ATerm y_38 = NULL,q_39 = NULL;
            t = not_null(q_38);
            {
              ATerm s_1 (ATerm t)
              {
                ATerm z_38 = NULL,a_39 = NULL,b_39 = NULL;
                z_38 = t;
                l_38 :
                if(match_cons(z_38, sym_selector_2))
                  {
                    a_39 = ATgetArgument(z_38, 0);
                    b_39 = ATgetArgument(z_38, 1);
                    t = not_null(a_39);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, s_1);
              {
                q_39 = t;
                {
                  if(((y_38 != NULL) && (y_38 != q_39)))
                    _fail(q_39);
                  else
                    y_38 = q_39;
                  t = (ATerm) ATinsert(CheckATermList(not_null(y_38)), not_null(p_38));
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
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL;
  h_40 = t;
  y_39 :
  if(match_cons(h_40, sym_PP_Entry_2))
    {
      i_40 = ATgetArgument(h_40, 0);
      j_40 = ATgetArgument(h_40, 1);
      {
        ATerm m_40 = NULL;
        ATerm n_40 = NULL;
        t = not_null(i_40);
        {
          t = mk_key_0(t);
          {
            n_40 = t;
            if(((m_40 != NULL) && (m_40 != n_40)))
              _fail(n_40);
            else
              m_40 = n_40;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_m_10, not_null(m_40), (ATerm) ATmakeAppl(sym__2, not_null(i_40), not_null(j_40)));
          {
            t = table_put_0(t);
            {
              t = not_null(i_40);
              {
                t = path_to_string_0(t);
                {
                  ATerm t_1 (ATerm t)
                  {
                    t = term_n_16;
                    return(t);
                  }
                  t = notify_1(t, t_1);
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
ATerm selector_2 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm))
{
  ATerm b_41 = NULL,c_41 = NULL,d_41 = NULL;
  b_41 = t;
  a_41 :
  if(match_cons(b_41, sym_selector_2))
    {
      c_41 = ATgetArgument(b_41, 0);
      d_41 = ATgetArgument(b_41, 1);
      {
        ATerm h_41 = NULL,j_41 = NULL;
        ATerm i_41 = NULL;
        t = SSLgetAnnotations(not_null(b_41));
        {
          i_41 = t;
          if(((h_41 != NULL) && (h_41 != i_41)))
            _fail(i_41);
          else
            h_41 = i_41;
        }
        {
          t = not_null(c_41);
          {
            ATerm l_41 = NULL;
            t = c_66(t);
            {
              j_41 = t;
              {
                t = not_null(d_41);
                {
                  ATerm n_41 = NULL;
                  t = d_66(t);
                  {
                    l_41 = t;
                    {
                      ATerm o_41 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(j_41), not_null(l_41)), not_null(h_41));
                      {
                        o_41 = t;
                        if(((n_41 != NULL) && (n_41 != o_41)))
                          _fail(o_41);
                        else
                          n_41 = o_41;
                      }
                      t = not_null(n_41);
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
  ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL,c_42 = NULL,d_42 = NULL;
  z_41 = t;
  v_41 :
  if(((ATgetType(z_41) == AT_LIST) && !(ATisEmpty(z_41))))
    {
      a_42 = ATgetFirst((ATermList) z_41);
      b_42 = (ATerm) ATgetNext((ATermList) z_41);
      w_41 :
      if(match_int(a_42, 92))
        {
          x_41 :
          if(((ATgetType(b_42) == AT_LIST) && !(ATisEmpty(b_42))))
            {
              c_42 = ATgetFirst((ATermList) b_42);
              d_42 = (ATerm) ATgetNext((ATermList) b_42);
              y_41 :
              if(match_int(c_42, 116))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_42)), term_o_16);
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
  ATerm l_42 = NULL,m_42 = NULL,n_42 = NULL,o_42 = NULL,p_42 = NULL;
  l_42 = t;
  h_42 :
  if(((ATgetType(l_42) == AT_LIST) && !(ATisEmpty(l_42))))
    {
      m_42 = ATgetFirst((ATermList) l_42);
      n_42 = (ATerm) ATgetNext((ATermList) l_42);
      i_42 :
      if(match_int(m_42, 92))
        {
          j_42 :
          if(((ATgetType(n_42) == AT_LIST) && !(ATisEmpty(n_42))))
            {
              o_42 = ATgetFirst((ATermList) n_42);
              p_42 = (ATerm) ATgetNext((ATermList) n_42);
              k_42 :
              if(match_int(o_42, 110))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_42)), term_p_16);
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
  ATerm x_42 = NULL,y_42 = NULL,z_42 = NULL,e_43 = NULL,f_43 = NULL;
  x_42 = t;
  t_42 :
  if(((ATgetType(x_42) == AT_LIST) && !(ATisEmpty(x_42))))
    {
      y_42 = ATgetFirst((ATermList) x_42);
      z_42 = (ATerm) ATgetNext((ATermList) x_42);
      u_42 :
      if(match_int(y_42, 92))
        {
          v_42 :
          if(((ATgetType(z_42) == AT_LIST) && !(ATisEmpty(z_42))))
            {
              e_43 = ATgetFirst((ATermList) z_42);
              f_43 = (ATerm) ATgetNext((ATermList) z_42);
              w_42 :
              if(match_int(e_43, 92))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(f_43)), term_q_16);
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
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  s_43 = t;
  l_43 :
  if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
    {
      t_43 = ATgetFirst((ATermList) s_43);
      u_43 = (ATerm) ATgetNext((ATermList) s_43);
      m_43 :
      if(match_int(t_43, 92))
        {
          q_43 :
          if(((ATgetType(u_43) == AT_LIST) && !(ATisEmpty(u_43))))
            {
              v_43 = ATgetFirst((ATermList) u_43);
              w_43 = (ATerm) ATgetNext((ATermList) u_43);
              r_43 :
              if(match_int(v_43, 34))
                {
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_43)), term_y_16);
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
  ATerm z_16 = t;
  int a_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_double_quote_0(t);
      LocalPopChoice(a_17);
    }
  else
    {
      t = z_16;
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = UnEscape_backslash_0(t);
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            {
              ATerm g_17 = t;
              int h_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = UnEscape_linefeed_0(t);
                  LocalPopChoice(h_17);
                }
              else
                {
                  t = g_17;
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
  ATerm s_17 = t;
  int t_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = UnEscape_0(t);
      LocalPopChoice(t_17);
    }
  else
    {
      t = s_17;
      {
      }
    }
  {
    ATerm u_17 = t;
    int v_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, unescape_chars_0);
        LocalPopChoice(v_17);
      }
    else
      {
        t = u_17;
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
ATerm at_last_1 (ATerm t, ATerm c_78 (ATerm))
{
  ATerm a_44 (ATerm t)
  {
    ATerm y_17 = t;
    int z_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = c_78(t);
        LocalPopChoice(z_17);
      }
    else
      {
        t = y_17;
        t = Cons_2(t, _id, a_44);
      }
    return(t);
  }
  t = a_44(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm d_44 = NULL,e_44 = NULL,f_44 = NULL;
  d_44 = t;
  c_44 :
  if(((ATgetType(d_44) == AT_LIST) && !(ATisEmpty(d_44))))
    {
      e_44 = ATgetFirst((ATermList) d_44);
      f_44 = (ATerm) ATgetNext((ATermList) d_44);
      t = not_null(f_44);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  l_44 = t;
  j_44 :
  if(((ATgetType(l_44) == AT_LIST) && !(ATisEmpty(l_44))))
    {
      m_44 = ATgetFirst((ATermList) l_44);
      n_44 = (ATerm) ATgetNext((ATermList) l_44);
      k_44 :
      if(((ATgetType(n_44) == AT_LIST) && ATisEmpty(n_44)))
        {
          t = not_null(m_44);
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
  ATerm a_18 = t;
  int b_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(b_18);
    }
  else
    {
      t = a_18;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  s_44 :
  if(((ATgetType(t_44) == AT_LIST) && !(ATisEmpty(t_44))))
    {
      u_44 = ATgetFirst((ATermList) t_44);
      v_44 = (ATerm) ATgetNext((ATermList) t_44);
      t = not_null(u_44);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm s_89 (ATerm))
{
  ATerm g_18;
  g_18 = t;
  {
    t = Hd_0(t);
    t = s_89(t);
  }
  t = g_18;
  {
    ATerm h_18;
    h_18 = t;
    {
      t = last_0(t);
      t = s_89(t);
    }
    t = h_18;
    {
      t = Tl_0(t);
      t = at_last_1(t, Tl_0);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm u_1 (ATerm t)
  {
    ATerm z_44 = NULL;
    z_44 = t;
    y_44 :
    if(!(match_int(z_44, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, u_1);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm d_90 (ATerm))
{
  t = explode_string_0(t);
  {
    t = d_90(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  ATerm v_1 (ATerm t)
  {
    ATerm w_1 (ATerm t)
    {
      ATerm b_45 = NULL;
      b_45 = t;
      a_45 :
      if(!(match_int(b_45, 34)))
        {
          _fail(t);
        }
      return(t);
    }
    t = unquote_chars_1(t, w_1);
    return(t);
  }
  t = string_as_chars_1(t, v_1);
  return(t);
}
ATerm S_1 (ATerm t, ATerm h_66 (ATerm))
{
  ATerm h_45 = NULL,i_45 = NULL;
  h_45 = t;
  g_45 :
  if(match_cons(h_45, sym_S_1))
    {
      i_45 = ATgetArgument(h_45, 0);
      {
        ATerm l_45 = NULL,n_45 = NULL;
        ATerm m_45 = NULL;
        t = SSLgetAnnotations(not_null(h_45));
        {
          m_45 = t;
          if(((l_45 != NULL) && (l_45 != m_45)))
            _fail(m_45);
          else
            l_45 = m_45;
        }
        {
          t = not_null(i_45);
          {
            ATerm p_45 = NULL;
            t = h_66(t);
            {
              n_45 = t;
              {
                ATerm q_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(n_45)), not_null(l_45));
                {
                  q_45 = t;
                  if(((p_45 != NULL) && (p_45 != q_45)))
                    _fail(q_45);
                  else
                    p_45 = q_45;
                }
                t = not_null(p_45);
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
ATerm SOpt_2 (ATerm t, ATerm t_67 (ATerm), ATerm u_67 (ATerm))
{
  ATerm b_46 = NULL,c_46 = NULL,d_46 = NULL;
  b_46 = t;
  a_46 :
  if(match_cons(b_46, sym_SOpt_2))
    {
      c_46 = ATgetArgument(b_46, 0);
      d_46 = ATgetArgument(b_46, 1);
      {
        ATerm h_46 = NULL,j_46 = NULL;
        ATerm i_46 = NULL;
        t = SSLgetAnnotations(not_null(b_46));
        {
          i_46 = t;
          if(((h_46 != NULL) && (h_46 != i_46)))
            _fail(i_46);
          else
            h_46 = i_46;
        }
        {
          t = not_null(c_46);
          {
            ATerm l_46 = NULL;
            t = t_67(t);
            {
              j_46 = t;
              {
                t = not_null(d_46);
                {
                  ATerm n_46 = NULL;
                  t = u_67(t);
                  {
                    l_46 = t;
                    {
                      ATerm o_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_SOpt_2, not_null(j_46), not_null(l_46)), not_null(h_46));
                      {
                        o_46 = t;
                        if(((n_46 != NULL) && (n_46 != o_46)))
                          _fail(o_46);
                        else
                          n_46 = o_46;
                      }
                      t = not_null(n_46);
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
ATerm Arg2_2 (ATerm t, ATerm f_66 (ATerm), ATerm g_66 (ATerm))
{
  ATerm a_47 = NULL,b_47 = NULL,c_47 = NULL;
  a_47 = t;
  z_46 :
  if(match_cons(a_47, sym_Arg2_2))
    {
      b_47 = ATgetArgument(a_47, 0);
      c_47 = ATgetArgument(a_47, 1);
      {
        ATerm g_47 = NULL,i_47 = NULL;
        ATerm h_47 = NULL;
        t = SSLgetAnnotations(not_null(a_47));
        {
          h_47 = t;
          if(((g_47 != NULL) && (g_47 != h_47)))
            _fail(h_47);
          else
            g_47 = h_47;
        }
        {
          t = not_null(b_47);
          {
            ATerm k_47 = NULL;
            t = f_66(t);
            {
              i_47 = t;
              {
                t = not_null(c_47);
                {
                  ATerm m_47 = NULL;
                  t = g_66(t);
                  {
                    k_47 = t;
                    {
                      ATerm n_47 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, not_null(i_47), not_null(k_47)), not_null(g_47));
                      {
                        n_47 = t;
                        if(((m_47 != NULL) && (m_47 != n_47)))
                          _fail(n_47);
                        else
                          m_47 = n_47;
                      }
                      t = not_null(m_47);
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
ATerm Arg_1 (ATerm t, ATerm e_66 (ATerm))
{
  ATerm z_47 = NULL,b_48 = NULL;
  z_47 = t;
  x_47 :
  if(match_cons(z_47, sym_Arg_1))
    {
      b_48 = ATgetArgument(z_47, 0);
      {
        ATerm j_48 = NULL,l_48 = NULL;
        ATerm k_48 = NULL;
        t = SSLgetAnnotations(not_null(z_47));
        {
          k_48 = t;
          if(((j_48 != NULL) && (j_48 != k_48)))
            _fail(k_48);
          else
            j_48 = k_48;
        }
        {
          t = not_null(b_48);
          {
            ATerm n_48 = NULL;
            t = e_66(t);
            {
              l_48 = t;
              {
                ATerm o_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(l_48)), not_null(j_48));
                {
                  o_48 = t;
                  if(((n_48 != NULL) && (n_48 != o_48)))
                    _fail(o_48);
                  else
                    n_48 = o_48;
                }
                t = not_null(n_48);
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
  ATerm k_18 = t;
  int l_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Arg_1(t, string_to_int_0);
      LocalPopChoice(l_18);
    }
  else
    {
      t = k_18;
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Arg2_2(t, string_to_int_0, string_to_int_0);
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
                  t = SOpt_2(t, _id, _id);
                  LocalPopChoice(p_18);
                }
              else
                {
                  t = o_18;
                  {
                    ATerm w_18 = t;
                    int x_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm x_1 (ATerm t)
                        {
                          ATerm y_1 (ATerm t)
                          {
                            ATerm z_1 (ATerm t)
                            {
                              ATerm u_48 = NULL;
                              u_48 = t;
                              t_48 :
                              if(!(match_int(u_48, 34)))
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = unquote_chars_1(t, z_1);
                            return(t);
                          }
                          t = string_as_chars_1(t, y_1);
                          t = string_as_chars_1(t, unescape_chars_0);
                          return(t);
                        }
                        t = S_1(t, x_1);
                        LocalPopChoice(x_18);
                      }
                    else
                      {
                        t = w_18;
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
ATerm topdown_1 (ATerm t, ATerm n_72 (ATerm))
{
  t = n_72(t);
  {
    ATerm a_2 (ATerm t)
    {
      t = topdown_1(t, n_72);
      return(t);
    }
    t = _all(t, a_2);
  }
  return(t);
}
ATerm makePPEntry_0 (ATerm t)
{
  ATerm d_2 (ATerm t)
  {
    ATerm y_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = MakePPTerm_0(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = y_18;
        {
        }
      }
    return(t);
  }
  t = topdown_1(t, d_2);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm x_48 = NULL,y_48 = NULL;
  x_48 = t;
  w_48 :
  if(match_cons(x_48, sym_PP_Table_1))
    {
      y_48 = ATgetArgument(x_48, 0);
      {
        t = not_null(y_48);
        {
          ATerm e_2 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = reverse_acc_2(t, _id, e_2);
          {
            ATerm f_2 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, f_2);
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
ATerm oncetd_1 (ATerm t, ATerm d_74 (ATerm))
{
  ATerm d_49 (ATerm t)
  {
    ATerm i_19 = t;
    int j_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_74(t);
        LocalPopChoice(j_19);
      }
    else
      {
        t = i_19;
        t = _one(t, d_49);
      }
    return(t);
  }
  t = d_49(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm k_49 = NULL,n_49 = NULL,o_49 = NULL;
  k_49 = t;
  j_49 :
  if(match_cons(k_49, sym__2))
    {
      n_49 = ATgetArgument(k_49, 0);
      o_49 = ATgetArgument(k_49, 1);
      {
        ATerm k_19;
        k_19 = t;
        {
          t = not_null(o_49);
          {
            ATerm g_2 (ATerm t)
            {
              ATerm r_49 = NULL;
              r_49 = t;
              if(((n_49 != NULL) && (n_49 != r_49)))
                _fail(r_49);
              else
                n_49 = r_49;
              return(t);
            }
            t = oncetd_1(t, g_2);
          }
        }
        t = k_19;
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
  t = term_r_19;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm w_49 = NULL;
  ATerm y_49 = NULL;
  w_49 = t;
  {
    ATerm z_49 = NULL;
    t = get_options_0(t);
    {
      z_49 = t;
      {
        if(((y_49 != NULL) && (y_49 != z_49)))
          _fail(z_49);
        else
          y_49 = z_49;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_49), not_null(y_49));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_o_6;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm r_85 (ATerm))
{
  ATerm s_19;
  s_19 = t;
  {
    t = term_o_6;
    {
      t = r_85(t);
      t = check_option_0(t);
    }
  }
  t = s_19;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm t_19 = t;
  int u_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm h_2 (ATerm t)
      {
        t = term_v_19;
        return(t);
      }
      t = has_option_1(t, h_2);
      {
        t = (ATerm) ATinsert(ATempty, term_d_20);
        t = fatal_error_0(t);
      }
      LocalPopChoice(u_19);
    }
  else
    {
      t = t_19;
      {
        t = (ATerm) ATinsert(ATempty, term_e_20);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm r_92 (ATerm))
{
  ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL;
  p_50 = t;
  n_50 :
  if(match_cons(p_50, sym__2))
    {
      q_50 = ATgetArgument(p_50, 0);
      r_50 = ATgetArgument(p_50, 1);
      o_50 :
      if(match_string(q_50, "in-type"))
        {
          ATerm t_50 = NULL,u_50 = NULL;
          ATerm f_20;
          f_20 = t;
          {
            ATerm v_50 = NULL;
            ATerm x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
            t = not_null(r_50);
            {
              v_50 = t;
              {
                t = SSL_explode_term(not_null(v_50));
                {
                  x_50 = t;
                  j_50 :
                  if(match_cons(x_50, sym__2))
                    {
                      y_50 = ATgetArgument(x_50, 0);
                      z_50 = ATgetArgument(x_50, 1);
                      k_50 :
                      if(((ATgetType(z_50) == AT_LIST) && !(ATisEmpty(z_50))))
                        {
                          a_51 = ATgetFirst((ATermList) z_50);
                          b_51 = (ATerm) ATgetNext((ATermList) z_50);
                          m_50 :
                          if(((ATgetType(b_51) == AT_LIST) && ATisEmpty(b_51)))
                            {
                              {
                                if(((u_50 != NULL) && (u_50 != y_50)))
                                  _fail(y_50);
                                else
                                  u_50 = y_50;
                                if(((t_50 != NULL) && (t_50 != a_51)))
                                  _fail(a_51);
                                else
                                  t_50 = a_51;
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
          t = f_20;
          {
            t = not_null(u_50);
            {
              ATerm i_20 = t;
              int j_20 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = r_92(t);
                  LocalPopChoice(j_20);
                }
              else
                {
                  t = i_20;
                  t = type_failure_0(t);
                }
            }
            t = not_null(t_50);
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
ATerm termid_check_1 (ATerm t, ATerm y_92 (ATerm))
{
  ATerm i_51 = NULL;
  ATerm k_51 = NULL;
  i_51 = t;
  {
    ATerm l_51 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_k_20, not_null(i_51));
    {
      t = InId_1(t, y_92);
      {
        l_51 = t;
        if(((k_51 != NULL) && (k_51 != l_51)))
          _fail(l_51);
        else
          k_51 = l_51;
      }
    }
    t = not_null(k_51);
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm p_51 = NULL;
  ATerm q_20 = t;
  int r_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_51 = NULL;
      q_51 = t;
      {
        if(((p_51 != NULL) && (p_51 != q_51)))
          _fail(q_51);
        else
          p_51 = q_51;
        t = SSL_ReadFromFile(not_null(p_51));
      }
      LocalPopChoice(r_20);
    }
  else
    {
      t = q_20;
      {
        ATerm i_2 (ATerm t)
        {
          t = term_t_20;
          return(t);
        }
        t = debug_1(t, i_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm notify_1 (ATerm t, ATerm p_99 (ATerm))
{
  ATerm j_2 (ATerm t)
  {
    t = debug_1(t, p_99);
    return(t);
  }
  t = if_verbose1_1(t, j_2);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm u_51 = NULL;
  u_51 = t;
  {
    t = term_m_10;
    {
      t = table_create_0(t);
      {
        t = not_null(u_51);
        {
          ATerm k_2 (ATerm t)
          {
            ATerm l_2 (ATerm t)
            {
              t = term_v_20;
              return(t);
            }
            t = notify_1(t, l_2);
            {
              t = ReadFromFile_0(t);
              {
                ATerm m_2 (ATerm t)
                {
                  ATerm w_51 = NULL;
                  w_51 = t;
                  t_51 :
                  if(!(match_string(w_51, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, m_2);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, k_2);
        }
      }
    }
  }
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm w_20;
  w_20 = t;
  {
    ATerm z_51 = NULL;
    ATerm a_52 = NULL;
    a_52 = t;
    if(((z_51 != NULL) && (z_51 != a_52)))
      _fail(a_52);
    else
      z_51 = a_52;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_20, not_null(z_51));
      t = printnl_0(t);
    }
  }
  t = w_20;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm y_20;
  y_20 = t;
  {
    t = error_0(t);
    {
      t = term_n_7;
      t = exit_0(t);
    }
  }
  t = y_20;
  return(t);
}
ATerm get_config_p_0 (ATerm t)
{
  ATerm b_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = term_g_21;
      t = get_config_0(t);
      LocalPopChoice(f_21);
    }
  else
    {
      t = b_21;
      {
        t = (ATerm) ATinsert(ATempty, term_h_21);
        t = fatal_error_0(t);
      }
    }
  return(t);
}
ATerm ast2abox_0 (ATerm t)
{
  ATerm i_21;
  i_21 = t;
  {
    t = get_config_p_0(t);
    {
      ATerm n_2 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2(t, _id, n_2);
      t = read_pp_tables_0(t);
    }
  }
  t = i_21;
  {
    ATerm o_2 (ATerm t)
    {
      ATerm p_2 (ATerm t)
      {
        t = trm2abox_0(t);
        {
          ATerm q_2 (ATerm t)
          {
            ATerm d_52 = NULL;
            ATerm e_52 = NULL;
            e_52 = t;
            if(((d_52 != NULL) && (d_52 != e_52)))
              _fail(e_52);
            else
              d_52 = e_52;
            t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(d_52));
            return(t);
          }
          t = if_2(t, is_list_0, q_2);
        }
        return(t);
      }
      t = xtc_io_transform_1(t, p_2);
      return(t);
    }
    t = xtc_io_1(t, o_2);
  }
  return(t);
}
ATerm extend_config_0 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
  i_53 = t;
  h_53 :
  if(match_cons(i_53, sym__2))
    {
      j_53 = ATgetArgument(i_53, 0);
      k_53 = ATgetArgument(i_53, 1);
      {
        ATerm p_53 = NULL;
        ATerm q_53 = NULL,s_53 = NULL;
        ATerm r_53 = NULL;
        t = not_null(j_53);
        {
          ATerm j_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = get_config_0(t);
              LocalPopChoice(l_21);
            }
          else
            {
              t = j_21;
              t = (ATerm) ATempty;
            }
          {
            r_53 = t;
            if(((q_53 != NULL) && (q_53 != r_53)))
              _fail(r_53);
            else
              q_53 = r_53;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_53), not_null(q_53));
          {
            ATerm m_21 = t;
            int n_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(n_21);
              }
            else
              {
                t = m_21;
                t = conc_more_lists_0(t);
              }
            {
              s_53 = t;
              if(((p_53 != NULL) && (p_53 != s_53)))
                _fail(s_53);
              else
                p_53 = s_53;
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_21, not_null(j_53), not_null(p_53));
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
  ATerm s_2 (ATerm t)
  {
    ATerm k_54 = NULL;
    k_54 = t;
    i_54 :
    if(!(match_string(k_54, "-p")))
      {
        _fail(t);
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    ATerm p_21;
    p_21 = t;
    {
      ATerm l_54 = NULL;
      ATerm m_54 = NULL;
      m_54 = t;
      if(((l_54 != NULL) && (l_54 != m_54)))
        _fail(m_54);
      else
        l_54 = m_54;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_g_21, (ATerm) ATinsert(ATempty, not_null(l_54)));
        t = extend_config_0(t);
      }
    }
    t = p_21;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_r_21;
    return(t);
  }
  t = ArgOption_3(t, s_2, t_2, u_2);
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm p_54 = NULL;
    p_54 = t;
    o_54 :
    if(!(match_string(p_54, "-v")))
      {
        if(!(match_string(p_54, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    t = term_u_21;
    t = set_config_0(t);
    t = term_x_21;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_b_22;
    return(t);
  }
  t = Option_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm y_2 (ATerm t)
  {
    ATerm s_54 = NULL;
    s_54 = t;
    q_54 :
    if(!(match_string(s_54, "-k")))
      {
        if(!(match_string(s_54, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm z_2 (ATerm t)
  {
    ATerm i_22;
    i_22 = t;
    {
      ATerm t_54 = NULL;
      ATerm u_54 = NULL;
      t = string_to_int_0(t);
      {
        u_54 = t;
        if(((t_54 != NULL) && (t_54 != u_54)))
          _fail(u_54);
        else
          t_54 = u_54;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_22, not_null(t_54));
        t = set_config_0(t);
      }
    }
    t = i_22;
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_n_22;
    return(t);
  }
  t = ArgOption_3(t, y_2, z_2, a_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_54 = NULL;
  x_54 = t;
  t = SSL_string_to_int(not_null(x_54));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm o_22 = t;
  int q_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_3 (ATerm t)
      {
        ATerm f_55 = NULL;
        f_55 = t;
        a_55 :
        if(!(match_string(f_55, "-S")))
          {
            if(!(match_string(f_55, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm c_3 (ATerm t)
      {
        t = term_s_22;
        t = set_config_0(t);
        t = term_t_22;
        return(t);
      }
      ATerm d_3 (ATerm t)
      {
        t = term_u_22;
        return(t);
      }
      t = Option_3(t, b_3, c_3, d_3);
      LocalPopChoice(q_22);
    }
  else
    {
      t = o_22;
      {
        ATerm v_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_3 (ATerm t)
            {
              ATerm g_55 = NULL;
              g_55 = t;
              b_55 :
              if(!(match_string(g_55, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm f_3 (ATerm t)
            {
              ATerm j_55 = NULL;
              ATerm x_22;
              x_22 = t;
              {
                ATerm h_55 = NULL;
                ATerm i_55 = NULL;
                t = string_to_int_0(t);
                {
                  i_55 = t;
                  if(((h_55 != NULL) && (h_55 != i_55)))
                    _fail(i_55);
                  else
                    h_55 = i_55;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_r_22, not_null(h_55));
                  t = set_config_0(t);
                }
              }
              t = x_22;
              {
                ATerm k_55 = NULL;
                k_55 = t;
                if(((j_55 != NULL) && (j_55 != k_55)))
                  _fail(k_55);
                else
                  j_55 = k_55;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(j_55));
              }
              return(t);
            }
            ATerm g_3 (ATerm t)
            {
              t = term_y_22;
              return(t);
            }
            t = ArgOption_3(t, e_3, f_3, g_3);
            LocalPopChoice(w_22);
          }
        else
          {
            t = v_22;
            {
              ATerm h_3 (ATerm t)
              {
                ATerm l_55 = NULL;
                l_55 = t;
                e_55 :
                if(!(match_string(l_55, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm i_3 (ATerm t)
              {
                t = term_a_23;
                t = set_config_0(t);
                t = term_b_23;
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                t = term_c_23;
                return(t);
              }
              t = Option_3(t, h_3, i_3, j_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm d_23 = t;
  int e_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(e_23);
    }
  else
    {
      t = d_23;
      {
        ATerm f_23 = t;
        int g_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(g_23);
          }
        else
          {
            t = f_23;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    ATerm r_55 = NULL;
    r_55 = t;
    o_55 :
    if(!(match_string(r_55, "-o")))
      {
        if(!(match_string(r_55, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm u_55 = NULL;
    ATerm h_23;
    h_23 = t;
    {
      ATerm s_55 = NULL;
      ATerm t_55 = NULL;
      t_55 = t;
      if(((s_55 != NULL) && (s_55 != t_55)))
        _fail(t_55);
      else
        s_55 = t_55;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_16, not_null(s_55));
        t = set_config_0(t);
      }
    }
    t = h_23;
    {
      ATerm v_55 = NULL;
      v_55 = t;
      if(((u_55 != NULL) && (u_55 != v_55)))
        _fail(v_55);
      else
        u_55 = v_55;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(u_55));
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_i_23;
    return(t);
  }
  t = ArgOption_3(t, k_3, l_3, m_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm j_23 = t;
  int k_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(k_23);
    }
  else
    {
      t = j_23;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm z_55 = NULL;
          z_55 = t;
          y_55 :
          if(!(match_string(z_55, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm o_3 (ATerm t)
        {
          t = term_m_23;
          t = set_config_0(t);
          t = term_n_23;
          return(t);
        }
        ATerm p_3 (ATerm t)
        {
          t = term_o_23;
          return(t);
        }
        t = Option_3(t, n_3, o_3, p_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL,i_56 = NULL,j_56 = NULL;
  f_56 = t;
  d_56 :
  if(match_string(f_56, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(f_56) == AT_LIST) && !(ATisEmpty(f_56))))
        {
          g_56 = ATgetFirst((ATermList) f_56);
          h_56 = (ATerm) ATgetNext((ATermList) f_56);
          e_56 :
          if(((ATgetType(h_56) == AT_LIST) && !(ATisEmpty(h_56))))
            {
              i_56 = ATgetFirst((ATermList) h_56);
              j_56 = (ATerm) ATgetNext((ATermList) h_56);
              {
                ATerm n_56 = NULL;
                ATerm p_23;
                p_23 = t;
                {
                  t = not_null(g_56);
                  t = j_0(t);
                }
                t = p_23;
                {
                  ATerm o_56 = NULL;
                  t = not_null(i_56);
                  {
                    t = k_0(t);
                    {
                      o_56 = t;
                      if(((n_56 != NULL) && (n_56 != o_56)))
                        _fail(o_56);
                      else
                        n_56 = o_56;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_56)), not_null(n_56));
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
  ATerm q_3 (ATerm t)
  {
    ATerm v_56 = NULL;
    v_56 = t;
    s_56 :
    if(!(match_string(v_56, "-i")))
      {
        if(!(match_string(v_56, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_3 (ATerm t)
  {
    ATerm y_56 = NULL;
    ATerm q_23;
    q_23 = t;
    {
      ATerm w_56 = NULL;
      ATerm x_56 = NULL;
      x_56 = t;
      if(((w_56 != NULL) && (w_56 != x_56)))
        _fail(x_56);
      else
        w_56 = x_56;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_15, not_null(w_56));
        t = set_config_0(t);
      }
    }
    t = q_23;
    {
      ATerm z_56 = NULL;
      z_56 = t;
      if(((y_56 != NULL) && (y_56 != z_56)))
        _fail(z_56);
      else
        y_56 = z_56;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_56));
    }
    return(t);
  }
  ATerm s_3 (ATerm t)
  {
    t = term_r_23;
    return(t);
  }
  t = ArgOption_3(t, q_3, r_3, s_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm s_23 = t;
  int t_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(t_23);
    }
  else
    {
      t = s_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm ast2abox_options_0 (ATerm t)
{
  ATerm w_23 = t;
  int x_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = io_options_0(t);
      LocalPopChoice(x_23);
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
  ATerm e_57 = NULL;
  ATerm y_23;
  y_23 = t;
  {
    ATerm t_3 (ATerm t)
    {
      ATerm f_57 = NULL,g_57 = NULL;
      f_57 = t;
      d_57 :
      if(match_cons(f_57, sym_Program_1))
        {
          g_57 = ATgetArgument(f_57, 0);
          if(((e_57 != NULL) && (e_57 != g_57)))
            _fail(g_57);
          else
            e_57 = g_57;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, t_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_24), not_null(e_57)), term_z_23));
      {
        t = printnl_0(t);
        {
          t = term_n_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_23;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATempty, term_b_24));
  {
    t = printnl_0(t);
    {
      t = term_n_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm j_57 = NULL;
  j_57 = t;
  t = SSL_TicksToSeconds(not_null(j_57));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm o_57 = NULL,p_57 = NULL,q_57 = NULL;
  o_57 = t;
  n_57 :
  if(match_cons(o_57, sym__2))
    {
      p_57 = ATgetArgument(o_57, 0);
      q_57 = ATgetArgument(o_57, 1);
      {
        ATerm c_24 = t;
        int d_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(p_57), not_null(q_57));
            LocalPopChoice(d_24);
          }
        else
          {
            t = c_24;
            t = SSL_addr(not_null(p_57), not_null(q_57));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm q_83 (ATerm), ATerm r_83 (ATerm))
{
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = q_83(t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
      {
        ATerm x_57 = NULL,y_57 = NULL,z_57 = NULL;
        x_57 = t;
        w_57 :
        if(((ATgetType(x_57) == AT_LIST) && !(ATisEmpty(x_57))))
          {
            y_57 = ATgetFirst((ATermList) x_57);
            z_57 = (ATerm) ATgetNext((ATermList) x_57);
            {
              ATerm c_58 = NULL;
              ATerm d_58 = NULL;
              t = not_null(z_57);
              {
                t = foldr_2(t, q_83, r_83);
                {
                  d_58 = t;
                  if(((c_58 != NULL) && (c_58 != d_58)))
                    _fail(d_58);
                  else
                    c_58 = d_58;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(y_57), not_null(c_58));
                t = r_83(t);
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
ATerm crush_2 (ATerm t, ATerm o_82 (ATerm), ATerm p_82 (ATerm))
{
  ATerm k_58 = NULL;
  ATerm m_58 = NULL;
  k_58 = t;
  {
    ATerm n_58 = NULL;
    ATerm p_58 = NULL,q_58 = NULL,r_58 = NULL;
    t = not_null(k_58);
    {
      n_58 = t;
      {
        t = SSL_explode_term(not_null(n_58));
        {
          p_58 = t;
          j_58 :
          if(match_cons(p_58, sym__2))
            {
              q_58 = ATgetArgument(p_58, 0);
              r_58 = ATgetArgument(p_58, 1);
              if(((m_58 != NULL) && (m_58 != r_58)))
                _fail(r_58);
              else
                m_58 = r_58;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(m_58);
      t = foldr_2(t, o_82, p_82);
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
    ATerm u_3 (ATerm t)
    {
      t = term_m_7;
      return(t);
    }
    t = crush_2(t, u_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm b_59 = NULL,c_59 = NULL,d_59 = NULL;
  b_59 = t;
  y_58 :
  if(match_cons(b_59, sym__2))
    {
      c_59 = ATgetArgument(b_59, 0);
      d_59 = ATgetArgument(b_59, 1);
      {
        ATerm g_24;
        g_24 = t;
        {
          ATerm h_24 = t;
          int i_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(c_59), not_null(d_59));
              LocalPopChoice(i_24);
            }
          else
            {
              t = h_24;
              t = SSL_gtr(not_null(c_59), not_null(d_59));
            }
        }
        t = g_24;
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
  ATerm j_59 = NULL;
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_59 = NULL,l_59 = NULL,m_59 = NULL;
      k_59 = t;
      i_59 :
      if(match_cons(k_59, sym__2))
        {
          l_59 = ATgetArgument(k_59, 0);
          m_59 = ATgetArgument(k_59, 1);
          {
            if(((j_59 != NULL) && (j_59 != l_59)))
              _fail(l_59);
            else
              j_59 = l_59;
            if(((j_59 != NULL) && (j_59 != m_59)))
              _fail(m_59);
            else
              j_59 = m_59;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm p_69 (ATerm))
{
  ATerm l_24 = t;
  int m_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_24;
      n_24 = t;
      {
        ATerm p_59 = NULL;
        ATerm q_59 = NULL;
        t = term_r_22;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_59), term_n_7);
          t = geq_0(t);
        }
      }
      t = n_24;
      t = p_69(t);
      LocalPopChoice(m_24);
    }
  else
    {
      t = l_24;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_3 (ATerm t)
  {
    ATerm u_59 = NULL,w_59 = NULL;
    ATerm o_24;
    o_24 = t;
    {
      ATerm v_59 = NULL;
      t = run_time_0(t);
      {
        v_59 = t;
        if(((u_59 != NULL) && (u_59 != v_59)))
          _fail(v_59);
        else
          u_59 = v_59;
      }
    }
    t = o_24;
    {
      ATerm x_59 = NULL;
      t = term_p_24;
      {
        t = get_config_0(t);
        {
          x_59 = t;
          if(((w_59 != NULL) && (w_59 != x_59)))
            _fail(x_59);
          else
            w_59 = x_59;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_r_24), not_null(u_59)), term_q_24), not_null(w_59)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, v_3);
  {
    t = term_m_7;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm e_60 = NULL;
  e_60 = t;
  d_60 :
  if(match_cons(e_60, sym_Version_0))
    {
      ATerm g_60 = NULL,k_60 = NULL;
      ATerm s_24;
      s_24 = t;
      {
        ATerm h_60 = NULL;
        t = SSLgetAnnotations(not_null(e_60));
        {
          h_60 = t;
          if(((g_60 != NULL) && (g_60 != h_60)))
            _fail(h_60);
          else
            g_60 = h_60;
        }
      }
      t = s_24;
      {
        ATerm l_60 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(g_60));
        {
          l_60 = t;
          if(((k_60 != NULL) && (k_60 != l_60)))
            _fail(l_60);
          else
            k_60 = l_60;
        }
        t = not_null(k_60);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm o_85 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    ATerm t_24 = t;
    int u_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_24);
      }
    else
      {
        t = t_24;
        {
          ATerm v_24 = t;
          int w_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_24);
            }
          else
            {
              t = v_24;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, w_3);
  t = o_85(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_60 = NULL;
  q_60 = t;
  t = SSL_table_create(not_null(q_60));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_60 = NULL;
  u_60 = t;
  {
    ATerm x_24;
    x_24 = t;
    {
      t = term_l_19;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_19, term_m_19, not_null(u_60));
          t = table_put_0(t);
        }
      }
    }
    t = x_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm a_61 = NULL;
  a_61 = t;
  t = SSL_table_destroy(not_null(a_61));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm e_61 = NULL;
  e_61 = t;
  t = SSL_exit(not_null(e_61));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm i_61 = NULL,j_61 = NULL,k_61 = NULL;
  i_61 = t;
  h_61 :
  if(((ATgetType(i_61) == AT_LIST) && ATisEmpty(i_61)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(i_61) == AT_LIST) && !(ATisEmpty(i_61))))
        {
          j_61 = ATgetFirst((ATermList) i_61);
          k_61 = (ATerm) ATgetNext((ATermList) i_61);
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
  ATerm y_24;
  y_24 = t;
  {
    ATerm n_61 = NULL;
    ATerm q_61 = NULL;
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
          ATerm o_61 = NULL;
          ATerm p_61 = NULL;
          p_61 = t;
          if(((o_61 != NULL) && (o_61 != p_61)))
            _fail(p_61);
          else
            o_61 = p_61;
          t = (ATerm) ATinsert(ATempty, not_null(o_61));
        }
      }
    {
      q_61 = t;
      if(((n_61 != NULL) && (n_61 != q_61)))
        _fail(q_61);
      else
        n_61 = q_61;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_g_16, not_null(n_61));
      t = printnl_0(t);
    }
  }
  t = y_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm w_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm z_61 = NULL,a_62 = NULL,b_62 = NULL;
  b_62 = t;
  y_61 :
  if(((ATgetType(b_62) == AT_LIST) && !(ATisEmpty(b_62))))
    {
      z_61 = ATgetFirst((ATermList) b_62);
      a_62 = (ATerm) ATgetNext((ATermList) b_62);
      {
        ATerm e_62 = NULL;
        t = not_null(a_62);
        {
          ATerm b_25;
          b_25 = t;
          {
            ATerm f_62 = NULL,h_62 = NULL,j_62 = NULL;
            ATerm c_25;
            c_25 = t;
            {
              ATerm g_62 = NULL;
              t = i_0(t);
              {
                g_62 = t;
                if(((f_62 != NULL) && (f_62 != g_62)))
                  _fail(g_62);
                else
                  f_62 = g_62;
              }
            }
            t = c_25;
            {
              ATerm i_62 = NULL;
              t = not_null(z_61);
              {
                t = h_0(t);
                {
                  i_62 = t;
                  if(((h_62 != NULL) && (h_62 != i_62)))
                    _fail(i_62);
                  else
                    h_62 = i_62;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(f_62)), not_null(h_62));
                {
                  j_62 = t;
                  if(((e_62 != NULL) && (e_62 != j_62)))
                    _fail(j_62);
                  else
                    e_62 = j_62;
                }
              }
            }
          }
          t = b_25;
          {
            ATerm b_4 (ATerm t)
            {
              t = not_null(e_62);
              return(t);
            }
            t = reverse_acc_2(t, h_0, b_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(b_62) == AT_LIST) && ATisEmpty(b_62)))
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
  ATerm c_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, c_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm v_87 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm x_60 (ATerm))
{
  ATerm u_62 = NULL,v_62 = NULL;
  u_62 = t;
  t_62 :
  if(match_cons(u_62, sym_Program_1))
    {
      v_62 = ATgetArgument(u_62, 0);
      {
        ATerm y_62 = NULL,a_63 = NULL;
        ATerm z_62 = NULL;
        t = SSLgetAnnotations(not_null(u_62));
        {
          z_62 = t;
          if(((y_62 != NULL) && (y_62 != z_62)))
            _fail(z_62);
          else
            y_62 = z_62;
        }
        {
          t = not_null(v_62);
          {
            ATerm c_63 = NULL;
            t = x_60(t);
            {
              a_63 = t;
              {
                ATerm d_63 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(a_63)), not_null(y_62));
                {
                  d_63 = t;
                  if(((c_63 != NULL) && (c_63 != d_63)))
                    _fail(d_63);
                  else
                    c_63 = d_63;
                }
                t = not_null(c_63);
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
  ATerm l_63 = NULL;
  ATerm d_25 = t;
  int e_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_63 = NULL;
      t = term_p_24;
      {
        t = get_config_0(t);
        {
          m_63 = t;
          if(((l_63 != NULL) && (l_63 != m_63)))
            _fail(m_63);
          else
            l_63 = m_63;
        }
      }
      LocalPopChoice(e_25);
    }
  else
    {
      t = d_25;
      {
        ATerm j_4 (ATerm t)
        {
          ATerm o_4 (ATerm t)
          {
            ATerm n_63 = NULL;
            n_63 = t;
            if(((l_63 != NULL) && (l_63 != n_63)))
              _fail(n_63);
            else
              l_63 = n_63;
            return(t);
          }
          t = Program_1(t, o_4);
          return(t);
        }
        t = fetch_1(t, j_4);
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
            ATerm p_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, p_4);
            {
              ATerm q_4 (ATerm t)
              {
                ATerm o_63 = NULL;
                ATerm p_63 = NULL;
                p_63 = t;
                if(((o_63 != NULL) && (o_63 != p_63)))
                  _fail(p_63);
                else
                  o_63 = p_63;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(o_63)), term_j_25);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, q_4);
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
    ATerm u_63 = NULL;
    ATerm v_63 = NULL;
    v_63 = t;
    if(((u_63 != NULL) && (u_63 != v_63)))
      _fail(v_63);
    else
      u_63 = v_63;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATempty, not_null(u_63)));
      t = printnl_0(t);
    }
  }
  t = k_25;
  return(t);
}
ATerm say_1 (ATerm t, ATerm k_88 (ATerm))
{
  ATerm l_25;
  l_25 = t;
  {
    t = k_88(t);
    t = debug_0(t);
  }
  t = l_25;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm y_60 (ATerm))
{
  ATerm c_64 = NULL,d_64 = NULL;
  c_64 = t;
  b_64 :
  if(match_cons(c_64, sym_Undefined_1))
    {
      d_64 = ATgetArgument(c_64, 0);
      {
        ATerm g_64 = NULL,i_64 = NULL;
        ATerm h_64 = NULL;
        t = SSLgetAnnotations(not_null(c_64));
        {
          h_64 = t;
          if(((g_64 != NULL) && (g_64 != h_64)))
            _fail(h_64);
          else
            g_64 = h_64;
        }
        {
          t = not_null(d_64);
          {
            ATerm k_64 = NULL;
            t = y_60(t);
            {
              i_64 = t;
              {
                ATerm l_64 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(i_64)), not_null(g_64));
                {
                  l_64 = t;
                  if(((k_64 != NULL) && (k_64 != l_64)))
                    _fail(l_64);
                  else
                    k_64 = l_64;
                }
                t = not_null(k_64);
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
ATerm fetch_1 (ATerm t, ATerm l_77 (ATerm))
{
  ATerm q_64 (ATerm t)
  {
    ATerm m_25 = t;
    int n_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_77, _id);
        LocalPopChoice(n_25);
      }
    else
      {
        t = m_25;
        t = Cons_2(t, _id, q_64);
      }
    return(t);
  }
  t = q_64(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_86 (ATerm))
{
  t = fetch_1(t, v_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm v_64 = NULL;
  v_64 = t;
  u_64 :
  if(match_cons(v_64, sym_Help_0))
    {
      ATerm x_64 = NULL,z_64 = NULL;
      ATerm o_25;
      o_25 = t;
      {
        ATerm y_64 = NULL;
        t = SSLgetAnnotations(not_null(v_64));
        {
          y_64 = t;
          if(((x_64 != NULL) && (x_64 != y_64)))
            _fail(y_64);
          else
            x_64 = y_64;
        }
      }
      t = o_25;
      {
        ATerm a_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(x_64));
        {
          a_65 = t;
          if(((z_64 != NULL) && (z_64 != a_65)))
            _fail(a_65);
          else
            z_64 = a_65;
        }
        t = not_null(z_64);
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
  ATerm f_65 = NULL;
  f_65 = t;
  t = SSL_implode_string(not_null(f_65));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm r_25 = t;
  int s_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_25);
    }
  else
    {
      t = r_25;
      {
        ATerm k_65 = NULL,l_65 = NULL,m_65 = NULL;
        k_65 = t;
        j_65 :
        if(((ATgetType(k_65) == AT_LIST) && !(ATisEmpty(k_65))))
          {
            l_65 = ATgetFirst((ATermList) k_65);
            m_65 = (ATerm) ATgetNext((ATermList) k_65);
            {
              t = not_null(l_65);
              {
                ATerm r_4 (ATerm t)
                {
                  t = not_null(m_65);
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
  ATerm w_65 = NULL;
  ATerm y_65 = NULL;
  w_65 = t;
  {
    ATerm z_65 = NULL;
    ATerm b_66 = NULL,i_66 = NULL,j_66 = NULL;
    t = not_null(w_65);
    {
      z_65 = t;
      {
        t = SSL_explode_term(not_null(z_65));
        {
          b_66 = t;
          u_65 :
          if(match_cons(b_66, sym__2))
            {
              i_66 = ATgetArgument(b_66, 0);
              j_66 = ATgetArgument(b_66, 1);
              v_65 :
              if(match_string(i_66, ""))
                {
                  if(((y_65 != NULL) && (y_65 != j_66)))
                    _fail(j_66);
                  else
                    y_65 = j_66;
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
      t = not_null(y_65);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_77 (ATerm))
{
  ATerm n_66 (ATerm t)
  {
    ATerm t_25 = t;
    int w_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, n_66);
        LocalPopChoice(w_25);
      }
    else
      {
        t = t_25;
        {
          t = Nil_0(t);
          t = r_77(t);
        }
      }
    return(t);
  }
  t = n_66(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm q_66 = NULL,r_66 = NULL,s_66 = NULL;
  q_66 = t;
  p_66 :
  if(match_cons(q_66, sym__2))
    {
      r_66 = ATgetArgument(q_66, 0);
      s_66 = ATgetArgument(q_66, 1);
      {
        t = not_null(r_66);
        {
          ATerm s_4 (ATerm t)
          {
            t = not_null(s_66);
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
  ATerm x_25 = t;
  int y_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(y_25);
    }
  else
    {
      t = x_25;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm x_66 = NULL;
  x_66 = t;
  t = SSL_explode_string(not_null(x_66));
  return(t);
}
ATerm _2 (ATerm t, ATerm z_58 (ATerm), ATerm a_59 (ATerm))
{
  ATerm g_67 = NULL,h_67 = NULL,i_67 = NULL;
  g_67 = t;
  f_67 :
  if(match_cons(g_67, sym__2))
    {
      h_67 = ATgetArgument(g_67, 0);
      i_67 = ATgetArgument(g_67, 1);
      {
        ATerm m_67 = NULL,o_67 = NULL;
        ATerm n_67 = NULL;
        t = SSLgetAnnotations(not_null(g_67));
        {
          n_67 = t;
          if(((m_67 != NULL) && (m_67 != n_67)))
            _fail(n_67);
          else
            m_67 = n_67;
        }
        {
          t = not_null(h_67);
          {
            ATerm q_67 = NULL;
            t = z_58(t);
            {
              o_67 = t;
              {
                t = not_null(i_67);
                {
                  ATerm s_67 = NULL;
                  t = a_59(t);
                  {
                    q_67 = t;
                    {
                      ATerm v_67 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(o_67), not_null(q_67)), not_null(m_67));
                      {
                        v_67 = t;
                        if(((s_67 != NULL) && (s_67 != v_67)))
                          _fail(v_67);
                        else
                          s_67 = v_67;
                      }
                      t = not_null(s_67);
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
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm d_68 = NULL,e_68 = NULL,f_68 = NULL;
  d_68 = t;
  c_68 :
  if(match_cons(d_68, sym__2))
    {
      e_68 = ATgetArgument(d_68, 0);
      f_68 = ATgetArgument(d_68, 1);
      {
        ATerm c_26;
        c_26 = t;
        t = SSL_printnl(not_null(e_68), not_null(f_68));
        t = c_26;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm j_88 (ATerm))
{
  ATerm f_26;
  f_26 = t;
  {
    ATerm l_68 = NULL,n_68 = NULL;
    ATerm g_26;
    g_26 = t;
    {
      ATerm m_68 = NULL;
      t = j_88(t);
      {
        m_68 = t;
        if(((l_68 != NULL) && (l_68 != m_68)))
          _fail(m_68);
        else
          l_68 = m_68;
      }
    }
    t = g_26;
    {
      ATerm o_68 = NULL;
      o_68 = t;
      if(((n_68 != NULL) && (n_68 != o_68)))
        _fail(o_68);
      else
        n_68 = o_68;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_20, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_68)), not_null(l_68)));
        t = printnl_0(t);
      }
    }
  }
  t = f_26;
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_77 (ATerm))
{
  ATerm r_68 (ATerm t)
  {
    ATerm i_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_26);
      }
    else
      {
        t = i_26;
        t = Cons_2(t, c_77, r_68);
      }
    return(t);
  }
  t = r_68(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm t_68 = NULL;
  t_68 = t;
  t = SSL_is_string(not_null(t_68));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm k_26 = t;
  int l_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(l_26);
    }
  else
    {
      t = k_26;
      {
        ATerm m_26 = t;
        int o_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_4 (ATerm t)
            {
              ATerm p_26 = t;
              int q_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(q_26);
                }
              else
                {
                  t = p_26;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, t_4);
            LocalPopChoice(o_26);
          }
        else
          {
            t = m_26;
            {
              ATerm c_69 = NULL,d_69 = NULL,e_69 = NULL;
              c_69 = t;
              b_69 :
              if(match_cons(c_69, sym_Path_1))
                {
                  d_69 = ATgetArgument(c_69, 0);
                  t = not_null(d_69);
                }
              else
                {
                  if(match_cons(c_69, sym_Var_1))
                    {
                      d_69 = ATgetArgument(c_69, 0);
                      {
                        t = not_null(d_69);
                        {
                          ATerm t_26 = t;
                          int u_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(u_26);
                            }
                          else
                            {
                              t = t_26;
                              {
                                ATerm u_4 (ATerm t)
                                {
                                  t = term_x_26;
                                  return(t);
                                }
                                t = debug_1(t, u_4);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(c_69, sym_Prefix_2))
                        {
                          d_69 = ATgetArgument(c_69, 0);
                          e_69 = ATgetArgument(c_69, 1);
                          {
                            ATerm j_69 = NULL,l_69 = NULL;
                            ATerm y_26;
                            y_26 = t;
                            {
                              ATerm k_69 = NULL;
                              t = not_null(d_69);
                              {
                                t = eval_config_0(t);
                                {
                                  k_69 = t;
                                  if(((j_69 != NULL) && (j_69 != k_69)))
                                    _fail(k_69);
                                  else
                                    j_69 = k_69;
                                }
                              }
                            }
                            t = y_26;
                            {
                              ATerm m_69 = NULL;
                              t = not_null(e_69);
                              {
                                t = eval_config_0(t);
                                {
                                  m_69 = t;
                                  if(((l_69 != NULL) && (l_69 != m_69)))
                                    _fail(m_69);
                                  else
                                    l_69 = m_69;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(j_69), not_null(l_69));
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
  ATerm x_69 = NULL;
  x_69 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_o_21, not_null(x_69));
    {
      t = table_get_0(t);
      {
        ATerm a_27 = t;
        int b_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm c_27;
              c_27 = t;
              {
                ATerm z_69 = NULL;
                ATerm a_70 = NULL;
                a_70 = t;
                if(((z_69 != NULL) && (z_69 != a_70)))
                  _fail(a_70);
                else
                  z_69 = a_70;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_o_21, not_null(x_69), not_null(z_69));
                  t = table_put_0(t);
                }
              }
              t = c_27;
            }
            LocalPopChoice(b_27);
          }
        else
          {
            t = a_27;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_75 (ATerm))
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_75(t);
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm f_70 = NULL,g_70 = NULL,h_70 = NULL;
  f_70 = t;
  e_70 :
  if(match_cons(f_70, sym__2))
    {
      g_70 = ATgetArgument(f_70, 0);
      h_70 = ATgetArgument(f_70, 1);
      t = SSL_table_get(not_null(g_70), not_null(h_70));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL;
  o_70 = t;
  n_70 :
  if(match_cons(o_70, sym__3))
    {
      p_70 = ATgetArgument(o_70, 0);
      q_70 = ATgetArgument(o_70, 1);
      r_70 = ATgetArgument(o_70, 2);
      {
        ATerm f_27;
        f_27 = t;
        {
          ATerm v_70 = NULL;
          ATerm w_70 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(p_70), not_null(q_70));
          {
            ATerm g_27 = t;
            int h_27 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(h_27);
              }
            else
              {
                t = g_27;
                t = (ATerm) ATempty;
              }
            {
              w_70 = t;
              if(((v_70 != NULL) && (v_70 != w_70)))
                _fail(w_70);
              else
                v_70 = w_70;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(p_70), not_null(q_70), (ATerm) ATinsert(CheckATermList(not_null(v_70)), not_null(r_70)));
            t = table_put_0(t);
          }
        }
        t = f_27;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm a_88 (ATerm))
{
  ATerm a_71 = NULL;
  ATerm b_71 = NULL;
  t = term_o_6;
  {
    t = a_88(t);
    {
      b_71 = t;
      if(((a_71 != NULL) && (a_71 != b_71)))
        _fail(b_71);
      else
        a_71 = b_71;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_g_25, term_h_25, not_null(a_71));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm h_71 = NULL,i_71 = NULL,j_71 = NULL;
  h_71 = t;
  g_71 :
  if(match_string(h_71, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(h_71) == AT_LIST) && !(ATisEmpty(h_71))))
        {
          i_71 = ATgetFirst((ATermList) h_71);
          j_71 = (ATerm) ATgetNext((ATermList) h_71);
          {
            ATerm o_71 = NULL;
            ATerm i_27;
            i_27 = t;
            {
              t = not_null(i_71);
              t = a_0(t);
            }
            t = i_27;
            {
              ATerm p_71 = NULL;
              t = term_o_6;
              {
                t = d_0(t);
                {
                  p_71 = t;
                  if(((o_71 != NULL) && (o_71 != p_71)))
                    _fail(p_71);
                  else
                    o_71 = p_71;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(j_71)), not_null(o_71));
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
  ATerm v_4 (ATerm t)
  {
    ATerm u_71 = NULL;
    u_71 = t;
    t_71 :
    if(!(match_string(u_71, "--help")))
      {
        if(!(match_string(u_71, "-h")))
          {
            if(!(match_string(u_71, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_l_27;
    {
      t = set_config_0(t);
      t = term_m_27;
    }
    return(t);
  }
  ATerm b_5 (ATerm t)
  {
    t = term_o_27;
    return(t);
  }
  t = Option_3(t, v_4, w_4, b_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_71 = NULL,y_71 = NULL,z_71 = NULL;
  x_71 = t;
  w_71 :
  if(((ATgetType(x_71) == AT_LIST) && !(ATisEmpty(x_71))))
    {
      y_71 = ATgetFirst((ATermList) x_71);
      z_71 = (ATerm) ATgetNext((ATermList) x_71);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_71)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_71)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm i_60 (ATerm), ATerm j_60 (ATerm))
{
  ATerm k_72 = NULL,l_72 = NULL,m_72 = NULL;
  k_72 = t;
  j_72 :
  if(((ATgetType(k_72) == AT_LIST) && !(ATisEmpty(k_72))))
    {
      l_72 = ATgetFirst((ATermList) k_72);
      m_72 = (ATerm) ATgetNext((ATermList) k_72);
      {
        ATerm s_72 = NULL,u_72 = NULL;
        ATerm t_72 = NULL;
        t = SSLgetAnnotations(not_null(k_72));
        {
          t_72 = t;
          if(((s_72 != NULL) && (s_72 != t_72)))
            _fail(t_72);
          else
            s_72 = t_72;
        }
        {
          t = not_null(l_72);
          {
            ATerm w_72 = NULL;
            t = i_60(t);
            {
              u_72 = t;
              {
                t = not_null(m_72);
                {
                  ATerm y_72 = NULL;
                  t = j_60(t);
                  {
                    w_72 = t;
                    {
                      ATerm z_72 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(w_72)), not_null(u_72)), not_null(s_72));
                      {
                        z_72 = t;
                        if(((y_72 != NULL) && (y_72 != z_72)))
                          _fail(z_72);
                        else
                          y_72 = z_72;
                      }
                      t = not_null(y_72);
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
  ATerm j_73 = NULL;
  j_73 = t;
  i_73 :
  if(((ATgetType(j_73) == AT_LIST) && ATisEmpty(j_73)))
    {
      {
        ATerm l_73 = NULL,n_73 = NULL;
        ATerm p_27;
        p_27 = t;
        {
          ATerm m_73 = NULL;
          t = SSLgetAnnotations(not_null(j_73));
          {
            m_73 = t;
            if(((l_73 != NULL) && (l_73 != m_73)))
              _fail(m_73);
            else
              l_73 = m_73;
          }
        }
        t = p_27;
        {
          ATerm o_73 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(l_73));
          {
            o_73 = t;
            if(((n_73 != NULL) && (n_73 != o_73)))
              _fail(o_73);
            else
              n_73 = o_73;
          }
          t = not_null(n_73);
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
  ATerm u_73 = NULL,v_73 = NULL,w_73 = NULL;
  u_73 = t;
  t_73 :
  if(match_cons(u_73, sym__2))
    {
      v_73 = ATgetArgument(u_73, 0);
      w_73 = ATgetArgument(u_73, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_o_21, not_null(v_73), not_null(w_73));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm y_87 (ATerm))
{
  ATerm q_27;
  q_27 = t;
  {
    ATerm r_27 = t;
    int s_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_t_27;
        t = y_87(t);
        LocalPopChoice(s_27);
      }
    else
      {
        t = r_27;
        {
        }
      }
  }
  t = q_27;
  {
    ATerm c_5 (ATerm t)
    {
      ATerm g_74 = NULL;
      ATerm y_27;
      y_27 = t;
      {
        ATerm c_74 = NULL;
        ATerm f_74 = NULL;
        f_74 = t;
        if(((c_74 != NULL) && (c_74 != f_74)))
          _fail(f_74);
        else
          c_74 = f_74;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_24, not_null(c_74));
          t = set_config_0(t);
        }
      }
      t = y_27;
      {
        ATerm h_74 = NULL;
        h_74 = t;
        if(((g_74 != NULL) && (g_74 != h_74)))
          _fail(h_74);
        else
          g_74 = h_74;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(g_74));
      }
      return(t);
    }
    ATerm f_5 (ATerm t)
    {
      ATerm z_27 = t;
      int a_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_28 = t;
          int c_28 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_28);
            }
          else
            {
              t = b_28;
              {
                t = y_87(t);
                t = Cons_2(t, _id, f_5);
              }
            }
          LocalPopChoice(a_28);
        }
      else
        {
          t = z_27;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_5, f_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm n_74 = NULL,o_74 = NULL,p_74 = NULL;
  ATerm d_28;
  d_28 = t;
  {
    ATerm q_74 = NULL,r_74 = NULL,s_74 = NULL,t_74 = NULL;
    q_74 = t;
    m_74 :
    if(match_cons(q_74, sym__3))
      {
        r_74 = ATgetArgument(q_74, 0);
        s_74 = ATgetArgument(q_74, 1);
        t_74 = ATgetArgument(q_74, 2);
        {
          if(((n_74 != NULL) && (n_74 != r_74)))
            _fail(r_74);
          else
            n_74 = r_74;
          {
            if(((o_74 != NULL) && (o_74 != s_74)))
              _fail(s_74);
            else
              o_74 = s_74;
            {
              if(((p_74 != NULL) && (p_74 != t_74)))
                _fail(t_74);
              else
                p_74 = t_74;
              t = SSL_table_put(not_null(n_74), not_null(o_74), not_null(p_74));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_28;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm x_87 (ATerm))
{
  ATerm w_74 = NULL;
  ATerm e_28;
  e_28 = t;
  {
    t = term_f_28;
    t = table_put_0(t);
  }
  t = e_28;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm g_28 = t;
      int h_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = x_87(t);
          LocalPopChoice(h_28);
        }
      else
        {
          t = g_28;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_5);
    {
      ATerm i_28 = t;
      int o_28 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm p_28;
          p_28 = t;
          {
            ATerm x_28 = t;
            int y_28 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_j_27;
                t = get_config_0(t);
                LocalPopChoice(y_28);
              }
            else
              {
                t = x_28;
                t = fetch_1(t, Help_0);
              }
          }
          t = p_28;
          {
            t = system_usage_0(t);
            {
              t = term_m_7;
              t = exit_0(t);
            }
          }
          LocalPopChoice(o_28);
        }
      else
        {
          t = i_28;
          {
            ATerm z_28 = t;
            int a_29 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm h_5 (ATerm t)
                {
                  ATerm i_5 (ATerm t)
                  {
                    ATerm x_74 = NULL;
                    x_74 = t;
                    if(((w_74 != NULL) && (w_74 != x_74)))
                      _fail(x_74);
                    else
                      w_74 = x_74;
                    return(t);
                  }
                  t = Undefined_1(t, i_5);
                  return(t);
                }
                t = fetch_1(t, h_5);
                {
                  ATerm j_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_74)), term_c_29);
                    return(t);
                  }
                  t = say_1(t, j_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_n_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(a_29);
              }
            else
              {
                t = z_28;
                {
                }
              }
          }
        }
      {
        ATerm d_29;
        d_29 = t;
        {
          t = term_g_25;
          t = table_destroy_0(t);
        }
        t = d_29;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm u_85 (ATerm), ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm))
{
  t = parse_options_1(t, u_85);
  {
    t = store_options_0(t);
    {
      t = w_85(t);
      {
        ATerm m_29 = t;
        int n_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, v_85);
            LocalPopChoice(n_29);
          }
        else
          {
            t = m_29;
            {
              ATerm o_29 = t;
              int p_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = x_85(t);
                  t = report_success_0(t);
                  LocalPopChoice(p_29);
                }
              else
                {
                  t = o_29;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm option_wrap_2 (ATerm t, ATerm y_85 (ATerm), ATerm z_85 (ATerm))
{
  t = option_wrap_4(t, y_85, default_usage_0, _id, z_85);
  return(t);
}
ATerm io_Ast_2_abox_0 (ATerm t)
{
  ATerm n_5 (ATerm t)
  {
    ATerm q_29 = t;
    int r_29 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = io_options_0(t);
        LocalPopChoice(r_29);
      }
    else
      {
        t = q_29;
        t = pp_options_0(t);
      }
    return(t);
  }
  t = option_wrap_2(t, n_5, ast2abox_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_Ast_2_abox_0(t);
  return(t);
}
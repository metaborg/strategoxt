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
Symbol sym_Verbose_0;
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
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_constructor_0;
Symbol sym_memo_0;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_Production_s_1;
Symbol sym_syntax_1;
Symbol sym_Symbol_s_1;
Symbol sym_TagId_empty_0;
Symbol sym_empty_grammar_0;
Symbol sym_conc_grammars_2;
Symbol sym_uqlit_1;
Symbol sym_Literal_1;
Symbol sym_prod_fun_4;
Symbol sym_qlit_1;
Symbol sym_ATerm_1;
Symbol sym_comma_2;
Symbol sym_ATermList_dunno_c__0_0;
Symbol sym_ATerms_1;
Symbol sym_IntCon_1;
Symbol sym_RealCon_1;
Symbol sym_Literal_p__1;
Symbol sym_ACon_1;
Symbol sym_ATermList_1;
Symbol sym_AFun_1;
Symbol sym_AFun_ATerms_2;
Symbol sym_ATerms_p__1;
Symbol sym_ACon_Ann_2;
Symbol sym_ATermList_Ann_2;
Symbol sym_AFun_Ann_2;
Symbol sym_AFun_ATerms_Ann_3;
Symbol sym_NatCon_p__1;
Symbol sym_plus_1;
Symbol sym_minus_1;
Symbol sym_e_1;
Symbol sym_OptExp_empty_0;
Symbol sym_IntCon_NatCon_OptExp_3;
Symbol sym_lexical_syntax_1;
Symbol sym_context_free_syntax_1;
Symbol sym_variables_1;
Symbol sym_lexical_variables_1;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_varsym_1;
Symbol sym_layout_0;
Symbol sym_bracket_symbol_1;
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
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_constructor_0 = ATmakeSymbol("constructor", 0, ATfalse);
  ATprotectSymbol(sym_constructor_0);
  sym_memo_0 = ATmakeSymbol("memo", 0, ATfalse);
  ATprotectSymbol(sym_memo_0);
  sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
  ATprotectSymbol(sym_attrs_1);
  sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
  ATprotectSymbol(sym_no_attrs_0);
  sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
  ATprotectSymbol(sym_prod_3);
  sym_Production_s_1 = ATmakeSymbol("Production-s", 1, ATfalse);
  ATprotectSymbol(sym_Production_s_1);
  sym_syntax_1 = ATmakeSymbol("syntax", 1, ATfalse);
  ATprotectSymbol(sym_syntax_1);
  sym_Symbol_s_1 = ATmakeSymbol("Symbol-s", 1, ATfalse);
  ATprotectSymbol(sym_Symbol_s_1);
  sym_TagId_empty_0 = ATmakeSymbol("TagId-empty", 0, ATfalse);
  ATprotectSymbol(sym_TagId_empty_0);
  sym_empty_grammar_0 = ATmakeSymbol("empty-grammar", 0, ATfalse);
  ATprotectSymbol(sym_empty_grammar_0);
  sym_conc_grammars_2 = ATmakeSymbol("conc-grammars", 2, ATfalse);
  ATprotectSymbol(sym_conc_grammars_2);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
  ATprotectSymbol(sym_Literal_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
  sym_ATerm_1 = ATmakeSymbol("ATerm", 1, ATfalse);
  ATprotectSymbol(sym_ATerm_1);
  sym_comma_2 = ATmakeSymbol("comma", 2, ATfalse);
  ATprotectSymbol(sym_comma_2);
  sym_ATermList_dunno_c__0_0 = ATmakeSymbol("ATermList-dunno-c_0", 0, ATfalse);
  ATprotectSymbol(sym_ATermList_dunno_c__0_0);
  sym_ATerms_1 = ATmakeSymbol("ATerms", 1, ATfalse);
  ATprotectSymbol(sym_ATerms_1);
  sym_IntCon_1 = ATmakeSymbol("IntCon", 1, ATfalse);
  ATprotectSymbol(sym_IntCon_1);
  sym_RealCon_1 = ATmakeSymbol("RealCon", 1, ATfalse);
  ATprotectSymbol(sym_RealCon_1);
  sym_Literal_p__1 = ATmakeSymbol("Literal'", 1, ATfalse);
  ATprotectSymbol(sym_Literal_p__1);
  sym_ACon_1 = ATmakeSymbol("ACon", 1, ATfalse);
  ATprotectSymbol(sym_ACon_1);
  sym_ATermList_1 = ATmakeSymbol("ATermList", 1, ATfalse);
  ATprotectSymbol(sym_ATermList_1);
  sym_AFun_1 = ATmakeSymbol("AFun", 1, ATfalse);
  ATprotectSymbol(sym_AFun_1);
  sym_AFun_ATerms_2 = ATmakeSymbol("AFun-ATerms", 2, ATfalse);
  ATprotectSymbol(sym_AFun_ATerms_2);
  sym_ATerms_p__1 = ATmakeSymbol("ATerms'", 1, ATfalse);
  ATprotectSymbol(sym_ATerms_p__1);
  sym_ACon_Ann_2 = ATmakeSymbol("ACon-Ann", 2, ATfalse);
  ATprotectSymbol(sym_ACon_Ann_2);
  sym_ATermList_Ann_2 = ATmakeSymbol("ATermList-Ann", 2, ATfalse);
  ATprotectSymbol(sym_ATermList_Ann_2);
  sym_AFun_Ann_2 = ATmakeSymbol("AFun-Ann", 2, ATfalse);
  ATprotectSymbol(sym_AFun_Ann_2);
  sym_AFun_ATerms_Ann_3 = ATmakeSymbol("AFun-ATerms-Ann", 3, ATfalse);
  ATprotectSymbol(sym_AFun_ATerms_Ann_3);
  sym_NatCon_p__1 = ATmakeSymbol("NatCon'", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_p__1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
  sym_e_1 = ATmakeSymbol("e", 1, ATfalse);
  ATprotectSymbol(sym_e_1);
  sym_OptExp_empty_0 = ATmakeSymbol("OptExp-empty", 0, ATfalse);
  ATprotectSymbol(sym_OptExp_empty_0);
  sym_IntCon_NatCon_OptExp_3 = ATmakeSymbol("IntCon-NatCon-OptExp", 3, ATfalse);
  ATprotectSymbol(sym_IntCon_NatCon_OptExp_3);
  sym_lexical_syntax_1 = ATmakeSymbol("lexical-syntax", 1, ATfalse);
  ATprotectSymbol(sym_lexical_syntax_1);
  sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
  ATprotectSymbol(sym_context_free_syntax_1);
  sym_variables_1 = ATmakeSymbol("variables", 1, ATfalse);
  ATprotectSymbol(sym_variables_1);
  sym_lexical_variables_1 = ATmakeSymbol("lexical-variables", 1, ATfalse);
  ATprotectSymbol(sym_lexical_variables_1);
  sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
  ATprotectSymbol(sym_cf_1);
  sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
  ATprotectSymbol(sym_lex_1);
  sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
  ATprotectSymbol(sym_varsym_1);
  sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
  ATprotectSymbol(sym_layout_0);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  init_constant_terms();
}
ATerm term_f_25;
ATerm term_e_25;
ATerm term_d_25;
ATerm term_c_25;
ATerm term_r_24;
ATerm term_j_24;
ATerm term_b_24;
ATerm term_v_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_a_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_w_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_x_19;
ATerm term_w_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_a_19;
ATerm term_z_18;
ATerm term_c_18;
ATerm term_b_18;
ATerm term_a_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_u_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_a_17;
ATerm term_x_16;
ATerm term_w_16;
ATerm term_t_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_p_16;
ATerm term_e_16;
ATerm term_r_15;
ATerm term_k_15;
ATerm term_g_15;
ATerm term_z_14;
ATerm term_x_14;
ATerm term_a_14;
ATerm term_x_13;
ATerm term_s_13;
ATerm term_m_13;
ATerm term_e_13;
ATerm term_a_13;
ATerm term_z_12;
ATerm term_s_12;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_h_12;
ATerm term_p_10;
ATerm term_m_9;
ATerm term_k_9;
ATerm term_j_9;
ATerm term_i_9;
ATerm term_g_9;
ATerm term_w_8;
ATerm term_u_8;
ATerm term_t_8;
ATerm term_o_7;
ATerm term_w_6;
ATerm term_v_6;
ATerm term_u_6;
ATerm term_c_6;
ATerm term_b_6;
void init_constant_terms (void)
{
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_u_6));
  term_u_6 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_v_6));
  term_v_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(sym_Arg_1, term_v_6);
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_u_8));
  term_u_8 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_w_8));
  term_w_8 = (ATerm) ATmakeAppl(sym_SOpt_2, term_t_8, term_u_8);
  ATprotect(&(term_g_9));
  term_g_9 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_i_9));
  term_i_9 = (ATerm) ATmakeAppl(sym_lit_1, term_g_9);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_9));
  term_k_9 = (ATerm) ATmakeAppl(sym_lit_1, term_j_9);
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym__2, term_q_12, term_r_12);
  ATprotect(&(term_z_12));
  term_z_12 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym__2, term_q_16, term_b_6);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_t_16));
  term_t_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_g_15, term_a_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_a_17);
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(sym__2, term_z_17, term_b_6);
  ATprotect(&(term_b_18));
  term_b_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_18));
  term_z_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_a_19));
  term_a_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym__2, term_h_19, term_b_6);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_22));
  term_a_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(sym__2, term_w_19, term_x_19);
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(sym__2, term_p_23, term_b_6);
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(sym__3, term_w_19, term_x_19, (ATerm) ATempty);
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_d_25));
  term_d_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm double_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm p_59 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm selector_2 (ATerm, ATerm k_59 (ATerm), ATerm l_59 (ATerm));
ATerm Arg_1 (ATerm, ATerm m_59 (ATerm));
ATerm topdown_1 (ATerm, ATerm i_72 (ATerm));
ATerm filter_1 (ATerm, ATerm d_86 (ATerm));
ATerm argument_list_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm i_70 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm s_61 (ATerm));
ATerm iter_1 (ATerm, ATerm r_61 (ATerm));
ATerm pair_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm p_61 (ATerm), ATerm q_61 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm n_61 (ATerm), ATerm o_61 (ATerm));
ATerm make_0 (ATerm);
ATerm NonTerminal_0 (ATerm);
ATerm number_node_1 (ATerm, ATerm l_70 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm h_70 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm m_79 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm b_88 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm m_88 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm sort_1 (ATerm, ATerm w_61 (ATerm));
ATerm lit_1 (ATerm, ATerm m_61 (ATerm));
ATerm cons_1 (ATerm, ATerm l_0 (ATerm));
ATerm foldr_3 (ATerm, ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm));
ATerm crush_3 (ATerm, ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm));
ATerm collect_p__1 (ATerm, ATerm l_98 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm _2 (ATerm, ATerm t_57 (ATerm), ATerm u_57 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm y_73 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm p_90 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm w_98 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm x_98 (ATerm));
ATerm InOutId_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm e_99 (ATerm));
ATerm try_1 (ATerm, ATerm o_70 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm c_99 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm b_79 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm h_92 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm o_90 (ATerm));
ATerm debug_1 (ATerm, ATerm k_89 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm p_86 (ATerm), ATerm q_86 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_94 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_85 (ATerm), ATerm b_85 (ATerm));
ATerm crush_2 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm g_92 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm m_90 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_94 (ATerm));
ATerm map_1 (ATerm, ATerm m_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_94 (ATerm));
ATerm Program_1 (ATerm, ATerm s_67 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm l_89 (ATerm));
ATerm Undefined_1 (ATerm, ATerm t_67 (ATerm));
ATerm fetch_1 (ATerm, ATerm v_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_93 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_59 (ATerm), ATerm d_59 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_94 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_94 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm));
ATerm iowrap_4 (ATerm, ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm m_91 (ATerm));
ATerm iowrap_3 (ATerm, ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm f_91 (ATerm));
ATerm iowrap_2 (ATerm, ATerm b_91 (ATerm), ATerm c_91 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm));
ATerm io_sdf_2_pp_table_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Option_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm s_3 = NULL,t_3 = NULL,e_4 = NULL;
  s_3 = t;
  r_3 :
  if(match_string(s_3, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(s_3) == AT_LIST) && !(ATisEmpty(s_3))))
        {
          t_3 = ATgetFirst((ATermList) s_3);
          e_4 = (ATerm) ATgetNext((ATermList) s_3);
          {
            ATerm k_4 = NULL;
            ATerm a_6;
            a_6 = t;
            {
              t = not_null(t_3);
              t = m_0(t);
            }
            t = a_6;
            {
              ATerm l_4 = NULL;
              t = term_b_6;
              {
                t = n_0(t);
                {
                  l_4 = t;
                  if(((k_4 != NULL) && (k_4 != l_4)))
                    _fail(l_4);
                  else
                    k_4 = l_4;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_4)), not_null(k_4));
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
ATerm quote_chars_0 (ATerm t)
{
  ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
  r_4 = t;
  q_4 :
  if(match_cons(r_4, sym__2))
    {
      s_4 = ATgetArgument(r_4, 0);
      t_4 = ATgetArgument(r_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_4)), not_null(s_4)), (ATerm) ATinsert(ATempty, not_null(s_4)));
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
  ATerm y_4 = NULL;
  ATerm z_4 = NULL;
  z_4 = t;
  if(((y_4 != NULL) && (y_4 != z_4)))
    _fail(z_4);
  else
    y_4 = z_4;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_c_6, not_null(y_4));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm S_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm g_5 = NULL,h_5 = NULL;
  g_5 = t;
  f_5 :
  if(match_cons(g_5, sym_S_1))
    {
      h_5 = ATgetArgument(g_5, 0);
      {
        ATerm k_5 = NULL,m_5 = NULL;
        ATerm l_5 = NULL;
        t = SSLgetAnnotations(not_null(g_5));
        {
          l_5 = t;
          if(((k_5 != NULL) && (k_5 != l_5)))
            _fail(l_5);
          else
            k_5 = l_5;
        }
        {
          t = not_null(h_5);
          {
            ATerm o_5 = NULL;
            t = p_59(t);
            {
              m_5 = t;
              {
                ATerm p_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(m_5)), not_null(k_5));
                {
                  p_5 = t;
                  if(((o_5 != NULL) && (o_5 != p_5)))
                    _fail(p_5);
                  else
                    o_5 = p_5;
                }
                t = not_null(o_5);
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
ATerm int_to_string_0 (ATerm t)
{
  ATerm v_5 = NULL;
  v_5 = t;
  t = SSL_int_to_string(not_null(v_5));
  return(t);
}
ATerm selector_2 (ATerm t, ATerm k_59 (ATerm), ATerm l_59 (ATerm))
{
  ATerm e_6 = NULL,f_6 = NULL,g_6 = NULL;
  e_6 = t;
  d_6 :
  if(match_cons(e_6, sym_selector_2))
    {
      f_6 = ATgetArgument(e_6, 0);
      g_6 = ATgetArgument(e_6, 1);
      {
        ATerm k_6 = NULL,m_6 = NULL;
        ATerm l_6 = NULL;
        t = SSLgetAnnotations(not_null(e_6));
        {
          l_6 = t;
          if(((k_6 != NULL) && (k_6 != l_6)))
            _fail(l_6);
          else
            k_6 = l_6;
        }
        {
          t = not_null(f_6);
          {
            ATerm o_6 = NULL;
            t = k_59(t);
            {
              m_6 = t;
              {
                t = not_null(g_6);
                {
                  ATerm q_6 = NULL;
                  t = l_59(t);
                  {
                    o_6 = t;
                    {
                      ATerm r_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(m_6), not_null(o_6)), not_null(k_6));
                      {
                        r_6 = t;
                        if(((q_6 != NULL) && (q_6 != r_6)))
                          _fail(r_6);
                        else
                          q_6 = r_6;
                      }
                      t = not_null(q_6);
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
ATerm Arg_1 (ATerm t, ATerm m_59 (ATerm))
{
  ATerm c_7 = NULL,d_7 = NULL;
  c_7 = t;
  b_7 :
  if(match_cons(c_7, sym_Arg_1))
    {
      d_7 = ATgetArgument(c_7, 0);
      {
        ATerm g_7 = NULL,i_7 = NULL;
        ATerm h_7 = NULL;
        t = SSLgetAnnotations(not_null(c_7));
        {
          h_7 = t;
          if(((g_7 != NULL) && (g_7 != h_7)))
            _fail(h_7);
          else
            g_7 = h_7;
        }
        {
          t = not_null(d_7);
          {
            ATerm k_7 = NULL;
            t = m_59(t);
            {
              i_7 = t;
              {
                ATerm l_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(i_7)), not_null(g_7));
                {
                  l_7 = t;
                  if(((k_7 != NULL) && (k_7 != l_7)))
                    _fail(l_7);
                  else
                    k_7 = l_7;
                }
                t = not_null(k_7);
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
ATerm topdown_1 (ATerm t, ATerm i_72 (ATerm))
{
  t = i_72(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1(t, i_72);
      return(t);
    }
    t = _all(t, b_0);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm d_86 (ATerm))
{
  ATerm h_6 = t;
  int i_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_6);
    }
  else
    {
      t = h_6;
      {
        ATerm j_6 = t;
        int n_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = filter_1(t, d_86);
              return(t);
            }
            t = Cons_2(t, d_86, c_0);
            LocalPopChoice(n_6);
          }
        else
          {
            t = j_6;
            {
              ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL;
              s_7 = t;
              r_7 :
              if(((ATgetType(s_7) == AT_LIST) && !(ATisEmpty(s_7))))
                {
                  t_7 = ATgetFirst((ATermList) s_7);
                  u_7 = (ATerm) ATgetNext((ATermList) s_7);
                  {
                    t = not_null(u_7);
                    t = filter_1(t, d_86);
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
ATerm argument_list_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm f_0 (ATerm t)
    {
      ATerm y_7 = NULL;
      y_7 = t;
      {
        ATerm p_6 = t;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = p_6;
          }
        t = (ATerm) ATinsert(ATempty, not_null(y_7));
      }
      return(t);
    }
    t = try_1(t, f_0);
    return(t);
  }
  t = map_1(t, e_0);
  t = concat_0(t);
  return(t);
}
ATerm flat_alt_0 (ATerm t)
{
  ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL;
  ATerm v_8 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_8)), not_null(j_8));
    return(t);
  }
  i_8 = t;
  e_8 :
  if(match_cons(i_8, sym_alt_2))
    {
      j_8 = ATgetArgument(i_8, 0);
      k_8 = ATgetArgument(i_8, 1);
      f_8 :
      if(match_cons(k_8, sym_alt_2))
        {
          g_8 = ATgetArgument(k_8, 0);
          h_8 = ATgetArgument(k_8, 1);
          {
            ATerm s_6 = t;
            int t_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm o_8 = NULL;
                ATerm p_8 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(g_8), not_null(h_8));
                {
                  t = flat_alt_0(t);
                  {
                    p_8 = t;
                    if(((o_8 != NULL) && (o_8 != p_8)))
                      _fail(p_8);
                    else
                      o_8 = p_8;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(o_8)), not_null(j_8));
                LocalPopChoice(t_6);
              }
            else
              {
                t = s_6;
                t = v_8(t);
              }
          }
        }
      else
        {
          t = v_8(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm x_9 = NULL,y_9 = NULL,z_9 = NULL;
  ATerm p_0 (ATerm t)
  {
    t = term_b_6;
    t = i_70(t);
    return(t);
  }
  t = split_2(t, p_0, _id);
  {
    ATerm s_11 (ATerm t)
    {
      ATerm a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL,f_10 = NULL,g_10 = NULL,h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL;
      ATerm u_11 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm v_11 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm w_11 (ATerm t)
      {
        ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL;
        if(((x_9 != NULL) && (x_9 != g_10)))
          _fail(g_10);
        else
          x_9 = g_10;
        {
          if(((y_9 != NULL) && (y_9 != h_10)))
            _fail(h_10);
          else
            y_9 = h_10;
          {
            if(((z_9 != NULL) && (z_9 != j_10)))
              _fail(j_10);
            else
              z_9 = j_10;
            {
              if(((l_10 != NULL) && (l_10 != d_10)))
                _fail(d_10);
              else
                l_10 = d_10;
              {
                if(((m_10 != NULL) && (m_10 != b_10)))
                  _fail(b_10);
                else
                  m_10 = b_10;
                {
                  if(((n_10 != NULL) && (n_10 != c_10)))
                    _fail(c_10);
                  else
                    n_10 = c_10;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(l_10), (ATerm) ATmakeAppl(sym_alt_2, not_null(m_10), not_null(n_10)));
                    {
                      ATerm q_10 = NULL;
                      t = flat_alt_0(t);
                      {
                        o_10 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_u_6, not_null(o_10));
                          {
                            t = mkterm_0(t);
                            {
                              q_10 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(x_9), not_null(y_9)), (ATerm) ATmakeAppl(sym__2, not_null(z_9), not_null(q_10)));
                                {
                                  t = s_11(t);
                                  {
                                    ATerm q_0 (ATerm t)
                                    {
                                      ATerm r_0 (ATerm t)
                                      {
                                        ATerm s_0 (ATerm t)
                                        {
                                          t = Arg_1(t, _id);
                                          t = term_w_6;
                                          return(t);
                                        }
                                        t = try_1(t, s_0);
                                        return(t);
                                      }
                                      t = topdown_1(t, r_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, q_0, _id);
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
      ATerm x_11 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_10), not_null(h_10)), (ATerm) ATmakeAppl(sym__2, not_null(j_10), not_null(d_10)));
        t = s_11(t);
        return(t);
      }
      ATerm y_11 (ATerm t)
      {
        ATerm a_11 = NULL,b_11 = NULL,h_11 = NULL;
        ATerm c_11 = NULL;
        ATerm e_11 = NULL,f_11 = NULL,g_11 = NULL;
        t = not_null(k_10);
        {
          c_11 = t;
          {
            t = SSL_explode_term(not_null(c_11));
            {
              e_11 = t;
              h_9 :
              if(match_cons(e_11, sym__2))
                {
                  f_11 = ATgetArgument(e_11, 0);
                  g_11 = ATgetArgument(e_11, 1);
                  {
                    if(((a_11 != NULL) && (a_11 != f_11)))
                      _fail(f_11);
                    else
                      a_11 = f_11;
                    if(((b_11 != NULL) && (b_11 != g_11)))
                      _fail(g_11);
                    else
                      b_11 = g_11;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(h_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(j_10), not_null(a_11))));
          {
            ATerm j_11 = NULL,q_11 = NULL;
            t = conc_0(t);
            {
              h_11 = t;
              {
                t = not_null(b_11);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm x_6;
                      x_6 = t;
                      {
                        ATerm k_11 = NULL;
                        t = make_0(t);
                        {
                          k_11 = t;
                          if(((j_11 != NULL) && (j_11 != k_11)))
                            _fail(k_11);
                          else
                            j_11 = k_11;
                        }
                      }
                      t = x_6;
                      {
                        ATerm t_0 (ATerm t)
                        {
                          ATerm l_11 = NULL;
                          ATerm n_11 = NULL;
                          l_11 = t;
                          {
                            ATerm o_11 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(g_10), not_null(h_11)), not_null(l_11));
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
                            t = not_null(n_11);
                          }
                          return(t);
                        }
                        t = map_1(t, t_0);
                        {
                          t = concat_0(t);
                          {
                            q_11 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(q_11)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(g_10), not_null(h_11)), not_null(j_11)));
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
      e_10 = t;
      n_9 :
      if(match_cons(e_10, sym__2))
        {
          f_10 = ATgetArgument(e_10, 0);
          i_10 = ATgetArgument(e_10, 1);
          o_9 :
          if(match_cons(i_10, sym_lit_1))
            {
              j_10 = ATgetArgument(i_10, 0);
              p_9 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(i_10, sym__2))
                {
                  j_10 = ATgetArgument(i_10, 0);
                  k_10 = ATgetArgument(i_10, 1);
                  q_9 :
                  if(match_cons(k_10, sym_sort_1))
                    {
                      d_10 = ATgetArgument(k_10, 0);
                      r_9 :
                      if(match_cons(f_10, sym__2))
                        {
                          g_10 = ATgetArgument(f_10, 0);
                          h_10 = ATgetArgument(f_10, 1);
                          {
                            ATerm y_6 = t;
                            int z_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = u_11(t);
                                LocalPopChoice(z_6);
                              }
                            else
                              {
                                t = y_6;
                                t = y_11(t);
                              }
                          }
                        }
                      else
                        {
                          t = u_11(t);
                        }
                    }
                  else
                    {
                      if(match_cons(k_10, sym_char_class_1))
                        {
                          d_10 = ATgetArgument(k_10, 0);
                          s_9 :
                          if(match_cons(f_10, sym__2))
                            {
                              g_10 = ATgetArgument(f_10, 0);
                              h_10 = ATgetArgument(f_10, 1);
                              {
                                ATerm a_7 = t;
                                int e_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = v_11(t);
                                    LocalPopChoice(e_7);
                                  }
                                else
                                  {
                                    t = a_7;
                                    t = y_11(t);
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
                          if(match_cons(k_10, sym_alt_2))
                            {
                              d_10 = ATgetArgument(k_10, 0);
                              a_10 = ATgetArgument(k_10, 1);
                              t_9 :
                              if(match_cons(f_10, sym__2))
                                {
                                  g_10 = ATgetArgument(f_10, 0);
                                  h_10 = ATgetArgument(f_10, 1);
                                  u_9 :
                                  if(match_cons(a_10, sym_alt_2))
                                    {
                                      b_10 = ATgetArgument(a_10, 0);
                                      c_10 = ATgetArgument(a_10, 1);
                                      {
                                        ATerm f_7 = t;
                                        int j_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = w_11(t);
                                            LocalPopChoice(j_7);
                                          }
                                        else
                                          {
                                            t = f_7;
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
                          else
                            {
                              if(match_cons(k_10, sym_bracket_symbol_1))
                                {
                                  d_10 = ATgetArgument(k_10, 0);
                                  v_9 :
                                  if(match_cons(f_10, sym__2))
                                    {
                                      g_10 = ATgetArgument(f_10, 0);
                                      h_10 = ATgetArgument(f_10, 1);
                                      {
                                        ATerm m_7 = t;
                                        int n_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = x_11(t);
                                            LocalPopChoice(n_7);
                                          }
                                        else
                                          {
                                            t = m_7;
                                            t = y_11(t);
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
                                  w_9 :
                                  if(match_cons(f_10, sym__2))
                                    {
                                      g_10 = ATgetArgument(f_10, 0);
                                      h_10 = ATgetArgument(f_10, 1);
                                      t = y_11(t);
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
    t = s_11(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm l_12 = NULL,m_12 = NULL,n_12 = NULL;
  l_12 = t;
  k_12 :
  if(match_cons(l_12, sym_lit_1))
    {
      m_12 = ATgetArgument(l_12, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_7, (ATerm) ATmakeAppl(sym_S_1, not_null(m_12)));
    }
  else
    {
      if(match_cons(l_12, sym__2))
        {
          m_12 = ATgetArgument(l_12, 0);
          n_12 = ATgetArgument(l_12, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(m_12));
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm x_12 = NULL,y_12 = NULL;
  x_12 = t;
  w_12 :
  if(match_cons(x_12, sym_iter_star_1))
    {
      y_12 = ATgetArgument(x_12, 0);
      {
        ATerm b_13 = NULL,d_13 = NULL;
        ATerm c_13 = NULL;
        t = SSLgetAnnotations(not_null(x_12));
        {
          c_13 = t;
          if(((b_13 != NULL) && (b_13 != c_13)))
            _fail(c_13);
          else
            b_13 = c_13;
        }
        {
          t = not_null(y_12);
          {
            ATerm f_13 = NULL;
            t = s_61(t);
            {
              d_13 = t;
              {
                ATerm g_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(d_13)), not_null(b_13));
                {
                  g_13 = t;
                  if(((f_13 != NULL) && (f_13 != g_13)))
                    _fail(g_13);
                  else
                    f_13 = g_13;
                }
                t = not_null(f_13);
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
ATerm iter_1 (ATerm t, ATerm r_61 (ATerm))
{
  ATerm q_13 = NULL,r_13 = NULL;
  q_13 = t;
  p_13 :
  if(match_cons(q_13, sym_iter_1))
    {
      r_13 = ATgetArgument(q_13, 0);
      {
        ATerm u_13 = NULL,w_13 = NULL;
        ATerm v_13 = NULL;
        t = SSLgetAnnotations(not_null(q_13));
        {
          v_13 = t;
          if(((u_13 != NULL) && (u_13 != v_13)))
            _fail(v_13);
          else
            u_13 = v_13;
        }
        {
          t = not_null(r_13);
          {
            ATerm y_13 = NULL;
            t = r_61(t);
            {
              w_13 = t;
              {
                ATerm z_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(w_13)), not_null(u_13));
                {
                  z_13 = t;
                  if(((y_13 != NULL) && (y_13 != z_13)))
                    _fail(z_13);
                  else
                    y_13 = z_13;
                }
                t = not_null(y_13);
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
ATerm pair_0 (ATerm t)
{
  ATerm p_7 = t;
  int q_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_7);
    }
  else
    {
      t = p_7;
      {
        ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL,l_14 = NULL,m_14 = NULL;
        i_14 = t;
        g_14 :
        if(((ATgetType(i_14) == AT_LIST) && !(ATisEmpty(i_14))))
          {
            j_14 = ATgetFirst((ATermList) i_14);
            k_14 = (ATerm) ATgetNext((ATermList) i_14);
            h_14 :
            if(((ATgetType(k_14) == AT_LIST) && !(ATisEmpty(k_14))))
              {
                l_14 = ATgetFirst((ATermList) k_14);
                m_14 = (ATerm) ATgetNext((ATermList) k_14);
                {
                  ATerm q_14 = NULL;
                  ATerm r_14 = NULL;
                  t = not_null(m_14);
                  {
                    t = pair_0(t);
                    {
                      r_14 = t;
                      if(((q_14 != NULL) && (q_14 != r_14)))
                        _fail(r_14);
                      else
                        q_14 = r_14;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_14)), (ATerm) ATmakeAppl(sym__2, not_null(j_14), not_null(l_14)));
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
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm p_61 (ATerm), ATerm q_61 (ATerm))
{
  ATerm b_15 = NULL,c_15 = NULL,d_15 = NULL;
  b_15 = t;
  a_15 :
  if(match_cons(b_15, sym_iter_star_sep_2))
    {
      c_15 = ATgetArgument(b_15, 0);
      d_15 = ATgetArgument(b_15, 1);
      {
        ATerm h_15 = NULL,j_15 = NULL;
        ATerm i_15 = NULL;
        t = SSLgetAnnotations(not_null(b_15));
        {
          i_15 = t;
          if(((h_15 != NULL) && (h_15 != i_15)))
            _fail(i_15);
          else
            h_15 = i_15;
        }
        {
          t = not_null(c_15);
          {
            ATerm l_15 = NULL;
            t = p_61(t);
            {
              j_15 = t;
              {
                t = not_null(d_15);
                {
                  ATerm n_15 = NULL;
                  t = q_61(t);
                  {
                    l_15 = t;
                    {
                      ATerm o_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(j_15), not_null(l_15)), not_null(h_15));
                      {
                        o_15 = t;
                        if(((n_15 != NULL) && (n_15 != o_15)))
                          _fail(o_15);
                        else
                          n_15 = o_15;
                      }
                      t = not_null(n_15);
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
ATerm iter_sep_2 (ATerm t, ATerm n_61 (ATerm), ATerm o_61 (ATerm))
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL;
  a_16 = t;
  z_15 :
  if(match_cons(a_16, sym_iter_sep_2))
    {
      b_16 = ATgetArgument(a_16, 0);
      c_16 = ATgetArgument(a_16, 1);
      {
        ATerm g_16 = NULL,i_16 = NULL;
        ATerm h_16 = NULL;
        t = SSLgetAnnotations(not_null(a_16));
        {
          h_16 = t;
          if(((g_16 != NULL) && (g_16 != h_16)))
            _fail(h_16);
          else
            g_16 = h_16;
        }
        {
          t = not_null(b_16);
          {
            ATerm k_16 = NULL;
            t = n_61(t);
            {
              i_16 = t;
              {
                t = not_null(c_16);
                {
                  ATerm m_16 = NULL;
                  t = o_61(t);
                  {
                    k_16 = t;
                    {
                      ATerm n_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(i_16), not_null(k_16)), not_null(g_16));
                      {
                        n_16 = t;
                        if(((m_16 != NULL) && (m_16 != n_16)))
                          _fail(n_16);
                        else
                          m_16 = n_16;
                      }
                      t = not_null(m_16);
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
ATerm make_0 (ATerm t)
{
  ATerm b_17 = NULL,c_17 = NULL,d_17 = NULL,e_17 = NULL,f_17 = NULL;
  ATerm v_7 = t;
  int w_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
      t = reverse_0(t);
      {
        ATerm u_0 (ATerm t)
        {
          ATerm w_0 (ATerm t)
          {
            ATerm x_7 = t;
            int z_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                LocalPopChoice(z_7);
              }
            else
              {
                t = x_7;
                {
                  ATerm a_8 = t;
                  int b_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
                      LocalPopChoice(b_8);
                    }
                  else
                    {
                      t = a_8;
                      {
                        ATerm c_8 = t;
                        int d_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            LocalPopChoice(d_8);
                          }
                        else
                          {
                            t = c_8;
                            t = iter_star_sep_2(t, _id, _id);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2(t, _id, w_0);
          t = Make_0(t);
          return(t);
        }
        ATerm v_0 (ATerm t)
        {
          ATerm x_0 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, x_0);
          return(t);
        }
        t = Cons_2(t, u_0, v_0);
        {
          g_17 = t;
          v_16 :
          if(((ATgetType(g_17) == AT_LIST) && !(ATisEmpty(g_17))))
            {
              h_17 = ATgetFirst((ATermList) g_17);
              i_17 = (ATerm) ATgetNext((ATermList) g_17);
              {
                ATerm j_17 = NULL;
                if(((c_17 != NULL) && (c_17 != h_17)))
                  _fail(h_17);
                else
                  c_17 = h_17;
                {
                  if(((b_17 != NULL) && (b_17 != i_17)))
                    _fail(i_17);
                  else
                    b_17 = i_17;
                  {
                    ATerm l_8 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = l_8;
                      }
                    {
                      ATerm k_17 = NULL;
                      t = not_null(b_17);
                      {
                        t = reverse_0(t);
                        {
                          k_17 = t;
                          if(((j_17 != NULL) && (j_17 != k_17)))
                            _fail(k_17);
                          else
                            j_17 = k_17;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_17)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(j_17))));
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
      LocalPopChoice(w_7);
    }
  else
    {
      t = v_7;
      {
        ATerm m_8 = t;
        int n_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_17 = NULL;
            t = reverse_0(t);
            {
              ATerm y_0 (ATerm t)
              {
                ATerm l_17 = NULL;
                t = Make_0(t);
                {
                  l_17 = t;
                  if(((f_17 != NULL) && (f_17 != l_17)))
                    _fail(l_17);
                  else
                    f_17 = l_17;
                }
                return(t);
              }
              ATerm z_0 (ATerm t)
              {
                ATerm m_17 = NULL;
                ATerm q_8 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = q_8;
                  }
                {
                  t = reverse_0(t);
                  {
                    m_17 = t;
                    if(((d_17 != NULL) && (d_17 != m_17)))
                      _fail(m_17);
                    else
                      d_17 = m_17;
                  }
                }
                return(t);
              }
              t = Cons_2(t, y_0, z_0);
              {
                t = not_null(d_17);
                {
                  t = pair_0(t);
                  {
                    ATerm a_1 (ATerm t)
                    {
                      ATerm n_17 = NULL,o_17 = NULL;
                      ATerm b_1 (ATerm t)
                      {
                        ATerm p_17 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            p_17 = t;
                            if(((n_17 != NULL) && (n_17 != p_17)))
                              _fail(p_17);
                            else
                              n_17 = p_17;
                          }
                        }
                        return(t);
                      }
                      ATerm c_1 (ATerm t)
                      {
                        ATerm q_17 = NULL;
                        ATerm d_1 (ATerm t)
                        {
                          ATerm r_8 = t;
                          int s_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              LocalPopChoice(s_8);
                            }
                          else
                            {
                              t = r_8;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, d_1);
                        {
                          t = Make_0(t);
                          {
                            q_17 = t;
                            if(((o_17 != NULL) && (o_17 != q_17)))
                              _fail(q_17);
                            else
                              o_17 = q_17;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, b_1, c_1);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_w_8), (ATerm) ATinsert(ATinsert(ATempty, not_null(o_17)), not_null(n_17)));
                      return(t);
                    }
                    t = map_1(t, a_1);
                    {
                      r_17 = t;
                      {
                        if(((e_17 != NULL) && (e_17 != r_17)))
                          _fail(r_17);
                        else
                          e_17 = r_17;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(f_17)), not_null(e_17)));
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(n_8);
          }
        else
          {
            t = m_8;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm x_8 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = x_8;
    }
  return(t);
}
ATerm number_node_1 (ATerm t, ATerm l_70 (ATerm))
{
  ATerm e_1 (ATerm t)
  {
    t = term_v_6;
    return(t);
  }
  t = split_2(t, e_1, _id);
  {
    ATerm w_18 (ATerm t)
    {
      ATerm g_18 = NULL,h_18 = NULL,j_18 = NULL;
      ATerm y_8 = t;
      int z_8 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          LocalPopChoice(z_8);
        }
      else
        {
          t = y_8;
          {
            ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL,o_18 = NULL,p_18 = NULL;
            l_18 = t;
            e_18 :
            if(match_cons(l_18, sym__2))
              {
                m_18 = ATgetArgument(l_18, 0);
                n_18 = ATgetArgument(l_18, 1);
                f_18 :
                if(((ATgetType(n_18) == AT_LIST) && !(ATisEmpty(n_18))))
                  {
                    o_18 = ATgetFirst((ATermList) n_18);
                    p_18 = (ATerm) ATgetNext((ATermList) n_18);
                    {
                      ATerm a_9 = t;
                      int b_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm q_18 = NULL;
                          if(((g_18 != NULL) && (g_18 != m_18)))
                            _fail(m_18);
                          else
                            g_18 = m_18;
                          {
                            if(((h_18 != NULL) && (h_18 != o_18)))
                              _fail(o_18);
                            else
                              h_18 = o_18;
                            {
                              if(((j_18 != NULL) && (j_18 != p_18)))
                                _fail(p_18);
                              else
                                j_18 = p_18;
                              {
                                t = not_null(h_18);
                                {
                                  t = l_70(t);
                                  {
                                    ATerm r_18 = NULL,t_18 = NULL;
                                    ATerm s_18 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_18), term_v_6);
                                    {
                                      t = add_0(t);
                                      {
                                        s_18 = t;
                                        if(((r_18 != NULL) && (r_18 != s_18)))
                                          _fail(s_18);
                                        else
                                          r_18 = s_18;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(r_18), not_null(j_18));
                                      {
                                        t = w_18(t);
                                        {
                                          t_18 = t;
                                          if(((q_18 != NULL) && (q_18 != t_18)))
                                            _fail(t_18);
                                          else
                                            q_18 = t_18;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(q_18)), (ATerm) ATmakeAppl(sym__2, not_null(g_18), not_null(h_18)));
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(b_9);
                        }
                      else
                        {
                          t = a_9;
                          {
                            ATerm u_18 = NULL;
                            if(((g_18 != NULL) && (g_18 != m_18)))
                              _fail(m_18);
                            else
                              g_18 = m_18;
                            {
                              if(((h_18 != NULL) && (h_18 != o_18)))
                                _fail(o_18);
                              else
                                h_18 = o_18;
                              {
                                if(((j_18 != NULL) && (j_18 != p_18)))
                                  _fail(p_18);
                                else
                                  j_18 = p_18;
                                {
                                  ATerm v_18 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(g_18), not_null(j_18));
                                  {
                                    t = w_18(t);
                                    {
                                      v_18 = t;
                                      if(((u_18 != NULL) && (u_18 != v_18)))
                                        _fail(v_18);
                                      else
                                        u_18 = v_18;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(u_18)), not_null(h_18));
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
            else
              {
                _fail(t);
              }
          }
        }
      return(t);
    }
    t = w_18(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm f_1 (ATerm t)
  {
    ATerm g_1 (ATerm t)
    {
      ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
      e_19 = t;
      d_19 :
      if(match_cons(e_19, sym_label_2))
        {
          f_19 = ATgetArgument(e_19, 0);
          g_19 = ATgetArgument(e_19, 1);
          t = not_null(g_19);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, g_1);
    return(t);
  }
  t = map_1(t, f_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_node_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm h_70 (ATerm))
{
  ATerm o_19 = NULL,q_19 = NULL,u_19 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm c_9;
    c_9 = t;
    {
      ATerm p_19 = NULL;
      t = make_0(t);
      {
        p_19 = t;
        if(((o_19 != NULL) && (o_19 != p_19)))
          _fail(p_19);
        else
          o_19 = p_19;
      }
    }
    t = c_9;
    {
      ATerm d_9;
      d_9 = t;
      {
        ATerm t_19 = NULL;
        ATerm h_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            ATerm r_19 = NULL;
            ATerm s_19 = NULL;
            t = term_b_6;
            {
              t = h_70(t);
              {
                s_19 = t;
                if(((r_19 != NULL) && (r_19 != s_19)))
                  _fail(s_19);
                else
                  r_19 = s_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_19), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, i_1);
          return(t);
        }
        t = map_1(t, h_1);
        {
          t = concat_0(t);
          {
            t_19 = t;
            if(((q_19 != NULL) && (q_19 != t_19)))
              _fail(t_19);
            else
              q_19 = t_19;
          }
        }
      }
      t = d_9;
      {
        ATerm v_19 = NULL;
        t = term_b_6;
        {
          t = h_70(t);
          {
            v_19 = t;
            if(((u_19 != NULL) && (u_19 != v_19)))
              _fail(v_19);
            else
              u_19 = v_19;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(q_19)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(u_19)), not_null(o_19)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL;
  ATerm e_9 = t;
  int f_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_20 = NULL,m_20 = NULL,n_20 = NULL,o_20 = NULL,p_20 = NULL;
      l_20 = t;
      f_20 :
      if(match_cons(l_20, sym_prod_3))
        {
          m_20 = ATgetArgument(l_20, 0);
          n_20 = ATgetArgument(l_20, 1);
          o_20 = ATgetArgument(l_20, 2);
          {
            if(((i_20 != NULL) && (i_20 != m_20)))
              _fail(m_20);
            else
              i_20 = m_20;
            {
              if(((j_20 != NULL) && (j_20 != n_20)))
                _fail(n_20);
              else
                j_20 = n_20;
              {
                if(((k_20 != NULL) && (k_20 != o_20)))
                  _fail(o_20);
                else
                  k_20 = o_20;
                {
                  t = not_null(k_20);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm q_20 = NULL,r_20 = NULL;
                      q_20 = t;
                      d_20 :
                      if(match_cons(q_20, sym_cons_1))
                        {
                          r_20 = ATgetArgument(q_20, 0);
                          if(((g_20 != NULL) && (g_20 != r_20)))
                            _fail(r_20);
                          else
                            g_20 = r_20;
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, j_1);
                  }
                  {
                    t = not_null(i_20);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = not_null(g_20);
                        return(t);
                      }
                      t = symbols2pp_entries_1(t, k_1);
                    }
                  }
                }
              }
            }
          }
        }
      else
        {
          if(match_cons(l_20, sym_prod_fun_4))
            {
              m_20 = ATgetArgument(l_20, 0);
              n_20 = ATgetArgument(l_20, 1);
              o_20 = ATgetArgument(l_20, 2);
              p_20 = ATgetArgument(l_20, 3);
              {
                ATerm s_20 = NULL;
                if(((h_20 != NULL) && (h_20 != m_20)))
                  _fail(m_20);
                else
                  h_20 = m_20;
                {
                  if(((i_20 != NULL) && (i_20 != n_20)))
                    _fail(n_20);
                  else
                    i_20 = n_20;
                  {
                    if(((j_20 != NULL) && (j_20 != o_20)))
                      _fail(o_20);
                    else
                      j_20 = o_20;
                    {
                      if(((k_20 != NULL) && (k_20 != p_20)))
                        _fail(p_20);
                      else
                        k_20 = p_20;
                      {
                        ATerm t_20 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_9)), not_null(i_20)), (ATerm) ATinsert(ATinsert(ATempty, term_i_9), (ATerm) ATmakeAppl(sym_lit_1, not_null(h_20))));
                        {
                          t = concat_0(t);
                          {
                            t_20 = t;
                            if(((s_20 != NULL) && (s_20 != t_20)))
                              _fail(t_20);
                            else
                              s_20 = t_20;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(s_20), not_null(j_20), not_null(k_20));
                          t = generate_pp_entries_0(t);
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
      LocalPopChoice(f_9);
    }
  else
    {
      t = e_9;
      {
        ATerm l_1 (ATerm t)
        {
          ATerm l_9 = t;
          if((PushChoice() == 0))
            {
              ATerm m_1 (ATerm t)
              {
                t = term_m_9;
                return(t);
              }
              t = has_option_1(t, m_1);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = l_9;
            }
          {
            ATerm n_1 (ATerm t)
            {
              t = term_p_10;
              return(t);
            }
            t = debug_1(t, n_1);
          }
          return(t);
        }
        t = try_1(t, l_1);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm m_79 (ATerm))
{
  ATerm y_20 (ATerm t)
  {
    ATerm r_10 = t;
    int s_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = m_79(t);
        LocalPopChoice(s_10);
      }
    else
      {
        t = r_10;
        t = Cons_2(t, _id, y_20);
      }
    return(t);
  }
  t = y_20(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm b_21 = NULL,c_21 = NULL,d_21 = NULL;
  b_21 = t;
  a_21 :
  if(((ATgetType(b_21) == AT_LIST) && !(ATisEmpty(b_21))))
    {
      c_21 = ATgetFirst((ATermList) b_21);
      d_21 = (ATerm) ATgetNext((ATermList) b_21);
      t = not_null(d_21);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm j_21 = NULL,k_21 = NULL,l_21 = NULL;
  j_21 = t;
  h_21 :
  if(((ATgetType(j_21) == AT_LIST) && !(ATisEmpty(j_21))))
    {
      k_21 = ATgetFirst((ATermList) j_21);
      l_21 = (ATerm) ATgetNext((ATermList) j_21);
      i_21 :
      if(((ATgetType(l_21) == AT_LIST) && ATisEmpty(l_21)))
        {
          t = not_null(k_21);
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
  ATerm t_10 = t;
  int u_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(u_10);
    }
  else
    {
      t = t_10;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm r_21 = NULL,s_21 = NULL,t_21 = NULL;
  r_21 = t;
  q_21 :
  if(((ATgetType(r_21) == AT_LIST) && !(ATisEmpty(r_21))))
    {
      s_21 = ATgetFirst((ATermList) r_21);
      t_21 = (ATerm) ATgetNext((ATermList) r_21);
      t = not_null(s_21);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm b_88 (ATerm))
{
  ATerm v_10;
  v_10 = t;
  {
    t = Hd_0(t);
    t = b_88(t);
  }
  t = v_10;
  {
    ATerm w_10;
    w_10 = t;
    {
      t = last_0(t);
      t = b_88(t);
    }
    t = w_10;
    {
      t = Tl_0(t);
      t = init_0(t);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm x_21 = NULL;
    x_21 = t;
    w_21 :
    if(!(match_int(x_21, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, o_1);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm m_88 (ATerm))
{
  t = explode_string_0(t);
  {
    t = m_88(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, un_double_quote_chars_0);
  return(t);
}
ATerm sort_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm d_22 = NULL,e_22 = NULL;
  d_22 = t;
  c_22 :
  if(match_cons(d_22, sym_sort_1))
    {
      e_22 = ATgetArgument(d_22, 0);
      {
        ATerm h_22 = NULL,j_22 = NULL;
        ATerm i_22 = NULL;
        t = SSLgetAnnotations(not_null(d_22));
        {
          i_22 = t;
          if(((h_22 != NULL) && (h_22 != i_22)))
            _fail(i_22);
          else
            h_22 = i_22;
        }
        {
          t = not_null(e_22);
          {
            ATerm l_22 = NULL;
            t = w_61(t);
            {
              j_22 = t;
              {
                ATerm m_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(j_22)), not_null(h_22));
                {
                  m_22 = t;
                  if(((l_22 != NULL) && (l_22 != m_22)))
                    _fail(m_22);
                  else
                    l_22 = m_22;
                }
                t = not_null(l_22);
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
ATerm lit_1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm w_22 = NULL,x_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym_lit_1))
    {
      x_22 = ATgetArgument(w_22, 0);
      {
        ATerm a_23 = NULL,c_23 = NULL;
        ATerm b_23 = NULL;
        t = SSLgetAnnotations(not_null(w_22));
        {
          b_23 = t;
          if(((a_23 != NULL) && (a_23 != b_23)))
            _fail(b_23);
          else
            a_23 = b_23;
        }
        {
          t = not_null(x_22);
          {
            ATerm e_23 = NULL;
            t = m_61(t);
            {
              c_23 = t;
              {
                ATerm f_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(c_23)), not_null(a_23));
                {
                  f_23 = t;
                  if(((e_23 != NULL) && (e_23 != f_23)))
                    _fail(f_23);
                  else
                    e_23 = f_23;
                }
                t = not_null(e_23);
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
ATerm cons_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm t_23 = NULL,u_23 = NULL;
  t_23 = t;
  s_23 :
  if(match_cons(t_23, sym_cons_1))
    {
      u_23 = ATgetArgument(t_23, 0);
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_23 = NULL,z_23 = NULL;
            ATerm y_23 = NULL;
            t = SSLgetAnnotations(not_null(t_23));
            {
              y_23 = t;
              if(((x_23 != NULL) && (x_23 != y_23)))
                _fail(y_23);
              else
                x_23 = y_23;
            }
            {
              t = not_null(u_23);
              {
                ATerm e_26 = NULL;
                t = l_0(t);
                {
                  z_23 = t;
                  {
                    ATerm f_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(z_23)), not_null(x_23));
                    {
                      f_26 = t;
                      if(((e_26 != NULL) && (e_26 != f_26)))
                        _fail(f_26);
                      else
                        e_26 = f_26;
                    }
                    t = not_null(e_26);
                  }
                }
              }
            }
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            {
              ATerm i_26 = NULL,k_26 = NULL;
              ATerm j_26 = NULL;
              t = SSLgetAnnotations(not_null(t_23));
              {
                j_26 = t;
                if(((i_26 != NULL) && (i_26 != j_26)))
                  _fail(j_26);
                else
                  i_26 = j_26;
              }
              {
                t = not_null(u_23);
                {
                  ATerm m_26 = NULL;
                  t = l_0(t);
                  {
                    k_26 = t;
                    {
                      ATerm n_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(k_26)), not_null(i_26));
                      {
                        n_26 = t;
                        if(((m_26 != NULL) && (m_26 != n_26)))
                          _fail(n_26);
                        else
                          m_26 = n_26;
                      }
                      t = not_null(m_26);
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
ATerm foldr_3 (ATerm t, ATerm c_85 (ATerm), ATerm d_85 (ATerm), ATerm e_85 (ATerm))
{
  ATerm z_10 = t;
  int d_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = c_85(t);
      LocalPopChoice(d_11);
    }
  else
    {
      t = z_10;
      {
        ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
        a_27 = t;
        z_26 :
        if(((ATgetType(a_27) == AT_LIST) && !(ATisEmpty(a_27))))
          {
            b_27 = ATgetFirst((ATermList) a_27);
            c_27 = (ATerm) ATgetNext((ATermList) a_27);
            {
              ATerm f_27 = NULL,j_27 = NULL;
              ATerm i_11;
              i_11 = t;
              {
                ATerm i_27 = NULL;
                t = not_null(b_27);
                {
                  t = e_85(t);
                  {
                    i_27 = t;
                    if(((f_27 != NULL) && (f_27 != i_27)))
                      _fail(i_27);
                    else
                      f_27 = i_27;
                  }
                }
              }
              t = i_11;
              {
                ATerm k_27 = NULL;
                t = not_null(c_27);
                {
                  t = foldr_3(t, c_85, d_85, e_85);
                  {
                    k_27 = t;
                    if(((j_27 != NULL) && (j_27 != k_27)))
                      _fail(k_27);
                    else
                      j_27 = k_27;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(f_27), not_null(j_27));
                  t = d_85(t);
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
ATerm crush_3 (ATerm t, ATerm a_84 (ATerm), ATerm b_84 (ATerm), ATerm c_84 (ATerm))
{
  ATerm s_27 = NULL;
  ATerm u_27 = NULL;
  s_27 = t;
  {
    ATerm v_27 = NULL;
    ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
    t = not_null(s_27);
    {
      v_27 = t;
      {
        t = SSL_explode_term(not_null(v_27));
        {
          x_27 = t;
          r_27 :
          if(match_cons(x_27, sym__2))
            {
              y_27 = ATgetArgument(x_27, 0);
              z_27 = ATgetArgument(x_27, 1);
              if(((u_27 != NULL) && (u_27 != z_27)))
                _fail(z_27);
              else
                u_27 = z_27;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_27);
      t = foldr_3(t, a_84, b_84, c_84);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm l_98 (ATerm))
{
  ATerm g_28 (ATerm t)
  {
    ATerm m_11 = t;
    int p_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm e_28 = NULL;
        t = l_98(t);
        {
          ATerm f_28 = NULL;
          f_28 = t;
          if(((e_28 != NULL) && (e_28 != f_28)))
            _fail(f_28);
          else
            e_28 = f_28;
          t = (ATerm) ATinsert(ATempty, not_null(e_28));
        }
        LocalPopChoice(p_11);
      }
    else
      {
        t = m_11;
        {
          ATerm p_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, p_1, conc_0, g_28);
        }
      }
    return(t);
  }
  t = g_28(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm v_28 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm m_28 = NULL,n_28 = NULL;
    m_28 = t;
    j_28 :
    if(match_cons(m_28, sym_context_free_syntax_1))
      {
        n_28 = ATgetArgument(m_28, 0);
        t = not_null(n_28);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_p__1(t, q_1);
  {
    t = concat_0(t);
    {
      ATerm r_1 (ATerm t)
      {
        ATerm s_1 (ATerm t)
        {
          ATerm r_11 = t;
          int t_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = cons_1(t, un_double_quote_0);
              LocalPopChoice(t_11);
            }
          else
            {
              t = r_11;
              {
                ATerm z_11 = t;
                int a_12 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = lit_1(t, un_double_quote_0);
                    LocalPopChoice(a_12);
                  }
                else
                  {
                    t = z_11;
                    t = sort_1(t, un_double_quote_0);
                  }
              }
            }
          return(t);
        }
        t = try_1(t, s_1);
        return(t);
      }
      t = topdown_1(t, r_1);
      {
        t = map_1(t, generate_pp_entries_0);
        {
          ATerm t_1 (ATerm t)
          {
            ATerm b_12 = t;
            if((PushChoice() == 0))
              {
                ATerm u_28 = NULL;
                u_28 = t;
                k_28 :
                if(((ATgetType(u_28) == AT_LIST) && ATisEmpty(u_28)))
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
                t = b_12;
              }
            return(t);
          }
          t = filter_1(t, t_1);
          {
            t = concat_0(t);
            {
              v_28 = t;
              {
                t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(v_28));
                {
                  ATerm u_1 (ATerm t)
                  {
                    ATerm v_1 (ATerm t)
                    {
                      ATerm c_12 = t;
                      int d_12 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = Arg_1(t, int_to_string_0);
                          LocalPopChoice(d_12);
                        }
                      else
                        {
                          t = c_12;
                          {
                            ATerm e_12 = t;
                            int f_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = selector_2(t, int_to_string_0, _id);
                                LocalPopChoice(f_12);
                              }
                            else
                              {
                                t = e_12;
                                t = S_1(t, double_quote_0);
                              }
                          }
                        }
                      return(t);
                    }
                    t = try_1(t, v_1);
                    return(t);
                  }
                  t = topdown_1(t, u_1);
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
ATerm _2 (ATerm t, ATerm t_57 (ATerm), ATerm u_57 (ATerm))
{
  ATerm f_29 = NULL,g_29 = NULL,n_29 = NULL;
  f_29 = t;
  e_29 :
  if(match_cons(f_29, sym__2))
    {
      g_29 = ATgetArgument(f_29, 0);
      n_29 = ATgetArgument(f_29, 1);
      {
        ATerm r_29 = NULL,t_29 = NULL;
        ATerm s_29 = NULL;
        t = SSLgetAnnotations(not_null(f_29));
        {
          s_29 = t;
          if(((r_29 != NULL) && (r_29 != s_29)))
            _fail(s_29);
          else
            r_29 = s_29;
        }
        {
          t = not_null(g_29);
          {
            ATerm v_29 = NULL;
            t = t_57(t);
            {
              t_29 = t;
              {
                t = not_null(n_29);
                {
                  ATerm x_29 = NULL;
                  t = u_57(t);
                  {
                    v_29 = t;
                    {
                      ATerm y_29 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_29), not_null(v_29)), not_null(r_29));
                      {
                        y_29 = t;
                        if(((x_29 != NULL) && (x_29 != y_29)))
                          _fail(y_29);
                        else
                          x_29 = y_29;
                      }
                      t = not_null(x_29);
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
ATerm error_0 (ATerm t)
{
  ATerm g_12;
  g_12 = t;
  {
    ATerm f_30 = NULL;
    ATerm g_30 = NULL;
    g_30 = t;
    if(((f_30 != NULL) && (f_30 != g_30)))
      _fail(g_30);
    else
      f_30 = g_30;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_12, not_null(f_30));
      t = printnl_0(t);
    }
  }
  t = g_12;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm i_12;
  i_12 = t;
  {
    t = error_0(t);
    {
      t = term_v_6;
      t = exit_0(t);
    }
  }
  t = i_12;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm i_30 (ATerm t)
  {
    ATerm j_12 = t;
    int o_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = y_73(t);
        LocalPopChoice(o_12);
      }
    else
      {
        t = j_12;
        t = _one(t, i_30);
      }
    return(t);
  }
  t = i_30(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm m_30 = NULL,n_30 = NULL,o_30 = NULL;
  m_30 = t;
  l_30 :
  if(match_cons(m_30, sym__2))
    {
      n_30 = ATgetArgument(m_30, 0);
      o_30 = ATgetArgument(m_30, 1);
      {
        ATerm p_12;
        p_12 = t;
        {
          t = not_null(o_30);
          {
            ATerm w_1 (ATerm t)
            {
              ATerm r_30 = NULL;
              r_30 = t;
              if(((n_30 != NULL) && (n_30 != r_30)))
                _fail(r_30);
              else
                n_30 = r_30;
              return(t);
            }
            t = oncetd_1(t, w_1);
          }
        }
        t = p_12;
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
  t = term_s_12;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm w_30 = NULL;
  ATerm y_30 = NULL;
  w_30 = t;
  {
    ATerm z_30 = NULL;
    t = get_options_0(t);
    {
      z_30 = t;
      {
        if(((y_30 != NULL) && (y_30 != z_30)))
          _fail(z_30);
        else
          y_30 = z_30;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_30), not_null(y_30));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_b_6;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm p_90 (ATerm))
{
  ATerm t_12;
  t_12 = t;
  {
    t = term_b_6;
    {
      t = p_90(t);
      t = check_option_0(t);
    }
  }
  t = t_12;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm u_12 = t;
  int v_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        t = term_z_12;
        return(t);
      }
      t = has_option_1(t, x_1);
      {
        t = (ATerm) ATinsert(ATempty, term_a_13);
        t = fatal_error_0(t);
      }
      LocalPopChoice(v_12);
    }
  else
    {
      t = u_12;
      {
        t = (ATerm) ATinsert(ATempty, term_e_13);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm w_98 (ATerm))
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL;
  k_31 = t;
  i_31 :
  if(match_cons(k_31, sym__2))
    {
      l_31 = ATgetArgument(k_31, 0);
      m_31 = ATgetArgument(k_31, 1);
      j_31 :
      if(match_string(l_31, "in-type"))
        {
          ATerm o_31 = NULL,p_31 = NULL;
          ATerm h_13;
          h_13 = t;
          {
            ATerm q_31 = NULL;
            ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL;
            t = not_null(m_31);
            {
              q_31 = t;
              {
                t = SSL_explode_term(not_null(q_31));
                {
                  s_31 = t;
                  f_31 :
                  if(match_cons(s_31, sym__2))
                    {
                      t_31 = ATgetArgument(s_31, 0);
                      u_31 = ATgetArgument(s_31, 1);
                      g_31 :
                      if(((ATgetType(u_31) == AT_LIST) && !(ATisEmpty(u_31))))
                        {
                          v_31 = ATgetFirst((ATermList) u_31);
                          w_31 = (ATerm) ATgetNext((ATermList) u_31);
                          h_31 :
                          if(((ATgetType(w_31) == AT_LIST) && ATisEmpty(w_31)))
                            {
                              {
                                if(((p_31 != NULL) && (p_31 != t_31)))
                                  _fail(t_31);
                                else
                                  p_31 = t_31;
                                if(((o_31 != NULL) && (o_31 != v_31)))
                                  _fail(v_31);
                                else
                                  o_31 = v_31;
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
          t = h_13;
          {
            t = not_null(p_31);
            {
              ATerm i_13 = t;
              int j_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_98(t);
                  LocalPopChoice(j_13);
                }
              else
                {
                  t = i_13;
                  t = type_failure_0(t);
                }
            }
            t = not_null(o_31);
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
ATerm mkterm_0 (ATerm t)
{
  ATerm c_32 = NULL,d_32 = NULL,e_32 = NULL;
  c_32 = t;
  b_32 :
  if(match_cons(c_32, sym__2))
    {
      d_32 = ATgetArgument(c_32, 0);
      e_32 = ATgetArgument(c_32, 1);
      t = SSL_mkterm(not_null(d_32), not_null(e_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm x_98 (ATerm))
{
  ATerm n_32 = NULL,o_32 = NULL,p_32 = NULL;
  n_32 = t;
  l_32 :
  if(match_cons(n_32, sym__2))
    {
      o_32 = ATgetArgument(n_32, 0);
      p_32 = ATgetArgument(n_32, 1);
      m_32 :
      if(match_string(o_32, "out-type"))
        {
          ATerm r_32 = NULL;
          ATerm s_32 = NULL,u_32 = NULL;
          ATerm t_32 = NULL;
          t = term_b_6;
          {
            t = x_98(t);
            {
              t_32 = t;
              if(((s_32 != NULL) && (s_32 != t_32)))
                _fail(t_32);
              else
                s_32 = t_32;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_32), (ATerm) ATinsert(ATempty, not_null(p_32)));
            {
              t = mkterm_0(t);
              {
                u_32 = t;
                if(((r_32 != NULL) && (r_32 != u_32)))
                  _fail(u_32);
                else
                  r_32 = u_32;
              }
            }
          }
          t = not_null(r_32);
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
ATerm InOutId_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm k_13 = t;
  int l_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_1 (ATerm t)
      {
        ATerm a_33 = NULL;
        a_33 = t;
        y_32 :
        if(!(match_string(a_33, "out-type")))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, y_1, _id);
      t = OutId_1(t, k_0);
      LocalPopChoice(l_13);
    }
  else
    {
      t = k_13;
      {
        ATerm z_1 (ATerm t)
        {
          ATerm b_33 = NULL;
          b_33 = t;
          z_32 :
          if(!(match_string(b_33, "in-type")))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, z_1, _id);
        t = InId_1(t, j_0);
      }
    }
  return(t);
}
ATerm termid_set_p__1 (ATerm t, ATerm e_99 (ATerm))
{
  ATerm f_33 = NULL,g_33 = NULL,h_33 = NULL;
  f_33 = t;
  e_33 :
  if(match_cons(f_33, sym__2))
    {
      g_33 = ATgetArgument(f_33, 0);
      h_33 = ATgetArgument(f_33, 1);
      {
        ATerm k_33 = NULL;
        ATerm l_33 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_m_13, not_null(h_33));
        {
          t = e_99(t);
          {
            l_33 = t;
            if(((k_33 != NULL) && (k_33 != l_33)))
              _fail(l_33);
            else
              k_33 = l_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_33), not_null(k_33));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_70 (ATerm))
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_70(t);
      LocalPopChoice(o_13);
    }
  else
    {
      t = n_13;
      {
      }
    }
  return(t);
}
ATerm termid_check_p__1 (ATerm t, ATerm c_99 (ATerm))
{
  ATerm r_33 = NULL,s_33 = NULL,t_33 = NULL;
  r_33 = t;
  q_33 :
  if(match_cons(r_33, sym__2))
    {
      s_33 = ATgetArgument(r_33, 0);
      t_33 = ATgetArgument(r_33, 1);
      {
        ATerm w_33 = NULL;
        ATerm z_33 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_s_13, not_null(t_33));
        {
          t = c_99(t);
          {
            z_33 = t;
            if(((w_33 != NULL) && (w_33 != z_33)))
              _fail(z_33);
            else
              w_33 = z_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_33), not_null(w_33));
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
  ATerm e_34 = NULL;
  ATerm t_13;
  t_13 = t;
  {
    ATerm a_2 (ATerm t)
    {
      ATerm f_34 = NULL,g_34 = NULL;
      f_34 = t;
      d_34 :
      if(match_cons(f_34, sym_Program_1))
        {
          g_34 = ATgetArgument(f_34, 0);
          if(((e_34 != NULL) && (e_34 != g_34)))
            _fail(g_34);
          else
            e_34 = g_34;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, a_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_a_14), not_null(e_34)), term_x_13));
      {
        t = printnl_0(t);
        {
          t = term_v_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = t_13;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_34 = NULL,l_34 = NULL,m_34 = NULL;
  k_34 = t;
  j_34 :
  if(match_cons(k_34, sym__2))
    {
      l_34 = ATgetArgument(k_34, 0);
      m_34 = ATgetArgument(k_34, 1);
      {
        ATerm b_14;
        b_14 = t;
        t = SSL_printnl(not_null(l_34), not_null(m_34));
        t = b_14;
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
  ATerm r_34 = NULL;
  r_34 = t;
  t = SSL_implode_string(not_null(r_34));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm c_14 = t;
  int d_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_14);
    }
  else
    {
      t = c_14;
      {
        ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
        a_35 = t;
        z_34 :
        if(((ATgetType(a_35) == AT_LIST) && !(ATisEmpty(a_35))))
          {
            b_35 = ATgetFirst((ATermList) a_35);
            c_35 = (ATerm) ATgetNext((ATermList) a_35);
            {
              t = not_null(b_35);
              {
                ATerm b_2 (ATerm t)
                {
                  t = not_null(c_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, b_2);
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
  ATerm m_35 = NULL;
  ATerm o_35 = NULL;
  m_35 = t;
  {
    ATerm p_35 = NULL;
    ATerm r_35 = NULL,s_35 = NULL,t_35 = NULL;
    t = not_null(m_35);
    {
      p_35 = t;
      {
        t = SSL_explode_term(not_null(p_35));
        {
          r_35 = t;
          k_35 :
          if(match_cons(r_35, sym__2))
            {
              s_35 = ATgetArgument(r_35, 0);
              t_35 = ATgetArgument(r_35, 1);
              l_35 :
              if(match_string(s_35, ""))
                {
                  if(((o_35 != NULL) && (o_35 != t_35)))
                    _fail(t_35);
                  else
                    o_35 = t_35;
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
      t = not_null(o_35);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm b_79 (ATerm))
{
  ATerm x_35 (ATerm t)
  {
    ATerm e_14 = t;
    int f_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, x_35);
        LocalPopChoice(f_14);
      }
    else
      {
        t = e_14;
        {
          t = Nil_0(t);
          t = b_79(t);
        }
      }
    return(t);
  }
  t = x_35(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  z_35 :
  if(match_cons(a_36, sym__2))
    {
      b_36 = ATgetArgument(a_36, 0);
      c_36 = ATgetArgument(a_36, 1);
      {
        t = not_null(b_36);
        {
          ATerm c_2 (ATerm t)
          {
            t = not_null(c_36);
            return(t);
          }
          t = at_end_1(t, c_2);
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
  ATerm n_14 = t;
  int o_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(o_14);
    }
  else
    {
      t = n_14;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  t = SSL_explode_string(not_null(h_36));
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
  ATerm l_36 = NULL;
  l_36 = t;
  t = SSL_is_string(not_null(l_36));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm p_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(s_14);
    }
  else
    {
      t = p_14;
      {
        ATerm t_14 = t;
        int u_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, d_2);
            LocalPopChoice(u_14);
          }
        else
          {
            t = t_14;
            {
              ATerm u_36 = NULL,v_36 = NULL,w_36 = NULL;
              u_36 = t;
              t_36 :
              if(match_cons(u_36, sym_Path_1))
                {
                  v_36 = ATgetArgument(u_36, 0);
                  t = not_null(v_36);
                }
              else
                {
                  if(match_cons(u_36, sym_Var_1))
                    {
                      v_36 = ATgetArgument(u_36, 0);
                      {
                        t = not_null(v_36);
                        {
                          ATerm v_14 = t;
                          int w_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(w_14);
                            }
                          else
                            {
                              t = v_14;
                              {
                                ATerm e_2 (ATerm t)
                                {
                                  t = term_x_14;
                                  return(t);
                                }
                                t = debug_1(t, e_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_36, sym_Prefix_2))
                        {
                          v_36 = ATgetArgument(u_36, 0);
                          w_36 = ATgetArgument(u_36, 1);
                          {
                            ATerm b_37 = NULL,d_37 = NULL;
                            ATerm y_14;
                            y_14 = t;
                            {
                              ATerm c_37 = NULL;
                              t = not_null(v_36);
                              {
                                t = eval_config_0(t);
                                {
                                  c_37 = t;
                                  if(((b_37 != NULL) && (b_37 != c_37)))
                                    _fail(c_37);
                                  else
                                    b_37 = c_37;
                                }
                              }
                            }
                            t = y_14;
                            {
                              ATerm e_37 = NULL;
                              t = not_null(w_36);
                              {
                                t = eval_config_0(t);
                                {
                                  e_37 = t;
                                  if(((d_37 != NULL) && (d_37 != e_37)))
                                    _fail(e_37);
                                  else
                                    d_37 = e_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_37), not_null(d_37));
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
  ATerm m_37 = NULL;
  m_37 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_z_14, not_null(m_37));
    {
      t = table_get_0(t);
      {
        ATerm f_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_15;
            e_15 = t;
            {
              ATerm o_37 = NULL;
              ATerm p_37 = NULL;
              p_37 = t;
              if(((o_37 != NULL) && (o_37 != p_37)))
                _fail(p_37);
              else
                o_37 = p_37;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_z_14, not_null(m_37), not_null(o_37));
                t = table_put_0(t);
              }
            }
            t = e_15;
          }
          return(t);
        }
        t = try_1(t, f_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm h_92 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm f_15;
    f_15 = t;
    {
      ATerm t_37 = NULL;
      ATerm u_37 = NULL;
      t = term_g_15;
      {
        t = get_config_0(t);
        {
          u_37 = t;
          if(((t_37 != NULL) && (t_37 != u_37)))
            _fail(u_37);
          else
            t_37 = u_37;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_37), term_k_15);
        t = geq_0(t);
      }
    }
    t = f_15;
    t = h_92(t);
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_37 = NULL,z_37 = NULL,a_38 = NULL;
  y_37 = t;
  x_37 :
  if(match_cons(y_37, sym__2))
    {
      z_37 = ATgetArgument(y_37, 0);
      a_38 = ATgetArgument(y_37, 1);
      t = SSL_WriteToTextFile(not_null(z_37), not_null(a_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym__2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      t = SSL_WriteToBinaryFile(not_null(h_38), not_null(i_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm q_38 = NULL;
  ATerm m_15;
  m_15 = t;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm p_15 = t;
      int q_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_2 (ATerm t)
          {
            ATerm r_38 = NULL,s_38 = NULL;
            r_38 = t;
            n_38 :
            if(match_cons(r_38, sym_Output_1))
              {
                s_38 = ATgetArgument(r_38, 0);
                if(((q_38 != NULL) && (q_38 != s_38)))
                  _fail(s_38);
                else
                  q_38 = s_38;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, i_2);
          LocalPopChoice(q_15);
        }
      else
        {
          t = p_15;
          {
            ATerm t_38 = NULL;
            t = term_r_15;
            {
              t_38 = t;
              if(((q_38 != NULL) && (q_38 != t_38)))
                _fail(t_38);
              else
                q_38 = t_38;
            }
          }
        }
      return(t);
    }
    t = _2(t, h_2, _id);
  }
  t = m_15;
  {
    ATerm j_2 (ATerm t)
    {
      ATerm k_2 (ATerm t)
      {
        t = not_null(q_38);
        return(t);
      }
      t = split_2(t, k_2, _id);
      return(t);
    }
    t = _2(t, _id, j_2);
    {
      ATerm s_15 = t;
      int t_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_2 (ATerm t)
          {
            ATerm m_2 (ATerm t)
            {
              ATerm u_38 = NULL;
              u_38 = t;
              p_38 :
              if(!(match_cons(u_38, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, m_2);
            return(t);
          }
          t = _2(t, l_2, WriteToBinaryFile_0);
          LocalPopChoice(t_15);
        }
      else
        {
          t = s_15;
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
ATerm apply_strategy_1 (ATerm t, ATerm o_90 (ATerm))
{
  ATerm a_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  ATerm u_15;
  u_15 = t;
  t = dtime_0(t);
  t = u_15;
  {
    t = o_90(t);
    {
      ATerm v_15;
      v_15 = t;
      {
        ATerm b_39 = NULL;
        t = dtime_0(t);
        {
          b_39 = t;
          if(((a_39 != NULL) && (a_39 != b_39)))
            _fail(b_39);
          else
            a_39 = b_39;
        }
      }
      t = v_15;
      {
        c_39 = t;
        z_38 :
        if(match_cons(c_39, sym__2))
          {
            d_39 = ATgetArgument(c_39, 0);
            e_39 = ATgetArgument(c_39, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_39)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_39))), not_null(e_39));
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
ATerm debug_1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm w_15;
  w_15 = t;
  {
    ATerm l_39 = NULL,n_39 = NULL;
    ATerm x_15;
    x_15 = t;
    {
      ATerm m_39 = NULL;
      t = k_89(t);
      {
        m_39 = t;
        if(((l_39 != NULL) && (l_39 != m_39)))
          _fail(m_39);
        else
          l_39 = m_39;
      }
    }
    t = x_15;
    {
      ATerm o_39 = NULL;
      o_39 = t;
      if(((n_39 != NULL) && (n_39 != o_39)))
        _fail(o_39);
      else
        n_39 = o_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_39)), not_null(l_39)));
        t = printnl_0(t);
      }
    }
  }
  t = w_15;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm s_39 = NULL;
  ATerm y_15 = t;
  int d_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_39 = NULL;
      t_39 = t;
      {
        if(((s_39 != NULL) && (s_39 != t_39)))
          _fail(t_39);
        else
          s_39 = t_39;
        t = SSL_ReadFromFile(not_null(s_39));
      }
      LocalPopChoice(d_16);
    }
  else
    {
      t = y_15;
      {
        ATerm n_2 (ATerm t)
        {
          t = term_e_16;
          return(t);
        }
        t = debug_1(t, n_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm p_86 (ATerm), ATerm q_86 (ATerm))
{
  ATerm x_39 = NULL,z_39 = NULL;
  ATerm f_16;
  f_16 = t;
  {
    ATerm y_39 = NULL;
    t = p_86(t);
    {
      y_39 = t;
      if(((x_39 != NULL) && (x_39 != y_39)))
        _fail(y_39);
      else
        x_39 = y_39;
    }
  }
  t = f_16;
  {
    ATerm a_40 = NULL;
    t = q_86(t);
    {
      a_40 = t;
      if(((z_39 != NULL) && (z_39 != a_40)))
        _fail(a_40);
      else
        z_39 = a_40;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_39), not_null(z_39));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_40 = NULL;
  ATerm j_16;
  j_16 = t;
  {
    ATerm l_16 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 (ATerm t)
        {
          ATerm h_40 = NULL,i_40 = NULL;
          h_40 = t;
          e_40 :
          if(match_cons(h_40, sym_Input_1))
            {
              i_40 = ATgetArgument(h_40, 0);
              if(((g_40 != NULL) && (g_40 != i_40)))
                _fail(i_40);
              else
                g_40 = i_40;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_2);
        LocalPopChoice(o_16);
      }
    else
      {
        t = l_16;
        {
          ATerm j_40 = NULL;
          t = term_p_16;
          {
            j_40 = t;
            if(((g_40 != NULL) && (g_40 != j_40)))
              _fail(j_40);
            else
              g_40 = j_40;
          }
        }
      }
  }
  t = j_16;
  {
    ATerm p_2 (ATerm t)
    {
      t = not_null(g_40);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, p_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm q_2 (ATerm t)
  {
    ATerm n_40 = NULL;
    n_40 = t;
    m_40 :
    if(!(match_string(n_40, "-v")))
      {
        if(!(match_string(n_40, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_r_16;
    t = set_config_0(t);
    t = term_s_16;
    return(t);
  }
  ATerm s_2 (ATerm t)
  {
    t = term_t_16;
    return(t);
  }
  t = Option_3(t, q_2, r_2, s_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm t_2 (ATerm t)
  {
    ATerm q_40 = NULL;
    q_40 = t;
    o_40 :
    if(!(match_string(q_40, "-k")))
      {
        if(!(match_string(q_40, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    ATerm u_16;
    u_16 = t;
    {
      ATerm r_40 = NULL;
      ATerm u_40 = NULL;
      t = string_to_int_0(t);
      {
        u_40 = t;
        if(((r_40 != NULL) && (r_40 != u_40)))
          _fail(u_40);
        else
          r_40 = u_40;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_w_16, not_null(r_40));
        t = set_config_0(t);
      }
    }
    t = u_16;
    return(t);
  }
  ATerm v_2 (ATerm t)
  {
    t = term_x_16;
    return(t);
  }
  t = ArgOption_3(t, t_2, u_2, v_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm x_40 = NULL;
  x_40 = t;
  t = SSL_string_to_int(not_null(x_40));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm y_16 = t;
  int z_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_2 (ATerm t)
      {
        ATerm f_41 = NULL;
        f_41 = t;
        a_41 :
        if(!(match_string(f_41, "-S")))
          {
            if(!(match_string(f_41, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm x_2 (ATerm t)
      {
        t = term_s_17;
        t = set_config_0(t);
        t = term_t_17;
        return(t);
      }
      ATerm y_2 (ATerm t)
      {
        t = term_u_17;
        return(t);
      }
      t = Option_3(t, w_2, x_2, y_2);
      LocalPopChoice(z_16);
    }
  else
    {
      t = y_16;
      {
        ATerm v_17 = t;
        int w_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_2 (ATerm t)
            {
              ATerm g_41 = NULL;
              g_41 = t;
              b_41 :
              if(!(match_string(g_41, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm a_3 (ATerm t)
            {
              ATerm o_41 = NULL;
              ATerm x_17;
              x_17 = t;
              {
                ATerm h_41 = NULL;
                ATerm n_41 = NULL;
                t = string_to_int_0(t);
                {
                  n_41 = t;
                  if(((h_41 != NULL) && (h_41 != n_41)))
                    _fail(n_41);
                  else
                    h_41 = n_41;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_g_15, not_null(h_41));
                  t = set_config_0(t);
                }
              }
              t = x_17;
              {
                ATerm p_41 = NULL;
                p_41 = t;
                if(((o_41 != NULL) && (o_41 != p_41)))
                  _fail(p_41);
                else
                  o_41 = p_41;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(o_41));
              }
              return(t);
            }
            ATerm b_3 (ATerm t)
            {
              t = term_y_17;
              return(t);
            }
            t = ArgOption_3(t, z_2, a_3, b_3);
            LocalPopChoice(w_17);
          }
        else
          {
            t = v_17;
            {
              ATerm c_3 (ATerm t)
              {
                ATerm q_41 = NULL;
                q_41 = t;
                e_41 :
                if(!(match_string(q_41, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                t = term_a_18;
                t = set_config_0(t);
                t = term_b_18;
                return(t);
              }
              ATerm e_3 (ATerm t)
              {
                t = term_c_18;
                return(t);
              }
              t = Option_3(t, c_3, d_3, e_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm d_18 = t;
  int i_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(i_18);
    }
  else
    {
      t = d_18;
      {
        ATerm k_18 = t;
        int x_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(x_18);
          }
        else
          {
            t = k_18;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm w_41 = NULL;
    w_41 = t;
    t_41 :
    if(!(match_string(w_41, "-o")))
      {
        if(!(match_string(w_41, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm g_3 (ATerm t)
  {
    ATerm z_41 = NULL;
    ATerm y_18;
    y_18 = t;
    {
      ATerm x_41 = NULL;
      ATerm y_41 = NULL;
      y_41 = t;
      if(((x_41 != NULL) && (x_41 != y_41)))
        _fail(y_41);
      else
        x_41 = y_41;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_18, not_null(x_41));
        t = set_config_0(t);
      }
    }
    t = y_18;
    {
      ATerm a_42 = NULL;
      a_42 = t;
      if(((z_41 != NULL) && (z_41 != a_42)))
        _fail(a_42);
      else
        z_41 = a_42;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(z_41));
    }
    return(t);
  }
  ATerm h_3 (ATerm t)
  {
    t = term_a_19;
    return(t);
  }
  t = ArgOption_3(t, f_3, g_3, h_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm b_19 = t;
  int c_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(c_19);
    }
  else
    {
      t = b_19;
      {
        ATerm i_3 (ATerm t)
        {
          ATerm e_42 = NULL;
          e_42 = t;
          d_42 :
          if(!(match_string(e_42, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm j_3 (ATerm t)
        {
          t = term_i_19;
          t = set_config_0(t);
          t = term_j_19;
          return(t);
        }
        ATerm k_3 (ATerm t)
        {
          t = term_k_19;
          return(t);
        }
        t = Option_3(t, i_3, j_3, k_3);
      }
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL;
  i_42 = t;
  h_42 :
  if(match_cons(i_42, sym__3))
    {
      j_42 = ATgetArgument(i_42, 0);
      k_42 = ATgetArgument(i_42, 1);
      l_42 = ATgetArgument(i_42, 2);
      {
        ATerm l_19;
        l_19 = t;
        {
          ATerm p_42 = NULL;
          ATerm q_42 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_42), not_null(k_42));
          {
            ATerm m_19 = t;
            int n_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(n_19);
              }
            else
              {
                t = m_19;
                t = (ATerm) ATempty;
              }
            {
              q_42 = t;
              if(((p_42 != NULL) && (p_42 != q_42)))
                _fail(q_42);
              else
                p_42 = q_42;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_42), not_null(k_42), (ATerm) ATinsert(CheckATermList(not_null(p_42)), not_null(l_42)));
            t = table_put_0(t);
          }
        }
        t = l_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_94 (ATerm))
{
  ATerm u_42 = NULL;
  ATerm v_42 = NULL;
  t = term_b_6;
  {
    t = o_94(t);
    {
      v_42 = t;
      if(((u_42 != NULL) && (u_42 != v_42)))
        _fail(v_42);
      else
        u_42 = v_42;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_19, term_x_19, not_null(u_42));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm e_43 = NULL,f_43 = NULL,i_43 = NULL,j_43 = NULL,k_43 = NULL;
  e_43 = t;
  c_43 :
  if(match_string(e_43, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(e_43) == AT_LIST) && !(ATisEmpty(e_43))))
        {
          f_43 = ATgetFirst((ATermList) e_43);
          i_43 = (ATerm) ATgetNext((ATermList) e_43);
          d_43 :
          if(((ATgetType(i_43) == AT_LIST) && !(ATisEmpty(i_43))))
            {
              j_43 = ATgetFirst((ATermList) i_43);
              k_43 = (ATerm) ATgetNext((ATermList) i_43);
              {
                ATerm o_43 = NULL;
                ATerm y_19;
                y_19 = t;
                {
                  t = not_null(f_43);
                  t = g_0(t);
                }
                t = y_19;
                {
                  ATerm p_43 = NULL;
                  t = not_null(j_43);
                  {
                    t = h_0(t);
                    {
                      p_43 = t;
                      if(((o_43 != NULL) && (o_43 != p_43)))
                        _fail(p_43);
                      else
                        o_43 = p_43;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(k_43)), not_null(o_43));
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
  ATerm l_3 (ATerm t)
  {
    ATerm w_43 = NULL;
    w_43 = t;
    t_43 :
    if(!(match_string(w_43, "-i")))
      {
        if(!(match_string(w_43, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    ATerm z_43 = NULL;
    ATerm z_19;
    z_19 = t;
    {
      ATerm x_43 = NULL;
      ATerm y_43 = NULL;
      y_43 = t;
      if(((x_43 != NULL) && (x_43 != y_43)))
        _fail(y_43);
      else
        x_43 = y_43;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_20, not_null(x_43));
        t = set_config_0(t);
      }
    }
    t = z_19;
    {
      ATerm a_44 = NULL;
      a_44 = t;
      if(((z_43 != NULL) && (z_43 != a_44)))
        _fail(a_44);
      else
        z_43 = a_44;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(z_43));
    }
    return(t);
  }
  ATerm n_3 (ATerm t)
  {
    t = term_b_20;
    return(t);
  }
  t = ArgOption_3(t, l_3, m_3, n_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm c_20 = t;
  int e_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(e_20);
    }
  else
    {
      t = c_20;
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATempty, term_w_20));
  {
    t = printnl_0(t);
    {
      t = term_v_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_44 = NULL;
  e_44 = t;
  t = SSL_TicksToSeconds(not_null(e_44));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm l_44 = NULL,n_44 = NULL,o_44 = NULL;
  l_44 = t;
  k_44 :
  if(match_cons(l_44, sym__2))
    {
      n_44 = ATgetArgument(l_44, 0);
      o_44 = ATgetArgument(l_44, 1);
      {
        ATerm x_20 = t;
        int z_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(n_44), not_null(o_44));
            LocalPopChoice(z_20);
          }
        else
          {
            t = x_20;
            t = SSL_addr(not_null(n_44), not_null(o_44));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_85 (ATerm), ATerm b_85 (ATerm))
{
  ATerm e_21 = t;
  int f_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_85(t);
      LocalPopChoice(f_21);
    }
  else
    {
      t = e_21;
      {
        ATerm v_44 = NULL,w_44 = NULL,x_44 = NULL;
        v_44 = t;
        u_44 :
        if(((ATgetType(v_44) == AT_LIST) && !(ATisEmpty(v_44))))
          {
            w_44 = ATgetFirst((ATermList) v_44);
            x_44 = (ATerm) ATgetNext((ATermList) v_44);
            {
              ATerm a_45 = NULL;
              ATerm b_45 = NULL;
              t = not_null(x_44);
              {
                t = foldr_2(t, a_85, b_85);
                {
                  b_45 = t;
                  if(((a_45 != NULL) && (a_45 != b_45)))
                    _fail(b_45);
                  else
                    a_45 = b_45;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_44), not_null(a_45));
                t = b_85(t);
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
ATerm crush_2 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm))
{
  ATerm i_45 = NULL;
  ATerm k_45 = NULL;
  i_45 = t;
  {
    ATerm l_45 = NULL;
    ATerm n_45 = NULL,o_45 = NULL,p_45 = NULL;
    t = not_null(i_45);
    {
      l_45 = t;
      {
        t = SSL_explode_term(not_null(l_45));
        {
          n_45 = t;
          h_45 :
          if(match_cons(n_45, sym__2))
            {
              o_45 = ATgetArgument(n_45, 0);
              p_45 = ATgetArgument(n_45, 1);
              if(((k_45 != NULL) && (k_45 != p_45)))
                _fail(p_45);
              else
                k_45 = p_45;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_45);
      t = foldr_2(t, y_83, z_83);
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
    ATerm o_3 (ATerm t)
    {
      t = term_a_17;
      return(t);
    }
    t = crush_2(t, o_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm x_45 = NULL,d_46 = NULL,f_46 = NULL;
  x_45 = t;
  w_45 :
  if(match_cons(x_45, sym__2))
    {
      d_46 = ATgetArgument(x_45, 0);
      f_46 = ATgetArgument(x_45, 1);
      {
        ATerm g_21;
        g_21 = t;
        {
          ATerm m_21 = t;
          int n_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(d_46), not_null(f_46));
              LocalPopChoice(n_21);
            }
          else
            {
              t = m_21;
              t = SSL_gtr(not_null(d_46), not_null(f_46));
            }
        }
        t = g_21;
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
  ATerm l_46 = NULL;
  ATerm o_21 = t;
  int p_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_46 = NULL,n_46 = NULL,o_46 = NULL;
      m_46 = t;
      k_46 :
      if(match_cons(m_46, sym__2))
        {
          n_46 = ATgetArgument(m_46, 0);
          o_46 = ATgetArgument(m_46, 1);
          {
            if(((l_46 != NULL) && (l_46 != n_46)))
              _fail(n_46);
            else
              l_46 = n_46;
            if(((l_46 != NULL) && (l_46 != o_46)))
              _fail(o_46);
            else
              l_46 = o_46;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(p_21);
    }
  else
    {
      t = o_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm g_92 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm u_21;
    u_21 = t;
    {
      ATerm r_46 = NULL;
      ATerm s_46 = NULL;
      t = term_g_15;
      {
        t = get_config_0(t);
        {
          s_46 = t;
          if(((r_46 != NULL) && (r_46 != s_46)))
            _fail(s_46);
          else
            r_46 = s_46;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(r_46), term_v_6);
        t = geq_0(t);
      }
    }
    t = u_21;
    t = g_92(t);
    return(t);
  }
  t = try_1(t, p_3);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm q_3 (ATerm t)
  {
    ATerm w_46 = NULL,y_46 = NULL;
    ATerm v_21;
    v_21 = t;
    {
      ATerm x_46 = NULL;
      t = run_time_0(t);
      {
        x_46 = t;
        if(((w_46 != NULL) && (w_46 != x_46)))
          _fail(x_46);
        else
          w_46 = x_46;
      }
    }
    t = v_21;
    {
      ATerm z_46 = NULL;
      t = term_y_21;
      {
        t = get_config_0(t);
        {
          z_46 = t;
          if(((y_46 != NULL) && (y_46 != z_46)))
            _fail(z_46);
          else
            y_46 = z_46;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_22), not_null(w_46)), term_z_21), not_null(y_46)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, q_3);
  {
    t = term_a_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm g_47 = NULL;
  g_47 = t;
  f_47 :
  if(match_cons(g_47, sym_Version_0))
    {
      ATerm i_47 = NULL,k_47 = NULL;
      ATerm b_22;
      b_22 = t;
      {
        ATerm j_47 = NULL;
        t = SSLgetAnnotations(not_null(g_47));
        {
          j_47 = t;
          if(((i_47 != NULL) && (i_47 != j_47)))
            _fail(j_47);
          else
            i_47 = j_47;
        }
      }
      t = b_22;
      {
        ATerm l_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(i_47));
        {
          l_47 = t;
          if(((k_47 != NULL) && (k_47 != l_47)))
            _fail(l_47);
          else
            k_47 = l_47;
        }
        t = not_null(k_47);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm m_90 (ATerm))
{
  ATerm u_3 (ATerm t)
  {
    ATerm f_22 = t;
    int g_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(g_22);
      }
    else
      {
        t = f_22;
        {
          ATerm k_22 = t;
          int n_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(n_22);
            }
          else
            {
              t = k_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, u_3);
  t = m_90(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm q_47 = NULL;
  q_47 = t;
  t = SSL_table_create(not_null(q_47));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm u_47 = NULL;
  u_47 = t;
  {
    ATerm o_22;
    o_22 = t;
    {
      t = term_q_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_12, term_r_12, not_null(u_47));
          t = table_put_0(t);
        }
      }
    }
    t = o_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm y_47 = NULL;
  y_47 = t;
  t = SSL_table_destroy(not_null(y_47));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  t = SSL_exit(not_null(c_48));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm g_48 = NULL,h_48 = NULL,i_48 = NULL;
  g_48 = t;
  f_48 :
  if(((ATgetType(g_48) == AT_LIST) && ATisEmpty(g_48)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_48) == AT_LIST) && !(ATisEmpty(g_48))))
        {
          h_48 = ATgetFirst((ATermList) g_48);
          i_48 = (ATerm) ATgetNext((ATermList) g_48);
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
  ATerm p_22;
  p_22 = t;
  {
    ATerm l_48 = NULL;
    ATerm o_48 = NULL;
    ATerm q_22 = t;
    int r_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(r_22);
      }
    else
      {
        t = q_22;
        {
          ATerm m_48 = NULL;
          ATerm n_48 = NULL;
          n_48 = t;
          if(((m_48 != NULL) && (m_48 != n_48)))
            _fail(n_48);
          else
            m_48 = n_48;
          t = (ATerm) ATinsert(ATempty, not_null(m_48));
        }
      }
    {
      o_48 = t;
      if(((l_48 != NULL) && (l_48 != o_48)))
        _fail(o_48);
      else
        l_48 = o_48;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_r_15, not_null(l_48));
      t = printnl_0(t);
    }
  }
  t = p_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm r_48 (ATerm t)
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
        t = Cons_2(t, m_78, r_48);
      }
    return(t);
  }
  t = r_48(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm y_48 = NULL,z_48 = NULL,a_49 = NULL;
  a_49 = t;
  x_48 :
  if(((ATgetType(a_49) == AT_LIST) && !(ATisEmpty(a_49))))
    {
      y_48 = ATgetFirst((ATermList) a_49);
      z_48 = (ATerm) ATgetNext((ATermList) a_49);
      {
        ATerm d_49 = NULL;
        t = not_null(z_48);
        {
          ATerm u_22;
          u_22 = t;
          {
            ATerm n_49 = NULL,r_49 = NULL,t_49 = NULL;
            ATerm y_22;
            y_22 = t;
            {
              ATerm o_49 = NULL;
              t = d_0(t);
              {
                o_49 = t;
                if(((n_49 != NULL) && (n_49 != o_49)))
                  _fail(o_49);
                else
                  n_49 = o_49;
              }
            }
            t = y_22;
            {
              ATerm s_49 = NULL;
              t = not_null(y_48);
              {
                t = a_0(t);
                {
                  s_49 = t;
                  if(((r_49 != NULL) && (r_49 != s_49)))
                    _fail(s_49);
                  else
                    r_49 = s_49;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_49)), not_null(r_49));
                {
                  t_49 = t;
                  if(((d_49 != NULL) && (d_49 != t_49)))
                    _fail(t_49);
                  else
                    d_49 = t_49;
                }
              }
            }
          }
          t = u_22;
          {
            ATerm v_3 (ATerm t)
            {
              t = not_null(d_49);
              return(t);
            }
            t = reverse_acc_2(t, a_0, v_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_49) == AT_LIST) && ATisEmpty(a_49)))
        {
          {
            t = term_b_6;
            t = d_0(t);
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
  ATerm w_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, w_3);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_50 = NULL,m_50 = NULL,n_50 = NULL;
  l_50 = t;
  k_50 :
  if(match_cons(l_50, sym__2))
    {
      m_50 = ATgetArgument(l_50, 0);
      n_50 = ATgetArgument(l_50, 1);
      t = SSL_table_get(not_null(m_50), not_null(n_50));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm s_67 (ATerm))
{
  ATerm a_51 = NULL,b_51 = NULL;
  a_51 = t;
  z_50 :
  if(match_cons(a_51, sym_Program_1))
    {
      b_51 = ATgetArgument(a_51, 0);
      {
        ATerm e_51 = NULL,g_51 = NULL;
        ATerm f_51 = NULL;
        t = SSLgetAnnotations(not_null(a_51));
        {
          f_51 = t;
          if(((e_51 != NULL) && (e_51 != f_51)))
            _fail(f_51);
          else
            e_51 = f_51;
        }
        {
          t = not_null(b_51);
          {
            ATerm i_51 = NULL;
            t = s_67(t);
            {
              g_51 = t;
              {
                ATerm j_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_51)), not_null(e_51));
                {
                  j_51 = t;
                  if(((i_51 != NULL) && (i_51 != j_51)))
                    _fail(j_51);
                  else
                    i_51 = j_51;
                }
                t = not_null(i_51);
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
  ATerm t_51 = NULL;
  ATerm z_22 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_51 = NULL;
      t = term_y_21;
      {
        t = get_config_0(t);
        {
          u_51 = t;
          if(((t_51 != NULL) && (t_51 != u_51)))
            _fail(u_51);
          else
            t_51 = u_51;
        }
      }
      LocalPopChoice(d_23);
    }
  else
    {
      t = z_22;
      {
        ATerm x_3 (ATerm t)
        {
          ATerm y_3 (ATerm t)
          {
            ATerm v_51 = NULL;
            v_51 = t;
            if(((t_51 != NULL) && (t_51 != v_51)))
              _fail(v_51);
            else
              t_51 = v_51;
            return(t);
          }
          t = Program_1(t, y_3);
          return(t);
        }
        t = option_defined_1(t, x_3);
      }
    }
  {
    ATerm z_3 (ATerm t)
    {
      ATerm a_4 (ATerm t)
      {
        t = not_null(t_51);
        return(t);
      }
      t = short_description_1(t, a_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, z_3);
    {
      t = term_g_23;
      {
        t = echo_0(t);
        {
          t = term_h_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm b_4 (ATerm t)
                {
                  ATerm w_51 = NULL;
                  ATerm x_51 = NULL;
                  x_51 = t;
                  if(((w_51 != NULL) && (w_51 != x_51)))
                    _fail(x_51);
                  else
                    w_51 = x_51;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(w_51)), term_i_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, b_4);
                {
                  ATerm c_4 (ATerm t)
                  {
                    ATerm y_51 = NULL;
                    ATerm z_51 = NULL;
                    ATerm d_4 (ATerm t)
                    {
                      t = not_null(t_51);
                      return(t);
                    }
                    t = long_description_1(t, d_4);
                    {
                      z_51 = t;
                      if(((y_51 != NULL) && (y_51 != z_51)))
                        _fail(z_51);
                      else
                        y_51 = z_51;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(y_51)), term_j_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, c_4);
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
    ATerm f_52 = NULL;
    ATerm g_52 = NULL;
    g_52 = t;
    if(((f_52 != NULL) && (f_52 != g_52)))
      _fail(g_52);
    else
      f_52 = g_52;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATempty, not_null(f_52)));
      t = printnl_0(t);
    }
  }
  t = k_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm l_89 (ATerm))
{
  ATerm l_23;
  l_23 = t;
  {
    t = l_89(t);
    t = debug_0(t);
  }
  t = l_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm t_67 (ATerm))
{
  ATerm q_52 = NULL,r_52 = NULL;
  q_52 = t;
  m_52 :
  if(match_cons(q_52, sym_Undefined_1))
    {
      r_52 = ATgetArgument(q_52, 0);
      {
        ATerm u_52 = NULL,w_52 = NULL;
        ATerm v_52 = NULL;
        t = SSLgetAnnotations(not_null(q_52));
        {
          v_52 = t;
          if(((u_52 != NULL) && (u_52 != v_52)))
            _fail(v_52);
          else
            u_52 = v_52;
        }
        {
          t = not_null(r_52);
          {
            ATerm y_52 = NULL;
            t = t_67(t);
            {
              w_52 = t;
              {
                ATerm z_52 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(w_52)), not_null(u_52));
                {
                  z_52 = t;
                  if(((y_52 != NULL) && (y_52 != z_52)))
                    _fail(z_52);
                  else
                    y_52 = z_52;
                }
                t = not_null(y_52);
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
ATerm fetch_1 (ATerm t, ATerm v_78 (ATerm))
{
  ATerm e_53 (ATerm t)
  {
    ATerm m_23 = t;
    int n_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, v_78, _id);
        LocalPopChoice(n_23);
      }
    else
      {
        t = m_23;
        t = Cons_2(t, _id, e_53);
      }
    return(t);
  }
  t = e_53(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_93 (ATerm))
{
  t = fetch_1(t, j_93);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm j_53 = NULL;
  j_53 = t;
  i_53 :
  if(match_cons(j_53, sym_Help_0))
    {
      ATerm l_53 = NULL,n_53 = NULL;
      ATerm o_23;
      o_23 = t;
      {
        ATerm m_53 = NULL;
        t = SSLgetAnnotations(not_null(j_53));
        {
          m_53 = t;
          if(((l_53 != NULL) && (l_53 != m_53)))
            _fail(m_53);
          else
            l_53 = m_53;
        }
      }
      t = o_23;
      {
        ATerm o_53 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(l_53));
        {
          o_53 = t;
          if(((n_53 != NULL) && (n_53 != o_53)))
            _fail(o_53);
          else
            n_53 = o_53;
        }
        t = not_null(n_53);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    ATerm t_53 = NULL;
    t_53 = t;
    s_53 :
    if(!(match_string(t_53, "--help")))
      {
        if(!(match_string(t_53, "-h")))
          {
            if(!(match_string(t_53, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm g_4 (ATerm t)
  {
    t = term_q_23;
    {
      t = set_config_0(t);
      t = term_r_23;
    }
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = term_v_23;
    return(t);
  }
  t = Option_3(t, f_4, g_4, h_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm w_53 = NULL,e_54 = NULL,f_54 = NULL;
  w_53 = t;
  v_53 :
  if(((ATgetType(w_53) == AT_LIST) && !(ATisEmpty(w_53))))
    {
      e_54 = ATgetFirst((ATermList) w_53);
      f_54 = (ATerm) ATgetNext((ATermList) w_53);
      t = (ATerm) ATinsert(CheckATermList(not_null(f_54)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(e_54)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_59 (ATerm), ATerm d_59 (ATerm))
{
  ATerm p_54 = NULL,q_54 = NULL,r_54 = NULL;
  p_54 = t;
  o_54 :
  if(((ATgetType(p_54) == AT_LIST) && !(ATisEmpty(p_54))))
    {
      q_54 = ATgetFirst((ATermList) p_54);
      r_54 = (ATerm) ATgetNext((ATermList) p_54);
      {
        ATerm v_54 = NULL,x_54 = NULL;
        ATerm w_54 = NULL;
        t = SSLgetAnnotations(not_null(p_54));
        {
          w_54 = t;
          if(((v_54 != NULL) && (v_54 != w_54)))
            _fail(w_54);
          else
            v_54 = w_54;
        }
        {
          t = not_null(q_54);
          {
            ATerm z_54 = NULL;
            t = c_59(t);
            {
              x_54 = t;
              {
                t = not_null(r_54);
                {
                  ATerm b_55 = NULL;
                  t = d_59(t);
                  {
                    z_54 = t;
                    {
                      ATerm c_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(z_54)), not_null(x_54)), not_null(v_54));
                      {
                        c_55 = t;
                        if(((b_55 != NULL) && (b_55 != c_55)))
                          _fail(c_55);
                        else
                          b_55 = c_55;
                      }
                      t = not_null(b_55);
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
  ATerm m_55 = NULL;
  m_55 = t;
  l_55 :
  if(((ATgetType(m_55) == AT_LIST) && ATisEmpty(m_55)))
    {
      {
        ATerm o_55 = NULL,q_55 = NULL;
        ATerm w_23;
        w_23 = t;
        {
          ATerm p_55 = NULL;
          t = SSLgetAnnotations(not_null(m_55));
          {
            p_55 = t;
            if(((o_55 != NULL) && (o_55 != p_55)))
              _fail(p_55);
            else
              o_55 = p_55;
          }
        }
        t = w_23;
        {
          ATerm r_55 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(o_55));
          {
            r_55 = t;
            if(((q_55 != NULL) && (q_55 != r_55)))
              _fail(r_55);
            else
              q_55 = r_55;
          }
          t = not_null(q_55);
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
  ATerm x_55 = NULL,y_55 = NULL,z_55 = NULL;
  x_55 = t;
  w_55 :
  if(match_cons(x_55, sym__2))
    {
      y_55 = ATgetArgument(x_55, 0);
      z_55 = ATgetArgument(x_55, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_z_14, not_null(y_55), not_null(z_55));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm m_94 (ATerm))
{
  ATerm a_24;
  a_24 = t;
  {
    ATerm i_4 (ATerm t)
    {
      t = term_b_24;
      t = m_94(t);
      return(t);
    }
    t = try_1(t, i_4);
  }
  t = a_24;
  {
    ATerm j_4 (ATerm t)
    {
      ATerm h_56 = NULL;
      ATerm c_24;
      c_24 = t;
      {
        ATerm f_56 = NULL;
        ATerm g_56 = NULL;
        g_56 = t;
        if(((f_56 != NULL) && (f_56 != g_56)))
          _fail(g_56);
        else
          f_56 = g_56;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_21, not_null(f_56));
          t = set_config_0(t);
        }
      }
      t = c_24;
      {
        ATerm i_56 = NULL;
        i_56 = t;
        if(((h_56 != NULL) && (h_56 != i_56)))
          _fail(i_56);
        else
          h_56 = i_56;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(h_56));
      }
      return(t);
    }
    ATerm m_4 (ATerm t)
    {
      ATerm d_24 = t;
      int e_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_24 = t;
          int g_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(g_24);
            }
          else
            {
              t = f_24;
              {
                t = m_94(t);
                t = Cons_2(t, _id, m_4);
              }
            }
          LocalPopChoice(e_24);
        }
      else
        {
          t = d_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, j_4, m_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm o_56 = NULL,p_56 = NULL,q_56 = NULL;
  ATerm h_24;
  h_24 = t;
  {
    ATerm r_56 = NULL,s_56 = NULL,t_56 = NULL,u_56 = NULL;
    r_56 = t;
    n_56 :
    if(match_cons(r_56, sym__3))
      {
        s_56 = ATgetArgument(r_56, 0);
        t_56 = ATgetArgument(r_56, 1);
        u_56 = ATgetArgument(r_56, 2);
        {
          if(((o_56 != NULL) && (o_56 != s_56)))
            _fail(s_56);
          else
            o_56 = s_56;
          {
            if(((p_56 != NULL) && (p_56 != t_56)))
              _fail(t_56);
            else
              p_56 = t_56;
            {
              if(((q_56 != NULL) && (q_56 != u_56)))
                _fail(u_56);
              else
                q_56 = u_56;
              t = SSL_table_put(not_null(o_56), not_null(p_56), not_null(q_56));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_94 (ATerm))
{
  ATerm x_56 = NULL;
  ATerm i_24;
  i_24 = t;
  {
    t = term_j_24;
    t = table_put_0(t);
  }
  t = i_24;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm k_24 = t;
      int l_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_94(t);
          LocalPopChoice(l_24);
        }
      else
        {
          t = k_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, n_4);
    {
      ATerm o_4 (ATerm t)
      {
        ATerm m_24 = t;
        int n_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_24;
            o_24 = t;
            {
              ATerm p_24 = t;
              int q_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_p_23;
                  t = get_config_0(t);
                  LocalPopChoice(q_24);
                }
              else
                {
                  t = p_24;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = o_24;
            {
              t = system_usage_0(t);
              {
                t = term_a_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(n_24);
          }
        else
          {
            t = m_24;
            {
              ATerm p_4 (ATerm t)
              {
                ATerm u_4 (ATerm t)
                {
                  ATerm y_56 = NULL;
                  y_56 = t;
                  if(((x_56 != NULL) && (x_56 != y_56)))
                    _fail(y_56);
                  else
                    x_56 = y_56;
                  return(t);
                }
                t = Undefined_1(t, u_4);
                return(t);
              }
              t = option_defined_1(t, p_4);
              {
                ATerm v_4 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(x_56)), term_r_24);
                  return(t);
                }
                t = say_1(t, v_4);
                {
                  t = system_usage_0(t);
                  {
                    t = term_v_6;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, o_4);
      {
        ATerm s_24;
        s_24 = t;
        {
          t = term_w_19;
          t = table_destroy_0(t);
        }
        t = s_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm s_90 (ATerm), ATerm t_90 (ATerm), ATerm u_90 (ATerm), ATerm v_90 (ATerm))
{
  t = parse_options_1(t, s_90);
  {
    t = store_options_0(t);
    {
      t = u_90(t);
      {
        ATerm t_24 = t;
        int u_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, t_90);
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
                  t = v_90(t);
                  t = report_success_0(t);
                  LocalPopChoice(w_24);
                }
              else
                {
                  t = v_24;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm j_91 (ATerm), ATerm k_91 (ATerm), ATerm l_91 (ATerm), ATerm m_91 (ATerm))
{
  ATerm w_4 (ATerm t)
  {
    ATerm x_24 = t;
    int y_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = k_91(t);
        LocalPopChoice(y_24);
      }
    else
      {
        t = x_24;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, j_91);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, w_4, l_91, m_91, x_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm f_91 (ATerm))
{
  ATerm a_5 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      ATerm z_24;
      z_24 = t;
      {
        ATerm b_57 = NULL;
        ATerm c_57 = NULL;
        t = term_y_21;
        {
          t = get_config_0(t);
          {
            c_57 = t;
            if(((b_57 != NULL) && (b_57 != c_57)))
              _fail(c_57);
            else
              b_57 = c_57;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_12, (ATerm) ATinsert(ATempty, not_null(b_57)));
          t = printnl_0(t);
        }
      }
      t = z_24;
      return(t);
    }
    t = if_verbose2_1(t, b_5);
    return(t);
  }
  t = iowrap_4(t, d_91, e_91, f_91, a_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm b_91 (ATerm), ATerm c_91 (ATerm))
{
  t = iowrap_3(t, b_91, c_91, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm t_98 (ATerm), ATerm u_98 (ATerm), ATerm v_98 (ATerm))
{
  ATerm c_5 (ATerm t)
  {
    ATerm e_5 (ATerm t)
    {
      t = termid_check_p__1(t, t_98);
      return(t);
    }
    t = try_1(t, e_5);
    {
      t = u_98(t);
      {
        ATerm i_5 (ATerm t)
        {
          t = termid_set_p__1(t, t_98);
          return(t);
        }
        t = try_1(t, i_5);
      }
    }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = v_98(t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        {
          ATerm j_5 (ATerm t)
          {
            ATerm m_57 = NULL;
            m_57 = t;
            l_57 :
            if(!(match_string(m_57, "--strict")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm n_5 (ATerm t)
          {
            t = term_z_12;
            return(t);
          }
          ATerm q_5 (ATerm t)
          {
            t = term_c_25;
            return(t);
          }
          t = Option_3(t, j_5, n_5, q_5);
        }
      }
    return(t);
  }
  t = iowrap_2(t, c_5, d_5);
  return(t);
}
ATerm io_sdf_2_pp_table_0 (ATerm t)
{
  ATerm r_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm s_57 = NULL;
      s_57 = t;
      q_57 :
      if(!(match_string(s_57, "\"sdf-2.1\"")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm w_5 (ATerm t)
    {
      t = term_d_25;
      return(t);
    }
    t = InOutId_2(t, u_5, w_5);
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    t = _2(t, _id, ppgenerate_0);
    return(t);
  }
  ATerm t_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm v_57 = NULL;
      v_57 = t;
      r_57 :
      if(!(match_string(v_57, "-v")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      t = term_e_25;
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      t = term_f_25;
      return(t);
    }
    t = Option_3(t, x_5, y_5, z_5);
    return(t);
  }
  t = io_idwrap_3(t, r_5, s_5, t_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_sdf_2_pp_table_0(t);
  return(t);
}

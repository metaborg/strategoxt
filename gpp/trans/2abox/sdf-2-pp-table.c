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
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_t_25;
ATerm term_j_25;
ATerm term_b_25;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_x_22;
ATerm term_k_22;
ATerm term_j_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_t_21;
ATerm term_n_21;
ATerm term_m_21;
ATerm term_l_21;
ATerm term_d_21;
ATerm term_c_21;
ATerm term_g_20;
ATerm term_f_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_u_19;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_j_19;
ATerm term_g_19;
ATerm term_f_19;
ATerm term_r_18;
ATerm term_p_18;
ATerm term_k_18;
ATerm term_j_18;
ATerm term_i_18;
ATerm term_d_18;
ATerm term_d_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_k_16;
ATerm term_e_16;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_z_14;
ATerm term_u_14;
ATerm term_h_14;
ATerm term_e_14;
ATerm term_a_14;
ATerm term_t_13;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_h_13;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_y_10;
ATerm term_w_10;
ATerm term_t_9;
ATerm term_s_9;
ATerm term_f_9;
ATerm term_e_9;
ATerm term_d_9;
ATerm term_x_7;
ATerm term_d_7;
ATerm term_c_7;
ATerm term_z_6;
ATerm term_f_6;
ATerm term_b_6;
void init_constant_terms (void)
{
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_f_6));
  term_f_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_7));
  term_d_7 = (ATerm) ATmakeAppl(sym_Arg_1, term_c_7);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_d_9));
  term_d_9 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeAppl(sym_SOpt_2, term_d_9, term_e_9);
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_lit_1, term_s_9);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_lit_1, term_w_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_t_13));
  term_t_13 = (ATerm) ATmakeAppl(sym__2, term_r_13, term_s_13);
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_k_16));
  term_k_16 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_i_18));
  term_i_18 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(sym__2, term_j_18, term_b_6);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_r_18));
  term_r_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_19));
  term_g_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym__2, term_x_16, term_j_19);
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_j_19);
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym__2, term_d_20, term_b_6);
  ATprotect(&(term_f_20));
  term_f_20 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_20));
  term_g_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_21));
  term_l_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(sym__2, term_l_21, term_b_6);
  ATprotect(&(term_n_21));
  term_n_21 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_22));
  term_k_22 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(sym__2, term_b_22, term_c_22);
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(sym__2, term_t_24, term_b_6);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(sym__3, term_b_22, term_c_22, (ATerm) ATempty);
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm quote_chars_0 (ATerm);
ATerm double_quote_chars_0 (ATerm);
ATerm double_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm j_59 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm selector_2 (ATerm, ATerm e_59 (ATerm), ATerm f_59 (ATerm));
ATerm Arg_1 (ATerm, ATerm g_59 (ATerm));
ATerm topdown_1 (ATerm, ATerm w_71 (ATerm));
ATerm filter_1 (ATerm, ATerm q_85 (ATerm));
ATerm argument_list_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm c_70 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm m_61 (ATerm));
ATerm iter_1 (ATerm, ATerm l_61 (ATerm));
ATerm pair_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm j_61 (ATerm), ATerm k_61 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm h_61 (ATerm), ATerm i_61 (ATerm));
ATerm make_0 (ATerm);
ATerm NonTerminal_0 (ATerm);
ATerm number_node_1 (ATerm, ATerm f_70 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm b_70 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm z_78 (ATerm));
ATerm init_0 (ATerm);
ATerm Tl_0 (ATerm);
ATerm Last_0 (ATerm);
ATerm last_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm unquote_chars_1 (ATerm, ATerm o_87 (ATerm));
ATerm un_double_quote_chars_0 (ATerm);
ATerm string_as_chars_1 (ATerm, ATerm z_87 (ATerm));
ATerm un_double_quote_0 (ATerm);
ATerm sort_1 (ATerm, ATerm q_61 (ATerm));
ATerm lit_1 (ATerm, ATerm g_61 (ATerm));
ATerm cons_1 (ATerm, ATerm l_0 (ATerm));
ATerm foldr_3 (ATerm, ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm));
ATerm crush_3 (ATerm, ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm p_83 (ATerm));
ATerm collect_p__1 (ATerm, ATerm y_97 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm _2 (ATerm, ATerm n_57 (ATerm), ATerm o_57 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm m_73 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm c_90 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm j_98 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm k_98 (ATerm));
ATerm InOutId_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm r_98 (ATerm));
ATerm try_1 (ATerm, ATerm i_70 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm p_98 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_78 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_91 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_90 (ATerm));
ATerm debug_1 (ATerm, ATerm x_88 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_86 (ATerm), ATerm d_86 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_94 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_84 (ATerm), ATerm o_84 (ATerm));
ATerm crush_2 (ATerm, ATerm l_83 (ATerm), ATerm m_83 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_91 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_89 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_93 (ATerm));
ATerm map_1 (ATerm, ATerm z_77 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_93 (ATerm));
ATerm Program_1 (ATerm, ATerm m_67 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm y_88 (ATerm));
ATerm Undefined_1 (ATerm, ATerm n_67 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_78 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_92 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_58 (ATerm), ATerm x_58 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_93 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_93 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm i_90 (ATerm));
ATerm iowrap_4 (ATerm, ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm z_90 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_90 (ATerm), ATerm p_90 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm i_98 (ATerm));
ATerm io_sdf_2_pp_table_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Option_3 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm f_4 = NULL,g_4 = NULL,k_4 = NULL;
  f_4 = t;
  e_4 :
  if(match_string(f_4, "register-usage-info"))
    {
      t = register_usage_1(t, o_0);
    }
  else
    {
      if(((ATgetType(f_4) == AT_LIST) && !(ATisEmpty(f_4))))
        {
          g_4 = ATgetFirst((ATermList) f_4);
          k_4 = (ATerm) ATgetNext((ATermList) f_4);
          {
            ATerm o_4 = NULL;
            ATerm a_6;
            a_6 = t;
            {
              t = not_null(g_4);
              t = m_0(t);
            }
            t = a_6;
            {
              ATerm q_4 = NULL;
              t = term_b_6;
              {
                t = n_0(t);
                {
                  q_4 = t;
                  if(((o_4 != NULL) && (o_4 != q_4)))
                    _fail(q_4);
                  else
                    o_4 = q_4;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(k_4)), not_null(o_4));
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
  ATerm x_4 = NULL,y_4 = NULL,z_4 = NULL;
  x_4 = t;
  w_4 :
  if(match_cons(x_4, sym__2))
    {
      y_4 = ATgetArgument(x_4, 0);
      z_4 = ATgetArgument(x_4, 1);
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(z_4)), not_null(y_4)), (ATerm) ATinsert(ATempty, not_null(y_4)));
        {
          ATerm d_6 = t;
          int e_6 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = conc_two_lists_0(t);
              LocalPopChoice(e_6);
            }
          else
            {
              t = d_6;
              t = conc_more_lists_0(t);
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
ATerm double_quote_chars_0 (ATerm t)
{
  ATerm f_5 = NULL;
  ATerm g_5 = NULL;
  g_5 = t;
  if(((f_5 != NULL) && (f_5 != g_5)))
    _fail(g_5);
  else
    f_5 = g_5;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_f_6, not_null(f_5));
    t = quote_chars_0(t);
  }
  return(t);
}
ATerm double_quote_0 (ATerm t)
{
  t = string_as_chars_1(t, double_quote_chars_0);
  return(t);
}
ATerm S_1 (ATerm t, ATerm j_59 (ATerm))
{
  ATerm n_5 = NULL,o_5 = NULL;
  n_5 = t;
  m_5 :
  if(match_cons(n_5, sym_S_1))
    {
      o_5 = ATgetArgument(n_5, 0);
      {
        ATerm r_5 = NULL,t_5 = NULL;
        ATerm s_5 = NULL;
        t = SSLgetAnnotations(not_null(n_5));
        {
          s_5 = t;
          if(((r_5 != NULL) && (r_5 != s_5)))
            _fail(s_5);
          else
            r_5 = s_5;
        }
        {
          t = not_null(o_5);
          {
            ATerm v_5 = NULL;
            t = j_59(t);
            {
              t_5 = t;
              {
                ATerm w_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(t_5)), not_null(r_5));
                {
                  w_5 = t;
                  if(((v_5 != NULL) && (v_5 != w_5)))
                    _fail(w_5);
                  else
                    v_5 = w_5;
                }
                t = not_null(v_5);
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
  ATerm c_6 = NULL;
  c_6 = t;
  t = SSL_int_to_string(not_null(c_6));
  return(t);
}
ATerm selector_2 (ATerm t, ATerm e_59 (ATerm), ATerm f_59 (ATerm))
{
  ATerm l_6 = NULL,m_6 = NULL,n_6 = NULL;
  l_6 = t;
  k_6 :
  if(match_cons(l_6, sym_selector_2))
    {
      m_6 = ATgetArgument(l_6, 0);
      n_6 = ATgetArgument(l_6, 1);
      {
        ATerm r_6 = NULL,t_6 = NULL;
        ATerm s_6 = NULL;
        t = SSLgetAnnotations(not_null(l_6));
        {
          s_6 = t;
          if(((r_6 != NULL) && (r_6 != s_6)))
            _fail(s_6);
          else
            r_6 = s_6;
        }
        {
          t = not_null(m_6);
          {
            ATerm v_6 = NULL;
            t = e_59(t);
            {
              t_6 = t;
              {
                t = not_null(n_6);
                {
                  ATerm x_6 = NULL;
                  t = f_59(t);
                  {
                    v_6 = t;
                    {
                      ATerm y_6 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_selector_2, not_null(t_6), not_null(v_6)), not_null(r_6));
                      {
                        y_6 = t;
                        if(((x_6 != NULL) && (x_6 != y_6)))
                          _fail(y_6);
                        else
                          x_6 = y_6;
                      }
                      t = not_null(x_6);
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
ATerm Arg_1 (ATerm t, ATerm g_59 (ATerm))
{
  ATerm j_7 = NULL,k_7 = NULL;
  j_7 = t;
  i_7 :
  if(match_cons(j_7, sym_Arg_1))
    {
      k_7 = ATgetArgument(j_7, 0);
      {
        ATerm n_7 = NULL,p_7 = NULL;
        ATerm o_7 = NULL;
        t = SSLgetAnnotations(not_null(j_7));
        {
          o_7 = t;
          if(((n_7 != NULL) && (n_7 != o_7)))
            _fail(o_7);
          else
            n_7 = o_7;
        }
        {
          t = not_null(k_7);
          {
            ATerm r_7 = NULL;
            t = g_59(t);
            {
              p_7 = t;
              {
                ATerm s_7 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(p_7)), not_null(n_7));
                {
                  s_7 = t;
                  if(((r_7 != NULL) && (r_7 != s_7)))
                    _fail(s_7);
                  else
                    r_7 = s_7;
                }
                t = not_null(r_7);
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
ATerm topdown_1 (ATerm t, ATerm w_71 (ATerm))
{
  t = w_71(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1(t, w_71);
      return(t);
    }
    t = _all(t, b_0);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm q_85 (ATerm))
{
  ATerm g_6 = t;
  int h_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_6);
    }
  else
    {
      t = g_6;
      {
        ATerm i_6 = t;
        int j_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = filter_1(t, q_85);
              return(t);
            }
            t = Cons_2(t, q_85, c_0);
            LocalPopChoice(j_6);
          }
        else
          {
            t = i_6;
            {
              ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
              z_7 = t;
              y_7 :
              if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
                {
                  a_8 = ATgetFirst((ATermList) z_7);
                  b_8 = (ATerm) ATgetNext((ATermList) z_7);
                  {
                    t = not_null(b_8);
                    t = filter_1(t, q_85);
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
    ATerm o_6 = t;
    int p_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_8 = NULL;
        f_8 = t;
        {
          ATerm q_6 = t;
          if((PushChoice() == 0))
            {
              t = is_list_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_6;
            }
          t = (ATerm) ATinsert(ATempty, not_null(f_8));
        }
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
  t = map_1(t, e_0);
  t = concat_0(t);
  return(t);
}
ATerm flat_alt_0 (ATerm t)
{
  ATerm n_8 = NULL,o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL;
  ATerm c_9 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_8)), not_null(q_8));
    return(t);
  }
  p_8 = t;
  l_8 :
  if(match_cons(p_8, sym_alt_2))
    {
      q_8 = ATgetArgument(p_8, 0);
      r_8 = ATgetArgument(p_8, 1);
      m_8 :
      if(match_cons(r_8, sym_alt_2))
        {
          n_8 = ATgetArgument(r_8, 0);
          o_8 = ATgetArgument(r_8, 1);
          {
            ATerm u_6 = t;
            int w_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_8 = NULL;
                ATerm w_8 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(n_8), not_null(o_8));
                {
                  t = flat_alt_0(t);
                  {
                    w_8 = t;
                    if(((v_8 != NULL) && (v_8 != w_8)))
                      _fail(w_8);
                    else
                      v_8 = w_8;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(v_8)), not_null(q_8));
                LocalPopChoice(w_6);
              }
            else
              {
                t = u_6;
                t = c_9(t);
              }
          }
        }
      else
        {
          t = c_9(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm c_70 (ATerm))
{
  ATerm e_10 = NULL,f_10 = NULL,g_10 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = term_b_6;
    t = c_70(t);
    return(t);
  }
  t = split_2(t, f_0, _id);
  {
    ATerm z_11 (ATerm t)
    {
      ATerm h_10 = NULL,i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL,o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL;
      ATerm b_12 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm c_12 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm d_12 (ATerm t)
      {
        ATerm s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL;
        if(((e_10 != NULL) && (e_10 != n_10)))
          _fail(n_10);
        else
          e_10 = n_10;
        {
          if(((f_10 != NULL) && (f_10 != o_10)))
            _fail(o_10);
          else
            f_10 = o_10;
          {
            if(((g_10 != NULL) && (g_10 != q_10)))
              _fail(q_10);
            else
              g_10 = q_10;
            {
              if(((s_10 != NULL) && (s_10 != k_10)))
                _fail(k_10);
              else
                s_10 = k_10;
              {
                if(((t_10 != NULL) && (t_10 != i_10)))
                  _fail(i_10);
                else
                  t_10 = i_10;
                {
                  if(((u_10 != NULL) && (u_10 != j_10)))
                    _fail(j_10);
                  else
                    u_10 = j_10;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(s_10), (ATerm) ATmakeAppl(sym_alt_2, not_null(t_10), not_null(u_10)));
                    {
                      ATerm x_10 = NULL;
                      t = flat_alt_0(t);
                      {
                        v_10 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_z_6, not_null(v_10));
                          {
                            t = mkterm_0(t);
                            {
                              x_10 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_10), not_null(f_10)), (ATerm) ATmakeAppl(sym__2, not_null(g_10), not_null(x_10)));
                                {
                                  t = z_11(t);
                                  {
                                    ATerm p_0 (ATerm t)
                                    {
                                      ATerm q_0 (ATerm t)
                                      {
                                        ATerm a_7 = t;
                                        int b_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = Arg_1(t, _id);
                                            t = term_d_7;
                                            LocalPopChoice(b_7);
                                          }
                                        else
                                          {
                                            t = a_7;
                                            {
                                            }
                                          }
                                        return(t);
                                      }
                                      t = topdown_1(t, q_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, p_0, _id);
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
      ATerm e_12 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_10), not_null(o_10)), (ATerm) ATmakeAppl(sym__2, not_null(q_10), not_null(k_10)));
        t = z_11(t);
        return(t);
      }
      ATerm f_12 (ATerm t)
      {
        ATerm h_11 = NULL,i_11 = NULL,o_11 = NULL;
        ATerm j_11 = NULL;
        ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
        t = not_null(r_10);
        {
          j_11 = t;
          {
            t = SSL_explode_term(not_null(j_11));
            {
              l_11 = t;
              o_9 :
              if(match_cons(l_11, sym__2))
                {
                  m_11 = ATgetArgument(l_11, 0);
                  n_11 = ATgetArgument(l_11, 1);
                  {
                    if(((h_11 != NULL) && (h_11 != m_11)))
                      _fail(m_11);
                    else
                      h_11 = m_11;
                    if(((i_11 != NULL) && (i_11 != n_11)))
                      _fail(n_11);
                    else
                      i_11 = n_11;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_10), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(q_10), not_null(h_11))));
          {
            ATerm q_11 = NULL,x_11 = NULL;
            ATerm e_7 = t;
            int f_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(f_7);
              }
            else
              {
                t = e_7;
                t = conc_more_lists_0(t);
              }
            {
              o_11 = t;
              {
                t = not_null(i_11);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm g_7;
                      g_7 = t;
                      {
                        ATerm r_11 = NULL;
                        t = make_0(t);
                        {
                          r_11 = t;
                          if(((q_11 != NULL) && (q_11 != r_11)))
                            _fail(r_11);
                          else
                            q_11 = r_11;
                        }
                      }
                      t = g_7;
                      {
                        ATerm r_0 (ATerm t)
                        {
                          ATerm s_11 = NULL;
                          ATerm u_11 = NULL;
                          s_11 = t;
                          {
                            ATerm v_11 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_10), not_null(o_11)), not_null(s_11));
                            {
                              t = z_11(t);
                              {
                                v_11 = t;
                                if(((u_11 != NULL) && (u_11 != v_11)))
                                  _fail(v_11);
                                else
                                  u_11 = v_11;
                              }
                            }
                            t = not_null(u_11);
                          }
                          return(t);
                        }
                        t = map_1(t, r_0);
                        {
                          t = concat_0(t);
                          {
                            x_11 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(x_11)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(n_10), not_null(o_11)), not_null(q_11)));
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
      l_10 = t;
      u_9 :
      if(match_cons(l_10, sym__2))
        {
          m_10 = ATgetArgument(l_10, 0);
          p_10 = ATgetArgument(l_10, 1);
          v_9 :
          if(match_cons(p_10, sym_lit_1))
            {
              q_10 = ATgetArgument(p_10, 0);
              w_9 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(p_10, sym__2))
                {
                  q_10 = ATgetArgument(p_10, 0);
                  r_10 = ATgetArgument(p_10, 1);
                  x_9 :
                  if(match_cons(r_10, sym_sort_1))
                    {
                      k_10 = ATgetArgument(r_10, 0);
                      y_9 :
                      if(match_cons(m_10, sym__2))
                        {
                          n_10 = ATgetArgument(m_10, 0);
                          o_10 = ATgetArgument(m_10, 1);
                          {
                            ATerm h_7 = t;
                            int l_7 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = b_12(t);
                                LocalPopChoice(l_7);
                              }
                            else
                              {
                                t = h_7;
                                t = f_12(t);
                              }
                          }
                        }
                      else
                        {
                          t = b_12(t);
                        }
                    }
                  else
                    {
                      if(match_cons(r_10, sym_char_class_1))
                        {
                          k_10 = ATgetArgument(r_10, 0);
                          z_9 :
                          if(match_cons(m_10, sym__2))
                            {
                              n_10 = ATgetArgument(m_10, 0);
                              o_10 = ATgetArgument(m_10, 1);
                              {
                                ATerm m_7 = t;
                                int q_7 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = c_12(t);
                                    LocalPopChoice(q_7);
                                  }
                                else
                                  {
                                    t = m_7;
                                    t = f_12(t);
                                  }
                              }
                            }
                          else
                            {
                              t = c_12(t);
                            }
                        }
                      else
                        {
                          if(match_cons(r_10, sym_alt_2))
                            {
                              k_10 = ATgetArgument(r_10, 0);
                              h_10 = ATgetArgument(r_10, 1);
                              a_10 :
                              if(match_cons(m_10, sym__2))
                                {
                                  n_10 = ATgetArgument(m_10, 0);
                                  o_10 = ATgetArgument(m_10, 1);
                                  b_10 :
                                  if(match_cons(h_10, sym_alt_2))
                                    {
                                      i_10 = ATgetArgument(h_10, 0);
                                      j_10 = ATgetArgument(h_10, 1);
                                      {
                                        ATerm t_7 = t;
                                        int u_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = d_12(t);
                                            LocalPopChoice(u_7);
                                          }
                                        else
                                          {
                                            t = t_7;
                                            t = f_12(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = f_12(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(r_10, sym_bracket_symbol_1))
                                {
                                  k_10 = ATgetArgument(r_10, 0);
                                  c_10 :
                                  if(match_cons(m_10, sym__2))
                                    {
                                      n_10 = ATgetArgument(m_10, 0);
                                      o_10 = ATgetArgument(m_10, 1);
                                      {
                                        ATerm v_7 = t;
                                        int w_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = e_12(t);
                                            LocalPopChoice(w_7);
                                          }
                                        else
                                          {
                                            t = v_7;
                                            t = f_12(t);
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
                                  d_10 :
                                  if(match_cons(m_10, sym__2))
                                    {
                                      n_10 = ATgetArgument(m_10, 0);
                                      o_10 = ATgetArgument(m_10, 1);
                                      t = f_12(t);
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
    t = z_11(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym_lit_1))
    {
      t_12 = ATgetArgument(s_12, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_x_7, (ATerm) ATmakeAppl(sym_S_1, not_null(t_12)));
    }
  else
    {
      if(match_cons(s_12, sym__2))
        {
          t_12 = ATgetArgument(s_12, 0);
          u_12 = ATgetArgument(s_12, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(t_12));
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm m_61 (ATerm))
{
  ATerm e_13 = NULL,f_13 = NULL;
  e_13 = t;
  d_13 :
  if(match_cons(e_13, sym_iter_star_1))
    {
      f_13 = ATgetArgument(e_13, 0);
      {
        ATerm i_13 = NULL,k_13 = NULL;
        ATerm j_13 = NULL;
        t = SSLgetAnnotations(not_null(e_13));
        {
          j_13 = t;
          if(((i_13 != NULL) && (i_13 != j_13)))
            _fail(j_13);
          else
            i_13 = j_13;
        }
        {
          t = not_null(f_13);
          {
            ATerm m_13 = NULL;
            t = m_61(t);
            {
              k_13 = t;
              {
                ATerm n_13 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(k_13)), not_null(i_13));
                {
                  n_13 = t;
                  if(((m_13 != NULL) && (m_13 != n_13)))
                    _fail(n_13);
                  else
                    m_13 = n_13;
                }
                t = not_null(m_13);
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
ATerm iter_1 (ATerm t, ATerm l_61 (ATerm))
{
  ATerm x_13 = NULL,y_13 = NULL;
  x_13 = t;
  w_13 :
  if(match_cons(x_13, sym_iter_1))
    {
      y_13 = ATgetArgument(x_13, 0);
      {
        ATerm b_14 = NULL,d_14 = NULL;
        ATerm c_14 = NULL;
        t = SSLgetAnnotations(not_null(x_13));
        {
          c_14 = t;
          if(((b_14 != NULL) && (b_14 != c_14)))
            _fail(c_14);
          else
            b_14 = c_14;
        }
        {
          t = not_null(y_13);
          {
            ATerm f_14 = NULL;
            t = l_61(t);
            {
              d_14 = t;
              {
                ATerm g_14 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(d_14)), not_null(b_14));
                {
                  g_14 = t;
                  if(((f_14 != NULL) && (f_14 != g_14)))
                    _fail(g_14);
                  else
                    f_14 = g_14;
                }
                t = not_null(f_14);
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
        ATerm p_14 = NULL,q_14 = NULL,r_14 = NULL,s_14 = NULL,t_14 = NULL;
        p_14 = t;
        n_14 :
        if(((ATgetType(p_14) == AT_LIST) && !(ATisEmpty(p_14))))
          {
            q_14 = ATgetFirst((ATermList) p_14);
            r_14 = (ATerm) ATgetNext((ATermList) p_14);
            o_14 :
            if(((ATgetType(r_14) == AT_LIST) && !(ATisEmpty(r_14))))
              {
                s_14 = ATgetFirst((ATermList) r_14);
                t_14 = (ATerm) ATgetNext((ATermList) r_14);
                {
                  ATerm x_14 = NULL;
                  ATerm y_14 = NULL;
                  t = not_null(t_14);
                  {
                    t = pair_0(t);
                    {
                      y_14 = t;
                      if(((x_14 != NULL) && (x_14 != y_14)))
                        _fail(y_14);
                      else
                        x_14 = y_14;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_14)), (ATerm) ATmakeAppl(sym__2, not_null(q_14), not_null(s_14)));
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
ATerm iter_star_sep_2 (ATerm t, ATerm j_61 (ATerm), ATerm k_61 (ATerm))
{
  ATerm i_15 = NULL,j_15 = NULL,k_15 = NULL;
  i_15 = t;
  h_15 :
  if(match_cons(i_15, sym_iter_star_sep_2))
    {
      j_15 = ATgetArgument(i_15, 0);
      k_15 = ATgetArgument(i_15, 1);
      {
        ATerm o_15 = NULL,q_15 = NULL;
        ATerm p_15 = NULL;
        t = SSLgetAnnotations(not_null(i_15));
        {
          p_15 = t;
          if(((o_15 != NULL) && (o_15 != p_15)))
            _fail(p_15);
          else
            o_15 = p_15;
        }
        {
          t = not_null(j_15);
          {
            ATerm s_15 = NULL;
            t = j_61(t);
            {
              q_15 = t;
              {
                t = not_null(k_15);
                {
                  ATerm u_15 = NULL;
                  t = k_61(t);
                  {
                    s_15 = t;
                    {
                      ATerm v_15 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(q_15), not_null(s_15)), not_null(o_15));
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
ATerm iter_sep_2 (ATerm t, ATerm h_61 (ATerm), ATerm i_61 (ATerm))
{
  ATerm h_16 = NULL,i_16 = NULL,j_16 = NULL;
  h_16 = t;
  g_16 :
  if(match_cons(h_16, sym_iter_sep_2))
    {
      i_16 = ATgetArgument(h_16, 0);
      j_16 = ATgetArgument(h_16, 1);
      {
        ATerm n_16 = NULL,p_16 = NULL;
        ATerm o_16 = NULL;
        t = SSLgetAnnotations(not_null(h_16));
        {
          o_16 = t;
          if(((n_16 != NULL) && (n_16 != o_16)))
            _fail(o_16);
          else
            n_16 = o_16;
        }
        {
          t = not_null(i_16);
          {
            ATerm r_16 = NULL;
            t = h_61(t);
            {
              p_16 = t;
              {
                t = not_null(j_16);
                {
                  ATerm t_16 = NULL;
                  t = i_61(t);
                  {
                    r_16 = t;
                    {
                      ATerm u_16 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(p_16), not_null(r_16)), not_null(n_16));
                      {
                        u_16 = t;
                        if(((t_16 != NULL) && (t_16 != u_16)))
                          _fail(u_16);
                        else
                          t_16 = u_16;
                      }
                      t = not_null(t_16);
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
  ATerm i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL;
  ATerm e_8 = t;
  int g_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_17 = NULL,o_17 = NULL,p_17 = NULL;
      ATerm s_0 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2(t, _id, s_0);
      {
        ATerm t_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            ATerm h_8 = t;
            int i_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
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
                      t = iter_star_1(t, _id);
                      LocalPopChoice(k_8);
                    }
                  else
                    {
                      t = j_8;
                      {
                        ATerm s_8 = t;
                        int t_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            LocalPopChoice(t_8);
                          }
                        else
                          {
                            t = s_8;
                            t = iter_star_sep_2(t, _id, _id);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2(t, _id, v_0);
          t = Make_0(t);
          return(t);
        }
        ATerm u_0 (ATerm t)
        {
          ATerm w_0 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, w_0);
          return(t);
        }
        t = Cons_2(t, t_0, u_0);
        {
          n_17 = t;
          c_17 :
          if(((ATgetType(n_17) == AT_LIST) && !(ATisEmpty(n_17))))
            {
              o_17 = ATgetFirst((ATermList) n_17);
              p_17 = (ATerm) ATgetNext((ATermList) n_17);
              {
                ATerm q_17 = NULL;
                if(((j_17 != NULL) && (j_17 != o_17)))
                  _fail(o_17);
                else
                  j_17 = o_17;
                {
                  if(((i_17 != NULL) && (i_17 != p_17)))
                    _fail(p_17);
                  else
                    i_17 = p_17;
                  {
                    ATerm u_8 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = u_8;
                      }
                    {
                      ATerm r_17 = NULL;
                      t = not_null(i_17);
                      {
                        ATerm x_0 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = reverse_acc_2(t, _id, x_0);
                        {
                          r_17 = t;
                          if(((q_17 != NULL) && (q_17 != r_17)))
                            _fail(r_17);
                          else
                            q_17 = r_17;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_17)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(q_17))));
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
      LocalPopChoice(g_8);
    }
  else
    {
      t = e_8;
      {
        ATerm x_8 = t;
        int y_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_17 = NULL;
            ATerm y_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, y_0);
            {
              ATerm z_0 (ATerm t)
              {
                ATerm s_17 = NULL;
                t = Make_0(t);
                {
                  s_17 = t;
                  if(((m_17 != NULL) && (m_17 != s_17)))
                    _fail(s_17);
                  else
                    m_17 = s_17;
                }
                return(t);
              }
              ATerm a_1 (ATerm t)
              {
                ATerm t_17 = NULL;
                ATerm z_8 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_8;
                  }
                {
                  ATerm b_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2(t, _id, b_1);
                  {
                    t_17 = t;
                    if(((k_17 != NULL) && (k_17 != t_17)))
                      _fail(t_17);
                    else
                      k_17 = t_17;
                  }
                }
                return(t);
              }
              t = Cons_2(t, z_0, a_1);
              {
                t = not_null(k_17);
                {
                  t = pair_0(t);
                  {
                    ATerm c_1 (ATerm t)
                    {
                      ATerm u_17 = NULL,v_17 = NULL;
                      ATerm d_1 (ATerm t)
                      {
                        ATerm w_17 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            w_17 = t;
                            if(((u_17 != NULL) && (u_17 != w_17)))
                              _fail(w_17);
                            else
                              u_17 = w_17;
                          }
                        }
                        return(t);
                      }
                      ATerm e_1 (ATerm t)
                      {
                        ATerm x_17 = NULL;
                        ATerm f_1 (ATerm t)
                        {
                          ATerm a_9 = t;
                          int b_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              LocalPopChoice(b_9);
                            }
                          else
                            {
                              t = a_9;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, f_1);
                        {
                          t = Make_0(t);
                          {
                            x_17 = t;
                            if(((v_17 != NULL) && (v_17 != x_17)))
                              _fail(x_17);
                            else
                              v_17 = x_17;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, d_1, e_1);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_f_9), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_17)), not_null(u_17)));
                      return(t);
                    }
                    t = map_1(t, c_1);
                    {
                      y_17 = t;
                      {
                        if(((l_17 != NULL) && (l_17 != y_17)))
                          _fail(y_17);
                        else
                          l_17 = y_17;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(m_17)), not_null(l_17)));
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(y_8);
          }
        else
          {
            t = x_8;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm g_9 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_9;
    }
  return(t);
}
ATerm number_node_1 (ATerm t, ATerm f_70 (ATerm))
{
  ATerm g_1 (ATerm t)
  {
    t = term_c_7;
    return(t);
  }
  t = split_2(t, g_1, _id);
  {
    ATerm d_19 (ATerm t)
    {
      ATerm n_18 = NULL,o_18 = NULL,q_18 = NULL;
      ATerm h_9 = t;
      int i_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          LocalPopChoice(i_9);
        }
      else
        {
          t = h_9;
          {
            ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL,w_18 = NULL;
            s_18 = t;
            l_18 :
            if(match_cons(s_18, sym__2))
              {
                t_18 = ATgetArgument(s_18, 0);
                u_18 = ATgetArgument(s_18, 1);
                m_18 :
                if(((ATgetType(u_18) == AT_LIST) && !(ATisEmpty(u_18))))
                  {
                    v_18 = ATgetFirst((ATermList) u_18);
                    w_18 = (ATerm) ATgetNext((ATermList) u_18);
                    {
                      ATerm j_9 = t;
                      int k_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm x_18 = NULL;
                          if(((n_18 != NULL) && (n_18 != t_18)))
                            _fail(t_18);
                          else
                            n_18 = t_18;
                          {
                            if(((o_18 != NULL) && (o_18 != v_18)))
                              _fail(v_18);
                            else
                              o_18 = v_18;
                            {
                              if(((q_18 != NULL) && (q_18 != w_18)))
                                _fail(w_18);
                              else
                                q_18 = w_18;
                              {
                                t = not_null(o_18);
                                {
                                  t = f_70(t);
                                  {
                                    ATerm y_18 = NULL,a_19 = NULL;
                                    ATerm z_18 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), term_c_7);
                                    {
                                      t = add_0(t);
                                      {
                                        z_18 = t;
                                        if(((y_18 != NULL) && (y_18 != z_18)))
                                          _fail(z_18);
                                        else
                                          y_18 = z_18;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(y_18), not_null(q_18));
                                      {
                                        t = d_19(t);
                                        {
                                          a_19 = t;
                                          if(((x_18 != NULL) && (x_18 != a_19)))
                                            _fail(a_19);
                                          else
                                            x_18 = a_19;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(x_18)), (ATerm) ATmakeAppl(sym__2, not_null(n_18), not_null(o_18)));
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(k_9);
                        }
                      else
                        {
                          t = j_9;
                          {
                            ATerm b_19 = NULL;
                            if(((n_18 != NULL) && (n_18 != t_18)))
                              _fail(t_18);
                            else
                              n_18 = t_18;
                            {
                              if(((o_18 != NULL) && (o_18 != v_18)))
                                _fail(v_18);
                              else
                                o_18 = v_18;
                              {
                                if(((q_18 != NULL) && (q_18 != w_18)))
                                  _fail(w_18);
                                else
                                  q_18 = w_18;
                                {
                                  ATerm c_19 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_18), not_null(q_18));
                                  {
                                    t = d_19(t);
                                    {
                                      c_19 = t;
                                      if(((b_19 != NULL) && (b_19 != c_19)))
                                        _fail(c_19);
                                      else
                                        b_19 = c_19;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(b_19)), not_null(o_18));
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
    t = d_19(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm h_1 (ATerm t)
  {
    ATerm l_9 = t;
    int m_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_19 = NULL,m_19 = NULL,n_19 = NULL;
        l_19 = t;
        k_19 :
        if(match_cons(l_19, sym_label_2))
          {
            m_19 = ATgetArgument(l_19, 0);
            n_19 = ATgetArgument(l_19, 1);
            t = not_null(n_19);
          }
        else
          {
            _fail(t);
          }
        LocalPopChoice(m_9);
      }
    else
      {
        t = l_9;
        {
        }
      }
    return(t);
  }
  t = map_1(t, h_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_node_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm b_70 (ATerm))
{
  ATerm v_19 = NULL,x_19 = NULL,b_20 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm n_9;
    n_9 = t;
    {
      ATerm w_19 = NULL;
      t = make_0(t);
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
      ATerm p_9;
      p_9 = t;
      {
        ATerm a_20 = NULL;
        ATerm i_1 (ATerm t)
        {
          ATerm j_1 (ATerm t)
          {
            ATerm y_19 = NULL;
            ATerm z_19 = NULL;
            t = term_b_6;
            {
              t = b_70(t);
              {
                z_19 = t;
                if(((y_19 != NULL) && (y_19 != z_19)))
                  _fail(z_19);
                else
                  y_19 = z_19;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(y_19), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, j_1);
          return(t);
        }
        t = map_1(t, i_1);
        {
          t = concat_0(t);
          {
            a_20 = t;
            if(((x_19 != NULL) && (x_19 != a_20)))
              _fail(a_20);
            else
              x_19 = a_20;
          }
        }
      }
      t = p_9;
      {
        ATerm c_20 = NULL;
        t = term_b_6;
        {
          t = b_70(t);
          {
            c_20 = t;
            if(((b_20 != NULL) && (b_20 != c_20)))
              _fail(c_20);
            else
              b_20 = c_20;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(x_19)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(b_20)), not_null(v_19)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL,q_20 = NULL,r_20 = NULL;
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_20 = NULL,t_20 = NULL,u_20 = NULL,v_20 = NULL,w_20 = NULL;
      s_20 = t;
      m_20 :
      if(match_cons(s_20, sym_prod_3))
        {
          t_20 = ATgetArgument(s_20, 0);
          u_20 = ATgetArgument(s_20, 1);
          v_20 = ATgetArgument(s_20, 2);
          {
            if(((p_20 != NULL) && (p_20 != t_20)))
              _fail(t_20);
            else
              p_20 = t_20;
            {
              if(((q_20 != NULL) && (q_20 != u_20)))
                _fail(u_20);
              else
                q_20 = u_20;
              {
                if(((r_20 != NULL) && (r_20 != v_20)))
                  _fail(v_20);
                else
                  r_20 = v_20;
                {
                  t = not_null(r_20);
                  {
                    ATerm k_1 (ATerm t)
                    {
                      ATerm x_20 = NULL,y_20 = NULL;
                      x_20 = t;
                      k_20 :
                      if(match_cons(x_20, sym_cons_1))
                        {
                          y_20 = ATgetArgument(x_20, 0);
                          if(((n_20 != NULL) && (n_20 != y_20)))
                            _fail(y_20);
                          else
                            n_20 = y_20;
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, k_1);
                  }
                  {
                    t = not_null(p_20);
                    {
                      ATerm l_1 (ATerm t)
                      {
                        t = not_null(n_20);
                        return(t);
                      }
                      t = symbols2pp_entries_1(t, l_1);
                    }
                  }
                }
              }
            }
          }
        }
      else
        {
          if(match_cons(s_20, sym_prod_fun_4))
            {
              t_20 = ATgetArgument(s_20, 0);
              u_20 = ATgetArgument(s_20, 1);
              v_20 = ATgetArgument(s_20, 2);
              w_20 = ATgetArgument(s_20, 3);
              {
                ATerm z_20 = NULL;
                if(((o_20 != NULL) && (o_20 != t_20)))
                  _fail(t_20);
                else
                  o_20 = t_20;
                {
                  if(((p_20 != NULL) && (p_20 != u_20)))
                    _fail(u_20);
                  else
                    p_20 = u_20;
                  {
                    if(((q_20 != NULL) && (q_20 != v_20)))
                      _fail(v_20);
                    else
                      q_20 = v_20;
                    {
                      if(((r_20 != NULL) && (r_20 != w_20)))
                        _fail(w_20);
                      else
                        r_20 = w_20;
                      {
                        ATerm a_21 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_y_10)), not_null(p_20)), (ATerm) ATinsert(ATinsert(ATempty, term_t_9), (ATerm) ATmakeAppl(sym_lit_1, not_null(o_20))));
                        {
                          t = concat_0(t);
                          {
                            a_21 = t;
                            if(((z_20 != NULL) && (z_20 != a_21)))
                              _fail(a_21);
                            else
                              z_20 = a_21;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(z_20), not_null(q_20), not_null(r_20));
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
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm z_10 = t;
        int a_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_11 = t;
            if((PushChoice() == 0))
              {
                ATerm m_1 (ATerm t)
                {
                  t = term_c_11;
                  return(t);
                }
                t = has_option_1(t, m_1);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = b_11;
              }
            {
              ATerm n_1 (ATerm t)
              {
                t = term_d_11;
                return(t);
              }
              t = debug_1(t, n_1);
            }
            LocalPopChoice(a_11);
          }
        else
          {
            t = z_10;
            {
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm z_78 (ATerm))
{
  ATerm f_21 (ATerm t)
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = z_78(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        t = Cons_2(t, _id, f_21);
      }
    return(t);
  }
  t = f_21(t);
  return(t);
}
ATerm init_0 (ATerm t)
{
  t = at_last_1(t, Tl_0);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm i_21 = NULL,j_21 = NULL,k_21 = NULL;
  i_21 = t;
  h_21 :
  if(((ATgetType(i_21) == AT_LIST) && !(ATisEmpty(i_21))))
    {
      j_21 = ATgetFirst((ATermList) i_21);
      k_21 = (ATerm) ATgetNext((ATermList) i_21);
      t = not_null(k_21);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Last_0 (ATerm t)
{
  ATerm q_21 = NULL,r_21 = NULL,s_21 = NULL;
  q_21 = t;
  o_21 :
  if(((ATgetType(q_21) == AT_LIST) && !(ATisEmpty(q_21))))
    {
      r_21 = ATgetFirst((ATermList) q_21);
      s_21 = (ATerm) ATgetNext((ATermList) q_21);
      p_21 :
      if(((ATgetType(s_21) == AT_LIST) && ATisEmpty(s_21)))
        {
          t = not_null(r_21);
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
  ATerm g_11 = t;
  int k_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Last_0(t);
      LocalPopChoice(k_11);
    }
  else
    {
      t = g_11;
      {
        t = Tl_0(t);
        t = last_0(t);
      }
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm y_21 = NULL,z_21 = NULL,a_22 = NULL;
  y_21 = t;
  x_21 :
  if(((ATgetType(y_21) == AT_LIST) && !(ATisEmpty(y_21))))
    {
      z_21 = ATgetFirst((ATermList) y_21);
      a_22 = (ATerm) ATgetNext((ATermList) y_21);
      t = not_null(z_21);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm unquote_chars_1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm p_11;
  p_11 = t;
  {
    t = Hd_0(t);
    t = o_87(t);
  }
  t = p_11;
  {
    ATerm t_11;
    t_11 = t;
    {
      t = last_0(t);
      t = o_87(t);
    }
    t = t_11;
    {
      t = Tl_0(t);
      t = at_last_1(t, Tl_0);
    }
  }
  return(t);
}
ATerm un_double_quote_chars_0 (ATerm t)
{
  ATerm o_1 (ATerm t)
  {
    ATerm e_22 = NULL;
    e_22 = t;
    d_22 :
    if(!(match_int(e_22, 34)))
      {
        _fail(t);
      }
    return(t);
  }
  t = unquote_chars_1(t, o_1);
  return(t);
}
ATerm string_as_chars_1 (ATerm t, ATerm z_87 (ATerm))
{
  t = explode_string_0(t);
  {
    t = z_87(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm un_double_quote_0 (ATerm t)
{
  ATerm p_1 (ATerm t)
  {
    ATerm q_1 (ATerm t)
    {
      ATerm g_22 = NULL;
      g_22 = t;
      f_22 :
      if(!(match_int(g_22, 34)))
        {
          _fail(t);
        }
      return(t);
    }
    t = unquote_chars_1(t, q_1);
    return(t);
  }
  t = string_as_chars_1(t, p_1);
  return(t);
}
ATerm sort_1 (ATerm t, ATerm q_61 (ATerm))
{
  ATerm m_22 = NULL,n_22 = NULL;
  m_22 = t;
  l_22 :
  if(match_cons(m_22, sym_sort_1))
    {
      n_22 = ATgetArgument(m_22, 0);
      {
        ATerm q_22 = NULL,s_22 = NULL;
        ATerm r_22 = NULL;
        t = SSLgetAnnotations(not_null(m_22));
        {
          r_22 = t;
          if(((q_22 != NULL) && (q_22 != r_22)))
            _fail(r_22);
          else
            q_22 = r_22;
        }
        {
          t = not_null(n_22);
          {
            ATerm u_22 = NULL;
            t = q_61(t);
            {
              s_22 = t;
              {
                ATerm v_22 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(s_22)), not_null(q_22));
                {
                  v_22 = t;
                  if(((u_22 != NULL) && (u_22 != v_22)))
                    _fail(v_22);
                  else
                    u_22 = v_22;
                }
                t = not_null(u_22);
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
ATerm lit_1 (ATerm t, ATerm g_61 (ATerm))
{
  ATerm f_23 = NULL,g_23 = NULL;
  f_23 = t;
  e_23 :
  if(match_cons(f_23, sym_lit_1))
    {
      g_23 = ATgetArgument(f_23, 0);
      {
        ATerm j_23 = NULL,l_23 = NULL;
        ATerm k_23 = NULL;
        t = SSLgetAnnotations(not_null(f_23));
        {
          k_23 = t;
          if(((j_23 != NULL) && (j_23 != k_23)))
            _fail(k_23);
          else
            j_23 = k_23;
        }
        {
          t = not_null(g_23);
          {
            ATerm n_23 = NULL;
            t = g_61(t);
            {
              l_23 = t;
              {
                ATerm o_23 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(l_23)), not_null(j_23));
                {
                  o_23 = t;
                  if(((n_23 != NULL) && (n_23 != o_23)))
                    _fail(o_23);
                  else
                    n_23 = o_23;
                }
                t = not_null(n_23);
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
  ATerm c_26 = NULL,d_26 = NULL;
  c_26 = t;
  b_26 :
  if(match_cons(c_26, sym_cons_1))
    {
      d_26 = ATgetArgument(c_26, 0);
      {
        ATerm w_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_26 = NULL,i_26 = NULL;
            ATerm h_26 = NULL;
            t = SSLgetAnnotations(not_null(c_26));
            {
              h_26 = t;
              if(((g_26 != NULL) && (g_26 != h_26)))
                _fail(h_26);
              else
                g_26 = h_26;
            }
            {
              t = not_null(d_26);
              {
                ATerm k_26 = NULL;
                t = l_0(t);
                {
                  i_26 = t;
                  {
                    ATerm l_26 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(i_26)), not_null(g_26));
                    {
                      l_26 = t;
                      if(((k_26 != NULL) && (k_26 != l_26)))
                        _fail(l_26);
                      else
                        k_26 = l_26;
                    }
                    t = not_null(k_26);
                  }
                }
              }
            }
            LocalPopChoice(y_11);
          }
        else
          {
            t = w_11;
            {
              ATerm o_26 = NULL,q_26 = NULL;
              ATerm p_26 = NULL;
              t = SSLgetAnnotations(not_null(c_26));
              {
                p_26 = t;
                if(((o_26 != NULL) && (o_26 != p_26)))
                  _fail(p_26);
                else
                  o_26 = p_26;
              }
              {
                t = not_null(d_26);
                {
                  ATerm s_26 = NULL;
                  t = l_0(t);
                  {
                    q_26 = t;
                    {
                      ATerm t_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(q_26)), not_null(o_26));
                      {
                        t_26 = t;
                        if(((s_26 != NULL) && (s_26 != t_26)))
                          _fail(t_26);
                        else
                          s_26 = t_26;
                      }
                      t = not_null(s_26);
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
ATerm foldr_3 (ATerm t, ATerm p_84 (ATerm), ATerm q_84 (ATerm), ATerm r_84 (ATerm))
{
  ATerm a_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_84(t);
      LocalPopChoice(g_12);
    }
  else
    {
      t = a_12;
      {
        ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
        i_27 = t;
        h_27 :
        if(((ATgetType(i_27) == AT_LIST) && !(ATisEmpty(i_27))))
          {
            j_27 = ATgetFirst((ATermList) i_27);
            k_27 = (ATerm) ATgetNext((ATermList) i_27);
            {
              ATerm n_27 = NULL,p_27 = NULL;
              ATerm h_12;
              h_12 = t;
              {
                ATerm o_27 = NULL;
                t = not_null(j_27);
                {
                  t = r_84(t);
                  {
                    o_27 = t;
                    if(((n_27 != NULL) && (n_27 != o_27)))
                      _fail(o_27);
                    else
                      n_27 = o_27;
                  }
                }
              }
              t = h_12;
              {
                ATerm q_27 = NULL;
                t = not_null(k_27);
                {
                  t = foldr_3(t, p_84, q_84, r_84);
                  {
                    q_27 = t;
                    if(((p_27 != NULL) && (p_27 != q_27)))
                      _fail(q_27);
                    else
                      p_27 = q_27;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_27), not_null(p_27));
                  t = q_84(t);
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
ATerm crush_3 (ATerm t, ATerm n_83 (ATerm), ATerm o_83 (ATerm), ATerm p_83 (ATerm))
{
  ATerm y_27 = NULL;
  ATerm a_28 = NULL;
  y_27 = t;
  {
    ATerm b_28 = NULL;
    ATerm d_28 = NULL,e_28 = NULL,f_28 = NULL;
    t = not_null(y_27);
    {
      b_28 = t;
      {
        t = SSL_explode_term(not_null(b_28));
        {
          d_28 = t;
          x_27 :
          if(match_cons(d_28, sym__2))
            {
              e_28 = ATgetArgument(d_28, 0);
              f_28 = ATgetArgument(d_28, 1);
              if(((a_28 != NULL) && (a_28 != f_28)))
                _fail(f_28);
              else
                a_28 = f_28;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_28);
      t = foldr_3(t, n_83, o_83, p_83);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm y_97 (ATerm))
{
  ATerm r_28 (ATerm t)
  {
    ATerm i_12 = t;
    int j_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_28 = NULL;
        t = y_97(t);
        {
          ATerm q_28 = NULL;
          q_28 = t;
          if(((p_28 != NULL) && (p_28 != q_28)))
            _fail(q_28);
          else
            p_28 = q_28;
          t = (ATerm) ATinsert(ATempty, not_null(p_28));
        }
        LocalPopChoice(j_12);
      }
    else
      {
        t = i_12;
        {
          ATerm r_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm s_1 (ATerm t)
          {
            ATerm k_12 = t;
            int l_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(l_12);
              }
            else
              {
                t = k_12;
                t = conc_more_lists_0(t);
              }
            return(t);
          }
          t = crush_3(t, r_1, s_1, r_28);
        }
      }
    return(t);
  }
  t = r_28(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm n_29 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm a_29 = NULL,h_29 = NULL;
    a_29 = t;
    u_28 :
    if(match_cons(a_29, sym_context_free_syntax_1))
      {
        h_29 = ATgetArgument(a_29, 0);
        t = not_null(h_29);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_p__1(t, t_1);
  {
    t = concat_0(t);
    {
      ATerm u_1 (ATerm t)
      {
        ATerm m_12 = t;
        int n_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_12 = t;
            int p_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm v_1 (ATerm t)
                {
                  ATerm w_1 (ATerm t)
                  {
                    ATerm x_1 (ATerm t)
                    {
                      ATerm j_29 = NULL;
                      j_29 = t;
                      v_28 :
                      if(!(match_int(j_29, 34)))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = unquote_chars_1(t, x_1);
                    return(t);
                  }
                  t = string_as_chars_1(t, w_1);
                  return(t);
                }
                t = cons_1(t, v_1);
                LocalPopChoice(p_12);
              }
            else
              {
                t = o_12;
                {
                  ATerm q_12 = t;
                  int v_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm y_1 (ATerm t)
                      {
                        ATerm z_1 (ATerm t)
                        {
                          ATerm a_2 (ATerm t)
                          {
                            ATerm k_29 = NULL;
                            k_29 = t;
                            w_28 :
                            if(!(match_int(k_29, 34)))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          t = unquote_chars_1(t, a_2);
                          return(t);
                        }
                        t = string_as_chars_1(t, z_1);
                        return(t);
                      }
                      t = lit_1(t, y_1);
                      LocalPopChoice(v_12);
                    }
                  else
                    {
                      t = q_12;
                      {
                        ATerm b_2 (ATerm t)
                        {
                          ATerm c_2 (ATerm t)
                          {
                            ATerm d_2 (ATerm t)
                            {
                              ATerm l_29 = NULL;
                              l_29 = t;
                              x_28 :
                              if(!(match_int(l_29, 34)))
                                {
                                  _fail(t);
                                }
                              return(t);
                            }
                            t = unquote_chars_1(t, d_2);
                            return(t);
                          }
                          t = string_as_chars_1(t, c_2);
                          return(t);
                        }
                        t = sort_1(t, b_2);
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
            }
          }
        return(t);
      }
      t = topdown_1(t, u_1);
      {
        t = map_1(t, generate_pp_entries_0);
        {
          ATerm e_2 (ATerm t)
          {
            ATerm w_12 = t;
            if((PushChoice() == 0))
              {
                ATerm m_29 = NULL;
                m_29 = t;
                y_28 :
                if(((ATgetType(m_29) == AT_LIST) && ATisEmpty(m_29)))
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
                t = w_12;
              }
            return(t);
          }
          t = filter_1(t, e_2);
          {
            t = concat_0(t);
            {
              n_29 = t;
              {
                t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(n_29));
                {
                  ATerm f_2 (ATerm t)
                  {
                    ATerm x_12 = t;
                    int y_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_12 = t;
                        int a_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = Arg_1(t, int_to_string_0);
                            LocalPopChoice(a_13);
                          }
                        else
                          {
                            t = z_12;
                            {
                              ATerm b_13 = t;
                              int c_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = selector_2(t, int_to_string_0, _id);
                                  LocalPopChoice(c_13);
                                }
                              else
                                {
                                  t = b_13;
                                  {
                                    ATerm g_2 (ATerm t)
                                    {
                                      t = string_as_chars_1(t, double_quote_chars_0);
                                      return(t);
                                    }
                                    t = S_1(t, g_2);
                                  }
                                }
                            }
                          }
                        LocalPopChoice(y_12);
                      }
                    else
                      {
                        t = x_12;
                        {
                        }
                      }
                    return(t);
                  }
                  t = topdown_1(t, f_2);
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
ATerm _2 (ATerm t, ATerm n_57 (ATerm), ATerm o_57 (ATerm))
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  w_29 :
  if(match_cons(x_29, sym__2))
    {
      y_29 = ATgetArgument(x_29, 0);
      z_29 = ATgetArgument(x_29, 1);
      {
        ATerm d_30 = NULL,f_30 = NULL;
        ATerm e_30 = NULL;
        t = SSLgetAnnotations(not_null(x_29));
        {
          e_30 = t;
          if(((d_30 != NULL) && (d_30 != e_30)))
            _fail(e_30);
          else
            d_30 = e_30;
        }
        {
          t = not_null(y_29);
          {
            ATerm h_30 = NULL;
            t = n_57(t);
            {
              f_30 = t;
              {
                t = not_null(z_29);
                {
                  ATerm j_30 = NULL;
                  t = o_57(t);
                  {
                    h_30 = t;
                    {
                      ATerm k_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(f_30), not_null(h_30)), not_null(d_30));
                      {
                        k_30 = t;
                        if(((j_30 != NULL) && (j_30 != k_30)))
                          _fail(k_30);
                        else
                          j_30 = k_30;
                      }
                      t = not_null(j_30);
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
  ATerm g_13;
  g_13 = t;
  {
    ATerm r_30 = NULL;
    ATerm s_30 = NULL;
    s_30 = t;
    if(((r_30 != NULL) && (r_30 != s_30)))
      _fail(s_30);
    else
      r_30 = s_30;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_13, not_null(r_30));
      t = printnl_0(t);
    }
  }
  t = g_13;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm l_13;
  l_13 = t;
  {
    t = error_0(t);
    {
      t = term_c_7;
      t = exit_0(t);
    }
  }
  t = l_13;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm m_73 (ATerm))
{
  ATerm u_30 (ATerm t)
  {
    ATerm o_13 = t;
    int p_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_73(t);
        LocalPopChoice(p_13);
      }
    else
      {
        t = o_13;
        t = _one(t, u_30);
      }
    return(t);
  }
  t = u_30(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
  y_30 = t;
  x_30 :
  if(match_cons(y_30, sym__2))
    {
      z_30 = ATgetArgument(y_30, 0);
      a_31 = ATgetArgument(y_30, 1);
      {
        ATerm q_13;
        q_13 = t;
        {
          t = not_null(a_31);
          {
            ATerm h_2 (ATerm t)
            {
              ATerm d_31 = NULL;
              d_31 = t;
              if(((z_30 != NULL) && (z_30 != d_31)))
                _fail(d_31);
              else
                z_30 = d_31;
              return(t);
            }
            t = oncetd_1(t, h_2);
          }
        }
        t = q_13;
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
  t = term_t_13;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm i_31 = NULL;
  ATerm k_31 = NULL;
  i_31 = t;
  {
    ATerm l_31 = NULL;
    t = get_options_0(t);
    {
      l_31 = t;
      {
        if(((k_31 != NULL) && (k_31 != l_31)))
          _fail(l_31);
        else
          k_31 = l_31;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(i_31), not_null(k_31));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_b_6;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm u_13;
  u_13 = t;
  {
    t = term_b_6;
    {
      t = c_90(t);
      t = check_option_0(t);
    }
  }
  t = u_13;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm v_13 = t;
  int z_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_2 (ATerm t)
      {
        t = term_a_14;
        return(t);
      }
      t = has_option_1(t, i_2);
      {
        t = (ATerm) ATinsert(ATempty, term_e_14);
        t = fatal_error_0(t);
      }
      LocalPopChoice(z_13);
    }
  else
    {
      t = v_13;
      {
        t = (ATerm) ATinsert(ATempty, term_h_14);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm j_98 (ATerm))
{
  ATerm w_31 = NULL,x_31 = NULL,y_31 = NULL;
  w_31 = t;
  u_31 :
  if(match_cons(w_31, sym__2))
    {
      x_31 = ATgetArgument(w_31, 0);
      y_31 = ATgetArgument(w_31, 1);
      v_31 :
      if(match_string(x_31, "in-type"))
        {
          ATerm a_32 = NULL,b_32 = NULL;
          ATerm i_14;
          i_14 = t;
          {
            ATerm c_32 = NULL;
            ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
            t = not_null(y_31);
            {
              c_32 = t;
              {
                t = SSL_explode_term(not_null(c_32));
                {
                  e_32 = t;
                  r_31 :
                  if(match_cons(e_32, sym__2))
                    {
                      f_32 = ATgetArgument(e_32, 0);
                      g_32 = ATgetArgument(e_32, 1);
                      s_31 :
                      if(((ATgetType(g_32) == AT_LIST) && !(ATisEmpty(g_32))))
                        {
                          h_32 = ATgetFirst((ATermList) g_32);
                          i_32 = (ATerm) ATgetNext((ATermList) g_32);
                          t_31 :
                          if(((ATgetType(i_32) == AT_LIST) && ATisEmpty(i_32)))
                            {
                              {
                                if(((b_32 != NULL) && (b_32 != f_32)))
                                  _fail(f_32);
                                else
                                  b_32 = f_32;
                                if(((a_32 != NULL) && (a_32 != h_32)))
                                  _fail(h_32);
                                else
                                  a_32 = h_32;
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
          t = i_14;
          {
            t = not_null(b_32);
            {
              ATerm j_14 = t;
              int k_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_98(t);
                  LocalPopChoice(k_14);
                }
              else
                {
                  t = j_14;
                  t = type_failure_0(t);
                }
            }
            t = not_null(a_32);
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
  ATerm o_32 = NULL,p_32 = NULL,q_32 = NULL;
  o_32 = t;
  n_32 :
  if(match_cons(o_32, sym__2))
    {
      p_32 = ATgetArgument(o_32, 0);
      q_32 = ATgetArgument(o_32, 1);
      t = SSL_mkterm(not_null(p_32), not_null(q_32));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm k_98 (ATerm))
{
  ATerm z_32 = NULL,a_33 = NULL,b_33 = NULL;
  z_32 = t;
  x_32 :
  if(match_cons(z_32, sym__2))
    {
      a_33 = ATgetArgument(z_32, 0);
      b_33 = ATgetArgument(z_32, 1);
      y_32 :
      if(match_string(a_33, "out-type"))
        {
          ATerm d_33 = NULL;
          ATerm e_33 = NULL,g_33 = NULL;
          ATerm f_33 = NULL;
          t = term_b_6;
          {
            t = k_98(t);
            {
              f_33 = t;
              if(((e_33 != NULL) && (e_33 != f_33)))
                _fail(f_33);
              else
                e_33 = f_33;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_33), (ATerm) ATinsert(ATempty, not_null(b_33)));
            {
              t = mkterm_0(t);
              {
                g_33 = t;
                if(((d_33 != NULL) && (d_33 != g_33)))
                  _fail(g_33);
                else
                  d_33 = g_33;
              }
            }
          }
          t = not_null(d_33);
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
  ATerm l_14 = t;
  int m_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_2 (ATerm t)
      {
        ATerm m_33 = NULL;
        m_33 = t;
        k_33 :
        if(!(match_string(m_33, "out-type")))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, j_2, _id);
      t = OutId_1(t, k_0);
      LocalPopChoice(m_14);
    }
  else
    {
      t = l_14;
      {
        ATerm k_2 (ATerm t)
        {
          ATerm n_33 = NULL;
          n_33 = t;
          l_33 :
          if(!(match_string(n_33, "in-type")))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, k_2, _id);
        t = InId_1(t, j_0);
      }
    }
  return(t);
}
ATerm termid_set_p__1 (ATerm t, ATerm r_98 (ATerm))
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  q_33 :
  if(match_cons(t_33, sym__2))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      {
        ATerm y_33 = NULL;
        ATerm z_33 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_u_14, not_null(v_33));
        {
          t = r_98(t);
          {
            z_33 = t;
            if(((y_33 != NULL) && (y_33 != z_33)))
              _fail(z_33);
            else
              y_33 = z_33;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(u_33), not_null(y_33));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_70 (ATerm))
{
  ATerm v_14 = t;
  int w_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_70(t);
      LocalPopChoice(w_14);
    }
  else
    {
      t = v_14;
      {
      }
    }
  return(t);
}
ATerm termid_check_p__1 (ATerm t, ATerm p_98 (ATerm))
{
  ATerm f_34 = NULL,g_34 = NULL,h_34 = NULL;
  f_34 = t;
  e_34 :
  if(match_cons(f_34, sym__2))
    {
      g_34 = ATgetArgument(f_34, 0);
      h_34 = ATgetArgument(f_34, 1);
      {
        ATerm k_34 = NULL;
        ATerm l_34 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_z_14, not_null(h_34));
        {
          t = p_98(t);
          {
            l_34 = t;
            if(((k_34 != NULL) && (k_34 != l_34)))
              _fail(l_34);
            else
              k_34 = l_34;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_34), not_null(k_34));
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
  ATerm u_34 = NULL;
  ATerm a_15;
  a_15 = t;
  {
    ATerm l_2 (ATerm t)
    {
      ATerm v_34 = NULL,w_34 = NULL;
      v_34 = t;
      t_34 :
      if(match_cons(v_34, sym_Program_1))
        {
          w_34 = ATgetArgument(v_34, 0);
          if(((u_34 != NULL) && (u_34 != w_34)))
            _fail(w_34);
          else
            u_34 = w_34;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, l_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_15), not_null(u_34)), term_b_15));
      {
        t = printnl_0(t);
        {
          t = term_c_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = a_15;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm a_35 = NULL,b_35 = NULL,c_35 = NULL;
  a_35 = t;
  z_34 :
  if(match_cons(a_35, sym__2))
    {
      b_35 = ATgetArgument(a_35, 0);
      c_35 = ATgetArgument(a_35, 1);
      {
        ATerm d_15;
        d_15 = t;
        t = SSL_printnl(not_null(b_35), not_null(c_35));
        t = d_15;
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
  ATerm h_35 = NULL;
  h_35 = t;
  t = SSL_implode_string(not_null(h_35));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm e_15 = t;
  int f_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_15);
    }
  else
    {
      t = e_15;
      {
        ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
        m_35 = t;
        l_35 :
        if(((ATgetType(m_35) == AT_LIST) && !(ATisEmpty(m_35))))
          {
            n_35 = ATgetFirst((ATermList) m_35);
            o_35 = (ATerm) ATgetNext((ATermList) m_35);
            {
              t = not_null(n_35);
              {
                ATerm m_2 (ATerm t)
                {
                  t = not_null(o_35);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, m_2);
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
  ATerm y_35 = NULL;
  ATerm a_36 = NULL;
  y_35 = t;
  {
    ATerm b_36 = NULL;
    ATerm d_36 = NULL,e_36 = NULL,f_36 = NULL;
    t = not_null(y_35);
    {
      b_36 = t;
      {
        t = SSL_explode_term(not_null(b_36));
        {
          d_36 = t;
          w_35 :
          if(match_cons(d_36, sym__2))
            {
              e_36 = ATgetArgument(d_36, 0);
              f_36 = ATgetArgument(d_36, 1);
              x_35 :
              if(match_string(e_36, ""))
                {
                  if(((a_36 != NULL) && (a_36 != f_36)))
                    _fail(f_36);
                  else
                    a_36 = f_36;
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
      t = not_null(a_36);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm j_36 (ATerm t)
  {
    ATerm g_15 = t;
    int l_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_36);
        LocalPopChoice(l_15);
      }
    else
      {
        t = g_15;
        {
          t = Nil_0(t);
          t = o_78(t);
        }
      }
    return(t);
  }
  t = j_36(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm m_36 = NULL,n_36 = NULL,o_36 = NULL;
  m_36 = t;
  l_36 :
  if(match_cons(m_36, sym__2))
    {
      n_36 = ATgetArgument(m_36, 0);
      o_36 = ATgetArgument(m_36, 1);
      {
        t = not_null(n_36);
        {
          ATerm n_2 (ATerm t)
          {
            t = not_null(o_36);
            return(t);
          }
          t = at_end_1(t, n_2);
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
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm t_36 = NULL;
  t_36 = t;
  t = SSL_explode_string(not_null(t_36));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm r_15 = t;
    int t_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(t_15);
      }
    else
      {
        t = r_15;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm x_36 = NULL;
  x_36 = t;
  t = SSL_is_string(not_null(x_36));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm w_15 = t;
  int x_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(x_15);
    }
  else
    {
      t = w_15;
      {
        ATerm y_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              ATerm a_16 = t;
              int b_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(b_16);
                }
              else
                {
                  t = a_16;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, o_2);
            LocalPopChoice(z_15);
          }
        else
          {
            t = y_15;
            {
              ATerm g_37 = NULL,h_37 = NULL,i_37 = NULL;
              g_37 = t;
              f_37 :
              if(match_cons(g_37, sym_Path_1))
                {
                  h_37 = ATgetArgument(g_37, 0);
                  t = not_null(h_37);
                }
              else
                {
                  if(match_cons(g_37, sym_Var_1))
                    {
                      h_37 = ATgetArgument(g_37, 0);
                      {
                        t = not_null(h_37);
                        {
                          ATerm c_16 = t;
                          int d_16 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(d_16);
                            }
                          else
                            {
                              t = c_16;
                              {
                                ATerm p_2 (ATerm t)
                                {
                                  t = term_e_16;
                                  return(t);
                                }
                                t = debug_1(t, p_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(g_37, sym_Prefix_2))
                        {
                          h_37 = ATgetArgument(g_37, 0);
                          i_37 = ATgetArgument(g_37, 1);
                          {
                            ATerm n_37 = NULL,p_37 = NULL;
                            ATerm f_16;
                            f_16 = t;
                            {
                              ATerm o_37 = NULL;
                              t = not_null(h_37);
                              {
                                t = eval_config_0(t);
                                {
                                  o_37 = t;
                                  if(((n_37 != NULL) && (n_37 != o_37)))
                                    _fail(o_37);
                                  else
                                    n_37 = o_37;
                                }
                              }
                            }
                            t = f_16;
                            {
                              ATerm q_37 = NULL;
                              t = not_null(i_37);
                              {
                                t = eval_config_0(t);
                                {
                                  q_37 = t;
                                  if(((p_37 != NULL) && (p_37 != q_37)))
                                    _fail(q_37);
                                  else
                                    p_37 = q_37;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(n_37), not_null(p_37));
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
  ATerm y_37 = NULL;
  y_37 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_k_16, not_null(y_37));
    {
      t = table_get_0(t);
      {
        ATerm l_16 = t;
        int m_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm q_16;
              q_16 = t;
              {
                ATerm a_38 = NULL;
                ATerm b_38 = NULL;
                b_38 = t;
                if(((a_38 != NULL) && (a_38 != b_38)))
                  _fail(b_38);
                else
                  a_38 = b_38;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_k_16, not_null(y_37), not_null(a_38));
                  t = table_put_0(t);
                }
              }
              t = q_16;
            }
            LocalPopChoice(m_16);
          }
        else
          {
            t = l_16;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_91 (ATerm))
{
  ATerm s_16 = t;
  int v_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_16;
      w_16 = t;
      {
        ATerm f_38 = NULL;
        ATerm g_38 = NULL;
        t = term_x_16;
        {
          t = get_config_0(t);
          {
            g_38 = t;
            if(((f_38 != NULL) && (f_38 != g_38)))
              _fail(g_38);
            else
              f_38 = g_38;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_38), term_y_16);
          t = geq_0(t);
        }
      }
      t = w_16;
      t = u_91(t);
      LocalPopChoice(v_16);
    }
  else
    {
      t = s_16;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
  k_38 = t;
  j_38 :
  if(match_cons(k_38, sym__2))
    {
      l_38 = ATgetArgument(k_38, 0);
      m_38 = ATgetArgument(k_38, 1);
      t = SSL_WriteToTextFile(not_null(l_38), not_null(m_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm s_38 = NULL,t_38 = NULL,u_38 = NULL;
  s_38 = t;
  r_38 :
  if(match_cons(s_38, sym__2))
    {
      t_38 = ATgetArgument(s_38, 0);
      u_38 = ATgetArgument(s_38, 1);
      t = SSL_WriteToBinaryFile(not_null(t_38), not_null(u_38));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm c_39 = NULL;
  ATerm z_16;
  z_16 = t;
  {
    ATerm q_2 (ATerm t)
    {
      ATerm a_17 = t;
      int b_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm r_2 (ATerm t)
          {
            ATerm d_39 = NULL,e_39 = NULL;
            d_39 = t;
            z_38 :
            if(match_cons(d_39, sym_Output_1))
              {
                e_39 = ATgetArgument(d_39, 0);
                if(((c_39 != NULL) && (c_39 != e_39)))
                  _fail(e_39);
                else
                  c_39 = e_39;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, r_2);
          LocalPopChoice(b_17);
        }
      else
        {
          t = a_17;
          {
            ATerm f_39 = NULL;
            t = term_d_17;
            {
              f_39 = t;
              if(((c_39 != NULL) && (c_39 != f_39)))
                _fail(f_39);
              else
                c_39 = f_39;
            }
          }
        }
      return(t);
    }
    t = _2(t, q_2, _id);
  }
  t = z_16;
  {
    ATerm s_2 (ATerm t)
    {
      ATerm t_2 (ATerm t)
      {
        t = not_null(c_39);
        return(t);
      }
      t = split_2(t, t_2, _id);
      return(t);
    }
    t = _2(t, _id, s_2);
    {
      ATerm e_17 = t;
      int f_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_2 (ATerm t)
          {
            ATerm v_2 (ATerm t)
            {
              ATerm g_39 = NULL;
              g_39 = t;
              b_39 :
              if(!(match_cons(g_39, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, v_2);
            return(t);
          }
          t = _2(t, u_2, WriteToBinaryFile_0);
          LocalPopChoice(f_17);
        }
      else
        {
          t = e_17;
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
ATerm apply_strategy_1 (ATerm t, ATerm b_90 (ATerm))
{
  ATerm m_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  ATerm g_17;
  g_17 = t;
  t = dtime_0(t);
  t = g_17;
  {
    t = b_90(t);
    {
      ATerm h_17;
      h_17 = t;
      {
        ATerm n_39 = NULL;
        t = dtime_0(t);
        {
          n_39 = t;
          if(((m_39 != NULL) && (m_39 != n_39)))
            _fail(n_39);
          else
            m_39 = n_39;
        }
      }
      t = h_17;
      {
        o_39 = t;
        l_39 :
        if(match_cons(o_39, sym__2))
          {
            p_39 = ATgetArgument(o_39, 0);
            q_39 = ATgetArgument(o_39, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(p_39)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(m_39))), not_null(q_39));
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
ATerm debug_1 (ATerm t, ATerm x_88 (ATerm))
{
  ATerm z_17;
  z_17 = t;
  {
    ATerm x_39 = NULL,z_39 = NULL;
    ATerm a_18;
    a_18 = t;
    {
      ATerm y_39 = NULL;
      t = x_88(t);
      {
        y_39 = t;
        if(((x_39 != NULL) && (x_39 != y_39)))
          _fail(y_39);
        else
          x_39 = y_39;
      }
    }
    t = a_18;
    {
      ATerm a_40 = NULL;
      a_40 = t;
      if(((z_39 != NULL) && (z_39 != a_40)))
        _fail(a_40);
      else
        z_39 = a_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATempty, not_null(z_39)), not_null(x_39)));
        t = printnl_0(t);
      }
    }
  }
  t = z_17;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm e_40 = NULL;
  ATerm b_18 = t;
  int c_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_40 = NULL;
      f_40 = t;
      {
        if(((e_40 != NULL) && (e_40 != f_40)))
          _fail(f_40);
        else
          e_40 = f_40;
        t = SSL_ReadFromFile(not_null(e_40));
      }
      LocalPopChoice(c_18);
    }
  else
    {
      t = b_18;
      {
        ATerm w_2 (ATerm t)
        {
          t = term_d_18;
          return(t);
        }
        t = debug_1(t, w_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_86 (ATerm), ATerm d_86 (ATerm))
{
  ATerm j_40 = NULL,l_40 = NULL;
  ATerm e_18;
  e_18 = t;
  {
    ATerm k_40 = NULL;
    t = c_86(t);
    {
      k_40 = t;
      if(((j_40 != NULL) && (j_40 != k_40)))
        _fail(k_40);
      else
        j_40 = k_40;
    }
  }
  t = e_18;
  {
    ATerm o_40 = NULL;
    t = d_86(t);
    {
      o_40 = t;
      if(((l_40 != NULL) && (l_40 != o_40)))
        _fail(o_40);
      else
        l_40 = o_40;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(j_40), not_null(l_40));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm u_40 = NULL;
  ATerm f_18;
  f_18 = t;
  {
    ATerm g_18 = t;
    int h_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_2 (ATerm t)
        {
          ATerm v_40 = NULL,w_40 = NULL;
          v_40 = t;
          s_40 :
          if(match_cons(v_40, sym_Input_1))
            {
              w_40 = ATgetArgument(v_40, 0);
              if(((u_40 != NULL) && (u_40 != w_40)))
                _fail(w_40);
              else
                u_40 = w_40;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, x_2);
        LocalPopChoice(h_18);
      }
    else
      {
        t = g_18;
        {
          ATerm x_40 = NULL;
          t = term_i_18;
          {
            x_40 = t;
            if(((u_40 != NULL) && (u_40 != x_40)))
              _fail(x_40);
            else
              u_40 = x_40;
          }
        }
      }
  }
  t = f_18;
  {
    ATerm y_2 (ATerm t)
    {
      t = not_null(u_40);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, y_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm b_41 = NULL;
    b_41 = t;
    a_41 :
    if(!(match_string(b_41, "-v")))
      {
        if(!(match_string(b_41, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_3 (ATerm t)
  {
    t = term_k_18;
    t = set_config_0(t);
    t = term_p_18;
    return(t);
  }
  ATerm b_3 (ATerm t)
  {
    t = term_r_18;
    return(t);
  }
  t = Option_3(t, z_2, a_3, b_3);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm c_3 (ATerm t)
  {
    ATerm j_41 = NULL;
    j_41 = t;
    h_41 :
    if(!(match_string(j_41, "-k")))
      {
        if(!(match_string(j_41, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm d_3 (ATerm t)
  {
    ATerm e_19;
    e_19 = t;
    {
      ATerm k_41 = NULL;
      ATerm l_41 = NULL;
      t = string_to_int_0(t);
      {
        l_41 = t;
        if(((k_41 != NULL) && (k_41 != l_41)))
          _fail(l_41);
        else
          k_41 = l_41;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_f_19, not_null(k_41));
        t = set_config_0(t);
      }
    }
    t = e_19;
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    t = term_g_19;
    return(t);
  }
  t = ArgOption_3(t, c_3, d_3, e_3);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_41 = NULL;
  o_41 = t;
  t = SSL_string_to_int(not_null(o_41));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm h_19 = t;
  int i_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_3 (ATerm t)
      {
        ATerm w_41 = NULL;
        w_41 = t;
        r_41 :
        if(!(match_string(w_41, "-S")))
          {
            if(!(match_string(w_41, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm g_3 (ATerm t)
      {
        t = term_o_19;
        t = set_config_0(t);
        t = term_p_19;
        return(t);
      }
      ATerm h_3 (ATerm t)
      {
        t = term_q_19;
        return(t);
      }
      t = Option_3(t, f_3, g_3, h_3);
      LocalPopChoice(i_19);
    }
  else
    {
      t = h_19;
      {
        ATerm r_19 = t;
        int s_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_3 (ATerm t)
            {
              ATerm x_41 = NULL;
              x_41 = t;
              s_41 :
              if(!(match_string(x_41, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm j_3 (ATerm t)
            {
              ATerm a_42 = NULL;
              ATerm t_19;
              t_19 = t;
              {
                ATerm y_41 = NULL;
                ATerm z_41 = NULL;
                t = string_to_int_0(t);
                {
                  z_41 = t;
                  if(((y_41 != NULL) && (y_41 != z_41)))
                    _fail(z_41);
                  else
                    y_41 = z_41;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_16, not_null(y_41));
                  t = set_config_0(t);
                }
              }
              t = t_19;
              {
                ATerm b_42 = NULL;
                b_42 = t;
                if(((a_42 != NULL) && (a_42 != b_42)))
                  _fail(b_42);
                else
                  a_42 = b_42;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(a_42));
              }
              return(t);
            }
            ATerm k_3 (ATerm t)
            {
              t = term_u_19;
              return(t);
            }
            t = ArgOption_3(t, i_3, j_3, k_3);
            LocalPopChoice(s_19);
          }
        else
          {
            t = r_19;
            {
              ATerm l_3 (ATerm t)
              {
                ATerm c_42 = NULL;
                c_42 = t;
                v_41 :
                if(!(match_string(c_42, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm m_3 (ATerm t)
              {
                t = term_e_20;
                t = set_config_0(t);
                t = term_f_20;
                return(t);
              }
              ATerm n_3 (ATerm t)
              {
                t = term_g_20;
                return(t);
              }
              t = Option_3(t, l_3, m_3, n_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm h_20 = t;
  int i_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(i_20);
    }
  else
    {
      t = h_20;
      {
        ATerm j_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(l_20);
          }
        else
          {
            t = j_20;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm i_42 = NULL;
    i_42 = t;
    f_42 :
    if(!(match_string(i_42, "-o")))
      {
        if(!(match_string(i_42, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm p_3 (ATerm t)
  {
    ATerm l_42 = NULL;
    ATerm b_21;
    b_21 = t;
    {
      ATerm j_42 = NULL;
      ATerm k_42 = NULL;
      k_42 = t;
      if(((j_42 != NULL) && (j_42 != k_42)))
        _fail(k_42);
      else
        j_42 = k_42;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_21, not_null(j_42));
        t = set_config_0(t);
      }
    }
    t = b_21;
    {
      ATerm m_42 = NULL;
      m_42 = t;
      if(((l_42 != NULL) && (l_42 != m_42)))
        _fail(m_42);
      else
        l_42 = m_42;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_42));
    }
    return(t);
  }
  ATerm q_3 (ATerm t)
  {
    t = term_d_21;
    return(t);
  }
  t = ArgOption_3(t, o_3, p_3, q_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm e_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(g_21);
    }
  else
    {
      t = e_21;
      {
        ATerm r_3 (ATerm t)
        {
          ATerm q_42 = NULL;
          q_42 = t;
          p_42 :
          if(!(match_string(q_42, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_3 (ATerm t)
        {
          t = term_m_21;
          t = set_config_0(t);
          t = term_n_21;
          return(t);
        }
        ATerm t_3 (ATerm t)
        {
          t = term_t_21;
          return(t);
        }
        t = Option_3(t, r_3, s_3, t_3);
      }
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL,z_42 = NULL;
  w_42 = t;
  t_42 :
  if(match_cons(w_42, sym__3))
    {
      x_42 = ATgetArgument(w_42, 0);
      y_42 = ATgetArgument(w_42, 1);
      z_42 = ATgetArgument(w_42, 2);
      {
        ATerm u_21;
        u_21 = t;
        {
          ATerm f_43 = NULL;
          ATerm g_43 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_42), not_null(y_42));
          {
            ATerm v_21 = t;
            int w_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(w_21);
              }
            else
              {
                t = v_21;
                t = (ATerm) ATempty;
              }
            {
              g_43 = t;
              if(((f_43 != NULL) && (f_43 != g_43)))
                _fail(g_43);
              else
                f_43 = g_43;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(x_42), not_null(y_42), (ATerm) ATinsert(CheckATermList(not_null(f_43)), not_null(z_42)));
            t = table_put_0(t);
          }
        }
        t = u_21;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_94 (ATerm))
{
  ATerm k_43 = NULL;
  ATerm l_43 = NULL;
  t = term_b_6;
  {
    t = b_94(t);
    {
      l_43 = t;
      if(((k_43 != NULL) && (k_43 != l_43)))
        _fail(l_43);
      else
        k_43 = l_43;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_22, term_c_22, not_null(k_43));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm s_43 = NULL,t_43 = NULL,u_43 = NULL,v_43 = NULL,w_43 = NULL;
  s_43 = t;
  q_43 :
  if(match_string(s_43, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(s_43) == AT_LIST) && !(ATisEmpty(s_43))))
        {
          t_43 = ATgetFirst((ATermList) s_43);
          u_43 = (ATerm) ATgetNext((ATermList) s_43);
          r_43 :
          if(((ATgetType(u_43) == AT_LIST) && !(ATisEmpty(u_43))))
            {
              v_43 = ATgetFirst((ATermList) u_43);
              w_43 = (ATerm) ATgetNext((ATermList) u_43);
              {
                ATerm c_44 = NULL;
                ATerm h_22;
                h_22 = t;
                {
                  t = not_null(t_43);
                  t = g_0(t);
                }
                t = h_22;
                {
                  ATerm d_44 = NULL;
                  t = not_null(v_43);
                  {
                    t = h_0(t);
                    {
                      d_44 = t;
                      if(((c_44 != NULL) && (c_44 != d_44)))
                        _fail(d_44);
                      else
                        c_44 = d_44;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_43)), not_null(c_44));
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
  ATerm u_3 (ATerm t)
  {
    ATerm l_44 = NULL;
    l_44 = t;
    i_44 :
    if(!(match_string(l_44, "-i")))
      {
        if(!(match_string(l_44, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm v_3 (ATerm t)
  {
    ATerm o_44 = NULL;
    ATerm i_22;
    i_22 = t;
    {
      ATerm m_44 = NULL;
      ATerm n_44 = NULL;
      n_44 = t;
      if(((m_44 != NULL) && (m_44 != n_44)))
        _fail(n_44);
      else
        m_44 = n_44;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_j_22, not_null(m_44));
        t = set_config_0(t);
      }
    }
    t = i_22;
    {
      ATerm p_44 = NULL;
      p_44 = t;
      if(((o_44 != NULL) && (o_44 != p_44)))
        _fail(p_44);
      else
        o_44 = p_44;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_44));
    }
    return(t);
  }
  ATerm w_3 (ATerm t)
  {
    t = term_k_22;
    return(t);
  }
  t = ArgOption_3(t, u_3, v_3, w_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm o_22 = t;
  int p_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(p_22);
    }
  else
    {
      t = o_22;
      {
        ATerm t_22 = t;
        int w_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(w_22);
          }
        else
          {
            t = t_22;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATempty, term_x_22));
  {
    t = printnl_0(t);
    {
      t = term_c_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_44 = NULL;
  t_44 = t;
  t = SSL_TicksToSeconds(not_null(t_44));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL;
  y_44 = t;
  x_44 :
  if(match_cons(y_44, sym__2))
    {
      z_44 = ATgetArgument(y_44, 0);
      a_45 = ATgetArgument(y_44, 1);
      {
        ATerm y_22 = t;
        int z_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_44), not_null(a_45));
            LocalPopChoice(z_22);
          }
        else
          {
            t = y_22;
            t = SSL_addr(not_null(z_44), not_null(a_45));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_84 (ATerm), ATerm o_84 (ATerm))
{
  ATerm a_23 = t;
  int b_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_84(t);
      LocalPopChoice(b_23);
    }
  else
    {
      t = a_23;
      {
        ATerm h_45 = NULL,i_45 = NULL,j_45 = NULL;
        h_45 = t;
        g_45 :
        if(((ATgetType(h_45) == AT_LIST) && !(ATisEmpty(h_45))))
          {
            i_45 = ATgetFirst((ATermList) h_45);
            j_45 = (ATerm) ATgetNext((ATermList) h_45);
            {
              ATerm o_45 = NULL;
              ATerm p_45 = NULL;
              t = not_null(j_45);
              {
                t = foldr_2(t, n_84, o_84);
                {
                  p_45 = t;
                  if(((o_45 != NULL) && (o_45 != p_45)))
                    _fail(p_45);
                  else
                    o_45 = p_45;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_45), not_null(o_45));
                t = o_84(t);
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
ATerm crush_2 (ATerm t, ATerm l_83 (ATerm), ATerm m_83 (ATerm))
{
  ATerm c_46 = NULL;
  ATerm e_46 = NULL;
  c_46 = t;
  {
    ATerm f_46 = NULL;
    ATerm h_46 = NULL,i_46 = NULL,j_46 = NULL;
    t = not_null(c_46);
    {
      f_46 = t;
      {
        t = SSL_explode_term(not_null(f_46));
        {
          h_46 = t;
          b_46 :
          if(match_cons(h_46, sym__2))
            {
              i_46 = ATgetArgument(h_46, 0);
              j_46 = ATgetArgument(h_46, 1);
              if(((e_46 != NULL) && (e_46 != j_46)))
                _fail(j_46);
              else
                e_46 = j_46;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_46);
      t = foldr_2(t, l_83, m_83);
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
    ATerm x_3 (ATerm t)
    {
      t = term_j_19;
      return(t);
    }
    t = crush_2(t, x_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm p_46 = NULL,q_46 = NULL,r_46 = NULL;
  p_46 = t;
  o_46 :
  if(match_cons(p_46, sym__2))
    {
      q_46 = ATgetArgument(p_46, 0);
      r_46 = ATgetArgument(p_46, 1);
      {
        ATerm c_23;
        c_23 = t;
        {
          ATerm d_23 = t;
          int h_23 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(q_46), not_null(r_46));
              LocalPopChoice(h_23);
            }
          else
            {
              t = d_23;
              t = SSL_gtr(not_null(q_46), not_null(r_46));
            }
        }
        t = c_23;
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
  ATerm x_46 = NULL;
  ATerm i_23 = t;
  int m_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_46 = NULL,z_46 = NULL,a_47 = NULL;
      y_46 = t;
      w_46 :
      if(match_cons(y_46, sym__2))
        {
          z_46 = ATgetArgument(y_46, 0);
          a_47 = ATgetArgument(y_46, 1);
          {
            if(((x_46 != NULL) && (x_46 != z_46)))
              _fail(z_46);
            else
              x_46 = z_46;
            if(((x_46 != NULL) && (x_46 != a_47)))
              _fail(a_47);
            else
              x_46 = a_47;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(m_23);
    }
  else
    {
      t = i_23;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_91 (ATerm))
{
  ATerm p_23 = t;
  int q_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm r_23;
      r_23 = t;
      {
        ATerm d_47 = NULL;
        ATerm e_47 = NULL;
        t = term_x_16;
        {
          t = get_config_0(t);
          {
            e_47 = t;
            if(((d_47 != NULL) && (d_47 != e_47)))
              _fail(e_47);
            else
              d_47 = e_47;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_47), term_c_7);
          t = geq_0(t);
        }
      }
      t = r_23;
      t = t_91(t);
      LocalPopChoice(q_23);
    }
  else
    {
      t = p_23;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm y_3 (ATerm t)
  {
    ATerm i_47 = NULL,k_47 = NULL;
    ATerm s_23;
    s_23 = t;
    {
      ATerm j_47 = NULL;
      t = run_time_0(t);
      {
        j_47 = t;
        if(((i_47 != NULL) && (i_47 != j_47)))
          _fail(j_47);
        else
          i_47 = j_47;
      }
    }
    t = s_23;
    {
      ATerm l_47 = NULL;
      t = term_t_23;
      {
        t = get_config_0(t);
        {
          l_47 = t;
          if(((k_47 != NULL) && (k_47 != l_47)))
            _fail(l_47);
          else
            k_47 = l_47;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_v_23), not_null(i_47)), term_u_23), not_null(k_47)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, y_3);
  {
    t = term_j_19;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm s_47 = NULL;
  s_47 = t;
  r_47 :
  if(match_cons(s_47, sym_Version_0))
    {
      ATerm u_47 = NULL,w_47 = NULL;
      ATerm w_23;
      w_23 = t;
      {
        ATerm v_47 = NULL;
        t = SSLgetAnnotations(not_null(s_47));
        {
          v_47 = t;
          if(((u_47 != NULL) && (u_47 != v_47)))
            _fail(v_47);
          else
            u_47 = v_47;
        }
      }
      t = w_23;
      {
        ATerm x_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(u_47));
        {
          x_47 = t;
          if(((w_47 != NULL) && (w_47 != x_47)))
            _fail(x_47);
          else
            w_47 = x_47;
        }
        t = not_null(w_47);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm z_3 (ATerm t)
  {
    ATerm x_23 = t;
    int y_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(y_23);
      }
    else
      {
        t = x_23;
        {
          ATerm z_23 = t;
          int a_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(a_24);
            }
          else
            {
              t = z_23;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, z_3);
  t = z_89(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm c_48 = NULL;
  c_48 = t;
  t = SSL_table_create(not_null(c_48));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm g_48 = NULL;
  g_48 = t;
  {
    ATerm b_24;
    b_24 = t;
    {
      t = term_r_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_r_13, term_s_13, not_null(g_48));
          t = table_put_0(t);
        }
      }
    }
    t = b_24;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm k_48 = NULL;
  k_48 = t;
  t = SSL_table_destroy(not_null(k_48));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm o_48 = NULL;
  o_48 = t;
  t = SSL_exit(not_null(o_48));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm s_48 = NULL,t_48 = NULL,u_48 = NULL;
  s_48 = t;
  r_48 :
  if(((ATgetType(s_48) == AT_LIST) && ATisEmpty(s_48)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(s_48) == AT_LIST) && !(ATisEmpty(s_48))))
        {
          t_48 = ATgetFirst((ATermList) s_48);
          u_48 = (ATerm) ATgetNext((ATermList) s_48);
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
  ATerm c_24;
  c_24 = t;
  {
    ATerm x_48 = NULL;
    ATerm l_49 = NULL;
    ATerm d_24 = t;
    int e_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(e_24);
      }
    else
      {
        t = d_24;
        {
          ATerm h_49 = NULL;
          ATerm i_49 = NULL;
          i_49 = t;
          if(((h_49 != NULL) && (h_49 != i_49)))
            _fail(i_49);
          else
            h_49 = i_49;
          t = (ATerm) ATinsert(ATempty, not_null(h_49));
        }
      }
    {
      l_49 = t;
      if(((x_48 != NULL) && (x_48 != l_49)))
        _fail(l_49);
      else
        x_48 = l_49;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_17, not_null(x_48));
      t = printnl_0(t);
    }
  }
  t = c_24;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm o_49 (ATerm t)
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
        t = Cons_2(t, z_77, o_49);
      }
    return(t);
  }
  t = o_49(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm f_50 = NULL,g_50 = NULL,h_50 = NULL;
  h_50 = t;
  e_50 :
  if(((ATgetType(h_50) == AT_LIST) && !(ATisEmpty(h_50))))
    {
      f_50 = ATgetFirst((ATermList) h_50);
      g_50 = (ATerm) ATgetNext((ATermList) h_50);
      {
        ATerm o_50 = NULL;
        t = not_null(g_50);
        {
          ATerm h_24;
          h_24 = t;
          {
            ATerm p_50 = NULL,r_50 = NULL,t_50 = NULL;
            ATerm i_24;
            i_24 = t;
            {
              ATerm q_50 = NULL;
              t = d_0(t);
              {
                q_50 = t;
                if(((p_50 != NULL) && (p_50 != q_50)))
                  _fail(q_50);
                else
                  p_50 = q_50;
              }
            }
            t = i_24;
            {
              ATerm s_50 = NULL;
              t = not_null(f_50);
              {
                t = a_0(t);
                {
                  s_50 = t;
                  if(((r_50 != NULL) && (r_50 != s_50)))
                    _fail(s_50);
                  else
                    r_50 = s_50;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_50)), not_null(r_50));
                {
                  t_50 = t;
                  if(((o_50 != NULL) && (o_50 != t_50)))
                    _fail(t_50);
                  else
                    o_50 = t_50;
                }
              }
            }
          }
          t = h_24;
          {
            ATerm a_4 (ATerm t)
            {
              t = not_null(o_50);
              return(t);
            }
            t = reverse_acc_2(t, a_0, a_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(h_50) == AT_LIST) && ATisEmpty(h_50)))
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
  ATerm b_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_4);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_51 = NULL,c_51 = NULL,d_51 = NULL;
  b_51 = t;
  a_51 :
  if(match_cons(b_51, sym__2))
    {
      c_51 = ATgetArgument(b_51, 0);
      d_51 = ATgetArgument(b_51, 1);
      t = SSL_table_get(not_null(c_51), not_null(d_51));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_93 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_67 (ATerm))
{
  ATerm n_51 = NULL,o_51 = NULL;
  n_51 = t;
  m_51 :
  if(match_cons(n_51, sym_Program_1))
    {
      o_51 = ATgetArgument(n_51, 0);
      {
        ATerm r_51 = NULL,t_51 = NULL;
        ATerm s_51 = NULL;
        t = SSLgetAnnotations(not_null(n_51));
        {
          s_51 = t;
          if(((r_51 != NULL) && (r_51 != s_51)))
            _fail(s_51);
          else
            r_51 = s_51;
        }
        {
          t = not_null(o_51);
          {
            ATerm v_51 = NULL;
            t = m_67(t);
            {
              t_51 = t;
              {
                ATerm w_51 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(t_51)), not_null(r_51));
                {
                  w_51 = t;
                  if(((v_51 != NULL) && (v_51 != w_51)))
                    _fail(w_51);
                  else
                    v_51 = w_51;
                }
                t = not_null(v_51);
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
  ATerm e_52 = NULL;
  ATerm j_24 = t;
  int k_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_52 = NULL;
      t = term_t_23;
      {
        t = get_config_0(t);
        {
          f_52 = t;
          if(((e_52 != NULL) && (e_52 != f_52)))
            _fail(f_52);
          else
            e_52 = f_52;
        }
      }
      LocalPopChoice(k_24);
    }
  else
    {
      t = j_24;
      {
        ATerm c_4 (ATerm t)
        {
          ATerm d_4 (ATerm t)
          {
            ATerm g_52 = NULL;
            g_52 = t;
            if(((e_52 != NULL) && (e_52 != g_52)))
              _fail(g_52);
            else
              e_52 = g_52;
            return(t);
          }
          t = Program_1(t, d_4);
          return(t);
        }
        t = fetch_1(t, c_4);
      }
    }
  {
    t = term_l_24;
    {
      t = echo_0(t);
      {
        t = term_m_24;
        {
          t = table_get_0(t);
          {
            ATerm h_4 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, h_4);
            {
              ATerm i_4 (ATerm t)
              {
                ATerm k_52 = NULL;
                ATerm l_52 = NULL;
                l_52 = t;
                if(((k_52 != NULL) && (k_52 != l_52)))
                  _fail(l_52);
                else
                  k_52 = l_52;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(k_52)), term_n_24);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, i_4);
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
  ATerm o_24;
  o_24 = t;
  {
    ATerm q_52 = NULL;
    ATerm r_52 = NULL;
    r_52 = t;
    if(((q_52 != NULL) && (q_52 != r_52)))
      _fail(r_52);
    else
      q_52 = r_52;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATempty, not_null(q_52)));
      t = printnl_0(t);
    }
  }
  t = o_24;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_88 (ATerm))
{
  ATerm p_24;
  p_24 = t;
  {
    t = y_88(t);
    t = debug_0(t);
  }
  t = p_24;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_67 (ATerm))
{
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  x_52 :
  if(match_cons(y_52, sym_Undefined_1))
    {
      z_52 = ATgetArgument(y_52, 0);
      {
        ATerm c_53 = NULL,e_53 = NULL;
        ATerm d_53 = NULL;
        t = SSLgetAnnotations(not_null(y_52));
        {
          d_53 = t;
          if(((c_53 != NULL) && (c_53 != d_53)))
            _fail(d_53);
          else
            c_53 = d_53;
        }
        {
          t = not_null(z_52);
          {
            ATerm g_53 = NULL;
            t = n_67(t);
            {
              e_53 = t;
              {
                ATerm h_53 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(e_53)), not_null(c_53));
                {
                  h_53 = t;
                  if(((g_53 != NULL) && (g_53 != h_53)))
                    _fail(h_53);
                  else
                    g_53 = h_53;
                }
                t = not_null(g_53);
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
ATerm fetch_1 (ATerm t, ATerm i_78 (ATerm))
{
  ATerm m_53 (ATerm t)
  {
    ATerm q_24 = t;
    int r_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_78, _id);
        LocalPopChoice(r_24);
      }
    else
      {
        t = q_24;
        t = Cons_2(t, _id, m_53);
      }
    return(t);
  }
  t = m_53(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_92 (ATerm))
{
  t = fetch_1(t, w_92);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_53 = NULL;
  y_53 = t;
  q_53 :
  if(match_cons(y_53, sym_Help_0))
    {
      ATerm a_54 = NULL,c_54 = NULL;
      ATerm s_24;
      s_24 = t;
      {
        ATerm b_54 = NULL;
        t = SSLgetAnnotations(not_null(y_53));
        {
          b_54 = t;
          if(((a_54 != NULL) && (a_54 != b_54)))
            _fail(b_54);
          else
            a_54 = b_54;
        }
      }
      t = s_24;
      {
        ATerm d_54 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_54));
        {
          d_54 = t;
          if(((c_54 != NULL) && (c_54 != d_54)))
            _fail(d_54);
          else
            c_54 = d_54;
        }
        t = not_null(c_54);
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
  ATerm j_4 (ATerm t)
  {
    ATerm i_54 = NULL;
    i_54 = t;
    h_54 :
    if(!(match_string(i_54, "--help")))
      {
        if(!(match_string(i_54, "-h")))
          {
            if(!(match_string(i_54, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_u_24;
    {
      t = set_config_0(t);
      t = term_v_24;
    }
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_w_24;
    return(t);
  }
  t = Option_3(t, j_4, l_4, m_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_54 = NULL,m_54 = NULL,n_54 = NULL;
  l_54 = t;
  k_54 :
  if(((ATgetType(l_54) == AT_LIST) && !(ATisEmpty(l_54))))
    {
      m_54 = ATgetFirst((ATermList) l_54);
      n_54 = (ATerm) ATgetNext((ATermList) l_54);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_54)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_54)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_58 (ATerm), ATerm x_58 (ATerm))
{
  ATerm x_54 = NULL,y_54 = NULL,z_54 = NULL;
  x_54 = t;
  w_54 :
  if(((ATgetType(x_54) == AT_LIST) && !(ATisEmpty(x_54))))
    {
      y_54 = ATgetFirst((ATermList) x_54);
      z_54 = (ATerm) ATgetNext((ATermList) x_54);
      {
        ATerm d_55 = NULL,f_55 = NULL;
        ATerm e_55 = NULL;
        t = SSLgetAnnotations(not_null(x_54));
        {
          e_55 = t;
          if(((d_55 != NULL) && (d_55 != e_55)))
            _fail(e_55);
          else
            d_55 = e_55;
        }
        {
          t = not_null(y_54);
          {
            ATerm h_55 = NULL;
            t = w_58(t);
            {
              f_55 = t;
              {
                t = not_null(z_54);
                {
                  ATerm j_55 = NULL;
                  t = x_58(t);
                  {
                    h_55 = t;
                    {
                      ATerm k_55 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(h_55)), not_null(f_55)), not_null(d_55));
                      {
                        k_55 = t;
                        if(((j_55 != NULL) && (j_55 != k_55)))
                          _fail(k_55);
                        else
                          j_55 = k_55;
                      }
                      t = not_null(j_55);
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
  ATerm u_55 = NULL;
  u_55 = t;
  t_55 :
  if(((ATgetType(u_55) == AT_LIST) && ATisEmpty(u_55)))
    {
      {
        ATerm w_55 = NULL,y_55 = NULL;
        ATerm x_24;
        x_24 = t;
        {
          ATerm x_55 = NULL;
          t = SSLgetAnnotations(not_null(u_55));
          {
            x_55 = t;
            if(((w_55 != NULL) && (w_55 != x_55)))
              _fail(x_55);
            else
              w_55 = x_55;
          }
        }
        t = x_24;
        {
          ATerm z_55 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(w_55));
          {
            z_55 = t;
            if(((y_55 != NULL) && (y_55 != z_55)))
              _fail(z_55);
            else
              y_55 = z_55;
          }
          t = not_null(y_55);
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
  ATerm f_56 = NULL,g_56 = NULL,h_56 = NULL;
  f_56 = t;
  e_56 :
  if(match_cons(f_56, sym__2))
    {
      g_56 = ATgetArgument(f_56, 0);
      h_56 = ATgetArgument(f_56, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_k_16, not_null(g_56), not_null(h_56));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_93 (ATerm))
{
  ATerm y_24;
  y_24 = t;
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_b_25;
        t = z_93(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        {
        }
      }
  }
  t = y_24;
  {
    ATerm n_4 (ATerm t)
    {
      ATerm p_56 = NULL;
      ATerm c_25;
      c_25 = t;
      {
        ATerm n_56 = NULL;
        ATerm o_56 = NULL;
        o_56 = t;
        if(((n_56 != NULL) && (n_56 != o_56)))
          _fail(o_56);
        else
          n_56 = o_56;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_23, not_null(n_56));
          t = set_config_0(t);
        }
      }
      t = c_25;
      {
        ATerm q_56 = NULL;
        q_56 = t;
        if(((p_56 != NULL) && (p_56 != q_56)))
          _fail(q_56);
        else
          p_56 = q_56;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(p_56));
      }
      return(t);
    }
    ATerm p_4 (ATerm t)
    {
      ATerm d_25 = t;
      int e_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_25 = t;
          int g_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(g_25);
            }
          else
            {
              t = f_25;
              {
                t = z_93(t);
                t = Cons_2(t, _id, p_4);
              }
            }
          LocalPopChoice(e_25);
        }
      else
        {
          t = d_25;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, n_4, p_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm w_56 = NULL,x_56 = NULL,f_57 = NULL;
  ATerm h_25;
  h_25 = t;
  {
    ATerm g_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL;
    g_57 = t;
    v_56 :
    if(match_cons(g_57, sym__3))
      {
        k_57 = ATgetArgument(g_57, 0);
        l_57 = ATgetArgument(g_57, 1);
        m_57 = ATgetArgument(g_57, 2);
        {
          if(((w_56 != NULL) && (w_56 != k_57)))
            _fail(k_57);
          else
            w_56 = k_57;
          {
            if(((x_56 != NULL) && (x_56 != l_57)))
              _fail(l_57);
            else
              x_56 = l_57;
            {
              if(((f_57 != NULL) && (f_57 != m_57)))
                _fail(m_57);
              else
                f_57 = m_57;
              t = SSL_table_put(not_null(w_56), not_null(x_56), not_null(f_57));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = h_25;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_93 (ATerm))
{
  ATerm r_57 = NULL;
  ATerm i_25;
  i_25 = t;
  {
    t = term_j_25;
    t = table_put_0(t);
  }
  t = i_25;
  {
    ATerm r_4 (ATerm t)
    {
      ATerm k_25 = t;
      int l_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_93(t);
          LocalPopChoice(l_25);
        }
      else
        {
          t = k_25;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, r_4);
    {
      ATerm m_25 = t;
      int n_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_25;
          o_25 = t;
          {
            ATerm p_25 = t;
            int q_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_t_24;
                t = get_config_0(t);
                LocalPopChoice(q_25);
              }
            else
              {
                t = p_25;
                t = fetch_1(t, Help_0);
              }
          }
          t = o_25;
          {
            t = system_usage_0(t);
            {
              t = term_j_19;
              t = exit_0(t);
            }
          }
          LocalPopChoice(n_25);
        }
      else
        {
          t = m_25;
          {
            ATerm r_25 = t;
            int s_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm s_4 (ATerm t)
                {
                  ATerm t_4 (ATerm t)
                  {
                    ATerm s_57 = NULL;
                    s_57 = t;
                    if(((r_57 != NULL) && (r_57 != s_57)))
                      _fail(s_57);
                    else
                      r_57 = s_57;
                    return(t);
                  }
                  t = Undefined_1(t, t_4);
                  return(t);
                }
                t = fetch_1(t, s_4);
                {
                  ATerm u_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(r_57)), term_t_25);
                    return(t);
                  }
                  t = say_1(t, u_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_c_7;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(s_25);
              }
            else
              {
                t = r_25;
                {
                }
              }
          }
        }
      {
        ATerm u_25;
        u_25 = t;
        {
          t = term_b_22;
          t = table_destroy_0(t);
        }
        t = u_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm f_90 (ATerm), ATerm g_90 (ATerm), ATerm h_90 (ATerm), ATerm i_90 (ATerm))
{
  t = parse_options_1(t, f_90);
  {
    t = store_options_0(t);
    {
      t = h_90(t);
      {
        ATerm v_25 = t;
        int w_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_90);
            LocalPopChoice(w_25);
          }
        else
          {
            t = v_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_90(t);
                  t = report_success_0(t);
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm w_90 (ATerm), ATerm x_90 (ATerm), ATerm y_90 (ATerm), ATerm z_90 (ATerm))
{
  ATerm v_4 (ATerm t)
  {
    ATerm z_25 = t;
    int a_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_90(t);
        LocalPopChoice(a_26);
      }
    else
      {
        t = z_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, w_90);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, v_4, y_90, z_90, a_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_90 (ATerm), ATerm r_90 (ATerm), ATerm s_90 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    ATerm c_5 (ATerm t)
    {
      ATerm e_26;
      e_26 = t;
      {
        ATerm v_57 = NULL;
        ATerm w_57 = NULL;
        t = term_t_23;
        {
          t = get_config_0(t);
          {
            w_57 = t;
            if(((v_57 != NULL) && (v_57 != w_57)))
              _fail(w_57);
            else
              v_57 = w_57;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_h_13, (ATerm) ATinsert(ATempty, not_null(v_57)));
          t = printnl_0(t);
        }
      }
      t = e_26;
      return(t);
    }
    t = if_verbose2_1(t, c_5);
    return(t);
  }
  t = iowrap_4(t, q_90, r_90, s_90, b_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_90 (ATerm), ATerm p_90 (ATerm))
{
  t = iowrap_3(t, o_90, p_90, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm g_98 (ATerm), ATerm h_98 (ATerm), ATerm i_98 (ATerm))
{
  ATerm d_5 (ATerm t)
  {
    ATerm f_26 = t;
    int j_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = termid_check_p__1(t, g_98);
        LocalPopChoice(j_26);
      }
    else
      {
        t = f_26;
        {
        }
      }
    {
      t = h_98(t);
      {
        ATerm m_26 = t;
        int n_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = termid_set_p__1(t, g_98);
            LocalPopChoice(n_26);
          }
        else
          {
            t = m_26;
            {
            }
          }
      }
    }
    return(t);
  }
  ATerm e_5 (ATerm t)
  {
    ATerm r_26 = t;
    int u_26 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_98(t);
        LocalPopChoice(u_26);
      }
    else
      {
        t = r_26;
        {
          ATerm h_5 (ATerm t)
          {
            ATerm z_57 = NULL;
            z_57 = t;
            y_57 :
            if(!(match_string(z_57, "--strict")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm i_5 (ATerm t)
          {
            t = term_a_14;
            return(t);
          }
          ATerm j_5 (ATerm t)
          {
            t = term_v_26;
            return(t);
          }
          t = Option_3(t, h_5, i_5, j_5);
        }
      }
    return(t);
  }
  t = iowrap_2(t, d_5, e_5);
  return(t);
}
ATerm io_sdf_2_pp_table_0 (ATerm t)
{
  ATerm k_5 (ATerm t)
  {
    ATerm q_5 (ATerm t)
    {
      ATerm c_58 = NULL;
      c_58 = t;
      a_58 :
      if(!(match_string(c_58, "\"sdf-2.1\"")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm u_5 (ATerm t)
    {
      t = term_w_26;
      return(t);
    }
    t = InOutId_2(t, q_5, u_5);
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = _2(t, _id, ppgenerate_0);
    return(t);
  }
  ATerm p_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      ATerm d_58 = NULL;
      d_58 = t;
      b_58 :
      if(!(match_string(d_58, "-v")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm y_5 (ATerm t)
    {
      t = term_x_26;
      return(t);
    }
    ATerm z_5 (ATerm t)
    {
      t = term_y_26;
      return(t);
    }
    t = Option_3(t, x_5, y_5, z_5);
    return(t);
  }
  t = io_idwrap_3(t, k_5, l_5, p_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = io_sdf_2_pp_table_0(t);
  return(t);
}
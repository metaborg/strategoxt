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
Symbol sym_empty_grammar_0;
Symbol sym_conc_grammars_2;
Symbol sym_uqlit_1;
Symbol sym_Literal_1;
Symbol sym_prod_fun_4;
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
Symbol sym_NatCon_1;
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
  sym_NatCon_1 = ATmakeSymbol("NatCon", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_1);
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
ATerm term_j_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_g_25;
ATerm term_v_24;
ATerm term_n_24;
ATerm term_d_24;
ATerm term_x_23;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_e_23;
ATerm term_b_22;
ATerm term_y_21;
ATerm term_v_21;
ATerm term_c_21;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_q_20;
ATerm term_m_20;
ATerm term_e_20;
ATerm term_d_20;
ATerm term_c_20;
ATerm term_b_20;
ATerm term_q_19;
ATerm term_p_19;
ATerm term_x_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_o_18;
ATerm term_v_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_r_17;
ATerm term_o_17;
ATerm term_n_17;
ATerm term_d_17;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_q_16;
ATerm term_q_15;
ATerm term_m_15;
ATerm term_j_15;
ATerm term_a_15;
ATerm term_y_14;
ATerm term_s_13;
ATerm term_r_13;
ATerm term_p_13;
ATerm term_m_13;
ATerm term_w_12;
ATerm term_v_12;
ATerm term_u_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_o_12;
ATerm term_d_12;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_c_11;
ATerm term_b_11;
ATerm term_a_11;
ATerm term_z_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_c_9;
ATerm term_g_8;
ATerm term_b_8;
ATerm term_x_7;
ATerm term_p_7;
ATerm term_n_7;
void init_constant_terms (void)
{
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_b_8));
  term_b_8 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_g_8));
  term_g_8 = (ATerm) ATmakeAppl(sym_Arg_1, term_b_8);
  ATprotect(&(term_c_9));
  term_c_9 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_SOpt_2, term_f_10, term_g_10);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_a_11));
  term_a_11 = (ATerm) ATmakeAppl(sym_lit_1, term_z_10);
  ATprotect(&(term_b_11));
  term_b_11 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_lit_1, term_b_11);
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_d_12));
  term_d_12 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(sym__2, term_o_12, term_p_12);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_v_12));
  term_v_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_p_13));
  term_p_13 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_r_13));
  term_r_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_s_13));
  term_s_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_a_15));
  term_a_15 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(sym__2, term_a_17, term_n_7);
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_d_17));
  term_d_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_n_17));
  term_n_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_o_17));
  term_o_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_r_17));
  term_r_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(sym__2, term_j_15, term_r_17);
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_r_17);
  ATprotect(&(term_v_17));
  term_v_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_o_18));
  term_o_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(sym__2, term_q_18, term_n_7);
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_x_18));
  term_x_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(sym__2, term_b_20, term_n_7);
  ATprotect(&(term_d_20));
  term_d_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_v_21));
  term_v_21 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_e_23));
  term_e_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(sym__2, term_m_20, term_q_20);
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(sym__2, term_r_23, term_n_7);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(sym__3, term_m_20, term_q_20, (ATerm) ATempty);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm b_73 (ATerm));
ATerm filter_1 (ATerm, ATerm w_86 (ATerm));
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm w_61 (ATerm));
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm g_71 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm r_62 (ATerm));
ATerm iter_1 (ATerm, ATerm q_62 (ATerm));
ATerm pair_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm o_62 (ATerm), ATerm p_62 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm m_62 (ATerm), ATerm n_62 (ATerm));
ATerm make_0 (ATerm);
ATerm lit_1 (ATerm, ATerm l_62 (ATerm));
ATerm NonTerminal_0 (ATerm);
ATerm number_node_1 (ATerm, ATerm j_71 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm f_71 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm f_80 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm));
ATerm crush_3 (ATerm, ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm));
ATerm collect_p__1 (ATerm, ATerm e_99 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm _2 (ATerm, ATerm y_58 (ATerm), ATerm z_58 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm r_74 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm i_91 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm p_99 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm q_99 (ATerm));
ATerm InOutId_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm x_99 (ATerm));
ATerm try_1 (ATerm, ATerm m_71 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm v_99 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm u_79 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_93 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm h_91 (ATerm));
ATerm debug_1 (ATerm, ATerm d_90 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm i_87 (ATerm), ATerm j_87 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm h_95 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm t_85 (ATerm), ATerm u_85 (ATerm));
ATerm crush_2 (ATerm, ATerm r_84 (ATerm), ATerm s_84 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_92 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm f_91 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm d_95 (ATerm));
ATerm map_1 (ATerm, ATerm f_79 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm c_95 (ATerm));
ATerm Program_1 (ATerm, ATerm r_68 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm e_90 (ATerm));
ATerm Undefined_1 (ATerm, ATerm s_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm o_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm c_94 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_60 (ATerm), ATerm i_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm f_95 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm e_95 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm));
ATerm iowrap_4 (ATerm, ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm));
ATerm iowrap_3 (ATerm, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm));
ATerm iowrap_2 (ATerm, ATerm u_91 (ATerm), ATerm v_91 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm));
ATerm Pp_gen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Option_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm q_2 = NULL,r_2 = NULL,c_3 = NULL;
  q_2 = t;
  p_2 :
  if(match_string(q_2, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(q_2) == AT_LIST) && !(ATisEmpty(q_2))))
        {
          r_2 = ATgetFirst((ATermList) q_2);
          c_3 = (ATerm) ATgetNext((ATermList) q_2);
          {
            ATerm i_3 = NULL;
            ATerm r_5;
            r_5 = t;
            {
              t = not_null(r_2);
              t = l_0(t);
            }
            t = r_5;
            {
              ATerm j_3 = NULL;
              t = term_n_7;
              {
                t = m_0(t);
                {
                  j_3 = t;
                  if(((i_3 != NULL) && (i_3 != j_3)))
                    _fail(j_3);
                  else
                    i_3 = j_3;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(c_3)), not_null(i_3));
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
ATerm Quote_0 (ATerm t)
{
  ATerm o_3 = NULL;
  o_3 = t;
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_7)), not_null(o_3)), (ATerm) ATinsert(ATempty, term_p_7));
    t = concat_0(t);
  }
  return(t);
}
ATerm quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = Quote_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm s_3 = NULL;
  s_3 = t;
  t = SSL_int_to_string(not_null(s_3));
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm b_73 (ATerm))
{
  t = b_73(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1(t, b_73);
      return(t);
    }
    t = _all(t, b_0);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm w_86 (ATerm))
{
  ATerm q_7 = t;
  int r_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_7);
    }
  else
    {
      t = q_7;
      {
        ATerm s_7 = t;
        int t_7 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = filter_1(t, w_86);
              return(t);
            }
            t = Cons_2(t, w_86, c_0);
            LocalPopChoice(t_7);
          }
        else
          {
            t = s_7;
            {
              ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
              x_3 = t;
              w_3 :
              if(((ATgetType(x_3) == AT_LIST) && !(ATisEmpty(x_3))))
                {
                  y_3 = ATgetFirst((ATermList) x_3);
                  z_3 = (ATerm) ATgetNext((ATermList) x_3);
                  {
                    t = not_null(z_3);
                    t = filter_1(t, w_86);
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
      ATerm d_4 = NULL;
      d_4 = t;
      {
        ATerm u_7 = t;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = u_7;
          }
        t = (ATerm) ATinsert(ATempty, not_null(d_4));
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
ATerm Arg_1 (ATerm t, ATerm w_61 (ATerm))
{
  ATerm l_4 = NULL,m_4 = NULL;
  l_4 = t;
  k_4 :
  if(match_cons(l_4, sym_Arg_1))
    {
      m_4 = ATgetArgument(l_4, 0);
      {
        ATerm p_4 = NULL,r_4 = NULL;
        ATerm q_4 = NULL;
        t = SSLgetAnnotations(not_null(l_4));
        {
          q_4 = t;
          if(((p_4 != NULL) && (p_4 != q_4)))
            _fail(q_4);
          else
            p_4 = q_4;
        }
        {
          t = not_null(m_4);
          {
            ATerm t_4 = NULL;
            t = w_61(t);
            {
              r_4 = t;
              {
                ATerm u_4 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(r_4)), not_null(p_4));
                {
                  u_4 = t;
                  if(((t_4 != NULL) && (t_4 != u_4)))
                    _fail(u_4);
                  else
                    t_4 = u_4;
                }
                t = not_null(t_4);
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
ATerm flat_alt_0 (ATerm t)
{
  ATerm e_5 = NULL,f_5 = NULL,g_5 = NULL,h_5 = NULL,i_5 = NULL;
  ATerm t_5 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(i_5)), not_null(h_5));
    return(t);
  }
  g_5 = t;
  c_5 :
  if(match_cons(g_5, sym_alt_2))
    {
      h_5 = ATgetArgument(g_5, 0);
      i_5 = ATgetArgument(g_5, 1);
      d_5 :
      if(match_cons(i_5, sym_alt_2))
        {
          e_5 = ATgetArgument(i_5, 0);
          f_5 = ATgetArgument(i_5, 1);
          {
            ATerm v_7 = t;
            int w_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm m_5 = NULL;
                ATerm n_5 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(e_5), not_null(f_5));
                {
                  t = flat_alt_0(t);
                  {
                    n_5 = t;
                    if(((m_5 != NULL) && (m_5 != n_5)))
                      _fail(n_5);
                    else
                      m_5 = n_5;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(m_5)), not_null(h_5));
                LocalPopChoice(w_7);
              }
            else
              {
                t = v_7;
                t = t_5(t);
              }
          }
        }
      else
        {
          t = t_5(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm g_71 (ATerm))
{
  ATerm v_6 = NULL,w_6 = NULL,x_6 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = term_n_7;
    t = g_71(t);
    return(t);
  }
  t = split_2(t, o_0, _id);
  {
    ATerm q_8 (ATerm t)
    {
      ATerm y_6 = NULL,z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL;
      ATerm s_8 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm t_8 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm u_8 (ATerm t)
      {
        ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
        if(((v_6 != NULL) && (v_6 != e_7)))
          _fail(e_7);
        else
          v_6 = e_7;
        {
          if(((w_6 != NULL) && (w_6 != f_7)))
            _fail(f_7);
          else
            w_6 = f_7;
          {
            if(((x_6 != NULL) && (x_6 != h_7)))
              _fail(h_7);
            else
              x_6 = h_7;
            {
              if(((j_7 != NULL) && (j_7 != b_7)))
                _fail(b_7);
              else
                j_7 = b_7;
              {
                if(((k_7 != NULL) && (k_7 != z_6)))
                  _fail(z_6);
                else
                  k_7 = z_6;
                {
                  if(((l_7 != NULL) && (l_7 != a_7)))
                    _fail(a_7);
                  else
                    l_7 = a_7;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(j_7), (ATerm) ATmakeAppl(sym_alt_2, not_null(k_7), not_null(l_7)));
                    {
                      ATerm o_7 = NULL;
                      t = flat_alt_0(t);
                      {
                        m_7 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_x_7, not_null(m_7));
                          {
                            t = mkterm_0(t);
                            {
                              o_7 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_6), not_null(w_6)), (ATerm) ATmakeAppl(sym__2, not_null(x_6), not_null(o_7)));
                                {
                                  t = q_8(t);
                                  {
                                    ATerm p_0 (ATerm t)
                                    {
                                      ATerm q_0 (ATerm t)
                                      {
                                        ATerm r_0 (ATerm t)
                                        {
                                          t = Arg_1(t, _id);
                                          t = term_g_8;
                                          return(t);
                                        }
                                        t = try_1(t, r_0);
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
      ATerm v_8 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_7), not_null(f_7)), (ATerm) ATmakeAppl(sym__2, not_null(h_7), not_null(b_7)));
        t = q_8(t);
        return(t);
      }
      ATerm w_8 (ATerm t)
      {
        ATerm y_7 = NULL,z_7 = NULL,f_8 = NULL;
        ATerm a_8 = NULL;
        ATerm c_8 = NULL,d_8 = NULL,e_8 = NULL;
        t = not_null(i_7);
        {
          a_8 = t;
          {
            t = SSL_explode_term(not_null(a_8));
            {
              c_8 = t;
              f_6 :
              if(match_cons(c_8, sym__2))
                {
                  d_8 = ATgetArgument(c_8, 0);
                  e_8 = ATgetArgument(c_8, 1);
                  {
                    if(((y_7 != NULL) && (y_7 != d_8)))
                      _fail(d_8);
                    else
                      y_7 = d_8;
                    if(((z_7 != NULL) && (z_7 != e_8)))
                      _fail(e_8);
                    else
                      z_7 = e_8;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(f_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(h_7), not_null(y_7))));
          {
            ATerm h_8 = NULL,o_8 = NULL;
            t = conc_0(t);
            {
              f_8 = t;
              {
                t = not_null(z_7);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm k_8;
                      k_8 = t;
                      {
                        ATerm i_8 = NULL;
                        t = make_0(t);
                        {
                          i_8 = t;
                          if(((h_8 != NULL) && (h_8 != i_8)))
                            _fail(i_8);
                          else
                            h_8 = i_8;
                        }
                      }
                      t = k_8;
                      {
                        ATerm s_0 (ATerm t)
                        {
                          ATerm j_8 = NULL;
                          ATerm l_8 = NULL;
                          j_8 = t;
                          {
                            ATerm m_8 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_7), not_null(f_8)), not_null(j_8));
                            {
                              t = q_8(t);
                              {
                                m_8 = t;
                                if(((l_8 != NULL) && (l_8 != m_8)))
                                  _fail(m_8);
                                else
                                  l_8 = m_8;
                              }
                            }
                            t = not_null(l_8);
                          }
                          return(t);
                        }
                        t = map_1(t, s_0);
                        {
                          t = concat_0(t);
                          {
                            o_8 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(o_8)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(e_7), not_null(f_8)), not_null(h_8)));
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
      c_7 = t;
      l_6 :
      if(match_cons(c_7, sym__2))
        {
          d_7 = ATgetArgument(c_7, 0);
          g_7 = ATgetArgument(c_7, 1);
          m_6 :
          if(match_cons(g_7, sym_lit_1))
            {
              h_7 = ATgetArgument(g_7, 0);
              n_6 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(g_7, sym__2))
                {
                  h_7 = ATgetArgument(g_7, 0);
                  i_7 = ATgetArgument(g_7, 1);
                  o_6 :
                  if(match_cons(i_7, sym_sort_1))
                    {
                      b_7 = ATgetArgument(i_7, 0);
                      p_6 :
                      if(match_cons(d_7, sym__2))
                        {
                          e_7 = ATgetArgument(d_7, 0);
                          f_7 = ATgetArgument(d_7, 1);
                          {
                            ATerm n_8 = t;
                            int p_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = s_8(t);
                                LocalPopChoice(p_8);
                              }
                            else
                              {
                                t = n_8;
                                t = w_8(t);
                              }
                          }
                        }
                      else
                        {
                          t = s_8(t);
                        }
                    }
                  else
                    {
                      if(match_cons(i_7, sym_char_class_1))
                        {
                          b_7 = ATgetArgument(i_7, 0);
                          q_6 :
                          if(match_cons(d_7, sym__2))
                            {
                              e_7 = ATgetArgument(d_7, 0);
                              f_7 = ATgetArgument(d_7, 1);
                              {
                                ATerm r_8 = t;
                                int x_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = t_8(t);
                                    LocalPopChoice(x_8);
                                  }
                                else
                                  {
                                    t = r_8;
                                    t = w_8(t);
                                  }
                              }
                            }
                          else
                            {
                              t = t_8(t);
                            }
                        }
                      else
                        {
                          if(match_cons(i_7, sym_alt_2))
                            {
                              b_7 = ATgetArgument(i_7, 0);
                              y_6 = ATgetArgument(i_7, 1);
                              r_6 :
                              if(match_cons(d_7, sym__2))
                                {
                                  e_7 = ATgetArgument(d_7, 0);
                                  f_7 = ATgetArgument(d_7, 1);
                                  s_6 :
                                  if(match_cons(y_6, sym_alt_2))
                                    {
                                      z_6 = ATgetArgument(y_6, 0);
                                      a_7 = ATgetArgument(y_6, 1);
                                      {
                                        ATerm y_8 = t;
                                        int z_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = u_8(t);
                                            LocalPopChoice(z_8);
                                          }
                                        else
                                          {
                                            t = y_8;
                                            t = w_8(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = w_8(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(i_7, sym_bracket_symbol_1))
                                {
                                  b_7 = ATgetArgument(i_7, 0);
                                  t_6 :
                                  if(match_cons(d_7, sym__2))
                                    {
                                      e_7 = ATgetArgument(d_7, 0);
                                      f_7 = ATgetArgument(d_7, 1);
                                      {
                                        ATerm a_9 = t;
                                        int b_9 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = v_8(t);
                                            LocalPopChoice(b_9);
                                          }
                                        else
                                          {
                                            t = a_9;
                                            t = w_8(t);
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
                                  u_6 :
                                  if(match_cons(d_7, sym__2))
                                    {
                                      e_7 = ATgetArgument(d_7, 0);
                                      f_7 = ATgetArgument(d_7, 1);
                                      t = w_8(t);
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
    t = q_8(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm j_9 = NULL,k_9 = NULL,l_9 = NULL;
  j_9 = t;
  i_9 :
  if(match_cons(j_9, sym_lit_1))
    {
      k_9 = ATgetArgument(j_9, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_c_9, (ATerm) ATmakeAppl(sym_S_1, not_null(k_9)));
    }
  else
    {
      if(match_cons(j_9, sym__2))
        {
          k_9 = ATgetArgument(j_9, 0);
          l_9 = ATgetArgument(j_9, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(k_9));
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm r_62 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_iter_star_1))
    {
      w_9 = ATgetArgument(v_9, 0);
      {
        ATerm z_9 = NULL,b_10 = NULL;
        ATerm a_10 = NULL;
        t = SSLgetAnnotations(not_null(v_9));
        {
          a_10 = t;
          if(((z_9 != NULL) && (z_9 != a_10)))
            _fail(a_10);
          else
            z_9 = a_10;
        }
        {
          t = not_null(w_9);
          {
            ATerm d_10 = NULL;
            t = r_62(t);
            {
              b_10 = t;
              {
                ATerm e_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(b_10)), not_null(z_9));
                {
                  e_10 = t;
                  if(((d_10 != NULL) && (d_10 != e_10)))
                    _fail(e_10);
                  else
                    d_10 = e_10;
                }
                t = not_null(d_10);
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
ATerm iter_1 (ATerm t, ATerm q_62 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_cons(o_10, sym_iter_1))
    {
      p_10 = ATgetArgument(o_10, 0);
      {
        ATerm s_10 = NULL,u_10 = NULL;
        ATerm t_10 = NULL;
        t = SSLgetAnnotations(not_null(o_10));
        {
          t_10 = t;
          if(((s_10 != NULL) && (s_10 != t_10)))
            _fail(t_10);
          else
            s_10 = t_10;
        }
        {
          t = not_null(p_10);
          {
            ATerm w_10 = NULL;
            t = q_62(t);
            {
              u_10 = t;
              {
                ATerm x_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(u_10)), not_null(s_10));
                {
                  x_10 = t;
                  if(((w_10 != NULL) && (w_10 != x_10)))
                    _fail(x_10);
                  else
                    w_10 = x_10;
                }
                t = not_null(w_10);
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
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
        g_11 = t;
        e_11 :
        if(((ATgetType(g_11) == AT_LIST) && !(ATisEmpty(g_11))))
          {
            h_11 = ATgetFirst((ATermList) g_11);
            i_11 = (ATerm) ATgetNext((ATermList) g_11);
            f_11 :
            if(((ATgetType(i_11) == AT_LIST) && !(ATisEmpty(i_11))))
              {
                j_11 = ATgetFirst((ATermList) i_11);
                k_11 = (ATerm) ATgetNext((ATermList) i_11);
                {
                  ATerm o_11 = NULL;
                  ATerm p_11 = NULL;
                  t = not_null(k_11);
                  {
                    t = pair_0(t);
                    {
                      p_11 = t;
                      if(((o_11 != NULL) && (o_11 != p_11)))
                        _fail(p_11);
                      else
                        o_11 = p_11;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_11)), (ATerm) ATmakeAppl(sym__2, not_null(h_11), not_null(j_11)));
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
ATerm iter_star_sep_2 (ATerm t, ATerm o_62 (ATerm), ATerm p_62 (ATerm))
{
  ATerm z_11 = NULL,a_12 = NULL,b_12 = NULL;
  z_11 = t;
  y_11 :
  if(match_cons(z_11, sym_iter_star_sep_2))
    {
      a_12 = ATgetArgument(z_11, 0);
      b_12 = ATgetArgument(z_11, 1);
      {
        ATerm f_12 = NULL,h_12 = NULL;
        ATerm g_12 = NULL;
        t = SSLgetAnnotations(not_null(z_11));
        {
          g_12 = t;
          if(((f_12 != NULL) && (f_12 != g_12)))
            _fail(g_12);
          else
            f_12 = g_12;
        }
        {
          t = not_null(a_12);
          {
            ATerm j_12 = NULL;
            t = o_62(t);
            {
              h_12 = t;
              {
                t = not_null(b_12);
                {
                  ATerm l_12 = NULL;
                  t = p_62(t);
                  {
                    j_12 = t;
                    {
                      ATerm m_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(h_12), not_null(j_12)), not_null(f_12));
                      {
                        m_12 = t;
                        if(((l_12 != NULL) && (l_12 != m_12)))
                          _fail(m_12);
                        else
                          l_12 = m_12;
                      }
                      t = not_null(l_12);
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
ATerm iter_sep_2 (ATerm t, ATerm m_62 (ATerm), ATerm n_62 (ATerm))
{
  ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_iter_sep_2))
    {
      z_12 = ATgetArgument(y_12, 0);
      a_13 = ATgetArgument(y_12, 1);
      {
        ATerm e_13 = NULL,g_13 = NULL;
        ATerm f_13 = NULL;
        t = SSLgetAnnotations(not_null(y_12));
        {
          f_13 = t;
          if(((e_13 != NULL) && (e_13 != f_13)))
            _fail(f_13);
          else
            e_13 = f_13;
        }
        {
          t = not_null(z_12);
          {
            ATerm i_13 = NULL;
            t = m_62(t);
            {
              g_13 = t;
              {
                t = not_null(a_13);
                {
                  ATerm k_13 = NULL;
                  t = n_62(t);
                  {
                    i_13 = t;
                    {
                      ATerm l_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(g_13), not_null(i_13)), not_null(e_13));
                      {
                        l_13 = t;
                        if(((k_13 != NULL) && (k_13 != l_13)))
                          _fail(l_13);
                        else
                          k_13 = l_13;
                      }
                      t = not_null(k_13);
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
  ATerm z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  ATerm f_9 = t;
  int g_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
      t = reverse_0(t);
      {
        ATerm t_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            ATerm h_9 = t;
            int m_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                LocalPopChoice(m_9);
              }
            else
              {
                t = h_9;
                {
                  ATerm n_9 = t;
                  int o_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
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
                            t = iter_sep_2(t, _id, _id);
                            LocalPopChoice(q_9);
                          }
                        else
                          {
                            t = p_9;
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
          e_14 = t;
          t_13 :
          if(((ATgetType(e_14) == AT_LIST) && !(ATisEmpty(e_14))))
            {
              f_14 = ATgetFirst((ATermList) e_14);
              g_14 = (ATerm) ATgetNext((ATermList) e_14);
              {
                ATerm h_14 = NULL;
                if(((a_14 != NULL) && (a_14 != f_14)))
                  _fail(f_14);
                else
                  a_14 = f_14;
                {
                  if(((z_13 != NULL) && (z_13 != g_14)))
                    _fail(g_14);
                  else
                    z_13 = g_14;
                  {
                    ATerm r_9 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = r_9;
                      }
                    {
                      ATerm i_14 = NULL;
                      t = not_null(z_13);
                      {
                        t = reverse_0(t);
                        {
                          i_14 = t;
                          if(((h_14 != NULL) && (h_14 != i_14)))
                            _fail(i_14);
                          else
                            h_14 = i_14;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_14)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(h_14))));
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
      LocalPopChoice(g_9);
    }
  else
    {
      t = f_9;
      {
        ATerm s_9 = t;
        int t_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_14 = NULL;
            t = reverse_0(t);
            {
              ATerm x_0 (ATerm t)
              {
                ATerm j_14 = NULL;
                t = Make_0(t);
                {
                  j_14 = t;
                  if(((d_14 != NULL) && (d_14 != j_14)))
                    _fail(j_14);
                  else
                    d_14 = j_14;
                }
                return(t);
              }
              ATerm y_0 (ATerm t)
              {
                ATerm k_14 = NULL;
                ATerm x_9 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = x_9;
                  }
                {
                  t = reverse_0(t);
                  {
                    k_14 = t;
                    if(((b_14 != NULL) && (b_14 != k_14)))
                      _fail(k_14);
                    else
                      b_14 = k_14;
                  }
                }
                return(t);
              }
              t = Cons_2(t, x_0, y_0);
              {
                t = not_null(b_14);
                {
                  t = pair_0(t);
                  {
                    ATerm z_0 (ATerm t)
                    {
                      ATerm l_14 = NULL,m_14 = NULL;
                      ATerm a_1 (ATerm t)
                      {
                        ATerm n_14 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            n_14 = t;
                            if(((l_14 != NULL) && (l_14 != n_14)))
                              _fail(n_14);
                            else
                              l_14 = n_14;
                          }
                        }
                        return(t);
                      }
                      ATerm b_1 (ATerm t)
                      {
                        ATerm o_14 = NULL;
                        ATerm c_1 (ATerm t)
                        {
                          ATerm y_9 = t;
                          int c_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              LocalPopChoice(c_10);
                            }
                          else
                            {
                              t = y_9;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, c_1);
                        {
                          t = Make_0(t);
                          {
                            o_14 = t;
                            if(((m_14 != NULL) && (m_14 != o_14)))
                              _fail(o_14);
                            else
                              m_14 = o_14;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, a_1, b_1);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_h_10), (ATerm) ATinsert(ATinsert(ATempty, not_null(m_14)), not_null(l_14)));
                      return(t);
                    }
                    t = map_1(t, z_0);
                    {
                      p_14 = t;
                      {
                        if(((c_14 != NULL) && (c_14 != p_14)))
                          _fail(p_14);
                        else
                          c_14 = p_14;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_14)), not_null(c_14)));
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(t_9);
          }
        else
          {
            t = s_9;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm l_62 (ATerm))
{
  ATerm c_15 = NULL,d_15 = NULL;
  c_15 = t;
  b_15 :
  if(match_cons(c_15, sym_lit_1))
    {
      d_15 = ATgetArgument(c_15, 0);
      {
        ATerm g_15 = NULL,i_15 = NULL;
        ATerm h_15 = NULL;
        t = SSLgetAnnotations(not_null(c_15));
        {
          h_15 = t;
          if(((g_15 != NULL) && (g_15 != h_15)))
            _fail(h_15);
          else
            g_15 = h_15;
        }
        {
          t = not_null(d_15);
          {
            ATerm k_15 = NULL;
            t = l_62(t);
            {
              i_15 = t;
              {
                ATerm l_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(i_15)), not_null(g_15));
                {
                  l_15 = t;
                  if(((k_15 != NULL) && (k_15 != l_15)))
                    _fail(l_15);
                  else
                    k_15 = l_15;
                }
                t = not_null(k_15);
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
ATerm NonTerminal_0 (ATerm t)
{
  ATerm i_10 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = i_10;
    }
  return(t);
}
ATerm number_node_1 (ATerm t, ATerm j_71 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    t = term_b_8;
    return(t);
  }
  t = split_2(t, d_1, _id);
  {
    ATerm n_16 (ATerm t)
    {
      ATerm x_15 = NULL,y_15 = NULL,a_16 = NULL;
      ATerm j_10 = t;
      int k_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          LocalPopChoice(k_10);
        }
      else
        {
          t = j_10;
          {
            ATerm c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
            c_16 = t;
            v_15 :
            if(match_cons(c_16, sym__2))
              {
                d_16 = ATgetArgument(c_16, 0);
                e_16 = ATgetArgument(c_16, 1);
                w_15 :
                if(((ATgetType(e_16) == AT_LIST) && !(ATisEmpty(e_16))))
                  {
                    f_16 = ATgetFirst((ATermList) e_16);
                    g_16 = (ATerm) ATgetNext((ATermList) e_16);
                    {
                      ATerm l_10 = t;
                      int m_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm h_16 = NULL;
                          if(((x_15 != NULL) && (x_15 != d_16)))
                            _fail(d_16);
                          else
                            x_15 = d_16;
                          {
                            if(((y_15 != NULL) && (y_15 != f_16)))
                              _fail(f_16);
                            else
                              y_15 = f_16;
                            {
                              if(((a_16 != NULL) && (a_16 != g_16)))
                                _fail(g_16);
                              else
                                a_16 = g_16;
                              {
                                t = not_null(y_15);
                                {
                                  t = j_71(t);
                                  {
                                    ATerm i_16 = NULL,k_16 = NULL;
                                    ATerm j_16 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), term_b_8);
                                    {
                                      t = add_0(t);
                                      {
                                        j_16 = t;
                                        if(((i_16 != NULL) && (i_16 != j_16)))
                                          _fail(j_16);
                                        else
                                          i_16 = j_16;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(i_16), not_null(a_16));
                                      {
                                        t = n_16(t);
                                        {
                                          k_16 = t;
                                          if(((h_16 != NULL) && (h_16 != k_16)))
                                            _fail(k_16);
                                          else
                                            h_16 = k_16;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(h_16)), (ATerm) ATmakeAppl(sym__2, not_null(x_15), not_null(y_15)));
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(m_10);
                        }
                      else
                        {
                          t = l_10;
                          {
                            ATerm l_16 = NULL;
                            if(((x_15 != NULL) && (x_15 != d_16)))
                              _fail(d_16);
                            else
                              x_15 = d_16;
                            {
                              if(((y_15 != NULL) && (y_15 != f_16)))
                                _fail(f_16);
                              else
                                y_15 = f_16;
                              {
                                if(((a_16 != NULL) && (a_16 != g_16)))
                                  _fail(g_16);
                                else
                                  a_16 = g_16;
                                {
                                  ATerm m_16 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_15), not_null(a_16));
                                  {
                                    t = n_16(t);
                                    {
                                      m_16 = t;
                                      if(((l_16 != NULL) && (l_16 != m_16)))
                                        _fail(m_16);
                                      else
                                        l_16 = m_16;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(l_16)), not_null(y_15));
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
    t = n_16(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      ATerm v_16 = NULL,w_16 = NULL,x_16 = NULL;
      v_16 = t;
      u_16 :
      if(match_cons(v_16, sym_label_2))
        {
          w_16 = ATgetArgument(v_16, 0);
          x_16 = ATgetArgument(v_16, 1);
          t = not_null(x_16);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, f_1);
    return(t);
  }
  t = map_1(t, e_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_node_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm f_17 = NULL,h_17 = NULL,l_17 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm q_10;
    q_10 = t;
    {
      ATerm g_17 = NULL;
      t = make_0(t);
      {
        g_17 = t;
        if(((f_17 != NULL) && (f_17 != g_17)))
          _fail(g_17);
        else
          f_17 = g_17;
      }
    }
    t = q_10;
    {
      ATerm r_10;
      r_10 = t;
      {
        ATerm k_17 = NULL;
        ATerm g_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_17 = NULL;
            ATerm j_17 = NULL;
            t = term_n_7;
            {
              t = f_71(t);
              {
                j_17 = t;
                if(((i_17 != NULL) && (i_17 != j_17)))
                  _fail(j_17);
                else
                  i_17 = j_17;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_17), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, h_1);
          return(t);
        }
        t = map_1(t, g_1);
        {
          t = concat_0(t);
          {
            k_17 = t;
            if(((h_17 != NULL) && (h_17 != k_17)))
              _fail(k_17);
            else
              h_17 = k_17;
          }
        }
      }
      t = r_10;
      {
        ATerm m_17 = NULL;
        t = term_n_7;
        {
          t = f_71(t);
          {
            m_17 = t;
            if(((l_17 != NULL) && (l_17 != m_17)))
              _fail(m_17);
            else
              l_17 = m_17;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(h_17)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(l_17)), not_null(f_17)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm x_17 = NULL,y_17 = NULL,z_17 = NULL,a_18 = NULL,b_18 = NULL;
  ATerm v_10 = t;
  int y_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL,g_18 = NULL;
      c_18 = t;
      w_17 :
      if(match_cons(c_18, sym_prod_3))
        {
          d_18 = ATgetArgument(c_18, 0);
          e_18 = ATgetArgument(c_18, 1);
          f_18 = ATgetArgument(c_18, 2);
          {
            if(((z_17 != NULL) && (z_17 != d_18)))
              _fail(d_18);
            else
              z_17 = d_18;
            {
              if(((a_18 != NULL) && (a_18 != e_18)))
                _fail(e_18);
              else
                a_18 = e_18;
              {
                if(((b_18 != NULL) && (b_18 != f_18)))
                  _fail(f_18);
                else
                  b_18 = f_18;
                {
                  t = not_null(b_18);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm h_18 = NULL,i_18 = NULL;
                      h_18 = t;
                      u_17 :
                      if(match_cons(h_18, sym_cons_1))
                        {
                          i_18 = ATgetArgument(h_18, 0);
                          if(((x_17 != NULL) && (x_17 != i_18)))
                            _fail(i_18);
                          else
                            x_17 = i_18;
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, i_1);
                  }
                  {
                    t = not_null(z_17);
                    {
                      ATerm j_1 (ATerm t)
                      {
                        t = not_null(x_17);
                        return(t);
                      }
                      t = symbols2pp_entries_1(t, j_1);
                    }
                  }
                }
              }
            }
          }
        }
      else
        {
          if(match_cons(c_18, sym_prod_fun_4))
            {
              d_18 = ATgetArgument(c_18, 0);
              e_18 = ATgetArgument(c_18, 1);
              f_18 = ATgetArgument(c_18, 2);
              g_18 = ATgetArgument(c_18, 3);
              {
                ATerm j_18 = NULL;
                if(((y_17 != NULL) && (y_17 != d_18)))
                  _fail(d_18);
                else
                  y_17 = d_18;
                {
                  if(((z_17 != NULL) && (z_17 != e_18)))
                    _fail(e_18);
                  else
                    z_17 = e_18;
                  {
                    if(((a_18 != NULL) && (a_18 != f_18)))
                      _fail(f_18);
                    else
                      a_18 = f_18;
                    {
                      if(((b_18 != NULL) && (b_18 != g_18)))
                        _fail(g_18);
                      else
                        b_18 = g_18;
                      {
                        ATerm k_18 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_11)), not_null(z_17)), (ATerm) ATinsert(ATinsert(ATempty, term_a_11), (ATerm) ATmakeAppl(sym_lit_1, not_null(y_17))));
                        {
                          t = concat_0(t);
                          {
                            k_18 = t;
                            if(((j_18 != NULL) && (j_18 != k_18)))
                              _fail(k_18);
                            else
                              j_18 = k_18;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(j_18), not_null(a_18), not_null(b_18));
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
      LocalPopChoice(y_10);
    }
  else
    {
      t = v_10;
      {
        ATerm k_1 (ATerm t)
        {
          ATerm d_11 = t;
          if((PushChoice() == 0))
            {
              ATerm l_1 (ATerm t)
              {
                t = term_l_11;
                return(t);
              }
              t = has_option_1(t, l_1);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = d_11;
            }
          {
            ATerm m_1 (ATerm t)
            {
              t = term_m_11;
              return(t);
            }
            t = debug_1(t, m_1);
          }
          return(t);
        }
        t = try_1(t, k_1);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm f_80 (ATerm))
{
  ATerm p_18 (ATerm t)
  {
    ATerm n_11 = t;
    int q_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = f_80(t);
        LocalPopChoice(q_11);
      }
    else
      {
        t = n_11;
        t = Cons_2(t, _id, p_18);
      }
    return(t);
  }
  t = p_18(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  r_18 :
  if(((ATgetType(s_18) == AT_LIST) && !(ATisEmpty(s_18))))
    {
      t_18 = ATgetFirst((ATermList) s_18);
      u_18 = (ATerm) ATgetNext((ATermList) s_18);
      t = not_null(u_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  y_18 :
  if(((ATgetType(z_18) == AT_LIST) && !(ATisEmpty(z_18))))
    {
      a_19 = ATgetFirst((ATermList) z_18);
      b_19 = (ATerm) ATgetNext((ATermList) z_18);
      t = not_null(a_19);
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
    ATerm r_11;
    r_11 = t;
    {
      ATerm j_19 = NULL;
      t = Hd_0(t);
      {
        j_19 = t;
        e_19 :
        if(!(match_int(j_19, 34)))
          {
            _fail(t);
          }
      }
    }
    t = r_11;
    {
      t = Tl_0(t);
      {
        ATerm n_1 (ATerm t)
        {
          ATerm k_19 = NULL,l_19 = NULL,m_19 = NULL;
          k_19 = t;
          g_19 :
          if(((ATgetType(k_19) == AT_LIST) && !(ATisEmpty(k_19))))
            {
              l_19 = ATgetFirst((ATermList) k_19);
              m_19 = (ATerm) ATgetNext((ATermList) k_19);
              h_19 :
              if(match_int(l_19, 34))
                {
                  i_19 :
                  if(((ATgetType(m_19) == AT_LIST) && ATisEmpty(m_19)))
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
ATerm foldr_3 (ATerm t, ATerm v_85 (ATerm), ATerm w_85 (ATerm), ATerm x_85 (ATerm))
{
  ATerm s_11 = t;
  int t_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = v_85(t);
      LocalPopChoice(t_11);
    }
  else
    {
      t = s_11;
      {
        ATerm s_19 = NULL,t_19 = NULL,u_19 = NULL;
        s_19 = t;
        r_19 :
        if(((ATgetType(s_19) == AT_LIST) && !(ATisEmpty(s_19))))
          {
            t_19 = ATgetFirst((ATermList) s_19);
            u_19 = (ATerm) ATgetNext((ATermList) s_19);
            {
              ATerm x_19 = NULL,z_19 = NULL;
              ATerm u_11;
              u_11 = t;
              {
                ATerm y_19 = NULL;
                t = not_null(t_19);
                {
                  t = x_85(t);
                  {
                    y_19 = t;
                    if(((x_19 != NULL) && (x_19 != y_19)))
                      _fail(y_19);
                    else
                      x_19 = y_19;
                  }
                }
              }
              t = u_11;
              {
                ATerm a_20 = NULL;
                t = not_null(u_19);
                {
                  t = foldr_3(t, v_85, w_85, x_85);
                  {
                    a_20 = t;
                    if(((z_19 != NULL) && (z_19 != a_20)))
                      _fail(a_20);
                    else
                      z_19 = a_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(x_19), not_null(z_19));
                  t = w_85(t);
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
ATerm crush_3 (ATerm t, ATerm t_84 (ATerm), ATerm u_84 (ATerm), ATerm v_84 (ATerm))
{
  ATerm i_20 = NULL;
  ATerm k_20 = NULL;
  i_20 = t;
  {
    ATerm l_20 = NULL;
    ATerm n_20 = NULL,o_20 = NULL,p_20 = NULL;
    t = not_null(i_20);
    {
      l_20 = t;
      {
        t = SSL_explode_term(not_null(l_20));
        {
          n_20 = t;
          h_20 :
          if(match_cons(n_20, sym__2))
            {
              o_20 = ATgetArgument(n_20, 0);
              p_20 = ATgetArgument(n_20, 1);
              if(((k_20 != NULL) && (k_20 != p_20)))
                _fail(p_20);
              else
                k_20 = p_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(k_20);
      t = foldr_3(t, t_84, u_84, v_84);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm e_99 (ATerm))
{
  ATerm w_20 (ATerm t)
  {
    ATerm v_11 = t;
    int w_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_20 = NULL;
        t = e_99(t);
        {
          u_20 = t;
          t = (ATerm) ATinsert(ATempty, not_null(u_20));
        }
        LocalPopChoice(w_11);
      }
    else
      {
        t = v_11;
        {
          ATerm o_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, o_1, conc_0, w_20);
        }
      }
    return(t);
  }
  t = w_20(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm f_22 = NULL;
  ATerm p_1 (ATerm t)
  {
    ATerm q_21 = NULL,r_21 = NULL;
    q_21 = t;
    z_20 :
    if(match_cons(q_21, sym_context_free_syntax_1))
      {
        r_21 = ATgetArgument(q_21, 0);
        t = not_null(r_21);
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = collect_p__1(t, p_1);
  {
    t = concat_0(t);
    {
      ATerm q_1 (ATerm t)
      {
        ATerm r_1 (ATerm t)
        {
          ATerm t_21 = NULL,u_21 = NULL;
          t_21 = t;
          g_21 :
          if(match_cons(t_21, sym_cons_1))
            {
              u_21 = ATgetArgument(t_21, 0);
              {
                ATerm w_21 = NULL;
                ATerm x_21 = NULL;
                t = not_null(u_21);
                {
                  t = de_quote_0(t);
                  {
                    x_21 = t;
                    if(((w_21 != NULL) && (w_21 != x_21)))
                      _fail(x_21);
                    else
                      w_21 = x_21;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_cons_1, not_null(w_21));
              }
            }
          else
            {
              if(match_cons(t_21, sym_lit_1))
                {
                  u_21 = ATgetArgument(t_21, 0);
                  {
                    ATerm z_21 = NULL;
                    ATerm a_22 = NULL;
                    t = not_null(u_21);
                    {
                      t = de_quote_0(t);
                      {
                        a_22 = t;
                        if(((z_21 != NULL) && (z_21 != a_22)))
                          _fail(a_22);
                        else
                          z_21 = a_22;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_lit_1, not_null(z_21));
                  }
                }
              else
                {
                  if(match_cons(t_21, sym_sort_1))
                    {
                      u_21 = ATgetArgument(t_21, 0);
                      {
                        ATerm c_22 = NULL;
                        ATerm d_22 = NULL;
                        t = not_null(u_21);
                        {
                          t = de_quote_0(t);
                          {
                            d_22 = t;
                            if(((c_22 != NULL) && (c_22 != d_22)))
                              _fail(d_22);
                            else
                              c_22 = d_22;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_sort_1, not_null(c_22));
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
        t = try_1(t, r_1);
        return(t);
      }
      t = topdown_1(t, q_1);
      {
        t = map_1(t, generate_pp_entries_0);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm x_11 = t;
            if((PushChoice() == 0))
              {
                ATerm e_22 = NULL;
                e_22 = t;
                h_21 :
                if(((ATgetType(e_22) == AT_LIST) && ATisEmpty(e_22)))
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
                t = x_11;
              }
            return(t);
          }
          t = filter_1(t, s_1);
          {
            t = concat_0(t);
            {
              f_22 = t;
              {
                t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(f_22));
                {
                  ATerm t_1 (ATerm t)
                  {
                    ATerm u_1 (ATerm t)
                    {
                      ATerm h_22 = NULL,i_22 = NULL,j_22 = NULL;
                      i_22 = t;
                      p_21 :
                      if(match_cons(i_22, sym_Arg_1))
                        {
                          j_22 = ATgetArgument(i_22, 0);
                          {
                            ATerm l_22 = NULL;
                            ATerm m_22 = NULL;
                            t = not_null(j_22);
                            {
                              t = int_to_string_0(t);
                              {
                                m_22 = t;
                                if(((l_22 != NULL) && (l_22 != m_22)))
                                  _fail(m_22);
                                else
                                  l_22 = m_22;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(l_22));
                          }
                        }
                      else
                        {
                          if(match_cons(i_22, sym_selector_2))
                            {
                              j_22 = ATgetArgument(i_22, 0);
                              h_22 = ATgetArgument(i_22, 1);
                              {
                                ATerm p_22 = NULL;
                                ATerm q_22 = NULL;
                                t = not_null(j_22);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    q_22 = t;
                                    if(((p_22 != NULL) && (p_22 != q_22)))
                                      _fail(q_22);
                                    else
                                      p_22 = q_22;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_selector_2, not_null(p_22), not_null(h_22));
                              }
                            }
                          else
                            {
                              if(match_cons(i_22, sym_S_1))
                                {
                                  j_22 = ATgetArgument(i_22, 0);
                                  {
                                    ATerm s_22 = NULL;
                                    ATerm t_22 = NULL;
                                    t = not_null(j_22);
                                    {
                                      t = quote_0(t);
                                      {
                                        t_22 = t;
                                        if(((s_22 != NULL) && (s_22 != t_22)))
                                          _fail(t_22);
                                        else
                                          s_22 = t_22;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(s_22));
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
                    t = try_1(t, u_1);
                    return(t);
                  }
                  t = topdown_1(t, t_1);
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
ATerm _2 (ATerm t, ATerm y_58 (ATerm), ATerm z_58 (ATerm))
{
  ATerm o_23 = NULL,p_23 = NULL,q_23 = NULL;
  o_23 = t;
  n_23 :
  if(match_cons(o_23, sym__2))
    {
      p_23 = ATgetArgument(o_23, 0);
      q_23 = ATgetArgument(o_23, 1);
      {
        ATerm u_23 = NULL,w_23 = NULL;
        ATerm v_23 = NULL;
        t = SSLgetAnnotations(not_null(o_23));
        {
          v_23 = t;
          if(((u_23 != NULL) && (u_23 != v_23)))
            _fail(v_23);
          else
            u_23 = v_23;
        }
        {
          t = not_null(p_23);
          {
            ATerm y_23 = NULL;
            t = y_58(t);
            {
              w_23 = t;
              {
                t = not_null(q_23);
                {
                  ATerm a_24 = NULL;
                  t = z_58(t);
                  {
                    y_23 = t;
                    {
                      ATerm b_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(w_23), not_null(y_23)), not_null(u_23));
                      {
                        b_24 = t;
                        if(((a_24 != NULL) && (a_24 != b_24)))
                          _fail(b_24);
                        else
                          a_24 = b_24;
                      }
                      t = not_null(a_24);
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
  ATerm c_12;
  c_12 = t;
  {
    ATerm i_24 = NULL;
    ATerm j_24 = NULL;
    j_24 = t;
    if(((i_24 != NULL) && (i_24 != j_24)))
      _fail(j_24);
    else
      i_24 = j_24;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_12, not_null(i_24));
      t = printnl_0(t);
    }
  }
  t = c_12;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm e_12;
  e_12 = t;
  {
    t = error_0(t);
    {
      t = term_b_8;
      t = exit_0(t);
    }
  }
  t = e_12;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm r_74 (ATerm))
{
  ATerm v_26 (ATerm t)
  {
    ATerm i_12 = t;
    int k_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_74(t);
        LocalPopChoice(k_12);
      }
    else
      {
        t = i_12;
        t = _one(t, v_26);
      }
    return(t);
  }
  t = v_26(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
  z_26 = t;
  y_26 :
  if(match_cons(z_26, sym__2))
    {
      a_27 = ATgetArgument(z_26, 0);
      b_27 = ATgetArgument(z_26, 1);
      {
        ATerm n_12;
        n_12 = t;
        {
          t = not_null(b_27);
          {
            ATerm v_1 (ATerm t)
            {
              ATerm e_27 = NULL;
              e_27 = t;
              if(((a_27 != NULL) && (a_27 != e_27)))
                _fail(e_27);
              else
                a_27 = e_27;
              return(t);
            }
            t = oncetd_1(t, v_1);
          }
        }
        t = n_12;
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
  t = term_q_12;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm j_27 = NULL;
  ATerm l_27 = NULL;
  j_27 = t;
  {
    ATerm m_27 = NULL;
    t = get_options_0(t);
    {
      m_27 = t;
      {
        if(((l_27 != NULL) && (l_27 != m_27)))
          _fail(m_27);
        else
          l_27 = m_27;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_27), not_null(l_27));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_n_7;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm r_12;
  r_12 = t;
  {
    t = term_n_7;
    {
      t = i_91(t);
      t = check_option_0(t);
    }
  }
  t = r_12;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm s_12 = t;
  int t_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        t = term_u_12;
        return(t);
      }
      t = has_option_1(t, w_1);
      {
        t = (ATerm) ATinsert(ATempty, term_v_12);
        t = fatal_error_0(t);
      }
      LocalPopChoice(t_12);
    }
  else
    {
      t = s_12;
      {
        t = (ATerm) ATinsert(ATempty, term_w_12);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm p_99 (ATerm))
{
  ATerm x_27 = NULL,z_27 = NULL,a_28 = NULL;
  x_27 = t;
  v_27 :
  if(match_cons(x_27, sym__2))
    {
      z_27 = ATgetArgument(x_27, 0);
      a_28 = ATgetArgument(x_27, 1);
      w_27 :
      if(match_string(z_27, "in-type"))
        {
          ATerm c_28 = NULL,d_28 = NULL;
          ATerm b_13;
          b_13 = t;
          {
            ATerm e_28 = NULL;
            ATerm g_28 = NULL,h_28 = NULL,i_28 = NULL,l_28 = NULL,m_28 = NULL;
            t = not_null(a_28);
            {
              e_28 = t;
              {
                t = SSL_explode_term(not_null(e_28));
                {
                  g_28 = t;
                  s_27 :
                  if(match_cons(g_28, sym__2))
                    {
                      h_28 = ATgetArgument(g_28, 0);
                      i_28 = ATgetArgument(g_28, 1);
                      t_27 :
                      if(((ATgetType(i_28) == AT_LIST) && !(ATisEmpty(i_28))))
                        {
                          l_28 = ATgetFirst((ATermList) i_28);
                          m_28 = (ATerm) ATgetNext((ATermList) i_28);
                          u_27 :
                          if(((ATgetType(m_28) == AT_LIST) && ATisEmpty(m_28)))
                            {
                              {
                                if(((d_28 != NULL) && (d_28 != h_28)))
                                  _fail(h_28);
                                else
                                  d_28 = h_28;
                                if(((c_28 != NULL) && (c_28 != l_28)))
                                  _fail(l_28);
                                else
                                  c_28 = l_28;
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
          t = b_13;
          {
            t = not_null(d_28);
            {
              ATerm c_13 = t;
              int d_13 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_99(t);
                  LocalPopChoice(d_13);
                }
              else
                {
                  t = c_13;
                  t = type_failure_0(t);
                }
            }
            t = not_null(c_28);
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
  ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
  s_28 = t;
  r_28 :
  if(match_cons(s_28, sym__2))
    {
      t_28 = ATgetArgument(s_28, 0);
      u_28 = ATgetArgument(s_28, 1);
      t = SSL_mkterm(not_null(t_28), not_null(u_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm q_99 (ATerm))
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
  d_29 = t;
  b_29 :
  if(match_cons(d_29, sym__2))
    {
      e_29 = ATgetArgument(d_29, 0);
      f_29 = ATgetArgument(d_29, 1);
      c_29 :
      if(match_string(e_29, "out-type"))
        {
          ATerm h_29 = NULL;
          ATerm i_29 = NULL,k_29 = NULL;
          ATerm j_29 = NULL;
          t = term_n_7;
          {
            t = q_99(t);
            {
              j_29 = t;
              if(((i_29 != NULL) && (i_29 != j_29)))
                _fail(j_29);
              else
                i_29 = j_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(i_29), (ATerm) ATinsert(ATempty, not_null(f_29)));
            {
              t = mkterm_0(t);
              {
                k_29 = t;
                if(((h_29 != NULL) && (h_29 != k_29)))
                  _fail(k_29);
                else
                  h_29 = k_29;
              }
            }
          }
          t = not_null(h_29);
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
  ATerm h_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm q_29 = NULL;
        q_29 = t;
        o_29 :
        if(!(match_string(q_29, "out-type")))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, x_1, _id);
      t = OutId_1(t, k_0);
      LocalPopChoice(j_13);
    }
  else
    {
      t = h_13;
      {
        ATerm y_1 (ATerm t)
        {
          ATerm w_29 = NULL;
          w_29 = t;
          p_29 :
          if(!(match_string(w_29, "in-type")))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, y_1, _id);
        t = InId_1(t, j_0);
      }
    }
  return(t);
}
ATerm termid_set_p__1 (ATerm t, ATerm x_99 (ATerm))
{
  ATerm a_30 = NULL,b_30 = NULL,c_30 = NULL;
  a_30 = t;
  z_29 :
  if(match_cons(a_30, sym__2))
    {
      b_30 = ATgetArgument(a_30, 0);
      c_30 = ATgetArgument(a_30, 1);
      {
        ATerm f_30 = NULL;
        ATerm g_30 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_m_13, not_null(c_30));
        {
          t = x_99(t);
          {
            g_30 = t;
            if(((f_30 != NULL) && (f_30 != g_30)))
              _fail(g_30);
            else
              f_30 = g_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_30), not_null(f_30));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm n_13 = t;
  int o_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = m_71(t);
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
ATerm termid_check_p__1 (ATerm t, ATerm v_99 (ATerm))
{
  ATerm r_30 = NULL,s_30 = NULL,t_30 = NULL;
  r_30 = t;
  q_30 :
  if(match_cons(r_30, sym__2))
    {
      s_30 = ATgetArgument(r_30, 0);
      t_30 = ATgetArgument(r_30, 1);
      {
        ATerm w_30 = NULL;
        ATerm x_30 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_p_13, not_null(t_30));
        {
          t = v_99(t);
          {
            x_30 = t;
            if(((w_30 != NULL) && (w_30 != x_30)))
              _fail(x_30);
            else
              w_30 = x_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(s_30), not_null(w_30));
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
  ATerm c_31 = NULL;
  ATerm q_13;
  q_13 = t;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm d_31 = NULL,e_31 = NULL;
      d_31 = t;
      b_31 :
      if(match_cons(d_31, sym_Program_1))
        {
          e_31 = ATgetArgument(d_31, 0);
          if(((c_31 != NULL) && (c_31 != e_31)))
            _fail(e_31);
          else
            c_31 = e_31;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, z_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_s_13), not_null(c_31)), term_r_13));
      {
        t = printnl_0(t);
        {
          t = term_b_8;
          t = exit_0(t);
        }
      }
    }
  }
  t = q_13;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_31 = NULL,j_31 = NULL,k_31 = NULL;
  i_31 = t;
  h_31 :
  if(match_cons(i_31, sym__2))
    {
      j_31 = ATgetArgument(i_31, 0);
      k_31 = ATgetArgument(i_31, 1);
      {
        ATerm u_13;
        u_13 = t;
        t = SSL_printnl(not_null(j_31), not_null(k_31));
        t = u_13;
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
  ATerm p_31 = NULL;
  p_31 = t;
  t = SSL_implode_string(not_null(p_31));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm v_13 = t;
  int w_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_13);
    }
  else
    {
      t = v_13;
      {
        ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
        u_31 = t;
        t_31 :
        if(((ATgetType(u_31) == AT_LIST) && !(ATisEmpty(u_31))))
          {
            v_31 = ATgetFirst((ATermList) u_31);
            w_31 = (ATerm) ATgetNext((ATermList) u_31);
            {
              t = not_null(v_31);
              {
                ATerm a_2 (ATerm t)
                {
                  t = not_null(w_31);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_2);
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
  ATerm g_32 = NULL;
  ATerm i_32 = NULL;
  g_32 = t;
  {
    ATerm j_32 = NULL;
    ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL;
    t = not_null(g_32);
    {
      j_32 = t;
      {
        t = SSL_explode_term(not_null(j_32));
        {
          l_32 = t;
          e_32 :
          if(match_cons(l_32, sym__2))
            {
              m_32 = ATgetArgument(l_32, 0);
              n_32 = ATgetArgument(l_32, 1);
              f_32 :
              if(match_string(m_32, ""))
                {
                  if(((i_32 != NULL) && (i_32 != n_32)))
                    _fail(n_32);
                  else
                    i_32 = n_32;
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
      t = not_null(i_32);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm u_79 (ATerm))
{
  ATerm r_32 (ATerm t)
  {
    ATerm x_13 = t;
    int y_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, r_32);
        LocalPopChoice(y_13);
      }
    else
      {
        t = x_13;
        {
          t = Nil_0(t);
          t = u_79(t);
        }
      }
    return(t);
  }
  t = r_32(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm u_32 = NULL,v_32 = NULL,w_32 = NULL;
  u_32 = t;
  t_32 :
  if(match_cons(u_32, sym__2))
    {
      v_32 = ATgetArgument(u_32, 0);
      w_32 = ATgetArgument(u_32, 1);
      {
        t = not_null(v_32);
        {
          ATerm b_2 (ATerm t)
          {
            t = not_null(w_32);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm q_14 = t;
  int r_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(r_14);
    }
  else
    {
      t = q_14;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm b_33 = NULL;
  b_33 = t;
  t = SSL_explode_string(not_null(b_33));
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
  ATerm f_33 = NULL;
  f_33 = t;
  t = SSL_is_string(not_null(f_33));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm s_14 = t;
  int t_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(t_14);
    }
  else
    {
      t = s_14;
      {
        ATerm u_14 = t;
        int v_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, c_2);
            LocalPopChoice(v_14);
          }
        else
          {
            t = u_14;
            {
              ATerm o_33 = NULL,p_33 = NULL,q_33 = NULL;
              o_33 = t;
              n_33 :
              if(match_cons(o_33, sym_Path_1))
                {
                  p_33 = ATgetArgument(o_33, 0);
                  t = not_null(p_33);
                }
              else
                {
                  if(match_cons(o_33, sym_Var_1))
                    {
                      p_33 = ATgetArgument(o_33, 0);
                      {
                        t = not_null(p_33);
                        {
                          ATerm w_14 = t;
                          int x_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(x_14);
                            }
                          else
                            {
                              t = w_14;
                              {
                                ATerm d_2 (ATerm t)
                                {
                                  t = term_y_14;
                                  return(t);
                                }
                                t = debug_1(t, d_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_33, sym_Prefix_2))
                        {
                          p_33 = ATgetArgument(o_33, 0);
                          q_33 = ATgetArgument(o_33, 1);
                          {
                            ATerm v_33 = NULL,x_33 = NULL;
                            ATerm z_14;
                            z_14 = t;
                            {
                              ATerm w_33 = NULL;
                              t = not_null(p_33);
                              {
                                t = eval_config_0(t);
                                {
                                  w_33 = t;
                                  if(((v_33 != NULL) && (v_33 != w_33)))
                                    _fail(w_33);
                                  else
                                    v_33 = w_33;
                                }
                              }
                            }
                            t = z_14;
                            {
                              ATerm y_33 = NULL;
                              t = not_null(q_33);
                              {
                                t = eval_config_0(t);
                                {
                                  y_33 = t;
                                  if(((x_33 != NULL) && (x_33 != y_33)))
                                    _fail(y_33);
                                  else
                                    x_33 = y_33;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_33), not_null(x_33));
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
  ATerm g_34 = NULL;
  g_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_a_15, not_null(g_34));
    {
      t = table_get_0(t);
      {
        ATerm e_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm e_15;
            e_15 = t;
            {
              ATerm i_34 = NULL;
              ATerm j_34 = NULL;
              j_34 = t;
              if(((i_34 != NULL) && (i_34 != j_34)))
                _fail(j_34);
              else
                i_34 = j_34;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_a_15, not_null(g_34), not_null(i_34));
                t = table_put_0(t);
              }
            }
            t = e_15;
          }
          return(t);
        }
        t = try_1(t, e_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_93 (ATerm))
{
  ATerm f_2 (ATerm t)
  {
    ATerm f_15;
    f_15 = t;
    {
      ATerm n_34 = NULL;
      ATerm o_34 = NULL;
      t = term_j_15;
      {
        t = get_config_0(t);
        {
          o_34 = t;
          if(((n_34 != NULL) && (n_34 != o_34)))
            _fail(o_34);
          else
            n_34 = o_34;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_34), term_m_15);
        t = geq_0(t);
      }
    }
    t = f_15;
    t = a_93(t);
    return(t);
  }
  t = try_1(t, f_2);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
  s_34 = t;
  r_34 :
  if(match_cons(s_34, sym__2))
    {
      t_34 = ATgetArgument(s_34, 0);
      u_34 = ATgetArgument(s_34, 1);
      t = SSL_WriteToTextFile(not_null(t_34), not_null(u_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm c_35 = NULL,d_35 = NULL,e_35 = NULL;
  c_35 = t;
  z_34 :
  if(match_cons(c_35, sym__2))
    {
      d_35 = ATgetArgument(c_35, 0);
      e_35 = ATgetArgument(c_35, 1);
      t = SSL_WriteToBinaryFile(not_null(d_35), not_null(e_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm m_35 = NULL;
  ATerm n_15;
  n_15 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm o_15 = t;
      int p_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            ATerm n_35 = NULL,o_35 = NULL;
            n_35 = t;
            j_35 :
            if(match_cons(n_35, sym_Output_1))
              {
                o_35 = ATgetArgument(n_35, 0);
                if(((m_35 != NULL) && (m_35 != o_35)))
                  _fail(o_35);
                else
                  m_35 = o_35;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, h_2);
          LocalPopChoice(p_15);
        }
      else
        {
          t = o_15;
          {
            ATerm p_35 = NULL;
            t = term_q_15;
            {
              p_35 = t;
              if(((m_35 != NULL) && (m_35 != p_35)))
                _fail(p_35);
              else
                m_35 = p_35;
            }
          }
        }
      return(t);
    }
    t = _2(t, g_2, _id);
  }
  t = n_15;
  {
    ATerm i_2 (ATerm t)
    {
      ATerm j_2 (ATerm t)
      {
        t = not_null(m_35);
        return(t);
      }
      t = split_2(t, j_2, _id);
      return(t);
    }
    t = _2(t, _id, i_2);
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_2 (ATerm t)
          {
            ATerm l_2 (ATerm t)
            {
              ATerm q_35 = NULL;
              q_35 = t;
              l_35 :
              if(!(match_cons(q_35, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, l_2);
            return(t);
          }
          t = _2(t, k_2, WriteToBinaryFile_0);
          LocalPopChoice(s_15);
        }
      else
        {
          t = r_15;
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
ATerm apply_strategy_1 (ATerm t, ATerm h_91 (ATerm))
{
  ATerm a_36 = NULL,c_36 = NULL,d_36 = NULL,e_36 = NULL;
  ATerm t_15;
  t_15 = t;
  t = dtime_0(t);
  t = t_15;
  {
    t = h_91(t);
    {
      ATerm u_15;
      u_15 = t;
      {
        ATerm b_36 = NULL;
        t = dtime_0(t);
        {
          b_36 = t;
          if(((a_36 != NULL) && (a_36 != b_36)))
            _fail(b_36);
          else
            a_36 = b_36;
        }
      }
      t = u_15;
      {
        c_36 = t;
        v_35 :
        if(match_cons(c_36, sym__2))
          {
            d_36 = ATgetArgument(c_36, 0);
            e_36 = ATgetArgument(c_36, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(d_36)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(a_36))), not_null(e_36));
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
ATerm debug_1 (ATerm t, ATerm d_90 (ATerm))
{
  ATerm z_15;
  z_15 = t;
  {
    ATerm l_36 = NULL,n_36 = NULL;
    ATerm b_16;
    b_16 = t;
    {
      ATerm m_36 = NULL;
      t = d_90(t);
      {
        m_36 = t;
        if(((l_36 != NULL) && (l_36 != m_36)))
          _fail(m_36);
        else
          l_36 = m_36;
      }
    }
    t = b_16;
    {
      ATerm o_36 = NULL;
      o_36 = t;
      if(((n_36 != NULL) && (n_36 != o_36)))
        _fail(o_36);
      else
        n_36 = o_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_36)), not_null(l_36)));
        t = printnl_0(t);
      }
    }
  }
  t = z_15;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm s_36 = NULL;
  ATerm o_16 = t;
  int p_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_36 = NULL;
      t_36 = t;
      {
        if(((s_36 != NULL) && (s_36 != t_36)))
          _fail(t_36);
        else
          s_36 = t_36;
        t = SSL_ReadFromFile(not_null(s_36));
      }
      LocalPopChoice(p_16);
    }
  else
    {
      t = o_16;
      {
        ATerm m_2 (ATerm t)
        {
          t = term_q_16;
          return(t);
        }
        t = debug_1(t, m_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm i_87 (ATerm), ATerm j_87 (ATerm))
{
  ATerm x_36 = NULL,z_36 = NULL;
  ATerm r_16;
  r_16 = t;
  {
    ATerm y_36 = NULL;
    t = i_87(t);
    {
      y_36 = t;
      if(((x_36 != NULL) && (x_36 != y_36)))
        _fail(y_36);
      else
        x_36 = y_36;
    }
  }
  t = r_16;
  {
    ATerm a_37 = NULL;
    t = j_87(t);
    {
      a_37 = t;
      if(((z_36 != NULL) && (z_36 != a_37)))
        _fail(a_37);
      else
        z_36 = a_37;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_36), not_null(z_36));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_37 = NULL;
  ATerm s_16;
  s_16 = t;
  {
    ATerm t_16 = t;
    int y_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_2 (ATerm t)
        {
          ATerm h_37 = NULL,i_37 = NULL;
          h_37 = t;
          e_37 :
          if(match_cons(h_37, sym_Input_1))
            {
              i_37 = ATgetArgument(h_37, 0);
              if(((g_37 != NULL) && (g_37 != i_37)))
                _fail(i_37);
              else
                g_37 = i_37;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_2);
        LocalPopChoice(y_16);
      }
    else
      {
        t = t_16;
        {
          ATerm j_37 = NULL;
          t = term_z_16;
          {
            j_37 = t;
            if(((g_37 != NULL) && (g_37 != j_37)))
              _fail(j_37);
            else
              g_37 = j_37;
          }
        }
      }
  }
  t = s_16;
  {
    ATerm o_2 (ATerm t)
    {
      t = not_null(g_37);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm s_2 (ATerm t)
  {
    ATerm n_37 = NULL;
    n_37 = t;
    m_37 :
    if(!(match_string(n_37, "-v")))
      {
        if(!(match_string(n_37, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_2 (ATerm t)
  {
    t = term_b_17;
    t = set_config_0(t);
    t = term_c_17;
    return(t);
  }
  ATerm u_2 (ATerm t)
  {
    t = term_d_17;
    return(t);
  }
  t = Option_3(t, s_2, t_2, u_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm v_2 (ATerm t)
  {
    ATerm q_37 = NULL;
    q_37 = t;
    o_37 :
    if(!(match_string(q_37, "-k")))
      {
        if(!(match_string(q_37, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm w_2 (ATerm t)
  {
    ATerm e_17;
    e_17 = t;
    {
      ATerm r_37 = NULL;
      ATerm s_37 = NULL;
      t = string_to_int_0(t);
      {
        s_37 = t;
        if(((r_37 != NULL) && (r_37 != s_37)))
          _fail(s_37);
        else
          r_37 = s_37;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_n_17, not_null(r_37));
        t = set_config_0(t);
      }
    }
    t = e_17;
    return(t);
  }
  ATerm x_2 (ATerm t)
  {
    t = term_o_17;
    return(t);
  }
  t = ArgOption_3(t, v_2, w_2, x_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm v_37 = NULL;
  v_37 = t;
  t = SSL_string_to_int(not_null(v_37));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm p_17 = t;
  int q_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_2 (ATerm t)
      {
        ATerm d_38 = NULL;
        d_38 = t;
        y_37 :
        if(!(match_string(d_38, "-S")))
          {
            if(!(match_string(d_38, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_2 (ATerm t)
      {
        t = term_s_17;
        t = set_config_0(t);
        t = term_t_17;
        return(t);
      }
      ATerm a_3 (ATerm t)
      {
        t = term_v_17;
        return(t);
      }
      t = Option_3(t, y_2, z_2, a_3);
      LocalPopChoice(q_17);
    }
  else
    {
      t = p_17;
      {
        ATerm l_18 = t;
        int m_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_3 (ATerm t)
            {
              ATerm e_38 = NULL;
              e_38 = t;
              z_37 :
              if(!(match_string(e_38, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_3 (ATerm t)
            {
              ATerm h_38 = NULL;
              ATerm n_18;
              n_18 = t;
              {
                ATerm f_38 = NULL;
                ATerm g_38 = NULL;
                t = string_to_int_0(t);
                {
                  g_38 = t;
                  if(((f_38 != NULL) && (f_38 != g_38)))
                    _fail(g_38);
                  else
                    f_38 = g_38;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_j_15, not_null(f_38));
                  t = set_config_0(t);
                }
              }
              t = n_18;
              {
                ATerm i_38 = NULL;
                i_38 = t;
                if(((h_38 != NULL) && (h_38 != i_38)))
                  _fail(i_38);
                else
                  h_38 = i_38;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(h_38));
              }
              return(t);
            }
            ATerm e_3 (ATerm t)
            {
              t = term_o_18;
              return(t);
            }
            t = ArgOption_3(t, b_3, d_3, e_3);
            LocalPopChoice(m_18);
          }
        else
          {
            t = l_18;
            {
              ATerm f_3 (ATerm t)
              {
                ATerm j_38 = NULL;
                j_38 = t;
                c_38 :
                if(!(match_string(j_38, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm g_3 (ATerm t)
              {
                t = term_v_18;
                t = set_config_0(t);
                t = term_w_18;
                return(t);
              }
              ATerm h_3 (ATerm t)
              {
                t = term_x_18;
                return(t);
              }
              t = Option_3(t, f_3, g_3, h_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm c_19 = t;
  int d_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(d_19);
    }
  else
    {
      t = c_19;
      {
        ATerm f_19 = t;
        int n_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(n_19);
          }
        else
          {
            t = f_19;
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
    ATerm p_38 = NULL;
    p_38 = t;
    m_38 :
    if(!(match_string(p_38, "-o")))
      {
        if(!(match_string(p_38, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    ATerm s_38 = NULL;
    ATerm o_19;
    o_19 = t;
    {
      ATerm q_38 = NULL;
      ATerm r_38 = NULL;
      r_38 = t;
      if(((q_38 != NULL) && (q_38 != r_38)))
        _fail(r_38);
      else
        q_38 = r_38;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_19, not_null(q_38));
        t = set_config_0(t);
      }
    }
    t = o_19;
    {
      ATerm t_38 = NULL;
      t_38 = t;
      if(((s_38 != NULL) && (s_38 != t_38)))
        _fail(t_38);
      else
        s_38 = t_38;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(s_38));
    }
    return(t);
  }
  ATerm m_3 (ATerm t)
  {
    t = term_q_19;
    return(t);
  }
  t = ArgOption_3(t, k_3, l_3, m_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      {
        ATerm n_3 (ATerm t)
        {
          ATerm x_38 = NULL;
          x_38 = t;
          w_38 :
          if(!(match_string(x_38, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm p_3 (ATerm t)
        {
          t = term_c_20;
          t = set_config_0(t);
          t = term_d_20;
          return(t);
        }
        ATerm q_3 (ATerm t)
        {
          t = term_e_20;
          return(t);
        }
        t = Option_3(t, n_3, p_3, q_3);
      }
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
  b_39 = t;
  a_39 :
  if(match_cons(b_39, sym__3))
    {
      c_39 = ATgetArgument(b_39, 0);
      d_39 = ATgetArgument(b_39, 1);
      e_39 = ATgetArgument(b_39, 2);
      {
        ATerm f_20;
        f_20 = t;
        {
          ATerm i_39 = NULL;
          ATerm j_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(c_39), not_null(d_39));
          {
            ATerm g_20 = t;
            int j_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_20);
              }
            else
              {
                t = g_20;
                t = (ATerm) ATempty;
              }
            {
              j_39 = t;
              if(((i_39 != NULL) && (i_39 != j_39)))
                _fail(j_39);
              else
                i_39 = j_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(c_39), not_null(d_39), (ATerm) ATinsert(CheckATermList(not_null(i_39)), not_null(e_39)));
            t = table_put_0(t);
          }
        }
        t = f_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm h_95 (ATerm))
{
  ATerm n_39 = NULL;
  ATerm o_39 = NULL;
  t = term_n_7;
  {
    t = h_95(t);
    {
      o_39 = t;
      if(((n_39 != NULL) && (n_39 != o_39)))
        _fail(o_39);
      else
        n_39 = o_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_20, term_q_20, not_null(n_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL,z_39 = NULL;
  v_39 = t;
  t_39 :
  if(match_string(v_39, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(v_39) == AT_LIST) && !(ATisEmpty(v_39))))
        {
          w_39 = ATgetFirst((ATermList) v_39);
          x_39 = (ATerm) ATgetNext((ATermList) v_39);
          u_39 :
          if(((ATgetType(x_39) == AT_LIST) && !(ATisEmpty(x_39))))
            {
              y_39 = ATgetFirst((ATermList) x_39);
              z_39 = (ATerm) ATgetNext((ATermList) x_39);
              {
                ATerm d_40 = NULL;
                ATerm r_20;
                r_20 = t;
                {
                  t = not_null(w_39);
                  t = g_0(t);
                }
                t = r_20;
                {
                  ATerm e_40 = NULL;
                  t = not_null(y_39);
                  {
                    t = h_0(t);
                    {
                      e_40 = t;
                      if(((d_40 != NULL) && (d_40 != e_40)))
                        _fail(e_40);
                      else
                        d_40 = e_40;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(z_39)), not_null(d_40));
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
  ATerm r_3 (ATerm t)
  {
    ATerm l_40 = NULL;
    l_40 = t;
    i_40 :
    if(!(match_string(l_40, "-i")))
      {
        if(!(match_string(l_40, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm t_3 (ATerm t)
  {
    ATerm o_40 = NULL;
    ATerm s_20;
    s_20 = t;
    {
      ATerm m_40 = NULL;
      ATerm n_40 = NULL;
      n_40 = t;
      if(((m_40 != NULL) && (m_40 != n_40)))
        _fail(n_40);
      else
        m_40 = n_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_20, not_null(m_40));
        t = set_config_0(t);
      }
    }
    t = s_20;
    {
      ATerm p_40 = NULL;
      p_40 = t;
      if(((o_40 != NULL) && (o_40 != p_40)))
        _fail(p_40);
      else
        o_40 = p_40;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_40));
    }
    return(t);
  }
  ATerm u_3 (ATerm t)
  {
    t = term_v_20;
    return(t);
  }
  t = ArgOption_3(t, r_3, t_3, u_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_20 = t;
  int y_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(y_20);
    }
  else
    {
      t = x_20;
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATempty, term_c_21));
  {
    t = printnl_0(t);
    {
      t = term_b_8;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm t_40 = NULL;
  t_40 = t;
  t = SSL_TicksToSeconds(not_null(t_40));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm y_40 = NULL,z_40 = NULL,a_41 = NULL;
  y_40 = t;
  x_40 :
  if(match_cons(y_40, sym__2))
    {
      z_40 = ATgetArgument(y_40, 0);
      a_41 = ATgetArgument(y_40, 1);
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(z_40), not_null(a_41));
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            t = SSL_addr(not_null(z_40), not_null(a_41));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm t_85 (ATerm), ATerm u_85 (ATerm))
{
  ATerm f_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = t_85(t);
      LocalPopChoice(i_21);
    }
  else
    {
      t = f_21;
      {
        ATerm h_41 = NULL,i_41 = NULL,j_41 = NULL;
        h_41 = t;
        g_41 :
        if(((ATgetType(h_41) == AT_LIST) && !(ATisEmpty(h_41))))
          {
            i_41 = ATgetFirst((ATermList) h_41);
            j_41 = (ATerm) ATgetNext((ATermList) h_41);
            {
              ATerm m_41 = NULL;
              ATerm n_41 = NULL;
              t = not_null(j_41);
              {
                t = foldr_2(t, t_85, u_85);
                {
                  n_41 = t;
                  if(((m_41 != NULL) && (m_41 != n_41)))
                    _fail(n_41);
                  else
                    m_41 = n_41;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(i_41), not_null(m_41));
                t = u_85(t);
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
ATerm crush_2 (ATerm t, ATerm r_84 (ATerm), ATerm s_84 (ATerm))
{
  ATerm u_41 = NULL;
  ATerm w_41 = NULL;
  u_41 = t;
  {
    ATerm x_41 = NULL;
    ATerm z_41 = NULL,a_42 = NULL,b_42 = NULL;
    t = not_null(u_41);
    {
      x_41 = t;
      {
        t = SSL_explode_term(not_null(x_41));
        {
          z_41 = t;
          t_41 :
          if(match_cons(z_41, sym__2))
            {
              a_42 = ATgetArgument(z_41, 0);
              b_42 = ATgetArgument(z_41, 1);
              if(((w_41 != NULL) && (w_41 != b_42)))
                _fail(b_42);
              else
                w_41 = b_42;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(w_41);
      t = foldr_2(t, r_84, s_84);
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
    ATerm v_3 (ATerm t)
    {
      t = term_r_17;
      return(t);
    }
    t = crush_2(t, v_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm h_42 = NULL,i_42 = NULL,j_42 = NULL;
  h_42 = t;
  g_42 :
  if(match_cons(h_42, sym__2))
    {
      i_42 = ATgetArgument(h_42, 0);
      j_42 = ATgetArgument(h_42, 1);
      {
        ATerm j_21;
        j_21 = t;
        {
          ATerm k_21 = t;
          int l_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(i_42), not_null(j_42));
              LocalPopChoice(l_21);
            }
          else
            {
              t = k_21;
              t = SSL_gtr(not_null(i_42), not_null(j_42));
            }
        }
        t = j_21;
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
  ATerm u_42 = NULL;
  ATerm m_21 = t;
  int n_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_42 = NULL,w_42 = NULL,x_42 = NULL;
      v_42 = t;
      t_42 :
      if(match_cons(v_42, sym__2))
        {
          w_42 = ATgetArgument(v_42, 0);
          x_42 = ATgetArgument(v_42, 1);
          {
            if(((u_42 != NULL) && (u_42 != w_42)))
              _fail(w_42);
            else
              u_42 = w_42;
            if(((u_42 != NULL) && (u_42 != x_42)))
              _fail(x_42);
            else
              u_42 = x_42;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(n_21);
    }
  else
    {
      t = m_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_92 (ATerm))
{
  ATerm a_4 (ATerm t)
  {
    ATerm o_21;
    o_21 = t;
    {
      ATerm a_43 = NULL;
      ATerm b_43 = NULL;
      t = term_j_15;
      {
        t = get_config_0(t);
        {
          b_43 = t;
          if(((a_43 != NULL) && (a_43 != b_43)))
            _fail(b_43);
          else
            a_43 = b_43;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_43), term_b_8);
        t = geq_0(t);
      }
    }
    t = o_21;
    t = z_92(t);
    return(t);
  }
  t = try_1(t, a_4);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm b_4 (ATerm t)
  {
    ATerm f_43 = NULL,h_43 = NULL;
    ATerm s_21;
    s_21 = t;
    {
      ATerm g_43 = NULL;
      t = run_time_0(t);
      {
        g_43 = t;
        if(((f_43 != NULL) && (f_43 != g_43)))
          _fail(g_43);
        else
          f_43 = g_43;
      }
    }
    t = s_21;
    {
      ATerm i_43 = NULL;
      t = term_v_21;
      {
        t = get_config_0(t);
        {
          i_43 = t;
          if(((h_43 != NULL) && (h_43 != i_43)))
            _fail(i_43);
          else
            h_43 = i_43;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_b_22), not_null(f_43)), term_y_21), not_null(h_43)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, b_4);
  {
    t = term_r_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_43 = NULL;
  p_43 = t;
  o_43 :
  if(match_cons(p_43, sym_Version_0))
    {
      ATerm r_43 = NULL,t_43 = NULL;
      ATerm g_22;
      g_22 = t;
      {
        ATerm s_43 = NULL;
        t = SSLgetAnnotations(not_null(p_43));
        {
          s_43 = t;
          if(((r_43 != NULL) && (r_43 != s_43)))
            _fail(s_43);
          else
            r_43 = s_43;
        }
      }
      t = g_22;
      {
        ATerm u_43 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_43));
        {
          u_43 = t;
          if(((t_43 != NULL) && (t_43 != u_43)))
            _fail(u_43);
          else
            t_43 = u_43;
        }
        t = not_null(t_43);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm f_91 (ATerm))
{
  ATerm c_4 (ATerm t)
  {
    ATerm k_22 = t;
    int n_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(n_22);
      }
    else
      {
        t = k_22;
        {
          ATerm o_22 = t;
          int r_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(r_22);
            }
          else
            {
              t = o_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, c_4);
  t = f_91(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_43 = NULL;
  z_43 = t;
  t = SSL_table_create(not_null(z_43));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm f_44 = NULL;
  f_44 = t;
  {
    ATerm u_22;
    u_22 = t;
    {
      t = term_o_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_12, term_p_12, not_null(f_44));
          t = table_put_0(t);
        }
      }
    }
    t = u_22;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_44 = NULL;
  l_44 = t;
  t = SSL_table_destroy(not_null(l_44));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_44 = NULL;
  p_44 = t;
  t = SSL_exit(not_null(p_44));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm t_44 = NULL,u_44 = NULL,v_44 = NULL;
  t_44 = t;
  s_44 :
  if(((ATgetType(t_44) == AT_LIST) && ATisEmpty(t_44)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(t_44) == AT_LIST) && !(ATisEmpty(t_44))))
        {
          u_44 = ATgetFirst((ATermList) t_44);
          v_44 = (ATerm) ATgetNext((ATermList) t_44);
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
  ATerm v_22;
  v_22 = t;
  {
    ATerm y_44 = NULL;
    ATerm b_45 = NULL;
    ATerm w_22 = t;
    int x_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(x_22);
      }
    else
      {
        t = w_22;
        {
          ATerm z_44 = NULL;
          ATerm a_45 = NULL;
          a_45 = t;
          if(((z_44 != NULL) && (z_44 != a_45)))
            _fail(a_45);
          else
            z_44 = a_45;
          t = (ATerm) ATinsert(ATempty, not_null(z_44));
        }
      }
    {
      b_45 = t;
      if(((y_44 != NULL) && (y_44 != b_45)))
        _fail(b_45);
      else
        y_44 = b_45;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_q_15, not_null(y_44));
      t = printnl_0(t);
    }
  }
  t = v_22;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm d_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm e_45 (ATerm t)
  {
    ATerm y_22 = t;
    int z_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_22);
      }
    else
      {
        t = y_22;
        t = Cons_2(t, f_79, e_45);
      }
    return(t);
  }
  t = e_45(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm n_45 = NULL,o_45 = NULL,q_45 = NULL;
  q_45 = t;
  m_45 :
  if(((ATgetType(q_45) == AT_LIST) && !(ATisEmpty(q_45))))
    {
      n_45 = ATgetFirst((ATermList) q_45);
      o_45 = (ATerm) ATgetNext((ATermList) q_45);
      {
        ATerm t_45 = NULL;
        t = not_null(o_45);
        {
          ATerm a_23;
          a_23 = t;
          {
            ATerm u_45 = NULL,w_45 = NULL,y_45 = NULL;
            ATerm b_23;
            b_23 = t;
            {
              ATerm v_45 = NULL;
              t = d_0(t);
              {
                v_45 = t;
                if(((u_45 != NULL) && (u_45 != v_45)))
                  _fail(v_45);
                else
                  u_45 = v_45;
              }
            }
            t = b_23;
            {
              ATerm x_45 = NULL;
              t = not_null(n_45);
              {
                t = a_0(t);
                {
                  x_45 = t;
                  if(((w_45 != NULL) && (w_45 != x_45)))
                    _fail(x_45);
                  else
                    w_45 = x_45;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(u_45)), not_null(w_45));
                {
                  y_45 = t;
                  if(((t_45 != NULL) && (t_45 != y_45)))
                    _fail(y_45);
                  else
                    t_45 = y_45;
                }
              }
            }
          }
          t = a_23;
          {
            ATerm e_4 (ATerm t)
            {
              t = not_null(t_45);
              return(t);
            }
            t = reverse_acc_2(t, a_0, e_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(q_45) == AT_LIST) && ATisEmpty(q_45)))
        {
          {
            t = term_n_7;
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
  ATerm f_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, f_4);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_46 = NULL,h_46 = NULL,i_46 = NULL;
  g_46 = t;
  f_46 :
  if(match_cons(g_46, sym__2))
    {
      h_46 = ATgetArgument(g_46, 0);
      i_46 = ATgetArgument(g_46, 1);
      t = SSL_table_get(not_null(h_46), not_null(i_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm c_95 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm r_68 (ATerm))
{
  ATerm r_46 = NULL,s_46 = NULL;
  r_46 = t;
  q_46 :
  if(match_cons(r_46, sym_Program_1))
    {
      s_46 = ATgetArgument(r_46, 0);
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
            ATerm g_47 = NULL;
            t = r_68(t);
            {
              z_46 = t;
              {
                ATerm i_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(z_46)), not_null(x_46));
                {
                  i_47 = t;
                  if(((g_47 != NULL) && (g_47 != i_47)))
                    _fail(i_47);
                  else
                    g_47 = i_47;
                }
                t = not_null(g_47);
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
  ATerm r_47 = NULL;
  ATerm c_23 = t;
  int d_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_47 = NULL;
      t = term_v_21;
      {
        t = get_config_0(t);
        {
          s_47 = t;
          if(((r_47 != NULL) && (r_47 != s_47)))
            _fail(s_47);
          else
            r_47 = s_47;
        }
      }
      LocalPopChoice(d_23);
    }
  else
    {
      t = c_23;
      {
        ATerm g_4 (ATerm t)
        {
          ATerm h_4 (ATerm t)
          {
            ATerm t_47 = NULL;
            t_47 = t;
            if(((r_47 != NULL) && (r_47 != t_47)))
              _fail(t_47);
            else
              r_47 = t_47;
            return(t);
          }
          t = Program_1(t, h_4);
          return(t);
        }
        t = option_defined_1(t, g_4);
      }
    }
  {
    ATerm i_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        t = not_null(r_47);
        return(t);
      }
      t = short_description_1(t, j_4);
      t = echo_0(t);
      return(t);
    }
    t = try_1(t, i_4);
    {
      t = term_e_23;
      {
        t = echo_0(t);
        {
          t = term_f_23;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm n_4 (ATerm t)
                {
                  ATerm u_47 = NULL;
                  ATerm v_47 = NULL;
                  v_47 = t;
                  if(((u_47 != NULL) && (u_47 != v_47)))
                    _fail(v_47);
                  else
                    u_47 = v_47;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_47)), term_g_23);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, n_4);
                {
                  ATerm o_4 (ATerm t)
                  {
                    ATerm w_47 = NULL;
                    ATerm x_47 = NULL;
                    ATerm s_4 (ATerm t)
                    {
                      t = not_null(r_47);
                      return(t);
                    }
                    t = long_description_1(t, s_4);
                    {
                      x_47 = t;
                      if(((w_47 != NULL) && (w_47 != x_47)))
                        _fail(x_47);
                      else
                        w_47 = x_47;
                    }
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(w_47)), term_h_23);
                      t = echo_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, o_4);
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
  ATerm i_23;
  i_23 = t;
  {
    ATerm d_48 = NULL;
    ATerm e_48 = NULL;
    e_48 = t;
    if(((d_48 != NULL) && (d_48 != e_48)))
      _fail(e_48);
    else
      d_48 = e_48;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATempty, not_null(d_48)));
      t = printnl_0(t);
    }
  }
  t = i_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm e_90 (ATerm))
{
  ATerm j_23;
  j_23 = t;
  {
    t = e_90(t);
    t = debug_0(t);
  }
  t = j_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm s_68 (ATerm))
{
  ATerm l_48 = NULL,m_48 = NULL;
  l_48 = t;
  k_48 :
  if(match_cons(l_48, sym_Undefined_1))
    {
      m_48 = ATgetArgument(l_48, 0);
      {
        ATerm p_48 = NULL,r_48 = NULL;
        ATerm q_48 = NULL;
        t = SSLgetAnnotations(not_null(l_48));
        {
          q_48 = t;
          if(((p_48 != NULL) && (p_48 != q_48)))
            _fail(q_48);
          else
            p_48 = q_48;
        }
        {
          t = not_null(m_48);
          {
            ATerm t_48 = NULL;
            t = s_68(t);
            {
              r_48 = t;
              {
                ATerm u_48 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(r_48)), not_null(p_48));
                {
                  u_48 = t;
                  if(((t_48 != NULL) && (t_48 != u_48)))
                    _fail(u_48);
                  else
                    t_48 = u_48;
                }
                t = not_null(t_48);
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
ATerm fetch_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm z_48 (ATerm t)
  {
    ATerm k_23 = t;
    int l_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, o_79, _id);
        LocalPopChoice(l_23);
      }
    else
      {
        t = k_23;
        t = Cons_2(t, _id, z_48);
      }
    return(t);
  }
  t = z_48(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm c_94 (ATerm))
{
  t = fetch_1(t, c_94);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_49 = NULL;
  e_49 = t;
  d_49 :
  if(match_cons(e_49, sym_Help_0))
    {
      ATerm g_49 = NULL,i_49 = NULL;
      ATerm m_23;
      m_23 = t;
      {
        ATerm h_49 = NULL;
        t = SSLgetAnnotations(not_null(e_49));
        {
          h_49 = t;
          if(((g_49 != NULL) && (g_49 != h_49)))
            _fail(h_49);
          else
            g_49 = h_49;
        }
      }
      t = m_23;
      {
        ATerm j_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(g_49));
        {
          j_49 = t;
          if(((i_49 != NULL) && (i_49 != j_49)))
            _fail(j_49);
          else
            i_49 = j_49;
        }
        t = not_null(i_49);
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
  ATerm v_4 (ATerm t)
  {
    ATerm o_49 = NULL;
    o_49 = t;
    n_49 :
    if(!(match_string(o_49, "--help")))
      {
        if(!(match_string(o_49, "-h")))
          {
            if(!(match_string(o_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm w_4 (ATerm t)
  {
    t = term_s_23;
    {
      t = set_config_0(t);
      t = term_t_23;
    }
    return(t);
  }
  ATerm x_4 (ATerm t)
  {
    t = term_x_23;
    return(t);
  }
  t = Option_3(t, v_4, w_4, x_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm r_49 = NULL,s_49 = NULL,t_49 = NULL;
  r_49 = t;
  q_49 :
  if(((ATgetType(r_49) == AT_LIST) && !(ATisEmpty(r_49))))
    {
      s_49 = ATgetFirst((ATermList) r_49);
      t_49 = (ATerm) ATgetNext((ATermList) r_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(t_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(s_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_60 (ATerm), ATerm i_60 (ATerm))
{
  ATerm d_50 = NULL,e_50 = NULL,f_50 = NULL;
  d_50 = t;
  c_50 :
  if(((ATgetType(d_50) == AT_LIST) && !(ATisEmpty(d_50))))
    {
      e_50 = ATgetFirst((ATermList) d_50);
      f_50 = (ATerm) ATgetNext((ATermList) d_50);
      {
        ATerm u_50 = NULL,w_50 = NULL;
        ATerm v_50 = NULL;
        t = SSLgetAnnotations(not_null(d_50));
        {
          v_50 = t;
          if(((u_50 != NULL) && (u_50 != v_50)))
            _fail(v_50);
          else
            u_50 = v_50;
        }
        {
          t = not_null(e_50);
          {
            ATerm y_50 = NULL;
            t = h_60(t);
            {
              w_50 = t;
              {
                t = not_null(f_50);
                {
                  ATerm a_51 = NULL;
                  t = i_60(t);
                  {
                    y_50 = t;
                    {
                      ATerm l_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(y_50)), not_null(w_50)), not_null(u_50));
                      {
                        l_51 = t;
                        if(((a_51 != NULL) && (a_51 != l_51)))
                          _fail(l_51);
                        else
                          a_51 = l_51;
                      }
                      t = not_null(a_51);
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
  ATerm z_51 = NULL;
  z_51 = t;
  y_51 :
  if(((ATgetType(z_51) == AT_LIST) && ATisEmpty(z_51)))
    {
      {
        ATerm b_52 = NULL,d_52 = NULL;
        ATerm z_23;
        z_23 = t;
        {
          ATerm c_52 = NULL;
          t = SSLgetAnnotations(not_null(z_51));
          {
            c_52 = t;
            if(((b_52 != NULL) && (b_52 != c_52)))
              _fail(c_52);
            else
              b_52 = c_52;
          }
        }
        t = z_23;
        {
          ATerm e_52 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(b_52));
          {
            e_52 = t;
            if(((d_52 != NULL) && (d_52 != e_52)))
              _fail(e_52);
            else
              d_52 = e_52;
          }
          t = not_null(d_52);
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
  ATerm k_52 = NULL,l_52 = NULL,m_52 = NULL;
  k_52 = t;
  j_52 :
  if(match_cons(k_52, sym__2))
    {
      l_52 = ATgetArgument(k_52, 0);
      m_52 = ATgetArgument(k_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_a_15, not_null(l_52), not_null(m_52));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm f_95 (ATerm))
{
  ATerm c_24;
  c_24 = t;
  {
    ATerm y_4 (ATerm t)
    {
      t = term_d_24;
      t = f_95(t);
      return(t);
    }
    t = try_1(t, y_4);
  }
  t = c_24;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm v_52 = NULL;
      ATerm e_24;
      e_24 = t;
      {
        ATerm t_52 = NULL;
        ATerm u_52 = NULL;
        u_52 = t;
        if(((t_52 != NULL) && (t_52 != u_52)))
          _fail(u_52);
        else
          t_52 = u_52;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_21, not_null(t_52));
          t = set_config_0(t);
        }
      }
      t = e_24;
      {
        ATerm w_52 = NULL;
        w_52 = t;
        if(((v_52 != NULL) && (v_52 != w_52)))
          _fail(w_52);
        else
          v_52 = w_52;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(v_52));
      }
      return(t);
    }
    ATerm a_5 (ATerm t)
    {
      ATerm f_24 = t;
      int g_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_24 = t;
          int k_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(k_24);
            }
          else
            {
              t = h_24;
              {
                t = f_95(t);
                t = Cons_2(t, _id, a_5);
              }
            }
          LocalPopChoice(g_24);
        }
      else
        {
          t = f_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, z_4, a_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_53 = NULL,d_53 = NULL,e_53 = NULL;
  ATerm l_24;
  l_24 = t;
  {
    ATerm f_53 = NULL,g_53 = NULL,h_53 = NULL,i_53 = NULL;
    f_53 = t;
    b_53 :
    if(match_cons(f_53, sym__3))
      {
        g_53 = ATgetArgument(f_53, 0);
        h_53 = ATgetArgument(f_53, 1);
        i_53 = ATgetArgument(f_53, 2);
        {
          if(((c_53 != NULL) && (c_53 != g_53)))
            _fail(g_53);
          else
            c_53 = g_53;
          {
            if(((d_53 != NULL) && (d_53 != h_53)))
              _fail(h_53);
            else
              d_53 = h_53;
            {
              if(((e_53 != NULL) && (e_53 != i_53)))
                _fail(i_53);
              else
                e_53 = i_53;
              t = SSL_table_put(not_null(c_53), not_null(d_53), not_null(e_53));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = l_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm e_95 (ATerm))
{
  ATerm l_53 = NULL;
  ATerm m_24;
  m_24 = t;
  {
    t = term_n_24;
    t = table_put_0(t);
  }
  t = m_24;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm o_24 = t;
      int p_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = e_95(t);
          LocalPopChoice(p_24);
        }
      else
        {
          t = o_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_5);
    {
      ATerm j_5 (ATerm t)
      {
        ATerm q_24 = t;
        int r_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_24;
            s_24 = t;
            {
              ATerm t_24 = t;
              int u_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = term_r_23;
                  t = get_config_0(t);
                  LocalPopChoice(u_24);
                }
              else
                {
                  t = t_24;
                  t = option_defined_1(t, Help_0);
                }
            }
            t = s_24;
            {
              t = system_usage_0(t);
              {
                t = term_r_17;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_24);
          }
        else
          {
            t = q_24;
            {
              ATerm k_5 (ATerm t)
              {
                ATerm l_5 (ATerm t)
                {
                  ATerm m_53 = NULL;
                  m_53 = t;
                  if(((l_53 != NULL) && (l_53 != m_53)))
                    _fail(m_53);
                  else
                    l_53 = m_53;
                  return(t);
                }
                t = Undefined_1(t, l_5);
                return(t);
              }
              t = option_defined_1(t, k_5);
              {
                ATerm o_5 (ATerm t)
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(l_53)), term_v_24);
                  return(t);
                }
                t = say_1(t, o_5);
                {
                  t = system_usage_0(t);
                  {
                    t = term_b_8;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, j_5);
      {
        ATerm w_24;
        w_24 = t;
        {
          t = term_m_20;
          t = table_destroy_0(t);
        }
        t = w_24;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm), ATerm n_91 (ATerm), ATerm o_91 (ATerm))
{
  t = parse_options_1(t, l_91);
  {
    t = store_options_0(t);
    {
      t = n_91(t);
      {
        ATerm x_24 = t;
        int y_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, m_91);
            LocalPopChoice(y_24);
          }
        else
          {
            t = x_24;
            {
              ATerm z_24 = t;
              int a_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_91(t);
                  t = report_success_0(t);
                  LocalPopChoice(a_25);
                }
              else
                {
                  t = z_24;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm c_92 (ATerm), ATerm d_92 (ATerm), ATerm e_92 (ATerm), ATerm f_92 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm b_25 = t;
    int c_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_92(t);
        LocalPopChoice(c_25);
      }
    else
      {
        t = b_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm q_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, c_92);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, p_5, e_92, f_92, q_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm u_5 (ATerm t)
    {
      ATerm d_25;
      d_25 = t;
      {
        ATerm p_53 = NULL;
        ATerm t_53 = NULL;
        t = term_v_21;
        {
          t = get_config_0(t);
          {
            t_53 = t;
            if(((p_53 != NULL) && (p_53 != t_53)))
              _fail(t_53);
            else
              p_53 = t_53;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_d_12, (ATerm) ATinsert(ATempty, not_null(p_53)));
          t = printnl_0(t);
        }
      }
      t = d_25;
      return(t);
    }
    t = if_verbose2_1(t, u_5);
    return(t);
  }
  t = iowrap_4(t, w_91, x_91, y_91, s_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm u_91 (ATerm), ATerm v_91 (ATerm))
{
  t = iowrap_3(t, u_91, v_91, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm m_99 (ATerm), ATerm n_99 (ATerm), ATerm o_99 (ATerm))
{
  ATerm v_5 (ATerm t)
  {
    ATerm x_5 (ATerm t)
    {
      t = termid_check_p__1(t, m_99);
      return(t);
    }
    t = try_1(t, x_5);
    {
      t = n_99(t);
      {
        ATerm y_5 (ATerm t)
        {
          t = termid_set_p__1(t, m_99);
          return(t);
        }
        t = try_1(t, y_5);
      }
    }
    return(t);
  }
  ATerm w_5 (ATerm t)
  {
    ATerm e_25 = t;
    int f_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = o_99(t);
        LocalPopChoice(f_25);
      }
    else
      {
        t = e_25;
        {
          ATerm z_5 (ATerm t)
          {
            ATerm w_53 = NULL;
            w_53 = t;
            v_53 :
            if(!(match_string(w_53, "--strict")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm a_6 (ATerm t)
          {
            t = term_u_12;
            return(t);
          }
          ATerm b_6 (ATerm t)
          {
            t = term_g_25;
            return(t);
          }
          t = Option_3(t, z_5, a_6, b_6);
        }
      }
    return(t);
  }
  t = iowrap_2(t, v_5, w_5);
  return(t);
}
ATerm Pp_gen_0 (ATerm t)
{
  ATerm c_6 (ATerm t)
  {
    ATerm g_6 (ATerm t)
    {
      ATerm z_53 = NULL;
      z_53 = t;
      x_53 :
      if(!(match_string(z_53, "\"sdf-2.1\"")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm h_6 (ATerm t)
    {
      t = term_h_25;
      return(t);
    }
    t = InOutId_2(t, g_6, h_6);
    return(t);
  }
  ATerm d_6 (ATerm t)
  {
    t = _2(t, _id, ppgenerate_0);
    return(t);
  }
  ATerm e_6 (ATerm t)
  {
    ATerm i_6 (ATerm t)
    {
      ATerm a_54 = NULL;
      a_54 = t;
      y_53 :
      if(!(match_string(a_54, "-v")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm j_6 (ATerm t)
    {
      t = term_i_25;
      return(t);
    }
    ATerm k_6 (ATerm t)
    {
      t = term_j_25;
      return(t);
    }
    t = Option_3(t, i_6, j_6, k_6);
    return(t);
  }
  t = io_idwrap_3(t, c_6, d_6, e_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Pp_gen_0(t);
  return(t);
}
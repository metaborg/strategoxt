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
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_j_25;
ATerm term_y_24;
ATerm term_n_24;
ATerm term_e_24;
ATerm term_d_24;
ATerm term_c_24;
ATerm term_b_24;
ATerm term_v_23;
ATerm term_u_23;
ATerm term_t_23;
ATerm term_h_22;
ATerm term_g_22;
ATerm term_f_22;
ATerm term_m_21;
ATerm term_a_21;
ATerm term_z_20;
ATerm term_w_20;
ATerm term_v_20;
ATerm term_j_20;
ATerm term_i_20;
ATerm term_h_20;
ATerm term_z_19;
ATerm term_r_19;
ATerm term_q_19;
ATerm term_f_19;
ATerm term_p_18;
ATerm term_n_18;
ATerm term_m_18;
ATerm term_l_18;
ATerm term_h_18;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_t_17;
ATerm term_s_17;
ATerm term_m_17;
ATerm term_l_17;
ATerm term_k_17;
ATerm term_j_17;
ATerm term_i_17;
ATerm term_m_16;
ATerm term_y_15;
ATerm term_r_15;
ATerm term_q_15;
ATerm term_s_14;
ATerm term_q_14;
ATerm term_n_13;
ATerm term_m_13;
ATerm term_k_13;
ATerm term_h_13;
ATerm term_r_12;
ATerm term_q_12;
ATerm term_p_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_h_12;
ATerm term_v_11;
ATerm term_r_10;
ATerm term_n_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_h_10;
ATerm term_g_10;
ATerm term_l_9;
ATerm term_j_9;
ATerm term_h_9;
ATerm term_b_7;
ATerm term_o_6;
ATerm term_m_6;
ATerm term_j_6;
ATerm term_q_5;
ATerm term_p_5;
void init_constant_terms (void)
{
  ATprotect(&(term_p_5));
  term_p_5 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_5));
  term_q_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_j_6));
  term_j_6 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(sym_Arg_1, term_m_6);
  ATprotect(&(term_b_7));
  term_b_7 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_h_9));
  term_h_9 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_j_9));
  term_j_9 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(sym_SOpt_2, term_h_9, term_j_9);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_h_10));
  term_h_10 = (ATerm) ATmakeAppl(sym_lit_1, term_g_10);
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_lit_1, term_i_10);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym__2, term_h_12, term_k_12);
  ATprotect(&(term_p_12));
  term_p_12 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_q_12));
  term_q_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_r_12));
  term_r_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_m_13));
  term_m_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_14));
  term_q_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_15));
  term_r_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_15));
  term_y_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_m_16));
  term_m_16 = (ATerm) ATmakeAppl(ATmakeSymbol("** WARNING: file doesn't exist or doesn't contain a valid term: ", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_17));
  term_j_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_17));
  term_k_17 = (ATerm) ATmakeAppl(sym__2, term_j_17, term_p_5);
  ATprotect(&(term_l_17));
  term_l_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_s_17));
  term_s_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_t_17));
  term_t_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(sym__2, term_q_15, term_w_17);
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(sym_Verbose_1, term_w_17);
  ATprotect(&(term_h_18));
  term_h_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_18));
  term_m_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_n_18));
  term_n_18 = (ATerm) ATmakeAppl(sym__2, term_m_18, term_p_5);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_19));
  term_f_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_q_19));
  term_q_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_r_19));
  term_r_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_h_20));
  term_h_20 = (ATerm) ATmakeAppl(sym__2, term_z_19, term_p_5);
  ATprotect(&(term_i_20));
  term_i_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_m_21));
  term_m_21 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_22));
  term_f_22 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_g_22));
  term_g_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_22));
  term_h_22 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_u_23));
  term_u_23 = (ATerm) ATmakeAppl(sym__2, term_v_20, term_w_20);
  ATprotect(&(term_v_23));
  term_v_23 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_b_24));
  term_b_24 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_c_24));
  term_c_24 = (ATerm) ATmakeAppl(sym__2, term_b_24, term_p_5);
  ATprotect(&(term_d_24));
  term_d_24 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_e_24));
  term_e_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(sym__3, term_v_20, term_w_20, (ATerm) ATempty);
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_72 (ATerm));
ATerm filter_1 (ATerm, ATerm q_86 (ATerm));
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm s_61 (ATerm));
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm c_71 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm n_62 (ATerm));
ATerm iter_1 (ATerm, ATerm m_62 (ATerm));
ATerm pair_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm k_62 (ATerm), ATerm l_62 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm i_62 (ATerm), ATerm j_62 (ATerm));
ATerm make_0 (ATerm);
ATerm lit_1 (ATerm, ATerm h_62 (ATerm));
ATerm NonTerminal_0 (ATerm);
ATerm number_node_1 (ATerm, ATerm f_71 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm b_71 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm z_79 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm));
ATerm crush_3 (ATerm, ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm));
ATerm collect_p__1 (ATerm, ATerm y_98 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm _2 (ATerm, ATerm u_58 (ATerm), ATerm v_58 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm m_74 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm c_91 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm j_99 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm k_99 (ATerm));
ATerm InOutId_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm r_99 (ATerm));
ATerm try_1 (ATerm, ATerm i_71 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm p_99 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm o_79 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm u_92 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm b_91 (ATerm));
ATerm debug_1 (ATerm, ATerm x_89 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm c_87 (ATerm), ATerm d_87 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_95 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_85 (ATerm), ATerm o_85 (ATerm));
ATerm crush_2 (ATerm, ATerm l_84 (ATerm), ATerm m_84 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm t_92 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_90 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_94 (ATerm));
ATerm map_1 (ATerm, ATerm z_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_94 (ATerm));
ATerm Program_1 (ATerm, ATerm n_68 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm y_89 (ATerm));
ATerm Undefined_1 (ATerm, ATerm o_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm i_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_93 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_60 (ATerm), ATerm e_60 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_94 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_94 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm i_91 (ATerm));
ATerm iowrap_4 (ATerm, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm s_91 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_91 (ATerm), ATerm p_91 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm));
ATerm Pp_gen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Option_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm d_3 = NULL,n_3 = NULL,v_3 = NULL;
  d_3 = t;
  c_3 :
  if(match_string(d_3, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(d_3) == AT_LIST) && !(ATisEmpty(d_3))))
        {
          n_3 = ATgetFirst((ATermList) d_3);
          v_3 = (ATerm) ATgetNext((ATermList) d_3);
          {
            ATerm z_3 = NULL;
            ATerm m_5;
            m_5 = t;
            {
              t = not_null(n_3);
              t = l_0(t);
            }
            t = m_5;
            {
              ATerm b_4 = NULL;
              t = term_p_5;
              {
                t = m_0(t);
                {
                  b_4 = t;
                  if(((z_3 != NULL) && (z_3 != b_4)))
                    _fail(b_4);
                  else
                    z_3 = b_4;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(v_3)), not_null(z_3));
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
  ATerm h_4 = NULL;
  h_4 = t;
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_5)), not_null(h_4)), (ATerm) ATinsert(ATempty, term_q_5));
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
  ATerm m_4 = NULL;
  m_4 = t;
  t = SSL_int_to_string(not_null(m_4));
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm w_72 (ATerm))
{
  t = w_72(t);
  {
    ATerm b_0 (ATerm t)
    {
      t = topdown_1(t, w_72);
      return(t);
    }
    t = _all(t, b_0);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm q_86 (ATerm))
{
  ATerm r_5 = t;
  int s_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(s_5);
    }
  else
    {
      t = r_5;
      {
        ATerm t_5 = t;
        int u_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_0 (ATerm t)
            {
              t = filter_1(t, q_86);
              return(t);
            }
            t = Cons_2(t, q_86, c_0);
            LocalPopChoice(u_5);
          }
        else
          {
            t = t_5;
            {
              ATerm r_4 = NULL,s_4 = NULL,t_4 = NULL;
              r_4 = t;
              q_4 :
              if(((ATgetType(r_4) == AT_LIST) && !(ATisEmpty(r_4))))
                {
                  s_4 = ATgetFirst((ATermList) r_4);
                  t_4 = (ATerm) ATgetNext((ATermList) r_4);
                  {
                    t = not_null(t_4);
                    t = filter_1(t, q_86);
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
    ATerm v_5 = t;
    int d_6 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_4 = NULL;
        x_4 = t;
        {
          ATerm e_6 = t;
          if((PushChoice() == 0))
            {
              t = is_list_0(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = e_6;
            }
          t = (ATerm) ATinsert(ATempty, not_null(x_4));
        }
        LocalPopChoice(d_6);
      }
    else
      {
        t = v_5;
        {
        }
      }
    return(t);
  }
  t = map_1(t, e_0);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm s_61 (ATerm))
{
  ATerm f_5 = NULL,g_5 = NULL;
  f_5 = t;
  e_5 :
  if(match_cons(f_5, sym_Arg_1))
    {
      g_5 = ATgetArgument(f_5, 0);
      {
        ATerm j_5 = NULL,l_5 = NULL;
        ATerm k_5 = NULL;
        t = SSLgetAnnotations(not_null(f_5));
        {
          k_5 = t;
          if(((j_5 != NULL) && (j_5 != k_5)))
            _fail(k_5);
          else
            j_5 = k_5;
        }
        {
          t = not_null(g_5);
          {
            ATerm n_5 = NULL;
            t = s_61(t);
            {
              l_5 = t;
              {
                ATerm o_5 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(l_5)), not_null(j_5));
                {
                  o_5 = t;
                  if(((n_5 != NULL) && (n_5 != o_5)))
                    _fail(o_5);
                  else
                    n_5 = o_5;
                }
                t = not_null(n_5);
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
  ATerm y_5 = NULL,z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
  ATerm n_6 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(c_6)), not_null(b_6));
    return(t);
  }
  a_6 = t;
  w_5 :
  if(match_cons(a_6, sym_alt_2))
    {
      b_6 = ATgetArgument(a_6, 0);
      c_6 = ATgetArgument(a_6, 1);
      x_5 :
      if(match_cons(c_6, sym_alt_2))
        {
          y_5 = ATgetArgument(c_6, 0);
          z_5 = ATgetArgument(c_6, 1);
          {
            ATerm f_6 = t;
            int i_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_6 = NULL;
                ATerm h_6 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(y_5), not_null(z_5));
                {
                  t = flat_alt_0(t);
                  {
                    h_6 = t;
                    if(((g_6 != NULL) && (g_6 != h_6)))
                      _fail(h_6);
                    else
                      g_6 = h_6;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(g_6)), not_null(b_6));
                LocalPopChoice(i_6);
              }
            else
              {
                t = f_6;
                t = n_6(t);
              }
          }
        }
      else
        {
          t = n_6(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm c_71 (ATerm))
{
  ATerm p_7 = NULL,q_7 = NULL,r_7 = NULL;
  ATerm f_0 (ATerm t)
  {
    t = term_p_5;
    t = c_71(t);
    return(t);
  }
  t = split_2(t, f_0, _id);
  {
    ATerm k_9 (ATerm t)
    {
      ATerm s_7 = NULL,t_7 = NULL,u_7 = NULL,v_7 = NULL,w_7 = NULL,x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL;
      ATerm m_9 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm n_9 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm o_9 (ATerm t)
      {
        ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL;
        if(((p_7 != NULL) && (p_7 != y_7)))
          _fail(y_7);
        else
          p_7 = y_7;
        {
          if(((q_7 != NULL) && (q_7 != z_7)))
            _fail(z_7);
          else
            q_7 = z_7;
          {
            if(((r_7 != NULL) && (r_7 != b_8)))
              _fail(b_8);
            else
              r_7 = b_8;
            {
              if(((d_8 != NULL) && (d_8 != v_7)))
                _fail(v_7);
              else
                d_8 = v_7;
              {
                if(((e_8 != NULL) && (e_8 != t_7)))
                  _fail(t_7);
                else
                  e_8 = t_7;
                {
                  if(((f_8 != NULL) && (f_8 != u_7)))
                    _fail(u_7);
                  else
                    f_8 = u_7;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(d_8), (ATerm) ATmakeAppl(sym_alt_2, not_null(e_8), not_null(f_8)));
                    {
                      ATerm i_8 = NULL;
                      t = flat_alt_0(t);
                      {
                        g_8 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_j_6, not_null(g_8));
                          {
                            t = mkterm_0(t);
                            {
                              i_8 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(p_7), not_null(q_7)), (ATerm) ATmakeAppl(sym__2, not_null(r_7), not_null(i_8)));
                                {
                                  t = k_9(t);
                                  {
                                    ATerm o_0 (ATerm t)
                                    {
                                      ATerm p_0 (ATerm t)
                                      {
                                        ATerm k_6 = t;
                                        int l_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = Arg_1(t, _id);
                                            t = term_o_6;
                                            LocalPopChoice(l_6);
                                          }
                                        else
                                          {
                                            t = k_6;
                                            {
                                            }
                                          }
                                        return(t);
                                      }
                                      t = topdown_1(t, p_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, o_0, _id);
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
      ATerm p_9 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_7), not_null(z_7)), (ATerm) ATmakeAppl(sym__2, not_null(b_8), not_null(v_7)));
        t = k_9(t);
        return(t);
      }
      ATerm q_9 (ATerm t)
      {
        ATerm s_8 = NULL,t_8 = NULL,z_8 = NULL;
        ATerm u_8 = NULL;
        ATerm w_8 = NULL,x_8 = NULL,y_8 = NULL;
        t = not_null(c_8);
        {
          u_8 = t;
          {
            t = SSL_explode_term(not_null(u_8));
            {
              w_8 = t;
              z_6 :
              if(match_cons(w_8, sym__2))
                {
                  x_8 = ATgetArgument(w_8, 0);
                  y_8 = ATgetArgument(w_8, 1);
                  {
                    if(((s_8 != NULL) && (s_8 != x_8)))
                      _fail(x_8);
                    else
                      s_8 = x_8;
                    if(((t_8 != NULL) && (t_8 != y_8)))
                      _fail(y_8);
                    else
                      t_8 = y_8;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(b_8), not_null(s_8))));
          {
            ATerm b_9 = NULL,i_9 = NULL;
            ATerm p_6 = t;
            int q_6 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(q_6);
              }
            else
              {
                t = p_6;
                t = conc_more_lists_0(t);
              }
            {
              z_8 = t;
              {
                t = not_null(t_8);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm r_6;
                      r_6 = t;
                      {
                        ATerm c_9 = NULL;
                        t = make_0(t);
                        {
                          c_9 = t;
                          if(((b_9 != NULL) && (b_9 != c_9)))
                            _fail(c_9);
                          else
                            b_9 = c_9;
                        }
                      }
                      t = r_6;
                      {
                        ATerm q_0 (ATerm t)
                        {
                          ATerm d_9 = NULL;
                          ATerm f_9 = NULL;
                          d_9 = t;
                          {
                            ATerm g_9 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(y_7), not_null(z_8)), not_null(d_9));
                            {
                              t = k_9(t);
                              {
                                g_9 = t;
                                if(((f_9 != NULL) && (f_9 != g_9)))
                                  _fail(g_9);
                                else
                                  f_9 = g_9;
                              }
                            }
                            t = not_null(f_9);
                          }
                          return(t);
                        }
                        t = map_1(t, q_0);
                        {
                          t = concat_0(t);
                          {
                            i_9 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(i_9)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(y_7), not_null(z_8)), not_null(b_9)));
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
      w_7 = t;
      f_7 :
      if(match_cons(w_7, sym__2))
        {
          x_7 = ATgetArgument(w_7, 0);
          a_8 = ATgetArgument(w_7, 1);
          g_7 :
          if(match_cons(a_8, sym_lit_1))
            {
              b_8 = ATgetArgument(a_8, 0);
              h_7 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(a_8, sym__2))
                {
                  b_8 = ATgetArgument(a_8, 0);
                  c_8 = ATgetArgument(a_8, 1);
                  i_7 :
                  if(match_cons(c_8, sym_sort_1))
                    {
                      v_7 = ATgetArgument(c_8, 0);
                      j_7 :
                      if(match_cons(x_7, sym__2))
                        {
                          y_7 = ATgetArgument(x_7, 0);
                          z_7 = ATgetArgument(x_7, 1);
                          {
                            ATerm s_6 = t;
                            int t_6 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = m_9(t);
                                LocalPopChoice(t_6);
                              }
                            else
                              {
                                t = s_6;
                                t = q_9(t);
                              }
                          }
                        }
                      else
                        {
                          t = m_9(t);
                        }
                    }
                  else
                    {
                      if(match_cons(c_8, sym_char_class_1))
                        {
                          v_7 = ATgetArgument(c_8, 0);
                          k_7 :
                          if(match_cons(x_7, sym__2))
                            {
                              y_7 = ATgetArgument(x_7, 0);
                              z_7 = ATgetArgument(x_7, 1);
                              {
                                ATerm u_6 = t;
                                int v_6 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = n_9(t);
                                    LocalPopChoice(v_6);
                                  }
                                else
                                  {
                                    t = u_6;
                                    t = q_9(t);
                                  }
                              }
                            }
                          else
                            {
                              t = n_9(t);
                            }
                        }
                      else
                        {
                          if(match_cons(c_8, sym_alt_2))
                            {
                              v_7 = ATgetArgument(c_8, 0);
                              s_7 = ATgetArgument(c_8, 1);
                              l_7 :
                              if(match_cons(x_7, sym__2))
                                {
                                  y_7 = ATgetArgument(x_7, 0);
                                  z_7 = ATgetArgument(x_7, 1);
                                  m_7 :
                                  if(match_cons(s_7, sym_alt_2))
                                    {
                                      t_7 = ATgetArgument(s_7, 0);
                                      u_7 = ATgetArgument(s_7, 1);
                                      {
                                        ATerm w_6 = t;
                                        int x_6 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = o_9(t);
                                            LocalPopChoice(x_6);
                                          }
                                        else
                                          {
                                            t = w_6;
                                            t = q_9(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = q_9(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(c_8, sym_bracket_symbol_1))
                                {
                                  v_7 = ATgetArgument(c_8, 0);
                                  n_7 :
                                  if(match_cons(x_7, sym__2))
                                    {
                                      y_7 = ATgetArgument(x_7, 0);
                                      z_7 = ATgetArgument(x_7, 1);
                                      {
                                        ATerm y_6 = t;
                                        int a_7 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = p_9(t);
                                            LocalPopChoice(a_7);
                                          }
                                        else
                                          {
                                            t = y_6;
                                            t = q_9(t);
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
                                  o_7 :
                                  if(match_cons(x_7, sym__2))
                                    {
                                      y_7 = ATgetArgument(x_7, 0);
                                      z_7 = ATgetArgument(x_7, 1);
                                      t = q_9(t);
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
    t = k_9(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm d_10 = NULL,e_10 = NULL,f_10 = NULL;
  d_10 = t;
  c_10 :
  if(match_cons(d_10, sym_lit_1))
    {
      e_10 = ATgetArgument(d_10, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_b_7, (ATerm) ATmakeAppl(sym_S_1, not_null(e_10)));
    }
  else
    {
      if(match_cons(d_10, sym__2))
        {
          e_10 = ATgetArgument(d_10, 0);
          f_10 = ATgetArgument(d_10, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(e_10));
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm n_62 (ATerm))
{
  ATerm p_10 = NULL,q_10 = NULL;
  p_10 = t;
  o_10 :
  if(match_cons(p_10, sym_iter_star_1))
    {
      q_10 = ATgetArgument(p_10, 0);
      {
        ATerm t_10 = NULL,v_10 = NULL;
        ATerm u_10 = NULL;
        t = SSLgetAnnotations(not_null(p_10));
        {
          u_10 = t;
          if(((t_10 != NULL) && (t_10 != u_10)))
            _fail(u_10);
          else
            t_10 = u_10;
        }
        {
          t = not_null(q_10);
          {
            ATerm x_10 = NULL;
            t = n_62(t);
            {
              v_10 = t;
              {
                ATerm y_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(v_10)), not_null(t_10));
                {
                  y_10 = t;
                  if(((x_10 != NULL) && (x_10 != y_10)))
                    _fail(y_10);
                  else
                    x_10 = y_10;
                }
                t = not_null(x_10);
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
ATerm iter_1 (ATerm t, ATerm m_62 (ATerm))
{
  ATerm i_11 = NULL,j_11 = NULL;
  i_11 = t;
  h_11 :
  if(match_cons(i_11, sym_iter_1))
    {
      j_11 = ATgetArgument(i_11, 0);
      {
        ATerm m_11 = NULL,o_11 = NULL;
        ATerm n_11 = NULL;
        t = SSLgetAnnotations(not_null(i_11));
        {
          n_11 = t;
          if(((m_11 != NULL) && (m_11 != n_11)))
            _fail(n_11);
          else
            m_11 = n_11;
        }
        {
          t = not_null(j_11);
          {
            ATerm q_11 = NULL;
            t = m_62(t);
            {
              o_11 = t;
              {
                ATerm r_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(o_11)), not_null(m_11));
                {
                  r_11 = t;
                  if(((q_11 != NULL) && (q_11 != r_11)))
                    _fail(r_11);
                  else
                    q_11 = r_11;
                }
                t = not_null(q_11);
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
  ATerm c_7 = t;
  int d_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(d_7);
    }
  else
    {
      t = c_7;
      {
        ATerm a_12 = NULL,b_12 = NULL,c_12 = NULL,d_12 = NULL,e_12 = NULL;
        a_12 = t;
        y_11 :
        if(((ATgetType(a_12) == AT_LIST) && !(ATisEmpty(a_12))))
          {
            b_12 = ATgetFirst((ATermList) a_12);
            c_12 = (ATerm) ATgetNext((ATermList) a_12);
            z_11 :
            if(((ATgetType(c_12) == AT_LIST) && !(ATisEmpty(c_12))))
              {
                d_12 = ATgetFirst((ATermList) c_12);
                e_12 = (ATerm) ATgetNext((ATermList) c_12);
                {
                  ATerm i_12 = NULL;
                  ATerm j_12 = NULL;
                  t = not_null(e_12);
                  {
                    t = pair_0(t);
                    {
                      j_12 = t;
                      if(((i_12 != NULL) && (i_12 != j_12)))
                        _fail(j_12);
                      else
                        i_12 = j_12;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_12)), (ATerm) ATmakeAppl(sym__2, not_null(b_12), not_null(d_12)));
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
ATerm iter_star_sep_2 (ATerm t, ATerm k_62 (ATerm), ATerm l_62 (ATerm))
{
  ATerm t_12 = NULL,u_12 = NULL,v_12 = NULL;
  t_12 = t;
  s_12 :
  if(match_cons(t_12, sym_iter_star_sep_2))
    {
      u_12 = ATgetArgument(t_12, 0);
      v_12 = ATgetArgument(t_12, 1);
      {
        ATerm z_12 = NULL,b_13 = NULL;
        ATerm a_13 = NULL;
        t = SSLgetAnnotations(not_null(t_12));
        {
          a_13 = t;
          if(((z_12 != NULL) && (z_12 != a_13)))
            _fail(a_13);
          else
            z_12 = a_13;
        }
        {
          t = not_null(u_12);
          {
            ATerm d_13 = NULL;
            t = k_62(t);
            {
              b_13 = t;
              {
                t = not_null(v_12);
                {
                  ATerm f_13 = NULL;
                  t = l_62(t);
                  {
                    d_13 = t;
                    {
                      ATerm g_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(b_13), not_null(d_13)), not_null(z_12));
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
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm iter_sep_2 (ATerm t, ATerm i_62 (ATerm), ATerm j_62 (ATerm))
{
  ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
  s_13 = t;
  r_13 :
  if(match_cons(s_13, sym_iter_sep_2))
    {
      t_13 = ATgetArgument(s_13, 0);
      u_13 = ATgetArgument(s_13, 1);
      {
        ATerm y_13 = NULL,a_14 = NULL;
        ATerm z_13 = NULL;
        t = SSLgetAnnotations(not_null(s_13));
        {
          z_13 = t;
          if(((y_13 != NULL) && (y_13 != z_13)))
            _fail(z_13);
          else
            y_13 = z_13;
        }
        {
          t = not_null(t_13);
          {
            ATerm c_14 = NULL;
            t = i_62(t);
            {
              a_14 = t;
              {
                t = not_null(u_13);
                {
                  ATerm e_14 = NULL;
                  t = j_62(t);
                  {
                    c_14 = t;
                    {
                      ATerm f_14 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(a_14), not_null(c_14)), not_null(y_13));
                      {
                        f_14 = t;
                        if(((e_14 != NULL) && (e_14 != f_14)))
                          _fail(f_14);
                        else
                          e_14 = f_14;
                      }
                      t = not_null(e_14);
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
  ATerm t_14 = NULL,u_14 = NULL,v_14 = NULL,w_14 = NULL,x_14 = NULL;
  ATerm e_7 = t;
  int h_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_14 = NULL,z_14 = NULL,a_15 = NULL;
      ATerm r_0 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      t = reverse_acc_2(t, _id, r_0);
      {
        ATerm s_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            ATerm j_8 = t;
            int k_8 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                LocalPopChoice(k_8);
              }
            else
              {
                t = j_8;
                {
                  ATerm l_8 = t;
                  int m_8 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
                      LocalPopChoice(m_8);
                    }
                  else
                    {
                      t = l_8;
                      {
                        ATerm n_8 = t;
                        int o_8 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            LocalPopChoice(o_8);
                          }
                        else
                          {
                            t = n_8;
                            t = iter_star_sep_2(t, _id, _id);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2(t, _id, u_0);
          t = Make_0(t);
          return(t);
        }
        ATerm t_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, v_0);
          return(t);
        }
        t = Cons_2(t, s_0, t_0);
        {
          y_14 = t;
          n_14 :
          if(((ATgetType(y_14) == AT_LIST) && !(ATisEmpty(y_14))))
            {
              z_14 = ATgetFirst((ATermList) y_14);
              a_15 = (ATerm) ATgetNext((ATermList) y_14);
              {
                ATerm b_15 = NULL;
                if(((u_14 != NULL) && (u_14 != z_14)))
                  _fail(z_14);
                else
                  u_14 = z_14;
                {
                  if(((t_14 != NULL) && (t_14 != a_15)))
                    _fail(a_15);
                  else
                    t_14 = a_15;
                  {
                    ATerm p_8 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = p_8;
                      }
                    {
                      ATerm c_15 = NULL;
                      t = not_null(t_14);
                      {
                        ATerm w_0 (ATerm t)
                        {
                          t = (ATerm) ATempty;
                          return(t);
                        }
                        t = reverse_acc_2(t, _id, w_0);
                        {
                          c_15 = t;
                          if(((b_15 != NULL) && (b_15 != c_15)))
                            _fail(c_15);
                          else
                            b_15 = c_15;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_14)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(b_15))));
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
      LocalPopChoice(h_8);
    }
  else
    {
      t = e_7;
      {
        ATerm q_8 = t;
        int r_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_15 = NULL;
            ATerm x_0 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, x_0);
            {
              ATerm y_0 (ATerm t)
              {
                ATerm d_15 = NULL;
                t = Make_0(t);
                {
                  d_15 = t;
                  if(((x_14 != NULL) && (x_14 != d_15)))
                    _fail(d_15);
                  else
                    x_14 = d_15;
                }
                return(t);
              }
              ATerm z_0 (ATerm t)
              {
                ATerm e_15 = NULL;
                ATerm v_8 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = v_8;
                  }
                {
                  ATerm a_1 (ATerm t)
                  {
                    t = (ATerm) ATempty;
                    return(t);
                  }
                  t = reverse_acc_2(t, _id, a_1);
                  {
                    e_15 = t;
                    if(((v_14 != NULL) && (v_14 != e_15)))
                      _fail(e_15);
                    else
                      v_14 = e_15;
                  }
                }
                return(t);
              }
              t = Cons_2(t, y_0, z_0);
              {
                t = not_null(v_14);
                {
                  t = pair_0(t);
                  {
                    ATerm b_1 (ATerm t)
                    {
                      ATerm f_15 = NULL,g_15 = NULL;
                      ATerm c_1 (ATerm t)
                      {
                        ATerm h_15 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            h_15 = t;
                            if(((f_15 != NULL) && (f_15 != h_15)))
                              _fail(h_15);
                            else
                              f_15 = h_15;
                          }
                        }
                        return(t);
                      }
                      ATerm d_1 (ATerm t)
                      {
                        ATerm i_15 = NULL;
                        ATerm e_1 (ATerm t)
                        {
                          ATerm a_9 = t;
                          int e_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              LocalPopChoice(e_9);
                            }
                          else
                            {
                              t = a_9;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, e_1);
                        {
                          t = Make_0(t);
                          {
                            i_15 = t;
                            if(((g_15 != NULL) && (g_15 != i_15)))
                              _fail(i_15);
                            else
                              g_15 = i_15;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, c_1, d_1);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_l_9), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_15)), not_null(f_15)));
                      return(t);
                    }
                    t = map_1(t, b_1);
                    {
                      j_15 = t;
                      {
                        if(((w_14 != NULL) && (w_14 != j_15)))
                          _fail(j_15);
                        else
                          w_14 = j_15;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_14)), not_null(w_14)));
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(r_8);
          }
        else
          {
            t = q_8;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm h_62 (ATerm))
{
  ATerm w_15 = NULL,x_15 = NULL;
  w_15 = t;
  v_15 :
  if(match_cons(w_15, sym_lit_1))
    {
      x_15 = ATgetArgument(w_15, 0);
      {
        ATerm a_16 = NULL,c_16 = NULL;
        ATerm b_16 = NULL;
        t = SSLgetAnnotations(not_null(w_15));
        {
          b_16 = t;
          if(((a_16 != NULL) && (a_16 != b_16)))
            _fail(b_16);
          else
            a_16 = b_16;
        }
        {
          t = not_null(x_15);
          {
            ATerm e_16 = NULL;
            t = h_62(t);
            {
              c_16 = t;
              {
                ATerm f_16 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(c_16)), not_null(a_16));
                {
                  f_16 = t;
                  if(((e_16 != NULL) && (e_16 != f_16)))
                    _fail(f_16);
                  else
                    e_16 = f_16;
                }
                t = not_null(e_16);
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
  ATerm r_9 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_9;
    }
  return(t);
}
ATerm number_node_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm f_1 (ATerm t)
  {
    t = term_m_6;
    return(t);
  }
  t = split_2(t, f_1, _id);
  {
    ATerm h_17 (ATerm t)
    {
      ATerm r_16 = NULL,s_16 = NULL,u_16 = NULL;
      ATerm s_9 = t;
      int t_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          LocalPopChoice(t_9);
        }
      else
        {
          t = s_9;
          {
            ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL,a_17 = NULL;
            w_16 = t;
            p_16 :
            if(match_cons(w_16, sym__2))
              {
                x_16 = ATgetArgument(w_16, 0);
                y_16 = ATgetArgument(w_16, 1);
                q_16 :
                if(((ATgetType(y_16) == AT_LIST) && !(ATisEmpty(y_16))))
                  {
                    z_16 = ATgetFirst((ATermList) y_16);
                    a_17 = (ATerm) ATgetNext((ATermList) y_16);
                    {
                      ATerm u_9 = t;
                      int v_9 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_17 = NULL;
                          if(((r_16 != NULL) && (r_16 != x_16)))
                            _fail(x_16);
                          else
                            r_16 = x_16;
                          {
                            if(((s_16 != NULL) && (s_16 != z_16)))
                              _fail(z_16);
                            else
                              s_16 = z_16;
                            {
                              if(((u_16 != NULL) && (u_16 != a_17)))
                                _fail(a_17);
                              else
                                u_16 = a_17;
                              {
                                t = not_null(s_16);
                                {
                                  t = f_71(t);
                                  {
                                    ATerm c_17 = NULL,e_17 = NULL;
                                    ATerm d_17 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), term_m_6);
                                    {
                                      t = add_0(t);
                                      {
                                        d_17 = t;
                                        if(((c_17 != NULL) && (c_17 != d_17)))
                                          _fail(d_17);
                                        else
                                          c_17 = d_17;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_17), not_null(u_16));
                                      {
                                        t = h_17(t);
                                        {
                                          e_17 = t;
                                          if(((b_17 != NULL) && (b_17 != e_17)))
                                            _fail(e_17);
                                          else
                                            b_17 = e_17;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(b_17)), (ATerm) ATmakeAppl(sym__2, not_null(r_16), not_null(s_16)));
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(v_9);
                        }
                      else
                        {
                          t = u_9;
                          {
                            ATerm f_17 = NULL;
                            if(((r_16 != NULL) && (r_16 != x_16)))
                              _fail(x_16);
                            else
                              r_16 = x_16;
                            {
                              if(((s_16 != NULL) && (s_16 != z_16)))
                                _fail(z_16);
                              else
                                s_16 = z_16;
                              {
                                if(((u_16 != NULL) && (u_16 != a_17)))
                                  _fail(a_17);
                                else
                                  u_16 = a_17;
                                {
                                  ATerm g_17 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_16), not_null(u_16));
                                  {
                                    t = h_17(t);
                                    {
                                      g_17 = t;
                                      if(((f_17 != NULL) && (f_17 != g_17)))
                                        _fail(g_17);
                                      else
                                        f_17 = g_17;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(f_17)), not_null(s_16));
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
    t = h_17(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm g_1 (ATerm t)
  {
    ATerm w_9 = t;
    int x_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
        p_17 = t;
        o_17 :
        if(match_cons(p_17, sym_label_2))
          {
            q_17 = ATgetArgument(p_17, 0);
            r_17 = ATgetArgument(p_17, 1);
            t = not_null(r_17);
          }
        else
          {
            _fail(t);
          }
        LocalPopChoice(x_9);
      }
    else
      {
        t = w_9;
        {
        }
      }
    return(t);
  }
  t = map_1(t, g_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_node_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm b_71 (ATerm))
{
  ATerm z_17 = NULL,b_18 = NULL,f_18 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm y_9;
    y_9 = t;
    {
      ATerm a_18 = NULL;
      t = make_0(t);
      {
        a_18 = t;
        if(((z_17 != NULL) && (z_17 != a_18)))
          _fail(a_18);
        else
          z_17 = a_18;
      }
    }
    t = y_9;
    {
      ATerm z_9;
      z_9 = t;
      {
        ATerm e_18 = NULL;
        ATerm h_1 (ATerm t)
        {
          ATerm i_1 (ATerm t)
          {
            ATerm c_18 = NULL;
            ATerm d_18 = NULL;
            t = term_p_5;
            {
              t = b_71(t);
              {
                d_18 = t;
                if(((c_18 != NULL) && (c_18 != d_18)))
                  _fail(d_18);
                else
                  c_18 = d_18;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(c_18), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, i_1);
          return(t);
        }
        t = map_1(t, h_1);
        {
          t = concat_0(t);
          {
            e_18 = t;
            if(((b_18 != NULL) && (b_18 != e_18)))
              _fail(e_18);
            else
              b_18 = e_18;
          }
        }
      }
      t = z_9;
      {
        ATerm g_18 = NULL;
        t = term_p_5;
        {
          t = b_71(t);
          {
            g_18 = t;
            if(((f_18 != NULL) && (f_18 != g_18)))
              _fail(g_18);
            else
              f_18 = g_18;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(b_18)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(f_18)), not_null(z_17)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  ATerm a_10 = t;
  int b_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL;
      w_18 = t;
      q_18 :
      if(match_cons(w_18, sym_prod_3))
        {
          x_18 = ATgetArgument(w_18, 0);
          y_18 = ATgetArgument(w_18, 1);
          z_18 = ATgetArgument(w_18, 2);
          {
            if(((t_18 != NULL) && (t_18 != x_18)))
              _fail(x_18);
            else
              t_18 = x_18;
            {
              if(((u_18 != NULL) && (u_18 != y_18)))
                _fail(y_18);
              else
                u_18 = y_18;
              {
                if(((v_18 != NULL) && (v_18 != z_18)))
                  _fail(z_18);
                else
                  v_18 = z_18;
                {
                  t = not_null(v_18);
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm b_19 = NULL,c_19 = NULL;
                      b_19 = t;
                      o_18 :
                      if(match_cons(b_19, sym_cons_1))
                        {
                          c_19 = ATgetArgument(b_19, 0);
                          if(((r_18 != NULL) && (r_18 != c_19)))
                            _fail(c_19);
                          else
                            r_18 = c_19;
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
                    t = not_null(t_18);
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = not_null(r_18);
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
          if(match_cons(w_18, sym_prod_fun_4))
            {
              x_18 = ATgetArgument(w_18, 0);
              y_18 = ATgetArgument(w_18, 1);
              z_18 = ATgetArgument(w_18, 2);
              a_19 = ATgetArgument(w_18, 3);
              {
                ATerm d_19 = NULL;
                if(((s_18 != NULL) && (s_18 != x_18)))
                  _fail(x_18);
                else
                  s_18 = x_18;
                {
                  if(((t_18 != NULL) && (t_18 != y_18)))
                    _fail(y_18);
                  else
                    t_18 = y_18;
                  {
                    if(((u_18 != NULL) && (u_18 != z_18)))
                      _fail(z_18);
                    else
                      u_18 = z_18;
                    {
                      if(((v_18 != NULL) && (v_18 != a_19)))
                        _fail(a_19);
                      else
                        v_18 = a_19;
                      {
                        ATerm e_19 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_10)), not_null(t_18)), (ATerm) ATinsert(ATinsert(ATempty, term_h_10), (ATerm) ATmakeAppl(sym_lit_1, not_null(s_18))));
                        {
                          t = concat_0(t);
                          {
                            e_19 = t;
                            if(((d_19 != NULL) && (d_19 != e_19)))
                              _fail(e_19);
                            else
                              d_19 = e_19;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(d_19), not_null(u_18), not_null(v_18));
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
      LocalPopChoice(b_10);
    }
  else
    {
      t = a_10;
      {
        ATerm k_10 = t;
        int l_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_10 = t;
            if((PushChoice() == 0))
              {
                ATerm l_1 (ATerm t)
                {
                  t = term_n_10;
                  return(t);
                }
                t = has_option_1(t, l_1);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = m_10;
              }
            {
              ATerm m_1 (ATerm t)
              {
                t = term_r_10;
                return(t);
              }
              t = debug_1(t, m_1);
            }
            LocalPopChoice(l_10);
          }
        else
          {
            t = k_10;
            {
            }
          }
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm z_79 (ATerm))
{
  ATerm j_19 (ATerm t)
  {
    ATerm s_10 = t;
    int w_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = z_79(t);
        LocalPopChoice(w_10);
      }
    else
      {
        t = s_10;
        t = Cons_2(t, _id, j_19);
      }
    return(t);
  }
  t = j_19(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm m_19 = NULL,n_19 = NULL,o_19 = NULL;
  m_19 = t;
  l_19 :
  if(((ATgetType(m_19) == AT_LIST) && !(ATisEmpty(m_19))))
    {
      n_19 = ATgetFirst((ATermList) m_19);
      o_19 = (ATerm) ATgetNext((ATermList) m_19);
      t = not_null(o_19);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t_19 = t;
  s_19 :
  if(((ATgetType(t_19) == AT_LIST) && !(ATisEmpty(t_19))))
    {
      u_19 = ATgetFirst((ATermList) t_19);
      v_19 = (ATerm) ATgetNext((ATermList) t_19);
      t = not_null(u_19);
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
    ATerm z_10;
    z_10 = t;
    {
      ATerm d_20 = NULL;
      t = Hd_0(t);
      {
        d_20 = t;
        y_19 :
        if(!(match_int(d_20, 34)))
          {
            _fail(t);
          }
      }
    }
    t = z_10;
    {
      t = Tl_0(t);
      {
        ATerm n_1 (ATerm t)
        {
          ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
          e_20 = t;
          a_20 :
          if(((ATgetType(e_20) == AT_LIST) && !(ATisEmpty(e_20))))
            {
              f_20 = ATgetFirst((ATermList) e_20);
              g_20 = (ATerm) ATgetNext((ATermList) e_20);
              b_20 :
              if(match_int(f_20, 34))
                {
                  c_20 :
                  if(((ATgetType(g_20) == AT_LIST) && ATisEmpty(g_20)))
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
ATerm foldr_3 (ATerm t, ATerm p_85 (ATerm), ATerm q_85 (ATerm), ATerm r_85 (ATerm))
{
  ATerm a_11 = t;
  int b_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_85(t);
      LocalPopChoice(b_11);
    }
  else
    {
      t = a_11;
      {
        ATerm m_20 = NULL,n_20 = NULL,o_20 = NULL;
        m_20 = t;
        l_20 :
        if(((ATgetType(m_20) == AT_LIST) && !(ATisEmpty(m_20))))
          {
            n_20 = ATgetFirst((ATermList) m_20);
            o_20 = (ATerm) ATgetNext((ATermList) m_20);
            {
              ATerm r_20 = NULL,t_20 = NULL;
              ATerm c_11;
              c_11 = t;
              {
                ATerm s_20 = NULL;
                t = not_null(n_20);
                {
                  t = r_85(t);
                  {
                    s_20 = t;
                    if(((r_20 != NULL) && (r_20 != s_20)))
                      _fail(s_20);
                    else
                      r_20 = s_20;
                  }
                }
              }
              t = c_11;
              {
                ATerm u_20 = NULL;
                t = not_null(o_20);
                {
                  t = foldr_3(t, p_85, q_85, r_85);
                  {
                    u_20 = t;
                    if(((t_20 != NULL) && (t_20 != u_20)))
                      _fail(u_20);
                    else
                      t_20 = u_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_20), not_null(t_20));
                  t = q_85(t);
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
ATerm crush_3 (ATerm t, ATerm n_84 (ATerm), ATerm o_84 (ATerm), ATerm p_84 (ATerm))
{
  ATerm c_21 = NULL;
  ATerm e_21 = NULL;
  c_21 = t;
  {
    ATerm f_21 = NULL;
    ATerm h_21 = NULL,i_21 = NULL,j_21 = NULL;
    t = not_null(c_21);
    {
      f_21 = t;
      {
        t = SSL_explode_term(not_null(f_21));
        {
          h_21 = t;
          b_21 :
          if(match_cons(h_21, sym__2))
            {
              i_21 = ATgetArgument(h_21, 0);
              j_21 = ATgetArgument(h_21, 1);
              if(((e_21 != NULL) && (e_21 != j_21)))
                _fail(j_21);
              else
                e_21 = j_21;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(e_21);
      t = foldr_3(t, n_84, o_84, p_84);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm y_98 (ATerm))
{
  ATerm q_21 (ATerm t)
  {
    ATerm d_11 = t;
    int e_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_21 = NULL;
        t = y_98(t);
        {
          o_21 = t;
          t = (ATerm) ATinsert(ATempty, not_null(o_21));
        }
        LocalPopChoice(e_11);
      }
    else
      {
        t = d_11;
        {
          ATerm o_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          ATerm p_1 (ATerm t)
          {
            ATerm f_11 = t;
            int g_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = conc_two_lists_0(t);
                LocalPopChoice(g_11);
              }
            else
              {
                t = f_11;
                t = conc_more_lists_0(t);
              }
            return(t);
          }
          t = crush_3(t, o_1, p_1, q_21);
        }
      }
    return(t);
  }
  t = q_21(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm z_22 = NULL;
  ATerm q_1 (ATerm t)
  {
    ATerm k_22 = NULL,l_22 = NULL;
    k_22 = t;
    t_21 :
    if(match_cons(k_22, sym_context_free_syntax_1))
      {
        l_22 = ATgetArgument(k_22, 0);
        t = not_null(l_22);
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
        ATerm k_11 = t;
        int l_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_22 = NULL,o_22 = NULL;
            n_22 = t;
            a_22 :
            if(match_cons(n_22, sym_cons_1))
              {
                o_22 = ATgetArgument(n_22, 0);
                {
                  ATerm q_22 = NULL;
                  ATerm r_22 = NULL;
                  t = not_null(o_22);
                  {
                    t = de_quote_0(t);
                    {
                      r_22 = t;
                      if(((q_22 != NULL) && (q_22 != r_22)))
                        _fail(r_22);
                      else
                        q_22 = r_22;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_cons_1, not_null(q_22));
                }
              }
            else
              {
                if(match_cons(n_22, sym_lit_1))
                  {
                    o_22 = ATgetArgument(n_22, 0);
                    {
                      ATerm t_22 = NULL;
                      ATerm u_22 = NULL;
                      t = not_null(o_22);
                      {
                        t = de_quote_0(t);
                        {
                          u_22 = t;
                          if(((t_22 != NULL) && (t_22 != u_22)))
                            _fail(u_22);
                          else
                            t_22 = u_22;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_lit_1, not_null(t_22));
                    }
                  }
                else
                  {
                    if(match_cons(n_22, sym_sort_1))
                      {
                        o_22 = ATgetArgument(n_22, 0);
                        {
                          ATerm w_22 = NULL;
                          ATerm x_22 = NULL;
                          t = not_null(o_22);
                          {
                            t = de_quote_0(t);
                            {
                              x_22 = t;
                              if(((w_22 != NULL) && (w_22 != x_22)))
                                _fail(x_22);
                              else
                                w_22 = x_22;
                            }
                          }
                          t = (ATerm) ATmakeAppl(sym_sort_1, not_null(w_22));
                        }
                      }
                    else
                      {
                        _fail(t);
                      }
                  }
              }
            LocalPopChoice(l_11);
          }
        else
          {
            t = k_11;
            {
            }
          }
        return(t);
      }
      t = topdown_1(t, r_1);
      {
        t = map_1(t, generate_pp_entries_0);
        {
          ATerm s_1 (ATerm t)
          {
            ATerm p_11 = t;
            if((PushChoice() == 0))
              {
                ATerm y_22 = NULL;
                y_22 = t;
                b_22 :
                if(((ATgetType(y_22) == AT_LIST) && ATisEmpty(y_22)))
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
                t = p_11;
              }
            return(t);
          }
          t = filter_1(t, s_1);
          {
            t = concat_0(t);
            {
              z_22 = t;
              {
                t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(z_22));
                {
                  ATerm t_1 (ATerm t)
                  {
                    ATerm s_11 = t;
                    int t_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm b_23 = NULL,c_23 = NULL,d_23 = NULL;
                        c_23 = t;
                        j_22 :
                        if(match_cons(c_23, sym_Arg_1))
                          {
                            d_23 = ATgetArgument(c_23, 0);
                            {
                              ATerm f_23 = NULL;
                              ATerm g_23 = NULL;
                              t = not_null(d_23);
                              {
                                t = int_to_string_0(t);
                                {
                                  g_23 = t;
                                  if(((f_23 != NULL) && (f_23 != g_23)))
                                    _fail(g_23);
                                  else
                                    f_23 = g_23;
                                }
                              }
                              t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(f_23));
                            }
                          }
                        else
                          {
                            if(match_cons(c_23, sym_selector_2))
                              {
                                d_23 = ATgetArgument(c_23, 0);
                                b_23 = ATgetArgument(c_23, 1);
                                {
                                  ATerm j_23 = NULL;
                                  ATerm k_23 = NULL;
                                  t = not_null(d_23);
                                  {
                                    t = int_to_string_0(t);
                                    {
                                      k_23 = t;
                                      if(((j_23 != NULL) && (j_23 != k_23)))
                                        _fail(k_23);
                                      else
                                        j_23 = k_23;
                                    }
                                  }
                                  t = (ATerm) ATmakeAppl(sym_selector_2, not_null(j_23), not_null(b_23));
                                }
                              }
                            else
                              {
                                if(match_cons(c_23, sym_S_1))
                                  {
                                    d_23 = ATgetArgument(c_23, 0);
                                    {
                                      ATerm m_23 = NULL;
                                      ATerm n_23 = NULL;
                                      t = not_null(d_23);
                                      {
                                        t = quote_0(t);
                                        {
                                          n_23 = t;
                                          if(((m_23 != NULL) && (m_23 != n_23)))
                                            _fail(n_23);
                                          else
                                            m_23 = n_23;
                                        }
                                      }
                                      t = (ATerm) ATmakeAppl(sym_S_1, not_null(m_23));
                                    }
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                              }
                          }
                        LocalPopChoice(t_11);
                      }
                    else
                      {
                        t = s_11;
                        {
                        }
                      }
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
ATerm _2 (ATerm t, ATerm u_58 (ATerm), ATerm v_58 (ATerm))
{
  ATerm i_24 = NULL,j_24 = NULL,m_24 = NULL;
  i_24 = t;
  h_24 :
  if(match_cons(i_24, sym__2))
    {
      j_24 = ATgetArgument(i_24, 0);
      m_24 = ATgetArgument(i_24, 1);
      {
        ATerm q_24 = NULL,s_24 = NULL;
        ATerm r_24 = NULL;
        t = SSLgetAnnotations(not_null(i_24));
        {
          r_24 = t;
          if(((q_24 != NULL) && (q_24 != r_24)))
            _fail(r_24);
          else
            q_24 = r_24;
        }
        {
          t = not_null(j_24);
          {
            ATerm b_25 = NULL;
            t = u_58(t);
            {
              s_24 = t;
              {
                t = not_null(m_24);
                {
                  ATerm u_26 = NULL;
                  t = v_58(t);
                  {
                    b_25 = t;
                    {
                      ATerm v_26 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_24), not_null(b_25)), not_null(q_24));
                      {
                        v_26 = t;
                        if(((u_26 != NULL) && (u_26 != v_26)))
                          _fail(v_26);
                        else
                          u_26 = v_26;
                      }
                      t = not_null(u_26);
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
  ATerm u_11;
  u_11 = t;
  {
    ATerm c_27 = NULL;
    ATerm d_27 = NULL;
    d_27 = t;
    if(((c_27 != NULL) && (c_27 != d_27)))
      _fail(d_27);
    else
      c_27 = d_27;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_11, not_null(c_27));
      t = printnl_0(t);
    }
  }
  t = u_11;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm w_11;
  w_11 = t;
  {
    t = error_0(t);
    {
      t = term_m_6;
      t = exit_0(t);
    }
  }
  t = w_11;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm f_27 (ATerm t)
  {
    ATerm x_11 = t;
    int f_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_74(t);
        LocalPopChoice(f_12);
      }
    else
      {
        t = x_11;
        t = _one(t, f_27);
      }
    return(t);
  }
  t = f_27(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym__2))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      {
        ATerm g_12;
        g_12 = t;
        {
          t = not_null(l_27);
          {
            ATerm u_1 (ATerm t)
            {
              ATerm o_27 = NULL;
              o_27 = t;
              if(((k_27 != NULL) && (k_27 != o_27)))
                _fail(o_27);
              else
                k_27 = o_27;
              return(t);
            }
            t = oncetd_1(t, u_1);
          }
        }
        t = g_12;
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
  t = term_l_12;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm t_27 = NULL;
  ATerm v_27 = NULL;
  t_27 = t;
  {
    ATerm w_27 = NULL;
    t = get_options_0(t);
    {
      w_27 = t;
      {
        if(((v_27 != NULL) && (v_27 != w_27)))
          _fail(w_27);
        else
          v_27 = w_27;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), not_null(v_27));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_p_5;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm c_91 (ATerm))
{
  ATerm m_12;
  m_12 = t;
  {
    t = term_p_5;
    {
      t = c_91(t);
      t = check_option_0(t);
    }
  }
  t = m_12;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm n_12 = t;
  int o_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_1 (ATerm t)
      {
        t = term_p_12;
        return(t);
      }
      t = has_option_1(t, v_1);
      {
        t = (ATerm) ATinsert(ATempty, term_q_12);
        t = fatal_error_0(t);
      }
      LocalPopChoice(o_12);
    }
  else
    {
      t = n_12;
      {
        t = (ATerm) ATinsert(ATempty, term_r_12);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm j_99 (ATerm))
{
  ATerm k_28 = NULL,l_28 = NULL,m_28 = NULL;
  k_28 = t;
  g_28 :
  if(match_cons(k_28, sym__2))
    {
      l_28 = ATgetArgument(k_28, 0);
      m_28 = ATgetArgument(k_28, 1);
      h_28 :
      if(match_string(l_28, "in-type"))
        {
          ATerm o_28 = NULL,p_28 = NULL;
          ATerm w_12;
          w_12 = t;
          {
            ATerm q_28 = NULL;
            ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL,v_28 = NULL,w_28 = NULL;
            t = not_null(m_28);
            {
              q_28 = t;
              {
                t = SSL_explode_term(not_null(q_28));
                {
                  s_28 = t;
                  d_28 :
                  if(match_cons(s_28, sym__2))
                    {
                      t_28 = ATgetArgument(s_28, 0);
                      u_28 = ATgetArgument(s_28, 1);
                      e_28 :
                      if(((ATgetType(u_28) == AT_LIST) && !(ATisEmpty(u_28))))
                        {
                          v_28 = ATgetFirst((ATermList) u_28);
                          w_28 = (ATerm) ATgetNext((ATermList) u_28);
                          f_28 :
                          if(((ATgetType(w_28) == AT_LIST) && ATisEmpty(w_28)))
                            {
                              {
                                if(((p_28 != NULL) && (p_28 != t_28)))
                                  _fail(t_28);
                                else
                                  p_28 = t_28;
                                if(((o_28 != NULL) && (o_28 != v_28)))
                                  _fail(v_28);
                                else
                                  o_28 = v_28;
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
          t = w_12;
          {
            t = not_null(p_28);
            {
              ATerm x_12 = t;
              int y_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = j_99(t);
                  LocalPopChoice(y_12);
                }
              else
                {
                  t = x_12;
                  t = type_failure_0(t);
                }
            }
            t = not_null(o_28);
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
  ATerm c_29 = NULL,d_29 = NULL,e_29 = NULL;
  c_29 = t;
  b_29 :
  if(match_cons(c_29, sym__2))
    {
      d_29 = ATgetArgument(c_29, 0);
      e_29 = ATgetArgument(c_29, 1);
      t = SSL_mkterm(not_null(d_29), not_null(e_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm k_99 (ATerm))
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  s_29 = t;
  l_29 :
  if(match_cons(s_29, sym__2))
    {
      t_29 = ATgetArgument(s_29, 0);
      u_29 = ATgetArgument(s_29, 1);
      m_29 :
      if(match_string(t_29, "out-type"))
        {
          ATerm w_29 = NULL;
          ATerm x_29 = NULL,z_29 = NULL;
          ATerm y_29 = NULL;
          t = term_p_5;
          {
            t = k_99(t);
            {
              y_29 = t;
              if(((x_29 != NULL) && (x_29 != y_29)))
                _fail(y_29);
              else
                x_29 = y_29;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_29), (ATerm) ATinsert(ATempty, not_null(u_29)));
            {
              t = mkterm_0(t);
              {
                z_29 = t;
                if(((w_29 != NULL) && (w_29 != z_29)))
                  _fail(z_29);
                else
                  w_29 = z_29;
              }
            }
          }
          t = not_null(w_29);
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
  ATerm c_13 = t;
  int e_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        ATerm f_30 = NULL;
        f_30 = t;
        d_30 :
        if(!(match_string(f_30, "out-type")))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, w_1, _id);
      t = OutId_1(t, k_0);
      LocalPopChoice(e_13);
    }
  else
    {
      t = c_13;
      {
        ATerm x_1 (ATerm t)
        {
          ATerm l_30 = NULL;
          l_30 = t;
          e_30 :
          if(!(match_string(l_30, "in-type")))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, x_1, _id);
        t = InId_1(t, j_0);
      }
    }
  return(t);
}
ATerm termid_set_p__1 (ATerm t, ATerm r_99 (ATerm))
{
  ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
  p_30 = t;
  o_30 :
  if(match_cons(p_30, sym__2))
    {
      q_30 = ATgetArgument(p_30, 0);
      r_30 = ATgetArgument(p_30, 1);
      {
        ATerm u_30 = NULL;
        ATerm v_30 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_h_13, not_null(r_30));
        {
          t = r_99(t);
          {
            v_30 = t;
            if(((u_30 != NULL) && (u_30 != v_30)))
              _fail(v_30);
            else
              u_30 = v_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_30), not_null(u_30));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm i_71 (ATerm))
{
  ATerm i_13 = t;
  int j_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = i_71(t);
      LocalPopChoice(j_13);
    }
  else
    {
      t = i_13;
      {
      }
    }
  return(t);
}
ATerm termid_check_p__1 (ATerm t, ATerm p_99 (ATerm))
{
  ATerm b_31 = NULL,c_31 = NULL,d_31 = NULL;
  b_31 = t;
  a_31 :
  if(match_cons(b_31, sym__2))
    {
      c_31 = ATgetArgument(b_31, 0);
      d_31 = ATgetArgument(b_31, 1);
      {
        ATerm g_31 = NULL;
        ATerm h_31 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_k_13, not_null(d_31));
        {
          t = p_99(t);
          {
            h_31 = t;
            if(((g_31 != NULL) && (g_31 != h_31)))
              _fail(h_31);
            else
              g_31 = h_31;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(c_31), not_null(g_31));
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
  ATerm m_31 = NULL;
  ATerm l_13;
  l_13 = t;
  {
    ATerm y_1 (ATerm t)
    {
      ATerm n_31 = NULL,o_31 = NULL;
      n_31 = t;
      l_31 :
      if(match_cons(n_31, sym_Program_1))
        {
          o_31 = ATgetArgument(n_31, 0);
          if(((m_31 != NULL) && (m_31 != o_31)))
            _fail(o_31);
          else
            m_31 = o_31;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, y_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_n_13), not_null(m_31)), term_m_13));
      {
        t = printnl_0(t);
        {
          t = term_m_6;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_13;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL;
  s_31 = t;
  r_31 :
  if(match_cons(s_31, sym__2))
    {
      t_31 = ATgetArgument(s_31, 0);
      u_31 = ATgetArgument(s_31, 1);
      {
        ATerm o_13;
        o_13 = t;
        t = SSL_printnl(not_null(t_31), not_null(u_31));
        t = o_13;
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
  ATerm z_31 = NULL;
  z_31 = t;
  t = SSL_implode_string(not_null(z_31));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_13 = t;
  int q_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_13);
    }
  else
    {
      t = p_13;
      {
        ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL;
        e_32 = t;
        d_32 :
        if(((ATgetType(e_32) == AT_LIST) && !(ATisEmpty(e_32))))
          {
            f_32 = ATgetFirst((ATermList) e_32);
            g_32 = (ATerm) ATgetNext((ATermList) e_32);
            {
              t = not_null(f_32);
              {
                ATerm z_1 (ATerm t)
                {
                  t = not_null(g_32);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_1);
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
  ATerm q_32 = NULL;
  ATerm s_32 = NULL;
  q_32 = t;
  {
    ATerm t_32 = NULL;
    ATerm v_32 = NULL,w_32 = NULL,x_32 = NULL;
    t = not_null(q_32);
    {
      t_32 = t;
      {
        t = SSL_explode_term(not_null(t_32));
        {
          v_32 = t;
          o_32 :
          if(match_cons(v_32, sym__2))
            {
              w_32 = ATgetArgument(v_32, 0);
              x_32 = ATgetArgument(v_32, 1);
              p_32 :
              if(match_string(w_32, ""))
                {
                  if(((s_32 != NULL) && (s_32 != x_32)))
                    _fail(x_32);
                  else
                    s_32 = x_32;
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
      t = not_null(s_32);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm o_79 (ATerm))
{
  ATerm b_33 (ATerm t)
  {
    ATerm v_13 = t;
    int w_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_33);
        LocalPopChoice(w_13);
      }
    else
      {
        t = v_13;
        {
          t = Nil_0(t);
          t = o_79(t);
        }
      }
    return(t);
  }
  t = b_33(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm e_33 = NULL,f_33 = NULL,g_33 = NULL;
  e_33 = t;
  d_33 :
  if(match_cons(e_33, sym__2))
    {
      f_33 = ATgetArgument(e_33, 0);
      g_33 = ATgetArgument(e_33, 1);
      {
        t = not_null(f_33);
        {
          ATerm a_2 (ATerm t)
          {
            t = not_null(g_33);
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
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm x_13 = t;
  int b_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(b_14);
    }
  else
    {
      t = x_13;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm l_33 = NULL;
  l_33 = t;
  t = SSL_explode_string(not_null(l_33));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm d_14 = t;
    int g_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(g_14);
      }
    else
      {
        t = d_14;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_33 = NULL;
  p_33 = t;
  t = SSL_is_string(not_null(p_33));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_14 = t;
  int i_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(i_14);
    }
  else
    {
      t = h_14;
      {
        ATerm j_14 = t;
        int k_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              ATerm l_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = l_14;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, b_2);
            LocalPopChoice(k_14);
          }
        else
          {
            t = j_14;
            {
              ATerm y_33 = NULL,z_33 = NULL,a_34 = NULL;
              y_33 = t;
              x_33 :
              if(match_cons(y_33, sym_Path_1))
                {
                  z_33 = ATgetArgument(y_33, 0);
                  t = not_null(z_33);
                }
              else
                {
                  if(match_cons(y_33, sym_Var_1))
                    {
                      z_33 = ATgetArgument(y_33, 0);
                      {
                        t = not_null(z_33);
                        {
                          ATerm o_14 = t;
                          int p_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(p_14);
                            }
                          else
                            {
                              t = o_14;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = term_q_14;
                                  return(t);
                                }
                                t = debug_1(t, c_2);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(y_33, sym_Prefix_2))
                        {
                          z_33 = ATgetArgument(y_33, 0);
                          a_34 = ATgetArgument(y_33, 1);
                          {
                            ATerm f_34 = NULL,h_34 = NULL;
                            ATerm r_14;
                            r_14 = t;
                            {
                              ATerm g_34 = NULL;
                              t = not_null(z_33);
                              {
                                t = eval_config_0(t);
                                {
                                  g_34 = t;
                                  if(((f_34 != NULL) && (f_34 != g_34)))
                                    _fail(g_34);
                                  else
                                    f_34 = g_34;
                                }
                              }
                            }
                            t = r_14;
                            {
                              ATerm i_34 = NULL;
                              t = not_null(a_34);
                              {
                                t = eval_config_0(t);
                                {
                                  i_34 = t;
                                  if(((h_34 != NULL) && (h_34 != i_34)))
                                    _fail(i_34);
                                  else
                                    h_34 = i_34;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(f_34), not_null(h_34));
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
  ATerm q_34 = NULL;
  q_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_s_14, not_null(q_34));
    {
      t = table_get_0(t);
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm m_15;
              m_15 = t;
              {
                ATerm s_34 = NULL;
                ATerm t_34 = NULL;
                t_34 = t;
                if(((s_34 != NULL) && (s_34 != t_34)))
                  _fail(t_34);
                else
                  s_34 = t_34;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_s_14, not_null(q_34), not_null(s_34));
                  t = table_put_0(t);
                }
              }
              t = m_15;
            }
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm u_92 (ATerm))
{
  ATerm n_15 = t;
  int o_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm p_15;
      p_15 = t;
      {
        ATerm z_34 = NULL;
        ATerm a_35 = NULL;
        t = term_q_15;
        {
          t = get_config_0(t);
          {
            a_35 = t;
            if(((z_34 != NULL) && (z_34 != a_35)))
              _fail(a_35);
            else
              z_34 = a_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(z_34), term_r_15);
          t = geq_0(t);
        }
      }
      t = p_15;
      t = u_92(t);
      LocalPopChoice(o_15);
    }
  else
    {
      t = n_15;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm e_35 = NULL,f_35 = NULL,g_35 = NULL;
  e_35 = t;
  d_35 :
  if(match_cons(e_35, sym__2))
    {
      f_35 = ATgetArgument(e_35, 0);
      g_35 = ATgetArgument(e_35, 1);
      t = SSL_WriteToTextFile(not_null(f_35), not_null(g_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  m_35 = t;
  l_35 :
  if(match_cons(m_35, sym__2))
    {
      n_35 = ATgetArgument(m_35, 0);
      o_35 = ATgetArgument(m_35, 1);
      t = SSL_WriteToBinaryFile(not_null(n_35), not_null(o_35));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_36 = NULL;
  ATerm s_15;
  s_15 = t;
  {
    ATerm d_2 (ATerm t)
    {
      ATerm t_15 = t;
      int u_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_2 (ATerm t)
          {
            ATerm b_36 = NULL,c_36 = NULL;
            b_36 = t;
            x_35 :
            if(match_cons(b_36, sym_Output_1))
              {
                c_36 = ATgetArgument(b_36, 0);
                if(((a_36 != NULL) && (a_36 != c_36)))
                  _fail(c_36);
                else
                  a_36 = c_36;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, e_2);
          LocalPopChoice(u_15);
        }
      else
        {
          t = t_15;
          {
            ATerm d_36 = NULL;
            t = term_y_15;
            {
              d_36 = t;
              if(((a_36 != NULL) && (a_36 != d_36)))
                _fail(d_36);
              else
                a_36 = d_36;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_2, _id);
  }
  t = s_15;
  {
    ATerm f_2 (ATerm t)
    {
      ATerm g_2 (ATerm t)
      {
        t = not_null(a_36);
        return(t);
      }
      t = split_2(t, g_2, _id);
      return(t);
    }
    t = _2(t, _id, f_2);
    {
      ATerm z_15 = t;
      int d_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_2 (ATerm t)
          {
            ATerm i_2 (ATerm t)
            {
              ATerm e_36 = NULL;
              e_36 = t;
              z_35 :
              if(!(match_cons(e_36, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, i_2);
            return(t);
          }
          t = _2(t, h_2, WriteToBinaryFile_0);
          LocalPopChoice(d_16);
        }
      else
        {
          t = z_15;
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
ATerm apply_strategy_1 (ATerm t, ATerm b_91 (ATerm))
{
  ATerm k_36 = NULL,m_36 = NULL,n_36 = NULL,o_36 = NULL;
  ATerm g_16;
  g_16 = t;
  t = dtime_0(t);
  t = g_16;
  {
    t = b_91(t);
    {
      ATerm h_16;
      h_16 = t;
      {
        ATerm l_36 = NULL;
        t = dtime_0(t);
        {
          l_36 = t;
          if(((k_36 != NULL) && (k_36 != l_36)))
            _fail(l_36);
          else
            k_36 = l_36;
        }
      }
      t = h_16;
      {
        m_36 = t;
        j_36 :
        if(match_cons(m_36, sym__2))
          {
            n_36 = ATgetArgument(m_36, 0);
            o_36 = ATgetArgument(m_36, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_36)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_36))), not_null(o_36));
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
ATerm debug_1 (ATerm t, ATerm x_89 (ATerm))
{
  ATerm i_16;
  i_16 = t;
  {
    ATerm v_36 = NULL,x_36 = NULL;
    ATerm j_16;
    j_16 = t;
    {
      ATerm w_36 = NULL;
      t = x_89(t);
      {
        w_36 = t;
        if(((v_36 != NULL) && (v_36 != w_36)))
          _fail(w_36);
        else
          v_36 = w_36;
      }
    }
    t = j_16;
    {
      ATerm y_36 = NULL;
      y_36 = t;
      if(((x_36 != NULL) && (x_36 != y_36)))
        _fail(y_36);
      else
        x_36 = y_36;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(x_36)), not_null(v_36)));
        t = printnl_0(t);
      }
    }
  }
  t = i_16;
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_37 = NULL;
  ATerm k_16 = t;
  int l_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_37 = NULL;
      d_37 = t;
      {
        if(((c_37 != NULL) && (c_37 != d_37)))
          _fail(d_37);
        else
          c_37 = d_37;
        t = SSL_ReadFromFile(not_null(c_37));
      }
      LocalPopChoice(l_16);
    }
  else
    {
      t = k_16;
      {
        ATerm j_2 (ATerm t)
        {
          t = term_m_16;
          return(t);
        }
        t = debug_1(t, j_2);
        _fail(t);
      }
    }
  return(t);
}
ATerm split_2 (ATerm t, ATerm c_87 (ATerm), ATerm d_87 (ATerm))
{
  ATerm h_37 = NULL,j_37 = NULL;
  ATerm n_16;
  n_16 = t;
  {
    ATerm i_37 = NULL;
    t = c_87(t);
    {
      i_37 = t;
      if(((h_37 != NULL) && (h_37 != i_37)))
        _fail(i_37);
      else
        h_37 = i_37;
    }
  }
  t = n_16;
  {
    ATerm k_37 = NULL;
    t = d_87(t);
    {
      k_37 = t;
      if(((j_37 != NULL) && (j_37 != k_37)))
        _fail(k_37);
      else
        j_37 = k_37;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_37), not_null(j_37));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_37 = NULL;
  ATerm o_16;
  o_16 = t;
  {
    ATerm t_16 = t;
    int v_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_2 (ATerm t)
        {
          ATerm r_37 = NULL,s_37 = NULL;
          r_37 = t;
          o_37 :
          if(match_cons(r_37, sym_Input_1))
            {
              s_37 = ATgetArgument(r_37, 0);
              if(((q_37 != NULL) && (q_37 != s_37)))
                _fail(s_37);
              else
                q_37 = s_37;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, k_2);
        LocalPopChoice(v_16);
      }
    else
      {
        t = t_16;
        {
          ATerm t_37 = NULL;
          t = term_i_17;
          {
            t_37 = t;
            if(((q_37 != NULL) && (q_37 != t_37)))
              _fail(t_37);
            else
              q_37 = t_37;
          }
        }
      }
  }
  t = o_16;
  {
    ATerm l_2 (ATerm t)
    {
      t = not_null(q_37);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_2);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm m_2 (ATerm t)
  {
    ATerm x_37 = NULL;
    x_37 = t;
    w_37 :
    if(!(match_string(x_37, "-v")))
      {
        if(!(match_string(x_37, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm n_2 (ATerm t)
  {
    t = term_k_17;
    t = set_config_0(t);
    t = term_l_17;
    return(t);
  }
  ATerm o_2 (ATerm t)
  {
    t = term_m_17;
    return(t);
  }
  t = Option_3(t, m_2, n_2, o_2);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm p_2 (ATerm t)
  {
    ATerm a_38 = NULL;
    a_38 = t;
    y_37 :
    if(!(match_string(a_38, "-k")))
      {
        if(!(match_string(a_38, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm q_2 (ATerm t)
  {
    ATerm n_17;
    n_17 = t;
    {
      ATerm b_38 = NULL;
      ATerm c_38 = NULL;
      t = string_to_int_0(t);
      {
        c_38 = t;
        if(((b_38 != NULL) && (b_38 != c_38)))
          _fail(c_38);
        else
          b_38 = c_38;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_17, not_null(b_38));
        t = set_config_0(t);
      }
    }
    t = n_17;
    return(t);
  }
  ATerm r_2 (ATerm t)
  {
    t = term_t_17;
    return(t);
  }
  t = ArgOption_3(t, p_2, q_2, r_2);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm f_38 = NULL;
  f_38 = t;
  t = SSL_string_to_int(not_null(f_38));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_2 (ATerm t)
      {
        ATerm n_38 = NULL;
        n_38 = t;
        i_38 :
        if(!(match_string(n_38, "-S")))
          {
            if(!(match_string(n_38, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm t_2 (ATerm t)
      {
        t = term_x_17;
        t = set_config_0(t);
        t = term_y_17;
        return(t);
      }
      ATerm u_2 (ATerm t)
      {
        t = term_h_18;
        return(t);
      }
      t = Option_3(t, s_2, t_2, u_2);
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
      {
        ATerm i_18 = t;
        int j_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_2 (ATerm t)
            {
              ATerm o_38 = NULL;
              o_38 = t;
              j_38 :
              if(!(match_string(o_38, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm w_2 (ATerm t)
            {
              ATerm r_38 = NULL;
              ATerm k_18;
              k_18 = t;
              {
                ATerm p_38 = NULL;
                ATerm q_38 = NULL;
                t = string_to_int_0(t);
                {
                  q_38 = t;
                  if(((p_38 != NULL) && (p_38 != q_38)))
                    _fail(q_38);
                  else
                    p_38 = q_38;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_q_15, not_null(p_38));
                  t = set_config_0(t);
                }
              }
              t = k_18;
              {
                ATerm s_38 = NULL;
                s_38 = t;
                if(((r_38 != NULL) && (r_38 != s_38)))
                  _fail(s_38);
                else
                  r_38 = s_38;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_38));
              }
              return(t);
            }
            ATerm x_2 (ATerm t)
            {
              t = term_l_18;
              return(t);
            }
            t = ArgOption_3(t, v_2, w_2, x_2);
            LocalPopChoice(j_18);
          }
        else
          {
            t = i_18;
            {
              ATerm y_2 (ATerm t)
              {
                ATerm t_38 = NULL;
                t_38 = t;
                m_38 :
                if(!(match_string(t_38, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                t = term_n_18;
                t = set_config_0(t);
                t = term_p_18;
                return(t);
              }
              ATerm a_3 (ATerm t)
              {
                t = term_f_19;
                return(t);
              }
              t = Option_3(t, y_2, z_2, a_3);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm g_19 = t;
  int h_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(h_19);
    }
  else
    {
      t = g_19;
      {
        ATerm i_19 = t;
        int k_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(k_19);
          }
        else
          {
            t = i_19;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm z_38 = NULL;
    z_38 = t;
    w_38 :
    if(!(match_string(z_38, "-o")))
      {
        if(!(match_string(z_38, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm e_3 (ATerm t)
  {
    ATerm c_39 = NULL;
    ATerm p_19;
    p_19 = t;
    {
      ATerm a_39 = NULL;
      ATerm b_39 = NULL;
      b_39 = t;
      if(((a_39 != NULL) && (a_39 != b_39)))
        _fail(b_39);
      else
        a_39 = b_39;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_q_19, not_null(a_39));
        t = set_config_0(t);
      }
    }
    t = p_19;
    {
      ATerm d_39 = NULL;
      d_39 = t;
      if(((c_39 != NULL) && (c_39 != d_39)))
        _fail(d_39);
      else
        c_39 = d_39;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(c_39));
    }
    return(t);
  }
  ATerm f_3 (ATerm t)
  {
    t = term_r_19;
    return(t);
  }
  t = ArgOption_3(t, b_3, e_3, f_3);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm w_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(x_19);
    }
  else
    {
      t = w_19;
      {
        ATerm g_3 (ATerm t)
        {
          ATerm h_39 = NULL;
          h_39 = t;
          g_39 :
          if(!(match_string(h_39, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm h_3 (ATerm t)
        {
          t = term_h_20;
          t = set_config_0(t);
          t = term_i_20;
          return(t);
        }
        ATerm i_3 (ATerm t)
        {
          t = term_j_20;
          return(t);
        }
        t = Option_3(t, g_3, h_3, i_3);
      }
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm l_39 = NULL,m_39 = NULL,n_39 = NULL,o_39 = NULL;
  l_39 = t;
  k_39 :
  if(match_cons(l_39, sym__3))
    {
      m_39 = ATgetArgument(l_39, 0);
      n_39 = ATgetArgument(l_39, 1);
      o_39 = ATgetArgument(l_39, 2);
      {
        ATerm k_20;
        k_20 = t;
        {
          ATerm s_39 = NULL;
          ATerm t_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(m_39), not_null(n_39));
          {
            ATerm p_20 = t;
            int q_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_20);
              }
            else
              {
                t = p_20;
                t = (ATerm) ATempty;
              }
            {
              t_39 = t;
              if(((s_39 != NULL) && (s_39 != t_39)))
                _fail(t_39);
              else
                s_39 = t_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(m_39), not_null(n_39), (ATerm) ATinsert(CheckATermList(not_null(s_39)), not_null(o_39)));
            t = table_put_0(t);
          }
        }
        t = k_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_95 (ATerm))
{
  ATerm x_39 = NULL;
  ATerm y_39 = NULL;
  t = term_p_5;
  {
    t = b_95(t);
    {
      y_39 = t;
      if(((x_39 != NULL) && (x_39 != y_39)))
        _fail(y_39);
      else
        x_39 = y_39;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_v_20, term_w_20, not_null(x_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm f_40 = NULL,g_40 = NULL,h_40 = NULL,i_40 = NULL,j_40 = NULL;
  f_40 = t;
  d_40 :
  if(match_string(f_40, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(f_40) == AT_LIST) && !(ATisEmpty(f_40))))
        {
          g_40 = ATgetFirst((ATermList) f_40);
          h_40 = (ATerm) ATgetNext((ATermList) f_40);
          e_40 :
          if(((ATgetType(h_40) == AT_LIST) && !(ATisEmpty(h_40))))
            {
              i_40 = ATgetFirst((ATermList) h_40);
              j_40 = (ATerm) ATgetNext((ATermList) h_40);
              {
                ATerm n_40 = NULL;
                ATerm x_20;
                x_20 = t;
                {
                  t = not_null(g_40);
                  t = g_0(t);
                }
                t = x_20;
                {
                  ATerm o_40 = NULL;
                  t = not_null(i_40);
                  {
                    t = h_0(t);
                    {
                      o_40 = t;
                      if(((n_40 != NULL) && (n_40 != o_40)))
                        _fail(o_40);
                      else
                        n_40 = o_40;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_40)), not_null(n_40));
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
  ATerm j_3 (ATerm t)
  {
    ATerm v_40 = NULL;
    v_40 = t;
    s_40 :
    if(!(match_string(v_40, "-i")))
      {
        if(!(match_string(v_40, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm k_3 (ATerm t)
  {
    ATerm y_40 = NULL;
    ATerm y_20;
    y_20 = t;
    {
      ATerm w_40 = NULL;
      ATerm x_40 = NULL;
      x_40 = t;
      if(((w_40 != NULL) && (w_40 != x_40)))
        _fail(x_40);
      else
        w_40 = x_40;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_20, not_null(w_40));
        t = set_config_0(t);
      }
    }
    t = y_20;
    {
      ATerm z_40 = NULL;
      z_40 = t;
      if(((y_40 != NULL) && (y_40 != z_40)))
        _fail(z_40);
      else
        y_40 = z_40;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(y_40));
    }
    return(t);
  }
  ATerm l_3 (ATerm t)
  {
    t = term_a_21;
    return(t);
  }
  t = ArgOption_3(t, j_3, k_3, l_3);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm d_21 = t;
  int g_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(g_21);
    }
  else
    {
      t = d_21;
      {
        ATerm k_21 = t;
        int l_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(l_21);
          }
        else
          {
            t = k_21;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATempty, term_m_21));
  {
    t = printnl_0(t);
    {
      t = term_m_6;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm d_41 = NULL;
  d_41 = t;
  t = SSL_TicksToSeconds(not_null(d_41));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL;
  i_41 = t;
  h_41 :
  if(match_cons(i_41, sym__2))
    {
      j_41 = ATgetArgument(i_41, 0);
      k_41 = ATgetArgument(i_41, 1);
      {
        ATerm n_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_41), not_null(k_41));
            LocalPopChoice(p_21);
          }
        else
          {
            t = n_21;
            t = SSL_addr(not_null(j_41), not_null(k_41));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_85 (ATerm), ATerm o_85 (ATerm))
{
  ATerm r_21 = t;
  int s_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_85(t);
      LocalPopChoice(s_21);
    }
  else
    {
      t = r_21;
      {
        ATerm r_41 = NULL,s_41 = NULL,t_41 = NULL;
        r_41 = t;
        q_41 :
        if(((ATgetType(r_41) == AT_LIST) && !(ATisEmpty(r_41))))
          {
            s_41 = ATgetFirst((ATermList) r_41);
            t_41 = (ATerm) ATgetNext((ATermList) r_41);
            {
              ATerm w_41 = NULL;
              ATerm x_41 = NULL;
              t = not_null(t_41);
              {
                t = foldr_2(t, n_85, o_85);
                {
                  x_41 = t;
                  if(((w_41 != NULL) && (w_41 != x_41)))
                    _fail(x_41);
                  else
                    w_41 = x_41;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_41), not_null(w_41));
                t = o_85(t);
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
ATerm crush_2 (ATerm t, ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm e_42 = NULL;
  ATerm g_42 = NULL;
  e_42 = t;
  {
    ATerm m_42 = NULL;
    ATerm o_42 = NULL,p_42 = NULL,q_42 = NULL;
    t = not_null(e_42);
    {
      m_42 = t;
      {
        t = SSL_explode_term(not_null(m_42));
        {
          o_42 = t;
          d_42 :
          if(match_cons(o_42, sym__2))
            {
              p_42 = ATgetArgument(o_42, 0);
              q_42 = ATgetArgument(o_42, 1);
              if(((g_42 != NULL) && (g_42 != q_42)))
                _fail(q_42);
              else
                g_42 = q_42;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(g_42);
      t = foldr_2(t, l_84, m_84);
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
    ATerm m_3 (ATerm t)
    {
      t = term_w_17;
      return(t);
    }
    t = crush_2(t, m_3, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_42 = NULL,x_42 = NULL,y_42 = NULL;
  w_42 = t;
  v_42 :
  if(match_cons(w_42, sym__2))
    {
      x_42 = ATgetArgument(w_42, 0);
      y_42 = ATgetArgument(w_42, 1);
      {
        ATerm u_21;
        u_21 = t;
        {
          ATerm v_21 = t;
          int w_21 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_42), not_null(y_42));
              LocalPopChoice(w_21);
            }
          else
            {
              t = v_21;
              t = SSL_gtr(not_null(x_42), not_null(y_42));
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
ATerm geq_0 (ATerm t)
{
  ATerm e_43 = NULL;
  ATerm x_21 = t;
  int y_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_43 = NULL,g_43 = NULL,h_43 = NULL;
      f_43 = t;
      d_43 :
      if(match_cons(f_43, sym__2))
        {
          g_43 = ATgetArgument(f_43, 0);
          h_43 = ATgetArgument(f_43, 1);
          {
            if(((e_43 != NULL) && (e_43 != g_43)))
              _fail(g_43);
            else
              e_43 = g_43;
            if(((e_43 != NULL) && (e_43 != h_43)))
              _fail(h_43);
            else
              e_43 = h_43;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(y_21);
    }
  else
    {
      t = x_21;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm t_92 (ATerm))
{
  ATerm z_21 = t;
  int c_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_22;
      d_22 = t;
      {
        ATerm k_43 = NULL;
        ATerm l_43 = NULL;
        t = term_q_15;
        {
          t = get_config_0(t);
          {
            l_43 = t;
            if(((k_43 != NULL) && (k_43 != l_43)))
              _fail(l_43);
            else
              k_43 = l_43;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_43), term_m_6);
          t = geq_0(t);
        }
      }
      t = d_22;
      t = t_92(t);
      LocalPopChoice(c_22);
    }
  else
    {
      t = z_21;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_3 (ATerm t)
  {
    ATerm p_43 = NULL,r_43 = NULL;
    ATerm e_22;
    e_22 = t;
    {
      ATerm q_43 = NULL;
      t = run_time_0(t);
      {
        q_43 = t;
        if(((p_43 != NULL) && (p_43 != q_43)))
          _fail(q_43);
        else
          p_43 = q_43;
      }
    }
    t = e_22;
    {
      ATerm s_43 = NULL;
      t = term_f_22;
      {
        t = get_config_0(t);
        {
          s_43 = t;
          if(((r_43 != NULL) && (r_43 != s_43)))
            _fail(s_43);
          else
            r_43 = s_43;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_22), not_null(p_43)), term_g_22), not_null(r_43)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_3);
  {
    t = term_w_17;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm b_44 = NULL;
  b_44 = t;
  y_43 :
  if(match_cons(b_44, sym_Version_0))
    {
      ATerm d_44 = NULL,h_44 = NULL;
      ATerm i_22;
      i_22 = t;
      {
        ATerm e_44 = NULL;
        t = SSLgetAnnotations(not_null(b_44));
        {
          e_44 = t;
          if(((d_44 != NULL) && (d_44 != e_44)))
            _fail(e_44);
          else
            d_44 = e_44;
        }
      }
      t = i_22;
      {
        ATerm i_44 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(d_44));
        {
          i_44 = t;
          if(((h_44 != NULL) && (h_44 != i_44)))
            _fail(i_44);
          else
            h_44 = i_44;
        }
        t = not_null(h_44);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_90 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm m_22 = t;
    int p_22 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(p_22);
      }
    else
      {
        t = m_22;
        {
          ATerm s_22 = t;
          int v_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(v_22);
            }
          else
            {
              t = s_22;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, p_3);
  t = z_90(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm n_44 = NULL;
  n_44 = t;
  t = SSL_table_create(not_null(n_44));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm r_44 = NULL;
  r_44 = t;
  {
    ATerm a_23;
    a_23 = t;
    {
      t = term_h_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_h_12, term_k_12, not_null(r_44));
          t = table_put_0(t);
        }
      }
    }
    t = a_23;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm v_44 = NULL;
  v_44 = t;
  t = SSL_table_destroy(not_null(v_44));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm z_44 = NULL;
  z_44 = t;
  t = SSL_exit(not_null(z_44));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm d_45 = NULL,e_45 = NULL,h_45 = NULL;
  d_45 = t;
  c_45 :
  if(((ATgetType(d_45) == AT_LIST) && ATisEmpty(d_45)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_45) == AT_LIST) && !(ATisEmpty(d_45))))
        {
          e_45 = ATgetFirst((ATermList) d_45);
          h_45 = (ATerm) ATgetNext((ATermList) d_45);
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
  ATerm e_23;
  e_23 = t;
  {
    ATerm k_45 = NULL;
    ATerm o_45 = NULL;
    ATerm h_23 = t;
    int i_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(i_23);
      }
    else
      {
        t = h_23;
        {
          ATerm m_45 = NULL;
          ATerm n_45 = NULL;
          n_45 = t;
          if(((m_45 != NULL) && (m_45 != n_45)))
            _fail(n_45);
          else
            m_45 = n_45;
          t = (ATerm) ATinsert(ATempty, not_null(m_45));
        }
      }
    {
      o_45 = t;
      if(((k_45 != NULL) && (k_45 != o_45)))
        _fail(o_45);
      else
        k_45 = o_45;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_y_15, not_null(k_45));
      t = printnl_0(t);
    }
  }
  t = e_23;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm x_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_78 (ATerm))
{
  ATerm r_45 (ATerm t)
  {
    ATerm l_23 = t;
    int o_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_23);
      }
    else
      {
        t = l_23;
        t = Cons_2(t, z_78, r_45);
      }
    return(t);
  }
  t = r_45(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm y_45 = NULL,z_45 = NULL,a_46 = NULL;
  a_46 = t;
  x_45 :
  if(((ATgetType(a_46) == AT_LIST) && !(ATisEmpty(a_46))))
    {
      y_45 = ATgetFirst((ATermList) a_46);
      z_45 = (ATerm) ATgetNext((ATermList) a_46);
      {
        ATerm d_46 = NULL;
        t = not_null(z_45);
        {
          ATerm p_23;
          p_23 = t;
          {
            ATerm e_46 = NULL,g_46 = NULL,i_46 = NULL;
            ATerm q_23;
            q_23 = t;
            {
              ATerm f_46 = NULL;
              t = d_0(t);
              {
                f_46 = t;
                if(((e_46 != NULL) && (e_46 != f_46)))
                  _fail(f_46);
                else
                  e_46 = f_46;
              }
            }
            t = q_23;
            {
              ATerm h_46 = NULL;
              t = not_null(y_45);
              {
                t = a_0(t);
                {
                  h_46 = t;
                  if(((g_46 != NULL) && (g_46 != h_46)))
                    _fail(h_46);
                  else
                    g_46 = h_46;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(e_46)), not_null(g_46));
                {
                  i_46 = t;
                  if(((d_46 != NULL) && (d_46 != i_46)))
                    _fail(i_46);
                  else
                    d_46 = i_46;
                }
              }
            }
          }
          t = p_23;
          {
            ATerm q_3 (ATerm t)
            {
              t = not_null(d_46);
              return(t);
            }
            t = reverse_acc_2(t, a_0, q_3);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(a_46) == AT_LIST) && ATisEmpty(a_46)))
        {
          {
            t = term_p_5;
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
  ATerm r_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, r_3);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm q_46 = NULL,t_46 = NULL,u_46 = NULL;
  q_46 = t;
  p_46 :
  if(match_cons(q_46, sym__2))
    {
      t_46 = ATgetArgument(q_46, 0);
      u_46 = ATgetArgument(q_46, 1);
      t = SSL_table_get(not_null(t_46), not_null(u_46));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_94 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm j_47 = NULL,k_47 = NULL;
  j_47 = t;
  i_47 :
  if(match_cons(j_47, sym_Program_1))
    {
      k_47 = ATgetArgument(j_47, 0);
      {
        ATerm n_47 = NULL,p_47 = NULL;
        ATerm o_47 = NULL;
        t = SSLgetAnnotations(not_null(j_47));
        {
          o_47 = t;
          if(((n_47 != NULL) && (n_47 != o_47)))
            _fail(o_47);
          else
            n_47 = o_47;
        }
        {
          t = not_null(k_47);
          {
            ATerm r_47 = NULL;
            t = n_68(t);
            {
              p_47 = t;
              {
                ATerm s_47 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(p_47)), not_null(n_47));
                {
                  s_47 = t;
                  if(((r_47 != NULL) && (r_47 != s_47)))
                    _fail(s_47);
                  else
                    r_47 = s_47;
                }
                t = not_null(r_47);
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
  ATerm a_48 = NULL;
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_48 = NULL;
      t = term_f_22;
      {
        t = get_config_0(t);
        {
          b_48 = t;
          if(((a_48 != NULL) && (a_48 != b_48)))
            _fail(b_48);
          else
            a_48 = b_48;
        }
      }
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm s_3 (ATerm t)
        {
          ATerm t_3 (ATerm t)
          {
            ATerm c_48 = NULL;
            c_48 = t;
            if(((a_48 != NULL) && (a_48 != c_48)))
              _fail(c_48);
            else
              a_48 = c_48;
            return(t);
          }
          t = Program_1(t, t_3);
          return(t);
        }
        t = fetch_1(t, s_3);
      }
    }
  {
    t = term_t_23;
    {
      t = echo_0(t);
      {
        t = term_u_23;
        {
          t = table_get_0(t);
          {
            ATerm u_3 (ATerm t)
            {
              t = (ATerm) ATempty;
              return(t);
            }
            t = reverse_acc_2(t, _id, u_3);
            {
              ATerm w_3 (ATerm t)
              {
                ATerm d_48 = NULL;
                ATerm e_48 = NULL;
                e_48 = t;
                if(((d_48 != NULL) && (d_48 != e_48)))
                  _fail(e_48);
                else
                  d_48 = e_48;
                {
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(d_48)), term_v_23);
                  t = echo_0(t);
                }
                return(t);
              }
              t = map_1(t, w_3);
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
  ATerm w_23;
  w_23 = t;
  {
    ATerm j_48 = NULL;
    ATerm k_48 = NULL;
    k_48 = t;
    if(((j_48 != NULL) && (j_48 != k_48)))
      _fail(k_48);
    else
      j_48 = k_48;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATempty, not_null(j_48)));
      t = printnl_0(t);
    }
  }
  t = w_23;
  return(t);
}
ATerm say_1 (ATerm t, ATerm y_89 (ATerm))
{
  ATerm x_23;
  x_23 = t;
  {
    t = y_89(t);
    t = debug_0(t);
  }
  t = x_23;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm o_68 (ATerm))
{
  ATerm r_48 = NULL,s_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym_Undefined_1))
    {
      s_48 = ATgetArgument(r_48, 0);
      {
        ATerm v_48 = NULL,x_48 = NULL;
        ATerm w_48 = NULL;
        t = SSLgetAnnotations(not_null(r_48));
        {
          w_48 = t;
          if(((v_48 != NULL) && (v_48 != w_48)))
            _fail(w_48);
          else
            v_48 = w_48;
        }
        {
          t = not_null(s_48);
          {
            ATerm z_48 = NULL;
            t = o_68(t);
            {
              x_48 = t;
              {
                ATerm a_49 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(x_48)), not_null(v_48));
                {
                  a_49 = t;
                  if(((z_48 != NULL) && (z_48 != a_49)))
                    _fail(a_49);
                  else
                    z_48 = a_49;
                }
                t = not_null(z_48);
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
ATerm fetch_1 (ATerm t, ATerm i_79 (ATerm))
{
  ATerm f_49 (ATerm t)
  {
    ATerm y_23 = t;
    int z_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, i_79, _id);
        LocalPopChoice(z_23);
      }
    else
      {
        t = y_23;
        t = Cons_2(t, _id, f_49);
      }
    return(t);
  }
  t = f_49(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_93 (ATerm))
{
  t = fetch_1(t, w_93);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm k_49 = NULL;
  k_49 = t;
  j_49 :
  if(match_cons(k_49, sym_Help_0))
    {
      ATerm m_49 = NULL,o_49 = NULL;
      ATerm a_24;
      a_24 = t;
      {
        ATerm n_49 = NULL;
        t = SSLgetAnnotations(not_null(k_49));
        {
          n_49 = t;
          if(((m_49 != NULL) && (m_49 != n_49)))
            _fail(n_49);
          else
            m_49 = n_49;
        }
      }
      t = a_24;
      {
        ATerm p_49 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(m_49));
        {
          p_49 = t;
          if(((o_49 != NULL) && (o_49 != p_49)))
            _fail(p_49);
          else
            o_49 = p_49;
        }
        t = not_null(o_49);
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
  ATerm x_3 (ATerm t)
  {
    ATerm u_49 = NULL;
    u_49 = t;
    t_49 :
    if(!(match_string(u_49, "--help")))
      {
        if(!(match_string(u_49, "-h")))
          {
            if(!(match_string(u_49, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm y_3 (ATerm t)
  {
    t = term_c_24;
    {
      t = set_config_0(t);
      t = term_d_24;
    }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    t = term_e_24;
    return(t);
  }
  t = Option_3(t, x_3, y_3, a_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL;
  x_49 = t;
  w_49 :
  if(((ATgetType(x_49) == AT_LIST) && !(ATisEmpty(x_49))))
    {
      y_49 = ATgetFirst((ATermList) x_49);
      z_49 = (ATerm) ATgetNext((ATermList) x_49);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_49)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_49)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_60 (ATerm), ATerm e_60 (ATerm))
{
  ATerm u_50 = NULL,v_50 = NULL,w_50 = NULL;
  u_50 = t;
  t_50 :
  if(((ATgetType(u_50) == AT_LIST) && !(ATisEmpty(u_50))))
    {
      v_50 = ATgetFirst((ATermList) u_50);
      w_50 = (ATerm) ATgetNext((ATermList) u_50);
      {
        ATerm k_51 = NULL,m_51 = NULL;
        ATerm l_51 = NULL;
        t = SSLgetAnnotations(not_null(u_50));
        {
          l_51 = t;
          if(((k_51 != NULL) && (k_51 != l_51)))
            _fail(l_51);
          else
            k_51 = l_51;
        }
        {
          t = not_null(v_50);
          {
            ATerm o_51 = NULL;
            t = d_60(t);
            {
              m_51 = t;
              {
                t = not_null(w_50);
                {
                  ATerm u_51 = NULL;
                  t = e_60(t);
                  {
                    o_51 = t;
                    {
                      ATerm v_51 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(o_51)), not_null(m_51)), not_null(k_51));
                      {
                        v_51 = t;
                        if(((u_51 != NULL) && (u_51 != v_51)))
                          _fail(v_51);
                        else
                          u_51 = v_51;
                      }
                      t = not_null(u_51);
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
  ATerm f_52 = NULL;
  f_52 = t;
  e_52 :
  if(((ATgetType(f_52) == AT_LIST) && ATisEmpty(f_52)))
    {
      {
        ATerm h_52 = NULL,j_52 = NULL;
        ATerm f_24;
        f_24 = t;
        {
          ATerm i_52 = NULL;
          t = SSLgetAnnotations(not_null(f_52));
          {
            i_52 = t;
            if(((h_52 != NULL) && (h_52 != i_52)))
              _fail(i_52);
            else
              h_52 = i_52;
          }
        }
        t = f_24;
        {
          ATerm k_52 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_52));
          {
            k_52 = t;
            if(((j_52 != NULL) && (j_52 != k_52)))
              _fail(k_52);
            else
              j_52 = k_52;
          }
          t = not_null(j_52);
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
  ATerm r_52 = NULL,s_52 = NULL,t_52 = NULL;
  r_52 = t;
  q_52 :
  if(match_cons(r_52, sym__2))
    {
      s_52 = ATgetArgument(r_52, 0);
      t_52 = ATgetArgument(r_52, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_s_14, not_null(s_52), not_null(t_52));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_94 (ATerm))
{
  ATerm g_24;
  g_24 = t;
  {
    ATerm k_24 = t;
    int l_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_n_24;
        t = z_94(t);
        LocalPopChoice(l_24);
      }
    else
      {
        t = k_24;
        {
        }
      }
  }
  t = g_24;
  {
    ATerm c_4 (ATerm t)
    {
      ATerm b_53 = NULL;
      ATerm o_24;
      o_24 = t;
      {
        ATerm z_52 = NULL;
        ATerm a_53 = NULL;
        a_53 = t;
        if(((z_52 != NULL) && (z_52 != a_53)))
          _fail(a_53);
        else
          z_52 = a_53;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_f_22, not_null(z_52));
          t = set_config_0(t);
        }
      }
      t = o_24;
      {
        ATerm c_53 = NULL;
        c_53 = t;
        if(((b_53 != NULL) && (b_53 != c_53)))
          _fail(c_53);
        else
          b_53 = c_53;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_53));
      }
      return(t);
    }
    ATerm d_4 (ATerm t)
    {
      ATerm p_24 = t;
      int t_24 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_24 = t;
          int v_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(v_24);
            }
          else
            {
              t = u_24;
              {
                t = z_94(t);
                t = Cons_2(t, _id, d_4);
              }
            }
          LocalPopChoice(t_24);
        }
      else
        {
          t = p_24;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, c_4, d_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_53 = NULL,j_53 = NULL,k_53 = NULL;
  ATerm w_24;
  w_24 = t;
  {
    ATerm l_53 = NULL,p_53 = NULL,q_53 = NULL,r_53 = NULL;
    l_53 = t;
    h_53 :
    if(match_cons(l_53, sym__3))
      {
        p_53 = ATgetArgument(l_53, 0);
        q_53 = ATgetArgument(l_53, 1);
        r_53 = ATgetArgument(l_53, 2);
        {
          if(((i_53 != NULL) && (i_53 != p_53)))
            _fail(p_53);
          else
            i_53 = p_53;
          {
            if(((j_53 != NULL) && (j_53 != q_53)))
              _fail(q_53);
            else
              j_53 = q_53;
            {
              if(((k_53 != NULL) && (k_53 != r_53)))
                _fail(r_53);
              else
                k_53 = r_53;
              t = SSL_table_put(not_null(i_53), not_null(j_53), not_null(k_53));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = w_24;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_94 (ATerm))
{
  ATerm u_53 = NULL;
  ATerm x_24;
  x_24 = t;
  {
    t = term_y_24;
    t = table_put_0(t);
  }
  t = x_24;
  {
    ATerm e_4 (ATerm t)
    {
      ATerm z_24 = t;
      int a_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_94(t);
          LocalPopChoice(a_25);
        }
      else
        {
          t = z_24;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, e_4);
    {
      ATerm c_25 = t;
      int d_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_25;
          e_25 = t;
          {
            ATerm f_25 = t;
            int g_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_b_24;
                t = get_config_0(t);
                LocalPopChoice(g_25);
              }
            else
              {
                t = f_25;
                t = fetch_1(t, Help_0);
              }
          }
          t = e_25;
          {
            t = system_usage_0(t);
            {
              t = term_w_17;
              t = exit_0(t);
            }
          }
          LocalPopChoice(d_25);
        }
      else
        {
          t = c_25;
          {
            ATerm h_25 = t;
            int i_25 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_4 (ATerm t)
                {
                  ATerm g_4 (ATerm t)
                  {
                    ATerm v_53 = NULL;
                    v_53 = t;
                    if(((u_53 != NULL) && (u_53 != v_53)))
                      _fail(v_53);
                    else
                      u_53 = v_53;
                    return(t);
                  }
                  t = Undefined_1(t, g_4);
                  return(t);
                }
                t = fetch_1(t, f_4);
                {
                  ATerm i_4 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_53)), term_j_25);
                    return(t);
                  }
                  t = say_1(t, i_4);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_m_6;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(i_25);
              }
            else
              {
                t = h_25;
                {
                }
              }
          }
        }
      {
        ATerm k_25;
        k_25 = t;
        {
          t = term_v_20;
          t = table_destroy_0(t);
        }
        t = k_25;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm f_91 (ATerm), ATerm g_91 (ATerm), ATerm h_91 (ATerm), ATerm i_91 (ATerm))
{
  t = parse_options_1(t, f_91);
  {
    t = store_options_0(t);
    {
      t = h_91(t);
      {
        ATerm l_25 = t;
        int m_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_91);
            LocalPopChoice(m_25);
          }
        else
          {
            t = l_25;
            {
              ATerm n_25 = t;
              int o_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = i_91(t);
                  t = report_success_0(t);
                  LocalPopChoice(o_25);
                }
              else
                {
                  t = n_25;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm w_91 (ATerm), ATerm x_91 (ATerm), ATerm y_91 (ATerm), ATerm z_91 (ATerm))
{
  ATerm j_4 (ATerm t)
  {
    ATerm p_25 = t;
    int q_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_91(t);
        LocalPopChoice(q_25);
      }
    else
      {
        t = p_25;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm k_4 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, w_91);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, j_4, y_91, z_91, k_4);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_91 (ATerm), ATerm r_91 (ATerm), ATerm s_91 (ATerm))
{
  ATerm l_4 (ATerm t)
  {
    ATerm n_4 (ATerm t)
    {
      ATerm r_25;
      r_25 = t;
      {
        ATerm y_53 = NULL;
        ATerm z_53 = NULL;
        t = term_f_22;
        {
          t = get_config_0(t);
          {
            z_53 = t;
            if(((y_53 != NULL) && (y_53 != z_53)))
              _fail(z_53);
            else
              y_53 = z_53;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_11, (ATerm) ATinsert(ATempty, not_null(y_53)));
          t = printnl_0(t);
        }
      }
      t = r_25;
      return(t);
    }
    t = if_verbose2_1(t, n_4);
    return(t);
  }
  t = iowrap_4(t, q_91, r_91, s_91, l_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_91 (ATerm), ATerm p_91 (ATerm))
{
  t = iowrap_3(t, o_91, p_91, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm g_99 (ATerm), ATerm h_99 (ATerm), ATerm i_99 (ATerm))
{
  ATerm o_4 (ATerm t)
  {
    ATerm s_25 = t;
    int t_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = termid_check_p__1(t, g_99);
        LocalPopChoice(t_25);
      }
    else
      {
        t = s_25;
        {
        }
      }
    {
      t = h_99(t);
      {
        ATerm u_25 = t;
        int v_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = termid_set_p__1(t, g_99);
            LocalPopChoice(v_25);
          }
        else
          {
            t = u_25;
            {
            }
          }
      }
    }
    return(t);
  }
  ATerm p_4 (ATerm t)
  {
    ATerm w_25 = t;
    int x_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_99(t);
        LocalPopChoice(x_25);
      }
    else
      {
        t = w_25;
        {
          ATerm u_4 (ATerm t)
          {
            ATerm c_54 = NULL;
            c_54 = t;
            b_54 :
            if(!(match_string(c_54, "--strict")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm v_4 (ATerm t)
          {
            t = term_p_12;
            return(t);
          }
          ATerm w_4 (ATerm t)
          {
            t = term_y_25;
            return(t);
          }
          t = Option_3(t, u_4, v_4, w_4);
        }
      }
    return(t);
  }
  t = iowrap_2(t, o_4, p_4);
  return(t);
}
ATerm Pp_gen_0 (ATerm t)
{
  ATerm y_4 (ATerm t)
  {
    ATerm b_5 (ATerm t)
    {
      ATerm f_54 = NULL;
      f_54 = t;
      d_54 :
      if(!(match_string(f_54, "\"sdf-2.1\"")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm c_5 (ATerm t)
    {
      t = term_z_25;
      return(t);
    }
    t = InOutId_2(t, b_5, c_5);
    return(t);
  }
  ATerm z_4 (ATerm t)
  {
    t = _2(t, _id, ppgenerate_0);
    return(t);
  }
  ATerm a_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      ATerm g_54 = NULL;
      g_54 = t;
      e_54 :
      if(!(match_string(g_54, "-v")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm h_5 (ATerm t)
    {
      t = term_a_26;
      return(t);
    }
    ATerm i_5 (ATerm t)
    {
      t = term_b_26;
      return(t);
    }
    t = Option_3(t, d_5, h_5, i_5);
    return(t);
  }
  t = io_idwrap_3(t, y_4, z_4, a_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Pp_gen_0(t);
  return(t);
}

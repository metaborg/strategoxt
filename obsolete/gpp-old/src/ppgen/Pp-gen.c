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
Symbol sym_Strict_0;
Symbol sym_bracket_symbol_1;
Symbol sym_lexical_syntax_1;
Symbol sym_context_free_syntax_1;
Symbol sym_variables_1;
Symbol sym_lexical_variables_1;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_varsym_1;
Symbol sym_layout_0;
Symbol sym_e_1;
Symbol sym_OptExp_empty_0;
Symbol sym_IntCon_NatCon_OptExp_3;
Symbol sym_NatCon_p__1;
Symbol sym_plus_1;
Symbol sym_minus_1;
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
Symbol sym_qlit_1;
Symbol sym_uqlit_1;
Symbol sym_Literal_1;
Symbol sym_prod_fun_4;
Symbol sym_empty_grammar_0;
Symbol sym_conc_grammars_2;
Symbol sym_TagId_empty_0;
Symbol sym_Symbol_s_1;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_Production_s_1;
Symbol sym_syntax_1;
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_constructor_0;
Symbol sym_memo_0;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
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
Symbol sym_Scopes_0;
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
Symbol sym_Infinite_0;
Symbol sym_Anno_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_CUT_0;
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
Symbol sym_Verbose_0;
Symbol sym_Nil_0;
Symbol sym_Cons_2;
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
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
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
  sym_e_1 = ATmakeSymbol("e", 1, ATfalse);
  ATprotectSymbol(sym_e_1);
  sym_OptExp_empty_0 = ATmakeSymbol("OptExp-empty", 0, ATfalse);
  ATprotectSymbol(sym_OptExp_empty_0);
  sym_IntCon_NatCon_OptExp_3 = ATmakeSymbol("IntCon-NatCon-OptExp", 3, ATfalse);
  ATprotectSymbol(sym_IntCon_NatCon_OptExp_3);
  sym_NatCon_p__1 = ATmakeSymbol("NatCon'", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_p__1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
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
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
  ATprotectSymbol(sym_Literal_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_empty_grammar_0 = ATmakeSymbol("empty-grammar", 0, ATfalse);
  ATprotectSymbol(sym_empty_grammar_0);
  sym_conc_grammars_2 = ATmakeSymbol("conc-grammars", 2, ATfalse);
  ATprotectSymbol(sym_conc_grammars_2);
  sym_TagId_empty_0 = ATmakeSymbol("TagId-empty", 0, ATfalse);
  ATprotectSymbol(sym_TagId_empty_0);
  sym_Symbol_s_1 = ATmakeSymbol("Symbol-s", 1, ATfalse);
  ATprotectSymbol(sym_Symbol_s_1);
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
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_constructor_0 = ATmakeSymbol("constructor", 0, ATfalse);
  ATprotectSymbol(sym_constructor_0);
  sym_memo_0 = ATmakeSymbol("memo", 0, ATfalse);
  ATprotectSymbol(sym_memo_0);
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
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
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
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
  ATprotectSymbol(sym_CUT_0);
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
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_a_24;
ATerm term_z_23;
ATerm term_y_23;
ATerm term_x_23;
ATerm term_m_23;
ATerm term_x_22;
ATerm term_c_22;
ATerm term_z_21;
ATerm term_y_21;
ATerm term_u_21;
ATerm term_t_21;
ATerm term_s_21;
ATerm term_r_21;
ATerm term_g_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_b_21;
ATerm term_z_20;
ATerm term_y_20;
ATerm term_x_20;
ATerm term_w_20;
ATerm term_m_20;
ATerm term_l_20;
ATerm term_k_20;
ATerm term_j_20;
ATerm term_c_20;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_l_19;
ATerm term_h_19;
ATerm term_c_19;
ATerm term_u_18;
ATerm term_s_18;
ATerm term_x_17;
ATerm term_w_17;
ATerm term_e_17;
ATerm term_f_16;
ATerm term_w_15;
ATerm term_v_15;
ATerm term_u_15;
ATerm term_e_15;
ATerm term_z_14;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_u_14;
ATerm term_b_14;
ATerm term_q_13;
ATerm term_n_13;
ATerm term_h_13;
ATerm term_a_13;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_s_12;
ATerm term_i_12;
ATerm term_h_12;
ATerm term_g_12;
ATerm term_x_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_q_10;
ATerm term_p_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_v_9;
ATerm term_v_8;
ATerm term_x_7;
ATerm term_w_7;
ATerm term_v_7;
ATerm term_k_6;
ATerm term_i_6;
void init_constant_terms (void)
{
  ATprotect(&(term_i_6));
  term_i_6 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_w_7));
  term_w_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_x_7));
  term_x_7 = (ATerm) ATmakeAppl(sym_Arg_1, term_w_7);
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_v_9));
  term_v_9 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_SOpt_2, term_v_9, term_w_9);
  ATprotect(&(term_p_10));
  term_p_10 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_lit_1, term_p_10);
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_lit_1, term_u_10);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_12));
  term_h_12 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(sym__2, term_g_12, term_h_12);
  ATprotect(&(term_s_12));
  term_s_12 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_a_13));
  term_a_13 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_n_13));
  term_n_13 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_z_14));
  term_z_14 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_u_15));
  term_u_15 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_v_15));
  term_v_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_w_15));
  term_w_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_17));
  term_e_17 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_17));
  term_w_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_18));
  term_s_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_l_19));
  term_l_19 = (ATerm) ATmakeAppl(sym__2, term_x_14, term_e_15);
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Verbose_1, term_e_15);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_c_20));
  term_c_20 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__2, term_j_20, term_i_6);
  ATprotect(&(term_l_20));
  term_l_20 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_w_20));
  term_w_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_x_20));
  term_x_20 = (ATerm) ATmakeAppl(sym__2, term_w_20, term_i_6);
  ATprotect(&(term_y_20));
  term_y_20 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_20));
  term_z_20 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(sym__2, term_b_21, term_i_6);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_r_21));
  term_r_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_s_21));
  term_s_21 = (ATerm) ATmakeAppl(sym__2, term_w_17, term_x_17);
  ATprotect(&(term_t_21));
  term_t_21 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_u_21));
  term_u_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_y_21));
  term_y_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_21));
  term_z_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_x_22));
  term_x_22 = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, (ATerm) ATempty);
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_x_23));
  term_x_23 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_y_23));
  term_y_23 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_a_24));
  term_a_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm o_87 (ATerm));
ATerm filter_1 (ATerm, ATerm t_76 (ATerm));
ATerm is_list_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm s_64 (ATerm));
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm i_92 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm j_62 (ATerm));
ATerm iter_1 (ATerm, ATerm i_62 (ATerm));
ATerm pair_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm g_62 (ATerm), ATerm h_62 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm e_62 (ATerm), ATerm f_62 (ATerm));
ATerm make_0 (ATerm);
ATerm lit_1 (ATerm, ATerm d_62 (ATerm));
ATerm NonTerminal_0 (ATerm);
ATerm number_node_1 (ATerm, ATerm l_92 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm h_92 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm w_83 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm));
ATerm crush_3 (ATerm, ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm));
ATerm collect_p__1 (ATerm, ATerm y_65 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm _2 (ATerm, ATerm n_53 (ATerm), ATerm o_53 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm e_89 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm v_72 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm o_65 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm p_65 (ATerm));
ATerm InOutId_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm w_65 (ATerm));
ATerm try_1 (ATerm, ATerm s_91 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm u_65 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm q_73 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm a_71 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm n_77 (ATerm), ATerm o_77 (ATerm));
ATerm crush_2 (ATerm, ATerm c_79 (ATerm), ATerm d_79 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm z_70 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_73 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm b_76 (ATerm), ATerm c_76 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm y_72 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm d_70 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm n_83 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm z_69 (ATerm));
ATerm map_1 (ATerm, ATerm z_82 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm y_69 (ATerm));
ATerm Program_1 (ATerm, ATerm f_57 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm g_57 (ATerm));
ATerm fetch_1 (ATerm, ATerm h_83 (ATerm));
ATerm option_defined_1 (ATerm, ATerm x_70 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_65 (ATerm), ATerm e_65 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm b_70 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm a_70 (ATerm));
ATerm iowrap_4 (ATerm, ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm p_72 (ATerm));
ATerm iowrap_3 (ATerm, ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm i_72 (ATerm));
ATerm iowrap_2 (ATerm, ATerm e_72 (ATerm), ATerm f_72 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm));
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
      if(((ATgetType(q_2) == AT_LIST) && ((ATermList) q_2 != ATempty)))
        {
          r_2 = ATgetFirst((ATermList) q_2);
          c_3 = (ATerm) ATgetNext((ATermList) q_2);
          {
            ATerm i_3 = NULL;
            ATerm v_5;
            v_5 = t;
            {
              t = not_null(r_2);
              t = l_0(t);
            }
            t = v_5;
            {
              ATerm j_3 = NULL;
              t = term_i_6;
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
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_6)), not_null(o_3)), (ATerm) ATinsert(ATempty, term_k_6));
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
ATerm topdown_1 (ATerm t, ATerm o_87 (ATerm))
{
  t = o_87(t);
  {
    ATerm a_0 (ATerm t)
    {
      t = topdown_1(t, o_87);
      return(t);
    }
    t = _all(t, a_0);
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm t_76 (ATerm))
{
  ATerm l_6 = t;
  int m_6 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_6);
    }
  else
    {
      t = l_6;
      {
        ATerm n_6 = t;
        int o_6 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_0 (ATerm t)
            {
              t = filter_1(t, t_76);
              return(t);
            }
            t = Cons_2(t, t_76, b_0);
            LocalPopChoice(o_6);
          }
        else
          {
            t = n_6;
            {
              ATerm x_3 = NULL,y_3 = NULL,z_3 = NULL;
              x_3 = t;
              w_3 :
              if(((ATgetType(x_3) == AT_LIST) && ((ATermList) x_3 != ATempty)))
                {
                  y_3 = ATgetFirst((ATermList) x_3);
                  z_3 = (ATerm) ATgetNext((ATermList) x_3);
                  {
                    t = not_null(z_3);
                    t = filter_1(t, t_76);
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
ATerm is_list_0 (ATerm t)
{
  ATerm d_4 = NULL,e_4 = NULL,f_4 = NULL;
  d_4 = t;
  c_4 :
  if(((ATermList) d_4 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(d_4) == AT_LIST) && ((ATermList) d_4 != ATempty)))
        {
          e_4 = ATgetFirst((ATermList) d_4);
          f_4 = (ATerm) ATgetNext((ATermList) d_4);
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
ATerm argument_list_0 (ATerm t)
{
  ATerm e_0 (ATerm t)
  {
    ATerm f_0 (ATerm t)
    {
      ATerm h_4 = NULL;
      h_4 = t;
      {
        ATerm r_7 = t;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = r_7;
          }
        t = (ATerm) ATinsert(ATempty, not_null(h_4));
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
ATerm Arg_1 (ATerm t, ATerm s_64 (ATerm))
{
  ATerm p_4 = NULL,q_4 = NULL;
  p_4 = t;
  o_4 :
  if(match_cons(p_4, sym_Arg_1))
    {
      q_4 = ATgetArgument(p_4, 0);
      {
        ATerm t_4 = NULL,v_4 = NULL;
        ATerm u_4 = NULL;
        t = SSLgetAnnotations(not_null(p_4));
        {
          u_4 = t;
          if(((t_4 != NULL) && (t_4 != u_4)))
            _fail(u_4);
          else
            t_4 = u_4;
        }
        {
          t = not_null(q_4);
          {
            ATerm x_4 = NULL;
            t = s_64(t);
            {
              v_4 = t;
              {
                ATerm y_4 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(v_4)), not_null(t_4));
                {
                  y_4 = t;
                  if(((x_4 != NULL) && (x_4 != y_4)))
                    _fail(y_4);
                  else
                    x_4 = y_4;
                }
                t = not_null(x_4);
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
  ATerm i_5 = NULL,j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
  ATerm x_5 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_5)), not_null(l_5));
    return(t);
  }
  k_5 = t;
  g_5 :
  if(match_cons(k_5, sym_alt_2))
    {
      l_5 = ATgetArgument(k_5, 0);
      m_5 = ATgetArgument(k_5, 1);
      h_5 :
      if(match_cons(m_5, sym_alt_2))
        {
          i_5 = ATgetArgument(m_5, 0);
          j_5 = ATgetArgument(m_5, 1);
          {
            ATerm t_7 = t;
            int u_7 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_5 = NULL;
                ATerm r_5 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(i_5), not_null(j_5));
                {
                  t = flat_alt_0(t);
                  {
                    r_5 = t;
                    if(((q_5 != NULL) && (q_5 != r_5)))
                      _fail(r_5);
                    else
                      q_5 = r_5;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(q_5)), not_null(l_5));
                LocalPopChoice(u_7);
              }
            else
              {
                t = t_7;
                t = x_5(t);
              }
          }
        }
      else
        {
          t = x_5(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm i_92 (ATerm))
{
  ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL;
  ATerm o_0 (ATerm t)
  {
    t = term_i_6;
    t = i_92(t);
    return(t);
  }
  t = split_2(t, o_0, _id);
  {
    ATerm u_8 (ATerm t)
    {
      ATerm c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL,g_7 = NULL,h_7 = NULL,i_7 = NULL,j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL;
      ATerm w_8 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm x_8 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm y_8 (ATerm t)
      {
        ATerm n_7 = NULL,o_7 = NULL,p_7 = NULL,q_7 = NULL;
        if(((z_6 != NULL) && (z_6 != i_7)))
          _fail(i_7);
        else
          z_6 = i_7;
        {
          if(((a_7 != NULL) && (a_7 != j_7)))
            _fail(j_7);
          else
            a_7 = j_7;
          {
            if(((b_7 != NULL) && (b_7 != l_7)))
              _fail(l_7);
            else
              b_7 = l_7;
            {
              if(((n_7 != NULL) && (n_7 != f_7)))
                _fail(f_7);
              else
                n_7 = f_7;
              {
                if(((o_7 != NULL) && (o_7 != d_7)))
                  _fail(d_7);
                else
                  o_7 = d_7;
                {
                  if(((p_7 != NULL) && (p_7 != e_7)))
                    _fail(e_7);
                  else
                    p_7 = e_7;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(n_7), (ATerm) ATmakeAppl(sym_alt_2, not_null(o_7), not_null(p_7)));
                    {
                      ATerm s_7 = NULL;
                      t = flat_alt_0(t);
                      {
                        q_7 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_v_7, not_null(q_7));
                          {
                            t = mkterm_0(t);
                            {
                              s_7 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_6), not_null(a_7)), (ATerm) ATmakeAppl(sym__2, not_null(b_7), not_null(s_7)));
                                {
                                  t = u_8(t);
                                  {
                                    ATerm p_0 (ATerm t)
                                    {
                                      ATerm q_0 (ATerm t)
                                      {
                                        ATerm r_0 (ATerm t)
                                        {
                                          t = Arg_1(t, _id);
                                          t = term_x_7;
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
      ATerm z_8 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_7), not_null(j_7)), (ATerm) ATmakeAppl(sym__2, not_null(l_7), not_null(f_7)));
        t = u_8(t);
        return(t);
      }
      ATerm a_9 (ATerm t)
      {
        ATerm c_8 = NULL,d_8 = NULL,j_8 = NULL;
        ATerm e_8 = NULL;
        ATerm g_8 = NULL,h_8 = NULL,i_8 = NULL;
        t = not_null(m_7);
        {
          e_8 = t;
          {
            t = SSL_explode_term(not_null(e_8));
            {
              g_8 = t;
              j_6 :
              if(match_cons(g_8, sym__2))
                {
                  h_8 = ATgetArgument(g_8, 0);
                  i_8 = ATgetArgument(g_8, 1);
                  {
                    if(((c_8 != NULL) && (c_8 != h_8)))
                      _fail(h_8);
                    else
                      c_8 = h_8;
                    if(((d_8 != NULL) && (d_8 != i_8)))
                      _fail(i_8);
                    else
                      d_8 = i_8;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_7), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(l_7), not_null(c_8))));
          {
            ATerm l_8 = NULL,s_8 = NULL;
            t = conc_0(t);
            {
              j_8 = t;
              {
                t = not_null(d_8);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm y_7;
                      y_7 = t;
                      {
                        ATerm m_8 = NULL;
                        t = make_0(t);
                        {
                          m_8 = t;
                          if(((l_8 != NULL) && (l_8 != m_8)))
                            _fail(m_8);
                          else
                            l_8 = m_8;
                        }
                      }
                      t = y_7;
                      {
                        ATerm s_0 (ATerm t)
                        {
                          ATerm n_8 = NULL;
                          ATerm p_8 = NULL;
                          n_8 = t;
                          {
                            ATerm q_8 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_7), not_null(j_8)), not_null(n_8));
                            {
                              t = u_8(t);
                              {
                                q_8 = t;
                                if(((p_8 != NULL) && (p_8 != q_8)))
                                  _fail(q_8);
                                else
                                  p_8 = q_8;
                              }
                            }
                            t = not_null(p_8);
                          }
                          return(t);
                        }
                        t = map_1(t, s_0);
                        {
                          t = concat_0(t);
                          {
                            s_8 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(s_8)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(i_7), not_null(j_8)), not_null(l_8)));
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
      g_7 = t;
      p_6 :
      if(match_cons(g_7, sym__2))
        {
          h_7 = ATgetArgument(g_7, 0);
          k_7 = ATgetArgument(g_7, 1);
          q_6 :
          if(match_cons(k_7, sym_lit_1))
            {
              l_7 = ATgetArgument(k_7, 0);
              r_6 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(k_7, sym__2))
                {
                  l_7 = ATgetArgument(k_7, 0);
                  m_7 = ATgetArgument(k_7, 1);
                  s_6 :
                  if(match_cons(m_7, sym_sort_1))
                    {
                      f_7 = ATgetArgument(m_7, 0);
                      t_6 :
                      if(match_cons(h_7, sym__2))
                        {
                          i_7 = ATgetArgument(h_7, 0);
                          j_7 = ATgetArgument(h_7, 1);
                          {
                            ATerm z_7 = t;
                            int a_8 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = w_8(t);
                                LocalPopChoice(a_8);
                              }
                            else
                              {
                                t = z_7;
                                t = a_9(t);
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
                      if(match_cons(m_7, sym_char_class_1))
                        {
                          f_7 = ATgetArgument(m_7, 0);
                          u_6 :
                          if(match_cons(h_7, sym__2))
                            {
                              i_7 = ATgetArgument(h_7, 0);
                              j_7 = ATgetArgument(h_7, 1);
                              {
                                ATerm b_8 = t;
                                int f_8 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = x_8(t);
                                    LocalPopChoice(f_8);
                                  }
                                else
                                  {
                                    t = b_8;
                                    t = a_9(t);
                                  }
                              }
                            }
                          else
                            {
                              t = x_8(t);
                            }
                        }
                      else
                        {
                          if(match_cons(m_7, sym_alt_2))
                            {
                              f_7 = ATgetArgument(m_7, 0);
                              c_7 = ATgetArgument(m_7, 1);
                              v_6 :
                              if(match_cons(h_7, sym__2))
                                {
                                  i_7 = ATgetArgument(h_7, 0);
                                  j_7 = ATgetArgument(h_7, 1);
                                  w_6 :
                                  if(match_cons(c_7, sym_alt_2))
                                    {
                                      d_7 = ATgetArgument(c_7, 0);
                                      e_7 = ATgetArgument(c_7, 1);
                                      {
                                        ATerm k_8 = t;
                                        int o_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = y_8(t);
                                            LocalPopChoice(o_8);
                                          }
                                        else
                                          {
                                            t = k_8;
                                            t = a_9(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = a_9(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(m_7, sym_bracket_symbol_1))
                                {
                                  f_7 = ATgetArgument(m_7, 0);
                                  x_6 :
                                  if(match_cons(h_7, sym__2))
                                    {
                                      i_7 = ATgetArgument(h_7, 0);
                                      j_7 = ATgetArgument(h_7, 1);
                                      {
                                        ATerm r_8 = t;
                                        int t_8 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = z_8(t);
                                            LocalPopChoice(t_8);
                                          }
                                        else
                                          {
                                            t = r_8;
                                            t = a_9(t);
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
                                  y_6 :
                                  if(match_cons(h_7, sym__2))
                                    {
                                      i_7 = ATgetArgument(h_7, 0);
                                      j_7 = ATgetArgument(h_7, 1);
                                      t = a_9(t);
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
    t = u_8(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm n_9 = NULL,o_9 = NULL,p_9 = NULL;
  n_9 = t;
  m_9 :
  if(match_cons(n_9, sym_lit_1))
    {
      o_9 = ATgetArgument(n_9, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_v_8, (ATerm) ATmakeAppl(sym_S_1, not_null(o_9)));
    }
  else
    {
      if(match_cons(n_9, sym__2))
        {
          o_9 = ATgetArgument(n_9, 0);
          p_9 = ATgetArgument(n_9, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(o_9));
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm j_62 (ATerm))
{
  ATerm z_9 = NULL,a_10 = NULL;
  z_9 = t;
  y_9 :
  if(match_cons(z_9, sym_iter_star_1))
    {
      a_10 = ATgetArgument(z_9, 0);
      {
        ATerm d_10 = NULL,f_10 = NULL;
        ATerm e_10 = NULL;
        t = SSLgetAnnotations(not_null(z_9));
        {
          e_10 = t;
          if(((d_10 != NULL) && (d_10 != e_10)))
            _fail(e_10);
          else
            d_10 = e_10;
        }
        {
          t = not_null(a_10);
          {
            ATerm h_10 = NULL;
            t = j_62(t);
            {
              f_10 = t;
              {
                ATerm i_10 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(f_10)), not_null(d_10));
                {
                  i_10 = t;
                  if(((h_10 != NULL) && (h_10 != i_10)))
                    _fail(i_10);
                  else
                    h_10 = i_10;
                }
                t = not_null(h_10);
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
ATerm iter_1 (ATerm t, ATerm i_62 (ATerm))
{
  ATerm s_10 = NULL,t_10 = NULL;
  s_10 = t;
  r_10 :
  if(match_cons(s_10, sym_iter_1))
    {
      t_10 = ATgetArgument(s_10, 0);
      {
        ATerm w_10 = NULL,y_10 = NULL;
        ATerm x_10 = NULL;
        t = SSLgetAnnotations(not_null(s_10));
        {
          x_10 = t;
          if(((w_10 != NULL) && (w_10 != x_10)))
            _fail(x_10);
          else
            w_10 = x_10;
        }
        {
          t = not_null(t_10);
          {
            ATerm a_11 = NULL;
            t = i_62(t);
            {
              y_10 = t;
              {
                ATerm b_11 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(y_10)), not_null(w_10));
                {
                  b_11 = t;
                  if(((a_11 != NULL) && (a_11 != b_11)))
                    _fail(b_11);
                  else
                    a_11 = b_11;
                }
                t = not_null(a_11);
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
  ATerm b_9 = t;
  int c_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(c_9);
    }
  else
    {
      t = b_9;
      {
        ATerm k_11 = NULL,l_11 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL;
        k_11 = t;
        i_11 :
        if(((ATgetType(k_11) == AT_LIST) && ((ATermList) k_11 != ATempty)))
          {
            l_11 = ATgetFirst((ATermList) k_11);
            m_11 = (ATerm) ATgetNext((ATermList) k_11);
            j_11 :
            if(((ATgetType(m_11) == AT_LIST) && ((ATermList) m_11 != ATempty)))
              {
                n_11 = ATgetFirst((ATermList) m_11);
                o_11 = (ATerm) ATgetNext((ATermList) m_11);
                {
                  ATerm s_11 = NULL;
                  ATerm t_11 = NULL;
                  t = not_null(o_11);
                  {
                    t = pair_0(t);
                    {
                      t_11 = t;
                      if(((s_11 != NULL) && (s_11 != t_11)))
                        _fail(t_11);
                      else
                        s_11 = t_11;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(s_11)), (ATerm) ATmakeAppl(sym__2, not_null(l_11), not_null(n_11)));
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
ATerm iter_star_sep_2 (ATerm t, ATerm g_62 (ATerm), ATerm h_62 (ATerm))
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
  d_12 = t;
  c_12 :
  if(match_cons(d_12, sym_iter_star_sep_2))
    {
      e_12 = ATgetArgument(d_12, 0);
      f_12 = ATgetArgument(d_12, 1);
      {
        ATerm j_12 = NULL,l_12 = NULL;
        ATerm k_12 = NULL;
        t = SSLgetAnnotations(not_null(d_12));
        {
          k_12 = t;
          if(((j_12 != NULL) && (j_12 != k_12)))
            _fail(k_12);
          else
            j_12 = k_12;
        }
        {
          t = not_null(e_12);
          {
            ATerm n_12 = NULL;
            t = g_62(t);
            {
              l_12 = t;
              {
                t = not_null(f_12);
                {
                  ATerm p_12 = NULL;
                  t = h_62(t);
                  {
                    n_12 = t;
                    {
                      ATerm q_12 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(l_12), not_null(n_12)), not_null(j_12));
                      {
                        q_12 = t;
                        if(((p_12 != NULL) && (p_12 != q_12)))
                          _fail(q_12);
                        else
                          p_12 = q_12;
                      }
                      t = not_null(p_12);
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
ATerm iter_sep_2 (ATerm t, ATerm e_62 (ATerm), ATerm f_62 (ATerm))
{
  ATerm c_13 = NULL,d_13 = NULL,e_13 = NULL;
  c_13 = t;
  b_13 :
  if(match_cons(c_13, sym_iter_sep_2))
    {
      d_13 = ATgetArgument(c_13, 0);
      e_13 = ATgetArgument(c_13, 1);
      {
        ATerm i_13 = NULL,k_13 = NULL;
        ATerm j_13 = NULL;
        t = SSLgetAnnotations(not_null(c_13));
        {
          j_13 = t;
          if(((i_13 != NULL) && (i_13 != j_13)))
            _fail(j_13);
          else
            i_13 = j_13;
        }
        {
          t = not_null(d_13);
          {
            ATerm m_13 = NULL;
            t = e_62(t);
            {
              k_13 = t;
              {
                t = not_null(e_13);
                {
                  ATerm o_13 = NULL;
                  t = f_62(t);
                  {
                    m_13 = t;
                    {
                      ATerm p_13 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(k_13), not_null(m_13)), not_null(i_13));
                      {
                        p_13 = t;
                        if(((o_13 != NULL) && (o_13 != p_13)))
                          _fail(p_13);
                        else
                          o_13 = p_13;
                      }
                      t = not_null(o_13);
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
  ATerm d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL;
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_14 = NULL,j_14 = NULL,k_14 = NULL;
      t = reverse_0(t);
      {
        ATerm t_0 (ATerm t)
        {
          ATerm v_0 (ATerm t)
          {
            ATerm f_9 = t;
            int g_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                LocalPopChoice(g_9);
              }
            else
              {
                t = f_9;
                {
                  ATerm h_9 = t;
                  int i_9 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
                      LocalPopChoice(i_9);
                    }
                  else
                    {
                      t = h_9;
                      {
                        ATerm j_9 = t;
                        int k_9 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            LocalPopChoice(k_9);
                          }
                        else
                          {
                            t = j_9;
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
          i_14 = t;
          x_13 :
          if(((ATgetType(i_14) == AT_LIST) && ((ATermList) i_14 != ATempty)))
            {
              j_14 = ATgetFirst((ATermList) i_14);
              k_14 = (ATerm) ATgetNext((ATermList) i_14);
              {
                ATerm l_14 = NULL;
                if(((e_14 != NULL) && (e_14 != j_14)))
                  _fail(j_14);
                else
                  e_14 = j_14;
                {
                  if(((d_14 != NULL) && (d_14 != k_14)))
                    _fail(k_14);
                  else
                    d_14 = k_14;
                  {
                    ATerm l_9 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = l_9;
                      }
                    {
                      ATerm m_14 = NULL;
                      t = not_null(d_14);
                      {
                        t = reverse_0(t);
                        {
                          m_14 = t;
                          if(((l_14 != NULL) && (l_14 != m_14)))
                            _fail(m_14);
                          else
                            l_14 = m_14;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_14)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(l_14))));
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
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm q_9 = t;
        int r_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_14 = NULL;
            t = reverse_0(t);
            {
              ATerm x_0 (ATerm t)
              {
                ATerm n_14 = NULL;
                t = Make_0(t);
                {
                  n_14 = t;
                  if(((h_14 != NULL) && (h_14 != n_14)))
                    _fail(n_14);
                  else
                    h_14 = n_14;
                }
                return(t);
              }
              ATerm y_0 (ATerm t)
              {
                ATerm o_14 = NULL;
                ATerm s_9 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = s_9;
                  }
                {
                  t = reverse_0(t);
                  {
                    o_14 = t;
                    if(((f_14 != NULL) && (f_14 != o_14)))
                      _fail(o_14);
                    else
                      f_14 = o_14;
                  }
                }
                return(t);
              }
              t = Cons_2(t, x_0, y_0);
              {
                t = not_null(f_14);
                {
                  t = pair_0(t);
                  {
                    ATerm z_0 (ATerm t)
                    {
                      ATerm p_14 = NULL,q_14 = NULL;
                      ATerm a_1 (ATerm t)
                      {
                        ATerm r_14 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            r_14 = t;
                            if(((p_14 != NULL) && (p_14 != r_14)))
                              _fail(r_14);
                            else
                              p_14 = r_14;
                          }
                        }
                        return(t);
                      }
                      ATerm b_1 (ATerm t)
                      {
                        ATerm s_14 = NULL;
                        ATerm c_1 (ATerm t)
                        {
                          ATerm t_9 = t;
                          int u_9 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              LocalPopChoice(u_9);
                            }
                          else
                            {
                              t = t_9;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, c_1);
                        {
                          t = Make_0(t);
                          {
                            s_14 = t;
                            if(((q_14 != NULL) && (q_14 != s_14)))
                              _fail(s_14);
                            else
                              q_14 = s_14;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, a_1, b_1);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_x_9), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_14)), not_null(p_14)));
                      return(t);
                    }
                    t = map_1(t, z_0);
                    {
                      t_14 = t;
                      {
                        if(((g_14 != NULL) && (g_14 != t_14)))
                          _fail(t_14);
                        else
                          g_14 = t_14;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_14)), not_null(g_14)));
                      }
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
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm d_62 (ATerm))
{
  ATerm g_15 = NULL,h_15 = NULL;
  g_15 = t;
  f_15 :
  if(match_cons(g_15, sym_lit_1))
    {
      h_15 = ATgetArgument(g_15, 0);
      {
        ATerm k_15 = NULL,m_15 = NULL;
        ATerm l_15 = NULL;
        t = SSLgetAnnotations(not_null(g_15));
        {
          l_15 = t;
          if(((k_15 != NULL) && (k_15 != l_15)))
            _fail(l_15);
          else
            k_15 = l_15;
        }
        {
          t = not_null(h_15);
          {
            ATerm o_15 = NULL;
            t = d_62(t);
            {
              m_15 = t;
              {
                ATerm p_15 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(m_15)), not_null(k_15));
                {
                  p_15 = t;
                  if(((o_15 != NULL) && (o_15 != p_15)))
                    _fail(p_15);
                  else
                    o_15 = p_15;
                }
                t = not_null(o_15);
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
  ATerm b_10 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_10;
    }
  return(t);
}
ATerm number_node_1 (ATerm t, ATerm l_92 (ATerm))
{
  ATerm d_1 (ATerm t)
  {
    t = term_w_7;
    return(t);
  }
  t = split_2(t, d_1, _id);
  {
    ATerm r_16 (ATerm t)
    {
      ATerm b_16 = NULL,c_16 = NULL,e_16 = NULL;
      ATerm c_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          LocalPopChoice(g_10);
        }
      else
        {
          t = c_10;
          {
            ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
            g_16 = t;
            z_15 :
            if(match_cons(g_16, sym__2))
              {
                h_16 = ATgetArgument(g_16, 0);
                i_16 = ATgetArgument(g_16, 1);
                a_16 :
                if(((ATgetType(i_16) == AT_LIST) && ((ATermList) i_16 != ATempty)))
                  {
                    j_16 = ATgetFirst((ATermList) i_16);
                    k_16 = (ATerm) ATgetNext((ATermList) i_16);
                    {
                      ATerm j_10 = t;
                      int k_10 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm l_16 = NULL;
                          if(((b_16 != NULL) && (b_16 != h_16)))
                            _fail(h_16);
                          else
                            b_16 = h_16;
                          {
                            if(((c_16 != NULL) && (c_16 != j_16)))
                              _fail(j_16);
                            else
                              c_16 = j_16;
                            {
                              if(((e_16 != NULL) && (e_16 != k_16)))
                                _fail(k_16);
                              else
                                e_16 = k_16;
                              {
                                t = not_null(c_16);
                                {
                                  t = l_92(t);
                                  {
                                    ATerm m_16 = NULL,o_16 = NULL;
                                    ATerm n_16 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(b_16), term_w_7);
                                    {
                                      t = add_0(t);
                                      {
                                        n_16 = t;
                                        if(((m_16 != NULL) && (m_16 != n_16)))
                                          _fail(n_16);
                                        else
                                          m_16 = n_16;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(m_16), not_null(e_16));
                                      {
                                        t = r_16(t);
                                        {
                                          o_16 = t;
                                          if(((l_16 != NULL) && (l_16 != o_16)))
                                            _fail(o_16);
                                          else
                                            l_16 = o_16;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(l_16)), (ATerm) ATmakeAppl(sym__2, not_null(b_16), not_null(c_16)));
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(k_10);
                        }
                      else
                        {
                          t = j_10;
                          {
                            ATerm p_16 = NULL;
                            if(((b_16 != NULL) && (b_16 != h_16)))
                              _fail(h_16);
                            else
                              b_16 = h_16;
                            {
                              if(((c_16 != NULL) && (c_16 != j_16)))
                                _fail(j_16);
                              else
                                c_16 = j_16;
                              {
                                if(((e_16 != NULL) && (e_16 != k_16)))
                                  _fail(k_16);
                                else
                                  e_16 = k_16;
                                {
                                  ATerm q_16 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(b_16), not_null(e_16));
                                  {
                                    t = r_16(t);
                                    {
                                      q_16 = t;
                                      if(((p_16 != NULL) && (p_16 != q_16)))
                                        _fail(q_16);
                                      else
                                        p_16 = q_16;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(p_16)), not_null(c_16));
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
    t = r_16(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm e_1 (ATerm t)
  {
    ATerm f_1 (ATerm t)
    {
      ATerm z_16 = NULL,a_17 = NULL,b_17 = NULL;
      z_16 = t;
      y_16 :
      if(match_cons(z_16, sym_label_2))
        {
          a_17 = ATgetArgument(z_16, 0);
          b_17 = ATgetArgument(z_16, 1);
          t = not_null(b_17);
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
ATerm symbols2pp_entries_1 (ATerm t, ATerm h_92 (ATerm))
{
  ATerm j_17 = NULL,l_17 = NULL,p_17 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm l_10;
    l_10 = t;
    {
      ATerm k_17 = NULL;
      t = make_0(t);
      {
        k_17 = t;
        if(((j_17 != NULL) && (j_17 != k_17)))
          _fail(k_17);
        else
          j_17 = k_17;
      }
    }
    t = l_10;
    {
      ATerm m_10;
      m_10 = t;
      {
        ATerm o_17 = NULL;
        ATerm g_1 (ATerm t)
        {
          ATerm h_1 (ATerm t)
          {
            ATerm m_17 = NULL;
            ATerm n_17 = NULL;
            t = term_i_6;
            {
              t = h_92(t);
              {
                n_17 = t;
                if(((m_17 != NULL) && (m_17 != n_17)))
                  _fail(n_17);
                else
                  m_17 = n_17;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(m_17), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, h_1);
          return(t);
        }
        t = map_1(t, g_1);
        {
          t = concat_0(t);
          {
            o_17 = t;
            if(((l_17 != NULL) && (l_17 != o_17)))
              _fail(o_17);
            else
              l_17 = o_17;
          }
        }
      }
      t = m_10;
      {
        ATerm q_17 = NULL;
        t = term_i_6;
        {
          t = h_92(t);
          {
            q_17 = t;
            if(((p_17 != NULL) && (p_17 != q_17)))
              _fail(q_17);
            else
              p_17 = q_17;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(l_17)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(p_17)), not_null(j_17)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  ATerm n_10 = t;
  int o_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_18 = NULL,h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL;
      g_18 = t;
      a_18 :
      if(match_cons(g_18, sym_prod_3))
        {
          h_18 = ATgetArgument(g_18, 0);
          i_18 = ATgetArgument(g_18, 1);
          j_18 = ATgetArgument(g_18, 2);
          {
            if(((d_18 != NULL) && (d_18 != h_18)))
              _fail(h_18);
            else
              d_18 = h_18;
            {
              if(((e_18 != NULL) && (e_18 != i_18)))
                _fail(i_18);
              else
                e_18 = i_18;
              {
                if(((f_18 != NULL) && (f_18 != j_18)))
                  _fail(j_18);
                else
                  f_18 = j_18;
                {
                  t = not_null(f_18);
                  {
                    ATerm i_1 (ATerm t)
                    {
                      ATerm l_18 = NULL,m_18 = NULL;
                      l_18 = t;
                      y_17 :
                      if(match_cons(l_18, sym_cons_1))
                        {
                          m_18 = ATgetArgument(l_18, 0);
                          if(((b_18 != NULL) && (b_18 != m_18)))
                            _fail(m_18);
                          else
                            b_18 = m_18;
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
                    t = not_null(d_18);
                    {
                      ATerm j_1 (ATerm t)
                      {
                        t = not_null(b_18);
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
          if(match_cons(g_18, sym_prod_fun_4))
            {
              h_18 = ATgetArgument(g_18, 0);
              i_18 = ATgetArgument(g_18, 1);
              j_18 = ATgetArgument(g_18, 2);
              k_18 = ATgetArgument(g_18, 3);
              {
                ATerm n_18 = NULL;
                if(((c_18 != NULL) && (c_18 != h_18)))
                  _fail(h_18);
                else
                  c_18 = h_18;
                {
                  if(((d_18 != NULL) && (d_18 != i_18)))
                    _fail(i_18);
                  else
                    d_18 = i_18;
                  {
                    if(((e_18 != NULL) && (e_18 != j_18)))
                      _fail(j_18);
                    else
                      e_18 = j_18;
                    {
                      if(((f_18 != NULL) && (f_18 != k_18)))
                        _fail(k_18);
                      else
                        f_18 = k_18;
                      {
                        ATerm o_18 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_10)), not_null(d_18)), (ATerm) ATinsert(ATinsert(ATempty, term_q_10), (ATerm) ATmakeAppl(sym_lit_1, not_null(c_18))));
                        {
                          t = concat_0(t);
                          {
                            o_18 = t;
                            if(((n_18 != NULL) && (n_18 != o_18)))
                              _fail(o_18);
                            else
                              n_18 = o_18;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(n_18), not_null(e_18), not_null(f_18));
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
      LocalPopChoice(o_10);
    }
  else
    {
      t = n_10;
      {
        ATerm k_1 (ATerm t)
        {
          ATerm z_10 = t;
          if((PushChoice() == 0))
            {
              ATerm l_1 (ATerm t)
              {
                t = term_c_11;
                return(t);
              }
              t = has_option_1(t, l_1);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = z_10;
            }
          {
            ATerm m_1 (ATerm t)
            {
              t = term_d_11;
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
ATerm at_last_1 (ATerm t, ATerm w_83 (ATerm))
{
  ATerm t_18 (ATerm t)
  {
    ATerm e_11 = t;
    int f_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = w_83(t);
        LocalPopChoice(f_11);
      }
    else
      {
        t = e_11;
        t = Cons_2(t, _id, t_18);
      }
    return(t);
  }
  t = t_18(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL;
  w_18 = t;
  v_18 :
  if(((ATgetType(w_18) == AT_LIST) && ((ATermList) w_18 != ATempty)))
    {
      x_18 = ATgetFirst((ATermList) w_18);
      y_18 = (ATerm) ATgetNext((ATermList) w_18);
      t = not_null(y_18);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  d_19 :
  if(((ATgetType(e_19) == AT_LIST) && ((ATermList) e_19 != ATempty)))
    {
      f_19 = ATgetFirst((ATermList) e_19);
      g_19 = (ATerm) ATgetNext((ATermList) e_19);
      t = not_null(f_19);
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
    ATerm g_11;
    g_11 = t;
    {
      ATerm p_19 = NULL;
      t = Hd_0(t);
      {
        p_19 = t;
        k_19 :
        if(!(match_int(p_19, 34)))
          {
            _fail(t);
          }
      }
    }
    t = g_11;
    {
      t = Tl_0(t);
      {
        ATerm n_1 (ATerm t)
        {
          ATerm q_19 = NULL,r_19 = NULL,s_19 = NULL;
          q_19 = t;
          m_19 :
          if(((ATgetType(q_19) == AT_LIST) && ((ATermList) q_19 != ATempty)))
            {
              r_19 = ATgetFirst((ATermList) q_19);
              s_19 = (ATerm) ATgetNext((ATermList) q_19);
              n_19 :
              if(match_int(r_19, 34))
                {
                  o_19 :
                  if(((ATermList) s_19 == ATempty))
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
ATerm foldr_3 (ATerm t, ATerm p_77 (ATerm), ATerm q_77 (ATerm), ATerm r_77 (ATerm))
{
  ATerm h_11 = t;
  int p_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = p_77(t);
      LocalPopChoice(p_11);
    }
  else
    {
      t = h_11;
      {
        ATerm y_19 = NULL,z_19 = NULL,a_20 = NULL;
        y_19 = t;
        x_19 :
        if(((ATgetType(y_19) == AT_LIST) && ((ATermList) y_19 != ATempty)))
          {
            z_19 = ATgetFirst((ATermList) y_19);
            a_20 = (ATerm) ATgetNext((ATermList) y_19);
            {
              ATerm d_20 = NULL,f_20 = NULL;
              ATerm q_11;
              q_11 = t;
              {
                ATerm e_20 = NULL;
                t = not_null(z_19);
                {
                  t = r_77(t);
                  {
                    e_20 = t;
                    if(((d_20 != NULL) && (d_20 != e_20)))
                      _fail(e_20);
                    else
                      d_20 = e_20;
                  }
                }
              }
              t = q_11;
              {
                ATerm g_20 = NULL;
                t = not_null(a_20);
                {
                  t = foldr_3(t, p_77, q_77, r_77);
                  {
                    g_20 = t;
                    if(((f_20 != NULL) && (f_20 != g_20)))
                      _fail(g_20);
                    else
                      f_20 = g_20;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_20), not_null(f_20));
                  t = q_77(t);
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
ATerm crush_3 (ATerm t, ATerm e_79 (ATerm), ATerm f_79 (ATerm), ATerm g_79 (ATerm))
{
  ATerm o_20 = NULL;
  ATerm q_20 = NULL;
  o_20 = t;
  {
    ATerm r_20 = NULL;
    ATerm t_20 = NULL,u_20 = NULL,v_20 = NULL;
    t = not_null(o_20);
    {
      r_20 = t;
      {
        t = SSL_explode_term(not_null(r_20));
        {
          t_20 = t;
          n_20 :
          if(match_cons(t_20, sym__2))
            {
              u_20 = ATgetArgument(t_20, 0);
              v_20 = ATgetArgument(t_20, 1);
              if(((q_20 != NULL) && (q_20 != v_20)))
                _fail(v_20);
              else
                q_20 = v_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(q_20);
      t = foldr_3(t, e_79, f_79, g_79);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm y_65 (ATerm))
{
  ATerm c_21 (ATerm t)
  {
    ATerm r_11 = t;
    int u_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm a_21 = NULL;
        t = y_65(t);
        {
          a_21 = t;
          t = (ATerm) ATinsert(ATempty, not_null(a_21));
        }
        LocalPopChoice(u_11);
      }
    else
      {
        t = r_11;
        {
          ATerm o_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, o_1, conc_0, c_21);
        }
      }
    return(t);
  }
  t = c_21(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm w_22 = NULL;
  ATerm p_1 (ATerm t)
  {
    ATerm g_22 = NULL,h_22 = NULL;
    g_22 = t;
    f_21 :
    if(match_cons(g_22, sym_context_free_syntax_1))
      {
        h_22 = ATgetArgument(g_22, 0);
        t = not_null(h_22);
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
          ATerm k_22 = NULL,l_22 = NULL;
          k_22 = t;
          m_21 :
          if(match_cons(k_22, sym_cons_1))
            {
              l_22 = ATgetArgument(k_22, 0);
              {
                ATerm n_22 = NULL;
                ATerm o_22 = NULL;
                t = not_null(l_22);
                {
                  t = de_quote_0(t);
                  {
                    o_22 = t;
                    if(((n_22 != NULL) && (n_22 != o_22)))
                      _fail(o_22);
                    else
                      n_22 = o_22;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_cons_1, not_null(n_22));
              }
            }
          else
            {
              if(match_cons(k_22, sym_lit_1))
                {
                  l_22 = ATgetArgument(k_22, 0);
                  {
                    ATerm q_22 = NULL;
                    ATerm r_22 = NULL;
                    t = not_null(l_22);
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
                    t = (ATerm) ATmakeAppl(sym_lit_1, not_null(q_22));
                  }
                }
              else
                {
                  if(match_cons(k_22, sym_sort_1))
                    {
                      l_22 = ATgetArgument(k_22, 0);
                      {
                        ATerm t_22 = NULL;
                        ATerm u_22 = NULL;
                        t = not_null(l_22);
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
                        t = (ATerm) ATmakeAppl(sym_sort_1, not_null(t_22));
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
            ATerm v_11 = t;
            if((PushChoice() == 0))
              {
                ATerm v_22 = NULL;
                v_22 = t;
                n_21 :
                if(((ATermList) v_22 == ATempty))
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
                t = v_11;
              }
            return(t);
          }
          t = filter_1(t, s_1);
          {
            t = concat_0(t);
            {
              w_22 = t;
              {
                t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(w_22));
                {
                  ATerm t_1 (ATerm t)
                  {
                    ATerm u_1 (ATerm t)
                    {
                      ATerm y_22 = NULL,z_22 = NULL,a_23 = NULL;
                      z_22 = t;
                      f_22 :
                      if(match_cons(z_22, sym_Arg_1))
                        {
                          a_23 = ATgetArgument(z_22, 0);
                          {
                            ATerm c_23 = NULL;
                            ATerm d_23 = NULL;
                            t = not_null(a_23);
                            {
                              t = int_to_string_0(t);
                              {
                                d_23 = t;
                                if(((c_23 != NULL) && (c_23 != d_23)))
                                  _fail(d_23);
                                else
                                  c_23 = d_23;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(c_23));
                          }
                        }
                      else
                        {
                          if(match_cons(z_22, sym_selector_2))
                            {
                              a_23 = ATgetArgument(z_22, 0);
                              y_22 = ATgetArgument(z_22, 1);
                              {
                                ATerm g_23 = NULL;
                                ATerm h_23 = NULL;
                                t = not_null(a_23);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    h_23 = t;
                                    if(((g_23 != NULL) && (g_23 != h_23)))
                                      _fail(h_23);
                                    else
                                      g_23 = h_23;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_selector_2, not_null(g_23), not_null(y_22));
                              }
                            }
                          else
                            {
                              if(match_cons(z_22, sym_S_1))
                                {
                                  a_23 = ATgetArgument(z_22, 0);
                                  {
                                    ATerm j_23 = NULL;
                                    ATerm k_23 = NULL;
                                    t = not_null(a_23);
                                    {
                                      t = quote_0(t);
                                      {
                                        k_23 = t;
                                        if(((j_23 != NULL) && (j_23 != k_23)))
                                          _fail(k_23);
                                        else
                                          j_23 = k_23;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(j_23));
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
ATerm _2 (ATerm t, ATerm n_53 (ATerm), ATerm o_53 (ATerm))
{
  ATerm f_24 = NULL,g_24 = NULL,h_24 = NULL;
  f_24 = t;
  e_24 :
  if(match_cons(f_24, sym__2))
    {
      g_24 = ATgetArgument(f_24, 0);
      h_24 = ATgetArgument(f_24, 1);
      {
        ATerm l_24 = NULL,n_24 = NULL;
        ATerm m_24 = NULL;
        t = SSLgetAnnotations(not_null(f_24));
        {
          m_24 = t;
          if(((l_24 != NULL) && (l_24 != m_24)))
            _fail(m_24);
          else
            l_24 = m_24;
        }
        {
          t = not_null(g_24);
          {
            ATerm p_24 = NULL;
            t = n_53(t);
            {
              n_24 = t;
              {
                t = not_null(h_24);
                {
                  ATerm r_24 = NULL;
                  t = o_53(t);
                  {
                    p_24 = t;
                    {
                      ATerm s_24 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(n_24), not_null(p_24)), not_null(l_24));
                      {
                        s_24 = t;
                        if(((r_24 != NULL) && (r_24 != s_24)))
                          _fail(s_24);
                        else
                          r_24 = s_24;
                      }
                      t = not_null(r_24);
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
  ATerm w_11;
  w_11 = t;
  {
    ATerm z_24 = NULL;
    ATerm a_25 = NULL;
    a_25 = t;
    if(((z_24 != NULL) && (z_24 != a_25)))
      _fail(a_25);
    else
      z_24 = a_25;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_11, not_null(z_24));
      t = printnl_0(t);
    }
  }
  t = w_11;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm y_11;
  y_11 = t;
  {
    t = error_0(t);
    {
      t = term_w_7;
      t = exit_0(t);
    }
  }
  t = y_11;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm e_89 (ATerm))
{
  ATerm c_25 (ATerm t)
  {
    ATerm z_11 = t;
    int a_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_89(t);
        LocalPopChoice(a_12);
      }
    else
      {
        t = z_11;
        t = _one(t, c_25);
      }
    return(t);
  }
  t = c_25(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm n_25 = NULL,o_25 = NULL,p_25 = NULL;
  n_25 = t;
  m_25 :
  if(match_cons(n_25, sym__2))
    {
      o_25 = ATgetArgument(n_25, 0);
      p_25 = ATgetArgument(n_25, 1);
      {
        ATerm b_12;
        b_12 = t;
        {
          t = not_null(p_25);
          {
            ATerm v_1 (ATerm t)
            {
              ATerm s_25 = NULL;
              s_25 = t;
              if(((o_25 != NULL) && (o_25 != s_25)))
                _fail(s_25);
              else
                o_25 = s_25;
              return(t);
            }
            t = oncetd_1(t, v_1);
          }
        }
        t = b_12;
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
  t = term_i_12;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm x_25 = NULL;
  ATerm c_26 = NULL;
  x_25 = t;
  {
    ATerm d_26 = NULL;
    t = get_options_0(t);
    {
      d_26 = t;
      {
        if(((c_26 != NULL) && (c_26 != d_26)))
          _fail(d_26);
        else
          c_26 = d_26;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(x_25), not_null(c_26));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_i_6;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm v_72 (ATerm))
{
  ATerm m_12;
  m_12 = t;
  {
    t = term_i_6;
    {
      t = v_72(t);
      t = check_option_0(t);
    }
  }
  t = m_12;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm o_12 = t;
  int r_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm w_1 (ATerm t)
      {
        t = term_s_12;
        return(t);
      }
      t = has_option_1(t, w_1);
      {
        t = (ATerm) ATinsert(ATempty, term_t_12);
        t = fatal_error_0(t);
      }
      LocalPopChoice(r_12);
    }
  else
    {
      t = o_12;
      {
        t = (ATerm) ATinsert(ATempty, term_u_12);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm o_65 (ATerm))
{
  ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
  o_26 = t;
  m_26 :
  if(match_cons(o_26, sym__2))
    {
      p_26 = ATgetArgument(o_26, 0);
      q_26 = ATgetArgument(o_26, 1);
      n_26 :
      if(match_string(p_26, "in-type"))
        {
          ATerm s_26 = NULL,u_26 = NULL;
          ATerm v_12;
          v_12 = t;
          {
            ATerm v_26 = NULL;
            ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL,a_27 = NULL,b_27 = NULL;
            t = not_null(q_26);
            {
              v_26 = t;
              {
                t = SSL_explode_term(not_null(v_26));
                {
                  x_26 = t;
                  j_26 :
                  if(match_cons(x_26, sym__2))
                    {
                      y_26 = ATgetArgument(x_26, 0);
                      z_26 = ATgetArgument(x_26, 1);
                      k_26 :
                      if(((ATgetType(z_26) == AT_LIST) && ((ATermList) z_26 != ATempty)))
                        {
                          a_27 = ATgetFirst((ATermList) z_26);
                          b_27 = (ATerm) ATgetNext((ATermList) z_26);
                          l_26 :
                          if(((ATermList) b_27 == ATempty))
                            {
                              {
                                if(((u_26 != NULL) && (u_26 != y_26)))
                                  _fail(y_26);
                                else
                                  u_26 = y_26;
                                if(((s_26 != NULL) && (s_26 != a_27)))
                                  _fail(a_27);
                                else
                                  s_26 = a_27;
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
          t = v_12;
          {
            t = not_null(u_26);
            {
              ATerm w_12 = t;
              int x_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = o_65(t);
                  LocalPopChoice(x_12);
                }
              else
                {
                  t = w_12;
                  t = type_failure_0(t);
                }
            }
            t = not_null(s_26);
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
  ATerm h_27 = NULL,i_27 = NULL,j_27 = NULL;
  h_27 = t;
  g_27 :
  if(match_cons(h_27, sym__2))
    {
      i_27 = ATgetArgument(h_27, 0);
      j_27 = ATgetArgument(h_27, 1);
      t = SSL_mkterm(not_null(i_27), not_null(j_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  s_27 = t;
  q_27 :
  if(match_cons(s_27, sym__2))
    {
      t_27 = ATgetArgument(s_27, 0);
      u_27 = ATgetArgument(s_27, 1);
      r_27 :
      if(match_string(t_27, "out-type"))
        {
          ATerm w_27 = NULL;
          ATerm x_27 = NULL,z_27 = NULL;
          ATerm y_27 = NULL;
          t = term_i_6;
          {
            t = p_65(t);
            {
              y_27 = t;
              if(((x_27 != NULL) && (x_27 != y_27)))
                _fail(y_27);
              else
                x_27 = y_27;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(x_27), (ATerm) ATinsert(ATempty, not_null(u_27)));
            {
              t = mkterm_0(t);
              {
                z_27 = t;
                if(((w_27 != NULL) && (w_27 != z_27)))
                  _fail(z_27);
                else
                  w_27 = z_27;
              }
            }
          }
          t = not_null(w_27);
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
  ATerm y_12 = t;
  int z_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_1 (ATerm t)
      {
        ATerm f_28 = NULL;
        f_28 = t;
        d_28 :
        if(!(match_string(f_28, "out-type")))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, x_1, _id);
      t = OutId_1(t, k_0);
      LocalPopChoice(z_12);
    }
  else
    {
      t = y_12;
      {
        ATerm y_1 (ATerm t)
        {
          ATerm o_28 = NULL;
          o_28 = t;
          e_28 :
          if(!(match_string(o_28, "in-type")))
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
ATerm termid_set_p__1 (ATerm t, ATerm w_65 (ATerm))
{
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL;
  u_28 = t;
  r_28 :
  if(match_cons(u_28, sym__2))
    {
      v_28 = ATgetArgument(u_28, 0);
      w_28 = ATgetArgument(u_28, 1);
      {
        ATerm z_28 = NULL;
        ATerm a_29 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_a_13, not_null(w_28));
        {
          t = w_65(t);
          {
            a_29 = t;
            if(((z_28 != NULL) && (z_28 != a_29)))
              _fail(a_29);
            else
              z_28 = a_29;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_28), not_null(z_28));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm s_91 (ATerm))
{
  ATerm f_13 = t;
  int g_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = s_91(t);
      LocalPopChoice(g_13);
    }
  else
    {
      t = f_13;
      {
      }
    }
  return(t);
}
ATerm termid_check_p__1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm i_29 = NULL,j_29 = NULL,k_29 = NULL;
  i_29 = t;
  h_29 :
  if(match_cons(i_29, sym__2))
    {
      j_29 = ATgetArgument(i_29, 0);
      k_29 = ATgetArgument(i_29, 1);
      {
        ATerm b_30 = NULL;
        ATerm c_30 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_h_13, not_null(k_29));
        {
          t = u_65(t);
          {
            c_30 = t;
            if(((b_30 != NULL) && (b_30 != c_30)))
              _fail(c_30);
            else
              b_30 = c_30;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(j_29), not_null(b_30));
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
  ATerm h_30 = NULL;
  ATerm l_13;
  l_13 = t;
  {
    ATerm z_1 (ATerm t)
    {
      ATerm j_30 = NULL,k_30 = NULL;
      j_30 = t;
      g_30 :
      if(match_cons(j_30, sym_Program_1))
        {
          k_30 = ATgetArgument(j_30, 0);
          if(((h_30 != NULL) && (h_30 != k_30)))
            _fail(k_30);
          else
            h_30 = k_30;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, z_1);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_q_13), not_null(h_30)), term_n_13));
      {
        t = printnl_0(t);
        {
          t = term_w_7;
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
  ATerm o_30 = NULL,p_30 = NULL,q_30 = NULL;
  o_30 = t;
  n_30 :
  if(match_cons(o_30, sym__2))
    {
      p_30 = ATgetArgument(o_30, 0);
      q_30 = ATgetArgument(o_30, 1);
      {
        ATerm r_13;
        r_13 = t;
        t = SSL_printnl(not_null(p_30), not_null(q_30));
        t = r_13;
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
  ATerm w_30 = NULL,x_30 = NULL,y_30 = NULL;
  w_30 = t;
  v_30 :
  if(match_cons(w_30, sym__2))
    {
      x_30 = ATgetArgument(w_30, 0);
      y_30 = ATgetArgument(w_30, 1);
      {
        t = not_null(x_30);
        {
          ATerm a_2 (ATerm t)
          {
            t = not_null(y_30);
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
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    t = conc_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm q_73 (ATerm))
{
  ATerm s_13;
  s_13 = t;
  {
    ATerm e_31 = NULL,g_31 = NULL;
    ATerm t_13;
    t_13 = t;
    {
      ATerm f_31 = NULL;
      t = q_73(t);
      {
        f_31 = t;
        if(((e_31 != NULL) && (e_31 != f_31)))
          _fail(f_31);
        else
          e_31 = f_31;
      }
    }
    t = t_13;
    {
      ATerm h_31 = NULL;
      h_31 = t;
      if(((g_31 != NULL) && (g_31 != h_31)))
        _fail(h_31);
      else
        g_31 = h_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_31)), not_null(e_31)));
        t = printnl_0(t);
      }
    }
  }
  t = s_13;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm l_31 = NULL;
  l_31 = t;
  t = SSL_is_string(not_null(l_31));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm u_13 = t;
  int v_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(v_13);
    }
  else
    {
      t = u_13;
      {
        ATerm w_13 = t;
        int y_13 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_2 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, b_2);
            LocalPopChoice(y_13);
          }
        else
          {
            t = w_13;
            {
              ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
              u_31 = t;
              t_31 :
              if(match_cons(u_31, sym_Path_1))
                {
                  v_31 = ATgetArgument(u_31, 0);
                  t = not_null(v_31);
                }
              else
                {
                  if(match_cons(u_31, sym_Var_1))
                    {
                      v_31 = ATgetArgument(u_31, 0);
                      {
                        t = not_null(v_31);
                        {
                          ATerm z_13 = t;
                          int a_14 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_14);
                            }
                          else
                            {
                              t = z_13;
                              {
                                ATerm c_2 (ATerm t)
                                {
                                  t = term_b_14;
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
                      if(match_cons(u_31, sym_Prefix_2))
                        {
                          v_31 = ATgetArgument(u_31, 0);
                          w_31 = ATgetArgument(u_31, 1);
                          {
                            ATerm b_32 = NULL,d_32 = NULL;
                            ATerm c_14;
                            c_14 = t;
                            {
                              ATerm c_32 = NULL;
                              t = not_null(v_31);
                              {
                                t = eval_config_0(t);
                                {
                                  c_32 = t;
                                  if(((b_32 != NULL) && (b_32 != c_32)))
                                    _fail(c_32);
                                  else
                                    b_32 = c_32;
                                }
                              }
                            }
                            t = c_14;
                            {
                              ATerm e_32 = NULL;
                              t = not_null(w_31);
                              {
                                t = eval_config_0(t);
                                {
                                  e_32 = t;
                                  if(((d_32 != NULL) && (d_32 != e_32)))
                                    _fail(e_32);
                                  else
                                    d_32 = e_32;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_32), not_null(d_32));
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
  ATerm o_32 = NULL;
  o_32 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_u_14, not_null(o_32));
    {
      t = table_get_0(t);
      {
        ATerm d_2 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm v_14;
            v_14 = t;
            {
              ATerm v_32 = NULL;
              ATerm w_32 = NULL;
              w_32 = t;
              if(((v_32 != NULL) && (v_32 != w_32)))
                _fail(w_32);
              else
                v_32 = w_32;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_u_14, not_null(o_32), not_null(v_32));
                t = table_put_0(t);
              }
            }
            t = v_14;
          }
          return(t);
        }
        t = try_1(t, d_2);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm a_71 (ATerm))
{
  ATerm e_2 (ATerm t)
  {
    ATerm w_14;
    w_14 = t;
    {
      ATerm a_33 = NULL;
      ATerm b_33 = NULL;
      t = term_x_14;
      {
        t = get_config_0(t);
        {
          b_33 = t;
          if(((a_33 != NULL) && (a_33 != b_33)))
            _fail(b_33);
          else
            a_33 = b_33;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_33), term_y_14);
        t = geq_0(t);
      }
    }
    t = w_14;
    t = a_71(t);
    return(t);
  }
  t = try_1(t, e_2);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATempty, term_z_14));
  {
    t = printnl_0(t);
    {
      t = term_w_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm e_33 = NULL;
  e_33 = t;
  t = SSL_TicksToSeconds(not_null(e_33));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm j_33 = NULL,k_33 = NULL,l_33 = NULL;
  j_33 = t;
  i_33 :
  if(match_cons(j_33, sym__2))
    {
      k_33 = ATgetArgument(j_33, 0);
      l_33 = ATgetArgument(j_33, 1);
      {
        ATerm a_15 = t;
        int b_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(k_33), not_null(l_33));
            LocalPopChoice(b_15);
          }
        else
          {
            t = a_15;
            t = SSL_addr(not_null(k_33), not_null(l_33));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  ATerm c_15 = t;
  int d_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = n_77(t);
      LocalPopChoice(d_15);
    }
  else
    {
      t = c_15;
      {
        ATerm s_33 = NULL,t_33 = NULL,w_33 = NULL;
        s_33 = t;
        r_33 :
        if(((ATgetType(s_33) == AT_LIST) && ((ATermList) s_33 != ATempty)))
          {
            t_33 = ATgetFirst((ATermList) s_33);
            w_33 = (ATerm) ATgetNext((ATermList) s_33);
            {
              ATerm z_33 = NULL;
              ATerm a_34 = NULL;
              t = not_null(w_33);
              {
                t = foldr_2(t, n_77, o_77);
                {
                  a_34 = t;
                  if(((z_33 != NULL) && (z_33 != a_34)))
                    _fail(a_34);
                  else
                    z_33 = a_34;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(t_33), not_null(z_33));
                t = o_77(t);
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
ATerm crush_2 (ATerm t, ATerm c_79 (ATerm), ATerm d_79 (ATerm))
{
  ATerm h_34 = NULL;
  ATerm j_34 = NULL;
  h_34 = t;
  {
    ATerm k_34 = NULL;
    ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
    t = not_null(h_34);
    {
      k_34 = t;
      {
        t = SSL_explode_term(not_null(k_34));
        {
          m_34 = t;
          g_34 :
          if(match_cons(m_34, sym__2))
            {
              n_34 = ATgetArgument(m_34, 0);
              o_34 = ATgetArgument(m_34, 1);
              if(((j_34 != NULL) && (j_34 != o_34)))
                _fail(o_34);
              else
                j_34 = o_34;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(j_34);
      t = foldr_2(t, c_79, d_79);
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
    ATerm f_2 (ATerm t)
    {
      t = term_e_15;
      return(t);
    }
    t = crush_2(t, f_2, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm w_34 = NULL,x_34 = NULL,y_34 = NULL;
  w_34 = t;
  t_34 :
  if(match_cons(w_34, sym__2))
    {
      x_34 = ATgetArgument(w_34, 0);
      y_34 = ATgetArgument(w_34, 1);
      {
        ATerm i_15;
        i_15 = t;
        {
          ATerm j_15 = t;
          int n_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(x_34), not_null(y_34));
              LocalPopChoice(n_15);
            }
          else
            {
              t = j_15;
              t = SSL_gtr(not_null(x_34), not_null(y_34));
            }
        }
        t = i_15;
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
  ATerm h_35 = NULL;
  ATerm q_15 = t;
  int r_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
      i_35 = t;
      g_35 :
      if(match_cons(i_35, sym__2))
        {
          j_35 = ATgetArgument(i_35, 0);
          k_35 = ATgetArgument(i_35, 1);
          {
            if(((h_35 != NULL) && (h_35 != j_35)))
              _fail(j_35);
            else
              h_35 = j_35;
            if(((h_35 != NULL) && (h_35 != k_35)))
              _fail(k_35);
            else
              h_35 = k_35;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(r_15);
    }
  else
    {
      t = q_15;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm z_70 (ATerm))
{
  ATerm g_2 (ATerm t)
  {
    ATerm s_15;
    s_15 = t;
    {
      ATerm n_35 = NULL;
      ATerm o_35 = NULL;
      t = term_x_14;
      {
        t = get_config_0(t);
        {
          o_35 = t;
          if(((n_35 != NULL) && (n_35 != o_35)))
            _fail(o_35);
          else
            n_35 = o_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_35), term_w_7);
        t = geq_0(t);
      }
    }
    t = s_15;
    t = z_70(t);
    return(t);
  }
  t = try_1(t, g_2);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm h_2 (ATerm t)
  {
    ATerm s_35 = NULL,u_35 = NULL;
    ATerm t_15;
    t_15 = t;
    {
      ATerm t_35 = NULL;
      t = run_time_0(t);
      {
        t_35 = t;
        if(((s_35 != NULL) && (s_35 != t_35)))
          _fail(t_35);
        else
          s_35 = t_35;
      }
    }
    t = t_15;
    {
      ATerm v_35 = NULL;
      t = term_u_15;
      {
        t = get_config_0(t);
        {
          v_35 = t;
          if(((u_35 != NULL) && (u_35 != v_35)))
            _fail(v_35);
          else
            u_35 = v_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_15), not_null(s_35)), term_v_15), not_null(u_35)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, h_2);
  {
    t = term_e_15;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm a_36 = NULL,b_36 = NULL,c_36 = NULL;
  a_36 = t;
  z_35 :
  if(match_cons(a_36, sym__2))
    {
      b_36 = ATgetArgument(a_36, 0);
      c_36 = ATgetArgument(a_36, 1);
      t = SSL_WriteToTextFile(not_null(b_36), not_null(c_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym__2))
    {
      l_36 = ATgetArgument(k_36, 0);
      m_36 = ATgetArgument(k_36, 1);
      t = SSL_WriteToBinaryFile(not_null(l_36), not_null(m_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm x_36 = NULL;
  ATerm x_15;
  x_15 = t;
  {
    ATerm i_2 (ATerm t)
    {
      ATerm y_15 = t;
      int d_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_2 (ATerm t)
          {
            ATerm y_36 = NULL,z_36 = NULL;
            y_36 = t;
            u_36 :
            if(match_cons(y_36, sym_Output_1))
              {
                z_36 = ATgetArgument(y_36, 0);
                if(((x_36 != NULL) && (x_36 != z_36)))
                  _fail(z_36);
                else
                  x_36 = z_36;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, j_2);
          LocalPopChoice(d_16);
        }
      else
        {
          t = y_15;
          {
            ATerm a_37 = NULL;
            t = term_f_16;
            {
              a_37 = t;
              if(((x_36 != NULL) && (x_36 != a_37)))
                _fail(a_37);
              else
                x_36 = a_37;
            }
          }
        }
      return(t);
    }
    t = _2(t, i_2, _id);
  }
  t = x_15;
  {
    ATerm k_2 (ATerm t)
    {
      ATerm l_2 (ATerm t)
      {
        t = not_null(x_36);
        return(t);
      }
      t = split_2(t, l_2, _id);
      return(t);
    }
    t = _2(t, _id, k_2);
    {
      ATerm s_16 = t;
      int t_16 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm m_2 (ATerm t)
          {
            ATerm n_2 (ATerm t)
            {
              ATerm b_37 = NULL;
              b_37 = t;
              w_36 :
              if(!(match_cons(b_37, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, n_2);
            return(t);
          }
          t = _2(t, m_2, WriteToBinaryFile_0);
          LocalPopChoice(t_16);
        }
      else
        {
          t = s_16;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_73 (ATerm))
{
  ATerm h_37 = NULL,j_37 = NULL,k_37 = NULL,l_37 = NULL;
  ATerm u_16;
  u_16 = t;
  t = dtime_0(t);
  t = u_16;
  {
    t = a_73(t);
    {
      ATerm v_16;
      v_16 = t;
      {
        ATerm i_37 = NULL;
        t = dtime_0(t);
        {
          i_37 = t;
          if(((h_37 != NULL) && (h_37 != i_37)))
            _fail(i_37);
          else
            h_37 = i_37;
        }
      }
      t = v_16;
      {
        j_37 = t;
        g_37 :
        if(match_cons(j_37, sym__2))
          {
            k_37 = ATgetArgument(j_37, 0);
            l_37 = ATgetArgument(j_37, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(k_37)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(h_37))), not_null(l_37));
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
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  t = SSL_ReadFromFile(not_null(r_37));
  return(t);
}
ATerm split_2 (ATerm t, ATerm b_76 (ATerm), ATerm c_76 (ATerm))
{
  ATerm w_37 = NULL,y_37 = NULL;
  ATerm w_16;
  w_16 = t;
  {
    ATerm x_37 = NULL;
    t = b_76(t);
    {
      x_37 = t;
      if(((w_37 != NULL) && (w_37 != x_37)))
        _fail(x_37);
      else
        w_37 = x_37;
    }
  }
  t = w_16;
  {
    ATerm z_37 = NULL;
    t = c_76(t);
    {
      z_37 = t;
      if(((y_37 != NULL) && (y_37 != z_37)))
        _fail(z_37);
      else
        y_37 = z_37;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(w_37), not_null(y_37));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm f_38 = NULL;
  ATerm x_16;
  x_16 = t;
  {
    ATerm c_17 = t;
    int d_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm o_2 (ATerm t)
        {
          ATerm g_38 = NULL,h_38 = NULL;
          g_38 = t;
          d_38 :
          if(match_cons(g_38, sym_Input_1))
            {
              h_38 = ATgetArgument(g_38, 0);
              if(((f_38 != NULL) && (f_38 != h_38)))
                _fail(h_38);
              else
                f_38 = h_38;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, o_2);
        LocalPopChoice(d_17);
      }
    else
      {
        t = c_17;
        {
          ATerm i_38 = NULL;
          t = term_e_17;
          {
            i_38 = t;
            if(((f_38 != NULL) && (f_38 != i_38)))
              _fail(i_38);
            else
              f_38 = i_38;
          }
        }
      }
  }
  t = x_16;
  {
    ATerm s_2 (ATerm t)
    {
      t = not_null(f_38);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, s_2);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_38 = NULL;
  p_38 = t;
  o_38 :
  if(match_cons(p_38, sym_Version_0))
    {
      ATerm r_38 = NULL,t_38 = NULL;
      ATerm f_17;
      f_17 = t;
      {
        ATerm s_38 = NULL;
        t = SSLgetAnnotations(not_null(p_38));
        {
          s_38 = t;
          if(((r_38 != NULL) && (r_38 != s_38)))
            _fail(s_38);
          else
            r_38 = s_38;
        }
      }
      t = f_17;
      {
        ATerm u_38 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_38));
        {
          u_38 = t;
          if(((t_38 != NULL) && (t_38 != u_38)))
            _fail(u_38);
          else
            t_38 = u_38;
        }
        t = not_null(t_38);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm y_72 (ATerm))
{
  ATerm t_2 (ATerm t)
  {
    ATerm g_17 = t;
    int h_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_17);
      }
    else
      {
        t = g_17;
        {
          ATerm i_17 = t;
          int r_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(r_17);
            }
          else
            {
              t = i_17;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, t_2);
  t = y_72(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_38 = NULL;
  z_38 = t;
  t = SSL_table_create(not_null(z_38));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_39 = NULL;
  d_39 = t;
  {
    ATerm s_17;
    s_17 = t;
    {
      t = term_g_12;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_12, term_h_12, not_null(d_39));
          t = table_put_0(t);
        }
      }
    }
    t = s_17;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm h_39 = NULL;
  h_39 = t;
  t = SSL_string_to_int(not_null(h_39));
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm n_39 = NULL,o_39 = NULL,p_39 = NULL,q_39 = NULL;
  n_39 = t;
  m_39 :
  if(match_cons(n_39, sym__3))
    {
      o_39 = ATgetArgument(n_39, 0);
      p_39 = ATgetArgument(n_39, 1);
      q_39 = ATgetArgument(n_39, 2);
      {
        ATerm t_17;
        t_17 = t;
        {
          ATerm u_39 = NULL;
          ATerm v_39 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_39), not_null(p_39));
          {
            ATerm u_17 = t;
            int v_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(v_17);
              }
            else
              {
                t = u_17;
                t = (ATerm) ATempty;
              }
            {
              v_39 = t;
              if(((u_39 != NULL) && (u_39 != v_39)))
                _fail(v_39);
              else
                u_39 = v_39;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(o_39), not_null(p_39), (ATerm) ATinsert(CheckATermList(not_null(u_39)), not_null(q_39)));
            t = table_put_0(t);
          }
        }
        t = t_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm z_39 = NULL;
  ATerm a_40 = NULL;
  t = term_i_6;
  {
    t = d_70(t);
    {
      a_40 = t;
      if(((z_39 != NULL) && (z_39 != a_40)))
        _fail(a_40);
      else
        z_39 = a_40;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_w_17, term_x_17, not_null(z_39));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL,j_40 = NULL,k_40 = NULL,l_40 = NULL;
  h_40 = t;
  f_40 :
  if(match_string(h_40, "register-usage-info"))
    {
      t = register_usage_1(t, i_0);
    }
  else
    {
      if(((ATgetType(h_40) == AT_LIST) && ((ATermList) h_40 != ATempty)))
        {
          i_40 = ATgetFirst((ATermList) h_40);
          j_40 = (ATerm) ATgetNext((ATermList) h_40);
          g_40 :
          if(((ATgetType(j_40) == AT_LIST) && ((ATermList) j_40 != ATempty)))
            {
              k_40 = ATgetFirst((ATermList) j_40);
              l_40 = (ATerm) ATgetNext((ATermList) j_40);
              {
                ATerm p_40 = NULL;
                ATerm z_17;
                z_17 = t;
                {
                  t = not_null(i_40);
                  t = g_0(t);
                }
                t = z_17;
                {
                  ATerm q_40 = NULL;
                  t = not_null(k_40);
                  {
                    t = h_0(t);
                    {
                      q_40 = t;
                      if(((p_40 != NULL) && (p_40 != q_40)))
                        _fail(q_40);
                      else
                        p_40 = q_40;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_40)), not_null(p_40));
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
ATerm io_options_0 (ATerm t)
{
  ATerm p_18 = t;
  int q_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_2 (ATerm t)
      {
        ATerm h_41 = NULL;
        h_41 = t;
        u_40 :
        if(!(match_string(h_41, "-i")))
          {
            if(!(match_string(h_41, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm v_2 (ATerm t)
      {
        ATerm k_41 = NULL;
        ATerm r_18;
        r_18 = t;
        {
          ATerm i_41 = NULL;
          ATerm j_41 = NULL;
          j_41 = t;
          if(((i_41 != NULL) && (i_41 != j_41)))
            _fail(j_41);
          else
            i_41 = j_41;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_s_18, not_null(i_41));
            t = set_config_0(t);
          }
        }
        t = r_18;
        {
          ATerm l_41 = NULL;
          l_41 = t;
          if(((k_41 != NULL) && (k_41 != l_41)))
            _fail(l_41);
          else
            k_41 = l_41;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(k_41));
        }
        return(t);
      }
      ATerm w_2 (ATerm t)
      {
        t = term_u_18;
        return(t);
      }
      t = ArgOption_3(t, u_2, v_2, w_2);
      LocalPopChoice(q_18);
    }
  else
    {
      t = p_18;
      {
        ATerm z_18 = t;
        int a_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_2 (ATerm t)
            {
              ATerm q_41 = NULL;
              q_41 = t;
              x_40 :
              if(!(match_string(q_41, "-o")))
                {
                  if(!(match_string(q_41, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm y_2 (ATerm t)
            {
              ATerm t_41 = NULL;
              ATerm b_19;
              b_19 = t;
              {
                ATerm r_41 = NULL;
                ATerm s_41 = NULL;
                s_41 = t;
                if(((r_41 != NULL) && (r_41 != s_41)))
                  _fail(s_41);
                else
                  r_41 = s_41;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_c_19, not_null(r_41));
                  t = set_config_0(t);
                }
              }
              t = b_19;
              {
                ATerm u_41 = NULL;
                u_41 = t;
                if(((t_41 != NULL) && (t_41 != u_41)))
                  _fail(u_41);
                else
                  t_41 = u_41;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_41));
              }
              return(t);
            }
            ATerm z_2 (ATerm t)
            {
              t = term_h_19;
              return(t);
            }
            t = ArgOption_3(t, x_2, y_2, z_2);
            LocalPopChoice(a_19);
          }
        else
          {
            t = z_18;
            {
              ATerm i_19 = t;
              int j_19 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm a_3 (ATerm t)
                  {
                    ATerm v_41 = NULL;
                    v_41 = t;
                    a_41 :
                    if(!(match_string(v_41, "-S")))
                      {
                        if(!(match_string(v_41, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm b_3 (ATerm t)
                  {
                    t = term_l_19;
                    t = set_config_0(t);
                    t = term_t_19;
                    return(t);
                  }
                  ATerm d_3 (ATerm t)
                  {
                    t = term_u_19;
                    return(t);
                  }
                  t = Option_3(t, a_3, b_3, d_3);
                  LocalPopChoice(j_19);
                }
              else
                {
                  t = i_19;
                  {
                    ATerm v_19 = t;
                    int w_19 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm e_3 (ATerm t)
                        {
                          ATerm w_41 = NULL;
                          w_41 = t;
                          b_41 :
                          if(!(match_string(w_41, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm f_3 (ATerm t)
                        {
                          ATerm z_41 = NULL;
                          ATerm b_20;
                          b_20 = t;
                          {
                            ATerm x_41 = NULL;
                            ATerm y_41 = NULL;
                            t = string_to_int_0(t);
                            {
                              y_41 = t;
                              if(((x_41 != NULL) && (x_41 != y_41)))
                                _fail(y_41);
                              else
                                x_41 = y_41;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_x_14, not_null(x_41));
                              t = set_config_0(t);
                            }
                          }
                          t = b_20;
                          {
                            ATerm a_42 = NULL;
                            a_42 = t;
                            if(((z_41 != NULL) && (z_41 != a_42)))
                              _fail(a_42);
                            else
                              z_41 = a_42;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_41));
                          }
                          return(t);
                        }
                        ATerm g_3 (ATerm t)
                        {
                          t = term_c_20;
                          return(t);
                        }
                        t = ArgOption_3(t, e_3, f_3, g_3);
                        LocalPopChoice(w_19);
                      }
                    else
                      {
                        t = v_19;
                        {
                          ATerm h_20 = t;
                          int i_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm h_3 (ATerm t)
                              {
                                ATerm b_42 = NULL;
                                b_42 = t;
                                e_41 :
                                if(!(match_string(b_42, "-v")))
                                  {
                                    if(!(match_string(b_42, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm k_3 (ATerm t)
                              {
                                t = term_k_20;
                                t = set_config_0(t);
                                t = term_l_20;
                                return(t);
                              }
                              ATerm l_3 (ATerm t)
                              {
                                t = term_m_20;
                                return(t);
                              }
                              t = Option_3(t, h_3, k_3, l_3);
                              LocalPopChoice(i_20);
                            }
                          else
                            {
                              t = h_20;
                              {
                                ATerm p_20 = t;
                                int s_20 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm m_3 (ATerm t)
                                    {
                                      ATerm c_42 = NULL;
                                      c_42 = t;
                                      f_41 :
                                      if(!(match_string(c_42, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm n_3 (ATerm t)
                                    {
                                      t = term_x_20;
                                      t = set_config_0(t);
                                      t = term_y_20;
                                      return(t);
                                    }
                                    ATerm p_3 (ATerm t)
                                    {
                                      t = term_z_20;
                                      return(t);
                                    }
                                    t = Option_3(t, m_3, n_3, p_3);
                                    LocalPopChoice(s_20);
                                  }
                                else
                                  {
                                    t = p_20;
                                    {
                                      ATerm q_3 (ATerm t)
                                      {
                                        ATerm d_42 = NULL;
                                        d_42 = t;
                                        g_41 :
                                        if(!(match_string(d_42, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm r_3 (ATerm t)
                                      {
                                        t = term_d_21;
                                        t = set_config_0(t);
                                        t = term_e_21;
                                        return(t);
                                      }
                                      ATerm t_3 (ATerm t)
                                      {
                                        t = term_g_21;
                                        return(t);
                                      }
                                      t = Option_3(t, q_3, r_3, t_3);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm l_42 = NULL;
  l_42 = t;
  t = SSL_table_destroy(not_null(l_42));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm p_42 = NULL;
  p_42 = t;
  t = SSL_exit(not_null(p_42));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm t_42 = NULL;
  t_42 = t;
  t = SSL_implode_string(not_null(t_42));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm n_83 (ATerm))
{
  ATerm w_42 (ATerm t)
  {
    ATerm h_21 = t;
    int i_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, w_42);
        LocalPopChoice(i_21);
      }
    else
      {
        t = h_21;
        {
          t = Nil_0(t);
          t = n_83(t);
        }
      }
    return(t);
  }
  t = w_42(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm j_21 = t;
  int k_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_21);
    }
  else
    {
      t = j_21;
      {
        ATerm z_42 = NULL,a_43 = NULL,b_43 = NULL;
        z_42 = t;
        y_42 :
        if(((ATgetType(z_42) == AT_LIST) && ((ATermList) z_42 != ATempty)))
          {
            a_43 = ATgetFirst((ATermList) z_42);
            b_43 = (ATerm) ATgetNext((ATermList) z_42);
            {
              t = not_null(a_43);
              {
                ATerm u_3 (ATerm t)
                {
                  t = not_null(b_43);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, u_3);
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
ATerm explode_string_0 (ATerm t)
{
  ATerm j_43 = NULL;
  j_43 = t;
  t = SSL_explode_string(not_null(j_43));
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
ATerm long_description_1 (ATerm t, ATerm z_69 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm z_82 (ATerm))
{
  ATerm m_43 (ATerm t)
  {
    ATerm l_21 = t;
    int o_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(o_21);
      }
    else
      {
        t = l_21;
        t = Cons_2(t, z_82, m_43);
      }
    return(t);
  }
  t = m_43(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm t_43 = NULL,u_43 = NULL,v_43 = NULL;
  v_43 = t;
  s_43 :
  if(((ATgetType(v_43) == AT_LIST) && ((ATermList) v_43 != ATempty)))
    {
      t_43 = ATgetFirst((ATermList) v_43);
      u_43 = (ATerm) ATgetNext((ATermList) v_43);
      {
        ATerm y_43 = NULL;
        t = not_null(u_43);
        {
          ATerm p_21;
          p_21 = t;
          {
            ATerm z_43 = NULL,b_44 = NULL,d_44 = NULL;
            ATerm q_21;
            q_21 = t;
            {
              ATerm a_44 = NULL;
              t = d_0(t);
              {
                a_44 = t;
                if(((z_43 != NULL) && (z_43 != a_44)))
                  _fail(a_44);
                else
                  z_43 = a_44;
              }
            }
            t = q_21;
            {
              ATerm c_44 = NULL;
              t = not_null(t_43);
              {
                t = c_0(t);
                {
                  c_44 = t;
                  if(((b_44 != NULL) && (b_44 != c_44)))
                    _fail(c_44);
                  else
                    b_44 = c_44;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_43)), not_null(b_44));
                {
                  d_44 = t;
                  if(((y_43 != NULL) && (y_43 != d_44)))
                    _fail(d_44);
                  else
                    y_43 = d_44;
                }
              }
            }
          }
          t = p_21;
          {
            ATerm v_3 (ATerm t)
            {
              t = not_null(y_43);
              return(t);
            }
            t = reverse_acc_2(t, c_0, v_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) v_43 == ATempty))
        {
          {
            t = term_i_6;
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
  ATerm a_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, a_4);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_44 = NULL,m_44 = NULL,n_44 = NULL;
  l_44 = t;
  k_44 :
  if(match_cons(l_44, sym__2))
    {
      m_44 = ATgetArgument(l_44, 0);
      n_44 = ATgetArgument(l_44, 1);
      t = SSL_table_get(not_null(m_44), not_null(n_44));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm y_69 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm f_57 (ATerm))
{
  ATerm w_44 = NULL,x_44 = NULL;
  w_44 = t;
  v_44 :
  if(match_cons(w_44, sym_Program_1))
    {
      x_44 = ATgetArgument(w_44, 0);
      {
        ATerm a_45 = NULL,c_45 = NULL;
        ATerm b_45 = NULL;
        t = SSLgetAnnotations(not_null(w_44));
        {
          b_45 = t;
          if(((a_45 != NULL) && (a_45 != b_45)))
            _fail(b_45);
          else
            a_45 = b_45;
        }
        {
          t = not_null(x_44);
          {
            ATerm e_45 = NULL;
            t = f_57(t);
            {
              c_45 = t;
              {
                ATerm f_45 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(c_45)), not_null(a_45));
                {
                  f_45 = t;
                  if(((e_45 != NULL) && (e_45 != f_45)))
                    _fail(f_45);
                  else
                    e_45 = f_45;
                }
                t = not_null(e_45);
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
  ATerm o_45 = NULL;
  ATerm b_4 (ATerm t)
  {
    ATerm g_4 (ATerm t)
    {
      ATerm p_45 = NULL;
      p_45 = t;
      if(((o_45 != NULL) && (o_45 != p_45)))
        _fail(p_45);
      else
        o_45 = p_45;
      return(t);
    }
    t = Program_1(t, g_4);
    return(t);
  }
  t = option_defined_1(t, b_4);
  {
    ATerm i_4 (ATerm t)
    {
      ATerm q_45 = NULL;
      ATerm r_45 = NULL;
      t = term_i_6;
      {
        ATerm j_4 (ATerm t)
        {
          t = not_null(o_45);
          return(t);
        }
        t = short_description_1(t, j_4);
        {
          t = concat_strings_0(t);
          {
            r_45 = t;
            if(((q_45 != NULL) && (q_45 != r_45)))
              _fail(r_45);
            else
              q_45 = r_45;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATempty, not_null(q_45)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, i_4);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATempty, term_r_21));
      {
        t = printnl_0(t);
        {
          t = term_s_21;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_4 (ATerm t)
                {
                  ATerm s_45 = NULL;
                  s_45 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(s_45)), term_t_21));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_4);
                {
                  ATerm l_4 (ATerm t)
                  {
                    ATerm u_45 = NULL;
                    ATerm v_45 = NULL;
                    t = term_i_6;
                    {
                      ATerm m_4 (ATerm t)
                      {
                        t = not_null(o_45);
                        return(t);
                      }
                      t = long_description_1(t, m_4);
                      {
                        t = concat_strings_0(t);
                        {
                          v_45 = t;
                          if(((u_45 != NULL) && (u_45 != v_45)))
                            _fail(v_45);
                          else
                            u_45 = v_45;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_45)), term_u_21));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_4);
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
ATerm Undefined_1 (ATerm t, ATerm g_57 (ATerm))
{
  ATerm f_46 = NULL,g_46 = NULL;
  f_46 = t;
  e_46 :
  if(match_cons(f_46, sym_Undefined_1))
    {
      g_46 = ATgetArgument(f_46, 0);
      {
        ATerm j_46 = NULL,l_46 = NULL;
        ATerm k_46 = NULL;
        t = SSLgetAnnotations(not_null(f_46));
        {
          k_46 = t;
          if(((j_46 != NULL) && (j_46 != k_46)))
            _fail(k_46);
          else
            j_46 = k_46;
        }
        {
          t = not_null(g_46);
          {
            ATerm n_46 = NULL;
            t = g_57(t);
            {
              l_46 = t;
              {
                ATerm o_46 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(l_46)), not_null(j_46));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm h_83 (ATerm))
{
  ATerm t_46 (ATerm t)
  {
    ATerm v_21 = t;
    int w_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, h_83, _id);
        LocalPopChoice(w_21);
      }
    else
      {
        t = v_21;
        t = Cons_2(t, _id, t_46);
      }
    return(t);
  }
  t = t_46(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm x_70 (ATerm))
{
  t = fetch_1(t, x_70);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm y_46 = NULL;
  y_46 = t;
  x_46 :
  if(match_cons(y_46, sym_Help_0))
    {
      ATerm a_47 = NULL,c_47 = NULL;
      ATerm x_21;
      x_21 = t;
      {
        ATerm b_47 = NULL;
        t = SSLgetAnnotations(not_null(y_46));
        {
          b_47 = t;
          if(((a_47 != NULL) && (a_47 != b_47)))
            _fail(b_47);
          else
            a_47 = b_47;
        }
      }
      t = x_21;
      {
        ATerm d_47 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(a_47));
        {
          d_47 = t;
          if(((c_47 != NULL) && (c_47 != d_47)))
            _fail(d_47);
          else
            c_47 = d_47;
        }
        t = not_null(c_47);
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
  ATerm n_4 (ATerm t)
  {
    ATerm i_47 = NULL;
    i_47 = t;
    h_47 :
    if(!(match_string(i_47, "--help")))
      {
        if(!(match_string(i_47, "-h")))
          {
            if(!(match_string(i_47, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm r_4 (ATerm t)
  {
    t = term_y_21;
    return(t);
  }
  ATerm s_4 (ATerm t)
  {
    t = term_z_21;
    return(t);
  }
  t = Option_3(t, n_4, r_4, s_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_47 = NULL,q_47 = NULL,r_47 = NULL;
  p_47 = t;
  o_47 :
  if(((ATgetType(p_47) == AT_LIST) && ((ATermList) p_47 != ATempty)))
    {
      q_47 = ATgetFirst((ATermList) p_47);
      r_47 = (ATerm) ATgetNext((ATermList) p_47);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_47)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_47)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_65 (ATerm), ATerm e_65 (ATerm))
{
  ATerm e_48 = NULL,f_48 = NULL,g_48 = NULL;
  e_48 = t;
  d_48 :
  if(((ATgetType(e_48) == AT_LIST) && ((ATermList) e_48 != ATempty)))
    {
      f_48 = ATgetFirst((ATermList) e_48);
      g_48 = (ATerm) ATgetNext((ATermList) e_48);
      {
        ATerm o_48 = NULL,q_48 = NULL;
        ATerm p_48 = NULL;
        t = SSLgetAnnotations(not_null(e_48));
        {
          p_48 = t;
          if(((o_48 != NULL) && (o_48 != p_48)))
            _fail(p_48);
          else
            o_48 = p_48;
        }
        {
          t = not_null(f_48);
          {
            ATerm s_48 = NULL;
            t = d_65(t);
            {
              q_48 = t;
              {
                t = not_null(g_48);
                {
                  ATerm u_48 = NULL;
                  t = e_65(t);
                  {
                    s_48 = t;
                    {
                      ATerm v_48 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_48)), not_null(q_48)), not_null(o_48));
                      {
                        v_48 = t;
                        if(((u_48 != NULL) && (u_48 != v_48)))
                          _fail(v_48);
                        else
                          u_48 = v_48;
                      }
                      t = not_null(u_48);
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
  ATerm h_49 = NULL;
  h_49 = t;
  g_49 :
  if(((ATermList) h_49 == ATempty))
    {
      {
        ATerm j_49 = NULL,l_49 = NULL;
        ATerm a_22;
        a_22 = t;
        {
          ATerm k_49 = NULL;
          t = SSLgetAnnotations(not_null(h_49));
          {
            k_49 = t;
            if(((j_49 != NULL) && (j_49 != k_49)))
              _fail(k_49);
            else
              j_49 = k_49;
          }
        }
        t = a_22;
        {
          ATerm m_49 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(j_49));
          {
            m_49 = t;
            if(((l_49 != NULL) && (l_49 != m_49)))
              _fail(m_49);
            else
              l_49 = m_49;
          }
          t = not_null(l_49);
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
  ATerm s_49 = NULL,t_49 = NULL,u_49 = NULL;
  s_49 = t;
  r_49 :
  if(match_cons(s_49, sym__2))
    {
      t_49 = ATgetArgument(s_49, 0);
      u_49 = ATgetArgument(s_49, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_u_14, not_null(t_49), not_null(u_49));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm b_70 (ATerm))
{
  ATerm b_22;
  b_22 = t;
  {
    ATerm w_4 (ATerm t)
    {
      t = term_c_22;
      t = b_70(t);
      return(t);
    }
    t = try_1(t, w_4);
  }
  t = b_22;
  {
    ATerm z_4 (ATerm t)
    {
      ATerm d_50 = NULL;
      ATerm d_22;
      d_22 = t;
      {
        ATerm b_50 = NULL;
        ATerm c_50 = NULL;
        c_50 = t;
        if(((b_50 != NULL) && (b_50 != c_50)))
          _fail(c_50);
        else
          b_50 = c_50;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_15, not_null(b_50));
          t = set_config_0(t);
        }
      }
      t = d_22;
      {
        ATerm e_50 = NULL;
        e_50 = t;
        if(((d_50 != NULL) && (d_50 != e_50)))
          _fail(e_50);
        else
          d_50 = e_50;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(d_50));
      }
      return(t);
    }
    ATerm a_5 (ATerm t)
    {
      ATerm e_22 = t;
      int i_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_22 = t;
          int m_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(m_22);
            }
          else
            {
              t = j_22;
              {
                t = b_70(t);
                t = Cons_2(t, _id, a_5);
              }
            }
          LocalPopChoice(i_22);
        }
      else
        {
          t = e_22;
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
  ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL;
  ATerm p_22;
  p_22 = t;
  {
    ATerm n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL;
    n_50 = t;
    j_50 :
    if(match_cons(n_50, sym__3))
      {
        o_50 = ATgetArgument(n_50, 0);
        p_50 = ATgetArgument(n_50, 1);
        q_50 = ATgetArgument(n_50, 2);
        {
          if(((k_50 != NULL) && (k_50 != o_50)))
            _fail(o_50);
          else
            k_50 = o_50;
          {
            if(((l_50 != NULL) && (l_50 != p_50)))
              _fail(p_50);
            else
              l_50 = p_50;
            {
              if(((m_50 != NULL) && (m_50 != q_50)))
                _fail(q_50);
              else
                m_50 = q_50;
              t = SSL_table_put(not_null(k_50), not_null(l_50), not_null(m_50));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = p_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm a_70 (ATerm))
{
  ATerm t_50 = NULL;
  ATerm s_22;
  s_22 = t;
  {
    t = term_x_22;
    t = table_put_0(t);
  }
  t = s_22;
  {
    ATerm b_5 (ATerm t)
    {
      ATerm b_23 = t;
      int e_23 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = a_70(t);
          LocalPopChoice(e_23);
        }
      else
        {
          t = b_23;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, b_5);
    {
      ATerm c_5 (ATerm t)
      {
        ATerm f_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_e_15;
                t = exit_0(t);
              }
            }
            LocalPopChoice(i_23);
          }
        else
          {
            t = f_23;
            {
              ATerm d_5 (ATerm t)
              {
                ATerm e_5 (ATerm t)
                {
                  ATerm u_50 = NULL;
                  u_50 = t;
                  if(((t_50 != NULL) && (t_50 != u_50)))
                    _fail(u_50);
                  else
                    t_50 = u_50;
                  return(t);
                }
                t = Undefined_1(t, e_5);
                return(t);
              }
              t = option_defined_1(t, d_5);
              {
                ATerm l_23;
                l_23 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_50)), term_m_23));
                  t = printnl_0(t);
                }
                t = l_23;
                {
                  t = system_usage_0(t);
                  {
                    t = term_w_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_5);
      {
        ATerm n_23;
        n_23 = t;
        {
          t = term_w_17;
          t = table_destroy_0(t);
        }
        t = n_23;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm m_72 (ATerm), ATerm n_72 (ATerm), ATerm o_72 (ATerm), ATerm p_72 (ATerm))
{
  ATerm f_5 (ATerm t)
  {
    ATerm o_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_72(t);
        LocalPopChoice(p_23);
      }
    else
      {
        t = o_23;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_5);
  {
    t = store_options_0(t);
    {
      t = p_72(t);
      {
        ATerm q_23 = t;
        int r_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, o_72);
            LocalPopChoice(r_23);
          }
        else
          {
            t = q_23;
            {
              ATerm s_23 = t;
              int t_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, m_72);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(t_23);
                }
              else
                {
                  t = s_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm g_72 (ATerm), ATerm h_72 (ATerm), ATerm i_72 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm o_5 (ATerm t)
    {
      ATerm u_23;
      u_23 = t;
      {
        ATerm x_50 = NULL;
        ATerm y_50 = NULL;
        t = term_u_15;
        {
          t = get_config_0(t);
          {
            y_50 = t;
            if(((x_50 != NULL) && (x_50 != y_50)))
              _fail(y_50);
            else
              x_50 = y_50;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_11, (ATerm) ATinsert(ATempty, not_null(x_50)));
          t = printnl_0(t);
        }
      }
      t = u_23;
      return(t);
    }
    t = if_verbose2_1(t, o_5);
    return(t);
  }
  t = iowrap_4(t, g_72, h_72, i_72, n_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm e_72 (ATerm), ATerm f_72 (ATerm))
{
  t = iowrap_3(t, e_72, f_72, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm l_65 (ATerm), ATerm m_65 (ATerm), ATerm n_65 (ATerm))
{
  ATerm p_5 (ATerm t)
  {
    ATerm t_5 (ATerm t)
    {
      t = termid_check_p__1(t, l_65);
      return(t);
    }
    t = try_1(t, t_5);
    {
      t = m_65(t);
      {
        ATerm u_5 (ATerm t)
        {
          t = termid_set_p__1(t, l_65);
          return(t);
        }
        t = try_1(t, u_5);
      }
    }
    return(t);
  }
  ATerm s_5 (ATerm t)
  {
    ATerm v_23 = t;
    int w_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_65(t);
        LocalPopChoice(w_23);
      }
    else
      {
        t = v_23;
        {
          ATerm w_5 (ATerm t)
          {
            ATerm b_51 = NULL;
            b_51 = t;
            a_51 :
            if(!(match_string(b_51, "--strict")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm y_5 (ATerm t)
          {
            t = term_s_12;
            return(t);
          }
          ATerm z_5 (ATerm t)
          {
            t = term_x_23;
            return(t);
          }
          t = Option_3(t, w_5, y_5, z_5);
        }
      }
    return(t);
  }
  t = iowrap_2(t, p_5, s_5);
  return(t);
}
ATerm Pp_gen_0 (ATerm t)
{
  ATerm a_6 (ATerm t)
  {
    ATerm d_6 (ATerm t)
    {
      ATerm q_53 = NULL;
      q_53 = t;
      m_53 :
      if(!(match_string(q_53, "\"sdf-2.1\"")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm e_6 (ATerm t)
    {
      t = term_y_23;
      return(t);
    }
    t = InOutId_2(t, d_6, e_6);
    return(t);
  }
  ATerm b_6 (ATerm t)
  {
    t = _2(t, _id, ppgenerate_0);
    return(t);
  }
  ATerm c_6 (ATerm t)
  {
    ATerm f_6 (ATerm t)
    {
      ATerm r_53 = NULL;
      r_53 = t;
      p_53 :
      if(!(match_string(r_53, "-v")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm g_6 (ATerm t)
    {
      t = term_z_23;
      return(t);
    }
    ATerm h_6 (ATerm t)
    {
      t = term_a_24;
      return(t);
    }
    t = Option_3(t, f_6, g_6, h_6);
    return(t);
  }
  t = io_idwrap_3(t, a_6, b_6, c_6);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Pp_gen_0(t);
  return(t);
}

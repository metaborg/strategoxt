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
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_Silent_0;
Symbol sym_Verbose_0;
Symbol sym_Version_0;
Symbol sym_Input_1;
Symbol sym_Output_1;
Symbol sym_Binary_0;
Symbol sym_Statistics_0;
Symbol sym_Help_0;
Symbol sym_Runtime_1;
Symbol sym_DeclVersion_1;
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
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
  sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
  ATprotectSymbol(sym_Program_1);
  sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
  ATprotectSymbol(sym_Undefined_1);
  sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
  ATprotectSymbol(sym_Silent_0);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
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
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_h_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_t_20;
ATerm term_k_20;
ATerm term_w_19;
ATerm term_u_19;
ATerm term_t_19;
ATerm term_p_19;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_v_18;
ATerm term_q_18;
ATerm term_p_18;
ATerm term_j_18;
ATerm term_g_18;
ATerm term_d_18;
ATerm term_a_18;
ATerm term_x_17;
ATerm term_u_17;
ATerm term_q_17;
ATerm term_p_17;
ATerm term_m_17;
ATerm term_i_17;
ATerm term_h_17;
ATerm term_p_16;
ATerm term_q_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_g_15;
ATerm term_e_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_w_14;
ATerm term_t_14;
ATerm term_j_14;
ATerm term_i_14;
ATerm term_h_14;
ATerm term_q_13;
ATerm term_l_13;
ATerm term_k_13;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_l_12;
ATerm term_k_12;
ATerm term_j_12;
ATerm term_i_12;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_f_10;
ATerm term_p_9;
ATerm term_m_9;
ATerm term_l_9;
ATerm term_a_9;
ATerm term_p_8;
ATerm term_o_8;
void init_constant_terms (void)
{
  ATprotect(&(term_o_8));
  term_o_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_p_8));
  term_p_8 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_l_9));
  term_l_9 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_m_9));
  term_m_9 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(sym_Arg_1, term_m_9);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(sym_SOpt_2, term_d_11, term_e_11);
  ATprotect(&(term_i_12));
  term_i_12 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_j_12));
  term_j_12 = (ATerm) ATmakeAppl(sym_lit_1, term_i_12);
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_l_12));
  term_l_12 = (ATerm) ATmakeAppl(sym_lit_1, term_k_12);
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_k_13));
  term_k_13 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_l_13));
  term_l_13 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_q_13));
  term_q_13 = (ATerm) ATmakeAppl(sym__2, term_k_13, term_l_13);
  ATprotect(&(term_h_14));
  term_h_14 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_i_14));
  term_i_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_j_14));
  term_j_14 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue));
  ATprotect(&(term_w_14));
  term_w_14 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_e_15));
  term_e_15 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_g_15));
  term_g_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_q_15));
  term_q_15 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_p_16));
  term_p_16 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_h_17));
  term_h_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_m_17));
  term_m_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_p_17));
  term_p_17 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_q_17));
  term_q_17 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_u_17));
  term_u_17 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_a_18));
  term_a_18 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_18));
  term_j_18 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_p_18));
  term_p_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_q_18));
  term_q_18 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(sym__2, term_h_17, term_i_17);
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_19));
  term_t_19 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_19));
  term_u_19 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_w_19));
  term_w_19 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_k_20));
  term_k_20 = (ATerm) ATmakeAppl(sym__3, term_h_17, term_i_17, (ATerm) ATempty);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
}
ATerm Option_3 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm));
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm l_68 (ATerm));
ATerm filter_1 (ATerm, ATerm p_59 (ATerm));
ATerm debug_1 (ATerm, ATerm a_57 (ATerm));
ATerm is_list_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm r_49 (ATerm));
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm h_73 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm j_47 (ATerm));
ATerm iter_1 (ATerm, ATerm i_47 (ATerm));
ATerm pair_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm g_47 (ATerm), ATerm h_47 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm e_47 (ATerm), ATerm f_47 (ATerm));
ATerm make_0 (ATerm);
ATerm lit_1 (ATerm, ATerm d_47 (ATerm));
ATerm NonTerminal_0 (ATerm);
ATerm add_0 (ATerm);
ATerm number_1 (ATerm, ATerm k_73 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm g_73 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm n_66 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm n_60 (ATerm));
ATerm crush_3 (ATerm, ATerm y_61 (ATerm), ATerm z_61 (ATerm), ATerm a_62 (ATerm));
ATerm collect_p__1 (ATerm, ATerm x_50 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm _2 (ATerm, ATerm x_38 (ATerm), ATerm y_38 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm d_70 (ATerm));
ATerm in_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm b_56 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm n_50 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm o_50 (ATerm));
ATerm InOutId_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm v_50 (ATerm));
ATerm try_1 (ATerm, ATerm r_72 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm t_50 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm f_56 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm x_58 (ATerm), ATerm y_58 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm e_56 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_54 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm d_66 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm l_54 (ATerm));
ATerm map_1 (ATerm, ATerm p_65 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm k_54 (ATerm));
ATerm Program_1 (ATerm, ATerm k_42 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm l_42 (ATerm));
ATerm fetch_1 (ATerm, ATerm x_65 (ATerm));
ATerm option_defined_1 (ATerm, ATerm j_55 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm c_50 (ATerm), ATerm d_50 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_54 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_54 (ATerm));
ATerm iowrap_3 (ATerm, ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm v_55 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_55 (ATerm), ATerm p_55 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm k_50 (ATerm), ATerm l_50 (ATerm), ATerm m_50 (ATerm));
ATerm Pp_gen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Option_3 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm), ATerm m_0 (ATerm))
{
  ATerm q_1 = NULL,r_1 = NULL,s_1 = NULL;
  q_1 = t;
  p_1 :
  if(match_string(q_1, "register-usage-info"))
    {
      t = register_usage_1(t, m_0);
    }
  else
    {
      if(((ATgetType(q_1) == AT_LIST) && ((ATermList) q_1 != ATempty)))
        {
          r_1 = ATgetFirst((ATermList) q_1);
          s_1 = (ATerm) ATgetNext((ATermList) q_1);
          {
            ATerm v_1 = NULL;
            ATerm i_4;
            i_4 = t;
            {
              t = not_null(r_1);
              t = k_0(t);
            }
            t = i_4;
            {
              ATerm w_1 = NULL;
              t = term_o_8;
              {
                t = l_0(t);
                {
                  w_1 = t;
                  if(((v_1 != NULL) && (v_1 != w_1)))
                    _fail(w_1);
                  else
                    v_1 = w_1;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(s_1)), not_null(v_1));
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
  ATerm b_2 = NULL;
  b_2 = t;
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_p_8)), not_null(b_2)), (ATerm) ATinsert(ATempty, term_p_8));
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
  ATerm f_2 = NULL;
  f_2 = t;
  t = SSL_int_to_string(not_null(f_2));
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm l_68 (ATerm))
{
  ATerm i_2 (ATerm t)
  {
    t = l_68(t);
    t = _all(t, i_2);
    return(t);
  }
  t = i_2(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm p_59 (ATerm))
{
  ATerm q_8 = t;
  int r_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_8);
    }
  else
    {
      t = q_8;
      {
        ATerm s_8 = t;
        int w_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_0 (ATerm t)
            {
              t = filter_1(t, p_59);
              return(t);
            }
            t = Cons_2(t, p_59, a_0);
            LocalPopChoice(w_8);
          }
        else
          {
            t = s_8;
            {
              ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL;
              l_2 = t;
              k_2 :
              if(((ATgetType(l_2) == AT_LIST) && ((ATermList) l_2 != ATempty)))
                {
                  m_2 = ATgetFirst((ATermList) l_2);
                  n_2 = (ATerm) ATgetNext((ATermList) l_2);
                  {
                    t = not_null(n_2);
                    t = filter_1(t, p_59);
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
ATerm debug_1 (ATerm t, ATerm a_57 (ATerm))
{
  ATerm y_8;
  y_8 = t;
  {
    ATerm s_2 = NULL,u_2 = NULL;
    ATerm z_8;
    z_8 = t;
    {
      ATerm t_2 = NULL;
      t = a_57(t);
      {
        t_2 = t;
        if(((s_2 != NULL) && (s_2 != t_2)))
          _fail(t_2);
        else
          s_2 = t_2;
      }
    }
    t = z_8;
    {
      ATerm v_2 = NULL;
      v_2 = t;
      if(((u_2 != NULL) && (u_2 != v_2)))
        _fail(v_2);
      else
        u_2 = v_2;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_2)), not_null(s_2)));
        t = printnl_0(t);
      }
    }
  }
  t = y_8;
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm z_2 = NULL,a_3 = NULL,b_3 = NULL;
  z_2 = t;
  y_2 :
  if(((ATermList) z_2 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(z_2) == AT_LIST) && ((ATermList) z_2 != ATempty)))
        {
          a_3 = ATgetFirst((ATermList) z_2);
          b_3 = (ATerm) ATgetNext((ATermList) z_2);
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
  ATerm d_0 (ATerm t)
  {
    ATerm e_0 (ATerm t)
    {
      ATerm d_3 = NULL;
      d_3 = t;
      {
        ATerm b_9 = t;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_9;
          }
        t = (ATerm) ATinsert(ATempty, not_null(d_3));
      }
      return(t);
    }
    t = try_1(t, e_0);
    return(t);
  }
  t = map_1(t, d_0);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm r_49 (ATerm))
{
  ATerm j_3 = NULL,k_3 = NULL;
  j_3 = t;
  i_3 :
  if(match_cons(j_3, sym_Arg_1))
    {
      k_3 = ATgetArgument(j_3, 0);
      {
        ATerm m_3 = NULL;
        t = not_null(k_3);
        {
          t = r_49(t);
          {
            m_3 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(m_3));
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
  ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL,z_3 = NULL;
  ATerm k_4 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(z_3)), not_null(y_3));
    return(t);
  }
  x_3 = t;
  t_3 :
  if(match_cons(x_3, sym_alt_2))
    {
      y_3 = ATgetArgument(x_3, 0);
      z_3 = ATgetArgument(x_3, 1);
      u_3 :
      if(match_cons(z_3, sym_alt_2))
        {
          v_3 = ATgetArgument(z_3, 0);
          w_3 = ATgetArgument(z_3, 1);
          {
            ATerm c_9 = t;
            int k_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm d_4 = NULL;
                ATerm e_4 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(v_3), not_null(w_3));
                {
                  t = flat_alt_0(t);
                  {
                    e_4 = t;
                    if(((d_4 != NULL) && (d_4 != e_4)))
                      _fail(e_4);
                    else
                      d_4 = e_4;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(d_4)), not_null(y_3));
                LocalPopChoice(k_9);
              }
            else
              {
                t = c_9;
                t = k_4(t);
              }
          }
        }
      else
        {
          t = k_4(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm m_5 = NULL,n_5 = NULL,o_5 = NULL;
  ATerm n_0 (ATerm t)
  {
    t = term_o_8;
    t = h_73(t);
    return(t);
  }
  t = split_2(t, n_0, _id);
  {
    ATerm h_7 (ATerm t)
    {
      ATerm p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL,z_5 = NULL;
      ATerm j_7 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        ATerm a_6 = NULL,b_6 = NULL,c_6 = NULL,d_6 = NULL;
        if(((m_5 != NULL) && (m_5 != v_5)))
          _fail(v_5);
        else
          m_5 = v_5;
        {
          if(((n_5 != NULL) && (n_5 != w_5)))
            _fail(w_5);
          else
            n_5 = w_5;
          {
            if(((o_5 != NULL) && (o_5 != y_5)))
              _fail(y_5);
            else
              o_5 = y_5;
            {
              if(((a_6 != NULL) && (a_6 != s_5)))
                _fail(s_5);
              else
                a_6 = s_5;
              {
                if(((b_6 != NULL) && (b_6 != q_5)))
                  _fail(q_5);
                else
                  b_6 = q_5;
                {
                  if(((c_6 != NULL) && (c_6 != r_5)))
                    _fail(r_5);
                  else
                    c_6 = r_5;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(a_6), (ATerm) ATmakeAppl(sym_alt_2, not_null(b_6), not_null(c_6)));
                    {
                      ATerm f_6 = NULL;
                      t = flat_alt_0(t);
                      {
                        d_6 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_l_9, not_null(d_6));
                          {
                            t = mkterm_0(t);
                            {
                              f_6 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_5), not_null(n_5)), (ATerm) ATmakeAppl(sym__2, not_null(o_5), not_null(f_6)));
                                {
                                  t = h_7(t);
                                  {
                                    ATerm o_0 (ATerm t)
                                    {
                                      ATerm p_0 (ATerm t)
                                      {
                                        ATerm q_0 (ATerm t)
                                        {
                                          t = Arg_1(t, _id);
                                          t = term_p_9;
                                          return(t);
                                        }
                                        t = try_1(t, q_0);
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
      ATerm m_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_5), not_null(w_5)), (ATerm) ATmakeAppl(sym__2, not_null(y_5), not_null(s_5)));
        t = h_7(t);
        return(t);
      }
      ATerm n_7 (ATerm t)
      {
        ATerm p_6 = NULL,q_6 = NULL,w_6 = NULL;
        ATerm r_6 = NULL;
        ATerm t_6 = NULL,u_6 = NULL,v_6 = NULL;
        t = not_null(z_5);
        {
          r_6 = t;
          {
            t = SSL_explode_term(not_null(r_6));
            {
              t_6 = t;
              w_4 :
              if(match_cons(t_6, sym__2))
                {
                  u_6 = ATgetArgument(t_6, 0);
                  v_6 = ATgetArgument(t_6, 1);
                  {
                    if(((p_6 != NULL) && (p_6 != u_6)))
                      _fail(u_6);
                    else
                      p_6 = u_6;
                    if(((q_6 != NULL) && (q_6 != v_6)))
                      _fail(v_6);
                    else
                      q_6 = v_6;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(y_5), not_null(p_6))));
          {
            ATerm y_6 = NULL,f_7 = NULL;
            t = conc_0(t);
            {
              w_6 = t;
              {
                t = not_null(q_6);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm q_9;
                      q_9 = t;
                      {
                        ATerm z_6 = NULL;
                        t = make_0(t);
                        {
                          z_6 = t;
                          if(((y_6 != NULL) && (y_6 != z_6)))
                            _fail(z_6);
                          else
                            y_6 = z_6;
                        }
                      }
                      t = q_9;
                      {
                        ATerm r_0 (ATerm t)
                        {
                          ATerm a_7 = NULL;
                          ATerm c_7 = NULL;
                          a_7 = t;
                          {
                            ATerm d_7 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(v_5), not_null(w_6)), not_null(a_7));
                            {
                              t = h_7(t);
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
                          return(t);
                        }
                        t = map_1(t, r_0);
                        {
                          t = concat_0(t);
                          {
                            f_7 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(f_7)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(v_5), not_null(w_6)), not_null(y_6)));
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
      t_5 = t;
      c_5 :
      if(match_cons(t_5, sym__2))
        {
          u_5 = ATgetArgument(t_5, 0);
          x_5 = ATgetArgument(t_5, 1);
          d_5 :
          if(match_cons(x_5, sym_lit_1))
            {
              y_5 = ATgetArgument(x_5, 0);
              e_5 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(x_5, sym__2))
                {
                  y_5 = ATgetArgument(x_5, 0);
                  z_5 = ATgetArgument(x_5, 1);
                  f_5 :
                  if(match_cons(z_5, sym_sort_1))
                    {
                      s_5 = ATgetArgument(z_5, 0);
                      g_5 :
                      if(match_cons(u_5, sym__2))
                        {
                          v_5 = ATgetArgument(u_5, 0);
                          w_5 = ATgetArgument(u_5, 1);
                          {
                            ATerm r_9 = t;
                            int s_9 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = j_7(t);
                                LocalPopChoice(s_9);
                              }
                            else
                              {
                                t = r_9;
                                t = n_7(t);
                              }
                          }
                        }
                      else
                        {
                          t = j_7(t);
                        }
                    }
                  else
                    {
                      if(match_cons(z_5, sym_char_class_1))
                        {
                          s_5 = ATgetArgument(z_5, 0);
                          h_5 :
                          if(match_cons(u_5, sym__2))
                            {
                              v_5 = ATgetArgument(u_5, 0);
                              w_5 = ATgetArgument(u_5, 1);
                              {
                                ATerm t_9 = t;
                                int u_9 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = k_7(t);
                                    LocalPopChoice(u_9);
                                  }
                                else
                                  {
                                    t = t_9;
                                    t = n_7(t);
                                  }
                              }
                            }
                          else
                            {
                              t = k_7(t);
                            }
                        }
                      else
                        {
                          if(match_cons(z_5, sym_alt_2))
                            {
                              s_5 = ATgetArgument(z_5, 0);
                              p_5 = ATgetArgument(z_5, 1);
                              i_5 :
                              if(match_cons(u_5, sym__2))
                                {
                                  v_5 = ATgetArgument(u_5, 0);
                                  w_5 = ATgetArgument(u_5, 1);
                                  j_5 :
                                  if(match_cons(p_5, sym_alt_2))
                                    {
                                      q_5 = ATgetArgument(p_5, 0);
                                      r_5 = ATgetArgument(p_5, 1);
                                      {
                                        ATerm z_9 = t;
                                        int a_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = l_7(t);
                                            LocalPopChoice(a_10);
                                          }
                                        else
                                          {
                                            t = z_9;
                                            t = n_7(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = n_7(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(z_5, sym_bracket_symbol_1))
                                {
                                  s_5 = ATgetArgument(z_5, 0);
                                  k_5 :
                                  if(match_cons(u_5, sym__2))
                                    {
                                      v_5 = ATgetArgument(u_5, 0);
                                      w_5 = ATgetArgument(u_5, 1);
                                      {
                                        ATerm c_10 = t;
                                        int e_10 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = m_7(t);
                                            LocalPopChoice(e_10);
                                          }
                                        else
                                          {
                                            t = c_10;
                                            t = n_7(t);
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
                                  l_5 :
                                  if(match_cons(u_5, sym__2))
                                    {
                                      v_5 = ATgetArgument(u_5, 0);
                                      w_5 = ATgetArgument(u_5, 1);
                                      t = n_7(t);
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
    t = h_7(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm a_8 = NULL,b_8 = NULL,c_8 = NULL;
  a_8 = t;
  z_7 :
  if(match_cons(a_8, sym_lit_1))
    {
      b_8 = ATgetArgument(a_8, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_f_10, (ATerm) ATmakeAppl(sym_S_1, not_null(b_8)));
    }
  else
    {
      if(match_cons(a_8, sym__2))
        {
          b_8 = ATgetArgument(a_8, 0);
          c_8 = ATgetArgument(a_8, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(b_8));
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm j_47 (ATerm))
{
  ATerm k_8 = NULL,l_8 = NULL;
  k_8 = t;
  j_8 :
  if(match_cons(k_8, sym_iter_star_1))
    {
      l_8 = ATgetArgument(k_8, 0);
      {
        ATerm n_8 = NULL;
        t = not_null(l_8);
        {
          t = j_47(t);
          {
            n_8 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(n_8));
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
ATerm iter_1 (ATerm t, ATerm i_47 (ATerm))
{
  ATerm u_8 = NULL,v_8 = NULL;
  u_8 = t;
  t_8 :
  if(match_cons(u_8, sym_iter_1))
    {
      v_8 = ATgetArgument(u_8, 0);
      {
        ATerm x_8 = NULL;
        t = not_null(v_8);
        {
          t = i_47(t);
          {
            x_8 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, not_null(x_8));
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
  ATerm g_10 = t;
  int h_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_10);
    }
  else
    {
      t = g_10;
      {
        ATerm f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL,j_9 = NULL;
        f_9 = t;
        d_9 :
        if(((ATgetType(f_9) == AT_LIST) && ((ATermList) f_9 != ATempty)))
          {
            g_9 = ATgetFirst((ATermList) f_9);
            h_9 = (ATerm) ATgetNext((ATermList) f_9);
            e_9 :
            if(((ATgetType(h_9) == AT_LIST) && ((ATermList) h_9 != ATempty)))
              {
                i_9 = ATgetFirst((ATermList) h_9);
                j_9 = (ATerm) ATgetNext((ATermList) h_9);
                {
                  ATerm n_9 = NULL;
                  ATerm o_9 = NULL;
                  t = not_null(j_9);
                  {
                    t = pair_0(t);
                    {
                      o_9 = t;
                      if(((n_9 != NULL) && (n_9 != o_9)))
                        _fail(o_9);
                      else
                        n_9 = o_9;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_9)), (ATerm) ATmakeAppl(sym__2, not_null(g_9), not_null(i_9)));
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
ATerm iter_star_sep_2 (ATerm t, ATerm g_47 (ATerm), ATerm h_47 (ATerm))
{
  ATerm w_9 = NULL,x_9 = NULL,y_9 = NULL;
  w_9 = t;
  v_9 :
  if(match_cons(w_9, sym_iter_star_sep_2))
    {
      x_9 = ATgetArgument(w_9, 0);
      y_9 = ATgetArgument(w_9, 1);
      {
        ATerm b_10 = NULL;
        t = not_null(x_9);
        {
          ATerm d_10 = NULL;
          t = g_47(t);
          {
            b_10 = t;
            {
              t = not_null(y_9);
              {
                t = h_47(t);
                {
                  d_10 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(b_10), not_null(d_10));
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
ATerm iter_sep_2 (ATerm t, ATerm e_47 (ATerm), ATerm f_47 (ATerm))
{
  ATerm m_10 = NULL,n_10 = NULL,o_10 = NULL;
  m_10 = t;
  l_10 :
  if(match_cons(m_10, sym_iter_sep_2))
    {
      n_10 = ATgetArgument(m_10, 0);
      o_10 = ATgetArgument(m_10, 1);
      {
        ATerm r_10 = NULL;
        t = not_null(n_10);
        {
          ATerm t_10 = NULL;
          t = e_47(t);
          {
            r_10 = t;
            {
              t = not_null(o_10);
              {
                t = f_47(t);
                {
                  t_10 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(r_10), not_null(t_10));
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
  ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL,j_11 = NULL,k_11 = NULL;
  ATerm i_10 = t;
  int j_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_11 = NULL,m_11 = NULL,n_11 = NULL;
      t = reverse_0(t);
      {
        ATerm s_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            ATerm k_10 = t;
            int p_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                LocalPopChoice(p_10);
              }
            else
              {
                t = k_10;
                {
                  ATerm q_10 = t;
                  int s_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
                      LocalPopChoice(s_10);
                    }
                  else
                    {
                      t = q_10;
                      {
                        ATerm u_10 = t;
                        int v_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            LocalPopChoice(v_10);
                          }
                        else
                          {
                            t = u_10;
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
          l_11 = t;
          a_11 :
          if(((ATgetType(l_11) == AT_LIST) && ((ATermList) l_11 != ATempty)))
            {
              m_11 = ATgetFirst((ATermList) l_11);
              n_11 = (ATerm) ATgetNext((ATermList) l_11);
              {
                ATerm o_11 = NULL;
                if(((h_11 != NULL) && (h_11 != m_11)))
                  _fail(m_11);
                else
                  h_11 = m_11;
                {
                  if(((g_11 != NULL) && (g_11 != n_11)))
                    _fail(n_11);
                  else
                    g_11 = n_11;
                  {
                    ATerm w_10 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = w_10;
                      }
                    {
                      ATerm p_11 = NULL;
                      t = not_null(g_11);
                      {
                        t = reverse_0(t);
                        {
                          p_11 = t;
                          if(((o_11 != NULL) && (o_11 != p_11)))
                            _fail(p_11);
                          else
                            o_11 = p_11;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_11)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(o_11))));
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
      LocalPopChoice(j_10);
    }
  else
    {
      t = i_10;
      {
        ATerm x_10 = t;
        int y_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_12 = NULL;
            t = reverse_0(t);
            {
              ATerm w_0 (ATerm t)
              {
                ATerm q_11 = NULL;
                t = Make_0(t);
                {
                  q_11 = t;
                  if(((k_11 != NULL) && (k_11 != q_11)))
                    _fail(q_11);
                  else
                    k_11 = q_11;
                }
                return(t);
              }
              ATerm x_0 (ATerm t)
              {
                ATerm y_11 = NULL;
                ATerm z_10 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = z_10;
                  }
                {
                  t = reverse_0(t);
                  {
                    y_11 = t;
                    if(((i_11 != NULL) && (i_11 != y_11)))
                      _fail(y_11);
                    else
                      i_11 = y_11;
                  }
                }
                return(t);
              }
              t = Cons_2(t, w_0, x_0);
              {
                t = not_null(i_11);
                {
                  t = pair_0(t);
                  {
                    ATerm y_0 (ATerm t)
                    {
                      ATerm z_11 = NULL,d_12 = NULL;
                      ATerm z_0 (ATerm t)
                      {
                        ATerm e_12 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            e_12 = t;
                            if(((z_11 != NULL) && (z_11 != e_12)))
                              _fail(e_12);
                            else
                              z_11 = e_12;
                          }
                        }
                        return(t);
                      }
                      ATerm a_1 (ATerm t)
                      {
                        ATerm f_12 = NULL;
                        ATerm b_1 (ATerm t)
                        {
                          ATerm b_11 = t;
                          int c_11 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              LocalPopChoice(c_11);
                            }
                          else
                            {
                              t = b_11;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, b_1);
                        {
                          t = Make_0(t);
                          {
                            f_12 = t;
                            if(((d_12 != NULL) && (d_12 != f_12)))
                              _fail(f_12);
                            else
                              d_12 = f_12;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, z_0, a_1);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_f_11), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_12)), not_null(z_11)));
                      return(t);
                    }
                    t = map_1(t, y_0);
                    {
                      h_12 = t;
                      {
                        if(((j_11 != NULL) && (j_11 != h_12)))
                          _fail(h_12);
                        else
                          j_11 = h_12;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_11)), not_null(j_11)));
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(y_10);
          }
        else
          {
            t = x_10;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm d_47 (ATerm))
{
  ATerm s_12 = NULL,t_12 = NULL;
  s_12 = t;
  r_12 :
  if(match_cons(s_12, sym_lit_1))
    {
      t_12 = ATgetArgument(s_12, 0);
      {
        ATerm v_12 = NULL;
        t = not_null(t_12);
        {
          t = d_47(t);
          {
            v_12 = t;
            t = (ATerm) ATmakeAppl(sym_lit_1, not_null(v_12));
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
  ATerm r_11 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = r_11;
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
  b_13 = t;
  a_13 :
  if(match_cons(b_13, sym__2))
    {
      c_13 = ATgetArgument(b_13, 0);
      d_13 = ATgetArgument(b_13, 1);
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_13), not_null(d_13));
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            t = SSL_addr(not_null(c_13), not_null(d_13));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm number_1 (ATerm t, ATerm k_73 (ATerm))
{
  ATerm c_1 (ATerm t)
  {
    t = term_m_9;
    return(t);
  }
  t = split_2(t, c_1, _id);
  {
    ATerm g_14 (ATerm t)
    {
      ATerm o_13 = NULL,p_13 = NULL,t_13 = NULL;
      ATerm u_11 = t;
      int v_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          LocalPopChoice(v_11);
        }
      else
        {
          t = u_11;
          {
            ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
            v_13 = t;
            m_13 :
            if(match_cons(v_13, sym__2))
              {
                w_13 = ATgetArgument(v_13, 0);
                x_13 = ATgetArgument(v_13, 1);
                n_13 :
                if(((ATgetType(x_13) == AT_LIST) && ((ATermList) x_13 != ATempty)))
                  {
                    y_13 = ATgetFirst((ATermList) x_13);
                    z_13 = (ATerm) ATgetNext((ATermList) x_13);
                    {
                      ATerm w_11 = t;
                      int x_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm a_14 = NULL;
                          if(((o_13 != NULL) && (o_13 != w_13)))
                            _fail(w_13);
                          else
                            o_13 = w_13;
                          {
                            if(((p_13 != NULL) && (p_13 != y_13)))
                              _fail(y_13);
                            else
                              p_13 = y_13;
                            {
                              if(((t_13 != NULL) && (t_13 != z_13)))
                                _fail(z_13);
                              else
                                t_13 = z_13;
                              {
                                t = not_null(p_13);
                                {
                                  t = k_73(t);
                                  {
                                    ATerm b_14 = NULL,d_14 = NULL;
                                    ATerm c_14 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), term_m_9);
                                    {
                                      t = add_0(t);
                                      {
                                        c_14 = t;
                                        if(((b_14 != NULL) && (b_14 != c_14)))
                                          _fail(c_14);
                                        else
                                          b_14 = c_14;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(b_14), not_null(t_13));
                                      {
                                        t = g_14(t);
                                        {
                                          d_14 = t;
                                          if(((a_14 != NULL) && (a_14 != d_14)))
                                            _fail(d_14);
                                          else
                                            a_14 = d_14;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(a_14)), (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(p_13)));
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(x_11);
                        }
                      else
                        {
                          t = w_11;
                          {
                            ATerm e_14 = NULL;
                            if(((o_13 != NULL) && (o_13 != w_13)))
                              _fail(w_13);
                            else
                              o_13 = w_13;
                            {
                              if(((p_13 != NULL) && (p_13 != y_13)))
                                _fail(y_13);
                              else
                                p_13 = y_13;
                              {
                                if(((t_13 != NULL) && (t_13 != z_13)))
                                  _fail(z_13);
                                else
                                  t_13 = z_13;
                                {
                                  ATerm f_14 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(t_13));
                                  {
                                    t = g_14(t);
                                    {
                                      f_14 = t;
                                      if(((e_14 != NULL) && (e_14 != f_14)))
                                        _fail(f_14);
                                      else
                                        e_14 = f_14;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(e_14)), not_null(p_13));
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
    t = g_14(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm d_1 (ATerm t)
  {
    ATerm e_1 (ATerm t)
    {
      ATerm o_14 = NULL,p_14 = NULL,q_14 = NULL;
      o_14 = t;
      n_14 :
      if(match_cons(o_14, sym_label_2))
        {
          p_14 = ATgetArgument(o_14, 0);
          q_14 = ATgetArgument(o_14, 1);
          t = not_null(q_14);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, e_1);
    return(t);
  }
  t = map_1(t, d_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm g_73 (ATerm))
{
  ATerm y_14 = NULL,a_15 = NULL,l_15 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm a_12;
    a_12 = t;
    {
      ATerm z_14 = NULL;
      t = make_0(t);
      {
        z_14 = t;
        if(((y_14 != NULL) && (y_14 != z_14)))
          _fail(z_14);
        else
          y_14 = z_14;
      }
    }
    t = a_12;
    {
      ATerm b_12;
      b_12 = t;
      {
        ATerm k_15 = NULL;
        ATerm f_1 (ATerm t)
        {
          ATerm g_1 (ATerm t)
          {
            ATerm b_15 = NULL;
            ATerm j_15 = NULL;
            t = term_o_8;
            {
              t = g_73(t);
              {
                j_15 = t;
                if(((b_15 != NULL) && (b_15 != j_15)))
                  _fail(j_15);
                else
                  b_15 = j_15;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_15), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, g_1);
          return(t);
        }
        t = map_1(t, f_1);
        {
          t = concat_0(t);
          {
            k_15 = t;
            if(((a_15 != NULL) && (a_15 != k_15)))
              _fail(k_15);
            else
              a_15 = k_15;
          }
        }
      }
      t = b_12;
      {
        ATerm m_15 = NULL;
        t = term_o_8;
        {
          t = g_73(t);
          {
            m_15 = t;
            if(((l_15 != NULL) && (l_15 != m_15)))
              _fail(m_15);
            else
              l_15 = m_15;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(a_15)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(l_15)), not_null(y_14)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL;
  ATerm c_12 = t;
  int g_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
      f_16 = t;
      z_15 :
      if(match_cons(f_16, sym_prod_3))
        {
          g_16 = ATgetArgument(f_16, 0);
          h_16 = ATgetArgument(f_16, 1);
          i_16 = ATgetArgument(f_16, 2);
          {
            if(((c_16 != NULL) && (c_16 != g_16)))
              _fail(g_16);
            else
              c_16 = g_16;
            {
              if(((d_16 != NULL) && (d_16 != h_16)))
                _fail(h_16);
              else
                d_16 = h_16;
              {
                if(((e_16 != NULL) && (e_16 != i_16)))
                  _fail(i_16);
                else
                  e_16 = i_16;
                {
                  t = not_null(e_16);
                  {
                    ATerm h_1 (ATerm t)
                    {
                      ATerm k_16 = NULL,l_16 = NULL;
                      k_16 = t;
                      u_15 :
                      if(match_cons(k_16, sym_cons_1))
                        {
                          l_16 = ATgetArgument(k_16, 0);
                          if(((a_16 != NULL) && (a_16 != l_16)))
                            _fail(l_16);
                          else
                            a_16 = l_16;
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, h_1);
                  }
                  {
                    t = not_null(c_16);
                    {
                      ATerm i_1 (ATerm t)
                      {
                        t = not_null(a_16);
                        return(t);
                      }
                      t = symbols2pp_entries_1(t, i_1);
                    }
                  }
                }
              }
            }
          }
        }
      else
        {
          if(match_cons(f_16, sym_prod_fun_4))
            {
              g_16 = ATgetArgument(f_16, 0);
              h_16 = ATgetArgument(f_16, 1);
              i_16 = ATgetArgument(f_16, 2);
              j_16 = ATgetArgument(f_16, 3);
              {
                ATerm m_16 = NULL;
                if(((b_16 != NULL) && (b_16 != g_16)))
                  _fail(g_16);
                else
                  b_16 = g_16;
                {
                  if(((c_16 != NULL) && (c_16 != h_16)))
                    _fail(h_16);
                  else
                    c_16 = h_16;
                  {
                    if(((d_16 != NULL) && (d_16 != i_16)))
                      _fail(i_16);
                    else
                      d_16 = i_16;
                    {
                      if(((e_16 != NULL) && (e_16 != j_16)))
                        _fail(j_16);
                      else
                        e_16 = j_16;
                      {
                        ATerm n_16 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_l_12)), not_null(c_16)), (ATerm) ATinsert(ATinsert(ATempty, term_j_12), (ATerm) ATmakeAppl(sym_lit_1, not_null(b_16))));
                        {
                          t = concat_0(t);
                          {
                            n_16 = t;
                            if(((m_16 != NULL) && (m_16 != n_16)))
                              _fail(n_16);
                            else
                              m_16 = n_16;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(m_16), not_null(d_16), not_null(e_16));
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
      LocalPopChoice(g_12);
    }
  else
    {
      t = c_12;
      {
        ATerm j_1 (ATerm t)
        {
          ATerm m_12 = t;
          if((PushChoice() == 0))
            {
              ATerm k_1 (ATerm t)
              {
                t = term_n_12;
                return(t);
              }
              t = has_option_1(t, k_1);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = m_12;
            }
          {
            ATerm l_1 (ATerm t)
            {
              t = term_o_12;
              return(t);
            }
            t = debug_1(t, l_1);
          }
          return(t);
        }
        t = try_1(t, j_1);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm n_66 (ATerm))
{
  ATerm t_16 (ATerm t)
  {
    ATerm p_12 = t;
    int q_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = n_66(t);
        LocalPopChoice(q_12);
      }
    else
      {
        t = p_12;
        t = Cons_2(t, _id, t_16);
      }
    return(t);
  }
  t = t_16(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm w_16 = NULL,x_16 = NULL,y_16 = NULL;
  w_16 = t;
  v_16 :
  if(((ATgetType(w_16) == AT_LIST) && ((ATermList) w_16 != ATempty)))
    {
      x_16 = ATgetFirst((ATermList) w_16);
      y_16 = (ATerm) ATgetNext((ATermList) w_16);
      t = not_null(y_16);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  d_17 :
  if(((ATgetType(e_17) == AT_LIST) && ((ATermList) e_17 != ATempty)))
    {
      f_17 = ATgetFirst((ATermList) e_17);
      g_17 = (ATerm) ATgetNext((ATermList) e_17);
      t = not_null(f_17);
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
    ATerm u_12;
    u_12 = t;
    {
      ATerm l_18 = NULL;
      t = Hd_0(t);
      {
        l_18 = t;
        t_17 :
        if(!(match_int(l_18, 34)))
          {
            _fail(t);
          }
      }
    }
    t = u_12;
    {
      t = Tl_0(t);
      {
        ATerm m_1 (ATerm t)
        {
          ATerm m_18 = NULL,n_18 = NULL,o_18 = NULL;
          m_18 = t;
          v_17 :
          if(((ATgetType(m_18) == AT_LIST) && ((ATermList) m_18 != ATempty)))
            {
              n_18 = ATgetFirst((ATermList) m_18);
              o_18 = (ATerm) ATgetNext((ATermList) m_18);
              w_17 :
              if(match_int(n_18, 34))
                {
                  k_18 :
                  if(((ATermList) o_18 == ATempty))
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
ATerm conc_0 (ATerm t)
{
  ATerm s_18 = NULL,t_18 = NULL,u_18 = NULL;
  s_18 = t;
  r_18 :
  if(match_cons(s_18, sym__2))
    {
      t_18 = ATgetArgument(s_18, 0);
      u_18 = ATgetArgument(s_18, 1);
      {
        t = not_null(t_18);
        {
          ATerm n_1 (ATerm t)
          {
            t = not_null(u_18);
            return(t);
          }
          t = at_end_1(t, n_1);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm l_60 (ATerm), ATerm m_60 (ATerm), ATerm n_60 (ATerm))
{
  ATerm w_12 = t;
  int x_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = l_60(t);
      LocalPopChoice(x_12);
    }
  else
    {
      t = w_12;
      {
        ATerm c_19 = NULL,d_19 = NULL,e_19 = NULL;
        c_19 = t;
        b_19 :
        if(((ATgetType(c_19) == AT_LIST) && ((ATermList) c_19 != ATempty)))
          {
            d_19 = ATgetFirst((ATermList) c_19);
            e_19 = (ATerm) ATgetNext((ATermList) c_19);
            {
              ATerm h_19 = NULL,j_19 = NULL;
              ATerm y_12;
              y_12 = t;
              {
                ATerm i_19 = NULL;
                t = not_null(d_19);
                {
                  t = n_60(t);
                  {
                    i_19 = t;
                    if(((h_19 != NULL) && (h_19 != i_19)))
                      _fail(i_19);
                    else
                      h_19 = i_19;
                  }
                }
              }
              t = y_12;
              {
                ATerm k_19 = NULL;
                t = not_null(e_19);
                {
                  t = foldr_3(t, l_60, m_60, n_60);
                  {
                    k_19 = t;
                    if(((j_19 != NULL) && (j_19 != k_19)))
                      _fail(k_19);
                    else
                      j_19 = k_19;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_19), not_null(j_19));
                  t = m_60(t);
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
ATerm crush_3 (ATerm t, ATerm y_61 (ATerm), ATerm z_61 (ATerm), ATerm a_62 (ATerm))
{
  ATerm z_19 = NULL;
  ATerm b_20 = NULL;
  z_19 = t;
  {
    ATerm c_20 = NULL;
    ATerm e_20 = NULL,f_20 = NULL,g_20 = NULL;
    t = not_null(z_19);
    {
      c_20 = t;
      {
        t = SSL_explode_term(not_null(c_20));
        {
          e_20 = t;
          y_19 :
          if(match_cons(e_20, sym__2))
            {
              f_20 = ATgetArgument(e_20, 0);
              g_20 = ATgetArgument(e_20, 1);
              if(((b_20 != NULL) && (b_20 != g_20)))
                _fail(g_20);
              else
                b_20 = g_20;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_20);
      t = foldr_3(t, y_61, z_61, a_62);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm x_50 (ATerm))
{
  ATerm p_20 (ATerm t)
  {
    ATerm z_12 = t;
    int e_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_20 = NULL;
        t = x_50(t);
        {
          n_20 = t;
          t = (ATerm) ATinsert(ATempty, not_null(n_20));
        }
        LocalPopChoice(e_13);
      }
    else
      {
        t = z_12;
        {
          ATerm o_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, o_1, conc_0, p_20);
        }
      }
    return(t);
  }
  t = p_20(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm z_21 = NULL;
  ATerm t_1 (ATerm t)
  {
    ATerm j_21 = NULL,k_21 = NULL;
    j_21 = t;
    s_20 :
    if(match_cons(j_21, sym_context_free_syntax_1))
      {
        k_21 = ATgetArgument(j_21, 0);
        t = not_null(k_21);
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
        ATerm x_1 (ATerm t)
        {
          ATerm m_21 = NULL,n_21 = NULL;
          m_21 = t;
          z_20 :
          if(match_cons(m_21, sym_cons_1))
            {
              n_21 = ATgetArgument(m_21, 0);
              {
                ATerm p_21 = NULL;
                ATerm q_21 = NULL;
                t = not_null(n_21);
                {
                  t = de_quote_0(t);
                  {
                    q_21 = t;
                    if(((p_21 != NULL) && (p_21 != q_21)))
                      _fail(q_21);
                    else
                      p_21 = q_21;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_cons_1, not_null(p_21));
              }
            }
          else
            {
              if(match_cons(m_21, sym_lit_1))
                {
                  n_21 = ATgetArgument(m_21, 0);
                  {
                    ATerm t_21 = NULL;
                    ATerm u_21 = NULL;
                    t = not_null(n_21);
                    {
                      t = de_quote_0(t);
                      {
                        u_21 = t;
                        if(((t_21 != NULL) && (t_21 != u_21)))
                          _fail(u_21);
                        else
                          t_21 = u_21;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_lit_1, not_null(t_21));
                  }
                }
              else
                {
                  if(match_cons(m_21, sym_sort_1))
                    {
                      n_21 = ATgetArgument(m_21, 0);
                      {
                        ATerm w_21 = NULL;
                        ATerm x_21 = NULL;
                        t = not_null(n_21);
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
                        t = (ATerm) ATmakeAppl(sym_sort_1, not_null(w_21));
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
        t = try_1(t, x_1);
        return(t);
      }
      t = topdown_1(t, u_1);
      {
        t = map_1(t, generate_pp_entries_0);
        {
          ATerm y_1 (ATerm t)
          {
            ATerm f_13 = t;
            if((PushChoice() == 0))
              {
                ATerm y_21 = NULL;
                y_21 = t;
                a_21 :
                if(((ATermList) y_21 == ATempty))
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
                t = f_13;
              }
            return(t);
          }
          t = filter_1(t, y_1);
          {
            t = concat_0(t);
            {
              z_21 = t;
              {
                t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(z_21));
                {
                  ATerm z_1 (ATerm t)
                  {
                    ATerm a_2 (ATerm t)
                    {
                      ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL;
                      c_22 = t;
                      i_21 :
                      if(match_cons(c_22, sym_Arg_1))
                        {
                          d_22 = ATgetArgument(c_22, 0);
                          {
                            ATerm f_22 = NULL;
                            ATerm g_22 = NULL;
                            t = not_null(d_22);
                            {
                              t = int_to_string_0(t);
                              {
                                g_22 = t;
                                if(((f_22 != NULL) && (f_22 != g_22)))
                                  _fail(g_22);
                                else
                                  f_22 = g_22;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(f_22));
                          }
                        }
                      else
                        {
                          if(match_cons(c_22, sym_selector_2))
                            {
                              d_22 = ATgetArgument(c_22, 0);
                              b_22 = ATgetArgument(c_22, 1);
                              {
                                ATerm l_22 = NULL;
                                ATerm m_22 = NULL;
                                t = not_null(d_22);
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
                                t = (ATerm) ATmakeAppl(sym_selector_2, not_null(l_22), not_null(b_22));
                              }
                            }
                          else
                            {
                              if(match_cons(c_22, sym_S_1))
                                {
                                  d_22 = ATgetArgument(c_22, 0);
                                  {
                                    ATerm o_22 = NULL;
                                    ATerm p_22 = NULL;
                                    t = not_null(d_22);
                                    {
                                      t = quote_0(t);
                                      {
                                        p_22 = t;
                                        if(((o_22 != NULL) && (o_22 != p_22)))
                                          _fail(p_22);
                                        else
                                          o_22 = p_22;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(o_22));
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
                    t = try_1(t, a_2);
                    return(t);
                  }
                  t = topdown_1(t, z_1);
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
ATerm _2 (ATerm t, ATerm x_38 (ATerm), ATerm y_38 (ATerm))
{
  ATerm k_23 = NULL,l_23 = NULL,m_23 = NULL;
  k_23 = t;
  j_23 :
  if(match_cons(k_23, sym__2))
    {
      l_23 = ATgetArgument(k_23, 0);
      m_23 = ATgetArgument(k_23, 1);
      {
        ATerm p_23 = NULL;
        t = not_null(l_23);
        {
          ATerm r_23 = NULL;
          t = x_38(t);
          {
            p_23 = t;
            {
              t = not_null(m_23);
              {
                t = y_38(t);
                {
                  r_23 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_23), not_null(r_23));
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
    ATerm x_23 = NULL;
    ATerm y_23 = NULL;
    y_23 = t;
    if(((x_23 != NULL) && (x_23 != y_23)))
      _fail(y_23);
    else
      x_23 = y_23;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, not_null(x_23));
      t = printnl_0(t);
    }
  }
  t = g_13;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm h_13;
  h_13 = t;
  {
    t = error_0(t);
    {
      t = term_m_9;
      t = exit_0(t);
    }
  }
  t = h_13;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm d_70 (ATerm))
{
  ATerm a_24 (ATerm t)
  {
    ATerm i_13 = t;
    int j_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_70(t);
        LocalPopChoice(j_13);
      }
    else
      {
        t = i_13;
        t = _one(t, a_24);
      }
    return(t);
  }
  t = a_24(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm e_24 = NULL,f_24 = NULL,g_24 = NULL;
  e_24 = t;
  d_24 :
  if(match_cons(e_24, sym__2))
    {
      f_24 = ATgetArgument(e_24, 0);
      g_24 = ATgetArgument(e_24, 1);
      {
        t = not_null(g_24);
        {
          ATerm c_2 (ATerm t)
          {
            ATerm j_24 = NULL;
            j_24 = t;
            if(((f_24 != NULL) && (f_24 != j_24)))
              _fail(j_24);
            else
              f_24 = j_24;
            return(t);
          }
          t = oncetd_1(t, c_2);
        }
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
  t = term_q_13;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm o_24 = NULL;
  ATerm q_24 = NULL;
  o_24 = t;
  {
    ATerm r_24 = NULL;
    t = get_options_0(t);
    {
      r_24 = t;
      {
        if(((q_24 != NULL) && (q_24 != r_24)))
          _fail(r_24);
        else
          q_24 = r_24;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(o_24), not_null(q_24));
          t = in_0(t);
        }
      }
    }
    t = term_o_8;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm b_56 (ATerm))
{
  ATerm r_13;
  r_13 = t;
  {
    t = term_o_8;
    {
      t = b_56(t);
      t = check_option_0(t);
    }
  }
  t = r_13;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm s_13 = t;
  int u_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        t = term_h_14;
        return(t);
      }
      t = has_option_1(t, d_2);
      {
        t = (ATerm) ATinsert(ATempty, term_i_14);
        t = fatal_error_0(t);
      }
      LocalPopChoice(u_13);
    }
  else
    {
      t = s_13;
      {
        t = (ATerm) ATinsert(ATempty, term_j_14);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm n_50 (ATerm))
{
  ATerm c_25 = NULL,d_25 = NULL,e_25 = NULL;
  c_25 = t;
  a_25 :
  if(match_cons(c_25, sym__2))
    {
      d_25 = ATgetArgument(c_25, 0);
      e_25 = ATgetArgument(c_25, 1);
      b_25 :
      if(match_string(d_25, "in-type"))
        {
          ATerm g_25 = NULL,h_25 = NULL;
          ATerm k_14;
          k_14 = t;
          {
            ATerm i_25 = NULL;
            ATerm k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL,o_25 = NULL;
            t = not_null(e_25);
            {
              i_25 = t;
              {
                t = SSL_explode_term(not_null(i_25));
                {
                  k_25 = t;
                  x_24 :
                  if(match_cons(k_25, sym__2))
                    {
                      l_25 = ATgetArgument(k_25, 0);
                      m_25 = ATgetArgument(k_25, 1);
                      y_24 :
                      if(((ATgetType(m_25) == AT_LIST) && ((ATermList) m_25 != ATempty)))
                        {
                          n_25 = ATgetFirst((ATermList) m_25);
                          o_25 = (ATerm) ATgetNext((ATermList) m_25);
                          z_24 :
                          if(((ATermList) o_25 == ATempty))
                            {
                              {
                                if(((h_25 != NULL) && (h_25 != l_25)))
                                  _fail(l_25);
                                else
                                  h_25 = l_25;
                                if(((g_25 != NULL) && (g_25 != n_25)))
                                  _fail(n_25);
                                else
                                  g_25 = n_25;
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
          t = k_14;
          {
            t = not_null(h_25);
            {
              ATerm l_14 = t;
              int m_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = n_50(t);
                  LocalPopChoice(m_14);
                }
              else
                {
                  t = l_14;
                  t = type_failure_0(t);
                }
            }
            t = not_null(g_25);
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
  ATerm u_25 = NULL,v_25 = NULL,w_25 = NULL;
  u_25 = t;
  t_25 :
  if(match_cons(u_25, sym__2))
    {
      v_25 = ATgetArgument(u_25, 0);
      w_25 = ATgetArgument(u_25, 1);
      t = SSL_mkterm(not_null(v_25), not_null(w_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm o_50 (ATerm))
{
  ATerm f_26 = NULL,g_26 = NULL,h_26 = NULL;
  f_26 = t;
  d_26 :
  if(match_cons(f_26, sym__2))
    {
      g_26 = ATgetArgument(f_26, 0);
      h_26 = ATgetArgument(f_26, 1);
      e_26 :
      if(match_string(g_26, "out-type"))
        {
          ATerm j_26 = NULL;
          ATerm k_26 = NULL,m_26 = NULL;
          ATerm l_26 = NULL;
          t = term_o_8;
          {
            t = o_50(t);
            {
              l_26 = t;
              if(((k_26 != NULL) && (k_26 != l_26)))
                _fail(l_26);
              else
                k_26 = l_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), (ATerm) ATinsert(ATempty, not_null(h_26)));
            {
              t = mkterm_0(t);
              {
                m_26 = t;
                if(((j_26 != NULL) && (j_26 != m_26)))
                  _fail(m_26);
                else
                  j_26 = m_26;
              }
            }
          }
          t = not_null(j_26);
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
ATerm InOutId_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm r_14 = t;
  int s_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_2 (ATerm t)
      {
        ATerm s_26 = NULL;
        s_26 = t;
        q_26 :
        if(!(match_string(s_26, "out-type")))
          {
            _fail(t);
          }
        return(t);
      }
      t = _2(t, e_2, _id);
      t = OutId_1(t, j_0);
      LocalPopChoice(s_14);
    }
  else
    {
      t = r_14;
      {
        ATerm g_2 (ATerm t)
        {
          ATerm t_26 = NULL;
          t_26 = t;
          r_26 :
          if(!(match_string(t_26, "in-type")))
            {
              _fail(t);
            }
          return(t);
        }
        t = _2(t, g_2, _id);
        t = InId_1(t, i_0);
      }
    }
  return(t);
}
ATerm termid_set_p__1 (ATerm t, ATerm v_50 (ATerm))
{
  ATerm x_26 = NULL,y_26 = NULL,z_26 = NULL;
  x_26 = t;
  w_26 :
  if(match_cons(x_26, sym__2))
    {
      y_26 = ATgetArgument(x_26, 0);
      z_26 = ATgetArgument(x_26, 1);
      {
        ATerm c_27 = NULL;
        ATerm d_27 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_t_14, not_null(z_26));
        {
          t = v_50(t);
          {
            d_27 = t;
            if(((c_27 != NULL) && (c_27 != d_27)))
              _fail(d_27);
            else
              c_27 = d_27;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_26), not_null(c_27));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_72 (ATerm))
{
  ATerm u_14 = t;
  int v_14 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_72(t);
      LocalPopChoice(v_14);
    }
  else
    {
      t = u_14;
      {
      }
    }
  return(t);
}
ATerm termid_check_p__1 (ATerm t, ATerm t_50 (ATerm))
{
  ATerm j_27 = NULL,k_27 = NULL,l_27 = NULL;
  j_27 = t;
  i_27 :
  if(match_cons(j_27, sym__2))
    {
      k_27 = ATgetArgument(j_27, 0);
      l_27 = ATgetArgument(j_27, 1);
      {
        ATerm o_27 = NULL;
        ATerm p_27 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, term_w_14, not_null(l_27));
        {
          t = t_50(t);
          {
            p_27 = t;
            if(((o_27 != NULL) && (o_27 != p_27)))
              _fail(p_27);
            else
              o_27 = p_27;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(k_27), not_null(o_27));
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
  ATerm w_27 = NULL;
  ATerm x_14;
  x_14 = t;
  {
    ATerm h_2 (ATerm t)
    {
      ATerm x_27 = NULL,y_27 = NULL;
      x_27 = t;
      v_27 :
      if(match_cons(x_27, sym_Program_1))
        {
          y_27 = ATgetArgument(x_27, 0);
          if(((w_27 != NULL) && (w_27 != y_27)))
            _fail(y_27);
          else
            w_27 = y_27;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, h_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_15), not_null(w_27)), term_c_15));
      {
        t = printnl_0(t);
        {
          t = term_m_9;
          t = exit_0(t);
        }
      }
    }
  }
  t = x_14;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, term_e_15));
  {
    t = printnl_0(t);
    {
      t = term_m_9;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm f_28 = NULL,g_28 = NULL;
  ATerm j_2 (ATerm t)
  {
    ATerm o_2 (ATerm t)
    {
      ATerm f_15 = t;
      if((PushChoice() == 0))
        {
          ATerm p_2 (ATerm t)
          {
            ATerm h_28 = NULL;
            h_28 = t;
            a_28 :
            if(!(match_cons(h_28, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, p_2);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = f_15;
        }
      return(t);
    }
    t = _2(t, o_2, _id);
    {
      ATerm q_2 (ATerm t)
      {
        ATerm r_2 (ATerm t)
        {
          ATerm i_28 = NULL,j_28 = NULL;
          i_28 = t;
          c_28 :
          if(match_cons(i_28, sym_Runtime_1))
            {
              j_28 = ATgetArgument(i_28, 0);
              if(((g_28 != NULL) && (g_28 != j_28)))
                _fail(j_28);
              else
                g_28 = j_28;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, r_2);
        return(t);
      }
      t = _2(t, q_2, _id);
      {
        ATerm w_2 (ATerm t)
        {
          ATerm x_2 (ATerm t)
          {
            ATerm k_28 = NULL,l_28 = NULL;
            k_28 = t;
            e_28 :
            if(match_cons(k_28, sym_Program_1))
              {
                l_28 = ATgetArgument(k_28, 0);
                if(((f_28 != NULL) && (f_28 != l_28)))
                  _fail(l_28);
                else
                  f_28 = l_28;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, x_2);
          return(t);
        }
        t = _2(t, w_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_h_15), not_null(g_28)), term_g_15), not_null(f_28)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, j_2);
  {
    t = term_i_15;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym__2))
    {
      r_28 = ATgetArgument(q_28, 0);
      s_28 = ATgetArgument(q_28, 1);
      t = SSL_WriteToTextFile(not_null(r_28), not_null(s_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm y_28 = NULL,z_28 = NULL,a_29 = NULL;
  y_28 = t;
  x_28 :
  if(match_cons(y_28, sym__2))
    {
      z_28 = ATgetArgument(y_28, 0);
      a_29 = ATgetArgument(y_28, 1);
      t = SSL_WriteToBinaryFile(not_null(z_28), not_null(a_29));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_29 = NULL;
  ATerm n_15;
  n_15 = t;
  {
    ATerm c_3 (ATerm t)
    {
      ATerm o_15 = t;
      int p_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_3 (ATerm t)
          {
            ATerm k_29 = NULL,l_29 = NULL;
            k_29 = t;
            f_29 :
            if(match_cons(k_29, sym_Output_1))
              {
                l_29 = ATgetArgument(k_29, 0);
                if(((i_29 != NULL) && (i_29 != l_29)))
                  _fail(l_29);
                else
                  i_29 = l_29;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_3);
          LocalPopChoice(p_15);
        }
      else
        {
          t = o_15;
          {
            ATerm m_29 = NULL;
            t = term_q_15;
            {
              m_29 = t;
              if(((i_29 != NULL) && (i_29 != m_29)))
                _fail(m_29);
              else
                i_29 = m_29;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_3, _id);
  }
  t = n_15;
  {
    ATerm f_3 (ATerm t)
    {
      ATerm g_3 (ATerm t)
      {
        t = not_null(i_29);
        return(t);
      }
      t = split_2(t, g_3, _id);
      return(t);
    }
    t = _2(t, _id, f_3);
    {
      ATerm r_15 = t;
      int s_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_3 (ATerm t)
          {
            ATerm l_3 (ATerm t)
            {
              ATerm n_29 = NULL;
              n_29 = t;
              h_29 :
              if(!(match_cons(n_29, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, l_3);
            return(t);
          }
          t = _2(t, h_3, WriteToBinaryFile_0);
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
ATerm apply_strategy_1 (ATerm t, ATerm f_56 (ATerm))
{
  ATerm t_29 = NULL,v_29 = NULL,w_29 = NULL,x_29 = NULL;
  ATerm t_15;
  t_15 = t;
  t = dtime_0(t);
  t = t_15;
  {
    t = f_56(t);
    {
      ATerm v_15;
      v_15 = t;
      {
        ATerm u_29 = NULL;
        t = dtime_0(t);
        {
          u_29 = t;
          if(((t_29 != NULL) && (t_29 != u_29)))
            _fail(u_29);
          else
            t_29 = u_29;
        }
      }
      t = v_15;
      {
        v_29 = t;
        s_29 :
        if(match_cons(v_29, sym__2))
          {
            w_29 = ATgetArgument(v_29, 0);
            x_29 = ATgetArgument(v_29, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(w_29)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(t_29))), not_null(x_29));
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
  ATerm d_30 = NULL;
  d_30 = t;
  t = SSL_ReadFromFile(not_null(d_30));
  return(t);
}
ATerm split_2 (ATerm t, ATerm x_58 (ATerm), ATerm y_58 (ATerm))
{
  ATerm i_30 = NULL,k_30 = NULL;
  ATerm w_15;
  w_15 = t;
  {
    ATerm j_30 = NULL;
    t = x_58(t);
    {
      j_30 = t;
      if(((i_30 != NULL) && (i_30 != j_30)))
        _fail(j_30);
      else
        i_30 = j_30;
    }
  }
  t = w_15;
  {
    ATerm l_30 = NULL;
    t = y_58(t);
    {
      l_30 = t;
      if(((k_30 != NULL) && (k_30 != l_30)))
        _fail(l_30);
      else
        k_30 = l_30;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_30), not_null(k_30));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm r_30 = NULL;
  ATerm x_15;
  x_15 = t;
  {
    ATerm y_15 = t;
    int o_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm n_3 (ATerm t)
        {
          ATerm s_30 = NULL,t_30 = NULL;
          s_30 = t;
          p_30 :
          if(match_cons(s_30, sym_Input_1))
            {
              t_30 = ATgetArgument(s_30, 0);
              if(((r_30 != NULL) && (r_30 != t_30)))
                _fail(t_30);
              else
                r_30 = t_30;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_3);
        LocalPopChoice(o_16);
      }
    else
      {
        t = y_15;
        {
          ATerm u_30 = NULL;
          t = term_p_16;
          {
            u_30 = t;
            if(((r_30 != NULL) && (r_30 != u_30)))
              _fail(u_30);
            else
              r_30 = u_30;
          }
        }
      }
  }
  t = x_15;
  {
    ATerm o_3 (ATerm t)
    {
      t = not_null(r_30);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, o_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_30 = NULL;
  y_30 = t;
  x_30 :
  if(!(match_cons(y_30, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm e_56 (ATerm))
{
  ATerm p_3 (ATerm t)
  {
    ATerm q_16 = t;
    int r_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(r_16);
      }
    else
      {
        t = q_16;
        {
          ATerm s_16 = t;
          int u_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(u_16);
            }
          else
            {
              t = s_16;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, p_3);
  t = e_56(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_31 = NULL;
  a_31 = t;
  t = SSL_table_create(not_null(a_31));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_31 = NULL;
  e_31 = t;
  {
    ATerm z_16;
    z_16 = t;
    {
      t = term_k_13;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_k_13, term_l_13, not_null(e_31));
          t = table_put_0(t);
        }
      }
    }
    t = z_16;
  }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm k_31 = NULL,l_31 = NULL,m_31 = NULL,n_31 = NULL;
  k_31 = t;
  j_31 :
  if(match_cons(k_31, sym__3))
    {
      l_31 = ATgetArgument(k_31, 0);
      m_31 = ATgetArgument(k_31, 1);
      n_31 = ATgetArgument(k_31, 2);
      {
        ATerm a_17;
        a_17 = t;
        {
          ATerm r_31 = NULL;
          ATerm s_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_31), not_null(m_31));
          {
            ATerm b_17 = t;
            int c_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(c_17);
              }
            else
              {
                t = b_17;
                t = (ATerm) ATempty;
              }
            {
              s_31 = t;
              if(((r_31 != NULL) && (r_31 != s_31)))
                _fail(s_31);
              else
                r_31 = s_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(l_31), not_null(m_31), (ATerm) ATinsert(CheckATermList(not_null(r_31)), not_null(n_31)));
            t = table_put_0(t);
          }
        }
        t = a_17;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_54 (ATerm))
{
  ATerm w_31 = NULL;
  ATerm x_31 = NULL;
  t = term_o_8;
  {
    t = p_54(t);
    {
      x_31 = t;
      if(((w_31 != NULL) && (w_31 != x_31)))
        _fail(x_31);
      else
        w_31 = x_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_h_17, term_i_17, not_null(w_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm f_0 (ATerm), ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL;
  e_32 = t;
  c_32 :
  if(match_string(e_32, "register-usage-info"))
    {
      t = register_usage_1(t, h_0);
    }
  else
    {
      if(((ATgetType(e_32) == AT_LIST) && ((ATermList) e_32 != ATempty)))
        {
          f_32 = ATgetFirst((ATermList) e_32);
          g_32 = (ATerm) ATgetNext((ATermList) e_32);
          d_32 :
          if(((ATgetType(g_32) == AT_LIST) && ((ATermList) g_32 != ATempty)))
            {
              h_32 = ATgetFirst((ATermList) g_32);
              i_32 = (ATerm) ATgetNext((ATermList) g_32);
              {
                ATerm m_32 = NULL;
                ATerm j_17;
                j_17 = t;
                {
                  t = not_null(f_32);
                  t = f_0(t);
                }
                t = j_17;
                {
                  ATerm n_32 = NULL;
                  t = not_null(h_32);
                  {
                    t = g_0(t);
                    {
                      n_32 = t;
                      if(((m_32 != NULL) && (m_32 != n_32)))
                        _fail(n_32);
                      else
                        m_32 = n_32;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(i_32)), not_null(m_32));
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
  ATerm k_17 = t;
  int l_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_3 (ATerm t)
      {
        ATerm c_33 = NULL;
        c_33 = t;
        r_32 :
        if(!(match_string(c_33, "-S")))
          {
            if(!(match_string(c_33, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        t = term_n_12;
        return(t);
      }
      ATerm s_3 (ATerm t)
      {
        t = term_m_17;
        return(t);
      }
      t = Option_3(t, q_3, r_3, s_3);
      LocalPopChoice(l_17);
    }
  else
    {
      t = k_17;
      {
        ATerm n_17 = t;
        int o_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_4 (ATerm t)
            {
              ATerm d_33 = NULL;
              d_33 = t;
              s_32 :
              if(!(match_string(d_33, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              t = term_p_17;
              return(t);
            }
            ATerm c_4 (ATerm t)
            {
              t = term_q_17;
              return(t);
            }
            t = Option_3(t, a_4, b_4, c_4);
            LocalPopChoice(o_17);
          }
        else
          {
            t = n_17;
            {
              ATerm r_17 = t;
              int s_17 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_4 (ATerm t)
                  {
                    ATerm e_33 = NULL;
                    e_33 = t;
                    t_32 :
                    if(!(match_string(e_33, "-v")))
                      {
                        if(!(match_string(e_33, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm g_4 (ATerm t)
                  {
                    t = term_u_17;
                    return(t);
                  }
                  ATerm h_4 (ATerm t)
                  {
                    t = term_x_17;
                    return(t);
                  }
                  t = Option_3(t, f_4, g_4, h_4);
                  LocalPopChoice(s_17);
                }
              else
                {
                  t = r_17;
                  {
                    ATerm y_17 = t;
                    int z_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm j_4 (ATerm t)
                        {
                          ATerm f_33 = NULL;
                          f_33 = t;
                          u_32 :
                          if(!(match_string(f_33, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm l_4 (ATerm t)
                        {
                          ATerm g_33 = NULL;
                          ATerm h_33 = NULL;
                          h_33 = t;
                          if(((g_33 != NULL) && (g_33 != h_33)))
                            _fail(h_33);
                          else
                            g_33 = h_33;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(g_33));
                          return(t);
                        }
                        ATerm m_4 (ATerm t)
                        {
                          t = term_a_18;
                          return(t);
                        }
                        t = ArgOption_3(t, j_4, l_4, m_4);
                        LocalPopChoice(z_17);
                      }
                    else
                      {
                        t = y_17;
                        {
                          ATerm b_18 = t;
                          int c_18 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm n_4 (ATerm t)
                              {
                                ATerm m_33 = NULL;
                                m_33 = t;
                                w_32 :
                                if(!(match_string(m_33, "-i")))
                                  {
                                    if(!(match_string(m_33, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                ATerm n_33 = NULL;
                                ATerm o_33 = NULL;
                                o_33 = t;
                                if(((n_33 != NULL) && (n_33 != o_33)))
                                  _fail(o_33);
                                else
                                  n_33 = o_33;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(n_33));
                                return(t);
                              }
                              ATerm p_4 (ATerm t)
                              {
                                t = term_d_18;
                                return(t);
                              }
                              t = ArgOption_3(t, n_4, o_4, p_4);
                              LocalPopChoice(c_18);
                            }
                          else
                            {
                              t = b_18;
                              {
                                ATerm e_18 = t;
                                int f_18 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_4 (ATerm t)
                                    {
                                      ATerm p_33 = NULL;
                                      p_33 = t;
                                      y_32 :
                                      if(!(match_string(p_33, "-o")))
                                        {
                                          if(!(match_string(p_33, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm r_4 (ATerm t)
                                    {
                                      ATerm q_33 = NULL;
                                      ATerm r_33 = NULL;
                                      r_33 = t;
                                      if(((q_33 != NULL) && (q_33 != r_33)))
                                        _fail(r_33);
                                      else
                                        q_33 = r_33;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(q_33));
                                      return(t);
                                    }
                                    ATerm s_4 (ATerm t)
                                    {
                                      t = term_g_18;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, q_4, r_4, s_4);
                                    LocalPopChoice(f_18);
                                  }
                                else
                                  {
                                    t = e_18;
                                    {
                                      ATerm h_18 = t;
                                      int i_18 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm t_4 (ATerm t)
                                          {
                                            ATerm s_33 = NULL;
                                            s_33 = t;
                                            a_33 :
                                            if(!(match_string(s_33, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm u_4 (ATerm t)
                                          {
                                            t = term_j_18;
                                            return(t);
                                          }
                                          ATerm v_4 (ATerm t)
                                          {
                                            t = term_p_18;
                                            return(t);
                                          }
                                          t = Option_3(t, t_4, u_4, v_4);
                                          LocalPopChoice(i_18);
                                        }
                                      else
                                        {
                                          t = h_18;
                                          {
                                            ATerm x_4 (ATerm t)
                                            {
                                              ATerm t_33 = NULL;
                                              t_33 = t;
                                              b_33 :
                                              if(!(match_string(t_33, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm y_4 (ATerm t)
                                            {
                                              t = term_q_18;
                                              return(t);
                                            }
                                            ATerm z_4 (ATerm t)
                                            {
                                              t = term_v_18;
                                              return(t);
                                            }
                                            t = Option_3(t, x_4, y_4, z_4);
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
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_34 = NULL;
  b_34 = t;
  t = SSL_table_destroy(not_null(b_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm j_34 = NULL;
  j_34 = t;
  t = SSL_exit(not_null(j_34));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm n_34 = NULL;
  n_34 = t;
  t = SSL_implode_string(not_null(n_34));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm d_66 (ATerm))
{
  ATerm q_34 (ATerm t)
  {
    ATerm w_18 = t;
    int x_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, q_34);
        LocalPopChoice(x_18);
      }
    else
      {
        t = w_18;
        {
          t = Nil_0(t);
          t = d_66(t);
        }
      }
    return(t);
  }
  t = q_34(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm y_18 = t;
  int z_18 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(z_18);
    }
  else
    {
      t = y_18;
      {
        ATerm t_34 = NULL,u_34 = NULL,v_34 = NULL;
        t_34 = t;
        s_34 :
        if(((ATgetType(t_34) == AT_LIST) && ((ATermList) t_34 != ATempty)))
          {
            u_34 = ATgetFirst((ATermList) t_34);
            v_34 = (ATerm) ATgetNext((ATermList) t_34);
            {
              t = not_null(u_34);
              {
                ATerm a_5 (ATerm t)
                {
                  t = not_null(v_34);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, a_5);
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
  ATerm b_35 = NULL;
  b_35 = t;
  t = SSL_explode_string(not_null(b_35));
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
ATerm long_description_1 (ATerm t, ATerm l_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm p_65 (ATerm))
{
  ATerm e_35 (ATerm t)
  {
    ATerm a_19 = t;
    int f_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_19);
      }
    else
      {
        t = a_19;
        t = Cons_2(t, p_65, e_35);
      }
    return(t);
  }
  t = e_35(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm m_35 = NULL,n_35 = NULL,o_35 = NULL;
  o_35 = t;
  l_35 :
  if(((ATgetType(o_35) == AT_LIST) && ((ATermList) o_35 != ATempty)))
    {
      m_35 = ATgetFirst((ATermList) o_35);
      n_35 = (ATerm) ATgetNext((ATermList) o_35);
      {
        ATerm r_35 = NULL;
        t = not_null(n_35);
        {
          ATerm g_19;
          g_19 = t;
          {
            ATerm s_35 = NULL,u_35 = NULL,w_35 = NULL;
            ATerm l_19;
            l_19 = t;
            {
              ATerm t_35 = NULL;
              t = c_0(t);
              {
                t_35 = t;
                if(((s_35 != NULL) && (s_35 != t_35)))
                  _fail(t_35);
                else
                  s_35 = t_35;
              }
            }
            t = l_19;
            {
              ATerm v_35 = NULL;
              t = not_null(m_35);
              {
                t = b_0(t);
                {
                  v_35 = t;
                  if(((u_35 != NULL) && (u_35 != v_35)))
                    _fail(v_35);
                  else
                    u_35 = v_35;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(s_35)), not_null(u_35));
                {
                  w_35 = t;
                  if(((r_35 != NULL) && (r_35 != w_35)))
                    _fail(w_35);
                  else
                    r_35 = w_35;
                }
              }
            }
          }
          t = g_19;
          {
            ATerm b_5 (ATerm t)
            {
              t = not_null(r_35);
              return(t);
            }
            t = reverse_acc_2(t, b_0, b_5);
          }
        }
      }
    }
  else
    {
      if(((ATermList) o_35 == ATempty))
        {
          {
            t = term_o_8;
            t = c_0(t);
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
  ATerm e_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, e_6);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym__2))
    {
      f_36 = ATgetArgument(e_36, 0);
      g_36 = ATgetArgument(e_36, 1);
      t = SSL_table_get(not_null(f_36), not_null(g_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm k_54 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm k_42 (ATerm))
{
  ATerm z_38 = NULL,a_39 = NULL;
  z_38 = t;
  w_38 :
  if(match_cons(z_38, sym_Program_1))
    {
      a_39 = ATgetArgument(z_38, 0);
      {
        ATerm c_39 = NULL;
        t = not_null(a_39);
        {
          t = k_42(t);
          {
            c_39 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(c_39));
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
  ATerm k_39 = NULL;
  ATerm g_6 (ATerm t)
  {
    ATerm h_6 (ATerm t)
    {
      ATerm l_39 = NULL;
      l_39 = t;
      if(((k_39 != NULL) && (k_39 != l_39)))
        _fail(l_39);
      else
        k_39 = l_39;
      return(t);
    }
    t = Program_1(t, h_6);
    return(t);
  }
  t = option_defined_1(t, g_6);
  {
    ATerm i_6 (ATerm t)
    {
      ATerm m_39 = NULL;
      ATerm n_39 = NULL;
      t = term_o_8;
      {
        ATerm j_6 (ATerm t)
        {
          t = not_null(k_39);
          return(t);
        }
        t = short_description_1(t, j_6);
        {
          t = concat_strings_0(t);
          {
            n_39 = t;
            if(((m_39 != NULL) && (m_39 != n_39)))
              _fail(n_39);
            else
              m_39 = n_39;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, not_null(m_39)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, i_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATempty, term_m_19));
      {
        t = printnl_0(t);
        {
          t = term_n_19;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm k_6 (ATerm t)
                {
                  ATerm o_39 = NULL;
                  o_39 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(o_39)), term_o_19));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, k_6);
                {
                  ATerm l_6 (ATerm t)
                  {
                    ATerm q_39 = NULL;
                    ATerm r_39 = NULL;
                    t = term_o_8;
                    {
                      ATerm m_6 (ATerm t)
                      {
                        t = not_null(k_39);
                        return(t);
                      }
                      t = long_description_1(t, m_6);
                      {
                        t = concat_strings_0(t);
                        {
                          r_39 = t;
                          if(((q_39 != NULL) && (q_39 != r_39)))
                            _fail(r_39);
                          else
                            q_39 = r_39;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(q_39)), term_p_19));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, l_6);
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
  ATerm y_39 = NULL,z_39 = NULL,a_40 = NULL;
  y_39 = t;
  x_39 :
  if(match_cons(y_39, sym__2))
    {
      z_39 = ATgetArgument(y_39, 0);
      a_40 = ATgetArgument(y_39, 1);
      {
        ATerm q_19;
        q_19 = t;
        t = SSL_printnl(not_null(z_39), not_null(a_40));
        t = q_19;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm l_42 (ATerm))
{
  ATerm h_40 = NULL,i_40 = NULL;
  h_40 = t;
  g_40 :
  if(match_cons(h_40, sym_Undefined_1))
    {
      i_40 = ATgetArgument(h_40, 0);
      {
        ATerm k_40 = NULL;
        t = not_null(i_40);
        {
          t = l_42(t);
          {
            k_40 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_40));
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
ATerm fetch_1 (ATerm t, ATerm x_65 (ATerm))
{
  ATerm o_40 (ATerm t)
  {
    ATerm r_19 = t;
    int s_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, x_65, _id);
        LocalPopChoice(s_19);
      }
    else
      {
        t = r_19;
        t = Cons_2(t, _id, o_40);
      }
    return(t);
  }
  t = o_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm j_55 (ATerm))
{
  t = fetch_1(t, j_55);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm q_40 = NULL;
  q_40 = t;
  p_40 :
  if(!(match_cons(q_40, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm n_6 (ATerm t)
  {
    ATerm s_40 = NULL;
    s_40 = t;
    r_40 :
    if(!(match_string(s_40, "--help")))
      {
        if(!(match_string(s_40, "-h")))
          {
            if(!(match_string(s_40, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm o_6 (ATerm t)
  {
    t = term_t_19;
    return(t);
  }
  ATerm s_6 (ATerm t)
  {
    t = term_u_19;
    return(t);
  }
  t = Option_3(t, n_6, o_6, s_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  u_40 :
  if(((ATgetType(v_40) == AT_LIST) && ((ATermList) v_40 != ATempty)))
    {
      w_40 = ATgetFirst((ATermList) v_40);
      x_40 = (ATerm) ATgetNext((ATermList) v_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(x_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(w_40)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm c_50 (ATerm), ATerm d_50 (ATerm))
{
  ATerm f_41 = NULL,g_41 = NULL,h_41 = NULL;
  f_41 = t;
  e_41 :
  if(((ATgetType(f_41) == AT_LIST) && ((ATermList) f_41 != ATempty)))
    {
      g_41 = ATgetFirst((ATermList) f_41);
      h_41 = (ATerm) ATgetNext((ATermList) f_41);
      {
        ATerm k_41 = NULL;
        t = not_null(g_41);
        {
          ATerm m_41 = NULL;
          t = c_50(t);
          {
            k_41 = t;
            {
              t = not_null(h_41);
              {
                t = d_50(t);
                {
                  m_41 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_41)), not_null(k_41));
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
  ATerm s_41 = NULL;
  s_41 = t;
  r_41 :
  if(((ATermList) s_41 == ATempty))
    {
      {
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_54 (ATerm))
{
  ATerm v_19;
  v_19 = t;
  {
    ATerm x_6 (ATerm t)
    {
      t = term_w_19;
      t = n_54(t);
      return(t);
    }
    t = try_1(t, x_6);
  }
  t = v_19;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm u_41 = NULL;
      u_41 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(u_41));
      return(t);
    }
    ATerm e_7 (ATerm t)
    {
      ATerm x_19 = t;
      int a_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_20 = t;
          int h_20 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_20);
            }
          else
            {
              t = d_20;
              {
                t = n_54(t);
                t = Cons_2(t, _id, e_7);
              }
            }
          LocalPopChoice(a_20);
        }
      else
        {
          t = x_19;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, b_7, e_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_42 = NULL,b_42 = NULL,c_42 = NULL;
  ATerm i_20;
  i_20 = t;
  {
    ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL;
    d_42 = t;
    z_41 :
    if(match_cons(d_42, sym__3))
      {
        e_42 = ATgetArgument(d_42, 0);
        f_42 = ATgetArgument(d_42, 1);
        g_42 = ATgetArgument(d_42, 2);
        {
          if(((a_42 != NULL) && (a_42 != e_42)))
            _fail(e_42);
          else
            a_42 = e_42;
          {
            if(((b_42 != NULL) && (b_42 != f_42)))
              _fail(f_42);
            else
              b_42 = f_42;
            {
              if(((c_42 != NULL) && (c_42 != g_42)))
                _fail(g_42);
              else
                c_42 = g_42;
              t = SSL_table_put(not_null(a_42), not_null(b_42), not_null(c_42));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_20;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_54 (ATerm))
{
  ATerm j_42 = NULL;
  ATerm j_20;
  j_20 = t;
  {
    t = term_k_20;
    t = table_put_0(t);
  }
  t = j_20;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm l_20 = t;
      int m_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_54(t);
          LocalPopChoice(m_20);
        }
      else
        {
          t = l_20;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, g_7);
    {
      ATerm i_7 (ATerm t)
      {
        ATerm o_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_i_15;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_20);
          }
        else
          {
            t = o_20;
            {
              ATerm o_7 (ATerm t)
              {
                ATerm p_7 (ATerm t)
                {
                  ATerm m_42 = NULL;
                  m_42 = t;
                  if(((j_42 != NULL) && (j_42 != m_42)))
                    _fail(m_42);
                  else
                    j_42 = m_42;
                  return(t);
                }
                t = Undefined_1(t, p_7);
                return(t);
              }
              t = option_defined_1(t, o_7);
              {
                ATerm r_20;
                r_20 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_a_9, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_42)), term_t_20));
                  t = printnl_0(t);
                }
                t = r_20;
                {
                  t = system_usage_0(t);
                  {
                    t = term_m_9;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, i_7);
      {
        ATerm u_20;
        u_20 = t;
        {
          t = term_h_17;
          t = table_destroy_0(t);
        }
        t = u_20;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm t_55 (ATerm), ATerm u_55 (ATerm), ATerm v_55 (ATerm))
{
  ATerm q_7 (ATerm t)
  {
    ATerm v_20 = t;
    int w_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_55(t);
        LocalPopChoice(w_20);
      }
    else
      {
        t = v_20;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_7);
  {
    t = store_options_0(t);
    {
      ATerm x_20 = t;
      int y_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, v_55);
          LocalPopChoice(y_20);
        }
      else
        {
          t = x_20;
          {
            ATerm b_21 = t;
            int c_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, t_55);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(c_21);
              }
            else
              {
                t = b_21;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_55 (ATerm), ATerm p_55 (ATerm))
{
  t = iowrap_3(t, o_55, p_55, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm k_50 (ATerm), ATerm l_50 (ATerm), ATerm m_50 (ATerm))
{
  ATerm r_7 (ATerm t)
  {
    ATerm t_7 (ATerm t)
    {
      t = termid_check_p__1(t, k_50);
      return(t);
    }
    t = try_1(t, t_7);
    {
      t = l_50(t);
      {
        ATerm u_7 (ATerm t)
        {
          t = termid_set_p__1(t, k_50);
          return(t);
        }
        t = try_1(t, u_7);
      }
    }
    return(t);
  }
  ATerm s_7 (ATerm t)
  {
    ATerm d_21 = t;
    int e_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_50(t);
        LocalPopChoice(e_21);
      }
    else
      {
        t = d_21;
        {
          ATerm v_7 (ATerm t)
          {
            ATerm p_42 = NULL;
            p_42 = t;
            o_42 :
            if(!(match_string(p_42, "--strict")))
              {
                _fail(t);
              }
            return(t);
          }
          ATerm w_7 (ATerm t)
          {
            t = term_h_14;
            return(t);
          }
          ATerm x_7 (ATerm t)
          {
            t = term_f_21;
            return(t);
          }
          t = Option_3(t, v_7, w_7, x_7);
        }
      }
    return(t);
  }
  t = iowrap_2(t, r_7, s_7);
  return(t);
}
ATerm Pp_gen_0 (ATerm t)
{
  ATerm y_7 (ATerm t)
  {
    ATerm f_8 (ATerm t)
    {
      ATerm s_42 = NULL;
      s_42 = t;
      q_42 :
      if(!(match_string(s_42, "\"sdf-2.1\"")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm g_8 (ATerm t)
    {
      t = term_g_21;
      return(t);
    }
    t = InOutId_2(t, f_8, g_8);
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    t = _2(t, _id, ppgenerate_0);
    return(t);
  }
  ATerm e_8 (ATerm t)
  {
    ATerm h_8 (ATerm t)
    {
      ATerm t_42 = NULL;
      t_42 = t;
      r_42 :
      if(!(match_string(t_42, "-v")))
        {
          _fail(t);
        }
      return(t);
    }
    ATerm i_8 (ATerm t)
    {
      t = term_p_17;
      return(t);
    }
    ATerm m_8 (ATerm t)
    {
      t = term_h_21;
      return(t);
    }
    t = Option_3(t, h_8, i_8, m_8);
    return(t);
  }
  t = io_idwrap_3(t, y_7, d_8, e_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Pp_gen_0(t);
  return(t);
}

#include <stratego.h>
#include <stratego-lib.h>
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
Symbol sym_atr_1;
Symbol sym_cons_1;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_flatlex_2;
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
  {
    sym__1 = ATmakeSymbol("", 1, ATfalse);
    ATprotectSymbol(sym__1);
  }
  {
    sym__2 = ATmakeSymbol("", 2, ATfalse);
    ATprotectSymbol(sym__2);
  }
  {
    sym__3 = ATmakeSymbol("", 3, ATfalse);
    ATprotectSymbol(sym__3);
  }
  {
    sym__4 = ATmakeSymbol("", 4, ATfalse);
    ATprotectSymbol(sym__4);
  }
  {
    sym__5 = ATmakeSymbol("", 5, ATfalse);
    ATprotectSymbol(sym__5);
  }
  {
    sym__6 = ATmakeSymbol("", 6, ATfalse);
    ATprotectSymbol(sym__6);
  }
  {
    sym__7 = ATmakeSymbol("", 7, ATfalse);
    ATprotectSymbol(sym__7);
  }
  {
    sym__8 = ATmakeSymbol("", 8, ATfalse);
    ATprotectSymbol(sym__8);
  }
  {
    sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
    ATprotectSymbol(sym_Strict_0);
  }
  {
    sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
    ATprotectSymbol(sym_bracket_symbol_1);
  }
  {
    sym_lexical_syntax_1 = ATmakeSymbol("lexical-syntax", 1, ATfalse);
    ATprotectSymbol(sym_lexical_syntax_1);
  }
  {
    sym_context_free_syntax_1 = ATmakeSymbol("context-free-syntax", 1, ATfalse);
    ATprotectSymbol(sym_context_free_syntax_1);
  }
  {
    sym_variables_1 = ATmakeSymbol("variables", 1, ATfalse);
    ATprotectSymbol(sym_variables_1);
  }
  {
    sym_lexical_variables_1 = ATmakeSymbol("lexical-variables", 1, ATfalse);
    ATprotectSymbol(sym_lexical_variables_1);
  }
  {
    sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
    ATprotectSymbol(sym_cf_1);
  }
  {
    sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
    ATprotectSymbol(sym_lex_1);
  }
  {
    sym_varsym_1 = ATmakeSymbol("varsym", 1, ATfalse);
    ATprotectSymbol(sym_varsym_1);
  }
  {
    sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
    ATprotectSymbol(sym_layout_0);
  }
  {
    sym_e_1 = ATmakeSymbol("e", 1, ATfalse);
    ATprotectSymbol(sym_e_1);
  }
  {
    sym_OptExp_empty_0 = ATmakeSymbol("OptExp-empty", 0, ATfalse);
    ATprotectSymbol(sym_OptExp_empty_0);
  }
  {
    sym_IntCon_NatCon_OptExp_3 = ATmakeSymbol("IntCon-NatCon-OptExp", 3, ATfalse);
    ATprotectSymbol(sym_IntCon_NatCon_OptExp_3);
  }
  {
    sym_NatCon_p__1 = ATmakeSymbol("NatCon'", 1, ATfalse);
    ATprotectSymbol(sym_NatCon_p__1);
  }
  {
    sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
    ATprotectSymbol(sym_plus_1);
  }
  {
    sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
    ATprotectSymbol(sym_minus_1);
  }
  {
    sym_ATerm_1 = ATmakeSymbol("ATerm", 1, ATfalse);
    ATprotectSymbol(sym_ATerm_1);
  }
  {
    sym_comma_2 = ATmakeSymbol("comma", 2, ATfalse);
    ATprotectSymbol(sym_comma_2);
  }
  {
    sym_ATermList_dunno_c__0_0 = ATmakeSymbol("ATermList-dunno-c_0", 0, ATfalse);
    ATprotectSymbol(sym_ATermList_dunno_c__0_0);
  }
  {
    sym_ATerms_1 = ATmakeSymbol("ATerms", 1, ATfalse);
    ATprotectSymbol(sym_ATerms_1);
  }
  {
    sym_IntCon_1 = ATmakeSymbol("IntCon", 1, ATfalse);
    ATprotectSymbol(sym_IntCon_1);
  }
  {
    sym_RealCon_1 = ATmakeSymbol("RealCon", 1, ATfalse);
    ATprotectSymbol(sym_RealCon_1);
  }
  {
    sym_Literal_p__1 = ATmakeSymbol("Literal'", 1, ATfalse);
    ATprotectSymbol(sym_Literal_p__1);
  }
  {
    sym_ACon_1 = ATmakeSymbol("ACon", 1, ATfalse);
    ATprotectSymbol(sym_ACon_1);
  }
  {
    sym_ATermList_1 = ATmakeSymbol("ATermList", 1, ATfalse);
    ATprotectSymbol(sym_ATermList_1);
  }
  {
    sym_AFun_1 = ATmakeSymbol("AFun", 1, ATfalse);
    ATprotectSymbol(sym_AFun_1);
  }
  {
    sym_AFun_ATerms_2 = ATmakeSymbol("AFun-ATerms", 2, ATfalse);
    ATprotectSymbol(sym_AFun_ATerms_2);
  }
  {
    sym_ATerms_p__1 = ATmakeSymbol("ATerms'", 1, ATfalse);
    ATprotectSymbol(sym_ATerms_p__1);
  }
  {
    sym_ACon_Ann_2 = ATmakeSymbol("ACon-Ann", 2, ATfalse);
    ATprotectSymbol(sym_ACon_Ann_2);
  }
  {
    sym_ATermList_Ann_2 = ATmakeSymbol("ATermList-Ann", 2, ATfalse);
    ATprotectSymbol(sym_ATermList_Ann_2);
  }
  {
    sym_AFun_Ann_2 = ATmakeSymbol("AFun-Ann", 2, ATfalse);
    ATprotectSymbol(sym_AFun_Ann_2);
  }
  {
    sym_AFun_ATerms_Ann_3 = ATmakeSymbol("AFun-ATerms-Ann", 3, ATfalse);
    ATprotectSymbol(sym_AFun_ATerms_Ann_3);
  }
  {
    sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
    ATprotectSymbol(sym_qlit_1);
  }
  {
    sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
    ATprotectSymbol(sym_uqlit_1);
  }
  {
    sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
    ATprotectSymbol(sym_Literal_1);
  }
  {
    sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
    ATprotectSymbol(sym_prod_fun_4);
  }
  {
    sym_empty_grammar_0 = ATmakeSymbol("empty-grammar", 0, ATfalse);
    ATprotectSymbol(sym_empty_grammar_0);
  }
  {
    sym_conc_grammars_2 = ATmakeSymbol("conc-grammars", 2, ATfalse);
    ATprotectSymbol(sym_conc_grammars_2);
  }
  {
    sym_TagId_empty_0 = ATmakeSymbol("TagId-empty", 0, ATfalse);
    ATprotectSymbol(sym_TagId_empty_0);
  }
  {
    sym_Symbol_s_1 = ATmakeSymbol("Symbol-s", 1, ATfalse);
    ATprotectSymbol(sym_Symbol_s_1);
  }
  {
    sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
    ATprotectSymbol(sym_attrs_1);
  }
  {
    sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
    ATprotectSymbol(sym_no_attrs_0);
  }
  {
    sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
    ATprotectSymbol(sym_prod_3);
  }
  {
    sym_Production_s_1 = ATmakeSymbol("Production-s", 1, ATfalse);
    ATprotectSymbol(sym_Production_s_1);
  }
  {
    sym_syntax_1 = ATmakeSymbol("syntax", 1, ATfalse);
    ATprotectSymbol(sym_syntax_1);
  }
  {
    sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
    ATprotectSymbol(sym_label_2);
  }
  {
    sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
    ATprotectSymbol(sym_cons_1);
  }
  {
    sym_constructor_0 = ATmakeSymbol("constructor", 0, ATfalse);
    ATprotectSymbol(sym_constructor_0);
  }
  {
    sym_memo_0 = ATmakeSymbol("memo", 0, ATfalse);
    ATprotectSymbol(sym_memo_0);
  }
  {
    sym_Program_1 = ATmakeSymbol("Program", 1, ATfalse);
    ATprotectSymbol(sym_Program_1);
  }
  {
    sym_Undefined_1 = ATmakeSymbol("Undefined", 1, ATfalse);
    ATprotectSymbol(sym_Undefined_1);
  }
  {
    sym_Silent_0 = ATmakeSymbol("Silent", 0, ATfalse);
    ATprotectSymbol(sym_Silent_0);
  }
  {
    sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
    ATprotectSymbol(sym_Verbose_0);
  }
  {
    sym_Version_0 = ATmakeSymbol("Version", 0, ATfalse);
    ATprotectSymbol(sym_Version_0);
  }
  {
    sym_Input_1 = ATmakeSymbol("Input", 1, ATfalse);
    ATprotectSymbol(sym_Input_1);
  }
  {
    sym_Output_1 = ATmakeSymbol("Output", 1, ATfalse);
    ATprotectSymbol(sym_Output_1);
  }
  {
    sym_Binary_0 = ATmakeSymbol("Binary", 0, ATfalse);
    ATprotectSymbol(sym_Binary_0);
  }
  {
    sym_Statistics_0 = ATmakeSymbol("Statistics", 0, ATfalse);
    ATprotectSymbol(sym_Statistics_0);
  }
  {
    sym_Help_0 = ATmakeSymbol("Help", 0, ATfalse);
    ATprotectSymbol(sym_Help_0);
  }
  {
    sym_Runtime_1 = ATmakeSymbol("Runtime", 1, ATfalse);
    ATprotectSymbol(sym_Runtime_1);
  }
  {
    sym_DeclVersion_1 = ATmakeSymbol("DeclVersion", 1, ATfalse);
    ATprotectSymbol(sym_DeclVersion_1);
  }
  {
    sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
    ATprotectSymbol(sym_Scopes_0);
  }
  {
    sym_Keys_0 = ATmakeSymbol("Keys", 0, ATfalse);
    ATprotectSymbol(sym_Keys_0);
  }
  {
    sym_Keys_1 = ATmakeSymbol("Keys", 1, ATfalse);
    ATprotectSymbol(sym_Keys_1);
  }
  {
    sym_Keys_2 = ATmakeSymbol("Keys", 2, ATfalse);
    ATprotectSymbol(sym_Keys_2);
  }
  {
    sym_Keys_3 = ATmakeSymbol("Keys", 3, ATfalse);
    ATprotectSymbol(sym_Keys_3);
  }
  {
    sym_Keys_4 = ATmakeSymbol("Keys", 4, ATfalse);
    ATprotectSymbol(sym_Keys_4);
  }
  {
    sym_Keys_5 = ATmakeSymbol("Keys", 5, ATfalse);
    ATprotectSymbol(sym_Keys_5);
  }
  {
    sym_Keys_6 = ATmakeSymbol("Keys", 6, ATfalse);
    ATprotectSymbol(sym_Keys_6);
  }
  {
    sym_Keys_7 = ATmakeSymbol("Keys", 7, ATfalse);
    ATprotectSymbol(sym_Keys_7);
  }
  {
    sym_Keys_8 = ATmakeSymbol("Keys", 8, ATfalse);
    ATprotectSymbol(sym_Keys_8);
  }
  {
    sym_Keys_9 = ATmakeSymbol("Keys", 9, ATfalse);
    ATprotectSymbol(sym_Keys_9);
  }
  {
    sym_Keys_10 = ATmakeSymbol("Keys", 10, ATfalse);
    ATprotectSymbol(sym_Keys_10);
  }
  {
    sym_Defined_0 = ATmakeSymbol("Defined", 0, ATfalse);
    ATprotectSymbol(sym_Defined_0);
  }
  {
    sym_Defined_1 = ATmakeSymbol("Defined", 1, ATfalse);
    ATprotectSymbol(sym_Defined_1);
  }
  {
    sym_Defined_2 = ATmakeSymbol("Defined", 2, ATfalse);
    ATprotectSymbol(sym_Defined_2);
  }
  {
    sym_Defined_3 = ATmakeSymbol("Defined", 3, ATfalse);
    ATprotectSymbol(sym_Defined_3);
  }
  {
    sym_Defined_4 = ATmakeSymbol("Defined", 4, ATfalse);
    ATprotectSymbol(sym_Defined_4);
  }
  {
    sym_Defined_5 = ATmakeSymbol("Defined", 5, ATfalse);
    ATprotectSymbol(sym_Defined_5);
  }
  {
    sym_Defined_6 = ATmakeSymbol("Defined", 6, ATfalse);
    ATprotectSymbol(sym_Defined_6);
  }
  {
    sym_Defined_7 = ATmakeSymbol("Defined", 7, ATfalse);
    ATprotectSymbol(sym_Defined_7);
  }
  {
    sym_Defined_8 = ATmakeSymbol("Defined", 8, ATfalse);
    ATprotectSymbol(sym_Defined_8);
  }
  {
    sym_Defined_9 = ATmakeSymbol("Defined", 9, ATfalse);
    ATprotectSymbol(sym_Defined_9);
  }
  {
    sym_Defined_10 = ATmakeSymbol("Defined", 10, ATfalse);
    ATprotectSymbol(sym_Defined_10);
  }
  {
    sym_Undefined_0 = ATmakeSymbol("Undefined", 0, ATfalse);
    ATprotectSymbol(sym_Undefined_0);
  }
  {
    sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
    ATprotectSymbol(sym_stdin_0);
  }
  {
    sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
    ATprotectSymbol(sym_stdout_0);
  }
  {
    sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
    ATprotectSymbol(sym_stderr_0);
  }
  {
    sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
    ATprotectSymbol(sym_None_0);
  }
  {
    sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
    ATprotectSymbol(sym_Some_1);
  }
  {
    sym_CUT_0 = ATmakeSymbol("CUT", 0, ATfalse);
    ATprotectSymbol(sym_CUT_0);
  }
  {
    sym_layout_0 = ATmakeSymbol("layout", 0, ATfalse);
    ATprotectSymbol(sym_layout_0);
  }
  {
    sym_cf_1 = ATmakeSymbol("cf", 1, ATfalse);
    ATprotectSymbol(sym_cf_1);
  }
  {
    sym_lex_1 = ATmakeSymbol("lex", 1, ATfalse);
    ATprotectSymbol(sym_lex_1);
  }
  {
    sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
    ATprotectSymbol(sym_opt_1);
  }
  {
    sym_seq_1 = ATmakeSymbol("seq", 1, ATfalse);
    ATprotectSymbol(sym_seq_1);
  }
  {
    sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
    ATprotectSymbol(sym_lit_1);
  }
  {
    sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
    ATprotectSymbol(sym_iter_sep_2);
  }
  {
    sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
    ATprotectSymbol(sym_iter_star_sep_2);
  }
  {
    sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
    ATprotectSymbol(sym_iter_1);
  }
  {
    sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
    ATprotectSymbol(sym_iter_star_1);
  }
  {
    sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
    ATprotectSymbol(sym_alt_2);
  }
  {
    sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
    ATprotectSymbol(sym_char_class_1);
  }
  {
    sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
    ATprotectSymbol(sym_sort_1);
  }
  {
    sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
    ATprotectSymbol(sym_atr_1);
  }
  {
    sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
    ATprotectSymbol(sym_cons_1);
  }
  {
    sym_no_attrs_0 = ATmakeSymbol("no-attrs", 0, ATfalse);
    ATprotectSymbol(sym_no_attrs_0);
  }
  {
    sym_attrs_1 = ATmakeSymbol("attrs", 1, ATfalse);
    ATprotectSymbol(sym_attrs_1);
  }
  {
    sym_prod_3 = ATmakeSymbol("prod", 3, ATfalse);
    ATprotectSymbol(sym_prod_3);
  }
  {
    sym_appl_2 = ATmakeSymbol("appl", 2, ATfalse);
    ATprotectSymbol(sym_appl_2);
  }
  {
    sym_amb_1 = ATmakeSymbol("amb", 1, ATfalse);
    ATprotectSymbol(sym_amb_1);
  }
  {
    sym_flatlex_2 = ATmakeSymbol("flatlex", 2, ATfalse);
    ATprotectSymbol(sym_flatlex_2);
  }
  {
    sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
    ATprotectSymbol(sym_parsetree_2);
  }
  {
    sym_SOpt_2 = ATmakeSymbol("SOpt", 2, ATfalse);
    ATprotectSymbol(sym_SOpt_2);
  }
  {
    sym_SOptB_2 = ATmakeSymbol("SOptB", 2, ATfalse);
    ATprotectSymbol(sym_SOptB_2);
  }
  {
    sym_VS_0 = ATmakeSymbol("VS", 0, ATfalse);
    ATprotectSymbol(sym_VS_0);
  }
  {
    sym_HS_0 = ATmakeSymbol("HS", 0, ATfalse);
    ATprotectSymbol(sym_HS_0);
  }
  {
    sym_IS_0 = ATmakeSymbol("IS", 0, ATfalse);
    ATprotectSymbol(sym_IS_0);
  }
  {
    sym_H_2 = ATmakeSymbol("H", 2, ATfalse);
    ATprotectSymbol(sym_H_2);
  }
  {
    sym_V_2 = ATmakeSymbol("V", 2, ATfalse);
    ATprotectSymbol(sym_V_2);
  }
  {
    sym_HV_2 = ATmakeSymbol("HV", 2, ATfalse);
    ATprotectSymbol(sym_HV_2);
  }
  {
    sym_ALT_2 = ATmakeSymbol("ALT", 2, ATfalse);
    ATprotectSymbol(sym_ALT_2);
  }
  {
    sym_A_3 = ATmakeSymbol("A", 3, ATfalse);
    ATprotectSymbol(sym_A_3);
  }
  {
    sym_R_2 = ATmakeSymbol("R", 2, ATfalse);
    ATprotectSymbol(sym_R_2);
  }
  {
    sym_AL_1 = ATmakeSymbol("AL", 1, ATfalse);
    ATprotectSymbol(sym_AL_1);
  }
  {
    sym_AC_1 = ATmakeSymbol("AC", 1, ATfalse);
    ATprotectSymbol(sym_AC_1);
  }
  {
    sym_AR_1 = ATmakeSymbol("AR", 1, ATfalse);
    ATprotectSymbol(sym_AR_1);
  }
  {
    sym_AOPTIONS_1 = ATmakeSymbol("AOPTIONS", 1, ATfalse);
    ATprotectSymbol(sym_AOPTIONS_1);
  }
  {
    sym_FNAT_2 = ATmakeSymbol("FNAT", 2, ATfalse);
    ATprotectSymbol(sym_FNAT_2);
  }
  {
    sym_FFID_2 = ATmakeSymbol("FFID", 2, ATfalse);
    ATprotectSymbol(sym_FFID_2);
  }
  {
    sym_F_1 = ATmakeSymbol("F", 1, ATfalse);
    ATprotectSymbol(sym_F_1);
  }
  {
    sym_FBOX_2 = ATmakeSymbol("FBOX", 2, ATfalse);
    ATprotectSymbol(sym_FBOX_2);
  }
  {
    sym_FN_0 = ATmakeSymbol("FN", 0, ATfalse);
    ATprotectSymbol(sym_FN_0);
  }
  {
    sym_FM_0 = ATmakeSymbol("FM", 0, ATfalse);
    ATprotectSymbol(sym_FM_0);
  }
  {
    sym_SE_0 = ATmakeSymbol("SE", 0, ATfalse);
    ATprotectSymbol(sym_SE_0);
  }
  {
    sym_SH_0 = ATmakeSymbol("SH", 0, ATfalse);
    ATprotectSymbol(sym_SH_0);
  }
  {
    sym_SZ_0 = ATmakeSymbol("SZ", 0, ATfalse);
    ATprotectSymbol(sym_SZ_0);
  }
  {
    sym_CL_0 = ATmakeSymbol("CL", 0, ATfalse);
    ATprotectSymbol(sym_CL_0);
  }
  {
    sym_KW_0 = ATmakeSymbol("KW", 0, ATfalse);
    ATprotectSymbol(sym_KW_0);
  }
  {
    sym_VAR_0 = ATmakeSymbol("VAR", 0, ATfalse);
    ATprotectSymbol(sym_VAR_0);
  }
  {
    sym_NUM_0 = ATmakeSymbol("NUM", 0, ATfalse);
    ATprotectSymbol(sym_NUM_0);
  }
  {
    sym_MATH_0 = ATmakeSymbol("MATH", 0, ATfalse);
    ATprotectSymbol(sym_MATH_0);
  }
  {
    sym_LBL_2 = ATmakeSymbol("LBL", 2, ATfalse);
    ATprotectSymbol(sym_LBL_2);
  }
  {
    sym_REF_2 = ATmakeSymbol("REF", 2, ATfalse);
    ATprotectSymbol(sym_REF_2);
  }
  {
    sym_C_2 = ATmakeSymbol("C", 2, ATfalse);
    ATprotectSymbol(sym_C_2);
  }
  {
    sym_L_2 = ATmakeSymbol("L", 2, ATfalse);
    ATprotectSymbol(sym_L_2);
  }
  {
    sym_LNAT_2 = ATmakeSymbol("LNAT", 2, ATfalse);
    ATprotectSymbol(sym_LNAT_2);
  }
  {
    sym_S_1 = ATmakeSymbol("S", 1, ATfalse);
    ATprotectSymbol(sym_S_1);
  }
  {
    sym_Arg_1 = ATmakeSymbol("Arg", 1, ATfalse);
    ATprotectSymbol(sym_Arg_1);
  }
  {
    sym_Arg2_2 = ATmakeSymbol("Arg2", 2, ATfalse);
    ATprotectSymbol(sym_Arg2_2);
  }
  {
    sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
    ATprotectSymbol(sym_PP_Table_1);
  }
  {
    sym_selector_2 = ATmakeSymbol("selector", 2, ATfalse);
    ATprotectSymbol(sym_selector_2);
  }
  {
    sym_Path1_1 = ATmakeSymbol("Path1", 1, ATfalse);
    ATprotectSymbol(sym_Path1_1);
  }
  {
    sym_Path_2 = ATmakeSymbol("Path", 2, ATfalse);
    ATprotectSymbol(sym_Path_2);
  }
  {
    sym_PP_Entry_2 = ATmakeSymbol("PP-Entry", 2, ATfalse);
    ATprotectSymbol(sym_PP_Entry_2);
  }
  {
    sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
    ATprotectSymbol(sym_Nil_0);
  }
  {
    sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
    ATprotectSymbol(sym_Cons_2);
  }
}
ATerm Option_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm int_to_string_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm w_66 (ATerm));
ATerm filter_1 (ATerm, ATerm j_58 (ATerm));
ATerm debug_1 (ATerm, ATerm v_55 (ATerm));
ATerm is_list_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm o_48 (ATerm));
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm n_71 (ATerm));
ATerm Make_0 (ATerm);
ATerm iter_star_1 (ATerm, ATerm j_46 (ATerm));
ATerm iter_1 (ATerm, ATerm i_46 (ATerm));
ATerm pair_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm g_46 (ATerm), ATerm h_46 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm e_46 (ATerm), ATerm f_46 (ATerm));
ATerm make_0 (ATerm);
ATerm lit_1 (ATerm, ATerm d_46 (ATerm));
ATerm NonTerminal_0 (ATerm);
ATerm add_0 (ATerm);
ATerm number_1 (ATerm, ATerm q_71 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm m_71 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm b_65 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm h_59 (ATerm));
ATerm crush_3 (ATerm, ATerm s_60 (ATerm), ATerm t_60 (ATerm), ATerm u_60 (ATerm));
ATerm collect_p__1 (ATerm, ATerm s_49 (ATerm));
ATerm ppgenerate_0 (ATerm);
ATerm _2 (ATerm, ATerm z_37 (ATerm), ATerm a_38 (ATerm));
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm m_68 (ATerm));
ATerm in_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm w_54 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm i_49 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm OutId_1 (ATerm, ATerm j_49 (ATerm));
ATerm InOutId_2 (ATerm, ATerm h_0 (ATerm), ATerm i_0 (ATerm));
ATerm termid_set_p__1 (ATerm, ATerm q_49 (ATerm));
ATerm try_1 (ATerm, ATerm x_70 (ATerm));
ATerm termid_check_p__1 (ATerm, ATerm o_49 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm a_55 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm r_57 (ATerm), ATerm s_57 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm z_54 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm k_53 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm r_64 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm g_53 (ATerm));
ATerm map_1 (ATerm, ATerm d_64 (ATerm));
ATerm reverse_1 (ATerm, ATerm d_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_53 (ATerm));
ATerm Program_1 (ATerm, ATerm m_41 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_41 (ATerm));
ATerm fetch_1 (ATerm, ATerm l_64 (ATerm));
ATerm option_defined_1 (ATerm, ATerm e_54 (ATerm));
ATerm Help_0 (ATerm);
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_48 (ATerm), ATerm a_49 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm i_53 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm h_53 (ATerm));
ATerm iowrap_3 (ATerm, ATerm o_54 (ATerm), ATerm p_54 (ATerm), ATerm q_54 (ATerm));
ATerm iowrap_2 (ATerm, ATerm j_54 (ATerm), ATerm k_54 (ATerm));
ATerm io_idwrap_3 (ATerm, ATerm f_49 (ATerm), ATerm g_49 (ATerm), ATerm h_49 (ATerm));
ATerm Ppgen_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Option_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm p_1 = NULL,q_1 = NULL,r_1 = NULL;
  p_1 = t;
  o_1 :
  if(match_string(p_1, "register-usage-info"))
    t = register_usage_1(t, l_0);
  else
    {
      if(((ATgetType(p_1) == AT_LIST) && ((ATermList) p_1 != ATempty)))
        {
          q_1 = ATgetFirst((ATermList) p_1);
          r_1 = (ATerm) ATgetNext((ATermList) p_1);
          {
            ATerm u_1 = NULL;
            ATerm h_4;
            h_4 = t;
            {
              t = not_null(q_1);
              t = j_0(t);
            }
            t = h_4;
            {
              ATerm v_1 = NULL;
              t = (ATerm) ATmakeAppl(sym__0);
              {
                t = k_0(t);
                {
                  v_1 = t;
                  if(((u_1 != NULL) && (u_1 != v_1)))
                    _fail(v_1);
                  else
                    u_1 = v_1;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(r_1)), not_null(u_1));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm Quote_0 (ATerm t)
{
  ATerm a_2 = NULL;
  a_2 = t;
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34))), not_null(a_2)), (ATerm) ATinsert(ATempty, (ATerm) ATmakeInt(34)));
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
  ATerm e_2 = NULL;
  e_2 = t;
  t = SSL_int_to_string(not_null(e_2));
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm w_66 (ATerm))
{
  ATerm h_2 (ATerm t)
  {
    t = w_66(t);
    t = _all(t, h_2);
    return(t);
  }
  t = h_2(t);
  return(t);
}
ATerm filter_1 (ATerm t, ATerm j_58 (ATerm))
{
  ATerm n_8 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = n_8;
      {
        ATerm o_8 = t;
        if((PushChoice() == 0))
          {
            ATerm a_0 (ATerm t)
            {
              t = filter_1(t, j_58);
              return(t);
            }
            t = Cons_2(t, j_58, a_0);
            PopChoice();
          }
        else
          {
            t = o_8;
            {
              ATerm k_2 = NULL,l_2 = NULL,m_2 = NULL;
              k_2 = t;
              j_2 :
              if(((ATgetType(k_2) == AT_LIST) && ((ATermList) k_2 != ATempty)))
                {
                  l_2 = ATgetFirst((ATermList) k_2);
                  m_2 = (ATerm) ATgetNext((ATermList) k_2);
                  {
                    t = not_null(m_2);
                    t = filter_1(t, j_58);
                  }
                }
              else
                _fail(t);
            }
          }
      }
    }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm v_55 (ATerm))
{
  ATerm p_8;
  p_8 = t;
  {
    ATerm r_2 = NULL,t_2 = NULL;
    ATerm q_8;
    q_8 = t;
    {
      ATerm s_2 = NULL;
      t = v_55(t);
      {
        s_2 = t;
        if(((r_2 != NULL) && (r_2 != s_2)))
          _fail(s_2);
        else
          r_2 = s_2;
      }
    }
    t = q_8;
    {
      ATerm u_2 = NULL;
      u_2 = t;
      if(((t_2 != NULL) && (t_2 != u_2)))
        _fail(u_2);
      else
        t_2 = u_2;
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_2)), not_null(r_2)));
        t = printnl_0(t);
      }
    }
  }
  t = p_8;
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm y_2 = NULL,z_2 = NULL,a_3 = NULL;
  y_2 = t;
  x_2 :
  if(((ATermList) y_2 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(y_2) == AT_LIST) && ((ATermList) y_2 != ATempty)))
        {
          z_2 = ATgetFirst((ATermList) y_2);
          a_3 = (ATerm) ATgetNext((ATermList) y_2);
          {
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm argument_list_0 (ATerm t)
{
  ATerm b_0 (ATerm t)
  {
    ATerm c_0 (ATerm t)
    {
      ATerm c_3 = NULL;
      c_3 = t;
      {
        ATerm r_8 = t;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = r_8;
        t = (ATerm) ATinsert(ATempty, not_null(c_3));
      }
      return(t);
    }
    t = try_1(t, c_0);
    return(t);
  }
  t = map_1(t, b_0);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm o_48 (ATerm))
{
  ATerm i_3 = NULL,j_3 = NULL;
  i_3 = t;
  h_3 :
  if(match_cons(i_3, sym_Arg_1))
    {
      j_3 = ATgetArgument(i_3, 0);
      {
        ATerm l_3 = NULL;
        t = not_null(j_3);
        {
          t = o_48(t);
          {
            l_3 = t;
            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(l_3));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm flat_alt_0 (ATerm t)
{
  ATerm u_3 = NULL,v_3 = NULL,w_3 = NULL,x_3 = NULL,y_3 = NULL;
  ATerm j_4 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_3)), not_null(x_3));
    return(t);
  }
  w_3 = t;
  s_3 :
  if(match_cons(w_3, sym_alt_2))
    {
      x_3 = ATgetArgument(w_3, 0);
      y_3 = ATgetArgument(w_3, 1);
      t_3 :
      if(match_cons(y_3, sym_alt_2))
        {
          u_3 = ATgetArgument(y_3, 0);
          v_3 = ATgetArgument(y_3, 1);
          {
            ATerm v_8 = t;
            if((PushChoice() == 0))
              {
                ATerm c_4 = NULL;
                ATerm d_4 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(u_3), not_null(v_3));
                {
                  t = flat_alt_0(t);
                  {
                    d_4 = t;
                    if(((c_4 != NULL) && (c_4 != d_4)))
                      _fail(d_4);
                    else
                      c_4 = d_4;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(c_4)), not_null(x_3));
                PopChoice();
              }
            else
              {
                t = v_8;
                t = j_4(t);
              }
          }
        }
      else
        t = j_4(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm n_71 (ATerm))
{
  ATerm l_5 = NULL,m_5 = NULL,n_5 = NULL;
  ATerm m_0 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym__0);
    t = n_71(t);
    return(t);
  }
  t = split_2(t, m_0, _id);
  {
    ATerm g_7 (ATerm t)
    {
      ATerm o_5 = NULL,p_5 = NULL,q_5 = NULL,r_5 = NULL,s_5 = NULL,t_5 = NULL,u_5 = NULL,v_5 = NULL,w_5 = NULL,x_5 = NULL,y_5 = NULL;
      ATerm i_7 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm j_7 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        ATerm z_5 = NULL,a_6 = NULL,b_6 = NULL,c_6 = NULL;
        if(((l_5 != NULL) && (l_5 != u_5)))
          _fail(u_5);
        else
          l_5 = u_5;
        {
          if(((m_5 != NULL) && (m_5 != v_5)))
            _fail(v_5);
          else
            m_5 = v_5;
          {
            if(((n_5 != NULL) && (n_5 != x_5)))
              _fail(x_5);
            else
              n_5 = x_5;
            {
              if(((z_5 != NULL) && (z_5 != r_5)))
                _fail(r_5);
              else
                z_5 = r_5;
              {
                if(((a_6 != NULL) && (a_6 != p_5)))
                  _fail(p_5);
                else
                  a_6 = p_5;
                {
                  if(((b_6 != NULL) && (b_6 != q_5)))
                    _fail(q_5);
                  else
                    b_6 = q_5;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(z_5), (ATerm) ATmakeAppl(sym_alt_2, not_null(a_6), not_null(b_6)));
                    {
                      ATerm e_6 = NULL;
                      t = flat_alt_0(t);
                      {
                        c_6 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue)), not_null(c_6));
                          {
                            t = mkterm_0(t);
                            {
                              e_6 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(l_5), not_null(m_5)), (ATerm) ATmakeAppl(sym__2, not_null(n_5), not_null(e_6)));
                                {
                                  t = g_7(t);
                                  {
                                    ATerm n_0 (ATerm t)
                                    {
                                      ATerm o_0 (ATerm t)
                                      {
                                        ATerm p_0 (ATerm t)
                                        {
                                          t = Arg_1(t, _id);
                                          t = (ATerm) ATmakeAppl(sym_Arg_1, (ATerm) ATmakeInt(1));
                                          return(t);
                                        }
                                        t = try_1(t, p_0);
                                        return(t);
                                      }
                                      t = topdown_1(t, o_0);
                                      return(t);
                                    }
                                    t = Cons_2(t, n_0, _id);
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
      ATerm l_7 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_5), not_null(v_5)), (ATerm) ATmakeAppl(sym__2, not_null(x_5), not_null(r_5)));
        t = g_7(t);
        return(t);
      }
      ATerm m_7 (ATerm t)
      {
        ATerm o_6 = NULL,p_6 = NULL,v_6 = NULL;
        ATerm q_6 = NULL;
        ATerm s_6 = NULL,t_6 = NULL,u_6 = NULL;
        t = not_null(y_5);
        {
          q_6 = t;
          {
            t = SSL_explode_term(not_null(q_6));
            {
              s_6 = t;
              v_4 :
              if(match_cons(s_6, sym__2))
                {
                  t_6 = ATgetArgument(s_6, 0);
                  u_6 = ATgetArgument(s_6, 1);
                  {
                    if(((o_6 != NULL) && (o_6 != t_6)))
                      _fail(t_6);
                    else
                      o_6 = t_6;
                    if(((p_6 != NULL) && (p_6 != u_6)))
                      _fail(u_6);
                    else
                      p_6 = u_6;
                  }
                }
              else
                _fail(t);
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(v_5), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(x_5), not_null(o_6))));
          {
            ATerm x_6 = NULL,e_7 = NULL;
            t = conc_0(t);
            {
              v_6 = t;
              {
                t = not_null(p_6);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm x_8;
                      x_8 = t;
                      {
                        ATerm y_6 = NULL;
                        t = make_0(t);
                        {
                          y_6 = t;
                          if(((x_6 != NULL) && (x_6 != y_6)))
                            _fail(y_6);
                          else
                            x_6 = y_6;
                        }
                      }
                      t = x_8;
                      {
                        ATerm q_0 (ATerm t)
                        {
                          ATerm z_6 = NULL;
                          ATerm b_7 = NULL;
                          z_6 = t;
                          {
                            ATerm c_7 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(u_5), not_null(v_6)), not_null(z_6));
                            {
                              t = g_7(t);
                              {
                                c_7 = t;
                                if(((b_7 != NULL) && (b_7 != c_7)))
                                  _fail(c_7);
                                else
                                  b_7 = c_7;
                              }
                            }
                            t = not_null(b_7);
                          }
                          return(t);
                        }
                        t = map_1(t, q_0);
                        {
                          t = concat_0(t);
                          {
                            e_7 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(e_7)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(u_5), not_null(v_6)), not_null(x_6)));
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
      s_5 = t;
      b_5 :
      if(match_cons(s_5, sym__2))
        {
          t_5 = ATgetArgument(s_5, 0);
          w_5 = ATgetArgument(s_5, 1);
          c_5 :
          if(match_cons(w_5, sym_lit_1))
            {
              x_5 = ATgetArgument(w_5, 0);
              d_5 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(w_5, sym__2))
                {
                  x_5 = ATgetArgument(w_5, 0);
                  y_5 = ATgetArgument(w_5, 1);
                  e_5 :
                  if(match_cons(y_5, sym_sort_1))
                    {
                      r_5 = ATgetArgument(y_5, 0);
                      f_5 :
                      if(match_cons(t_5, sym__2))
                        {
                          u_5 = ATgetArgument(t_5, 0);
                          v_5 = ATgetArgument(t_5, 1);
                          {
                            ATerm y_8 = t;
                            if((PushChoice() == 0))
                              {
                                t = i_7(t);
                                PopChoice();
                              }
                            else
                              {
                                t = y_8;
                                t = m_7(t);
                              }
                          }
                        }
                      else
                        t = i_7(t);
                    }
                  else
                    {
                      if(match_cons(y_5, sym_char_class_1))
                        {
                          r_5 = ATgetArgument(y_5, 0);
                          g_5 :
                          if(match_cons(t_5, sym__2))
                            {
                              u_5 = ATgetArgument(t_5, 0);
                              v_5 = ATgetArgument(t_5, 1);
                              {
                                ATerm z_8 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = j_7(t);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = z_8;
                                    t = m_7(t);
                                  }
                              }
                            }
                          else
                            t = j_7(t);
                        }
                      else
                        {
                          if(match_cons(y_5, sym_alt_2))
                            {
                              r_5 = ATgetArgument(y_5, 0);
                              o_5 = ATgetArgument(y_5, 1);
                              h_5 :
                              if(match_cons(t_5, sym__2))
                                {
                                  u_5 = ATgetArgument(t_5, 0);
                                  v_5 = ATgetArgument(t_5, 1);
                                  i_5 :
                                  if(match_cons(o_5, sym_alt_2))
                                    {
                                      p_5 = ATgetArgument(o_5, 0);
                                      q_5 = ATgetArgument(o_5, 1);
                                      {
                                        ATerm a_9 = t;
                                        if((PushChoice() == 0))
                                          {
                                            t = k_7(t);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = a_9;
                                            t = m_7(t);
                                          }
                                      }
                                    }
                                  else
                                    t = m_7(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(y_5, sym_bracket_symbol_1))
                                {
                                  r_5 = ATgetArgument(y_5, 0);
                                  j_5 :
                                  if(match_cons(t_5, sym__2))
                                    {
                                      u_5 = ATgetArgument(t_5, 0);
                                      v_5 = ATgetArgument(t_5, 1);
                                      {
                                        ATerm b_9 = t;
                                        if((PushChoice() == 0))
                                          {
                                            t = l_7(t);
                                            PopChoice();
                                          }
                                        else
                                          {
                                            t = b_9;
                                            t = m_7(t);
                                          }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  k_5 :
                                  if(match_cons(t_5, sym__2))
                                    {
                                      u_5 = ATgetArgument(t_5, 0);
                                      v_5 = ATgetArgument(t_5, 1);
                                      t = m_7(t);
                                    }
                                  else
                                    _fail(t);
                                }
                            }
                        }
                    }
                }
              else
                _fail(t);
            }
        }
      else
        _fail(t);
      return(t);
    }
    t = g_7(t);
  }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm z_7 = NULL,a_8 = NULL,b_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_lit_1))
    {
      a_8 = ATgetArgument(z_7, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, (ATerm)ATmakeAppl(sym_KW_0), (ATerm) ATmakeAppl(sym_S_1, not_null(a_8)));
    }
  else
    {
      if(match_cons(z_7, sym__2))
        {
          a_8 = ATgetArgument(z_7, 0);
          b_8 = ATgetArgument(z_7, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(a_8));
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm j_46 (ATerm))
{
  ATerm j_8 = NULL,k_8 = NULL;
  j_8 = t;
  i_8 :
  if(match_cons(j_8, sym_iter_star_1))
    {
      k_8 = ATgetArgument(j_8, 0);
      {
        ATerm m_8 = NULL;
        t = not_null(k_8);
        {
          t = j_46(t);
          {
            m_8 = t;
            t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(m_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_1 (ATerm t, ATerm i_46 (ATerm))
{
  ATerm t_8 = NULL,u_8 = NULL;
  t_8 = t;
  s_8 :
  if(match_cons(t_8, sym_iter_1))
    {
      u_8 = ATgetArgument(t_8, 0);
      {
        ATerm w_8 = NULL;
        t = not_null(u_8);
        {
          t = i_46(t);
          {
            w_8 = t;
            t = (ATerm) ATmakeAppl(sym_iter_1, not_null(w_8));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm pair_0 (ATerm t)
{
  ATerm j_9 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = j_9;
      {
        ATerm e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL,i_9 = NULL;
        e_9 = t;
        c_9 :
        if(((ATgetType(e_9) == AT_LIST) && ((ATermList) e_9 != ATempty)))
          {
            f_9 = ATgetFirst((ATermList) e_9);
            g_9 = (ATerm) ATgetNext((ATermList) e_9);
            d_9 :
            if(((ATgetType(g_9) == AT_LIST) && ((ATermList) g_9 != ATempty)))
              {
                h_9 = ATgetFirst((ATermList) g_9);
                i_9 = (ATerm) ATgetNext((ATermList) g_9);
                {
                  ATerm m_9 = NULL;
                  ATerm n_9 = NULL;
                  t = not_null(i_9);
                  {
                    t = pair_0(t);
                    {
                      n_9 = t;
                      if(((m_9 != NULL) && (m_9 != n_9)))
                        _fail(n_9);
                      else
                        m_9 = n_9;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_9)), (ATerm) ATmakeAppl(sym__2, not_null(f_9), not_null(h_9)));
                }
              }
            else
              _fail(t);
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm g_46 (ATerm), ATerm h_46 (ATerm))
{
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym_iter_star_sep_2))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      {
        ATerm a_10 = NULL;
        t = not_null(w_9);
        {
          ATerm c_10 = NULL;
          t = g_46(t);
          {
            a_10 = t;
            {
              t = not_null(x_9);
              {
                t = h_46(t);
                {
                  c_10 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(a_10), not_null(c_10));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm iter_sep_2 (ATerm t, ATerm e_46 (ATerm), ATerm f_46 (ATerm))
{
  ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
  l_10 = t;
  k_10 :
  if(match_cons(l_10, sym_iter_sep_2))
    {
      m_10 = ATgetArgument(l_10, 0);
      n_10 = ATgetArgument(l_10, 1);
      {
        ATerm q_10 = NULL;
        t = not_null(m_10);
        {
          ATerm s_10 = NULL;
          t = e_46(t);
          {
            q_10 = t;
            {
              t = not_null(n_10);
              {
                t = f_46(t);
                {
                  s_10 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(q_10), not_null(s_10));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm make_0 (ATerm t)
{
  ATerm f_11 = NULL,n_11 = NULL,o_11 = NULL,s_11 = NULL,t_11 = NULL;
  ATerm k_9 = t;
  if((PushChoice() == 0))
    {
      ATerm u_11 = NULL,w_11 = NULL,x_11 = NULL;
      t = reverse_0(t);
      {
        ATerm r_0 (ATerm t)
        {
          ATerm t_0 (ATerm t)
          {
            ATerm l_9 = t;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                PopChoice();
              }
            else
              {
                t = l_9;
                {
                  ATerm o_9 = t;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
                      PopChoice();
                    }
                  else
                    {
                      t = o_9;
                      {
                        ATerm p_9 = t;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            PopChoice();
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
          t = _2(t, _id, t_0);
          t = Make_0(t);
          return(t);
        }
        ATerm s_0 (ATerm t)
        {
          ATerm u_0 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, u_0);
          return(t);
        }
        t = Cons_2(t, r_0, s_0);
        {
          u_11 = t;
          z_10 :
          if(((ATgetType(u_11) == AT_LIST) && ((ATermList) u_11 != ATempty)))
            {
              w_11 = ATgetFirst((ATermList) u_11);
              x_11 = (ATerm) ATgetNext((ATermList) u_11);
              {
                ATerm y_11 = NULL;
                if(((n_11 != NULL) && (n_11 != w_11)))
                  _fail(w_11);
                else
                  n_11 = w_11;
                {
                  if(((f_11 != NULL) && (f_11 != x_11)))
                    _fail(x_11);
                  else
                    f_11 = x_11;
                  {
                    ATerm q_9 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      t = q_9;
                    {
                      ATerm z_11 = NULL;
                      t = not_null(f_11);
                      {
                        t = reverse_0(t);
                        {
                          z_11 = t;
                          if(((y_11 != NULL) && (y_11 != z_11)))
                            _fail(z_11);
                          else
                            y_11 = z_11;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_11)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(y_11))));
                    }
                  }
                }
              }
            }
          else
            _fail(t);
        }
      }
      PopChoice();
    }
  else
    {
      t = k_9;
      {
        ATerm r_9 = t;
        if((PushChoice() == 0))
          {
            ATerm g_12 = NULL;
            t = reverse_0(t);
            {
              ATerm v_0 (ATerm t)
              {
                ATerm a_12 = NULL;
                t = Make_0(t);
                {
                  a_12 = t;
                  if(((t_11 != NULL) && (t_11 != a_12)))
                    _fail(a_12);
                  else
                    t_11 = a_12;
                }
                return(t);
              }
              ATerm w_0 (ATerm t)
              {
                ATerm b_12 = NULL;
                ATerm s_9 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = s_9;
                {
                  t = reverse_0(t);
                  {
                    b_12 = t;
                    if(((o_11 != NULL) && (o_11 != b_12)))
                      _fail(b_12);
                    else
                      o_11 = b_12;
                  }
                }
                return(t);
              }
              t = Cons_2(t, v_0, w_0);
              {
                t = not_null(o_11);
                {
                  t = pair_0(t);
                  {
                    ATerm x_0 (ATerm t)
                    {
                      ATerm c_12 = NULL,d_12 = NULL;
                      ATerm y_0 (ATerm t)
                      {
                        ATerm e_12 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            e_12 = t;
                            if(((c_12 != NULL) && (c_12 != e_12)))
                              _fail(e_12);
                            else
                              c_12 = e_12;
                          }
                        }
                        return(t);
                      }
                      ATerm z_0 (ATerm t)
                      {
                        ATerm f_12 = NULL;
                        ATerm a_1 (ATerm t)
                        {
                          ATerm t_9 = t;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              PopChoice();
                            }
                          else
                            {
                              t = t_9;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, a_1);
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
                      t = _2(t, y_0, z_0);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_SOpt_2, (ATerm)ATmakeAppl(sym_VS_0), (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue)))), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_12)), not_null(c_12)));
                      return(t);
                    }
                    t = map_1(t, x_0);
                    {
                      g_12 = t;
                      {
                        if(((s_11 != NULL) && (s_11 != g_12)))
                          _fail(g_12);
                        else
                          s_11 = g_12;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(t_11)), not_null(s_11)));
                      }
                    }
                  }
                }
              }
            }
            PopChoice();
          }
        else
          {
            t = r_9;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm d_46 (ATerm))
{
  ATerm r_12 = NULL,s_12 = NULL;
  r_12 = t;
  q_12 :
  if(match_cons(r_12, sym_lit_1))
    {
      s_12 = ATgetArgument(r_12, 0);
      {
        ATerm u_12 = NULL;
        t = not_null(s_12);
        {
          t = d_46(t);
          {
            u_12 = t;
            t = (ATerm) ATmakeAppl(sym_lit_1, not_null(u_12));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm y_9 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    t = y_9;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL;
  a_13 = t;
  z_12 :
  if(match_cons(a_13, sym__2))
    {
      b_13 = ATgetArgument(a_13, 0);
      c_13 = ATgetArgument(a_13, 1);
      {
        ATerm z_9 = t;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(b_13), not_null(c_13));
            PopChoice();
          }
        else
          {
            t = z_9;
            t = SSL_addr(not_null(b_13), not_null(c_13));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm number_1 (ATerm t, ATerm q_71 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    t = (ATerm) ATmakeInt(1);
    return(t);
  }
  t = split_2(t, b_1, _id);
  {
    ATerm f_14 (ATerm t)
    {
      ATerm p_13 = NULL,q_13 = NULL,s_13 = NULL;
      ATerm b_10 = t;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          PopChoice();
        }
      else
        {
          t = b_10;
          {
            ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL;
            u_13 = t;
            n_13 :
            if(match_cons(u_13, sym__2))
              {
                v_13 = ATgetArgument(u_13, 0);
                w_13 = ATgetArgument(u_13, 1);
                o_13 :
                if(((ATgetType(w_13) == AT_LIST) && ((ATermList) w_13 != ATempty)))
                  {
                    x_13 = ATgetFirst((ATermList) w_13);
                    y_13 = (ATerm) ATgetNext((ATermList) w_13);
                    {
                      ATerm d_10 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm z_13 = NULL;
                          if(((p_13 != NULL) && (p_13 != v_13)))
                            _fail(v_13);
                          else
                            p_13 = v_13;
                          {
                            if(((q_13 != NULL) && (q_13 != x_13)))
                              _fail(x_13);
                            else
                              q_13 = x_13;
                            {
                              if(((s_13 != NULL) && (s_13 != y_13)))
                                _fail(y_13);
                              else
                                s_13 = y_13;
                              {
                                t = not_null(q_13);
                                {
                                  t = q_71(t);
                                  {
                                    ATerm a_14 = NULL,c_14 = NULL;
                                    ATerm b_14 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), (ATerm) ATmakeInt(1));
                                    {
                                      t = add_0(t);
                                      {
                                        b_14 = t;
                                        if(((a_14 != NULL) && (a_14 != b_14)))
                                          _fail(b_14);
                                        else
                                          a_14 = b_14;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(a_14), not_null(s_13));
                                      {
                                        t = f_14(t);
                                        {
                                          c_14 = t;
                                          if(((z_13 != NULL) && (z_13 != c_14)))
                                            _fail(c_14);
                                          else
                                            z_13 = c_14;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(z_13)), (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(q_13)));
                                  }
                                }
                              }
                            }
                          }
                          PopChoice();
                        }
                      else
                        {
                          t = d_10;
                          {
                            ATerm d_14 = NULL;
                            if(((p_13 != NULL) && (p_13 != v_13)))
                              _fail(v_13);
                            else
                              p_13 = v_13;
                            {
                              if(((q_13 != NULL) && (q_13 != x_13)))
                                _fail(x_13);
                              else
                                q_13 = x_13;
                              {
                                if(((s_13 != NULL) && (s_13 != y_13)))
                                  _fail(y_13);
                                else
                                  s_13 = y_13;
                                {
                                  ATerm e_14 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_13), not_null(s_13));
                                  {
                                    t = f_14(t);
                                    {
                                      e_14 = t;
                                      if(((d_14 != NULL) && (d_14 != e_14)))
                                        _fail(e_14);
                                      else
                                        d_14 = e_14;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(d_14)), not_null(q_13));
                                }
                              }
                            }
                          }
                        }
                    }
                  }
                else
                  _fail(t);
              }
            else
              _fail(t);
          }
        }
      return(t);
    }
    t = f_14(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm d_1 (ATerm t)
    {
      ATerm n_14 = NULL,o_14 = NULL,p_14 = NULL;
      n_14 = t;
      m_14 :
      if(match_cons(n_14, sym_label_2))
        {
          o_14 = ATgetArgument(n_14, 0);
          p_14 = ATgetArgument(n_14, 1);
          t = not_null(p_14);
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, d_1);
    return(t);
  }
  t = map_1(t, c_1);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_1(t, NonTerminal_0);
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm m_71 (ATerm))
{
  ATerm e_15 = NULL,g_15 = NULL,n_15 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm e_10;
    e_10 = t;
    {
      ATerm f_15 = NULL;
      t = make_0(t);
      {
        f_15 = t;
        if(((e_15 != NULL) && (e_15 != f_15)))
          _fail(f_15);
        else
          e_15 = f_15;
      }
    }
    t = e_10;
    {
      ATerm f_10;
      f_10 = t;
      {
        ATerm m_15 = NULL;
        ATerm e_1 (ATerm t)
        {
          ATerm f_1 (ATerm t)
          {
            ATerm k_15 = NULL;
            ATerm l_15 = NULL;
            t = (ATerm) ATmakeAppl(sym__0);
            {
              t = m_71(t);
              {
                l_15 = t;
                if(((k_15 != NULL) && (k_15 != l_15)))
                  _fail(l_15);
                else
                  k_15 = l_15;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(k_15), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, f_1);
          return(t);
        }
        t = map_1(t, e_1);
        {
          t = concat_0(t);
          {
            m_15 = t;
            if(((g_15 != NULL) && (g_15 != m_15)))
              _fail(m_15);
            else
              g_15 = m_15;
          }
        }
      }
      t = f_10;
      {
        ATerm o_15 = NULL;
        t = (ATerm) ATmakeAppl(sym__0);
        {
          t = m_71(t);
          {
            o_15 = t;
            if(((n_15 != NULL) && (n_15 != o_15)))
              _fail(o_15);
            else
              n_15 = o_15;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(g_15)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(n_15)), not_null(e_15)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm z_15 = NULL,a_16 = NULL,b_16 = NULL,d_16 = NULL,e_16 = NULL;
  ATerm g_10 = t;
  if((PushChoice() == 0))
    {
      ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL;
      f_16 = t;
      y_15 :
      if(match_cons(f_16, sym_prod_3))
        {
          g_16 = ATgetArgument(f_16, 0);
          h_16 = ATgetArgument(f_16, 1);
          i_16 = ATgetArgument(f_16, 2);
          {
            if(((b_16 != NULL) && (b_16 != g_16)))
              _fail(g_16);
            else
              b_16 = g_16;
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
                    ATerm g_1 (ATerm t)
                    {
                      ATerm k_16 = NULL,l_16 = NULL;
                      k_16 = t;
                      w_15 :
                      if(match_cons(k_16, sym_cons_1))
                        {
                          l_16 = ATgetArgument(k_16, 0);
                          if(((z_15 != NULL) && (z_15 != l_16)))
                            _fail(l_16);
                          else
                            z_15 = l_16;
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, g_1);
                  }
                  {
                    t = not_null(b_16);
                    {
                      ATerm h_1 (ATerm t)
                      {
                        t = not_null(z_15);
                        return(t);
                      }
                      t = symbols2pp_entries_1(t, h_1);
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
                if(((a_16 != NULL) && (a_16 != g_16)))
                  _fail(g_16);
                else
                  a_16 = g_16;
                {
                  if(((b_16 != NULL) && (b_16 != h_16)))
                    _fail(h_16);
                  else
                    b_16 = h_16;
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
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue))))), not_null(b_16)), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue)))), (ATerm) ATmakeAppl(sym_lit_1, not_null(a_16))));
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
            _fail(t);
        }
      PopChoice();
    }
  else
    {
      t = g_10;
      {
        ATerm i_1 (ATerm t)
        {
          ATerm h_10 = t;
          if((PushChoice() == 0))
            {
              ATerm j_1 (ATerm t)
              {
                t = (ATerm) ATmakeAppl(sym_Silent_0);
                return(t);
              }
              t = has_option_1(t, j_1);
              PopChoice();
              _fail(t);
            }
          else
            t = h_10;
          {
            ATerm k_1 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
              return(t);
            }
            t = debug_1(t, k_1);
          }
          return(t);
        }
        t = try_1(t, i_1);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm b_65 (ATerm))
{
  ATerm s_16 (ATerm t)
  {
    ATerm i_10 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = b_65(t);
        PopChoice();
      }
    else
      {
        t = i_10;
        t = Cons_2(t, _id, s_16);
      }
    return(t);
  }
  t = s_16(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm e_17 = NULL,f_17 = NULL,g_17 = NULL;
  e_17 = t;
  u_16 :
  if(((ATgetType(e_17) == AT_LIST) && ((ATermList) e_17 != ATempty)))
    {
      f_17 = ATgetFirst((ATermList) e_17);
      g_17 = (ATerm) ATgetNext((ATermList) e_17);
      t = not_null(g_17);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm z_17 = NULL,a_18 = NULL,b_18 = NULL;
  z_17 = t;
  y_17 :
  if(((ATgetType(z_17) == AT_LIST) && ((ATermList) z_17 != ATempty)))
    {
      a_18 = ATgetFirst((ATermList) z_17);
      b_18 = (ATerm) ATgetNext((ATermList) z_17);
      t = not_null(a_18);
    }
  else
    _fail(t);
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm j_10;
    j_10 = t;
    {
      ATerm k_18 = NULL;
      t = Hd_0(t);
      {
        k_18 = t;
        f_18 :
        if(!(match_int(k_18, 34)))
          _fail(t);
      }
    }
    t = j_10;
    {
      t = Tl_0(t);
      {
        ATerm l_1 (ATerm t)
        {
          ATerm l_18 = NULL,m_18 = NULL,n_18 = NULL;
          l_18 = t;
          h_18 :
          if(((ATgetType(l_18) == AT_LIST) && ((ATermList) l_18 != ATempty)))
            {
              m_18 = ATgetFirst((ATermList) l_18);
              n_18 = (ATerm) ATgetNext((ATermList) l_18);
              i_18 :
              if(match_int(m_18, 34))
                {
                  j_18 :
                  if(((ATermList) n_18 == ATempty))
                    {
                      t = (ATerm) ATempty;
                    }
                  else
                    _fail(t);
                }
              else
                _fail(t);
            }
          else
            _fail(t);
          return(t);
        }
        t = at_last_1(t, l_1);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm conc_0 (ATerm t)
{
  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
  r_18 = t;
  q_18 :
  if(match_cons(r_18, sym__2))
    {
      s_18 = ATgetArgument(r_18, 0);
      t_18 = ATgetArgument(r_18, 1);
      {
        t = not_null(s_18);
        {
          ATerm m_1 (ATerm t)
          {
            t = not_null(t_18);
            return(t);
          }
          t = at_end_1(t, m_1);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm f_59 (ATerm), ATerm g_59 (ATerm), ATerm h_59 (ATerm))
{
  ATerm o_10 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_59(t);
      PopChoice();
    }
  else
    {
      t = o_10;
      {
        ATerm d_19 = NULL,j_19 = NULL,k_19 = NULL;
        d_19 = t;
        c_19 :
        if(((ATgetType(d_19) == AT_LIST) && ((ATermList) d_19 != ATempty)))
          {
            j_19 = ATgetFirst((ATermList) d_19);
            k_19 = (ATerm) ATgetNext((ATermList) d_19);
            {
              ATerm n_19 = NULL,p_19 = NULL;
              ATerm p_10;
              p_10 = t;
              {
                ATerm o_19 = NULL;
                t = not_null(j_19);
                {
                  t = h_59(t);
                  {
                    o_19 = t;
                    if(((n_19 != NULL) && (n_19 != o_19)))
                      _fail(o_19);
                    else
                      n_19 = o_19;
                  }
                }
              }
              t = p_10;
              {
                ATerm q_19 = NULL;
                t = not_null(k_19);
                {
                  t = foldr_3(t, f_59, g_59, h_59);
                  {
                    q_19 = t;
                    if(((p_19 != NULL) && (p_19 != q_19)))
                      _fail(q_19);
                    else
                      p_19 = q_19;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(n_19), not_null(p_19));
                  t = g_59(t);
                }
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm crush_3 (ATerm t, ATerm s_60 (ATerm), ATerm t_60 (ATerm), ATerm u_60 (ATerm))
{
  ATerm a_20 = NULL;
  ATerm c_20 = NULL;
  a_20 = t;
  {
    ATerm d_20 = NULL;
    ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL;
    t = not_null(a_20);
    {
      d_20 = t;
      {
        t = SSL_explode_term(not_null(d_20));
        {
          f_20 = t;
          z_19 :
          if(match_cons(f_20, sym__2))
            {
              g_20 = ATgetArgument(f_20, 0);
              h_20 = ATgetArgument(f_20, 1);
              if(((c_20 != NULL) && (c_20 != h_20)))
                _fail(h_20);
              else
                c_20 = h_20;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(c_20);
      t = foldr_3(t, s_60, t_60, u_60);
    }
  }
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm s_49 (ATerm))
{
  ATerm o_20 (ATerm t)
  {
    ATerm r_10 = t;
    if((PushChoice() == 0))
      {
        ATerm m_20 = NULL;
        t = s_49(t);
        {
          m_20 = t;
          t = (ATerm) ATinsert(ATempty, not_null(m_20));
        }
        PopChoice();
      }
    else
      {
        t = r_10;
        {
          ATerm n_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, n_1, conc_0, o_20);
        }
      }
    return(t);
  }
  t = o_20(t);
  return(t);
}
ATerm ppgenerate_0 (ATerm t)
{
  ATerm a_22 = NULL;
  ATerm s_1 (ATerm t)
  {
    ATerm j_21 = NULL,k_21 = NULL;
    j_21 = t;
    r_20 :
    if(match_cons(j_21, sym_context_free_syntax_1))
      {
        k_21 = ATgetArgument(j_21, 0);
        t = not_null(k_21);
      }
    else
      _fail(t);
    return(t);
  }
  t = collect_p__1(t, s_1);
  {
    t = concat_0(t);
    {
      ATerm t_1 (ATerm t)
      {
        ATerm w_1 (ATerm t)
        {
          ATerm m_21 = NULL,n_21 = NULL;
          m_21 = t;
          y_20 :
          if(match_cons(m_21, sym_cons_1))
            {
              n_21 = ATgetArgument(m_21, 0);
              {
                ATerm r_21 = NULL;
                ATerm s_21 = NULL;
                t = not_null(n_21);
                {
                  t = de_quote_0(t);
                  {
                    s_21 = t;
                    if(((r_21 != NULL) && (r_21 != s_21)))
                      _fail(s_21);
                    else
                      r_21 = s_21;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_cons_1, not_null(r_21));
              }
            }
          else
            {
              if(match_cons(m_21, sym_lit_1))
                {
                  n_21 = ATgetArgument(m_21, 0);
                  {
                    ATerm u_21 = NULL;
                    ATerm v_21 = NULL;
                    t = not_null(n_21);
                    {
                      t = de_quote_0(t);
                      {
                        v_21 = t;
                        if(((u_21 != NULL) && (u_21 != v_21)))
                          _fail(v_21);
                        else
                          u_21 = v_21;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_lit_1, not_null(u_21));
                  }
                }
              else
                {
                  if(match_cons(m_21, sym_sort_1))
                    {
                      n_21 = ATgetArgument(m_21, 0);
                      {
                        ATerm x_21 = NULL;
                        ATerm y_21 = NULL;
                        t = not_null(n_21);
                        {
                          t = de_quote_0(t);
                          {
                            y_21 = t;
                            if(((x_21 != NULL) && (x_21 != y_21)))
                              _fail(y_21);
                            else
                              x_21 = y_21;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_sort_1, not_null(x_21));
                      }
                    }
                  else
                    _fail(t);
                }
            }
          return(t);
        }
        t = try_1(t, w_1);
        return(t);
      }
      t = topdown_1(t, t_1);
      {
        t = map_1(t, generate_pp_entries_0);
        {
          ATerm x_1 (ATerm t)
          {
            ATerm t_10 = t;
            if((PushChoice() == 0))
              {
                ATerm z_21 = NULL;
                z_21 = t;
                z_20 :
                if(((ATermList) z_21 == ATempty))
                  {
                    {
                    }
                  }
                else
                  _fail(t);
                PopChoice();
                _fail(t);
              }
            else
              t = t_10;
            return(t);
          }
          t = filter_1(t, x_1);
          {
            t = concat_0(t);
            {
              a_22 = t;
              {
                t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(a_22));
                {
                  ATerm y_1 (ATerm t)
                  {
                    ATerm z_1 (ATerm t)
                    {
                      ATerm e_22 = NULL,f_22 = NULL,g_22 = NULL;
                      f_22 = t;
                      i_21 :
                      if(match_cons(f_22, sym_Arg_1))
                        {
                          g_22 = ATgetArgument(f_22, 0);
                          {
                            ATerm i_22 = NULL;
                            ATerm j_22 = NULL;
                            t = not_null(g_22);
                            {
                              t = int_to_string_0(t);
                              {
                                j_22 = t;
                                if(((i_22 != NULL) && (i_22 != j_22)))
                                  _fail(j_22);
                                else
                                  i_22 = j_22;
                              }
                            }
                            t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(i_22));
                          }
                        }
                      else
                        {
                          if(match_cons(f_22, sym_selector_2))
                            {
                              g_22 = ATgetArgument(f_22, 0);
                              e_22 = ATgetArgument(f_22, 1);
                              {
                                ATerm m_22 = NULL;
                                ATerm n_22 = NULL;
                                t = not_null(g_22);
                                {
                                  t = int_to_string_0(t);
                                  {
                                    n_22 = t;
                                    if(((m_22 != NULL) && (m_22 != n_22)))
                                      _fail(n_22);
                                    else
                                      m_22 = n_22;
                                  }
                                }
                                t = (ATerm) ATmakeAppl(sym_selector_2, not_null(m_22), not_null(e_22));
                              }
                            }
                          else
                            {
                              if(match_cons(f_22, sym_S_1))
                                {
                                  g_22 = ATgetArgument(f_22, 0);
                                  {
                                    ATerm p_22 = NULL;
                                    ATerm q_22 = NULL;
                                    t = not_null(g_22);
                                    {
                                      t = quote_0(t);
                                      {
                                        q_22 = t;
                                        if(((p_22 != NULL) && (p_22 != q_22)))
                                          _fail(q_22);
                                        else
                                          p_22 = q_22;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(p_22));
                                  }
                                }
                              else
                                _fail(t);
                            }
                        }
                      return(t);
                    }
                    t = try_1(t, z_1);
                    return(t);
                  }
                  t = topdown_1(t, y_1);
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
ATerm _2 (ATerm t, ATerm z_37 (ATerm), ATerm a_38 (ATerm))
{
  ATerm j_23 = NULL,k_23 = NULL,l_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym__2))
    {
      k_23 = ATgetArgument(j_23, 0);
      l_23 = ATgetArgument(j_23, 1);
      {
        ATerm o_23 = NULL;
        t = not_null(k_23);
        {
          ATerm q_23 = NULL;
          t = z_37(t);
          {
            o_23 = t;
            {
              t = not_null(l_23);
              {
                t = a_38(t);
                {
                  q_23 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_23), not_null(q_23));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm error_0 (ATerm t)
{
  ATerm u_10;
  u_10 = t;
  {
    ATerm w_23 = NULL;
    ATerm x_23 = NULL;
    x_23 = t;
    if(((w_23 != NULL) && (w_23 != x_23)))
      _fail(x_23);
    else
      w_23 = x_23;
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), not_null(w_23));
      t = printnl_0(t);
    }
  }
  t = u_10;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm v_10;
  v_10 = t;
  {
    t = error_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  t = v_10;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm z_23 (ATerm t)
  {
    ATerm w_10 = t;
    if((PushChoice() == 0))
      {
        t = m_68(t);
        PopChoice();
      }
    else
      {
        t = w_10;
        t = _one(t, z_23);
      }
    return(t);
  }
  t = z_23(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm d_24 = NULL,e_24 = NULL,f_24 = NULL;
  d_24 = t;
  c_24 :
  if(match_cons(d_24, sym__2))
    {
      e_24 = ATgetArgument(d_24, 0);
      f_24 = ATgetArgument(d_24, 1);
      {
        t = not_null(f_24);
        {
          ATerm b_2 (ATerm t)
          {
            ATerm i_24 = NULL;
            i_24 = t;
            if(((e_24 != NULL) && (e_24 != i_24)))
              _fail(i_24);
            else
              e_24 = i_24;
            return(t);
          }
          t = oncetd_1(t, b_2);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)));
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm n_24 = NULL;
  ATerm p_24 = NULL;
  n_24 = t;
  {
    ATerm q_24 = NULL;
    t = get_options_0(t);
    {
      q_24 = t;
      {
        if(((p_24 != NULL) && (p_24 != q_24)))
          _fail(q_24);
        else
          p_24 = q_24;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_24), not_null(p_24));
          t = in_0(t);
        }
      }
    }
    t = (ATerm) ATmakeAppl(sym__0);
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm w_54 (ATerm))
{
  ATerm x_10;
  x_10 = t;
  {
    t = (ATerm) ATmakeAppl(sym__0);
    {
      t = w_54(t);
      t = check_option_0(t);
    }
  }
  t = x_10;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm y_10 = t;
  if((PushChoice() == 0))
    {
      ATerm c_2 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Strict_0);
        return(t);
      }
      t = has_option_1(t, c_2);
      {
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue)));
        t = fatal_error_0(t);
      }
      PopChoice();
    }
  else
    {
      t = y_10;
      {
        t = (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue)));
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm i_49 (ATerm))
{
  ATerm b_25 = NULL,c_25 = NULL,d_25 = NULL;
  b_25 = t;
  z_24 :
  if(match_cons(b_25, sym__2))
    {
      c_25 = ATgetArgument(b_25, 0);
      d_25 = ATgetArgument(b_25, 1);
      a_25 :
      if(match_string(c_25, "in-type"))
        {
          ATerm f_25 = NULL,g_25 = NULL;
          ATerm a_11;
          a_11 = t;
          {
            ATerm h_25 = NULL;
            ATerm j_25 = NULL,k_25 = NULL,l_25 = NULL,m_25 = NULL,n_25 = NULL;
            t = not_null(d_25);
            {
              h_25 = t;
              {
                t = SSL_explode_term(not_null(h_25));
                {
                  j_25 = t;
                  w_24 :
                  if(match_cons(j_25, sym__2))
                    {
                      k_25 = ATgetArgument(j_25, 0);
                      l_25 = ATgetArgument(j_25, 1);
                      x_24 :
                      if(((ATgetType(l_25) == AT_LIST) && ((ATermList) l_25 != ATempty)))
                        {
                          m_25 = ATgetFirst((ATermList) l_25);
                          n_25 = (ATerm) ATgetNext((ATermList) l_25);
                          y_24 :
                          if(((ATermList) n_25 == ATempty))
                            {
                              {
                                if(((g_25 != NULL) && (g_25 != k_25)))
                                  _fail(k_25);
                                else
                                  g_25 = k_25;
                                if(((f_25 != NULL) && (f_25 != m_25)))
                                  _fail(m_25);
                                else
                                  f_25 = m_25;
                              }
                            }
                          else
                            _fail(t);
                        }
                      else
                        _fail(t);
                    }
                  else
                    _fail(t);
                }
              }
            }
          }
          t = a_11;
          {
            t = not_null(g_25);
            {
              ATerm b_11 = t;
              if((PushChoice() == 0))
                {
                  t = i_49(t);
                  PopChoice();
                }
              else
                {
                  t = b_11;
                  t = type_failure_0(t);
                }
            }
            t = not_null(f_25);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm mkterm_0 (ATerm t)
{
  ATerm t_25 = NULL,u_25 = NULL,v_25 = NULL;
  t_25 = t;
  s_25 :
  if(match_cons(t_25, sym__2))
    {
      u_25 = ATgetArgument(t_25, 0);
      v_25 = ATgetArgument(t_25, 1);
      t = SSL_mkterm(not_null(u_25), not_null(v_25));
    }
  else
    _fail(t);
  return(t);
}
ATerm OutId_1 (ATerm t, ATerm j_49 (ATerm))
{
  ATerm e_26 = NULL,f_26 = NULL,g_26 = NULL;
  e_26 = t;
  c_26 :
  if(match_cons(e_26, sym__2))
    {
      f_26 = ATgetArgument(e_26, 0);
      g_26 = ATgetArgument(e_26, 1);
      d_26 :
      if(match_string(f_26, "out-type"))
        {
          ATerm i_26 = NULL;
          ATerm j_26 = NULL,l_26 = NULL;
          ATerm k_26 = NULL;
          t = (ATerm) ATmakeAppl(sym__0);
          {
            t = j_49(t);
            {
              k_26 = t;
              if(((j_26 != NULL) && (j_26 != k_26)))
                _fail(k_26);
              else
                j_26 = k_26;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_26), (ATerm) ATinsert(ATempty, not_null(g_26)));
            {
              t = mkterm_0(t);
              {
                l_26 = t;
                if(((i_26 != NULL) && (i_26 != l_26)))
                  _fail(l_26);
                else
                  i_26 = l_26;
              }
            }
          }
          t = not_null(i_26);
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm InOutId_2 (ATerm t, ATerm h_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm c_11 = t;
  if((PushChoice() == 0))
    {
      ATerm d_2 (ATerm t)
      {
        ATerm r_26 = NULL;
        r_26 = t;
        p_26 :
        if(!(match_string(r_26, "out-type")))
          _fail(t);
        return(t);
      }
      t = _2(t, d_2, _id);
      t = OutId_1(t, i_0);
      PopChoice();
    }
  else
    {
      t = c_11;
      {
        ATerm f_2 (ATerm t)
        {
          ATerm s_26 = NULL;
          s_26 = t;
          q_26 :
          if(!(match_string(s_26, "in-type")))
            _fail(t);
          return(t);
        }
        t = _2(t, f_2, _id);
        t = InId_1(t, h_0);
      }
    }
  return(t);
}
ATerm termid_set_p__1 (ATerm t, ATerm q_49 (ATerm))
{
  ATerm w_26 = NULL,x_26 = NULL,a_27 = NULL;
  w_26 = t;
  v_26 :
  if(match_cons(w_26, sym__2))
    {
      x_26 = ATgetArgument(w_26, 0);
      a_27 = ATgetArgument(w_26, 1);
      {
        ATerm d_27 = NULL;
        ATerm e_27 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("out-type", 0, ATtrue)), not_null(a_27));
        {
          t = q_49(t);
          {
            e_27 = t;
            if(((d_27 != NULL) && (d_27 != e_27)))
              _fail(e_27);
            else
              d_27 = e_27;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(x_26), not_null(d_27));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm x_70 (ATerm))
{
  ATerm d_11 = t;
  if((PushChoice() == 0))
    {
      t = x_70(t);
      PopChoice();
    }
  else
    {
      t = d_11;
      {
      }
    }
  return(t);
}
ATerm termid_check_p__1 (ATerm t, ATerm o_49 (ATerm))
{
  ATerm k_27 = NULL,l_27 = NULL,m_27 = NULL;
  k_27 = t;
  j_27 :
  if(match_cons(k_27, sym__2))
    {
      l_27 = ATgetArgument(k_27, 0);
      m_27 = ATgetArgument(k_27, 1);
      {
        ATerm p_27 = NULL;
        ATerm q_27 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue)), not_null(m_27));
        {
          t = o_49(t);
          {
            q_27 = t;
            if(((p_27 != NULL) && (p_27 != q_27)))
              _fail(q_27);
            else
              p_27 = q_27;
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(l_27), not_null(p_27));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm v_27 = NULL;
  ATerm e_11;
  e_11 = t;
  {
    ATerm g_2 (ATerm t)
    {
      ATerm w_27 = NULL,x_27 = NULL;
      w_27 = t;
      u_27 :
      if(match_cons(w_27, sym_Program_1))
        {
          x_27 = ATgetArgument(w_27, 0);
          if(((v_27 != NULL) && (v_27 != x_27)))
            _fail(x_27);
          else
            v_27 = x_27;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, g_2);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue))), not_null(v_27)), (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeInt(1);
          t = exit_0(t);
        }
      }
    }
  }
  t = e_11;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue))));
  {
    t = printnl_0(t);
    {
      t = (ATerm) ATmakeInt(1);
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_28 = NULL,f_28 = NULL;
  ATerm i_2 (ATerm t)
  {
    ATerm n_2 (ATerm t)
    {
      ATerm g_11 = t;
      if((PushChoice() == 0))
        {
          ATerm o_2 (ATerm t)
          {
            ATerm g_28 = NULL;
            g_28 = t;
            z_27 :
            if(!(match_cons(g_28, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, o_2);
          PopChoice();
          _fail(t);
        }
      else
        t = g_11;
      return(t);
    }
    t = _2(t, n_2, _id);
    {
      ATerm p_2 (ATerm t)
      {
        ATerm q_2 (ATerm t)
        {
          ATerm h_28 = NULL,i_28 = NULL;
          h_28 = t;
          b_28 :
          if(match_cons(h_28, sym_Runtime_1))
            {
              i_28 = ATgetArgument(h_28, 0);
              if(((f_28 != NULL) && (f_28 != i_28)))
                _fail(i_28);
              else
                f_28 = i_28;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, q_2);
        return(t);
      }
      t = _2(t, p_2, _id);
      {
        ATerm v_2 (ATerm t)
        {
          ATerm w_2 (ATerm t)
          {
            ATerm j_28 = NULL,k_28 = NULL;
            j_28 = t;
            d_28 :
            if(match_cons(j_28, sym_Program_1))
              {
                k_28 = ATgetArgument(j_28, 0);
                if(((e_28 != NULL) && (e_28 != k_28)))
                  _fail(k_28);
                else
                  e_28 = k_28;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, w_2);
          return(t);
        }
        t = _2(t, v_2, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue))), not_null(f_28)), (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue))), not_null(e_28)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, i_2);
  {
    t = (ATerm) ATmakeInt(0);
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm p_28 = NULL,r_28 = NULL,s_28 = NULL;
  p_28 = t;
  o_28 :
  if(match_cons(p_28, sym__2))
    {
      r_28 = ATgetArgument(p_28, 0);
      s_28 = ATgetArgument(p_28, 1);
      t = SSL_WriteToTextFile(not_null(r_28), not_null(s_28));
    }
  else
    _fail(t);
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
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm i_29 = NULL;
  ATerm h_11;
  h_11 = t;
  {
    ATerm b_3 (ATerm t)
    {
      ATerm i_11 = t;
      if((PushChoice() == 0))
        {
          ATerm d_3 (ATerm t)
          {
            ATerm j_29 = NULL,k_29 = NULL;
            j_29 = t;
            f_29 :
            if(match_cons(j_29, sym_Output_1))
              {
                k_29 = ATgetArgument(j_29, 0);
                if(((i_29 != NULL) && (i_29 != k_29)))
                  _fail(k_29);
                else
                  i_29 = k_29;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, d_3);
          PopChoice();
        }
      else
        {
          t = i_11;
          {
            ATerm l_29 = NULL;
            t = (ATerm) ATmakeAppl(sym_stdout_0);
            {
              l_29 = t;
              if(((i_29 != NULL) && (i_29 != l_29)))
                _fail(l_29);
              else
                i_29 = l_29;
            }
          }
        }
      return(t);
    }
    t = _2(t, b_3, _id);
  }
  t = h_11;
  {
    ATerm e_3 (ATerm t)
    {
      ATerm f_3 (ATerm t)
      {
        t = not_null(i_29);
        return(t);
      }
      t = split_2(t, f_3, _id);
      return(t);
    }
    t = _2(t, _id, e_3);
    {
      ATerm j_11 = t;
      if((PushChoice() == 0))
        {
          ATerm g_3 (ATerm t)
          {
            ATerm k_3 (ATerm t)
            {
              ATerm m_29 = NULL;
              m_29 = t;
              h_29 :
              if(!(match_cons(m_29, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, k_3);
            return(t);
          }
          t = _2(t, g_3, WriteToBinaryFile_0);
          PopChoice();
        }
      else
        {
          t = j_11;
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
ATerm apply_strategy_1 (ATerm t, ATerm a_55 (ATerm))
{
  ATerm s_29 = NULL,u_29 = NULL,v_29 = NULL,w_29 = NULL;
  ATerm k_11;
  k_11 = t;
  t = dtime_0(t);
  t = k_11;
  {
    t = a_55(t);
    {
      ATerm l_11;
      l_11 = t;
      {
        ATerm t_29 = NULL;
        t = dtime_0(t);
        {
          t_29 = t;
          if(((s_29 != NULL) && (s_29 != t_29)))
            _fail(t_29);
          else
            s_29 = t_29;
        }
      }
      t = l_11;
      {
        u_29 = t;
        r_29 :
        if(match_cons(u_29, sym__2))
          {
            v_29 = ATgetArgument(u_29, 0);
            w_29 = ATgetArgument(u_29, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(v_29)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(s_29))), not_null(w_29));
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm ReadFromFile_0 (ATerm t)
{
  ATerm c_30 = NULL;
  c_30 = t;
  t = SSL_ReadFromFile(not_null(c_30));
  return(t);
}
ATerm split_2 (ATerm t, ATerm r_57 (ATerm), ATerm s_57 (ATerm))
{
  ATerm h_30 = NULL,j_30 = NULL;
  ATerm m_11;
  m_11 = t;
  {
    ATerm i_30 = NULL;
    t = r_57(t);
    {
      i_30 = t;
      if(((h_30 != NULL) && (h_30 != i_30)))
        _fail(i_30);
      else
        h_30 = i_30;
    }
  }
  t = m_11;
  {
    ATerm k_30 = NULL;
    t = s_57(t);
    {
      k_30 = t;
      if(((j_30 != NULL) && (j_30 != k_30)))
        _fail(k_30);
      else
        j_30 = k_30;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_30), not_null(j_30));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm q_30 = NULL;
  ATerm p_11;
  p_11 = t;
  {
    ATerm q_11 = t;
    if((PushChoice() == 0))
      {
        ATerm m_3 (ATerm t)
        {
          ATerm r_30 = NULL,s_30 = NULL;
          r_30 = t;
          o_30 :
          if(match_cons(r_30, sym_Input_1))
            {
              s_30 = ATgetArgument(r_30, 0);
              if(((q_30 != NULL) && (q_30 != s_30)))
                _fail(s_30);
              else
                q_30 = s_30;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, m_3);
        PopChoice();
      }
    else
      {
        t = q_11;
        {
          ATerm t_30 = NULL;
          t = (ATerm) ATmakeAppl(sym_stdin_0);
          {
            t_30 = t;
            if(((q_30 != NULL) && (q_30 != t_30)))
              _fail(t_30);
            else
              q_30 = t_30;
          }
        }
      }
  }
  t = p_11;
  {
    ATerm n_3 (ATerm t)
    {
      t = not_null(q_30);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, n_3);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm x_30 = NULL;
  x_30 = t;
  w_30 :
  if(!(match_cons(x_30, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm z_54 (ATerm))
{
  ATerm o_3 (ATerm t)
  {
    ATerm r_11 = t;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        PopChoice();
      }
    else
      {
        t = r_11;
        {
          ATerm v_11 = t;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              PopChoice();
            }
          else
            {
              t = v_11;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_3);
  t = z_54(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_30 = NULL;
  z_30 = t;
  t = SSL_table_create(not_null(z_30));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_31 = NULL;
  d_31 = t;
  {
    ATerm h_12;
    h_12 = t;
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("options", 0, ATtrue)), not_null(d_31));
          t = table_put_0(t);
        }
      }
    }
    t = h_12;
  }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm j_31 = NULL,k_31 = NULL,l_31 = NULL,m_31 = NULL;
  j_31 = t;
  i_31 :
  if(match_cons(j_31, sym__3))
    {
      k_31 = ATgetArgument(j_31, 0);
      l_31 = ATgetArgument(j_31, 1);
      m_31 = ATgetArgument(j_31, 2);
      {
        ATerm i_12;
        i_12 = t;
        {
          ATerm q_31 = NULL;
          ATerm r_31 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_31), not_null(l_31));
          {
            ATerm j_12 = t;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                PopChoice();
              }
            else
              {
                t = j_12;
                t = (ATerm) ATempty;
              }
            {
              r_31 = t;
              if(((q_31 != NULL) && (q_31 != r_31)))
                _fail(r_31);
              else
                q_31 = r_31;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_31), not_null(l_31), (ATerm) ATinsert(CheckATermList(not_null(q_31)), not_null(m_31)));
            t = table_put_0(t);
          }
        }
        t = i_12;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm k_53 (ATerm))
{
  ATerm v_31 = NULL;
  ATerm w_31 = NULL;
  t = (ATerm) ATmakeAppl(sym__0);
  {
    t = k_53(t);
    {
      w_31 = t;
      if(((v_31 != NULL) && (v_31 != w_31)))
        _fail(w_31);
      else
        v_31 = w_31;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), not_null(v_31));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm e_0 (ATerm), ATerm f_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL;
  d_32 = t;
  b_32 :
  if(match_string(d_32, "register-usage-info"))
    t = register_usage_1(t, g_0);
  else
    {
      if(((ATgetType(d_32) == AT_LIST) && ((ATermList) d_32 != ATempty)))
        {
          e_32 = ATgetFirst((ATermList) d_32);
          f_32 = (ATerm) ATgetNext((ATermList) d_32);
          c_32 :
          if(((ATgetType(f_32) == AT_LIST) && ((ATermList) f_32 != ATempty)))
            {
              g_32 = ATgetFirst((ATermList) f_32);
              h_32 = (ATerm) ATgetNext((ATermList) f_32);
              {
                ATerm l_32 = NULL;
                ATerm k_12;
                k_12 = t;
                {
                  t = not_null(e_32);
                  t = e_0(t);
                }
                t = k_12;
                {
                  ATerm q_32 = NULL;
                  t = not_null(g_32);
                  {
                    t = f_0(t);
                    {
                      q_32 = t;
                      if(((l_32 != NULL) && (l_32 != q_32)))
                        _fail(q_32);
                      else
                        l_32 = q_32;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_32)), not_null(l_32));
                }
              }
            }
          else
            _fail(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_12 = t;
  if((PushChoice() == 0))
    {
      ATerm p_3 (ATerm t)
      {
        ATerm l_33 = NULL;
        l_33 = t;
        u_32 :
        if(!(match_string(l_33, "-S")))
          {
            if(!(match_string(l_33, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm q_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym_Silent_0);
        return(t);
      }
      ATerm r_3 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
        return(t);
      }
      t = Option_3(t, p_3, q_3, r_3);
      PopChoice();
    }
  else
    {
      t = l_12;
      {
        ATerm m_12 = t;
        if((PushChoice() == 0))
          {
            ATerm z_3 (ATerm t)
            {
              ATerm m_33 = NULL;
              m_33 = t;
              v_32 :
              if(!(match_string(m_33, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm a_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(sym_Verbose_0);
              return(t);
            }
            ATerm b_4 (ATerm t)
            {
              t = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
              return(t);
            }
            t = Option_3(t, z_3, a_4, b_4);
            PopChoice();
          }
        else
          {
            t = m_12;
            {
              ATerm n_12 = t;
              if((PushChoice() == 0))
                {
                  ATerm e_4 (ATerm t)
                  {
                    ATerm n_33 = NULL;
                    n_33 = t;
                    w_32 :
                    if(!(match_string(n_33, "-v")))
                      {
                        if(!(match_string(n_33, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm f_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_Version_0);
                    return(t);
                  }
                  ATerm g_4 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
                    return(t);
                  }
                  t = Option_3(t, e_4, f_4, g_4);
                  PopChoice();
                }
              else
                {
                  t = n_12;
                  {
                    ATerm o_12 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm i_4 (ATerm t)
                        {
                          ATerm o_33 = NULL;
                          o_33 = t;
                          x_32 :
                          if(!(match_string(o_33, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm k_4 (ATerm t)
                        {
                          ATerm p_33 = NULL;
                          ATerm q_33 = NULL;
                          q_33 = t;
                          if(((p_33 != NULL) && (p_33 != q_33)))
                            _fail(q_33);
                          else
                            p_33 = q_33;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(p_33));
                          return(t);
                        }
                        ATerm l_4 (ATerm t)
                        {
                          t = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
                          return(t);
                        }
                        t = ArgOption_3(t, i_4, k_4, l_4);
                        PopChoice();
                      }
                    else
                      {
                        t = o_12;
                        {
                          ATerm p_12 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm m_4 (ATerm t)
                              {
                                ATerm r_33 = NULL;
                                r_33 = t;
                                z_32 :
                                if(!(match_string(r_33, "-i")))
                                  {
                                    if(!(match_string(r_33, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm n_4 (ATerm t)
                              {
                                ATerm s_33 = NULL;
                                ATerm t_33 = NULL;
                                t_33 = t;
                                if(((s_33 != NULL) && (s_33 != t_33)))
                                  _fail(t_33);
                                else
                                  s_33 = t_33;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(s_33));
                                return(t);
                              }
                              ATerm o_4 (ATerm t)
                              {
                                t = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
                                return(t);
                              }
                              t = ArgOption_3(t, m_4, n_4, o_4);
                              PopChoice();
                            }
                          else
                            {
                              t = p_12;
                              {
                                ATerm t_12 = t;
                                if((PushChoice() == 0))
                                  {
                                    ATerm p_4 (ATerm t)
                                    {
                                      ATerm u_33 = NULL;
                                      u_33 = t;
                                      d_33 :
                                      if(!(match_string(u_33, "-o")))
                                        {
                                          if(!(match_string(u_33, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm q_4 (ATerm t)
                                    {
                                      ATerm v_33 = NULL;
                                      ATerm w_33 = NULL;
                                      w_33 = t;
                                      if(((v_33 != NULL) && (v_33 != w_33)))
                                        _fail(w_33);
                                      else
                                        v_33 = w_33;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_33));
                                      return(t);
                                    }
                                    ATerm r_4 (ATerm t)
                                    {
                                      t = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
                                      return(t);
                                    }
                                    t = ArgOption_3(t, p_4, q_4, r_4);
                                    PopChoice();
                                  }
                                else
                                  {
                                    t = t_12;
                                    {
                                      ATerm v_12 = t;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm s_4 (ATerm t)
                                          {
                                            ATerm x_33 = NULL;
                                            x_33 = t;
                                            f_33 :
                                            if(!(match_string(x_33, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm t_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(sym_Binary_0);
                                            return(t);
                                          }
                                          ATerm u_4 (ATerm t)
                                          {
                                            t = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
                                            return(t);
                                          }
                                          t = Option_3(t, s_4, t_4, u_4);
                                          PopChoice();
                                        }
                                      else
                                        {
                                          t = v_12;
                                          {
                                            ATerm w_4 (ATerm t)
                                            {
                                              ATerm y_33 = NULL;
                                              y_33 = t;
                                              g_33 :
                                              if(!(match_string(y_33, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm x_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(sym_Statistics_0);
                                              return(t);
                                            }
                                            ATerm y_4 (ATerm t)
                                            {
                                              t = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
                                              return(t);
                                            }
                                            t = Option_3(t, w_4, x_4, y_4);
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
  ATerm d_34 = NULL;
  d_34 = t;
  t = SSL_table_destroy(not_null(d_34));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_34 = NULL;
  h_34 = t;
  t = SSL_exit(not_null(h_34));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm m_34 = NULL;
  m_34 = t;
  t = SSL_implode_string(not_null(m_34));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm r_64 (ATerm))
{
  ATerm p_34 (ATerm t)
  {
    ATerm w_12 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, p_34);
        PopChoice();
      }
    else
      {
        t = w_12;
        {
          t = Nil_0(t);
          t = r_64(t);
        }
      }
    return(t);
  }
  t = p_34(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm x_12 = t;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      PopChoice();
    }
  else
    {
      t = x_12;
      {
        ATerm s_34 = NULL,t_34 = NULL,u_34 = NULL;
        s_34 = t;
        r_34 :
        if(((ATgetType(s_34) == AT_LIST) && ((ATermList) s_34 != ATempty)))
          {
            t_34 = ATgetFirst((ATermList) s_34);
            u_34 = (ATerm) ATgetNext((ATermList) s_34);
            {
              t = not_null(t_34);
              {
                ATerm z_4 (ATerm t)
                {
                  t = not_null(u_34);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_4);
              }
            }
          }
        else
          _fail(t);
      }
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm a_35 = NULL;
  a_35 = t;
  t = SSL_explode_string(not_null(a_35));
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
ATerm long_description_1 (ATerm t, ATerm g_53 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm d_64 (ATerm))
{
  ATerm d_35 (ATerm t)
  {
    ATerm y_12 = t;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        PopChoice();
      }
    else
      {
        t = y_12;
        t = Cons_2(t, d_64, d_35);
      }
    return(t);
  }
  t = d_35(t);
  return(t);
}
ATerm reverse_1 (ATerm t, ATerm d_0 (ATerm))
{
  ATerm i_35 = NULL,j_35 = NULL,k_35 = NULL;
  k_35 = t;
  h_35 :
  if(((ATgetType(k_35) == AT_LIST) && ((ATermList) k_35 != ATempty)))
    {
      i_35 = ATgetFirst((ATermList) k_35);
      j_35 = (ATerm) ATgetNext((ATermList) k_35);
      {
        t = not_null(j_35);
        {
          ATerm a_5 (ATerm t)
          {
            ATerm n_35 = NULL;
            ATerm y_37 = NULL;
            t = d_0(t);
            {
              y_37 = t;
              if(((n_35 != NULL) && (n_35 != y_37)))
                _fail(y_37);
              else
                n_35 = y_37;
            }
            t = (ATerm) ATinsert(CheckATermList(not_null(n_35)), not_null(i_35));
            return(t);
          }
          t = reverse_1(t, a_5);
        }
      }
    }
  else
    {
      if(((ATermList) k_35 == ATempty))
        {
          {
            t = (ATerm) ATmakeAppl(sym__0);
            t = d_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm d_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_1(t, d_6);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm g_38 = NULL,h_38 = NULL,i_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym__2))
    {
      h_38 = ATgetArgument(g_38, 0);
      i_38 = ATgetArgument(g_38, 1);
      t = SSL_table_get(not_null(h_38), not_null(i_38));
    }
  else
    _fail(t);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm f_53 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_41 (ATerm))
{
  ATerm p_38 = NULL,q_38 = NULL;
  p_38 = t;
  o_38 :
  if(match_cons(p_38, sym_Program_1))
    {
      q_38 = ATgetArgument(p_38, 0);
      {
        ATerm s_38 = NULL;
        t = not_null(q_38);
        {
          t = m_41(t);
          {
            s_38 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(s_38));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm a_39 = NULL;
  ATerm f_6 (ATerm t)
  {
    ATerm g_6 (ATerm t)
    {
      ATerm b_39 = NULL;
      b_39 = t;
      if(((a_39 != NULL) && (a_39 != b_39)))
        _fail(b_39);
      else
        a_39 = b_39;
      return(t);
    }
    t = Program_1(t, g_6);
    return(t);
  }
  t = option_defined_1(t, f_6);
  {
    ATerm h_6 (ATerm t)
    {
      ATerm c_39 = NULL;
      ATerm d_39 = NULL;
      t = (ATerm) ATmakeAppl(sym__0);
      {
        ATerm i_6 (ATerm t)
        {
          t = not_null(a_39);
          return(t);
        }
        t = short_description_1(t, i_6);
        {
          t = concat_strings_0(t);
          {
            d_39 = t;
            if(((c_39 != NULL) && (c_39 != d_39)))
              _fail(d_39);
            else
              c_39 = d_39;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, not_null(c_39)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, h_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue))));
      {
        t = printnl_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)));
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm e_39 = NULL;
                  e_39 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(e_39)), (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue))));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, j_6);
                {
                  ATerm k_6 (ATerm t)
                  {
                    ATerm g_39 = NULL;
                    ATerm h_39 = NULL;
                    t = (ATerm) ATmakeAppl(sym__0);
                    {
                      ATerm l_6 (ATerm t)
                      {
                        t = not_null(a_39);
                        return(t);
                      }
                      t = long_description_1(t, l_6);
                      {
                        t = concat_strings_0(t);
                        {
                          h_39 = t;
                          if(((g_39 != NULL) && (g_39 != h_39)))
                            _fail(h_39);
                          else
                            g_39 = h_39;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(g_39)), (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue))));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, k_6);
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
  ATerm o_39 = NULL,p_39 = NULL,q_39 = NULL;
  o_39 = t;
  n_39 :
  if(match_cons(o_39, sym__2))
    {
      p_39 = ATgetArgument(o_39, 0);
      q_39 = ATgetArgument(o_39, 1);
      {
        ATerm d_13;
        d_13 = t;
        t = SSL_printnl(not_null(p_39), not_null(q_39));
        t = d_13;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_41 (ATerm))
{
  ATerm x_39 = NULL,y_39 = NULL;
  x_39 = t;
  w_39 :
  if(match_cons(x_39, sym_Undefined_1))
    {
      y_39 = ATgetArgument(x_39, 0);
      {
        ATerm a_40 = NULL;
        t = not_null(y_39);
        {
          t = n_41(t);
          {
            a_40 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(a_40));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm l_64 (ATerm))
{
  ATerm e_40 (ATerm t)
  {
    ATerm e_13 = t;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, l_64, _id);
        PopChoice();
      }
    else
      {
        t = e_13;
        t = Cons_2(t, _id, e_40);
      }
    return(t);
  }
  t = e_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm e_54 (ATerm))
{
  t = fetch_1(t, e_54);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm g_40 = NULL;
  g_40 = t;
  f_40 :
  if(!(match_cons(g_40, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm m_6 (ATerm t)
  {
    ATerm i_40 = NULL;
    i_40 = t;
    h_40 :
    if(!(match_string(i_40, "--help")))
      {
        if(!(match_string(i_40, "-h")))
          {
            if(!(match_string(i_40, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm n_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Help_0);
    return(t);
  }
  ATerm r_6 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
    return(t);
  }
  t = Option_3(t, m_6, n_6, r_6);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm l_40 = NULL,m_40 = NULL,n_40 = NULL;
  l_40 = t;
  k_40 :
  if(((ATgetType(l_40) == AT_LIST) && ((ATermList) l_40 != ATempty)))
    {
      m_40 = ATgetFirst((ATermList) l_40);
      n_40 = (ATerm) ATgetNext((ATermList) l_40);
      t = (ATerm) ATinsert(CheckATermList(not_null(n_40)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(m_40)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_48 (ATerm), ATerm a_49 (ATerm))
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL;
  v_40 = t;
  u_40 :
  if(((ATgetType(v_40) == AT_LIST) && ((ATermList) v_40 != ATempty)))
    {
      w_40 = ATgetFirst((ATermList) v_40);
      x_40 = (ATerm) ATgetNext((ATermList) v_40);
      {
        ATerm a_41 = NULL;
        t = not_null(w_40);
        {
          ATerm c_41 = NULL;
          t = z_48(t);
          {
            a_41 = t;
            {
              t = not_null(x_40);
              {
                t = a_49(t);
                {
                  c_41 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(c_41)), not_null(a_41));
                }
              }
            }
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Nil_0 (ATerm t)
{
  ATerm i_41 = NULL;
  i_41 = t;
  h_41 :
  if(((ATermList) i_41 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm i_53 (ATerm))
{
  ATerm f_13;
  f_13 = t;
  {
    ATerm w_6 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
      t = i_53(t);
      return(t);
    }
    t = try_1(t, w_6);
  }
  t = f_13;
  {
    ATerm a_7 (ATerm t)
    {
      ATerm k_41 = NULL;
      k_41 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(k_41));
      return(t);
    }
    ATerm d_7 (ATerm t)
    {
      ATerm g_13 = t;
      if((PushChoice() == 0))
        {
          ATerm h_13 = t;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              PopChoice();
            }
          else
            {
              t = h_13;
              {
                t = i_53(t);
                t = Cons_2(t, _id, d_7);
              }
            }
          PopChoice();
        }
      else
        {
          t = g_13;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, a_7, d_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm s_41 = NULL,t_41 = NULL,u_41 = NULL;
  ATerm i_13;
  i_13 = t;
  {
    ATerm v_41 = NULL,w_41 = NULL,x_41 = NULL,y_41 = NULL;
    v_41 = t;
    r_41 :
    if(match_cons(v_41, sym__3))
      {
        w_41 = ATgetArgument(v_41, 0);
        x_41 = ATgetArgument(v_41, 1);
        y_41 = ATgetArgument(v_41, 2);
        {
          if(((s_41 != NULL) && (s_41 != w_41)))
            _fail(w_41);
          else
            s_41 = w_41;
          {
            if(((t_41 != NULL) && (t_41 != x_41)))
              _fail(x_41);
            else
              t_41 = x_41;
            {
              if(((u_41 != NULL) && (u_41 != y_41)))
                _fail(y_41);
              else
                u_41 = y_41;
              t = SSL_table_put(not_null(s_41), not_null(t_41), not_null(u_41));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = i_13;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm h_53 (ATerm))
{
  ATerm b_42 = NULL;
  ATerm j_13;
  j_13 = t;
  {
    t = (ATerm) ATmakeAppl(sym__3, (ATerm)ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue)), (ATerm)ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue)), (ATerm) ATempty);
    t = table_put_0(t);
  }
  t = j_13;
  {
    ATerm f_7 (ATerm t)
    {
      ATerm k_13 = t;
      if((PushChoice() == 0))
        {
          t = h_53(t);
          PopChoice();
        }
      else
        {
          t = k_13;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, f_7);
    {
      ATerm h_7 (ATerm t)
      {
        ATerm l_13 = t;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = (ATerm) ATmakeInt(0);
                t = exit_0(t);
              }
            }
            PopChoice();
          }
        else
          {
            t = l_13;
            {
              ATerm n_7 (ATerm t)
              {
                ATerm o_7 (ATerm t)
                {
                  ATerm c_42 = NULL;
                  c_42 = t;
                  if(((b_42 != NULL) && (b_42 != c_42)))
                    _fail(c_42);
                  else
                    b_42 = c_42;
                  return(t);
                }
                t = Undefined_1(t, o_7);
                return(t);
              }
              t = option_defined_1(t, n_7);
              {
                ATerm m_13;
                m_13 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_stderr_0), (ATerm) ATinsert(ATinsert(ATempty, not_null(b_42)), (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue))));
                  t = printnl_0(t);
                }
                t = m_13;
                {
                  t = system_usage_0(t);
                  {
                    t = (ATerm) ATmakeInt(1);
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, h_7);
      {
        ATerm r_13;
        r_13 = t;
        {
          t = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
          t = table_destroy_0(t);
        }
        t = r_13;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm o_54 (ATerm), ATerm p_54 (ATerm), ATerm q_54 (ATerm))
{
  ATerm p_7 (ATerm t)
  {
    ATerm t_13 = t;
    if((PushChoice() == 0))
      {
        t = p_54(t);
        PopChoice();
      }
    else
      {
        t = t_13;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, p_7);
  {
    t = store_options_0(t);
    {
      ATerm g_14 = t;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, q_54);
          PopChoice();
        }
      else
        {
          t = g_14;
          {
            ATerm h_14 = t;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, o_54);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                PopChoice();
              }
            else
              {
                t = h_14;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm j_54 (ATerm), ATerm k_54 (ATerm))
{
  t = iowrap_3(t, j_54, k_54, default_usage_0);
  return(t);
}
ATerm io_idwrap_3 (ATerm t, ATerm f_49 (ATerm), ATerm g_49 (ATerm), ATerm h_49 (ATerm))
{
  ATerm q_7 (ATerm t)
  {
    ATerm s_7 (ATerm t)
    {
      t = termid_check_p__1(t, f_49);
      return(t);
    }
    t = try_1(t, s_7);
    {
      t = g_49(t);
      {
        ATerm t_7 (ATerm t)
        {
          t = termid_set_p__1(t, f_49);
          return(t);
        }
        t = try_1(t, t_7);
      }
    }
    return(t);
  }
  ATerm r_7 (ATerm t)
  {
    ATerm i_14 = t;
    if((PushChoice() == 0))
      {
        t = h_49(t);
        PopChoice();
      }
    else
      {
        t = i_14;
        {
          ATerm u_7 (ATerm t)
          {
            ATerm f_42 = NULL;
            f_42 = t;
            e_42 :
            if(!(match_string(f_42, "--strict")))
              _fail(t);
            return(t);
          }
          ATerm v_7 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(sym_Strict_0);
            return(t);
          }
          ATerm w_7 (ATerm t)
          {
            t = (ATerm) ATmakeAppl(ATmakeSymbol("--strict         Use strict typing of input term", 0, ATtrue));
            return(t);
          }
          t = Option_3(t, u_7, v_7, w_7);
        }
      }
    return(t);
  }
  t = iowrap_2(t, q_7, r_7);
  return(t);
}
ATerm Ppgen_0 (ATerm t)
{
  ATerm x_7 (ATerm t)
  {
    ATerm e_8 (ATerm t)
    {
      ATerm i_42 = NULL;
      i_42 = t;
      g_42 :
      if(!(match_string(i_42, "\"sdf-2.1\"")))
        _fail(t);
      return(t);
    }
    ATerm f_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("\"pp-tables-0\"", 0, ATtrue));
      return(t);
    }
    t = InOutId_2(t, e_8, f_8);
    return(t);
  }
  ATerm c_8 (ATerm t)
  {
    t = _2(t, _id, ppgenerate_0);
    return(t);
  }
  ATerm d_8 (ATerm t)
  {
    ATerm g_8 (ATerm t)
    {
      ATerm j_42 = NULL;
      j_42 = t;
      h_42 :
      if(!(match_string(j_42, "-v")))
        _fail(t);
      return(t);
    }
    ATerm h_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(sym_Verbose_0);
      return(t);
    }
    ATerm l_8 (ATerm t)
    {
      t = (ATerm) ATmakeAppl(ATmakeSymbol("-v     Verbose execution", 0, ATtrue));
      return(t);
    }
    t = Option_3(t, g_8, h_8, l_8);
    return(t);
  }
  t = io_idwrap_3(t, x_7, c_8, d_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Ppgen_0(t);
  return(t);
}

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
Symbol sym_bracket_symbol_1;
Symbol sym_lit_1;
Symbol sym_aliases_1;
Symbol sym_alias_2;
Symbol sym_Alias_s_1;
Symbol sym_CharClass_1;
Symbol sym_CharClass_Lookaheads_2;
Symbol sym_Lookahead_1;
Symbol sym_bar_2;
Symbol sym_comma_1;
Symbol sym_follow_restriction_2;
Symbol sym_Restriction_s_1;
Symbol sym_restrictions_1;
Symbol sym_reject_0;
Symbol sym_e_1;
Symbol sym_OptExp_empty_0;
Symbol sym_IntCon_NatCon_OptExp_3;
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
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_constructor_0;
Symbol sym_memo_0;
Symbol sym_qlit_1;
Symbol sym_uqlit_1;
Symbol sym_Literal_1;
Symbol sym_prod_fun_4;
Symbol sym_sort_1;
Symbol sym_Sorts_1;
Symbol sym_NumChar_1;
Symbol sym_ShortChar_1;
Symbol sym_Character_dunno_a__0_0;
Symbol sym_Character_dunno_b__0_0;
Symbol sym_Character_1;
Symbol sym_range_2;
Symbol sym_CharRange_1;
Symbol sym_conc_ranges_2;
Symbol sym_no_charranges_0;
Symbol sym_CharRanges_1;
Symbol sym_simple_charclass_1;
Symbol sym_not_charclass_1;
Symbol sym_diff_charclass_2;
Symbol sym_and_charclass_2;
Symbol sym_or_charclass_2;
Symbol sym_char_class_1;
Symbol sym_left_0;
Symbol sym_right_0;
Symbol sym_non_assoc_0;
Symbol sym_assoc_0;
Symbol sym_bracket_0;
Symbol sym_atr_1;
Symbol sym_simple_group_1;
Symbol sym_prods_group_1;
Symbol sym_assoc_group_2;
Symbol sym_priority_chain_1;
Symbol sym_priority_assoc_3;
Symbol sym_comma_1;
Symbol sym_priorities_1;
Symbol sym_NatCon_p__1;
Symbol sym_plus_1;
Symbol sym_minus_1;
Symbol sym_empty_0;
Symbol sym_seq_2;
Symbol sym_opt_1;
Symbol sym_iter_1;
Symbol sym_iter_star_1;
Symbol sym_iter_sep_2;
Symbol sym_iter_star_sep_2;
Symbol sym_iter_n_2;
Symbol sym_iter_sep_n_3;
Symbol sym_set_1;
Symbol sym_pair_2;
Symbol sym_func_2;
Symbol sym_alt_2;
Symbol sym_perm_1;
Symbol sym_renamings_1;
Symbol sym_sort_renaming_2;
Symbol sym_prod_renaming_2;
Symbol sym_Module_s_1;
Symbol sym_Module_3;
Symbol sym_Exports_1;
Symbol sym_Hiddens_1;
Symbol sym_Section_s_1;
Symbol sym_ModuleId_1;
Symbol sym_ModuleId_Symbols_2;
Symbol sym_Id_1;
Symbol sym_Imports_1;
Symbol sym_ImpSection_1;
Symbol sym_Import_s_1;
Symbol sym_ModuleName_1;
Symbol sym_ModuleName_Renamings_2;
Symbol sym_lexical_syntax_1;
Symbol sym_context_free_syntax_1;
Symbol sym_variables_1;
Symbol sym_lexical_variables_1;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_varsym_1;
Symbol sym_layout_0;
Symbol sym_empty_grammar_0;
Symbol sym_conc_grammars_2;
Symbol sym_TagId_empty_0;
Symbol sym_Symbol_s_1;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_Production_s_1;
Symbol sym_syntax_1;
Symbol sym_START_0;
Symbol sym_START_p__0;
Symbol sym_lexical_priorities_1;
Symbol sym_context_free_priorities_1;
Symbol sym_lexical_restrictions_1;
Symbol sym_context_free_restrictions_1;
Symbol sym_Definition_1;
Symbol sym_Injections_0;
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
Symbol sym_atr_1;
Symbol sym_cons_1;
Symbol sym_no_attrs_0;
Symbol sym_attrs_1;
Symbol sym_prod_3;
Symbol sym_appl_2;
Symbol sym_amb_1;
Symbol sym_flatlex_2;
Symbol sym_parsetree_2;
Symbol sym_Strict_0;
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
Symbol sym_PP_Table_1;
Symbol sym_layout_1;
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
  sym_bracket_symbol_1 = ATmakeSymbol("bracket-symbol", 1, ATfalse);
  ATprotectSymbol(sym_bracket_symbol_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_aliases_1 = ATmakeSymbol("aliases", 1, ATfalse);
  ATprotectSymbol(sym_aliases_1);
  sym_alias_2 = ATmakeSymbol("alias", 2, ATfalse);
  ATprotectSymbol(sym_alias_2);
  sym_Alias_s_1 = ATmakeSymbol("Alias-s", 1, ATfalse);
  ATprotectSymbol(sym_Alias_s_1);
  sym_CharClass_1 = ATmakeSymbol("CharClass", 1, ATfalse);
  ATprotectSymbol(sym_CharClass_1);
  sym_CharClass_Lookaheads_2 = ATmakeSymbol("CharClass-Lookaheads", 2, ATfalse);
  ATprotectSymbol(sym_CharClass_Lookaheads_2);
  sym_Lookahead_1 = ATmakeSymbol("Lookahead", 1, ATfalse);
  ATprotectSymbol(sym_Lookahead_1);
  sym_bar_2 = ATmakeSymbol("bar", 2, ATfalse);
  ATprotectSymbol(sym_bar_2);
  sym_comma_1 = ATmakeSymbol("comma", 1, ATfalse);
  ATprotectSymbol(sym_comma_1);
  sym_follow_restriction_2 = ATmakeSymbol("follow-restriction", 2, ATfalse);
  ATprotectSymbol(sym_follow_restriction_2);
  sym_Restriction_s_1 = ATmakeSymbol("Restriction-s", 1, ATfalse);
  ATprotectSymbol(sym_Restriction_s_1);
  sym_restrictions_1 = ATmakeSymbol("restrictions", 1, ATfalse);
  ATprotectSymbol(sym_restrictions_1);
  sym_reject_0 = ATmakeSymbol("reject", 0, ATfalse);
  ATprotectSymbol(sym_reject_0);
  sym_e_1 = ATmakeSymbol("e", 1, ATfalse);
  ATprotectSymbol(sym_e_1);
  sym_OptExp_empty_0 = ATmakeSymbol("OptExp-empty", 0, ATfalse);
  ATprotectSymbol(sym_OptExp_empty_0);
  sym_IntCon_NatCon_OptExp_3 = ATmakeSymbol("IntCon-NatCon-OptExp", 3, ATfalse);
  ATprotectSymbol(sym_IntCon_NatCon_OptExp_3);
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
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_constructor_0 = ATmakeSymbol("constructor", 0, ATfalse);
  ATprotectSymbol(sym_constructor_0);
  sym_memo_0 = ATmakeSymbol("memo", 0, ATfalse);
  ATprotectSymbol(sym_memo_0);
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
  ATprotectSymbol(sym_Literal_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_NumChar_1 = ATmakeSymbol("NumChar", 1, ATfalse);
  ATprotectSymbol(sym_NumChar_1);
  sym_ShortChar_1 = ATmakeSymbol("ShortChar", 1, ATfalse);
  ATprotectSymbol(sym_ShortChar_1);
  sym_Character_dunno_a__0_0 = ATmakeSymbol("Character-dunno-a_0", 0, ATfalse);
  ATprotectSymbol(sym_Character_dunno_a__0_0);
  sym_Character_dunno_b__0_0 = ATmakeSymbol("Character-dunno-b_0", 0, ATfalse);
  ATprotectSymbol(sym_Character_dunno_b__0_0);
  sym_Character_1 = ATmakeSymbol("Character", 1, ATfalse);
  ATprotectSymbol(sym_Character_1);
  sym_range_2 = ATmakeSymbol("range", 2, ATfalse);
  ATprotectSymbol(sym_range_2);
  sym_CharRange_1 = ATmakeSymbol("CharRange", 1, ATfalse);
  ATprotectSymbol(sym_CharRange_1);
  sym_conc_ranges_2 = ATmakeSymbol("conc-ranges", 2, ATfalse);
  ATprotectSymbol(sym_conc_ranges_2);
  sym_no_charranges_0 = ATmakeSymbol("no-charranges", 0, ATfalse);
  ATprotectSymbol(sym_no_charranges_0);
  sym_CharRanges_1 = ATmakeSymbol("CharRanges", 1, ATfalse);
  ATprotectSymbol(sym_CharRanges_1);
  sym_simple_charclass_1 = ATmakeSymbol("simple-charclass", 1, ATfalse);
  ATprotectSymbol(sym_simple_charclass_1);
  sym_not_charclass_1 = ATmakeSymbol("not-charclass", 1, ATfalse);
  ATprotectSymbol(sym_not_charclass_1);
  sym_diff_charclass_2 = ATmakeSymbol("diff-charclass", 2, ATfalse);
  ATprotectSymbol(sym_diff_charclass_2);
  sym_and_charclass_2 = ATmakeSymbol("and-charclass", 2, ATfalse);
  ATprotectSymbol(sym_and_charclass_2);
  sym_or_charclass_2 = ATmakeSymbol("or-charclass", 2, ATfalse);
  ATprotectSymbol(sym_or_charclass_2);
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
  sym_left_0 = ATmakeSymbol("left", 0, ATfalse);
  ATprotectSymbol(sym_left_0);
  sym_right_0 = ATmakeSymbol("right", 0, ATfalse);
  ATprotectSymbol(sym_right_0);
  sym_non_assoc_0 = ATmakeSymbol("non-assoc", 0, ATfalse);
  ATprotectSymbol(sym_non_assoc_0);
  sym_assoc_0 = ATmakeSymbol("assoc", 0, ATfalse);
  ATprotectSymbol(sym_assoc_0);
  sym_bracket_0 = ATmakeSymbol("bracket", 0, ATfalse);
  ATprotectSymbol(sym_bracket_0);
  sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
  ATprotectSymbol(sym_atr_1);
  sym_simple_group_1 = ATmakeSymbol("simple-group", 1, ATfalse);
  ATprotectSymbol(sym_simple_group_1);
  sym_prods_group_1 = ATmakeSymbol("prods-group", 1, ATfalse);
  ATprotectSymbol(sym_prods_group_1);
  sym_assoc_group_2 = ATmakeSymbol("assoc-group", 2, ATfalse);
  ATprotectSymbol(sym_assoc_group_2);
  sym_priority_chain_1 = ATmakeSymbol("priority-chain", 1, ATfalse);
  ATprotectSymbol(sym_priority_chain_1);
  sym_priority_assoc_3 = ATmakeSymbol("priority-assoc", 3, ATfalse);
  ATprotectSymbol(sym_priority_assoc_3);
  sym_comma_1 = ATmakeSymbol("comma", 1, ATfalse);
  ATprotectSymbol(sym_comma_1);
  sym_priorities_1 = ATmakeSymbol("priorities", 1, ATfalse);
  ATprotectSymbol(sym_priorities_1);
  sym_NatCon_p__1 = ATmakeSymbol("NatCon'", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_p__1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
  sym_empty_0 = ATmakeSymbol("empty", 0, ATfalse);
  ATprotectSymbol(sym_empty_0);
  sym_seq_2 = ATmakeSymbol("seq", 2, ATfalse);
  ATprotectSymbol(sym_seq_2);
  sym_opt_1 = ATmakeSymbol("opt", 1, ATfalse);
  ATprotectSymbol(sym_opt_1);
  sym_iter_1 = ATmakeSymbol("iter", 1, ATfalse);
  ATprotectSymbol(sym_iter_1);
  sym_iter_star_1 = ATmakeSymbol("iter-star", 1, ATfalse);
  ATprotectSymbol(sym_iter_star_1);
  sym_iter_sep_2 = ATmakeSymbol("iter-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_sep_2);
  sym_iter_star_sep_2 = ATmakeSymbol("iter-star-sep", 2, ATfalse);
  ATprotectSymbol(sym_iter_star_sep_2);
  sym_iter_n_2 = ATmakeSymbol("iter-n", 2, ATfalse);
  ATprotectSymbol(sym_iter_n_2);
  sym_iter_sep_n_3 = ATmakeSymbol("iter-sep-n", 3, ATfalse);
  ATprotectSymbol(sym_iter_sep_n_3);
  sym_set_1 = ATmakeSymbol("set", 1, ATfalse);
  ATprotectSymbol(sym_set_1);
  sym_pair_2 = ATmakeSymbol("pair", 2, ATfalse);
  ATprotectSymbol(sym_pair_2);
  sym_func_2 = ATmakeSymbol("func", 2, ATfalse);
  ATprotectSymbol(sym_func_2);
  sym_alt_2 = ATmakeSymbol("alt", 2, ATfalse);
  ATprotectSymbol(sym_alt_2);
  sym_perm_1 = ATmakeSymbol("perm", 1, ATfalse);
  ATprotectSymbol(sym_perm_1);
  sym_renamings_1 = ATmakeSymbol("renamings", 1, ATfalse);
  ATprotectSymbol(sym_renamings_1);
  sym_sort_renaming_2 = ATmakeSymbol("sort-renaming", 2, ATfalse);
  ATprotectSymbol(sym_sort_renaming_2);
  sym_prod_renaming_2 = ATmakeSymbol("prod-renaming", 2, ATfalse);
  ATprotectSymbol(sym_prod_renaming_2);
  sym_Module_s_1 = ATmakeSymbol("Module-s", 1, ATfalse);
  ATprotectSymbol(sym_Module_s_1);
  sym_Module_3 = ATmakeSymbol("Module", 3, ATfalse);
  ATprotectSymbol(sym_Module_3);
  sym_Exports_1 = ATmakeSymbol("Exports", 1, ATfalse);
  ATprotectSymbol(sym_Exports_1);
  sym_Hiddens_1 = ATmakeSymbol("Hiddens", 1, ATfalse);
  ATprotectSymbol(sym_Hiddens_1);
  sym_Section_s_1 = ATmakeSymbol("Section-s", 1, ATfalse);
  ATprotectSymbol(sym_Section_s_1);
  sym_ModuleId_1 = ATmakeSymbol("ModuleId", 1, ATfalse);
  ATprotectSymbol(sym_ModuleId_1);
  sym_ModuleId_Symbols_2 = ATmakeSymbol("ModuleId-Symbols", 2, ATfalse);
  ATprotectSymbol(sym_ModuleId_Symbols_2);
  sym_Id_1 = ATmakeSymbol("Id", 1, ATfalse);
  ATprotectSymbol(sym_Id_1);
  sym_Imports_1 = ATmakeSymbol("Imports", 1, ATfalse);
  ATprotectSymbol(sym_Imports_1);
  sym_ImpSection_1 = ATmakeSymbol("ImpSection", 1, ATfalse);
  ATprotectSymbol(sym_ImpSection_1);
  sym_Import_s_1 = ATmakeSymbol("Import-s", 1, ATfalse);
  ATprotectSymbol(sym_Import_s_1);
  sym_ModuleName_1 = ATmakeSymbol("ModuleName", 1, ATfalse);
  ATprotectSymbol(sym_ModuleName_1);
  sym_ModuleName_Renamings_2 = ATmakeSymbol("ModuleName-Renamings", 2, ATfalse);
  ATprotectSymbol(sym_ModuleName_Renamings_2);
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
  sym_START_0 = ATmakeSymbol("START", 0, ATfalse);
  ATprotectSymbol(sym_START_0);
  sym_START_p__0 = ATmakeSymbol("START'", 0, ATfalse);
  ATprotectSymbol(sym_START_p__0);
  sym_lexical_priorities_1 = ATmakeSymbol("lexical-priorities", 1, ATfalse);
  ATprotectSymbol(sym_lexical_priorities_1);
  sym_context_free_priorities_1 = ATmakeSymbol("context-free-priorities", 1, ATfalse);
  ATprotectSymbol(sym_context_free_priorities_1);
  sym_lexical_restrictions_1 = ATmakeSymbol("lexical-restrictions", 1, ATfalse);
  ATprotectSymbol(sym_lexical_restrictions_1);
  sym_context_free_restrictions_1 = ATmakeSymbol("context-free-restrictions", 1, ATfalse);
  ATprotectSymbol(sym_context_free_restrictions_1);
  sym_Definition_1 = ATmakeSymbol("Definition", 1, ATfalse);
  ATprotectSymbol(sym_Definition_1);
  sym_Injections_0 = ATmakeSymbol("Injections", 0, ATfalse);
  ATprotectSymbol(sym_Injections_0);
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
  sym_atr_1 = ATmakeSymbol("atr", 1, ATfalse);
  ATprotectSymbol(sym_atr_1);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
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
  sym_parsetree_2 = ATmakeSymbol("parsetree", 2, ATfalse);
  ATprotectSymbol(sym_parsetree_2);
  sym_Strict_0 = ATmakeSymbol("Strict", 0, ATfalse);
  ATprotectSymbol(sym_Strict_0);
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
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_h_47;
ATerm term_t_46;
ATerm term_l_46;
ATerm term_e_46;
ATerm term_c_46;
ATerm term_b_46;
ATerm term_k_45;
ATerm term_j_45;
ATerm term_i_45;
ATerm term_h_45;
ATerm term_c_45;
ATerm term_z_44;
ATerm term_w_43;
ATerm term_s_43;
ATerm term_r_43;
ATerm term_k_43;
ATerm term_h_43;
ATerm term_s_42;
ATerm term_o_42;
ATerm term_v_41;
ATerm term_u_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_n_41;
ATerm term_h_40;
ATerm term_y_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_s_39;
ATerm term_q_39;
ATerm term_p_39;
ATerm term_o_39;
ATerm term_s_38;
ATerm term_j_38;
ATerm term_i_38;
ATerm term_d_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_x_37;
ATerm term_v_35;
ATerm term_c_35;
ATerm term_l_33;
ATerm term_k_33;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_27;
ATerm term_b_27;
ATerm term_a_27;
ATerm term_z_26;
ATerm term_y_26;
ATerm term_x_26;
ATerm term_w_26;
ATerm term_v_26;
ATerm term_u_26;
ATerm term_t_26;
ATerm term_s_26;
ATerm term_r_26;
ATerm term_q_26;
ATerm term_p_26;
ATerm term_o_26;
ATerm term_n_26;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_j_26;
ATerm term_i_26;
ATerm term_h_26;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_e_26;
ATerm term_d_26;
ATerm term_c_26;
ATerm term_b_26;
ATerm term_a_26;
ATerm term_z_25;
ATerm term_y_25;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_o_25;
ATerm term_n_25;
ATerm term_i_25;
ATerm term_h_25;
ATerm term_f_25;
ATerm term_e_25;
ATerm term_z_24;
ATerm term_s_24;
ATerm term_q_24;
ATerm term_o_24;
ATerm term_m_24;
ATerm term_k_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_f_24;
ATerm term_z_23;
ATerm term_s_23;
ATerm term_r_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_o_23;
ATerm term_n_23;
ATerm term_m_23;
ATerm term_l_23;
ATerm term_k_23;
ATerm term_j_23;
ATerm term_i_23;
ATerm term_h_23;
ATerm term_g_23;
ATerm term_f_23;
ATerm term_m_22;
ATerm term_j_22;
ATerm term_i_22;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_r_20;
ATerm term_q_20;
ATerm term_p_20;
ATerm term_o_19;
ATerm term_n_19;
ATerm term_m_19;
ATerm term_k_19;
ATerm term_j_19;
ATerm term_i_19;
ATerm term_h_19;
ATerm term_t_18;
ATerm term_l_18;
ATerm term_i_17;
ATerm term_a_17;
ATerm term_s_15;
ATerm term_x_13;
void init_constant_terms (void)
{
  ATprotect(&(term_x_13));
  term_x_13 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_s_15));
  term_s_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_17));
  term_i_17 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_l_18));
  term_l_18 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_t_18));
  term_t_18 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_h_19));
  term_h_19 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_i_19));
  term_i_19 = (ATerm) ATmakeAppl(sym_lit_1, term_h_19);
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_k_19));
  term_k_19 = (ATerm) ATmakeAppl(sym_lit_1, term_j_19);
  ATprotect(&(term_m_19));
  term_m_19 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_o_19));
  term_o_19 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_p_20));
  term_p_20 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_q_20));
  term_q_20 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_r_20));
  term_r_20 = (ATerm) ATmakeAppl(sym_SOpt_2, term_p_20, term_q_20);
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(sym_Arg_1, term_i_17);
  ATprotect(&(term_i_22));
  term_i_22 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_j_22));
  term_j_22 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_m_22));
  term_m_22 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_f_23));
  term_f_23 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_g_23));
  term_g_23 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_h_23));
  term_h_23 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_i_23));
  term_i_23 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_j_23));
  term_j_23 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_k_23));
  term_k_23 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_l_23));
  term_l_23 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_m_23));
  term_m_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_23));
  term_n_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_23));
  term_o_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_r_23));
  term_r_23 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_z_23));
  term_z_23 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_f_24));
  term_f_24 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_h_25));
  term_h_25 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_n_25));
  term_n_25 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_y_25));
  term_y_25 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_a_26));
  term_a_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_b_26));
  term_b_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_e_26));
  term_e_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_h_26));
  term_h_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_j_26));
  term_j_26 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_c_35));
  term_c_35 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_v_35));
  term_v_35 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_x_37));
  term_x_37 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_x_37, term_y_37);
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_i_38));
  term_i_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_s_38));
  term_s_38 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_o_39));
  term_o_39 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_p_39));
  term_p_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_s_39));
  term_s_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_n_41));
  term_n_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_s_42));
  term_s_42 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_h_43));
  term_h_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_k_43));
  term_k_43 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_r_43));
  term_r_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_w_43));
  term_w_43 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_z_44));
  term_z_44 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_c_45));
  term_c_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_h_45));
  term_h_45 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_i_45));
  term_i_45 = (ATerm) ATmakeAppl(sym__2, term_c_45, term_h_45);
  ATprotect(&(term_j_45));
  term_j_45 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_k_45));
  term_k_45 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_c_46));
  term_c_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_e_46));
  term_e_46 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(sym__3, term_c_45, term_h_45, (ATerm) ATempty);
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_h_47));
  term_h_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm ArgOption_3 (ATerm, ATerm c_1 (ATerm), ATerm d_1 (ATerm), ATerm e_1 (ATerm));
ATerm Option_2 (ATerm, ATerm f_78 (ATerm), ATerm g_78 (ATerm));
ATerm layout2box_0 (ATerm);
ATerm is_significant_layout_0 (ATerm);
ATerm InsLayout_1 (ATerm, ATerm h_73 (ATerm));
ATerm insert_layout_0 (ATerm);
ATerm layout_1 (ATerm, ATerm q_72 (ATerm));
ATerm collect_p__1 (ATerm, ATerm n_73 (ATerm));
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm b_1 (ATerm));
ATerm bottomup_1 (ATerm, ATerm a_92 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm S_1 (ATerm, ATerm a_1 (ATerm));
ATerm Arg2_2 (ATerm, ATerm y_0 (ATerm), ATerm z_0 (ATerm));
ATerm filter_literals_0 (ATerm);
ATerm make_path_0 (ATerm);
ATerm build_list_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm l_73 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_4 (ATerm, ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm s_87 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm b_88 (ATerm));
ATerm build_sep_list_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm index_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm seq2abox_0 (ATerm);
ATerm lit_1 (ATerm, ATerm x_0 (ATerm));
ATerm Snd_0 (ATerm);
ATerm pp_table_get_0 (ATerm);
ATerm StoreEntryIfNotExists_0 (ATerm);
ATerm debug_1 (ATerm, ATerm m_80 (ATerm));
ATerm symbols2pp_entries_1 (ATerm, ATerm i_74 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm Make_0 (ATerm);
ATerm pair_0 (ATerm);
ATerm make_0 (ATerm);
ATerm NonTerminal_0 (ATerm);
ATerm add_0 (ATerm);
ATerm number_1 (ATerm, ATerm m_74 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm w_0 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm j_74 (ATerm));
ATerm Fst_0 (ATerm);
ATerm get_pp_entry_0 (ATerm);
ATerm prod_3 (ATerm, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm uq2q_0 (ATerm);
ATerm cons_1 (ATerm, ATerm s_0 (ATerm));
ATerm at_cons_1 (ATerm, ATerm e_73 (ATerm));
ATerm get_constr_0 (ATerm);
ATerm add_attributes_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm isAlpha_0 (ATerm);
ATerm string_Hd_0 (ATerm);
ATerm strs2constr_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm Sym2Strs_0 (ATerm);
ATerm sym2strs_0 (ATerm);
ATerm syms2strs_0 (ATerm);
ATerm new_0 (ATerm);
ATerm empty_string_0 (ATerm);
ATerm empty_test_0 (ATerm);
ATerm isHyphen_0 (ATerm);
ATerm isLower_0 (ATerm);
ATerm isUpper_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm isNum_0 (ATerm);
ATerm isAlphaNumHyphen_0 (ATerm);
ATerm toAlphaNum_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm s_90 (ATerm));
ATerm separate_by_1 (ATerm, ATerm t_90 (ATerm));
ATerm Lit2Str_0 (ATerm);
ATerm Singleton_0 (ATerm);
ATerm list_ana_1 (ATerm, ATerm b_73 (ATerm));
ATerm lit2str_0 (ATerm);
ATerm lits2strs_0 (ATerm);
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm normalize_constr_0 (ATerm);
ATerm mk_constr_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm q_0 (ATerm), ATerm r_0 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm iter_star_1 (ATerm, ATerm n_0 (ATerm));
ATerm iter_1 (ATerm, ATerm m_0 (ATerm));
ATerm alt_2 (ATerm, ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm syntaxless_sort_0 (ATerm);
ATerm is_injection_0 (ATerm);
ATerm is_reject_0 (ATerm);
ATerm is_bracket_0 (ATerm);
ATerm prodcons_0 (ATerm);
ATerm sort_1 (ATerm, ATerm j_0 (ATerm));
ATerm get_templ_0 (ATerm);
ATerm appl2abox_0 (ATerm);
ATerm layout_0 (ATerm);
ATerm opt_1 (ATerm, ATerm i_0 (ATerm));
ATerm filter_1 (ATerm, ATerm c_83 (ATerm));
ATerm is_list_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm y_91 (ATerm));
ATerm sometd_1 (ATerm, ATerm a_94 (ATerm));
ATerm repeat_2 (ATerm, ATerm h_95 (ATerm), ATerm i_95 (ATerm));
ATerm repeat_1 (ATerm, ATerm k_95 (ATerm));
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm a_90 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm MakePPTerm_0 (ATerm);
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm q_93 (ATerm));
ATerm in_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm n_79 (ATerm));
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm y_73 (ATerm));
ATerm termid_check_1 (ATerm, ATerm f_74 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm a_85 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm));
ATerm crush_3 (ATerm, ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm));
ATerm collect_om_1 (ATerm, ATerm z_85 (ATerm));
ATerm collect_1 (ATerm, ATerm b_86 (ATerm));
ATerm asfix2abox_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm x_55 (ATerm), ATerm y_55 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm r_79 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm k_82 (ATerm), ATerm l_82 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_79 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_89 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm x_77 (ATerm));
ATerm map_1 (ATerm, ATerm c_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm g_0 (ATerm), ATerm h_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm w_77 (ATerm));
ATerm Program_1 (ATerm, ATerm a_68 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_89 (ATerm));
ATerm option_defined_1 (ATerm, ATerm v_78 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm e_96 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm b_78 (ATerm));
ATerm Option_3 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm r_72 (ATerm), ATerm s_72 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm z_77 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm y_77 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm));
ATerm iowrap_2 (ATerm, ATerm a_79 (ATerm), ATerm b_79 (ATerm));
ATerm Asfix2abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_3 (ATerm t, ATerm c_1 (ATerm), ATerm d_1 (ATerm), ATerm e_1 (ATerm))
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  t_4 = t;
  r_4 :
  if(match_string(t_4, "register-usage-info"))
    t = register_usage_1(t, e_1);
  else
    {
      if(((ATgetType(t_4) == AT_LIST) && ((ATermList) t_4 != ATempty)))
        {
          u_4 = ATgetFirst((ATermList) t_4);
          v_4 = (ATerm) ATgetNext((ATermList) t_4);
          s_4 :
          if(((ATgetType(v_4) == AT_LIST) && ((ATermList) v_4 != ATempty)))
            {
              w_4 = ATgetFirst((ATermList) v_4);
              x_4 = (ATerm) ATgetNext((ATermList) v_4);
              {
                ATerm b_5 = NULL;
                ATerm t_13;
                t_13 = t;
                {
                  t = not_null(u_4);
                  t = c_1(t);
                }
                t = t_13;
                {
                  ATerm c_5 = NULL;
                  t = not_null(w_4);
                  {
                    t = d_1(t);
                    {
                      c_5 = t;
                      if(((b_5 != NULL) && (b_5 != c_5)))
                        _fail(c_5);
                      else
                        b_5 = c_5;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_4)), not_null(b_5));
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
ATerm Option_2 (ATerm t, ATerm f_78 (ATerm), ATerm g_78 (ATerm))
{
  ATerm a_0 (ATerm t)
  {
    t = term_x_13;
    return(t);
  }
  t = Option_3(t, f_78, g_78, a_0);
  return(t);
}
ATerm layout2box_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym_layout_1))
    {
      k_5 = ATgetArgument(j_5, 0);
      {
        ATerm m_5 = NULL;
        ATerm n_5 = NULL;
        t = not_null(k_5);
        {
          t = concat_strings_0(t);
          {
            n_5 = t;
            if(((m_5 != NULL) && (m_5 != n_5)))
              _fail(n_5);
            else
              m_5 = n_5;
          }
        }
        t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, not_null(m_5))));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_significant_layout_0 (ATerm t)
{
  ATerm v_5 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm w_5 = NULL,x_5 = NULL;
    w_5 = t;
    u_5 :
    if(match_cons(w_5, sym_layout_1))
      {
        x_5 = ATgetArgument(w_5, 0);
        {
          if(((v_5 != NULL) && (v_5 != x_5)))
            _fail(x_5);
          else
            v_5 = x_5;
          {
            t = not_null(v_5);
            {
              t = concat_strings_0(t);
              {
                t = explode_string_0(t);
                {
                  ATerm d_0 (ATerm t)
                  {
                    ATerm z_13 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm y_5 = NULL;
                        y_5 = t;
                        r_5 :
                        if(!(match_int(y_5, 9)))
                          _fail(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      t = z_13;
                    {
                      ATerm a_14 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm z_5 = NULL;
                          z_5 = t;
                          s_5 :
                          if(!(match_int(z_5, 10)))
                            _fail(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        t = a_14;
                      {
                        ATerm b_14 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm a_6 = NULL;
                            a_6 = t;
                            t_5 :
                            if(!(match_int(a_6, 32)))
                              _fail(t);
                            PopChoice();
                            _fail(t);
                          }
                        else
                          t = b_14;
                      }
                    }
                    return(t);
                  }
                  t = filter_1(t, d_0);
                  {
                    ATerm c_14 = t;
                    if((PushChoice() == 0))
                      {
                        t = Nil_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      t = c_14;
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
  t = y_13;
  return(t);
}
ATerm InsLayout_1 (ATerm t, ATerm h_73 (ATerm))
{
  ATerm t_7 (ATerm t)
  {
    ATerm p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL;
    ATerm h_14 = t;
    int i_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, Nil_0, _id);
        LocalPopChoice(i_14);
      }
    else
      {
        t = h_14;
        {
          ATerm z_6 = NULL,a_7 = NULL,b_7 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,f_7 = NULL;
          z_6 = t;
          m_6 :
          if(match_cons(z_6, sym__2))
            {
              a_7 = ATgetArgument(z_6, 0);
              f_7 = ATgetArgument(z_6, 1);
              n_6 :
              if(((ATgetType(a_7) == AT_LIST) && ((ATermList) a_7 != ATempty)))
                {
                  b_7 = ATgetFirst((ATermList) a_7);
                  c_7 = (ATerm) ATgetNext((ATermList) a_7);
                  o_6 :
                  if(((ATermList) c_7 == ATempty))
                    {
                      {
                        ATerm g_7 = NULL,h_7 = NULL,i_7 = NULL;
                        if(((p_6 != NULL) && (p_6 != b_7)))
                          _fail(b_7);
                        else
                          p_6 = b_7;
                        {
                          if(((u_6 != NULL) && (u_6 != f_7)))
                            _fail(f_7);
                          else
                            u_6 = f_7;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), not_null(u_6));
                            {
                              t = h_73(t);
                              {
                                g_7 = t;
                                f_6 :
                                if(match_cons(g_7, sym__2))
                                  {
                                    h_7 = ATgetArgument(g_7, 0);
                                    i_7 = ATgetArgument(g_7, 1);
                                    {
                                      if(((q_6 != NULL) && (q_6 != h_7)))
                                        _fail(h_7);
                                      else
                                        q_6 = h_7;
                                      {
                                        if(((v_6 != NULL) && (v_6 != i_7)))
                                          _fail(i_7);
                                        else
                                          v_6 = i_7;
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(q_6)), not_null(v_6));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          }
                        }
                      }
                    }
                  else
                    {
                      if(((ATgetType(c_7) == AT_LIST) && ((ATermList) c_7 != ATempty)))
                        {
                          d_7 = ATgetFirst((ATermList) c_7);
                          e_7 = (ATerm) ATgetNext((ATermList) c_7);
                          {
                            ATerm j_7 = NULL,k_7 = NULL,l_7 = NULL,m_7 = NULL,n_7 = NULL;
                            if(((p_6 != NULL) && (p_6 != b_7)))
                              _fail(b_7);
                            else
                              p_6 = b_7;
                            {
                              if(((s_6 != NULL) && (s_6 != d_7)))
                                _fail(d_7);
                              else
                                s_6 = d_7;
                              {
                                if(((t_6 != NULL) && (t_6 != e_7)))
                                  _fail(e_7);
                                else
                                  t_6 = e_7;
                                {
                                  if(((u_6 != NULL) && (u_6 != f_7)))
                                    _fail(f_7);
                                  else
                                    u_6 = f_7;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_6), not_null(u_6));
                                    {
                                      t = h_73(t);
                                      {
                                        j_7 = t;
                                        k_6 :
                                        if(match_cons(j_7, sym__2))
                                          {
                                            k_7 = ATgetArgument(j_7, 0);
                                            l_7 = ATgetArgument(j_7, 1);
                                            l_6 :
                                            if(((ATgetType(l_7) == AT_LIST) && ((ATermList) l_7 != ATempty)))
                                              {
                                                m_7 = ATgetFirst((ATermList) l_7);
                                                n_7 = (ATerm) ATgetNext((ATermList) l_7);
                                                {
                                                  ATerm o_7 = NULL,p_7 = NULL,q_7 = NULL;
                                                  if(((q_6 != NULL) && (q_6 != k_7)))
                                                    _fail(k_7);
                                                  else
                                                    q_6 = k_7;
                                                  {
                                                    if(((r_6 != NULL) && (r_6 != m_7)))
                                                      _fail(m_7);
                                                    else
                                                      r_6 = m_7;
                                                    {
                                                      if(((v_6 != NULL) && (v_6 != n_7)))
                                                        _fail(n_7);
                                                      else
                                                        v_6 = n_7;
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_6)), not_null(s_6)), not_null(v_6));
                                                        {
                                                          t = t_7(t);
                                                          {
                                                            o_7 = t;
                                                            j_6 :
                                                            if(match_cons(o_7, sym__2))
                                                              {
                                                                p_7 = ATgetArgument(o_7, 0);
                                                                q_7 = ATgetArgument(o_7, 1);
                                                                {
                                                                  if(((x_6 != NULL) && (x_6 != p_7)))
                                                                    _fail(p_7);
                                                                  else
                                                                    x_6 = p_7;
                                                                  {
                                                                    if(((w_6 != NULL) && (w_6 != q_7)))
                                                                      _fail(q_7);
                                                                    else
                                                                      w_6 = q_7;
                                                                    {
                                                                      ATerm p_14 = t;
                                                                      int u_14 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          ATerm r_7 = NULL;
                                                                          t = not_null(r_6);
                                                                          {
                                                                            t = is_significant_layout_0(t);
                                                                            {
                                                                              ATerm s_7 = NULL;
                                                                              t = not_null(r_6);
                                                                              {
                                                                                t = layout2box_0(t);
                                                                                {
                                                                                  s_7 = t;
                                                                                  if(((r_7 != NULL) && (r_7 != s_7)))
                                                                                    _fail(s_7);
                                                                                  else
                                                                                    r_7 = s_7;
                                                                                }
                                                                              }
                                                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(x_6)), not_null(r_7)), not_null(q_6)), not_null(w_6));
                                                                            }
                                                                          }
                                                                          LocalPopChoice(u_14);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = p_14;
                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(x_6)), not_null(q_6)), not_null(w_6));
                                                                        }
                                                                    }
                                                                  }
                                                                }
                                                              }
                                                            else
                                                              _fail(t);
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
                                  }
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
            }
          else
            _fail(t);
        }
      }
    return(t);
  }
  t = t_7(t);
  return(t);
}
ATerm insert_layout_0 (ATerm t)
{
  ATerm o_9 = NULL,m_11 = NULL,n_11 = NULL,o_11 = NULL,p_11 = NULL,q_11 = NULL;
  ATerm e_0 (ATerm t)
  {
    ATerm p_9 = NULL,q_9 = NULL,r_9 = NULL;
    p_9 = t;
    b_8 :
    if(((ATgetType(p_9) == AT_LIST) && ((ATermList) p_9 != ATempty)))
      {
        q_9 = ATgetFirst((ATermList) p_9);
        r_9 = (ATerm) ATgetNext((ATermList) p_9);
        {
          if(((o_9 != NULL) && (o_9 != q_9)))
            _fail(q_9);
          else
            o_9 = q_9;
          t = Tl_0(t);
        }
      }
    else
      _fail(t);
    return(t);
  }
  t = _2(t, _id, e_0);
  {
    ATerm x_11 (ATerm t)
    {
      ATerm s_9 = NULL,t_9 = NULL,u_9 = NULL,v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
      ATerm v_14 = t;
      int w_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_9 = NULL,a_10 = NULL,b_10 = NULL,c_10 = NULL,d_10 = NULL,e_10 = NULL;
          a_10 = t;
          i_9 :
          if(match_cons(a_10, sym__2))
            {
              b_10 = ATgetArgument(a_10, 0);
              e_10 = ATgetArgument(a_10, 1);
              j_9 :
              if(match_cons(b_10, sym_H_2))
                {
                  c_10 = ATgetArgument(b_10, 0);
                  d_10 = ATgetArgument(b_10, 1);
                  {
                    ATerm f_10 = NULL,g_10 = NULL,h_10 = NULL;
                    if(((s_9 != NULL) && (s_9 != c_10)))
                      _fail(c_10);
                    else
                      s_9 = c_10;
                    {
                      if(((u_9 != NULL) && (u_9 != d_10)))
                        _fail(d_10);
                      else
                        u_9 = d_10;
                      {
                        if(((v_9 != NULL) && (v_9 != e_10)))
                          _fail(e_10);
                        else
                          v_9 = e_10;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(v_9));
                          {
                            t = InsLayout_1(t, x_11);
                            {
                              f_10 = t;
                              n_8 :
                              if(match_cons(f_10, sym__2))
                                {
                                  g_10 = ATgetArgument(f_10, 0);
                                  h_10 = ATgetArgument(f_10, 1);
                                  {
                                    if(((w_9 != NULL) && (w_9 != g_10)))
                                      _fail(g_10);
                                    else
                                      w_9 = g_10;
                                    {
                                      if(((x_9 != NULL) && (x_9 != h_10)))
                                        _fail(h_10);
                                      else
                                        x_9 = h_10;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(s_9), not_null(w_9)), not_null(x_9));
                                    }
                                  }
                                }
                              else
                                _fail(t);
                            }
                          }
                        }
                      }
                    }
                  }
                }
              else
                {
                  if(match_cons(b_10, sym_HV_2))
                    {
                      c_10 = ATgetArgument(b_10, 0);
                      d_10 = ATgetArgument(b_10, 1);
                      {
                        ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL;
                        if(((s_9 != NULL) && (s_9 != c_10)))
                          _fail(c_10);
                        else
                          s_9 = c_10;
                        {
                          if(((u_9 != NULL) && (u_9 != d_10)))
                            _fail(d_10);
                          else
                            u_9 = d_10;
                          {
                            if(((v_9 != NULL) && (v_9 != e_10)))
                              _fail(e_10);
                            else
                              v_9 = e_10;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(v_9));
                              {
                                t = InsLayout_1(t, x_11);
                                {
                                  i_10 = t;
                                  p_8 :
                                  if(match_cons(i_10, sym__2))
                                    {
                                      j_10 = ATgetArgument(i_10, 0);
                                      k_10 = ATgetArgument(i_10, 1);
                                      {
                                        if(((w_9 != NULL) && (w_9 != j_10)))
                                          _fail(j_10);
                                        else
                                          w_9 = j_10;
                                        {
                                          if(((x_9 != NULL) && (x_9 != k_10)))
                                            _fail(k_10);
                                          else
                                            x_9 = k_10;
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, not_null(s_9), not_null(w_9)), not_null(x_9));
                                        }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(b_10, sym_V_2))
                        {
                          c_10 = ATgetArgument(b_10, 0);
                          d_10 = ATgetArgument(b_10, 1);
                          {
                            ATerm l_10 = NULL,m_10 = NULL,n_10 = NULL;
                            if(((s_9 != NULL) && (s_9 != c_10)))
                              _fail(c_10);
                            else
                              s_9 = c_10;
                            {
                              if(((u_9 != NULL) && (u_9 != d_10)))
                                _fail(d_10);
                              else
                                u_9 = d_10;
                              {
                                if(((v_9 != NULL) && (v_9 != e_10)))
                                  _fail(e_10);
                                else
                                  v_9 = e_10;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(v_9));
                                  {
                                    t = InsLayout_1(t, x_11);
                                    {
                                      l_10 = t;
                                      r_8 :
                                      if(match_cons(l_10, sym__2))
                                        {
                                          m_10 = ATgetArgument(l_10, 0);
                                          n_10 = ATgetArgument(l_10, 1);
                                          {
                                            if(((w_9 != NULL) && (w_9 != m_10)))
                                              _fail(m_10);
                                            else
                                              w_9 = m_10;
                                            {
                                              if(((x_9 != NULL) && (x_9 != n_10)))
                                                _fail(n_10);
                                              else
                                                x_9 = n_10;
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, not_null(s_9), not_null(w_9)), not_null(x_9));
                                            }
                                          }
                                        }
                                      else
                                        _fail(t);
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(b_10, sym_A_3))
                            {
                              c_10 = ATgetArgument(b_10, 0);
                              d_10 = ATgetArgument(b_10, 1);
                              z_9 = ATgetArgument(b_10, 2);
                              {
                                ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
                                if(((s_9 != NULL) && (s_9 != c_10)))
                                  _fail(c_10);
                                else
                                  s_9 = c_10;
                                {
                                  if(((t_9 != NULL) && (t_9 != d_10)))
                                    _fail(d_10);
                                  else
                                    t_9 = d_10;
                                  {
                                    if(((u_9 != NULL) && (u_9 != z_9)))
                                      _fail(z_9);
                                    else
                                      u_9 = z_9;
                                    {
                                      if(((v_9 != NULL) && (v_9 != e_10)))
                                        _fail(e_10);
                                      else
                                        v_9 = e_10;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(v_9));
                                        {
                                          t = InsLayout_1(t, x_11);
                                          {
                                            o_10 = t;
                                            t_8 :
                                            if(match_cons(o_10, sym__2))
                                              {
                                                p_10 = ATgetArgument(o_10, 0);
                                                q_10 = ATgetArgument(o_10, 1);
                                                {
                                                  if(((w_9 != NULL) && (w_9 != p_10)))
                                                    _fail(p_10);
                                                  else
                                                    w_9 = p_10;
                                                  {
                                                    if(((x_9 != NULL) && (x_9 != q_10)))
                                                      _fail(q_10);
                                                    else
                                                      x_9 = q_10;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, not_null(s_9), not_null(t_9), not_null(w_9)), not_null(x_9));
                                                  }
                                                }
                                              }
                                            else
                                              _fail(t);
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
                              if(match_cons(b_10, sym_R_2))
                                {
                                  c_10 = ATgetArgument(b_10, 0);
                                  d_10 = ATgetArgument(b_10, 1);
                                  {
                                    ATerm r_10 = NULL,s_10 = NULL,t_10 = NULL;
                                    if(((s_9 != NULL) && (s_9 != c_10)))
                                      _fail(c_10);
                                    else
                                      s_9 = c_10;
                                    {
                                      if(((u_9 != NULL) && (u_9 != d_10)))
                                        _fail(d_10);
                                      else
                                        u_9 = d_10;
                                      {
                                        if(((v_9 != NULL) && (v_9 != e_10)))
                                          _fail(e_10);
                                        else
                                          v_9 = e_10;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(v_9));
                                          {
                                            t = InsLayout_1(t, x_11);
                                            {
                                              r_10 = t;
                                              v_8 :
                                              if(match_cons(r_10, sym__2))
                                                {
                                                  s_10 = ATgetArgument(r_10, 0);
                                                  t_10 = ATgetArgument(r_10, 1);
                                                  {
                                                    if(((w_9 != NULL) && (w_9 != s_10)))
                                                      _fail(s_10);
                                                    else
                                                      w_9 = s_10;
                                                    {
                                                      if(((x_9 != NULL) && (x_9 != t_10)))
                                                        _fail(t_10);
                                                      else
                                                        x_9 = t_10;
                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, not_null(s_9), not_null(w_9)), not_null(x_9));
                                                    }
                                                  }
                                                }
                                              else
                                                _fail(t);
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(b_10, sym_ALT_2))
                                    {
                                      c_10 = ATgetArgument(b_10, 0);
                                      d_10 = ATgetArgument(b_10, 1);
                                      {
                                        ATerm u_10 = NULL,v_10 = NULL,w_10 = NULL;
                                        if(((s_9 != NULL) && (s_9 != c_10)))
                                          _fail(c_10);
                                        else
                                          s_9 = c_10;
                                        {
                                          if(((u_9 != NULL) && (u_9 != d_10)))
                                            _fail(d_10);
                                          else
                                            u_9 = d_10;
                                          {
                                            if(((v_9 != NULL) && (v_9 != e_10)))
                                              _fail(e_10);
                                            else
                                              v_9 = e_10;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_9), not_null(v_9));
                                              {
                                                t = InsLayout_1(t, x_11);
                                                {
                                                  u_10 = t;
                                                  z_8 :
                                                  if(match_cons(u_10, sym__2))
                                                    {
                                                      v_10 = ATgetArgument(u_10, 0);
                                                      w_10 = ATgetArgument(u_10, 1);
                                                      {
                                                        ATerm x_10 = NULL,y_10 = NULL,z_10 = NULL;
                                                        if(((t_9 != NULL) && (t_9 != v_10)))
                                                          _fail(v_10);
                                                        else
                                                          t_9 = v_10;
                                                        {
                                                          if(((x_9 != NULL) && (x_9 != w_10)))
                                                            _fail(w_10);
                                                          else
                                                            x_9 = w_10;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(v_9));
                                                            {
                                                              t = InsLayout_1(t, x_11);
                                                              {
                                                                x_10 = t;
                                                                y_8 :
                                                                if(match_cons(x_10, sym__2))
                                                                  {
                                                                    y_10 = ATgetArgument(x_10, 0);
                                                                    z_10 = ATgetArgument(x_10, 1);
                                                                    {
                                                                      if(((w_9 != NULL) && (w_9 != y_10)))
                                                                        _fail(y_10);
                                                                      else
                                                                        w_9 = y_10;
                                                                      {
                                                                        if(((y_9 != NULL) && (y_9 != z_10)))
                                                                          _fail(z_10);
                                                                        else
                                                                          y_9 = z_10;
                                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, not_null(t_9), not_null(w_9)), not_null(y_9));
                                                                      }
                                                                    }
                                                                  }
                                                                else
                                                                  _fail(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    _fail(t);
                                                }
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(b_10, sym_LBL_2))
                                        {
                                          c_10 = ATgetArgument(b_10, 0);
                                          d_10 = ATgetArgument(b_10, 1);
                                          {
                                            ATerm a_11 = NULL,b_11 = NULL,c_11 = NULL;
                                            if(((s_9 != NULL) && (s_9 != c_10)))
                                              _fail(c_10);
                                            else
                                              s_9 = c_10;
                                            {
                                              if(((u_9 != NULL) && (u_9 != d_10)))
                                                _fail(d_10);
                                              else
                                                u_9 = d_10;
                                              {
                                                if(((v_9 != NULL) && (v_9 != e_10)))
                                                  _fail(e_10);
                                                else
                                                  v_9 = e_10;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(v_9));
                                                  {
                                                    t = InsLayout_1(t, x_11);
                                                    {
                                                      a_11 = t;
                                                      b_9 :
                                                      if(match_cons(a_11, sym__2))
                                                        {
                                                          b_11 = ATgetArgument(a_11, 0);
                                                          c_11 = ATgetArgument(a_11, 1);
                                                          {
                                                            if(((w_9 != NULL) && (w_9 != b_11)))
                                                              _fail(b_11);
                                                            else
                                                              w_9 = b_11;
                                                            {
                                                              if(((x_9 != NULL) && (x_9 != c_11)))
                                                                _fail(c_11);
                                                              else
                                                                x_9 = c_11;
                                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, not_null(s_9), not_null(w_9)), not_null(x_9));
                                                            }
                                                          }
                                                        }
                                                      else
                                                        _fail(t);
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(b_10, sym_REF_2))
                                            {
                                              c_10 = ATgetArgument(b_10, 0);
                                              d_10 = ATgetArgument(b_10, 1);
                                              {
                                                ATerm d_11 = NULL,e_11 = NULL,f_11 = NULL;
                                                if(((s_9 != NULL) && (s_9 != c_10)))
                                                  _fail(c_10);
                                                else
                                                  s_9 = c_10;
                                                {
                                                  if(((u_9 != NULL) && (u_9 != d_10)))
                                                    _fail(d_10);
                                                  else
                                                    u_9 = d_10;
                                                  {
                                                    if(((v_9 != NULL) && (v_9 != e_10)))
                                                      _fail(e_10);
                                                    else
                                                      v_9 = e_10;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(v_9));
                                                      {
                                                        t = InsLayout_1(t, x_11);
                                                        {
                                                          d_11 = t;
                                                          d_9 :
                                                          if(match_cons(d_11, sym__2))
                                                            {
                                                              e_11 = ATgetArgument(d_11, 0);
                                                              f_11 = ATgetArgument(d_11, 1);
                                                              {
                                                                if(((w_9 != NULL) && (w_9 != e_11)))
                                                                  _fail(e_11);
                                                                else
                                                                  w_9 = e_11;
                                                                {
                                                                  if(((x_9 != NULL) && (x_9 != f_11)))
                                                                    _fail(f_11);
                                                                  else
                                                                    x_9 = f_11;
                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, not_null(s_9), not_null(w_9)), not_null(x_9));
                                                                }
                                                              }
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(b_10, sym_L_2))
                                                {
                                                  c_10 = ATgetArgument(b_10, 0);
                                                  d_10 = ATgetArgument(b_10, 1);
                                                  {
                                                    ATerm g_11 = NULL,h_11 = NULL,i_11 = NULL;
                                                    if(((s_9 != NULL) && (s_9 != c_10)))
                                                      _fail(c_10);
                                                    else
                                                      s_9 = c_10;
                                                    {
                                                      if(((u_9 != NULL) && (u_9 != d_10)))
                                                        _fail(d_10);
                                                      else
                                                        u_9 = d_10;
                                                      {
                                                        if(((v_9 != NULL) && (v_9 != e_10)))
                                                          _fail(e_10);
                                                        else
                                                          v_9 = e_10;
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(v_9));
                                                          {
                                                            t = InsLayout_1(t, x_11);
                                                            {
                                                              g_11 = t;
                                                              f_9 :
                                                              if(match_cons(g_11, sym__2))
                                                                {
                                                                  h_11 = ATgetArgument(g_11, 0);
                                                                  i_11 = ATgetArgument(g_11, 1);
                                                                  {
                                                                    if(((w_9 != NULL) && (w_9 != h_11)))
                                                                      _fail(h_11);
                                                                    else
                                                                      w_9 = h_11;
                                                                    {
                                                                      if(((x_9 != NULL) && (x_9 != i_11)))
                                                                        _fail(i_11);
                                                                      else
                                                                        x_9 = i_11;
                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, not_null(s_9), not_null(w_9)), not_null(x_9));
                                                                    }
                                                                  }
                                                                }
                                                              else
                                                                _fail(t);
                                                            }
                                                          }
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(b_10, sym_LNAT_2))
                                                    {
                                                      c_10 = ATgetArgument(b_10, 0);
                                                      d_10 = ATgetArgument(b_10, 1);
                                                      {
                                                        ATerm j_11 = NULL,k_11 = NULL,l_11 = NULL;
                                                        if(((s_9 != NULL) && (s_9 != c_10)))
                                                          _fail(c_10);
                                                        else
                                                          s_9 = c_10;
                                                        {
                                                          if(((u_9 != NULL) && (u_9 != d_10)))
                                                            _fail(d_10);
                                                          else
                                                            u_9 = d_10;
                                                          {
                                                            if(((v_9 != NULL) && (v_9 != e_10)))
                                                              _fail(e_10);
                                                            else
                                                              v_9 = e_10;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(u_9), not_null(v_9));
                                                              {
                                                                t = InsLayout_1(t, x_11);
                                                                {
                                                                  j_11 = t;
                                                                  h_9 :
                                                                  if(match_cons(j_11, sym__2))
                                                                    {
                                                                      k_11 = ATgetArgument(j_11, 0);
                                                                      l_11 = ATgetArgument(j_11, 1);
                                                                      {
                                                                        if(((w_9 != NULL) && (w_9 != k_11)))
                                                                          _fail(k_11);
                                                                        else
                                                                          w_9 = k_11;
                                                                        {
                                                                          if(((x_9 != NULL) && (x_9 != l_11)))
                                                                            _fail(l_11);
                                                                          else
                                                                            x_9 = l_11;
                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, not_null(s_9), not_null(w_9)), not_null(x_9));
                                                                        }
                                                                      }
                                                                    }
                                                                  else
                                                                    _fail(t);
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
            _fail(t);
          LocalPopChoice(w_14);
        }
      else
        {
          t = v_14;
          {
            ATerm x_14 = t;
            int y_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm f_1 (ATerm t)
                {
                  t = Cons_2(t, _id, _id);
                  return(t);
                }
                t = _2(t, f_1, _id);
                t = InsLayout_1(t, x_11);
                LocalPopChoice(y_14);
              }
            else
              {
                t = x_14;
                {
                }
              }
          }
        }
      return(t);
    }
    t = x_11(t);
    {
      m_11 = t;
      m_9 :
      if(match_cons(m_11, sym__2))
        {
          n_11 = ATgetArgument(m_11, 0);
          o_11 = ATgetArgument(m_11, 1);
          n_9 :
          if(((ATgetType(o_11) == AT_LIST) && ((ATermList) o_11 != ATempty)))
            {
              p_11 = ATgetFirst((ATermList) o_11);
              q_11 = (ATerm) ATgetNext((ATermList) o_11);
              {
                ATerm u_11 = NULL;
                ATerm v_11 = NULL;
                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_11)), not_null(n_11)), not_null(o_9));
                {
                  ATerm g_1 (ATerm t)
                  {
                    ATerm z_14 = t;
                    int a_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm c_15 = t;
                        if((PushChoice() == 0))
                          {
                            t = layout_1(t, _id);
                            PopChoice();
                            _fail(t);
                          }
                        else
                          t = c_15;
                        LocalPopChoice(a_15);
                      }
                    else
                      {
                        t = z_14;
                        {
                          t = layout_1(t, _id);
                          {
                            t = is_significant_layout_0(t);
                            t = layout2box_0(t);
                          }
                        }
                      }
                    return(t);
                  }
                  t = filter_1(t, g_1);
                  {
                    t = flat_list_0(t);
                    {
                      v_11 = t;
                      if(((u_11 != NULL) && (u_11 != v_11)))
                        _fail(v_11);
                      else
                        u_11 = v_11;
                    }
                  }
                }
                t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(u_11));
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
ATerm layout_1 (ATerm t, ATerm q_72 (ATerm))
{
  ATerm y_12 = NULL,z_12 = NULL;
  y_12 = t;
  x_12 :
  if(match_cons(y_12, sym_layout_1))
    {
      z_12 = ATgetArgument(y_12, 0);
      {
        ATerm b_13 = NULL;
        t = not_null(z_12);
        {
          t = q_72(t);
          {
            b_13 = t;
            t = (ATerm) ATmakeAppl(sym_layout_1, not_null(b_13));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm collect_p__1 (ATerm t, ATerm n_73 (ATerm))
{
  ATerm i_13 (ATerm t)
  {
    ATerm d_15 = t;
    int i_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_13 = NULL;
        t = n_73(t);
        {
          g_13 = t;
          t = (ATerm) ATinsert(ATempty, not_null(g_13));
        }
        LocalPopChoice(i_15);
      }
    else
      {
        t = d_15;
        {
          ATerm h_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, h_1, conc_0, i_13);
        }
      }
    return(t);
  }
  t = i_13(t);
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm o_13 = NULL,p_13 = NULL;
  ATerm j_15 = t;
  int m_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_15);
    }
  else
    {
      t = j_15;
      {
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_13 = NULL,r_13 = NULL,s_13 = NULL;
            ATerm v_13 (ATerm t)
            {
              if(((o_13 != NULL) && (o_13 != r_13)))
                _fail(r_13);
              else
                o_13 = r_13;
              {
                if(((p_13 != NULL) && (p_13 != s_13)))
                  _fail(s_13);
                else
                  p_13 = s_13;
                {
                  t = not_null(o_13);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_13), not_null(p_13));
                      {
                        t = conc_0(t);
                        t = flat_list_0(t);
                      }
                    }
                  }
                }
              }
              return(t);
            }
            q_13 = t;
            m_13 :
            if(((ATgetType(q_13) == AT_LIST) && ((ATermList) q_13 != ATempty)))
              {
                r_13 = ATgetFirst((ATermList) q_13);
                s_13 = (ATerm) ATgetNext((ATermList) q_13);
                n_13 :
                if(((ATermList) r_13 == ATempty))
                  {
                    {
                      ATerm q_15 = t;
                      int r_15 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((p_13 != NULL) && (p_13 != s_13)))
                            _fail(s_13);
                          else
                            p_13 = s_13;
                          {
                            ATerm i_1 (ATerm t)
                            {
                              t = not_null(p_13);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, i_1);
                          }
                          LocalPopChoice(r_15);
                        }
                      else
                        {
                          t = q_15;
                          t = v_13(t);
                        }
                    }
                  }
                else
                  t = v_13(t);
              }
            else
              _fail(t);
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm b_1 (ATerm))
{
  ATerm e_14 = NULL,f_14 = NULL,g_14 = NULL;
  f_14 = t;
  d_14 :
  if(match_cons(f_14, sym_Arg2_2))
    {
      g_14 = ATgetArgument(f_14, 0);
      e_14 = ATgetArgument(f_14, 1);
      {
        ATerm j_14 = NULL,k_14 = NULL;
        ATerm l_14 = NULL,n_14 = NULL;
        ATerm m_14 = NULL;
        t = term_s_15;
        {
          t = b_1(t);
          {
            m_14 = t;
            if(((l_14 != NULL) && (l_14 != m_14)))
              _fail(m_14);
            else
              l_14 = m_14;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(g_14), not_null(l_14));
          {
            ATerm o_14 = NULL;
            t = index_0(t);
            {
              n_14 = t;
              {
                if(((j_14 != NULL) && (j_14 != n_14)))
                  _fail(n_14);
                else
                  j_14 = n_14;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(e_14), not_null(j_14));
                  {
                    t = index_0(t);
                    {
                      o_14 = t;
                      if(((k_14 != NULL) && (k_14 != o_14)))
                        _fail(o_14);
                      else
                        k_14 = o_14;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(k_14);
      }
    }
  else
    {
      if(match_cons(f_14, sym_Arg_1))
        {
          g_14 = ATgetArgument(f_14, 0);
          {
            ATerm q_14 = NULL;
            ATerm r_14 = NULL,t_14 = NULL;
            ATerm s_14 = NULL;
            t = term_s_15;
            {
              t = b_1(t);
              {
                s_14 = t;
                if(((r_14 != NULL) && (r_14 != s_14)))
                  _fail(s_14);
                else
                  r_14 = s_14;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(g_14), not_null(r_14));
              {
                t = index_0(t);
                {
                  t_14 = t;
                  if(((q_14 != NULL) && (q_14 != t_14)))
                    _fail(t_14);
                  else
                    q_14 = t_14;
                }
              }
            }
            t = not_null(q_14);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm a_92 (ATerm))
{
  ATerm b_15 (ATerm t)
  {
    t = _all(t, b_15);
    t = a_92(t);
    return(t);
  }
  t = b_15(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
  f_15 = t;
  e_15 :
  if(match_cons(f_15, sym__2))
    {
      g_15 = ATgetArgument(f_15, 0);
      h_15 = ATgetArgument(f_15, 1);
      {
        ATerm k_15 = NULL;
        ATerm l_15 = NULL;
        t = not_null(g_15);
        {
          ATerm j_1 (ATerm t)
          {
            ATerm k_1 (ATerm t)
            {
              ATerm t_15 = t;
              int u_15 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm l_1 (ATerm t)
                  {
                    t = not_null(h_15);
                    return(t);
                  }
                  t = Instantiate_1(t, l_1);
                  LocalPopChoice(u_15);
                }
              else
                {
                  t = t_15;
                  t = flat_list_0(t);
                }
              return(t);
            }
            t = try_1(t, k_1);
            return(t);
          }
          t = bottomup_1(t, j_1);
          {
            l_15 = t;
            if(((k_15 != NULL) && (k_15 != l_15)))
              _fail(l_15);
            else
              k_15 = l_15;
          }
        }
        t = not_null(k_15);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm p_15 = NULL;
  p_15 = t;
  t = SSL_is_string(not_null(p_15));
  return(t);
}
ATerm S_1 (ATerm t, ATerm a_1 (ATerm))
{
  ATerm x_15 = NULL,y_15 = NULL;
  x_15 = t;
  w_15 :
  if(match_cons(x_15, sym_S_1))
    {
      y_15 = ATgetArgument(x_15, 0);
      {
        ATerm v_15 = t;
        int z_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_16 = NULL;
            t = not_null(y_15);
            {
              t = a_1(t);
              {
                a_16 = t;
                t = (ATerm) ATmakeAppl(sym_S_1, not_null(a_16));
              }
            }
            LocalPopChoice(z_15);
          }
        else
          {
            t = v_15;
            {
              ATerm d_16 = NULL;
              t = not_null(y_15);
              {
                t = a_1(t);
                {
                  d_16 = t;
                  t = (ATerm) ATmakeAppl(sym_S_1, not_null(d_16));
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
ATerm Arg2_2 (ATerm t, ATerm y_0 (ATerm), ATerm z_0 (ATerm))
{
  ATerm q_16 = NULL,r_16 = NULL,s_16 = NULL;
  q_16 = t;
  p_16 :
  if(match_cons(q_16, sym_Arg2_2))
    {
      r_16 = ATgetArgument(q_16, 0);
      s_16 = ATgetArgument(q_16, 1);
      {
        ATerm b_16 = t;
        int c_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_16 = NULL;
            t = not_null(r_16);
            {
              ATerm x_16 = NULL;
              t = y_0(t);
              {
                v_16 = t;
                {
                  t = not_null(s_16);
                  {
                    t = z_0(t);
                    {
                      x_16 = t;
                      t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(v_16), not_null(x_16));
                    }
                  }
                }
              }
            }
            LocalPopChoice(c_16);
          }
        else
          {
            t = b_16;
            {
              ATerm b_17 = NULL;
              t = not_null(r_16);
              {
                ATerm d_17 = NULL;
                t = y_0(t);
                {
                  b_17 = t;
                  {
                    t = not_null(s_16);
                    {
                      t = z_0(t);
                      {
                        d_17 = t;
                        t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(b_17), not_null(d_17));
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
    _fail(t);
  return(t);
}
ATerm filter_literals_0 (ATerm t)
{
  ATerm c_19 = NULL,e_19 = NULL,q_19 = NULL;
  c_19 = t;
  b_19 :
  if(match_cons(c_19, sym__2))
    {
      e_19 = ATgetArgument(c_19, 0);
      q_19 = ATgetArgument(c_19, 1);
      {
        ATerm d_20 = NULL,e_20 = NULL;
        ATerm w_24 = NULL,x_24 = NULL,y_24 = NULL;
        ATerm m_1 (ATerm t)
        {
          ATerm n_1 (ATerm t)
          {
            ATerm e_16 = t;
            int f_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Arg_1(t, _id);
                LocalPopChoice(f_16);
              }
            else
              {
                t = e_16;
                {
                  ATerm g_16 = t;
                  int h_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Arg2_2(t, _id, _id);
                      LocalPopChoice(h_16);
                    }
                  else
                    {
                      t = g_16;
                      t = S_1(t, _id);
                    }
                }
              }
            return(t);
          }
          t = collect_p__1(t, n_1);
          return(t);
        }
        t = _2(t, m_1, _id);
        {
          ATerm g_25 (ATerm t)
          {
            ATerm f_20 = NULL,g_20 = NULL,h_20 = NULL,i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
            ATerm i_16 = t;
            int j_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2(t, Nil_0, Nil_0);
                LocalPopChoice(j_16);
              }
            else
              {
                t = i_16;
                {
                  ATerm b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,t_23 = NULL,u_23 = NULL,v_23 = NULL,w_23 = NULL;
                  ATerm k_27 (ATerm t)
                  {
                    ATerm t_24 = NULL,u_24 = NULL,v_24 = NULL;
                    if(((l_20 != NULL) && (l_20 != f_22)))
                      _fail(f_22);
                    else
                      l_20 = f_22;
                    {
                      if(((g_20 != NULL) && (g_20 != t_23)))
                        _fail(t_23);
                      else
                        g_20 = t_23;
                      {
                        if(((k_20 != NULL) && (k_20 != v_23)))
                          _fail(v_23);
                        else
                          k_20 = v_23;
                        {
                          if(((i_20 != NULL) && (i_20 != w_23)))
                            _fail(w_23);
                          else
                            i_20 = w_23;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), not_null(i_20));
                            {
                              t = g_25(t);
                              {
                                t_24 = t;
                                u_18 :
                                if(match_cons(t_24, sym__2))
                                  {
                                    u_24 = ATgetArgument(t_24, 0);
                                    v_24 = ATgetArgument(t_24, 1);
                                    {
                                      if(((h_20 != NULL) && (h_20 != u_24)))
                                        _fail(u_24);
                                      else
                                        h_20 = u_24;
                                      {
                                        if(((j_20 != NULL) && (j_20 != v_24)))
                                          _fail(v_24);
                                        else
                                          j_20 = v_24;
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_20)), not_null(l_20)), not_null(j_20));
                                      }
                                    }
                                  }
                                else
                                  _fail(t);
                              }
                            }
                          }
                        }
                      }
                    }
                    return(t);
                  }
                  d_22 = t;
                  v_18 :
                  if(match_cons(d_22, sym__2))
                    {
                      e_22 = ATgetArgument(d_22, 0);
                      u_23 = ATgetArgument(d_22, 1);
                      w_18 :
                      if(((ATgetType(e_22) == AT_LIST) && ((ATermList) e_22 != ATempty)))
                        {
                          f_22 = ATgetFirst((ATermList) e_22);
                          t_23 = (ATerm) ATgetNext((ATermList) e_22);
                          x_18 :
                          if(((ATgetType(u_23) == AT_LIST) && ((ATermList) u_23 != ATempty)))
                            {
                              v_23 = ATgetFirst((ATermList) u_23);
                              w_23 = (ATerm) ATgetNext((ATermList) u_23);
                              y_18 :
                              if(match_cons(f_22, sym_Arg_1))
                                {
                                  b_22 = ATgetArgument(f_22, 0);
                                  {
                                    ATerm k_16 = t;
                                    int l_16 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm x_23 = NULL,a_24 = NULL,b_24 = NULL;
                                        if(((f_20 != NULL) && (f_20 != b_22)))
                                          _fail(b_22);
                                        else
                                          f_20 = b_22;
                                        {
                                          if(((g_20 != NULL) && (g_20 != t_23)))
                                            _fail(t_23);
                                          else
                                            g_20 = t_23;
                                          {
                                            if(((k_20 != NULL) && (k_20 != v_23)))
                                              _fail(v_23);
                                            else
                                              k_20 = v_23;
                                            {
                                              if(((i_20 != NULL) && (i_20 != w_23)))
                                                _fail(w_23);
                                              else
                                                i_20 = w_23;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), not_null(i_20));
                                                {
                                                  t = g_25(t);
                                                  {
                                                    x_23 = t;
                                                    q_18 :
                                                    if(match_cons(x_23, sym__2))
                                                      {
                                                        a_24 = ATgetArgument(x_23, 0);
                                                        b_24 = ATgetArgument(x_23, 1);
                                                        {
                                                          if(((h_20 != NULL) && (h_20 != a_24)))
                                                            _fail(a_24);
                                                          else
                                                            h_20 = a_24;
                                                          {
                                                            if(((j_20 != NULL) && (j_20 != b_24)))
                                                              _fail(b_24);
                                                            else
                                                              j_20 = b_24;
                                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_20)), (ATerm) ATmakeAppl(sym_Arg_1, not_null(f_20))), (ATerm) ATinsert(CheckATermList(not_null(j_20)), not_null(k_20)));
                                                          }
                                                        }
                                                      }
                                                    else
                                                      _fail(t);
                                                  }
                                                }
                                              }
                                            }
                                          }
                                        }
                                        LocalPopChoice(l_16);
                                      }
                                    else
                                      {
                                        t = k_16;
                                        t = k_27(t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(f_22, sym_Arg2_2))
                                    {
                                      b_22 = ATgetArgument(f_22, 0);
                                      c_22 = ATgetArgument(f_22, 1);
                                      {
                                        ATerm m_16 = t;
                                        int n_16 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
                                            if(((f_20 != NULL) && (f_20 != b_22)))
                                              _fail(b_22);
                                            else
                                              f_20 = b_22;
                                            {
                                              if(((d_20 != NULL) && (d_20 != c_22)))
                                                _fail(c_22);
                                              else
                                                d_20 = c_22;
                                              {
                                                if(((g_20 != NULL) && (g_20 != t_23)))
                                                  _fail(t_23);
                                                else
                                                  g_20 = t_23;
                                                {
                                                  if(((k_20 != NULL) && (k_20 != v_23)))
                                                    _fail(v_23);
                                                  else
                                                    k_20 = v_23;
                                                  {
                                                    if(((i_20 != NULL) && (i_20 != w_23)))
                                                      _fail(w_23);
                                                    else
                                                      i_20 = w_23;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(g_20), not_null(i_20));
                                                      {
                                                        t = g_25(t);
                                                        {
                                                          c_24 = t;
                                                          s_18 :
                                                          if(match_cons(c_24, sym__2))
                                                            {
                                                              d_24 = ATgetArgument(c_24, 0);
                                                              e_24 = ATgetArgument(c_24, 1);
                                                              {
                                                                if(((h_20 != NULL) && (h_20 != d_24)))
                                                                  _fail(d_24);
                                                                else
                                                                  h_20 = d_24;
                                                                {
                                                                  if(((j_20 != NULL) && (j_20 != e_24)))
                                                                    _fail(e_24);
                                                                  else
                                                                    j_20 = e_24;
                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(h_20)), (ATerm) ATmakeAppl(sym_Arg2_2, not_null(f_20), not_null(d_20))), (ATerm) ATinsert(CheckATermList(not_null(j_20)), not_null(k_20)));
                                                                }
                                                              }
                                                            }
                                                          else
                                                            _fail(t);
                                                        }
                                                      }
                                                    }
                                                  }
                                                }
                                              }
                                            }
                                            LocalPopChoice(n_16);
                                          }
                                        else
                                          {
                                            t = m_16;
                                            t = k_27(t);
                                          }
                                      }
                                    }
                                  else
                                    t = k_27(t);
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
            return(t);
          }
          t = g_25(t);
          {
            w_24 = t;
            a_19 :
            if(match_cons(w_24, sym__2))
              {
                x_24 = ATgetArgument(w_24, 0);
                y_24 = ATgetArgument(w_24, 1);
                if(((e_20 != NULL) && (e_20 != y_24)))
                  _fail(y_24);
                else
                  e_20 = y_24;
              }
            else
              _fail(t);
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(e_19), not_null(e_20));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm make_path_0 (ATerm t)
{
  ATerm s_27 = NULL,t_27 = NULL,u_27 = NULL;
  s_27 = t;
  r_27 :
  if(match_cons(s_27, sym__2))
    {
      t_27 = ATgetArgument(s_27, 0);
      u_27 = ATgetArgument(s_27, 1);
      {
        ATerm x_27 = NULL;
        ATerm y_27 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_27), (ATerm) ATinsert(ATempty, not_null(u_27)));
        {
          t = conc_0(t);
          {
            y_27 = t;
            if(((x_27 != NULL) && (x_27 != y_27)))
              _fail(y_27);
            else
              x_27 = y_27;
          }
        }
        t = not_null(x_27);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm build_list_0 (ATerm t)
{
  ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL;
  l_28 = t;
  k_28 :
  if(match_cons(l_28, sym__4))
    {
      m_28 = ATgetArgument(l_28, 0);
      n_28 = ATgetArgument(l_28, 1);
      o_28 = ATgetArgument(l_28, 2);
      p_28 = ATgetArgument(l_28, 3);
      {
        ATerm w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
        ATerm b_29 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), not_null(p_28));
        {
          ATerm e_29 = NULL;
          t = make_path_0(t);
          {
            b_29 = t;
            {
              if(((x_28 != NULL) && (x_28 != b_29)))
                _fail(b_29);
              else
                x_28 = b_29;
              {
                t = not_null(m_28);
                {
                  ATerm o_16 = t;
                  int t_16 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm o_1 (ATerm t)
                      {
                        ATerm c_29 = NULL;
                        c_29 = t;
                        if(((w_28 != NULL) && (w_28 != c_29)))
                          _fail(c_29);
                        else
                          w_28 = c_29;
                        return(t);
                      }
                      t = iter_1(t, o_1);
                      LocalPopChoice(t_16);
                    }
                  else
                    {
                      t = o_16;
                      {
                        ATerm p_1 (ATerm t)
                        {
                          ATerm d_29 = NULL;
                          d_29 = t;
                          if(((w_28 != NULL) && (w_28 != d_29)))
                            _fail(d_29);
                          else
                            w_28 = d_29;
                          return(t);
                        }
                        t = iter_star_1(t, p_1);
                      }
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(m_28), not_null(x_28));
                    {
                      ATerm k_29 = NULL;
                      t = get_pp_entry_0(t);
                      {
                        e_29 = t;
                        {
                          if(((y_28 != NULL) && (y_28 != e_29)))
                            _fail(e_29);
                          else
                            y_28 = e_29;
                          {
                            t = not_null(n_28);
                            {
                              ATerm l_29 = NULL;
                              ATerm q_1 (ATerm t)
                              {
                                ATerm f_29 = NULL;
                                ATerm h_29 = NULL;
                                f_29 = t;
                                {
                                  ATerm i_29 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__4, not_null(w_28), not_null(f_29), not_null(x_28), not_null(p_28));
                                  {
                                    t = symbol2abox_0(t);
                                    {
                                      i_29 = t;
                                      if(((h_29 != NULL) && (h_29 != i_29)))
                                        _fail(i_29);
                                      else
                                        h_29 = i_29;
                                    }
                                  }
                                  t = not_null(h_29);
                                }
                                return(t);
                              }
                              t = map_1(t, q_1);
                              {
                                k_29 = t;
                                {
                                  if(((z_28 != NULL) && (z_28 != k_29)))
                                    _fail(k_29);
                                  else
                                    z_28 = k_29;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_28), (ATerm) ATinsert(ATempty, not_null(z_28)));
                                    {
                                      t = instantiate_0(t);
                                      {
                                        l_29 = t;
                                        if(((a_29 != NULL) && (a_29 != l_29)))
                                          _fail(l_29);
                                        else
                                          a_29 = l_29;
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
          }
        }
        t = not_null(a_29);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm instantiate_sep_list_1 (ATerm t, ATerm l_73 (ATerm))
{
  ATerm q_30 (ATerm t)
  {
    ATerm z_29 = NULL,a_30 = NULL,b_30 = NULL;
    ATerm u_16 = t;
    int w_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(w_16);
      }
    else
      {
        t = u_16;
        {
          ATerm y_16 = t;
          int z_16 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              LocalPopChoice(z_16);
            }
          else
            {
              t = y_16;
              {
                ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL,m_30 = NULL,n_30 = NULL;
                j_30 = t;
                x_29 :
                if(((ATgetType(j_30) == AT_LIST) && ((ATermList) j_30 != ATempty)))
                  {
                    k_30 = ATgetFirst((ATermList) j_30);
                    l_30 = (ATerm) ATgetNext((ATermList) j_30);
                    y_29 :
                    if(((ATgetType(l_30) == AT_LIST) && ((ATermList) l_30 != ATempty)))
                      {
                        m_30 = ATgetFirst((ATermList) l_30);
                        n_30 = (ATerm) ATgetNext((ATermList) l_30);
                        {
                          if(((z_29 != NULL) && (z_29 != k_30)))
                            _fail(k_30);
                          else
                            z_29 = k_30;
                          {
                            if(((a_30 != NULL) && (a_30 != m_30)))
                              _fail(m_30);
                            else
                              a_30 = m_30;
                            {
                              if(((b_30 != NULL) && (b_30 != n_30)))
                                _fail(n_30);
                              else
                                b_30 = n_30;
                              {
                                ATerm r_1 (ATerm t)
                                {
                                  ATerm o_30 = NULL;
                                  ATerm p_30 = NULL;
                                  t = term_s_15;
                                  {
                                    t = l_73(t);
                                    {
                                      p_30 = t;
                                      if(((o_30 != NULL) && (o_30 != p_30)))
                                        _fail(p_30);
                                      else
                                        o_30 = p_30;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(o_30), (ATerm) ATinsert(ATinsert(ATempty, not_null(a_30)), not_null(z_29)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm s_1 (ATerm t)
                                {
                                  t = not_null(b_30);
                                  t = q_30(t);
                                  return(t);
                                }
                                t = Cons_2(t, r_1, s_1);
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
        }
      }
    return(t);
  }
  t = q_30(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm y_30 = NULL,z_30 = NULL,a_31 = NULL;
  y_30 = t;
  x_30 :
  if(match_cons(y_30, sym__2))
    {
      z_30 = ATgetArgument(y_30, 0);
      a_31 = ATgetArgument(y_30, 1);
      t = SSL_mod(not_null(z_30), not_null(a_31));
    }
  else
    _fail(t);
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm g_31 = NULL;
  ATerm i_31 = NULL;
  g_31 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), term_a_17);
    {
      t = mod_0(t);
      {
        i_31 = t;
        f_31 :
        if(!(match_int(i_31, 0)))
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm BuildSepList_4 (ATerm t, ATerm t_96 (ATerm), ATerm u_96 (ATerm), ATerm v_96 (ATerm), ATerm w_96 (ATerm))
{
  ATerm u_31 = NULL,v_31 = NULL,w_31 = NULL;
  u_31 = t;
  t_31 :
  if(match_cons(u_31, sym__2))
    {
      v_31 = ATgetArgument(u_31, 0);
      w_31 = ATgetArgument(u_31, 1);
      {
        ATerm z_31 = NULL;
        ATerm i_33 = NULL;
        ATerm c_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_32 = NULL,c_32 = NULL;
            t = not_null(v_31);
            {
              t = even_0(t);
              {
                ATerm f_17;
                f_17 = t;
                {
                  ATerm b_32 = NULL;
                  t = term_s_15;
                  {
                    t = u_96(t);
                    {
                      b_32 = t;
                      if(((a_32 != NULL) && (a_32 != b_32)))
                        _fail(b_32);
                      else
                        a_32 = b_32;
                    }
                  }
                }
                t = f_17;
                {
                  ATerm d_32 = NULL;
                  t = term_s_15;
                  {
                    t = v_96(t);
                    {
                      d_32 = t;
                      if(((c_32 != NULL) && (c_32 != d_32)))
                        _fail(d_32);
                      else
                        c_32 = d_32;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__4, not_null(a_32), not_null(w_31), not_null(c_32), term_a_17);
                    {
                      t = symbol2abox_0(t);
                      {
                        ATerm t_1 (ATerm t)
                        {
                          ATerm e_32 = NULL;
                          e_32 = t;
                          {
                            ATerm g_17 = t;
                            if((PushChoice() == 0))
                              {
                                t = is_list_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              t = g_17;
                            t = (ATerm) ATinsert(ATempty, not_null(e_32));
                          }
                          return(t);
                        }
                        t = try_1(t, t_1);
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(e_17);
          }
        else
          {
            t = c_17;
            {
              ATerm p_32 = NULL,r_32 = NULL;
              ATerm h_17;
              h_17 = t;
              {
                ATerm q_32 = NULL;
                t = term_s_15;
                {
                  t = t_96(t);
                  {
                    q_32 = t;
                    if(((p_32 != NULL) && (p_32 != q_32)))
                      _fail(q_32);
                    else
                      p_32 = q_32;
                  }
                }
              }
              t = h_17;
              {
                ATerm s_32 = NULL;
                t = term_s_15;
                {
                  t = v_96(t);
                  {
                    s_32 = t;
                    if(((r_32 != NULL) && (r_32 != s_32)))
                      _fail(s_32);
                    else
                      r_32 = s_32;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__4, not_null(p_32), not_null(w_31), not_null(r_32), term_i_17);
                  {
                    t = symbol2abox_0(t);
                    {
                      ATerm u_1 (ATerm t)
                      {
                        ATerm g_33 = NULL;
                        g_33 = t;
                        {
                          ATerm j_17 = t;
                          if((PushChoice() == 0))
                            {
                              t = is_list_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            t = j_17;
                          t = (ATerm) ATinsert(ATempty, not_null(g_33));
                        }
                        return(t);
                      }
                      t = try_1(t, u_1);
                    }
                  }
                }
              }
            }
          }
        {
          i_33 = t;
          if(((z_31 != NULL) && (z_31 != i_33)))
            _fail(i_33);
          else
            z_31 = i_33;
        }
        t = not_null(z_31);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip3_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym__2))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_33)), not_null(u_33));
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm d_34 = NULL,e_34 = NULL,f_34 = NULL,g_34 = NULL,h_34 = NULL;
  d_34 = t;
  b_34 :
  if(match_cons(d_34, sym__2))
    {
      e_34 = ATgetArgument(d_34, 0);
      f_34 = ATgetArgument(d_34, 1);
      c_34 :
      if(((ATgetType(f_34) == AT_LIST) && ((ATermList) f_34 != ATempty)))
        {
          g_34 = ATgetFirst((ATermList) f_34);
          h_34 = (ATerm) ATgetNext((ATermList) f_34);
          {
            ATerm n_34 = NULL;
            ATerm o_34 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_34), term_i_17);
            {
              t = add_0(t);
              {
                o_34 = t;
                if(((n_34 != NULL) && (n_34 != o_34)))
                  _fail(o_34);
                else
                  n_34 = o_34;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(e_34), not_null(g_34)), (ATerm) ATmakeAppl(sym__2, not_null(n_34), not_null(h_34)));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm NZip1_0 (ATerm t)
{
  ATerm z_34 = NULL,a_35 = NULL,b_35 = NULL;
  z_34 = t;
  x_34 :
  if(match_cons(z_34, sym__2))
    {
      a_35 = ATgetArgument(z_34, 0);
      b_35 = ATgetArgument(z_34, 1);
      y_34 :
      if(((ATermList) b_35 == ATempty))
        {
          t = (ATerm) ATempty;
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm genzip_4 (ATerm t, ATerm p_87 (ATerm), ATerm q_87 (ATerm), ATerm r_87 (ATerm), ATerm s_87 (ATerm))
{
  ATerm e_35 (ATerm t)
  {
    ATerm k_17 = t;
    int l_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = p_87(t);
        LocalPopChoice(l_17);
      }
    else
      {
        t = k_17;
        {
          t = q_87(t);
          {
            t = _2(t, s_87, e_35);
            t = r_87(t);
          }
        }
      }
    return(t);
  }
  t = e_35(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm i_35 = NULL;
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_i_17, not_null(i_35));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm b_88 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, b_88);
  return(t);
}
ATerm build_sep_list_0 (ATerm t)
{
  ATerm x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL;
  x_35 = t;
  w_35 :
  if(match_cons(x_35, sym__4))
    {
      y_35 = ATgetArgument(x_35, 0);
      z_35 = ATgetArgument(x_35, 1);
      a_36 = ATgetArgument(x_35, 2);
      b_36 = ATgetArgument(x_35, 3);
      {
        ATerm k_36 = NULL,m_36 = NULL,n_36 = NULL,p_36 = NULL,q_36 = NULL,r_36 = NULL;
        ATerm s_36 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(a_36), not_null(b_36));
        {
          ATerm x_36 = NULL;
          t = make_path_0(t);
          {
            s_36 = t;
            {
              if(((n_36 != NULL) && (n_36 != s_36)))
                _fail(s_36);
              else
                n_36 = s_36;
              {
                t = not_null(y_35);
                {
                  ATerm m_17 = t;
                  int n_17 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm v_1 (ATerm t)
                      {
                        ATerm t_36 = NULL;
                        t_36 = t;
                        if(((k_36 != NULL) && (k_36 != t_36)))
                          _fail(t_36);
                        else
                          k_36 = t_36;
                        return(t);
                      }
                      ATerm w_1 (ATerm t)
                      {
                        ATerm u_36 = NULL;
                        u_36 = t;
                        if(((m_36 != NULL) && (m_36 != u_36)))
                          _fail(u_36);
                        else
                          m_36 = u_36;
                        return(t);
                      }
                      t = iter_sep_2(t, v_1, w_1);
                      LocalPopChoice(n_17);
                    }
                  else
                    {
                      t = m_17;
                      {
                        ATerm x_1 (ATerm t)
                        {
                          ATerm v_36 = NULL;
                          v_36 = t;
                          if(((k_36 != NULL) && (k_36 != v_36)))
                            _fail(v_36);
                          else
                            k_36 = v_36;
                          return(t);
                        }
                        ATerm y_1 (ATerm t)
                        {
                          ATerm w_36 = NULL;
                          w_36 = t;
                          if(((m_36 != NULL) && (m_36 != w_36)))
                            _fail(w_36);
                          else
                            m_36 = w_36;
                          return(t);
                        }
                        t = iter_star_sep_2(t, x_1, y_1);
                      }
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_35), not_null(n_36));
                    {
                      ATerm y_36 = NULL;
                      t = get_pp_entry_0(t);
                      {
                        x_36 = t;
                        {
                          if(((p_36 != NULL) && (p_36 != x_36)))
                            _fail(x_36);
                          else
                            p_36 = x_36;
                          {
                            t = not_null(z_35);
                            {
                              ATerm z_36 = NULL;
                              ATerm z_1 (ATerm t)
                              {
                                ATerm a_2 (ATerm t)
                                {
                                  t = not_null(k_36);
                                  return(t);
                                }
                                ATerm b_2 (ATerm t)
                                {
                                  t = not_null(m_36);
                                  return(t);
                                }
                                ATerm c_2 (ATerm t)
                                {
                                  t = not_null(n_36);
                                  return(t);
                                }
                                ATerm d_2 (ATerm t)
                                {
                                  t = not_null(b_36);
                                  return(t);
                                }
                                t = BuildSepList_4(t, a_2, b_2, c_2, d_2);
                                return(t);
                              }
                              t = nzip_1(t, z_1);
                              {
                                y_36 = t;
                                {
                                  if(((q_36 != NULL) && (q_36 != y_36)))
                                    _fail(y_36);
                                  else
                                    q_36 = y_36;
                                  {
                                    t = not_null(q_36);
                                    {
                                      ATerm e_2 (ATerm t)
                                      {
                                        t = not_null(p_36);
                                        return(t);
                                      }
                                      t = instantiate_sep_list_1(t, e_2);
                                      {
                                        z_36 = t;
                                        if(((r_36 != NULL) && (r_36 != z_36)))
                                          _fail(z_36);
                                        else
                                          r_36 = z_36;
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
          }
        }
        t = not_null(r_36);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Ind1_0 (ATerm t)
{
  ATerm p_37 = NULL,t_37 = NULL,u_37 = NULL,v_37 = NULL,w_37 = NULL;
  p_37 = t;
  m_37 :
  if(match_cons(p_37, sym__2))
    {
      t_37 = ATgetArgument(p_37, 0);
      u_37 = ATgetArgument(p_37, 1);
      n_37 :
      if(match_int(t_37, 1))
        {
          o_37 :
          if(((ATgetType(u_37) == AT_LIST) && ((ATermList) u_37 != ATempty)))
            {
              v_37 = ATgetFirst((ATermList) u_37);
              w_37 = (ATerm) ATgetNext((ATermList) u_37);
              t = not_null(v_37);
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
ATerm subt_0 (ATerm t)
{
  ATerm f_38 = NULL,g_38 = NULL,h_38 = NULL;
  f_38 = t;
  e_38 :
  if(match_cons(f_38, sym__2))
    {
      g_38 = ATgetArgument(f_38, 0);
      h_38 = ATgetArgument(f_38, 1);
      {
        ATerm o_17 = t;
        int p_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(g_38), not_null(h_38));
            LocalPopChoice(p_17);
          }
        else
          {
            t = o_17;
            t = SSL_subtr(not_null(g_38), not_null(h_38));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm geq_0 (ATerm t)
{
  ATerm n_38 = NULL;
  ATerm q_17 = t;
  int r_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_38 = NULL,p_38 = NULL,q_38 = NULL;
      o_38 = t;
      m_38 :
      if(match_cons(o_38, sym__2))
        {
          p_38 = ATgetArgument(o_38, 0);
          q_38 = ATgetArgument(o_38, 1);
          {
            if(((n_38 != NULL) && (n_38 != p_38)))
              _fail(p_38);
            else
              n_38 = p_38;
            if(((n_38 != NULL) && (n_38 != q_38)))
              _fail(q_38);
            else
              n_38 = q_38;
          }
        }
      else
        _fail(t);
      LocalPopChoice(r_17);
    }
  else
    {
      t = q_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm w_38 = NULL,x_38 = NULL,y_38 = NULL,z_38 = NULL,a_39 = NULL;
  w_38 = t;
  u_38 :
  if(match_cons(w_38, sym__2))
    {
      x_38 = ATgetArgument(w_38, 0);
      y_38 = ATgetArgument(w_38, 1);
      v_38 :
      if(((ATgetType(y_38) == AT_LIST) && ((ATermList) y_38 != ATempty)))
        {
          z_38 = ATgetFirst((ATermList) y_38);
          a_39 = (ATerm) ATgetNext((ATermList) y_38);
          {
            ATerm e_39 = NULL;
            ATerm s_17;
            s_17 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_38), term_a_17);
              t = geq_0(t);
            }
            t = s_17;
            {
              ATerm f_39 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(x_38), term_i_17);
              {
                t = subt_0(t);
                {
                  f_39 = t;
                  if(((e_39 != NULL) && (e_39 != f_39)))
                    _fail(f_39);
                  else
                    e_39 = f_39;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_39), not_null(a_39));
            }
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm index_0 (ATerm t)
{
  t = repeat_1(t, Ind2_0);
  t = Ind1_0(t);
  return(t);
}
ATerm symbol2abox_0 (ATerm t)
{
  ATerm d_42 = NULL,e_42 = NULL,f_42 = NULL,g_42 = NULL,h_42 = NULL,i_42 = NULL,j_42 = NULL,k_42 = NULL,l_42 = NULL,m_42 = NULL,p_42 = NULL;
  i_42 = t;
  x_41 :
  if(match_cons(i_42, sym__4))
    {
      j_42 = ATgetArgument(i_42, 0);
      l_42 = ATgetArgument(i_42, 1);
      m_42 = ATgetArgument(i_42, 2);
      p_42 = ATgetArgument(i_42, 3);
      y_41 :
      if(match_cons(j_42, sym_seq_1))
        {
          k_42 = ATgetArgument(j_42, 0);
          z_41 :
          if(match_cons(l_42, sym_appl_2))
            {
              g_42 = ATgetArgument(l_42, 0);
              h_42 = ATgetArgument(l_42, 1);
              {
                ATerm u_42 = NULL,v_42 = NULL,w_42 = NULL,x_42 = NULL;
                ATerm y_42 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_42), not_null(p_42));
                {
                  ATerm z_42 = NULL;
                  t = make_path_0(t);
                  {
                    y_42 = t;
                    {
                      if(((u_42 != NULL) && (u_42 != y_42)))
                        _fail(y_42);
                      else
                        u_42 = y_42;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, not_null(k_42)), not_null(u_42));
                        {
                          ATerm a_43 = NULL,c_43 = NULL,e_43 = NULL;
                          t = get_pp_entry_0(t);
                          {
                            z_42 = t;
                            {
                              if(((v_42 != NULL) && (v_42 != z_42)))
                                _fail(z_42);
                              else
                                v_42 = z_42;
                              {
                                ATerm t_17;
                                t_17 = t;
                                {
                                  ATerm b_43 = NULL;
                                  t = not_null(k_42);
                                  {
                                    ATerm f_2 (ATerm t)
                                    {
                                      ATerm u_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = lit_1(t, _id);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        t = u_17;
                                      return(t);
                                    }
                                    t = filter_1(t, f_2);
                                    {
                                      b_43 = t;
                                      if(((a_43 != NULL) && (a_43 != b_43)))
                                        _fail(b_43);
                                      else
                                        a_43 = b_43;
                                    }
                                  }
                                }
                                t = t_17;
                                {
                                  ATerm d_43 = NULL;
                                  t = not_null(h_42);
                                  {
                                    ATerm g_2 (ATerm t)
                                    {
                                      ATerm v_17 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = lit_1(t, _id);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        t = v_17;
                                      return(t);
                                    }
                                    t = filter_1(t, g_2);
                                    {
                                      d_43 = t;
                                      if(((c_43 != NULL) && (c_43 != d_43)))
                                        _fail(d_43);
                                      else
                                        c_43 = d_43;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__4, not_null(a_43), not_null(c_43), not_null(u_42), term_i_17);
                                    {
                                      ATerm f_43 = NULL;
                                      t = seq2abox_0(t);
                                      {
                                        e_43 = t;
                                        {
                                          if(((w_42 != NULL) && (w_42 != e_43)))
                                            _fail(e_43);
                                          else
                                            w_42 = e_43;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(v_42), not_null(w_42));
                                            {
                                              t = instantiate_0(t);
                                              {
                                                f_43 = t;
                                                if(((x_42 != NULL) && (x_42 != f_43)))
                                                  _fail(f_43);
                                                else
                                                  x_42 = f_43;
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
                  }
                }
                t = not_null(x_42);
              }
            }
          else
            _fail(t);
        }
      else
        {
          if(match_cons(j_42, sym_alt_2))
            {
              k_42 = ATgetArgument(j_42, 0);
              d_42 = ATgetArgument(j_42, 1);
              {
                ATerm l_43 = NULL,m_43 = NULL,n_43 = NULL,o_43 = NULL,p_43 = NULL;
                ATerm q_43 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_42), not_null(p_42));
                {
                  ATerm t_43 = NULL;
                  t = make_path_0(t);
                  {
                    q_43 = t;
                    {
                      if(((l_43 != NULL) && (l_43 != q_43)))
                        _fail(q_43);
                      else
                        l_43 = q_43;
                      {
                        ATerm t_45 = NULL;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, not_null(k_42), not_null(d_42)), not_null(l_42), not_null(l_43), term_i_17);
                        {
                          t_43 = t;
                          {
                            if(((m_43 != NULL) && (m_43 != t_43)))
                              _fail(t_43);
                            else
                              m_43 = t_43;
                            {
                              ATerm w_55 (ATerm t)
                              {
                                ATerm u_43 = NULL,v_43 = NULL,y_43 = NULL,z_43 = NULL,a_44 = NULL,b_44 = NULL,c_44 = NULL,d_44 = NULL,e_44 = NULL,g_44 = NULL,h_44 = NULL,i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,o_44 = NULL;
                                ATerm z_55 (ATerm t)
                                {
                                  ATerm s_44 = NULL,t_44 = NULL,v_44 = NULL,w_44 = NULL;
                                  if(((u_43 != NULL) && (u_43 != z_43)))
                                    _fail(z_43);
                                  else
                                    u_43 = z_43;
                                  {
                                    if(((u_43 != NULL) && (u_43 != c_44)))
                                      _fail(c_44);
                                    else
                                      u_43 = c_44;
                                    {
                                      if(((v_43 != NULL) && (v_43 != d_44)))
                                        _fail(d_44);
                                      else
                                        v_43 = d_44;
                                      {
                                        if(((t_44 != NULL) && (t_44 != e_44)))
                                          _fail(e_44);
                                        else
                                          t_44 = e_44;
                                        {
                                          if(((s_44 != NULL) && (s_44 != k_44)))
                                            _fail(k_44);
                                          else
                                            s_44 = k_44;
                                          {
                                            if(((w_44 != NULL) && (w_44 != n_44)))
                                              _fail(n_44);
                                            else
                                              w_44 = n_44;
                                            {
                                              if(((v_44 != NULL) && (v_44 != o_44)))
                                                _fail(o_44);
                                              else
                                                v_44 = o_44;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__4, not_null(u_43), (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, not_null(u_43)), not_null(u_43), not_null(t_44)), not_null(s_44)), not_null(w_44), not_null(v_44));
                                                t = w_55(t);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return(t);
                                }
                                ATerm a_56 (ATerm t)
                                {
                                  ATerm a_45 = NULL,b_45 = NULL,d_45 = NULL,e_45 = NULL,f_45 = NULL;
                                  if(((u_43 != NULL) && (u_43 != c_44)))
                                    _fail(c_44);
                                  else
                                    u_43 = c_44;
                                  {
                                    if(((v_43 != NULL) && (v_43 != d_44)))
                                      _fail(d_44);
                                    else
                                      v_43 = d_44;
                                    {
                                      if(((b_45 != NULL) && (b_45 != e_44)))
                                        _fail(e_44);
                                      else
                                        b_45 = e_44;
                                      {
                                        if(((a_45 != NULL) && (a_45 != k_44)))
                                          _fail(k_44);
                                        else
                                          a_45 = k_44;
                                        {
                                          if(((e_45 != NULL) && (e_45 != n_44)))
                                            _fail(n_44);
                                          else
                                            e_45 = n_44;
                                          {
                                            if(((d_45 != NULL) && (d_45 != o_44)))
                                              _fail(o_44);
                                            else
                                              d_45 = o_44;
                                            {
                                              ATerm g_45 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(d_45), term_i_17);
                                              {
                                                t = add_0(t);
                                                {
                                                  g_45 = t;
                                                  if(((f_45 != NULL) && (f_45 != g_45)))
                                                    _fail(g_45);
                                                  else
                                                    f_45 = g_45;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATmakeAppl(sym__4, not_null(v_43), (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, not_null(z_43)), not_null(v_43), not_null(b_45)), not_null(a_45)), not_null(e_45), not_null(f_45));
                                                t = w_55(t);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return(t);
                                }
                                ATerm b_56 (ATerm t)
                                {
                                  ATerm p_45 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(m_43), not_null(n_44));
                                  {
                                    ATerm q_45 = NULL;
                                    t = get_pp_entry_0(t);
                                    {
                                      p_45 = t;
                                      {
                                        if(((n_43 != NULL) && (n_43 != p_45)))
                                          _fail(p_45);
                                        else
                                          n_43 = p_45;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__4, not_null(h_44), not_null(l_44), not_null(n_44), not_null(o_44));
                                          {
                                            ATerm r_45 = NULL;
                                            t = symbol2abox_0(t);
                                            {
                                              q_45 = t;
                                              {
                                                if(((o_43 != NULL) && (o_43 != q_45)))
                                                  _fail(q_45);
                                                else
                                                  o_43 = q_45;
                                                {
                                                  ATerm s_45 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_44), not_null(n_43));
                                                  {
                                                    t = index_0(t);
                                                    {
                                                      s_45 = t;
                                                      if(((r_45 != NULL) && (r_45 != s_45)))
                                                        _fail(s_45);
                                                      else
                                                        r_45 = s_45;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(r_45)), (ATerm) ATinsert(ATempty, not_null(o_43)));
                                                    t = instantiate_0(t);
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
                                g_44 = t;
                                j_40 :
                                if(match_cons(g_44, sym__4))
                                  {
                                    h_44 = ATgetArgument(g_44, 0);
                                    i_44 = ATgetArgument(g_44, 1);
                                    n_44 = ATgetArgument(g_44, 2);
                                    o_44 = ATgetArgument(g_44, 3);
                                    k_40 :
                                    if(match_cons(i_44, sym_appl_2))
                                      {
                                        j_44 = ATgetArgument(i_44, 0);
                                        k_44 = ATgetArgument(i_44, 1);
                                        l_40 :
                                        if(((ATgetType(k_44) == AT_LIST) && ((ATermList) k_44 != ATempty)))
                                          {
                                            l_44 = ATgetFirst((ATermList) k_44);
                                            m_44 = (ATerm) ATgetNext((ATermList) k_44);
                                            m_40 :
                                            if(((ATermList) m_44 == ATempty))
                                              {
                                                n_40 :
                                                if(match_cons(j_44, sym_prod_3))
                                                  {
                                                    y_43 = ATgetArgument(j_44, 0);
                                                    b_44 = ATgetArgument(j_44, 1);
                                                    e_44 = ATgetArgument(j_44, 2);
                                                    o_40 :
                                                    if(match_cons(b_44, sym_alt_2))
                                                      {
                                                        c_44 = ATgetArgument(b_44, 0);
                                                        d_44 = ATgetArgument(b_44, 1);
                                                        p_40 :
                                                        if(((ATgetType(y_43) == AT_LIST) && ((ATermList) y_43 != ATempty)))
                                                          {
                                                            z_43 = ATgetFirst((ATermList) y_43);
                                                            a_44 = (ATerm) ATgetNext((ATermList) y_43);
                                                            q_40 :
                                                            if(((ATermList) a_44 == ATempty))
                                                              {
                                                                r_40 :
                                                                if(match_cons(h_44, sym_alt_2))
                                                                  {
                                                                    u_43 = ATgetArgument(h_44, 0);
                                                                    v_43 = ATgetArgument(h_44, 1);
                                                                    {
                                                                      ATerm w_17 = t;
                                                                      int x_17 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = z_55(t);
                                                                          LocalPopChoice(x_17);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = w_17;
                                                                          {
                                                                            ATerm y_17 = t;
                                                                            int z_17 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = a_56(t);
                                                                                LocalPopChoice(z_17);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = y_17;
                                                                                t = b_56(t);
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                                else
                                                                  t = b_56(t);
                                                              }
                                                            else
                                                              {
                                                                s_40 :
                                                                t = b_56(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            t_40 :
                                                            t = b_56(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        u_40 :
                                                        v_40 :
                                                        t = b_56(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    w_40 :
                                                    t = b_56(t);
                                                  }
                                              }
                                            else
                                              {
                                                x_40 :
                                                if(match_cons(j_44, sym_prod_3))
                                                  {
                                                    y_43 = ATgetArgument(j_44, 0);
                                                    b_44 = ATgetArgument(j_44, 1);
                                                    e_44 = ATgetArgument(j_44, 2);
                                                    y_40 :
                                                    if(match_cons(h_44, sym_alt_2))
                                                      {
                                                        u_43 = ATgetArgument(h_44, 0);
                                                        v_43 = ATgetArgument(h_44, 1);
                                                        z_40 :
                                                        if(((ATgetType(y_43) == AT_LIST) && ((ATermList) y_43 != ATempty)))
                                                          {
                                                            z_43 = ATgetFirst((ATermList) y_43);
                                                            a_44 = (ATerm) ATgetNext((ATermList) y_43);
                                                            a_41 :
                                                            if(((ATermList) a_44 == ATempty))
                                                              {
                                                                b_41 :
                                                                if(match_cons(b_44, sym_alt_2))
                                                                  {
                                                                    c_44 = ATgetArgument(b_44, 0);
                                                                    d_44 = ATgetArgument(b_44, 1);
                                                                    {
                                                                      ATerm a_18 = t;
                                                                      int b_18 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = z_55(t);
                                                                          LocalPopChoice(b_18);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = a_18;
                                                                          t = a_56(t);
                                                                        }
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
                                                    else
                                                      _fail(t);
                                                  }
                                                else
                                                  _fail(t);
                                              }
                                          }
                                        else
                                          {
                                            c_41 :
                                            if(match_cons(j_44, sym_prod_3))
                                              {
                                                y_43 = ATgetArgument(j_44, 0);
                                                b_44 = ATgetArgument(j_44, 1);
                                                e_44 = ATgetArgument(j_44, 2);
                                                d_41 :
                                                if(match_cons(h_44, sym_alt_2))
                                                  {
                                                    u_43 = ATgetArgument(h_44, 0);
                                                    v_43 = ATgetArgument(h_44, 1);
                                                    e_41 :
                                                    if(((ATgetType(y_43) == AT_LIST) && ((ATermList) y_43 != ATempty)))
                                                      {
                                                        z_43 = ATgetFirst((ATermList) y_43);
                                                        a_44 = (ATerm) ATgetNext((ATermList) y_43);
                                                        f_41 :
                                                        if(((ATermList) a_44 == ATempty))
                                                          {
                                                            g_41 :
                                                            if(match_cons(b_44, sym_alt_2))
                                                              {
                                                                c_44 = ATgetArgument(b_44, 0);
                                                                d_44 = ATgetArgument(b_44, 1);
                                                                {
                                                                  ATerm c_18 = t;
                                                                  int d_18 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = z_55(t);
                                                                      LocalPopChoice(d_18);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = c_18;
                                                                      t = a_56(t);
                                                                    }
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
                                                else
                                                  _fail(t);
                                              }
                                            else
                                              _fail(t);
                                          }
                                      }
                                    else
                                      _fail(t);
                                  }
                                else
                                  _fail(t);
                                return(t);
                              }
                              t = w_55(t);
                              {
                                t_45 = t;
                                if(((p_43 != NULL) && (p_43 != t_45)))
                                  _fail(t_45);
                                else
                                  p_43 = t_45;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = not_null(p_43);
              }
            }
          else
            {
              if(match_cons(j_42, sym_iter_star_sep_2))
                {
                  k_42 = ATgetArgument(j_42, 0);
                  d_42 = ATgetArgument(j_42, 1);
                  {
                    ATerm z_45 = NULL;
                    ATerm a_46 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(k_42), not_null(d_42)), not_null(l_42), not_null(m_42), not_null(p_42));
                    {
                      t = build_sep_list_0(t);
                      {
                        a_46 = t;
                        if(((z_45 != NULL) && (z_45 != a_46)))
                          _fail(a_46);
                        else
                          z_45 = a_46;
                      }
                    }
                    t = not_null(z_45);
                  }
                }
              else
                {
                  if(match_cons(j_42, sym_iter_sep_2))
                    {
                      k_42 = ATgetArgument(j_42, 0);
                      d_42 = ATgetArgument(j_42, 1);
                      {
                        ATerm n_46 = NULL;
                        ATerm o_46 = NULL;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, not_null(k_42), not_null(d_42)), not_null(l_42), not_null(m_42), not_null(p_42));
                        {
                          t = build_sep_list_0(t);
                          {
                            o_46 = t;
                            if(((n_46 != NULL) && (n_46 != o_46)))
                              _fail(o_46);
                            else
                              n_46 = o_46;
                          }
                        }
                        t = not_null(n_46);
                      }
                    }
                  else
                    {
                      if(match_cons(j_42, sym_iter_star_1))
                        {
                          k_42 = ATgetArgument(j_42, 0);
                          {
                            ATerm y_46 = NULL;
                            ATerm z_46 = NULL;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, not_null(k_42)), not_null(l_42), not_null(m_42), not_null(p_42));
                            {
                              t = build_list_0(t);
                              {
                                z_46 = t;
                                if(((y_46 != NULL) && (y_46 != z_46)))
                                  _fail(z_46);
                                else
                                  y_46 = z_46;
                              }
                            }
                            t = not_null(y_46);
                          }
                        }
                      else
                        {
                          if(match_cons(j_42, sym_iter_1))
                            {
                              k_42 = ATgetArgument(j_42, 0);
                              {
                                ATerm e_47 = NULL;
                                ATerm f_47 = NULL;
                                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, not_null(k_42)), not_null(l_42), not_null(m_42), not_null(p_42));
                                {
                                  t = build_list_0(t);
                                  {
                                    f_47 = t;
                                    if(((e_47 != NULL) && (e_47 != f_47)))
                                      _fail(f_47);
                                    else
                                      e_47 = f_47;
                                  }
                                }
                                t = not_null(e_47);
                              }
                            }
                          else
                            {
                              if(match_cons(j_42, sym_opt_1))
                                {
                                  k_42 = ATgetArgument(j_42, 0);
                                  a_42 :
                                  if(match_cons(l_42, sym_appl_2))
                                    {
                                      g_42 = ATgetArgument(l_42, 0);
                                      h_42 = ATgetArgument(l_42, 1);
                                      b_42 :
                                      if(((ATgetType(h_42) == AT_LIST) && ((ATermList) h_42 != ATempty)))
                                        {
                                          e_42 = ATgetFirst((ATermList) h_42);
                                          f_42 = (ATerm) ATgetNext((ATermList) h_42);
                                          c_42 :
                                          if(((ATermList) f_42 == ATempty))
                                            {
                                              {
                                                ATerm l_47 = NULL,m_47 = NULL,n_47 = NULL,o_47 = NULL;
                                                ATerm p_47 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(m_42), not_null(p_42));
                                                {
                                                  ATerm q_47 = NULL;
                                                  t = make_path_0(t);
                                                  {
                                                    p_47 = t;
                                                    {
                                                      if(((l_47 != NULL) && (l_47 != p_47)))
                                                        _fail(p_47);
                                                      else
                                                        l_47 = p_47;
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, not_null(k_42)), not_null(l_47));
                                                        {
                                                          ATerm r_47 = NULL;
                                                          t = get_pp_entry_0(t);
                                                          {
                                                            q_47 = t;
                                                            {
                                                              if(((m_47 != NULL) && (m_47 != q_47)))
                                                                _fail(q_47);
                                                              else
                                                                m_47 = q_47;
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__4, not_null(k_42), not_null(e_42), not_null(l_47), term_i_17);
                                                                {
                                                                  ATerm s_47 = NULL;
                                                                  t = symbol2abox_0(t);
                                                                  {
                                                                    r_47 = t;
                                                                    {
                                                                      if(((n_47 != NULL) && (n_47 != r_47)))
                                                                        _fail(r_47);
                                                                      else
                                                                        n_47 = r_47;
                                                                      {
                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(m_47), (ATerm) ATinsert(ATempty, not_null(n_47)));
                                                                        {
                                                                          t = filter_literals_0(t);
                                                                          {
                                                                            t = instantiate_0(t);
                                                                            {
                                                                              s_47 = t;
                                                                              if(((o_47 != NULL) && (o_47 != s_47)))
                                                                                _fail(s_47);
                                                                              else
                                                                                o_47 = s_47;
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
                                                }
                                                t = not_null(o_47);
                                              }
                                            }
                                          else
                                            _fail(t);
                                        }
                                      else
                                        {
                                          if(((ATermList) h_42 == ATempty))
                                            {
                                              t = (ATerm) ATempty;
                                            }
                                          else
                                            _fail(t);
                                        }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  if(match_cons(j_42, sym_sort_1))
                                    {
                                      k_42 = ATgetArgument(j_42, 0);
                                      {
                                        ATerm e_18 = t;
                                        int f_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm a_48 = NULL;
                                            ATerm b_48 = NULL;
                                            t = not_null(l_42);
                                            {
                                              ATerm g_18 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  t = is_string_0(t);
                                                  PopChoice();
                                                  _fail(t);
                                                }
                                              else
                                                t = g_18;
                                              {
                                                t = not_null(l_42);
                                                {
                                                  t = appl2abox_0(t);
                                                  {
                                                    b_48 = t;
                                                    if(((a_48 != NULL) && (a_48 != b_48)))
                                                      _fail(b_48);
                                                    else
                                                      a_48 = b_48;
                                                  }
                                                }
                                              }
                                            }
                                            t = not_null(a_48);
                                            LocalPopChoice(f_18);
                                          }
                                        else
                                          {
                                            t = e_18;
                                            {
                                              t = not_null(l_42);
                                              t = is_string_0(t);
                                              t = (ATerm) ATmakeAppl(sym_S_1, not_null(l_42));
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(j_42, sym_char_class_1))
                                        {
                                          k_42 = ATgetArgument(j_42, 0);
                                          {
                                            ATerm k_48 = NULL;
                                            ATerm l_48 = NULL;
                                            t = (ATerm) ATinsert(ATempty, not_null(l_42));
                                            {
                                              t = implode_string_0(t);
                                              {
                                                l_48 = t;
                                                if(((k_48 != NULL) && (k_48 != l_48)))
                                                  _fail(l_48);
                                                else
                                                  k_48 = l_48;
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_S_1, not_null(k_48));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(j_42, sym_lit_1))
                                            {
                                              k_42 = ATgetArgument(j_42, 0);
                                              t = (ATerm) ATmakeAppl(sym_S_1, not_null(k_42));
                                            }
                                          else
                                            _fail(t);
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
  else
    _fail(t);
  return(t);
}
ATerm seq2abox_0 (ATerm t)
{
  ATerm e_57 = NULL,f_57 = NULL,g_57 = NULL,h_57 = NULL,i_57 = NULL,j_57 = NULL,k_57 = NULL,l_57 = NULL,m_57 = NULL,n_57 = NULL,o_57 = NULL;
  ATerm u_58 (ATerm t)
  {
    ATerm k_58 = NULL,l_58 = NULL,n_58 = NULL;
    t = (ATerm) ATmakeAppl(sym__4, not_null(i_57), not_null(l_57), not_null(n_57), not_null(o_57));
    {
      ATerm o_58 = NULL,q_58 = NULL;
      t = symbol2abox_0(t);
      {
        n_58 = t;
        {
          if(((k_58 != NULL) && (k_58 != n_58)))
            _fail(n_58);
          else
            k_58 = n_58;
          {
            ATerm p_58 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_57), term_i_17);
            {
              t = add_0(t);
              {
                p_58 = t;
                if(((o_58 != NULL) && (o_58 != p_58)))
                  _fail(p_58);
                else
                  o_58 = p_58;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__4, not_null(j_57), not_null(m_57), not_null(n_57), not_null(o_58));
              {
                t = seq2abox_0(t);
                {
                  q_58 = t;
                  {
                    if(((l_58 != NULL) && (l_58 != q_58)))
                      _fail(q_58);
                    else
                      l_58 = q_58;
                    t = (ATerm) ATinsert(CheckATermList(not_null(l_58)), not_null(k_58));
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
  g_57 = t;
  x_56 :
  if(match_cons(g_57, sym__4))
    {
      h_57 = ATgetArgument(g_57, 0);
      k_57 = ATgetArgument(g_57, 1);
      n_57 = ATgetArgument(g_57, 2);
      o_57 = ATgetArgument(g_57, 3);
      y_56 :
      if(((ATermList) h_57 == ATempty))
        {
          z_56 :
          if(((ATermList) k_57 == ATempty))
            {
              t = (ATerm) ATempty;
            }
          else
            _fail(t);
        }
      else
        {
          if(((ATgetType(h_57) == AT_LIST) && ((ATermList) h_57 != ATempty)))
            {
              i_57 = ATgetFirst((ATermList) h_57);
              j_57 = (ATerm) ATgetNext((ATermList) h_57);
              a_57 :
              if(((ATgetType(k_57) == AT_LIST) && ((ATermList) k_57 != ATempty)))
                {
                  l_57 = ATgetFirst((ATermList) k_57);
                  m_57 = (ATerm) ATgetNext((ATermList) k_57);
                  b_57 :
                  if(match_cons(l_57, sym_lit_1))
                    {
                      f_57 = ATgetArgument(l_57, 0);
                      c_57 :
                      if(match_cons(i_57, sym_lit_1))
                        {
                          e_57 = ATgetArgument(i_57, 0);
                          {
                            ATerm h_18 = t;
                            int i_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__4, not_null(j_57), not_null(m_57), not_null(n_57), not_null(o_57));
                                t = seq2abox_0(t);
                                LocalPopChoice(i_18);
                              }
                            else
                              {
                                t = h_18;
                                t = u_58(t);
                              }
                          }
                        }
                      else
                        t = u_58(t);
                    }
                  else
                    {
                      d_57 :
                      t = u_58(t);
                    }
                }
              else
                _fail(t);
            }
          else
            _fail(t);
        }
    }
  else
    _fail(t);
  return(t);
}
ATerm lit_1 (ATerm t, ATerm x_0 (ATerm))
{
  ATerm d_59 = NULL,e_59 = NULL;
  d_59 = t;
  c_59 :
  if(match_cons(d_59, sym_lit_1))
    {
      e_59 = ATgetArgument(d_59, 0);
      {
        ATerm j_18 = t;
        int k_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_59 = NULL;
            t = not_null(e_59);
            {
              t = x_0(t);
              {
                g_59 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, not_null(g_59));
              }
            }
            LocalPopChoice(k_18);
          }
        else
          {
            t = j_18;
            {
              ATerm j_59 = NULL;
              t = not_null(e_59);
              {
                t = x_0(t);
                {
                  j_59 = t;
                  t = (ATerm) ATmakeAppl(sym_lit_1, not_null(j_59));
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
ATerm Snd_0 (ATerm t)
{
  ATerm w_59 = NULL;
  ATerm y_59 = NULL,z_59 = NULL,a_60 = NULL;
  w_59 = t;
  {
    ATerm b_60 = NULL;
    ATerm d_60 = NULL,e_60 = NULL,f_60 = NULL,g_60 = NULL,h_60 = NULL,i_60 = NULL,j_60 = NULL;
    t = not_null(w_59);
    {
      b_60 = t;
      {
        t = SSL_explode_term(not_null(b_60));
        {
          d_60 = t;
          s_59 :
          if(match_cons(d_60, sym__2))
            {
              e_60 = ATgetArgument(d_60, 0);
              f_60 = ATgetArgument(d_60, 1);
              t_59 :
              if(match_string(e_60, ""))
                {
                  u_59 :
                  if(((ATgetType(f_60) == AT_LIST) && ((ATermList) f_60 != ATempty)))
                    {
                      g_60 = ATgetFirst((ATermList) f_60);
                      h_60 = (ATerm) ATgetNext((ATermList) f_60);
                      v_59 :
                      if(((ATgetType(h_60) == AT_LIST) && ((ATermList) h_60 != ATempty)))
                        {
                          i_60 = ATgetFirst((ATermList) h_60);
                          j_60 = (ATerm) ATgetNext((ATermList) h_60);
                          {
                            if(((y_59 != NULL) && (y_59 != g_60)))
                              _fail(g_60);
                            else
                              y_59 = g_60;
                            {
                              if(((a_60 != NULL) && (a_60 != i_60)))
                                _fail(i_60);
                              else
                                a_60 = i_60;
                              if(((z_59 != NULL) && (z_59 != j_60)))
                                _fail(j_60);
                              else
                                z_59 = j_60;
                            }
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
          else
            _fail(t);
        }
      }
    }
    t = not_null(a_60);
  }
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm q_60 = NULL;
  ATerm s_60 = NULL,t_60 = NULL,u_60 = NULL;
  q_60 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_l_18, not_null(q_60));
    {
      t = table_get_0(t);
      {
        s_60 = t;
        p_60 :
        if(match_cons(s_60, sym__2))
          {
            t_60 = ATgetArgument(s_60, 0);
            u_60 = ATgetArgument(s_60, 1);
            {
              ATerm w_60 = NULL;
              if(((w_60 != NULL) && (w_60 != u_60)))
                _fail(u_60);
              else
                w_60 = u_60;
            }
          }
        else
          _fail(t);
      }
    }
  }
  return(t);
}
ATerm StoreEntryIfNotExists_0 (ATerm t)
{
  ATerm c_61 = NULL,d_61 = NULL,e_61 = NULL;
  c_61 = t;
  b_61 :
  if(match_cons(c_61, sym_PP_Entry_2))
    {
      d_61 = ATgetArgument(c_61, 0);
      e_61 = ATgetArgument(c_61, 1);
      {
        ATerm m_18 = t;
        int n_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_18;
            o_18 = t;
            {
              ATerm h_61 = NULL;
              ATerm i_61 = NULL;
              t = not_null(d_61);
              {
                t = mk_key_0(t);
                {
                  i_61 = t;
                  if(((h_61 != NULL) && (h_61 != i_61)))
                    _fail(i_61);
                  else
                    h_61 = i_61;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, term_l_18, not_null(h_61));
                t = table_get_0(t);
              }
            }
            t = o_18;
            LocalPopChoice(n_18);
          }
        else
          {
            t = m_18;
            t = StoreEntry_0(t);
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm debug_1 (ATerm t, ATerm m_80 (ATerm))
{
  ATerm p_18;
  p_18 = t;
  {
    ATerm n_61 = NULL,p_61 = NULL;
    ATerm r_18;
    r_18 = t;
    {
      ATerm o_61 = NULL;
      t = m_80(t);
      {
        o_61 = t;
        if(((n_61 != NULL) && (n_61 != o_61)))
          _fail(o_61);
        else
          n_61 = o_61;
      }
    }
    t = r_18;
    {
      ATerm q_61 = NULL;
      q_61 = t;
      if(((p_61 != NULL) && (p_61 != q_61)))
        _fail(q_61);
      else
        p_61 = q_61;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_61)), not_null(n_61)));
        t = printnl_0(t);
      }
    }
  }
  t = p_18;
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm i_74 (ATerm))
{
  ATerm x_61 = NULL,z_61 = NULL,d_62 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm z_18;
    z_18 = t;
    {
      ATerm y_61 = NULL;
      t = make_0(t);
      {
        y_61 = t;
        if(((x_61 != NULL) && (x_61 != y_61)))
          _fail(y_61);
        else
          x_61 = y_61;
      }
    }
    t = z_18;
    {
      ATerm d_19;
      d_19 = t;
      {
        ATerm c_62 = NULL;
        ATerm h_2 (ATerm t)
        {
          ATerm i_2 (ATerm t)
          {
            ATerm a_62 = NULL;
            ATerm b_62 = NULL;
            t = term_s_15;
            {
              t = i_74(t);
              {
                b_62 = t;
                if(((a_62 != NULL) && (a_62 != b_62)))
                  _fail(b_62);
                else
                  a_62 = b_62;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(a_62), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, i_2);
          return(t);
        }
        t = map_1(t, h_2);
        {
          t = concat_0(t);
          {
            c_62 = t;
            if(((z_61 != NULL) && (z_61 != c_62)))
              _fail(c_62);
            else
              z_61 = c_62;
          }
        }
      }
      t = d_19;
      {
        ATerm e_62 = NULL;
        t = term_s_15;
        {
          t = i_74(t);
          {
            e_62 = t;
            if(((d_62 != NULL) && (d_62 != e_62)))
              _fail(e_62);
            else
              d_62 = e_62;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(z_61)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(d_62)), not_null(x_61)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm p_62 = NULL,q_62 = NULL,r_62 = NULL,s_62 = NULL,t_62 = NULL;
  ATerm f_19 = t;
  int g_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_62 = NULL,v_62 = NULL,w_62 = NULL,x_62 = NULL,y_62 = NULL;
      u_62 = t;
      o_62 :
      if(match_cons(u_62, sym_prod_3))
        {
          v_62 = ATgetArgument(u_62, 0);
          w_62 = ATgetArgument(u_62, 1);
          x_62 = ATgetArgument(u_62, 2);
          {
            if(((r_62 != NULL) && (r_62 != v_62)))
              _fail(v_62);
            else
              r_62 = v_62;
            {
              if(((s_62 != NULL) && (s_62 != w_62)))
                _fail(w_62);
              else
                s_62 = w_62;
              {
                if(((t_62 != NULL) && (t_62 != x_62)))
                  _fail(x_62);
                else
                  t_62 = x_62;
                {
                  t = not_null(t_62);
                  {
                    ATerm j_2 (ATerm t)
                    {
                      ATerm z_62 = NULL,a_63 = NULL;
                      z_62 = t;
                      m_62 :
                      if(match_cons(z_62, sym_cons_1))
                        {
                          a_63 = ATgetArgument(z_62, 0);
                          if(((p_62 != NULL) && (p_62 != a_63)))
                            _fail(a_63);
                          else
                            p_62 = a_63;
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = oncetd_1(t, j_2);
                  }
                  {
                    t = not_null(r_62);
                    {
                      ATerm k_2 (ATerm t)
                      {
                        t = not_null(p_62);
                        return(t);
                      }
                      t = symbols2pp_entries_1(t, k_2);
                    }
                  }
                }
              }
            }
          }
        }
      else
        {
          if(match_cons(u_62, sym_prod_fun_4))
            {
              v_62 = ATgetArgument(u_62, 0);
              w_62 = ATgetArgument(u_62, 1);
              x_62 = ATgetArgument(u_62, 2);
              y_62 = ATgetArgument(u_62, 3);
              {
                ATerm b_63 = NULL;
                if(((q_62 != NULL) && (q_62 != v_62)))
                  _fail(v_62);
                else
                  q_62 = v_62;
                {
                  if(((r_62 != NULL) && (r_62 != w_62)))
                    _fail(w_62);
                  else
                    r_62 = w_62;
                  {
                    if(((s_62 != NULL) && (s_62 != x_62)))
                      _fail(x_62);
                    else
                      s_62 = x_62;
                    {
                      if(((t_62 != NULL) && (t_62 != y_62)))
                        _fail(y_62);
                      else
                        t_62 = y_62;
                      {
                        ATerm c_63 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_19)), not_null(r_62)), (ATerm) ATinsert(ATinsert(ATempty, term_i_19), (ATerm) ATmakeAppl(sym_lit_1, not_null(q_62))));
                        {
                          t = concat_0(t);
                          {
                            c_63 = t;
                            if(((b_63 != NULL) && (b_63 != c_63)))
                              _fail(c_63);
                            else
                              b_63 = c_63;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(b_63), not_null(s_62), not_null(t_62));
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
      LocalPopChoice(g_19);
    }
  else
    {
      t = f_19;
      {
        ATerm l_2 (ATerm t)
        {
          ATerm l_19 = t;
          if((PushChoice() == 0))
            {
              ATerm m_2 (ATerm t)
              {
                t = term_m_19;
                return(t);
              }
              t = has_option_1(t, m_2);
              PopChoice();
              _fail(t);
            }
          else
            t = l_19;
          {
            ATerm n_2 (ATerm t)
            {
              t = term_n_19;
              return(t);
            }
            t = debug_1(t, n_2);
          }
          return(t);
        }
        t = try_1(t, l_2);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm k_63 = NULL,l_63 = NULL,m_63 = NULL;
  k_63 = t;
  j_63 :
  if(match_cons(k_63, sym_lit_1))
    {
      l_63 = ATgetArgument(k_63, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_o_19, (ATerm) ATmakeAppl(sym_S_1, not_null(l_63)));
    }
  else
    {
      if(match_cons(k_63, sym__2))
        {
          l_63 = ATgetArgument(k_63, 0);
          m_63 = ATgetArgument(k_63, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(l_63));
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm pair_0 (ATerm t)
{
  ATerm p_19 = t;
  int r_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_19);
    }
  else
    {
      t = p_19;
      {
        ATerm v_63 = NULL,w_63 = NULL,x_63 = NULL,y_63 = NULL,z_63 = NULL;
        v_63 = t;
        t_63 :
        if(((ATgetType(v_63) == AT_LIST) && ((ATermList) v_63 != ATempty)))
          {
            w_63 = ATgetFirst((ATermList) v_63);
            x_63 = (ATerm) ATgetNext((ATermList) v_63);
            u_63 :
            if(((ATgetType(x_63) == AT_LIST) && ((ATermList) x_63 != ATempty)))
              {
                y_63 = ATgetFirst((ATermList) x_63);
                z_63 = (ATerm) ATgetNext((ATermList) x_63);
                {
                  ATerm d_64 = NULL;
                  ATerm e_64 = NULL;
                  t = not_null(z_63);
                  {
                    t = pair_0(t);
                    {
                      e_64 = t;
                      if(((d_64 != NULL) && (d_64 != e_64)))
                        _fail(e_64);
                      else
                        d_64 = e_64;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(d_64)), (ATerm) ATmakeAppl(sym__2, not_null(w_63), not_null(y_63)));
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
ATerm make_0 (ATerm t)
{
  ATerm q_64 = NULL,r_64 = NULL,s_64 = NULL,t_64 = NULL,u_64 = NULL;
  ATerm s_19 = t;
  int t_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_64 = NULL,w_64 = NULL,x_64 = NULL;
      t = reverse_0(t);
      {
        ATerm o_2 (ATerm t)
        {
          ATerm q_2 (ATerm t)
          {
            ATerm u_19 = t;
            int v_19 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                LocalPopChoice(v_19);
              }
            else
              {
                t = u_19;
                {
                  ATerm w_19 = t;
                  int x_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
                      LocalPopChoice(x_19);
                    }
                  else
                    {
                      t = w_19;
                      {
                        ATerm y_19 = t;
                        int z_19 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            LocalPopChoice(z_19);
                          }
                        else
                          {
                            t = y_19;
                            t = iter_star_sep_2(t, _id, _id);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2(t, _id, q_2);
          t = Make_0(t);
          return(t);
        }
        ATerm p_2 (ATerm t)
        {
          ATerm r_2 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, r_2);
          return(t);
        }
        t = Cons_2(t, o_2, p_2);
        {
          v_64 = t;
          k_64 :
          if(((ATgetType(v_64) == AT_LIST) && ((ATermList) v_64 != ATempty)))
            {
              w_64 = ATgetFirst((ATermList) v_64);
              x_64 = (ATerm) ATgetNext((ATermList) v_64);
              {
                ATerm y_64 = NULL;
                if(((r_64 != NULL) && (r_64 != w_64)))
                  _fail(w_64);
                else
                  r_64 = w_64;
                {
                  if(((q_64 != NULL) && (q_64 != x_64)))
                    _fail(x_64);
                  else
                    q_64 = x_64;
                  {
                    ATerm a_20 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      t = a_20;
                    {
                      ATerm z_64 = NULL;
                      t = not_null(q_64);
                      {
                        t = reverse_0(t);
                        {
                          z_64 = t;
                          if(((y_64 != NULL) && (y_64 != z_64)))
                            _fail(z_64);
                          else
                            y_64 = z_64;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(r_64)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(y_64))));
                    }
                  }
                }
              }
            }
          else
            _fail(t);
        }
      }
      LocalPopChoice(t_19);
    }
  else
    {
      t = s_19;
      {
        ATerm b_20 = t;
        int c_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_65 = NULL;
            t = reverse_0(t);
            {
              ATerm s_2 (ATerm t)
              {
                ATerm a_65 = NULL;
                t = Make_0(t);
                {
                  a_65 = t;
                  if(((u_64 != NULL) && (u_64 != a_65)))
                    _fail(a_65);
                  else
                    u_64 = a_65;
                }
                return(t);
              }
              ATerm t_2 (ATerm t)
              {
                ATerm b_65 = NULL;
                ATerm m_20 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  t = m_20;
                {
                  t = reverse_0(t);
                  {
                    b_65 = t;
                    if(((s_64 != NULL) && (s_64 != b_65)))
                      _fail(b_65);
                    else
                      s_64 = b_65;
                  }
                }
                return(t);
              }
              t = Cons_2(t, s_2, t_2);
              {
                t = not_null(s_64);
                {
                  t = pair_0(t);
                  {
                    ATerm u_2 (ATerm t)
                    {
                      ATerm c_65 = NULL,d_65 = NULL;
                      ATerm v_2 (ATerm t)
                      {
                        ATerm e_65 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            e_65 = t;
                            if(((c_65 != NULL) && (c_65 != e_65)))
                              _fail(e_65);
                            else
                              c_65 = e_65;
                          }
                        }
                        return(t);
                      }
                      ATerm w_2 (ATerm t)
                      {
                        ATerm f_65 = NULL;
                        ATerm x_2 (ATerm t)
                        {
                          ATerm n_20 = t;
                          int o_20 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              LocalPopChoice(o_20);
                            }
                          else
                            {
                              t = n_20;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, x_2);
                        {
                          t = Make_0(t);
                          {
                            f_65 = t;
                            if(((d_65 != NULL) && (d_65 != f_65)))
                              _fail(f_65);
                            else
                              d_65 = f_65;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, v_2, w_2);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_r_20), (ATerm) ATinsert(ATinsert(ATempty, not_null(d_65)), not_null(c_65)));
                      return(t);
                    }
                    t = map_1(t, u_2);
                    {
                      g_65 = t;
                      {
                        if(((t_64 != NULL) && (t_64 != g_65)))
                          _fail(g_65);
                        else
                          t_64 = g_65;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(u_64)), not_null(t_64)));
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(c_20);
          }
        else
          {
            t = b_20;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm s_20 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    t = s_20;
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm q_65 = NULL,r_65 = NULL,s_65 = NULL;
  q_65 = t;
  p_65 :
  if(match_cons(q_65, sym__2))
    {
      r_65 = ATgetArgument(q_65, 0);
      s_65 = ATgetArgument(q_65, 1);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(r_65), not_null(s_65));
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            t = SSL_addr(not_null(r_65), not_null(s_65));
          }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm number_1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm y_2 (ATerm t)
  {
    t = term_i_17;
    return(t);
  }
  t = split_2(t, y_2, _id);
  {
    ATerm t_66 (ATerm t)
    {
      ATerm d_66 = NULL,e_66 = NULL,g_66 = NULL;
      ATerm v_20 = t;
      int w_20 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          LocalPopChoice(w_20);
        }
      else
        {
          t = v_20;
          {
            ATerm i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL,m_66 = NULL;
            i_66 = t;
            b_66 :
            if(match_cons(i_66, sym__2))
              {
                j_66 = ATgetArgument(i_66, 0);
                k_66 = ATgetArgument(i_66, 1);
                c_66 :
                if(((ATgetType(k_66) == AT_LIST) && ((ATermList) k_66 != ATempty)))
                  {
                    l_66 = ATgetFirst((ATermList) k_66);
                    m_66 = (ATerm) ATgetNext((ATermList) k_66);
                    {
                      ATerm x_20 = t;
                      int y_20 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_66 = NULL;
                          if(((d_66 != NULL) && (d_66 != j_66)))
                            _fail(j_66);
                          else
                            d_66 = j_66;
                          {
                            if(((e_66 != NULL) && (e_66 != l_66)))
                              _fail(l_66);
                            else
                              e_66 = l_66;
                            {
                              if(((g_66 != NULL) && (g_66 != m_66)))
                                _fail(m_66);
                              else
                                g_66 = m_66;
                              {
                                t = not_null(e_66);
                                {
                                  t = m_74(t);
                                  {
                                    ATerm o_66 = NULL,q_66 = NULL;
                                    ATerm p_66 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_66), term_i_17);
                                    {
                                      t = add_0(t);
                                      {
                                        p_66 = t;
                                        if(((o_66 != NULL) && (o_66 != p_66)))
                                          _fail(p_66);
                                        else
                                          o_66 = p_66;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(o_66), not_null(g_66));
                                      {
                                        t = t_66(t);
                                        {
                                          q_66 = t;
                                          if(((n_66 != NULL) && (n_66 != q_66)))
                                            _fail(q_66);
                                          else
                                            n_66 = q_66;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(n_66)), (ATerm) ATmakeAppl(sym__2, not_null(d_66), not_null(e_66)));
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(y_20);
                        }
                      else
                        {
                          t = x_20;
                          {
                            ATerm r_66 = NULL;
                            if(((d_66 != NULL) && (d_66 != j_66)))
                              _fail(j_66);
                            else
                              d_66 = j_66;
                            {
                              if(((e_66 != NULL) && (e_66 != l_66)))
                                _fail(l_66);
                              else
                                e_66 = l_66;
                              {
                                if(((g_66 != NULL) && (g_66 != m_66)))
                                  _fail(m_66);
                                else
                                  g_66 = m_66;
                                {
                                  ATerm s_66 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(d_66), not_null(g_66));
                                  {
                                    t = t_66(t);
                                    {
                                      s_66 = t;
                                      if(((r_66 != NULL) && (r_66 != s_66)))
                                        _fail(s_66);
                                      else
                                        r_66 = s_66;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(r_66)), not_null(e_66));
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
    t = t_66(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm z_2 (ATerm t)
  {
    ATerm a_3 (ATerm t)
    {
      ATerm b_67 = NULL,c_67 = NULL,d_67 = NULL;
      b_67 = t;
      a_67 :
      if(match_cons(b_67, sym_label_2))
        {
          c_67 = ATgetArgument(b_67, 0);
          d_67 = ATgetArgument(b_67, 1);
          t = not_null(d_67);
        }
      else
        _fail(t);
      return(t);
    }
    t = try_1(t, a_3);
    return(t);
  }
  t = map_1(t, z_2);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_1(t, NonTerminal_0);
  return(t);
}
ATerm argument_list_0 (ATerm t)
{
  ATerm b_3 (ATerm t)
  {
    ATerm c_3 (ATerm t)
    {
      ATerm i_67 = NULL;
      i_67 = t;
      {
        ATerm z_20 = t;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          t = z_20;
        t = (ATerm) ATinsert(ATempty, not_null(i_67));
      }
      return(t);
    }
    t = try_1(t, c_3);
    return(t);
  }
  t = map_1(t, b_3);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm w_0 (ATerm))
{
  ATerm q_67 = NULL,r_67 = NULL;
  q_67 = t;
  p_67 :
  if(match_cons(q_67, sym_Arg_1))
    {
      r_67 = ATgetArgument(q_67, 0);
      {
        ATerm a_21 = t;
        int b_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_67 = NULL;
            t = not_null(r_67);
            {
              t = w_0(t);
              {
                t_67 = t;
                t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(t_67));
              }
            }
            LocalPopChoice(b_21);
          }
        else
          {
            t = a_21;
            {
              ATerm w_67 = NULL;
              t = not_null(r_67);
              {
                t = w_0(t);
                {
                  w_67 = t;
                  t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(w_67));
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
ATerm mkterm_0 (ATerm t)
{
  ATerm g_68 = NULL,h_68 = NULL,i_68 = NULL;
  g_68 = t;
  f_68 :
  if(match_cons(g_68, sym__2))
    {
      h_68 = ATgetArgument(g_68, 0);
      i_68 = ATgetArgument(g_68, 1);
      t = SSL_mkterm(not_null(h_68), not_null(i_68));
    }
  else
    _fail(t);
  return(t);
}
ATerm flat_alt_0 (ATerm t)
{
  ATerm r_68 = NULL,s_68 = NULL,t_68 = NULL,u_68 = NULL,v_68 = NULL;
  ATerm g_69 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_68)), not_null(u_68));
    return(t);
  }
  t_68 = t;
  p_68 :
  if(match_cons(t_68, sym_alt_2))
    {
      u_68 = ATgetArgument(t_68, 0);
      v_68 = ATgetArgument(t_68, 1);
      q_68 :
      if(match_cons(v_68, sym_alt_2))
        {
          r_68 = ATgetArgument(v_68, 0);
          s_68 = ATgetArgument(v_68, 1);
          {
            ATerm c_21 = t;
            int d_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm z_68 = NULL;
                ATerm a_69 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(r_68), not_null(s_68));
                {
                  t = flat_alt_0(t);
                  {
                    a_69 = t;
                    if(((z_68 != NULL) && (z_68 != a_69)))
                      _fail(a_69);
                    else
                      z_68 = a_69;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(z_68)), not_null(u_68));
                LocalPopChoice(d_21);
              }
            else
              {
                t = c_21;
                t = g_69(t);
              }
          }
        }
      else
        t = g_69(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm j_74 (ATerm))
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL;
  ATerm d_3 (ATerm t)
  {
    t = term_s_15;
    t = j_74(t);
    return(t);
  }
  t = split_2(t, d_3, _id);
  {
    ATerm d_72 (ATerm t)
    {
      ATerm l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL;
      ATerm f_72 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm g_72 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm h_72 (ATerm t)
      {
        ATerm w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL;
        if(((i_70 != NULL) && (i_70 != r_70)))
          _fail(r_70);
        else
          i_70 = r_70;
        {
          if(((j_70 != NULL) && (j_70 != s_70)))
            _fail(s_70);
          else
            j_70 = s_70;
          {
            if(((k_70 != NULL) && (k_70 != u_70)))
              _fail(u_70);
            else
              k_70 = u_70;
            {
              if(((w_70 != NULL) && (w_70 != o_70)))
                _fail(o_70);
              else
                w_70 = o_70;
              {
                if(((x_70 != NULL) && (x_70 != m_70)))
                  _fail(m_70);
                else
                  x_70 = m_70;
                {
                  if(((y_70 != NULL) && (y_70 != n_70)))
                    _fail(n_70);
                  else
                    y_70 = n_70;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(w_70), (ATerm) ATmakeAppl(sym_alt_2, not_null(x_70), not_null(y_70)));
                    {
                      ATerm b_71 = NULL;
                      t = flat_alt_0(t);
                      {
                        z_70 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_e_21, not_null(z_70));
                          {
                            t = mkterm_0(t);
                            {
                              b_71 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_70), not_null(j_70)), (ATerm) ATmakeAppl(sym__2, not_null(k_70), not_null(b_71)));
                                {
                                  t = d_72(t);
                                  {
                                    ATerm e_3 (ATerm t)
                                    {
                                      ATerm f_3 (ATerm t)
                                      {
                                        ATerm g_3 (ATerm t)
                                        {
                                          t = Arg_1(t, _id);
                                          t = term_f_21;
                                          return(t);
                                        }
                                        t = try_1(t, g_3);
                                        return(t);
                                      }
                                      t = topdown_1(t, f_3);
                                      return(t);
                                    }
                                    t = Cons_2(t, e_3, _id);
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
      ATerm i_72 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_70), not_null(s_70)), (ATerm) ATmakeAppl(sym__2, not_null(u_70), not_null(o_70)));
        t = d_72(t);
        return(t);
      }
      ATerm j_72 (ATerm t)
      {
        ATerm l_71 = NULL,m_71 = NULL,s_71 = NULL;
        ATerm n_71 = NULL;
        ATerm p_71 = NULL,q_71 = NULL,r_71 = NULL;
        t = not_null(v_70);
        {
          n_71 = t;
          {
            t = SSL_explode_term(not_null(n_71));
            {
              p_71 = t;
              s_69 :
              if(match_cons(p_71, sym__2))
                {
                  q_71 = ATgetArgument(p_71, 0);
                  r_71 = ATgetArgument(p_71, 1);
                  {
                    if(((l_71 != NULL) && (l_71 != q_71)))
                      _fail(q_71);
                    else
                      l_71 = q_71;
                    if(((m_71 != NULL) && (m_71 != r_71)))
                      _fail(r_71);
                    else
                      m_71 = r_71;
                  }
                }
              else
                _fail(t);
            }
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_70), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(u_70), not_null(l_71))));
          {
            ATerm u_71 = NULL,b_72 = NULL;
            t = conc_0(t);
            {
              s_71 = t;
              {
                t = not_null(m_71);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm g_21;
                      g_21 = t;
                      {
                        ATerm v_71 = NULL;
                        t = make_0(t);
                        {
                          v_71 = t;
                          if(((u_71 != NULL) && (u_71 != v_71)))
                            _fail(v_71);
                          else
                            u_71 = v_71;
                        }
                      }
                      t = g_21;
                      {
                        ATerm h_3 (ATerm t)
                        {
                          ATerm w_71 = NULL;
                          ATerm y_71 = NULL;
                          w_71 = t;
                          {
                            ATerm z_71 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_70), not_null(s_71)), not_null(w_71));
                            {
                              t = d_72(t);
                              {
                                z_71 = t;
                                if(((y_71 != NULL) && (y_71 != z_71)))
                                  _fail(z_71);
                                else
                                  y_71 = z_71;
                              }
                            }
                            t = not_null(y_71);
                          }
                          return(t);
                        }
                        t = map_1(t, h_3);
                        {
                          t = concat_0(t);
                          {
                            b_72 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(b_72)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(r_70), not_null(s_71)), not_null(u_71)));
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
      p_70 = t;
      y_69 :
      if(match_cons(p_70, sym__2))
        {
          q_70 = ATgetArgument(p_70, 0);
          t_70 = ATgetArgument(p_70, 1);
          z_69 :
          if(match_cons(t_70, sym_lit_1))
            {
              u_70 = ATgetArgument(t_70, 0);
              a_70 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(t_70, sym__2))
                {
                  u_70 = ATgetArgument(t_70, 0);
                  v_70 = ATgetArgument(t_70, 1);
                  b_70 :
                  if(match_cons(v_70, sym_sort_1))
                    {
                      o_70 = ATgetArgument(v_70, 0);
                      c_70 :
                      if(match_cons(q_70, sym__2))
                        {
                          r_70 = ATgetArgument(q_70, 0);
                          s_70 = ATgetArgument(q_70, 1);
                          {
                            ATerm h_21 = t;
                            int i_21 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = f_72(t);
                                LocalPopChoice(i_21);
                              }
                            else
                              {
                                t = h_21;
                                t = j_72(t);
                              }
                          }
                        }
                      else
                        t = f_72(t);
                    }
                  else
                    {
                      if(match_cons(v_70, sym_char_class_1))
                        {
                          o_70 = ATgetArgument(v_70, 0);
                          d_70 :
                          if(match_cons(q_70, sym__2))
                            {
                              r_70 = ATgetArgument(q_70, 0);
                              s_70 = ATgetArgument(q_70, 1);
                              {
                                ATerm j_21 = t;
                                int k_21 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = g_72(t);
                                    LocalPopChoice(k_21);
                                  }
                                else
                                  {
                                    t = j_21;
                                    t = j_72(t);
                                  }
                              }
                            }
                          else
                            t = g_72(t);
                        }
                      else
                        {
                          if(match_cons(v_70, sym_alt_2))
                            {
                              o_70 = ATgetArgument(v_70, 0);
                              l_70 = ATgetArgument(v_70, 1);
                              e_70 :
                              if(match_cons(q_70, sym__2))
                                {
                                  r_70 = ATgetArgument(q_70, 0);
                                  s_70 = ATgetArgument(q_70, 1);
                                  f_70 :
                                  if(match_cons(l_70, sym_alt_2))
                                    {
                                      m_70 = ATgetArgument(l_70, 0);
                                      n_70 = ATgetArgument(l_70, 1);
                                      {
                                        ATerm l_21 = t;
                                        int m_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = h_72(t);
                                            LocalPopChoice(m_21);
                                          }
                                        else
                                          {
                                            t = l_21;
                                            t = j_72(t);
                                          }
                                      }
                                    }
                                  else
                                    t = j_72(t);
                                }
                              else
                                _fail(t);
                            }
                          else
                            {
                              if(match_cons(v_70, sym_bracket_symbol_1))
                                {
                                  o_70 = ATgetArgument(v_70, 0);
                                  g_70 :
                                  if(match_cons(q_70, sym__2))
                                    {
                                      r_70 = ATgetArgument(q_70, 0);
                                      s_70 = ATgetArgument(q_70, 1);
                                      {
                                        ATerm n_21 = t;
                                        int o_21 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = i_72(t);
                                            LocalPopChoice(o_21);
                                          }
                                        else
                                          {
                                            t = n_21;
                                            t = j_72(t);
                                          }
                                      }
                                    }
                                  else
                                    _fail(t);
                                }
                              else
                                {
                                  h_70 :
                                  if(match_cons(q_70, sym__2))
                                    {
                                      r_70 = ATgetArgument(q_70, 0);
                                      s_70 = ATgetArgument(q_70, 1);
                                      t = j_72(t);
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
    t = d_72(t);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm k_73 = NULL;
  ATerm r_73 = NULL,s_73 = NULL;
  k_73 = t;
  {
    ATerm t_73 = NULL;
    ATerm v_73 = NULL,w_73 = NULL,x_73 = NULL,z_73 = NULL,a_74 = NULL;
    t = not_null(k_73);
    {
      t_73 = t;
      {
        t = SSL_explode_term(not_null(t_73));
        {
          v_73 = t;
          a_73 :
          if(match_cons(v_73, sym__2))
            {
              w_73 = ATgetArgument(v_73, 0);
              x_73 = ATgetArgument(v_73, 1);
              d_73 :
              if(match_string(w_73, ""))
                {
                  j_73 :
                  if(((ATgetType(x_73) == AT_LIST) && ((ATermList) x_73 != ATempty)))
                    {
                      z_73 = ATgetFirst((ATermList) x_73);
                      a_74 = (ATerm) ATgetNext((ATermList) x_73);
                      {
                        if(((s_73 != NULL) && (s_73 != z_73)))
                          _fail(z_73);
                        else
                          s_73 = z_73;
                        if(((r_73 != NULL) && (r_73 != a_74)))
                          _fail(a_74);
                        else
                          r_73 = a_74;
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
    t = not_null(s_73);
  }
  return(t);
}
ATerm get_pp_entry_0 (ATerm t)
{
  ATerm y_74 = NULL,z_74 = NULL,a_75 = NULL,b_75 = NULL,c_75 = NULL,d_75 = NULL;
  ATerm y_75 (ATerm t)
  {
    ATerm g_75 = NULL,h_75 = NULL,i_75 = NULL;
    ATerm p_21 = t;
    int q_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = not_null(d_75);
        {
          t = pp_table_get_0(t);
          t = Snd_0(t);
        }
        LocalPopChoice(q_21);
      }
    else
      {
        t = p_21;
        {
          ATerm t_75 = NULL;
          t = not_null(d_75);
          {
            t = reverse_0(t);
            {
              ATerm i_3 (ATerm t)
              {
                ATerm j_75 = NULL;
                j_75 = t;
                if(((i_75 != NULL) && (i_75 != j_75)))
                  _fail(j_75);
                else
                  i_75 = j_75;
                return(t);
              }
              ATerm j_3 (ATerm t)
              {
                ATerm k_75 = NULL;
                t = reverse_0(t);
                {
                  k_75 = t;
                  if(((g_75 != NULL) && (g_75 != k_75)))
                    _fail(k_75);
                  else
                    g_75 = k_75;
                }
                return(t);
              }
              t = Cons_2(t, i_3, j_3);
              {
                t = not_null(g_75);
                {
                  t = pp_table_get_0(t);
                  {
                    t = Fst_0(t);
                    {
                      ATerm l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL,p_75 = NULL;
                      o_75 = t;
                      s_74 :
                      if(match_cons(o_75, sym_Path_2))
                        {
                          p_75 = ATgetArgument(o_75, 0);
                          l_75 = ATgetArgument(o_75, 1);
                          t_74 :
                          if(((ATgetType(l_75) == AT_LIST) && ((ATermList) l_75 != ATempty)))
                            {
                              m_75 = ATgetFirst((ATermList) l_75);
                              n_75 = (ATerm) ATgetNext((ATermList) l_75);
                              u_74 :
                              if(((ATermList) n_75 == ATempty))
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_75), (ATerm) ATinsert(ATempty, not_null(m_75)));
                                }
                              else
                                _fail(t);
                            }
                          else
                            _fail(t);
                        }
                      else
                        {
                          if(match_cons(o_75, sym_Path1_1))
                            {
                              p_75 = ATgetArgument(o_75, 0);
                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_75), (ATerm) ATempty);
                            }
                          else
                            _fail(t);
                        }
                      {
                        t_75 = t;
                        {
                          if(((h_75 != NULL) && (h_75 != t_75)))
                            _fail(t_75);
                          else
                            h_75 = t_75;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(i_75), not_null(z_74));
                            {
                              ATerm k_3 (ATerm t)
                              {
                                t = not_null(h_75);
                                return(t);
                              }
                              t = symbol2abox_1(t, k_3);
                              {
                                t = map_1(t, StoreEntryIfNotExists_0);
                                {
                                  t = not_null(d_75);
                                  {
                                    t = pp_table_get_0(t);
                                    t = Snd_0(t);
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
      }
    return(t);
  }
  ATerm z_75 (ATerm t)
  {
    ATerm r_21 = t;
    int s_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = not_null(d_75);
        {
          t = pp_table_get_0(t);
          t = Snd_0(t);
        }
        LocalPopChoice(s_21);
      }
    else
      {
        t = r_21;
        {
          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(a_75), not_null(b_75), not_null(c_75));
          {
            t = generate_pp_entries_0(t);
            t = map_1(t, StoreEntryIfNotExists_0);
          }
          {
            t = not_null(d_75);
            {
              t = pp_table_get_0(t);
              t = Snd_0(t);
            }
          }
        }
      }
    return(t);
  }
  y_74 = t;
  w_74 :
  if(match_cons(y_74, sym__2))
    {
      z_74 = ATgetArgument(y_74, 0);
      d_75 = ATgetArgument(y_74, 1);
      x_74 :
      if(match_cons(z_74, sym_prod_3))
        {
          a_75 = ATgetArgument(z_74, 0);
          b_75 = ATgetArgument(z_74, 1);
          c_75 = ATgetArgument(z_74, 2);
          {
            ATerm t_21 = t;
            int u_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = y_75(t);
                LocalPopChoice(u_21);
              }
            else
              {
                t = t_21;
                t = z_75(t);
              }
          }
        }
      else
        t = y_75(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm prod_3 (ATerm t, ATerm t_0 (ATerm), ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm o_76 = NULL,p_76 = NULL,q_76 = NULL,r_76 = NULL;
  o_76 = t;
  n_76 :
  if(match_cons(o_76, sym_prod_3))
    {
      p_76 = ATgetArgument(o_76, 0);
      q_76 = ATgetArgument(o_76, 1);
      r_76 = ATgetArgument(o_76, 2);
      {
        ATerm v_21 = t;
        int w_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_76 = NULL;
            t = not_null(p_76);
            {
              ATerm x_76 = NULL;
              t = t_0(t);
              {
                v_76 = t;
                {
                  t = not_null(q_76);
                  {
                    ATerm z_76 = NULL;
                    t = u_0(t);
                    {
                      x_76 = t;
                      {
                        t = not_null(r_76);
                        {
                          t = v_0(t);
                          {
                            z_76 = t;
                            t = (ATerm) ATmakeAppl(sym_prod_3, not_null(v_76), not_null(x_76), not_null(z_76));
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(w_21);
          }
        else
          {
            t = v_21;
            {
              ATerm e_77 = NULL;
              t = not_null(p_76);
              {
                ATerm g_77 = NULL;
                t = t_0(t);
                {
                  e_77 = t;
                  {
                    t = not_null(q_76);
                    {
                      ATerm i_77 = NULL;
                      t = u_0(t);
                      {
                        g_77 = t;
                        {
                          t = not_null(r_76);
                          {
                            t = v_0(t);
                            {
                              i_77 = t;
                              t = (ATerm) ATmakeAppl(sym_prod_3, not_null(e_77), not_null(g_77), not_null(i_77));
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
  else
    _fail(t);
  return(t);
}
ATerm uq2q_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm x_21;
    x_21 = t;
    {
      ATerm y_21 = t;
      if((PushChoice() == 0))
        {
          ATerm c_78 = NULL;
          t = Hd_0(t);
          {
            c_78 = t;
            s_77 :
            if(!(match_int(c_78, 34)))
              _fail(t);
          }
          PopChoice();
          _fail(t);
        }
      else
        t = y_21;
    }
    t = x_21;
    {
      ATerm z_21;
      z_21 = t;
      {
        ATerm a_22 = t;
        if((PushChoice() == 0))
          {
            ATerm l_3 (ATerm t)
            {
              ATerm d_78 = NULL,e_78 = NULL,h_78 = NULL;
              d_78 = t;
              t_77 :
              if(((ATgetType(d_78) == AT_LIST) && ((ATermList) d_78 != ATempty)))
                {
                  e_78 = ATgetFirst((ATermList) d_78);
                  h_78 = (ATerm) ATgetNext((ATermList) d_78);
                  u_77 :
                  if(match_int(e_78, 34))
                    {
                      v_77 :
                      if(((ATermList) h_78 == ATempty))
                        {
                          {
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
              return(t);
            }
            t = at_last_1(t, l_3);
            PopChoice();
            _fail(t);
          }
        else
          t = a_22;
      }
      t = z_21;
      {
        t = Quote_0(t);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm cons_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm n_78 = NULL,o_78 = NULL;
  n_78 = t;
  m_78 :
  if(match_cons(n_78, sym_cons_1))
    {
      o_78 = ATgetArgument(n_78, 0);
      {
        ATerm g_22 = t;
        int h_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_78 = NULL;
            t = not_null(o_78);
            {
              t = s_0(t);
              {
                q_78 = t;
                t = (ATerm) ATmakeAppl(sym_cons_1, not_null(q_78));
              }
            }
            LocalPopChoice(h_22);
          }
        else
          {
            t = g_22;
            {
              ATerm t_78 = NULL;
              t = not_null(o_78);
              {
                t = s_0(t);
                {
                  t_78 = t;
                  t = (ATerm) ATmakeAppl(sym_cons_1, not_null(t_78));
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
ATerm at_cons_1 (ATerm t, ATerm e_73 (ATerm))
{
  ATerm m_3 (ATerm t)
  {
    t = cons_1(t, e_73);
    return(t);
  }
  t = oncetd_1(t, m_3);
  return(t);
}
ATerm get_constr_0 (ATerm t)
{
  ATerm m_79 = NULL,o_79 = NULL,p_79 = NULL,s_79 = NULL,t_79 = NULL;
  o_79 = t;
  l_79 :
  if(match_cons(o_79, sym_prod_fun_4))
    {
      p_79 = ATgetArgument(o_79, 0);
      s_79 = ATgetArgument(o_79, 1);
      t_79 = ATgetArgument(o_79, 2);
      m_79 = ATgetArgument(o_79, 3);
      {
        ATerm y_79 = NULL;
        t = not_null(m_79);
        {
          ATerm n_3 (ATerm t)
          {
            ATerm z_79 = NULL,a_80 = NULL;
            z_79 = t;
            i_79 :
            if(match_cons(z_79, sym_cons_1))
              {
                a_80 = ATgetArgument(z_79, 0);
                if(((y_79 != NULL) && (y_79 != a_80)))
                  _fail(a_80);
                else
                  y_79 = a_80;
              }
            else
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, n_3);
        }
        t = not_null(y_79);
      }
    }
  else
    {
      if(match_cons(o_79, sym_prod_3))
        {
          p_79 = ATgetArgument(o_79, 0);
          s_79 = ATgetArgument(o_79, 1);
          t_79 = ATgetArgument(o_79, 2);
          {
            ATerm e_80 = NULL;
            t = not_null(t_79);
            {
              ATerm o_3 (ATerm t)
              {
                ATerm f_80 = NULL,g_80 = NULL;
                f_80 = t;
                k_79 :
                if(match_cons(f_80, sym_cons_1))
                  {
                    g_80 = ATgetArgument(f_80, 0);
                    if(((e_80 != NULL) && (e_80 != g_80)))
                      _fail(g_80);
                    else
                      e_80 = g_80;
                  }
                else
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, o_3);
            }
            t = not_null(e_80);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm add_attributes_0 (ATerm t)
{
  ATerm w_80 = NULL,x_80 = NULL,y_80 = NULL,z_80 = NULL,a_81 = NULL,b_81 = NULL,c_81 = NULL,d_81 = NULL,e_81 = NULL;
  z_80 = t;
  s_80 :
  if(match_cons(z_80, sym__2))
    {
      a_81 = ATgetArgument(z_80, 0);
      e_81 = ATgetArgument(z_80, 1);
      t_80 :
      if(match_cons(a_81, sym_prod_fun_4))
        {
          b_81 = ATgetArgument(a_81, 0);
          c_81 = ATgetArgument(a_81, 1);
          d_81 = ATgetArgument(a_81, 2);
          x_80 = ATgetArgument(a_81, 3);
          u_80 :
          if(match_cons(x_80, sym_attrs_1))
            {
              w_80 = ATgetArgument(x_80, 0);
              {
                ATerm k_81 = NULL;
                ATerm m_81 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(w_80), not_null(e_81));
                {
                  t = conc_0(t);
                  {
                    m_81 = t;
                    if(((k_81 != NULL) && (k_81 != m_81)))
                      _fail(m_81);
                    else
                      k_81 = m_81;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_prod_fun_4, not_null(b_81), not_null(c_81), not_null(d_81), (ATerm) ATmakeAppl(sym_attrs_1, not_null(k_81)));
              }
            }
          else
            {
              if(match_cons(x_80, sym_no_attrs_0))
                t = (ATerm) ATmakeAppl(sym_prod_fun_4, not_null(b_81), not_null(c_81), not_null(d_81), (ATerm) ATmakeAppl(sym_attrs_1, not_null(e_81)));
              else
                _fail(t);
            }
        }
      else
        {
          if(match_cons(a_81, sym_prod_3))
            {
              b_81 = ATgetArgument(a_81, 0);
              c_81 = ATgetArgument(a_81, 1);
              d_81 = ATgetArgument(a_81, 2);
              v_80 :
              if(match_cons(d_81, sym_attrs_1))
                {
                  y_80 = ATgetArgument(d_81, 0);
                  {
                    ATerm v_81 = NULL;
                    ATerm w_81 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(y_80), not_null(e_81));
                    {
                      t = conc_0(t);
                      {
                        w_81 = t;
                        if(((v_81 != NULL) && (v_81 != w_81)))
                          _fail(w_81);
                        else
                          v_81 = w_81;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_prod_3, not_null(b_81), not_null(c_81), (ATerm) ATmakeAppl(sym_attrs_1, not_null(v_81)));
                  }
                }
              else
                {
                  if(match_cons(d_81, sym_no_attrs_0))
                    t = (ATerm) ATmakeAppl(sym_prod_3, not_null(b_81), not_null(c_81), (ATerm) ATmakeAppl(sym_attrs_1, not_null(e_81)));
                  else
                    _fail(t);
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
ATerm Escape_0 (ATerm t)
{
  ATerm q_82 = NULL,r_82 = NULL,s_82 = NULL;
  ATerm a_83 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(s_82));
    return(t);
  }
  ATerm b_83 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, term_i_22), term_i_22);
    return(t);
  }
  ATerm d_83 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, term_j_22), term_i_22);
    return(t);
  }
  s_82 = t;
  o_82 :
  if(((ATgetType(s_82) == AT_LIST) && ((ATermList) s_82 != ATempty)))
    {
      q_82 = ATgetFirst((ATermList) s_82);
      r_82 = (ATerm) ATgetNext((ATermList) s_82);
      p_82 :
      if(match_int(q_82, 10))
        {
          ATerm k_22 = t;
          int l_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_82)), term_m_22), term_i_22);
              LocalPopChoice(l_22);
            }
          else
            {
              t = k_22;
              t = a_83(t);
            }
        }
      else
        {
          if(match_int(q_82, 92))
            {
              ATerm n_22 = t;
              int o_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_82)), term_i_22), term_i_22);
                  LocalPopChoice(o_22);
                }
              else
                {
                  t = n_22;
                  t = a_83(t);
                }
            }
          else
            {
              if(match_int(q_82, 34))
                {
                  ATerm p_22 = t;
                  int q_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(r_82)), term_j_22), term_i_22);
                      LocalPopChoice(q_22);
                    }
                  else
                    {
                      t = p_22;
                      t = a_83(t);
                    }
                }
              else
                t = a_83(t);
            }
        }
    }
  else
    {
      if(match_int(s_82, 92))
        {
          ATerm r_22 = t;
          int s_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = a_83(t);
              LocalPopChoice(s_22);
            }
          else
            {
              t = r_22;
              t = b_83(t);
            }
        }
      else
        {
          if(match_int(s_82, 34))
            {
              ATerm t_22 = t;
              int u_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_83(t);
                  LocalPopChoice(u_22);
                }
              else
                {
                  t = t_22;
                  t = d_83(t);
                }
            }
          else
            t = a_83(t);
        }
    }
  return(t);
}
ATerm escape_0 (ATerm t)
{
  ATerm v_22 = t;
  int w_22 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = explode_string_0(t);
      {
        ATerm e_83 (ATerm t)
        {
          ATerm x_22 = t;
          int y_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Escape_0(t);
              {
                ATerm p_3 (ATerm t)
                {
                  t = Cons_2(t, _id, e_83);
                  return(t);
                }
                t = Cons_2(t, _id, p_3);
              }
              LocalPopChoice(y_22);
            }
          else
            {
              t = x_22;
              {
                ATerm z_22 = t;
                int a_23 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, _id, e_83);
                    LocalPopChoice(a_23);
                  }
                else
                  {
                    t = z_22;
                    t = Nil_0(t);
                  }
              }
            }
          return(t);
        }
        t = e_83(t);
        t = implode_string_0(t);
      }
      LocalPopChoice(w_22);
    }
  else
    {
      t = v_22;
      {
        t = explode_string_0(t);
        {
          t = map_1(t, Escape_0);
          {
            t = concat_0(t);
            t = implode_string_0(t);
          }
        }
      }
    }
  return(t);
}
ATerm isAlpha_0 (ATerm t)
{
  ATerm b_23 = t;
  int c_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = isUpper_0(t);
      LocalPopChoice(c_23);
    }
  else
    {
      t = b_23;
      t = isLower_0(t);
    }
  return(t);
}
ATerm string_Hd_0 (ATerm t)
{
  t = explode_string_0(t);
  t = Hd_0(t);
  return(t);
}
ATerm strs2constr_0 (ATerm t)
{
  ATerm g_83 = NULL;
  ATerm q_3 (ATerm t)
  {
    ATerm d_23 = t;
    if((PushChoice() == 0))
      {
        t = empty_string_0(t);
        PopChoice();
        _fail(t);
      }
    else
      t = d_23;
    return(t);
  }
  t = filter_1(t, q_3);
  {
    ATerm r_3 (ATerm t)
    {
      ATerm e_23;
      e_23 = t;
      {
        t = string_Hd_0(t);
        t = isAlpha_0(t);
      }
      t = e_23;
      return(t);
    }
    t = Cons_2(t, r_3, _id);
    {
      ATerm s_3 (ATerm t)
      {
        t = term_f_23;
        return(t);
      }
      t = separate_by_1(t, s_3);
      {
        t = concat_strings_0(t);
        {
          g_83 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_83), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_s_23), term_r_23), term_q_23), term_p_23), term_o_23), term_n_23), term_m_23), term_l_23), term_k_23), term_j_23), term_i_23), term_h_23), term_g_23));
            {
              ATerm y_23 = t;
              if((PushChoice() == 0))
                {
                  t = in_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                t = y_23;
              {
                t = not_null(g_83);
                {
                  t = escape_0(t);
                  t = quote_0(t);
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
ATerm conc_0 (ATerm t)
{
  ATerm l_83 = NULL,m_83 = NULL,n_83 = NULL;
  l_83 = t;
  k_83 :
  if(match_cons(l_83, sym__2))
    {
      m_83 = ATgetArgument(l_83, 0);
      n_83 = ATgetArgument(l_83, 1);
      {
        t = not_null(m_83);
        {
          ATerm t_3 (ATerm t)
          {
            t = not_null(n_83);
            return(t);
          }
          t = at_end_1(t, t_3);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Sym2Strs_0 (ATerm t)
{
  ATerm h_85 = NULL,i_85 = NULL,j_85 = NULL,k_85 = NULL;
  i_85 = t;
  g_85 :
  if(match_cons(i_85, sym_cf_1))
    {
      j_85 = ATgetArgument(i_85, 0);
      {
        t = not_null(j_85);
        t = Sym2Strs_0(t);
      }
    }
  else
    {
      if(match_cons(i_85, sym_lex_1))
        {
          j_85 = ATgetArgument(i_85, 0);
          {
            t = not_null(j_85);
            t = Sym2Strs_0(t);
          }
        }
      else
        {
          if(match_cons(i_85, sym_empty_0))
            t = (ATerm) ATinsert(ATempty, term_z_23);
          else
            {
              if(match_cons(i_85, sym_seq_2))
                {
                  j_85 = ATgetArgument(i_85, 0);
                  k_85 = ATgetArgument(i_85, 1);
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(k_85)), not_null(j_85));
                    {
                      t = filter_1(t, Sym2Strs_0);
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(i_85, sym_opt_1))
                    {
                      j_85 = ATgetArgument(i_85, 0);
                      {
                        t = not_null(j_85);
                        {
                          t = Sym2Strs_0(t);
                          {
                            ATerm u_3 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_f_24);
                              return(t);
                            }
                            t = at_end_1(t, u_3);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_85, sym_iter_1))
                        {
                          j_85 = ATgetArgument(i_85, 0);
                          {
                            t = not_null(j_85);
                            {
                              t = Sym2Strs_0(t);
                              {
                                ATerm v_3 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_g_24);
                                  return(t);
                                }
                                t = at_end_1(t, v_3);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(i_85, sym_iter_star_1))
                            {
                              j_85 = ATgetArgument(i_85, 0);
                              {
                                t = not_null(j_85);
                                {
                                  t = Sym2Strs_0(t);
                                  {
                                    ATerm w_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_h_24);
                                      return(t);
                                    }
                                    t = at_end_1(t, w_3);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(i_85, sym_iter_sep_2))
                                {
                                  j_85 = ATgetArgument(i_85, 0);
                                  k_85 = ATgetArgument(i_85, 1);
                                  {
                                    ATerm x_85 = NULL,c_86 = NULL;
                                    ATerm i_24;
                                    i_24 = t;
                                    {
                                      ATerm y_85 = NULL;
                                      t = not_null(j_85);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          y_85 = t;
                                          if(((x_85 != NULL) && (x_85 != y_85)))
                                            _fail(y_85);
                                          else
                                            x_85 = y_85;
                                        }
                                      }
                                    }
                                    t = i_24;
                                    {
                                      ATerm d_86 = NULL;
                                      t = not_null(k_85);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          d_86 = t;
                                          if(((c_86 != NULL) && (c_86 != d_86)))
                                            _fail(d_86);
                                          else
                                            c_86 = d_86;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_24)), not_null(c_86)), not_null(x_85));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(i_85, sym_iter_star_sep_2))
                                    {
                                      j_85 = ATgetArgument(i_85, 0);
                                      k_85 = ATgetArgument(i_85, 1);
                                      {
                                        ATerm g_86 = NULL,i_86 = NULL;
                                        ATerm j_24;
                                        j_24 = t;
                                        {
                                          ATerm h_86 = NULL;
                                          t = not_null(j_85);
                                          {
                                            t = Sym2Strs_0(t);
                                            {
                                              h_86 = t;
                                              if(((g_86 != NULL) && (g_86 != h_86)))
                                                _fail(h_86);
                                              else
                                                g_86 = h_86;
                                            }
                                          }
                                        }
                                        t = j_24;
                                        {
                                          ATerm j_86 = NULL;
                                          t = not_null(k_85);
                                          {
                                            t = Sym2Strs_0(t);
                                            {
                                              j_86 = t;
                                              if(((i_86 != NULL) && (i_86 != j_86)))
                                                _fail(j_86);
                                              else
                                                i_86 = j_86;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_24)), not_null(i_86)), not_null(g_86));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(i_85, sym_iter_n_2))
                                        {
                                          j_85 = ATgetArgument(i_85, 0);
                                          k_85 = ATgetArgument(i_85, 1);
                                          {
                                            ATerm l_86 = NULL;
                                            ATerm m_86 = NULL;
                                            t = not_null(j_85);
                                            {
                                              t = Sym2Strs_0(t);
                                              {
                                                m_86 = t;
                                                if(((l_86 != NULL) && (l_86 != m_86)))
                                                  _fail(m_86);
                                                else
                                                  l_86 = m_86;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_24)), not_null(l_86));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(i_85, sym_iter_sep_n_3))
                                            {
                                              j_85 = ATgetArgument(i_85, 0);
                                              k_85 = ATgetArgument(i_85, 1);
                                              h_85 = ATgetArgument(i_85, 2);
                                              {
                                                ATerm p_86 = NULL,r_86 = NULL;
                                                ATerm l_24;
                                                l_24 = t;
                                                {
                                                  ATerm q_86 = NULL;
                                                  t = not_null(j_85);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      q_86 = t;
                                                      if(((p_86 != NULL) && (p_86 != q_86)))
                                                        _fail(q_86);
                                                      else
                                                        p_86 = q_86;
                                                    }
                                                  }
                                                }
                                                t = l_24;
                                                {
                                                  ATerm s_86 = NULL;
                                                  t = not_null(k_85);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      s_86 = t;
                                                      if(((r_86 != NULL) && (r_86 != s_86)))
                                                        _fail(s_86);
                                                      else
                                                        r_86 = s_86;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_k_24)), not_null(r_86)), not_null(p_86));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(i_85, sym_set_1))
                                                {
                                                  j_85 = ATgetArgument(i_85, 0);
                                                  {
                                                    ATerm u_86 = NULL;
                                                    ATerm v_86 = NULL;
                                                    t = not_null(j_85);
                                                    {
                                                      t = Sym2Strs_0(t);
                                                      {
                                                        v_86 = t;
                                                        if(((u_86 != NULL) && (u_86 != v_86)))
                                                          _fail(v_86);
                                                        else
                                                          u_86 = v_86;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(u_86)), (ATerm) ATinsert(ATempty, term_m_24));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(i_85, sym_pair_2))
                                                    {
                                                      j_85 = ATgetArgument(i_85, 0);
                                                      k_85 = ATgetArgument(i_85, 1);
                                                      {
                                                        ATerm y_86 = NULL,a_87 = NULL;
                                                        ATerm n_24;
                                                        n_24 = t;
                                                        {
                                                          ATerm z_86 = NULL;
                                                          t = not_null(j_85);
                                                          {
                                                            t = Sym2Strs_0(t);
                                                            {
                                                              z_86 = t;
                                                              if(((y_86 != NULL) && (y_86 != z_86)))
                                                                _fail(z_86);
                                                              else
                                                                y_86 = z_86;
                                                            }
                                                          }
                                                        }
                                                        t = n_24;
                                                        {
                                                          ATerm b_87 = NULL;
                                                          t = not_null(k_85);
                                                          {
                                                            t = Sym2Strs_0(t);
                                                            {
                                                              b_87 = t;
                                                              if(((a_87 != NULL) && (a_87 != b_87)))
                                                                _fail(b_87);
                                                              else
                                                                a_87 = b_87;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_87)), (ATerm) ATinsert(ATempty, term_o_24)), not_null(y_86));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(i_85, sym_func_2))
                                                        {
                                                          j_85 = ATgetArgument(i_85, 0);
                                                          k_85 = ATgetArgument(i_85, 1);
                                                          {
                                                            ATerm e_87 = NULL,g_87 = NULL;
                                                            ATerm p_24;
                                                            p_24 = t;
                                                            {
                                                              ATerm f_87 = NULL;
                                                              t = not_null(j_85);
                                                              {
                                                                t = filter_1(t, Sym2Strs_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    f_87 = t;
                                                                    if(((e_87 != NULL) && (e_87 != f_87)))
                                                                      _fail(f_87);
                                                                    else
                                                                      e_87 = f_87;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = p_24;
                                                            {
                                                              ATerm h_87 = NULL;
                                                              t = not_null(k_85);
                                                              {
                                                                t = Sym2Strs_0(t);
                                                                {
                                                                  h_87 = t;
                                                                  if(((g_87 != NULL) && (g_87 != h_87)))
                                                                    _fail(h_87);
                                                                  else
                                                                    g_87 = h_87;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_87)), (ATerm) ATinsert(ATempty, term_q_24)), not_null(e_87));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(i_85, sym_alt_2))
                                                            {
                                                              j_85 = ATgetArgument(i_85, 0);
                                                              k_85 = ATgetArgument(i_85, 1);
                                                              {
                                                                ATerm k_87 = NULL,m_87 = NULL;
                                                                ATerm r_24;
                                                                r_24 = t;
                                                                {
                                                                  ATerm l_87 = NULL;
                                                                  t = not_null(j_85);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      l_87 = t;
                                                                      if(((k_87 != NULL) && (k_87 != l_87)))
                                                                        _fail(l_87);
                                                                      else
                                                                        k_87 = l_87;
                                                                    }
                                                                  }
                                                                }
                                                                t = r_24;
                                                                {
                                                                  ATerm n_87 = NULL;
                                                                  t = not_null(k_85);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      n_87 = t;
                                                                      if(((m_87 != NULL) && (m_87 != n_87)))
                                                                        _fail(n_87);
                                                                      else
                                                                        m_87 = n_87;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_87)), (ATerm) ATinsert(ATempty, term_s_24)), not_null(k_87));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(i_85, sym_perm_1))
                                                                {
                                                                  j_85 = ATgetArgument(i_85, 0);
                                                                  {
                                                                    ATerm u_87 = NULL;
                                                                    ATerm v_87 = NULL;
                                                                    t = not_null(j_85);
                                                                    {
                                                                      t = filter_1(t, Sym2Strs_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          v_87 = t;
                                                                          if(((u_87 != NULL) && (u_87 != v_87)))
                                                                            _fail(v_87);
                                                                          else
                                                                            u_87 = v_87;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(u_87)), term_z_24);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(i_85, sym_sort_1))
                                                                    {
                                                                      j_85 = ATgetArgument(i_85, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(j_85));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(i_85, sym_lit_1))
                                                                        {
                                                                          j_85 = ATgetArgument(i_85, 0);
                                                                          {
                                                                            ATerm y_87 = NULL;
                                                                            ATerm z_87 = NULL;
                                                                            t = not_null(j_85);
                                                                            {
                                                                              ATerm x_3 (ATerm t)
                                                                              {
                                                                                t = de_quote_0(t);
                                                                                t = de_escape_0(t);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, x_3);
                                                                              {
                                                                                z_87 = t;
                                                                                if(((y_87 != NULL) && (y_87 != z_87)))
                                                                                  _fail(z_87);
                                                                                else
                                                                                  y_87 = z_87;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(y_87));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(i_85, sym_label_2))
                                                                            {
                                                                              j_85 = ATgetArgument(i_85, 0);
                                                                              k_85 = ATgetArgument(i_85, 1);
                                                                              {
                                                                                ATerm c_88 = NULL;
                                                                                ATerm d_88 = NULL;
                                                                                t = not_null(j_85);
                                                                                {
                                                                                  ATerm y_3 (ATerm t)
                                                                                  {
                                                                                    t = de_quote_0(t);
                                                                                    t = de_escape_0(t);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, y_3);
                                                                                  {
                                                                                    d_88 = t;
                                                                                    if(((c_88 != NULL) && (c_88 != d_88)))
                                                                                      _fail(d_88);
                                                                                    else
                                                                                      c_88 = d_88;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(c_88));
                                                                              }
                                                                            }
                                                                          else
                                                                            _fail(t);
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
                }
            }
        }
    }
  return(t);
}
ATerm sym2strs_0 (ATerm t)
{
  t = Sym2Strs_0(t);
  {
    ATerm z_3 (ATerm t)
    {
      ATerm a_25 = t;
      int b_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = toAlphaNum_0(t);
          LocalPopChoice(b_25);
        }
      else
        {
          t = a_25;
          {
          }
        }
      return(t);
    }
    t = map_1(t, z_3);
  }
  return(t);
}
ATerm syms2strs_0 (ATerm t)
{
  t = filter_1(t, sym2strs_0);
  t = concat_0(t);
  return(t);
}
ATerm new_0 (ATerm t)
{
  t = SSL_new();
  return(t);
}
ATerm empty_string_0 (ATerm t)
{
  ATerm w_89 = NULL;
  w_89 = t;
  v_89 :
  if(!(match_string(w_89, "")))
    _fail(t);
  return(t);
}
ATerm empty_test_0 (ATerm t)
{
  ATerm c_25;
  c_25 = t;
  {
    ATerm a_4 (ATerm t)
    {
      ATerm d_25 = t;
      if((PushChoice() == 0))
        {
          t = empty_string_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = d_25;
      return(t);
    }
    t = filter_1(t, a_4);
    t = Hd_0(t);
  }
  t = c_25;
  return(t);
}
ATerm isHyphen_0 (ATerm t)
{
  ATerm z_89 = NULL;
  z_89 = t;
  y_89 :
  if(match_int(z_89, 45))
    t = term_s_15;
  else
    _fail(t);
  return(t);
}
ATerm isLower_0 (ATerm t)
{
  ATerm e_90 = NULL;
  e_90 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_90), term_e_25);
    t = leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_25, not_null(e_90));
      t = leq_0(t);
    }
  }
  return(t);
}
ATerm isUpper_0 (ATerm t)
{
  ATerm i_90 = NULL;
  i_90 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_90), term_h_25);
    t = leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_25, not_null(i_90));
      t = leq_0(t);
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL;
  n_90 = t;
  m_90 :
  if(match_cons(n_90, sym__2))
    {
      o_90 = ATgetArgument(n_90, 0);
      p_90 = ATgetArgument(n_90, 1);
      {
        ATerm j_25;
        j_25 = t;
        {
          ATerm k_25 = t;
          int l_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_90), not_null(p_90));
              LocalPopChoice(l_25);
            }
          else
            {
              t = k_25;
              t = SSL_gtr(not_null(o_90), not_null(p_90));
            }
        }
        t = j_25;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm m_25 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    t = m_25;
  return(t);
}
ATerm isNum_0 (ATerm t)
{
  ATerm y_90 = NULL;
  y_90 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(y_90), term_n_25);
    t = leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_25, not_null(y_90));
      t = leq_0(t);
    }
  }
  return(t);
}
ATerm isAlphaNumHyphen_0 (ATerm t)
{
  ATerm p_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = isNum_0(t);
      LocalPopChoice(q_25);
    }
  else
    {
      t = p_25;
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = isUpper_0(t);
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            {
              ATerm t_25 = t;
              int u_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = isLower_0(t);
                  LocalPopChoice(u_25);
                }
              else
                {
                  t = t_25;
                  t = isHyphen_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm toAlphaNum_0 (ATerm t)
{
  ATerm u_92 = NULL;
  ATerm w_92 (ATerm t)
  {
    t = not_null(u_92);
    {
      t = explode_string_0(t);
      {
        ATerm v_25 = t;
        if((PushChoice() == 0))
          {
            t = map_1(t, isAlphaNumHyphen_0);
            PopChoice();
            _fail(t);
          }
        else
          t = v_25;
      }
    }
    t = term_x_13;
    return(t);
  }
  ATerm x_92 (ATerm t)
  {
    t = term_w_25;
    return(t);
  }
  ATerm y_92 (ATerm t)
  {
    t = term_x_25;
    return(t);
  }
  ATerm z_92 (ATerm t)
  {
    t = term_y_25;
    return(t);
  }
  ATerm a_93 (ATerm t)
  {
    t = term_z_25;
    return(t);
  }
  ATerm b_93 (ATerm t)
  {
    t = term_a_26;
    return(t);
  }
  ATerm c_93 (ATerm t)
  {
    t = term_b_26;
    return(t);
  }
  ATerm d_93 (ATerm t)
  {
    t = term_c_26;
    return(t);
  }
  ATerm e_93 (ATerm t)
  {
    t = term_d_26;
    return(t);
  }
  ATerm f_93 (ATerm t)
  {
    t = term_e_26;
    return(t);
  }
  ATerm g_93 (ATerm t)
  {
    t = term_f_26;
    return(t);
  }
  ATerm h_93 (ATerm t)
  {
    t = term_g_26;
    return(t);
  }
  ATerm i_93 (ATerm t)
  {
    t = term_h_26;
    return(t);
  }
  ATerm j_93 (ATerm t)
  {
    t = term_i_26;
    return(t);
  }
  ATerm k_93 (ATerm t)
  {
    t = term_s_24;
    return(t);
  }
  ATerm l_93 (ATerm t)
  {
    t = term_j_26;
    return(t);
  }
  ATerm m_93 (ATerm t)
  {
    t = term_j_26;
    return(t);
  }
  ATerm n_93 (ATerm t)
  {
    t = term_k_26;
    return(t);
  }
  ATerm o_93 (ATerm t)
  {
    t = term_l_26;
    return(t);
  }
  ATerm p_93 (ATerm t)
  {
    t = term_m_26;
    return(t);
  }
  ATerm s_93 (ATerm t)
  {
    t = term_n_26;
    return(t);
  }
  ATerm t_93 (ATerm t)
  {
    t = term_o_26;
    return(t);
  }
  ATerm u_93 (ATerm t)
  {
    t = term_p_26;
    return(t);
  }
  ATerm v_93 (ATerm t)
  {
    t = term_q_26;
    return(t);
  }
  ATerm w_93 (ATerm t)
  {
    t = term_r_26;
    return(t);
  }
  ATerm x_93 (ATerm t)
  {
    t = term_s_26;
    return(t);
  }
  ATerm y_93 (ATerm t)
  {
    t = term_t_26;
    return(t);
  }
  ATerm z_93 (ATerm t)
  {
    t = term_u_26;
    return(t);
  }
  ATerm c_94 (ATerm t)
  {
    t = term_v_26;
    return(t);
  }
  ATerm d_94 (ATerm t)
  {
    t = term_o_24;
    return(t);
  }
  ATerm e_94 (ATerm t)
  {
    t = term_w_26;
    return(t);
  }
  ATerm f_94 (ATerm t)
  {
    t = term_x_26;
    return(t);
  }
  ATerm g_94 (ATerm t)
  {
    t = term_y_26;
    return(t);
  }
  ATerm h_94 (ATerm t)
  {
    t = term_z_26;
    return(t);
  }
  ATerm i_94 (ATerm t)
  {
    t = term_u_26;
    return(t);
  }
  ATerm j_94 (ATerm t)
  {
    t = term_a_27;
    return(t);
  }
  ATerm k_94 (ATerm t)
  {
    t = term_b_27;
    return(t);
  }
  ATerm l_94 (ATerm t)
  {
    t = term_c_27;
    return(t);
  }
  ATerm m_94 (ATerm t)
  {
    t = term_d_27;
    return(t);
  }
  ATerm n_94 (ATerm t)
  {
    t = term_e_27;
    return(t);
  }
  u_92 = t;
  t_92 :
  if(match_string(u_92, "|="))
    {
      ATerm f_27 = t;
      int g_27 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = w_92(t);
          LocalPopChoice(g_27);
        }
      else
        {
          t = f_27;
          t = x_92(t);
        }
    }
  else
    {
      if(match_string(u_92, "^="))
        {
          ATerm h_27 = t;
          int i_27 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = w_92(t);
              LocalPopChoice(i_27);
            }
          else
            {
              t = h_27;
              t = y_92(t);
            }
        }
      else
        {
          if(match_string(u_92, "&="))
            {
              ATerm j_27 = t;
              int l_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = w_92(t);
                  LocalPopChoice(l_27);
                }
              else
                {
                  t = j_27;
                  t = z_92(t);
                }
            }
          else
            {
              if(match_string(u_92, ">>="))
                {
                  ATerm m_27 = t;
                  int n_27 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = w_92(t);
                      LocalPopChoice(n_27);
                    }
                  else
                    {
                      t = m_27;
                      t = a_93(t);
                    }
                }
              else
                {
                  if(match_string(u_92, "<<="))
                    {
                      ATerm o_27 = t;
                      int p_27 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = w_92(t);
                          LocalPopChoice(p_27);
                        }
                      else
                        {
                          t = o_27;
                          t = b_93(t);
                        }
                    }
                  else
                    {
                      if(match_string(u_92, "-="))
                        {
                          ATerm q_27 = t;
                          int v_27 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = w_92(t);
                              LocalPopChoice(v_27);
                            }
                          else
                            {
                              t = q_27;
                              t = c_93(t);
                            }
                        }
                      else
                        {
                          if(match_string(u_92, "+="))
                            {
                              ATerm w_27 = t;
                              int z_27 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = w_92(t);
                                  LocalPopChoice(z_27);
                                }
                              else
                                {
                                  t = w_27;
                                  t = d_93(t);
                                }
                            }
                          else
                            {
                              if(match_string(u_92, "%="))
                                {
                                  ATerm a_28 = t;
                                  int b_28 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = w_92(t);
                                      LocalPopChoice(b_28);
                                    }
                                  else
                                    {
                                      t = a_28;
                                      t = e_93(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(u_92, "/="))
                                    {
                                      ATerm c_28 = t;
                                      int d_28 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = w_92(t);
                                          LocalPopChoice(d_28);
                                        }
                                      else
                                        {
                                          t = c_28;
                                          t = f_93(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(u_92, "*="))
                                        {
                                          ATerm e_28 = t;
                                          int f_28 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = w_92(t);
                                              LocalPopChoice(f_28);
                                            }
                                          else
                                            {
                                              t = e_28;
                                              t = g_93(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(u_92, "=>"))
                                            {
                                              ATerm g_28 = t;
                                              int h_28 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = w_92(t);
                                                  LocalPopChoice(h_28);
                                                }
                                              else
                                                {
                                                  t = g_28;
                                                  t = h_93(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(u_92, "->"))
                                                {
                                                  ATerm i_28 = t;
                                                  int j_28 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = w_92(t);
                                                      LocalPopChoice(j_28);
                                                    }
                                                  else
                                                    {
                                                      t = i_28;
                                                      t = i_93(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(u_92, ":="))
                                                    {
                                                      ATerm q_28 = t;
                                                      int r_28 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = w_92(t);
                                                          LocalPopChoice(r_28);
                                                        }
                                                      else
                                                        {
                                                          t = q_28;
                                                          t = j_93(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(u_92, "||"))
                                                        {
                                                          ATerm s_28 = t;
                                                          int t_28 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = w_92(t);
                                                              LocalPopChoice(t_28);
                                                            }
                                                          else
                                                            {
                                                              t = s_28;
                                                              t = k_93(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(u_92, "=="))
                                                            {
                                                              ATerm u_28 = t;
                                                              int v_28 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = w_92(t);
                                                                  LocalPopChoice(v_28);
                                                                }
                                                              else
                                                                {
                                                                  t = u_28;
                                                                  t = l_93(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(u_92, "="))
                                                                {
                                                                  ATerm g_29 = t;
                                                                  int j_29 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = w_92(t);
                                                                      LocalPopChoice(j_29);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = g_29;
                                                                      t = m_93(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(u_92, "|"))
                                                                    {
                                                                      ATerm m_29 = t;
                                                                      int n_29 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = w_92(t);
                                                                          LocalPopChoice(n_29);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = m_29;
                                                                          t = n_93(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(u_92, ">="))
                                                                        {
                                                                          ATerm o_29 = t;
                                                                          int p_29 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = w_92(t);
                                                                              LocalPopChoice(p_29);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_29;
                                                                              t = o_93(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(u_92, ">"))
                                                                            {
                                                                              ATerm q_29 = t;
                                                                              int r_29 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = w_92(t);
                                                                                  LocalPopChoice(r_29);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = q_29;
                                                                                  t = p_93(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(u_92, "<="))
                                                                                {
                                                                                  ATerm s_29 = t;
                                                                                  int t_29 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = w_92(t);
                                                                                      LocalPopChoice(t_29);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = s_29;
                                                                                      t = s_93(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(u_92, "<"))
                                                                                    {
                                                                                      ATerm u_29 = t;
                                                                                      int v_29 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = w_92(t);
                                                                                          LocalPopChoice(v_29);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = u_29;
                                                                                          t = t_93(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(u_92, "!="))
                                                                                        {
                                                                                          ATerm w_29 = t;
                                                                                          int c_30 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = w_92(t);
                                                                                              LocalPopChoice(c_30);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = w_29;
                                                                                              t = u_93(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(u_92, ">>"))
                                                                                            {
                                                                                              ATerm d_30 = t;
                                                                                              int e_30 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = w_92(t);
                                                                                                  LocalPopChoice(e_30);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = d_30;
                                                                                                  t = v_93(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(u_92, "<<"))
                                                                                                {
                                                                                                  ATerm f_30 = t;
                                                                                                  int g_30 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = w_92(t);
                                                                                                      LocalPopChoice(g_30);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = f_30;
                                                                                                      t = w_93(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(u_92, "%"))
                                                                                                    {
                                                                                                      ATerm h_30 = t;
                                                                                                      int i_30 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = w_92(t);
                                                                                                          LocalPopChoice(i_30);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = h_30;
                                                                                                          t = x_93(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(u_92, "~"))
                                                                                                        {
                                                                                                          ATerm r_30 = t;
                                                                                                          int s_30 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = w_92(t);
                                                                                                              LocalPopChoice(s_30);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = r_30;
                                                                                                              t = y_93(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(u_92, "-"))
                                                                                                            {
                                                                                                              ATerm t_30 = t;
                                                                                                              int u_30 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = w_92(t);
                                                                                                                  LocalPopChoice(u_30);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = t_30;
                                                                                                                  {
                                                                                                                    ATerm v_30 = t;
                                                                                                                    int w_30 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = z_93(t);
                                                                                                                        LocalPopChoice(w_30);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = v_30;
                                                                                                                        t = i_94(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(u_92, "!"))
                                                                                                                {
                                                                                                                  ATerm b_31 = t;
                                                                                                                  int c_31 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = w_92(t);
                                                                                                                      LocalPopChoice(c_31);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = b_31;
                                                                                                                      t = c_94(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(u_92, "&&"))
                                                                                                                    {
                                                                                                                      ATerm d_31 = t;
                                                                                                                      int e_31 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = w_92(t);
                                                                                                                          LocalPopChoice(e_31);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = d_31;
                                                                                                                          t = d_94(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(u_92, "&"))
                                                                                                                        {
                                                                                                                          ATerm h_31 = t;
                                                                                                                          int j_31 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = w_92(t);
                                                                                                                              LocalPopChoice(j_31);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = h_31;
                                                                                                                              t = e_94(t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(u_92, "/"))
                                                                                                                            {
                                                                                                                              ATerm k_31 = t;
                                                                                                                              int l_31 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = w_92(t);
                                                                                                                                  LocalPopChoice(l_31);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = k_31;
                                                                                                                                  t = f_94(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(u_92, "*"))
                                                                                                                                {
                                                                                                                                  ATerm m_31 = t;
                                                                                                                                  int n_31 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = w_92(t);
                                                                                                                                      LocalPopChoice(n_31);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = m_31;
                                                                                                                                      t = g_94(t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(u_92, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm o_31 = t;
                                                                                                                                      int p_31 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = w_92(t);
                                                                                                                                          LocalPopChoice(p_31);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = o_31;
                                                                                                                                          t = h_94(t);
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(u_92, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm q_31 = t;
                                                                                                                                          int r_31 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = w_92(t);
                                                                                                                                              LocalPopChoice(r_31);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = q_31;
                                                                                                                                              t = j_94(t);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(u_92, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm s_31 = t;
                                                                                                                                              int x_31 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = w_92(t);
                                                                                                                                                  LocalPopChoice(x_31);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = s_31;
                                                                                                                                                  t = k_94(t);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(u_92, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm y_31 = t;
                                                                                                                                                  int f_32 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = w_92(t);
                                                                                                                                                      LocalPopChoice(f_32);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = y_31;
                                                                                                                                                      t = l_94(t);
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(u_92, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm g_32 = t;
                                                                                                                                                      int h_32 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = w_92(t);
                                                                                                                                                          LocalPopChoice(h_32);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = g_32;
                                                                                                                                                          t = m_94(t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(u_92, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm i_32 = t;
                                                                                                                                                          int j_32 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = w_92(t);
                                                                                                                                                              LocalPopChoice(j_32);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = i_32;
                                                                                                                                                              t = n_94(t);
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        t = w_92(t);
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
ATerm Sep_1 (ATerm t, ATerm s_90 (ATerm))
{
  ATerm r_94 = NULL,s_94 = NULL,t_94 = NULL;
  r_94 = t;
  q_94 :
  if(((ATgetType(r_94) == AT_LIST) && ((ATermList) r_94 != ATempty)))
    {
      s_94 = ATgetFirst((ATermList) r_94);
      t_94 = (ATerm) ATgetNext((ATermList) r_94);
      {
        ATerm w_94 = NULL;
        ATerm x_94 = NULL;
        t = term_s_15;
        {
          t = s_90(t);
          {
            x_94 = t;
            if(((w_94 != NULL) && (w_94 != x_94)))
              _fail(x_94);
            else
              w_94 = x_94;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_94)), not_null(s_94)), not_null(w_94));
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm t_90 (ATerm))
{
  ATerm k_32 = t;
  int l_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_32);
    }
  else
    {
      t = k_32;
      {
        ATerm b_4 (ATerm t)
        {
          ATerm m_32 = t;
          int n_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(n_32);
            }
          else
            {
              t = m_32;
              {
                t = Cons_2(t, _id, b_4);
                t = Sep_1(t, t_90);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, b_4);
      }
    }
  return(t);
}
ATerm Lit2Str_0 (ATerm t)
{
  ATerm d_95 = NULL,e_95 = NULL;
  d_95 = t;
  c_95 :
  if(match_cons(d_95, sym_lit_1))
    {
      e_95 = ATgetArgument(d_95, 0);
      {
        t = not_null(e_95);
        {
          ATerm c_4 (ATerm t)
          {
            t = de_quote_0(t);
            t = de_escape_0(t);
            return(t);
          }
          t = try_1(t, c_4);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Singleton_0 (ATerm t)
{
  ATerm m_95 = NULL;
  m_95 = t;
  t = (ATerm) ATinsert(ATempty, not_null(m_95));
  return(t);
}
ATerm list_ana_1 (ATerm t, ATerm b_73 (ATerm))
{
  ATerm b_96 (ATerm t)
  {
    ATerm o_32 = t;
    int t_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_73(t);
        t = Singleton_0(t);
        LocalPopChoice(t_32);
      }
    else
      {
        t = o_32;
        {
          ATerm u_32 = t;
          int v_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm t_95 = NULL;
              ATerm v_95 = NULL;
              t_95 = t;
              {
                ATerm w_95 = NULL;
                ATerm y_95 = NULL,z_95 = NULL,a_96 = NULL;
                t = not_null(t_95);
                {
                  w_95 = t;
                  {
                    t = SSL_explode_term(not_null(w_95));
                    {
                      y_95 = t;
                      s_95 :
                      if(match_cons(y_95, sym__2))
                        {
                          z_95 = ATgetArgument(y_95, 0);
                          a_96 = ATgetArgument(y_95, 1);
                          if(((v_95 != NULL) && (v_95 != a_96)))
                            _fail(a_96);
                          else
                            v_95 = a_96;
                        }
                      else
                        _fail(t);
                    }
                  }
                }
                {
                  t = not_null(v_95);
                  {
                    t = filter_1(t, b_96);
                    t = concat_0(t);
                  }
                }
              }
              LocalPopChoice(v_32);
            }
          else
            {
              t = u_32;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = b_96(t);
  return(t);
}
ATerm lit2str_0 (ATerm t)
{
  t = list_ana_1(t, Lit2Str_0);
  {
    ATerm d_4 (ATerm t)
    {
      t = term_f_23;
      return(t);
    }
    t = separate_by_1(t, d_4);
    {
      t = concat_strings_0(t);
      {
        ATerm w_32 = t;
        int x_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = toAlphaNum_0(t);
            LocalPopChoice(x_32);
          }
        else
          {
            t = w_32;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm lits2strs_0 (ATerm t)
{
  t = filter_1(t, lit2str_0);
  return(t);
}
ATerm Quote_0 (ATerm t)
{
  ATerm h_96 = NULL;
  h_96 = t;
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_j_22)), not_null(h_96)), (ATerm) ATinsert(ATempty, term_j_22));
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
ATerm normalize_constr_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm y_32;
    y_32 = t;
    {
      ATerm z_32 = t;
      if((PushChoice() == 0))
        {
          t = de_quote_0(t);
          PopChoice();
          _fail(t);
        }
      else
        t = z_32;
    }
    t = y_32;
    t = quote_0(t);
    return(t);
  }
  t = try_1(t, e_4);
  return(t);
}
ATerm mk_constr_0 (ATerm t)
{
  ATerm g_97 = NULL,h_97 = NULL,i_97 = NULL,j_97 = NULL,k_97 = NULL;
  ATerm h_98 (ATerm t)
  {
    ATerm o_97 = NULL;
    ATerm a_33 = t;
    int b_33 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm p_97 = NULL;
        t = not_null(i_97);
        {
          t = lits2strs_0(t);
          {
            t = strs2constr_0(t);
            {
              p_97 = t;
              if(((o_97 != NULL) && (o_97 != p_97)))
                _fail(p_97);
              else
                o_97 = p_97;
            }
          }
        }
        LocalPopChoice(b_33);
      }
    else
      {
        t = a_33;
        {
          ATerm c_33 = t;
          int d_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_97 = NULL,s_97 = NULL,u_97 = NULL;
              ATerm e_33;
              e_33 = t;
              {
                ATerm r_97 = NULL;
                t = (ATerm) ATinsert(ATempty, not_null(j_97));
                {
                  t = syms2strs_0(t);
                  {
                    r_97 = t;
                    if(((q_97 != NULL) && (q_97 != r_97)))
                      _fail(r_97);
                    else
                      q_97 = r_97;
                  }
                }
              }
              t = e_33;
              {
                ATerm t_97 = NULL;
                t = not_null(i_97);
                {
                  t = lits2strs_0(t);
                  {
                    t = empty_test_0(t);
                    {
                      t_97 = t;
                      if(((s_97 != NULL) && (s_97 != t_97)))
                        _fail(t_97);
                      else
                        s_97 = t_97;
                    }
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_97), not_null(s_97));
                  {
                    t = conc_0(t);
                    {
                      t = strs2constr_0(t);
                      {
                        u_97 = t;
                        if(((o_97 != NULL) && (o_97 != u_97)))
                          _fail(u_97);
                        else
                          o_97 = u_97;
                      }
                    }
                  }
                }
              }
              LocalPopChoice(d_33);
            }
          else
            {
              t = c_33;
              {
                ATerm f_33 = t;
                int h_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm v_97 = NULL;
                    t = not_null(i_97);
                    {
                      t = syms2strs_0(t);
                      {
                        t = strs2constr_0(t);
                        {
                          v_97 = t;
                          if(((o_97 != NULL) && (o_97 != v_97)))
                            _fail(v_97);
                          else
                            o_97 = v_97;
                        }
                      }
                    }
                    LocalPopChoice(h_33);
                  }
                else
                  {
                    t = f_33;
                    {
                      ATerm w_97 = NULL,y_97 = NULL,a_98 = NULL;
                      ATerm j_33;
                      j_33 = t;
                      {
                        ATerm x_97 = NULL;
                        t = (ATerm) ATinsert(ATempty, not_null(j_97));
                        {
                          t = syms2strs_0(t);
                          {
                            x_97 = t;
                            if(((w_97 != NULL) && (w_97 != x_97)))
                              _fail(x_97);
                            else
                              w_97 = x_97;
                          }
                        }
                      }
                      t = j_33;
                      {
                        ATerm z_97 = NULL;
                        t = term_s_15;
                        {
                          t = new_0(t);
                          {
                            z_97 = t;
                            if(((y_97 != NULL) && (y_97 != z_97)))
                              _fail(z_97);
                            else
                              y_97 = z_97;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(w_97), (ATerm) ATinsert(ATinsert(ATempty, not_null(y_97)), term_k_33));
                          {
                            t = conc_0(t);
                            {
                              t = strs2constr_0(t);
                              {
                                a_98 = t;
                                if(((o_97 != NULL) && (o_97 != a_98)))
                                  _fail(a_98);
                                else
                                  o_97 = a_98;
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
    t = not_null(o_97);
    return(t);
  }
  ATerm i_98 (ATerm t)
  {
    ATerm c_98 = NULL;
    ATerm d_98 = NULL,f_98 = NULL;
    ATerm e_98 = NULL;
    t = (ATerm) ATinsert(ATempty, not_null(j_97));
    {
      t = syms2strs_0(t);
      {
        e_98 = t;
        if(((d_98 != NULL) && (d_98 != e_98)))
          _fail(e_98);
        else
          d_98 = e_98;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(d_98), (ATerm) ATinsert(ATempty, term_l_33));
      {
        t = conc_0(t);
        {
          t = strs2constr_0(t);
          {
            f_98 = t;
            if(((c_98 != NULL) && (c_98 != f_98)))
              _fail(f_98);
            else
              c_98 = f_98;
          }
        }
      }
    }
    t = not_null(c_98);
    return(t);
  }
  h_97 = t;
  e_97 :
  if(match_cons(h_97, sym_prod_fun_4))
    {
      i_97 = ATgetArgument(h_97, 0);
      j_97 = ATgetArgument(h_97, 1);
      k_97 = ATgetArgument(h_97, 2);
      g_97 = ATgetArgument(h_97, 3);
      {
        t = not_null(i_97);
        t = normalize_constr_0(t);
      }
    }
  else
    {
      if(match_cons(h_97, sym_prod_3))
        {
          i_97 = ATgetArgument(h_97, 0);
          j_97 = ATgetArgument(h_97, 1);
          k_97 = ATgetArgument(h_97, 2);
          f_97 :
          if(((ATermList) i_97 == ATempty))
            {
              {
                ATerm m_33 = t;
                int n_33 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = h_98(t);
                    LocalPopChoice(n_33);
                  }
                else
                  {
                    t = m_33;
                    t = i_98(t);
                  }
              }
            }
          else
            t = h_98(t);
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm q_0 (ATerm), ATerm r_0 (ATerm))
{
  ATerm a_99 = NULL,b_99 = NULL,c_99 = NULL;
  a_99 = t;
  z_98 :
  if(match_cons(a_99, sym_iter_star_sep_2))
    {
      b_99 = ATgetArgument(a_99, 0);
      c_99 = ATgetArgument(a_99, 1);
      {
        ATerm o_33 = t;
        int p_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_99 = NULL;
            t = not_null(b_99);
            {
              ATerm h_99 = NULL;
              t = q_0(t);
              {
                f_99 = t;
                {
                  t = not_null(c_99);
                  {
                    t = r_0(t);
                    {
                      h_99 = t;
                      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(f_99), not_null(h_99));
                    }
                  }
                }
              }
            }
            LocalPopChoice(p_33);
          }
        else
          {
            t = o_33;
            {
              ATerm l_99 = NULL;
              t = not_null(b_99);
              {
                ATerm n_99 = NULL;
                t = q_0(t);
                {
                  l_99 = t;
                  {
                    t = not_null(c_99);
                    {
                      t = r_0(t);
                      {
                        n_99 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(l_99), not_null(n_99));
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
    _fail(t);
  return(t);
}
ATerm iter_sep_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm c_100 = NULL,d_100 = NULL,e_100 = NULL;
  c_100 = t;
  b_100 :
  if(match_cons(c_100, sym_iter_sep_2))
    {
      d_100 = ATgetArgument(c_100, 0);
      e_100 = ATgetArgument(c_100, 1);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_100 = NULL;
            t = not_null(d_100);
            {
              ATerm j_100 = NULL;
              t = o_0(t);
              {
                h_100 = t;
                {
                  t = not_null(e_100);
                  {
                    t = p_0(t);
                    {
                      j_100 = t;
                      t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(h_100), not_null(j_100));
                    }
                  }
                }
              }
            }
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            {
              ATerm n_100 = NULL;
              t = not_null(d_100);
              {
                ATerm p_100 = NULL;
                t = o_0(t);
                {
                  n_100 = t;
                  {
                    t = not_null(e_100);
                    {
                      t = p_0(t);
                      {
                        p_100 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(n_100), not_null(p_100));
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
    _fail(t);
  return(t);
}
ATerm iter_star_1 (ATerm t, ATerm n_0 (ATerm))
{
  ATerm c_101 = NULL,d_101 = NULL;
  c_101 = t;
  b_101 :
  if(match_cons(c_101, sym_iter_star_1))
    {
      d_101 = ATgetArgument(c_101, 0);
      {
        ATerm w_33 = t;
        int x_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_101 = NULL;
            t = not_null(d_101);
            {
              t = n_0(t);
              {
                f_101 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(f_101));
              }
            }
            LocalPopChoice(x_33);
          }
        else
          {
            t = w_33;
            {
              ATerm i_101 = NULL;
              t = not_null(d_101);
              {
                t = n_0(t);
                {
                  i_101 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(i_101));
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
ATerm iter_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm t_101 = NULL,u_101 = NULL;
  t_101 = t;
  s_101 :
  if(match_cons(t_101, sym_iter_1))
    {
      u_101 = ATgetArgument(t_101, 0);
      {
        ATerm y_33 = t;
        int z_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_101 = NULL;
            t = not_null(u_101);
            {
              t = m_0(t);
              {
                w_101 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, not_null(w_101));
              }
            }
            LocalPopChoice(z_33);
          }
        else
          {
            t = y_33;
            {
              ATerm z_101 = NULL;
              t = not_null(u_101);
              {
                t = m_0(t);
                {
                  z_101 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_1, not_null(z_101));
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
ATerm alt_2 (ATerm t, ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm m_102 = NULL,n_102 = NULL,o_102 = NULL;
  m_102 = t;
  l_102 :
  if(match_cons(m_102, sym_alt_2))
    {
      n_102 = ATgetArgument(m_102, 0);
      o_102 = ATgetArgument(m_102, 1);
      {
        ATerm a_34 = t;
        int i_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_102 = NULL;
            t = not_null(n_102);
            {
              ATerm u_102 = NULL;
              t = k_0(t);
              {
                r_102 = t;
                {
                  t = not_null(o_102);
                  {
                    t = l_0(t);
                    {
                      u_102 = t;
                      t = (ATerm) ATmakeAppl(sym_alt_2, not_null(r_102), not_null(u_102));
                    }
                  }
                }
              }
            }
            LocalPopChoice(i_34);
          }
        else
          {
            t = a_34;
            {
              ATerm y_102 = NULL;
              t = not_null(n_102);
              {
                ATerm a_103 = NULL;
                t = k_0(t);
                {
                  y_102 = t;
                  {
                    t = not_null(o_102);
                    {
                      t = l_0(t);
                      {
                        a_103 = t;
                        t = (ATerm) ATmakeAppl(sym_alt_2, not_null(y_102), not_null(a_103));
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
    _fail(t);
  return(t);
}
ATerm syntaxless_sort_0 (ATerm t)
{
  ATerm j_34 = t;
  int k_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1(t, _id);
      LocalPopChoice(k_34);
    }
  else
    {
      t = j_34;
      {
        ATerm l_34 = t;
        int m_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = alt_2(t, syntaxless_sort_0, syntaxless_sort_0);
            LocalPopChoice(m_34);
          }
        else
          {
            t = l_34;
            {
              ATerm p_34 = t;
              int q_34 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = opt_1(t, syntaxless_sort_0);
                  LocalPopChoice(q_34);
                }
              else
                {
                  t = p_34;
                  {
                    ATerm r_34 = t;
                    int s_34 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = iter_1(t, syntaxless_sort_0);
                        LocalPopChoice(s_34);
                      }
                    else
                      {
                        t = r_34;
                        {
                          ATerm t_34 = t;
                          int u_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_star_1(t, syntaxless_sort_0);
                              LocalPopChoice(u_34);
                            }
                          else
                            {
                              t = t_34;
                              {
                                ATerm v_34 = t;
                                int w_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = iter_sep_2(t, syntaxless_sort_0, _id);
                                    LocalPopChoice(w_34);
                                  }
                                else
                                  {
                                    t = v_34;
                                    t = iter_star_sep_2(t, syntaxless_sort_0, _id);
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
ATerm is_injection_0 (ATerm t)
{
  ATerm f_4 (ATerm t)
  {
    t = Cons_2(t, syntaxless_sort_0, Nil_0);
    return(t);
  }
  t = prod_3(t, f_4, _id, _id);
  {
    ATerm g_4 (ATerm t)
    {
      t = term_c_35;
      return(t);
    }
    t = has_option_1(t, g_4);
  }
  return(t);
}
ATerm is_reject_0 (ATerm t)
{
  ATerm p_103 = NULL,q_103 = NULL,r_103 = NULL,s_103 = NULL,t_103 = NULL;
  q_103 = t;
  o_103 :
  if(match_cons(q_103, sym_prod_fun_4))
    {
      r_103 = ATgetArgument(q_103, 0);
      s_103 = ATgetArgument(q_103, 1);
      t_103 = ATgetArgument(q_103, 2);
      p_103 = ATgetArgument(q_103, 3);
      {
        t = not_null(p_103);
        {
          ATerm h_4 (ATerm t)
          {
            ATerm y_103 = NULL;
            y_103 = t;
            m_103 :
            if(!(match_cons(y_103, sym_reject_0)))
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, h_4);
        }
        t = term_s_15;
      }
    }
  else
    {
      if(match_cons(q_103, sym_prod_3))
        {
          r_103 = ATgetArgument(q_103, 0);
          s_103 = ATgetArgument(q_103, 1);
          t_103 = ATgetArgument(q_103, 2);
          {
            t = not_null(t_103);
            {
              ATerm i_4 (ATerm t)
              {
                ATerm d_104 = NULL;
                d_104 = t;
                n_103 :
                if(!(match_cons(d_104, sym_reject_0)))
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, i_4);
            }
            t = term_s_15;
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm is_bracket_0 (ATerm t)
{
  ATerm l_104 = NULL,m_104 = NULL,o_104 = NULL,p_104 = NULL,q_104 = NULL;
  m_104 = t;
  k_104 :
  if(match_cons(m_104, sym_prod_fun_4))
    {
      o_104 = ATgetArgument(m_104, 0);
      p_104 = ATgetArgument(m_104, 1);
      q_104 = ATgetArgument(m_104, 2);
      l_104 = ATgetArgument(m_104, 3);
      {
        t = not_null(l_104);
        {
          ATerm j_4 (ATerm t)
          {
            ATerm v_104 = NULL;
            v_104 = t;
            i_104 :
            if(!(match_cons(v_104, sym_bracket_0)))
              _fail(t);
            return(t);
          }
          t = oncetd_1(t, j_4);
        }
        t = term_s_15;
      }
    }
  else
    {
      if(match_cons(m_104, sym_prod_3))
        {
          o_104 = ATgetArgument(m_104, 0);
          p_104 = ATgetArgument(m_104, 1);
          q_104 = ATgetArgument(m_104, 2);
          {
            t = not_null(q_104);
            {
              ATerm k_4 (ATerm t)
              {
                ATerm z_104 = NULL;
                z_104 = t;
                j_104 :
                if(!(match_cons(z_104, sym_bracket_0)))
                  _fail(t);
                return(t);
              }
              t = oncetd_1(t, k_4);
            }
            t = term_s_15;
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm prodcons_0 (ATerm t)
{
  ATerm g_105 = NULL;
  g_105 = t;
  {
    ATerm d_35 = t;
    int f_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_105 = NULL;
        ATerm g_35;
        g_35 = t;
        {
          t = not_null(g_105);
          {
            ATerm h_35 = t;
            if((PushChoice() == 0))
              {
                ATerm j_35 = t;
                int k_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = get_constr_0(t);
                    LocalPopChoice(k_35);
                  }
                else
                  {
                    t = j_35;
                    {
                      ATerm l_35 = t;
                      int m_35 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = is_bracket_0(t);
                          LocalPopChoice(m_35);
                        }
                      else
                        {
                          t = l_35;
                          {
                            ATerm n_35 = t;
                            int o_35 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = is_reject_0(t);
                                LocalPopChoice(o_35);
                              }
                            else
                              {
                                t = n_35;
                                t = is_injection_0(t);
                              }
                          }
                        }
                    }
                  }
                PopChoice();
                _fail(t);
              }
            else
              t = h_35;
          }
        }
        t = g_35;
        {
          ATerm k_105 = NULL;
          t = not_null(g_105);
          {
            t = mk_constr_0(t);
            {
              k_105 = t;
              if(((i_105 != NULL) && (i_105 != k_105)))
                _fail(k_105);
              else
                i_105 = k_105;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(g_105), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(i_105))));
            t = add_attributes_0(t);
          }
        }
        LocalPopChoice(f_35);
      }
    else
      {
        t = d_35;
        {
          ATerm m_105 = NULL;
          ATerm n_105 = NULL;
          t = not_null(g_105);
          {
            t = get_constr_0(t);
            {
              n_105 = t;
              if(((m_105 != NULL) && (m_105 != n_105)))
                _fail(n_105);
              else
                m_105 = n_105;
            }
          }
          {
            t = not_null(g_105);
            {
              ATerm l_4 (ATerm t)
              {
                t = not_null(m_105);
                t = uq2q_0(t);
                return(t);
              }
              t = at_cons_1(t, l_4);
            }
          }
        }
      }
  }
  return(t);
}
ATerm sort_1 (ATerm t, ATerm j_0 (ATerm))
{
  ATerm x_105 = NULL,y_105 = NULL;
  x_105 = t;
  w_105 :
  if(match_cons(x_105, sym_sort_1))
    {
      y_105 = ATgetArgument(x_105, 0);
      {
        ATerm p_35 = t;
        int q_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_106 = NULL;
            t = not_null(y_105);
            {
              t = j_0(t);
              {
                a_106 = t;
                t = (ATerm) ATmakeAppl(sym_sort_1, not_null(a_106));
              }
            }
            LocalPopChoice(q_35);
          }
        else
          {
            t = p_35;
            {
              ATerm d_106 = NULL;
              t = not_null(y_105);
              {
                t = j_0(t);
                {
                  d_106 = t;
                  t = (ATerm) ATmakeAppl(sym_sort_1, not_null(d_106));
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
ATerm get_templ_0 (ATerm t)
{
  ATerm u_106 = NULL,v_106 = NULL,w_106 = NULL,x_106 = NULL,y_106 = NULL,z_106 = NULL;
  u_106 = t;
  s_106 :
  if(match_cons(u_106, sym_appl_2))
    {
      v_106 = ATgetArgument(u_106, 0);
      z_106 = ATgetArgument(u_106, 1);
      t_106 :
      if(match_cons(v_106, sym_prod_3))
        {
          w_106 = ATgetArgument(v_106, 0);
          x_106 = ATgetArgument(v_106, 1);
          y_106 = ATgetArgument(v_106, 2);
          {
            ATerm e_107 = NULL,f_107 = NULL;
            ATerm l_107 = NULL;
            ATerm r_35 = t;
            int s_35 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = not_null(y_106);
                {
                  ATerm m_4 (ATerm t)
                  {
                    ATerm g_107 = NULL,h_107 = NULL;
                    g_107 = t;
                    m_106 :
                    if(match_cons(g_107, sym_cons_1))
                      {
                        h_107 = ATgetArgument(g_107, 0);
                        if(((e_107 != NULL) && (e_107 != h_107)))
                          _fail(h_107);
                        else
                          e_107 = h_107;
                      }
                    else
                      _fail(t);
                    return(t);
                  }
                  t = oncetd_1(t, m_4);
                }
                LocalPopChoice(s_35);
              }
            else
              {
                t = r_35;
                {
                  ATerm t_35 = t;
                  int u_35 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(x_106);
                      {
                        t = sort_1(t, _id);
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(w_106), not_null(x_106), not_null(y_106));
                          {
                            t = prodcons_0(t);
                            {
                              ATerm n_4 (ATerm t)
                              {
                                ATerm o_4 (ATerm t)
                                {
                                  ATerm i_107 = NULL,j_107 = NULL;
                                  i_107 = t;
                                  o_106 :
                                  if(match_cons(i_107, sym_cons_1))
                                    {
                                      j_107 = ATgetArgument(i_107, 0);
                                      if(((e_107 != NULL) && (e_107 != j_107)))
                                        _fail(j_107);
                                      else
                                        e_107 = j_107;
                                    }
                                  else
                                    _fail(t);
                                  return(t);
                                }
                                t = oncetd_1(t, o_4);
                                return(t);
                              }
                              t = prod_3(t, _id, _id, n_4);
                            }
                          }
                        }
                      }
                      LocalPopChoice(u_35);
                    }
                  else
                    {
                      t = t_35;
                      {
                        ATerm k_107 = NULL;
                        t = term_v_35;
                        {
                          k_107 = t;
                          if(((e_107 != NULL) && (e_107 != k_107)))
                            _fail(k_107);
                          else
                            e_107 = k_107;
                        }
                      }
                    }
                }
              }
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, not_null(w_106), not_null(x_106), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(e_107))))), (ATerm) ATinsert(ATempty, not_null(e_107)));
              {
                t = get_pp_entry_0(t);
                {
                  l_107 = t;
                  if(((f_107 != NULL) && (f_107 != l_107)))
                    _fail(l_107);
                  else
                    f_107 = l_107;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_107), not_null(f_107));
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm appl2abox_0 (ATerm t)
{
  ATerm b_108 = NULL,c_108 = NULL,d_108 = NULL,e_108 = NULL,f_108 = NULL,g_108 = NULL;
  b_108 = t;
  z_107 :
  if(match_cons(b_108, sym_appl_2))
    {
      c_108 = ATgetArgument(b_108, 0);
      g_108 = ATgetArgument(b_108, 1);
      a_108 :
      if(match_cons(c_108, sym_prod_3))
        {
          d_108 = ATgetArgument(c_108, 0);
          e_108 = ATgetArgument(c_108, 1);
          f_108 = ATgetArgument(c_108, 2);
          {
            ATerm m_108 = NULL,n_108 = NULL,o_108 = NULL,p_108 = NULL;
            ATerm q_108 = NULL,r_108 = NULL,s_108 = NULL;
            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(d_108), not_null(e_108), not_null(f_108)), not_null(g_108));
            {
              t = get_templ_0(t);
              {
                q_108 = t;
                y_107 :
                if(match_cons(q_108, sym__2))
                  {
                    r_108 = ATgetArgument(q_108, 0);
                    s_108 = ATgetArgument(q_108, 1);
                    {
                      ATerm t_108 = NULL,w_108 = NULL,y_108 = NULL;
                      if(((m_108 != NULL) && (m_108 != r_108)))
                        _fail(r_108);
                      else
                        m_108 = r_108;
                      {
                        if(((n_108 != NULL) && (n_108 != s_108)))
                          _fail(s_108);
                        else
                          n_108 = s_108;
                        {
                          ATerm c_36;
                          c_36 = t;
                          {
                            ATerm u_108 = NULL;
                            t = not_null(d_108);
                            {
                              ATerm p_4 (ATerm t)
                              {
                                ATerm d_36 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = lit_1(t, _id);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = d_36;
                                return(t);
                              }
                              t = filter_1(t, p_4);
                              {
                                u_108 = t;
                                if(((t_108 != NULL) && (t_108 != u_108)))
                                  _fail(u_108);
                                else
                                  t_108 = u_108;
                              }
                            }
                          }
                          t = c_36;
                          {
                            ATerm x_108 = NULL;
                            t = not_null(g_108);
                            {
                              ATerm q_4 (ATerm t)
                              {
                                ATerm e_36 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = lit_1(t, _id);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = e_36;
                                return(t);
                              }
                              t = filter_1(t, q_4);
                              {
                                x_108 = t;
                                if(((w_108 != NULL) && (w_108 != x_108)))
                                  _fail(x_108);
                                else
                                  w_108 = x_108;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__4, not_null(t_108), not_null(w_108), (ATerm)ATinsert(ATempty, not_null(m_108)), term_i_17);
                              {
                                ATerm z_108 = NULL;
                                t = seq2abox_0(t);
                                {
                                  y_108 = t;
                                  {
                                    if(((o_108 != NULL) && (o_108 != y_108)))
                                      _fail(y_108);
                                    else
                                      o_108 = y_108;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(n_108), not_null(o_108));
                                      {
                                        t = instantiate_0(t);
                                        {
                                          z_108 = t;
                                          if(((p_108 != NULL) && (p_108 != z_108)))
                                            _fail(z_108);
                                          else
                                            p_108 = z_108;
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
                else
                  _fail(t);
              }
            }
            t = not_null(p_108);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm layout_0 (ATerm t)
{
  ATerm h_109 = NULL;
  h_109 = t;
  g_109 :
  if(!(match_cons(h_109, sym_layout_0)))
    _fail(t);
  return(t);
}
ATerm opt_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm n_109 = NULL,o_109 = NULL;
  n_109 = t;
  m_109 :
  if(match_cons(n_109, sym_opt_1))
    {
      o_109 = ATgetArgument(n_109, 0);
      {
        ATerm f_36 = t;
        int g_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_109 = NULL;
            t = not_null(o_109);
            {
              t = i_0(t);
              {
                q_109 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, not_null(q_109));
              }
            }
            LocalPopChoice(g_36);
          }
        else
          {
            t = f_36;
            {
              ATerm u_109 = NULL;
              t = not_null(o_109);
              {
                t = i_0(t);
                {
                  u_109 = t;
                  t = (ATerm) ATmakeAppl(sym_opt_1, not_null(u_109));
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
ATerm filter_1 (ATerm t, ATerm c_83 (ATerm))
{
  ATerm h_36 = t;
  int i_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_36);
    }
  else
    {
      t = h_36;
      {
        ATerm j_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_4 (ATerm t)
            {
              t = filter_1(t, c_83);
              return(t);
            }
            t = Cons_2(t, c_83, y_4);
            LocalPopChoice(l_36);
          }
        else
          {
            t = j_36;
            {
              ATerm c_110 = NULL,e_110 = NULL,f_110 = NULL;
              c_110 = t;
              b_110 :
              if(((ATgetType(c_110) == AT_LIST) && ((ATermList) c_110 != ATempty)))
                {
                  e_110 = ATgetFirst((ATermList) c_110);
                  f_110 = (ATerm) ATgetNext((ATermList) c_110);
                  {
                    t = not_null(f_110);
                    t = filter_1(t, c_83);
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
ATerm is_list_0 (ATerm t)
{
  ATerm j_110 = NULL,k_110 = NULL,l_110 = NULL;
  j_110 = t;
  i_110 :
  if(((ATermList) j_110 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_110) == AT_LIST) && ((ATermList) j_110 != ATempty)))
        {
          k_110 = ATgetFirst((ATermList) j_110);
          l_110 = (ATerm) ATgetNext((ATermList) j_110);
          {
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm y_91 (ATerm))
{
  ATerm m_110 (ATerm t)
  {
    t = y_91(t);
    t = _all(t, m_110);
    return(t);
  }
  t = m_110(t);
  return(t);
}
ATerm sometd_1 (ATerm t, ATerm a_94 (ATerm))
{
  ATerm n_110 (ATerm t)
  {
    ATerm o_36 = t;
    int a_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_94(t);
        LocalPopChoice(a_37);
      }
    else
      {
        t = o_36;
        t = _some(t, n_110);
      }
    return(t);
  }
  t = n_110(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm h_95 (ATerm), ATerm i_95 (ATerm))
{
  ATerm o_110 (ATerm t)
  {
    ATerm b_37 = t;
    int c_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = h_95(t);
        t = o_110(t);
        LocalPopChoice(c_37);
      }
    else
      {
        t = b_37;
        t = i_95(t);
      }
    return(t);
  }
  t = o_110(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm k_95 (ATerm))
{
  t = repeat_2(t, k_95, _id);
  return(t);
}
ATerm mk_key_0 (ATerm t)
{
  ATerm v_110 = NULL,w_110 = NULL,x_110 = NULL;
  v_110 = t;
  u_110 :
  if(match_cons(v_110, sym_Path1_1))
    {
      w_110 = ATgetArgument(v_110, 0);
      t = (ATerm) ATinsert(ATempty, not_null(w_110));
    }
  else
    {
      if(match_cons(v_110, sym_Path_2))
        {
          w_110 = ATgetArgument(v_110, 0);
          x_110 = ATgetArgument(v_110, 1);
          {
            ATerm g_111 = NULL,p_111 = NULL;
            t = not_null(x_110);
            {
              ATerm z_4 (ATerm t)
              {
                ATerm h_111 = NULL,i_111 = NULL,j_111 = NULL;
                h_111 = t;
                s_110 :
                if(match_cons(h_111, sym_selector_2))
                  {
                    i_111 = ATgetArgument(h_111, 0);
                    j_111 = ATgetArgument(h_111, 1);
                    t = not_null(i_111);
                  }
                else
                  _fail(t);
                return(t);
              }
              t = map_1(t, z_4);
              {
                p_111 = t;
                {
                  if(((g_111 != NULL) && (g_111 != p_111)))
                    _fail(p_111);
                  else
                    g_111 = p_111;
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_111)), not_null(w_110));
                }
              }
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm StoreEntry_0 (ATerm t)
{
  ATerm x_111 = NULL,y_111 = NULL,z_111 = NULL;
  x_111 = t;
  w_111 :
  if(match_cons(x_111, sym_PP_Entry_2))
    {
      y_111 = ATgetArgument(x_111, 0);
      z_111 = ATgetArgument(x_111, 1);
      {
        ATerm c_112 = NULL;
        ATerm d_112 = NULL;
        t = not_null(y_111);
        {
          t = mk_key_0(t);
          {
            d_112 = t;
            if(((c_112 != NULL) && (c_112 != d_112)))
              _fail(d_112);
            else
              c_112 = d_112;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_l_18, not_null(c_112), (ATerm) ATmakeAppl(sym__2, not_null(y_111), not_null(z_111)));
          t = table_put_0(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_112 = NULL;
  i_112 = t;
  t = SSL_string_to_int(not_null(i_112));
  return(t);
}
ATerm De_Escape_0 (ATerm t)
{
  ATerm z_112 = NULL,a_113 = NULL,b_113 = NULL,c_113 = NULL,d_113 = NULL;
  ATerm q_113 (ATerm t)
  {
    ATerm g_113 = NULL;
    ATerm h_113 = NULL;
    t = not_null(b_113);
    {
      t = De_Escape_0(t);
      {
        h_113 = t;
        if(((g_113 != NULL) && (g_113 != h_113)))
          _fail(h_113);
        else
          g_113 = h_113;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(g_113)), not_null(a_113));
    return(t);
  }
  ATerm r_113 (ATerm t)
  {
    ATerm j_113 = NULL;
    ATerm k_113 = NULL;
    t = not_null(d_113);
    {
      t = De_Escape_0(t);
      {
        k_113 = t;
        if(((j_113 != NULL) && (j_113 != k_113)))
          _fail(k_113);
        else
          j_113 = k_113;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(j_113)), term_i_22);
    return(t);
  }
  ATerm s_113 (ATerm t)
  {
    ATerm m_113 = NULL;
    ATerm o_113 = NULL;
    t = not_null(d_113);
    {
      t = De_Escape_0(t);
      {
        o_113 = t;
        if(((m_113 != NULL) && (m_113 != o_113)))
          _fail(o_113);
        else
          m_113 = o_113;
      }
    }
    t = (ATerm) ATinsert(CheckATermList(not_null(m_113)), term_j_22);
    return(t);
  }
  z_112 = t;
  s_112 :
  if(((ATermList) z_112 == ATempty))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      if(((ATgetType(z_112) == AT_LIST) && ((ATermList) z_112 != ATempty)))
        {
          a_113 = ATgetFirst((ATermList) z_112);
          b_113 = (ATerm) ATgetNext((ATermList) z_112);
          t_112 :
          if(((ATgetType(b_113) == AT_LIST) && ((ATermList) b_113 != ATempty)))
            {
              c_113 = ATgetFirst((ATermList) b_113);
              d_113 = (ATerm) ATgetNext((ATermList) b_113);
              u_112 :
              if(match_int(c_113, 92))
                {
                  v_112 :
                  if(match_int(a_113, 92))
                    {
                      ATerm d_37 = t;
                      int e_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = q_113(t);
                          LocalPopChoice(e_37);
                        }
                      else
                        {
                          t = d_37;
                          t = r_113(t);
                        }
                    }
                  else
                    t = q_113(t);
                }
              else
                {
                  if(match_int(c_113, 34))
                    {
                      w_112 :
                      if(match_int(a_113, 92))
                        {
                          ATerm f_37 = t;
                          int g_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = q_113(t);
                              LocalPopChoice(g_37);
                            }
                          else
                            {
                              t = f_37;
                              t = s_113(t);
                            }
                        }
                      else
                        t = q_113(t);
                    }
                  else
                    {
                      x_112 :
                      t = q_113(t);
                    }
                }
            }
          else
            {
              y_112 :
              t = q_113(t);
            }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm de_escape_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    t = De_Escape_0(t);
    t = implode_string_0(t);
  }
  return(t);
}
ATerm at_last_1 (ATerm t, ATerm a_90 (ATerm))
{
  ATerm w_113 (ATerm t)
  {
    ATerm h_37 = t;
    int i_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = a_90(t);
        LocalPopChoice(i_37);
      }
    else
      {
        t = h_37;
        t = Cons_2(t, _id, w_113);
      }
    return(t);
  }
  t = w_113(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm z_113 = NULL,a_114 = NULL,b_114 = NULL;
  z_113 = t;
  y_113 :
  if(((ATgetType(z_113) == AT_LIST) && ((ATermList) z_113 != ATempty)))
    {
      a_114 = ATgetFirst((ATermList) z_113);
      b_114 = (ATerm) ATgetNext((ATermList) z_113);
      t = not_null(b_114);
    }
  else
    _fail(t);
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm h_114 = NULL,i_114 = NULL,k_114 = NULL;
  h_114 = t;
  g_114 :
  if(((ATgetType(h_114) == AT_LIST) && ((ATermList) h_114 != ATempty)))
    {
      i_114 = ATgetFirst((ATermList) h_114);
      k_114 = (ATerm) ATgetNext((ATermList) h_114);
      t = not_null(i_114);
    }
  else
    _fail(t);
  return(t);
}
ATerm de_quote_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm j_37;
    j_37 = t;
    {
      ATerm t_114 = NULL;
      t = Hd_0(t);
      {
        t_114 = t;
        o_114 :
        if(!(match_int(t_114, 34)))
          _fail(t);
      }
    }
    t = j_37;
    {
      t = Tl_0(t);
      {
        ATerm a_5 (ATerm t)
        {
          ATerm u_114 = NULL,v_114 = NULL,w_114 = NULL;
          u_114 = t;
          q_114 :
          if(((ATgetType(u_114) == AT_LIST) && ((ATermList) u_114 != ATempty)))
            {
              v_114 = ATgetFirst((ATermList) u_114);
              w_114 = (ATerm) ATgetNext((ATermList) u_114);
              r_114 :
              if(match_int(v_114, 34))
                {
                  s_114 :
                  if(((ATermList) w_114 == ATempty))
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
        t = at_last_1(t, a_5);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm j_115 = NULL,k_115 = NULL,l_115 = NULL;
  j_115 = t;
  i_115 :
  if(match_cons(j_115, sym_Arg_1))
    {
      k_115 = ATgetArgument(j_115, 0);
      {
        ATerm p_115 = NULL;
        ATerm q_115 = NULL;
        t = not_null(k_115);
        {
          t = string_to_int_0(t);
          {
            q_115 = t;
            if(((p_115 != NULL) && (p_115 != q_115)))
              _fail(q_115);
            else
              p_115 = q_115;
          }
        }
        t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(p_115));
      }
    }
  else
    {
      if(match_cons(j_115, sym_Arg2_2))
        {
          k_115 = ATgetArgument(j_115, 0);
          l_115 = ATgetArgument(j_115, 1);
          {
            ATerm u_115 = NULL,w_115 = NULL;
            ATerm k_37;
            k_37 = t;
            {
              ATerm v_115 = NULL;
              t = not_null(k_115);
              {
                t = string_to_int_0(t);
                {
                  v_115 = t;
                  if(((u_115 != NULL) && (u_115 != v_115)))
                    _fail(v_115);
                  else
                    u_115 = v_115;
                }
              }
            }
            t = k_37;
            {
              ATerm x_115 = NULL;
              t = not_null(l_115);
              {
                t = string_to_int_0(t);
                {
                  x_115 = t;
                  if(((w_115 != NULL) && (w_115 != x_115)))
                    _fail(x_115);
                  else
                    w_115 = x_115;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(u_115), not_null(w_115));
            }
          }
        }
      else
        {
          if(match_cons(j_115, sym_SOpt_2))
            {
              k_115 = ATgetArgument(j_115, 0);
              l_115 = ATgetArgument(j_115, 1);
              t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(k_115), not_null(l_115));
            }
          else
            {
              if(match_cons(j_115, sym_S_1))
                {
                  k_115 = ATgetArgument(j_115, 0);
                  {
                    ATerm e_116 = NULL;
                    ATerm f_116 = NULL;
                    t = not_null(k_115);
                    {
                      t = de_quote_0(t);
                      {
                        t = de_escape_0(t);
                        {
                          f_116 = t;
                          if(((e_116 != NULL) && (e_116 != f_116)))
                            _fail(f_116);
                          else
                            e_116 = f_116;
                        }
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_S_1, not_null(e_116));
                  }
                }
              else
                {
                  if(match_cons(j_115, sym_selector_2))
                    {
                      k_115 = ATgetArgument(j_115, 0);
                      l_115 = ATgetArgument(j_115, 1);
                      {
                        ATerm j_116 = NULL;
                        ATerm k_116 = NULL;
                        t = not_null(k_115);
                        {
                          t = string_to_int_0(t);
                          {
                            k_116 = t;
                            if(((j_116 != NULL) && (j_116 != k_116)))
                              _fail(k_116);
                            else
                              j_116 = k_116;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(j_116), not_null(l_115));
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
ATerm makePPEntry_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, d_5);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm x_116 = NULL,y_116 = NULL;
  x_116 = t;
  w_116 :
  if(match_cons(x_116, sym_PP_Table_1))
    {
      y_116 = ATgetArgument(x_116, 0);
      {
        t = not_null(y_116);
        {
          t = reverse_0(t);
          {
            ATerm e_5 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, e_5);
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
  ATerm l_37;
  l_37 = t;
  {
    ATerm c_117 = NULL;
    ATerm d_117 = NULL;
    d_117 = t;
    if(((c_117 != NULL) && (c_117 != d_117)))
      _fail(d_117);
    else
      c_117 = d_117;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_18, not_null(c_117));
      t = printnl_0(t);
    }
  }
  t = l_37;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm q_37;
  q_37 = t;
  {
    t = error_0(t);
    {
      t = term_i_17;
      t = exit_0(t);
    }
  }
  t = q_37;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm q_93 (ATerm))
{
  ATerm f_117 (ATerm t)
  {
    ATerm r_37 = t;
    int s_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = q_93(t);
        LocalPopChoice(s_37);
      }
    else
      {
        t = r_37;
        t = _one(t, f_117);
      }
    return(t);
  }
  t = f_117(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm j_117 = NULL,k_117 = NULL,l_117 = NULL;
  j_117 = t;
  i_117 :
  if(match_cons(j_117, sym__2))
    {
      k_117 = ATgetArgument(j_117, 0);
      l_117 = ATgetArgument(j_117, 1);
      {
        t = not_null(l_117);
        {
          ATerm f_5 (ATerm t)
          {
            ATerm o_117 = NULL;
            o_117 = t;
            if(((k_117 != NULL) && (k_117 != o_117)))
              _fail(o_117);
            else
              k_117 = o_117;
            return(t);
          }
          t = oncetd_1(t, f_5);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm get_options_0 (ATerm t)
{
  t = term_z_37;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm t_117 = NULL;
  ATerm v_117 = NULL;
  t_117 = t;
  {
    ATerm w_117 = NULL;
    t = get_options_0(t);
    {
      w_117 = t;
      {
        if(((v_117 != NULL) && (v_117 != w_117)))
          _fail(w_117);
        else
          v_117 = w_117;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_117), not_null(v_117));
          t = in_0(t);
        }
      }
    }
    t = term_s_15;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm n_79 (ATerm))
{
  ATerm a_38;
  a_38 = t;
  {
    t = term_s_15;
    {
      t = n_79(t);
      t = check_option_0(t);
    }
  }
  t = a_38;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm b_38 = t;
  int c_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm g_5 (ATerm t)
      {
        t = term_d_38;
        return(t);
      }
      t = has_option_1(t, g_5);
      {
        t = (ATerm) ATinsert(ATempty, term_i_38);
        t = fatal_error_0(t);
      }
      LocalPopChoice(c_38);
    }
  else
    {
      t = b_38;
      {
        t = (ATerm) ATinsert(ATempty, term_j_38);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm h_118 = NULL,i_118 = NULL,j_118 = NULL;
  h_118 = t;
  f_118 :
  if(match_cons(h_118, sym__2))
    {
      i_118 = ATgetArgument(h_118, 0);
      j_118 = ATgetArgument(h_118, 1);
      g_118 :
      if(match_string(i_118, "in-type"))
        {
          ATerm l_118 = NULL,m_118 = NULL;
          ATerm k_38;
          k_38 = t;
          {
            ATerm n_118 = NULL;
            ATerm p_118 = NULL,q_118 = NULL,r_118 = NULL,s_118 = NULL,t_118 = NULL;
            t = not_null(j_118);
            {
              n_118 = t;
              {
                t = SSL_explode_term(not_null(n_118));
                {
                  p_118 = t;
                  c_118 :
                  if(match_cons(p_118, sym__2))
                    {
                      q_118 = ATgetArgument(p_118, 0);
                      r_118 = ATgetArgument(p_118, 1);
                      d_118 :
                      if(((ATgetType(r_118) == AT_LIST) && ((ATermList) r_118 != ATempty)))
                        {
                          s_118 = ATgetFirst((ATermList) r_118);
                          t_118 = (ATerm) ATgetNext((ATermList) r_118);
                          e_118 :
                          if(((ATermList) t_118 == ATempty))
                            {
                              {
                                if(((m_118 != NULL) && (m_118 != q_118)))
                                  _fail(q_118);
                                else
                                  m_118 = q_118;
                                if(((l_118 != NULL) && (l_118 != s_118)))
                                  _fail(s_118);
                                else
                                  l_118 = s_118;
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
          t = k_38;
          {
            t = not_null(m_118);
            {
              ATerm l_38 = t;
              int r_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = y_73(t);
                  LocalPopChoice(r_38);
                }
              else
                {
                  t = l_38;
                  t = type_failure_0(t);
                }
            }
            t = not_null(l_118);
          }
        }
      else
        _fail(t);
    }
  else
    _fail(t);
  return(t);
}
ATerm termid_check_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm z_118 = NULL;
  ATerm b_119 = NULL;
  z_118 = t;
  {
    ATerm c_119 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_s_38, not_null(z_118));
    {
      t = InId_1(t, f_74);
      {
        c_119 = t;
        if(((b_119 != NULL) && (b_119 != c_119)))
          _fail(c_119);
        else
          b_119 = c_119;
      }
    }
    t = not_null(b_119);
  }
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm h_119 = NULL;
  h_119 = t;
  {
    t = term_l_18;
    {
      t = table_create_0(t);
      {
        t = not_null(h_119);
        {
          ATerm h_5 (ATerm t)
          {
            t = ReadFromFile_0(t);
            {
              ATerm l_5 (ATerm t)
              {
                ATerm j_119 = NULL;
                j_119 = t;
                g_119 :
                if(!(match_string(j_119, "\"pp-tables-0\"")))
                  _fail(t);
                return(t);
              }
              t = termid_check_1(t, l_5);
              t = build_pp_table_0(t);
            }
            return(t);
          }
          t = map_1(t, h_5);
        }
      }
    }
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm a_85 (ATerm))
{
  ATerm o_119 = NULL,p_119 = NULL,q_119 = NULL;
  o_119 = t;
  n_119 :
  if(((ATgetType(o_119) == AT_LIST) && ((ATermList) o_119 != ATempty)))
    {
      p_119 = ATgetFirst((ATermList) o_119);
      q_119 = (ATerm) ATgetNext((ATermList) o_119);
      {
        t = a_85(t);
        {
          ATerm o_5 (ATerm t)
          {
            ATerm t_119 = NULL;
            t_119 = t;
            if(((p_119 != NULL) && (p_119 != t_119)))
              _fail(t_119);
            else
              p_119 = t_119;
            return(t);
          }
          t = fetch_1(t, o_5);
        }
        t = not_null(q_119);
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm y_119 = NULL,z_119 = NULL,a_120 = NULL;
  y_119 = t;
  x_119 :
  if(match_cons(y_119, sym__2))
    {
      z_119 = ATgetArgument(y_119, 0);
      a_120 = ATgetArgument(y_119, 1);
      {
        t = not_null(z_119);
        {
          ATerm e_120 (ATerm t)
          {
            ATerm t_38 = t;
            int b_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(a_120);
                LocalPopChoice(b_39);
              }
            else
              {
                t = t_38;
                {
                  ATerm c_39 = t;
                  int d_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm p_5 (ATerm t)
                      {
                        t = not_null(a_120);
                        return(t);
                      }
                      t = HdMember_1(t, p_5);
                      t = e_120(t);
                      LocalPopChoice(d_39);
                    }
                  else
                    {
                      t = c_39;
                      t = Cons_2(t, _id, e_120);
                    }
                }
              }
            return(t);
          }
          t = e_120(t);
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm y_83 (ATerm), ATerm z_83 (ATerm), ATerm a_84 (ATerm))
{
  ATerm g_39 = t;
  int h_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = y_83(t);
      LocalPopChoice(h_39);
    }
  else
    {
      t = g_39;
      {
        ATerm j_120 = NULL,k_120 = NULL,l_120 = NULL;
        j_120 = t;
        i_120 :
        if(((ATgetType(j_120) == AT_LIST) && ((ATermList) j_120 != ATempty)))
          {
            k_120 = ATgetFirst((ATermList) j_120);
            l_120 = (ATerm) ATgetNext((ATermList) j_120);
            {
              ATerm o_120 = NULL,q_120 = NULL;
              ATerm i_39;
              i_39 = t;
              {
                ATerm p_120 = NULL;
                t = not_null(k_120);
                {
                  t = a_84(t);
                  {
                    p_120 = t;
                    if(((o_120 != NULL) && (o_120 != p_120)))
                      _fail(p_120);
                    else
                      o_120 = p_120;
                  }
                }
              }
              t = i_39;
              {
                ATerm r_120 = NULL;
                t = not_null(l_120);
                {
                  t = foldr_3(t, y_83, z_83, a_84);
                  {
                    r_120 = t;
                    if(((q_120 != NULL) && (q_120 != r_120)))
                      _fail(r_120);
                    else
                      q_120 = r_120;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(o_120), not_null(q_120));
                  t = z_83(t);
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
ATerm crush_3 (ATerm t, ATerm l_85 (ATerm), ATerm m_85 (ATerm), ATerm n_85 (ATerm))
{
  ATerm z_120 = NULL;
  ATerm b_121 = NULL;
  z_120 = t;
  {
    ATerm c_121 = NULL;
    ATerm e_121 = NULL,f_121 = NULL,g_121 = NULL;
    t = not_null(z_120);
    {
      c_121 = t;
      {
        t = SSL_explode_term(not_null(c_121));
        {
          e_121 = t;
          y_120 :
          if(match_cons(e_121, sym__2))
            {
              f_121 = ATgetArgument(e_121, 0);
              g_121 = ATgetArgument(e_121, 1);
              if(((b_121 != NULL) && (b_121 != g_121)))
                _fail(g_121);
              else
                b_121 = g_121;
            }
          else
            _fail(t);
        }
      }
    }
    {
      t = not_null(b_121);
      t = foldr_3(t, l_85, m_85, n_85);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm z_85 (ATerm))
{
  ATerm n_121 (ATerm t)
  {
    ATerm j_39 = t;
    int k_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_121 = NULL;
        ATerm m_121 = NULL;
        t = z_85(t);
        {
          m_121 = t;
          if(((l_121 != NULL) && (l_121 != m_121)))
            _fail(m_121);
          else
            l_121 = m_121;
        }
        t = (ATerm) ATinsert(ATempty, not_null(l_121));
        LocalPopChoice(k_39);
      }
    else
      {
        t = j_39;
        {
          ATerm q_5 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, q_5, union_0, n_121);
        }
      }
    return(t);
  }
  t = n_121(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm b_86 (ATerm))
{
  t = collect_om_1(t, b_86);
  return(t);
}
ATerm asfix2abox_0 (ATerm t)
{
  ATerm v_121 = NULL,w_121 = NULL,x_121 = NULL;
  v_121 = t;
  u_121 :
  if(match_cons(v_121, sym__2))
    {
      w_121 = ATgetArgument(v_121, 0);
      x_121 = ATgetArgument(v_121, 1);
      {
        t = not_null(w_121);
        {
          ATerm b_6 (ATerm t)
          {
            ATerm a_122 = NULL,b_122 = NULL;
            a_122 = t;
            r_121 :
            if(match_cons(a_122, sym_PP_Table_1))
              {
                b_122 = ATgetArgument(a_122, 0);
                t = not_null(b_122);
              }
            else
              _fail(t);
            return(t);
          }
          t = collect_1(t, b_6);
          {
            t = reverse_0(t);
            {
              t = read_pp_tables_0(t);
              {
                t = not_null(x_121);
                {
                  ATerm c_6 (ATerm t)
                  {
                    ATerm d_6 (ATerm t)
                    {
                      ATerm d_122 = NULL,e_122 = NULL;
                      d_122 = t;
                      t_121 :
                      if(match_cons(d_122, sym_cf_1))
                        {
                          e_122 = ATgetArgument(d_122, 0);
                          t = not_null(e_122);
                        }
                      else
                        _fail(t);
                      return(t);
                    }
                    t = sometd_1(t, d_6);
                    return(t);
                  }
                  t = repeat_1(t, c_6);
                  {
                    ATerm e_6 (ATerm t)
                    {
                      ATerm h_6 (ATerm t)
                      {
                        ATerm i_6 (ATerm t)
                        {
                          t = is_list_0(t);
                          {
                            ATerm y_6 (ATerm t)
                            {
                              ATerm l_39 = t;
                              if((PushChoice() == 0))
                                {
                                  t = opt_1(t, layout_0);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                t = l_39;
                              {
                                ATerm m_39 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = layout_1(t, _id);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  t = m_39;
                              }
                              return(t);
                            }
                            t = filter_1(t, y_6);
                          }
                          return(t);
                        }
                        t = try_1(t, i_6);
                        return(t);
                      }
                      t = topdown_1(t, h_6);
                      t = appl2abox_0(t);
                      return(t);
                    }
                    ATerm g_6 (ATerm t)
                    {
                      ATerm u_7 (ATerm t)
                      {
                        t = layout_1(t, _id);
                        return(t);
                      }
                      t = collect_p__1(t, u_7);
                      return(t);
                    }
                    t = split_2(t, e_6, g_6);
                    {
                      t = insert_layout_0(t);
                      {
                        ATerm v_7 (ATerm t)
                        {
                          t = not_null(w_121);
                          return(t);
                        }
                        t = split_2(t, v_7, _id);
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
  else
    _fail(t);
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm l_122 = NULL;
  ATerm n_39;
  n_39 = t;
  {
    ATerm w_7 (ATerm t)
    {
      ATerm m_122 = NULL,n_122 = NULL;
      m_122 = t;
      k_122 :
      if(match_cons(m_122, sym_Program_1))
        {
          n_122 = ATgetArgument(m_122, 0);
          if(((l_122 != NULL) && (l_122 != n_122)))
            _fail(n_122);
          else
            l_122 = n_122;
        }
      else
        _fail(t);
      return(t);
    }
    t = option_defined_1(t, w_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_p_39), not_null(l_122)), term_o_39));
      {
        t = printnl_0(t);
        {
          t = term_i_17;
          t = exit_0(t);
        }
      }
    }
  }
  t = n_39;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATempty, term_q_39));
  {
    t = printnl_0(t);
    {
      t = term_i_17;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm u_122 = NULL,v_122 = NULL;
  ATerm x_7 (ATerm t)
  {
    ATerm y_7 (ATerm t)
    {
      ATerm r_39 = t;
      if((PushChoice() == 0))
        {
          ATerm z_7 (ATerm t)
          {
            ATerm w_122 = NULL;
            w_122 = t;
            p_122 :
            if(!(match_cons(w_122, sym_Silent_0)))
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, z_7);
          PopChoice();
          _fail(t);
        }
      else
        t = r_39;
      return(t);
    }
    t = _2(t, y_7, _id);
    {
      ATerm a_8 (ATerm t)
      {
        ATerm c_8 (ATerm t)
        {
          ATerm x_122 = NULL,y_122 = NULL;
          x_122 = t;
          r_122 :
          if(match_cons(x_122, sym_Runtime_1))
            {
              y_122 = ATgetArgument(x_122, 0);
              if(((v_122 != NULL) && (v_122 != y_122)))
                _fail(y_122);
              else
                v_122 = y_122;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, c_8);
        return(t);
      }
      t = _2(t, a_8, _id);
      {
        ATerm d_8 (ATerm t)
        {
          ATerm e_8 (ATerm t)
          {
            ATerm z_122 = NULL,a_123 = NULL;
            z_122 = t;
            t_122 :
            if(match_cons(z_122, sym_Program_1))
              {
                a_123 = ATgetArgument(z_122, 0);
                if(((u_122 != NULL) && (u_122 != a_123)))
                  _fail(a_123);
                else
                  u_122 = a_123;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, e_8);
          return(t);
        }
        t = _2(t, d_8, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_39), not_null(v_122)), term_s_39), not_null(u_122)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, x_7);
  {
    t = term_u_39;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm f_123 = NULL,g_123 = NULL,h_123 = NULL;
  f_123 = t;
  e_123 :
  if(match_cons(f_123, sym__2))
    {
      g_123 = ATgetArgument(f_123, 0);
      h_123 = ATgetArgument(f_123, 1);
      t = SSL_WriteToTextFile(not_null(g_123), not_null(h_123));
    }
  else
    _fail(t);
  return(t);
}
ATerm _2 (ATerm t, ATerm x_55 (ATerm), ATerm y_55 (ATerm))
{
  ATerm p_123 = NULL,q_123 = NULL,r_123 = NULL;
  p_123 = t;
  o_123 :
  if(match_cons(p_123, sym__2))
    {
      q_123 = ATgetArgument(p_123, 0);
      r_123 = ATgetArgument(p_123, 1);
      {
        ATerm u_123 = NULL;
        t = not_null(q_123);
        {
          ATerm w_123 = NULL;
          t = x_55(t);
          {
            u_123 = t;
            {
              t = not_null(r_123);
              {
                t = y_55(t);
                {
                  w_123 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_123), not_null(w_123));
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm d_124 = NULL,e_124 = NULL,f_124 = NULL;
  d_124 = t;
  c_124 :
  if(match_cons(d_124, sym__2))
    {
      e_124 = ATgetArgument(d_124, 0);
      f_124 = ATgetArgument(d_124, 1);
      t = SSL_WriteToBinaryFile(not_null(e_124), not_null(f_124));
    }
  else
    _fail(t);
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm n_124 = NULL;
  ATerm v_39;
  v_39 = t;
  {
    ATerm f_8 (ATerm t)
    {
      ATerm w_39 = t;
      int x_39 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_8 (ATerm t)
          {
            ATerm o_124 = NULL,p_124 = NULL;
            o_124 = t;
            k_124 :
            if(match_cons(o_124, sym_Output_1))
              {
                p_124 = ATgetArgument(o_124, 0);
                if(((n_124 != NULL) && (n_124 != p_124)))
                  _fail(p_124);
                else
                  n_124 = p_124;
              }
            else
              _fail(t);
            return(t);
          }
          t = option_defined_1(t, g_8);
          LocalPopChoice(x_39);
        }
      else
        {
          t = w_39;
          {
            ATerm q_124 = NULL;
            t = term_y_39;
            {
              q_124 = t;
              if(((n_124 != NULL) && (n_124 != q_124)))
                _fail(q_124);
              else
                n_124 = q_124;
            }
          }
        }
      return(t);
    }
    t = _2(t, f_8, _id);
  }
  t = v_39;
  {
    ATerm h_8 (ATerm t)
    {
      ATerm i_8 (ATerm t)
      {
        t = not_null(n_124);
        return(t);
      }
      t = split_2(t, i_8, _id);
      return(t);
    }
    t = _2(t, _id, h_8);
    {
      ATerm z_39 = t;
      int a_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm j_8 (ATerm t)
          {
            ATerm k_8 (ATerm t)
            {
              ATerm r_124 = NULL;
              r_124 = t;
              m_124 :
              if(!(match_cons(r_124, sym_Binary_0)))
                _fail(t);
              return(t);
            }
            t = option_defined_1(t, k_8);
            return(t);
          }
          t = _2(t, j_8, WriteToBinaryFile_0);
          LocalPopChoice(a_40);
        }
      else
        {
          t = z_39;
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
ATerm apply_strategy_1 (ATerm t, ATerm r_79 (ATerm))
{
  ATerm x_124 = NULL,z_124 = NULL,a_125 = NULL,b_125 = NULL;
  ATerm b_40;
  b_40 = t;
  t = dtime_0(t);
  t = b_40;
  {
    t = r_79(t);
    {
      ATerm c_40;
      c_40 = t;
      {
        ATerm y_124 = NULL;
        t = dtime_0(t);
        {
          y_124 = t;
          if(((x_124 != NULL) && (x_124 != y_124)))
            _fail(y_124);
          else
            x_124 = y_124;
        }
      }
      t = c_40;
      {
        z_124 = t;
        w_124 :
        if(match_cons(z_124, sym__2))
          {
            a_125 = ATgetArgument(z_124, 0);
            b_125 = ATgetArgument(z_124, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(a_125)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(x_124))), not_null(b_125));
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
  ATerm h_125 = NULL;
  h_125 = t;
  t = SSL_ReadFromFile(not_null(h_125));
  return(t);
}
ATerm split_2 (ATerm t, ATerm k_82 (ATerm), ATerm l_82 (ATerm))
{
  ATerm m_125 = NULL,o_125 = NULL;
  ATerm d_40;
  d_40 = t;
  {
    ATerm n_125 = NULL;
    t = k_82(t);
    {
      n_125 = t;
      if(((m_125 != NULL) && (m_125 != n_125)))
        _fail(n_125);
      else
        m_125 = n_125;
    }
  }
  t = d_40;
  {
    ATerm p_125 = NULL;
    t = l_82(t);
    {
      p_125 = t;
      if(((o_125 != NULL) && (o_125 != p_125)))
        _fail(p_125);
      else
        o_125 = p_125;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_125), not_null(o_125));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm v_125 = NULL;
  ATerm e_40;
  e_40 = t;
  {
    ATerm f_40 = t;
    int g_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_8 (ATerm t)
        {
          ATerm w_125 = NULL,x_125 = NULL;
          w_125 = t;
          t_125 :
          if(match_cons(w_125, sym_Input_1))
            {
              x_125 = ATgetArgument(w_125, 0);
              if(((v_125 != NULL) && (v_125 != x_125)))
                _fail(x_125);
              else
                v_125 = x_125;
            }
          else
            _fail(t);
          return(t);
        }
        t = option_defined_1(t, l_8);
        LocalPopChoice(g_40);
      }
    else
      {
        t = f_40;
        {
          ATerm y_125 = NULL;
          t = term_h_40;
          {
            y_125 = t;
            if(((v_125 != NULL) && (v_125 != y_125)))
              _fail(y_125);
            else
              v_125 = y_125;
          }
        }
      }
  }
  t = e_40;
  {
    ATerm m_8 (ATerm t)
    {
      t = not_null(v_125);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, m_8);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm c_126 = NULL;
  c_126 = t;
  b_126 :
  if(!(match_cons(c_126, sym_Version_0)))
    _fail(t);
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_79 (ATerm))
{
  ATerm o_8 (ATerm t)
  {
    ATerm i_40 = t;
    int h_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(h_41);
      }
    else
      {
        t = i_40;
        {
          ATerm i_41 = t;
          int j_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(j_41);
            }
          else
            {
              t = i_41;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_8);
  t = q_79(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_126 = NULL;
  e_126 = t;
  t = SSL_table_create(not_null(e_126));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_126 = NULL;
  i_126 = t;
  {
    ATerm k_41;
    k_41 = t;
    {
      t = term_x_37;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_x_37, term_y_37, not_null(i_126));
          t = table_put_0(t);
        }
      }
    }
    t = k_41;
  }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm l_41 = t;
  int m_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_8 (ATerm t)
      {
        ATerm w_126 = NULL;
        w_126 = t;
        l_126 :
        if(!(match_string(w_126, "-S")))
          {
            if(!(match_string(w_126, "--silent")))
              _fail(t);
          }
        return(t);
      }
      ATerm s_8 (ATerm t)
      {
        t = term_m_19;
        return(t);
      }
      ATerm u_8 (ATerm t)
      {
        t = term_n_41;
        return(t);
      }
      t = Option_3(t, q_8, s_8, u_8);
      LocalPopChoice(m_41);
    }
  else
    {
      t = l_41;
      {
        ATerm o_41 = t;
        int p_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_8 (ATerm t)
            {
              ATerm x_126 = NULL;
              x_126 = t;
              m_126 :
              if(!(match_string(x_126, "--verbose")))
                _fail(t);
              return(t);
            }
            ATerm x_8 (ATerm t)
            {
              t = term_q_41;
              return(t);
            }
            ATerm a_9 (ATerm t)
            {
              t = term_r_41;
              return(t);
            }
            t = Option_3(t, w_8, x_8, a_9);
            LocalPopChoice(p_41);
          }
        else
          {
            t = o_41;
            {
              ATerm s_41 = t;
              int t_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm c_9 (ATerm t)
                  {
                    ATerm y_126 = NULL;
                    y_126 = t;
                    n_126 :
                    if(!(match_string(y_126, "-v")))
                      {
                        if(!(match_string(y_126, "--version")))
                          _fail(t);
                      }
                    return(t);
                  }
                  ATerm e_9 (ATerm t)
                  {
                    t = term_u_41;
                    return(t);
                  }
                  ATerm g_9 (ATerm t)
                  {
                    t = term_v_41;
                    return(t);
                  }
                  t = Option_3(t, c_9, e_9, g_9);
                  LocalPopChoice(t_41);
                }
              else
                {
                  t = s_41;
                  {
                    ATerm w_41 = t;
                    int n_42 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_9 (ATerm t)
                        {
                          ATerm z_126 = NULL;
                          z_126 = t;
                          o_126 :
                          if(!(match_string(z_126, "@version")))
                            _fail(t);
                          return(t);
                        }
                        ATerm l_9 (ATerm t)
                        {
                          ATerm a_127 = NULL;
                          ATerm b_127 = NULL;
                          b_127 = t;
                          if(((a_127 != NULL) && (a_127 != b_127)))
                            _fail(b_127);
                          else
                            a_127 = b_127;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(a_127));
                          return(t);
                        }
                        ATerm r_11 (ATerm t)
                        {
                          t = term_o_42;
                          return(t);
                        }
                        t = ArgOption_3(t, k_9, l_9, r_11);
                        LocalPopChoice(n_42);
                      }
                    else
                      {
                        t = w_41;
                        {
                          ATerm q_42 = t;
                          int r_42 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm s_11 (ATerm t)
                              {
                                ATerm c_127 = NULL;
                                c_127 = t;
                                q_126 :
                                if(!(match_string(c_127, "-i")))
                                  {
                                    if(!(match_string(c_127, "--input")))
                                      _fail(t);
                                  }
                                return(t);
                              }
                              ATerm t_11 (ATerm t)
                              {
                                ATerm d_127 = NULL;
                                ATerm e_127 = NULL;
                                e_127 = t;
                                if(((d_127 != NULL) && (d_127 != e_127)))
                                  _fail(e_127);
                                else
                                  d_127 = e_127;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(d_127));
                                return(t);
                              }
                              ATerm w_11 (ATerm t)
                              {
                                t = term_s_42;
                                return(t);
                              }
                              t = ArgOption_3(t, s_11, t_11, w_11);
                              LocalPopChoice(r_42);
                            }
                          else
                            {
                              t = q_42;
                              {
                                ATerm t_42 = t;
                                int g_43 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_11 (ATerm t)
                                    {
                                      ATerm f_127 = NULL;
                                      f_127 = t;
                                      s_126 :
                                      if(!(match_string(f_127, "-o")))
                                        {
                                          if(!(match_string(f_127, "--uotput")))
                                            _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm z_11 (ATerm t)
                                    {
                                      ATerm g_127 = NULL;
                                      ATerm h_127 = NULL;
                                      h_127 = t;
                                      if(((g_127 != NULL) && (g_127 != h_127)))
                                        _fail(h_127);
                                      else
                                        g_127 = h_127;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(g_127));
                                      return(t);
                                    }
                                    ATerm a_12 (ATerm t)
                                    {
                                      t = term_h_43;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, y_11, z_11, a_12);
                                    LocalPopChoice(g_43);
                                  }
                                else
                                  {
                                    t = t_42;
                                    {
                                      ATerm i_43 = t;
                                      int j_43 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm b_12 (ATerm t)
                                          {
                                            ATerm i_127 = NULL;
                                            i_127 = t;
                                            u_126 :
                                            if(!(match_string(i_127, "-b")))
                                              _fail(t);
                                            return(t);
                                          }
                                          ATerm c_12 (ATerm t)
                                          {
                                            t = term_k_43;
                                            return(t);
                                          }
                                          ATerm d_12 (ATerm t)
                                          {
                                            t = term_r_43;
                                            return(t);
                                          }
                                          t = Option_3(t, b_12, c_12, d_12);
                                          LocalPopChoice(j_43);
                                        }
                                      else
                                        {
                                          t = i_43;
                                          {
                                            ATerm e_12 (ATerm t)
                                            {
                                              ATerm j_127 = NULL;
                                              j_127 = t;
                                              v_126 :
                                              if(!(match_string(j_127, "-s")))
                                                _fail(t);
                                              return(t);
                                            }
                                            ATerm f_12 (ATerm t)
                                            {
                                              t = term_s_43;
                                              return(t);
                                            }
                                            ATerm g_12 (ATerm t)
                                            {
                                              t = term_w_43;
                                              return(t);
                                            }
                                            t = Option_3(t, e_12, f_12, g_12);
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
  ATerm o_127 = NULL;
  o_127 = t;
  t = SSL_table_destroy(not_null(o_127));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm s_127 = NULL;
  s_127 = t;
  t = SSL_exit(not_null(s_127));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm w_127 = NULL;
  w_127 = t;
  t = SSL_implode_string(not_null(w_127));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_89 (ATerm))
{
  ATerm z_127 (ATerm t)
  {
    ATerm x_43 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, z_127);
        LocalPopChoice(f_44);
      }
    else
      {
        t = x_43;
        {
          t = Nil_0(t);
          t = q_89(t);
        }
      }
    return(t);
  }
  t = z_127(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm p_44 = t;
  int q_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_44);
    }
  else
    {
      t = p_44;
      {
        ATerm c_128 = NULL,d_128 = NULL,e_128 = NULL;
        c_128 = t;
        b_128 :
        if(((ATgetType(c_128) == AT_LIST) && ((ATermList) c_128 != ATempty)))
          {
            d_128 = ATgetFirst((ATermList) c_128);
            e_128 = (ATerm) ATgetNext((ATermList) c_128);
            {
              t = not_null(d_128);
              {
                ATerm h_12 (ATerm t)
                {
                  t = not_null(e_128);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, h_12);
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
  ATerm k_128 = NULL;
  k_128 = t;
  t = SSL_explode_string(not_null(k_128));
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
ATerm long_description_1 (ATerm t, ATerm x_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm c_89 (ATerm))
{
  ATerm n_128 (ATerm t)
  {
    ATerm r_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(u_44);
      }
    else
      {
        t = r_44;
        t = Cons_2(t, c_89, n_128);
      }
    return(t);
  }
  t = n_128(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm g_0 (ATerm), ATerm h_0 (ATerm))
{
  ATerm u_128 = NULL,v_128 = NULL,w_128 = NULL;
  w_128 = t;
  t_128 :
  if(((ATgetType(w_128) == AT_LIST) && ((ATermList) w_128 != ATempty)))
    {
      u_128 = ATgetFirst((ATermList) w_128);
      v_128 = (ATerm) ATgetNext((ATermList) w_128);
      {
        ATerm z_128 = NULL;
        t = not_null(v_128);
        {
          ATerm x_44;
          x_44 = t;
          {
            ATerm a_129 = NULL,c_129 = NULL,e_129 = NULL;
            ATerm y_44;
            y_44 = t;
            {
              ATerm b_129 = NULL;
              t = h_0(t);
              {
                b_129 = t;
                if(((a_129 != NULL) && (a_129 != b_129)))
                  _fail(b_129);
                else
                  a_129 = b_129;
              }
            }
            t = y_44;
            {
              ATerm d_129 = NULL;
              t = not_null(u_128);
              {
                t = g_0(t);
                {
                  d_129 = t;
                  if(((c_129 != NULL) && (c_129 != d_129)))
                    _fail(d_129);
                  else
                    c_129 = d_129;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(a_129)), not_null(c_129));
                {
                  e_129 = t;
                  if(((z_128 != NULL) && (z_128 != e_129)))
                    _fail(e_129);
                  else
                    z_128 = e_129;
                }
              }
            }
          }
          t = x_44;
          {
            ATerm i_12 (ATerm t)
            {
              t = not_null(z_128);
              return(t);
            }
            t = reverse_acc_2(t, g_0, i_12);
          }
        }
      }
    }
  else
    {
      if(((ATermList) w_128 == ATempty))
        {
          {
            t = term_s_15;
            t = h_0(t);
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm reverse_0 (ATerm t)
{
  ATerm j_12 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, j_12);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm w_77 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_68 (ATerm))
{
  ATerm n_129 = NULL,o_129 = NULL;
  n_129 = t;
  m_129 :
  if(match_cons(n_129, sym_Program_1))
    {
      o_129 = ATgetArgument(n_129, 0);
      {
        ATerm q_129 = NULL;
        t = not_null(o_129);
        {
          t = a_68(t);
          {
            q_129 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(q_129));
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
  ATerm y_129 = NULL;
  ATerm k_12 (ATerm t)
  {
    ATerm l_12 (ATerm t)
    {
      ATerm z_129 = NULL;
      z_129 = t;
      if(((y_129 != NULL) && (y_129 != z_129)))
        _fail(z_129);
      else
        y_129 = z_129;
      return(t);
    }
    t = Program_1(t, l_12);
    return(t);
  }
  t = option_defined_1(t, k_12);
  {
    ATerm m_12 (ATerm t)
    {
      ATerm a_130 = NULL;
      ATerm b_130 = NULL;
      t = term_s_15;
      {
        ATerm n_12 (ATerm t)
        {
          t = not_null(y_129);
          return(t);
        }
        t = short_description_1(t, n_12);
        {
          t = concat_strings_0(t);
          {
            b_130 = t;
            if(((a_130 != NULL) && (a_130 != b_130)))
              _fail(b_130);
            else
              a_130 = b_130;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATempty, not_null(a_130)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, m_12);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATempty, term_z_44));
      {
        t = printnl_0(t);
        {
          t = term_i_45;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm o_12 (ATerm t)
                {
                  ATerm c_130 = NULL;
                  c_130 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_130)), term_j_45));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, o_12);
                {
                  ATerm p_12 (ATerm t)
                  {
                    ATerm e_130 = NULL;
                    ATerm f_130 = NULL;
                    t = term_s_15;
                    {
                      ATerm q_12 (ATerm t)
                      {
                        t = not_null(y_129);
                        return(t);
                      }
                      t = long_description_1(t, q_12);
                      {
                        t = concat_strings_0(t);
                        {
                          f_130 = t;
                          if(((e_130 != NULL) && (e_130 != f_130)))
                            _fail(f_130);
                          else
                            e_130 = f_130;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(e_130)), term_k_45));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, p_12);
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
  ATerm m_130 = NULL,n_130 = NULL,o_130 = NULL;
  m_130 = t;
  l_130 :
  if(match_cons(m_130, sym__2))
    {
      n_130 = ATgetArgument(m_130, 0);
      o_130 = ATgetArgument(m_130, 1);
      {
        ATerm l_45;
        l_45 = t;
        t = SSL_printnl(not_null(n_130), not_null(o_130));
        t = l_45;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm b_68 (ATerm))
{
  ATerm v_130 = NULL,w_130 = NULL;
  v_130 = t;
  u_130 :
  if(match_cons(v_130, sym_Undefined_1))
    {
      w_130 = ATgetArgument(v_130, 0);
      {
        ATerm y_130 = NULL;
        t = not_null(w_130);
        {
          t = b_68(t);
          {
            y_130 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_130));
          }
        }
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm fetch_1 (ATerm t, ATerm k_89 (ATerm))
{
  ATerm c_131 (ATerm t)
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_89, _id);
        LocalPopChoice(n_45);
      }
    else
      {
        t = m_45;
        t = Cons_2(t, _id, c_131);
      }
    return(t);
  }
  t = c_131(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm v_78 (ATerm))
{
  t = fetch_1(t, v_78);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm e_131 = NULL;
  e_131 = t;
  d_131 :
  if(!(match_cons(e_131, sym_Help_0)))
    _fail(t);
  return(t);
}
ATerm try_1 (ATerm t, ATerm e_96 (ATerm))
{
  ATerm o_45 = t;
  int u_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = e_96(t);
      LocalPopChoice(u_45);
    }
  else
    {
      t = o_45;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_131 = NULL,i_131 = NULL,j_131 = NULL;
  h_131 = t;
  g_131 :
  if(match_cons(h_131, sym__2))
    {
      i_131 = ATgetArgument(h_131, 0);
      j_131 = ATgetArgument(h_131, 1);
      t = SSL_table_get(not_null(i_131), not_null(j_131));
    }
  else
    _fail(t);
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_131 = NULL,r_131 = NULL,s_131 = NULL,t_131 = NULL;
  q_131 = t;
  p_131 :
  if(match_cons(q_131, sym__3))
    {
      r_131 = ATgetArgument(q_131, 0);
      s_131 = ATgetArgument(q_131, 1);
      t_131 = ATgetArgument(q_131, 2);
      {
        ATerm v_45;
        v_45 = t;
        {
          ATerm x_131 = NULL;
          ATerm y_131 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_131), not_null(s_131));
          {
            ATerm w_45 = t;
            int x_45 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_45);
              }
            else
              {
                t = w_45;
                t = (ATerm) ATempty;
              }
            {
              y_131 = t;
              if(((x_131 != NULL) && (x_131 != y_131)))
                _fail(y_131);
              else
                x_131 = y_131;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_131), not_null(s_131), (ATerm) ATinsert(CheckATermList(not_null(x_131)), not_null(t_131)));
            t = table_put_0(t);
          }
        }
        t = v_45;
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm b_78 (ATerm))
{
  ATerm c_132 = NULL;
  ATerm d_132 = NULL;
  t = term_s_15;
  {
    t = b_78(t);
    {
      d_132 = t;
      if(((c_132 != NULL) && (c_132 != d_132)))
        _fail(d_132);
      else
        c_132 = d_132;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_c_45, term_h_45, not_null(c_132));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm), ATerm f_0 (ATerm))
{
  ATerm j_132 = NULL,k_132 = NULL,l_132 = NULL;
  j_132 = t;
  i_132 :
  if(match_string(j_132, "register-usage-info"))
    t = register_usage_1(t, f_0);
  else
    {
      if(((ATgetType(j_132) == AT_LIST) && ((ATermList) j_132 != ATempty)))
        {
          k_132 = ATgetFirst((ATermList) j_132);
          l_132 = (ATerm) ATgetNext((ATermList) j_132);
          {
            ATerm o_132 = NULL;
            ATerm y_45;
            y_45 = t;
            {
              t = not_null(k_132);
              t = b_0(t);
            }
            t = y_45;
            {
              ATerm p_132 = NULL;
              t = term_s_15;
              {
                t = c_0(t);
                {
                  p_132 = t;
                  if(((o_132 != NULL) && (o_132 != p_132)))
                    _fail(p_132);
                  else
                    o_132 = p_132;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_132)), not_null(o_132));
            }
          }
        }
      else
        _fail(t);
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm r_12 (ATerm t)
  {
    ATerm u_132 = NULL;
    u_132 = t;
    t_132 :
    if(!(match_string(u_132, "--help")))
      {
        if(!(match_string(u_132, "-h")))
          {
            if(!(match_string(u_132, "-?")))
              _fail(t);
          }
      }
    return(t);
  }
  ATerm s_12 (ATerm t)
  {
    t = term_b_46;
    return(t);
  }
  ATerm t_12 (ATerm t)
  {
    t = term_c_46;
    return(t);
  }
  t = Option_3(t, r_12, s_12, t_12);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_132 = NULL,y_132 = NULL,z_132 = NULL;
  x_132 = t;
  w_132 :
  if(((ATgetType(x_132) == AT_LIST) && ((ATermList) x_132 != ATempty)))
    {
      y_132 = ATgetFirst((ATermList) x_132);
      z_132 = (ATerm) ATgetNext((ATermList) x_132);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_132)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_132)));
    }
  else
    _fail(t);
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm r_72 (ATerm), ATerm s_72 (ATerm))
{
  ATerm h_133 = NULL,i_133 = NULL,j_133 = NULL;
  h_133 = t;
  g_133 :
  if(((ATgetType(h_133) == AT_LIST) && ((ATermList) h_133 != ATempty)))
    {
      i_133 = ATgetFirst((ATermList) h_133);
      j_133 = (ATerm) ATgetNext((ATermList) h_133);
      {
        ATerm m_133 = NULL;
        t = not_null(i_133);
        {
          ATerm o_133 = NULL;
          t = r_72(t);
          {
            m_133 = t;
            {
              t = not_null(j_133);
              {
                t = s_72(t);
                {
                  o_133 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(o_133)), not_null(m_133));
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
  ATerm u_133 = NULL;
  u_133 = t;
  t_133 :
  if(((ATermList) u_133 == ATempty))
    {
      {
      }
    }
  else
    _fail(t);
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm d_46;
  d_46 = t;
  {
    ATerm u_12 (ATerm t)
    {
      t = term_e_46;
      t = z_77(t);
      return(t);
    }
    t = try_1(t, u_12);
  }
  t = d_46;
  {
    ATerm v_12 (ATerm t)
    {
      ATerm w_133 = NULL;
      w_133 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(w_133));
      return(t);
    }
    ATerm w_12 (ATerm t)
    {
      ATerm f_46 = t;
      int g_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_46 = t;
          int i_46 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_46);
            }
          else
            {
              t = h_46;
              {
                t = z_77(t);
                t = Cons_2(t, _id, w_12);
              }
            }
          LocalPopChoice(g_46);
        }
      else
        {
          t = f_46;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, v_12, w_12);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm c_134 = NULL,d_134 = NULL,e_134 = NULL;
  ATerm j_46;
  j_46 = t;
  {
    ATerm f_134 = NULL,g_134 = NULL,h_134 = NULL,i_134 = NULL;
    f_134 = t;
    b_134 :
    if(match_cons(f_134, sym__3))
      {
        g_134 = ATgetArgument(f_134, 0);
        h_134 = ATgetArgument(f_134, 1);
        i_134 = ATgetArgument(f_134, 2);
        {
          if(((c_134 != NULL) && (c_134 != g_134)))
            _fail(g_134);
          else
            c_134 = g_134;
          {
            if(((d_134 != NULL) && (d_134 != h_134)))
              _fail(h_134);
            else
              d_134 = h_134;
            {
              if(((e_134 != NULL) && (e_134 != i_134)))
                _fail(i_134);
              else
                e_134 = i_134;
              t = SSL_table_put(not_null(c_134), not_null(d_134), not_null(e_134));
            }
          }
        }
      }
    else
      _fail(t);
  }
  t = j_46;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm y_77 (ATerm))
{
  ATerm l_134 = NULL;
  ATerm k_46;
  k_46 = t;
  {
    t = term_l_46;
    t = table_put_0(t);
  }
  t = k_46;
  {
    ATerm a_13 (ATerm t)
    {
      ATerm m_46 = t;
      int p_46 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = y_77(t);
          LocalPopChoice(p_46);
        }
      else
        {
          t = m_46;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, a_13);
    {
      ATerm c_13 (ATerm t)
      {
        ATerm q_46 = t;
        int r_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_u_39;
                t = exit_0(t);
              }
            }
            LocalPopChoice(r_46);
          }
        else
          {
            t = q_46;
            {
              ATerm d_13 (ATerm t)
              {
                ATerm e_13 (ATerm t)
                {
                  ATerm m_134 = NULL;
                  m_134 = t;
                  if(((l_134 != NULL) && (l_134 != m_134)))
                    _fail(m_134);
                  else
                    l_134 = m_134;
                  return(t);
                }
                t = Undefined_1(t, e_13);
                return(t);
              }
              t = option_defined_1(t, d_13);
              {
                ATerm s_46;
                s_46 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_t_18, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_134)), term_t_46));
                  t = printnl_0(t);
                }
                t = s_46;
                {
                  t = system_usage_0(t);
                  {
                    t = term_i_17;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, c_13);
      {
        ATerm u_46;
        u_46 = t;
        {
          t = term_c_45;
          t = table_destroy_0(t);
        }
        t = u_46;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_79 (ATerm), ATerm g_79 (ATerm), ATerm h_79 (ATerm))
{
  ATerm f_13 (ATerm t)
  {
    ATerm v_46 = t;
    int w_46 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_79(t);
        LocalPopChoice(w_46);
      }
    else
      {
        t = v_46;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, f_13);
  {
    t = store_options_0(t);
    {
      ATerm x_46 = t;
      int a_47 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, h_79);
          LocalPopChoice(a_47);
        }
      else
        {
          t = x_46;
          {
            ATerm b_47 = t;
            int c_47 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, f_79);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(c_47);
              }
            else
              {
                t = b_47;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm a_79 (ATerm), ATerm b_79 (ATerm))
{
  t = iowrap_3(t, a_79, b_79, default_usage_0);
  return(t);
}
ATerm Asfix2abox_0 (ATerm t)
{
  ATerm h_13 (ATerm t)
  {
    ATerm d_47 = t;
    int g_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_13 (ATerm t)
        {
          ATerm r_134 = NULL;
          r_134 = t;
          o_134 :
          if(!(match_string(r_134, "-v")))
            _fail(t);
          return(t);
        }
        ATerm k_13 (ATerm t)
        {
          t = term_q_41;
          return(t);
        }
        t = Option_2(t, j_13, k_13);
        LocalPopChoice(g_47);
      }
    else
      {
        t = d_47;
        {
          ATerm l_13 (ATerm t)
          {
            ATerm s_134 = NULL;
            s_134 = t;
            p_134 :
            if(!(match_string(s_134, "-p")))
              _fail(t);
            return(t);
          }
          ATerm u_13 (ATerm t)
          {
            ATerm t_134 = NULL;
            t_134 = t;
            t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(t_134));
            return(t);
          }
          ATerm w_13 (ATerm t)
          {
            t = term_h_47;
            return(t);
          }
          t = ArgOption_3(t, l_13, u_13, w_13);
        }
      }
    return(t);
  }
  t = iowrap_2(t, asfix2abox_0, h_13);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Asfix2abox_0(t);
  return(t);
}

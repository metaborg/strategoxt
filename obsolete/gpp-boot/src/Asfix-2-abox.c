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
Symbol sym_Conservative_0;
Symbol sym_layout_place_holder_0;
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
  sym_Conservative_0 = ATmakeSymbol("Conservative", 0, ATfalse);
  ATprotectSymbol(sym_Conservative_0);
  sym_layout_place_holder_0 = ATmakeSymbol("layout-place-holder", 0, ATfalse);
  ATprotectSymbol(sym_layout_place_holder_0);
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
ATerm term_i_50;
ATerm term_h_50;
ATerm term_w_49;
ATerm term_k_49;
ATerm term_c_49;
ATerm term_t_48;
ATerm term_r_48;
ATerm term_q_48;
ATerm term_i_48;
ATerm term_h_48;
ATerm term_g_48;
ATerm term_f_48;
ATerm term_n_47;
ATerm term_k_47;
ATerm term_j_47;
ATerm term_i_47;
ATerm term_e_47;
ATerm term_a_47;
ATerm term_v_46;
ATerm term_p_46;
ATerm term_o_46;
ATerm term_l_46;
ATerm term_m_45;
ATerm term_g_44;
ATerm term_s_43;
ATerm term_o_43;
ATerm term_n_43;
ATerm term_x_42;
ATerm term_m_42;
ATerm term_l_42;
ATerm term_k_42;
ATerm term_x_41;
ATerm term_w_41;
ATerm term_s_41;
ATerm term_r_41;
ATerm term_q_41;
ATerm term_l_41;
ATerm term_h_41;
ATerm term_g_41;
ATerm term_f_41;
ATerm term_s_40;
ATerm term_j_39;
ATerm term_i_39;
ATerm term_h_39;
ATerm term_z_37;
ATerm term_z_36;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_w_28;
ATerm term_v_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_s_27;
ATerm term_n_27;
ATerm term_m_27;
ATerm term_l_27;
ATerm term_k_27;
ATerm term_j_27;
ATerm term_i_27;
ATerm term_h_27;
ATerm term_g_27;
ATerm term_f_27;
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
ATerm term_d_26;
ATerm term_c_26;
ATerm term_x_25;
ATerm term_w_25;
ATerm term_v_25;
ATerm term_u_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_l_25;
ATerm term_i_25;
ATerm term_g_25;
ATerm term_e_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_u_24;
ATerm term_t_24;
ATerm term_s_24;
ATerm term_r_24;
ATerm term_q_24;
ATerm term_p_24;
ATerm term_o_24;
ATerm term_n_24;
ATerm term_m_24;
ATerm term_l_24;
ATerm term_k_24;
ATerm term_j_24;
ATerm term_t_23;
ATerm term_q_23;
ATerm term_p_23;
ATerm term_r_22;
ATerm term_q_22;
ATerm term_d_22;
ATerm term_c_22;
ATerm term_b_22;
ATerm term_k_21;
ATerm term_j_21;
ATerm term_i_21;
ATerm term_g_21;
ATerm term_f_21;
ATerm term_e_21;
ATerm term_d_21;
ATerm term_v_20;
ATerm term_t_20;
ATerm term_n_19;
ATerm term_c_19;
ATerm term_c_17;
ATerm term_b_17;
ATerm term_a_17;
ATerm term_z_16;
ATerm term_o_15;
ATerm term_m_15;
ATerm term_k_15;
void init_constant_terms (void)
{
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_o_15));
  term_o_15 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_b_17));
  term_b_17 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_c_17));
  term_c_17 = (ATerm) ATmakeAppl(sym_SOpt_2, term_a_17, term_b_17);
  ATprotect(&(term_c_19));
  term_c_19 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_20));
  term_t_20 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_v_20));
  term_v_20 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_d_21));
  term_d_21 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_e_21));
  term_e_21 = (ATerm) ATmakeAppl(sym_lit_1, term_d_21);
  ATprotect(&(term_f_21));
  term_f_21 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_g_21));
  term_g_21 = (ATerm) ATmakeAppl(sym_lit_1, term_f_21);
  ATprotect(&(term_i_21));
  term_i_21 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_j_21));
  term_j_21 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_k_21));
  term_k_21 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_b_22));
  term_b_22 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_c_22));
  term_c_22 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym_SOpt_2, term_b_22, term_c_22);
  ATprotect(&(term_q_22));
  term_q_22 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_r_22));
  term_r_22 = (ATerm) ATmakeAppl(sym_Arg_1, term_n_19);
  ATprotect(&(term_p_23));
  term_p_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_q_23));
  term_q_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_j_24));
  term_j_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_k_24));
  term_k_24 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_l_24));
  term_l_24 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_m_24));
  term_m_24 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_n_24));
  term_n_24 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_o_24));
  term_o_24 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_p_24));
  term_p_24 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_r_24));
  term_r_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_s_24));
  term_s_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_t_24));
  term_t_24 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_u_24));
  term_u_24 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_e_25));
  term_e_25 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_g_25));
  term_g_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_v_25));
  term_v_25 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_x_25));
  term_x_25 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_c_26));
  term_c_26 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_d_26));
  term_d_26 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_n_26));
  term_n_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_o_26));
  term_o_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_p_26));
  term_p_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_q_26));
  term_q_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_r_26));
  term_r_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_s_26));
  term_s_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_t_26));
  term_t_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_u_26));
  term_u_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_v_26));
  term_v_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_w_26));
  term_w_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_x_26));
  term_x_26 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_y_26));
  term_y_26 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_z_26));
  term_z_26 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_a_27));
  term_a_27 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_b_27));
  term_b_27 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_c_27));
  term_c_27 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_f_27));
  term_f_27 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_g_27));
  term_g_27 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_h_27));
  term_h_27 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_i_27));
  term_i_27 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_k_27));
  term_k_27 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_m_27));
  term_m_27 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_v_28));
  term_v_28 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_i_39));
  term_i_39 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_g_41));
  term_g_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_h_41));
  term_h_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_l_41));
  term_l_41 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_q_41));
  term_q_41 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_r_41));
  term_r_41 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym__2, term_q_41, term_r_41);
  ATprotect(&(term_w_41));
  term_w_41 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_x_41));
  term_x_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_l_42));
  term_l_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_m_42));
  term_m_42 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_42));
  term_x_42 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_o_43));
  term_o_43 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_m_45));
  term_m_45 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution", 0, ATtrue));
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose        Verbose execution", 0, ATtrue));
  ATprotect(&(term_o_46));
  term_o_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_46));
  term_v_46 = (ATerm) ATmakeAppl(ATmakeSymbol("@version         Unknown", 0, ATtrue));
  ATprotect(&(term_a_47));
  term_a_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_i_47));
  term_i_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_j_47));
  term_j_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_k_47));
  term_k_47 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_n_47));
  term_n_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_f_48));
  term_f_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_g_48));
  term_g_48 = (ATerm) ATmakeAppl(sym__2, term_m_15, term_o_15);
  ATprotect(&(term_h_48));
  term_h_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_i_48));
  term_i_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_q_48));
  term_q_48 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_r_48));
  term_r_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_t_48));
  term_t_48 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_c_49));
  term_c_49 = (ATerm) ATmakeAppl(sym__3, term_m_15, term_o_15, (ATerm) ATempty);
  ATprotect(&(term_k_49));
  term_k_49 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_w_49));
  term_w_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_h_50));
  term_h_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Ck\nnservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_i_50));
  term_i_50 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm ArgOption_3 (ATerm, ATerm c_1 (ATerm), ATerm d_1 (ATerm), ATerm e_1 (ATerm));
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm o_78 (ATerm));
ATerm Option_3 (ATerm, ATerm z_0 (ATerm), ATerm a_1 (ATerm), ATerm b_1 (ATerm));
ATerm layout2box_0 (ATerm);
ATerm has_significant_layout_0 (ATerm);
ATerm layout_place_holder_0 (ATerm);
ATerm has_layout_0 (ATerm);
ATerm InsLayout_1 (ATerm, ATerm u_73 (ATerm));
ATerm insert_layout_0 (ATerm);
ATerm layout_1 (ATerm, ATerm c_73 (ATerm));
ATerm collect_p__1 (ATerm, ATerm a_74 (ATerm));
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm y_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm m_92 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm is_string_0 (ATerm);
ATerm Arg2_2 (ATerm, ATerm w_0 (ATerm), ATerm x_0 (ATerm));
ATerm filter_literals_0 (ATerm);
ATerm make_path_0 (ATerm);
ATerm build_list_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm y_73 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_4 (ATerm, ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm i_97 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm e_88 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm n_88 (ATerm));
ATerm build_sep_list_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm index_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm seq2abox_0 (ATerm);
ATerm lit_1 (ATerm, ATerm v_0 (ATerm));
ATerm Snd_0 (ATerm);
ATerm pp_table_get_0 (ATerm);
ATerm StoreEntryIfNotExists_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm v_74 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm Make_0 (ATerm);
ATerm pair_0 (ATerm);
ATerm make_0 (ATerm);
ATerm NonTerminal_0 (ATerm);
ATerm add_0 (ATerm);
ATerm number_1 (ATerm, ATerm z_74 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm u_0 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm w_74 (ATerm));
ATerm Fst_0 (ATerm);
ATerm get_pp_entry_0 (ATerm);
ATerm prod_3 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t_0 (ATerm));
ATerm uq2q_0 (ATerm);
ATerm cons_1 (ATerm, ATerm q_0 (ATerm));
ATerm at_cons_1 (ATerm, ATerm r_73 (ATerm));
ATerm get_constr_0 (ATerm);
ATerm add_attributes_0 (ATerm);
ATerm Escape3_0 (ATerm);
ATerm Escape2_0 (ATerm);
ATerm Escape1_0 (ATerm);
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
ATerm Sep_1 (ATerm, ATerm e_91 (ATerm));
ATerm separate_by_1 (ATerm, ATerm f_91 (ATerm));
ATerm Lit2Str_0 (ATerm);
ATerm Singleton_0 (ATerm);
ATerm list_ana_1 (ATerm, ATerm n_73 (ATerm));
ATerm lit2str_0 (ATerm);
ATerm lits2strs_0 (ATerm);
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm normalize_constr_0 (ATerm);
ATerm mk_constr_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm iter_star_1 (ATerm, ATerm l_0 (ATerm));
ATerm iter_1 (ATerm, ATerm k_0 (ATerm));
ATerm alt_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm syntaxless_sort_0 (ATerm);
ATerm is_injection_0 (ATerm);
ATerm is_reject_0 (ATerm);
ATerm is_bracket_0 (ATerm);
ATerm prodcons_0 (ATerm);
ATerm sort_1 (ATerm, ATerm h_0 (ATerm));
ATerm get_templ_0 (ATerm);
ATerm appl2abox_0 (ATerm);
ATerm layout_0 (ATerm);
ATerm opt_1 (ATerm, ATerm g_0 (ATerm));
ATerm filter_1 (ATerm, ATerm o_83 (ATerm));
ATerm is_list_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm k_92 (ATerm));
ATerm sometd_1 (ATerm, ATerm m_94 (ATerm));
ATerm repeat_2 (ATerm, ATerm t_95 (ATerm), ATerm u_95 (ATerm));
ATerm repeat_1 (ATerm, ATerm w_95 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm m_90 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm f_0 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm l_74 (ATerm));
ATerm termid_check_1 (ATerm, ATerm s_74 (ATerm));
ATerm debug_1 (ATerm, ATerm z_80 (ATerm));
ATerm oncetd_1 (ATerm, ATerm c_94 (ATerm));
ATerm in_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm a_80 (ATerm));
ATerm notify_1 (ATerm, ATerm f_74 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm m_85 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm));
ATerm crush_3 (ATerm, ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm));
ATerm collect_om_1 (ATerm, ATerm l_86 (ATerm));
ATerm collect_1 (ATerm, ATerm n_86 (ATerm));
ATerm asfix2abox_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm g_56 (ATerm), ATerm h_56 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm e_80 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm w_82 (ATerm), ATerm x_82 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm d_80 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm c_90 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_78 (ATerm));
ATerm map_1 (ATerm, ATerm o_89 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm b_0 (ATerm), ATerm c_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm j_78 (ATerm));
ATerm Program_1 (ATerm, ATerm m_68 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm n_68 (ATerm));
ATerm fetch_1 (ATerm, ATerm w_89 (ATerm));
ATerm option_defined_1 (ATerm, ATerm i_79 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm q_96 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm d_73 (ATerm), ATerm e_73 (ATerm));
ATerm Nil_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm m_78 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm l_78 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm u_79 (ATerm));
ATerm iowrap_2 (ATerm, ATerm n_79 (ATerm), ATerm o_79 (ATerm));
ATerm Asfix_2_abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_3 (ATerm t, ATerm c_1 (ATerm), ATerm d_1 (ATerm), ATerm e_1 (ATerm))
{
  ATerm t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL,x_4 = NULL;
  t_4 = t;
  r_4 :
  if(match_string(t_4, "register-usage-info"))
    {
      t = register_usage_1(t, e_1);
    }
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
                ATerm f_15;
                f_15 = t;
                {
                  t = not_null(u_4);
                  t = c_1(t);
                }
                t = f_15;
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
ATerm table_push_0 (ATerm t)
{
  ATerm j_5 = NULL,k_5 = NULL,l_5 = NULL,m_5 = NULL;
  j_5 = t;
  i_5 :
  if(match_cons(j_5, sym__3))
    {
      k_5 = ATgetArgument(j_5, 0);
      l_5 = ATgetArgument(j_5, 1);
      m_5 = ATgetArgument(j_5, 2);
      {
        ATerm h_15;
        h_15 = t;
        {
          ATerm q_5 = NULL;
          ATerm r_5 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_5), not_null(l_5));
          {
            ATerm i_15 = t;
            int j_15 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(j_15);
              }
            else
              {
                t = i_15;
                t = (ATerm) ATempty;
              }
            {
              r_5 = t;
              if(((q_5 != NULL) && (q_5 != r_5)))
                _fail(r_5);
              else
                q_5 = r_5;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(k_5), not_null(l_5), (ATerm) ATinsert(CheckATermList(not_null(q_5)), not_null(m_5)));
            t = table_put_0(t);
          }
        }
        t = h_15;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm o_78 (ATerm))
{
  ATerm v_5 = NULL;
  ATerm w_5 = NULL;
  t = term_k_15;
  {
    t = o_78(t);
    {
      w_5 = t;
      if(((v_5 != NULL) && (v_5 != w_5)))
        _fail(w_5);
      else
        v_5 = w_5;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_m_15, term_o_15, not_null(v_5));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm z_0 (ATerm), ATerm a_1 (ATerm), ATerm b_1 (ATerm))
{
  ATerm c_6 = NULL,d_6 = NULL,e_6 = NULL;
  c_6 = t;
  b_6 :
  if(match_string(c_6, "register-usage-info"))
    {
      t = register_usage_1(t, b_1);
    }
  else
    {
      if(((ATgetType(c_6) == AT_LIST) && ((ATermList) c_6 != ATempty)))
        {
          d_6 = ATgetFirst((ATermList) c_6);
          e_6 = (ATerm) ATgetNext((ATermList) c_6);
          {
            ATerm h_6 = NULL;
            ATerm p_15;
            p_15 = t;
            {
              t = not_null(d_6);
              t = z_0(t);
            }
            t = p_15;
            {
              ATerm i_6 = NULL;
              t = term_k_15;
              {
                t = a_1(t);
                {
                  i_6 = t;
                  if(((h_6 != NULL) && (h_6 != i_6)))
                    _fail(i_6);
                  else
                    h_6 = i_6;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(e_6)), not_null(h_6));
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
ATerm layout2box_0 (ATerm t)
{
  ATerm q_6 = NULL,r_6 = NULL;
  q_6 = t;
  p_6 :
  if(match_cons(q_6, sym_layout_1))
    {
      r_6 = ATgetArgument(q_6, 0);
      {
        ATerm q_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_6 = NULL;
            t = has_significant_layout_0(t);
            {
              ATerm u_6 = NULL;
              t = not_null(r_6);
              {
                t = concat_strings_0(t);
                {
                  u_6 = t;
                  if(((t_6 != NULL) && (t_6 != u_6)))
                    _fail(u_6);
                  else
                    t_6 = u_6;
                }
              }
              t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, not_null(t_6))));
            }
            LocalPopChoice(y_15);
          }
        else
          {
            t = q_15;
            {
              ATerm v_6 = NULL;
              ATerm w_6 = NULL;
              t = not_null(r_6);
              {
                t = concat_strings_0(t);
                {
                  w_6 = t;
                  if(((v_6 != NULL) && (v_6 != w_6)))
                    _fail(w_6);
                  else
                    v_6 = w_6;
                }
              }
              t = (ATerm) ATmakeAppl(sym_S_1, not_null(v_6));
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
ATerm has_significant_layout_0 (ATerm t)
{
  ATerm f_7 = NULL;
  ATerm z_15;
  z_15 = t;
  {
    ATerm g_7 = NULL,h_7 = NULL;
    ATerm b_16 = t;
    if((PushChoice() == 0))
      {
        t = layout_1(t, layout_place_holder_0);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = b_16;
      }
    {
      g_7 = t;
      e_7 :
      if(match_cons(g_7, sym_layout_1))
        {
          h_7 = ATgetArgument(g_7, 0);
          {
            if(((f_7 != NULL) && (f_7 != h_7)))
              _fail(h_7);
            else
              f_7 = h_7;
            {
              t = not_null(f_7);
              {
                t = concat_strings_0(t);
                {
                  t = explode_string_0(t);
                  {
                    ATerm a_0 (ATerm t)
                    {
                      ATerm c_16 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm i_7 = NULL;
                          i_7 = t;
                          b_7 :
                          if(!(match_int(i_7, 9)))
                            {
                              _fail(t);
                            }
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = c_16;
                        }
                      {
                        ATerm d_16 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm j_7 = NULL;
                            j_7 = t;
                            c_7 :
                            if(!(match_int(j_7, 10)))
                              {
                                _fail(t);
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = d_16;
                          }
                        {
                          ATerm e_16 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm k_7 = NULL;
                              k_7 = t;
                              d_7 :
                              if(!(match_int(k_7, 32)))
                                {
                                  _fail(t);
                                }
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = e_16;
                            }
                        }
                      }
                      return(t);
                    }
                    t = filter_1(t, a_0);
                    {
                      ATerm f_16 = t;
                      if((PushChoice() == 0))
                        {
                          t = Nil_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = f_16;
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
    }
  }
  t = z_15;
  return(t);
}
ATerm layout_place_holder_0 (ATerm t)
{
  ATerm n_7 = NULL;
  n_7 = t;
  m_7 :
  if(!(match_cons(n_7, sym_layout_place_holder_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm has_layout_0 (ATerm t)
{
  ATerm g_16 = t;
  if((PushChoice() == 0))
    {
      t = layout_1(t, layout_place_holder_0);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = g_16;
    }
  return(t);
}
ATerm InsLayout_1 (ATerm t, ATerm u_73 (ATerm))
{
  ATerm m_9 (ATerm t)
  {
    ATerm d_8 = NULL,e_8 = NULL,f_8 = NULL,g_8 = NULL,h_8 = NULL,i_8 = NULL,j_8 = NULL,k_8 = NULL,l_8 = NULL,m_8 = NULL;
    ATerm h_16 = t;
    int m_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, Nil_0, _id);
        LocalPopChoice(m_16);
      }
    else
      {
        t = h_16;
        {
          ATerm o_8 = NULL,p_8 = NULL,q_8 = NULL,r_8 = NULL,s_8 = NULL,t_8 = NULL,u_8 = NULL;
          o_8 = t;
          a_8 :
          if(match_cons(o_8, sym__2))
            {
              p_8 = ATgetArgument(o_8, 0);
              u_8 = ATgetArgument(o_8, 1);
              b_8 :
              if(((ATgetType(p_8) == AT_LIST) && ((ATermList) p_8 != ATempty)))
                {
                  q_8 = ATgetFirst((ATermList) p_8);
                  r_8 = (ATerm) ATgetNext((ATermList) p_8);
                  c_8 :
                  if(((ATermList) r_8 == ATempty))
                    {
                      {
                        ATerm v_8 = NULL,w_8 = NULL,x_8 = NULL;
                        if(((d_8 != NULL) && (d_8 != q_8)))
                          _fail(q_8);
                        else
                          d_8 = q_8;
                        {
                          if(((j_8 != NULL) && (j_8 != u_8)))
                            _fail(u_8);
                          else
                            j_8 = u_8;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), not_null(j_8));
                            {
                              t = u_73(t);
                              {
                                v_8 = t;
                                r_7 :
                                if(match_cons(v_8, sym__2))
                                  {
                                    w_8 = ATgetArgument(v_8, 0);
                                    x_8 = ATgetArgument(v_8, 1);
                                    {
                                      if(((e_8 != NULL) && (e_8 != w_8)))
                                        _fail(w_8);
                                      else
                                        e_8 = w_8;
                                      {
                                        if(((k_8 != NULL) && (k_8 != x_8)))
                                          _fail(x_8);
                                        else
                                          k_8 = x_8;
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(e_8)), not_null(k_8));
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
                  else
                    {
                      if(((ATgetType(r_8) == AT_LIST) && ((ATermList) r_8 != ATempty)))
                        {
                          s_8 = ATgetFirst((ATermList) r_8);
                          t_8 = (ATerm) ATgetNext((ATermList) r_8);
                          {
                            ATerm y_8 = NULL,z_8 = NULL,a_9 = NULL,b_9 = NULL,c_9 = NULL;
                            if(((d_8 != NULL) && (d_8 != q_8)))
                              _fail(q_8);
                            else
                              d_8 = q_8;
                            {
                              if(((g_8 != NULL) && (g_8 != s_8)))
                                _fail(s_8);
                              else
                                g_8 = s_8;
                              {
                                if(((i_8 != NULL) && (i_8 != t_8)))
                                  _fail(t_8);
                                else
                                  i_8 = t_8;
                                {
                                  if(((j_8 != NULL) && (j_8 != u_8)))
                                    _fail(u_8);
                                  else
                                    j_8 = u_8;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(d_8), not_null(j_8));
                                    {
                                      t = u_73(t);
                                      {
                                        y_8 = t;
                                        y_7 :
                                        if(match_cons(y_8, sym__2))
                                          {
                                            z_8 = ATgetArgument(y_8, 0);
                                            a_9 = ATgetArgument(y_8, 1);
                                            z_7 :
                                            if(((ATgetType(a_9) == AT_LIST) && ((ATermList) a_9 != ATempty)))
                                              {
                                                b_9 = ATgetFirst((ATermList) a_9);
                                                c_9 = (ATerm) ATgetNext((ATermList) a_9);
                                                {
                                                  ATerm d_9 = NULL,e_9 = NULL,f_9 = NULL,g_9 = NULL,h_9 = NULL;
                                                  if(((e_8 != NULL) && (e_8 != z_8)))
                                                    _fail(z_8);
                                                  else
                                                    e_8 = z_8;
                                                  {
                                                    if(((f_8 != NULL) && (f_8 != b_9)))
                                                      _fail(b_9);
                                                    else
                                                      f_8 = b_9;
                                                    {
                                                      if(((k_8 != NULL) && (k_8 != c_9)))
                                                        _fail(c_9);
                                                      else
                                                        k_8 = c_9;
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(i_8)), not_null(g_8)), not_null(k_8));
                                                        {
                                                          t = m_9(t);
                                                          {
                                                            d_9 = t;
                                                            w_7 :
                                                            if(match_cons(d_9, sym__2))
                                                              {
                                                                e_9 = ATgetArgument(d_9, 0);
                                                                h_9 = ATgetArgument(d_9, 1);
                                                                x_7 :
                                                                if(((ATgetType(e_9) == AT_LIST) && ((ATermList) e_9 != ATempty)))
                                                                  {
                                                                    f_9 = ATgetFirst((ATermList) e_9);
                                                                    g_9 = (ATerm) ATgetNext((ATermList) e_9);
                                                                    {
                                                                      if(((h_8 != NULL) && (h_8 != f_9)))
                                                                        _fail(f_9);
                                                                      else
                                                                        h_8 = f_9;
                                                                      {
                                                                        if(((m_8 != NULL) && (m_8 != g_9)))
                                                                          _fail(g_9);
                                                                        else
                                                                          m_8 = g_9;
                                                                        {
                                                                          if(((l_8 != NULL) && (l_8 != h_9)))
                                                                            _fail(h_9);
                                                                          else
                                                                            l_8 = h_9;
                                                                          {
                                                                            ATerm n_16 = t;
                                                                            int u_16 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm i_9 = NULL;
                                                                                ATerm d_0 (ATerm t)
                                                                                {
                                                                                  t = term_z_16;
                                                                                  return(t);
                                                                                }
                                                                                t = has_option_1(t, d_0);
                                                                                {
                                                                                  t = not_null(f_8);
                                                                                  {
                                                                                    t = has_layout_0(t);
                                                                                    {
                                                                                      ATerm j_9 = NULL;
                                                                                      t = not_null(f_8);
                                                                                      {
                                                                                        t = layout2box_0(t);
                                                                                        {
                                                                                          j_9 = t;
                                                                                          if(((i_9 != NULL) && (i_9 != j_9)))
                                                                                            _fail(j_9);
                                                                                          else
                                                                                            i_9 = j_9;
                                                                                        }
                                                                                      }
                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(m_8)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_c_17), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(h_8)))), not_null(i_9)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_8)))))), not_null(l_8));
                                                                                    }
                                                                                  }
                                                                                }
                                                                                LocalPopChoice(u_16);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = n_16;
                                                                                {
                                                                                  ATerm d_17 = t;
                                                                                  int e_17 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      ATerm k_9 = NULL;
                                                                                      ATerm f_17 = t;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm e_0 (ATerm t)
                                                                                          {
                                                                                            t = term_z_16;
                                                                                            return(t);
                                                                                          }
                                                                                          t = has_option_1(t, e_0);
                                                                                          PopChoice();
                                                                                          _fail(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = f_17;
                                                                                        }
                                                                                      {
                                                                                        t = not_null(f_8);
                                                                                        {
                                                                                          t = has_significant_layout_0(t);
                                                                                          {
                                                                                            ATerm l_9 = NULL;
                                                                                            t = not_null(f_8);
                                                                                            {
                                                                                              t = layout2box_0(t);
                                                                                              {
                                                                                                l_9 = t;
                                                                                                if(((k_9 != NULL) && (k_9 != l_9)))
                                                                                                  _fail(l_9);
                                                                                                else
                                                                                                  k_9 = l_9;
                                                                                              }
                                                                                            }
                                                                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(not_null(m_8)), not_null(h_8)), not_null(k_9)), not_null(e_8)), not_null(l_8));
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                      LocalPopChoice(e_17);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = d_17;
                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(m_8)), not_null(h_8)), not_null(e_8)), not_null(l_8));
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
            }
          else
            {
              _fail(t);
            }
        }
      }
    return(t);
  }
  t = m_9(t);
  return(t);
}
ATerm insert_layout_0 (ATerm t)
{
  ATerm m_11 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL;
  ATerm f_1 (ATerm t)
  {
    ATerm n_11 = NULL,o_11 = NULL,p_11 = NULL;
    n_11 = t;
    v_9 :
    if(((ATgetType(n_11) == AT_LIST) && ((ATermList) n_11 != ATempty)))
      {
        o_11 = ATgetFirst((ATermList) n_11);
        p_11 = (ATerm) ATgetNext((ATermList) n_11);
        {
          if(((m_11 != NULL) && (m_11 != o_11)))
            _fail(o_11);
          else
            m_11 = o_11;
          t = Tl_0(t);
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, f_1);
  {
    ATerm a_14 (ATerm t)
    {
      ATerm q_11 = NULL,r_11 = NULL,s_11 = NULL,t_11 = NULL,u_11 = NULL,v_11 = NULL,w_11 = NULL;
      ATerm h_17 = t;
      int i_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm x_11 = NULL,y_11 = NULL,z_11 = NULL,a_12 = NULL,b_12 = NULL,c_12 = NULL;
          y_11 = t;
          c_11 :
          if(match_cons(y_11, sym__2))
            {
              z_11 = ATgetArgument(y_11, 0);
              c_12 = ATgetArgument(y_11, 1);
              d_11 :
              if(match_cons(z_11, sym_H_2))
                {
                  a_12 = ATgetArgument(z_11, 0);
                  b_12 = ATgetArgument(z_11, 1);
                  {
                    ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL;
                    if(((q_11 != NULL) && (q_11 != a_12)))
                      _fail(a_12);
                    else
                      q_11 = a_12;
                    {
                      if(((s_11 != NULL) && (s_11 != b_12)))
                        _fail(b_12);
                      else
                        s_11 = b_12;
                      {
                        if(((t_11 != NULL) && (t_11 != c_12)))
                          _fail(c_12);
                        else
                          t_11 = c_12;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
                          {
                            t = InsLayout_1(t, a_14);
                            {
                              d_12 = t;
                              h_10 :
                              if(match_cons(d_12, sym__2))
                                {
                                  e_12 = ATgetArgument(d_12, 0);
                                  f_12 = ATgetArgument(d_12, 1);
                                  {
                                    if(((u_11 != NULL) && (u_11 != e_12)))
                                      _fail(e_12);
                                    else
                                      u_11 = e_12;
                                    {
                                      if(((v_11 != NULL) && (v_11 != f_12)))
                                        _fail(f_12);
                                      else
                                        v_11 = f_12;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(q_11), not_null(u_11)), not_null(v_11));
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
              else
                {
                  if(match_cons(z_11, sym_HV_2))
                    {
                      a_12 = ATgetArgument(z_11, 0);
                      b_12 = ATgetArgument(z_11, 1);
                      {
                        ATerm g_12 = NULL,h_12 = NULL,i_12 = NULL;
                        if(((q_11 != NULL) && (q_11 != a_12)))
                          _fail(a_12);
                        else
                          q_11 = a_12;
                        {
                          if(((s_11 != NULL) && (s_11 != b_12)))
                            _fail(b_12);
                          else
                            s_11 = b_12;
                          {
                            if(((t_11 != NULL) && (t_11 != c_12)))
                              _fail(c_12);
                            else
                              t_11 = c_12;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
                              {
                                t = InsLayout_1(t, a_14);
                                {
                                  g_12 = t;
                                  j_10 :
                                  if(match_cons(g_12, sym__2))
                                    {
                                      h_12 = ATgetArgument(g_12, 0);
                                      i_12 = ATgetArgument(g_12, 1);
                                      {
                                        if(((u_11 != NULL) && (u_11 != h_12)))
                                          _fail(h_12);
                                        else
                                          u_11 = h_12;
                                        {
                                          if(((v_11 != NULL) && (v_11 != i_12)))
                                            _fail(i_12);
                                          else
                                            v_11 = i_12;
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, not_null(q_11), not_null(u_11)), not_null(v_11));
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
                  else
                    {
                      if(match_cons(z_11, sym_V_2))
                        {
                          a_12 = ATgetArgument(z_11, 0);
                          b_12 = ATgetArgument(z_11, 1);
                          {
                            ATerm j_12 = NULL,k_12 = NULL,l_12 = NULL;
                            if(((q_11 != NULL) && (q_11 != a_12)))
                              _fail(a_12);
                            else
                              q_11 = a_12;
                            {
                              if(((s_11 != NULL) && (s_11 != b_12)))
                                _fail(b_12);
                              else
                                s_11 = b_12;
                              {
                                if(((t_11 != NULL) && (t_11 != c_12)))
                                  _fail(c_12);
                                else
                                  t_11 = c_12;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
                                  {
                                    t = InsLayout_1(t, a_14);
                                    {
                                      j_12 = t;
                                      l_10 :
                                      if(match_cons(j_12, sym__2))
                                        {
                                          k_12 = ATgetArgument(j_12, 0);
                                          l_12 = ATgetArgument(j_12, 1);
                                          {
                                            if(((u_11 != NULL) && (u_11 != k_12)))
                                              _fail(k_12);
                                            else
                                              u_11 = k_12;
                                            {
                                              if(((v_11 != NULL) && (v_11 != l_12)))
                                                _fail(l_12);
                                              else
                                                v_11 = l_12;
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, not_null(q_11), not_null(u_11)), not_null(v_11));
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
                      else
                        {
                          if(match_cons(z_11, sym_A_3))
                            {
                              a_12 = ATgetArgument(z_11, 0);
                              b_12 = ATgetArgument(z_11, 1);
                              x_11 = ATgetArgument(z_11, 2);
                              {
                                ATerm m_12 = NULL,n_12 = NULL,o_12 = NULL;
                                if(((q_11 != NULL) && (q_11 != a_12)))
                                  _fail(a_12);
                                else
                                  q_11 = a_12;
                                {
                                  if(((r_11 != NULL) && (r_11 != b_12)))
                                    _fail(b_12);
                                  else
                                    r_11 = b_12;
                                  {
                                    if(((s_11 != NULL) && (s_11 != x_11)))
                                      _fail(x_11);
                                    else
                                      s_11 = x_11;
                                    {
                                      if(((t_11 != NULL) && (t_11 != c_12)))
                                        _fail(c_12);
                                      else
                                        t_11 = c_12;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
                                        {
                                          t = InsLayout_1(t, a_14);
                                          {
                                            m_12 = t;
                                            n_10 :
                                            if(match_cons(m_12, sym__2))
                                              {
                                                n_12 = ATgetArgument(m_12, 0);
                                                o_12 = ATgetArgument(m_12, 1);
                                                {
                                                  if(((u_11 != NULL) && (u_11 != n_12)))
                                                    _fail(n_12);
                                                  else
                                                    u_11 = n_12;
                                                  {
                                                    if(((v_11 != NULL) && (v_11 != o_12)))
                                                      _fail(o_12);
                                                    else
                                                      v_11 = o_12;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, not_null(q_11), not_null(r_11), not_null(u_11)), not_null(v_11));
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
                            }
                          else
                            {
                              if(match_cons(z_11, sym_R_2))
                                {
                                  a_12 = ATgetArgument(z_11, 0);
                                  b_12 = ATgetArgument(z_11, 1);
                                  {
                                    ATerm p_12 = NULL,q_12 = NULL,r_12 = NULL;
                                    if(((q_11 != NULL) && (q_11 != a_12)))
                                      _fail(a_12);
                                    else
                                      q_11 = a_12;
                                    {
                                      if(((s_11 != NULL) && (s_11 != b_12)))
                                        _fail(b_12);
                                      else
                                        s_11 = b_12;
                                      {
                                        if(((t_11 != NULL) && (t_11 != c_12)))
                                          _fail(c_12);
                                        else
                                          t_11 = c_12;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
                                          {
                                            t = InsLayout_1(t, a_14);
                                            {
                                              p_12 = t;
                                              p_10 :
                                              if(match_cons(p_12, sym__2))
                                                {
                                                  q_12 = ATgetArgument(p_12, 0);
                                                  r_12 = ATgetArgument(p_12, 1);
                                                  {
                                                    if(((u_11 != NULL) && (u_11 != q_12)))
                                                      _fail(q_12);
                                                    else
                                                      u_11 = q_12;
                                                    {
                                                      if(((v_11 != NULL) && (v_11 != r_12)))
                                                        _fail(r_12);
                                                      else
                                                        v_11 = r_12;
                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, not_null(q_11), not_null(u_11)), not_null(v_11));
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
                              else
                                {
                                  if(match_cons(z_11, sym_ALT_2))
                                    {
                                      a_12 = ATgetArgument(z_11, 0);
                                      b_12 = ATgetArgument(z_11, 1);
                                      {
                                        ATerm s_12 = NULL,t_12 = NULL,u_12 = NULL;
                                        if(((q_11 != NULL) && (q_11 != a_12)))
                                          _fail(a_12);
                                        else
                                          q_11 = a_12;
                                        {
                                          if(((s_11 != NULL) && (s_11 != b_12)))
                                            _fail(b_12);
                                          else
                                            s_11 = b_12;
                                          {
                                            if(((t_11 != NULL) && (t_11 != c_12)))
                                              _fail(c_12);
                                            else
                                              t_11 = c_12;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(q_11), not_null(t_11));
                                              {
                                                t = InsLayout_1(t, a_14);
                                                {
                                                  s_12 = t;
                                                  t_10 :
                                                  if(match_cons(s_12, sym__2))
                                                    {
                                                      t_12 = ATgetArgument(s_12, 0);
                                                      u_12 = ATgetArgument(s_12, 1);
                                                      {
                                                        ATerm v_12 = NULL,w_12 = NULL,x_12 = NULL;
                                                        if(((r_11 != NULL) && (r_11 != t_12)))
                                                          _fail(t_12);
                                                        else
                                                          r_11 = t_12;
                                                        {
                                                          if(((v_11 != NULL) && (v_11 != u_12)))
                                                            _fail(u_12);
                                                          else
                                                            v_11 = u_12;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
                                                            {
                                                              t = InsLayout_1(t, a_14);
                                                              {
                                                                v_12 = t;
                                                                s_10 :
                                                                if(match_cons(v_12, sym__2))
                                                                  {
                                                                    w_12 = ATgetArgument(v_12, 0);
                                                                    x_12 = ATgetArgument(v_12, 1);
                                                                    {
                                                                      if(((u_11 != NULL) && (u_11 != w_12)))
                                                                        _fail(w_12);
                                                                      else
                                                                        u_11 = w_12;
                                                                      {
                                                                        if(((w_11 != NULL) && (w_11 != x_12)))
                                                                          _fail(x_12);
                                                                        else
                                                                          w_11 = x_12;
                                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, not_null(r_11), not_null(u_11)), not_null(w_11));
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
                                  else
                                    {
                                      if(match_cons(z_11, sym_LBL_2))
                                        {
                                          a_12 = ATgetArgument(z_11, 0);
                                          b_12 = ATgetArgument(z_11, 1);
                                          {
                                            ATerm y_12 = NULL,z_12 = NULL,a_13 = NULL;
                                            if(((q_11 != NULL) && (q_11 != a_12)))
                                              _fail(a_12);
                                            else
                                              q_11 = a_12;
                                            {
                                              if(((s_11 != NULL) && (s_11 != b_12)))
                                                _fail(b_12);
                                              else
                                                s_11 = b_12;
                                              {
                                                if(((t_11 != NULL) && (t_11 != c_12)))
                                                  _fail(c_12);
                                                else
                                                  t_11 = c_12;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
                                                  {
                                                    t = InsLayout_1(t, a_14);
                                                    {
                                                      y_12 = t;
                                                      v_10 :
                                                      if(match_cons(y_12, sym__2))
                                                        {
                                                          z_12 = ATgetArgument(y_12, 0);
                                                          a_13 = ATgetArgument(y_12, 1);
                                                          {
                                                            if(((u_11 != NULL) && (u_11 != z_12)))
                                                              _fail(z_12);
                                                            else
                                                              u_11 = z_12;
                                                            {
                                                              if(((v_11 != NULL) && (v_11 != a_13)))
                                                                _fail(a_13);
                                                              else
                                                                v_11 = a_13;
                                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, not_null(q_11), not_null(u_11)), not_null(v_11));
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
                                      else
                                        {
                                          if(match_cons(z_11, sym_REF_2))
                                            {
                                              a_12 = ATgetArgument(z_11, 0);
                                              b_12 = ATgetArgument(z_11, 1);
                                              {
                                                ATerm b_13 = NULL,c_13 = NULL,d_13 = NULL;
                                                if(((q_11 != NULL) && (q_11 != a_12)))
                                                  _fail(a_12);
                                                else
                                                  q_11 = a_12;
                                                {
                                                  if(((s_11 != NULL) && (s_11 != b_12)))
                                                    _fail(b_12);
                                                  else
                                                    s_11 = b_12;
                                                  {
                                                    if(((t_11 != NULL) && (t_11 != c_12)))
                                                      _fail(c_12);
                                                    else
                                                      t_11 = c_12;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
                                                      {
                                                        t = InsLayout_1(t, a_14);
                                                        {
                                                          b_13 = t;
                                                          x_10 :
                                                          if(match_cons(b_13, sym__2))
                                                            {
                                                              c_13 = ATgetArgument(b_13, 0);
                                                              d_13 = ATgetArgument(b_13, 1);
                                                              {
                                                                if(((u_11 != NULL) && (u_11 != c_13)))
                                                                  _fail(c_13);
                                                                else
                                                                  u_11 = c_13;
                                                                {
                                                                  if(((v_11 != NULL) && (v_11 != d_13)))
                                                                    _fail(d_13);
                                                                  else
                                                                    v_11 = d_13;
                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, not_null(q_11), not_null(u_11)), not_null(v_11));
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
                                          else
                                            {
                                              if(match_cons(z_11, sym_L_2))
                                                {
                                                  a_12 = ATgetArgument(z_11, 0);
                                                  b_12 = ATgetArgument(z_11, 1);
                                                  {
                                                    ATerm e_13 = NULL,f_13 = NULL,g_13 = NULL;
                                                    if(((q_11 != NULL) && (q_11 != a_12)))
                                                      _fail(a_12);
                                                    else
                                                      q_11 = a_12;
                                                    {
                                                      if(((s_11 != NULL) && (s_11 != b_12)))
                                                        _fail(b_12);
                                                      else
                                                        s_11 = b_12;
                                                      {
                                                        if(((t_11 != NULL) && (t_11 != c_12)))
                                                          _fail(c_12);
                                                        else
                                                          t_11 = c_12;
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
                                                          {
                                                            t = InsLayout_1(t, a_14);
                                                            {
                                                              e_13 = t;
                                                              z_10 :
                                                              if(match_cons(e_13, sym__2))
                                                                {
                                                                  f_13 = ATgetArgument(e_13, 0);
                                                                  g_13 = ATgetArgument(e_13, 1);
                                                                  {
                                                                    if(((u_11 != NULL) && (u_11 != f_13)))
                                                                      _fail(f_13);
                                                                    else
                                                                      u_11 = f_13;
                                                                    {
                                                                      if(((v_11 != NULL) && (v_11 != g_13)))
                                                                        _fail(g_13);
                                                                      else
                                                                        v_11 = g_13;
                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, not_null(q_11), not_null(u_11)), not_null(v_11));
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
                                              else
                                                {
                                                  if(match_cons(z_11, sym_LNAT_2))
                                                    {
                                                      a_12 = ATgetArgument(z_11, 0);
                                                      b_12 = ATgetArgument(z_11, 1);
                                                      {
                                                        ATerm h_13 = NULL,i_13 = NULL,j_13 = NULL;
                                                        if(((q_11 != NULL) && (q_11 != a_12)))
                                                          _fail(a_12);
                                                        else
                                                          q_11 = a_12;
                                                        {
                                                          if(((s_11 != NULL) && (s_11 != b_12)))
                                                            _fail(b_12);
                                                          else
                                                            s_11 = b_12;
                                                          {
                                                            if(((t_11 != NULL) && (t_11 != c_12)))
                                                              _fail(c_12);
                                                            else
                                                              t_11 = c_12;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(s_11), not_null(t_11));
                                                              {
                                                                t = InsLayout_1(t, a_14);
                                                                {
                                                                  h_13 = t;
                                                                  b_11 :
                                                                  if(match_cons(h_13, sym__2))
                                                                    {
                                                                      i_13 = ATgetArgument(h_13, 0);
                                                                      j_13 = ATgetArgument(h_13, 1);
                                                                      {
                                                                        if(((u_11 != NULL) && (u_11 != i_13)))
                                                                          _fail(i_13);
                                                                        else
                                                                          u_11 = i_13;
                                                                        {
                                                                          if(((v_11 != NULL) && (v_11 != j_13)))
                                                                            _fail(j_13);
                                                                          else
                                                                            v_11 = j_13;
                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, not_null(q_11), not_null(u_11)), not_null(v_11));
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
                    }
                }
            }
          else
            {
              _fail(t);
            }
          LocalPopChoice(i_17);
        }
      else
        {
          t = h_17;
          {
            ATerm j_17 = t;
            int k_17 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_1 (ATerm t)
                {
                  t = Cons_2(t, _id, _id);
                  return(t);
                }
                t = _2(t, g_1, _id);
                t = InsLayout_1(t, a_14);
                LocalPopChoice(k_17);
              }
            else
              {
                t = j_17;
                {
                }
              }
          }
        }
      return(t);
    }
    t = a_14(t);
    {
      ATerm h_1 (ATerm t)
      {
        ATerm i_1 (ATerm t)
        {
          ATerm k_13 = NULL;
          t = is_list_0(t);
          {
            k_13 = t;
            t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(k_13));
          }
          return(t);
        }
        t = try_1(t, i_1);
        return(t);
      }
      t = _2(t, h_1, _id);
      {
        m_13 = t;
        k_11 :
        if(match_cons(m_13, sym__2))
          {
            n_13 = ATgetArgument(m_13, 0);
            o_13 = ATgetArgument(m_13, 1);
            l_11 :
            if(((ATgetType(o_13) == AT_LIST) && ((ATermList) o_13 != ATempty)))
              {
                p_13 = ATgetFirst((ATermList) o_13);
                q_13 = (ATerm) ATgetNext((ATermList) o_13);
                {
                  ATerm u_13 = NULL,v_13 = NULL,w_13 = NULL;
                  ATerm z_14 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_c_17), not_null(w_13));
                    return(t);
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_13)), not_null(n_13)), not_null(m_11));
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm l_17 = t;
                      int m_17 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm n_17 = t;
                          if((PushChoice() == 0))
                            {
                              t = layout_1(t, _id);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = n_17;
                            }
                          LocalPopChoice(m_17);
                        }
                      else
                        {
                          t = l_17;
                          {
                            ATerm o_17 = t;
                            int p_17 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = layout_1(t, _id);
                                {
                                  ATerm k_1 (ATerm t)
                                  {
                                    t = term_z_16;
                                    return(t);
                                  }
                                  t = has_option_1(t, k_1);
                                  {
                                    t = has_layout_0(t);
                                    t = layout2box_0(t);
                                  }
                                }
                                LocalPopChoice(p_17);
                              }
                            else
                              {
                                t = o_17;
                                {
                                  t = layout_1(t, _id);
                                  {
                                    ATerm q_17 = t;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm l_1 (ATerm t)
                                        {
                                          t = term_z_16;
                                          return(t);
                                        }
                                        t = has_option_1(t, l_1);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = q_17;
                                      }
                                    {
                                      t = has_significant_layout_0(t);
                                      t = layout2box_0(t);
                                    }
                                  }
                                }
                              }
                          }
                        }
                      return(t);
                    }
                    t = filter_1(t, j_1);
                    {
                      t = flat_list_0(t);
                      {
                        w_13 = t;
                        i_11 :
                        if(((ATgetType(w_13) == AT_LIST) && ((ATermList) w_13 != ATempty)))
                          {
                            u_13 = ATgetFirst((ATermList) w_13);
                            v_13 = (ATerm) ATgetNext((ATermList) w_13);
                            j_11 :
                            if(((ATermList) v_13 == ATempty))
                              {
                                {
                                  ATerm r_17 = t;
                                  int s_17 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = not_null(u_13);
                                      LocalPopChoice(s_17);
                                    }
                                  else
                                    {
                                      t = r_17;
                                      t = z_14(t);
                                    }
                                }
                              }
                            else
                              {
                                t = z_14(t);
                              }
                          }
                        else
                          {
                            t = z_14(t);
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
  }
  return(t);
}
ATerm layout_1 (ATerm t, ATerm c_73 (ATerm))
{
  ATerm d_15 = NULL,e_15 = NULL;
  d_15 = t;
  c_15 :
  if(match_cons(d_15, sym_layout_1))
    {
      e_15 = ATgetArgument(d_15, 0);
      {
        ATerm g_15 = NULL;
        t = not_null(e_15);
        {
          t = c_73(t);
          {
            g_15 = t;
            t = (ATerm) ATmakeAppl(sym_layout_1, not_null(g_15));
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
ATerm collect_p__1 (ATerm t, ATerm a_74 (ATerm))
{
  ATerm n_15 (ATerm t)
  {
    ATerm t_17 = t;
    int u_17 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm l_15 = NULL;
        t = a_74(t);
        {
          l_15 = t;
          t = (ATerm) ATinsert(ATempty, not_null(l_15));
        }
        LocalPopChoice(u_17);
      }
    else
      {
        t = t_17;
        {
          ATerm m_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, m_1, conc_0, n_15);
        }
      }
    return(t);
  }
  t = n_15(t);
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm t_15 = NULL,u_15 = NULL;
  ATerm v_17 = t;
  int w_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(w_17);
    }
  else
    {
      t = v_17;
      {
        ATerm x_17 = t;
        int y_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_15 = NULL,w_15 = NULL,x_15 = NULL;
            ATerm a_16 (ATerm t)
            {
              if(((t_15 != NULL) && (t_15 != w_15)))
                _fail(w_15);
              else
                t_15 = w_15;
              {
                if(((u_15 != NULL) && (u_15 != x_15)))
                  _fail(x_15);
                else
                  u_15 = x_15;
                {
                  t = not_null(t_15);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(t_15), not_null(u_15));
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
            v_15 = t;
            r_15 :
            if(((ATgetType(v_15) == AT_LIST) && ((ATermList) v_15 != ATempty)))
              {
                w_15 = ATgetFirst((ATermList) v_15);
                x_15 = (ATerm) ATgetNext((ATermList) v_15);
                s_15 :
                if(((ATermList) w_15 == ATempty))
                  {
                    {
                      ATerm z_17 = t;
                      int a_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((u_15 != NULL) && (u_15 != x_15)))
                            _fail(x_15);
                          else
                            u_15 = x_15;
                          {
                            ATerm n_1 (ATerm t)
                            {
                              t = not_null(u_15);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, n_1);
                          }
                          LocalPopChoice(a_18);
                        }
                      else
                        {
                          t = z_17;
                          t = a_16(t);
                        }
                    }
                  }
                else
                  {
                    t = a_16(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(y_17);
          }
        else
          {
            t = x_17;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm y_0 (ATerm))
{
  ATerm j_16 = NULL,k_16 = NULL,l_16 = NULL;
  k_16 = t;
  i_16 :
  if(match_cons(k_16, sym_Arg2_2))
    {
      l_16 = ATgetArgument(k_16, 0);
      j_16 = ATgetArgument(k_16, 1);
      {
        ATerm o_16 = NULL,p_16 = NULL;
        ATerm q_16 = NULL,s_16 = NULL;
        ATerm r_16 = NULL;
        t = term_k_15;
        {
          t = y_0(t);
          {
            r_16 = t;
            if(((q_16 != NULL) && (q_16 != r_16)))
              _fail(r_16);
            else
              q_16 = r_16;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(q_16));
          {
            ATerm t_16 = NULL;
            t = index_0(t);
            {
              s_16 = t;
              {
                if(((o_16 != NULL) && (o_16 != s_16)))
                  _fail(s_16);
                else
                  o_16 = s_16;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(j_16), not_null(o_16));
                  {
                    t = index_0(t);
                    {
                      t_16 = t;
                      if(((p_16 != NULL) && (p_16 != t_16)))
                        _fail(t_16);
                      else
                        p_16 = t_16;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(p_16);
      }
    }
  else
    {
      if(match_cons(k_16, sym_Arg_1))
        {
          l_16 = ATgetArgument(k_16, 0);
          {
            ATerm v_16 = NULL;
            ATerm w_16 = NULL,y_16 = NULL;
            ATerm x_16 = NULL;
            t = term_k_15;
            {
              t = y_0(t);
              {
                x_16 = t;
                if(((w_16 != NULL) && (w_16 != x_16)))
                  _fail(x_16);
                else
                  w_16 = x_16;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(l_16), not_null(w_16));
              {
                t = index_0(t);
                {
                  y_16 = t;
                  if(((v_16 != NULL) && (v_16 != y_16)))
                    _fail(y_16);
                  else
                    v_16 = y_16;
                }
              }
            }
            t = not_null(v_16);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm m_92 (ATerm))
{
  ATerm g_17 (ATerm t)
  {
    t = _all(t, g_17);
    t = m_92(t);
    return(t);
  }
  t = g_17(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm k_18 = NULL,l_18 = NULL,m_18 = NULL;
  k_18 = t;
  j_18 :
  if(match_cons(k_18, sym__2))
    {
      l_18 = ATgetArgument(k_18, 0);
      m_18 = ATgetArgument(k_18, 1);
      {
        ATerm p_18 = NULL;
        ATerm q_18 = NULL;
        t = not_null(l_18);
        {
          ATerm o_1 (ATerm t)
          {
            ATerm p_1 (ATerm t)
            {
              ATerm b_18 = t;
              int c_18 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm q_1 (ATerm t)
                  {
                    t = not_null(m_18);
                    return(t);
                  }
                  t = Instantiate_1(t, q_1);
                  LocalPopChoice(c_18);
                }
              else
                {
                  t = b_18;
                  t = flat_list_0(t);
                }
              return(t);
            }
            t = try_1(t, p_1);
            return(t);
          }
          t = bottomup_1(t, o_1);
          {
            q_18 = t;
            if(((p_18 != NULL) && (p_18 != q_18)))
              _fail(q_18);
            else
              p_18 = q_18;
          }
        }
        t = not_null(p_18);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm u_18 = NULL;
  u_18 = t;
  t = SSL_is_string(not_null(u_18));
  return(t);
}
ATerm Arg2_2 (ATerm t, ATerm w_0 (ATerm), ATerm x_0 (ATerm))
{
  ATerm e_19 = NULL,f_19 = NULL,g_19 = NULL;
  e_19 = t;
  d_19 :
  if(match_cons(e_19, sym_Arg2_2))
    {
      f_19 = ATgetArgument(e_19, 0);
      g_19 = ATgetArgument(e_19, 1);
      {
        ATerm d_18 = t;
        int e_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_19 = NULL;
            t = not_null(f_19);
            {
              ATerm x_19 = NULL;
              t = w_0(t);
              {
                m_19 = t;
                {
                  t = not_null(g_19);
                  {
                    t = x_0(t);
                    {
                      x_19 = t;
                      t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(m_19), not_null(x_19));
                    }
                  }
                }
              }
            }
            LocalPopChoice(e_18);
          }
        else
          {
            t = d_18;
            {
              ATerm l_20 = NULL;
              t = not_null(f_19);
              {
                ATerm n_20 = NULL;
                t = w_0(t);
                {
                  l_20 = t;
                  {
                    t = not_null(g_19);
                    {
                      t = x_0(t);
                      {
                        n_20 = t;
                        t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(l_20), not_null(n_20));
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
ATerm filter_literals_0 (ATerm t)
{
  ATerm v_27 = NULL,w_27 = NULL,x_27 = NULL;
  v_27 = t;
  u_27 :
  if(match_cons(v_27, sym__2))
    {
      w_27 = ATgetArgument(v_27, 0);
      x_27 = ATgetArgument(v_27, 1);
      {
        ATerm a_28 = NULL,b_28 = NULL;
        ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL;
        ATerm r_1 (ATerm t)
        {
          ATerm s_1 (ATerm t)
          {
            ATerm f_18 = t;
            int g_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Arg_1(t, _id);
                LocalPopChoice(g_18);
              }
            else
              {
                t = f_18;
                {
                  ATerm h_18 = t;
                  int i_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Arg2_2(t, _id, _id);
                      LocalPopChoice(i_18);
                    }
                  else
                    {
                      t = h_18;
                      t = S_1(t, _id);
                    }
                }
              }
            return(t);
          }
          t = collect_p__1(t, s_1);
          return(t);
        }
        t = _2(t, r_1, _id);
        {
          ATerm h_29 (ATerm t)
          {
            ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL,f_28 = NULL,g_28 = NULL,h_28 = NULL,i_28 = NULL;
            ATerm n_18 = t;
            int o_18 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2(t, Nil_0, Nil_0);
                LocalPopChoice(o_18);
              }
            else
              {
                t = n_18;
                {
                  ATerm j_28 = NULL,k_28 = NULL,l_28 = NULL,m_28 = NULL,n_28 = NULL,o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL;
                  ATerm k_29 (ATerm t)
                  {
                    ATerm a_29 = NULL,b_29 = NULL,c_29 = NULL;
                    if(((i_28 != NULL) && (i_28 != n_28)))
                      _fail(n_28);
                    else
                      i_28 = n_28;
                    {
                      if(((d_28 != NULL) && (d_28 != o_28)))
                        _fail(o_28);
                      else
                        d_28 = o_28;
                      {
                        if(((h_28 != NULL) && (h_28 != q_28)))
                          _fail(q_28);
                        else
                          h_28 = q_28;
                        {
                          if(((f_28 != NULL) && (f_28 != r_28)))
                            _fail(r_28);
                          else
                            f_28 = r_28;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(d_28), not_null(f_28));
                            {
                              t = h_29(t);
                              {
                                a_29 = t;
                                m_25 :
                                if(match_cons(a_29, sym__2))
                                  {
                                    b_29 = ATgetArgument(a_29, 0);
                                    c_29 = ATgetArgument(a_29, 1);
                                    {
                                      if(((e_28 != NULL) && (e_28 != b_29)))
                                        _fail(b_29);
                                      else
                                        e_28 = b_29;
                                      {
                                        if(((g_28 != NULL) && (g_28 != c_29)))
                                          _fail(c_29);
                                        else
                                          g_28 = c_29;
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_28)), not_null(i_28)), not_null(g_28));
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
                  l_28 = t;
                  o_27 :
                  if(match_cons(l_28, sym__2))
                    {
                      m_28 = ATgetArgument(l_28, 0);
                      p_28 = ATgetArgument(l_28, 1);
                      p_27 :
                      if(((ATgetType(m_28) == AT_LIST) && ((ATermList) m_28 != ATempty)))
                        {
                          n_28 = ATgetFirst((ATermList) m_28);
                          o_28 = (ATerm) ATgetNext((ATermList) m_28);
                          q_27 :
                          if(((ATgetType(p_28) == AT_LIST) && ((ATermList) p_28 != ATempty)))
                            {
                              q_28 = ATgetFirst((ATermList) p_28);
                              r_28 = (ATerm) ATgetNext((ATermList) p_28);
                              r_27 :
                              if(match_cons(n_28, sym_Arg_1))
                                {
                                  j_28 = ATgetArgument(n_28, 0);
                                  {
                                    ATerm r_18 = t;
                                    int s_18 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm s_28 = NULL,t_28 = NULL,u_28 = NULL;
                                        if(((c_28 != NULL) && (c_28 != j_28)))
                                          _fail(j_28);
                                        else
                                          c_28 = j_28;
                                        {
                                          if(((d_28 != NULL) && (d_28 != o_28)))
                                            _fail(o_28);
                                          else
                                            d_28 = o_28;
                                          {
                                            if(((h_28 != NULL) && (h_28 != q_28)))
                                              _fail(q_28);
                                            else
                                              h_28 = q_28;
                                            {
                                              if(((f_28 != NULL) && (f_28 != r_28)))
                                                _fail(r_28);
                                              else
                                                f_28 = r_28;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(d_28), not_null(f_28));
                                                {
                                                  t = h_29(t);
                                                  {
                                                    s_28 = t;
                                                    i_24 :
                                                    if(match_cons(s_28, sym__2))
                                                      {
                                                        t_28 = ATgetArgument(s_28, 0);
                                                        u_28 = ATgetArgument(s_28, 1);
                                                        {
                                                          if(((e_28 != NULL) && (e_28 != t_28)))
                                                            _fail(t_28);
                                                          else
                                                            e_28 = t_28;
                                                          {
                                                            if(((g_28 != NULL) && (g_28 != u_28)))
                                                              _fail(u_28);
                                                            else
                                                              g_28 = u_28;
                                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_28)), (ATerm) ATmakeAppl(sym_Arg_1, not_null(c_28))), (ATerm) ATinsert(CheckATermList(not_null(g_28)), not_null(h_28)));
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
                                        LocalPopChoice(s_18);
                                      }
                                    else
                                      {
                                        t = r_18;
                                        t = k_29(t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(n_28, sym_Arg2_2))
                                    {
                                      j_28 = ATgetArgument(n_28, 0);
                                      k_28 = ATgetArgument(n_28, 1);
                                      {
                                        ATerm t_18 = t;
                                        int v_18 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm x_28 = NULL,y_28 = NULL,z_28 = NULL;
                                            if(((c_28 != NULL) && (c_28 != j_28)))
                                              _fail(j_28);
                                            else
                                              c_28 = j_28;
                                            {
                                              if(((a_28 != NULL) && (a_28 != k_28)))
                                                _fail(k_28);
                                              else
                                                a_28 = k_28;
                                              {
                                                if(((d_28 != NULL) && (d_28 != o_28)))
                                                  _fail(o_28);
                                                else
                                                  d_28 = o_28;
                                                {
                                                  if(((h_28 != NULL) && (h_28 != q_28)))
                                                    _fail(q_28);
                                                  else
                                                    h_28 = q_28;
                                                  {
                                                    if(((f_28 != NULL) && (f_28 != r_28)))
                                                      _fail(r_28);
                                                    else
                                                      f_28 = r_28;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(d_28), not_null(f_28));
                                                      {
                                                        t = h_29(t);
                                                        {
                                                          x_28 = t;
                                                          k_25 :
                                                          if(match_cons(x_28, sym__2))
                                                            {
                                                              y_28 = ATgetArgument(x_28, 0);
                                                              z_28 = ATgetArgument(x_28, 1);
                                                              {
                                                                if(((e_28 != NULL) && (e_28 != y_28)))
                                                                  _fail(y_28);
                                                                else
                                                                  e_28 = y_28;
                                                                {
                                                                  if(((g_28 != NULL) && (g_28 != z_28)))
                                                                    _fail(z_28);
                                                                  else
                                                                    g_28 = z_28;
                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_28)), (ATerm) ATmakeAppl(sym_Arg2_2, not_null(c_28), not_null(a_28))), (ATerm) ATinsert(CheckATermList(not_null(g_28)), not_null(h_28)));
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
                                            LocalPopChoice(v_18);
                                          }
                                        else
                                          {
                                            t = t_18;
                                            t = k_29(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = k_29(t);
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
              }
            return(t);
          }
          t = h_29(t);
          {
            d_29 = t;
            t_27 :
            if(match_cons(d_29, sym__2))
              {
                e_29 = ATgetArgument(d_29, 0);
                f_29 = ATgetArgument(d_29, 1);
                if(((b_28 != NULL) && (b_28 != f_29)))
                  _fail(f_29);
                else
                  b_28 = f_29;
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(w_27), not_null(b_28));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm make_path_0 (ATerm t)
{
  ATerm s_29 = NULL,t_29 = NULL,u_29 = NULL;
  s_29 = t;
  r_29 :
  if(match_cons(s_29, sym__2))
    {
      t_29 = ATgetArgument(s_29, 0);
      u_29 = ATgetArgument(s_29, 1);
      {
        ATerm x_29 = NULL;
        ATerm y_29 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_29), (ATerm) ATinsert(ATempty, not_null(u_29)));
        {
          t = conc_0(t);
          {
            y_29 = t;
            if(((x_29 != NULL) && (x_29 != y_29)))
              _fail(y_29);
            else
              x_29 = y_29;
          }
        }
        t = not_null(x_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm build_list_0 (ATerm t)
{
  ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
  s_30 = t;
  r_30 :
  if(match_cons(s_30, sym__4))
    {
      t_30 = ATgetArgument(s_30, 0);
      u_30 = ATgetArgument(s_30, 1);
      v_30 = ATgetArgument(s_30, 2);
      w_30 = ATgetArgument(s_30, 3);
      {
        ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL,h_31 = NULL,i_31 = NULL;
        ATerm j_31 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(v_30), not_null(w_30));
        {
          ATerm m_31 = NULL;
          t = make_path_0(t);
          {
            j_31 = t;
            {
              if(((f_31 != NULL) && (f_31 != j_31)))
                _fail(j_31);
              else
                f_31 = j_31;
              {
                t = not_null(t_30);
                {
                  ATerm w_18 = t;
                  int x_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm t_1 (ATerm t)
                      {
                        ATerm k_31 = NULL;
                        k_31 = t;
                        if(((e_31 != NULL) && (e_31 != k_31)))
                          _fail(k_31);
                        else
                          e_31 = k_31;
                        return(t);
                      }
                      t = iter_1(t, t_1);
                      LocalPopChoice(x_18);
                    }
                  else
                    {
                      t = w_18;
                      {
                        ATerm u_1 (ATerm t)
                        {
                          ATerm l_31 = NULL;
                          l_31 = t;
                          if(((e_31 != NULL) && (e_31 != l_31)))
                            _fail(l_31);
                          else
                            e_31 = l_31;
                          return(t);
                        }
                        t = iter_star_1(t, u_1);
                      }
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(t_30), not_null(f_31));
                    {
                      ATerm s_31 = NULL;
                      t = get_pp_entry_0(t);
                      {
                        m_31 = t;
                        {
                          if(((g_31 != NULL) && (g_31 != m_31)))
                            _fail(m_31);
                          else
                            g_31 = m_31;
                          {
                            t = not_null(u_30);
                            {
                              ATerm t_31 = NULL;
                              ATerm v_1 (ATerm t)
                              {
                                ATerm n_31 = NULL;
                                ATerm p_31 = NULL;
                                n_31 = t;
                                {
                                  ATerm q_31 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__4, not_null(e_31), not_null(n_31), not_null(f_31), not_null(w_30));
                                  {
                                    t = symbol2abox_0(t);
                                    {
                                      q_31 = t;
                                      if(((p_31 != NULL) && (p_31 != q_31)))
                                        _fail(q_31);
                                      else
                                        p_31 = q_31;
                                    }
                                  }
                                  t = not_null(p_31);
                                }
                                return(t);
                              }
                              t = map_1(t, v_1);
                              {
                                s_31 = t;
                                {
                                  if(((h_31 != NULL) && (h_31 != s_31)))
                                    _fail(s_31);
                                  else
                                    h_31 = s_31;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(g_31), (ATerm) ATinsert(ATempty, not_null(h_31)));
                                    {
                                      t = instantiate_0(t);
                                      {
                                        t_31 = t;
                                        if(((i_31 != NULL) && (i_31 != t_31)))
                                          _fail(t_31);
                                        else
                                          i_31 = t_31;
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
        t = not_null(i_31);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm instantiate_sep_list_1 (ATerm t, ATerm y_73 (ATerm))
{
  ATerm b_33 (ATerm t)
  {
    ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
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
          ATerm a_19 = t;
          int b_19 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              LocalPopChoice(b_19);
            }
          else
            {
              t = a_19;
              {
                ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL,y_32 = NULL;
                l_32 = t;
                g_32 :
                if(((ATgetType(l_32) == AT_LIST) && ((ATermList) l_32 != ATempty)))
                  {
                    m_32 = ATgetFirst((ATermList) l_32);
                    n_32 = (ATerm) ATgetNext((ATermList) l_32);
                    h_32 :
                    if(((ATgetType(n_32) == AT_LIST) && ((ATermList) n_32 != ATempty)))
                      {
                        o_32 = ATgetFirst((ATermList) n_32);
                        y_32 = (ATerm) ATgetNext((ATermList) n_32);
                        {
                          if(((i_32 != NULL) && (i_32 != m_32)))
                            _fail(m_32);
                          else
                            i_32 = m_32;
                          {
                            if(((j_32 != NULL) && (j_32 != o_32)))
                              _fail(o_32);
                            else
                              j_32 = o_32;
                            {
                              if(((k_32 != NULL) && (k_32 != y_32)))
                                _fail(y_32);
                              else
                                k_32 = y_32;
                              {
                                ATerm w_1 (ATerm t)
                                {
                                  ATerm z_32 = NULL;
                                  ATerm a_33 = NULL;
                                  t = term_k_15;
                                  {
                                    t = y_73(t);
                                    {
                                      a_33 = t;
                                      if(((z_32 != NULL) && (z_32 != a_33)))
                                        _fail(a_33);
                                      else
                                        z_32 = a_33;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(z_32), (ATerm) ATinsert(ATinsert(ATempty, not_null(j_32)), not_null(i_32)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm x_1 (ATerm t)
                                {
                                  t = not_null(k_32);
                                  t = b_33(t);
                                  return(t);
                                }
                                t = Cons_2(t, w_1, x_1);
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
  t = b_33(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm t_33 = NULL,u_33 = NULL,v_33 = NULL;
  t_33 = t;
  s_33 :
  if(match_cons(t_33, sym__2))
    {
      u_33 = ATgetArgument(t_33, 0);
      v_33 = ATgetArgument(t_33, 1);
      t = SSL_mod(not_null(u_33), not_null(v_33));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm b_34 = NULL;
  ATerm d_34 = NULL;
  b_34 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(b_34), term_c_19);
    {
      t = mod_0(t);
      {
        d_34 = t;
        a_34 :
        if(!(match_int(d_34, 0)))
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm BuildSepList_4 (ATerm t, ATerm f_97 (ATerm), ATerm g_97 (ATerm), ATerm h_97 (ATerm), ATerm i_97 (ATerm))
{
  ATerm o_34 = NULL,p_34 = NULL,q_34 = NULL;
  o_34 = t;
  n_34 :
  if(match_cons(o_34, sym__2))
    {
      p_34 = ATgetArgument(o_34, 0);
      q_34 = ATgetArgument(o_34, 1);
      {
        ATerm v_34 = NULL;
        ATerm n_35 = NULL;
        ATerm h_19 = t;
        int i_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_34 = NULL,d_35 = NULL;
            t = not_null(p_34);
            {
              t = even_0(t);
              {
                ATerm j_19;
                j_19 = t;
                {
                  ATerm x_34 = NULL;
                  t = term_k_15;
                  {
                    t = g_97(t);
                    {
                      x_34 = t;
                      if(((w_34 != NULL) && (w_34 != x_34)))
                        _fail(x_34);
                      else
                        w_34 = x_34;
                    }
                  }
                }
                t = j_19;
                {
                  ATerm e_35 = NULL;
                  t = term_k_15;
                  {
                    t = h_97(t);
                    {
                      e_35 = t;
                      if(((d_35 != NULL) && (d_35 != e_35)))
                        _fail(e_35);
                      else
                        d_35 = e_35;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__4, not_null(w_34), not_null(q_34), not_null(d_35), term_c_19);
                    {
                      t = symbol2abox_0(t);
                      {
                        ATerm y_1 (ATerm t)
                        {
                          ATerm f_35 = NULL;
                          f_35 = t;
                          {
                            ATerm k_19 = t;
                            if((PushChoice() == 0))
                              {
                                t = is_list_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = k_19;
                              }
                            t = (ATerm) ATinsert(ATempty, not_null(f_35));
                          }
                          return(t);
                        }
                        t = try_1(t, y_1);
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(i_19);
          }
        else
          {
            t = h_19;
            {
              ATerm h_35 = NULL,j_35 = NULL;
              ATerm l_19;
              l_19 = t;
              {
                ATerm i_35 = NULL;
                t = term_k_15;
                {
                  t = f_97(t);
                  {
                    i_35 = t;
                    if(((h_35 != NULL) && (h_35 != i_35)))
                      _fail(i_35);
                    else
                      h_35 = i_35;
                  }
                }
              }
              t = l_19;
              {
                ATerm k_35 = NULL;
                t = term_k_15;
                {
                  t = h_97(t);
                  {
                    k_35 = t;
                    if(((j_35 != NULL) && (j_35 != k_35)))
                      _fail(k_35);
                    else
                      j_35 = k_35;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__4, not_null(h_35), not_null(q_34), not_null(j_35), term_n_19);
                  {
                    t = symbol2abox_0(t);
                    {
                      ATerm z_1 (ATerm t)
                      {
                        ATerm l_35 = NULL;
                        l_35 = t;
                        {
                          ATerm o_19 = t;
                          if((PushChoice() == 0))
                            {
                              t = is_list_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = o_19;
                            }
                          t = (ATerm) ATinsert(ATempty, not_null(l_35));
                        }
                        return(t);
                      }
                      t = try_1(t, z_1);
                    }
                  }
                }
              }
            }
          }
        {
          n_35 = t;
          if(((v_34 != NULL) && (v_34 != n_35)))
            _fail(n_35);
          else
            v_34 = n_35;
        }
        t = not_null(v_34);
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
  ATerm c_36 = NULL,d_36 = NULL,e_36 = NULL;
  c_36 = t;
  b_36 :
  if(match_cons(c_36, sym__2))
    {
      d_36 = ATgetArgument(c_36, 0);
      e_36 = ATgetArgument(c_36, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_36)), not_null(d_36));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm q_36 = NULL,r_36 = NULL,s_36 = NULL,t_36 = NULL,v_36 = NULL;
  q_36 = t;
  k_36 :
  if(match_cons(q_36, sym__2))
    {
      r_36 = ATgetArgument(q_36, 0);
      s_36 = ATgetArgument(q_36, 1);
      l_36 :
      if(((ATgetType(s_36) == AT_LIST) && ((ATermList) s_36 != ATempty)))
        {
          t_36 = ATgetFirst((ATermList) s_36);
          v_36 = (ATerm) ATgetNext((ATermList) s_36);
          {
            ATerm b_37 = NULL;
            ATerm c_37 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_36), term_n_19);
            {
              t = add_0(t);
              {
                c_37 = t;
                if(((b_37 != NULL) && (b_37 != c_37)))
                  _fail(c_37);
                else
                  b_37 = c_37;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(r_36), not_null(t_36)), (ATerm) ATmakeAppl(sym__2, not_null(b_37), not_null(v_36)));
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
  ATerm i_37 = NULL,j_37 = NULL,k_37 = NULL;
  i_37 = t;
  g_37 :
  if(match_cons(i_37, sym__2))
    {
      j_37 = ATgetArgument(i_37, 0);
      k_37 = ATgetArgument(i_37, 1);
      h_37 :
      if(((ATermList) k_37 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm b_88 (ATerm), ATerm c_88 (ATerm), ATerm d_88 (ATerm), ATerm e_88 (ATerm))
{
  ATerm p_37 (ATerm t)
  {
    ATerm p_19 = t;
    int q_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = b_88(t);
        LocalPopChoice(q_19);
      }
    else
      {
        t = p_19;
        {
          t = c_88(t);
          {
            t = _2(t, e_88, p_37);
            t = d_88(t);
          }
        }
      }
    return(t);
  }
  t = p_37(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm r_37 = NULL;
  r_37 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_n_19, not_null(r_37));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm n_88 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, n_88);
  return(t);
}
ATerm build_sep_list_0 (ATerm t)
{
  ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,o_38 = NULL;
  k_38 = t;
  j_38 :
  if(match_cons(k_38, sym__4))
    {
      l_38 = ATgetArgument(k_38, 0);
      m_38 = ATgetArgument(k_38, 1);
      n_38 = ATgetArgument(k_38, 2);
      o_38 = ATgetArgument(k_38, 3);
      {
        ATerm t_38 = NULL,u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
        ATerm z_38 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_38), not_null(o_38));
        {
          ATerm e_39 = NULL;
          t = make_path_0(t);
          {
            z_38 = t;
            {
              if(((v_38 != NULL) && (v_38 != z_38)))
                _fail(z_38);
              else
                v_38 = z_38;
              {
                t = not_null(l_38);
                {
                  ATerm r_19 = t;
                  int s_19 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm a_2 (ATerm t)
                      {
                        ATerm a_39 = NULL;
                        a_39 = t;
                        if(((t_38 != NULL) && (t_38 != a_39)))
                          _fail(a_39);
                        else
                          t_38 = a_39;
                        return(t);
                      }
                      ATerm b_2 (ATerm t)
                      {
                        ATerm b_39 = NULL;
                        b_39 = t;
                        if(((u_38 != NULL) && (u_38 != b_39)))
                          _fail(b_39);
                        else
                          u_38 = b_39;
                        return(t);
                      }
                      t = iter_sep_2(t, a_2, b_2);
                      LocalPopChoice(s_19);
                    }
                  else
                    {
                      t = r_19;
                      {
                        ATerm c_2 (ATerm t)
                        {
                          ATerm c_39 = NULL;
                          c_39 = t;
                          if(((t_38 != NULL) && (t_38 != c_39)))
                            _fail(c_39);
                          else
                            t_38 = c_39;
                          return(t);
                        }
                        ATerm d_2 (ATerm t)
                        {
                          ATerm d_39 = NULL;
                          d_39 = t;
                          if(((u_38 != NULL) && (u_38 != d_39)))
                            _fail(d_39);
                          else
                            u_38 = d_39;
                          return(t);
                        }
                        t = iter_star_sep_2(t, c_2, d_2);
                      }
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(l_38), not_null(v_38));
                    {
                      ATerm f_39 = NULL;
                      t = get_pp_entry_0(t);
                      {
                        e_39 = t;
                        {
                          if(((w_38 != NULL) && (w_38 != e_39)))
                            _fail(e_39);
                          else
                            w_38 = e_39;
                          {
                            t = not_null(m_38);
                            {
                              ATerm g_39 = NULL;
                              ATerm e_2 (ATerm t)
                              {
                                ATerm f_2 (ATerm t)
                                {
                                  t = not_null(t_38);
                                  return(t);
                                }
                                ATerm g_2 (ATerm t)
                                {
                                  t = not_null(u_38);
                                  return(t);
                                }
                                ATerm h_2 (ATerm t)
                                {
                                  t = not_null(v_38);
                                  return(t);
                                }
                                ATerm i_2 (ATerm t)
                                {
                                  t = not_null(o_38);
                                  return(t);
                                }
                                t = BuildSepList_4(t, f_2, g_2, h_2, i_2);
                                return(t);
                              }
                              t = nzip_1(t, e_2);
                              {
                                f_39 = t;
                                {
                                  if(((x_38 != NULL) && (x_38 != f_39)))
                                    _fail(f_39);
                                  else
                                    x_38 = f_39;
                                  {
                                    t = not_null(x_38);
                                    {
                                      ATerm j_2 (ATerm t)
                                      {
                                        t = not_null(w_38);
                                        return(t);
                                      }
                                      t = instantiate_sep_list_1(t, j_2);
                                      {
                                        g_39 = t;
                                        if(((y_38 != NULL) && (y_38 != g_39)))
                                          _fail(g_39);
                                        else
                                          y_38 = g_39;
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
        t = not_null(y_38);
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
  ATerm u_39 = NULL,v_39 = NULL,w_39 = NULL,x_39 = NULL,y_39 = NULL;
  u_39 = t;
  r_39 :
  if(match_cons(u_39, sym__2))
    {
      v_39 = ATgetArgument(u_39, 0);
      w_39 = ATgetArgument(u_39, 1);
      s_39 :
      if(match_int(v_39, 1))
        {
          t_39 :
          if(((ATgetType(w_39) == AT_LIST) && ((ATermList) w_39 != ATempty)))
            {
              x_39 = ATgetFirst((ATermList) w_39);
              y_39 = (ATerm) ATgetNext((ATermList) w_39);
              t = not_null(x_39);
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
  ATerm e_40 = NULL,f_40 = NULL,g_40 = NULL;
  e_40 = t;
  d_40 :
  if(match_cons(e_40, sym__2))
    {
      f_40 = ATgetArgument(e_40, 0);
      g_40 = ATgetArgument(e_40, 1);
      {
        ATerm t_19 = t;
        int u_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(f_40), not_null(g_40));
            LocalPopChoice(u_19);
          }
        else
          {
            t = t_19;
            t = SSL_subtr(not_null(f_40), not_null(g_40));
          }
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
  ATerm m_40 = NULL;
  ATerm v_19 = t;
  int w_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_40 = NULL,o_40 = NULL,p_40 = NULL;
      n_40 = t;
      l_40 :
      if(match_cons(n_40, sym__2))
        {
          o_40 = ATgetArgument(n_40, 0);
          p_40 = ATgetArgument(n_40, 1);
          {
            if(((m_40 != NULL) && (m_40 != o_40)))
              _fail(o_40);
            else
              m_40 = o_40;
            if(((m_40 != NULL) && (m_40 != p_40)))
              _fail(p_40);
            else
              m_40 = p_40;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(w_19);
    }
  else
    {
      t = v_19;
      t = gt_0(t);
    }
  return(t);
}
ATerm Ind2_0 (ATerm t)
{
  ATerm v_40 = NULL,w_40 = NULL,x_40 = NULL,y_40 = NULL,z_40 = NULL;
  v_40 = t;
  t_40 :
  if(match_cons(v_40, sym__2))
    {
      w_40 = ATgetArgument(v_40, 0);
      x_40 = ATgetArgument(v_40, 1);
      u_40 :
      if(((ATgetType(x_40) == AT_LIST) && ((ATermList) x_40 != ATempty)))
        {
          y_40 = ATgetFirst((ATermList) x_40);
          z_40 = (ATerm) ATgetNext((ATermList) x_40);
          {
            ATerm d_41 = NULL;
            ATerm y_19;
            y_19 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_40), term_c_19);
              t = geq_0(t);
            }
            t = y_19;
            {
              ATerm e_41 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(w_40), term_n_19);
              {
                t = subt_0(t);
                {
                  e_41 = t;
                  if(((d_41 != NULL) && (d_41 != e_41)))
                    _fail(e_41);
                  else
                    d_41 = e_41;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(d_41), not_null(z_40));
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
ATerm index_0 (ATerm t)
{
  t = repeat_1(t, Ind2_0);
  t = Ind1_0(t);
  return(t);
}
ATerm symbol2abox_0 (ATerm t)
{
  ATerm i_44 = NULL,j_44 = NULL,k_44 = NULL,l_44 = NULL,m_44 = NULL,n_44 = NULL,p_44 = NULL,q_44 = NULL,r_44 = NULL,s_44 = NULL,t_44 = NULL;
  n_44 = t;
  y_43 :
  if(match_cons(n_44, sym__4))
    {
      p_44 = ATgetArgument(n_44, 0);
      r_44 = ATgetArgument(n_44, 1);
      s_44 = ATgetArgument(n_44, 2);
      t_44 = ATgetArgument(n_44, 3);
      z_43 :
      if(match_cons(p_44, sym_seq_1))
        {
          q_44 = ATgetArgument(p_44, 0);
          c_44 :
          if(match_cons(r_44, sym_appl_2))
            {
              l_44 = ATgetArgument(r_44, 0);
              m_44 = ATgetArgument(r_44, 1);
              {
                ATerm y_44 = NULL,z_44 = NULL,a_45 = NULL,b_45 = NULL;
                ATerm c_45 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_44), not_null(t_44));
                {
                  ATerm d_45 = NULL;
                  t = make_path_0(t);
                  {
                    c_45 = t;
                    {
                      if(((y_44 != NULL) && (y_44 != c_45)))
                        _fail(c_45);
                      else
                        y_44 = c_45;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, not_null(q_44)), not_null(y_44));
                        {
                          ATerm e_45 = NULL,g_45 = NULL,i_45 = NULL;
                          t = get_pp_entry_0(t);
                          {
                            d_45 = t;
                            {
                              if(((z_44 != NULL) && (z_44 != d_45)))
                                _fail(d_45);
                              else
                                z_44 = d_45;
                              {
                                ATerm z_19;
                                z_19 = t;
                                {
                                  ATerm f_45 = NULL;
                                  t = not_null(q_44);
                                  {
                                    ATerm k_2 (ATerm t)
                                    {
                                      ATerm a_20 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = lit_1(t, _id);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = a_20;
                                        }
                                      return(t);
                                    }
                                    t = filter_1(t, k_2);
                                    {
                                      f_45 = t;
                                      if(((e_45 != NULL) && (e_45 != f_45)))
                                        _fail(f_45);
                                      else
                                        e_45 = f_45;
                                    }
                                  }
                                }
                                t = z_19;
                                {
                                  ATerm h_45 = NULL;
                                  t = not_null(m_44);
                                  {
                                    ATerm l_2 (ATerm t)
                                    {
                                      ATerm b_20 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = lit_1(t, _id);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = b_20;
                                        }
                                      return(t);
                                    }
                                    t = filter_1(t, l_2);
                                    {
                                      h_45 = t;
                                      if(((g_45 != NULL) && (g_45 != h_45)))
                                        _fail(h_45);
                                      else
                                        g_45 = h_45;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__4, not_null(e_45), not_null(g_45), not_null(y_44), term_n_19);
                                    {
                                      ATerm j_45 = NULL;
                                      t = seq2abox_0(t);
                                      {
                                        i_45 = t;
                                        {
                                          if(((a_45 != NULL) && (a_45 != i_45)))
                                            _fail(i_45);
                                          else
                                            a_45 = i_45;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(z_44), not_null(a_45));
                                            {
                                              t = instantiate_0(t);
                                              {
                                                j_45 = t;
                                                if(((b_45 != NULL) && (b_45 != j_45)))
                                                  _fail(j_45);
                                                else
                                                  b_45 = j_45;
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
                t = not_null(b_45);
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(p_44, sym_alt_2))
            {
              q_44 = ATgetArgument(p_44, 0);
              i_44 = ATgetArgument(p_44, 1);
              {
                ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL,s_45 = NULL,t_45 = NULL;
                ATerm u_45 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_44), not_null(t_44));
                {
                  ATerm v_45 = NULL;
                  t = make_path_0(t);
                  {
                    u_45 = t;
                    {
                      if(((p_45 != NULL) && (p_45 != u_45)))
                        _fail(u_45);
                      else
                        p_45 = u_45;
                      {
                        ATerm e_48 = NULL;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, not_null(q_44), not_null(i_44)), not_null(r_44), not_null(p_45), term_n_19);
                        {
                          v_45 = t;
                          {
                            if(((q_45 != NULL) && (q_45 != v_45)))
                              _fail(v_45);
                            else
                              q_45 = v_45;
                            {
                              ATerm x_57 (ATerm t)
                              {
                                ATerm w_45 = NULL,x_45 = NULL,y_45 = NULL,z_45 = NULL,a_46 = NULL,b_46 = NULL,c_46 = NULL,d_46 = NULL,e_46 = NULL,f_46 = NULL,g_46 = NULL,h_46 = NULL,i_46 = NULL,j_46 = NULL,k_46 = NULL,s_46 = NULL,t_46 = NULL,u_46 = NULL;
                                ATerm y_57 (ATerm t)
                                {
                                  ATerm y_46 = NULL,z_46 = NULL,b_47 = NULL,h_47 = NULL;
                                  if(((w_45 != NULL) && (w_45 != z_45)))
                                    _fail(z_45);
                                  else
                                    w_45 = z_45;
                                  {
                                    if(((w_45 != NULL) && (w_45 != c_46)))
                                      _fail(c_46);
                                    else
                                      w_45 = c_46;
                                    {
                                      if(((x_45 != NULL) && (x_45 != d_46)))
                                        _fail(d_46);
                                      else
                                        x_45 = d_46;
                                      {
                                        if(((z_46 != NULL) && (z_46 != e_46)))
                                          _fail(e_46);
                                        else
                                          z_46 = e_46;
                                        {
                                          if(((y_46 != NULL) && (y_46 != j_46)))
                                            _fail(j_46);
                                          else
                                            y_46 = j_46;
                                          {
                                            if(((h_47 != NULL) && (h_47 != t_46)))
                                              _fail(t_46);
                                            else
                                              h_47 = t_46;
                                            {
                                              if(((b_47 != NULL) && (b_47 != u_46)))
                                                _fail(u_46);
                                              else
                                                b_47 = u_46;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__4, not_null(w_45), (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, not_null(w_45)), not_null(w_45), not_null(z_46)), not_null(y_46)), not_null(h_47), not_null(b_47));
                                                t = x_57(t);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return(t);
                                }
                                ATerm z_57 (ATerm t)
                                {
                                  ATerm l_47 = NULL,m_47 = NULL,o_47 = NULL,p_47 = NULL,q_47 = NULL;
                                  if(((w_45 != NULL) && (w_45 != c_46)))
                                    _fail(c_46);
                                  else
                                    w_45 = c_46;
                                  {
                                    if(((x_45 != NULL) && (x_45 != d_46)))
                                      _fail(d_46);
                                    else
                                      x_45 = d_46;
                                    {
                                      if(((m_47 != NULL) && (m_47 != e_46)))
                                        _fail(e_46);
                                      else
                                        m_47 = e_46;
                                      {
                                        if(((l_47 != NULL) && (l_47 != j_46)))
                                          _fail(j_46);
                                        else
                                          l_47 = j_46;
                                        {
                                          if(((p_47 != NULL) && (p_47 != t_46)))
                                            _fail(t_46);
                                          else
                                            p_47 = t_46;
                                          {
                                            if(((o_47 != NULL) && (o_47 != u_46)))
                                              _fail(u_46);
                                            else
                                              o_47 = u_46;
                                            {
                                              ATerm r_47 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(o_47), term_n_19);
                                              {
                                                t = add_0(t);
                                                {
                                                  r_47 = t;
                                                  if(((q_47 != NULL) && (q_47 != r_47)))
                                                    _fail(r_47);
                                                  else
                                                    q_47 = r_47;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATmakeAppl(sym__4, not_null(x_45), (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, not_null(z_45)), not_null(x_45), not_null(m_47)), not_null(l_47)), not_null(p_47), not_null(q_47));
                                                t = x_57(t);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return(t);
                                }
                                ATerm a_58 (ATerm t)
                                {
                                  ATerm a_48 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(q_45), not_null(t_46));
                                  {
                                    ATerm b_48 = NULL;
                                    t = get_pp_entry_0(t);
                                    {
                                      a_48 = t;
                                      {
                                        if(((r_45 != NULL) && (r_45 != a_48)))
                                          _fail(a_48);
                                        else
                                          r_45 = a_48;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__4, not_null(g_46), not_null(k_46), not_null(t_46), not_null(u_46));
                                          {
                                            ATerm c_48 = NULL;
                                            t = symbol2abox_0(t);
                                            {
                                              b_48 = t;
                                              {
                                                if(((s_45 != NULL) && (s_45 != b_48)))
                                                  _fail(b_48);
                                                else
                                                  s_45 = b_48;
                                                {
                                                  ATerm d_48 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_46), not_null(r_45));
                                                  {
                                                    t = index_0(t);
                                                    {
                                                      d_48 = t;
                                                      if(((c_48 != NULL) && (c_48 != d_48)))
                                                        _fail(d_48);
                                                      else
                                                        c_48 = d_48;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(c_48)), (ATerm) ATinsert(ATempty, not_null(s_45)));
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
                                f_46 = t;
                                n_42 :
                                if(match_cons(f_46, sym__4))
                                  {
                                    g_46 = ATgetArgument(f_46, 0);
                                    h_46 = ATgetArgument(f_46, 1);
                                    t_46 = ATgetArgument(f_46, 2);
                                    u_46 = ATgetArgument(f_46, 3);
                                    o_42 :
                                    if(match_cons(h_46, sym_appl_2))
                                      {
                                        i_46 = ATgetArgument(h_46, 0);
                                        j_46 = ATgetArgument(h_46, 1);
                                        p_42 :
                                        if(((ATgetType(j_46) == AT_LIST) && ((ATermList) j_46 != ATempty)))
                                          {
                                            k_46 = ATgetFirst((ATermList) j_46);
                                            s_46 = (ATerm) ATgetNext((ATermList) j_46);
                                            q_42 :
                                            if(((ATermList) s_46 == ATempty))
                                              {
                                                r_42 :
                                                if(match_cons(i_46, sym_prod_3))
                                                  {
                                                    y_45 = ATgetArgument(i_46, 0);
                                                    b_46 = ATgetArgument(i_46, 1);
                                                    e_46 = ATgetArgument(i_46, 2);
                                                    s_42 :
                                                    if(match_cons(b_46, sym_alt_2))
                                                      {
                                                        c_46 = ATgetArgument(b_46, 0);
                                                        d_46 = ATgetArgument(b_46, 1);
                                                        t_42 :
                                                        if(((ATgetType(y_45) == AT_LIST) && ((ATermList) y_45 != ATempty)))
                                                          {
                                                            z_45 = ATgetFirst((ATermList) y_45);
                                                            a_46 = (ATerm) ATgetNext((ATermList) y_45);
                                                            u_42 :
                                                            if(((ATermList) a_46 == ATempty))
                                                              {
                                                                v_42 :
                                                                if(match_cons(g_46, sym_alt_2))
                                                                  {
                                                                    w_45 = ATgetArgument(g_46, 0);
                                                                    x_45 = ATgetArgument(g_46, 1);
                                                                    {
                                                                      ATerm c_20 = t;
                                                                      int d_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = y_57(t);
                                                                          LocalPopChoice(d_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = c_20;
                                                                          {
                                                                            ATerm e_20 = t;
                                                                            int f_20 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                t = z_57(t);
                                                                                LocalPopChoice(f_20);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = e_20;
                                                                                t = a_58(t);
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    t = a_58(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                y_42 :
                                                                t = a_58(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            z_42 :
                                                            t = a_58(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        a_43 :
                                                        b_43 :
                                                        t = a_58(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    c_43 :
                                                    t = a_58(t);
                                                  }
                                              }
                                            else
                                              {
                                                d_43 :
                                                if(match_cons(i_46, sym_prod_3))
                                                  {
                                                    y_45 = ATgetArgument(i_46, 0);
                                                    b_46 = ATgetArgument(i_46, 1);
                                                    e_46 = ATgetArgument(i_46, 2);
                                                    e_43 :
                                                    if(match_cons(g_46, sym_alt_2))
                                                      {
                                                        w_45 = ATgetArgument(g_46, 0);
                                                        x_45 = ATgetArgument(g_46, 1);
                                                        f_43 :
                                                        if(((ATgetType(y_45) == AT_LIST) && ((ATermList) y_45 != ATempty)))
                                                          {
                                                            z_45 = ATgetFirst((ATermList) y_45);
                                                            a_46 = (ATerm) ATgetNext((ATermList) y_45);
                                                            g_43 :
                                                            if(((ATermList) a_46 == ATempty))
                                                              {
                                                                h_43 :
                                                                if(match_cons(b_46, sym_alt_2))
                                                                  {
                                                                    c_46 = ATgetArgument(b_46, 0);
                                                                    d_46 = ATgetArgument(b_46, 1);
                                                                    {
                                                                      ATerm g_20 = t;
                                                                      int h_20 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = y_57(t);
                                                                          LocalPopChoice(h_20);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = g_20;
                                                                          t = z_57(t);
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
                                                  }
                                                else
                                                  {
                                                    _fail(t);
                                                  }
                                              }
                                          }
                                        else
                                          {
                                            i_43 :
                                            if(match_cons(i_46, sym_prod_3))
                                              {
                                                y_45 = ATgetArgument(i_46, 0);
                                                b_46 = ATgetArgument(i_46, 1);
                                                e_46 = ATgetArgument(i_46, 2);
                                                j_43 :
                                                if(match_cons(g_46, sym_alt_2))
                                                  {
                                                    w_45 = ATgetArgument(g_46, 0);
                                                    x_45 = ATgetArgument(g_46, 1);
                                                    k_43 :
                                                    if(((ATgetType(y_45) == AT_LIST) && ((ATermList) y_45 != ATempty)))
                                                      {
                                                        z_45 = ATgetFirst((ATermList) y_45);
                                                        a_46 = (ATerm) ATgetNext((ATermList) y_45);
                                                        l_43 :
                                                        if(((ATermList) a_46 == ATempty))
                                                          {
                                                            m_43 :
                                                            if(match_cons(b_46, sym_alt_2))
                                                              {
                                                                c_46 = ATgetArgument(b_46, 0);
                                                                d_46 = ATgetArgument(b_46, 1);
                                                                {
                                                                  ATerm i_20 = t;
                                                                  int j_20 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = y_57(t);
                                                                      LocalPopChoice(j_20);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = i_20;
                                                                      t = z_57(t);
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
                                  }
                                else
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              t = x_57(t);
                              {
                                e_48 = t;
                                if(((t_45 != NULL) && (t_45 != e_48)))
                                  _fail(e_48);
                                else
                                  t_45 = e_48;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = not_null(t_45);
              }
            }
          else
            {
              if(match_cons(p_44, sym_iter_star_sep_2))
                {
                  q_44 = ATgetArgument(p_44, 0);
                  i_44 = ATgetArgument(p_44, 1);
                  {
                    ATerm k_48 = NULL;
                    ATerm l_48 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(q_44), not_null(i_44)), not_null(r_44), not_null(s_44), not_null(t_44));
                    {
                      t = build_sep_list_0(t);
                      {
                        l_48 = t;
                        if(((k_48 != NULL) && (k_48 != l_48)))
                          _fail(l_48);
                        else
                          k_48 = l_48;
                      }
                    }
                    t = not_null(k_48);
                  }
                }
              else
                {
                  if(match_cons(p_44, sym_iter_sep_2))
                    {
                      q_44 = ATgetArgument(p_44, 0);
                      i_44 = ATgetArgument(p_44, 1);
                      {
                        ATerm v_48 = NULL;
                        ATerm w_48 = NULL;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, not_null(q_44), not_null(i_44)), not_null(r_44), not_null(s_44), not_null(t_44));
                        {
                          t = build_sep_list_0(t);
                          {
                            w_48 = t;
                            if(((v_48 != NULL) && (v_48 != w_48)))
                              _fail(w_48);
                            else
                              v_48 = w_48;
                          }
                        }
                        t = not_null(v_48);
                      }
                    }
                  else
                    {
                      if(match_cons(p_44, sym_iter_star_1))
                        {
                          q_44 = ATgetArgument(p_44, 0);
                          {
                            ATerm e_49 = NULL;
                            ATerm f_49 = NULL;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, not_null(q_44)), not_null(r_44), not_null(s_44), not_null(t_44));
                            {
                              t = build_list_0(t);
                              {
                                f_49 = t;
                                if(((e_49 != NULL) && (e_49 != f_49)))
                                  _fail(f_49);
                                else
                                  e_49 = f_49;
                              }
                            }
                            t = not_null(e_49);
                          }
                        }
                      else
                        {
                          if(match_cons(p_44, sym_iter_1))
                            {
                              q_44 = ATgetArgument(p_44, 0);
                              {
                                ATerm q_49 = NULL;
                                ATerm r_49 = NULL;
                                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, not_null(q_44)), not_null(r_44), not_null(s_44), not_null(t_44));
                                {
                                  t = build_list_0(t);
                                  {
                                    r_49 = t;
                                    if(((q_49 != NULL) && (q_49 != r_49)))
                                      _fail(r_49);
                                    else
                                      q_49 = r_49;
                                  }
                                }
                                t = not_null(q_49);
                              }
                            }
                          else
                            {
                              if(match_cons(p_44, sym_opt_1))
                                {
                                  q_44 = ATgetArgument(p_44, 0);
                                  d_44 :
                                  if(match_cons(r_44, sym_appl_2))
                                    {
                                      l_44 = ATgetArgument(r_44, 0);
                                      m_44 = ATgetArgument(r_44, 1);
                                      e_44 :
                                      if(((ATgetType(m_44) == AT_LIST) && ((ATermList) m_44 != ATempty)))
                                        {
                                          j_44 = ATgetFirst((ATermList) m_44);
                                          k_44 = (ATerm) ATgetNext((ATermList) m_44);
                                          h_44 :
                                          if(((ATermList) k_44 == ATempty))
                                            {
                                              {
                                                ATerm x_49 = NULL,y_49 = NULL,z_49 = NULL,a_50 = NULL;
                                                ATerm b_50 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(s_44), not_null(t_44));
                                                {
                                                  ATerm c_50 = NULL;
                                                  t = make_path_0(t);
                                                  {
                                                    b_50 = t;
                                                    {
                                                      if(((x_49 != NULL) && (x_49 != b_50)))
                                                        _fail(b_50);
                                                      else
                                                        x_49 = b_50;
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, not_null(q_44)), not_null(x_49));
                                                        {
                                                          ATerm d_50 = NULL;
                                                          t = get_pp_entry_0(t);
                                                          {
                                                            c_50 = t;
                                                            {
                                                              if(((y_49 != NULL) && (y_49 != c_50)))
                                                                _fail(c_50);
                                                              else
                                                                y_49 = c_50;
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__4, not_null(q_44), not_null(j_44), not_null(x_49), term_n_19);
                                                                {
                                                                  ATerm e_50 = NULL;
                                                                  t = symbol2abox_0(t);
                                                                  {
                                                                    d_50 = t;
                                                                    {
                                                                      if(((z_49 != NULL) && (z_49 != d_50)))
                                                                        _fail(d_50);
                                                                      else
                                                                        z_49 = d_50;
                                                                      {
                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(y_49), (ATerm) ATinsert(ATempty, not_null(z_49)));
                                                                        {
                                                                          t = filter_literals_0(t);
                                                                          {
                                                                            t = instantiate_0(t);
                                                                            {
                                                                              e_50 = t;
                                                                              if(((a_50 != NULL) && (a_50 != e_50)))
                                                                                _fail(e_50);
                                                                              else
                                                                                a_50 = e_50;
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
                                                t = not_null(a_50);
                                              }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          if(((ATermList) m_44 == ATempty))
                                            {
                                              t = (ATerm) ATempty;
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
                                }
                              else
                                {
                                  if(match_cons(p_44, sym_sort_1))
                                    {
                                      q_44 = ATgetArgument(p_44, 0);
                                      {
                                        ATerm k_20 = t;
                                        int m_20 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_56 = NULL;
                                            ATerm p_56 = NULL;
                                            t = not_null(r_44);
                                            {
                                              ATerm o_20 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  t = is_string_0(t);
                                                  PopChoice();
                                                  _fail(t);
                                                }
                                              else
                                                {
                                                  t = o_20;
                                                }
                                              {
                                                t = not_null(r_44);
                                                {
                                                  t = appl2abox_0(t);
                                                  {
                                                    p_56 = t;
                                                    if(((o_56 != NULL) && (o_56 != p_56)))
                                                      _fail(p_56);
                                                    else
                                                      o_56 = p_56;
                                                  }
                                                }
                                              }
                                            }
                                            t = not_null(o_56);
                                            LocalPopChoice(m_20);
                                          }
                                        else
                                          {
                                            t = k_20;
                                            {
                                              t = not_null(r_44);
                                              t = is_string_0(t);
                                              t = (ATerm) ATmakeAppl(sym_S_1, not_null(r_44));
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(p_44, sym_char_class_1))
                                        {
                                          q_44 = ATgetArgument(p_44, 0);
                                          {
                                            ATerm u_56 = NULL;
                                            ATerm v_56 = NULL;
                                            t = (ATerm) ATinsert(ATempty, not_null(r_44));
                                            {
                                              t = implode_string_0(t);
                                              {
                                                v_56 = t;
                                                if(((u_56 != NULL) && (u_56 != v_56)))
                                                  _fail(v_56);
                                                else
                                                  u_56 = v_56;
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_S_1, not_null(u_56));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(p_44, sym_lit_1))
                                            {
                                              q_44 = ATgetArgument(p_44, 0);
                                              t = (ATerm) ATmakeAppl(sym_S_1, not_null(q_44));
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
            }
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm seq2abox_0 (ATerm t)
{
  ATerm d_59 = NULL,e_59 = NULL,f_59 = NULL,g_59 = NULL,h_59 = NULL,i_59 = NULL,j_59 = NULL,k_59 = NULL,l_59 = NULL,m_59 = NULL,n_59 = NULL;
  ATerm t_60 (ATerm t)
  {
    ATerm j_60 = NULL,k_60 = NULL,m_60 = NULL;
    t = (ATerm) ATmakeAppl(sym__4, not_null(h_59), not_null(k_59), not_null(m_59), not_null(n_59));
    {
      ATerm n_60 = NULL,p_60 = NULL;
      t = symbol2abox_0(t);
      {
        m_60 = t;
        {
          if(((j_60 != NULL) && (j_60 != m_60)))
            _fail(m_60);
          else
            j_60 = m_60;
          {
            ATerm o_60 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_59), term_n_19);
            {
              t = add_0(t);
              {
                o_60 = t;
                if(((n_60 != NULL) && (n_60 != o_60)))
                  _fail(o_60);
                else
                  n_60 = o_60;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__4, not_null(i_59), not_null(l_59), not_null(m_59), not_null(n_60));
              {
                t = seq2abox_0(t);
                {
                  p_60 = t;
                  {
                    if(((k_60 != NULL) && (k_60 != p_60)))
                      _fail(p_60);
                    else
                      k_60 = p_60;
                    t = (ATerm) ATinsert(CheckATermList(not_null(k_60)), not_null(j_60));
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
  f_59 = t;
  w_58 :
  if(match_cons(f_59, sym__4))
    {
      g_59 = ATgetArgument(f_59, 0);
      j_59 = ATgetArgument(f_59, 1);
      m_59 = ATgetArgument(f_59, 2);
      n_59 = ATgetArgument(f_59, 3);
      x_58 :
      if(((ATermList) g_59 == ATempty))
        {
          y_58 :
          if(((ATermList) j_59 == ATempty))
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
          if(((ATgetType(g_59) == AT_LIST) && ((ATermList) g_59 != ATempty)))
            {
              h_59 = ATgetFirst((ATermList) g_59);
              i_59 = (ATerm) ATgetNext((ATermList) g_59);
              z_58 :
              if(((ATgetType(j_59) == AT_LIST) && ((ATermList) j_59 != ATempty)))
                {
                  k_59 = ATgetFirst((ATermList) j_59);
                  l_59 = (ATerm) ATgetNext((ATermList) j_59);
                  a_59 :
                  if(match_cons(k_59, sym_lit_1))
                    {
                      e_59 = ATgetArgument(k_59, 0);
                      b_59 :
                      if(match_cons(h_59, sym_lit_1))
                        {
                          d_59 = ATgetArgument(h_59, 0);
                          {
                            ATerm p_20 = t;
                            int q_20 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__4, not_null(i_59), not_null(l_59), not_null(m_59), not_null(n_59));
                                t = seq2abox_0(t);
                                LocalPopChoice(q_20);
                              }
                            else
                              {
                                t = p_20;
                                t = t_60(t);
                              }
                          }
                        }
                      else
                        {
                          t = t_60(t);
                        }
                    }
                  else
                    {
                      c_59 :
                      t = t_60(t);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm c_61 = NULL,d_61 = NULL;
  c_61 = t;
  b_61 :
  if(match_cons(c_61, sym_lit_1))
    {
      d_61 = ATgetArgument(c_61, 0);
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_61 = NULL;
            t = not_null(d_61);
            {
              t = v_0(t);
              {
                f_61 = t;
                t = (ATerm) ATmakeAppl(sym_lit_1, not_null(f_61));
              }
            }
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            {
              ATerm i_61 = NULL;
              t = not_null(d_61);
              {
                t = v_0(t);
                {
                  i_61 = t;
                  t = (ATerm) ATmakeAppl(sym_lit_1, not_null(i_61));
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
ATerm Snd_0 (ATerm t)
{
  ATerm v_61 = NULL;
  ATerm x_61 = NULL,y_61 = NULL,z_61 = NULL;
  v_61 = t;
  {
    ATerm a_62 = NULL;
    ATerm c_62 = NULL,d_62 = NULL,e_62 = NULL,f_62 = NULL,g_62 = NULL,h_62 = NULL,i_62 = NULL;
    t = not_null(v_61);
    {
      a_62 = t;
      {
        t = SSL_explode_term(not_null(a_62));
        {
          c_62 = t;
          r_61 :
          if(match_cons(c_62, sym__2))
            {
              d_62 = ATgetArgument(c_62, 0);
              e_62 = ATgetArgument(c_62, 1);
              s_61 :
              if(match_string(d_62, ""))
                {
                  t_61 :
                  if(((ATgetType(e_62) == AT_LIST) && ((ATermList) e_62 != ATempty)))
                    {
                      f_62 = ATgetFirst((ATermList) e_62);
                      g_62 = (ATerm) ATgetNext((ATermList) e_62);
                      u_61 :
                      if(((ATgetType(g_62) == AT_LIST) && ((ATermList) g_62 != ATempty)))
                        {
                          h_62 = ATgetFirst((ATermList) g_62);
                          i_62 = (ATerm) ATgetNext((ATermList) g_62);
                          {
                            if(((x_61 != NULL) && (x_61 != f_62)))
                              _fail(f_62);
                            else
                              x_61 = f_62;
                            {
                              if(((z_61 != NULL) && (z_61 != h_62)))
                                _fail(h_62);
                              else
                                z_61 = h_62;
                              if(((y_61 != NULL) && (y_61 != i_62)))
                                _fail(i_62);
                              else
                                y_61 = i_62;
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
        }
      }
    }
    t = not_null(z_61);
  }
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm p_62 = NULL;
  ATerm r_62 = NULL,s_62 = NULL,t_62 = NULL;
  p_62 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_20, not_null(p_62));
    {
      t = table_get_0(t);
      {
        r_62 = t;
        o_62 :
        if(match_cons(r_62, sym__2))
          {
            s_62 = ATgetArgument(r_62, 0);
            t_62 = ATgetArgument(r_62, 1);
            {
              ATerm u_20;
              u_20 = t;
              {
                t = not_null(s_62);
                {
                  t = path_to_string_0(t);
                  {
                    ATerm m_2 (ATerm t)
                    {
                      t = term_v_20;
                      return(t);
                    }
                    t = notify_1(t, m_2);
                  }
                }
              }
              t = u_20;
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
ATerm StoreEntryIfNotExists_0 (ATerm t)
{
  ATerm b_63 = NULL,c_63 = NULL,d_63 = NULL;
  b_63 = t;
  a_63 :
  if(match_cons(b_63, sym_PP_Entry_2))
    {
      c_63 = ATgetArgument(b_63, 0);
      d_63 = ATgetArgument(b_63, 1);
      {
        ATerm w_20 = t;
        int x_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_20;
            y_20 = t;
            {
              ATerm g_63 = NULL;
              ATerm h_63 = NULL;
              t = not_null(c_63);
              {
                t = mk_key_0(t);
                {
                  h_63 = t;
                  if(((g_63 != NULL) && (g_63 != h_63)))
                    _fail(h_63);
                  else
                    g_63 = h_63;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, term_t_20, not_null(g_63));
                t = table_get_0(t);
              }
            }
            t = y_20;
            LocalPopChoice(x_20);
          }
        else
          {
            t = w_20;
            t = StoreEntry_0(t);
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbols2pp_entries_1 (ATerm t, ATerm v_74 (ATerm))
{
  ATerm o_63 = NULL,q_63 = NULL,u_63 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm z_20;
    z_20 = t;
    {
      ATerm p_63 = NULL;
      t = make_0(t);
      {
        p_63 = t;
        if(((o_63 != NULL) && (o_63 != p_63)))
          _fail(p_63);
        else
          o_63 = p_63;
      }
    }
    t = z_20;
    {
      ATerm a_21;
      a_21 = t;
      {
        ATerm t_63 = NULL;
        ATerm n_2 (ATerm t)
        {
          ATerm o_2 (ATerm t)
          {
            ATerm r_63 = NULL;
            ATerm s_63 = NULL;
            t = term_k_15;
            {
              t = v_74(t);
              {
                s_63 = t;
                if(((r_63 != NULL) && (r_63 != s_63)))
                  _fail(s_63);
                else
                  r_63 = s_63;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(r_63), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, o_2);
          return(t);
        }
        t = map_1(t, n_2);
        {
          t = concat_0(t);
          {
            t_63 = t;
            if(((q_63 != NULL) && (q_63 != t_63)))
              _fail(t_63);
            else
              q_63 = t_63;
          }
        }
      }
      t = a_21;
      {
        ATerm v_63 = NULL;
        t = term_k_15;
        {
          t = v_74(t);
          {
            v_63 = t;
            if(((u_63 != NULL) && (u_63 != v_63)))
              _fail(v_63);
            else
              u_63 = v_63;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(q_63)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(u_63)), not_null(o_63)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm g_64 = NULL,h_64 = NULL,i_64 = NULL,j_64 = NULL,k_64 = NULL;
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_64 = NULL,m_64 = NULL,n_64 = NULL,o_64 = NULL,p_64 = NULL;
      l_64 = t;
      f_64 :
      if(match_cons(l_64, sym_prod_3))
        {
          m_64 = ATgetArgument(l_64, 0);
          n_64 = ATgetArgument(l_64, 1);
          o_64 = ATgetArgument(l_64, 2);
          {
            if(((i_64 != NULL) && (i_64 != m_64)))
              _fail(m_64);
            else
              i_64 = m_64;
            {
              if(((j_64 != NULL) && (j_64 != n_64)))
                _fail(n_64);
              else
                j_64 = n_64;
              {
                if(((k_64 != NULL) && (k_64 != o_64)))
                  _fail(o_64);
                else
                  k_64 = o_64;
                {
                  t = not_null(k_64);
                  {
                    ATerm p_2 (ATerm t)
                    {
                      ATerm q_64 = NULL,r_64 = NULL;
                      q_64 = t;
                      d_64 :
                      if(match_cons(q_64, sym_cons_1))
                        {
                          r_64 = ATgetArgument(q_64, 0);
                          if(((g_64 != NULL) && (g_64 != r_64)))
                            _fail(r_64);
                          else
                            g_64 = r_64;
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, p_2);
                  }
                  {
                    t = not_null(i_64);
                    {
                      ATerm q_2 (ATerm t)
                      {
                        t = not_null(g_64);
                        return(t);
                      }
                      t = symbols2pp_entries_1(t, q_2);
                    }
                  }
                }
              }
            }
          }
        }
      else
        {
          if(match_cons(l_64, sym_prod_fun_4))
            {
              m_64 = ATgetArgument(l_64, 0);
              n_64 = ATgetArgument(l_64, 1);
              o_64 = ATgetArgument(l_64, 2);
              p_64 = ATgetArgument(l_64, 3);
              {
                ATerm s_64 = NULL;
                if(((h_64 != NULL) && (h_64 != m_64)))
                  _fail(m_64);
                else
                  h_64 = m_64;
                {
                  if(((i_64 != NULL) && (i_64 != n_64)))
                    _fail(n_64);
                  else
                    i_64 = n_64;
                  {
                    if(((j_64 != NULL) && (j_64 != o_64)))
                      _fail(o_64);
                    else
                      j_64 = o_64;
                    {
                      if(((k_64 != NULL) && (k_64 != p_64)))
                        _fail(p_64);
                      else
                        k_64 = p_64;
                      {
                        ATerm t_64 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_g_21)), not_null(i_64)), (ATerm) ATinsert(ATinsert(ATempty, term_e_21), (ATerm) ATmakeAppl(sym_lit_1, not_null(h_64))));
                        {
                          t = concat_0(t);
                          {
                            t_64 = t;
                            if(((s_64 != NULL) && (s_64 != t_64)))
                              _fail(t_64);
                            else
                              s_64 = t_64;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(s_64), not_null(j_64), not_null(k_64));
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
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm r_2 (ATerm t)
        {
          ATerm h_21 = t;
          if((PushChoice() == 0))
            {
              ATerm s_2 (ATerm t)
              {
                t = term_i_21;
                return(t);
              }
              t = has_option_1(t, s_2);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = h_21;
            }
          {
            ATerm t_2 (ATerm t)
            {
              t = term_j_21;
              return(t);
            }
            t = debug_1(t, t_2);
          }
          return(t);
        }
        t = try_1(t, r_2);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm b_65 = NULL,c_65 = NULL,d_65 = NULL;
  b_65 = t;
  a_65 :
  if(match_cons(b_65, sym_lit_1))
    {
      c_65 = ATgetArgument(b_65, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_k_21, (ATerm) ATmakeAppl(sym_S_1, not_null(c_65)));
    }
  else
    {
      if(match_cons(b_65, sym__2))
        {
          c_65 = ATgetArgument(b_65, 0);
          d_65 = ATgetArgument(b_65, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(c_65));
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm pair_0 (ATerm t)
{
  ATerm l_21 = t;
  int m_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm m_65 = NULL,n_65 = NULL,o_65 = NULL,p_65 = NULL,q_65 = NULL;
        m_65 = t;
        k_65 :
        if(((ATgetType(m_65) == AT_LIST) && ((ATermList) m_65 != ATempty)))
          {
            n_65 = ATgetFirst((ATermList) m_65);
            o_65 = (ATerm) ATgetNext((ATermList) m_65);
            l_65 :
            if(((ATgetType(o_65) == AT_LIST) && ((ATermList) o_65 != ATempty)))
              {
                p_65 = ATgetFirst((ATermList) o_65);
                q_65 = (ATerm) ATgetNext((ATermList) o_65);
                {
                  ATerm u_65 = NULL;
                  ATerm v_65 = NULL;
                  t = not_null(q_65);
                  {
                    t = pair_0(t);
                    {
                      v_65 = t;
                      if(((u_65 != NULL) && (u_65 != v_65)))
                        _fail(v_65);
                      else
                        u_65 = v_65;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_65)), (ATerm) ATmakeAppl(sym__2, not_null(n_65), not_null(p_65)));
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
ATerm make_0 (ATerm t)
{
  ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL,k_66 = NULL,l_66 = NULL;
  ATerm n_21 = t;
  int o_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_66 = NULL,n_66 = NULL,o_66 = NULL;
      t = reverse_0(t);
      {
        ATerm u_2 (ATerm t)
        {
          ATerm w_2 (ATerm t)
          {
            ATerm p_21 = t;
            int q_21 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                LocalPopChoice(q_21);
              }
            else
              {
                t = p_21;
                {
                  ATerm r_21 = t;
                  int s_21 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
                      LocalPopChoice(s_21);
                    }
                  else
                    {
                      t = r_21;
                      {
                        ATerm t_21 = t;
                        int u_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            LocalPopChoice(u_21);
                          }
                        else
                          {
                            t = t_21;
                            t = iter_star_sep_2(t, _id, _id);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2(t, _id, w_2);
          t = Make_0(t);
          return(t);
        }
        ATerm v_2 (ATerm t)
        {
          ATerm x_2 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, x_2);
          return(t);
        }
        t = Cons_2(t, u_2, v_2);
        {
          m_66 = t;
          b_66 :
          if(((ATgetType(m_66) == AT_LIST) && ((ATermList) m_66 != ATempty)))
            {
              n_66 = ATgetFirst((ATermList) m_66);
              o_66 = (ATerm) ATgetNext((ATermList) m_66);
              {
                ATerm p_66 = NULL;
                if(((i_66 != NULL) && (i_66 != n_66)))
                  _fail(n_66);
                else
                  i_66 = n_66;
                {
                  if(((h_66 != NULL) && (h_66 != o_66)))
                    _fail(o_66);
                  else
                    h_66 = o_66;
                  {
                    ATerm v_21 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = v_21;
                      }
                    {
                      ATerm q_66 = NULL;
                      t = not_null(h_66);
                      {
                        t = reverse_0(t);
                        {
                          q_66 = t;
                          if(((p_66 != NULL) && (p_66 != q_66)))
                            _fail(q_66);
                          else
                            p_66 = q_66;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_66)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(p_66))));
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
      LocalPopChoice(o_21);
    }
  else
    {
      t = n_21;
      {
        ATerm w_21 = t;
        int x_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_66 = NULL;
            t = reverse_0(t);
            {
              ATerm y_2 (ATerm t)
              {
                ATerm r_66 = NULL;
                t = Make_0(t);
                {
                  r_66 = t;
                  if(((l_66 != NULL) && (l_66 != r_66)))
                    _fail(r_66);
                  else
                    l_66 = r_66;
                }
                return(t);
              }
              ATerm z_2 (ATerm t)
              {
                ATerm s_66 = NULL;
                ATerm y_21 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = y_21;
                  }
                {
                  t = reverse_0(t);
                  {
                    s_66 = t;
                    if(((j_66 != NULL) && (j_66 != s_66)))
                      _fail(s_66);
                    else
                      j_66 = s_66;
                  }
                }
                return(t);
              }
              t = Cons_2(t, y_2, z_2);
              {
                t = not_null(j_66);
                {
                  t = pair_0(t);
                  {
                    ATerm a_3 (ATerm t)
                    {
                      ATerm t_66 = NULL,u_66 = NULL;
                      ATerm b_3 (ATerm t)
                      {
                        ATerm v_66 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            v_66 = t;
                            if(((t_66 != NULL) && (t_66 != v_66)))
                              _fail(v_66);
                            else
                              t_66 = v_66;
                          }
                        }
                        return(t);
                      }
                      ATerm c_3 (ATerm t)
                      {
                        ATerm w_66 = NULL;
                        ATerm d_3 (ATerm t)
                        {
                          ATerm z_21 = t;
                          int a_22 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              LocalPopChoice(a_22);
                            }
                          else
                            {
                              t = z_21;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, d_3);
                        {
                          t = Make_0(t);
                          {
                            w_66 = t;
                            if(((u_66 != NULL) && (u_66 != w_66)))
                              _fail(w_66);
                            else
                              u_66 = w_66;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, b_3, c_3);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_d_22), (ATerm) ATinsert(ATinsert(ATempty, not_null(u_66)), not_null(t_66)));
                      return(t);
                    }
                    t = map_1(t, a_3);
                    {
                      x_66 = t;
                      {
                        if(((k_66 != NULL) && (k_66 != x_66)))
                          _fail(x_66);
                        else
                          k_66 = x_66;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_66)), not_null(k_66)));
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(x_21);
          }
        else
          {
            t = w_21;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm e_22 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = e_22;
    }
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL;
  h_67 = t;
  g_67 :
  if(match_cons(h_67, sym__2))
    {
      i_67 = ATgetArgument(h_67, 0);
      j_67 = ATgetArgument(h_67, 1);
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(i_67), not_null(j_67));
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            t = SSL_addr(not_null(i_67), not_null(j_67));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm number_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm e_3 (ATerm t)
  {
    t = term_n_19;
    return(t);
  }
  t = split_2(t, e_3, _id);
  {
    ATerm k_68 (ATerm t)
    {
      ATerm u_67 = NULL,v_67 = NULL,x_67 = NULL;
      ATerm h_22 = t;
      int i_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          LocalPopChoice(i_22);
        }
      else
        {
          t = h_22;
          {
            ATerm z_67 = NULL,a_68 = NULL,b_68 = NULL,c_68 = NULL,d_68 = NULL;
            z_67 = t;
            s_67 :
            if(match_cons(z_67, sym__2))
              {
                a_68 = ATgetArgument(z_67, 0);
                b_68 = ATgetArgument(z_67, 1);
                t_67 :
                if(((ATgetType(b_68) == AT_LIST) && ((ATermList) b_68 != ATempty)))
                  {
                    c_68 = ATgetFirst((ATermList) b_68);
                    d_68 = (ATerm) ATgetNext((ATermList) b_68);
                    {
                      ATerm j_22 = t;
                      int k_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm e_68 = NULL;
                          if(((u_67 != NULL) && (u_67 != a_68)))
                            _fail(a_68);
                          else
                            u_67 = a_68;
                          {
                            if(((v_67 != NULL) && (v_67 != c_68)))
                              _fail(c_68);
                            else
                              v_67 = c_68;
                            {
                              if(((x_67 != NULL) && (x_67 != d_68)))
                                _fail(d_68);
                              else
                                x_67 = d_68;
                              {
                                t = not_null(v_67);
                                {
                                  t = z_74(t);
                                  {
                                    ATerm f_68 = NULL,h_68 = NULL;
                                    ATerm g_68 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(u_67), term_n_19);
                                    {
                                      t = add_0(t);
                                      {
                                        g_68 = t;
                                        if(((f_68 != NULL) && (f_68 != g_68)))
                                          _fail(g_68);
                                        else
                                          f_68 = g_68;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(f_68), not_null(x_67));
                                      {
                                        t = k_68(t);
                                        {
                                          h_68 = t;
                                          if(((e_68 != NULL) && (e_68 != h_68)))
                                            _fail(h_68);
                                          else
                                            e_68 = h_68;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(e_68)), (ATerm) ATmakeAppl(sym__2, not_null(u_67), not_null(v_67)));
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(k_22);
                        }
                      else
                        {
                          t = j_22;
                          {
                            ATerm i_68 = NULL;
                            if(((u_67 != NULL) && (u_67 != a_68)))
                              _fail(a_68);
                            else
                              u_67 = a_68;
                            {
                              if(((v_67 != NULL) && (v_67 != c_68)))
                                _fail(c_68);
                              else
                                v_67 = c_68;
                              {
                                if(((x_67 != NULL) && (x_67 != d_68)))
                                  _fail(d_68);
                                else
                                  x_67 = d_68;
                                {
                                  ATerm j_68 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(u_67), not_null(x_67));
                                  {
                                    t = k_68(t);
                                    {
                                      j_68 = t;
                                      if(((i_68 != NULL) && (i_68 != j_68)))
                                        _fail(j_68);
                                      else
                                        i_68 = j_68;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(i_68)), not_null(v_67));
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
    t = k_68(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm f_3 (ATerm t)
  {
    ATerm g_3 (ATerm t)
    {
      ATerm u_68 = NULL,v_68 = NULL,w_68 = NULL;
      u_68 = t;
      t_68 :
      if(match_cons(u_68, sym_label_2))
        {
          v_68 = ATgetArgument(u_68, 0);
          w_68 = ATgetArgument(u_68, 1);
          t = not_null(w_68);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, g_3);
    return(t);
  }
  t = map_1(t, f_3);
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
  ATerm h_3 (ATerm t)
  {
    ATerm i_3 (ATerm t)
    {
      ATerm b_69 = NULL;
      b_69 = t;
      {
        ATerm l_22 = t;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = l_22;
          }
        t = (ATerm) ATinsert(ATempty, not_null(b_69));
      }
      return(t);
    }
    t = try_1(t, i_3);
    return(t);
  }
  t = map_1(t, h_3);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm u_0 (ATerm))
{
  ATerm j_69 = NULL,k_69 = NULL;
  j_69 = t;
  i_69 :
  if(match_cons(j_69, sym_Arg_1))
    {
      k_69 = ATgetArgument(j_69, 0);
      {
        ATerm m_22 = t;
        int n_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_69 = NULL;
            t = not_null(k_69);
            {
              t = u_0(t);
              {
                m_69 = t;
                t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(m_69));
              }
            }
            LocalPopChoice(n_22);
          }
        else
          {
            t = m_22;
            {
              ATerm p_69 = NULL;
              t = not_null(k_69);
              {
                t = u_0(t);
                {
                  p_69 = t;
                  t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(p_69));
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
ATerm mkterm_0 (ATerm t)
{
  ATerm x_69 = NULL,y_69 = NULL,z_69 = NULL;
  x_69 = t;
  w_69 :
  if(match_cons(x_69, sym__2))
    {
      y_69 = ATgetArgument(x_69, 0);
      z_69 = ATgetArgument(x_69, 1);
      t = SSL_mkterm(not_null(y_69), not_null(z_69));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flat_alt_0 (ATerm t)
{
  ATerm i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL;
  ATerm x_70 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_70)), not_null(l_70));
    return(t);
  }
  k_70 = t;
  g_70 :
  if(match_cons(k_70, sym_alt_2))
    {
      l_70 = ATgetArgument(k_70, 0);
      m_70 = ATgetArgument(k_70, 1);
      h_70 :
      if(match_cons(m_70, sym_alt_2))
        {
          i_70 = ATgetArgument(m_70, 0);
          j_70 = ATgetArgument(m_70, 1);
          {
            ATerm o_22 = t;
            int p_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm q_70 = NULL;
                ATerm r_70 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(i_70), not_null(j_70));
                {
                  t = flat_alt_0(t);
                  {
                    r_70 = t;
                    if(((q_70 != NULL) && (q_70 != r_70)))
                      _fail(r_70);
                    else
                      q_70 = r_70;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(q_70)), not_null(l_70));
                LocalPopChoice(p_22);
              }
            else
              {
                t = o_22;
                t = x_70(t);
              }
          }
        }
      else
        {
          t = x_70(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm w_74 (ATerm))
{
  ATerm z_71 = NULL,a_72 = NULL,b_72 = NULL;
  ATerm j_3 (ATerm t)
  {
    t = term_k_15;
    t = w_74(t);
    return(t);
  }
  t = split_2(t, j_3, _id);
  {
    ATerm m_74 (ATerm t)
    {
      ATerm c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL;
      ATerm o_74 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm p_74 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm q_74 (ATerm t)
      {
        ATerm n_72 = NULL,o_72 = NULL,p_72 = NULL,q_72 = NULL;
        if(((z_71 != NULL) && (z_71 != i_72)))
          _fail(i_72);
        else
          z_71 = i_72;
        {
          if(((a_72 != NULL) && (a_72 != j_72)))
            _fail(j_72);
          else
            a_72 = j_72;
          {
            if(((b_72 != NULL) && (b_72 != l_72)))
              _fail(l_72);
            else
              b_72 = l_72;
            {
              if(((n_72 != NULL) && (n_72 != f_72)))
                _fail(f_72);
              else
                n_72 = f_72;
              {
                if(((o_72 != NULL) && (o_72 != d_72)))
                  _fail(d_72);
                else
                  o_72 = d_72;
                {
                  if(((p_72 != NULL) && (p_72 != e_72)))
                    _fail(e_72);
                  else
                    p_72 = e_72;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(n_72), (ATerm) ATmakeAppl(sym_alt_2, not_null(o_72), not_null(p_72)));
                    {
                      ATerm s_72 = NULL;
                      t = flat_alt_0(t);
                      {
                        q_72 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_q_22, not_null(q_72));
                          {
                            t = mkterm_0(t);
                            {
                              s_72 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(z_71), not_null(a_72)), (ATerm) ATmakeAppl(sym__2, not_null(b_72), not_null(s_72)));
                                {
                                  t = m_74(t);
                                  {
                                    ATerm k_3 (ATerm t)
                                    {
                                      ATerm l_3 (ATerm t)
                                      {
                                        ATerm m_3 (ATerm t)
                                        {
                                          t = Arg_1(t, _id);
                                          t = term_r_22;
                                          return(t);
                                        }
                                        t = try_1(t, m_3);
                                        return(t);
                                      }
                                      t = topdown_1(t, l_3);
                                      return(t);
                                    }
                                    t = Cons_2(t, k_3, _id);
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
      ATerm r_74 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_72), not_null(j_72)), (ATerm) ATmakeAppl(sym__2, not_null(l_72), not_null(f_72)));
        t = m_74(t);
        return(t);
      }
      ATerm t_74 (ATerm t)
      {
        ATerm f_73 = NULL,g_73 = NULL,p_73 = NULL;
        ATerm h_73 = NULL;
        ATerm k_73 = NULL,l_73 = NULL,m_73 = NULL;
        t = not_null(m_72);
        {
          h_73 = t;
          {
            t = SSL_explode_term(not_null(h_73));
            {
              k_73 = t;
              j_71 :
              if(match_cons(k_73, sym__2))
                {
                  l_73 = ATgetArgument(k_73, 0);
                  m_73 = ATgetArgument(k_73, 1);
                  {
                    if(((f_73 != NULL) && (f_73 != l_73)))
                      _fail(l_73);
                    else
                      f_73 = l_73;
                    if(((g_73 != NULL) && (g_73 != m_73)))
                      _fail(m_73);
                    else
                      g_73 = m_73;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_72), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(l_72), not_null(f_73))));
          {
            ATerm w_73 = NULL,j_74 = NULL;
            t = conc_0(t);
            {
              p_73 = t;
              {
                t = not_null(g_73);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm s_22;
                      s_22 = t;
                      {
                        ATerm x_73 = NULL;
                        t = make_0(t);
                        {
                          x_73 = t;
                          if(((w_73 != NULL) && (w_73 != x_73)))
                            _fail(x_73);
                          else
                            w_73 = x_73;
                        }
                      }
                      t = s_22;
                      {
                        ATerm n_3 (ATerm t)
                        {
                          ATerm d_74 = NULL;
                          ATerm g_74 = NULL;
                          d_74 = t;
                          {
                            ATerm h_74 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(i_72), not_null(p_73)), not_null(d_74));
                            {
                              t = m_74(t);
                              {
                                h_74 = t;
                                if(((g_74 != NULL) && (g_74 != h_74)))
                                  _fail(h_74);
                                else
                                  g_74 = h_74;
                              }
                            }
                            t = not_null(g_74);
                          }
                          return(t);
                        }
                        t = map_1(t, n_3);
                        {
                          t = concat_0(t);
                          {
                            j_74 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(j_74)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(i_72), not_null(p_73)), not_null(w_73)));
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
      g_72 = t;
      p_71 :
      if(match_cons(g_72, sym__2))
        {
          h_72 = ATgetArgument(g_72, 0);
          k_72 = ATgetArgument(g_72, 1);
          q_71 :
          if(match_cons(k_72, sym_lit_1))
            {
              l_72 = ATgetArgument(k_72, 0);
              r_71 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(k_72, sym__2))
                {
                  l_72 = ATgetArgument(k_72, 0);
                  m_72 = ATgetArgument(k_72, 1);
                  s_71 :
                  if(match_cons(m_72, sym_sort_1))
                    {
                      f_72 = ATgetArgument(m_72, 0);
                      t_71 :
                      if(match_cons(h_72, sym__2))
                        {
                          i_72 = ATgetArgument(h_72, 0);
                          j_72 = ATgetArgument(h_72, 1);
                          {
                            ATerm t_22 = t;
                            int u_22 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = o_74(t);
                                LocalPopChoice(u_22);
                              }
                            else
                              {
                                t = t_22;
                                t = t_74(t);
                              }
                          }
                        }
                      else
                        {
                          t = o_74(t);
                        }
                    }
                  else
                    {
                      if(match_cons(m_72, sym_char_class_1))
                        {
                          f_72 = ATgetArgument(m_72, 0);
                          u_71 :
                          if(match_cons(h_72, sym__2))
                            {
                              i_72 = ATgetArgument(h_72, 0);
                              j_72 = ATgetArgument(h_72, 1);
                              {
                                ATerm v_22 = t;
                                int w_22 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = p_74(t);
                                    LocalPopChoice(w_22);
                                  }
                                else
                                  {
                                    t = v_22;
                                    t = t_74(t);
                                  }
                              }
                            }
                          else
                            {
                              t = p_74(t);
                            }
                        }
                      else
                        {
                          if(match_cons(m_72, sym_alt_2))
                            {
                              f_72 = ATgetArgument(m_72, 0);
                              c_72 = ATgetArgument(m_72, 1);
                              v_71 :
                              if(match_cons(h_72, sym__2))
                                {
                                  i_72 = ATgetArgument(h_72, 0);
                                  j_72 = ATgetArgument(h_72, 1);
                                  w_71 :
                                  if(match_cons(c_72, sym_alt_2))
                                    {
                                      d_72 = ATgetArgument(c_72, 0);
                                      e_72 = ATgetArgument(c_72, 1);
                                      {
                                        ATerm x_22 = t;
                                        int y_22 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = q_74(t);
                                            LocalPopChoice(y_22);
                                          }
                                        else
                                          {
                                            t = x_22;
                                            t = t_74(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = t_74(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(m_72, sym_bracket_symbol_1))
                                {
                                  f_72 = ATgetArgument(m_72, 0);
                                  x_71 :
                                  if(match_cons(h_72, sym__2))
                                    {
                                      i_72 = ATgetArgument(h_72, 0);
                                      j_72 = ATgetArgument(h_72, 1);
                                      {
                                        ATerm z_22 = t;
                                        int a_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = r_74(t);
                                            LocalPopChoice(a_23);
                                          }
                                        else
                                          {
                                            t = z_22;
                                            t = t_74(t);
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
                                  y_71 :
                                  if(match_cons(h_72, sym__2))
                                    {
                                      i_72 = ATgetArgument(h_72, 0);
                                      j_72 = ATgetArgument(h_72, 1);
                                      t = t_74(t);
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
    t = m_74(t);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm q_75 = NULL;
  ATerm s_75 = NULL,t_75 = NULL;
  q_75 = t;
  {
    ATerm u_75 = NULL;
    ATerm w_75 = NULL,x_75 = NULL,y_75 = NULL,z_75 = NULL,a_76 = NULL;
    t = not_null(q_75);
    {
      u_75 = t;
      {
        t = SSL_explode_term(not_null(u_75));
        {
          w_75 = t;
          n_75 :
          if(match_cons(w_75, sym__2))
            {
              x_75 = ATgetArgument(w_75, 0);
              y_75 = ATgetArgument(w_75, 1);
              o_75 :
              if(match_string(x_75, ""))
                {
                  p_75 :
                  if(((ATgetType(y_75) == AT_LIST) && ((ATermList) y_75 != ATempty)))
                    {
                      z_75 = ATgetFirst((ATermList) y_75);
                      a_76 = (ATerm) ATgetNext((ATermList) y_75);
                      {
                        if(((t_75 != NULL) && (t_75 != z_75)))
                          _fail(z_75);
                        else
                          t_75 = z_75;
                        if(((s_75 != NULL) && (s_75 != a_76)))
                          _fail(a_76);
                        else
                          s_75 = a_76;
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
    t = not_null(t_75);
  }
  return(t);
}
ATerm get_pp_entry_0 (ATerm t)
{
  ATerm q_76 = NULL,r_76 = NULL,s_76 = NULL,t_76 = NULL,u_76 = NULL,v_76 = NULL;
  ATerm q_77 (ATerm t)
  {
    ATerm y_76 = NULL,z_76 = NULL,a_77 = NULL;
    ATerm b_23 = t;
    int c_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = not_null(v_76);
        {
          t = pp_table_get_0(t);
          t = Snd_0(t);
        }
        LocalPopChoice(c_23);
      }
    else
      {
        t = b_23;
        {
          ATerm l_77 = NULL;
          t = not_null(v_76);
          {
            t = reverse_0(t);
            {
              ATerm o_3 (ATerm t)
              {
                ATerm b_77 = NULL;
                b_77 = t;
                if(((a_77 != NULL) && (a_77 != b_77)))
                  _fail(b_77);
                else
                  a_77 = b_77;
                return(t);
              }
              ATerm p_3 (ATerm t)
              {
                ATerm c_77 = NULL;
                t = reverse_0(t);
                {
                  c_77 = t;
                  if(((y_76 != NULL) && (y_76 != c_77)))
                    _fail(c_77);
                  else
                    y_76 = c_77;
                }
                return(t);
              }
              t = Cons_2(t, o_3, p_3);
              {
                t = not_null(y_76);
                {
                  t = pp_table_get_0(t);
                  {
                    t = Fst_0(t);
                    {
                      ATerm d_77 = NULL,e_77 = NULL,f_77 = NULL,g_77 = NULL,h_77 = NULL;
                      g_77 = t;
                      k_76 :
                      if(match_cons(g_77, sym_Path_2))
                        {
                          h_77 = ATgetArgument(g_77, 0);
                          d_77 = ATgetArgument(g_77, 1);
                          l_76 :
                          if(((ATgetType(d_77) == AT_LIST) && ((ATermList) d_77 != ATempty)))
                            {
                              e_77 = ATgetFirst((ATermList) d_77);
                              f_77 = (ATerm) ATgetNext((ATermList) d_77);
                              m_76 :
                              if(((ATermList) f_77 == ATempty))
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(h_77), (ATerm) ATinsert(ATempty, not_null(e_77)));
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
                          if(match_cons(g_77, sym_Path1_1))
                            {
                              h_77 = ATgetArgument(g_77, 0);
                              t = (ATerm) ATmakeAppl(sym__2, not_null(h_77), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      {
                        l_77 = t;
                        {
                          if(((z_76 != NULL) && (z_76 != l_77)))
                            _fail(l_77);
                          else
                            z_76 = l_77;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_77), not_null(r_76));
                            {
                              ATerm q_3 (ATerm t)
                              {
                                t = not_null(z_76);
                                return(t);
                              }
                              t = symbol2abox_1(t, q_3);
                              {
                                t = map_1(t, StoreEntryIfNotExists_0);
                                {
                                  t = not_null(v_76);
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
  ATerm r_77 (ATerm t)
  {
    ATerm d_23 = t;
    int e_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = not_null(v_76);
        {
          t = pp_table_get_0(t);
          t = Snd_0(t);
        }
        LocalPopChoice(e_23);
      }
    else
      {
        t = d_23;
        {
          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(s_76), not_null(t_76), not_null(u_76));
          {
            t = generate_pp_entries_0(t);
            t = map_1(t, StoreEntryIfNotExists_0);
          }
          {
            t = not_null(v_76);
            {
              t = pp_table_get_0(t);
              t = Snd_0(t);
            }
          }
        }
      }
    return(t);
  }
  q_76 = t;
  o_76 :
  if(match_cons(q_76, sym__2))
    {
      r_76 = ATgetArgument(q_76, 0);
      v_76 = ATgetArgument(q_76, 1);
      p_76 :
      if(match_cons(r_76, sym_prod_3))
        {
          s_76 = ATgetArgument(r_76, 0);
          t_76 = ATgetArgument(r_76, 1);
          u_76 = ATgetArgument(r_76, 2);
          {
            ATerm f_23 = t;
            int g_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = q_77(t);
                LocalPopChoice(g_23);
              }
            else
              {
                t = f_23;
                t = r_77(t);
              }
          }
        }
      else
        {
          t = q_77(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm prod_3 (ATerm t, ATerm r_0 (ATerm), ATerm s_0 (ATerm), ATerm t_0 (ATerm))
{
  ATerm g_78 = NULL,h_78 = NULL,i_78 = NULL,p_78 = NULL;
  g_78 = t;
  f_78 :
  if(match_cons(g_78, sym_prod_3))
    {
      h_78 = ATgetArgument(g_78, 0);
      i_78 = ATgetArgument(g_78, 1);
      p_78 = ATgetArgument(g_78, 2);
      {
        ATerm h_23 = t;
        int i_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_78 = NULL;
            t = not_null(h_78);
            {
              ATerm v_78 = NULL;
              t = r_0(t);
              {
                t_78 = t;
                {
                  t = not_null(i_78);
                  {
                    ATerm x_78 = NULL;
                    t = s_0(t);
                    {
                      v_78 = t;
                      {
                        t = not_null(p_78);
                        {
                          t = t_0(t);
                          {
                            x_78 = t;
                            t = (ATerm) ATmakeAppl(sym_prod_3, not_null(t_78), not_null(v_78), not_null(x_78));
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(i_23);
          }
        else
          {
            t = h_23;
            {
              ATerm c_79 = NULL;
              t = not_null(h_78);
              {
                ATerm e_79 = NULL;
                t = r_0(t);
                {
                  c_79 = t;
                  {
                    t = not_null(i_78);
                    {
                      ATerm g_79 = NULL;
                      t = s_0(t);
                      {
                        e_79 = t;
                        {
                          t = not_null(p_78);
                          {
                            t = t_0(t);
                            {
                              g_79 = t;
                              t = (ATerm) ATmakeAppl(sym_prod_3, not_null(c_79), not_null(e_79), not_null(g_79));
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
    {
      _fail(t);
    }
  return(t);
}
ATerm uq2q_0 (ATerm t)
{
  t = explode_string_0(t);
  {
    ATerm j_23;
    j_23 = t;
    {
      ATerm k_23 = t;
      if((PushChoice() == 0))
        {
          ATerm b_80 = NULL;
          t = Hd_0(t);
          {
            b_80 = t;
            w_79 :
            if(!(match_int(b_80, 34)))
              {
                _fail(t);
              }
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_23;
        }
    }
    t = j_23;
    {
      ATerm l_23;
      l_23 = t;
      {
        ATerm m_23 = t;
        if((PushChoice() == 0))
          {
            ATerm r_3 (ATerm t)
            {
              ATerm c_80 = NULL,f_80 = NULL,g_80 = NULL;
              c_80 = t;
              x_79 :
              if(((ATgetType(c_80) == AT_LIST) && ((ATermList) c_80 != ATempty)))
                {
                  f_80 = ATgetFirst((ATermList) c_80);
                  g_80 = (ATerm) ATgetNext((ATermList) c_80);
                  y_79 :
                  if(match_int(f_80, 34))
                    {
                      z_79 :
                      if(((ATermList) g_80 == ATempty))
                        {
                          {
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
            t = at_last_1(t, r_3);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_23;
          }
      }
      t = l_23;
      {
        t = Quote_0(t);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm cons_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm m_80 = NULL,n_80 = NULL;
  m_80 = t;
  l_80 :
  if(match_cons(m_80, sym_cons_1))
    {
      n_80 = ATgetArgument(m_80, 0);
      {
        ATerm n_23 = t;
        int o_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_80 = NULL;
            t = not_null(n_80);
            {
              t = q_0(t);
              {
                p_80 = t;
                t = (ATerm) ATmakeAppl(sym_cons_1, not_null(p_80));
              }
            }
            LocalPopChoice(o_23);
          }
        else
          {
            t = n_23;
            {
              ATerm s_80 = NULL;
              t = not_null(n_80);
              {
                t = q_0(t);
                {
                  s_80 = t;
                  t = (ATerm) ATmakeAppl(sym_cons_1, not_null(s_80));
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
ATerm at_cons_1 (ATerm t, ATerm r_73 (ATerm))
{
  ATerm s_3 (ATerm t)
  {
    t = cons_1(t, r_73);
    return(t);
  }
  t = oncetd_1(t, s_3);
  return(t);
}
ATerm get_constr_0 (ATerm t)
{
  ATerm g_81 = NULL,h_81 = NULL,i_81 = NULL,j_81 = NULL,k_81 = NULL;
  h_81 = t;
  f_81 :
  if(match_cons(h_81, sym_prod_fun_4))
    {
      i_81 = ATgetArgument(h_81, 0);
      j_81 = ATgetArgument(h_81, 1);
      k_81 = ATgetArgument(h_81, 2);
      g_81 = ATgetArgument(h_81, 3);
      {
        ATerm p_81 = NULL;
        t = not_null(g_81);
        {
          ATerm t_3 (ATerm t)
          {
            ATerm q_81 = NULL,r_81 = NULL;
            q_81 = t;
            c_81 :
            if(match_cons(q_81, sym_cons_1))
              {
                r_81 = ATgetArgument(q_81, 0);
                if(((p_81 != NULL) && (p_81 != r_81)))
                  _fail(r_81);
                else
                  p_81 = r_81;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, t_3);
        }
        t = not_null(p_81);
      }
    }
  else
    {
      if(match_cons(h_81, sym_prod_3))
        {
          i_81 = ATgetArgument(h_81, 0);
          j_81 = ATgetArgument(h_81, 1);
          k_81 = ATgetArgument(h_81, 2);
          {
            ATerm v_81 = NULL;
            t = not_null(k_81);
            {
              ATerm u_3 (ATerm t)
              {
                ATerm w_81 = NULL,y_81 = NULL;
                w_81 = t;
                e_81 :
                if(match_cons(w_81, sym_cons_1))
                  {
                    y_81 = ATgetArgument(w_81, 0);
                    if(((v_81 != NULL) && (v_81 != y_81)))
                      _fail(y_81);
                    else
                      v_81 = y_81;
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = oncetd_1(t, u_3);
            }
            t = not_null(v_81);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm add_attributes_0 (ATerm t)
{
  ATerm n_82 = NULL,o_82 = NULL,p_82 = NULL,q_82 = NULL,r_82 = NULL,s_82 = NULL,t_82 = NULL,u_82 = NULL,v_82 = NULL;
  q_82 = t;
  j_82 :
  if(match_cons(q_82, sym__2))
    {
      r_82 = ATgetArgument(q_82, 0);
      v_82 = ATgetArgument(q_82, 1);
      k_82 :
      if(match_cons(r_82, sym_prod_fun_4))
        {
          s_82 = ATgetArgument(r_82, 0);
          t_82 = ATgetArgument(r_82, 1);
          u_82 = ATgetArgument(r_82, 2);
          o_82 = ATgetArgument(r_82, 3);
          l_82 :
          if(match_cons(o_82, sym_attrs_1))
            {
              n_82 = ATgetArgument(o_82, 0);
              {
                ATerm d_83 = NULL;
                ATerm e_83 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_82), not_null(v_82));
                {
                  t = conc_0(t);
                  {
                    e_83 = t;
                    if(((d_83 != NULL) && (d_83 != e_83)))
                      _fail(e_83);
                    else
                      d_83 = e_83;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_prod_fun_4, not_null(s_82), not_null(t_82), not_null(u_82), (ATerm) ATmakeAppl(sym_attrs_1, not_null(d_83)));
              }
            }
          else
            {
              if(match_cons(o_82, sym_no_attrs_0))
                {
                  t = (ATerm) ATmakeAppl(sym_prod_fun_4, not_null(s_82), not_null(t_82), not_null(u_82), (ATerm) ATmakeAppl(sym_attrs_1, not_null(v_82)));
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(r_82, sym_prod_3))
            {
              s_82 = ATgetArgument(r_82, 0);
              t_82 = ATgetArgument(r_82, 1);
              u_82 = ATgetArgument(r_82, 2);
              m_82 :
              if(match_cons(u_82, sym_attrs_1))
                {
                  p_82 = ATgetArgument(u_82, 0);
                  {
                    ATerm n_83 = NULL;
                    ATerm p_83 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_82), not_null(v_82));
                    {
                      t = conc_0(t);
                      {
                        p_83 = t;
                        if(((n_83 != NULL) && (n_83 != p_83)))
                          _fail(p_83);
                        else
                          n_83 = p_83;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_prod_3, not_null(s_82), not_null(t_82), (ATerm) ATmakeAppl(sym_attrs_1, not_null(n_83)));
                  }
                }
              else
                {
                  if(match_cons(u_82, sym_no_attrs_0))
                    {
                      t = (ATerm) ATmakeAppl(sym_prod_3, not_null(s_82), not_null(t_82), (ATerm) ATmakeAppl(sym_attrs_1, not_null(v_82)));
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
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape3_0 (ATerm t)
{
  ATerm a_84 = NULL;
  a_84 = t;
  t = (ATerm) ATinsert(ATempty, not_null(a_84));
  return(t);
}
ATerm Escape2_0 (ATerm t)
{
  ATerm f_84 = NULL;
  f_84 = t;
  e_84 :
  if(match_int(f_84, 92))
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, term_p_23), term_p_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape1_0 (ATerm t)
{
  ATerm j_84 = NULL;
  j_84 = t;
  i_84 :
  if(match_int(j_84, 34))
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, term_q_23), term_p_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm r_23 = t;
  int s_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_84 = NULL,u_84 = NULL,v_84 = NULL;
      t_84 = t;
      r_84 :
      if(((ATgetType(t_84) == AT_LIST) && ((ATermList) t_84 != ATempty)))
        {
          u_84 = ATgetFirst((ATermList) t_84);
          v_84 = (ATerm) ATgetNext((ATermList) t_84);
          s_84 :
          if(match_int(u_84, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_84)), term_t_23), term_p_23);
            }
          else
            {
              if(match_int(u_84, 92))
                {
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_84)), term_p_23), term_p_23);
                }
              else
                {
                  if(match_int(u_84, 34))
                    {
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(v_84)), term_q_23), term_p_23);
                    }
                  else
                    {
                      _fail(t);
                    }
                }
            }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_23);
    }
  else
    {
      t = r_23;
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape1_0(t);
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm w_23 = t;
              int x_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Escape2_0(t);
                  LocalPopChoice(x_23);
                }
              else
                {
                  t = w_23;
                  t = Escape3_0(t);
                }
            }
          }
      }
    }
  return(t);
}
ATerm escape_0 (ATerm t)
{
  ATerm y_23 = t;
  int z_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = explode_string_0(t);
      {
        ATerm c_85 (ATerm t)
        {
          ATerm a_24 = t;
          int b_24 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Escape_0(t);
              {
                ATerm v_3 (ATerm t)
                {
                  t = Cons_2(t, _id, c_85);
                  return(t);
                }
                t = Cons_2(t, _id, v_3);
              }
              LocalPopChoice(b_24);
            }
          else
            {
              t = a_24;
              {
                ATerm c_24 = t;
                int d_24 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, _id, c_85);
                    LocalPopChoice(d_24);
                  }
                else
                  {
                    t = c_24;
                    t = Nil_0(t);
                  }
              }
            }
          return(t);
        }
        t = c_85(t);
        t = implode_string_0(t);
      }
      LocalPopChoice(z_23);
    }
  else
    {
      t = y_23;
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
  ATerm e_24 = t;
  int f_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = isUpper_0(t);
      LocalPopChoice(f_24);
    }
  else
    {
      t = e_24;
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
  ATerm e_85 = NULL;
  ATerm w_3 (ATerm t)
  {
    ATerm g_24 = t;
    if((PushChoice() == 0))
      {
        t = empty_string_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = g_24;
      }
    return(t);
  }
  t = filter_1(t, w_3);
  {
    ATerm x_3 (ATerm t)
    {
      ATerm h_24;
      h_24 = t;
      {
        t = string_Hd_0(t);
        t = isAlpha_0(t);
      }
      t = h_24;
      return(t);
    }
    t = Cons_2(t, x_3, _id);
    {
      ATerm y_3 (ATerm t)
      {
        t = term_j_24;
        return(t);
      }
      t = separate_by_1(t, y_3);
      {
        t = concat_strings_0(t);
        {
          e_85 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_85), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_w_24), term_v_24), term_u_24), term_t_24), term_s_24), term_r_24), term_q_24), term_p_24), term_o_24), term_n_24), term_m_24), term_l_24), term_k_24));
            {
              ATerm x_24 = t;
              if((PushChoice() == 0))
                {
                  t = in_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = x_24;
                }
              {
                t = not_null(e_85);
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
  ATerm j_85 = NULL,k_85 = NULL,l_85 = NULL;
  j_85 = t;
  i_85 :
  if(match_cons(j_85, sym__2))
    {
      k_85 = ATgetArgument(j_85, 0);
      l_85 = ATgetArgument(j_85, 1);
      {
        t = not_null(k_85);
        {
          ATerm z_3 (ATerm t)
          {
            t = not_null(l_85);
            return(t);
          }
          t = at_end_1(t, z_3);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Sym2Strs_0 (ATerm t)
{
  ATerm i_87 = NULL,j_87 = NULL,k_87 = NULL,l_87 = NULL;
  j_87 = t;
  h_87 :
  if(match_cons(j_87, sym_cf_1))
    {
      k_87 = ATgetArgument(j_87, 0);
      {
        t = not_null(k_87);
        t = Sym2Strs_0(t);
      }
    }
  else
    {
      if(match_cons(j_87, sym_lex_1))
        {
          k_87 = ATgetArgument(j_87, 0);
          {
            t = not_null(k_87);
            t = Sym2Strs_0(t);
          }
        }
      else
        {
          if(match_cons(j_87, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_y_24);
            }
          else
            {
              if(match_cons(j_87, sym_seq_2))
                {
                  k_87 = ATgetArgument(j_87, 0);
                  l_87 = ATgetArgument(j_87, 1);
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(l_87)), not_null(k_87));
                    {
                      t = filter_1(t, Sym2Strs_0);
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(j_87, sym_opt_1))
                    {
                      k_87 = ATgetArgument(j_87, 0);
                      {
                        t = not_null(k_87);
                        {
                          t = Sym2Strs_0(t);
                          {
                            ATerm a_4 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_z_24);
                              return(t);
                            }
                            t = at_end_1(t, a_4);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_87, sym_iter_1))
                        {
                          k_87 = ATgetArgument(j_87, 0);
                          {
                            t = not_null(k_87);
                            {
                              t = Sym2Strs_0(t);
                              {
                                ATerm b_4 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_a_25);
                                  return(t);
                                }
                                t = at_end_1(t, b_4);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(j_87, sym_iter_star_1))
                            {
                              k_87 = ATgetArgument(j_87, 0);
                              {
                                t = not_null(k_87);
                                {
                                  t = Sym2Strs_0(t);
                                  {
                                    ATerm c_4 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_b_25);
                                      return(t);
                                    }
                                    t = at_end_1(t, c_4);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(j_87, sym_iter_sep_2))
                                {
                                  k_87 = ATgetArgument(j_87, 0);
                                  l_87 = ATgetArgument(j_87, 1);
                                  {
                                    ATerm v_87 = NULL,x_87 = NULL;
                                    ATerm c_25;
                                    c_25 = t;
                                    {
                                      ATerm w_87 = NULL;
                                      t = not_null(k_87);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          w_87 = t;
                                          if(((v_87 != NULL) && (v_87 != w_87)))
                                            _fail(w_87);
                                          else
                                            v_87 = w_87;
                                        }
                                      }
                                    }
                                    t = c_25;
                                    {
                                      ATerm y_87 = NULL;
                                      t = not_null(l_87);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          y_87 = t;
                                          if(((x_87 != NULL) && (x_87 != y_87)))
                                            _fail(y_87);
                                          else
                                            x_87 = y_87;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_25)), not_null(x_87)), not_null(v_87));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(j_87, sym_iter_star_sep_2))
                                    {
                                      k_87 = ATgetArgument(j_87, 0);
                                      l_87 = ATgetArgument(j_87, 1);
                                      {
                                        ATerm g_88 = NULL,i_88 = NULL;
                                        ATerm d_25;
                                        d_25 = t;
                                        {
                                          ATerm h_88 = NULL;
                                          t = not_null(k_87);
                                          {
                                            t = Sym2Strs_0(t);
                                            {
                                              h_88 = t;
                                              if(((g_88 != NULL) && (g_88 != h_88)))
                                                _fail(h_88);
                                              else
                                                g_88 = h_88;
                                            }
                                          }
                                        }
                                        t = d_25;
                                        {
                                          ATerm j_88 = NULL;
                                          t = not_null(l_87);
                                          {
                                            t = Sym2Strs_0(t);
                                            {
                                              j_88 = t;
                                              if(((i_88 != NULL) && (i_88 != j_88)))
                                                _fail(j_88);
                                              else
                                                i_88 = j_88;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_25)), not_null(i_88)), not_null(g_88));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(j_87, sym_iter_n_2))
                                        {
                                          k_87 = ATgetArgument(j_87, 0);
                                          l_87 = ATgetArgument(j_87, 1);
                                          {
                                            ATerm l_88 = NULL;
                                            ATerm m_88 = NULL;
                                            t = not_null(k_87);
                                            {
                                              t = Sym2Strs_0(t);
                                              {
                                                m_88 = t;
                                                if(((l_88 != NULL) && (l_88 != m_88)))
                                                  _fail(m_88);
                                                else
                                                  l_88 = m_88;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_25)), not_null(l_88));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(j_87, sym_iter_sep_n_3))
                                            {
                                              k_87 = ATgetArgument(j_87, 0);
                                              l_87 = ATgetArgument(j_87, 1);
                                              i_87 = ATgetArgument(j_87, 2);
                                              {
                                                ATerm q_88 = NULL,s_88 = NULL;
                                                ATerm f_25;
                                                f_25 = t;
                                                {
                                                  ATerm r_88 = NULL;
                                                  t = not_null(k_87);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      r_88 = t;
                                                      if(((q_88 != NULL) && (q_88 != r_88)))
                                                        _fail(r_88);
                                                      else
                                                        q_88 = r_88;
                                                    }
                                                  }
                                                }
                                                t = f_25;
                                                {
                                                  ATerm t_88 = NULL;
                                                  t = not_null(l_87);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      t_88 = t;
                                                      if(((s_88 != NULL) && (s_88 != t_88)))
                                                        _fail(t_88);
                                                      else
                                                        s_88 = t_88;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_25)), not_null(s_88)), not_null(q_88));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(j_87, sym_set_1))
                                                {
                                                  k_87 = ATgetArgument(j_87, 0);
                                                  {
                                                    ATerm v_88 = NULL;
                                                    ATerm w_88 = NULL;
                                                    t = not_null(k_87);
                                                    {
                                                      t = Sym2Strs_0(t);
                                                      {
                                                        w_88 = t;
                                                        if(((v_88 != NULL) && (v_88 != w_88)))
                                                          _fail(w_88);
                                                        else
                                                          v_88 = w_88;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(v_88)), (ATerm) ATinsert(ATempty, term_g_25));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(j_87, sym_pair_2))
                                                    {
                                                      k_87 = ATgetArgument(j_87, 0);
                                                      l_87 = ATgetArgument(j_87, 1);
                                                      {
                                                        ATerm z_88 = NULL,b_89 = NULL;
                                                        ATerm h_25;
                                                        h_25 = t;
                                                        {
                                                          ATerm a_89 = NULL;
                                                          t = not_null(k_87);
                                                          {
                                                            t = Sym2Strs_0(t);
                                                            {
                                                              a_89 = t;
                                                              if(((z_88 != NULL) && (z_88 != a_89)))
                                                                _fail(a_89);
                                                              else
                                                                z_88 = a_89;
                                                            }
                                                          }
                                                        }
                                                        t = h_25;
                                                        {
                                                          ATerm c_89 = NULL;
                                                          t = not_null(l_87);
                                                          {
                                                            t = Sym2Strs_0(t);
                                                            {
                                                              c_89 = t;
                                                              if(((b_89 != NULL) && (b_89 != c_89)))
                                                                _fail(c_89);
                                                              else
                                                                b_89 = c_89;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(b_89)), (ATerm) ATinsert(ATempty, term_i_25)), not_null(z_88));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(j_87, sym_func_2))
                                                        {
                                                          k_87 = ATgetArgument(j_87, 0);
                                                          l_87 = ATgetArgument(j_87, 1);
                                                          {
                                                            ATerm f_89 = NULL,h_89 = NULL;
                                                            ATerm j_25;
                                                            j_25 = t;
                                                            {
                                                              ATerm g_89 = NULL;
                                                              t = not_null(k_87);
                                                              {
                                                                t = filter_1(t, Sym2Strs_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    g_89 = t;
                                                                    if(((f_89 != NULL) && (f_89 != g_89)))
                                                                      _fail(g_89);
                                                                    else
                                                                      f_89 = g_89;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = j_25;
                                                            {
                                                              ATerm i_89 = NULL;
                                                              t = not_null(l_87);
                                                              {
                                                                t = Sym2Strs_0(t);
                                                                {
                                                                  i_89 = t;
                                                                  if(((h_89 != NULL) && (h_89 != i_89)))
                                                                    _fail(i_89);
                                                                  else
                                                                    h_89 = i_89;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(h_89)), (ATerm) ATinsert(ATempty, term_l_25)), not_null(f_89));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(j_87, sym_alt_2))
                                                            {
                                                              k_87 = ATgetArgument(j_87, 0);
                                                              l_87 = ATgetArgument(j_87, 1);
                                                              {
                                                                ATerm l_89 = NULL,n_89 = NULL;
                                                                ATerm n_25;
                                                                n_25 = t;
                                                                {
                                                                  ATerm m_89 = NULL;
                                                                  t = not_null(k_87);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      m_89 = t;
                                                                      if(((l_89 != NULL) && (l_89 != m_89)))
                                                                        _fail(m_89);
                                                                      else
                                                                        l_89 = m_89;
                                                                    }
                                                                  }
                                                                }
                                                                t = n_25;
                                                                {
                                                                  ATerm q_89 = NULL;
                                                                  t = not_null(l_87);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      q_89 = t;
                                                                      if(((n_89 != NULL) && (n_89 != q_89)))
                                                                        _fail(q_89);
                                                                      else
                                                                        n_89 = q_89;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_89)), (ATerm) ATinsert(ATempty, term_o_25)), not_null(l_89));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(j_87, sym_perm_1))
                                                                {
                                                                  k_87 = ATgetArgument(j_87, 0);
                                                                  {
                                                                    ATerm s_89 = NULL;
                                                                    ATerm t_89 = NULL;
                                                                    t = not_null(k_87);
                                                                    {
                                                                      t = filter_1(t, Sym2Strs_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          t_89 = t;
                                                                          if(((s_89 != NULL) && (s_89 != t_89)))
                                                                            _fail(t_89);
                                                                          else
                                                                            s_89 = t_89;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(s_89)), term_p_25);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(j_87, sym_sort_1))
                                                                    {
                                                                      k_87 = ATgetArgument(j_87, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(k_87));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(j_87, sym_lit_1))
                                                                        {
                                                                          k_87 = ATgetArgument(j_87, 0);
                                                                          {
                                                                            ATerm y_89 = NULL;
                                                                            ATerm z_89 = NULL;
                                                                            t = not_null(k_87);
                                                                            {
                                                                              ATerm d_4 (ATerm t)
                                                                              {
                                                                                t = de_quote_0(t);
                                                                                t = de_escape_0(t);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, d_4);
                                                                              {
                                                                                z_89 = t;
                                                                                if(((y_89 != NULL) && (y_89 != z_89)))
                                                                                  _fail(z_89);
                                                                                else
                                                                                  y_89 = z_89;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(y_89));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(j_87, sym_label_2))
                                                                            {
                                                                              k_87 = ATgetArgument(j_87, 0);
                                                                              l_87 = ATgetArgument(j_87, 1);
                                                                              {
                                                                                ATerm b_90 = NULL;
                                                                                ATerm e_90 = NULL;
                                                                                t = not_null(k_87);
                                                                                {
                                                                                  ATerm e_4 (ATerm t)
                                                                                  {
                                                                                    t = de_quote_0(t);
                                                                                    t = de_escape_0(t);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, e_4);
                                                                                  {
                                                                                    e_90 = t;
                                                                                    if(((b_90 != NULL) && (b_90 != e_90)))
                                                                                      _fail(e_90);
                                                                                    else
                                                                                      b_90 = e_90;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(b_90));
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
    ATerm f_4 (ATerm t)
    {
      ATerm q_25 = t;
      int r_25 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = toAlphaNum_0(t);
          LocalPopChoice(r_25);
        }
      else
        {
          t = q_25;
          {
          }
        }
      return(t);
    }
    t = map_1(t, f_4);
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
  ATerm x_91 = NULL;
  x_91 = t;
  w_91 :
  if(!(match_string(x_91, "")))
    {
      _fail(t);
    }
  return(t);
}
ATerm empty_test_0 (ATerm t)
{
  ATerm s_25;
  s_25 = t;
  {
    ATerm g_4 (ATerm t)
    {
      ATerm t_25 = t;
      if((PushChoice() == 0))
        {
          t = empty_string_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_25;
        }
      return(t);
    }
    t = filter_1(t, g_4);
    t = Hd_0(t);
  }
  t = s_25;
  return(t);
}
ATerm isHyphen_0 (ATerm t)
{
  ATerm a_92 = NULL;
  a_92 = t;
  z_91 :
  if(match_int(a_92, 45))
    {
      t = term_k_15;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isLower_0 (ATerm t)
{
  ATerm d_92 = NULL;
  d_92 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(d_92), term_u_25);
    t = leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_25, not_null(d_92));
      t = leq_0(t);
    }
  }
  return(t);
}
ATerm isUpper_0 (ATerm t)
{
  ATerm h_92 = NULL;
  h_92 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(h_92), term_w_25);
    t = leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_x_25, not_null(h_92));
      t = leq_0(t);
    }
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm q_92 = NULL,r_92 = NULL,s_92 = NULL;
  q_92 = t;
  p_92 :
  if(match_cons(q_92, sym__2))
    {
      r_92 = ATgetArgument(q_92, 0);
      s_92 = ATgetArgument(q_92, 1);
      {
        ATerm y_25;
        y_25 = t;
        {
          ATerm z_25 = t;
          int a_26 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(r_92), not_null(s_92));
              LocalPopChoice(a_26);
            }
          else
            {
              t = z_25;
              t = SSL_gtr(not_null(r_92), not_null(s_92));
            }
        }
        t = y_25;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm b_26 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = b_26;
    }
  return(t);
}
ATerm isNum_0 (ATerm t)
{
  ATerm x_92 = NULL;
  x_92 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_92), term_c_26);
    t = leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_d_26, not_null(x_92));
      t = leq_0(t);
    }
  }
  return(t);
}
ATerm isAlphaNumHyphen_0 (ATerm t)
{
  ATerm e_26 = t;
  int f_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = isNum_0(t);
      LocalPopChoice(f_26);
    }
  else
    {
      t = e_26;
      {
        ATerm g_26 = t;
        int h_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = isUpper_0(t);
            LocalPopChoice(h_26);
          }
        else
          {
            t = g_26;
            {
              ATerm i_26 = t;
              int j_26 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = isLower_0(t);
                  LocalPopChoice(j_26);
                }
              else
                {
                  t = i_26;
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
  ATerm t_94 = NULL;
  ATerm v_94 (ATerm t)
  {
    t = not_null(t_94);
    {
      t = explode_string_0(t);
      {
        ATerm k_26 = t;
        if((PushChoice() == 0))
          {
            t = map_1(t, isAlphaNumHyphen_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = k_26;
          }
      }
    }
    t = term_l_26;
    return(t);
  }
  ATerm w_94 (ATerm t)
  {
    t = term_m_26;
    return(t);
  }
  ATerm x_94 (ATerm t)
  {
    t = term_n_26;
    return(t);
  }
  ATerm y_94 (ATerm t)
  {
    t = term_o_26;
    return(t);
  }
  ATerm z_94 (ATerm t)
  {
    t = term_p_26;
    return(t);
  }
  ATerm a_95 (ATerm t)
  {
    t = term_q_26;
    return(t);
  }
  ATerm b_95 (ATerm t)
  {
    t = term_r_26;
    return(t);
  }
  ATerm c_95 (ATerm t)
  {
    t = term_s_26;
    return(t);
  }
  ATerm d_95 (ATerm t)
  {
    t = term_t_26;
    return(t);
  }
  ATerm e_95 (ATerm t)
  {
    t = term_u_26;
    return(t);
  }
  ATerm f_95 (ATerm t)
  {
    t = term_v_26;
    return(t);
  }
  ATerm g_95 (ATerm t)
  {
    t = term_w_26;
    return(t);
  }
  ATerm h_95 (ATerm t)
  {
    t = term_x_26;
    return(t);
  }
  ATerm i_95 (ATerm t)
  {
    t = term_y_26;
    return(t);
  }
  ATerm j_95 (ATerm t)
  {
    t = term_o_25;
    return(t);
  }
  ATerm k_95 (ATerm t)
  {
    t = term_z_26;
    return(t);
  }
  ATerm l_95 (ATerm t)
  {
    t = term_z_26;
    return(t);
  }
  ATerm m_95 (ATerm t)
  {
    t = term_a_27;
    return(t);
  }
  ATerm n_95 (ATerm t)
  {
    t = term_b_27;
    return(t);
  }
  ATerm o_95 (ATerm t)
  {
    t = term_c_27;
    return(t);
  }
  ATerm p_95 (ATerm t)
  {
    t = term_d_27;
    return(t);
  }
  ATerm q_95 (ATerm t)
  {
    t = term_e_27;
    return(t);
  }
  ATerm r_95 (ATerm t)
  {
    t = term_f_27;
    return(t);
  }
  ATerm s_95 (ATerm t)
  {
    t = term_g_27;
    return(t);
  }
  ATerm x_95 (ATerm t)
  {
    t = term_h_27;
    return(t);
  }
  ATerm y_95 (ATerm t)
  {
    t = term_i_27;
    return(t);
  }
  ATerm z_95 (ATerm t)
  {
    t = term_j_27;
    return(t);
  }
  ATerm a_96 (ATerm t)
  {
    t = term_k_27;
    return(t);
  }
  ATerm b_96 (ATerm t)
  {
    t = term_l_27;
    return(t);
  }
  ATerm c_96 (ATerm t)
  {
    t = term_i_25;
    return(t);
  }
  ATerm d_96 (ATerm t)
  {
    t = term_m_27;
    return(t);
  }
  ATerm e_96 (ATerm t)
  {
    t = term_n_27;
    return(t);
  }
  ATerm f_96 (ATerm t)
  {
    t = term_s_27;
    return(t);
  }
  ATerm g_96 (ATerm t)
  {
    t = term_y_27;
    return(t);
  }
  ATerm h_96 (ATerm t)
  {
    t = term_k_27;
    return(t);
  }
  ATerm i_96 (ATerm t)
  {
    t = term_z_27;
    return(t);
  }
  ATerm j_96 (ATerm t)
  {
    t = term_v_28;
    return(t);
  }
  ATerm k_96 (ATerm t)
  {
    t = term_w_28;
    return(t);
  }
  ATerm l_96 (ATerm t)
  {
    t = term_g_29;
    return(t);
  }
  ATerm m_96 (ATerm t)
  {
    t = term_i_29;
    return(t);
  }
  t_94 = t;
  s_94 :
  if(match_string(t_94, "|="))
    {
      ATerm j_29 = t;
      int l_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_94(t);
          LocalPopChoice(l_29);
        }
      else
        {
          t = j_29;
          t = w_94(t);
        }
    }
  else
    {
      if(match_string(t_94, "^="))
        {
          ATerm m_29 = t;
          int n_29 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = v_94(t);
              LocalPopChoice(n_29);
            }
          else
            {
              t = m_29;
              t = x_94(t);
            }
        }
      else
        {
          if(match_string(t_94, "&="))
            {
              ATerm o_29 = t;
              int p_29 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = v_94(t);
                  LocalPopChoice(p_29);
                }
              else
                {
                  t = o_29;
                  t = y_94(t);
                }
            }
          else
            {
              if(match_string(t_94, ">>="))
                {
                  ATerm q_29 = t;
                  int v_29 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = v_94(t);
                      LocalPopChoice(v_29);
                    }
                  else
                    {
                      t = q_29;
                      t = z_94(t);
                    }
                }
              else
                {
                  if(match_string(t_94, "<<="))
                    {
                      ATerm w_29 = t;
                      int z_29 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = v_94(t);
                          LocalPopChoice(z_29);
                        }
                      else
                        {
                          t = w_29;
                          t = a_95(t);
                        }
                    }
                  else
                    {
                      if(match_string(t_94, "-="))
                        {
                          ATerm a_30 = t;
                          int b_30 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = v_94(t);
                              LocalPopChoice(b_30);
                            }
                          else
                            {
                              t = a_30;
                              t = b_95(t);
                            }
                        }
                      else
                        {
                          if(match_string(t_94, "+="))
                            {
                              ATerm c_30 = t;
                              int d_30 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = v_94(t);
                                  LocalPopChoice(d_30);
                                }
                              else
                                {
                                  t = c_30;
                                  t = c_95(t);
                                }
                            }
                          else
                            {
                              if(match_string(t_94, "%="))
                                {
                                  ATerm e_30 = t;
                                  int f_30 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = v_94(t);
                                      LocalPopChoice(f_30);
                                    }
                                  else
                                    {
                                      t = e_30;
                                      t = d_95(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(t_94, "/="))
                                    {
                                      ATerm g_30 = t;
                                      int h_30 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = v_94(t);
                                          LocalPopChoice(h_30);
                                        }
                                      else
                                        {
                                          t = g_30;
                                          t = e_95(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(t_94, "*="))
                                        {
                                          ATerm i_30 = t;
                                          int j_30 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = v_94(t);
                                              LocalPopChoice(j_30);
                                            }
                                          else
                                            {
                                              t = i_30;
                                              t = f_95(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(t_94, "=>"))
                                            {
                                              ATerm k_30 = t;
                                              int l_30 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = v_94(t);
                                                  LocalPopChoice(l_30);
                                                }
                                              else
                                                {
                                                  t = k_30;
                                                  t = g_95(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(t_94, "->"))
                                                {
                                                  ATerm m_30 = t;
                                                  int n_30 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = v_94(t);
                                                      LocalPopChoice(n_30);
                                                    }
                                                  else
                                                    {
                                                      t = m_30;
                                                      t = h_95(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(t_94, ":="))
                                                    {
                                                      ATerm o_30 = t;
                                                      int p_30 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = v_94(t);
                                                          LocalPopChoice(p_30);
                                                        }
                                                      else
                                                        {
                                                          t = o_30;
                                                          t = i_95(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(t_94, "||"))
                                                        {
                                                          ATerm q_30 = t;
                                                          int x_30 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = v_94(t);
                                                              LocalPopChoice(x_30);
                                                            }
                                                          else
                                                            {
                                                              t = q_30;
                                                              t = j_95(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(t_94, "=="))
                                                            {
                                                              ATerm y_30 = t;
                                                              int z_30 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = v_94(t);
                                                                  LocalPopChoice(z_30);
                                                                }
                                                              else
                                                                {
                                                                  t = y_30;
                                                                  t = k_95(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(t_94, "="))
                                                                {
                                                                  ATerm a_31 = t;
                                                                  int b_31 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = v_94(t);
                                                                      LocalPopChoice(b_31);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = a_31;
                                                                      t = l_95(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(t_94, "|"))
                                                                    {
                                                                      ATerm c_31 = t;
                                                                      int d_31 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = v_94(t);
                                                                          LocalPopChoice(d_31);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = c_31;
                                                                          t = m_95(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(t_94, ">="))
                                                                        {
                                                                          ATerm o_31 = t;
                                                                          int r_31 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = v_94(t);
                                                                              LocalPopChoice(r_31);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = o_31;
                                                                              t = n_95(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(t_94, ">"))
                                                                            {
                                                                              ATerm u_31 = t;
                                                                              int v_31 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = v_94(t);
                                                                                  LocalPopChoice(v_31);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = u_31;
                                                                                  t = o_95(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(t_94, "<="))
                                                                                {
                                                                                  ATerm w_31 = t;
                                                                                  int x_31 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = v_94(t);
                                                                                      LocalPopChoice(x_31);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = w_31;
                                                                                      t = p_95(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(t_94, "<"))
                                                                                    {
                                                                                      ATerm y_31 = t;
                                                                                      int z_31 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = v_94(t);
                                                                                          LocalPopChoice(z_31);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = y_31;
                                                                                          t = q_95(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(t_94, "!="))
                                                                                        {
                                                                                          ATerm a_32 = t;
                                                                                          int b_32 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = v_94(t);
                                                                                              LocalPopChoice(b_32);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = a_32;
                                                                                              t = r_95(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(t_94, ">>"))
                                                                                            {
                                                                                              ATerm c_32 = t;
                                                                                              int d_32 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = v_94(t);
                                                                                                  LocalPopChoice(d_32);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = c_32;
                                                                                                  t = s_95(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(t_94, "<<"))
                                                                                                {
                                                                                                  ATerm e_32 = t;
                                                                                                  int f_32 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = v_94(t);
                                                                                                      LocalPopChoice(f_32);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = e_32;
                                                                                                      t = x_95(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(t_94, "%"))
                                                                                                    {
                                                                                                      ATerm p_32 = t;
                                                                                                      int q_32 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = v_94(t);
                                                                                                          LocalPopChoice(q_32);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = p_32;
                                                                                                          t = y_95(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(t_94, "~"))
                                                                                                        {
                                                                                                          ATerm r_32 = t;
                                                                                                          int s_32 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = v_94(t);
                                                                                                              LocalPopChoice(s_32);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = r_32;
                                                                                                              t = z_95(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(t_94, "-"))
                                                                                                            {
                                                                                                              ATerm t_32 = t;
                                                                                                              int u_32 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = v_94(t);
                                                                                                                  LocalPopChoice(u_32);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = t_32;
                                                                                                                  {
                                                                                                                    ATerm v_32 = t;
                                                                                                                    int w_32 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = a_96(t);
                                                                                                                        LocalPopChoice(w_32);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = v_32;
                                                                                                                        t = h_96(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(t_94, "!"))
                                                                                                                {
                                                                                                                  ATerm x_32 = t;
                                                                                                                  int c_33 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = v_94(t);
                                                                                                                      LocalPopChoice(c_33);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = x_32;
                                                                                                                      t = b_96(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(t_94, "&&"))
                                                                                                                    {
                                                                                                                      ATerm d_33 = t;
                                                                                                                      int e_33 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = v_94(t);
                                                                                                                          LocalPopChoice(e_33);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = d_33;
                                                                                                                          t = c_96(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(t_94, "&"))
                                                                                                                        {
                                                                                                                          ATerm f_33 = t;
                                                                                                                          int g_33 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = v_94(t);
                                                                                                                              LocalPopChoice(g_33);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = f_33;
                                                                                                                              t = d_96(t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(t_94, "/"))
                                                                                                                            {
                                                                                                                              ATerm h_33 = t;
                                                                                                                              int i_33 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = v_94(t);
                                                                                                                                  LocalPopChoice(i_33);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = h_33;
                                                                                                                                  t = e_96(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(t_94, "*"))
                                                                                                                                {
                                                                                                                                  ATerm j_33 = t;
                                                                                                                                  int k_33 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = v_94(t);
                                                                                                                                      LocalPopChoice(k_33);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = j_33;
                                                                                                                                      t = f_96(t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(t_94, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm l_33 = t;
                                                                                                                                      int m_33 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = v_94(t);
                                                                                                                                          LocalPopChoice(m_33);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = l_33;
                                                                                                                                          t = g_96(t);
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(t_94, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm n_33 = t;
                                                                                                                                          int o_33 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = v_94(t);
                                                                                                                                              LocalPopChoice(o_33);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = n_33;
                                                                                                                                              t = i_96(t);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(t_94, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm p_33 = t;
                                                                                                                                              int q_33 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = v_94(t);
                                                                                                                                                  LocalPopChoice(q_33);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = p_33;
                                                                                                                                                  t = j_96(t);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(t_94, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm r_33 = t;
                                                                                                                                                  int w_33 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = v_94(t);
                                                                                                                                                      LocalPopChoice(w_33);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = r_33;
                                                                                                                                                      t = k_96(t);
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(t_94, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm x_33 = t;
                                                                                                                                                      int y_33 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = v_94(t);
                                                                                                                                                          LocalPopChoice(y_33);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = x_33;
                                                                                                                                                          t = l_96(t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(t_94, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm z_33 = t;
                                                                                                                                                          int c_34 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = v_94(t);
                                                                                                                                                              LocalPopChoice(c_34);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = z_33;
                                                                                                                                                              t = m_96(t);
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = v_94(t);
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
    }
  return(t);
}
ATerm Sep_1 (ATerm t, ATerm e_91 (ATerm))
{
  ATerm r_96 = NULL,s_96 = NULL,t_96 = NULL;
  r_96 = t;
  p_96 :
  if(((ATgetType(r_96) == AT_LIST) && ((ATermList) r_96 != ATempty)))
    {
      s_96 = ATgetFirst((ATermList) r_96);
      t_96 = (ATerm) ATgetNext((ATermList) r_96);
      {
        ATerm w_96 = NULL;
        ATerm x_96 = NULL;
        t = term_k_15;
        {
          t = e_91(t);
          {
            x_96 = t;
            if(((w_96 != NULL) && (w_96 != x_96)))
              _fail(x_96);
            else
              w_96 = x_96;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(t_96)), not_null(s_96)), not_null(w_96));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm f_91 (ATerm))
{
  ATerm e_34 = t;
  int f_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(f_34);
    }
  else
    {
      t = e_34;
      {
        ATerm h_4 (ATerm t)
        {
          ATerm g_34 = t;
          int h_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_34);
            }
          else
            {
              t = g_34;
              {
                t = Cons_2(t, _id, h_4);
                t = Sep_1(t, f_91);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, h_4);
      }
    }
  return(t);
}
ATerm Lit2Str_0 (ATerm t)
{
  ATerm d_97 = NULL,e_97 = NULL;
  d_97 = t;
  c_97 :
  if(match_cons(d_97, sym_lit_1))
    {
      e_97 = ATgetArgument(d_97, 0);
      {
        t = not_null(e_97);
        {
          ATerm i_4 (ATerm t)
          {
            t = de_quote_0(t);
            t = de_escape_0(t);
            return(t);
          }
          t = try_1(t, i_4);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Singleton_0 (ATerm t)
{
  ATerm p_97 = NULL;
  p_97 = t;
  t = (ATerm) ATinsert(ATempty, not_null(p_97));
  return(t);
}
ATerm list_ana_1 (ATerm t, ATerm n_73 (ATerm))
{
  ATerm e_98 (ATerm t)
  {
    ATerm i_34 = t;
    int j_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_73(t);
        t = Singleton_0(t);
        LocalPopChoice(j_34);
      }
    else
      {
        t = i_34;
        {
          ATerm k_34 = t;
          int l_34 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm w_97 = NULL;
              ATerm y_97 = NULL;
              w_97 = t;
              {
                ATerm z_97 = NULL;
                ATerm b_98 = NULL,c_98 = NULL,d_98 = NULL;
                t = not_null(w_97);
                {
                  z_97 = t;
                  {
                    t = SSL_explode_term(not_null(z_97));
                    {
                      b_98 = t;
                      v_97 :
                      if(match_cons(b_98, sym__2))
                        {
                          c_98 = ATgetArgument(b_98, 0);
                          d_98 = ATgetArgument(b_98, 1);
                          if(((y_97 != NULL) && (y_97 != d_98)))
                            _fail(d_98);
                          else
                            y_97 = d_98;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
                {
                  t = not_null(y_97);
                  {
                    t = filter_1(t, e_98);
                    t = concat_0(t);
                  }
                }
              }
              LocalPopChoice(l_34);
            }
          else
            {
              t = k_34;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = e_98(t);
  return(t);
}
ATerm lit2str_0 (ATerm t)
{
  t = list_ana_1(t, Lit2Str_0);
  {
    ATerm j_4 (ATerm t)
    {
      t = term_j_24;
      return(t);
    }
    t = separate_by_1(t, j_4);
    {
      t = concat_strings_0(t);
      {
        ATerm m_34 = t;
        int r_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = toAlphaNum_0(t);
            LocalPopChoice(r_34);
          }
        else
          {
            t = m_34;
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
  ATerm j_98 = NULL;
  j_98 = t;
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_q_23)), not_null(j_98)), (ATerm) ATinsert(ATempty, term_q_23));
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
  ATerm k_4 (ATerm t)
  {
    ATerm s_34;
    s_34 = t;
    {
      ATerm t_34 = t;
      if((PushChoice() == 0))
        {
          t = de_quote_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = t_34;
        }
    }
    t = s_34;
    t = quote_0(t);
    return(t);
  }
  t = try_1(t, k_4);
  return(t);
}
ATerm mk_constr_0 (ATerm t)
{
  ATerm b_99 = NULL,c_99 = NULL,d_99 = NULL,e_99 = NULL,f_99 = NULL;
  ATerm c_100 (ATerm t)
  {
    ATerm j_99 = NULL;
    ATerm u_34 = t;
    int y_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_99 = NULL;
        t = not_null(d_99);
        {
          t = lits2strs_0(t);
          {
            t = strs2constr_0(t);
            {
              k_99 = t;
              if(((j_99 != NULL) && (j_99 != k_99)))
                _fail(k_99);
              else
                j_99 = k_99;
            }
          }
        }
        LocalPopChoice(y_34);
      }
    else
      {
        t = u_34;
        {
          ATerm z_34 = t;
          int a_35 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm l_99 = NULL,n_99 = NULL,p_99 = NULL;
              ATerm b_35;
              b_35 = t;
              {
                ATerm m_99 = NULL;
                t = (ATerm) ATinsert(ATempty, not_null(e_99));
                {
                  t = syms2strs_0(t);
                  {
                    m_99 = t;
                    if(((l_99 != NULL) && (l_99 != m_99)))
                      _fail(m_99);
                    else
                      l_99 = m_99;
                  }
                }
              }
              t = b_35;
              {
                ATerm o_99 = NULL;
                t = not_null(d_99);
                {
                  t = lits2strs_0(t);
                  {
                    t = empty_test_0(t);
                    {
                      o_99 = t;
                      if(((n_99 != NULL) && (n_99 != o_99)))
                        _fail(o_99);
                      else
                        n_99 = o_99;
                    }
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_99), not_null(n_99));
                  {
                    t = conc_0(t);
                    {
                      t = strs2constr_0(t);
                      {
                        p_99 = t;
                        if(((j_99 != NULL) && (j_99 != p_99)))
                          _fail(p_99);
                        else
                          j_99 = p_99;
                      }
                    }
                  }
                }
              }
              LocalPopChoice(a_35);
            }
          else
            {
              t = z_34;
              {
                ATerm c_35 = t;
                int g_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_99 = NULL;
                    t = not_null(d_99);
                    {
                      t = syms2strs_0(t);
                      {
                        t = strs2constr_0(t);
                        {
                          q_99 = t;
                          if(((j_99 != NULL) && (j_99 != q_99)))
                            _fail(q_99);
                          else
                            j_99 = q_99;
                        }
                      }
                    }
                    LocalPopChoice(g_35);
                  }
                else
                  {
                    t = c_35;
                    {
                      ATerm r_99 = NULL,t_99 = NULL,v_99 = NULL;
                      ATerm m_35;
                      m_35 = t;
                      {
                        ATerm s_99 = NULL;
                        t = (ATerm) ATinsert(ATempty, not_null(e_99));
                        {
                          t = syms2strs_0(t);
                          {
                            s_99 = t;
                            if(((r_99 != NULL) && (r_99 != s_99)))
                              _fail(s_99);
                            else
                              r_99 = s_99;
                          }
                        }
                      }
                      t = m_35;
                      {
                        ATerm u_99 = NULL;
                        t = term_k_15;
                        {
                          t = new_0(t);
                          {
                            u_99 = t;
                            if(((t_99 != NULL) && (t_99 != u_99)))
                              _fail(u_99);
                            else
                              t_99 = u_99;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_99), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_99)), term_o_35));
                          {
                            t = conc_0(t);
                            {
                              t = strs2constr_0(t);
                              {
                                v_99 = t;
                                if(((j_99 != NULL) && (j_99 != v_99)))
                                  _fail(v_99);
                                else
                                  j_99 = v_99;
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
    t = not_null(j_99);
    return(t);
  }
  ATerm d_100 (ATerm t)
  {
    ATerm x_99 = NULL;
    ATerm y_99 = NULL,a_100 = NULL;
    ATerm z_99 = NULL;
    t = (ATerm) ATinsert(ATempty, not_null(e_99));
    {
      t = syms2strs_0(t);
      {
        z_99 = t;
        if(((y_99 != NULL) && (y_99 != z_99)))
          _fail(z_99);
        else
          y_99 = z_99;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_99), (ATerm) ATinsert(ATempty, term_p_35));
      {
        t = conc_0(t);
        {
          t = strs2constr_0(t);
          {
            a_100 = t;
            if(((x_99 != NULL) && (x_99 != a_100)))
              _fail(a_100);
            else
              x_99 = a_100;
          }
        }
      }
    }
    t = not_null(x_99);
    return(t);
  }
  c_99 = t;
  z_98 :
  if(match_cons(c_99, sym_prod_fun_4))
    {
      d_99 = ATgetArgument(c_99, 0);
      e_99 = ATgetArgument(c_99, 1);
      f_99 = ATgetArgument(c_99, 2);
      b_99 = ATgetArgument(c_99, 3);
      {
        t = not_null(d_99);
        t = normalize_constr_0(t);
      }
    }
  else
    {
      if(match_cons(c_99, sym_prod_3))
        {
          d_99 = ATgetArgument(c_99, 0);
          e_99 = ATgetArgument(c_99, 1);
          f_99 = ATgetArgument(c_99, 2);
          a_99 :
          if(((ATermList) d_99 == ATempty))
            {
              {
                ATerm q_35 = t;
                int r_35 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_100(t);
                    LocalPopChoice(r_35);
                  }
                else
                  {
                    t = q_35;
                    t = d_100(t);
                  }
              }
            }
          else
            {
              t = c_100(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm))
{
  ATerm v_100 = NULL,w_100 = NULL,x_100 = NULL;
  v_100 = t;
  u_100 :
  if(match_cons(v_100, sym_iter_star_sep_2))
    {
      w_100 = ATgetArgument(v_100, 0);
      x_100 = ATgetArgument(v_100, 1);
      {
        ATerm s_35 = t;
        int t_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_101 = NULL;
            t = not_null(w_100);
            {
              ATerm c_101 = NULL;
              t = o_0(t);
              {
                a_101 = t;
                {
                  t = not_null(x_100);
                  {
                    t = p_0(t);
                    {
                      c_101 = t;
                      t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(a_101), not_null(c_101));
                    }
                  }
                }
              }
            }
            LocalPopChoice(t_35);
          }
        else
          {
            t = s_35;
            {
              ATerm g_101 = NULL;
              t = not_null(w_100);
              {
                ATerm i_101 = NULL;
                t = o_0(t);
                {
                  g_101 = t;
                  {
                    t = not_null(x_100);
                    {
                      t = p_0(t);
                      {
                        i_101 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(g_101), not_null(i_101));
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
ATerm iter_sep_2 (ATerm t, ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm x_101 = NULL,y_101 = NULL,z_101 = NULL;
  x_101 = t;
  w_101 :
  if(match_cons(x_101, sym_iter_sep_2))
    {
      y_101 = ATgetArgument(x_101, 0);
      z_101 = ATgetArgument(x_101, 1);
      {
        ATerm u_35 = t;
        int v_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_102 = NULL;
            t = not_null(y_101);
            {
              ATerm e_102 = NULL;
              t = m_0(t);
              {
                c_102 = t;
                {
                  t = not_null(z_101);
                  {
                    t = n_0(t);
                    {
                      e_102 = t;
                      t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(c_102), not_null(e_102));
                    }
                  }
                }
              }
            }
            LocalPopChoice(v_35);
          }
        else
          {
            t = u_35;
            {
              ATerm i_102 = NULL;
              t = not_null(y_101);
              {
                ATerm k_102 = NULL;
                t = m_0(t);
                {
                  i_102 = t;
                  {
                    t = not_null(z_101);
                    {
                      t = n_0(t);
                      {
                        k_102 = t;
                        t = (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(i_102), not_null(k_102));
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
ATerm iter_star_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm x_102 = NULL,y_102 = NULL;
  x_102 = t;
  w_102 :
  if(match_cons(x_102, sym_iter_star_1))
    {
      y_102 = ATgetArgument(x_102, 0);
      {
        ATerm w_35 = t;
        int x_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_103 = NULL;
            t = not_null(y_102);
            {
              t = l_0(t);
              {
                a_103 = t;
                t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(a_103));
              }
            }
            LocalPopChoice(x_35);
          }
        else
          {
            t = w_35;
            {
              ATerm d_103 = NULL;
              t = not_null(y_102);
              {
                t = l_0(t);
                {
                  d_103 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_star_1, not_null(d_103));
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
ATerm iter_1 (ATerm t, ATerm k_0 (ATerm))
{
  ATerm p_103 = NULL,q_103 = NULL;
  p_103 = t;
  o_103 :
  if(match_cons(p_103, sym_iter_1))
    {
      q_103 = ATgetArgument(p_103, 0);
      {
        ATerm y_35 = t;
        int z_35 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm t_103 = NULL;
            t = not_null(q_103);
            {
              t = k_0(t);
              {
                t_103 = t;
                t = (ATerm) ATmakeAppl(sym_iter_1, not_null(t_103));
              }
            }
            LocalPopChoice(z_35);
          }
        else
          {
            t = y_35;
            {
              ATerm w_103 = NULL;
              t = not_null(q_103);
              {
                t = k_0(t);
                {
                  w_103 = t;
                  t = (ATerm) ATmakeAppl(sym_iter_1, not_null(w_103));
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
ATerm alt_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm j_104 = NULL,k_104 = NULL,l_104 = NULL;
  j_104 = t;
  i_104 :
  if(match_cons(j_104, sym_alt_2))
    {
      k_104 = ATgetArgument(j_104, 0);
      l_104 = ATgetArgument(j_104, 1);
      {
        ATerm a_36 = t;
        int f_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_104 = NULL;
            t = not_null(k_104);
            {
              ATerm r_104 = NULL;
              t = i_0(t);
              {
                p_104 = t;
                {
                  t = not_null(l_104);
                  {
                    t = j_0(t);
                    {
                      r_104 = t;
                      t = (ATerm) ATmakeAppl(sym_alt_2, not_null(p_104), not_null(r_104));
                    }
                  }
                }
              }
            }
            LocalPopChoice(f_36);
          }
        else
          {
            t = a_36;
            {
              ATerm v_104 = NULL;
              t = not_null(k_104);
              {
                ATerm x_104 = NULL;
                t = i_0(t);
                {
                  v_104 = t;
                  {
                    t = not_null(l_104);
                    {
                      t = j_0(t);
                      {
                        x_104 = t;
                        t = (ATerm) ATmakeAppl(sym_alt_2, not_null(v_104), not_null(x_104));
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
ATerm syntaxless_sort_0 (ATerm t)
{
  ATerm g_36 = t;
  int h_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1(t, _id);
      LocalPopChoice(h_36);
    }
  else
    {
      t = g_36;
      {
        ATerm i_36 = t;
        int j_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = alt_2(t, syntaxless_sort_0, syntaxless_sort_0);
            LocalPopChoice(j_36);
          }
        else
          {
            t = i_36;
            {
              ATerm m_36 = t;
              int n_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = opt_1(t, syntaxless_sort_0);
                  LocalPopChoice(n_36);
                }
              else
                {
                  t = m_36;
                  {
                    ATerm o_36 = t;
                    int p_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = iter_1(t, syntaxless_sort_0);
                        LocalPopChoice(p_36);
                      }
                    else
                      {
                        t = o_36;
                        {
                          ATerm u_36 = t;
                          int w_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_star_1(t, syntaxless_sort_0);
                              LocalPopChoice(w_36);
                            }
                          else
                            {
                              t = u_36;
                              {
                                ATerm x_36 = t;
                                int y_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = iter_sep_2(t, syntaxless_sort_0, _id);
                                    LocalPopChoice(y_36);
                                  }
                                else
                                  {
                                    t = x_36;
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
  ATerm l_4 (ATerm t)
  {
    t = Cons_2(t, syntaxless_sort_0, Nil_0);
    return(t);
  }
  t = prod_3(t, l_4, _id, _id);
  {
    ATerm m_4 (ATerm t)
    {
      t = term_z_36;
      return(t);
    }
    t = has_option_1(t, m_4);
  }
  return(t);
}
ATerm is_reject_0 (ATerm t)
{
  ATerm m_105 = NULL,n_105 = NULL,o_105 = NULL,p_105 = NULL,q_105 = NULL;
  n_105 = t;
  l_105 :
  if(match_cons(n_105, sym_prod_fun_4))
    {
      o_105 = ATgetArgument(n_105, 0);
      p_105 = ATgetArgument(n_105, 1);
      q_105 = ATgetArgument(n_105, 2);
      m_105 = ATgetArgument(n_105, 3);
      {
        t = not_null(m_105);
        {
          ATerm n_4 (ATerm t)
          {
            ATerm w_105 = NULL;
            w_105 = t;
            j_105 :
            if(!(match_cons(w_105, sym_reject_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, n_4);
        }
        t = term_k_15;
      }
    }
  else
    {
      if(match_cons(n_105, sym_prod_3))
        {
          o_105 = ATgetArgument(n_105, 0);
          p_105 = ATgetArgument(n_105, 1);
          q_105 = ATgetArgument(n_105, 2);
          {
            t = not_null(q_105);
            {
              ATerm o_4 (ATerm t)
              {
                ATerm a_106 = NULL;
                a_106 = t;
                k_105 :
                if(!(match_cons(a_106, sym_reject_0)))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = oncetd_1(t, o_4);
            }
            t = term_k_15;
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm is_bracket_0 (ATerm t)
{
  ATerm i_106 = NULL,j_106 = NULL,k_106 = NULL,l_106 = NULL,m_106 = NULL;
  j_106 = t;
  h_106 :
  if(match_cons(j_106, sym_prod_fun_4))
    {
      k_106 = ATgetArgument(j_106, 0);
      l_106 = ATgetArgument(j_106, 1);
      m_106 = ATgetArgument(j_106, 2);
      i_106 = ATgetArgument(j_106, 3);
      {
        t = not_null(i_106);
        {
          ATerm p_4 (ATerm t)
          {
            ATerm s_106 = NULL;
            s_106 = t;
            f_106 :
            if(!(match_cons(s_106, sym_bracket_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, p_4);
        }
        t = term_k_15;
      }
    }
  else
    {
      if(match_cons(j_106, sym_prod_3))
        {
          k_106 = ATgetArgument(j_106, 0);
          l_106 = ATgetArgument(j_106, 1);
          m_106 = ATgetArgument(j_106, 2);
          {
            t = not_null(m_106);
            {
              ATerm q_4 (ATerm t)
              {
                ATerm w_106 = NULL;
                w_106 = t;
                g_106 :
                if(!(match_cons(w_106, sym_bracket_0)))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = oncetd_1(t, q_4);
            }
            t = term_k_15;
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm prodcons_0 (ATerm t)
{
  ATerm e_107 = NULL;
  e_107 = t;
  {
    ATerm a_37 = t;
    int d_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm g_107 = NULL;
        ATerm e_37;
        e_37 = t;
        {
          t = not_null(e_107);
          {
            ATerm f_37 = t;
            if((PushChoice() == 0))
              {
                ATerm l_37 = t;
                int m_37 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = get_constr_0(t);
                    LocalPopChoice(m_37);
                  }
                else
                  {
                    t = l_37;
                    {
                      ATerm n_37 = t;
                      int o_37 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = is_bracket_0(t);
                          LocalPopChoice(o_37);
                        }
                      else
                        {
                          t = n_37;
                          {
                            ATerm q_37 = t;
                            int s_37 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = is_reject_0(t);
                                LocalPopChoice(s_37);
                              }
                            else
                              {
                                t = q_37;
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
              {
                t = f_37;
              }
          }
        }
        t = e_37;
        {
          ATerm h_107 = NULL;
          t = not_null(e_107);
          {
            t = mk_constr_0(t);
            {
              h_107 = t;
              if(((g_107 != NULL) && (g_107 != h_107)))
                _fail(h_107);
              else
                g_107 = h_107;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_107), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(g_107))));
            t = add_attributes_0(t);
          }
        }
        LocalPopChoice(d_37);
      }
    else
      {
        t = a_37;
        {
          ATerm j_107 = NULL;
          ATerm k_107 = NULL;
          t = not_null(e_107);
          {
            t = get_constr_0(t);
            {
              k_107 = t;
              if(((j_107 != NULL) && (j_107 != k_107)))
                _fail(k_107);
              else
                j_107 = k_107;
            }
          }
          {
            t = not_null(e_107);
            {
              ATerm y_4 (ATerm t)
              {
                t = not_null(j_107);
                t = uq2q_0(t);
                return(t);
              }
              t = at_cons_1(t, y_4);
            }
          }
        }
      }
  }
  return(t);
}
ATerm sort_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm u_107 = NULL,v_107 = NULL;
  u_107 = t;
  t_107 :
  if(match_cons(u_107, sym_sort_1))
    {
      v_107 = ATgetArgument(u_107, 0);
      {
        ATerm t_37 = t;
        int u_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_107 = NULL;
            t = not_null(v_107);
            {
              t = h_0(t);
              {
                x_107 = t;
                t = (ATerm) ATmakeAppl(sym_sort_1, not_null(x_107));
              }
            }
            LocalPopChoice(u_37);
          }
        else
          {
            t = t_37;
            {
              ATerm b_108 = NULL;
              t = not_null(v_107);
              {
                t = h_0(t);
                {
                  b_108 = t;
                  t = (ATerm) ATmakeAppl(sym_sort_1, not_null(b_108));
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
ATerm get_templ_0 (ATerm t)
{
  ATerm q_108 = NULL,r_108 = NULL,s_108 = NULL,t_108 = NULL,u_108 = NULL,w_108 = NULL;
  q_108 = t;
  o_108 :
  if(match_cons(q_108, sym_appl_2))
    {
      r_108 = ATgetArgument(q_108, 0);
      w_108 = ATgetArgument(q_108, 1);
      p_108 :
      if(match_cons(r_108, sym_prod_3))
        {
          s_108 = ATgetArgument(r_108, 0);
          t_108 = ATgetArgument(r_108, 1);
          u_108 = ATgetArgument(r_108, 2);
          {
            ATerm b_109 = NULL,c_109 = NULL;
            ATerm j_109 = NULL;
            ATerm v_37 = t;
            int w_37 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = not_null(u_108);
                {
                  ATerm z_4 (ATerm t)
                  {
                    ATerm d_109 = NULL,e_109 = NULL;
                    d_109 = t;
                    j_108 :
                    if(match_cons(d_109, sym_cons_1))
                      {
                        e_109 = ATgetArgument(d_109, 0);
                        if(((b_109 != NULL) && (b_109 != e_109)))
                          _fail(e_109);
                        else
                          b_109 = e_109;
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = oncetd_1(t, z_4);
                }
                LocalPopChoice(w_37);
              }
            else
              {
                t = v_37;
                {
                  ATerm x_37 = t;
                  int y_37 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(t_108);
                      {
                        t = sort_1(t, _id);
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(s_108), not_null(t_108), not_null(u_108));
                          {
                            t = prodcons_0(t);
                            {
                              ATerm a_5 (ATerm t)
                              {
                                ATerm d_5 (ATerm t)
                                {
                                  ATerm f_109 = NULL,g_109 = NULL;
                                  f_109 = t;
                                  l_108 :
                                  if(match_cons(f_109, sym_cons_1))
                                    {
                                      g_109 = ATgetArgument(f_109, 0);
                                      if(((b_109 != NULL) && (b_109 != g_109)))
                                        _fail(g_109);
                                      else
                                        b_109 = g_109;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = oncetd_1(t, d_5);
                                return(t);
                              }
                              t = prod_3(t, _id, _id, a_5);
                            }
                          }
                        }
                      }
                      LocalPopChoice(y_37);
                    }
                  else
                    {
                      t = x_37;
                      {
                        ATerm i_109 = NULL;
                        t = term_z_37;
                        {
                          i_109 = t;
                          if(((b_109 != NULL) && (b_109 != i_109)))
                            _fail(i_109);
                          else
                            b_109 = i_109;
                        }
                      }
                    }
                }
              }
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, not_null(s_108), not_null(t_108), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(b_109))))), (ATerm) ATinsert(ATempty, not_null(b_109)));
              {
                t = get_pp_entry_0(t);
                {
                  j_109 = t;
                  if(((c_109 != NULL) && (c_109 != j_109)))
                    _fail(j_109);
                  else
                    c_109 = j_109;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(b_109), not_null(c_109));
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
ATerm appl2abox_0 (ATerm t)
{
  ATerm y_109 = NULL,z_109 = NULL,a_110 = NULL,b_110 = NULL,c_110 = NULL,e_110 = NULL;
  y_109 = t;
  w_109 :
  if(match_cons(y_109, sym_appl_2))
    {
      z_109 = ATgetArgument(y_109, 0);
      e_110 = ATgetArgument(y_109, 1);
      x_109 :
      if(match_cons(z_109, sym_prod_3))
        {
          a_110 = ATgetArgument(z_109, 0);
          b_110 = ATgetArgument(z_109, 1);
          c_110 = ATgetArgument(z_109, 2);
          {
            ATerm j_110 = NULL,k_110 = NULL,l_110 = NULL,m_110 = NULL;
            ATerm n_110 = NULL,o_110 = NULL,q_110 = NULL;
            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(a_110), not_null(b_110), not_null(c_110)), not_null(e_110));
            {
              t = get_templ_0(t);
              {
                n_110 = t;
                v_109 :
                if(match_cons(n_110, sym__2))
                  {
                    o_110 = ATgetArgument(n_110, 0);
                    q_110 = ATgetArgument(n_110, 1);
                    {
                      ATerm r_110 = NULL,t_110 = NULL,v_110 = NULL;
                      if(((j_110 != NULL) && (j_110 != o_110)))
                        _fail(o_110);
                      else
                        j_110 = o_110;
                      {
                        if(((k_110 != NULL) && (k_110 != q_110)))
                          _fail(q_110);
                        else
                          k_110 = q_110;
                        {
                          ATerm a_38;
                          a_38 = t;
                          {
                            ATerm s_110 = NULL;
                            t = not_null(a_110);
                            {
                              ATerm e_5 (ATerm t)
                              {
                                ATerm b_38 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = lit_1(t, _id);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = b_38;
                                  }
                                return(t);
                              }
                              t = filter_1(t, e_5);
                              {
                                s_110 = t;
                                if(((r_110 != NULL) && (r_110 != s_110)))
                                  _fail(s_110);
                                else
                                  r_110 = s_110;
                              }
                            }
                          }
                          t = a_38;
                          {
                            ATerm u_110 = NULL;
                            t = not_null(e_110);
                            {
                              ATerm f_5 (ATerm t)
                              {
                                ATerm c_38 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = lit_1(t, _id);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = c_38;
                                  }
                                return(t);
                              }
                              t = filter_1(t, f_5);
                              {
                                u_110 = t;
                                if(((t_110 != NULL) && (t_110 != u_110)))
                                  _fail(u_110);
                                else
                                  t_110 = u_110;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__4, not_null(r_110), not_null(t_110), (ATerm)ATinsert(ATempty, not_null(j_110)), term_n_19);
                              {
                                ATerm w_110 = NULL;
                                t = seq2abox_0(t);
                                {
                                  v_110 = t;
                                  {
                                    if(((l_110 != NULL) && (l_110 != v_110)))
                                      _fail(v_110);
                                    else
                                      l_110 = v_110;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_110), not_null(l_110));
                                      {
                                        t = instantiate_0(t);
                                        {
                                          w_110 = t;
                                          if(((m_110 != NULL) && (m_110 != w_110)))
                                            _fail(w_110);
                                          else
                                            m_110 = w_110;
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
                  {
                    _fail(t);
                  }
              }
            }
            t = not_null(m_110);
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
ATerm layout_0 (ATerm t)
{
  ATerm e_111 = NULL;
  e_111 = t;
  d_111 :
  if(!(match_cons(e_111, sym_layout_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm opt_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm k_111 = NULL,m_111 = NULL;
  k_111 = t;
  j_111 :
  if(match_cons(k_111, sym_opt_1))
    {
      m_111 = ATgetArgument(k_111, 0);
      {
        ATerm d_38 = t;
        int e_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_111 = NULL;
            t = not_null(m_111);
            {
              t = g_0(t);
              {
                o_111 = t;
                t = (ATerm) ATmakeAppl(sym_opt_1, not_null(o_111));
              }
            }
            LocalPopChoice(e_38);
          }
        else
          {
            t = d_38;
            {
              ATerm r_111 = NULL;
              t = not_null(m_111);
              {
                t = g_0(t);
                {
                  r_111 = t;
                  t = (ATerm) ATmakeAppl(sym_opt_1, not_null(r_111));
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
ATerm filter_1 (ATerm t, ATerm o_83 (ATerm))
{
  ATerm f_38 = t;
  int g_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(g_38);
    }
  else
    {
      t = f_38;
      {
        ATerm h_38 = t;
        int i_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_5 (ATerm t)
            {
              t = filter_1(t, o_83);
              return(t);
            }
            t = Cons_2(t, o_83, g_5);
            LocalPopChoice(i_38);
          }
        else
          {
            t = h_38;
            {
              ATerm a_112 = NULL,b_112 = NULL,c_112 = NULL;
              a_112 = t;
              z_111 :
              if(((ATgetType(a_112) == AT_LIST) && ((ATermList) a_112 != ATempty)))
                {
                  b_112 = ATgetFirst((ATermList) a_112);
                  c_112 = (ATerm) ATgetNext((ATermList) a_112);
                  {
                    t = not_null(c_112);
                    t = filter_1(t, o_83);
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
  ATerm g_112 = NULL,h_112 = NULL,i_112 = NULL;
  g_112 = t;
  f_112 :
  if(((ATermList) g_112 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(g_112) == AT_LIST) && ((ATermList) g_112 != ATempty)))
        {
          h_112 = ATgetFirst((ATermList) g_112);
          i_112 = (ATerm) ATgetNext((ATermList) g_112);
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
ATerm topdown_1 (ATerm t, ATerm k_92 (ATerm))
{
  ATerm j_112 (ATerm t)
  {
    t = k_92(t);
    t = _all(t, j_112);
    return(t);
  }
  t = j_112(t);
  return(t);
}
ATerm sometd_1 (ATerm t, ATerm m_94 (ATerm))
{
  ATerm k_112 (ATerm t)
  {
    ATerm p_38 = t;
    int q_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_94(t);
        LocalPopChoice(q_38);
      }
    else
      {
        t = p_38;
        t = _some(t, k_112);
      }
    return(t);
  }
  t = k_112(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm t_95 (ATerm), ATerm u_95 (ATerm))
{
  ATerm l_112 (ATerm t)
  {
    ATerm r_38 = t;
    int s_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_95(t);
        t = l_112(t);
        LocalPopChoice(s_38);
      }
    else
      {
        t = r_38;
        t = u_95(t);
      }
    return(t);
  }
  t = l_112(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm w_95 (ATerm))
{
  t = repeat_2(t, w_95, _id);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm n_112 = NULL;
  n_112 = t;
  t = SSL_int_to_string(not_null(n_112));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm y_112 = NULL,z_112 = NULL,a_113 = NULL;
  y_112 = t;
  x_112 :
  if(match_cons(y_112, sym_Path1_1))
    {
      z_112 = ATgetArgument(y_112, 0);
      t = not_null(z_112);
    }
  else
    {
      if(match_cons(y_112, sym_Path_2))
        {
          z_112 = ATgetArgument(y_112, 0);
          a_113 = ATgetArgument(y_112, 1);
          {
            ATerm i_113 = NULL,q_113 = NULL;
            t = not_null(a_113);
            {
              ATerm h_5 (ATerm t)
              {
                ATerm j_113 = NULL,k_113 = NULL,l_113 = NULL;
                j_113 = t;
                v_112 :
                if(match_cons(j_113, sym_selector_2))
                  {
                    k_113 = ATgetArgument(j_113, 0);
                    l_113 = ATgetArgument(j_113, 1);
                    {
                      ATerm o_113 = NULL;
                      ATerm p_113 = NULL;
                      t = not_null(k_113);
                      {
                        t = int_to_string_0(t);
                        {
                          p_113 = t;
                          if(((o_113 != NULL) && (o_113 != p_113)))
                            _fail(p_113);
                          else
                            o_113 = p_113;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(l_113)), term_i_39), not_null(o_113)), term_h_39);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, h_5);
              {
                t = concat_0(t);
                {
                  q_113 = t;
                  {
                    if(((i_113 != NULL) && (i_113 != q_113)))
                      _fail(q_113);
                    else
                      i_113 = q_113;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(i_113)), not_null(z_112));
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
  ATerm d_114 = NULL,e_114 = NULL,f_114 = NULL;
  d_114 = t;
  c_114 :
  if(match_cons(d_114, sym_Path1_1))
    {
      e_114 = ATgetArgument(d_114, 0);
      t = (ATerm) ATinsert(ATempty, not_null(e_114));
    }
  else
    {
      if(match_cons(d_114, sym_Path_2))
        {
          e_114 = ATgetArgument(d_114, 0);
          f_114 = ATgetArgument(d_114, 1);
          {
            ATerm n_114 = NULL,w_114 = NULL;
            t = not_null(f_114);
            {
              ATerm n_5 (ATerm t)
              {
                ATerm o_114 = NULL,p_114 = NULL,q_114 = NULL;
                o_114 = t;
                a_114 :
                if(match_cons(o_114, sym_selector_2))
                  {
                    p_114 = ATgetArgument(o_114, 0);
                    q_114 = ATgetArgument(o_114, 1);
                    t = not_null(p_114);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, n_5);
              {
                w_114 = t;
                {
                  if(((n_114 != NULL) && (n_114 != w_114)))
                    _fail(w_114);
                  else
                    n_114 = w_114;
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_114)), not_null(e_114));
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
  ATerm e_115 = NULL,f_115 = NULL,g_115 = NULL;
  e_115 = t;
  d_115 :
  if(match_cons(e_115, sym_PP_Entry_2))
    {
      f_115 = ATgetArgument(e_115, 0);
      g_115 = ATgetArgument(e_115, 1);
      {
        ATerm j_115 = NULL;
        ATerm k_115 = NULL;
        t = not_null(f_115);
        {
          t = mk_key_0(t);
          {
            k_115 = t;
            if(((j_115 != NULL) && (j_115 != k_115)))
              _fail(k_115);
            else
              j_115 = k_115;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_t_20, not_null(j_115), (ATerm) ATmakeAppl(sym__2, not_null(f_115), not_null(g_115)));
          {
            t = table_put_0(t);
            {
              t = not_null(f_115);
              {
                t = path_to_string_0(t);
                {
                  ATerm o_5 (ATerm t)
                  {
                    t = term_j_39;
                    return(t);
                  }
                  t = notify_1(t, o_5);
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
ATerm string_to_int_0 (ATerm t)
{
  ATerm o_115 = NULL;
  o_115 = t;
  t = SSL_string_to_int(not_null(o_115));
  return(t);
}
ATerm De_Escape4_0 (ATerm t)
{
  ATerm t_115 = NULL;
  t_115 = t;
  s_115 :
  if(((ATermList) t_115 == ATempty))
    {
      t = (ATerm) ATempty;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm De_Escape3_0 (ATerm t)
{
  ATerm y_115 = NULL,z_115 = NULL,a_116 = NULL;
  y_115 = t;
  x_115 :
  if(((ATgetType(y_115) == AT_LIST) && ((ATermList) y_115 != ATempty)))
    {
      z_115 = ATgetFirst((ATermList) y_115);
      a_116 = (ATerm) ATgetNext((ATermList) y_115);
      {
        ATerm d_116 = NULL;
        ATerm e_116 = NULL;
        t = not_null(a_116);
        {
          t = De_Escape_0(t);
          {
            e_116 = t;
            if(((d_116 != NULL) && (d_116 != e_116)))
              _fail(e_116);
            else
              d_116 = e_116;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(d_116)), not_null(z_115));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm De_Escape2_0 (ATerm t)
{
  ATerm n_116 = NULL,o_116 = NULL,p_116 = NULL,q_116 = NULL,r_116 = NULL;
  n_116 = t;
  j_116 :
  if(((ATgetType(n_116) == AT_LIST) && ((ATermList) n_116 != ATempty)))
    {
      o_116 = ATgetFirst((ATermList) n_116);
      p_116 = (ATerm) ATgetNext((ATermList) n_116);
      k_116 :
      if(match_int(o_116, 92))
        {
          l_116 :
          if(((ATgetType(p_116) == AT_LIST) && ((ATermList) p_116 != ATempty)))
            {
              q_116 = ATgetFirst((ATermList) p_116);
              r_116 = (ATerm) ATgetNext((ATermList) p_116);
              m_116 :
              if(match_int(q_116, 92))
                {
                  ATerm t_116 = NULL;
                  ATerm u_116 = NULL;
                  t = not_null(r_116);
                  {
                    t = De_Escape_0(t);
                    {
                      u_116 = t;
                      if(((t_116 != NULL) && (t_116 != u_116)))
                        _fail(u_116);
                      else
                        t_116 = u_116;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_116)), term_p_23);
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
ATerm De_Escape1_0 (ATerm t)
{
  ATerm d_117 = NULL,e_117 = NULL,f_117 = NULL,g_117 = NULL,h_117 = NULL;
  d_117 = t;
  z_116 :
  if(((ATgetType(d_117) == AT_LIST) && ((ATermList) d_117 != ATempty)))
    {
      e_117 = ATgetFirst((ATermList) d_117);
      f_117 = (ATerm) ATgetNext((ATermList) d_117);
      a_117 :
      if(match_int(e_117, 92))
        {
          b_117 :
          if(((ATgetType(f_117) == AT_LIST) && ((ATermList) f_117 != ATempty)))
            {
              g_117 = ATgetFirst((ATermList) f_117);
              h_117 = (ATerm) ATgetNext((ATermList) f_117);
              c_117 :
              if(match_int(g_117, 34))
                {
                  ATerm j_117 = NULL;
                  ATerm k_117 = NULL;
                  t = not_null(h_117);
                  {
                    t = De_Escape_0(t);
                    {
                      k_117 = t;
                      if(((j_117 != NULL) && (j_117 != k_117)))
                        _fail(k_117);
                      else
                        j_117 = k_117;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_117)), term_q_23);
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
ATerm De_Escape_0 (ATerm t)
{
  ATerm k_39 = t;
  int l_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(l_39);
    }
  else
    {
      t = k_39;
      {
        ATerm m_39 = t;
        int n_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(n_39);
          }
        else
          {
            t = m_39;
            {
              ATerm o_39 = t;
              int p_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(p_39);
                }
              else
                {
                  t = o_39;
                  t = De_Escape4_0(t);
                }
            }
          }
      }
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
ATerm at_last_1 (ATerm t, ATerm m_90 (ATerm))
{
  ATerm n_117 (ATerm t)
  {
    ATerm q_39 = t;
    int z_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = m_90(t);
        LocalPopChoice(z_39);
      }
    else
      {
        t = q_39;
        t = Cons_2(t, _id, n_117);
      }
    return(t);
  }
  t = n_117(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm q_117 = NULL,r_117 = NULL,s_117 = NULL;
  q_117 = t;
  p_117 :
  if(((ATgetType(q_117) == AT_LIST) && ((ATermList) q_117 != ATempty)))
    {
      r_117 = ATgetFirst((ATermList) q_117);
      s_117 = (ATerm) ATgetNext((ATermList) q_117);
      t = not_null(s_117);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm y_117 = NULL,z_117 = NULL,a_118 = NULL;
  y_117 = t;
  x_117 :
  if(((ATgetType(y_117) == AT_LIST) && ((ATermList) y_117 != ATempty)))
    {
      z_117 = ATgetFirst((ATermList) y_117);
      a_118 = (ATerm) ATgetNext((ATermList) y_117);
      t = not_null(z_117);
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
    ATerm a_40;
    a_40 = t;
    {
      ATerm j_118 = NULL;
      t = Hd_0(t);
      {
        j_118 = t;
        e_118 :
        if(!(match_int(j_118, 34)))
          {
            _fail(t);
          }
      }
    }
    t = a_40;
    {
      t = Tl_0(t);
      {
        ATerm p_5 (ATerm t)
        {
          ATerm k_118 = NULL,l_118 = NULL,m_118 = NULL;
          k_118 = t;
          g_118 :
          if(((ATgetType(k_118) == AT_LIST) && ((ATermList) k_118 != ATempty)))
            {
              l_118 = ATgetFirst((ATermList) k_118);
              m_118 = (ATerm) ATgetNext((ATermList) k_118);
              h_118 :
              if(match_int(l_118, 34))
                {
                  i_118 :
                  if(((ATermList) m_118 == ATempty))
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
        t = at_last_1(t, p_5);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm S_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm t_118 = NULL,u_118 = NULL;
  t_118 = t;
  s_118 :
  if(match_cons(t_118, sym_S_1))
    {
      u_118 = ATgetArgument(t_118, 0);
      {
        ATerm b_40 = t;
        int c_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_118 = NULL;
            t = not_null(u_118);
            {
              t = f_0(t);
              {
                w_118 = t;
                t = (ATerm) ATmakeAppl(sym_S_1, not_null(w_118));
              }
            }
            LocalPopChoice(c_40);
          }
        else
          {
            t = b_40;
            {
              ATerm z_118 = NULL;
              t = not_null(u_118);
              {
                t = f_0(t);
                {
                  z_118 = t;
                  t = (ATerm) ATmakeAppl(sym_S_1, not_null(z_118));
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
  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL;
  ATerm h_40 = t;
  int i_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_119 = NULL,t_119 = NULL,u_119 = NULL;
      s_119 = t;
      l_119 :
      if(match_cons(s_119, sym_Arg_1))
        {
          t_119 = ATgetArgument(s_119, 0);
          {
            ATerm v_119 = NULL;
            if(((q_119 != NULL) && (q_119 != t_119)))
              _fail(t_119);
            else
              q_119 = t_119;
            {
              ATerm w_119 = NULL;
              t = not_null(q_119);
              {
                t = string_to_int_0(t);
                {
                  w_119 = t;
                  if(((v_119 != NULL) && (v_119 != w_119)))
                    _fail(w_119);
                  else
                    v_119 = w_119;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(v_119));
            }
          }
        }
      else
        {
          if(match_cons(s_119, sym_Arg2_2))
            {
              t_119 = ATgetArgument(s_119, 0);
              u_119 = ATgetArgument(s_119, 1);
              {
                ATerm x_119 = NULL,z_119 = NULL;
                if(((q_119 != NULL) && (q_119 != t_119)))
                  _fail(t_119);
                else
                  q_119 = t_119;
                {
                  if(((p_119 != NULL) && (p_119 != u_119)))
                    _fail(u_119);
                  else
                    p_119 = u_119;
                  {
                    ATerm j_40;
                    j_40 = t;
                    {
                      ATerm y_119 = NULL;
                      t = not_null(q_119);
                      {
                        t = string_to_int_0(t);
                        {
                          y_119 = t;
                          if(((x_119 != NULL) && (x_119 != y_119)))
                            _fail(y_119);
                          else
                            x_119 = y_119;
                        }
                      }
                    }
                    t = j_40;
                    {
                      ATerm a_120 = NULL;
                      t = not_null(p_119);
                      {
                        t = string_to_int_0(t);
                        {
                          a_120 = t;
                          if(((z_119 != NULL) && (z_119 != a_120)))
                            _fail(a_120);
                          else
                            z_119 = a_120;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(x_119), not_null(z_119));
                    }
                  }
                }
              }
            }
          else
            {
              if(match_cons(s_119, sym_SOpt_2))
                {
                  t_119 = ATgetArgument(s_119, 0);
                  u_119 = ATgetArgument(s_119, 1);
                  {
                    if(((r_119 != NULL) && (r_119 != t_119)))
                      _fail(t_119);
                    else
                      r_119 = t_119;
                    {
                      if(((q_119 != NULL) && (q_119 != u_119)))
                        _fail(u_119);
                      else
                        q_119 = u_119;
                      t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(r_119), not_null(q_119));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      LocalPopChoice(i_40);
    }
  else
    {
      t = h_40;
      {
        ATerm k_40 = t;
        int q_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_5 (ATerm t)
            {
              t = de_quote_0(t);
              t = de_escape_0(t);
              return(t);
            }
            t = S_1(t, s_5);
            LocalPopChoice(q_40);
          }
        else
          {
            t = k_40;
            {
              ATerm b_120 = NULL,c_120 = NULL,d_120 = NULL;
              b_120 = t;
              o_119 :
              if(match_cons(b_120, sym_selector_2))
                {
                  c_120 = ATgetArgument(b_120, 0);
                  d_120 = ATgetArgument(b_120, 1);
                  {
                    ATerm e_120 = NULL;
                    if(((q_119 != NULL) && (q_119 != c_120)))
                      _fail(c_120);
                    else
                      q_119 = c_120;
                    {
                      if(((r_119 != NULL) && (r_119 != d_120)))
                        _fail(d_120);
                      else
                        r_119 = d_120;
                      {
                        ATerm f_120 = NULL;
                        t = not_null(q_119);
                        {
                          t = string_to_int_0(t);
                          {
                            f_120 = t;
                            if(((e_120 != NULL) && (e_120 != f_120)))
                              _fail(f_120);
                            else
                              e_120 = f_120;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(e_120), not_null(r_119));
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
ATerm makePPEntry_0 (ATerm t)
{
  ATerm t_5 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, t_5);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm q_120 = NULL,r_120 = NULL;
  q_120 = t;
  p_120 :
  if(match_cons(q_120, sym_PP_Table_1))
    {
      r_120 = ATgetArgument(q_120, 0);
      {
        t = not_null(r_120);
        {
          t = reverse_0(t);
          {
            ATerm u_5 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, u_5);
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
  ATerm r_40;
  r_40 = t;
  {
    ATerm v_120 = NULL;
    ATerm w_120 = NULL;
    w_120 = t;
    if(((v_120 != NULL) && (v_120 != w_120)))
      _fail(w_120);
    else
      v_120 = w_120;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_40, not_null(v_120));
      t = printnl_0(t);
    }
  }
  t = r_40;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm a_41;
  a_41 = t;
  {
    t = error_0(t);
    {
      t = term_n_19;
      t = exit_0(t);
    }
  }
  t = a_41;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm b_41 = t;
  int c_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm x_5 (ATerm t)
      {
        t = term_f_41;
        return(t);
      }
      t = has_option_1(t, x_5);
      {
        t = (ATerm) ATinsert(ATempty, term_g_41);
        t = fatal_error_0(t);
      }
      LocalPopChoice(c_41);
    }
  else
    {
      t = b_41;
      {
        t = (ATerm) ATinsert(ATempty, term_h_41);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm g_121 = NULL,h_121 = NULL,i_121 = NULL;
  g_121 = t;
  e_121 :
  if(match_cons(g_121, sym__2))
    {
      h_121 = ATgetArgument(g_121, 0);
      i_121 = ATgetArgument(g_121, 1);
      f_121 :
      if(match_string(h_121, "in-type"))
        {
          ATerm k_121 = NULL,l_121 = NULL;
          ATerm i_41;
          i_41 = t;
          {
            ATerm m_121 = NULL;
            ATerm o_121 = NULL,p_121 = NULL,q_121 = NULL,r_121 = NULL,s_121 = NULL;
            t = not_null(i_121);
            {
              m_121 = t;
              {
                t = SSL_explode_term(not_null(m_121));
                {
                  o_121 = t;
                  b_121 :
                  if(match_cons(o_121, sym__2))
                    {
                      p_121 = ATgetArgument(o_121, 0);
                      q_121 = ATgetArgument(o_121, 1);
                      c_121 :
                      if(((ATgetType(q_121) == AT_LIST) && ((ATermList) q_121 != ATempty)))
                        {
                          r_121 = ATgetFirst((ATermList) q_121);
                          s_121 = (ATerm) ATgetNext((ATermList) q_121);
                          d_121 :
                          if(((ATermList) s_121 == ATempty))
                            {
                              {
                                if(((l_121 != NULL) && (l_121 != p_121)))
                                  _fail(p_121);
                                else
                                  l_121 = p_121;
                                if(((k_121 != NULL) && (k_121 != r_121)))
                                  _fail(r_121);
                                else
                                  k_121 = r_121;
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
          t = i_41;
          {
            t = not_null(l_121);
            {
              ATerm j_41 = t;
              int k_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = l_74(t);
                  LocalPopChoice(k_41);
                }
              else
                {
                  t = j_41;
                  t = type_failure_0(t);
                }
            }
            t = not_null(k_121);
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
ATerm termid_check_1 (ATerm t, ATerm s_74 (ATerm))
{
  ATerm y_121 = NULL;
  ATerm a_122 = NULL;
  y_121 = t;
  {
    ATerm b_122 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_l_41, not_null(y_121));
    {
      t = InId_1(t, s_74);
      {
        b_122 = t;
        if(((a_122 != NULL) && (a_122 != b_122)))
          _fail(b_122);
        else
          a_122 = b_122;
      }
    }
    t = not_null(a_122);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm z_80 (ATerm))
{
  ATerm m_41;
  m_41 = t;
  {
    ATerm g_122 = NULL,i_122 = NULL;
    ATerm n_41;
    n_41 = t;
    {
      ATerm h_122 = NULL;
      t = z_80(t);
      {
        h_122 = t;
        if(((g_122 != NULL) && (g_122 != h_122)))
          _fail(h_122);
        else
          g_122 = h_122;
      }
    }
    t = n_41;
    {
      ATerm j_122 = NULL;
      j_122 = t;
      if(((i_122 != NULL) && (i_122 != j_122)))
        _fail(j_122);
      else
        i_122 = j_122;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_122)), not_null(g_122)));
        t = printnl_0(t);
      }
    }
  }
  t = m_41;
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm c_94 (ATerm))
{
  ATerm m_122 (ATerm t)
  {
    ATerm o_41 = t;
    int p_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = c_94(t);
        LocalPopChoice(p_41);
      }
    else
      {
        t = o_41;
        t = _one(t, m_122);
      }
    return(t);
  }
  t = m_122(t);
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm q_122 = NULL,r_122 = NULL,s_122 = NULL;
  q_122 = t;
  p_122 :
  if(match_cons(q_122, sym__2))
    {
      r_122 = ATgetArgument(q_122, 0);
      s_122 = ATgetArgument(q_122, 1);
      {
        t = not_null(s_122);
        {
          ATerm y_5 (ATerm t)
          {
            ATerm v_122 = NULL;
            v_122 = t;
            if(((r_122 != NULL) && (r_122 != v_122)))
              _fail(v_122);
            else
              r_122 = v_122;
            return(t);
          }
          t = oncetd_1(t, y_5);
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
  t = term_s_41;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm a_123 = NULL;
  ATerm c_123 = NULL;
  a_123 = t;
  {
    ATerm d_123 = NULL;
    t = get_options_0(t);
    {
      d_123 = t;
      {
        if(((c_123 != NULL) && (c_123 != d_123)))
          _fail(d_123);
        else
          c_123 = d_123;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_123), not_null(c_123));
          t = in_0(t);
        }
      }
    }
    t = term_k_15;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm a_80 (ATerm))
{
  ATerm t_41;
  t_41 = t;
  {
    t = term_k_15;
    {
      t = a_80(t);
      t = check_option_0(t);
    }
  }
  t = t_41;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm f_74 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm u_41;
    u_41 = t;
    {
      ATerm v_41;
      v_41 = t;
      {
        ATerm a_6 (ATerm t)
        {
          t = term_w_41;
          return(t);
        }
        t = has_option_1(t, a_6);
      }
      t = v_41;
      t = debug_1(t, f_74);
    }
    t = u_41;
    return(t);
  }
  t = try_1(t, z_5);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm i_123 = NULL;
  i_123 = t;
  {
    t = term_t_20;
    {
      t = table_create_0(t);
      {
        t = not_null(i_123);
        {
          ATerm f_6 (ATerm t)
          {
            ATerm g_6 (ATerm t)
            {
              t = term_x_41;
              return(t);
            }
            t = notify_1(t, g_6);
            {
              t = ReadFromFile_0(t);
              {
                ATerm j_6 (ATerm t)
                {
                  ATerm k_123 = NULL;
                  k_123 = t;
                  h_123 :
                  if(!(match_string(k_123, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, j_6);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, f_6);
        }
      }
    }
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm m_85 (ATerm))
{
  ATerm p_123 = NULL,q_123 = NULL,r_123 = NULL;
  p_123 = t;
  o_123 :
  if(((ATgetType(p_123) == AT_LIST) && ((ATermList) p_123 != ATempty)))
    {
      q_123 = ATgetFirst((ATermList) p_123);
      r_123 = (ATerm) ATgetNext((ATermList) p_123);
      {
        t = m_85(t);
        {
          ATerm k_6 (ATerm t)
          {
            ATerm u_123 = NULL;
            u_123 = t;
            if(((q_123 != NULL) && (q_123 != u_123)))
              _fail(u_123);
            else
              q_123 = u_123;
            return(t);
          }
          t = fetch_1(t, k_6);
        }
        t = not_null(r_123);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm union_0 (ATerm t)
{
  ATerm z_123 = NULL,a_124 = NULL,b_124 = NULL;
  z_123 = t;
  y_123 :
  if(match_cons(z_123, sym__2))
    {
      a_124 = ATgetArgument(z_123, 0);
      b_124 = ATgetArgument(z_123, 1);
      {
        t = not_null(a_124);
        {
          ATerm f_124 (ATerm t)
          {
            ATerm y_41 = t;
            int z_41 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(b_124);
                LocalPopChoice(z_41);
              }
            else
              {
                t = y_41;
                {
                  ATerm a_42 = t;
                  int b_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm l_6 (ATerm t)
                      {
                        t = not_null(b_124);
                        return(t);
                      }
                      t = HdMember_1(t, l_6);
                      t = f_124(t);
                      LocalPopChoice(b_42);
                    }
                  else
                    {
                      t = a_42;
                      t = Cons_2(t, _id, f_124);
                    }
                }
              }
            return(t);
          }
          t = f_124(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm k_84 (ATerm), ATerm l_84 (ATerm), ATerm m_84 (ATerm))
{
  ATerm c_42 = t;
  int d_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_84(t);
      LocalPopChoice(d_42);
    }
  else
    {
      t = c_42;
      {
        ATerm k_124 = NULL,l_124 = NULL,m_124 = NULL;
        k_124 = t;
        j_124 :
        if(((ATgetType(k_124) == AT_LIST) && ((ATermList) k_124 != ATempty)))
          {
            l_124 = ATgetFirst((ATermList) k_124);
            m_124 = (ATerm) ATgetNext((ATermList) k_124);
            {
              ATerm p_124 = NULL,r_124 = NULL;
              ATerm e_42;
              e_42 = t;
              {
                ATerm q_124 = NULL;
                t = not_null(l_124);
                {
                  t = m_84(t);
                  {
                    q_124 = t;
                    if(((p_124 != NULL) && (p_124 != q_124)))
                      _fail(q_124);
                    else
                      p_124 = q_124;
                  }
                }
              }
              t = e_42;
              {
                ATerm s_124 = NULL;
                t = not_null(m_124);
                {
                  t = foldr_3(t, k_84, l_84, m_84);
                  {
                    s_124 = t;
                    if(((r_124 != NULL) && (r_124 != s_124)))
                      _fail(s_124);
                    else
                      r_124 = s_124;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_124), not_null(r_124));
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
ATerm crush_3 (ATerm t, ATerm x_85 (ATerm), ATerm y_85 (ATerm), ATerm z_85 (ATerm))
{
  ATerm a_125 = NULL;
  ATerm c_125 = NULL;
  a_125 = t;
  {
    ATerm d_125 = NULL;
    ATerm f_125 = NULL,g_125 = NULL,h_125 = NULL;
    t = not_null(a_125);
    {
      d_125 = t;
      {
        t = SSL_explode_term(not_null(d_125));
        {
          f_125 = t;
          z_124 :
          if(match_cons(f_125, sym__2))
            {
              g_125 = ATgetArgument(f_125, 0);
              h_125 = ATgetArgument(f_125, 1);
              if(((c_125 != NULL) && (c_125 != h_125)))
                _fail(h_125);
              else
                c_125 = h_125;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_125);
      t = foldr_3(t, x_85, y_85, z_85);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm l_86 (ATerm))
{
  ATerm o_125 (ATerm t)
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm m_125 = NULL;
        ATerm n_125 = NULL;
        t = l_86(t);
        {
          n_125 = t;
          if(((m_125 != NULL) && (m_125 != n_125)))
            _fail(n_125);
          else
            m_125 = n_125;
        }
        t = (ATerm) ATinsert(ATempty, not_null(m_125));
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        {
          ATerm m_6 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, m_6, union_0, o_125);
        }
      }
    return(t);
  }
  t = o_125(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm n_86 (ATerm))
{
  t = collect_om_1(t, n_86);
  return(t);
}
ATerm asfix2abox_0 (ATerm t)
{
  ATerm w_125 = NULL,x_125 = NULL,y_125 = NULL;
  w_125 = t;
  v_125 :
  if(match_cons(w_125, sym__2))
    {
      x_125 = ATgetArgument(w_125, 0);
      y_125 = ATgetArgument(w_125, 1);
      {
        t = not_null(x_125);
        {
          ATerm n_6 (ATerm t)
          {
            ATerm b_126 = NULL,c_126 = NULL;
            b_126 = t;
            s_125 :
            if(match_cons(b_126, sym_PP_Table_1))
              {
                c_126 = ATgetArgument(b_126, 0);
                t = not_null(c_126);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = collect_1(t, n_6);
          {
            t = reverse_0(t);
            {
              t = read_pp_tables_0(t);
              {
                t = not_null(y_125);
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm s_6 (ATerm t)
                    {
                      ATerm e_126 = NULL,f_126 = NULL;
                      e_126 = t;
                      u_125 :
                      if(match_cons(e_126, sym_cf_1))
                        {
                          f_126 = ATgetArgument(e_126, 0);
                          t = not_null(f_126);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = sometd_1(t, s_6);
                    return(t);
                  }
                  t = repeat_1(t, o_6);
                  {
                    ATerm x_6 (ATerm t)
                    {
                      ATerm z_6 (ATerm t)
                      {
                        ATerm a_7 (ATerm t)
                        {
                          t = is_list_0(t);
                          {
                            ATerm l_7 (ATerm t)
                            {
                              ATerm h_42 = t;
                              if((PushChoice() == 0))
                                {
                                  t = opt_1(t, layout_0);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = h_42;
                                }
                              {
                                ATerm i_42 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = layout_1(t, _id);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = i_42;
                                  }
                              }
                              return(t);
                            }
                            t = filter_1(t, l_7);
                          }
                          return(t);
                        }
                        t = try_1(t, a_7);
                        return(t);
                      }
                      t = topdown_1(t, z_6);
                      t = appl2abox_0(t);
                      return(t);
                    }
                    ATerm y_6 (ATerm t)
                    {
                      ATerm o_7 (ATerm t)
                      {
                        t = layout_1(t, _id);
                        return(t);
                      }
                      t = collect_p__1(t, o_7);
                      return(t);
                    }
                    t = split_2(t, x_6, y_6);
                    {
                      t = insert_layout_0(t);
                      {
                        ATerm p_7 (ATerm t)
                        {
                          t = not_null(x_125);
                          return(t);
                        }
                        t = split_2(t, p_7, _id);
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
    {
      _fail(t);
    }
  return(t);
}
ATerm default_usage_0 (ATerm t)
{
  ATerm m_126 = NULL;
  ATerm j_42;
  j_42 = t;
  {
    ATerm q_7 (ATerm t)
    {
      ATerm n_126 = NULL,o_126 = NULL;
      n_126 = t;
      l_126 :
      if(match_cons(n_126, sym_Program_1))
        {
          o_126 = ATgetArgument(n_126, 0);
          if(((m_126 != NULL) && (m_126 != o_126)))
            _fail(o_126);
          else
            m_126 = o_126;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, q_7);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_42), not_null(m_126)), term_k_42));
      {
        t = printnl_0(t);
        {
          t = term_n_19;
          t = exit_0(t);
        }
      }
    }
  }
  t = j_42;
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATempty, term_m_42));
  {
    t = printnl_0(t);
    {
      t = term_n_19;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm v_126 = NULL,w_126 = NULL;
  ATerm s_7 (ATerm t)
  {
    ATerm t_7 (ATerm t)
    {
      ATerm w_42 = t;
      if((PushChoice() == 0))
        {
          ATerm u_7 (ATerm t)
          {
            ATerm x_126 = NULL;
            x_126 = t;
            q_126 :
            if(!(match_cons(x_126, sym_Silent_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, u_7);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = w_42;
        }
      return(t);
    }
    t = _2(t, t_7, _id);
    {
      ATerm v_7 (ATerm t)
      {
        ATerm n_8 (ATerm t)
        {
          ATerm y_126 = NULL,z_126 = NULL;
          y_126 = t;
          s_126 :
          if(match_cons(y_126, sym_Runtime_1))
            {
              z_126 = ATgetArgument(y_126, 0);
              if(((w_126 != NULL) && (w_126 != z_126)))
                _fail(z_126);
              else
                w_126 = z_126;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, n_8);
        return(t);
      }
      t = _2(t, v_7, _id);
      {
        ATerm n_9 (ATerm t)
        {
          ATerm o_9 (ATerm t)
          {
            ATerm a_127 = NULL,b_127 = NULL;
            a_127 = t;
            u_126 :
            if(match_cons(a_127, sym_Program_1))
              {
                b_127 = ATgetArgument(a_127, 0);
                if(((v_126 != NULL) && (v_126 != b_127)))
                  _fail(b_127);
                else
                  v_126 = b_127;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, o_9);
          return(t);
        }
        t = _2(t, n_9, _id);
        {
          t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_43), not_null(w_126)), term_x_42), not_null(v_126)));
          t = printnl_0(t);
        }
      }
    }
    return(t);
  }
  t = try_1(t, s_7);
  {
    t = term_o_43;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_127 = NULL,h_127 = NULL,i_127 = NULL;
  g_127 = t;
  f_127 :
  if(match_cons(g_127, sym__2))
    {
      h_127 = ATgetArgument(g_127, 0);
      i_127 = ATgetArgument(g_127, 1);
      t = SSL_WriteToTextFile(not_null(h_127), not_null(i_127));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm g_56 (ATerm), ATerm h_56 (ATerm))
{
  ATerm q_127 = NULL,r_127 = NULL,s_127 = NULL;
  q_127 = t;
  p_127 :
  if(match_cons(q_127, sym__2))
    {
      r_127 = ATgetArgument(q_127, 0);
      s_127 = ATgetArgument(q_127, 1);
      {
        ATerm v_127 = NULL;
        t = not_null(r_127);
        {
          ATerm x_127 = NULL;
          t = g_56(t);
          {
            v_127 = t;
            {
              t = not_null(s_127);
              {
                t = h_56(t);
                {
                  x_127 = t;
                  t = (ATerm) ATmakeAppl(sym__2, not_null(v_127), not_null(x_127));
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm e_128 = NULL,f_128 = NULL,g_128 = NULL;
  e_128 = t;
  d_128 :
  if(match_cons(e_128, sym__2))
    {
      f_128 = ATgetArgument(e_128, 0);
      g_128 = ATgetArgument(e_128, 1);
      t = SSL_WriteToBinaryFile(not_null(f_128), not_null(g_128));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm o_128 = NULL;
  ATerm p_43;
  p_43 = t;
  {
    ATerm p_9 (ATerm t)
    {
      ATerm q_43 = t;
      int r_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_9 (ATerm t)
          {
            ATerm p_128 = NULL,q_128 = NULL;
            p_128 = t;
            l_128 :
            if(match_cons(p_128, sym_Output_1))
              {
                q_128 = ATgetArgument(p_128, 0);
                if(((o_128 != NULL) && (o_128 != q_128)))
                  _fail(q_128);
                else
                  o_128 = q_128;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_9);
          LocalPopChoice(r_43);
        }
      else
        {
          t = q_43;
          {
            ATerm r_128 = NULL;
            t = term_s_43;
            {
              r_128 = t;
              if(((o_128 != NULL) && (o_128 != r_128)))
                _fail(r_128);
              else
                o_128 = r_128;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_9, _id);
  }
  t = p_43;
  {
    ATerm r_9 (ATerm t)
    {
      ATerm s_9 (ATerm t)
      {
        t = not_null(o_128);
        return(t);
      }
      t = split_2(t, s_9, _id);
      return(t);
    }
    t = _2(t, _id, r_9);
    {
      ATerm t_43 = t;
      int u_43 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_9 (ATerm t)
          {
            ATerm u_9 (ATerm t)
            {
              ATerm s_128 = NULL;
              s_128 = t;
              n_128 :
              if(!(match_cons(s_128, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_9);
            return(t);
          }
          t = _2(t, t_9, WriteToBinaryFile_0);
          LocalPopChoice(u_43);
        }
      else
        {
          t = t_43;
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
ATerm apply_strategy_1 (ATerm t, ATerm e_80 (ATerm))
{
  ATerm y_128 = NULL,a_129 = NULL,b_129 = NULL,c_129 = NULL;
  ATerm v_43;
  v_43 = t;
  t = dtime_0(t);
  t = v_43;
  {
    t = e_80(t);
    {
      ATerm w_43;
      w_43 = t;
      {
        ATerm z_128 = NULL;
        t = dtime_0(t);
        {
          z_128 = t;
          if(((y_128 != NULL) && (y_128 != z_128)))
            _fail(z_128);
          else
            y_128 = z_128;
        }
      }
      t = w_43;
      {
        a_129 = t;
        x_128 :
        if(match_cons(a_129, sym__2))
          {
            b_129 = ATgetArgument(a_129, 0);
            c_129 = ATgetArgument(a_129, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(b_129)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(y_128))), not_null(c_129));
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
  ATerm i_129 = NULL;
  i_129 = t;
  t = SSL_ReadFromFile(not_null(i_129));
  return(t);
}
ATerm split_2 (ATerm t, ATerm w_82 (ATerm), ATerm x_82 (ATerm))
{
  ATerm n_129 = NULL,p_129 = NULL;
  ATerm x_43;
  x_43 = t;
  {
    ATerm o_129 = NULL;
    t = w_82(t);
    {
      o_129 = t;
      if(((n_129 != NULL) && (n_129 != o_129)))
        _fail(o_129);
      else
        n_129 = o_129;
    }
  }
  t = x_43;
  {
    ATerm q_129 = NULL;
    t = x_82(t);
    {
      q_129 = t;
      if(((p_129 != NULL) && (p_129 != q_129)))
        _fail(q_129);
      else
        p_129 = q_129;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(n_129), not_null(p_129));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm w_129 = NULL;
  ATerm a_44;
  a_44 = t;
  {
    ATerm b_44 = t;
    int f_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm w_9 (ATerm t)
        {
          ATerm x_129 = NULL,y_129 = NULL;
          x_129 = t;
          u_129 :
          if(match_cons(x_129, sym_Input_1))
            {
              y_129 = ATgetArgument(x_129, 0);
              if(((w_129 != NULL) && (w_129 != y_129)))
                _fail(y_129);
              else
                w_129 = y_129;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, w_9);
        LocalPopChoice(f_44);
      }
    else
      {
        t = b_44;
        {
          ATerm z_129 = NULL;
          t = term_g_44;
          {
            z_129 = t;
            if(((w_129 != NULL) && (w_129 != z_129)))
              _fail(z_129);
            else
              w_129 = z_129;
          }
        }
      }
  }
  t = a_44;
  {
    ATerm x_9 (ATerm t)
    {
      t = not_null(w_129);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, x_9);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm d_130 = NULL;
  d_130 = t;
  c_130 :
  if(!(match_cons(d_130, sym_Version_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm d_80 (ATerm))
{
  ATerm y_9 (ATerm t)
  {
    ATerm o_44 = t;
    int u_44 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(u_44);
      }
    else
      {
        t = o_44;
        {
          ATerm v_44 = t;
          int w_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(w_44);
            }
          else
            {
              t = v_44;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, y_9);
  t = d_80(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_130 = NULL;
  f_130 = t;
  t = SSL_table_create(not_null(f_130));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_130 = NULL;
  j_130 = t;
  {
    ATerm x_44;
    x_44 = t;
    {
      t = term_q_41;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_q_41, term_r_41, not_null(j_130));
          t = table_put_0(t);
        }
      }
    }
    t = x_44;
  }
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm k_45 = t;
  int l_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_9 (ATerm t)
      {
        ATerm x_130 = NULL;
        x_130 = t;
        m_130 :
        if(!(match_string(x_130, "-S")))
          {
            if(!(match_string(x_130, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm a_10 (ATerm t)
      {
        t = term_i_21;
        return(t);
      }
      ATerm b_10 (ATerm t)
      {
        t = term_m_45;
        return(t);
      }
      t = Option_3(t, z_9, a_10, b_10);
      LocalPopChoice(l_45);
    }
  else
    {
      t = k_45;
      {
        ATerm n_45 = t;
        int o_45 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_10 (ATerm t)
            {
              ATerm y_130 = NULL;
              y_130 = t;
              n_130 :
              if(!(match_string(y_130, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm d_10 (ATerm t)
            {
              t = term_w_41;
              return(t);
            }
            ATerm e_10 (ATerm t)
            {
              t = term_l_46;
              return(t);
            }
            t = Option_3(t, c_10, d_10, e_10);
            LocalPopChoice(o_45);
          }
        else
          {
            t = n_45;
            {
              ATerm m_46 = t;
              int n_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm f_10 (ATerm t)
                  {
                    ATerm z_130 = NULL;
                    z_130 = t;
                    o_130 :
                    if(!(match_string(z_130, "-v")))
                      {
                        if(!(match_string(z_130, "--version")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm g_10 (ATerm t)
                  {
                    t = term_o_46;
                    return(t);
                  }
                  ATerm i_10 (ATerm t)
                  {
                    t = term_p_46;
                    return(t);
                  }
                  t = Option_3(t, f_10, g_10, i_10);
                  LocalPopChoice(n_46);
                }
              else
                {
                  t = m_46;
                  {
                    ATerm q_46 = t;
                    int r_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_10 (ATerm t)
                        {
                          ATerm a_131 = NULL;
                          a_131 = t;
                          p_130 :
                          if(!(match_string(a_131, "@version")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm m_10 (ATerm t)
                        {
                          ATerm b_131 = NULL;
                          ATerm c_131 = NULL;
                          c_131 = t;
                          if(((b_131 != NULL) && (b_131 != c_131)))
                            _fail(c_131);
                          else
                            b_131 = c_131;
                          t = (ATerm) ATmakeAppl(sym_DeclVersion_1, not_null(b_131));
                          return(t);
                        }
                        ATerm o_10 (ATerm t)
                        {
                          t = term_v_46;
                          return(t);
                        }
                        t = ArgOption_3(t, k_10, m_10, o_10);
                        LocalPopChoice(r_46);
                      }
                    else
                      {
                        t = q_46;
                        {
                          ATerm w_46 = t;
                          int x_46 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm q_10 (ATerm t)
                              {
                                ATerm d_131 = NULL;
                                d_131 = t;
                                r_130 :
                                if(!(match_string(d_131, "-i")))
                                  {
                                    if(!(match_string(d_131, "--input")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm r_10 (ATerm t)
                              {
                                ATerm e_131 = NULL;
                                ATerm f_131 = NULL;
                                f_131 = t;
                                if(((e_131 != NULL) && (e_131 != f_131)))
                                  _fail(f_131);
                                else
                                  e_131 = f_131;
                                t = (ATerm) ATmakeAppl(sym_Input_1, not_null(e_131));
                                return(t);
                              }
                              ATerm u_10 (ATerm t)
                              {
                                t = term_a_47;
                                return(t);
                              }
                              t = ArgOption_3(t, q_10, r_10, u_10);
                              LocalPopChoice(x_46);
                            }
                          else
                            {
                              t = w_46;
                              {
                                ATerm c_47 = t;
                                int d_47 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm w_10 (ATerm t)
                                    {
                                      ATerm g_131 = NULL;
                                      g_131 = t;
                                      t_130 :
                                      if(!(match_string(g_131, "-o")))
                                        {
                                          if(!(match_string(g_131, "--uotput")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm y_10 (ATerm t)
                                    {
                                      ATerm h_131 = NULL;
                                      ATerm i_131 = NULL;
                                      i_131 = t;
                                      if(((h_131 != NULL) && (h_131 != i_131)))
                                        _fail(i_131);
                                      else
                                        h_131 = i_131;
                                      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(h_131));
                                      return(t);
                                    }
                                    ATerm a_11 (ATerm t)
                                    {
                                      t = term_e_47;
                                      return(t);
                                    }
                                    t = ArgOption_3(t, w_10, y_10, a_11);
                                    LocalPopChoice(d_47);
                                  }
                                else
                                  {
                                    t = c_47;
                                    {
                                      ATerm f_47 = t;
                                      int g_47 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_11 (ATerm t)
                                          {
                                            ATerm j_131 = NULL;
                                            j_131 = t;
                                            v_130 :
                                            if(!(match_string(j_131, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm f_11 (ATerm t)
                                          {
                                            t = term_i_47;
                                            return(t);
                                          }
                                          ATerm g_11 (ATerm t)
                                          {
                                            t = term_j_47;
                                            return(t);
                                          }
                                          t = Option_3(t, e_11, f_11, g_11);
                                          LocalPopChoice(g_47);
                                        }
                                      else
                                        {
                                          t = f_47;
                                          {
                                            ATerm h_11 (ATerm t)
                                            {
                                              ATerm k_131 = NULL;
                                              k_131 = t;
                                              w_130 :
                                              if(!(match_string(k_131, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm l_13 (ATerm t)
                                            {
                                              t = term_k_47;
                                              return(t);
                                            }
                                            ATerm r_13 (ATerm t)
                                            {
                                              t = term_n_47;
                                              return(t);
                                            }
                                            t = Option_3(t, h_11, l_13, r_13);
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
  ATerm p_131 = NULL;
  p_131 = t;
  t = SSL_table_destroy(not_null(p_131));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm t_131 = NULL;
  t_131 = t;
  t = SSL_exit(not_null(t_131));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm x_131 = NULL;
  x_131 = t;
  t = SSL_implode_string(not_null(x_131));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm c_90 (ATerm))
{
  ATerm a_132 (ATerm t)
  {
    ATerm s_47 = t;
    int t_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, a_132);
        LocalPopChoice(t_47);
      }
    else
      {
        t = s_47;
        {
          t = Nil_0(t);
          t = c_90(t);
        }
      }
    return(t);
  }
  t = a_132(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm u_47 = t;
  int v_47 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(v_47);
    }
  else
    {
      t = u_47;
      {
        ATerm d_132 = NULL,e_132 = NULL,f_132 = NULL;
        d_132 = t;
        c_132 :
        if(((ATgetType(d_132) == AT_LIST) && ((ATermList) d_132 != ATempty)))
          {
            e_132 = ATgetFirst((ATermList) d_132);
            f_132 = (ATerm) ATgetNext((ATermList) d_132);
            {
              t = not_null(e_132);
              {
                ATerm s_13 (ATerm t)
                {
                  t = not_null(f_132);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, s_13);
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
  ATerm l_132 = NULL;
  l_132 = t;
  t = SSL_explode_string(not_null(l_132));
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
ATerm long_description_1 (ATerm t, ATerm k_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm o_89 (ATerm))
{
  ATerm o_132 (ATerm t)
  {
    ATerm w_47 = t;
    int x_47 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(x_47);
      }
    else
      {
        t = w_47;
        t = Cons_2(t, o_89, o_132);
      }
    return(t);
  }
  t = o_132(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm b_0 (ATerm), ATerm c_0 (ATerm))
{
  ATerm v_132 = NULL,w_132 = NULL,x_132 = NULL;
  x_132 = t;
  u_132 :
  if(((ATgetType(x_132) == AT_LIST) && ((ATermList) x_132 != ATempty)))
    {
      v_132 = ATgetFirst((ATermList) x_132);
      w_132 = (ATerm) ATgetNext((ATermList) x_132);
      {
        ATerm a_133 = NULL;
        t = not_null(w_132);
        {
          ATerm y_47;
          y_47 = t;
          {
            ATerm b_133 = NULL,d_133 = NULL,f_133 = NULL;
            ATerm z_47;
            z_47 = t;
            {
              ATerm c_133 = NULL;
              t = c_0(t);
              {
                c_133 = t;
                if(((b_133 != NULL) && (b_133 != c_133)))
                  _fail(c_133);
                else
                  b_133 = c_133;
              }
            }
            t = z_47;
            {
              ATerm e_133 = NULL;
              t = not_null(v_132);
              {
                t = b_0(t);
                {
                  e_133 = t;
                  if(((d_133 != NULL) && (d_133 != e_133)))
                    _fail(e_133);
                  else
                    d_133 = e_133;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(b_133)), not_null(d_133));
                {
                  f_133 = t;
                  if(((a_133 != NULL) && (a_133 != f_133)))
                    _fail(f_133);
                  else
                    a_133 = f_133;
                }
              }
            }
          }
          t = y_47;
          {
            ATerm t_13 (ATerm t)
            {
              t = not_null(a_133);
              return(t);
            }
            t = reverse_acc_2(t, b_0, t_13);
          }
        }
      }
    }
  else
    {
      if(((ATermList) x_132 == ATempty))
        {
          {
            t = term_k_15;
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
  ATerm x_13 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, x_13);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm n_133 = NULL,o_133 = NULL,p_133 = NULL;
  n_133 = t;
  m_133 :
  if(match_cons(n_133, sym__2))
    {
      o_133 = ATgetArgument(n_133, 0);
      p_133 = ATgetArgument(n_133, 1);
      t = SSL_table_get(not_null(o_133), not_null(p_133));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm j_78 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm m_68 (ATerm))
{
  ATerm w_133 = NULL,x_133 = NULL;
  w_133 = t;
  v_133 :
  if(match_cons(w_133, sym_Program_1))
    {
      x_133 = ATgetArgument(w_133, 0);
      {
        ATerm z_133 = NULL;
        t = not_null(x_133);
        {
          t = m_68(t);
          {
            z_133 = t;
            t = (ATerm) ATmakeAppl(sym_Program_1, not_null(z_133));
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
  ATerm h_134 = NULL;
  ATerm y_13 (ATerm t)
  {
    ATerm z_13 (ATerm t)
    {
      ATerm i_134 = NULL;
      i_134 = t;
      if(((h_134 != NULL) && (h_134 != i_134)))
        _fail(i_134);
      else
        h_134 = i_134;
      return(t);
    }
    t = Program_1(t, z_13);
    return(t);
  }
  t = option_defined_1(t, y_13);
  {
    ATerm b_14 (ATerm t)
    {
      ATerm j_134 = NULL;
      ATerm k_134 = NULL;
      t = term_k_15;
      {
        ATerm c_14 (ATerm t)
        {
          t = not_null(h_134);
          return(t);
        }
        t = short_description_1(t, c_14);
        {
          t = concat_strings_0(t);
          {
            k_134 = t;
            if(((j_134 != NULL) && (j_134 != k_134)))
              _fail(k_134);
            else
              j_134 = k_134;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATempty, not_null(j_134)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, b_14);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATempty, term_f_48));
      {
        t = printnl_0(t);
        {
          t = term_g_48;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm d_14 (ATerm t)
                {
                  ATerm l_134 = NULL;
                  l_134 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_134)), term_h_48));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, d_14);
                {
                  ATerm e_14 (ATerm t)
                  {
                    ATerm n_134 = NULL;
                    ATerm o_134 = NULL;
                    t = term_k_15;
                    {
                      ATerm f_14 (ATerm t)
                      {
                        t = not_null(h_134);
                        return(t);
                      }
                      t = long_description_1(t, f_14);
                      {
                        t = concat_strings_0(t);
                        {
                          o_134 = t;
                          if(((n_134 != NULL) && (n_134 != o_134)))
                            _fail(o_134);
                          else
                            n_134 = o_134;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_134)), term_i_48));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, e_14);
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
  ATerm v_134 = NULL,w_134 = NULL,x_134 = NULL;
  v_134 = t;
  u_134 :
  if(match_cons(v_134, sym__2))
    {
      w_134 = ATgetArgument(v_134, 0);
      x_134 = ATgetArgument(v_134, 1);
      {
        ATerm j_48;
        j_48 = t;
        t = SSL_printnl(not_null(w_134), not_null(x_134));
        t = j_48;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm n_68 (ATerm))
{
  ATerm e_135 = NULL,f_135 = NULL;
  e_135 = t;
  d_135 :
  if(match_cons(e_135, sym_Undefined_1))
    {
      f_135 = ATgetArgument(e_135, 0);
      {
        ATerm h_135 = NULL;
        t = not_null(f_135);
        {
          t = n_68(t);
          {
            h_135 = t;
            t = (ATerm) ATmakeAppl(sym_Undefined_1, not_null(h_135));
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
ATerm fetch_1 (ATerm t, ATerm w_89 (ATerm))
{
  ATerm l_135 (ATerm t)
  {
    ATerm m_48 = t;
    int n_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, w_89, _id);
        LocalPopChoice(n_48);
      }
    else
      {
        t = m_48;
        t = Cons_2(t, _id, l_135);
      }
    return(t);
  }
  t = l_135(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm i_79 (ATerm))
{
  t = fetch_1(t, i_79);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm n_135 = NULL;
  n_135 = t;
  m_135 :
  if(!(match_cons(n_135, sym_Help_0)))
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm q_96 (ATerm))
{
  ATerm o_48 = t;
  int p_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = q_96(t);
      LocalPopChoice(p_48);
    }
  else
    {
      t = o_48;
      {
      }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm g_14 (ATerm t)
  {
    ATerm p_135 = NULL;
    p_135 = t;
    o_135 :
    if(!(match_string(p_135, "--help")))
      {
        if(!(match_string(p_135, "-h")))
          {
            if(!(match_string(p_135, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm h_14 (ATerm t)
  {
    t = term_q_48;
    return(t);
  }
  ATerm i_14 (ATerm t)
  {
    t = term_r_48;
    return(t);
  }
  t = Option_3(t, g_14, h_14, i_14);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm s_135 = NULL,t_135 = NULL,u_135 = NULL;
  s_135 = t;
  r_135 :
  if(((ATgetType(s_135) == AT_LIST) && ((ATermList) s_135 != ATempty)))
    {
      t_135 = ATgetFirst((ATermList) s_135);
      u_135 = (ATerm) ATgetNext((ATermList) s_135);
      t = (ATerm) ATinsert(CheckATermList(not_null(u_135)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(t_135)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm d_73 (ATerm), ATerm e_73 (ATerm))
{
  ATerm c_136 = NULL,d_136 = NULL,e_136 = NULL;
  c_136 = t;
  b_136 :
  if(((ATgetType(c_136) == AT_LIST) && ((ATermList) c_136 != ATempty)))
    {
      d_136 = ATgetFirst((ATermList) c_136);
      e_136 = (ATerm) ATgetNext((ATermList) c_136);
      {
        ATerm h_136 = NULL;
        t = not_null(d_136);
        {
          ATerm j_136 = NULL;
          t = d_73(t);
          {
            h_136 = t;
            {
              t = not_null(e_136);
              {
                t = e_73(t);
                {
                  j_136 = t;
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_136)), not_null(h_136));
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
  ATerm p_136 = NULL;
  p_136 = t;
  o_136 :
  if(((ATermList) p_136 == ATempty))
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
ATerm parse_options_p__1 (ATerm t, ATerm m_78 (ATerm))
{
  ATerm s_48;
  s_48 = t;
  {
    ATerm j_14 (ATerm t)
    {
      t = term_t_48;
      t = m_78(t);
      return(t);
    }
    t = try_1(t, j_14);
  }
  t = s_48;
  {
    ATerm k_14 (ATerm t)
    {
      ATerm r_136 = NULL;
      r_136 = t;
      t = (ATerm) ATmakeAppl(sym_Program_1, not_null(r_136));
      return(t);
    }
    ATerm l_14 (ATerm t)
    {
      ATerm u_48 = t;
      int x_48 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm y_48 = t;
          int z_48 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(z_48);
            }
          else
            {
              t = y_48;
              {
                t = m_78(t);
                t = Cons_2(t, _id, l_14);
              }
            }
          LocalPopChoice(x_48);
        }
      else
        {
          t = u_48;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, k_14, l_14);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm x_136 = NULL,y_136 = NULL,z_136 = NULL;
  ATerm a_49;
  a_49 = t;
  {
    ATerm a_137 = NULL,b_137 = NULL,c_137 = NULL,d_137 = NULL;
    a_137 = t;
    w_136 :
    if(match_cons(a_137, sym__3))
      {
        b_137 = ATgetArgument(a_137, 0);
        c_137 = ATgetArgument(a_137, 1);
        d_137 = ATgetArgument(a_137, 2);
        {
          if(((x_136 != NULL) && (x_136 != b_137)))
            _fail(b_137);
          else
            x_136 = b_137;
          {
            if(((y_136 != NULL) && (y_136 != c_137)))
              _fail(c_137);
            else
              y_136 = c_137;
            {
              if(((z_136 != NULL) && (z_136 != d_137)))
                _fail(d_137);
              else
                z_136 = d_137;
              t = SSL_table_put(not_null(x_136), not_null(y_136), not_null(z_136));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = a_49;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm l_78 (ATerm))
{
  ATerm g_137 = NULL;
  ATerm b_49;
  b_49 = t;
  {
    t = term_c_49;
    t = table_put_0(t);
  }
  t = b_49;
  {
    ATerm m_14 (ATerm t)
    {
      ATerm d_49 = t;
      int g_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = l_78(t);
          LocalPopChoice(g_49);
        }
      else
        {
          t = d_49;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, m_14);
    {
      ATerm n_14 (ATerm t)
      {
        ATerm h_49 = t;
        int i_49 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_o_43;
                t = exit_0(t);
              }
            }
            LocalPopChoice(i_49);
          }
        else
          {
            t = h_49;
            {
              ATerm o_14 (ATerm t)
              {
                ATerm p_14 (ATerm t)
                {
                  ATerm h_137 = NULL;
                  h_137 = t;
                  if(((g_137 != NULL) && (g_137 != h_137)))
                    _fail(h_137);
                  else
                    g_137 = h_137;
                  return(t);
                }
                t = Undefined_1(t, p_14);
                return(t);
              }
              t = option_defined_1(t, o_14);
              {
                ATerm j_49;
                j_49 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_s_40, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_137)), term_k_49));
                  t = printnl_0(t);
                }
                t = j_49;
                {
                  t = system_usage_0(t);
                  {
                    t = term_n_19;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, n_14);
      {
        ATerm l_49;
        l_49 = t;
        {
          t = term_m_15;
          t = table_destroy_0(t);
        }
        t = l_49;
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_79 (ATerm), ATerm t_79 (ATerm), ATerm u_79 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm m_49 = t;
    int n_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = t_79(t);
        LocalPopChoice(n_49);
      }
    else
      {
        t = m_49;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, q_14);
  {
    t = store_options_0(t);
    {
      ATerm o_49 = t;
      int p_49 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = need_help_1(t, u_79);
          LocalPopChoice(p_49);
        }
      else
        {
          t = o_49;
          {
            ATerm s_49 = t;
            int t_49 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = input_file_0(t);
                {
                  t = apply_strategy_1(t, s_79);
                  {
                    t = output_file_0(t);
                    t = report_success_0(t);
                  }
                }
                LocalPopChoice(t_49);
              }
            else
              {
                t = s_49;
                t = report_failure_0(t);
              }
          }
        }
    }
  }
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm n_79 (ATerm), ATerm o_79 (ATerm))
{
  t = iowrap_3(t, n_79, o_79, default_usage_0);
  return(t);
}
ATerm Asfix_2_abox_0 (ATerm t)
{
  ATerm r_14 (ATerm t)
  {
    ATerm u_49 = t;
    int v_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm s_14 (ATerm t)
        {
          ATerm n_137 = NULL;
          n_137 = t;
          j_137 :
          if(!(match_string(n_137, "-V")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm t_14 (ATerm t)
        {
          t = term_w_41;
          return(t);
        }
        ATerm u_14 (ATerm t)
        {
          t = term_w_49;
          return(t);
        }
        t = Option_3(t, s_14, t_14, u_14);
        LocalPopChoice(v_49);
      }
    else
      {
        t = u_49;
        {
          ATerm f_50 = t;
          int g_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_14 (ATerm t)
              {
                ATerm o_137 = NULL;
                o_137 = t;
                k_137 :
                if(!(match_string(o_137, "-c")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_14 (ATerm t)
              {
                t = term_z_16;
                return(t);
              }
              ATerm x_14 (ATerm t)
              {
                t = term_h_50;
                return(t);
              }
              t = Option_3(t, v_14, w_14, x_14);
              LocalPopChoice(g_50);
            }
          else
            {
              t = f_50;
              {
                ATerm y_14 (ATerm t)
                {
                  ATerm p_137 = NULL;
                  p_137 = t;
                  l_137 :
                  if(!(match_string(p_137, "-p")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm a_15 (ATerm t)
                {
                  ATerm q_137 = NULL;
                  q_137 = t;
                  t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(q_137));
                  return(t);
                }
                ATerm b_15 (ATerm t)
                {
                  t = term_i_50;
                  return(t);
                }
                t = ArgOption_3(t, y_14, a_15, b_15);
              }
            }
        }
      }
    return(t);
  }
  t = iowrap_2(t, asfix2abox_0, r_14);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Asfix_2_abox_0(t);
  return(t);
}

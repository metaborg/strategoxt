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
Symbol sym_meta_listvar_1;
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
Symbol sym_PP_Table_1;
Symbol sym_layout_1;
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
  sym_meta_listvar_1 = ATmakeSymbol("meta-listvar", 1, ATfalse);
  ATprotectSymbol(sym_meta_listvar_1);
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
  sym_PP_Table_1 = ATmakeSymbol("PP-Table", 1, ATfalse);
  ATprotectSymbol(sym_PP_Table_1);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_Verbose_0 = ATmakeSymbol("Verbose", 0, ATfalse);
  ATprotectSymbol(sym_Verbose_0);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_g_52;
ATerm term_d_52;
ATerm term_a_52;
ATerm term_j_51;
ATerm term_o_50;
ATerm term_c_50;
ATerm term_z_49;
ATerm term_y_49;
ATerm term_g_49;
ATerm term_o_48;
ATerm term_n_48;
ATerm term_m_48;
ATerm term_d_48;
ATerm term_v_47;
ATerm term_u_47;
ATerm term_t_47;
ATerm term_f_47;
ATerm term_e_47;
ATerm term_d_47;
ATerm term_c_47;
ATerm term_z_46;
ATerm term_u_46;
ATerm term_t_46;
ATerm term_s_46;
ATerm term_p_46;
ATerm term_l_46;
ATerm term_k_46;
ATerm term_j_46;
ATerm term_g_46;
ATerm term_f_46;
ATerm term_b_46;
ATerm term_a_46;
ATerm term_o_45;
ATerm term_u_44;
ATerm term_i_44;
ATerm term_h_44;
ATerm term_g_44;
ATerm term_y_43;
ATerm term_t_43;
ATerm term_s_43;
ATerm term_p_43;
ATerm term_n_43;
ATerm term_d_43;
ATerm term_c_43;
ATerm term_p_42;
ATerm term_o_42;
ATerm term_k_42;
ATerm term_j_42;
ATerm term_i_42;
ATerm term_e_42;
ATerm term_a_42;
ATerm term_z_41;
ATerm term_y_41;
ATerm term_u_41;
ATerm term_c_41;
ATerm term_b_41;
ATerm term_a_41;
ATerm term_a_40;
ATerm term_j_39;
ATerm term_k_38;
ATerm term_j_38;
ATerm term_g_33;
ATerm term_f_33;
ATerm term_e_33;
ATerm term_d_33;
ATerm term_c_33;
ATerm term_b_33;
ATerm term_a_33;
ATerm term_z_32;
ATerm term_y_32;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_u_32;
ATerm term_t_32;
ATerm term_s_32;
ATerm term_q_32;
ATerm term_k_32;
ATerm term_d_32;
ATerm term_c_32;
ATerm term_x_31;
ATerm term_w_31;
ATerm term_v_31;
ATerm term_u_31;
ATerm term_t_31;
ATerm term_s_31;
ATerm term_r_31;
ATerm term_q_31;
ATerm term_p_31;
ATerm term_n_31;
ATerm term_k_31;
ATerm term_j_31;
ATerm term_i_31;
ATerm term_h_31;
ATerm term_c_31;
ATerm term_b_31;
ATerm term_a_31;
ATerm term_f_30;
ATerm term_e_30;
ATerm term_c_30;
ATerm term_z_29;
ATerm term_w_29;
ATerm term_l_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_y_28;
ATerm term_w_28;
ATerm term_u_28;
ATerm term_s_28;
ATerm term_h_28;
ATerm term_e_28;
ATerm term_b_28;
ATerm term_a_28;
ATerm term_v_27;
ATerm term_t_27;
ATerm term_s_27;
ATerm term_r_27;
ATerm term_q_27;
ATerm term_o_27;
ATerm term_n_27;
ATerm term_l_27;
ATerm term_g_26;
ATerm term_f_26;
ATerm term_z_25;
ATerm term_t_25;
ATerm term_r_25;
ATerm term_p_25;
ATerm term_o_25;
ATerm term_j_25;
ATerm term_i_25;
ATerm term_q_24;
ATerm term_h_24;
ATerm term_g_24;
ATerm term_y_22;
ATerm term_t_22;
ATerm term_x_21;
ATerm term_p_21;
ATerm term_o_21;
ATerm term_n_20;
ATerm term_m_20;
ATerm term_j_20;
ATerm term_e_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_p_19;
ATerm term_n_19;
ATerm term_x_15;
ATerm term_l_15;
ATerm term_m_12;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
void init_constant_terms (void)
{
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(sym_Conservative_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_HS_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("0", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(sym_SOpt_2, term_v_10, term_w_10);
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Unable to pretty-print term due to ambiguities.", 0, ATtrue));
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_x_15));
  term_x_15 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_n_19));
  term_n_19 = (ATerm) ATmakeAppl(ATmakeSymbol("pp-table", 0, ATtrue));
  ATprotect(&(term_p_19));
  term_p_19 = (ATerm) ATmakeAppl(ATmakeSymbol("obtaining: ", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(sym_lit_1, term_y_19);
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(sym_lit_1, term_a_20);
  ATprotect(&(term_j_20));
  term_j_20 = (ATerm) ATmakeAppl(sym_Silent_0);
  ATprotect(&(term_m_20));
  term_m_20 = (ATerm) ATmakeAppl(ATmakeSymbol("No constructor defined for production: ", 0, ATtrue));
  ATprotect(&(term_n_20));
  term_n_20 = (ATerm) ATmakeAppl(sym_KW_0);
  ATprotect(&(term_o_21));
  term_o_21 = (ATerm) ATmakeAppl(sym_VS_0);
  ATprotect(&(term_p_21));
  term_p_21 = (ATerm) ATmakeAppl(ATmakeSymbol("2", 0, ATtrue));
  ATprotect(&(term_x_21));
  term_x_21 = (ATerm) ATmakeAppl(sym_SOpt_2, term_o_21, term_p_21);
  ATprotect(&(term_t_22));
  term_t_22 = (ATerm) ATmakeAppl(ATmakeSymbol("alt", 0, ATtrue));
  ATprotect(&(term_y_22));
  term_y_22 = (ATerm) ATmakeAppl(sym_Arg_1, term_x_15);
  ATprotect(&(term_g_24));
  term_g_24 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_h_24));
  term_h_24 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_q_24));
  term_q_24 = (ATerm) ATmakeInt(110);
  ATprotect(&(term_i_25));
  term_i_25 = (ATerm) ATmakeAppl(ATmakeSymbol("obsolete library strategy: ", 0, ATtrue));
  ATprotect(&(term_j_25));
  term_j_25 = (ATerm) ATmakeAppl(ATmakeSymbol("'in: use is-subterm", 0, ATtrue));
  ATprotect(&(term_o_25));
  term_o_25 = (ATerm) ATmakeAppl(ATmakeSymbol("-", 0, ATtrue));
  ATprotect(&(term_p_25));
  term_p_25 = (ATerm) ATmakeAppl(ATmakeSymbol("START", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("LCons", 0, ATtrue));
  ATprotect(&(term_t_25));
  term_t_25 = (ATerm) ATmakeAppl(ATmakeSymbol("SCons", 0, ATtrue));
  ATprotect(&(term_z_25));
  term_z_25 = (ATerm) ATmakeAppl(ATmakeSymbol("some", 0, ATtrue));
  ATprotect(&(term_f_26));
  term_f_26 = (ATerm) ATmakeAppl(ATmakeSymbol("all", 0, ATtrue));
  ATprotect(&(term_g_26));
  term_g_26 = (ATerm) ATmakeAppl(ATmakeSymbol("id", 0, ATtrue));
  ATprotect(&(term_l_27));
  term_l_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Cons", 0, ATtrue));
  ATprotect(&(term_n_27));
  term_n_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_o_27));
  term_o_27 = (ATerm) ATmakeAppl(ATmakeSymbol("TCons", 0, ATtrue));
  ATprotect(&(term_q_27));
  term_q_27 = (ATerm) ATmakeAppl(ATmakeSymbol("TNil", 0, ATtrue));
  ATprotect(&(term_r_27));
  term_r_27 = (ATerm) ATmakeAppl(ATmakeSymbol("NL", 0, ATtrue));
  ATprotect(&(term_s_27));
  term_s_27 = (ATerm) ATmakeAppl(ATmakeSymbol("L", 0, ATtrue));
  ATprotect(&(term_t_27));
  term_t_27 = (ATerm) ATmakeAppl(ATmakeSymbol("Bracket", 0, ATtrue));
  ATprotect(&(term_v_27));
  term_v_27 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_b_28));
  term_b_28 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_e_28));
  term_e_28 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_s_28));
  term_s_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_u_28));
  term_u_28 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_w_28));
  term_w_28 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_y_28));
  term_y_28 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_l_29));
  term_l_29 = (ATerm) ATmakeInt(122);
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeInt(97);
  ATprotect(&(term_z_29));
  term_z_29 = (ATerm) ATmakeInt(90);
  ATprotect(&(term_c_30));
  term_c_30 = (ATerm) ATmakeInt(65);
  ATprotect(&(term_e_30));
  term_e_30 = (ATerm) ATmakeInt(57);
  ATprotect(&(term_f_30));
  term_f_30 = (ATerm) ATmakeInt(48);
  ATprotect(&(term_a_31));
  term_a_31 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_b_31));
  term_b_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignOr", 0, ATtrue));
  ATprotect(&(term_c_31));
  term_c_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignExp", 0, ATtrue));
  ATprotect(&(term_h_31));
  term_h_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignAnd", 0, ATtrue));
  ATprotect(&(term_i_31));
  term_i_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSR", 0, ATtrue));
  ATprotect(&(term_j_31));
  term_j_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignSL", 0, ATtrue));
  ATprotect(&(term_k_31));
  term_k_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMin", 0, ATtrue));
  ATprotect(&(term_n_31));
  term_n_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignPlus", 0, ATtrue));
  ATprotect(&(term_p_31));
  term_p_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMod", 0, ATtrue));
  ATprotect(&(term_q_31));
  term_q_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignDiv", 0, ATtrue));
  ATprotect(&(term_r_31));
  term_r_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assignMul", 0, ATtrue));
  ATprotect(&(term_s_31));
  term_s_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rightdoublearrow", 0, ATtrue));
  ATprotect(&(term_t_31));
  term_t_31 = (ATerm) ATmakeAppl(ATmakeSymbol("rightarrow", 0, ATtrue));
  ATprotect(&(term_u_31));
  term_u_31 = (ATerm) ATmakeAppl(ATmakeSymbol("assign", 0, ATtrue));
  ATprotect(&(term_v_31));
  term_v_31 = (ATerm) ATmakeAppl(ATmakeSymbol("equal", 0, ATtrue));
  ATprotect(&(term_w_31));
  term_w_31 = (ATerm) ATmakeAppl(ATmakeSymbol("bar", 0, ATtrue));
  ATprotect(&(term_x_31));
  term_x_31 = (ATerm) ATmakeAppl(ATmakeSymbol("ge", 0, ATtrue));
  ATprotect(&(term_c_32));
  term_c_32 = (ATerm) ATmakeAppl(ATmakeSymbol("gt", 0, ATtrue));
  ATprotect(&(term_d_32));
  term_d_32 = (ATerm) ATmakeAppl(ATmakeSymbol("le", 0, ATtrue));
  ATprotect(&(term_k_32));
  term_k_32 = (ATerm) ATmakeAppl(ATmakeSymbol("lt", 0, ATtrue));
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("not-equal", 0, ATtrue));
  ATprotect(&(term_s_32));
  term_s_32 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-right", 0, ATtrue));
  ATprotect(&(term_t_32));
  term_t_32 = (ATerm) ATmakeAppl(ATmakeSymbol("shift-left", 0, ATtrue));
  ATprotect(&(term_u_32));
  term_u_32 = (ATerm) ATmakeAppl(ATmakeSymbol("mod", 0, ATtrue));
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("tilde", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("minus", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol("not", 0, ATtrue));
  ATprotect(&(term_y_32));
  term_y_32 = (ATerm) ATmakeAppl(ATmakeSymbol("address", 0, ATtrue));
  ATprotect(&(term_z_32));
  term_z_32 = (ATerm) ATmakeAppl(ATmakeSymbol("div", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("times", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("decr", 0, ATtrue));
  ATprotect(&(term_c_33));
  term_c_33 = (ATerm) ATmakeAppl(ATmakeSymbol("incr", 0, ATtrue));
  ATprotect(&(term_d_33));
  term_d_33 = (ATerm) ATmakeAppl(ATmakeSymbol("plus", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("semicolon", 0, ATtrue));
  ATprotect(&(term_f_33));
  term_f_33 = (ATerm) ATmakeAppl(ATmakeSymbol("colon", 0, ATtrue));
  ATprotect(&(term_g_33));
  term_g_33 = (ATerm) ATmakeAppl(ATmakeSymbol("comma", 0, ATtrue));
  ATprotect(&(term_j_38));
  term_j_38 = (ATerm) ATmakeAppl(ATmakeSymbol("dunno", 0, ATtrue));
  ATprotect(&(term_k_38));
  term_k_38 = (ATerm) ATmakeAppl(ATmakeSymbol("empty", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(sym_Injections_0);
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("no-cons-name", 0, ATtrue));
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol(".", 0, ATtrue));
  ATprotect(&(term_b_41));
  term_b_41 = (ATerm) ATmakeAppl(ATmakeSymbol(":", 0, ATtrue));
  ATprotect(&(term_c_41));
  term_c_41 = (ATerm) ATmakeAppl(ATmakeSymbol("storing: ", 0, ATtrue));
  ATprotect(&(term_u_41));
  term_u_41 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(sym_Strict_0);
  ATprotect(&(term_z_41));
  term_z_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Fatal: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_a_42));
  term_a_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Warning: input term has incorrect grammar identifier.", 0, ATtrue));
  ATprotect(&(term_e_42));
  term_e_42 = (ATerm) ATmakeAppl(ATmakeSymbol("in-type", 0, ATtrue));
  ATprotect(&(term_i_42));
  term_i_42 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_j_42));
  term_j_42 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_k_42));
  term_k_42 = (ATerm) ATmakeAppl(sym__2, term_i_42, term_j_42);
  ATprotect(&(term_o_42));
  term_o_42 = (ATerm) ATmakeAppl(sym_Verbose_0);
  ATprotect(&(term_p_42));
  term_p_42 = (ATerm) ATmakeAppl(ATmakeSymbol("Reading table: ", 0, ATtrue));
  ATprotect(&(term_c_43));
  term_c_43 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_d_43));
  term_d_43 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_n_43));
  term_n_43 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_p_43));
  term_p_43 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_s_43));
  term_s_43 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_t_43));
  term_t_43 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_43));
  term_y_43 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_g_44));
  term_g_44 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_h_44));
  term_h_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_i_44));
  term_i_44 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_u_44));
  term_u_44 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_45));
  term_o_45 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_a_46));
  term_a_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_b_46));
  term_b_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_46));
  term_f_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_g_46));
  term_g_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_j_46));
  term_j_46 = (ATerm) ATmakeAppl(sym__2, term_s_43, term_y_43);
  ATprotect(&(term_k_46));
  term_k_46 = (ATerm) ATmakeAppl(sym_Verbose_1, term_y_43);
  ATprotect(&(term_l_46));
  term_l_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_46));
  term_p_46 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_s_46));
  term_s_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_46));
  term_t_46 = (ATerm) ATmakeAppl(sym__2, term_s_46, term_n_9);
  ATprotect(&(term_u_46));
  term_u_46 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_z_46));
  term_z_46 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_c_47));
  term_c_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_d_47));
  term_d_47 = (ATerm) ATmakeAppl(sym__2, term_c_47, term_n_9);
  ATprotect(&(term_e_47));
  term_e_47 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_f_47));
  term_f_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_t_47));
  term_t_47 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_u_47));
  term_u_47 = (ATerm) ATmakeAppl(sym__2, term_t_47, term_n_9);
  ATprotect(&(term_v_47));
  term_v_47 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_d_48));
  term_d_48 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_m_48));
  term_m_48 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_n_48));
  term_n_48 = (ATerm) ATmakeAppl(sym__2, term_o_9, term_p_9);
  ATprotect(&(term_o_48));
  term_o_48 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_g_49));
  term_g_49 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_y_49));
  term_y_49 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_z_49));
  term_z_49 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_c_50));
  term_c_50 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_o_50));
  term_o_50 = (ATerm) ATmakeAppl(sym__3, term_o_9, term_p_9, (ATerm) ATempty);
  ATprotect(&(term_j_51));
  term_j_51 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_a_52));
  term_a_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-V               verbose execution.", 0, ATtrue));
  ATprotect(&(term_d_52));
  term_d_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-c               Conservative pretty-printing (only format where needed).", 0, ATtrue));
  ATprotect(&(term_g_52));
  term_g_52 = (ATerm) ATmakeAppl(ATmakeSymbol("-p <table>       Use pretty-print entries from <table>", 0, ATtrue));
}
ATerm ArgOption_3 (ATerm, ATerm d_1 (ATerm), ATerm e_1 (ATerm), ATerm f_1 (ATerm));
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm v_100 (ATerm));
ATerm Option_3 (ATerm, ATerm a_1 (ATerm), ATerm b_1 (ATerm), ATerm c_1 (ATerm));
ATerm layout2box_0 (ATerm);
ATerm has_significant_layout_0 (ATerm);
ATerm layout_place_holder_0 (ATerm);
ATerm has_layout_0 (ATerm);
ATerm InsLayout_1 (ATerm, ATerm m_95 (ATerm));
ATerm insert_layout_0 (ATerm);
ATerm layout_1 (ATerm, ATerm t_94 (ATerm));
ATerm collect_p__1 (ATerm, ATerm u_95 (ATerm));
ATerm amb_1 (ATerm, ATerm o_87 (ATerm));
ATerm fatal_ambiguity_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm Instantiate_1 (ATerm, ATerm z_0 (ATerm));
ATerm bottomup_1 (ATerm, ATerm h_118 (ATerm));
ATerm instantiate_0 (ATerm);
ATerm Arg2_2 (ATerm, ATerm x_0 (ATerm), ATerm y_0 (ATerm));
ATerm filter_literals_0 (ATerm);
ATerm make_path_0 (ATerm);
ATerm instantiate_list_1 (ATerm, ATerm q_95 (ATerm));
ATerm build_list_0 (ATerm);
ATerm instantiate_sep_list_1 (ATerm, ATerm s_95 (ATerm));
ATerm mod_0 (ATerm);
ATerm even_0 (ATerm);
ATerm BuildSepList_4 (ATerm, ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm));
ATerm NZip3_0 (ATerm);
ATerm NZip2_0 (ATerm);
ATerm NZip1_0 (ATerm);
ATerm genzip_4 (ATerm, ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm));
ATerm NZip01_0 (ATerm);
ATerm nzip_1 (ATerm, ATerm q_112 (ATerm));
ATerm build_sep_list_0 (ATerm);
ATerm Ind1_0 (ATerm);
ATerm subt_0 (ATerm);
ATerm Ind2_0 (ATerm);
ATerm index_0 (ATerm);
ATerm symbol2abox_0 (ATerm);
ATerm seq2abox_0 (ATerm);
ATerm lit_1 (ATerm, ATerm w_0 (ATerm));
ATerm Snd_0 (ATerm);
ATerm pp_table_get_0 (ATerm);
ATerm StoreEntryIfNotExists_0 (ATerm);
ATerm symbols2pp_entries_1 (ATerm, ATerm p_96 (ATerm));
ATerm generate_pp_entries_0 (ATerm);
ATerm Make_0 (ATerm);
ATerm pair_0 (ATerm);
ATerm make_0 (ATerm);
ATerm NonTerminal_0 (ATerm);
ATerm number_node_1 (ATerm, ATerm t_96 (ATerm));
ATerm no_labels_0 (ATerm);
ATerm number_nonterminals_0 (ATerm);
ATerm argument_list_0 (ATerm);
ATerm Arg_1 (ATerm, ATerm v_0 (ATerm));
ATerm mkterm_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm symbol2abox_1 (ATerm, ATerm q_96 (ATerm));
ATerm Fst_0 (ATerm);
ATerm get_pp_entry_0 (ATerm);
ATerm prod_3 (ATerm, ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm));
ATerm uq2q_0 (ATerm);
ATerm cons_1 (ATerm, ATerm r_0 (ATerm));
ATerm at_cons_1 (ATerm, ATerm j_95 (ATerm));
ATerm get_constr_0 (ATerm);
ATerm add_attributes_0 (ATerm);
ATerm Escape3_0 (ATerm);
ATerm Escape2_0 (ATerm);
ATerm Escape1_0 (ATerm);
ATerm Escape_0 (ATerm);
ATerm escape_0 (ATerm);
ATerm obsolete_1 (ATerm, ATerm p_104 (ATerm));
ATerm in_0 (ATerm);
ATerm isAlpha_0 (ATerm);
ATerm string_Hd_0 (ATerm);
ATerm strs2constr_0 (ATerm);
ATerm Sym2Strs_0 (ATerm);
ATerm sym2strs_0 (ATerm);
ATerm syms2strs_0 (ATerm);
ATerm new_0 (ATerm);
ATerm empty_string_0 (ATerm);
ATerm empty_test_0 (ATerm);
ATerm isHyphen_0 (ATerm);
ATerm isLower_0 (ATerm);
ATerm isUpper_0 (ATerm);
ATerm leq_0 (ATerm);
ATerm isNum_0 (ATerm);
ATerm isAlphaNumHyphen_0 (ATerm);
ATerm toAlphaNum_0 (ATerm);
ATerm Sep_1 (ATerm, ATerm j_115 (ATerm));
ATerm separate_by_1 (ATerm, ATerm k_115 (ATerm));
ATerm Lit2Str_0 (ATerm);
ATerm Singleton_0 (ATerm);
ATerm list_ana_1 (ATerm, ATerm f_95 (ATerm));
ATerm lit2str_0 (ATerm);
ATerm lits2strs_0 (ATerm);
ATerm Quote_0 (ATerm);
ATerm quote_0 (ATerm);
ATerm normalize_constr_0 (ATerm);
ATerm mk_constr_0 (ATerm);
ATerm iter_star_sep_2 (ATerm, ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm n_0 (ATerm), ATerm o_0 (ATerm));
ATerm iter_star_1 (ATerm, ATerm m_0 (ATerm));
ATerm iter_1 (ATerm, ATerm l_0 (ATerm));
ATerm alt_2 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm syntaxless_sort_0 (ATerm);
ATerm is_injection_0 (ATerm);
ATerm is_reject_0 (ATerm);
ATerm is_bracket_0 (ATerm);
ATerm prodcons_0 (ATerm);
ATerm sort_1 (ATerm, ATerm i_0 (ATerm));
ATerm get_templ_0 (ATerm);
ATerm application_to_abox_0 (ATerm);
ATerm appl2abox_0 (ATerm);
ATerm layout_0 (ATerm);
ATerm opt_1 (ATerm, ATerm h_0 (ATerm));
ATerm filter_1 (ATerm, ATerm l_107 (ATerm));
ATerm is_list_0 (ATerm);
ATerm topdown_1 (ATerm, ATerm g_118 (ATerm));
ATerm sometd_1 (ATerm, ATerm g_120 (ATerm));
ATerm repeat_2 (ATerm, ATerm n_121 (ATerm), ATerm o_121 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_121 (ATerm));
ATerm int_to_string_0 (ATerm);
ATerm path_to_string_0 (ATerm);
ATerm mk_key_0 (ATerm);
ATerm StoreEntry_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm o_114 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm S_1 (ATerm, ATerm g_0 (ATerm));
ATerm MakePPTerm_0 (ATerm);
ATerm makePPEntry_0 (ATerm);
ATerm build_pp_table_0 (ATerm);
ATerm error_0 (ATerm);
ATerm fatal_error_0 (ATerm);
ATerm type_failure_0 (ATerm);
ATerm InId_1 (ATerm, ATerm f_96 (ATerm));
ATerm termid_check_1 (ATerm, ATerm m_96 (ATerm));
ATerm oncetd_1 (ATerm, ATerm w_119 (ATerm));
ATerm is_subterm_0 (ATerm);
ATerm get_options_0 (ATerm);
ATerm check_option_0 (ATerm);
ATerm has_option_1 (ATerm, ATerm n_103 (ATerm));
ATerm notify_1 (ATerm, ATerm z_95 (ATerm));
ATerm read_pp_tables_0 (ATerm);
ATerm HdMember_1 (ATerm, ATerm l_109 (ATerm));
ATerm union_0 (ATerm);
ATerm foldr_3 (ATerm, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm));
ATerm crush_3 (ATerm, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm));
ATerm collect_om_1 (ATerm, ATerm n_110 (ATerm));
ATerm collect_1 (ATerm, ATerm p_110 (ATerm));
ATerm asfix2abox_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_104 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm s_101 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_108 (ATerm), ATerm g_108 (ATerm));
ATerm crush_2 (ATerm, ATerm u_109 (ATerm), ATerm v_109 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm r_101 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm m_77 (ATerm), ATerm n_77 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm s_103 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_106 (ATerm), ATerm u_106 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm q_103 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_114 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm r_100 (ATerm));
ATerm map_1 (ATerm, ATerm r_113 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm c_0 (ATerm), ATerm d_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm q_100 (ATerm));
ATerm Program_1 (ATerm, ATerm y_89 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm z_89 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_113 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_101 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_122 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm u_94 (ATerm), ATerm v_94 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm t_100 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm s_100 (ATerm));
ATerm iowrap_4 (ATerm, ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm));
ATerm iowrap_3 (ATerm, ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm));
ATerm iowrap_2 (ATerm, ATerm w_102 (ATerm), ATerm x_102 (ATerm));
ATerm Asfix_2_abox_0 (ATerm);
ATerm main_0 (ATerm);
ATerm ArgOption_3 (ATerm t, ATerm d_1 (ATerm), ATerm e_1 (ATerm), ATerm f_1 (ATerm))
{
  ATerm y_6 = NULL,c_7 = NULL,d_7 = NULL,e_7 = NULL,j_8 = NULL;
  y_6 = t;
  w_6 :
  if(match_string(y_6, "register-usage-info"))
    {
      t = register_usage_1(t, f_1);
    }
  else
    {
      if(((ATgetType(y_6) == AT_LIST) && ((ATermList) y_6 != ATempty)))
        {
          c_7 = ATgetFirst((ATermList) y_6);
          d_7 = (ATerm) ATgetNext((ATermList) y_6);
          x_6 :
          if(((ATgetType(d_7) == AT_LIST) && ((ATermList) d_7 != ATempty)))
            {
              e_7 = ATgetFirst((ATermList) d_7);
              j_8 = (ATerm) ATgetNext((ATermList) d_7);
              {
                ATerm a_9 = NULL;
                ATerm j_9;
                j_9 = t;
                {
                  t = not_null(c_7);
                  t = d_1(t);
                }
                t = j_9;
                {
                  ATerm b_9 = NULL;
                  t = not_null(e_7);
                  {
                    t = e_1(t);
                    {
                      b_9 = t;
                      if(((a_9 != NULL) && (a_9 != b_9)))
                        _fail(b_9);
                      else
                        a_9 = b_9;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(j_8)), not_null(a_9));
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
  ATerm v_9 = NULL,w_9 = NULL,x_9 = NULL,y_9 = NULL;
  v_9 = t;
  u_9 :
  if(match_cons(v_9, sym__3))
    {
      w_9 = ATgetArgument(v_9, 0);
      x_9 = ATgetArgument(v_9, 1);
      y_9 = ATgetArgument(v_9, 2);
      {
        ATerm k_9;
        k_9 = t;
        {
          ATerm c_10 = NULL;
          ATerm d_10 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(w_9), not_null(x_9));
          {
            ATerm l_9 = t;
            int m_9 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(m_9);
              }
            else
              {
                t = l_9;
                t = (ATerm) ATempty;
              }
            {
              d_10 = t;
              if(((c_10 != NULL) && (c_10 != d_10)))
                _fail(d_10);
              else
                c_10 = d_10;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(w_9), not_null(x_9), (ATerm) ATinsert(CheckATermList(not_null(c_10)), not_null(y_9)));
            t = table_put_0(t);
          }
        }
        t = k_9;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm v_100 (ATerm))
{
  ATerm h_10 = NULL;
  ATerm i_10 = NULL;
  t = term_n_9;
  {
    t = v_100(t);
    {
      i_10 = t;
      if(((h_10 != NULL) && (h_10 != i_10)))
        _fail(i_10);
      else
        h_10 = i_10;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_o_9, term_p_9, not_null(h_10));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_1 (ATerm), ATerm b_1 (ATerm), ATerm c_1 (ATerm))
{
  ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL;
  o_10 = t;
  n_10 :
  if(match_string(o_10, "register-usage-info"))
    {
      t = register_usage_1(t, c_1);
    }
  else
    {
      if(((ATgetType(o_10) == AT_LIST) && ((ATermList) o_10 != ATempty)))
        {
          p_10 = ATgetFirst((ATermList) o_10);
          q_10 = (ATerm) ATgetNext((ATermList) o_10);
          {
            ATerm t_10 = NULL;
            ATerm q_9;
            q_9 = t;
            {
              t = not_null(p_10);
              t = a_1(t);
            }
            t = q_9;
            {
              ATerm u_10 = NULL;
              t = term_n_9;
              {
                t = b_1(t);
                {
                  u_10 = t;
                  if(((t_10 != NULL) && (t_10 != u_10)))
                    _fail(u_10);
                  else
                    t_10 = u_10;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(q_10)), not_null(t_10));
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
  ATerm c_11 = NULL,d_11 = NULL;
  c_11 = t;
  b_11 :
  if(match_cons(c_11, sym_layout_1))
    {
      d_11 = ATgetArgument(c_11, 0);
      {
        ATerm r_9 = t;
        int s_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_11 = NULL;
            t = has_significant_layout_0(t);
            {
              ATerm g_11 = NULL;
              t = not_null(d_11);
              {
                t = concat_strings_0(t);
                {
                  g_11 = t;
                  if(((f_11 != NULL) && (f_11 != g_11)))
                    _fail(g_11);
                  else
                    f_11 = g_11;
                }
              }
              t = (ATerm) ATmakeAppl(sym_C_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_S_1, not_null(f_11))));
            }
            LocalPopChoice(s_9);
          }
        else
          {
            t = r_9;
            {
              ATerm h_11 = NULL;
              ATerm i_11 = NULL;
              t = not_null(d_11);
              {
                t = concat_strings_0(t);
                {
                  i_11 = t;
                  if(((h_11 != NULL) && (h_11 != i_11)))
                    _fail(i_11);
                  else
                    h_11 = i_11;
                }
              }
              t = (ATerm) ATmakeAppl(sym_S_1, not_null(h_11));
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
  ATerm r_11 = NULL;
  ATerm t_9;
  t_9 = t;
  {
    ATerm s_11 = NULL,t_11 = NULL;
    ATerm z_9 = t;
    if((PushChoice() == 0))
      {
        t = layout_1(t, layout_place_holder_0);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = z_9;
      }
    {
      s_11 = t;
      q_11 :
      if(match_cons(s_11, sym_layout_1))
        {
          t_11 = ATgetArgument(s_11, 0);
          {
            if(((r_11 != NULL) && (r_11 != t_11)))
              _fail(t_11);
            else
              r_11 = t_11;
            {
              t = not_null(r_11);
              {
                t = concat_strings_0(t);
                {
                  t = explode_string_0(t);
                  {
                    ATerm a_0 (ATerm t)
                    {
                      ATerm a_10 = t;
                      if((PushChoice() == 0))
                        {
                          ATerm u_11 = NULL;
                          u_11 = t;
                          n_11 :
                          if(!(match_int(u_11, 9)))
                            {
                              _fail(t);
                            }
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = a_10;
                        }
                      {
                        ATerm b_10 = t;
                        if((PushChoice() == 0))
                          {
                            ATerm v_11 = NULL;
                            v_11 = t;
                            o_11 :
                            if(!(match_int(v_11, 10)))
                              {
                                _fail(t);
                              }
                            PopChoice();
                            _fail(t);
                          }
                        else
                          {
                            t = b_10;
                          }
                        {
                          ATerm e_10 = t;
                          if((PushChoice() == 0))
                            {
                              ATerm w_11 = NULL;
                              w_11 = t;
                              p_11 :
                              if(!(match_int(w_11, 32)))
                                {
                                  _fail(t);
                                }
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = e_10;
                            }
                        }
                      }
                      return(t);
                    }
                    t = filter_1(t, a_0);
                    {
                      ATerm f_10 = t;
                      if((PushChoice() == 0))
                        {
                          t = Nil_0(t);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = f_10;
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
  t = t_9;
  return(t);
}
ATerm layout_place_holder_0 (ATerm t)
{
  ATerm c_12 = NULL;
  c_12 = t;
  b_12 :
  if(match_cons(c_12, sym_layout_place_holder_0))
    {
      ATerm e_12 = NULL,g_12 = NULL;
      ATerm g_10;
      g_10 = t;
      {
        ATerm f_12 = NULL;
        t = SSLgetAnnotations(not_null(c_12));
        {
          f_12 = t;
          if(((e_12 != NULL) && (e_12 != f_12)))
            _fail(f_12);
          else
            e_12 = f_12;
        }
      }
      t = g_10;
      {
        ATerm h_12 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_place_holder_0), not_null(e_12));
        {
          h_12 = t;
          if(((g_12 != NULL) && (g_12 != h_12)))
            _fail(h_12);
          else
            g_12 = h_12;
        }
        t = not_null(g_12);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm has_layout_0 (ATerm t)
{
  ATerm j_10 = t;
  if((PushChoice() == 0))
    {
      t = layout_1(t, layout_place_holder_0);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = j_10;
    }
  return(t);
}
ATerm InsLayout_1 (ATerm t, ATerm m_95 (ATerm))
{
  ATerm j_14 (ATerm t)
  {
    ATerm a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL;
    ATerm k_10 = t;
    int l_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = _2(t, Nil_0, _id);
        LocalPopChoice(l_10);
      }
    else
      {
        t = k_10;
        {
          ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL,q_13 = NULL,r_13 = NULL;
          l_13 = t;
          x_12 :
          if(match_cons(l_13, sym__2))
            {
              m_13 = ATgetArgument(l_13, 0);
              r_13 = ATgetArgument(l_13, 1);
              y_12 :
              if(((ATgetType(m_13) == AT_LIST) && ((ATermList) m_13 != ATempty)))
                {
                  n_13 = ATgetFirst((ATermList) m_13);
                  o_13 = (ATerm) ATgetNext((ATermList) m_13);
                  z_12 :
                  if(((ATermList) o_13 == ATempty))
                    {
                      {
                        ATerm s_13 = NULL,t_13 = NULL,u_13 = NULL;
                        if(((a_13 != NULL) && (a_13 != n_13)))
                          _fail(n_13);
                        else
                          a_13 = n_13;
                        {
                          if(((g_13 != NULL) && (g_13 != r_13)))
                            _fail(r_13);
                          else
                            g_13 = r_13;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(g_13));
                            {
                              t = m_95(t);
                              {
                                s_13 = t;
                                o_12 :
                                if(match_cons(s_13, sym__2))
                                  {
                                    t_13 = ATgetArgument(s_13, 0);
                                    u_13 = ATgetArgument(s_13, 1);
                                    {
                                      if(((b_13 != NULL) && (b_13 != t_13)))
                                        _fail(t_13);
                                      else
                                        b_13 = t_13;
                                      {
                                        if(((h_13 != NULL) && (h_13 != u_13)))
                                          _fail(u_13);
                                        else
                                          h_13 = u_13;
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(b_13)), not_null(h_13));
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
                      if(((ATgetType(o_13) == AT_LIST) && ((ATermList) o_13 != ATempty)))
                        {
                          p_13 = ATgetFirst((ATermList) o_13);
                          q_13 = (ATerm) ATgetNext((ATermList) o_13);
                          {
                            ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL;
                            if(((a_13 != NULL) && (a_13 != n_13)))
                              _fail(n_13);
                            else
                              a_13 = n_13;
                            {
                              if(((d_13 != NULL) && (d_13 != p_13)))
                                _fail(p_13);
                              else
                                d_13 = p_13;
                              {
                                if(((f_13 != NULL) && (f_13 != q_13)))
                                  _fail(q_13);
                                else
                                  f_13 = q_13;
                                {
                                  if(((g_13 != NULL) && (g_13 != r_13)))
                                    _fail(r_13);
                                  else
                                    g_13 = r_13;
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(a_13), not_null(g_13));
                                    {
                                      t = m_95(t);
                                      {
                                        v_13 = t;
                                        v_12 :
                                        if(match_cons(v_13, sym__2))
                                          {
                                            w_13 = ATgetArgument(v_13, 0);
                                            x_13 = ATgetArgument(v_13, 1);
                                            w_12 :
                                            if(((ATgetType(x_13) == AT_LIST) && ((ATermList) x_13 != ATempty)))
                                              {
                                                y_13 = ATgetFirst((ATermList) x_13);
                                                z_13 = (ATerm) ATgetNext((ATermList) x_13);
                                                {
                                                  ATerm a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL;
                                                  if(((b_13 != NULL) && (b_13 != w_13)))
                                                    _fail(w_13);
                                                  else
                                                    b_13 = w_13;
                                                  {
                                                    if(((c_13 != NULL) && (c_13 != y_13)))
                                                      _fail(y_13);
                                                    else
                                                      c_13 = y_13;
                                                    {
                                                      if(((h_13 != NULL) && (h_13 != z_13)))
                                                        _fail(z_13);
                                                      else
                                                        h_13 = z_13;
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_13)), not_null(d_13)), not_null(h_13));
                                                        {
                                                          t = j_14(t);
                                                          {
                                                            a_14 = t;
                                                            t_12 :
                                                            if(match_cons(a_14, sym__2))
                                                              {
                                                                b_14 = ATgetArgument(a_14, 0);
                                                                e_14 = ATgetArgument(a_14, 1);
                                                                u_12 :
                                                                if(((ATgetType(b_14) == AT_LIST) && ((ATermList) b_14 != ATempty)))
                                                                  {
                                                                    c_14 = ATgetFirst((ATermList) b_14);
                                                                    d_14 = (ATerm) ATgetNext((ATermList) b_14);
                                                                    {
                                                                      if(((e_13 != NULL) && (e_13 != c_14)))
                                                                        _fail(c_14);
                                                                      else
                                                                        e_13 = c_14;
                                                                      {
                                                                        if(((j_13 != NULL) && (j_13 != d_14)))
                                                                          _fail(d_14);
                                                                        else
                                                                          j_13 = d_14;
                                                                        {
                                                                          if(((i_13 != NULL) && (i_13 != e_14)))
                                                                            _fail(e_14);
                                                                          else
                                                                            i_13 = e_14;
                                                                          {
                                                                            ATerm m_10 = t;
                                                                            int r_10 = stack_ptr;
                                                                            if((PushChoice() == 0))
                                                                              {
                                                                                ATerm f_14 = NULL;
                                                                                ATerm b_0 (ATerm t)
                                                                                {
                                                                                  t = term_s_10;
                                                                                  return(t);
                                                                                }
                                                                                t = has_option_1(t, b_0);
                                                                                {
                                                                                  t = not_null(c_13);
                                                                                  {
                                                                                    t = has_layout_0(t);
                                                                                    {
                                                                                      ATerm g_14 = NULL;
                                                                                      t = not_null(c_13);
                                                                                      {
                                                                                        t = layout2box_0(t);
                                                                                        {
                                                                                          g_14 = t;
                                                                                          if(((f_14 != NULL) && (f_14 != g_14)))
                                                                                            _fail(g_14);
                                                                                          else
                                                                                            f_14 = g_14;
                                                                                        }
                                                                                      }
                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(j_13)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_x_10), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(e_13)))), not_null(f_14)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, (ATerm) ATinsert(ATempty, not_null(b_13)))))), not_null(i_13));
                                                                                    }
                                                                                  }
                                                                                }
                                                                                LocalPopChoice(r_10);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = m_10;
                                                                                {
                                                                                  ATerm y_10 = t;
                                                                                  int z_10 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      ATerm h_14 = NULL;
                                                                                      ATerm a_11 = t;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          ATerm e_0 (ATerm t)
                                                                                          {
                                                                                            t = term_s_10;
                                                                                            return(t);
                                                                                          }
                                                                                          t = has_option_1(t, e_0);
                                                                                          PopChoice();
                                                                                          _fail(t);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = a_11;
                                                                                        }
                                                                                      {
                                                                                        t = not_null(c_13);
                                                                                        {
                                                                                          t = has_significant_layout_0(t);
                                                                                          {
                                                                                            ATerm i_14 = NULL;
                                                                                            t = not_null(c_13);
                                                                                            {
                                                                                              t = layout2box_0(t);
                                                                                              {
                                                                                                i_14 = t;
                                                                                                if(((h_14 != NULL) && (h_14 != i_14)))
                                                                                                  _fail(i_14);
                                                                                                else
                                                                                                  h_14 = i_14;
                                                                                              }
                                                                                            }
                                                                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(ATinsert(CheckATermList(not_null(j_13)), not_null(e_13)), not_null(h_14)), not_null(b_13)), not_null(i_13));
                                                                                          }
                                                                                        }
                                                                                      }
                                                                                      LocalPopChoice(z_10);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = y_10;
                                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATinsert(CheckATermList(not_null(j_13)), not_null(e_13)), not_null(b_13)), not_null(i_13));
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
  t = j_14(t);
  return(t);
}
ATerm insert_layout_0 (ATerm t)
{
  ATerm j_16 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL,n_18 = NULL;
  ATerm f_0 (ATerm t)
  {
    ATerm k_16 = NULL,l_16 = NULL,m_16 = NULL;
    k_16 = t;
    s_14 :
    if(((ATgetType(k_16) == AT_LIST) && ((ATermList) k_16 != ATempty)))
      {
        l_16 = ATgetFirst((ATermList) k_16);
        m_16 = (ATerm) ATgetNext((ATermList) k_16);
        {
          if(((j_16 != NULL) && (j_16 != l_16)))
            _fail(l_16);
          else
            j_16 = l_16;
          t = Tl_0(t);
        }
      }
    else
      {
        _fail(t);
      }
    return(t);
  }
  t = _2(t, _id, f_0);
  {
    ATerm x_18 (ATerm t)
    {
      ATerm n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL,r_16 = NULL,s_16 = NULL,t_16 = NULL;
      ATerm e_11 = t;
      int j_11 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm u_16 = NULL,v_16 = NULL,w_16 = NULL,x_16 = NULL,y_16 = NULL,z_16 = NULL;
          v_16 = t;
          z_15 :
          if(match_cons(v_16, sym__2))
            {
              w_16 = ATgetArgument(v_16, 0);
              z_16 = ATgetArgument(v_16, 1);
              a_16 :
              if(match_cons(w_16, sym_H_2))
                {
                  x_16 = ATgetArgument(w_16, 0);
                  y_16 = ATgetArgument(w_16, 1);
                  {
                    ATerm a_17 = NULL,b_17 = NULL,c_17 = NULL;
                    if(((n_16 != NULL) && (n_16 != x_16)))
                      _fail(x_16);
                    else
                      n_16 = x_16;
                    {
                      if(((p_16 != NULL) && (p_16 != y_16)))
                        _fail(y_16);
                      else
                        p_16 = y_16;
                      {
                        if(((q_16 != NULL) && (q_16 != z_16)))
                          _fail(z_16);
                        else
                          q_16 = z_16;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(q_16));
                          {
                            t = InsLayout_1(t, x_18);
                            {
                              a_17 = t;
                              e_15 :
                              if(match_cons(a_17, sym__2))
                                {
                                  b_17 = ATgetArgument(a_17, 0);
                                  c_17 = ATgetArgument(a_17, 1);
                                  {
                                    if(((r_16 != NULL) && (r_16 != b_17)))
                                      _fail(b_17);
                                    else
                                      r_16 = b_17;
                                    {
                                      if(((s_16 != NULL) && (s_16 != c_17)))
                                        _fail(c_17);
                                      else
                                        s_16 = c_17;
                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_H_2, not_null(n_16), not_null(r_16)), not_null(s_16));
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
                  if(match_cons(w_16, sym_HV_2))
                    {
                      x_16 = ATgetArgument(w_16, 0);
                      y_16 = ATgetArgument(w_16, 1);
                      {
                        ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL;
                        if(((n_16 != NULL) && (n_16 != x_16)))
                          _fail(x_16);
                        else
                          n_16 = x_16;
                        {
                          if(((p_16 != NULL) && (p_16 != y_16)))
                            _fail(y_16);
                          else
                            p_16 = y_16;
                          {
                            if(((q_16 != NULL) && (q_16 != z_16)))
                              _fail(z_16);
                            else
                              q_16 = z_16;
                            {
                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(q_16));
                              {
                                t = InsLayout_1(t, x_18);
                                {
                                  d_17 = t;
                                  g_15 :
                                  if(match_cons(d_17, sym__2))
                                    {
                                      e_17 = ATgetArgument(d_17, 0);
                                      f_17 = ATgetArgument(d_17, 1);
                                      {
                                        if(((r_16 != NULL) && (r_16 != e_17)))
                                          _fail(e_17);
                                        else
                                          r_16 = e_17;
                                        {
                                          if(((s_16 != NULL) && (s_16 != f_17)))
                                            _fail(f_17);
                                          else
                                            s_16 = f_17;
                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_HV_2, not_null(n_16), not_null(r_16)), not_null(s_16));
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
                      if(match_cons(w_16, sym_V_2))
                        {
                          x_16 = ATgetArgument(w_16, 0);
                          y_16 = ATgetArgument(w_16, 1);
                          {
                            ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
                            if(((n_16 != NULL) && (n_16 != x_16)))
                              _fail(x_16);
                            else
                              n_16 = x_16;
                            {
                              if(((p_16 != NULL) && (p_16 != y_16)))
                                _fail(y_16);
                              else
                                p_16 = y_16;
                              {
                                if(((q_16 != NULL) && (q_16 != z_16)))
                                  _fail(z_16);
                                else
                                  q_16 = z_16;
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(q_16));
                                  {
                                    t = InsLayout_1(t, x_18);
                                    {
                                      g_17 = t;
                                      i_15 :
                                      if(match_cons(g_17, sym__2))
                                        {
                                          h_17 = ATgetArgument(g_17, 0);
                                          i_17 = ATgetArgument(g_17, 1);
                                          {
                                            if(((r_16 != NULL) && (r_16 != h_17)))
                                              _fail(h_17);
                                            else
                                              r_16 = h_17;
                                            {
                                              if(((s_16 != NULL) && (s_16 != i_17)))
                                                _fail(i_17);
                                              else
                                                s_16 = i_17;
                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_V_2, not_null(n_16), not_null(r_16)), not_null(s_16));
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
                          if(match_cons(w_16, sym_A_3))
                            {
                              x_16 = ATgetArgument(w_16, 0);
                              y_16 = ATgetArgument(w_16, 1);
                              u_16 = ATgetArgument(w_16, 2);
                              {
                                ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL;
                                if(((n_16 != NULL) && (n_16 != x_16)))
                                  _fail(x_16);
                                else
                                  n_16 = x_16;
                                {
                                  if(((o_16 != NULL) && (o_16 != y_16)))
                                    _fail(y_16);
                                  else
                                    o_16 = y_16;
                                  {
                                    if(((p_16 != NULL) && (p_16 != u_16)))
                                      _fail(u_16);
                                    else
                                      p_16 = u_16;
                                    {
                                      if(((q_16 != NULL) && (q_16 != z_16)))
                                        _fail(z_16);
                                      else
                                        q_16 = z_16;
                                      {
                                        t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(q_16));
                                        {
                                          t = InsLayout_1(t, x_18);
                                          {
                                            j_17 = t;
                                            k_15 :
                                            if(match_cons(j_17, sym__2))
                                              {
                                                k_17 = ATgetArgument(j_17, 0);
                                                l_17 = ATgetArgument(j_17, 1);
                                                {
                                                  if(((r_16 != NULL) && (r_16 != k_17)))
                                                    _fail(k_17);
                                                  else
                                                    r_16 = k_17;
                                                  {
                                                    if(((s_16 != NULL) && (s_16 != l_17)))
                                                      _fail(l_17);
                                                    else
                                                      s_16 = l_17;
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_A_3, not_null(n_16), not_null(o_16), not_null(r_16)), not_null(s_16));
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
                              if(match_cons(w_16, sym_R_2))
                                {
                                  x_16 = ATgetArgument(w_16, 0);
                                  y_16 = ATgetArgument(w_16, 1);
                                  {
                                    ATerm m_17 = NULL,n_17 = NULL,o_17 = NULL;
                                    if(((n_16 != NULL) && (n_16 != x_16)))
                                      _fail(x_16);
                                    else
                                      n_16 = x_16;
                                    {
                                      if(((p_16 != NULL) && (p_16 != y_16)))
                                        _fail(y_16);
                                      else
                                        p_16 = y_16;
                                      {
                                        if(((q_16 != NULL) && (q_16 != z_16)))
                                          _fail(z_16);
                                        else
                                          q_16 = z_16;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(q_16));
                                          {
                                            t = InsLayout_1(t, x_18);
                                            {
                                              m_17 = t;
                                              m_15 :
                                              if(match_cons(m_17, sym__2))
                                                {
                                                  n_17 = ATgetArgument(m_17, 0);
                                                  o_17 = ATgetArgument(m_17, 1);
                                                  {
                                                    if(((r_16 != NULL) && (r_16 != n_17)))
                                                      _fail(n_17);
                                                    else
                                                      r_16 = n_17;
                                                    {
                                                      if(((s_16 != NULL) && (s_16 != o_17)))
                                                        _fail(o_17);
                                                      else
                                                        s_16 = o_17;
                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_R_2, not_null(n_16), not_null(r_16)), not_null(s_16));
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
                                  if(match_cons(w_16, sym_ALT_2))
                                    {
                                      x_16 = ATgetArgument(w_16, 0);
                                      y_16 = ATgetArgument(w_16, 1);
                                      {
                                        ATerm p_17 = NULL,q_17 = NULL,r_17 = NULL;
                                        if(((n_16 != NULL) && (n_16 != x_16)))
                                          _fail(x_16);
                                        else
                                          n_16 = x_16;
                                        {
                                          if(((p_16 != NULL) && (p_16 != y_16)))
                                            _fail(y_16);
                                          else
                                            p_16 = y_16;
                                          {
                                            if(((q_16 != NULL) && (q_16 != z_16)))
                                              _fail(z_16);
                                            else
                                              q_16 = z_16;
                                            {
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(n_16), not_null(q_16));
                                              {
                                                t = InsLayout_1(t, x_18);
                                                {
                                                  p_17 = t;
                                                  q_15 :
                                                  if(match_cons(p_17, sym__2))
                                                    {
                                                      q_17 = ATgetArgument(p_17, 0);
                                                      r_17 = ATgetArgument(p_17, 1);
                                                      {
                                                        ATerm s_17 = NULL,t_17 = NULL,u_17 = NULL;
                                                        if(((o_16 != NULL) && (o_16 != q_17)))
                                                          _fail(q_17);
                                                        else
                                                          o_16 = q_17;
                                                        {
                                                          if(((s_16 != NULL) && (s_16 != r_17)))
                                                            _fail(r_17);
                                                          else
                                                            s_16 = r_17;
                                                          {
                                                            t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(q_16));
                                                            {
                                                              t = InsLayout_1(t, x_18);
                                                              {
                                                                s_17 = t;
                                                                p_15 :
                                                                if(match_cons(s_17, sym__2))
                                                                  {
                                                                    t_17 = ATgetArgument(s_17, 0);
                                                                    u_17 = ATgetArgument(s_17, 1);
                                                                    {
                                                                      if(((r_16 != NULL) && (r_16 != t_17)))
                                                                        _fail(t_17);
                                                                      else
                                                                        r_16 = t_17;
                                                                      {
                                                                        if(((t_16 != NULL) && (t_16 != u_17)))
                                                                          _fail(u_17);
                                                                        else
                                                                          t_16 = u_17;
                                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_ALT_2, not_null(o_16), not_null(r_16)), not_null(t_16));
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
                                      if(match_cons(w_16, sym_LBL_2))
                                        {
                                          x_16 = ATgetArgument(w_16, 0);
                                          y_16 = ATgetArgument(w_16, 1);
                                          {
                                            ATerm v_17 = NULL,w_17 = NULL,x_17 = NULL;
                                            if(((n_16 != NULL) && (n_16 != x_16)))
                                              _fail(x_16);
                                            else
                                              n_16 = x_16;
                                            {
                                              if(((p_16 != NULL) && (p_16 != y_16)))
                                                _fail(y_16);
                                              else
                                                p_16 = y_16;
                                              {
                                                if(((q_16 != NULL) && (q_16 != z_16)))
                                                  _fail(z_16);
                                                else
                                                  q_16 = z_16;
                                                {
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(q_16));
                                                  {
                                                    t = InsLayout_1(t, x_18);
                                                    {
                                                      v_17 = t;
                                                      s_15 :
                                                      if(match_cons(v_17, sym__2))
                                                        {
                                                          w_17 = ATgetArgument(v_17, 0);
                                                          x_17 = ATgetArgument(v_17, 1);
                                                          {
                                                            if(((r_16 != NULL) && (r_16 != w_17)))
                                                              _fail(w_17);
                                                            else
                                                              r_16 = w_17;
                                                            {
                                                              if(((s_16 != NULL) && (s_16 != x_17)))
                                                                _fail(x_17);
                                                              else
                                                                s_16 = x_17;
                                                              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LBL_2, not_null(n_16), not_null(r_16)), not_null(s_16));
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
                                          if(match_cons(w_16, sym_REF_2))
                                            {
                                              x_16 = ATgetArgument(w_16, 0);
                                              y_16 = ATgetArgument(w_16, 1);
                                              {
                                                ATerm y_17 = NULL,z_17 = NULL,a_18 = NULL;
                                                if(((n_16 != NULL) && (n_16 != x_16)))
                                                  _fail(x_16);
                                                else
                                                  n_16 = x_16;
                                                {
                                                  if(((p_16 != NULL) && (p_16 != y_16)))
                                                    _fail(y_16);
                                                  else
                                                    p_16 = y_16;
                                                  {
                                                    if(((q_16 != NULL) && (q_16 != z_16)))
                                                      _fail(z_16);
                                                    else
                                                      q_16 = z_16;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(q_16));
                                                      {
                                                        t = InsLayout_1(t, x_18);
                                                        {
                                                          y_17 = t;
                                                          u_15 :
                                                          if(match_cons(y_17, sym__2))
                                                            {
                                                              z_17 = ATgetArgument(y_17, 0);
                                                              a_18 = ATgetArgument(y_17, 1);
                                                              {
                                                                if(((r_16 != NULL) && (r_16 != z_17)))
                                                                  _fail(z_17);
                                                                else
                                                                  r_16 = z_17;
                                                                {
                                                                  if(((s_16 != NULL) && (s_16 != a_18)))
                                                                    _fail(a_18);
                                                                  else
                                                                    s_16 = a_18;
                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_REF_2, not_null(n_16), not_null(r_16)), not_null(s_16));
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
                                              if(match_cons(w_16, sym_L_2))
                                                {
                                                  x_16 = ATgetArgument(w_16, 0);
                                                  y_16 = ATgetArgument(w_16, 1);
                                                  {
                                                    ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL;
                                                    if(((n_16 != NULL) && (n_16 != x_16)))
                                                      _fail(x_16);
                                                    else
                                                      n_16 = x_16;
                                                    {
                                                      if(((p_16 != NULL) && (p_16 != y_16)))
                                                        _fail(y_16);
                                                      else
                                                        p_16 = y_16;
                                                      {
                                                        if(((q_16 != NULL) && (q_16 != z_16)))
                                                          _fail(z_16);
                                                        else
                                                          q_16 = z_16;
                                                        {
                                                          t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(q_16));
                                                          {
                                                            t = InsLayout_1(t, x_18);
                                                            {
                                                              b_18 = t;
                                                              w_15 :
                                                              if(match_cons(b_18, sym__2))
                                                                {
                                                                  c_18 = ATgetArgument(b_18, 0);
                                                                  d_18 = ATgetArgument(b_18, 1);
                                                                  {
                                                                    if(((r_16 != NULL) && (r_16 != c_18)))
                                                                      _fail(c_18);
                                                                    else
                                                                      r_16 = c_18;
                                                                    {
                                                                      if(((s_16 != NULL) && (s_16 != d_18)))
                                                                        _fail(d_18);
                                                                      else
                                                                        s_16 = d_18;
                                                                      t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_L_2, not_null(n_16), not_null(r_16)), not_null(s_16));
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
                                                  if(match_cons(w_16, sym_LNAT_2))
                                                    {
                                                      x_16 = ATgetArgument(w_16, 0);
                                                      y_16 = ATgetArgument(w_16, 1);
                                                      {
                                                        ATerm e_18 = NULL,f_18 = NULL,g_18 = NULL;
                                                        if(((n_16 != NULL) && (n_16 != x_16)))
                                                          _fail(x_16);
                                                        else
                                                          n_16 = x_16;
                                                        {
                                                          if(((p_16 != NULL) && (p_16 != y_16)))
                                                            _fail(y_16);
                                                          else
                                                            p_16 = y_16;
                                                          {
                                                            if(((q_16 != NULL) && (q_16 != z_16)))
                                                              _fail(z_16);
                                                            else
                                                              q_16 = z_16;
                                                            {
                                                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_16), not_null(q_16));
                                                              {
                                                                t = InsLayout_1(t, x_18);
                                                                {
                                                                  e_18 = t;
                                                                  y_15 :
                                                                  if(match_cons(e_18, sym__2))
                                                                    {
                                                                      f_18 = ATgetArgument(e_18, 0);
                                                                      g_18 = ATgetArgument(e_18, 1);
                                                                      {
                                                                        if(((r_16 != NULL) && (r_16 != f_18)))
                                                                          _fail(f_18);
                                                                        else
                                                                          r_16 = f_18;
                                                                        {
                                                                          if(((s_16 != NULL) && (s_16 != g_18)))
                                                                            _fail(g_18);
                                                                          else
                                                                            s_16 = g_18;
                                                                          t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_LNAT_2, not_null(n_16), not_null(r_16)), not_null(s_16));
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
          LocalPopChoice(j_11);
        }
      else
        {
          t = e_11;
          {
            ATerm k_11 = t;
            int l_11 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm g_1 (ATerm t)
                {
                  t = Cons_2(t, _id, _id);
                  return(t);
                }
                t = _2(t, g_1, _id);
                t = InsLayout_1(t, x_18);
                LocalPopChoice(l_11);
              }
            else
              {
                t = k_11;
                {
                }
              }
          }
        }
      return(t);
    }
    t = x_18(t);
    {
      ATerm h_1 (ATerm t)
      {
        ATerm i_1 (ATerm t)
        {
          ATerm h_18 = NULL;
          t = is_list_0(t);
          {
            h_18 = t;
            t = (ATerm) ATmakeAppl(sym_HV_2, (ATerm)ATempty, not_null(h_18));
          }
          return(t);
        }
        t = try_1(t, i_1);
        return(t);
      }
      t = _2(t, h_1, _id);
      {
        j_18 = t;
        h_16 :
        if(match_cons(j_18, sym__2))
          {
            k_18 = ATgetArgument(j_18, 0);
            l_18 = ATgetArgument(j_18, 1);
            i_16 :
            if(((ATgetType(l_18) == AT_LIST) && ((ATermList) l_18 != ATempty)))
              {
                m_18 = ATgetFirst((ATermList) l_18);
                n_18 = (ATerm) ATgetNext((ATermList) l_18);
                {
                  ATerm r_18 = NULL,s_18 = NULL,t_18 = NULL;
                  ATerm w_19 (ATerm t)
                  {
                    t = (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATinsert(ATempty, term_x_10), not_null(t_18));
                    return(t);
                  }
                  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_18)), not_null(k_18)), not_null(j_16));
                  {
                    ATerm j_1 (ATerm t)
                    {
                      ATerm m_11 = t;
                      int x_11 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm y_11 = t;
                          if((PushChoice() == 0))
                            {
                              t = layout_1(t, _id);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = y_11;
                            }
                          LocalPopChoice(x_11);
                        }
                      else
                        {
                          t = m_11;
                          {
                            ATerm z_11 = t;
                            int a_12 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = layout_1(t, _id);
                                {
                                  ATerm k_1 (ATerm t)
                                  {
                                    t = term_s_10;
                                    return(t);
                                  }
                                  t = has_option_1(t, k_1);
                                  {
                                    t = has_layout_0(t);
                                    t = layout2box_0(t);
                                  }
                                }
                                LocalPopChoice(a_12);
                              }
                            else
                              {
                                t = z_11;
                                {
                                  t = layout_1(t, _id);
                                  {
                                    ATerm d_12 = t;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm l_1 (ATerm t)
                                        {
                                          t = term_s_10;
                                          return(t);
                                        }
                                        t = has_option_1(t, l_1);
                                        PopChoice();
                                        _fail(t);
                                      }
                                    else
                                      {
                                        t = d_12;
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
                        t_18 = t;
                        f_16 :
                        if(((ATgetType(t_18) == AT_LIST) && ((ATermList) t_18 != ATempty)))
                          {
                            r_18 = ATgetFirst((ATermList) t_18);
                            s_18 = (ATerm) ATgetNext((ATermList) t_18);
                            g_16 :
                            if(((ATermList) s_18 == ATempty))
                              {
                                {
                                  ATerm i_12 = t;
                                  int j_12 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = not_null(r_18);
                                      LocalPopChoice(j_12);
                                    }
                                  else
                                    {
                                      t = i_12;
                                      t = w_19(t);
                                    }
                                }
                              }
                            else
                              {
                                t = w_19(t);
                              }
                          }
                        else
                          {
                            t = w_19(t);
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
ATerm layout_1 (ATerm t, ATerm t_94 (ATerm))
{
  ATerm c_20 = NULL,d_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym_layout_1))
    {
      d_20 = ATgetArgument(c_20, 0);
      {
        ATerm g_20 = NULL,i_20 = NULL;
        ATerm h_20 = NULL;
        t = SSLgetAnnotations(not_null(c_20));
        {
          h_20 = t;
          if(((g_20 != NULL) && (g_20 != h_20)))
            _fail(h_20);
          else
            g_20 = h_20;
        }
        {
          t = not_null(d_20);
          {
            ATerm k_20 = NULL;
            t = t_94(t);
            {
              i_20 = t;
              {
                ATerm l_20 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, not_null(i_20)), not_null(g_20));
                {
                  l_20 = t;
                  if(((k_20 != NULL) && (k_20 != l_20)))
                    _fail(l_20);
                  else
                    k_20 = l_20;
                }
                t = not_null(k_20);
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
ATerm collect_p__1 (ATerm t, ATerm u_95 (ATerm))
{
  ATerm t_20 (ATerm t)
  {
    ATerm k_12 = t;
    int l_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_20 = NULL;
        t = u_95(t);
        {
          r_20 = t;
          t = (ATerm) ATinsert(ATempty, not_null(r_20));
        }
        LocalPopChoice(l_12);
      }
    else
      {
        t = k_12;
        {
          ATerm m_1 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, m_1, conc_0, t_20);
        }
      }
    return(t);
  }
  t = t_20(t);
  return(t);
}
ATerm amb_1 (ATerm t, ATerm o_87 (ATerm))
{
  ATerm a_21 = NULL,b_21 = NULL;
  a_21 = t;
  z_20 :
  if(match_cons(a_21, sym_amb_1))
    {
      b_21 = ATgetArgument(a_21, 0);
      {
        ATerm e_21 = NULL,g_21 = NULL;
        ATerm f_21 = NULL;
        t = SSLgetAnnotations(not_null(a_21));
        {
          f_21 = t;
          if(((e_21 != NULL) && (e_21 != f_21)))
            _fail(f_21);
          else
            e_21 = f_21;
        }
        {
          t = not_null(b_21);
          {
            ATerm i_21 = NULL;
            t = o_87(t);
            {
              g_21 = t;
              {
                ATerm j_21 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(g_21)), not_null(e_21));
                {
                  j_21 = t;
                  if(((i_21 != NULL) && (i_21 != j_21)))
                    _fail(j_21);
                  else
                    i_21 = j_21;
                }
                t = not_null(i_21);
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
ATerm fatal_ambiguity_0 (ATerm t)
{
  t = amb_1(t, _id);
  {
    t = (ATerm) ATinsert(ATempty, term_m_12);
    t = fatal_error_0(t);
  }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm s_21 = NULL,t_21 = NULL;
  ATerm n_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_12);
    }
  else
    {
      t = n_12;
      {
        ATerm q_12 = t;
        int r_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_21 = NULL,v_21 = NULL,w_21 = NULL;
            ATerm z_21 (ATerm t)
            {
              if(((s_21 != NULL) && (s_21 != v_21)))
                _fail(v_21);
              else
                s_21 = v_21;
              {
                if(((t_21 != NULL) && (t_21 != w_21)))
                  _fail(w_21);
                else
                  t_21 = w_21;
                {
                  t = not_null(s_21);
                  {
                    t = is_list_0(t);
                    {
                      t = (ATerm) ATmakeAppl(sym__2, not_null(s_21), not_null(t_21));
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
            u_21 = t;
            q_21 :
            if(((ATgetType(u_21) == AT_LIST) && ((ATermList) u_21 != ATempty)))
              {
                v_21 = ATgetFirst((ATermList) u_21);
                w_21 = (ATerm) ATgetNext((ATermList) u_21);
                r_21 :
                if(((ATermList) v_21 == ATempty))
                  {
                    {
                      ATerm s_12 = t;
                      int k_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          if(((t_21 != NULL) && (t_21 != w_21)))
                            _fail(w_21);
                          else
                            t_21 = w_21;
                          {
                            ATerm n_1 (ATerm t)
                            {
                              t = not_null(t_21);
                              t = flat_list_0(t);
                              return(t);
                            }
                            t = Cons_2(t, Nil_0, n_1);
                          }
                          LocalPopChoice(k_13);
                        }
                      else
                        {
                          t = s_12;
                          t = z_21(t);
                        }
                    }
                  }
                else
                  {
                    t = z_21(t);
                  }
              }
            else
              {
                _fail(t);
              }
            LocalPopChoice(r_12);
          }
        else
          {
            t = q_12;
            t = Cons_2(t, _id, flat_list_0);
          }
      }
    }
  return(t);
}
ATerm Instantiate_1 (ATerm t, ATerm z_0 (ATerm))
{
  ATerm i_22 = NULL,j_22 = NULL,k_22 = NULL;
  j_22 = t;
  h_22 :
  if(match_cons(j_22, sym_Arg2_2))
    {
      k_22 = ATgetArgument(j_22, 0);
      i_22 = ATgetArgument(j_22, 1);
      {
        ATerm n_22 = NULL,o_22 = NULL;
        ATerm p_22 = NULL,r_22 = NULL;
        ATerm q_22 = NULL;
        t = term_n_9;
        {
          t = z_0(t);
          {
            q_22 = t;
            if(((p_22 != NULL) && (p_22 != q_22)))
              _fail(q_22);
            else
              p_22 = q_22;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(p_22));
          {
            ATerm s_22 = NULL;
            t = index_0(t);
            {
              r_22 = t;
              {
                if(((n_22 != NULL) && (n_22 != r_22)))
                  _fail(r_22);
                else
                  n_22 = r_22;
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(i_22), not_null(n_22));
                  {
                    t = index_0(t);
                    {
                      s_22 = t;
                      if(((o_22 != NULL) && (o_22 != s_22)))
                        _fail(s_22);
                      else
                        o_22 = s_22;
                    }
                  }
                }
              }
            }
          }
        }
        t = not_null(o_22);
      }
    }
  else
    {
      if(match_cons(j_22, sym_Arg_1))
        {
          k_22 = ATgetArgument(j_22, 0);
          {
            ATerm u_22 = NULL;
            ATerm v_22 = NULL,x_22 = NULL;
            ATerm w_22 = NULL;
            t = term_n_9;
            {
              t = z_0(t);
              {
                w_22 = t;
                if(((v_22 != NULL) && (v_22 != w_22)))
                  _fail(w_22);
                else
                  v_22 = w_22;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(k_22), not_null(v_22));
              {
                t = index_0(t);
                {
                  x_22 = t;
                  if(((u_22 != NULL) && (u_22 != x_22)))
                    _fail(x_22);
                  else
                    u_22 = x_22;
                }
              }
            }
            t = not_null(u_22);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm h_118 (ATerm))
{
  ATerm o_1 (ATerm t)
  {
    t = bottomup_1(t, h_118);
    return(t);
  }
  t = _all(t, o_1);
  t = h_118(t);
  return(t);
}
ATerm instantiate_0 (ATerm t)
{
  ATerm i_23 = NULL,j_23 = NULL,k_23 = NULL;
  i_23 = t;
  h_23 :
  if(match_cons(i_23, sym__2))
    {
      j_23 = ATgetArgument(i_23, 0);
      k_23 = ATgetArgument(i_23, 1);
      {
        ATerm n_23 = NULL;
        ATerm o_23 = NULL;
        t = not_null(j_23);
        {
          ATerm p_1 (ATerm t)
          {
            ATerm q_1 (ATerm t)
            {
              ATerm k_14 = t;
              int l_14 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm r_1 (ATerm t)
                  {
                    t = not_null(k_23);
                    return(t);
                  }
                  t = Instantiate_1(t, r_1);
                  LocalPopChoice(l_14);
                }
              else
                {
                  t = k_14;
                  t = flat_list_0(t);
                }
              return(t);
            }
            t = try_1(t, q_1);
            return(t);
          }
          t = bottomup_1(t, p_1);
          {
            o_23 = t;
            if(((n_23 != NULL) && (n_23 != o_23)))
              _fail(o_23);
            else
              n_23 = o_23;
          }
        }
        t = not_null(n_23);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Arg2_2 (ATerm t, ATerm x_0 (ATerm), ATerm y_0 (ATerm))
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL;
  c_24 = t;
  b_24 :
  if(match_cons(c_24, sym_Arg2_2))
    {
      d_24 = ATgetArgument(c_24, 0);
      e_24 = ATgetArgument(c_24, 1);
      {
        ATerm m_14 = t;
        int n_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_24 = NULL,k_24 = NULL;
            ATerm j_24 = NULL;
            t = SSLgetAnnotations(not_null(c_24));
            {
              j_24 = t;
              if(((i_24 != NULL) && (i_24 != j_24)))
                _fail(j_24);
              else
                i_24 = j_24;
            }
            {
              t = not_null(d_24);
              {
                ATerm m_24 = NULL;
                t = x_0(t);
                {
                  k_24 = t;
                  {
                    t = not_null(e_24);
                    {
                      ATerm o_24 = NULL;
                      t = y_0(t);
                      {
                        m_24 = t;
                        {
                          ATerm p_24 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, not_null(k_24), not_null(m_24)), not_null(i_24));
                          {
                            p_24 = t;
                            if(((o_24 != NULL) && (o_24 != p_24)))
                              _fail(p_24);
                            else
                              o_24 = p_24;
                          }
                          t = not_null(o_24);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(n_14);
          }
        else
          {
            t = m_14;
            {
              ATerm t_24 = NULL,v_24 = NULL;
              ATerm u_24 = NULL;
              t = SSLgetAnnotations(not_null(c_24));
              {
                u_24 = t;
                if(((t_24 != NULL) && (t_24 != u_24)))
                  _fail(u_24);
                else
                  t_24 = u_24;
              }
              {
                t = not_null(d_24);
                {
                  ATerm x_24 = NULL;
                  t = x_0(t);
                  {
                    v_24 = t;
                    {
                      t = not_null(e_24);
                      {
                        ATerm z_24 = NULL;
                        t = y_0(t);
                        {
                          x_24 = t;
                          {
                            ATerm a_25 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg2_2, not_null(v_24), not_null(x_24)), not_null(t_24));
                            {
                              a_25 = t;
                              if(((z_24 != NULL) && (z_24 != a_25)))
                                _fail(a_25);
                              else
                                z_24 = a_25;
                            }
                            t = not_null(z_24);
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
ATerm filter_literals_0 (ATerm t)
{
  ATerm c_26 = NULL,d_26 = NULL,e_26 = NULL;
  c_26 = t;
  b_26 :
  if(match_cons(c_26, sym__2))
    {
      d_26 = ATgetArgument(c_26, 0);
      e_26 = ATgetArgument(c_26, 1);
      {
        ATerm h_26 = NULL,i_26 = NULL;
        ATerm i_27 = NULL,j_27 = NULL,k_27 = NULL;
        ATerm s_1 (ATerm t)
        {
          ATerm t_1 (ATerm t)
          {
            ATerm o_14 = t;
            int p_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Arg_1(t, _id);
                LocalPopChoice(p_14);
              }
            else
              {
                t = o_14;
                {
                  ATerm q_14 = t;
                  int r_14 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = Arg2_2(t, _id, _id);
                      LocalPopChoice(r_14);
                    }
                  else
                    {
                      t = q_14;
                      t = S_1(t, _id);
                    }
                }
              }
            return(t);
          }
          t = collect_p__1(t, t_1);
          return(t);
        }
        t = _2(t, s_1, _id);
        {
          ATerm m_27 (ATerm t)
          {
            ATerm j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL,n_26 = NULL,o_26 = NULL,p_26 = NULL;
            ATerm t_14 = t;
            int u_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = _2(t, Nil_0, Nil_0);
                LocalPopChoice(u_14);
              }
            else
              {
                t = t_14;
                {
                  ATerm q_26 = NULL,r_26 = NULL,s_26 = NULL,t_26 = NULL,u_26 = NULL,v_26 = NULL,w_26 = NULL,x_26 = NULL,y_26 = NULL;
                  ATerm p_27 (ATerm t)
                  {
                    ATerm f_27 = NULL,g_27 = NULL,h_27 = NULL;
                    if(((p_26 != NULL) && (p_26 != u_26)))
                      _fail(u_26);
                    else
                      p_26 = u_26;
                    {
                      if(((k_26 != NULL) && (k_26 != v_26)))
                        _fail(v_26);
                      else
                        k_26 = v_26;
                      {
                        if(((o_26 != NULL) && (o_26 != x_26)))
                          _fail(x_26);
                        else
                          o_26 = x_26;
                        {
                          if(((m_26 != NULL) && (m_26 != y_26)))
                            _fail(y_26);
                          else
                            m_26 = y_26;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), not_null(m_26));
                            {
                              t = m_27(t);
                              {
                                f_27 = t;
                                u_25 :
                                if(match_cons(f_27, sym__2))
                                  {
                                    g_27 = ATgetArgument(f_27, 0);
                                    h_27 = ATgetArgument(f_27, 1);
                                    {
                                      if(((l_26 != NULL) && (l_26 != g_27)))
                                        _fail(g_27);
                                      else
                                        l_26 = g_27;
                                      {
                                        if(((n_26 != NULL) && (n_26 != h_27)))
                                          _fail(h_27);
                                        else
                                          n_26 = h_27;
                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_26)), not_null(p_26)), not_null(n_26));
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
                  s_26 = t;
                  v_25 :
                  if(match_cons(s_26, sym__2))
                    {
                      t_26 = ATgetArgument(s_26, 0);
                      w_26 = ATgetArgument(s_26, 1);
                      w_25 :
                      if(((ATgetType(t_26) == AT_LIST) && ((ATermList) t_26 != ATempty)))
                        {
                          u_26 = ATgetFirst((ATermList) t_26);
                          v_26 = (ATerm) ATgetNext((ATermList) t_26);
                          x_25 :
                          if(((ATgetType(w_26) == AT_LIST) && ((ATermList) w_26 != ATempty)))
                            {
                              x_26 = ATgetFirst((ATermList) w_26);
                              y_26 = (ATerm) ATgetNext((ATermList) w_26);
                              y_25 :
                              if(match_cons(u_26, sym_Arg_1))
                                {
                                  q_26 = ATgetArgument(u_26, 0);
                                  {
                                    ATerm v_14 = t;
                                    int w_14 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm z_26 = NULL,a_27 = NULL,b_27 = NULL;
                                        if(((j_26 != NULL) && (j_26 != q_26)))
                                          _fail(q_26);
                                        else
                                          j_26 = q_26;
                                        {
                                          if(((k_26 != NULL) && (k_26 != v_26)))
                                            _fail(v_26);
                                          else
                                            k_26 = v_26;
                                          {
                                            if(((o_26 != NULL) && (o_26 != x_26)))
                                              _fail(x_26);
                                            else
                                              o_26 = x_26;
                                            {
                                              if(((m_26 != NULL) && (m_26 != y_26)))
                                                _fail(y_26);
                                              else
                                                m_26 = y_26;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), not_null(m_26));
                                                {
                                                  t = m_27(t);
                                                  {
                                                    z_26 = t;
                                                    q_25 :
                                                    if(match_cons(z_26, sym__2))
                                                      {
                                                        a_27 = ATgetArgument(z_26, 0);
                                                        b_27 = ATgetArgument(z_26, 1);
                                                        {
                                                          if(((l_26 != NULL) && (l_26 != a_27)))
                                                            _fail(a_27);
                                                          else
                                                            l_26 = a_27;
                                                          {
                                                            if(((n_26 != NULL) && (n_26 != b_27)))
                                                              _fail(b_27);
                                                            else
                                                              n_26 = b_27;
                                                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_26)), (ATerm) ATmakeAppl(sym_Arg_1, not_null(j_26))), (ATerm) ATinsert(CheckATermList(not_null(n_26)), not_null(o_26)));
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
                                        LocalPopChoice(w_14);
                                      }
                                    else
                                      {
                                        t = v_14;
                                        t = p_27(t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(u_26, sym_Arg2_2))
                                    {
                                      q_26 = ATgetArgument(u_26, 0);
                                      r_26 = ATgetArgument(u_26, 1);
                                      {
                                        ATerm x_14 = t;
                                        int y_14 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm c_27 = NULL,d_27 = NULL,e_27 = NULL;
                                            if(((j_26 != NULL) && (j_26 != q_26)))
                                              _fail(q_26);
                                            else
                                              j_26 = q_26;
                                            {
                                              if(((h_26 != NULL) && (h_26 != r_26)))
                                                _fail(r_26);
                                              else
                                                h_26 = r_26;
                                              {
                                                if(((k_26 != NULL) && (k_26 != v_26)))
                                                  _fail(v_26);
                                                else
                                                  k_26 = v_26;
                                                {
                                                  if(((o_26 != NULL) && (o_26 != x_26)))
                                                    _fail(x_26);
                                                  else
                                                    o_26 = x_26;
                                                  {
                                                    if(((m_26 != NULL) && (m_26 != y_26)))
                                                      _fail(y_26);
                                                    else
                                                      m_26 = y_26;
                                                    {
                                                      t = (ATerm) ATmakeAppl(sym__2, not_null(k_26), not_null(m_26));
                                                      {
                                                        t = m_27(t);
                                                        {
                                                          c_27 = t;
                                                          s_25 :
                                                          if(match_cons(c_27, sym__2))
                                                            {
                                                              d_27 = ATgetArgument(c_27, 0);
                                                              e_27 = ATgetArgument(c_27, 1);
                                                              {
                                                                if(((l_26 != NULL) && (l_26 != d_27)))
                                                                  _fail(d_27);
                                                                else
                                                                  l_26 = d_27;
                                                                {
                                                                  if(((n_26 != NULL) && (n_26 != e_27)))
                                                                    _fail(e_27);
                                                                  else
                                                                    n_26 = e_27;
                                                                  t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_26)), (ATerm) ATmakeAppl(sym_Arg2_2, not_null(j_26), not_null(h_26))), (ATerm) ATinsert(CheckATermList(not_null(n_26)), not_null(o_26)));
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
                                            LocalPopChoice(y_14);
                                          }
                                        else
                                          {
                                            t = x_14;
                                            t = p_27(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = p_27(t);
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
          t = m_27(t);
          {
            i_27 = t;
            a_26 :
            if(match_cons(i_27, sym__2))
              {
                j_27 = ATgetArgument(i_27, 0);
                k_27 = ATgetArgument(i_27, 1);
                if(((i_26 != NULL) && (i_26 != k_27)))
                  _fail(k_27);
                else
                  i_26 = k_27;
              }
            else
              {
                _fail(t);
              }
          }
        }
        t = (ATerm) ATmakeAppl(sym__2, not_null(d_26), not_null(i_26));
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
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym__2))
    {
      y_27 = ATgetArgument(x_27, 0);
      z_27 = ATgetArgument(x_27, 1);
      {
        ATerm c_28 = NULL;
        ATerm d_28 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(y_27), (ATerm) ATinsert(ATempty, not_null(z_27)));
        {
          t = conc_0(t);
          {
            d_28 = t;
            if(((c_28 != NULL) && (c_28 != d_28)))
              _fail(d_28);
            else
              c_28 = d_28;
          }
        }
        t = not_null(c_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm instantiate_list_1 (ATerm t, ATerm q_95 (ATerm))
{
  ATerm q_28 (ATerm t)
  {
    ATerm j_28 = NULL,k_28 = NULL;
    ATerm z_14 = t;
    int a_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_15);
      }
    else
      {
        t = z_14;
        {
          ATerm l_28 = NULL,m_28 = NULL,n_28 = NULL;
          l_28 = t;
          i_28 :
          if(((ATgetType(l_28) == AT_LIST) && ((ATermList) l_28 != ATempty)))
            {
              m_28 = ATgetFirst((ATermList) l_28);
              n_28 = (ATerm) ATgetNext((ATermList) l_28);
              {
                if(((j_28 != NULL) && (j_28 != m_28)))
                  _fail(m_28);
                else
                  j_28 = m_28;
                {
                  if(((k_28 != NULL) && (k_28 != n_28)))
                    _fail(n_28);
                  else
                    k_28 = n_28;
                  {
                    ATerm u_1 (ATerm t)
                    {
                      ATerm o_28 = NULL;
                      ATerm p_28 = NULL;
                      t = term_n_9;
                      {
                        t = q_95(t);
                        {
                          p_28 = t;
                          if(((o_28 != NULL) && (o_28 != p_28)))
                            _fail(p_28);
                          else
                            o_28 = p_28;
                        }
                      }
                      {
                        t = (ATerm) ATmakeAppl(sym__2, not_null(o_28), (ATerm) ATinsert(ATempty, not_null(j_28)));
                        t = instantiate_0(t);
                      }
                      return(t);
                    }
                    ATerm v_1 (ATerm t)
                    {
                      t = not_null(k_28);
                      t = q_28(t);
                      return(t);
                    }
                    t = Cons_2(t, u_1, v_1);
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
  t = q_28(t);
  return(t);
}
ATerm build_list_0 (ATerm t)
{
  ATerm d_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL,h_29 = NULL;
  d_29 = t;
  c_29 :
  if(match_cons(d_29, sym__4))
    {
      e_29 = ATgetArgument(d_29, 0);
      f_29 = ATgetArgument(d_29, 1);
      g_29 = ATgetArgument(d_29, 2);
      h_29 = ATgetArgument(d_29, 3);
      {
        ATerm m_29 = NULL,n_29 = NULL,o_29 = NULL,p_29 = NULL,q_29 = NULL;
        ATerm r_29 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(g_29), not_null(h_29));
        {
          ATerm u_29 = NULL;
          t = make_path_0(t);
          {
            r_29 = t;
            {
              if(((n_29 != NULL) && (n_29 != r_29)))
                _fail(r_29);
              else
                n_29 = r_29;
              {
                t = not_null(e_29);
                {
                  ATerm b_15 = t;
                  int c_15 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm w_1 (ATerm t)
                      {
                        ATerm s_29 = NULL;
                        s_29 = t;
                        if(((m_29 != NULL) && (m_29 != s_29)))
                          _fail(s_29);
                        else
                          m_29 = s_29;
                        return(t);
                      }
                      t = iter_1(t, w_1);
                      LocalPopChoice(c_15);
                    }
                  else
                    {
                      t = b_15;
                      {
                        ATerm x_1 (ATerm t)
                        {
                          ATerm t_29 = NULL;
                          t_29 = t;
                          if(((m_29 != NULL) && (m_29 != t_29)))
                            _fail(t_29);
                          else
                            m_29 = t_29;
                          return(t);
                        }
                        t = iter_star_1(t, x_1);
                      }
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(e_29), not_null(n_29));
                    {
                      ATerm a_30 = NULL;
                      t = get_pp_entry_0(t);
                      {
                        u_29 = t;
                        {
                          if(((o_29 != NULL) && (o_29 != u_29)))
                            _fail(u_29);
                          else
                            o_29 = u_29;
                          {
                            t = not_null(f_29);
                            {
                              ATerm b_30 = NULL;
                              ATerm y_1 (ATerm t)
                              {
                                ATerm v_29 = NULL;
                                ATerm x_29 = NULL;
                                v_29 = t;
                                {
                                  ATerm y_29 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__4, not_null(m_29), not_null(v_29), not_null(n_29), not_null(h_29));
                                  {
                                    t = symbol2abox_0(t);
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
                                return(t);
                              }
                              t = map_1(t, y_1);
                              {
                                a_30 = t;
                                {
                                  if(((p_29 != NULL) && (p_29 != a_30)))
                                    _fail(a_30);
                                  else
                                    p_29 = a_30;
                                  {
                                    t = not_null(p_29);
                                    {
                                      ATerm z_1 (ATerm t)
                                      {
                                        t = not_null(o_29);
                                        return(t);
                                      }
                                      t = instantiate_list_1(t, z_1);
                                      {
                                        b_30 = t;
                                        if(((q_29 != NULL) && (q_29 != b_30)))
                                          _fail(b_30);
                                        else
                                          q_29 = b_30;
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
        t = not_null(q_29);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm instantiate_sep_list_1 (ATerm t, ATerm s_95 (ATerm))
{
  ATerm z_30 (ATerm t)
  {
    ATerm p_30 = NULL,q_30 = NULL,r_30 = NULL;
    ATerm d_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = d_15;
        {
          ATerm h_15 = t;
          int j_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Cons_2(t, _id, Nil_0);
              LocalPopChoice(j_15);
            }
          else
            {
              t = h_15;
              {
                ATerm s_30 = NULL,t_30 = NULL,u_30 = NULL,v_30 = NULL,w_30 = NULL;
                s_30 = t;
                n_30 :
                if(((ATgetType(s_30) == AT_LIST) && ((ATermList) s_30 != ATempty)))
                  {
                    t_30 = ATgetFirst((ATermList) s_30);
                    u_30 = (ATerm) ATgetNext((ATermList) s_30);
                    o_30 :
                    if(((ATgetType(u_30) == AT_LIST) && ((ATermList) u_30 != ATempty)))
                      {
                        v_30 = ATgetFirst((ATermList) u_30);
                        w_30 = (ATerm) ATgetNext((ATermList) u_30);
                        {
                          if(((p_30 != NULL) && (p_30 != t_30)))
                            _fail(t_30);
                          else
                            p_30 = t_30;
                          {
                            if(((q_30 != NULL) && (q_30 != v_30)))
                              _fail(v_30);
                            else
                              q_30 = v_30;
                            {
                              if(((r_30 != NULL) && (r_30 != w_30)))
                                _fail(w_30);
                              else
                                r_30 = w_30;
                              {
                                ATerm a_2 (ATerm t)
                                {
                                  ATerm x_30 = NULL;
                                  ATerm y_30 = NULL;
                                  t = term_n_9;
                                  {
                                    t = s_95(t);
                                    {
                                      y_30 = t;
                                      if(((x_30 != NULL) && (x_30 != y_30)))
                                        _fail(y_30);
                                      else
                                        x_30 = y_30;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_30), (ATerm) ATinsert(ATinsert(ATempty, not_null(q_30)), not_null(p_30)));
                                    t = instantiate_0(t);
                                  }
                                  return(t);
                                }
                                ATerm b_2 (ATerm t)
                                {
                                  t = not_null(r_30);
                                  t = z_30(t);
                                  return(t);
                                }
                                t = Cons_2(t, a_2, b_2);
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
  t = z_30(t);
  return(t);
}
ATerm mod_0 (ATerm t)
{
  ATerm e_31 = NULL,f_31 = NULL,g_31 = NULL;
  e_31 = t;
  d_31 :
  if(match_cons(e_31, sym__2))
    {
      f_31 = ATgetArgument(e_31, 0);
      g_31 = ATgetArgument(e_31, 1);
      t = SSL_mod(not_null(f_31), not_null(g_31));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm even_0 (ATerm t)
{
  ATerm m_31 = NULL;
  ATerm o_31 = NULL;
  m_31 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_31), term_l_15);
    {
      t = mod_0(t);
      {
        o_31 = t;
        l_31 :
        if(!(match_int(o_31, 0)))
          {
            _fail(t);
          }
      }
    }
  }
  return(t);
}
ATerm BuildSepList_4 (ATerm t, ATerm z_122 (ATerm), ATerm a_123 (ATerm), ATerm b_123 (ATerm), ATerm c_123 (ATerm))
{
  ATerm z_31 = NULL,a_32 = NULL,b_32 = NULL;
  z_31 = t;
  y_31 :
  if(match_cons(z_31, sym__2))
    {
      a_32 = ATgetArgument(z_31, 0);
      b_32 = ATgetArgument(z_31, 1);
      {
        ATerm e_32 = NULL;
        ATerm r_32 = NULL;
        ATerm n_15 = t;
        int o_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_32 = NULL,h_32 = NULL;
            t = not_null(a_32);
            {
              t = even_0(t);
              {
                ATerm r_15;
                r_15 = t;
                {
                  ATerm g_32 = NULL;
                  t = term_n_9;
                  {
                    t = a_123(t);
                    {
                      g_32 = t;
                      if(((f_32 != NULL) && (f_32 != g_32)))
                        _fail(g_32);
                      else
                        f_32 = g_32;
                    }
                  }
                }
                t = r_15;
                {
                  ATerm i_32 = NULL;
                  t = term_n_9;
                  {
                    t = b_123(t);
                    {
                      i_32 = t;
                      if(((h_32 != NULL) && (h_32 != i_32)))
                        _fail(i_32);
                      else
                        h_32 = i_32;
                    }
                  }
                  {
                    t = (ATerm) ATmakeAppl(sym__4, not_null(f_32), not_null(b_32), not_null(h_32), term_l_15);
                    {
                      t = symbol2abox_0(t);
                      {
                        ATerm c_2 (ATerm t)
                        {
                          ATerm j_32 = NULL;
                          j_32 = t;
                          {
                            ATerm t_15 = t;
                            if((PushChoice() == 0))
                              {
                                t = is_list_0(t);
                                PopChoice();
                                _fail(t);
                              }
                            else
                              {
                                t = t_15;
                              }
                            t = (ATerm) ATinsert(ATempty, not_null(j_32));
                          }
                          return(t);
                        }
                        t = try_1(t, c_2);
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(o_15);
          }
        else
          {
            t = n_15;
            {
              ATerm l_32 = NULL,n_32 = NULL;
              ATerm v_15;
              v_15 = t;
              {
                ATerm m_32 = NULL;
                t = term_n_9;
                {
                  t = z_122(t);
                  {
                    m_32 = t;
                    if(((l_32 != NULL) && (l_32 != m_32)))
                      _fail(m_32);
                    else
                      l_32 = m_32;
                  }
                }
              }
              t = v_15;
              {
                ATerm o_32 = NULL;
                t = term_n_9;
                {
                  t = b_123(t);
                  {
                    o_32 = t;
                    if(((n_32 != NULL) && (n_32 != o_32)))
                      _fail(o_32);
                    else
                      n_32 = o_32;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__4, not_null(l_32), not_null(b_32), not_null(n_32), term_x_15);
                  {
                    t = symbol2abox_0(t);
                    {
                      ATerm d_2 (ATerm t)
                      {
                        ATerm p_32 = NULL;
                        p_32 = t;
                        {
                          ATerm b_16 = t;
                          if((PushChoice() == 0))
                            {
                              t = is_list_0(t);
                              PopChoice();
                              _fail(t);
                            }
                          else
                            {
                              t = b_16;
                            }
                          t = (ATerm) ATinsert(ATempty, not_null(p_32));
                        }
                        return(t);
                      }
                      t = try_1(t, d_2);
                    }
                  }
                }
              }
            }
          }
        {
          r_32 = t;
          if(((e_32 != NULL) && (e_32 != r_32)))
            _fail(r_32);
          else
            e_32 = r_32;
        }
        t = not_null(e_32);
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
  ATerm c_34 = NULL,d_34 = NULL,e_34 = NULL;
  c_34 = t;
  b_34 :
  if(match_cons(c_34, sym__2))
    {
      d_34 = ATgetArgument(c_34, 0);
      e_34 = ATgetArgument(c_34, 1);
      t = (ATerm) ATinsert(CheckATermList(not_null(e_34)), not_null(d_34));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm NZip2_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  m_34 = t;
  k_34 :
  if(match_cons(m_34, sym__2))
    {
      n_34 = ATgetArgument(m_34, 0);
      o_34 = ATgetArgument(m_34, 1);
      l_34 :
      if(((ATgetType(o_34) == AT_LIST) && ((ATermList) o_34 != ATempty)))
        {
          p_34 = ATgetFirst((ATermList) o_34);
          q_34 = (ATerm) ATgetNext((ATermList) o_34);
          {
            ATerm u_34 = NULL;
            ATerm v_34 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(n_34), term_x_15);
            {
              t = add_0(t);
              {
                v_34 = t;
                if(((u_34 != NULL) && (u_34 != v_34)))
                  _fail(v_34);
                else
                  u_34 = v_34;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(n_34), not_null(p_34)), (ATerm) ATmakeAppl(sym__2, not_null(u_34), not_null(q_34)));
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
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  z_34 :
  if(match_cons(b_35, sym__2))
    {
      c_35 = ATgetArgument(b_35, 0);
      d_35 = ATgetArgument(b_35, 1);
      a_35 :
      if(((ATermList) d_35 == ATempty))
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
ATerm genzip_4 (ATerm t, ATerm e_112 (ATerm), ATerm f_112 (ATerm), ATerm g_112 (ATerm), ATerm h_112 (ATerm))
{
  ATerm g_35 (ATerm t)
  {
    ATerm c_16 = t;
    int d_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = e_112(t);
        LocalPopChoice(d_16);
      }
    else
      {
        t = c_16;
        {
          t = f_112(t);
          {
            t = _2(t, h_112, g_35);
            t = g_112(t);
          }
        }
      }
    return(t);
  }
  t = g_35(t);
  return(t);
}
ATerm NZip01_0 (ATerm t)
{
  ATerm i_35 = NULL;
  i_35 = t;
  t = (ATerm) ATmakeAppl(sym__2, term_x_15, not_null(i_35));
  return(t);
}
ATerm nzip_1 (ATerm t, ATerm q_112 (ATerm))
{
  t = NZip01_0(t);
  t = genzip_4(t, NZip1_0, NZip2_0, NZip3_0, q_112);
  return(t);
}
ATerm build_sep_list_0 (ATerm t)
{
  ATerm v_35 = NULL,w_35 = NULL,y_35 = NULL,b_36 = NULL,c_36 = NULL;
  v_35 = t;
  u_35 :
  if(match_cons(v_35, sym__4))
    {
      w_35 = ATgetArgument(v_35, 0);
      y_35 = ATgetArgument(v_35, 1);
      b_36 = ATgetArgument(v_35, 2);
      c_36 = ATgetArgument(v_35, 3);
      {
        ATerm a_37 = NULL,b_37 = NULL,c_37 = NULL,d_37 = NULL,e_37 = NULL,f_37 = NULL;
        ATerm g_37 = NULL;
        t = (ATerm) ATmakeAppl(sym__2, not_null(b_36), not_null(c_36));
        {
          ATerm t_40 = NULL;
          t = make_path_0(t);
          {
            g_37 = t;
            {
              if(((c_37 != NULL) && (c_37 != g_37)))
                _fail(g_37);
              else
                c_37 = g_37;
              {
                t = not_null(w_35);
                {
                  ATerm e_16 = t;
                  int i_18 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm e_2 (ATerm t)
                      {
                        ATerm h_37 = NULL;
                        h_37 = t;
                        if(((a_37 != NULL) && (a_37 != h_37)))
                          _fail(h_37);
                        else
                          a_37 = h_37;
                        return(t);
                      }
                      ATerm f_2 (ATerm t)
                      {
                        ATerm q_40 = NULL;
                        q_40 = t;
                        if(((b_37 != NULL) && (b_37 != q_40)))
                          _fail(q_40);
                        else
                          b_37 = q_40;
                        return(t);
                      }
                      t = iter_sep_2(t, e_2, f_2);
                      LocalPopChoice(i_18);
                    }
                  else
                    {
                      t = e_16;
                      {
                        ATerm g_2 (ATerm t)
                        {
                          ATerm r_40 = NULL;
                          r_40 = t;
                          if(((a_37 != NULL) && (a_37 != r_40)))
                            _fail(r_40);
                          else
                            a_37 = r_40;
                          return(t);
                        }
                        ATerm h_2 (ATerm t)
                        {
                          ATerm s_40 = NULL;
                          s_40 = t;
                          if(((b_37 != NULL) && (b_37 != s_40)))
                            _fail(s_40);
                          else
                            b_37 = s_40;
                          return(t);
                        }
                        t = iter_star_sep_2(t, g_2, h_2);
                      }
                    }
                  {
                    t = (ATerm) ATmakeAppl(sym__2, not_null(w_35), not_null(c_37));
                    {
                      ATerm u_40 = NULL;
                      t = get_pp_entry_0(t);
                      {
                        t_40 = t;
                        {
                          if(((d_37 != NULL) && (d_37 != t_40)))
                            _fail(t_40);
                          else
                            d_37 = t_40;
                          {
                            t = not_null(y_35);
                            {
                              ATerm x_40 = NULL;
                              ATerm i_2 (ATerm t)
                              {
                                ATerm j_2 (ATerm t)
                                {
                                  t = not_null(a_37);
                                  return(t);
                                }
                                ATerm k_2 (ATerm t)
                                {
                                  t = not_null(b_37);
                                  return(t);
                                }
                                ATerm l_2 (ATerm t)
                                {
                                  t = not_null(c_37);
                                  return(t);
                                }
                                ATerm m_2 (ATerm t)
                                {
                                  t = not_null(c_36);
                                  return(t);
                                }
                                t = BuildSepList_4(t, j_2, k_2, l_2, m_2);
                                return(t);
                              }
                              t = nzip_1(t, i_2);
                              {
                                u_40 = t;
                                {
                                  if(((e_37 != NULL) && (e_37 != u_40)))
                                    _fail(u_40);
                                  else
                                    e_37 = u_40;
                                  {
                                    t = not_null(e_37);
                                    {
                                      ATerm n_2 (ATerm t)
                                      {
                                        t = not_null(d_37);
                                        return(t);
                                      }
                                      t = instantiate_sep_list_1(t, n_2);
                                      {
                                        x_40 = t;
                                        if(((f_37 != NULL) && (f_37 != x_40)))
                                          _fail(x_40);
                                        else
                                          f_37 = x_40;
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
        t = not_null(f_37);
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
  ATerm m_44 = NULL,n_44 = NULL,o_44 = NULL,p_44 = NULL,q_44 = NULL;
  m_44 = t;
  j_44 :
  if(match_cons(m_44, sym__2))
    {
      n_44 = ATgetArgument(m_44, 0);
      o_44 = ATgetArgument(m_44, 1);
      k_44 :
      if(match_int(n_44, 1))
        {
          l_44 :
          if(((ATgetType(o_44) == AT_LIST) && ((ATermList) o_44 != ATempty)))
            {
              p_44 = ATgetFirst((ATermList) o_44);
              q_44 = (ATerm) ATgetNext((ATermList) o_44);
              t = not_null(p_44);
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
  ATerm w_44 = NULL,x_44 = NULL,y_44 = NULL;
  w_44 = t;
  v_44 :
  if(match_cons(w_44, sym__2))
    {
      x_44 = ATgetArgument(w_44, 0);
      y_44 = ATgetArgument(w_44, 1);
      {
        ATerm o_18 = t;
        int p_18 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_subti(not_null(x_44), not_null(y_44));
            LocalPopChoice(p_18);
          }
        else
          {
            t = o_18;
            t = SSL_subtr(not_null(x_44), not_null(y_44));
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
  ATerm g_45 = NULL,h_45 = NULL,i_45 = NULL,j_45 = NULL,k_45 = NULL;
  g_45 = t;
  e_45 :
  if(match_cons(g_45, sym__2))
    {
      h_45 = ATgetArgument(g_45, 0);
      i_45 = ATgetArgument(g_45, 1);
      f_45 :
      if(((ATgetType(i_45) == AT_LIST) && ((ATermList) i_45 != ATempty)))
        {
          j_45 = ATgetFirst((ATermList) i_45);
          k_45 = (ATerm) ATgetNext((ATermList) i_45);
          {
            ATerm q_45 = NULL;
            ATerm q_18;
            q_18 = t;
            {
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_45), term_l_15);
              t = geq_0(t);
            }
            t = q_18;
            {
              ATerm r_45 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(h_45), term_x_15);
              {
                t = subt_0(t);
                {
                  r_45 = t;
                  if(((q_45 != NULL) && (q_45 != r_45)))
                    _fail(r_45);
                  else
                    q_45 = r_45;
                }
              }
              t = (ATerm) ATmakeAppl(sym__2, not_null(q_45), not_null(k_45));
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
  ATerm v_48 = NULL,w_48 = NULL,x_48 = NULL,y_48 = NULL,z_48 = NULL,a_49 = NULL,b_49 = NULL,c_49 = NULL,d_49 = NULL,e_49 = NULL,f_49 = NULL;
  a_49 = t;
  p_48 :
  if(match_cons(a_49, sym__4))
    {
      b_49 = ATgetArgument(a_49, 0);
      d_49 = ATgetArgument(a_49, 1);
      e_49 = ATgetArgument(a_49, 2);
      f_49 = ATgetArgument(a_49, 3);
      q_48 :
      if(match_cons(b_49, sym_seq_1))
        {
          c_49 = ATgetArgument(b_49, 0);
          r_48 :
          if(match_cons(d_49, sym_appl_2))
            {
              y_48 = ATgetArgument(d_49, 0);
              z_48 = ATgetArgument(d_49, 1);
              {
                ATerm k_49 = NULL,l_49 = NULL,m_49 = NULL,n_49 = NULL;
                ATerm o_49 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_49), not_null(f_49));
                {
                  ATerm p_49 = NULL;
                  t = make_path_0(t);
                  {
                    o_49 = t;
                    {
                      if(((k_49 != NULL) && (k_49 != o_49)))
                        _fail(o_49);
                      else
                        k_49 = o_49;
                      {
                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_seq_1, not_null(c_49)), not_null(k_49));
                        {
                          ATerm q_49 = NULL,s_49 = NULL,u_49 = NULL;
                          t = get_pp_entry_0(t);
                          {
                            p_49 = t;
                            {
                              if(((l_49 != NULL) && (l_49 != p_49)))
                                _fail(p_49);
                              else
                                l_49 = p_49;
                              {
                                ATerm u_18;
                                u_18 = t;
                                {
                                  ATerm r_49 = NULL;
                                  t = not_null(c_49);
                                  {
                                    ATerm o_2 (ATerm t)
                                    {
                                      ATerm v_18 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = lit_1(t, _id);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = v_18;
                                        }
                                      return(t);
                                    }
                                    t = filter_1(t, o_2);
                                    {
                                      r_49 = t;
                                      if(((q_49 != NULL) && (q_49 != r_49)))
                                        _fail(r_49);
                                      else
                                        q_49 = r_49;
                                    }
                                  }
                                }
                                t = u_18;
                                {
                                  ATerm t_49 = NULL;
                                  t = not_null(z_48);
                                  {
                                    ATerm p_2 (ATerm t)
                                    {
                                      ATerm w_18 = t;
                                      if((PushChoice() == 0))
                                        {
                                          t = lit_1(t, _id);
                                          PopChoice();
                                          _fail(t);
                                        }
                                      else
                                        {
                                          t = w_18;
                                        }
                                      return(t);
                                    }
                                    t = filter_1(t, p_2);
                                    {
                                      t_49 = t;
                                      if(((s_49 != NULL) && (s_49 != t_49)))
                                        _fail(t_49);
                                      else
                                        s_49 = t_49;
                                    }
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__4, not_null(q_49), not_null(s_49), not_null(k_49), term_x_15);
                                    {
                                      ATerm v_49 = NULL;
                                      t = seq2abox_0(t);
                                      {
                                        u_49 = t;
                                        {
                                          if(((m_49 != NULL) && (m_49 != u_49)))
                                            _fail(u_49);
                                          else
                                            m_49 = u_49;
                                          {
                                            t = (ATerm) ATmakeAppl(sym__2, not_null(l_49), not_null(m_49));
                                            {
                                              t = instantiate_0(t);
                                              {
                                                v_49 = t;
                                                if(((n_49 != NULL) && (n_49 != v_49)))
                                                  _fail(v_49);
                                                else
                                                  n_49 = v_49;
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
                t = not_null(n_49);
              }
            }
          else
            {
              _fail(t);
            }
        }
      else
        {
          if(match_cons(b_49, sym_alt_2))
            {
              c_49 = ATgetArgument(b_49, 0);
              v_48 = ATgetArgument(b_49, 1);
              {
                ATerm j_50 = NULL,k_50 = NULL,l_50 = NULL,m_50 = NULL,p_50 = NULL;
                ATerm q_50 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_49), not_null(f_49));
                {
                  ATerm r_50 = NULL;
                  t = make_path_0(t);
                  {
                    q_50 = t;
                    {
                      if(((j_50 != NULL) && (j_50 != q_50)))
                        _fail(q_50);
                      else
                        j_50 = q_50;
                      {
                        ATerm f_53 = NULL;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_alt_2, not_null(c_49), not_null(v_48)), not_null(d_49), not_null(j_50), term_x_15);
                        {
                          r_50 = t;
                          {
                            if(((k_50 != NULL) && (k_50 != r_50)))
                              _fail(r_50);
                            else
                              k_50 = r_50;
                            {
                              ATerm b_57 (ATerm t)
                              {
                                ATerm s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL,f_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL,x_51 = NULL,y_51 = NULL,z_51 = NULL;
                                ATerm c_57 (ATerm t)
                                {
                                  ATerm e_52 = NULL,f_52 = NULL,h_52 = NULL,i_52 = NULL;
                                  if(((s_50 != NULL) && (s_50 != v_50)))
                                    _fail(v_50);
                                  else
                                    s_50 = v_50;
                                  {
                                    if(((s_50 != NULL) && (s_50 != a_51)))
                                      _fail(a_51);
                                    else
                                      s_50 = a_51;
                                    {
                                      if(((t_50 != NULL) && (t_50 != b_51)))
                                        _fail(b_51);
                                      else
                                        t_50 = b_51;
                                      {
                                        if(((f_52 != NULL) && (f_52 != c_51)))
                                          _fail(c_51);
                                        else
                                          f_52 = c_51;
                                        {
                                          if(((e_52 != NULL) && (e_52 != v_51)))
                                            _fail(v_51);
                                          else
                                            e_52 = v_51;
                                          {
                                            if(((i_52 != NULL) && (i_52 != y_51)))
                                              _fail(y_51);
                                            else
                                              i_52 = y_51;
                                            {
                                              if(((h_52 != NULL) && (h_52 != z_51)))
                                                _fail(z_51);
                                              else
                                                h_52 = z_51;
                                              {
                                                t = (ATerm) ATmakeAppl(sym__4, not_null(s_50), (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, not_null(s_50)), not_null(s_50), not_null(f_52)), not_null(e_52)), not_null(i_52), not_null(h_52));
                                                t = b_57(t);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return(t);
                                }
                                ATerm d_57 (ATerm t)
                                {
                                  ATerm m_52 = NULL,n_52 = NULL,p_52 = NULL,q_52 = NULL,r_52 = NULL;
                                  if(((s_50 != NULL) && (s_50 != a_51)))
                                    _fail(a_51);
                                  else
                                    s_50 = a_51;
                                  {
                                    if(((t_50 != NULL) && (t_50 != b_51)))
                                      _fail(b_51);
                                    else
                                      t_50 = b_51;
                                    {
                                      if(((n_52 != NULL) && (n_52 != c_51)))
                                        _fail(c_51);
                                      else
                                        n_52 = c_51;
                                      {
                                        if(((m_52 != NULL) && (m_52 != v_51)))
                                          _fail(v_51);
                                        else
                                          m_52 = v_51;
                                        {
                                          if(((q_52 != NULL) && (q_52 != y_51)))
                                            _fail(y_51);
                                          else
                                            q_52 = y_51;
                                          {
                                            if(((p_52 != NULL) && (p_52 != z_51)))
                                              _fail(z_51);
                                            else
                                              p_52 = z_51;
                                            {
                                              ATerm s_52 = NULL;
                                              t = (ATerm) ATmakeAppl(sym__2, not_null(p_52), term_x_15);
                                              {
                                                t = add_0(t);
                                                {
                                                  s_52 = t;
                                                  if(((r_52 != NULL) && (r_52 != s_52)))
                                                    _fail(s_52);
                                                  else
                                                    r_52 = s_52;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATmakeAppl(sym__4, not_null(t_50), (ATerm)ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, not_null(v_50)), not_null(t_50), not_null(n_52)), not_null(m_52)), not_null(q_52), not_null(r_52));
                                                t = b_57(t);
                                              }
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                  return(t);
                                }
                                ATerm e_57 (ATerm t)
                                {
                                  ATerm b_53 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_50), not_null(y_51));
                                  {
                                    ATerm c_53 = NULL;
                                    t = get_pp_entry_0(t);
                                    {
                                      b_53 = t;
                                      {
                                        if(((l_50 != NULL) && (l_50 != b_53)))
                                          _fail(b_53);
                                        else
                                          l_50 = b_53;
                                        {
                                          t = (ATerm) ATmakeAppl(sym__4, not_null(e_51), not_null(w_51), not_null(y_51), not_null(z_51));
                                          {
                                            ATerm d_53 = NULL;
                                            t = symbol2abox_0(t);
                                            {
                                              c_53 = t;
                                              {
                                                if(((m_50 != NULL) && (m_50 != c_53)))
                                                  _fail(c_53);
                                                else
                                                  m_50 = c_53;
                                                {
                                                  ATerm e_53 = NULL;
                                                  t = (ATerm) ATmakeAppl(sym__2, not_null(z_51), not_null(l_50));
                                                  {
                                                    t = index_0(t);
                                                    {
                                                      e_53 = t;
                                                      if(((d_53 != NULL) && (d_53 != e_53)))
                                                        _fail(e_53);
                                                      else
                                                        d_53 = e_53;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(ATempty, not_null(d_53)), (ATerm) ATinsert(ATempty, not_null(m_50)));
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
                                d_51 = t;
                                v_46 :
                                if(match_cons(d_51, sym__4))
                                  {
                                    e_51 = ATgetArgument(d_51, 0);
                                    f_51 = ATgetArgument(d_51, 1);
                                    y_51 = ATgetArgument(d_51, 2);
                                    z_51 = ATgetArgument(d_51, 3);
                                    w_46 :
                                    if(match_cons(f_51, sym_appl_2))
                                      {
                                        u_51 = ATgetArgument(f_51, 0);
                                        v_51 = ATgetArgument(f_51, 1);
                                        x_46 :
                                        if(((ATgetType(v_51) == AT_LIST) && ((ATermList) v_51 != ATempty)))
                                          {
                                            w_51 = ATgetFirst((ATermList) v_51);
                                            x_51 = (ATerm) ATgetNext((ATermList) v_51);
                                            y_46 :
                                            if(((ATermList) x_51 == ATempty))
                                              {
                                                g_47 :
                                                if(match_cons(u_51, sym_prod_3))
                                                  {
                                                    u_50 = ATgetArgument(u_51, 0);
                                                    z_50 = ATgetArgument(u_51, 1);
                                                    c_51 = ATgetArgument(u_51, 2);
                                                    h_47 :
                                                    if(match_cons(z_50, sym_alt_2))
                                                      {
                                                        a_51 = ATgetArgument(z_50, 0);
                                                        b_51 = ATgetArgument(z_50, 1);
                                                        i_47 :
                                                        if(((ATgetType(u_50) == AT_LIST) && ((ATermList) u_50 != ATempty)))
                                                          {
                                                            v_50 = ATgetFirst((ATermList) u_50);
                                                            w_50 = (ATerm) ATgetNext((ATermList) u_50);
                                                            j_47 :
                                                            if(((ATermList) w_50 == ATempty))
                                                              {
                                                                k_47 :
                                                                if(match_cons(e_51, sym_alt_2))
                                                                  {
                                                                    s_50 = ATgetArgument(e_51, 0);
                                                                    t_50 = ATgetArgument(e_51, 1);
                                                                    {
                                                                      ATerm y_18 = t;
                                                                      int z_18 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = c_57(t);
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
                                                                                t = d_57(t);
                                                                                LocalPopChoice(b_19);
                                                                              }
                                                                            else
                                                                              {
                                                                                t = a_19;
                                                                                t = e_57(t);
                                                                              }
                                                                          }
                                                                        }
                                                                    }
                                                                  }
                                                                else
                                                                  {
                                                                    t = e_57(t);
                                                                  }
                                                              }
                                                            else
                                                              {
                                                                l_47 :
                                                                t = e_57(t);
                                                              }
                                                          }
                                                        else
                                                          {
                                                            m_47 :
                                                            t = e_57(t);
                                                          }
                                                      }
                                                    else
                                                      {
                                                        n_47 :
                                                        o_47 :
                                                        t = e_57(t);
                                                      }
                                                  }
                                                else
                                                  {
                                                    p_47 :
                                                    t = e_57(t);
                                                  }
                                              }
                                            else
                                              {
                                                q_47 :
                                                if(match_cons(u_51, sym_prod_3))
                                                  {
                                                    u_50 = ATgetArgument(u_51, 0);
                                                    z_50 = ATgetArgument(u_51, 1);
                                                    c_51 = ATgetArgument(u_51, 2);
                                                    r_47 :
                                                    if(match_cons(e_51, sym_alt_2))
                                                      {
                                                        s_50 = ATgetArgument(e_51, 0);
                                                        t_50 = ATgetArgument(e_51, 1);
                                                        s_47 :
                                                        if(((ATgetType(u_50) == AT_LIST) && ((ATermList) u_50 != ATempty)))
                                                          {
                                                            v_50 = ATgetFirst((ATermList) u_50);
                                                            w_50 = (ATerm) ATgetNext((ATermList) u_50);
                                                            w_47 :
                                                            if(((ATermList) w_50 == ATempty))
                                                              {
                                                                x_47 :
                                                                if(match_cons(z_50, sym_alt_2))
                                                                  {
                                                                    a_51 = ATgetArgument(z_50, 0);
                                                                    b_51 = ATgetArgument(z_50, 1);
                                                                    {
                                                                      ATerm c_19 = t;
                                                                      int d_19 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = c_57(t);
                                                                          LocalPopChoice(d_19);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = c_19;
                                                                          t = d_57(t);
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
                                            y_47 :
                                            if(match_cons(u_51, sym_prod_3))
                                              {
                                                u_50 = ATgetArgument(u_51, 0);
                                                z_50 = ATgetArgument(u_51, 1);
                                                c_51 = ATgetArgument(u_51, 2);
                                                z_47 :
                                                if(match_cons(e_51, sym_alt_2))
                                                  {
                                                    s_50 = ATgetArgument(e_51, 0);
                                                    t_50 = ATgetArgument(e_51, 1);
                                                    a_48 :
                                                    if(((ATgetType(u_50) == AT_LIST) && ((ATermList) u_50 != ATempty)))
                                                      {
                                                        v_50 = ATgetFirst((ATermList) u_50);
                                                        w_50 = (ATerm) ATgetNext((ATermList) u_50);
                                                        b_48 :
                                                        if(((ATermList) w_50 == ATempty))
                                                          {
                                                            c_48 :
                                                            if(match_cons(z_50, sym_alt_2))
                                                              {
                                                                a_51 = ATgetArgument(z_50, 0);
                                                                b_51 = ATgetArgument(z_50, 1);
                                                                {
                                                                  ATerm e_19 = t;
                                                                  int f_19 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = c_57(t);
                                                                      LocalPopChoice(f_19);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = e_19;
                                                                      t = d_57(t);
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
                              t = b_57(t);
                              {
                                f_53 = t;
                                if(((p_50 != NULL) && (p_50 != f_53)))
                                  _fail(f_53);
                                else
                                  p_50 = f_53;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
                t = not_null(p_50);
              }
            }
          else
            {
              if(match_cons(b_49, sym_iter_star_sep_2))
                {
                  c_49 = ATgetArgument(b_49, 0);
                  v_48 = ATgetArgument(b_49, 1);
                  {
                    ATerm l_53 = NULL;
                    ATerm m_53 = NULL;
                    t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(c_49), not_null(v_48)), not_null(d_49), not_null(e_49), not_null(f_49));
                    {
                      t = build_sep_list_0(t);
                      {
                        m_53 = t;
                        if(((l_53 != NULL) && (l_53 != m_53)))
                          _fail(m_53);
                        else
                          l_53 = m_53;
                      }
                    }
                    t = not_null(l_53);
                  }
                }
              else
                {
                  if(match_cons(b_49, sym_iter_sep_2))
                    {
                      c_49 = ATgetArgument(b_49, 0);
                      v_48 = ATgetArgument(b_49, 1);
                      {
                        ATerm s_53 = NULL;
                        ATerm t_53 = NULL;
                        t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_sep_2, not_null(c_49), not_null(v_48)), not_null(d_49), not_null(e_49), not_null(f_49));
                        {
                          t = build_sep_list_0(t);
                          {
                            t_53 = t;
                            if(((s_53 != NULL) && (s_53 != t_53)))
                              _fail(t_53);
                            else
                              s_53 = t_53;
                          }
                        }
                        t = not_null(s_53);
                      }
                    }
                  else
                    {
                      if(match_cons(b_49, sym_iter_star_1))
                        {
                          c_49 = ATgetArgument(b_49, 0);
                          {
                            ATerm y_53 = NULL;
                            ATerm z_53 = NULL;
                            t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_star_1, not_null(c_49)), not_null(d_49), not_null(e_49), not_null(f_49));
                            {
                              t = build_list_0(t);
                              {
                                z_53 = t;
                                if(((y_53 != NULL) && (y_53 != z_53)))
                                  _fail(z_53);
                                else
                                  y_53 = z_53;
                              }
                            }
                            t = not_null(y_53);
                          }
                        }
                      else
                        {
                          if(match_cons(b_49, sym_iter_1))
                            {
                              c_49 = ATgetArgument(b_49, 0);
                              {
                                ATerm e_54 = NULL;
                                ATerm h_54 = NULL;
                                t = (ATerm) ATmakeAppl(sym__4, (ATerm)ATmakeAppl(sym_iter_1, not_null(c_49)), not_null(d_49), not_null(e_49), not_null(f_49));
                                {
                                  t = build_list_0(t);
                                  {
                                    h_54 = t;
                                    if(((e_54 != NULL) && (e_54 != h_54)))
                                      _fail(h_54);
                                    else
                                      e_54 = h_54;
                                  }
                                }
                                t = not_null(e_54);
                              }
                            }
                          else
                            {
                              if(match_cons(b_49, sym_opt_1))
                                {
                                  c_49 = ATgetArgument(b_49, 0);
                                  s_48 :
                                  if(match_cons(d_49, sym_appl_2))
                                    {
                                      y_48 = ATgetArgument(d_49, 0);
                                      z_48 = ATgetArgument(d_49, 1);
                                      t_48 :
                                      if(((ATgetType(z_48) == AT_LIST) && ((ATermList) z_48 != ATempty)))
                                        {
                                          w_48 = ATgetFirst((ATermList) z_48);
                                          x_48 = (ATerm) ATgetNext((ATermList) z_48);
                                          u_48 :
                                          if(((ATermList) x_48 == ATempty))
                                            {
                                              {
                                                ATerm s_54 = NULL,t_54 = NULL,u_54 = NULL,v_54 = NULL;
                                                ATerm w_54 = NULL;
                                                t = (ATerm) ATmakeAppl(sym__2, not_null(e_49), not_null(f_49));
                                                {
                                                  ATerm x_54 = NULL;
                                                  t = make_path_0(t);
                                                  {
                                                    w_54 = t;
                                                    {
                                                      if(((s_54 != NULL) && (s_54 != w_54)))
                                                        _fail(w_54);
                                                      else
                                                        s_54 = w_54;
                                                      {
                                                        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_opt_1, not_null(c_49)), not_null(s_54));
                                                        {
                                                          ATerm y_54 = NULL;
                                                          t = get_pp_entry_0(t);
                                                          {
                                                            x_54 = t;
                                                            {
                                                              if(((t_54 != NULL) && (t_54 != x_54)))
                                                                _fail(x_54);
                                                              else
                                                                t_54 = x_54;
                                                              {
                                                                t = (ATerm) ATmakeAppl(sym__4, not_null(c_49), not_null(w_48), not_null(s_54), term_x_15);
                                                                {
                                                                  ATerm z_54 = NULL;
                                                                  t = symbol2abox_0(t);
                                                                  {
                                                                    y_54 = t;
                                                                    {
                                                                      if(((u_54 != NULL) && (u_54 != y_54)))
                                                                        _fail(y_54);
                                                                      else
                                                                        u_54 = y_54;
                                                                      {
                                                                        t = (ATerm) ATmakeAppl(sym__2, not_null(t_54), (ATerm) ATinsert(ATempty, not_null(u_54)));
                                                                        {
                                                                          t = filter_literals_0(t);
                                                                          {
                                                                            t = instantiate_0(t);
                                                                            {
                                                                              z_54 = t;
                                                                              if(((v_54 != NULL) && (v_54 != z_54)))
                                                                                _fail(z_54);
                                                                              else
                                                                                v_54 = z_54;
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
                                                t = not_null(v_54);
                                              }
                                            }
                                          else
                                            {
                                              _fail(t);
                                            }
                                        }
                                      else
                                        {
                                          if(((ATermList) z_48 == ATempty))
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
                                  if(match_cons(b_49, sym_sort_1))
                                    {
                                      c_49 = ATgetArgument(b_49, 0);
                                      {
                                        ATerm g_19 = t;
                                        int h_19 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm h_55 = NULL;
                                            ATerm i_55 = NULL;
                                            t = not_null(d_49);
                                            {
                                              ATerm i_19 = t;
                                              if((PushChoice() == 0))
                                                {
                                                  t = is_string_0(t);
                                                  PopChoice();
                                                  _fail(t);
                                                }
                                              else
                                                {
                                                  t = i_19;
                                                }
                                              {
                                                t = not_null(d_49);
                                                {
                                                  t = appl2abox_0(t);
                                                  {
                                                    i_55 = t;
                                                    if(((h_55 != NULL) && (h_55 != i_55)))
                                                      _fail(i_55);
                                                    else
                                                      h_55 = i_55;
                                                  }
                                                }
                                              }
                                            }
                                            t = not_null(h_55);
                                            LocalPopChoice(h_19);
                                          }
                                        else
                                          {
                                            t = g_19;
                                            {
                                              t = not_null(d_49);
                                              t = is_string_0(t);
                                              t = (ATerm) ATmakeAppl(sym_S_1, not_null(d_49));
                                            }
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(b_49, sym_char_class_1))
                                        {
                                          c_49 = ATgetArgument(b_49, 0);
                                          {
                                            ATerm n_55 = NULL;
                                            ATerm o_55 = NULL;
                                            t = (ATerm) ATinsert(ATempty, not_null(d_49));
                                            {
                                              t = implode_string_0(t);
                                              {
                                                o_55 = t;
                                                if(((n_55 != NULL) && (n_55 != o_55)))
                                                  _fail(o_55);
                                                else
                                                  n_55 = o_55;
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_S_1, not_null(n_55));
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(b_49, sym_lit_1))
                                            {
                                              c_49 = ATgetArgument(b_49, 0);
                                              t = (ATerm) ATmakeAppl(sym_S_1, not_null(c_49));
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
  ATerm j_58 = NULL,k_58 = NULL,o_58 = NULL,p_58 = NULL,q_58 = NULL,r_58 = NULL,v_58 = NULL,w_58 = NULL,x_58 = NULL,y_58 = NULL,z_58 = NULL;
  ATerm f_60 (ATerm t)
  {
    ATerm v_59 = NULL,w_59 = NULL,y_59 = NULL;
    t = (ATerm) ATmakeAppl(sym__4, not_null(q_58), not_null(w_58), not_null(y_58), not_null(z_58));
    {
      ATerm z_59 = NULL,b_60 = NULL;
      t = symbol2abox_0(t);
      {
        y_59 = t;
        {
          if(((v_59 != NULL) && (v_59 != y_59)))
            _fail(y_59);
          else
            v_59 = y_59;
          {
            ATerm a_60 = NULL;
            t = (ATerm) ATmakeAppl(sym__2, not_null(z_58), term_x_15);
            {
              t = add_0(t);
              {
                a_60 = t;
                if(((z_59 != NULL) && (z_59 != a_60)))
                  _fail(a_60);
                else
                  z_59 = a_60;
              }
            }
            {
              t = (ATerm) ATmakeAppl(sym__4, not_null(r_58), not_null(x_58), not_null(y_58), not_null(z_59));
              {
                t = seq2abox_0(t);
                {
                  b_60 = t;
                  {
                    if(((w_59 != NULL) && (w_59 != b_60)))
                      _fail(b_60);
                    else
                      w_59 = b_60;
                    t = (ATerm) ATinsert(CheckATermList(not_null(w_59)), not_null(v_59));
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
  o_58 = t;
  c_58 :
  if(match_cons(o_58, sym__4))
    {
      p_58 = ATgetArgument(o_58, 0);
      v_58 = ATgetArgument(o_58, 1);
      y_58 = ATgetArgument(o_58, 2);
      z_58 = ATgetArgument(o_58, 3);
      d_58 :
      if(((ATermList) p_58 == ATempty))
        {
          e_58 :
          if(((ATermList) v_58 == ATempty))
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
          if(((ATgetType(p_58) == AT_LIST) && ((ATermList) p_58 != ATempty)))
            {
              q_58 = ATgetFirst((ATermList) p_58);
              r_58 = (ATerm) ATgetNext((ATermList) p_58);
              f_58 :
              if(((ATgetType(v_58) == AT_LIST) && ((ATermList) v_58 != ATempty)))
                {
                  w_58 = ATgetFirst((ATermList) v_58);
                  x_58 = (ATerm) ATgetNext((ATermList) v_58);
                  g_58 :
                  if(match_cons(w_58, sym_lit_1))
                    {
                      k_58 = ATgetArgument(w_58, 0);
                      h_58 :
                      if(match_cons(q_58, sym_lit_1))
                        {
                          j_58 = ATgetArgument(q_58, 0);
                          {
                            ATerm j_19 = t;
                            int k_19 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = (ATerm) ATmakeAppl(sym__4, not_null(r_58), not_null(x_58), not_null(y_58), not_null(z_58));
                                t = seq2abox_0(t);
                                LocalPopChoice(k_19);
                              }
                            else
                              {
                                t = j_19;
                                t = f_60(t);
                              }
                          }
                        }
                      else
                        {
                          t = f_60(t);
                        }
                    }
                  else
                    {
                      i_58 :
                      t = f_60(t);
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
ATerm lit_1 (ATerm t, ATerm w_0 (ATerm))
{
  ATerm s_60 = NULL,t_60 = NULL;
  s_60 = t;
  r_60 :
  if(match_cons(s_60, sym_lit_1))
    {
      t_60 = ATgetArgument(s_60, 0);
      {
        ATerm l_19 = t;
        int m_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_60 = NULL,y_60 = NULL;
            ATerm x_60 = NULL;
            t = SSLgetAnnotations(not_null(s_60));
            {
              x_60 = t;
              if(((w_60 != NULL) && (w_60 != x_60)))
                _fail(x_60);
              else
                w_60 = x_60;
            }
            {
              t = not_null(t_60);
              {
                ATerm a_61 = NULL;
                t = w_0(t);
                {
                  y_60 = t;
                  {
                    ATerm b_61 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(y_60)), not_null(w_60));
                    {
                      b_61 = t;
                      if(((a_61 != NULL) && (a_61 != b_61)))
                        _fail(b_61);
                      else
                        a_61 = b_61;
                    }
                    t = not_null(a_61);
                  }
                }
              }
            }
            LocalPopChoice(m_19);
          }
        else
          {
            t = l_19;
            {
              ATerm e_61 = NULL,g_61 = NULL;
              ATerm f_61 = NULL;
              t = SSLgetAnnotations(not_null(s_60));
              {
                f_61 = t;
                if(((e_61 != NULL) && (e_61 != f_61)))
                  _fail(f_61);
                else
                  e_61 = f_61;
              }
              {
                t = not_null(t_60);
                {
                  ATerm i_61 = NULL;
                  t = w_0(t);
                  {
                    g_61 = t;
                    {
                      ATerm j_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(g_61)), not_null(e_61));
                      {
                        j_61 = t;
                        if(((i_61 != NULL) && (i_61 != j_61)))
                          _fail(j_61);
                        else
                          i_61 = j_61;
                      }
                      t = not_null(i_61);
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
ATerm Snd_0 (ATerm t)
{
  ATerm z_61 = NULL;
  ATerm b_62 = NULL,c_62 = NULL,d_62 = NULL;
  z_61 = t;
  {
    ATerm j_62 = NULL;
    ATerm l_62 = NULL,m_62 = NULL,n_62 = NULL,o_62 = NULL,p_62 = NULL,q_62 = NULL,r_62 = NULL;
    t = not_null(z_61);
    {
      j_62 = t;
      {
        t = SSL_explode_term(not_null(j_62));
        {
          l_62 = t;
          v_61 :
          if(match_cons(l_62, sym__2))
            {
              m_62 = ATgetArgument(l_62, 0);
              n_62 = ATgetArgument(l_62, 1);
              w_61 :
              if(match_string(m_62, ""))
                {
                  x_61 :
                  if(((ATgetType(n_62) == AT_LIST) && ((ATermList) n_62 != ATempty)))
                    {
                      o_62 = ATgetFirst((ATermList) n_62);
                      p_62 = (ATerm) ATgetNext((ATermList) n_62);
                      y_61 :
                      if(((ATgetType(p_62) == AT_LIST) && ((ATermList) p_62 != ATempty)))
                        {
                          q_62 = ATgetFirst((ATermList) p_62);
                          r_62 = (ATerm) ATgetNext((ATermList) p_62);
                          {
                            if(((b_62 != NULL) && (b_62 != o_62)))
                              _fail(o_62);
                            else
                              b_62 = o_62;
                            {
                              if(((d_62 != NULL) && (d_62 != q_62)))
                                _fail(q_62);
                              else
                                d_62 = q_62;
                              if(((c_62 != NULL) && (c_62 != r_62)))
                                _fail(r_62);
                              else
                                c_62 = r_62;
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
    t = not_null(d_62);
  }
  return(t);
}
ATerm pp_table_get_0 (ATerm t)
{
  ATerm y_62 = NULL;
  ATerm a_63 = NULL,b_63 = NULL,c_63 = NULL;
  y_62 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_19, not_null(y_62));
    {
      t = table_get_0(t);
      {
        a_63 = t;
        x_62 :
        if(match_cons(a_63, sym__2))
          {
            b_63 = ATgetArgument(a_63, 0);
            c_63 = ATgetArgument(a_63, 1);
            {
              ATerm o_19;
              o_19 = t;
              {
                t = not_null(b_63);
                {
                  t = path_to_string_0(t);
                  {
                    ATerm q_2 (ATerm t)
                    {
                      t = term_p_19;
                      return(t);
                    }
                    t = notify_1(t, q_2);
                  }
                }
              }
              t = o_19;
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
  ATerm o_63 = NULL,p_63 = NULL,q_63 = NULL;
  o_63 = t;
  n_63 :
  if(match_cons(o_63, sym_PP_Entry_2))
    {
      p_63 = ATgetArgument(o_63, 0);
      q_63 = ATgetArgument(o_63, 1);
      {
        ATerm q_19 = t;
        int r_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_19;
            s_19 = t;
            {
              ATerm t_63 = NULL;
              ATerm u_63 = NULL;
              t = not_null(p_63);
              {
                t = mk_key_0(t);
                {
                  u_63 = t;
                  if(((t_63 != NULL) && (t_63 != u_63)))
                    _fail(u_63);
                  else
                    t_63 = u_63;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, term_n_19, not_null(t_63));
                t = table_get_0(t);
              }
            }
            t = s_19;
            LocalPopChoice(r_19);
          }
        else
          {
            t = q_19;
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
ATerm symbols2pp_entries_1 (ATerm t, ATerm p_96 (ATerm))
{
  ATerm b_64 = NULL,d_64 = NULL,h_64 = NULL;
  t = number_nonterminals_0(t);
  {
    ATerm t_19;
    t_19 = t;
    {
      ATerm c_64 = NULL;
      t = make_0(t);
      {
        c_64 = t;
        if(((b_64 != NULL) && (b_64 != c_64)))
          _fail(c_64);
        else
          b_64 = c_64;
      }
    }
    t = t_19;
    {
      ATerm u_19;
      u_19 = t;
      {
        ATerm g_64 = NULL;
        ATerm r_2 (ATerm t)
        {
          ATerm s_2 (ATerm t)
          {
            ATerm e_64 = NULL;
            ATerm f_64 = NULL;
            t = term_n_9;
            {
              t = p_96(t);
              {
                f_64 = t;
                if(((e_64 != NULL) && (e_64 != f_64)))
                  _fail(f_64);
                else
                  e_64 = f_64;
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(e_64), (ATerm) ATempty);
            return(t);
          }
          t = symbol2abox_1(t, s_2);
          return(t);
        }
        t = map_1(t, r_2);
        {
          t = concat_0(t);
          {
            g_64 = t;
            if(((d_64 != NULL) && (d_64 != g_64)))
              _fail(g_64);
            else
              d_64 = g_64;
          }
        }
      }
      t = u_19;
      {
        ATerm i_64 = NULL;
        t = term_n_9;
        {
          t = p_96(t);
          {
            i_64 = t;
            if(((h_64 != NULL) && (h_64 != i_64)))
              _fail(i_64);
            else
              h_64 = i_64;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(d_64)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path1_1, not_null(h_64)), not_null(b_64)));
      }
    }
  }
  return(t);
}
ATerm generate_pp_entries_0 (ATerm t)
{
  ATerm x_64 = NULL,y_64 = NULL,z_64 = NULL,a_65 = NULL,d_65 = NULL;
  ATerm v_19 = t;
  int x_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_65 = NULL,f_65 = NULL,g_65 = NULL,h_65 = NULL,i_65 = NULL;
      e_65 = t;
      w_64 :
      if(match_cons(e_65, sym_prod_3))
        {
          f_65 = ATgetArgument(e_65, 0);
          g_65 = ATgetArgument(e_65, 1);
          h_65 = ATgetArgument(e_65, 2);
          {
            if(((z_64 != NULL) && (z_64 != f_65)))
              _fail(f_65);
            else
              z_64 = f_65;
            {
              if(((a_65 != NULL) && (a_65 != g_65)))
                _fail(g_65);
              else
                a_65 = g_65;
              {
                if(((d_65 != NULL) && (d_65 != h_65)))
                  _fail(h_65);
                else
                  d_65 = h_65;
                {
                  t = not_null(d_65);
                  {
                    ATerm t_2 (ATerm t)
                    {
                      ATerm j_65 = NULL,k_65 = NULL;
                      j_65 = t;
                      s_64 :
                      if(match_cons(j_65, sym_cons_1))
                        {
                          k_65 = ATgetArgument(j_65, 0);
                          if(((x_64 != NULL) && (x_64 != k_65)))
                            _fail(k_65);
                          else
                            x_64 = k_65;
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = oncetd_1(t, t_2);
                  }
                  {
                    t = not_null(z_64);
                    {
                      ATerm u_2 (ATerm t)
                      {
                        t = not_null(x_64);
                        return(t);
                      }
                      t = symbols2pp_entries_1(t, u_2);
                    }
                  }
                }
              }
            }
          }
        }
      else
        {
          if(match_cons(e_65, sym_prod_fun_4))
            {
              f_65 = ATgetArgument(e_65, 0);
              g_65 = ATgetArgument(e_65, 1);
              h_65 = ATgetArgument(e_65, 2);
              i_65 = ATgetArgument(e_65, 3);
              {
                ATerm l_65 = NULL;
                if(((y_64 != NULL) && (y_64 != f_65)))
                  _fail(f_65);
                else
                  y_64 = f_65;
                {
                  if(((z_64 != NULL) && (z_64 != g_65)))
                    _fail(g_65);
                  else
                    z_64 = g_65;
                  {
                    if(((a_65 != NULL) && (a_65 != h_65)))
                      _fail(h_65);
                    else
                      a_65 = h_65;
                    {
                      if(((d_65 != NULL) && (d_65 != i_65)))
                        _fail(i_65);
                      else
                        d_65 = i_65;
                      {
                        ATerm m_65 = NULL;
                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_20)), not_null(z_64)), (ATerm) ATinsert(ATinsert(ATempty, term_z_19), (ATerm) ATmakeAppl(sym_lit_1, not_null(y_64))));
                        {
                          t = concat_0(t);
                          {
                            m_65 = t;
                            if(((l_65 != NULL) && (l_65 != m_65)))
                              _fail(m_65);
                            else
                              l_65 = m_65;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(l_65), not_null(a_65), not_null(d_65));
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
      LocalPopChoice(x_19);
    }
  else
    {
      t = v_19;
      {
        ATerm v_2 (ATerm t)
        {
          ATerm f_20 = t;
          if((PushChoice() == 0))
            {
              ATerm w_2 (ATerm t)
              {
                t = term_j_20;
                return(t);
              }
              t = has_option_1(t, w_2);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = f_20;
            }
          {
            ATerm x_2 (ATerm t)
            {
              t = term_m_20;
              return(t);
            }
            t = debug_1(t, x_2);
          }
          return(t);
        }
        t = try_1(t, v_2);
        t = (ATerm) ATempty;
      }
    }
  return(t);
}
ATerm Make_0 (ATerm t)
{
  ATerm u_65 = NULL,v_65 = NULL,w_65 = NULL;
  u_65 = t;
  t_65 :
  if(match_cons(u_65, sym_lit_1))
    {
      v_65 = ATgetArgument(u_65, 0);
      t = (ATerm) ATmakeAppl(sym_FBOX_2, term_n_20, (ATerm) ATmakeAppl(sym_S_1, not_null(v_65)));
    }
  else
    {
      if(match_cons(u_65, sym__2))
        {
          v_65 = ATgetArgument(u_65, 0);
          w_65 = ATgetArgument(u_65, 1);
          t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(v_65));
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
  ATerm o_20 = t;
  int p_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(p_20);
    }
  else
    {
      t = o_20;
      {
        ATerm f_66 = NULL,g_66 = NULL,h_66 = NULL,i_66 = NULL,j_66 = NULL;
        f_66 = t;
        d_66 :
        if(((ATgetType(f_66) == AT_LIST) && ((ATermList) f_66 != ATempty)))
          {
            g_66 = ATgetFirst((ATermList) f_66);
            h_66 = (ATerm) ATgetNext((ATermList) f_66);
            e_66 :
            if(((ATgetType(h_66) == AT_LIST) && ((ATermList) h_66 != ATempty)))
              {
                i_66 = ATgetFirst((ATermList) h_66);
                j_66 = (ATerm) ATgetNext((ATermList) h_66);
                {
                  ATerm n_66 = NULL;
                  ATerm o_66 = NULL;
                  t = not_null(j_66);
                  {
                    t = pair_0(t);
                    {
                      o_66 = t;
                      if(((n_66 != NULL) && (n_66 != o_66)))
                        _fail(o_66);
                      else
                        n_66 = o_66;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(n_66)), (ATerm) ATmakeAppl(sym__2, not_null(g_66), not_null(i_66)));
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
  ATerm h_67 = NULL,i_67 = NULL,j_67 = NULL,k_67 = NULL,l_67 = NULL;
  ATerm q_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_67 = NULL,n_67 = NULL,o_67 = NULL;
      t = reverse_0(t);
      {
        ATerm y_2 (ATerm t)
        {
          ATerm a_3 (ATerm t)
          {
            ATerm u_20 = t;
            int v_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = iter_1(t, _id);
                LocalPopChoice(v_20);
              }
            else
              {
                t = u_20;
                {
                  ATerm w_20 = t;
                  int x_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = iter_star_1(t, _id);
                      LocalPopChoice(x_20);
                    }
                  else
                    {
                      t = w_20;
                      {
                        ATerm y_20 = t;
                        int c_21 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = iter_sep_2(t, _id, _id);
                            LocalPopChoice(c_21);
                          }
                        else
                          {
                            t = y_20;
                            t = iter_star_sep_2(t, _id, _id);
                          }
                      }
                    }
                }
              }
            return(t);
          }
          t = _2(t, _id, a_3);
          t = Make_0(t);
          return(t);
        }
        ATerm z_2 (ATerm t)
        {
          ATerm b_3 (ATerm t)
          {
            t = lit_1(t, _id);
            t = Make_0(t);
            return(t);
          }
          t = map_1(t, b_3);
          return(t);
        }
        t = Cons_2(t, y_2, z_2);
        {
          m_67 = t;
          u_66 :
          if(((ATgetType(m_67) == AT_LIST) && ((ATermList) m_67 != ATempty)))
            {
              n_67 = ATgetFirst((ATermList) m_67);
              o_67 = (ATerm) ATgetNext((ATermList) m_67);
              {
                ATerm p_67 = NULL;
                if(((i_67 != NULL) && (i_67 != n_67)))
                  _fail(n_67);
                else
                  i_67 = n_67;
                {
                  if(((h_67 != NULL) && (h_67 != o_67)))
                    _fail(o_67);
                  else
                    h_67 = o_67;
                  {
                    ATerm d_21 = t;
                    if((PushChoice() == 0))
                      {
                        t = Cons_2(t, _id, Nil_0);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = d_21;
                      }
                    {
                      ATerm q_67 = NULL;
                      t = not_null(h_67);
                      {
                        t = reverse_0(t);
                        {
                          q_67 = t;
                          if(((p_67 != NULL) && (p_67 != q_67)))
                            _fail(q_67);
                          else
                            p_67 = q_67;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_67)), (ATerm) ATmakeAppl(sym_H_2, (ATerm)ATempty, not_null(p_67))));
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
      LocalPopChoice(s_20);
    }
  else
    {
      t = q_20;
      {
        ATerm h_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_68 = NULL;
            t = reverse_0(t);
            {
              ATerm c_3 (ATerm t)
              {
                ATerm r_67 = NULL;
                t = Make_0(t);
                {
                  r_67 = t;
                  if(((l_67 != NULL) && (l_67 != r_67)))
                    _fail(r_67);
                  else
                    l_67 = r_67;
                }
                return(t);
              }
              ATerm d_3 (ATerm t)
              {
                ATerm s_67 = NULL;
                ATerm l_21 = t;
                if((PushChoice() == 0))
                  {
                    t = Nil_0(t);
                    PopChoice();
                    _fail(t);
                  }
                else
                  {
                    t = l_21;
                  }
                {
                  t = reverse_0(t);
                  {
                    s_67 = t;
                    if(((j_67 != NULL) && (j_67 != s_67)))
                      _fail(s_67);
                    else
                      j_67 = s_67;
                  }
                }
                return(t);
              }
              t = Cons_2(t, c_3, d_3);
              {
                t = not_null(j_67);
                {
                  t = pair_0(t);
                  {
                    ATerm e_3 (ATerm t)
                    {
                      ATerm t_67 = NULL,z_67 = NULL;
                      ATerm f_3 (ATerm t)
                      {
                        ATerm a_68 = NULL;
                        t = lit_1(t, _id);
                        {
                          t = Make_0(t);
                          {
                            a_68 = t;
                            if(((t_67 != NULL) && (t_67 != a_68)))
                              _fail(a_68);
                            else
                              t_67 = a_68;
                          }
                        }
                        return(t);
                      }
                      ATerm g_3 (ATerm t)
                      {
                        ATerm b_68 = NULL;
                        ATerm h_3 (ATerm t)
                        {
                          ATerm m_21 = t;
                          int n_21 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_1(t, _id);
                              LocalPopChoice(n_21);
                            }
                          else
                            {
                              t = m_21;
                              t = iter_star_1(t, _id);
                            }
                          return(t);
                        }
                        t = _2(t, _id, h_3);
                        {
                          t = Make_0(t);
                          {
                            b_68 = t;
                            if(((z_67 != NULL) && (z_67 != b_68)))
                              _fail(b_68);
                            else
                              z_67 = b_68;
                          }
                        }
                        return(t);
                      }
                      t = _2(t, f_3, g_3);
                      t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATinsert(ATempty, term_x_21), (ATerm) ATinsert(ATinsert(ATempty, not_null(z_67)), not_null(t_67)));
                      return(t);
                    }
                    t = map_1(t, e_3);
                    {
                      c_68 = t;
                      {
                        if(((k_67 != NULL) && (k_67 != c_68)))
                          _fail(c_68);
                        else
                          k_67 = c_68;
                        t = (ATerm) ATmakeAppl(sym_V_2, (ATerm)ATempty, (ATerm) ATinsert(ATinsert(ATempty, not_null(l_67)), not_null(k_67)));
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(k_21);
          }
        else
          {
            t = h_21;
            t = map_1(t, Make_0);
          }
      }
    }
  return(t);
}
ATerm NonTerminal_0 (ATerm t)
{
  ATerm y_21 = t;
  if((PushChoice() == 0))
    {
      t = lit_1(t, _id);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = y_21;
    }
  return(t);
}
ATerm number_node_1 (ATerm t, ATerm t_96 (ATerm))
{
  ATerm i_3 (ATerm t)
  {
    t = term_x_15;
    return(t);
  }
  t = split_2(t, i_3, _id);
  {
    ATerm l_69 (ATerm t)
    {
      ATerm r_68 = NULL,s_68 = NULL,u_68 = NULL;
      ATerm a_22 = t;
      int b_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = _2(t, _id, Nil_0);
          t = (ATerm) ATempty;
          LocalPopChoice(b_22);
        }
      else
        {
          t = a_22;
          {
            ATerm w_68 = NULL,x_68 = NULL,y_68 = NULL,z_68 = NULL,a_69 = NULL;
            w_68 = t;
            p_68 :
            if(match_cons(w_68, sym__2))
              {
                x_68 = ATgetArgument(w_68, 0);
                y_68 = ATgetArgument(w_68, 1);
                q_68 :
                if(((ATgetType(y_68) == AT_LIST) && ((ATermList) y_68 != ATempty)))
                  {
                    z_68 = ATgetFirst((ATermList) y_68);
                    a_69 = (ATerm) ATgetNext((ATermList) y_68);
                    {
                      ATerm c_22 = t;
                      int d_22 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm b_69 = NULL;
                          if(((r_68 != NULL) && (r_68 != x_68)))
                            _fail(x_68);
                          else
                            r_68 = x_68;
                          {
                            if(((s_68 != NULL) && (s_68 != z_68)))
                              _fail(z_68);
                            else
                              s_68 = z_68;
                            {
                              if(((u_68 != NULL) && (u_68 != a_69)))
                                _fail(a_69);
                              else
                                u_68 = a_69;
                              {
                                t = not_null(s_68);
                                {
                                  t = t_96(t);
                                  {
                                    ATerm c_69 = NULL,e_69 = NULL;
                                    ATerm d_69 = NULL;
                                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_68), term_x_15);
                                    {
                                      t = add_0(t);
                                      {
                                        d_69 = t;
                                        if(((c_69 != NULL) && (c_69 != d_69)))
                                          _fail(d_69);
                                        else
                                          c_69 = d_69;
                                      }
                                    }
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_69), not_null(u_68));
                                      {
                                        t = l_69(t);
                                        {
                                          e_69 = t;
                                          if(((b_69 != NULL) && (b_69 != e_69)))
                                            _fail(e_69);
                                          else
                                            b_69 = e_69;
                                        }
                                      }
                                    }
                                    t = (ATerm) ATinsert(CheckATermList(not_null(b_69)), (ATerm) ATmakeAppl(sym__2, not_null(r_68), not_null(s_68)));
                                  }
                                }
                              }
                            }
                          }
                          LocalPopChoice(d_22);
                        }
                      else
                        {
                          t = c_22;
                          {
                            ATerm j_69 = NULL;
                            if(((r_68 != NULL) && (r_68 != x_68)))
                              _fail(x_68);
                            else
                              r_68 = x_68;
                            {
                              if(((s_68 != NULL) && (s_68 != z_68)))
                                _fail(z_68);
                              else
                                s_68 = z_68;
                              {
                                if(((u_68 != NULL) && (u_68 != a_69)))
                                  _fail(a_69);
                                else
                                  u_68 = a_69;
                                {
                                  ATerm k_69 = NULL;
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(r_68), not_null(u_68));
                                  {
                                    t = l_69(t);
                                    {
                                      k_69 = t;
                                      if(((j_69 != NULL) && (j_69 != k_69)))
                                        _fail(k_69);
                                      else
                                        j_69 = k_69;
                                    }
                                  }
                                  t = (ATerm) ATinsert(CheckATermList(not_null(j_69)), not_null(s_68));
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
    t = l_69(t);
  }
  return(t);
}
ATerm no_labels_0 (ATerm t)
{
  ATerm j_3 (ATerm t)
  {
    ATerm k_3 (ATerm t)
    {
      ATerm t_69 = NULL,x_69 = NULL,y_69 = NULL;
      t_69 = t;
      s_69 :
      if(match_cons(t_69, sym_label_2))
        {
          x_69 = ATgetArgument(t_69, 0);
          y_69 = ATgetArgument(t_69, 1);
          t = not_null(y_69);
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = try_1(t, k_3);
    return(t);
  }
  t = map_1(t, j_3);
  return(t);
}
ATerm number_nonterminals_0 (ATerm t)
{
  t = no_labels_0(t);
  t = number_node_1(t, NonTerminal_0);
  return(t);
}
ATerm argument_list_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm m_3 (ATerm t)
    {
      ATerm j_70 = NULL;
      j_70 = t;
      {
        ATerm e_22 = t;
        if((PushChoice() == 0))
          {
            t = is_list_0(t);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = e_22;
          }
        t = (ATerm) ATinsert(ATempty, not_null(j_70));
      }
      return(t);
    }
    t = try_1(t, m_3);
    return(t);
  }
  t = map_1(t, l_3);
  t = concat_0(t);
  return(t);
}
ATerm Arg_1 (ATerm t, ATerm v_0 (ATerm))
{
  ATerm v_70 = NULL,w_70 = NULL;
  v_70 = t;
  u_70 :
  if(match_cons(v_70, sym_Arg_1))
    {
      w_70 = ATgetArgument(v_70, 0);
      {
        ATerm f_22 = t;
        int g_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_71 = NULL,d_71 = NULL;
            ATerm c_71 = NULL;
            t = SSLgetAnnotations(not_null(v_70));
            {
              c_71 = t;
              if(((b_71 != NULL) && (b_71 != c_71)))
                _fail(c_71);
              else
                b_71 = c_71;
            }
            {
              t = not_null(w_70);
              {
                ATerm f_71 = NULL;
                t = v_0(t);
                {
                  d_71 = t;
                  {
                    ATerm g_71 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(d_71)), not_null(b_71));
                    {
                      g_71 = t;
                      if(((f_71 != NULL) && (f_71 != g_71)))
                        _fail(g_71);
                      else
                        f_71 = g_71;
                    }
                    t = not_null(f_71);
                  }
                }
              }
            }
            LocalPopChoice(g_22);
          }
        else
          {
            t = f_22;
            {
              ATerm j_71 = NULL,l_77 = NULL;
              ATerm k_71 = NULL;
              t = SSLgetAnnotations(not_null(v_70));
              {
                k_71 = t;
                if(((j_71 != NULL) && (j_71 != k_71)))
                  _fail(k_71);
                else
                  j_71 = k_71;
              }
              {
                t = not_null(w_70);
                {
                  ATerm p_77 = NULL;
                  t = v_0(t);
                  {
                    l_77 = t;
                    {
                      ATerm q_77 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Arg_1, not_null(l_77)), not_null(j_71));
                      {
                        q_77 = t;
                        if(((p_77 != NULL) && (p_77 != q_77)))
                          _fail(q_77);
                        else
                          p_77 = q_77;
                      }
                      t = not_null(p_77);
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
ATerm mkterm_0 (ATerm t)
{
  ATerm b_78 = NULL,c_78 = NULL,d_78 = NULL;
  b_78 = t;
  a_78 :
  if(match_cons(b_78, sym__2))
    {
      c_78 = ATgetArgument(b_78, 0);
      d_78 = ATgetArgument(b_78, 1);
      t = SSL_mkterm(not_null(c_78), not_null(d_78));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flat_alt_0 (ATerm t)
{
  ATerm m_78 = NULL,n_78 = NULL,o_78 = NULL,p_78 = NULL,q_78 = NULL;
  ATerm b_79 (ATerm t)
  {
    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(q_78)), not_null(p_78));
    return(t);
  }
  o_78 = t;
  k_78 :
  if(match_cons(o_78, sym_alt_2))
    {
      p_78 = ATgetArgument(o_78, 0);
      q_78 = ATgetArgument(o_78, 1);
      l_78 :
      if(match_cons(q_78, sym_alt_2))
        {
          m_78 = ATgetArgument(q_78, 0);
          n_78 = ATgetArgument(q_78, 1);
          {
            ATerm l_22 = t;
            int m_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm u_78 = NULL;
                ATerm v_78 = NULL;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(m_78), not_null(n_78));
                {
                  t = flat_alt_0(t);
                  {
                    v_78 = t;
                    if(((u_78 != NULL) && (u_78 != v_78)))
                      _fail(v_78);
                    else
                      u_78 = v_78;
                  }
                }
                t = (ATerm) ATinsert(CheckATermList(not_null(u_78)), not_null(p_78));
                LocalPopChoice(m_22);
              }
            else
              {
                t = l_22;
                t = b_79(t);
              }
          }
        }
      else
        {
          t = b_79(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm symbol2abox_1 (ATerm t, ATerm q_96 (ATerm))
{
  ATerm d_80 = NULL,e_80 = NULL,f_80 = NULL;
  ATerm n_3 (ATerm t)
  {
    t = term_n_9;
    t = q_96(t);
    return(t);
  }
  t = split_2(t, n_3, _id);
  {
    ATerm y_81 (ATerm t)
    {
      ATerm g_80 = NULL,h_80 = NULL,i_80 = NULL,j_80 = NULL,k_80 = NULL,l_80 = NULL,m_80 = NULL,n_80 = NULL,o_80 = NULL,p_80 = NULL,q_80 = NULL;
      ATerm a_82 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm b_82 (ATerm t)
      {
        t = (ATerm) ATempty;
        return(t);
      }
      ATerm c_82 (ATerm t)
      {
        ATerm r_80 = NULL,s_80 = NULL,t_80 = NULL,u_80 = NULL;
        if(((d_80 != NULL) && (d_80 != m_80)))
          _fail(m_80);
        else
          d_80 = m_80;
        {
          if(((e_80 != NULL) && (e_80 != n_80)))
            _fail(n_80);
          else
            e_80 = n_80;
          {
            if(((f_80 != NULL) && (f_80 != p_80)))
              _fail(p_80);
            else
              f_80 = p_80;
            {
              if(((r_80 != NULL) && (r_80 != j_80)))
                _fail(j_80);
              else
                r_80 = j_80;
              {
                if(((s_80 != NULL) && (s_80 != h_80)))
                  _fail(h_80);
                else
                  s_80 = h_80;
                {
                  if(((t_80 != NULL) && (t_80 != i_80)))
                    _fail(i_80);
                  else
                    t_80 = i_80;
                  {
                    t = (ATerm) ATmakeAppl(sym_alt_2, not_null(r_80), (ATerm) ATmakeAppl(sym_alt_2, not_null(s_80), not_null(t_80)));
                    {
                      ATerm w_80 = NULL;
                      t = flat_alt_0(t);
                      {
                        u_80 = t;
                        {
                          t = (ATerm) ATmakeAppl(sym__2, term_t_22, not_null(u_80));
                          {
                            t = mkterm_0(t);
                            {
                              w_80 = t;
                              {
                                t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(d_80), not_null(e_80)), (ATerm) ATmakeAppl(sym__2, not_null(f_80), not_null(w_80)));
                                {
                                  t = y_81(t);
                                  {
                                    ATerm o_3 (ATerm t)
                                    {
                                      ATerm p_3 (ATerm t)
                                      {
                                        ATerm q_3 (ATerm t)
                                        {
                                          t = Arg_1(t, _id);
                                          t = term_y_22;
                                          return(t);
                                        }
                                        t = try_1(t, q_3);
                                        return(t);
                                      }
                                      t = topdown_1(t, p_3);
                                      return(t);
                                    }
                                    t = Cons_2(t, o_3, _id);
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
      ATerm d_82 (ATerm t)
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_80), not_null(n_80)), (ATerm) ATmakeAppl(sym__2, not_null(p_80), not_null(j_80)));
        t = y_81(t);
        return(t);
      }
      ATerm e_82 (ATerm t)
      {
        ATerm g_81 = NULL,h_81 = NULL,n_81 = NULL;
        ATerm i_81 = NULL;
        ATerm k_81 = NULL,l_81 = NULL,m_81 = NULL;
        t = not_null(q_80);
        {
          i_81 = t;
          {
            t = SSL_explode_term(not_null(i_81));
            {
              k_81 = t;
              n_79 :
              if(match_cons(k_81, sym__2))
                {
                  l_81 = ATgetArgument(k_81, 0);
                  m_81 = ATgetArgument(k_81, 1);
                  {
                    if(((g_81 != NULL) && (g_81 != l_81)))
                      _fail(l_81);
                    else
                      g_81 = l_81;
                    if(((h_81 != NULL) && (h_81 != m_81)))
                      _fail(m_81);
                    else
                      h_81 = m_81;
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
          t = (ATerm) ATmakeAppl(sym__2, not_null(n_80), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_selector_2, not_null(p_80), not_null(g_81))));
          {
            ATerm p_81 = NULL,w_81 = NULL;
            t = conc_0(t);
            {
              n_81 = t;
              {
                t = not_null(h_81);
                {
                  t = argument_list_0(t);
                  {
                    t = number_nonterminals_0(t);
                    {
                      ATerm z_22;
                      z_22 = t;
                      {
                        ATerm q_81 = NULL;
                        t = make_0(t);
                        {
                          q_81 = t;
                          if(((p_81 != NULL) && (p_81 != q_81)))
                            _fail(q_81);
                          else
                            p_81 = q_81;
                        }
                      }
                      t = z_22;
                      {
                        ATerm r_3 (ATerm t)
                        {
                          ATerm r_81 = NULL;
                          ATerm t_81 = NULL;
                          r_81 = t;
                          {
                            ATerm u_81 = NULL;
                            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym__2, not_null(m_80), not_null(n_81)), not_null(r_81));
                            {
                              t = y_81(t);
                              {
                                u_81 = t;
                                if(((t_81 != NULL) && (t_81 != u_81)))
                                  _fail(u_81);
                                else
                                  t_81 = u_81;
                              }
                            }
                            t = not_null(t_81);
                          }
                          return(t);
                        }
                        t = map_1(t, r_3);
                        {
                          t = concat_0(t);
                          {
                            w_81 = t;
                            t = (ATerm) ATinsert(CheckATermList(not_null(w_81)), (ATerm) ATmakeAppl(sym_PP_Entry_2, (ATerm)ATmakeAppl(sym_Path_2, not_null(m_80), not_null(n_81)), not_null(p_81)));
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
      k_80 = t;
      t_79 :
      if(match_cons(k_80, sym__2))
        {
          l_80 = ATgetArgument(k_80, 0);
          o_80 = ATgetArgument(k_80, 1);
          u_79 :
          if(match_cons(o_80, sym_lit_1))
            {
              p_80 = ATgetArgument(o_80, 0);
              v_79 :
              t = (ATerm) ATempty;
            }
          else
            {
              if(match_cons(o_80, sym__2))
                {
                  p_80 = ATgetArgument(o_80, 0);
                  q_80 = ATgetArgument(o_80, 1);
                  w_79 :
                  if(match_cons(q_80, sym_sort_1))
                    {
                      j_80 = ATgetArgument(q_80, 0);
                      x_79 :
                      if(match_cons(l_80, sym__2))
                        {
                          m_80 = ATgetArgument(l_80, 0);
                          n_80 = ATgetArgument(l_80, 1);
                          {
                            ATerm a_23 = t;
                            int b_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = a_82(t);
                                LocalPopChoice(b_23);
                              }
                            else
                              {
                                t = a_23;
                                t = e_82(t);
                              }
                          }
                        }
                      else
                        {
                          t = a_82(t);
                        }
                    }
                  else
                    {
                      if(match_cons(q_80, sym_char_class_1))
                        {
                          j_80 = ATgetArgument(q_80, 0);
                          y_79 :
                          if(match_cons(l_80, sym__2))
                            {
                              m_80 = ATgetArgument(l_80, 0);
                              n_80 = ATgetArgument(l_80, 1);
                              {
                                ATerm c_23 = t;
                                int d_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = b_82(t);
                                    LocalPopChoice(d_23);
                                  }
                                else
                                  {
                                    t = c_23;
                                    t = e_82(t);
                                  }
                              }
                            }
                          else
                            {
                              t = b_82(t);
                            }
                        }
                      else
                        {
                          if(match_cons(q_80, sym_alt_2))
                            {
                              j_80 = ATgetArgument(q_80, 0);
                              g_80 = ATgetArgument(q_80, 1);
                              z_79 :
                              if(match_cons(l_80, sym__2))
                                {
                                  m_80 = ATgetArgument(l_80, 0);
                                  n_80 = ATgetArgument(l_80, 1);
                                  a_80 :
                                  if(match_cons(g_80, sym_alt_2))
                                    {
                                      h_80 = ATgetArgument(g_80, 0);
                                      i_80 = ATgetArgument(g_80, 1);
                                      {
                                        ATerm e_23 = t;
                                        int f_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = c_82(t);
                                            LocalPopChoice(f_23);
                                          }
                                        else
                                          {
                                            t = e_23;
                                            t = e_82(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      t = e_82(t);
                                    }
                                }
                              else
                                {
                                  _fail(t);
                                }
                            }
                          else
                            {
                              if(match_cons(q_80, sym_bracket_symbol_1))
                                {
                                  j_80 = ATgetArgument(q_80, 0);
                                  b_80 :
                                  if(match_cons(l_80, sym__2))
                                    {
                                      m_80 = ATgetArgument(l_80, 0);
                                      n_80 = ATgetArgument(l_80, 1);
                                      {
                                        ATerm g_23 = t;
                                        int l_23 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            t = d_82(t);
                                            LocalPopChoice(l_23);
                                          }
                                        else
                                          {
                                            t = g_23;
                                            t = e_82(t);
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
                                  c_80 :
                                  if(match_cons(l_80, sym__2))
                                    {
                                      m_80 = ATgetArgument(l_80, 0);
                                      n_80 = ATgetArgument(l_80, 1);
                                      t = e_82(t);
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
    t = y_81(t);
  }
  return(t);
}
ATerm Fst_0 (ATerm t)
{
  ATerm u_82 = NULL;
  ATerm w_82 = NULL,x_82 = NULL;
  u_82 = t;
  {
    ATerm y_82 = NULL;
    ATerm a_83 = NULL,b_83 = NULL,c_83 = NULL,d_83 = NULL,e_83 = NULL;
    t = not_null(u_82);
    {
      y_82 = t;
      {
        t = SSL_explode_term(not_null(y_82));
        {
          a_83 = t;
          r_82 :
          if(match_cons(a_83, sym__2))
            {
              b_83 = ATgetArgument(a_83, 0);
              c_83 = ATgetArgument(a_83, 1);
              s_82 :
              if(match_string(b_83, ""))
                {
                  t_82 :
                  if(((ATgetType(c_83) == AT_LIST) && ((ATermList) c_83 != ATempty)))
                    {
                      d_83 = ATgetFirst((ATermList) c_83);
                      e_83 = (ATerm) ATgetNext((ATermList) c_83);
                      {
                        if(((x_82 != NULL) && (x_82 != d_83)))
                          _fail(d_83);
                        else
                          x_82 = d_83;
                        if(((w_82 != NULL) && (w_82 != e_83)))
                          _fail(e_83);
                        else
                          w_82 = e_83;
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
    t = not_null(x_82);
  }
  return(t);
}
ATerm get_pp_entry_0 (ATerm t)
{
  ATerm u_83 = NULL,v_83 = NULL,w_83 = NULL,x_83 = NULL,y_83 = NULL,z_83 = NULL;
  ATerm u_84 (ATerm t)
  {
    ATerm c_84 = NULL,d_84 = NULL,e_84 = NULL;
    ATerm m_23 = t;
    int p_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = not_null(z_83);
        {
          t = pp_table_get_0(t);
          t = Snd_0(t);
        }
        LocalPopChoice(p_23);
      }
    else
      {
        t = m_23;
        {
          ATerm p_84 = NULL;
          t = not_null(z_83);
          {
            t = reverse_0(t);
            {
              ATerm s_3 (ATerm t)
              {
                ATerm f_84 = NULL;
                f_84 = t;
                if(((e_84 != NULL) && (e_84 != f_84)))
                  _fail(f_84);
                else
                  e_84 = f_84;
                return(t);
              }
              ATerm t_3 (ATerm t)
              {
                ATerm g_84 = NULL;
                t = reverse_0(t);
                {
                  g_84 = t;
                  if(((c_84 != NULL) && (c_84 != g_84)))
                    _fail(g_84);
                  else
                    c_84 = g_84;
                }
                return(t);
              }
              t = Cons_2(t, s_3, t_3);
              {
                t = not_null(c_84);
                {
                  t = pp_table_get_0(t);
                  {
                    t = Fst_0(t);
                    {
                      ATerm h_84 = NULL,i_84 = NULL,j_84 = NULL,k_84 = NULL,l_84 = NULL;
                      k_84 = t;
                      o_83 :
                      if(match_cons(k_84, sym_Path_2))
                        {
                          l_84 = ATgetArgument(k_84, 0);
                          h_84 = ATgetArgument(k_84, 1);
                          p_83 :
                          if(((ATgetType(h_84) == AT_LIST) && ((ATermList) h_84 != ATempty)))
                            {
                              i_84 = ATgetFirst((ATermList) h_84);
                              j_84 = (ATerm) ATgetNext((ATermList) h_84);
                              q_83 :
                              if(((ATermList) j_84 == ATempty))
                                {
                                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_84), (ATerm) ATinsert(ATempty, not_null(i_84)));
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
                          if(match_cons(k_84, sym_Path1_1))
                            {
                              l_84 = ATgetArgument(k_84, 0);
                              t = (ATerm) ATmakeAppl(sym__2, not_null(l_84), (ATerm) ATempty);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      {
                        p_84 = t;
                        {
                          if(((d_84 != NULL) && (d_84 != p_84)))
                            _fail(p_84);
                          else
                            d_84 = p_84;
                          {
                            t = (ATerm) ATmakeAppl(sym__2, not_null(e_84), not_null(v_83));
                            {
                              ATerm u_3 (ATerm t)
                              {
                                t = not_null(d_84);
                                return(t);
                              }
                              t = symbol2abox_1(t, u_3);
                              {
                                t = map_1(t, StoreEntryIfNotExists_0);
                                {
                                  t = not_null(z_83);
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
  ATerm v_84 (ATerm t)
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = not_null(z_83);
        {
          t = pp_table_get_0(t);
          t = Snd_0(t);
        }
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        {
          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(w_83), not_null(x_83), not_null(y_83));
          {
            t = generate_pp_entries_0(t);
            t = map_1(t, StoreEntryIfNotExists_0);
          }
          {
            t = not_null(z_83);
            {
              t = pp_table_get_0(t);
              t = Snd_0(t);
            }
          }
        }
      }
    return(t);
  }
  u_83 = t;
  s_83 :
  if(match_cons(u_83, sym__2))
    {
      v_83 = ATgetArgument(u_83, 0);
      z_83 = ATgetArgument(u_83, 1);
      t_83 :
      if(match_cons(v_83, sym_prod_3))
        {
          w_83 = ATgetArgument(v_83, 0);
          x_83 = ATgetArgument(v_83, 1);
          y_83 = ATgetArgument(v_83, 2);
          {
            ATerm s_23 = t;
            int t_23 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = u_84(t);
                LocalPopChoice(t_23);
              }
            else
              {
                t = s_23;
                t = v_84(t);
              }
          }
        }
      else
        {
          t = u_84(t);
        }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm prod_3 (ATerm t, ATerm s_0 (ATerm), ATerm t_0 (ATerm), ATerm u_0 (ATerm))
{
  ATerm o_85 = NULL,p_85 = NULL,q_85 = NULL,r_85 = NULL;
  o_85 = t;
  n_85 :
  if(match_cons(o_85, sym_prod_3))
    {
      p_85 = ATgetArgument(o_85, 0);
      q_85 = ATgetArgument(o_85, 1);
      r_85 = ATgetArgument(o_85, 2);
      {
        ATerm u_23 = t;
        int v_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_85 = NULL,y_85 = NULL;
            ATerm x_85 = NULL;
            t = SSLgetAnnotations(not_null(o_85));
            {
              x_85 = t;
              if(((w_85 != NULL) && (w_85 != x_85)))
                _fail(x_85);
              else
                w_85 = x_85;
            }
            {
              t = not_null(p_85);
              {
                ATerm a_86 = NULL;
                t = s_0(t);
                {
                  y_85 = t;
                  {
                    t = not_null(q_85);
                    {
                      ATerm c_86 = NULL;
                      t = t_0(t);
                      {
                        a_86 = t;
                        {
                          t = not_null(r_85);
                          {
                            ATerm e_86 = NULL;
                            t = u_0(t);
                            {
                              c_86 = t;
                              {
                                ATerm f_86 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(y_85), not_null(a_86), not_null(c_86)), not_null(w_85));
                                {
                                  f_86 = t;
                                  if(((e_86 != NULL) && (e_86 != f_86)))
                                    _fail(f_86);
                                  else
                                    e_86 = f_86;
                                }
                                t = not_null(e_86);
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
            LocalPopChoice(v_23);
          }
        else
          {
            t = u_23;
            {
              ATerm k_86 = NULL,m_86 = NULL;
              ATerm l_86 = NULL;
              t = SSLgetAnnotations(not_null(o_85));
              {
                l_86 = t;
                if(((k_86 != NULL) && (k_86 != l_86)))
                  _fail(l_86);
                else
                  k_86 = l_86;
              }
              {
                t = not_null(p_85);
                {
                  ATerm o_86 = NULL;
                  t = s_0(t);
                  {
                    m_86 = t;
                    {
                      t = not_null(q_85);
                      {
                        ATerm q_86 = NULL;
                        t = t_0(t);
                        {
                          o_86 = t;
                          {
                            t = not_null(r_85);
                            {
                              ATerm s_86 = NULL;
                              t = u_0(t);
                              {
                                q_86 = t;
                                {
                                  ATerm t_86 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(m_86), not_null(o_86), not_null(q_86)), not_null(k_86));
                                  {
                                    t_86 = t;
                                    if(((s_86 != NULL) && (s_86 != t_86)))
                                      _fail(t_86);
                                    else
                                      s_86 = t_86;
                                  }
                                  t = not_null(s_86);
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
    ATerm w_23;
    w_23 = t;
    {
      ATerm x_23 = t;
      if((PushChoice() == 0))
        {
          ATerm k_87 = NULL;
          t = Hd_0(t);
          {
            k_87 = t;
            g_87 :
            if(!(match_int(k_87, 34)))
              {
                _fail(t);
              }
          }
          PopChoice();
          _fail(t);
        }
      else
        {
          t = x_23;
        }
    }
    t = w_23;
    {
      ATerm y_23;
      y_23 = t;
      {
        ATerm z_23 = t;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              ATerm l_87 = NULL,m_87 = NULL,n_87 = NULL;
              l_87 = t;
              h_87 :
              if(((ATgetType(l_87) == AT_LIST) && ((ATermList) l_87 != ATempty)))
                {
                  m_87 = ATgetFirst((ATermList) l_87);
                  n_87 = (ATerm) ATgetNext((ATermList) l_87);
                  i_87 :
                  if(match_int(m_87, 34))
                    {
                      j_87 :
                      if(((ATermList) n_87 == ATempty))
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
            t = at_last_1(t, v_3);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = z_23;
          }
      }
      t = y_23;
      {
        t = Quote_0(t);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm cons_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm y_87 = NULL,z_87 = NULL;
  y_87 = t;
  x_87 :
  if(match_cons(y_87, sym_cons_1))
    {
      z_87 = ATgetArgument(y_87, 0);
      {
        ATerm a_24 = t;
        int f_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_88 = NULL,e_88 = NULL;
            ATerm d_88 = NULL;
            t = SSLgetAnnotations(not_null(y_87));
            {
              d_88 = t;
              if(((c_88 != NULL) && (c_88 != d_88)))
                _fail(d_88);
              else
                c_88 = d_88;
            }
            {
              t = not_null(z_87);
              {
                ATerm g_88 = NULL;
                t = r_0(t);
                {
                  e_88 = t;
                  {
                    ATerm h_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(e_88)), not_null(c_88));
                    {
                      h_88 = t;
                      if(((g_88 != NULL) && (g_88 != h_88)))
                        _fail(h_88);
                      else
                        g_88 = h_88;
                    }
                    t = not_null(g_88);
                  }
                }
              }
            }
            LocalPopChoice(f_24);
          }
        else
          {
            t = a_24;
            {
              ATerm k_88 = NULL,m_88 = NULL;
              ATerm l_88 = NULL;
              t = SSLgetAnnotations(not_null(y_87));
              {
                l_88 = t;
                if(((k_88 != NULL) && (k_88 != l_88)))
                  _fail(l_88);
                else
                  k_88 = l_88;
              }
              {
                t = not_null(z_87);
                {
                  ATerm o_88 = NULL;
                  t = r_0(t);
                  {
                    m_88 = t;
                    {
                      ATerm p_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(m_88)), not_null(k_88));
                      {
                        p_88 = t;
                        if(((o_88 != NULL) && (o_88 != p_88)))
                          _fail(p_88);
                        else
                          o_88 = p_88;
                      }
                      t = not_null(o_88);
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
ATerm at_cons_1 (ATerm t, ATerm j_95 (ATerm))
{
  ATerm w_3 (ATerm t)
  {
    t = cons_1(t, j_95);
    return(t);
  }
  t = oncetd_1(t, w_3);
  return(t);
}
ATerm get_constr_0 (ATerm t)
{
  ATerm f_89 = NULL,g_89 = NULL,h_89 = NULL,i_89 = NULL,j_89 = NULL;
  g_89 = t;
  e_89 :
  if(match_cons(g_89, sym_prod_fun_4))
    {
      h_89 = ATgetArgument(g_89, 0);
      i_89 = ATgetArgument(g_89, 1);
      j_89 = ATgetArgument(g_89, 2);
      f_89 = ATgetArgument(g_89, 3);
      {
        ATerm o_89 = NULL;
        t = not_null(f_89);
        {
          ATerm x_3 (ATerm t)
          {
            ATerm p_89 = NULL,q_89 = NULL;
            p_89 = t;
            b_89 :
            if(match_cons(p_89, sym_cons_1))
              {
                q_89 = ATgetArgument(p_89, 0);
                if(((o_89 != NULL) && (o_89 != q_89)))
                  _fail(q_89);
                else
                  o_89 = q_89;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, x_3);
        }
        t = not_null(o_89);
      }
    }
  else
    {
      if(match_cons(g_89, sym_prod_3))
        {
          h_89 = ATgetArgument(g_89, 0);
          i_89 = ATgetArgument(g_89, 1);
          j_89 = ATgetArgument(g_89, 2);
          {
            ATerm u_89 = NULL;
            t = not_null(j_89);
            {
              ATerm y_3 (ATerm t)
              {
                ATerm v_89 = NULL,w_89 = NULL;
                v_89 = t;
                d_89 :
                if(match_cons(v_89, sym_cons_1))
                  {
                    w_89 = ATgetArgument(v_89, 0);
                    if(((u_89 != NULL) && (u_89 != w_89)))
                      _fail(w_89);
                    else
                      u_89 = w_89;
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = oncetd_1(t, y_3);
            }
            t = not_null(u_89);
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
  ATerm n_90 = NULL,o_90 = NULL,p_90 = NULL,q_90 = NULL,r_90 = NULL,s_90 = NULL,t_90 = NULL,u_90 = NULL,v_90 = NULL;
  q_90 = t;
  j_90 :
  if(match_cons(q_90, sym__2))
    {
      r_90 = ATgetArgument(q_90, 0);
      v_90 = ATgetArgument(q_90, 1);
      k_90 :
      if(match_cons(r_90, sym_prod_fun_4))
        {
          s_90 = ATgetArgument(r_90, 0);
          t_90 = ATgetArgument(r_90, 1);
          u_90 = ATgetArgument(r_90, 2);
          o_90 = ATgetArgument(r_90, 3);
          l_90 :
          if(match_cons(o_90, sym_attrs_1))
            {
              n_90 = ATgetArgument(o_90, 0);
              {
                ATerm b_91 = NULL;
                ATerm c_91 = NULL;
                t = (ATerm) ATmakeAppl(sym__2, not_null(n_90), not_null(v_90));
                {
                  t = conc_0(t);
                  {
                    c_91 = t;
                    if(((b_91 != NULL) && (b_91 != c_91)))
                      _fail(c_91);
                    else
                      b_91 = c_91;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_prod_fun_4, not_null(s_90), not_null(t_90), not_null(u_90), (ATerm) ATmakeAppl(sym_attrs_1, not_null(b_91)));
              }
            }
          else
            {
              if(match_cons(o_90, sym_no_attrs_0))
                {
                  t = (ATerm) ATmakeAppl(sym_prod_fun_4, not_null(s_90), not_null(t_90), not_null(u_90), (ATerm) ATmakeAppl(sym_attrs_1, not_null(v_90)));
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(match_cons(r_90, sym_prod_3))
            {
              s_90 = ATgetArgument(r_90, 0);
              t_90 = ATgetArgument(r_90, 1);
              u_90 = ATgetArgument(r_90, 2);
              m_90 :
              if(match_cons(u_90, sym_attrs_1))
                {
                  p_90 = ATgetArgument(u_90, 0);
                  {
                    ATerm l_91 = NULL;
                    ATerm m_91 = NULL;
                    t = (ATerm) ATmakeAppl(sym__2, not_null(p_90), not_null(v_90));
                    {
                      t = conc_0(t);
                      {
                        m_91 = t;
                        if(((l_91 != NULL) && (l_91 != m_91)))
                          _fail(m_91);
                        else
                          l_91 = m_91;
                      }
                    }
                    t = (ATerm) ATmakeAppl(sym_prod_3, not_null(s_90), not_null(t_90), (ATerm) ATmakeAppl(sym_attrs_1, not_null(l_91)));
                  }
                }
              else
                {
                  if(match_cons(u_90, sym_no_attrs_0))
                    {
                      t = (ATerm) ATmakeAppl(sym_prod_3, not_null(s_90), not_null(t_90), (ATerm) ATmakeAppl(sym_attrs_1, not_null(v_90)));
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
  ATerm x_91 = NULL;
  x_91 = t;
  t = (ATerm) ATinsert(ATempty, not_null(x_91));
  return(t);
}
ATerm Escape2_0 (ATerm t)
{
  ATerm c_92 = NULL;
  c_92 = t;
  b_92 :
  if(match_int(c_92, 92))
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, term_g_24), term_g_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape1_0 (ATerm t)
{
  ATerm g_92 = NULL;
  g_92 = t;
  f_92 :
  if(match_int(g_92, 34))
    {
      t = (ATerm) ATinsert(ATinsert(ATempty, term_h_24), term_g_24);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Escape_0 (ATerm t)
{
  ATerm l_24 = t;
  int n_24 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_92 = NULL,o_92 = NULL,p_92 = NULL;
      n_92 = t;
      l_92 :
      if(((ATgetType(n_92) == AT_LIST) && ((ATermList) n_92 != ATempty)))
        {
          o_92 = ATgetFirst((ATermList) n_92);
          p_92 = (ATerm) ATgetNext((ATermList) n_92);
          m_92 :
          if(match_int(o_92, 10))
            {
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_92)), term_q_24), term_g_24);
            }
          else
            {
              if(match_int(o_92, 92))
                {
                  t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_92)), term_g_24), term_g_24);
                }
              else
                {
                  if(match_int(o_92, 34))
                    {
                      t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(p_92)), term_h_24), term_g_24);
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
      LocalPopChoice(n_24);
    }
  else
    {
      t = l_24;
      {
        ATerm r_24 = t;
        int s_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Escape1_0(t);
            LocalPopChoice(s_24);
          }
        else
          {
            t = r_24;
            {
              ATerm w_24 = t;
              int y_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = Escape2_0(t);
                  LocalPopChoice(y_24);
                }
              else
                {
                  t = w_24;
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
  ATerm b_25 = t;
  int c_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = explode_string_0(t);
      {
        ATerm w_92 (ATerm t)
        {
          ATerm d_25 = t;
          int e_25 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Escape_0(t);
              {
                ATerm z_3 (ATerm t)
                {
                  t = Cons_2(t, _id, w_92);
                  return(t);
                }
                t = Cons_2(t, _id, z_3);
              }
              LocalPopChoice(e_25);
            }
          else
            {
              t = d_25;
              {
                ATerm f_25 = t;
                int g_25 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = Cons_2(t, _id, w_92);
                    LocalPopChoice(g_25);
                  }
                else
                  {
                    t = f_25;
                    t = Nil_0(t);
                  }
              }
            }
          return(t);
        }
        t = w_92(t);
        t = implode_string_0(t);
      }
      LocalPopChoice(c_25);
    }
  else
    {
      t = b_25;
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
ATerm obsolete_1 (ATerm t, ATerm p_104 (ATerm))
{
  ATerm h_25;
  h_25 = t;
  {
    t = p_104(t);
    {
      ATerm a_4 (ATerm t)
      {
        t = term_i_25;
        return(t);
      }
      t = debug_1(t, a_4);
    }
  }
  t = h_25;
  return(t);
}
ATerm in_0 (ATerm t)
{
  ATerm a_93 = NULL,b_93 = NULL,c_93 = NULL;
  a_93 = t;
  z_92 :
  if(match_cons(a_93, sym__2))
    {
      b_93 = ATgetArgument(a_93, 0);
      c_93 = ATgetArgument(a_93, 1);
      {
        ATerm b_4 (ATerm t)
        {
          t = term_j_25;
          return(t);
        }
        t = obsolete_1(t, b_4);
        {
          t = not_null(c_93);
          {
            ATerm c_4 (ATerm t)
            {
              ATerm f_93 = NULL;
              f_93 = t;
              if(((b_93 != NULL) && (b_93 != f_93)))
                _fail(f_93);
              else
                b_93 = f_93;
              return(t);
            }
            t = oncetd_1(t, c_4);
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
ATerm isAlpha_0 (ATerm t)
{
  ATerm k_25 = t;
  int l_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = isUpper_0(t);
      LocalPopChoice(l_25);
    }
  else
    {
      t = k_25;
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
  ATerm j_93 = NULL;
  ATerm d_4 (ATerm t)
  {
    ATerm m_25 = t;
    if((PushChoice() == 0))
      {
        t = empty_string_0(t);
        PopChoice();
        _fail(t);
      }
    else
      {
        t = m_25;
      }
    return(t);
  }
  t = filter_1(t, d_4);
  {
    ATerm e_4 (ATerm t)
    {
      ATerm n_25;
      n_25 = t;
      {
        t = string_Hd_0(t);
        t = isAlpha_0(t);
      }
      t = n_25;
      return(t);
    }
    t = Cons_2(t, e_4, _id);
    {
      ATerm f_4 (ATerm t)
      {
        t = term_o_25;
        return(t);
      }
      t = separate_by_1(t, f_4);
      {
        t = concat_strings_0(t);
        {
          j_93 = t;
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(j_93), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_t_27), term_s_27), term_r_27), term_q_27), term_o_27), term_n_27), term_l_27), term_g_26), term_f_26), term_z_25), term_t_25), term_r_25), term_p_25));
            {
              ATerm u_27 = t;
              if((PushChoice() == 0))
                {
                  t = in_0(t);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = u_27;
                }
              {
                t = not_null(j_93);
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
ATerm Sym2Strs_0 (ATerm t)
{
  ATerm c_95 = NULL,d_95 = NULL,e_95 = NULL,h_95 = NULL;
  h_95 = t;
  b_95 :
  if(match_cons(h_95, sym_cf_1))
    {
      d_95 = ATgetArgument(h_95, 0);
      {
        t = not_null(d_95);
        t = Sym2Strs_0(t);
      }
    }
  else
    {
      if(match_cons(h_95, sym_lex_1))
        {
          d_95 = ATgetArgument(h_95, 0);
          {
            t = not_null(d_95);
            t = Sym2Strs_0(t);
          }
        }
      else
        {
          if(match_cons(h_95, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_v_27);
            }
          else
            {
              if(match_cons(h_95, sym_seq_2))
                {
                  d_95 = ATgetArgument(h_95, 0);
                  e_95 = ATgetArgument(h_95, 1);
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(e_95)), not_null(d_95));
                    {
                      t = filter_1(t, Sym2Strs_0);
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(h_95, sym_opt_1))
                    {
                      d_95 = ATgetArgument(h_95, 0);
                      {
                        t = not_null(d_95);
                        {
                          t = Sym2Strs_0(t);
                          {
                            ATerm g_4 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_a_28);
                              return(t);
                            }
                            t = at_end_1(t, g_4);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(h_95, sym_iter_1))
                        {
                          d_95 = ATgetArgument(h_95, 0);
                          {
                            t = not_null(d_95);
                            {
                              t = Sym2Strs_0(t);
                              {
                                ATerm h_4 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_b_28);
                                  return(t);
                                }
                                t = at_end_1(t, h_4);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(h_95, sym_iter_star_1))
                            {
                              d_95 = ATgetArgument(h_95, 0);
                              {
                                t = not_null(d_95);
                                {
                                  t = Sym2Strs_0(t);
                                  {
                                    ATerm i_4 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_e_28);
                                      return(t);
                                    }
                                    t = at_end_1(t, i_4);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(h_95, sym_iter_sep_2))
                                {
                                  d_95 = ATgetArgument(h_95, 0);
                                  e_95 = ATgetArgument(h_95, 1);
                                  {
                                    ATerm e_96 = NULL,h_96 = NULL;
                                    ATerm f_28;
                                    f_28 = t;
                                    {
                                      ATerm g_96 = NULL;
                                      t = not_null(d_95);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          g_96 = t;
                                          if(((e_96 != NULL) && (e_96 != g_96)))
                                            _fail(g_96);
                                          else
                                            e_96 = g_96;
                                        }
                                      }
                                    }
                                    t = f_28;
                                    {
                                      ATerm i_96 = NULL;
                                      t = not_null(e_95);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          i_96 = t;
                                          if(((h_96 != NULL) && (h_96 != i_96)))
                                            _fail(i_96);
                                          else
                                            h_96 = i_96;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_28)), not_null(h_96)), not_null(e_96));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(h_95, sym_iter_star_sep_2))
                                    {
                                      d_95 = ATgetArgument(h_95, 0);
                                      e_95 = ATgetArgument(h_95, 1);
                                      {
                                        ATerm l_96 = NULL,o_96 = NULL;
                                        ATerm g_28;
                                        g_28 = t;
                                        {
                                          ATerm n_96 = NULL;
                                          t = not_null(d_95);
                                          {
                                            t = Sym2Strs_0(t);
                                            {
                                              n_96 = t;
                                              if(((l_96 != NULL) && (l_96 != n_96)))
                                                _fail(n_96);
                                              else
                                                l_96 = n_96;
                                            }
                                          }
                                        }
                                        t = g_28;
                                        {
                                          ATerm w_96 = NULL;
                                          t = not_null(e_95);
                                          {
                                            t = Sym2Strs_0(t);
                                            {
                                              w_96 = t;
                                              if(((o_96 != NULL) && (o_96 != w_96)))
                                                _fail(w_96);
                                              else
                                                o_96 = w_96;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_e_28)), not_null(o_96)), not_null(l_96));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(h_95, sym_iter_n_2))
                                        {
                                          d_95 = ATgetArgument(h_95, 0);
                                          e_95 = ATgetArgument(h_95, 1);
                                          {
                                            ATerm y_96 = NULL;
                                            ATerm z_96 = NULL;
                                            t = not_null(d_95);
                                            {
                                              t = Sym2Strs_0(t);
                                              {
                                                z_96 = t;
                                                if(((y_96 != NULL) && (y_96 != z_96)))
                                                  _fail(z_96);
                                                else
                                                  y_96 = z_96;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_28)), not_null(y_96));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(h_95, sym_iter_sep_n_3))
                                            {
                                              d_95 = ATgetArgument(h_95, 0);
                                              e_95 = ATgetArgument(h_95, 1);
                                              c_95 = ATgetArgument(h_95, 2);
                                              {
                                                ATerm c_97 = NULL,e_97 = NULL;
                                                ATerm r_28;
                                                r_28 = t;
                                                {
                                                  ATerm d_97 = NULL;
                                                  t = not_null(d_95);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      d_97 = t;
                                                      if(((c_97 != NULL) && (c_97 != d_97)))
                                                        _fail(d_97);
                                                      else
                                                        c_97 = d_97;
                                                    }
                                                  }
                                                }
                                                t = r_28;
                                                {
                                                  ATerm f_97 = NULL;
                                                  t = not_null(e_95);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      f_97 = t;
                                                      if(((e_97 != NULL) && (e_97 != f_97)))
                                                        _fail(f_97);
                                                      else
                                                        e_97 = f_97;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_28)), not_null(e_97)), not_null(c_97));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(h_95, sym_set_1))
                                                {
                                                  d_95 = ATgetArgument(h_95, 0);
                                                  {
                                                    ATerm h_97 = NULL;
                                                    ATerm i_97 = NULL;
                                                    t = not_null(d_95);
                                                    {
                                                      t = Sym2Strs_0(t);
                                                      {
                                                        i_97 = t;
                                                        if(((h_97 != NULL) && (h_97 != i_97)))
                                                          _fail(i_97);
                                                        else
                                                          h_97 = i_97;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_97)), (ATerm) ATinsert(ATempty, term_s_28));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(h_95, sym_pair_2))
                                                    {
                                                      d_95 = ATgetArgument(h_95, 0);
                                                      e_95 = ATgetArgument(h_95, 1);
                                                      {
                                                        ATerm l_97 = NULL,n_97 = NULL;
                                                        ATerm t_28;
                                                        t_28 = t;
                                                        {
                                                          ATerm m_97 = NULL;
                                                          t = not_null(d_95);
                                                          {
                                                            t = Sym2Strs_0(t);
                                                            {
                                                              m_97 = t;
                                                              if(((l_97 != NULL) && (l_97 != m_97)))
                                                                _fail(m_97);
                                                              else
                                                                l_97 = m_97;
                                                            }
                                                          }
                                                        }
                                                        t = t_28;
                                                        {
                                                          ATerm o_97 = NULL;
                                                          t = not_null(e_95);
                                                          {
                                                            t = Sym2Strs_0(t);
                                                            {
                                                              o_97 = t;
                                                              if(((n_97 != NULL) && (n_97 != o_97)))
                                                                _fail(o_97);
                                                              else
                                                                n_97 = o_97;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(n_97)), (ATerm) ATinsert(ATempty, term_u_28)), not_null(l_97));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(h_95, sym_func_2))
                                                        {
                                                          d_95 = ATgetArgument(h_95, 0);
                                                          e_95 = ATgetArgument(h_95, 1);
                                                          {
                                                            ATerm r_97 = NULL,t_97 = NULL;
                                                            ATerm v_28;
                                                            v_28 = t;
                                                            {
                                                              ATerm s_97 = NULL;
                                                              t = not_null(d_95);
                                                              {
                                                                t = filter_1(t, Sym2Strs_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    s_97 = t;
                                                                    if(((r_97 != NULL) && (r_97 != s_97)))
                                                                      _fail(s_97);
                                                                    else
                                                                      r_97 = s_97;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = v_28;
                                                            {
                                                              ATerm u_97 = NULL;
                                                              t = not_null(e_95);
                                                              {
                                                                t = Sym2Strs_0(t);
                                                                {
                                                                  u_97 = t;
                                                                  if(((t_97 != NULL) && (t_97 != u_97)))
                                                                    _fail(u_97);
                                                                  else
                                                                    t_97 = u_97;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_97)), (ATerm) ATinsert(ATempty, term_w_28)), not_null(r_97));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(h_95, sym_alt_2))
                                                            {
                                                              d_95 = ATgetArgument(h_95, 0);
                                                              e_95 = ATgetArgument(h_95, 1);
                                                              {
                                                                ATerm x_97 = NULL,z_97 = NULL;
                                                                ATerm x_28;
                                                                x_28 = t;
                                                                {
                                                                  ATerm y_97 = NULL;
                                                                  t = not_null(d_95);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      y_97 = t;
                                                                      if(((x_97 != NULL) && (x_97 != y_97)))
                                                                        _fail(y_97);
                                                                      else
                                                                        x_97 = y_97;
                                                                    }
                                                                  }
                                                                }
                                                                t = x_28;
                                                                {
                                                                  ATerm a_98 = NULL;
                                                                  t = not_null(e_95);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      a_98 = t;
                                                                      if(((z_97 != NULL) && (z_97 != a_98)))
                                                                        _fail(a_98);
                                                                      else
                                                                        z_97 = a_98;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_97)), (ATerm) ATinsert(ATempty, term_y_28)), not_null(x_97));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(h_95, sym_perm_1))
                                                                {
                                                                  d_95 = ATgetArgument(h_95, 0);
                                                                  {
                                                                    ATerm c_98 = NULL;
                                                                    ATerm d_98 = NULL;
                                                                    t = not_null(d_95);
                                                                    {
                                                                      t = filter_1(t, Sym2Strs_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          d_98 = t;
                                                                          if(((c_98 != NULL) && (c_98 != d_98)))
                                                                            _fail(d_98);
                                                                          else
                                                                            c_98 = d_98;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(c_98)), term_z_28);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(h_95, sym_sort_1))
                                                                    {
                                                                      d_95 = ATgetArgument(h_95, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(d_95));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(h_95, sym_lit_1))
                                                                        {
                                                                          d_95 = ATgetArgument(h_95, 0);
                                                                          {
                                                                            ATerm g_98 = NULL;
                                                                            ATerm h_98 = NULL;
                                                                            t = not_null(d_95);
                                                                            {
                                                                              ATerm j_4 (ATerm t)
                                                                              {
                                                                                t = de_quote_0(t);
                                                                                t = de_escape_0(t);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, j_4);
                                                                              {
                                                                                h_98 = t;
                                                                                if(((g_98 != NULL) && (g_98 != h_98)))
                                                                                  _fail(h_98);
                                                                                else
                                                                                  g_98 = h_98;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(g_98));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(h_95, sym_label_2))
                                                                            {
                                                                              d_95 = ATgetArgument(h_95, 0);
                                                                              e_95 = ATgetArgument(h_95, 1);
                                                                              {
                                                                                ATerm j_98 = NULL;
                                                                                ATerm k_98 = NULL;
                                                                                t = not_null(d_95);
                                                                                {
                                                                                  ATerm k_4 (ATerm t)
                                                                                  {
                                                                                    t = de_quote_0(t);
                                                                                    t = de_escape_0(t);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, k_4);
                                                                                  {
                                                                                    k_98 = t;
                                                                                    if(((j_98 != NULL) && (j_98 != k_98)))
                                                                                      _fail(k_98);
                                                                                    else
                                                                                      j_98 = k_98;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(j_98));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(h_95, sym_layout_0))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATempty, term_a_29);
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
    }
  return(t);
}
ATerm sym2strs_0 (ATerm t)
{
  t = Sym2Strs_0(t);
  {
    ATerm l_4 (ATerm t)
    {
      ATerm b_29 = t;
      int i_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = toAlphaNum_0(t);
          LocalPopChoice(i_29);
        }
      else
        {
          t = b_29;
          {
          }
        }
      return(t);
    }
    t = map_1(t, l_4);
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
  ATerm y_99 = NULL;
  y_99 = t;
  x_99 :
  if(!(match_string(y_99, "")))
    {
      _fail(t);
    }
  return(t);
}
ATerm empty_test_0 (ATerm t)
{
  ATerm j_29;
  j_29 = t;
  {
    ATerm m_4 (ATerm t)
    {
      ATerm k_29 = t;
      if((PushChoice() == 0))
        {
          t = empty_string_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = k_29;
        }
      return(t);
    }
    t = filter_1(t, m_4);
    t = Hd_0(t);
  }
  t = j_29;
  return(t);
}
ATerm isHyphen_0 (ATerm t)
{
  ATerm b_100 = NULL;
  b_100 = t;
  a_100 :
  if(match_int(b_100, 45))
    {
      t = term_n_9;
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm isLower_0 (ATerm t)
{
  ATerm e_100 = NULL;
  e_100 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(e_100), term_l_29);
    t = leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_w_29, not_null(e_100));
      t = leq_0(t);
    }
  }
  return(t);
}
ATerm isUpper_0 (ATerm t)
{
  ATerm i_100 = NULL;
  i_100 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(i_100), term_z_29);
    t = leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_30, not_null(i_100));
      t = leq_0(t);
    }
  }
  return(t);
}
ATerm leq_0 (ATerm t)
{
  ATerm d_30 = t;
  if((PushChoice() == 0))
    {
      t = gt_0(t);
      PopChoice();
      _fail(t);
    }
  else
    {
      t = d_30;
    }
  return(t);
}
ATerm isNum_0 (ATerm t)
{
  ATerm m_100 = NULL;
  m_100 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, not_null(m_100), term_e_30);
    t = leq_0(t);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_f_30, not_null(m_100));
      t = leq_0(t);
    }
  }
  return(t);
}
ATerm isAlphaNumHyphen_0 (ATerm t)
{
  ATerm g_30 = t;
  int h_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = isNum_0(t);
      LocalPopChoice(h_30);
    }
  else
    {
      t = g_30;
      {
        ATerm i_30 = t;
        int j_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = isUpper_0(t);
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            {
              ATerm k_30 = t;
              int l_30 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = isLower_0(t);
                  LocalPopChoice(l_30);
                }
              else
                {
                  t = k_30;
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
  ATerm n_102 = NULL;
  ATerm p_102 (ATerm t)
  {
    t = not_null(n_102);
    {
      t = explode_string_0(t);
      {
        ATerm m_30 = t;
        if((PushChoice() == 0))
          {
            t = map_1(t, isAlphaNumHyphen_0);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_30;
          }
      }
    }
    t = term_a_31;
    return(t);
  }
  ATerm q_102 (ATerm t)
  {
    t = term_b_31;
    return(t);
  }
  ATerm r_102 (ATerm t)
  {
    t = term_c_31;
    return(t);
  }
  ATerm s_102 (ATerm t)
  {
    t = term_h_31;
    return(t);
  }
  ATerm t_102 (ATerm t)
  {
    t = term_i_31;
    return(t);
  }
  ATerm u_102 (ATerm t)
  {
    t = term_j_31;
    return(t);
  }
  ATerm v_102 (ATerm t)
  {
    t = term_k_31;
    return(t);
  }
  ATerm b_103 (ATerm t)
  {
    t = term_n_31;
    return(t);
  }
  ATerm c_103 (ATerm t)
  {
    t = term_p_31;
    return(t);
  }
  ATerm d_103 (ATerm t)
  {
    t = term_q_31;
    return(t);
  }
  ATerm i_103 (ATerm t)
  {
    t = term_r_31;
    return(t);
  }
  ATerm j_103 (ATerm t)
  {
    t = term_s_31;
    return(t);
  }
  ATerm k_103 (ATerm t)
  {
    t = term_t_31;
    return(t);
  }
  ATerm l_103 (ATerm t)
  {
    t = term_u_31;
    return(t);
  }
  ATerm m_103 (ATerm t)
  {
    t = term_y_28;
    return(t);
  }
  ATerm o_103 (ATerm t)
  {
    t = term_v_31;
    return(t);
  }
  ATerm p_103 (ATerm t)
  {
    t = term_v_31;
    return(t);
  }
  ATerm r_103 (ATerm t)
  {
    t = term_w_31;
    return(t);
  }
  ATerm t_103 (ATerm t)
  {
    t = term_x_31;
    return(t);
  }
  ATerm u_103 (ATerm t)
  {
    t = term_c_32;
    return(t);
  }
  ATerm v_103 (ATerm t)
  {
    t = term_d_32;
    return(t);
  }
  ATerm w_103 (ATerm t)
  {
    t = term_k_32;
    return(t);
  }
  ATerm x_103 (ATerm t)
  {
    t = term_q_32;
    return(t);
  }
  ATerm y_103 (ATerm t)
  {
    t = term_s_32;
    return(t);
  }
  ATerm z_103 (ATerm t)
  {
    t = term_t_32;
    return(t);
  }
  ATerm a_104 (ATerm t)
  {
    t = term_u_32;
    return(t);
  }
  ATerm b_104 (ATerm t)
  {
    t = term_v_32;
    return(t);
  }
  ATerm c_104 (ATerm t)
  {
    t = term_w_32;
    return(t);
  }
  ATerm d_104 (ATerm t)
  {
    t = term_x_32;
    return(t);
  }
  ATerm e_104 (ATerm t)
  {
    t = term_u_28;
    return(t);
  }
  ATerm f_104 (ATerm t)
  {
    t = term_y_32;
    return(t);
  }
  ATerm g_104 (ATerm t)
  {
    t = term_z_32;
    return(t);
  }
  ATerm h_104 (ATerm t)
  {
    t = term_a_33;
    return(t);
  }
  ATerm j_104 (ATerm t)
  {
    t = term_b_33;
    return(t);
  }
  ATerm k_104 (ATerm t)
  {
    t = term_w_32;
    return(t);
  }
  ATerm l_104 (ATerm t)
  {
    t = term_c_33;
    return(t);
  }
  ATerm m_104 (ATerm t)
  {
    t = term_d_33;
    return(t);
  }
  ATerm n_104 (ATerm t)
  {
    t = term_e_33;
    return(t);
  }
  ATerm o_104 (ATerm t)
  {
    t = term_f_33;
    return(t);
  }
  ATerm q_104 (ATerm t)
  {
    t = term_g_33;
    return(t);
  }
  n_102 = t;
  m_102 :
  if(match_string(n_102, "|="))
    {
      ATerm h_33 = t;
      int i_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = p_102(t);
          LocalPopChoice(i_33);
        }
      else
        {
          t = h_33;
          t = q_102(t);
        }
    }
  else
    {
      if(match_string(n_102, "^="))
        {
          ATerm j_33 = t;
          int k_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = p_102(t);
              LocalPopChoice(k_33);
            }
          else
            {
              t = j_33;
              t = r_102(t);
            }
        }
      else
        {
          if(match_string(n_102, "&="))
            {
              ATerm l_33 = t;
              int m_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = p_102(t);
                  LocalPopChoice(m_33);
                }
              else
                {
                  t = l_33;
                  t = s_102(t);
                }
            }
          else
            {
              if(match_string(n_102, ">>="))
                {
                  ATerm n_33 = t;
                  int o_33 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = p_102(t);
                      LocalPopChoice(o_33);
                    }
                  else
                    {
                      t = n_33;
                      t = t_102(t);
                    }
                }
              else
                {
                  if(match_string(n_102, "<<="))
                    {
                      ATerm p_33 = t;
                      int q_33 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = p_102(t);
                          LocalPopChoice(q_33);
                        }
                      else
                        {
                          t = p_33;
                          t = u_102(t);
                        }
                    }
                  else
                    {
                      if(match_string(n_102, "-="))
                        {
                          ATerm r_33 = t;
                          int s_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = p_102(t);
                              LocalPopChoice(s_33);
                            }
                          else
                            {
                              t = r_33;
                              t = v_102(t);
                            }
                        }
                      else
                        {
                          if(match_string(n_102, "+="))
                            {
                              ATerm t_33 = t;
                              int u_33 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = p_102(t);
                                  LocalPopChoice(u_33);
                                }
                              else
                                {
                                  t = t_33;
                                  t = b_103(t);
                                }
                            }
                          else
                            {
                              if(match_string(n_102, "%="))
                                {
                                  ATerm v_33 = t;
                                  int w_33 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      t = p_102(t);
                                      LocalPopChoice(w_33);
                                    }
                                  else
                                    {
                                      t = v_33;
                                      t = c_103(t);
                                    }
                                }
                              else
                                {
                                  if(match_string(n_102, "/="))
                                    {
                                      ATerm x_33 = t;
                                      int y_33 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = p_102(t);
                                          LocalPopChoice(y_33);
                                        }
                                      else
                                        {
                                          t = x_33;
                                          t = d_103(t);
                                        }
                                    }
                                  else
                                    {
                                      if(match_string(n_102, "*="))
                                        {
                                          ATerm z_33 = t;
                                          int a_34 = stack_ptr;
                                          if((PushChoice() == 0))
                                            {
                                              t = p_102(t);
                                              LocalPopChoice(a_34);
                                            }
                                          else
                                            {
                                              t = z_33;
                                              t = i_103(t);
                                            }
                                        }
                                      else
                                        {
                                          if(match_string(n_102, "=>"))
                                            {
                                              ATerm f_34 = t;
                                              int g_34 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  t = p_102(t);
                                                  LocalPopChoice(g_34);
                                                }
                                              else
                                                {
                                                  t = f_34;
                                                  t = j_103(t);
                                                }
                                            }
                                          else
                                            {
                                              if(match_string(n_102, "->"))
                                                {
                                                  ATerm h_34 = t;
                                                  int i_34 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = p_102(t);
                                                      LocalPopChoice(i_34);
                                                    }
                                                  else
                                                    {
                                                      t = h_34;
                                                      t = k_103(t);
                                                    }
                                                }
                                              else
                                                {
                                                  if(match_string(n_102, ":="))
                                                    {
                                                      ATerm j_34 = t;
                                                      int r_34 = stack_ptr;
                                                      if((PushChoice() == 0))
                                                        {
                                                          t = p_102(t);
                                                          LocalPopChoice(r_34);
                                                        }
                                                      else
                                                        {
                                                          t = j_34;
                                                          t = l_103(t);
                                                        }
                                                    }
                                                  else
                                                    {
                                                      if(match_string(n_102, "||"))
                                                        {
                                                          ATerm s_34 = t;
                                                          int t_34 = stack_ptr;
                                                          if((PushChoice() == 0))
                                                            {
                                                              t = p_102(t);
                                                              LocalPopChoice(t_34);
                                                            }
                                                          else
                                                            {
                                                              t = s_34;
                                                              t = m_103(t);
                                                            }
                                                        }
                                                      else
                                                        {
                                                          if(match_string(n_102, "=="))
                                                            {
                                                              ATerm w_34 = t;
                                                              int x_34 = stack_ptr;
                                                              if((PushChoice() == 0))
                                                                {
                                                                  t = p_102(t);
                                                                  LocalPopChoice(x_34);
                                                                }
                                                              else
                                                                {
                                                                  t = w_34;
                                                                  t = o_103(t);
                                                                }
                                                            }
                                                          else
                                                            {
                                                              if(match_string(n_102, "="))
                                                                {
                                                                  ATerm y_34 = t;
                                                                  int e_35 = stack_ptr;
                                                                  if((PushChoice() == 0))
                                                                    {
                                                                      t = p_102(t);
                                                                      LocalPopChoice(e_35);
                                                                    }
                                                                  else
                                                                    {
                                                                      t = y_34;
                                                                      t = p_103(t);
                                                                    }
                                                                }
                                                              else
                                                                {
                                                                  if(match_string(n_102, "|"))
                                                                    {
                                                                      ATerm f_35 = t;
                                                                      int h_35 = stack_ptr;
                                                                      if((PushChoice() == 0))
                                                                        {
                                                                          t = p_102(t);
                                                                          LocalPopChoice(h_35);
                                                                        }
                                                                      else
                                                                        {
                                                                          t = f_35;
                                                                          t = r_103(t);
                                                                        }
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_string(n_102, ">="))
                                                                        {
                                                                          ATerm j_35 = t;
                                                                          int k_35 = stack_ptr;
                                                                          if((PushChoice() == 0))
                                                                            {
                                                                              t = p_102(t);
                                                                              LocalPopChoice(k_35);
                                                                            }
                                                                          else
                                                                            {
                                                                              t = j_35;
                                                                              t = t_103(t);
                                                                            }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_string(n_102, ">"))
                                                                            {
                                                                              ATerm l_35 = t;
                                                                              int m_35 = stack_ptr;
                                                                              if((PushChoice() == 0))
                                                                                {
                                                                                  t = p_102(t);
                                                                                  LocalPopChoice(m_35);
                                                                                }
                                                                              else
                                                                                {
                                                                                  t = l_35;
                                                                                  t = u_103(t);
                                                                                }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_string(n_102, "<="))
                                                                                {
                                                                                  ATerm n_35 = t;
                                                                                  int o_35 = stack_ptr;
                                                                                  if((PushChoice() == 0))
                                                                                    {
                                                                                      t = p_102(t);
                                                                                      LocalPopChoice(o_35);
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      t = n_35;
                                                                                      t = v_103(t);
                                                                                    }
                                                                                }
                                                                              else
                                                                                {
                                                                                  if(match_string(n_102, "<"))
                                                                                    {
                                                                                      ATerm p_35 = t;
                                                                                      int q_35 = stack_ptr;
                                                                                      if((PushChoice() == 0))
                                                                                        {
                                                                                          t = p_102(t);
                                                                                          LocalPopChoice(q_35);
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          t = p_35;
                                                                                          t = w_103(t);
                                                                                        }
                                                                                    }
                                                                                  else
                                                                                    {
                                                                                      if(match_string(n_102, "!="))
                                                                                        {
                                                                                          ATerm r_35 = t;
                                                                                          int s_35 = stack_ptr;
                                                                                          if((PushChoice() == 0))
                                                                                            {
                                                                                              t = p_102(t);
                                                                                              LocalPopChoice(s_35);
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              t = r_35;
                                                                                              t = x_103(t);
                                                                                            }
                                                                                        }
                                                                                      else
                                                                                        {
                                                                                          if(match_string(n_102, ">>"))
                                                                                            {
                                                                                              ATerm t_35 = t;
                                                                                              int x_35 = stack_ptr;
                                                                                              if((PushChoice() == 0))
                                                                                                {
                                                                                                  t = p_102(t);
                                                                                                  LocalPopChoice(x_35);
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  t = t_35;
                                                                                                  t = y_103(t);
                                                                                                }
                                                                                            }
                                                                                          else
                                                                                            {
                                                                                              if(match_string(n_102, "<<"))
                                                                                                {
                                                                                                  ATerm z_35 = t;
                                                                                                  int a_36 = stack_ptr;
                                                                                                  if((PushChoice() == 0))
                                                                                                    {
                                                                                                      t = p_102(t);
                                                                                                      LocalPopChoice(a_36);
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      t = z_35;
                                                                                                      t = z_103(t);
                                                                                                    }
                                                                                                }
                                                                                              else
                                                                                                {
                                                                                                  if(match_string(n_102, "%"))
                                                                                                    {
                                                                                                      ATerm d_36 = t;
                                                                                                      int e_36 = stack_ptr;
                                                                                                      if((PushChoice() == 0))
                                                                                                        {
                                                                                                          t = p_102(t);
                                                                                                          LocalPopChoice(e_36);
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          t = d_36;
                                                                                                          t = a_104(t);
                                                                                                        }
                                                                                                    }
                                                                                                  else
                                                                                                    {
                                                                                                      if(match_string(n_102, "~"))
                                                                                                        {
                                                                                                          ATerm f_36 = t;
                                                                                                          int g_36 = stack_ptr;
                                                                                                          if((PushChoice() == 0))
                                                                                                            {
                                                                                                              t = p_102(t);
                                                                                                              LocalPopChoice(g_36);
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              t = f_36;
                                                                                                              t = b_104(t);
                                                                                                            }
                                                                                                        }
                                                                                                      else
                                                                                                        {
                                                                                                          if(match_string(n_102, "-"))
                                                                                                            {
                                                                                                              ATerm h_36 = t;
                                                                                                              int i_36 = stack_ptr;
                                                                                                              if((PushChoice() == 0))
                                                                                                                {
                                                                                                                  t = p_102(t);
                                                                                                                  LocalPopChoice(i_36);
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  t = h_36;
                                                                                                                  {
                                                                                                                    ATerm j_36 = t;
                                                                                                                    int k_36 = stack_ptr;
                                                                                                                    if((PushChoice() == 0))
                                                                                                                      {
                                                                                                                        t = c_104(t);
                                                                                                                        LocalPopChoice(k_36);
                                                                                                                      }
                                                                                                                    else
                                                                                                                      {
                                                                                                                        t = j_36;
                                                                                                                        t = k_104(t);
                                                                                                                      }
                                                                                                                  }
                                                                                                                }
                                                                                                            }
                                                                                                          else
                                                                                                            {
                                                                                                              if(match_string(n_102, "!"))
                                                                                                                {
                                                                                                                  ATerm l_36 = t;
                                                                                                                  int m_36 = stack_ptr;
                                                                                                                  if((PushChoice() == 0))
                                                                                                                    {
                                                                                                                      t = p_102(t);
                                                                                                                      LocalPopChoice(m_36);
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      t = l_36;
                                                                                                                      t = d_104(t);
                                                                                                                    }
                                                                                                                }
                                                                                                              else
                                                                                                                {
                                                                                                                  if(match_string(n_102, "&&"))
                                                                                                                    {
                                                                                                                      ATerm n_36 = t;
                                                                                                                      int o_36 = stack_ptr;
                                                                                                                      if((PushChoice() == 0))
                                                                                                                        {
                                                                                                                          t = p_102(t);
                                                                                                                          LocalPopChoice(o_36);
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          t = n_36;
                                                                                                                          t = e_104(t);
                                                                                                                        }
                                                                                                                    }
                                                                                                                  else
                                                                                                                    {
                                                                                                                      if(match_string(n_102, "&"))
                                                                                                                        {
                                                                                                                          ATerm p_36 = t;
                                                                                                                          int q_36 = stack_ptr;
                                                                                                                          if((PushChoice() == 0))
                                                                                                                            {
                                                                                                                              t = p_102(t);
                                                                                                                              LocalPopChoice(q_36);
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              t = p_36;
                                                                                                                              t = f_104(t);
                                                                                                                            }
                                                                                                                        }
                                                                                                                      else
                                                                                                                        {
                                                                                                                          if(match_string(n_102, "/"))
                                                                                                                            {
                                                                                                                              ATerm r_36 = t;
                                                                                                                              int s_36 = stack_ptr;
                                                                                                                              if((PushChoice() == 0))
                                                                                                                                {
                                                                                                                                  t = p_102(t);
                                                                                                                                  LocalPopChoice(s_36);
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  t = r_36;
                                                                                                                                  t = g_104(t);
                                                                                                                                }
                                                                                                                            }
                                                                                                                          else
                                                                                                                            {
                                                                                                                              if(match_string(n_102, "*"))
                                                                                                                                {
                                                                                                                                  ATerm t_36 = t;
                                                                                                                                  int u_36 = stack_ptr;
                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                    {
                                                                                                                                      t = p_102(t);
                                                                                                                                      LocalPopChoice(u_36);
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      t = t_36;
                                                                                                                                      t = h_104(t);
                                                                                                                                    }
                                                                                                                                }
                                                                                                                              else
                                                                                                                                {
                                                                                                                                  if(match_string(n_102, "--"))
                                                                                                                                    {
                                                                                                                                      ATerm v_36 = t;
                                                                                                                                      int w_36 = stack_ptr;
                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                        {
                                                                                                                                          t = p_102(t);
                                                                                                                                          LocalPopChoice(w_36);
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          t = v_36;
                                                                                                                                          t = j_104(t);
                                                                                                                                        }
                                                                                                                                    }
                                                                                                                                  else
                                                                                                                                    {
                                                                                                                                      if(match_string(n_102, "++"))
                                                                                                                                        {
                                                                                                                                          ATerm x_36 = t;
                                                                                                                                          int y_36 = stack_ptr;
                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                            {
                                                                                                                                              t = p_102(t);
                                                                                                                                              LocalPopChoice(y_36);
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              t = x_36;
                                                                                                                                              t = l_104(t);
                                                                                                                                            }
                                                                                                                                        }
                                                                                                                                      else
                                                                                                                                        {
                                                                                                                                          if(match_string(n_102, "+"))
                                                                                                                                            {
                                                                                                                                              ATerm z_36 = t;
                                                                                                                                              int i_37 = stack_ptr;
                                                                                                                                              if((PushChoice() == 0))
                                                                                                                                                {
                                                                                                                                                  t = p_102(t);
                                                                                                                                                  LocalPopChoice(i_37);
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  t = z_36;
                                                                                                                                                  t = m_104(t);
                                                                                                                                                }
                                                                                                                                            }
                                                                                                                                          else
                                                                                                                                            {
                                                                                                                                              if(match_string(n_102, ";"))
                                                                                                                                                {
                                                                                                                                                  ATerm j_37 = t;
                                                                                                                                                  int k_37 = stack_ptr;
                                                                                                                                                  if((PushChoice() == 0))
                                                                                                                                                    {
                                                                                                                                                      t = p_102(t);
                                                                                                                                                      LocalPopChoice(k_37);
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      t = j_37;
                                                                                                                                                      t = n_104(t);
                                                                                                                                                    }
                                                                                                                                                }
                                                                                                                                              else
                                                                                                                                                {
                                                                                                                                                  if(match_string(n_102, ":"))
                                                                                                                                                    {
                                                                                                                                                      ATerm l_37 = t;
                                                                                                                                                      int m_37 = stack_ptr;
                                                                                                                                                      if((PushChoice() == 0))
                                                                                                                                                        {
                                                                                                                                                          t = p_102(t);
                                                                                                                                                          LocalPopChoice(m_37);
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = l_37;
                                                                                                                                                          t = o_104(t);
                                                                                                                                                        }
                                                                                                                                                    }
                                                                                                                                                  else
                                                                                                                                                    {
                                                                                                                                                      if(match_string(n_102, ","))
                                                                                                                                                        {
                                                                                                                                                          ATerm n_37 = t;
                                                                                                                                                          int o_37 = stack_ptr;
                                                                                                                                                          if((PushChoice() == 0))
                                                                                                                                                            {
                                                                                                                                                              t = p_102(t);
                                                                                                                                                              LocalPopChoice(o_37);
                                                                                                                                                            }
                                                                                                                                                          else
                                                                                                                                                            {
                                                                                                                                                              t = n_37;
                                                                                                                                                              t = q_104(t);
                                                                                                                                                            }
                                                                                                                                                        }
                                                                                                                                                      else
                                                                                                                                                        {
                                                                                                                                                          t = p_102(t);
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
ATerm Sep_1 (ATerm t, ATerm j_115 (ATerm))
{
  ATerm u_104 = NULL,v_104 = NULL,w_104 = NULL;
  u_104 = t;
  t_104 :
  if(((ATgetType(u_104) == AT_LIST) && ((ATermList) u_104 != ATempty)))
    {
      v_104 = ATgetFirst((ATermList) u_104);
      w_104 = (ATerm) ATgetNext((ATermList) u_104);
      {
        ATerm z_104 = NULL;
        ATerm a_105 = NULL;
        t = term_n_9;
        {
          t = j_115(t);
          {
            a_105 = t;
            if(((z_104 != NULL) && (z_104 != a_105)))
              _fail(a_105);
            else
              z_104 = a_105;
          }
        }
        t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(w_104)), not_null(v_104)), not_null(z_104));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm separate_by_1 (ATerm t, ATerm k_115 (ATerm))
{
  ATerm p_37 = t;
  int q_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_37);
    }
  else
    {
      t = p_37;
      {
        ATerm n_4 (ATerm t)
        {
          ATerm r_37 = t;
          int s_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(s_37);
            }
          else
            {
              t = r_37;
              {
                t = Cons_2(t, _id, n_4);
                t = Sep_1(t, k_115);
              }
            }
          return(t);
        }
        t = Cons_2(t, _id, n_4);
      }
    }
  return(t);
}
ATerm Lit2Str_0 (ATerm t)
{
  ATerm g_105 = NULL,h_105 = NULL;
  g_105 = t;
  f_105 :
  if(match_cons(g_105, sym_lit_1))
    {
      h_105 = ATgetArgument(g_105, 0);
      {
        t = not_null(h_105);
        {
          ATerm o_4 (ATerm t)
          {
            t = de_quote_0(t);
            t = de_escape_0(t);
            return(t);
          }
          t = try_1(t, o_4);
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
  ATerm l_105 = NULL;
  l_105 = t;
  t = (ATerm) ATinsert(ATempty, not_null(l_105));
  return(t);
}
ATerm list_ana_1 (ATerm t, ATerm f_95 (ATerm))
{
  ATerm b_106 (ATerm t)
  {
    ATerm t_37 = t;
    int u_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_95(t);
        t = Singleton_0(t);
        LocalPopChoice(u_37);
      }
    else
      {
        t = t_37;
        {
          ATerm v_37 = t;
          int w_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm s_105 = NULL;
              ATerm v_105 = NULL;
              s_105 = t;
              {
                ATerm w_105 = NULL;
                ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL;
                t = not_null(s_105);
                {
                  w_105 = t;
                  {
                    t = SSL_explode_term(not_null(w_105));
                    {
                      y_105 = t;
                      r_105 :
                      if(match_cons(y_105, sym__2))
                        {
                          z_105 = ATgetArgument(y_105, 0);
                          a_106 = ATgetArgument(y_105, 1);
                          if(((v_105 != NULL) && (v_105 != a_106)))
                            _fail(a_106);
                          else
                            v_105 = a_106;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  }
                }
                {
                  t = not_null(v_105);
                  {
                    t = filter_1(t, b_106);
                    t = concat_0(t);
                  }
                }
              }
              LocalPopChoice(w_37);
            }
          else
            {
              t = v_37;
              t = (ATerm) ATempty;
            }
        }
      }
    return(t);
  }
  t = b_106(t);
  return(t);
}
ATerm lit2str_0 (ATerm t)
{
  t = list_ana_1(t, Lit2Str_0);
  {
    ATerm p_4 (ATerm t)
    {
      t = term_o_25;
      return(t);
    }
    t = separate_by_1(t, p_4);
    {
      t = concat_strings_0(t);
      {
        ATerm x_37 = t;
        int y_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = toAlphaNum_0(t);
            LocalPopChoice(y_37);
          }
        else
          {
            t = x_37;
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
  ATerm g_106 = NULL;
  g_106 = t;
  {
    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_24)), not_null(g_106)), (ATerm) ATinsert(ATempty, term_h_24));
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
  ATerm q_4 (ATerm t)
  {
    ATerm z_37;
    z_37 = t;
    {
      ATerm a_38 = t;
      if((PushChoice() == 0))
        {
          t = de_quote_0(t);
          PopChoice();
          _fail(t);
        }
      else
        {
          t = a_38;
        }
    }
    t = z_37;
    t = quote_0(t);
    return(t);
  }
  t = try_1(t, q_4);
  return(t);
}
ATerm mk_constr_0 (ATerm t)
{
  ATerm a_107 = NULL,b_107 = NULL,c_107 = NULL,d_107 = NULL,e_107 = NULL;
  ATerm c_108 (ATerm t)
  {
    ATerm i_107 = NULL;
    ATerm b_38 = t;
    int c_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_107 = NULL;
        t = not_null(c_107);
        {
          t = lits2strs_0(t);
          {
            t = strs2constr_0(t);
            {
              j_107 = t;
              if(((i_107 != NULL) && (i_107 != j_107)))
                _fail(j_107);
              else
                i_107 = j_107;
            }
          }
        }
        LocalPopChoice(c_38);
      }
    else
      {
        t = b_38;
        {
          ATerm d_38 = t;
          int e_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm k_107 = NULL,n_107 = NULL,p_107 = NULL;
              ATerm f_38;
              f_38 = t;
              {
                ATerm m_107 = NULL;
                t = (ATerm) ATinsert(ATempty, not_null(d_107));
                {
                  t = syms2strs_0(t);
                  {
                    m_107 = t;
                    if(((k_107 != NULL) && (k_107 != m_107)))
                      _fail(m_107);
                    else
                      k_107 = m_107;
                  }
                }
              }
              t = f_38;
              {
                ATerm o_107 = NULL;
                t = not_null(c_107);
                {
                  t = lits2strs_0(t);
                  {
                    t = empty_test_0(t);
                    {
                      o_107 = t;
                      if(((n_107 != NULL) && (n_107 != o_107)))
                        _fail(o_107);
                      else
                        n_107 = o_107;
                    }
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(k_107), not_null(n_107));
                  {
                    t = conc_0(t);
                    {
                      t = strs2constr_0(t);
                      {
                        p_107 = t;
                        if(((i_107 != NULL) && (i_107 != p_107)))
                          _fail(p_107);
                        else
                          i_107 = p_107;
                      }
                    }
                  }
                }
              }
              LocalPopChoice(e_38);
            }
          else
            {
              t = d_38;
              {
                ATerm g_38 = t;
                int h_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm q_107 = NULL;
                    t = not_null(c_107);
                    {
                      t = syms2strs_0(t);
                      {
                        t = strs2constr_0(t);
                        {
                          q_107 = t;
                          if(((i_107 != NULL) && (i_107 != q_107)))
                            _fail(q_107);
                          else
                            i_107 = q_107;
                        }
                      }
                    }
                    LocalPopChoice(h_38);
                  }
                else
                  {
                    t = g_38;
                    {
                      ATerm r_107 = NULL,t_107 = NULL,v_107 = NULL;
                      ATerm i_38;
                      i_38 = t;
                      {
                        ATerm s_107 = NULL;
                        t = (ATerm) ATinsert(ATempty, not_null(d_107));
                        {
                          t = syms2strs_0(t);
                          {
                            s_107 = t;
                            if(((r_107 != NULL) && (r_107 != s_107)))
                              _fail(s_107);
                            else
                              r_107 = s_107;
                          }
                        }
                      }
                      t = i_38;
                      {
                        ATerm u_107 = NULL;
                        t = term_n_9;
                        {
                          t = new_0(t);
                          {
                            u_107 = t;
                            if(((t_107 != NULL) && (t_107 != u_107)))
                              _fail(u_107);
                            else
                              t_107 = u_107;
                          }
                        }
                        {
                          t = (ATerm) ATmakeAppl(sym__2, not_null(r_107), (ATerm) ATinsert(ATinsert(ATempty, not_null(t_107)), term_j_38));
                          {
                            t = conc_0(t);
                            {
                              t = strs2constr_0(t);
                              {
                                v_107 = t;
                                if(((i_107 != NULL) && (i_107 != v_107)))
                                  _fail(v_107);
                                else
                                  i_107 = v_107;
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
    t = not_null(i_107);
    return(t);
  }
  ATerm d_108 (ATerm t)
  {
    ATerm x_107 = NULL;
    ATerm y_107 = NULL,a_108 = NULL;
    ATerm z_107 = NULL;
    t = (ATerm) ATinsert(ATempty, not_null(d_107));
    {
      t = syms2strs_0(t);
      {
        z_107 = t;
        if(((y_107 != NULL) && (y_107 != z_107)))
          _fail(z_107);
        else
          y_107 = z_107;
      }
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, not_null(y_107), (ATerm) ATinsert(ATempty, term_k_38));
      {
        t = conc_0(t);
        {
          t = strs2constr_0(t);
          {
            a_108 = t;
            if(((x_107 != NULL) && (x_107 != a_108)))
              _fail(a_108);
            else
              x_107 = a_108;
          }
        }
      }
    }
    t = not_null(x_107);
    return(t);
  }
  b_107 = t;
  y_106 :
  if(match_cons(b_107, sym_prod_fun_4))
    {
      c_107 = ATgetArgument(b_107, 0);
      d_107 = ATgetArgument(b_107, 1);
      e_107 = ATgetArgument(b_107, 2);
      a_107 = ATgetArgument(b_107, 3);
      {
        t = not_null(c_107);
        t = normalize_constr_0(t);
      }
    }
  else
    {
      if(match_cons(b_107, sym_prod_3))
        {
          c_107 = ATgetArgument(b_107, 0);
          d_107 = ATgetArgument(b_107, 1);
          e_107 = ATgetArgument(b_107, 2);
          z_106 :
          if(((ATermList) c_107 == ATempty))
            {
              {
                ATerm l_38 = t;
                int m_38 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = c_108(t);
                    LocalPopChoice(m_38);
                  }
                else
                  {
                    t = l_38;
                    t = d_108(t);
                  }
              }
            }
          else
            {
              t = c_108(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm iter_star_sep_2 (ATerm t, ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm e_109 = NULL,f_109 = NULL,g_109 = NULL;
  e_109 = t;
  d_109 :
  if(match_cons(e_109, sym_iter_star_sep_2))
    {
      f_109 = ATgetArgument(e_109, 0);
      g_109 = ATgetArgument(e_109, 1);
      {
        ATerm n_38 = t;
        int o_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_109 = NULL,n_109 = NULL;
            ATerm m_109 = NULL;
            t = SSLgetAnnotations(not_null(e_109));
            {
              m_109 = t;
              if(((k_109 != NULL) && (k_109 != m_109)))
                _fail(m_109);
              else
                k_109 = m_109;
            }
            {
              t = not_null(f_109);
              {
                ATerm q_109 = NULL;
                t = p_0(t);
                {
                  n_109 = t;
                  {
                    t = not_null(g_109);
                    {
                      ATerm s_109 = NULL;
                      t = q_0(t);
                      {
                        q_109 = t;
                        {
                          ATerm t_109 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(n_109), not_null(q_109)), not_null(k_109));
                          {
                            t_109 = t;
                            if(((s_109 != NULL) && (s_109 != t_109)))
                              _fail(t_109);
                            else
                              s_109 = t_109;
                          }
                          t = not_null(s_109);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(o_38);
          }
        else
          {
            t = n_38;
            {
              ATerm c_110 = NULL,e_110 = NULL;
              ATerm d_110 = NULL;
              t = SSLgetAnnotations(not_null(e_109));
              {
                d_110 = t;
                if(((c_110 != NULL) && (c_110 != d_110)))
                  _fail(d_110);
                else
                  c_110 = d_110;
              }
              {
                t = not_null(f_109);
                {
                  ATerm g_110 = NULL;
                  t = p_0(t);
                  {
                    e_110 = t;
                    {
                      t = not_null(g_109);
                      {
                        ATerm i_110 = NULL;
                        t = q_0(t);
                        {
                          g_110 = t;
                          {
                            ATerm j_110 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(e_110), not_null(g_110)), not_null(c_110));
                            {
                              j_110 = t;
                              if(((i_110 != NULL) && (i_110 != j_110)))
                                _fail(j_110);
                              else
                                i_110 = j_110;
                            }
                            t = not_null(i_110);
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
ATerm iter_sep_2 (ATerm t, ATerm n_0 (ATerm), ATerm o_0 (ATerm))
{
  ATerm i_111 = NULL,j_111 = NULL,k_111 = NULL;
  i_111 = t;
  h_111 :
  if(match_cons(i_111, sym_iter_sep_2))
    {
      j_111 = ATgetArgument(i_111, 0);
      k_111 = ATgetArgument(i_111, 1);
      {
        ATerm p_38 = t;
        int q_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_111 = NULL,q_111 = NULL;
            ATerm p_111 = NULL;
            t = SSLgetAnnotations(not_null(i_111));
            {
              p_111 = t;
              if(((o_111 != NULL) && (o_111 != p_111)))
                _fail(p_111);
              else
                o_111 = p_111;
            }
            {
              t = not_null(j_111);
              {
                ATerm s_111 = NULL;
                t = n_0(t);
                {
                  q_111 = t;
                  {
                    t = not_null(k_111);
                    {
                      ATerm u_111 = NULL;
                      t = o_0(t);
                      {
                        s_111 = t;
                        {
                          ATerm v_111 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(q_111), not_null(s_111)), not_null(o_111));
                          {
                            v_111 = t;
                            if(((u_111 != NULL) && (u_111 != v_111)))
                              _fail(v_111);
                            else
                              u_111 = v_111;
                          }
                          t = not_null(u_111);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(q_38);
          }
        else
          {
            t = p_38;
            {
              ATerm z_111 = NULL,b_112 = NULL;
              ATerm a_112 = NULL;
              t = SSLgetAnnotations(not_null(i_111));
              {
                a_112 = t;
                if(((z_111 != NULL) && (z_111 != a_112)))
                  _fail(a_112);
                else
                  z_111 = a_112;
              }
              {
                t = not_null(j_111);
                {
                  ATerm d_112 = NULL;
                  t = n_0(t);
                  {
                    b_112 = t;
                    {
                      t = not_null(k_111);
                      {
                        ATerm k_112 = NULL;
                        t = o_0(t);
                        {
                          d_112 = t;
                          {
                            ATerm l_112 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(b_112), not_null(d_112)), not_null(z_111));
                            {
                              l_112 = t;
                              if(((k_112 != NULL) && (k_112 != l_112)))
                                _fail(l_112);
                              else
                                k_112 = l_112;
                            }
                            t = not_null(k_112);
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
ATerm iter_star_1 (ATerm t, ATerm m_0 (ATerm))
{
  ATerm g_113 = NULL,h_113 = NULL;
  g_113 = t;
  f_113 :
  if(match_cons(g_113, sym_iter_star_1))
    {
      h_113 = ATgetArgument(g_113, 0);
      {
        ATerm r_38 = t;
        int s_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_113 = NULL,m_113 = NULL;
            ATerm l_113 = NULL;
            t = SSLgetAnnotations(not_null(g_113));
            {
              l_113 = t;
              if(((k_113 != NULL) && (k_113 != l_113)))
                _fail(l_113);
              else
                k_113 = l_113;
            }
            {
              t = not_null(h_113);
              {
                ATerm o_113 = NULL;
                t = m_0(t);
                {
                  m_113 = t;
                  {
                    ATerm p_113 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(m_113)), not_null(k_113));
                    {
                      p_113 = t;
                      if(((o_113 != NULL) && (o_113 != p_113)))
                        _fail(p_113);
                      else
                        o_113 = p_113;
                    }
                    t = not_null(o_113);
                  }
                }
              }
            }
            LocalPopChoice(s_38);
          }
        else
          {
            t = r_38;
            {
              ATerm u_113 = NULL,w_113 = NULL;
              ATerm v_113 = NULL;
              t = SSLgetAnnotations(not_null(g_113));
              {
                v_113 = t;
                if(((u_113 != NULL) && (u_113 != v_113)))
                  _fail(v_113);
                else
                  u_113 = v_113;
              }
              {
                t = not_null(h_113);
                {
                  ATerm y_113 = NULL;
                  t = m_0(t);
                  {
                    w_113 = t;
                    {
                      ATerm b_114 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(w_113)), not_null(u_113));
                      {
                        b_114 = t;
                        if(((y_113 != NULL) && (y_113 != b_114)))
                          _fail(b_114);
                        else
                          y_113 = b_114;
                      }
                      t = not_null(y_113);
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
ATerm iter_1 (ATerm t, ATerm l_0 (ATerm))
{
  ATerm x_114 = NULL,y_114 = NULL;
  x_114 = t;
  w_114 :
  if(match_cons(x_114, sym_iter_1))
    {
      y_114 = ATgetArgument(x_114, 0);
      {
        ATerm t_38 = t;
        int u_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_115 = NULL,d_115 = NULL;
            ATerm c_115 = NULL;
            t = SSLgetAnnotations(not_null(x_114));
            {
              c_115 = t;
              if(((b_115 != NULL) && (b_115 != c_115)))
                _fail(c_115);
              else
                b_115 = c_115;
            }
            {
              t = not_null(y_114);
              {
                ATerm f_115 = NULL;
                t = l_0(t);
                {
                  d_115 = t;
                  {
                    ATerm g_115 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(d_115)), not_null(b_115));
                    {
                      g_115 = t;
                      if(((f_115 != NULL) && (f_115 != g_115)))
                        _fail(g_115);
                      else
                        f_115 = g_115;
                    }
                    t = not_null(f_115);
                  }
                }
              }
            }
            LocalPopChoice(u_38);
          }
        else
          {
            t = t_38;
            {
              ATerm n_115 = NULL,p_115 = NULL;
              ATerm o_115 = NULL;
              t = SSLgetAnnotations(not_null(x_114));
              {
                o_115 = t;
                if(((n_115 != NULL) && (n_115 != o_115)))
                  _fail(o_115);
                else
                  n_115 = o_115;
              }
              {
                t = not_null(y_114);
                {
                  ATerm r_115 = NULL;
                  t = l_0(t);
                  {
                    p_115 = t;
                    {
                      ATerm s_115 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(p_115)), not_null(n_115));
                      {
                        s_115 = t;
                        if(((r_115 != NULL) && (r_115 != s_115)))
                          _fail(s_115);
                        else
                          r_115 = s_115;
                      }
                      t = not_null(r_115);
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
ATerm alt_2 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm m_116 = NULL,n_116 = NULL,o_116 = NULL;
  m_116 = t;
  l_116 :
  if(match_cons(m_116, sym_alt_2))
    {
      n_116 = ATgetArgument(m_116, 0);
      o_116 = ATgetArgument(m_116, 1);
      {
        ATerm v_38 = t;
        int w_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm s_116 = NULL,u_116 = NULL;
            ATerm t_116 = NULL;
            t = SSLgetAnnotations(not_null(m_116));
            {
              t_116 = t;
              if(((s_116 != NULL) && (s_116 != t_116)))
                _fail(t_116);
              else
                s_116 = t_116;
            }
            {
              t = not_null(n_116);
              {
                ATerm w_116 = NULL;
                t = j_0(t);
                {
                  u_116 = t;
                  {
                    t = not_null(o_116);
                    {
                      ATerm y_116 = NULL;
                      t = k_0(t);
                      {
                        w_116 = t;
                        {
                          ATerm z_116 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(u_116), not_null(w_116)), not_null(s_116));
                          {
                            z_116 = t;
                            if(((y_116 != NULL) && (y_116 != z_116)))
                              _fail(z_116);
                            else
                              y_116 = z_116;
                          }
                          t = not_null(y_116);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(w_38);
          }
        else
          {
            t = v_38;
            {
              ATerm d_117 = NULL,f_117 = NULL;
              ATerm e_117 = NULL;
              t = SSLgetAnnotations(not_null(m_116));
              {
                e_117 = t;
                if(((d_117 != NULL) && (d_117 != e_117)))
                  _fail(e_117);
                else
                  d_117 = e_117;
              }
              {
                t = not_null(n_116);
                {
                  ATerm h_117 = NULL;
                  t = j_0(t);
                  {
                    f_117 = t;
                    {
                      t = not_null(o_116);
                      {
                        ATerm j_117 = NULL;
                        t = k_0(t);
                        {
                          h_117 = t;
                          {
                            ATerm k_117 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(f_117), not_null(h_117)), not_null(d_117));
                            {
                              k_117 = t;
                              if(((j_117 != NULL) && (j_117 != k_117)))
                                _fail(k_117);
                              else
                                j_117 = k_117;
                            }
                            t = not_null(j_117);
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
ATerm syntaxless_sort_0 (ATerm t)
{
  ATerm x_38 = t;
  int y_38 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1(t, _id);
      LocalPopChoice(y_38);
    }
  else
    {
      t = x_38;
      {
        ATerm z_38 = t;
        int a_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = alt_2(t, syntaxless_sort_0, syntaxless_sort_0);
            LocalPopChoice(a_39);
          }
        else
          {
            t = z_38;
            {
              ATerm b_39 = t;
              int c_39 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = opt_1(t, syntaxless_sort_0);
                  LocalPopChoice(c_39);
                }
              else
                {
                  t = b_39;
                  {
                    ATerm d_39 = t;
                    int e_39 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = iter_1(t, syntaxless_sort_0);
                        LocalPopChoice(e_39);
                      }
                    else
                      {
                        t = d_39;
                        {
                          ATerm f_39 = t;
                          int g_39 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = iter_star_1(t, syntaxless_sort_0);
                              LocalPopChoice(g_39);
                            }
                          else
                            {
                              t = f_39;
                              {
                                ATerm h_39 = t;
                                int i_39 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = iter_sep_2(t, syntaxless_sort_0, _id);
                                    LocalPopChoice(i_39);
                                  }
                                else
                                  {
                                    t = h_39;
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
  ATerm r_4 (ATerm t)
  {
    t = Cons_2(t, syntaxless_sort_0, Nil_0);
    return(t);
  }
  t = prod_3(t, r_4, _id, _id);
  {
    ATerm s_4 (ATerm t)
    {
      t = term_j_39;
      return(t);
    }
    t = has_option_1(t, s_4);
  }
  return(t);
}
ATerm is_reject_0 (ATerm t)
{
  ATerm b_118 = NULL,c_118 = NULL,d_118 = NULL,e_118 = NULL,f_118 = NULL;
  c_118 = t;
  a_118 :
  if(match_cons(c_118, sym_prod_fun_4))
    {
      d_118 = ATgetArgument(c_118, 0);
      e_118 = ATgetArgument(c_118, 1);
      f_118 = ATgetArgument(c_118, 2);
      b_118 = ATgetArgument(c_118, 3);
      {
        t = not_null(b_118);
        {
          ATerm t_4 (ATerm t)
          {
            ATerm m_118 = NULL;
            m_118 = t;
            y_117 :
            if(!(match_cons(m_118, sym_reject_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, t_4);
        }
        t = term_n_9;
      }
    }
  else
    {
      if(match_cons(c_118, sym_prod_3))
        {
          d_118 = ATgetArgument(c_118, 0);
          e_118 = ATgetArgument(c_118, 1);
          f_118 = ATgetArgument(c_118, 2);
          {
            t = not_null(f_118);
            {
              ATerm u_4 (ATerm t)
              {
                ATerm q_118 = NULL;
                q_118 = t;
                z_117 :
                if(!(match_cons(q_118, sym_reject_0)))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = oncetd_1(t, u_4);
            }
            t = term_n_9;
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
  ATerm y_118 = NULL,z_118 = NULL,a_119 = NULL,b_119 = NULL,c_119 = NULL;
  z_118 = t;
  x_118 :
  if(match_cons(z_118, sym_prod_fun_4))
    {
      a_119 = ATgetArgument(z_118, 0);
      b_119 = ATgetArgument(z_118, 1);
      c_119 = ATgetArgument(z_118, 2);
      y_118 = ATgetArgument(z_118, 3);
      {
        t = not_null(y_118);
        {
          ATerm v_4 (ATerm t)
          {
            ATerm h_119 = NULL;
            h_119 = t;
            v_118 :
            if(!(match_cons(h_119, sym_bracket_0)))
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, v_4);
        }
        t = term_n_9;
      }
    }
  else
    {
      if(match_cons(z_118, sym_prod_3))
        {
          a_119 = ATgetArgument(z_118, 0);
          b_119 = ATgetArgument(z_118, 1);
          c_119 = ATgetArgument(z_118, 2);
          {
            t = not_null(c_119);
            {
              ATerm w_4 (ATerm t)
              {
                ATerm l_119 = NULL;
                l_119 = t;
                w_118 :
                if(!(match_cons(l_119, sym_bracket_0)))
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = oncetd_1(t, w_4);
            }
            t = term_n_9;
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
  ATerm s_119 = NULL;
  s_119 = t;
  {
    ATerm k_39 = t;
    int l_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm u_119 = NULL;
        ATerm m_39;
        m_39 = t;
        {
          t = not_null(s_119);
          {
            ATerm n_39 = t;
            if((PushChoice() == 0))
              {
                ATerm o_39 = t;
                int p_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = get_constr_0(t);
                    LocalPopChoice(p_39);
                  }
                else
                  {
                    t = o_39;
                    {
                      ATerm q_39 = t;
                      int r_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = is_bracket_0(t);
                          LocalPopChoice(r_39);
                        }
                      else
                        {
                          t = q_39;
                          {
                            ATerm s_39 = t;
                            int t_39 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = is_reject_0(t);
                                LocalPopChoice(t_39);
                              }
                            else
                              {
                                t = s_39;
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
                t = n_39;
              }
          }
        }
        t = m_39;
        {
          ATerm v_119 = NULL;
          t = not_null(s_119);
          {
            t = mk_constr_0(t);
            {
              v_119 = t;
              if(((u_119 != NULL) && (u_119 != v_119)))
                _fail(v_119);
              else
                u_119 = v_119;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__2, not_null(s_119), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(u_119))));
            t = add_attributes_0(t);
          }
        }
        LocalPopChoice(l_39);
      }
    else
      {
        t = k_39;
        {
          ATerm z_119 = NULL;
          ATerm a_120 = NULL;
          t = not_null(s_119);
          {
            t = get_constr_0(t);
            {
              a_120 = t;
              if(((z_119 != NULL) && (z_119 != a_120)))
                _fail(a_120);
              else
                z_119 = a_120;
            }
          }
          {
            t = not_null(s_119);
            {
              ATerm x_4 (ATerm t)
              {
                t = not_null(z_119);
                t = uq2q_0(t);
                return(t);
              }
              t = at_cons_1(t, x_4);
            }
          }
        }
      }
  }
  return(t);
}
ATerm sort_1 (ATerm t, ATerm i_0 (ATerm))
{
  ATerm q_120 = NULL,r_120 = NULL;
  q_120 = t;
  p_120 :
  if(match_cons(q_120, sym_sort_1))
    {
      r_120 = ATgetArgument(q_120, 0);
      {
        ATerm u_39 = t;
        int v_39 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_120 = NULL,w_120 = NULL;
            ATerm v_120 = NULL;
            t = SSLgetAnnotations(not_null(q_120));
            {
              v_120 = t;
              if(((u_120 != NULL) && (u_120 != v_120)))
                _fail(v_120);
              else
                u_120 = v_120;
            }
            {
              t = not_null(r_120);
              {
                ATerm y_120 = NULL;
                t = i_0(t);
                {
                  w_120 = t;
                  {
                    ATerm z_120 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(w_120)), not_null(u_120));
                    {
                      z_120 = t;
                      if(((y_120 != NULL) && (y_120 != z_120)))
                        _fail(z_120);
                      else
                        y_120 = z_120;
                    }
                    t = not_null(y_120);
                  }
                }
              }
            }
            LocalPopChoice(v_39);
          }
        else
          {
            t = u_39;
            {
              ATerm c_121 = NULL,e_121 = NULL;
              ATerm d_121 = NULL;
              t = SSLgetAnnotations(not_null(q_120));
              {
                d_121 = t;
                if(((c_121 != NULL) && (c_121 != d_121)))
                  _fail(d_121);
                else
                  c_121 = d_121;
              }
              {
                t = not_null(r_120);
                {
                  ATerm g_121 = NULL;
                  t = i_0(t);
                  {
                    e_121 = t;
                    {
                      ATerm h_121 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(e_121)), not_null(c_121));
                      {
                        h_121 = t;
                        if(((g_121 != NULL) && (g_121 != h_121)))
                          _fail(h_121);
                        else
                          g_121 = h_121;
                      }
                      t = not_null(g_121);
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
ATerm get_templ_0 (ATerm t)
{
  ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL,h_122 = NULL,i_122 = NULL;
  d_122 = t;
  b_122 :
  if(match_cons(d_122, sym_appl_2))
    {
      e_122 = ATgetArgument(d_122, 0);
      i_122 = ATgetArgument(d_122, 1);
      c_122 :
      if(match_cons(e_122, sym_prod_3))
        {
          f_122 = ATgetArgument(e_122, 0);
          g_122 = ATgetArgument(e_122, 1);
          h_122 = ATgetArgument(e_122, 2);
          {
            ATerm o_122 = NULL,p_122 = NULL;
            ATerm v_122 = NULL;
            ATerm w_39 = t;
            int x_39 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = not_null(h_122);
                {
                  ATerm y_4 (ATerm t)
                  {
                    ATerm q_122 = NULL,r_122 = NULL;
                    q_122 = t;
                    w_121 :
                    if(match_cons(q_122, sym_cons_1))
                      {
                        r_122 = ATgetArgument(q_122, 0);
                        if(((o_122 != NULL) && (o_122 != r_122)))
                          _fail(r_122);
                        else
                          o_122 = r_122;
                      }
                    else
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  t = oncetd_1(t, y_4);
                }
                LocalPopChoice(x_39);
              }
            else
              {
                t = w_39;
                {
                  ATerm y_39 = t;
                  int z_39 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = not_null(g_122);
                      {
                        t = sort_1(t, _id);
                        {
                          t = (ATerm) ATmakeAppl(sym_prod_3, not_null(f_122), not_null(g_122), not_null(h_122));
                          {
                            t = prodcons_0(t);
                            {
                              ATerm z_4 (ATerm t)
                              {
                                ATerm a_5 (ATerm t)
                                {
                                  ATerm s_122 = NULL,t_122 = NULL;
                                  s_122 = t;
                                  y_121 :
                                  if(match_cons(s_122, sym_cons_1))
                                    {
                                      t_122 = ATgetArgument(s_122, 0);
                                      if(((o_122 != NULL) && (o_122 != t_122)))
                                        _fail(t_122);
                                      else
                                        o_122 = t_122;
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                t = oncetd_1(t, a_5);
                                return(t);
                              }
                              t = prod_3(t, _id, _id, z_4);
                            }
                          }
                        }
                      }
                      LocalPopChoice(z_39);
                    }
                  else
                    {
                      t = y_39;
                      {
                        ATerm u_122 = NULL;
                        t = term_a_40;
                        {
                          u_122 = t;
                          if(((o_122 != NULL) && (o_122 != u_122)))
                            _fail(u_122);
                          else
                            o_122 = u_122;
                        }
                      }
                    }
                }
              }
            {
              t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_prod_3, not_null(f_122), not_null(g_122), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cons_1, not_null(o_122))))), (ATerm) ATinsert(ATempty, not_null(o_122)));
              {
                t = get_pp_entry_0(t);
                {
                  v_122 = t;
                  if(((p_122 != NULL) && (p_122 != v_122)))
                    _fail(v_122);
                  else
                    p_122 = v_122;
                }
              }
            }
            t = (ATerm) ATmakeAppl(sym__2, not_null(o_122), not_null(p_122));
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
ATerm application_to_abox_0 (ATerm t)
{
  ATerm r_123 = NULL,s_123 = NULL,t_123 = NULL,u_123 = NULL,v_123 = NULL,w_123 = NULL;
  r_123 = t;
  p_123 :
  if(match_cons(r_123, sym_appl_2))
    {
      s_123 = ATgetArgument(r_123, 0);
      w_123 = ATgetArgument(r_123, 1);
      q_123 :
      if(match_cons(s_123, sym_prod_3))
        {
          t_123 = ATgetArgument(s_123, 0);
          u_123 = ATgetArgument(s_123, 1);
          v_123 = ATgetArgument(s_123, 2);
          {
            ATerm b_124 = NULL,c_124 = NULL,d_124 = NULL,e_124 = NULL;
            ATerm f_124 = NULL,g_124 = NULL,h_124 = NULL;
            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(t_123), not_null(u_123), not_null(v_123)), not_null(w_123));
            {
              t = get_templ_0(t);
              {
                f_124 = t;
                o_123 :
                if(match_cons(f_124, sym__2))
                  {
                    g_124 = ATgetArgument(f_124, 0);
                    h_124 = ATgetArgument(f_124, 1);
                    {
                      ATerm i_124 = NULL,k_124 = NULL,m_124 = NULL;
                      if(((b_124 != NULL) && (b_124 != g_124)))
                        _fail(g_124);
                      else
                        b_124 = g_124;
                      {
                        if(((c_124 != NULL) && (c_124 != h_124)))
                          _fail(h_124);
                        else
                          c_124 = h_124;
                        {
                          ATerm b_40;
                          b_40 = t;
                          {
                            ATerm j_124 = NULL;
                            t = not_null(t_123);
                            {
                              ATerm b_5 (ATerm t)
                              {
                                ATerm c_40 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = lit_1(t, _id);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = c_40;
                                  }
                                return(t);
                              }
                              t = filter_1(t, b_5);
                              {
                                j_124 = t;
                                if(((i_124 != NULL) && (i_124 != j_124)))
                                  _fail(j_124);
                                else
                                  i_124 = j_124;
                              }
                            }
                          }
                          t = b_40;
                          {
                            ATerm l_124 = NULL;
                            t = not_null(w_123);
                            {
                              ATerm c_5 (ATerm t)
                              {
                                ATerm d_40 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = lit_1(t, _id);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = d_40;
                                  }
                                return(t);
                              }
                              t = filter_1(t, c_5);
                              {
                                l_124 = t;
                                if(((k_124 != NULL) && (k_124 != l_124)))
                                  _fail(l_124);
                                else
                                  k_124 = l_124;
                              }
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__4, not_null(i_124), not_null(k_124), (ATerm)ATinsert(ATempty, not_null(b_124)), term_x_15);
                              {
                                ATerm n_124 = NULL;
                                t = seq2abox_0(t);
                                {
                                  m_124 = t;
                                  {
                                    if(((d_124 != NULL) && (d_124 != m_124)))
                                      _fail(m_124);
                                    else
                                      d_124 = m_124;
                                    {
                                      t = (ATerm) ATmakeAppl(sym__2, not_null(c_124), not_null(d_124));
                                      {
                                        t = instantiate_0(t);
                                        {
                                          n_124 = t;
                                          if(((e_124 != NULL) && (e_124 != n_124)))
                                            _fail(n_124);
                                          else
                                            e_124 = n_124;
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
            t = not_null(e_124);
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
  ATerm e_40 = t;
  int f_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = application_to_abox_0(t);
      LocalPopChoice(f_40);
    }
  else
    {
      t = e_40;
      t = fatal_ambiguity_0(t);
    }
  return(t);
}
ATerm layout_0 (ATerm t)
{
  ATerm b_125 = NULL;
  b_125 = t;
  a_125 :
  if(match_cons(b_125, sym_layout_0))
    {
      ATerm g_40 = t;
      int h_40 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_125 = NULL,f_125 = NULL;
          ATerm i_40;
          i_40 = t;
          {
            ATerm e_125 = NULL;
            t = SSLgetAnnotations(not_null(b_125));
            {
              e_125 = t;
              if(((d_125 != NULL) && (d_125 != e_125)))
                _fail(e_125);
              else
                d_125 = e_125;
            }
          }
          t = i_40;
          {
            ATerm g_125 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(d_125));
            {
              g_125 = t;
              if(((f_125 != NULL) && (f_125 != g_125)))
                _fail(g_125);
              else
                f_125 = g_125;
            }
            t = not_null(f_125);
          }
          LocalPopChoice(h_40);
        }
      else
        {
          t = g_40;
          {
            ATerm i_125 = NULL,k_125 = NULL;
            ATerm j_40;
            j_40 = t;
            {
              ATerm j_125 = NULL;
              t = SSLgetAnnotations(not_null(b_125));
              {
                j_125 = t;
                if(((i_125 != NULL) && (i_125 != j_125)))
                  _fail(j_125);
                else
                  i_125 = j_125;
              }
            }
            t = j_40;
            {
              ATerm l_125 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(i_125));
              {
                l_125 = t;
                if(((k_125 != NULL) && (k_125 != l_125)))
                  _fail(l_125);
                else
                  k_125 = l_125;
              }
              t = not_null(k_125);
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
ATerm opt_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm b_126 = NULL,c_126 = NULL;
  b_126 = t;
  a_126 :
  if(match_cons(b_126, sym_opt_1))
    {
      c_126 = ATgetArgument(b_126, 0);
      {
        ATerm k_40 = t;
        int l_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_126 = NULL,h_126 = NULL;
            ATerm g_126 = NULL;
            t = SSLgetAnnotations(not_null(b_126));
            {
              g_126 = t;
              if(((f_126 != NULL) && (f_126 != g_126)))
                _fail(g_126);
              else
                f_126 = g_126;
            }
            {
              t = not_null(c_126);
              {
                ATerm j_126 = NULL;
                t = h_0(t);
                {
                  h_126 = t;
                  {
                    ATerm k_126 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(h_126)), not_null(f_126));
                    {
                      k_126 = t;
                      if(((j_126 != NULL) && (j_126 != k_126)))
                        _fail(k_126);
                      else
                        j_126 = k_126;
                    }
                    t = not_null(j_126);
                  }
                }
              }
            }
            LocalPopChoice(l_40);
          }
        else
          {
            t = k_40;
            {
              ATerm n_126 = NULL,p_126 = NULL;
              ATerm o_126 = NULL;
              t = SSLgetAnnotations(not_null(b_126));
              {
                o_126 = t;
                if(((n_126 != NULL) && (n_126 != o_126)))
                  _fail(o_126);
                else
                  n_126 = o_126;
              }
              {
                t = not_null(c_126);
                {
                  ATerm r_126 = NULL;
                  t = h_0(t);
                  {
                    p_126 = t;
                    {
                      ATerm s_126 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(p_126)), not_null(n_126));
                      {
                        s_126 = t;
                        if(((r_126 != NULL) && (r_126 != s_126)))
                          _fail(s_126);
                        else
                          r_126 = s_126;
                      }
                      t = not_null(r_126);
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
ATerm filter_1 (ATerm t, ATerm l_107 (ATerm))
{
  ATerm m_40 = t;
  int n_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(n_40);
    }
  else
    {
      t = m_40;
      {
        ATerm o_40 = t;
        int p_40 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_5 (ATerm t)
            {
              t = filter_1(t, l_107);
              return(t);
            }
            t = Cons_2(t, l_107, d_5);
            LocalPopChoice(p_40);
          }
        else
          {
            t = o_40;
            {
              ATerm d_127 = NULL,e_127 = NULL,f_127 = NULL;
              d_127 = t;
              c_127 :
              if(((ATgetType(d_127) == AT_LIST) && ((ATermList) d_127 != ATempty)))
                {
                  e_127 = ATgetFirst((ATermList) d_127);
                  f_127 = (ATerm) ATgetNext((ATermList) d_127);
                  {
                    t = not_null(f_127);
                    t = filter_1(t, l_107);
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
  ATerm j_127 = NULL,k_127 = NULL,l_127 = NULL;
  j_127 = t;
  i_127 :
  if(((ATermList) j_127 == ATempty))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(j_127) == AT_LIST) && ((ATermList) j_127 != ATempty)))
        {
          k_127 = ATgetFirst((ATermList) j_127);
          l_127 = (ATerm) ATgetNext((ATermList) j_127);
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
ATerm topdown_1 (ATerm t, ATerm g_118 (ATerm))
{
  t = g_118(t);
  {
    ATerm e_5 (ATerm t)
    {
      t = topdown_1(t, g_118);
      return(t);
    }
    t = _all(t, e_5);
  }
  return(t);
}
ATerm sometd_1 (ATerm t, ATerm g_120 (ATerm))
{
  ATerm m_127 (ATerm t)
  {
    ATerm v_40 = t;
    int w_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = g_120(t);
        LocalPopChoice(w_40);
      }
    else
      {
        t = v_40;
        t = _some(t, m_127);
      }
    return(t);
  }
  t = m_127(t);
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm n_121 (ATerm), ATerm o_121 (ATerm))
{
  ATerm n_127 (ATerm t)
  {
    ATerm y_40 = t;
    int z_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_121(t);
        t = n_127(t);
        LocalPopChoice(z_40);
      }
    else
      {
        t = y_40;
        t = o_121(t);
      }
    return(t);
  }
  t = n_127(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_121 (ATerm))
{
  t = repeat_2(t, q_121, _id);
  return(t);
}
ATerm int_to_string_0 (ATerm t)
{
  ATerm p_127 = NULL;
  p_127 = t;
  t = SSL_int_to_string(not_null(p_127));
  return(t);
}
ATerm path_to_string_0 (ATerm t)
{
  ATerm z_127 = NULL,a_128 = NULL,b_128 = NULL;
  z_127 = t;
  y_127 :
  if(match_cons(z_127, sym_Path1_1))
    {
      a_128 = ATgetArgument(z_127, 0);
      t = not_null(a_128);
    }
  else
    {
      if(match_cons(z_127, sym_Path_2))
        {
          a_128 = ATgetArgument(z_127, 0);
          b_128 = ATgetArgument(z_127, 1);
          {
            ATerm j_128 = NULL,s_128 = NULL;
            t = not_null(b_128);
            {
              ATerm f_5 (ATerm t)
              {
                ATerm k_128 = NULL,l_128 = NULL,m_128 = NULL;
                k_128 = t;
                w_127 :
                if(match_cons(k_128, sym_selector_2))
                  {
                    l_128 = ATgetArgument(k_128, 0);
                    m_128 = ATgetArgument(k_128, 1);
                    {
                      ATerm q_128 = NULL;
                      ATerm r_128 = NULL;
                      t = not_null(l_128);
                      {
                        t = int_to_string_0(t);
                        {
                          r_128 = t;
                          if(((q_128 != NULL) && (q_128 != r_128)))
                            _fail(r_128);
                          else
                            q_128 = r_128;
                        }
                      }
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, not_null(m_128)), term_b_41), not_null(q_128)), term_a_41);
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, f_5);
              {
                t = concat_0(t);
                {
                  s_128 = t;
                  {
                    if(((j_128 != NULL) && (j_128 != s_128)))
                      _fail(s_128);
                    else
                      j_128 = s_128;
                    {
                      t = (ATerm) ATinsert(CheckATermList(not_null(j_128)), not_null(a_128));
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
  ATerm f_129 = NULL,g_129 = NULL,h_129 = NULL;
  f_129 = t;
  e_129 :
  if(match_cons(f_129, sym_Path1_1))
    {
      g_129 = ATgetArgument(f_129, 0);
      t = (ATerm) ATinsert(ATempty, not_null(g_129));
    }
  else
    {
      if(match_cons(f_129, sym_Path_2))
        {
          g_129 = ATgetArgument(f_129, 0);
          h_129 = ATgetArgument(f_129, 1);
          {
            ATerm p_129 = NULL,y_129 = NULL;
            t = not_null(h_129);
            {
              ATerm g_5 (ATerm t)
              {
                ATerm q_129 = NULL,r_129 = NULL,s_129 = NULL;
                q_129 = t;
                c_129 :
                if(match_cons(q_129, sym_selector_2))
                  {
                    r_129 = ATgetArgument(q_129, 0);
                    s_129 = ATgetArgument(q_129, 1);
                    t = not_null(r_129);
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = map_1(t, g_5);
              {
                y_129 = t;
                {
                  if(((p_129 != NULL) && (p_129 != y_129)))
                    _fail(y_129);
                  else
                    p_129 = y_129;
                  t = (ATerm) ATinsert(CheckATermList(not_null(p_129)), not_null(g_129));
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
  ATerm g_130 = NULL,h_130 = NULL,j_130 = NULL;
  g_130 = t;
  f_130 :
  if(match_cons(g_130, sym_PP_Entry_2))
    {
      h_130 = ATgetArgument(g_130, 0);
      j_130 = ATgetArgument(g_130, 1);
      {
        ATerm m_130 = NULL;
        ATerm n_130 = NULL;
        t = not_null(h_130);
        {
          t = mk_key_0(t);
          {
            n_130 = t;
            if(((m_130 != NULL) && (m_130 != n_130)))
              _fail(n_130);
            else
              m_130 = n_130;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__3, term_n_19, not_null(m_130), (ATerm) ATmakeAppl(sym__2, not_null(h_130), not_null(j_130)));
          {
            t = table_put_0(t);
            {
              t = not_null(h_130);
              {
                t = path_to_string_0(t);
                {
                  ATerm h_5 (ATerm t)
                  {
                    t = term_c_41;
                    return(t);
                  }
                  t = notify_1(t, h_5);
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
ATerm De_Escape4_0 (ATerm t)
{
  ATerm s_130 = NULL;
  s_130 = t;
  r_130 :
  if(((ATermList) s_130 == ATempty))
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
  ATerm x_130 = NULL,y_130 = NULL,z_130 = NULL;
  x_130 = t;
  w_130 :
  if(((ATgetType(x_130) == AT_LIST) && ((ATermList) x_130 != ATempty)))
    {
      y_130 = ATgetFirst((ATermList) x_130);
      z_130 = (ATerm) ATgetNext((ATermList) x_130);
      {
        ATerm c_131 = NULL;
        ATerm e_131 = NULL;
        t = not_null(z_130);
        {
          t = De_Escape_0(t);
          {
            e_131 = t;
            if(((c_131 != NULL) && (c_131 != e_131)))
              _fail(e_131);
            else
              c_131 = e_131;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(c_131)), not_null(y_130));
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
  ATerm n_131 = NULL,o_131 = NULL,p_131 = NULL,q_131 = NULL,r_131 = NULL;
  n_131 = t;
  j_131 :
  if(((ATgetType(n_131) == AT_LIST) && ((ATermList) n_131 != ATempty)))
    {
      o_131 = ATgetFirst((ATermList) n_131);
      p_131 = (ATerm) ATgetNext((ATermList) n_131);
      k_131 :
      if(match_int(o_131, 92))
        {
          l_131 :
          if(((ATgetType(p_131) == AT_LIST) && ((ATermList) p_131 != ATempty)))
            {
              q_131 = ATgetFirst((ATermList) p_131);
              r_131 = (ATerm) ATgetNext((ATermList) p_131);
              m_131 :
              if(match_int(q_131, 92))
                {
                  ATerm t_131 = NULL;
                  ATerm u_131 = NULL;
                  t = not_null(r_131);
                  {
                    t = De_Escape_0(t);
                    {
                      u_131 = t;
                      if(((t_131 != NULL) && (t_131 != u_131)))
                        _fail(u_131);
                      else
                        t_131 = u_131;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(t_131)), term_g_24);
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
  ATerm e_132 = NULL,f_132 = NULL,g_132 = NULL,h_132 = NULL,i_132 = NULL;
  e_132 = t;
  a_132 :
  if(((ATgetType(e_132) == AT_LIST) && ((ATermList) e_132 != ATempty)))
    {
      f_132 = ATgetFirst((ATermList) e_132);
      g_132 = (ATerm) ATgetNext((ATermList) e_132);
      b_132 :
      if(match_int(f_132, 92))
        {
          c_132 :
          if(((ATgetType(g_132) == AT_LIST) && ((ATermList) g_132 != ATempty)))
            {
              h_132 = ATgetFirst((ATermList) g_132);
              i_132 = (ATerm) ATgetNext((ATermList) g_132);
              d_132 :
              if(match_int(h_132, 34))
                {
                  ATerm l_132 = NULL;
                  ATerm m_132 = NULL;
                  t = not_null(i_132);
                  {
                    t = De_Escape_0(t);
                    {
                      m_132 = t;
                      if(((l_132 != NULL) && (l_132 != m_132)))
                        _fail(m_132);
                      else
                        l_132 = m_132;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(l_132)), term_h_24);
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
  ATerm d_41 = t;
  int e_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(e_41);
    }
  else
    {
      t = d_41;
      {
        ATerm f_41 = t;
        int g_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(g_41);
          }
        else
          {
            t = f_41;
            {
              ATerm h_41 = t;
              int i_41 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(i_41);
                }
              else
                {
                  t = h_41;
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
ATerm at_last_1 (ATerm t, ATerm o_114 (ATerm))
{
  ATerm p_132 (ATerm t)
  {
    ATerm j_41 = t;
    int k_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = o_114(t);
        LocalPopChoice(k_41);
      }
    else
      {
        t = j_41;
        t = Cons_2(t, _id, p_132);
      }
    return(t);
  }
  t = p_132(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm s_132 = NULL,t_132 = NULL,u_132 = NULL;
  s_132 = t;
  r_132 :
  if(((ATgetType(s_132) == AT_LIST) && ((ATermList) s_132 != ATempty)))
    {
      t_132 = ATgetFirst((ATermList) s_132);
      u_132 = (ATerm) ATgetNext((ATermList) s_132);
      t = not_null(u_132);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm a_133 = NULL,b_133 = NULL,c_133 = NULL;
  a_133 = t;
  z_132 :
  if(((ATgetType(a_133) == AT_LIST) && ((ATermList) a_133 != ATempty)))
    {
      b_133 = ATgetFirst((ATermList) a_133);
      c_133 = (ATerm) ATgetNext((ATermList) a_133);
      t = not_null(b_133);
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
    ATerm l_41;
    l_41 = t;
    {
      ATerm m_133 = NULL;
      t = Hd_0(t);
      {
        m_133 = t;
        h_133 :
        if(!(match_int(m_133, 34)))
          {
            _fail(t);
          }
      }
    }
    t = l_41;
    {
      t = Tl_0(t);
      {
        ATerm i_5 (ATerm t)
        {
          ATerm n_133 = NULL,o_133 = NULL,p_133 = NULL;
          n_133 = t;
          j_133 :
          if(((ATgetType(n_133) == AT_LIST) && ((ATermList) n_133 != ATempty)))
            {
              o_133 = ATgetFirst((ATermList) n_133);
              p_133 = (ATerm) ATgetNext((ATermList) n_133);
              k_133 :
              if(match_int(o_133, 34))
                {
                  l_133 :
                  if(((ATermList) p_133 == ATempty))
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
        t = at_last_1(t, i_5);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm S_1 (ATerm t, ATerm g_0 (ATerm))
{
  ATerm b_134 = NULL,c_134 = NULL;
  b_134 = t;
  z_133 :
  if(match_cons(b_134, sym_S_1))
    {
      c_134 = ATgetArgument(b_134, 0);
      {
        ATerm m_41 = t;
        int n_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_134 = NULL,h_134 = NULL;
            ATerm g_134 = NULL;
            t = SSLgetAnnotations(not_null(b_134));
            {
              g_134 = t;
              if(((f_134 != NULL) && (f_134 != g_134)))
                _fail(g_134);
              else
                f_134 = g_134;
            }
            {
              t = not_null(c_134);
              {
                ATerm j_134 = NULL;
                t = g_0(t);
                {
                  h_134 = t;
                  {
                    ATerm k_134 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(h_134)), not_null(f_134));
                    {
                      k_134 = t;
                      if(((j_134 != NULL) && (j_134 != k_134)))
                        _fail(k_134);
                      else
                        j_134 = k_134;
                    }
                    t = not_null(j_134);
                  }
                }
              }
            }
            LocalPopChoice(n_41);
          }
        else
          {
            t = m_41;
            {
              ATerm o_134 = NULL,q_134 = NULL;
              ATerm p_134 = NULL;
              t = SSLgetAnnotations(not_null(b_134));
              {
                p_134 = t;
                if(((o_134 != NULL) && (o_134 != p_134)))
                  _fail(p_134);
                else
                  o_134 = p_134;
              }
              {
                t = not_null(c_134);
                {
                  ATerm s_134 = NULL;
                  t = g_0(t);
                  {
                    q_134 = t;
                    {
                      ATerm t_134 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_S_1, not_null(q_134)), not_null(o_134));
                      {
                        t_134 = t;
                        if(((s_134 != NULL) && (s_134 != t_134)))
                          _fail(t_134);
                        else
                          s_134 = t_134;
                      }
                      t = not_null(s_134);
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
ATerm MakePPTerm_0 (ATerm t)
{
  ATerm n_135 = NULL,o_135 = NULL,p_135 = NULL;
  ATerm o_41 = t;
  int p_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm q_135 = NULL,r_135 = NULL,s_135 = NULL;
      q_135 = t;
      j_135 :
      if(match_cons(q_135, sym_Arg_1))
        {
          r_135 = ATgetArgument(q_135, 0);
          {
            ATerm u_135 = NULL;
            if(((o_135 != NULL) && (o_135 != r_135)))
              _fail(r_135);
            else
              o_135 = r_135;
            {
              ATerm v_135 = NULL;
              t = not_null(o_135);
              {
                t = string_to_int_0(t);
                {
                  v_135 = t;
                  if(((u_135 != NULL) && (u_135 != v_135)))
                    _fail(v_135);
                  else
                    u_135 = v_135;
                }
              }
              t = (ATerm) ATmakeAppl(sym_Arg_1, not_null(u_135));
            }
          }
        }
      else
        {
          if(match_cons(q_135, sym_Arg2_2))
            {
              r_135 = ATgetArgument(q_135, 0);
              s_135 = ATgetArgument(q_135, 1);
              {
                ATerm w_135 = NULL,y_135 = NULL;
                if(((o_135 != NULL) && (o_135 != r_135)))
                  _fail(r_135);
                else
                  o_135 = r_135;
                {
                  if(((n_135 != NULL) && (n_135 != s_135)))
                    _fail(s_135);
                  else
                    n_135 = s_135;
                  {
                    ATerm q_41;
                    q_41 = t;
                    {
                      ATerm x_135 = NULL;
                      t = not_null(o_135);
                      {
                        t = string_to_int_0(t);
                        {
                          x_135 = t;
                          if(((w_135 != NULL) && (w_135 != x_135)))
                            _fail(x_135);
                          else
                            w_135 = x_135;
                        }
                      }
                    }
                    t = q_41;
                    {
                      ATerm z_135 = NULL;
                      t = not_null(n_135);
                      {
                        t = string_to_int_0(t);
                        {
                          z_135 = t;
                          if(((y_135 != NULL) && (y_135 != z_135)))
                            _fail(z_135);
                          else
                            y_135 = z_135;
                        }
                      }
                      t = (ATerm) ATmakeAppl(sym_Arg2_2, not_null(w_135), not_null(y_135));
                    }
                  }
                }
              }
            }
          else
            {
              if(match_cons(q_135, sym_SOpt_2))
                {
                  r_135 = ATgetArgument(q_135, 0);
                  s_135 = ATgetArgument(q_135, 1);
                  {
                    if(((p_135 != NULL) && (p_135 != r_135)))
                      _fail(r_135);
                    else
                      p_135 = r_135;
                    {
                      if(((o_135 != NULL) && (o_135 != s_135)))
                        _fail(s_135);
                      else
                        o_135 = s_135;
                      t = (ATerm) ATmakeAppl(sym_SOpt_2, not_null(p_135), not_null(o_135));
                    }
                  }
                }
              else
                {
                  _fail(t);
                }
            }
        }
      LocalPopChoice(p_41);
    }
  else
    {
      t = o_41;
      {
        ATerm r_41 = t;
        int s_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_5 (ATerm t)
            {
              t = de_quote_0(t);
              t = de_escape_0(t);
              return(t);
            }
            t = S_1(t, j_5);
            LocalPopChoice(s_41);
          }
        else
          {
            t = r_41;
            {
              ATerm a_136 = NULL,b_136 = NULL,c_136 = NULL;
              a_136 = t;
              m_135 :
              if(match_cons(a_136, sym_selector_2))
                {
                  b_136 = ATgetArgument(a_136, 0);
                  c_136 = ATgetArgument(a_136, 1);
                  {
                    ATerm d_136 = NULL;
                    if(((o_135 != NULL) && (o_135 != b_136)))
                      _fail(b_136);
                    else
                      o_135 = b_136;
                    {
                      if(((p_135 != NULL) && (p_135 != c_136)))
                        _fail(c_136);
                      else
                        p_135 = c_136;
                      {
                        ATerm e_136 = NULL;
                        t = not_null(o_135);
                        {
                          t = string_to_int_0(t);
                          {
                            e_136 = t;
                            if(((d_136 != NULL) && (d_136 != e_136)))
                              _fail(e_136);
                            else
                              d_136 = e_136;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_selector_2, not_null(d_136), not_null(p_135));
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
  ATerm k_5 (ATerm t)
  {
    t = try_1(t, MakePPTerm_0);
    return(t);
  }
  t = topdown_1(t, k_5);
  return(t);
}
ATerm build_pp_table_0 (ATerm t)
{
  ATerm q_136 = NULL,r_136 = NULL;
  q_136 = t;
  p_136 :
  if(match_cons(q_136, sym_PP_Table_1))
    {
      r_136 = ATgetArgument(q_136, 0);
      {
        t = not_null(r_136);
        {
          t = reverse_0(t);
          {
            ATerm l_5 (ATerm t)
            {
              t = makePPEntry_0(t);
              t = StoreEntry_0(t);
              return(t);
            }
            t = map_1(t, l_5);
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
  ATerm t_41;
  t_41 = t;
  {
    ATerm v_136 = NULL;
    ATerm w_136 = NULL;
    w_136 = t;
    if(((v_136 != NULL) && (v_136 != w_136)))
      _fail(w_136);
    else
      v_136 = w_136;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_41, not_null(v_136));
      t = printnl_0(t);
    }
  }
  t = t_41;
  return(t);
}
ATerm fatal_error_0 (ATerm t)
{
  ATerm v_41;
  v_41 = t;
  {
    t = error_0(t);
    {
      t = term_x_15;
      t = exit_0(t);
    }
  }
  t = v_41;
  return(t);
}
ATerm type_failure_0 (ATerm t)
{
  ATerm w_41 = t;
  int x_41 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_5 (ATerm t)
      {
        t = term_y_41;
        return(t);
      }
      t = has_option_1(t, m_5);
      {
        t = (ATerm) ATinsert(ATempty, term_z_41);
        t = fatal_error_0(t);
      }
      LocalPopChoice(x_41);
    }
  else
    {
      t = w_41;
      {
        t = (ATerm) ATinsert(ATempty, term_a_42);
        t = error_0(t);
      }
    }
  return(t);
}
ATerm InId_1 (ATerm t, ATerm f_96 (ATerm))
{
  ATerm h_137 = NULL,i_137 = NULL,j_137 = NULL;
  h_137 = t;
  f_137 :
  if(match_cons(h_137, sym__2))
    {
      i_137 = ATgetArgument(h_137, 0);
      j_137 = ATgetArgument(h_137, 1);
      g_137 :
      if(match_string(i_137, "in-type"))
        {
          ATerm l_137 = NULL,m_137 = NULL;
          ATerm b_42;
          b_42 = t;
          {
            ATerm n_137 = NULL;
            ATerm p_137 = NULL,q_137 = NULL,r_137 = NULL,s_137 = NULL,t_137 = NULL;
            t = not_null(j_137);
            {
              n_137 = t;
              {
                t = SSL_explode_term(not_null(n_137));
                {
                  p_137 = t;
                  c_137 :
                  if(match_cons(p_137, sym__2))
                    {
                      q_137 = ATgetArgument(p_137, 0);
                      r_137 = ATgetArgument(p_137, 1);
                      d_137 :
                      if(((ATgetType(r_137) == AT_LIST) && ((ATermList) r_137 != ATempty)))
                        {
                          s_137 = ATgetFirst((ATermList) r_137);
                          t_137 = (ATerm) ATgetNext((ATermList) r_137);
                          e_137 :
                          if(((ATermList) t_137 == ATempty))
                            {
                              {
                                if(((m_137 != NULL) && (m_137 != q_137)))
                                  _fail(q_137);
                                else
                                  m_137 = q_137;
                                if(((l_137 != NULL) && (l_137 != s_137)))
                                  _fail(s_137);
                                else
                                  l_137 = s_137;
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
          t = b_42;
          {
            t = not_null(m_137);
            {
              ATerm c_42 = t;
              int d_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_96(t);
                  LocalPopChoice(d_42);
                }
              else
                {
                  t = c_42;
                  t = type_failure_0(t);
                }
            }
            t = not_null(l_137);
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
ATerm termid_check_1 (ATerm t, ATerm m_96 (ATerm))
{
  ATerm a_138 = NULL;
  ATerm c_138 = NULL;
  a_138 = t;
  {
    ATerm d_138 = NULL;
    t = (ATerm) ATmakeAppl(sym__2, term_e_42, not_null(a_138));
    {
      t = InId_1(t, m_96);
      {
        d_138 = t;
        if(((c_138 != NULL) && (c_138 != d_138)))
          _fail(d_138);
        else
          c_138 = d_138;
      }
    }
    t = not_null(c_138);
  }
  return(t);
}
ATerm oncetd_1 (ATerm t, ATerm w_119 (ATerm))
{
  ATerm g_138 (ATerm t)
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_119(t);
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        t = _one(t, g_138);
      }
    return(t);
  }
  t = g_138(t);
  return(t);
}
ATerm is_subterm_0 (ATerm t)
{
  ATerm k_138 = NULL,l_138 = NULL,m_138 = NULL;
  k_138 = t;
  j_138 :
  if(match_cons(k_138, sym__2))
    {
      l_138 = ATgetArgument(k_138, 0);
      m_138 = ATgetArgument(k_138, 1);
      {
        ATerm h_42;
        h_42 = t;
        {
          t = not_null(m_138);
          {
            ATerm n_5 (ATerm t)
            {
              ATerm p_138 = NULL;
              p_138 = t;
              if(((l_138 != NULL) && (l_138 != p_138)))
                _fail(p_138);
              else
                l_138 = p_138;
              return(t);
            }
            t = oncetd_1(t, n_5);
          }
        }
        t = h_42;
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
  t = term_k_42;
  t = table_get_0(t);
  return(t);
}
ATerm check_option_0 (ATerm t)
{
  ATerm u_138 = NULL;
  ATerm w_138 = NULL;
  u_138 = t;
  {
    ATerm x_138 = NULL;
    t = get_options_0(t);
    {
      x_138 = t;
      {
        if(((w_138 != NULL) && (w_138 != x_138)))
          _fail(x_138);
        else
          w_138 = x_138;
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(u_138), not_null(w_138));
          t = is_subterm_0(t);
        }
      }
    }
    t = term_n_9;
  }
  return(t);
}
ATerm has_option_1 (ATerm t, ATerm n_103 (ATerm))
{
  ATerm l_42;
  l_42 = t;
  {
    t = term_n_9;
    {
      t = n_103(t);
      t = check_option_0(t);
    }
  }
  t = l_42;
  return(t);
}
ATerm notify_1 (ATerm t, ATerm z_95 (ATerm))
{
  ATerm o_5 (ATerm t)
  {
    ATerm m_42;
    m_42 = t;
    {
      ATerm n_42;
      n_42 = t;
      {
        ATerm p_5 (ATerm t)
        {
          t = term_o_42;
          return(t);
        }
        t = has_option_1(t, p_5);
      }
      t = n_42;
      t = debug_1(t, z_95);
    }
    t = m_42;
    return(t);
  }
  t = try_1(t, o_5);
  return(t);
}
ATerm read_pp_tables_0 (ATerm t)
{
  ATerm d_139 = NULL;
  d_139 = t;
  {
    t = term_n_19;
    {
      t = table_create_0(t);
      {
        t = not_null(d_139);
        {
          ATerm q_5 (ATerm t)
          {
            ATerm r_5 (ATerm t)
            {
              t = term_p_42;
              return(t);
            }
            t = notify_1(t, r_5);
            {
              t = ReadFromFile_0(t);
              {
                ATerm s_5 (ATerm t)
                {
                  ATerm f_139 = NULL;
                  f_139 = t;
                  c_139 :
                  if(!(match_string(f_139, "\"pp-tables-0\"")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = termid_check_1(t, s_5);
                t = build_pp_table_0(t);
              }
            }
            return(t);
          }
          t = map_1(t, q_5);
        }
      }
    }
  }
  return(t);
}
ATerm HdMember_1 (ATerm t, ATerm l_109 (ATerm))
{
  ATerm k_139 = NULL,l_139 = NULL,m_139 = NULL;
  k_139 = t;
  j_139 :
  if(((ATgetType(k_139) == AT_LIST) && ((ATermList) k_139 != ATempty)))
    {
      l_139 = ATgetFirst((ATermList) k_139);
      m_139 = (ATerm) ATgetNext((ATermList) k_139);
      {
        t = l_109(t);
        {
          ATerm t_5 (ATerm t)
          {
            ATerm p_139 = NULL;
            p_139 = t;
            if(((l_139 != NULL) && (l_139 != p_139)))
              _fail(p_139);
            else
              l_139 = p_139;
            return(t);
          }
          t = fetch_1(t, t_5);
        }
        t = not_null(m_139);
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
  ATerm v_139 = NULL,w_139 = NULL,x_139 = NULL;
  v_139 = t;
  t_139 :
  if(match_cons(v_139, sym__2))
    {
      w_139 = ATgetArgument(v_139, 0);
      x_139 = ATgetArgument(v_139, 1);
      {
        t = not_null(w_139);
        {
          ATerm b_140 (ATerm t)
          {
            ATerm q_42 = t;
            int r_42 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Nil_0(t);
                t = not_null(x_139);
                LocalPopChoice(r_42);
              }
            else
              {
                t = q_42;
                {
                  ATerm s_42 = t;
                  int t_42 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm u_5 (ATerm t)
                      {
                        t = not_null(x_139);
                        return(t);
                      }
                      t = HdMember_1(t, u_5);
                      t = b_140(t);
                      LocalPopChoice(t_42);
                    }
                  else
                    {
                      t = s_42;
                      t = Cons_2(t, _id, b_140);
                    }
                }
              }
            return(t);
          }
          t = b_140(t);
        }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_3 (ATerm t, ATerm h_108 (ATerm), ATerm i_108 (ATerm), ATerm j_108 (ATerm))
{
  ATerm u_42 = t;
  int v_42 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_108(t);
      LocalPopChoice(v_42);
    }
  else
    {
      t = u_42;
      {
        ATerm g_140 = NULL,h_140 = NULL,i_140 = NULL;
        g_140 = t;
        f_140 :
        if(((ATgetType(g_140) == AT_LIST) && ((ATermList) g_140 != ATempty)))
          {
            h_140 = ATgetFirst((ATermList) g_140);
            i_140 = (ATerm) ATgetNext((ATermList) g_140);
            {
              ATerm l_140 = NULL,n_140 = NULL;
              ATerm w_42;
              w_42 = t;
              {
                ATerm m_140 = NULL;
                t = not_null(h_140);
                {
                  t = j_108(t);
                  {
                    m_140 = t;
                    if(((l_140 != NULL) && (l_140 != m_140)))
                      _fail(m_140);
                    else
                      l_140 = m_140;
                  }
                }
              }
              t = w_42;
              {
                ATerm o_140 = NULL;
                t = not_null(i_140);
                {
                  t = foldr_3(t, h_108, i_108, j_108);
                  {
                    o_140 = t;
                    if(((n_140 != NULL) && (n_140 != o_140)))
                      _fail(o_140);
                    else
                      n_140 = o_140;
                  }
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, not_null(l_140), not_null(n_140));
                  t = i_108(t);
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
ATerm crush_3 (ATerm t, ATerm w_109 (ATerm), ATerm x_109 (ATerm), ATerm y_109 (ATerm))
{
  ATerm w_140 = NULL;
  ATerm y_140 = NULL;
  w_140 = t;
  {
    ATerm z_140 = NULL;
    ATerm b_141 = NULL,c_141 = NULL,d_141 = NULL;
    t = not_null(w_140);
    {
      z_140 = t;
      {
        t = SSL_explode_term(not_null(z_140));
        {
          b_141 = t;
          v_140 :
          if(match_cons(b_141, sym__2))
            {
              c_141 = ATgetArgument(b_141, 0);
              d_141 = ATgetArgument(b_141, 1);
              if(((y_140 != NULL) && (y_140 != d_141)))
                _fail(d_141);
              else
                y_140 = d_141;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(y_140);
      t = foldr_3(t, w_109, x_109, y_109);
    }
  }
  return(t);
}
ATerm collect_om_1 (ATerm t, ATerm n_110 (ATerm))
{
  ATerm k_141 (ATerm t)
  {
    ATerm x_42 = t;
    int y_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_141 = NULL;
        ATerm j_141 = NULL;
        t = n_110(t);
        {
          j_141 = t;
          if(((i_141 != NULL) && (i_141 != j_141)))
            _fail(j_141);
          else
            i_141 = j_141;
        }
        t = (ATerm) ATinsert(ATempty, not_null(i_141));
        LocalPopChoice(y_42);
      }
    else
      {
        t = x_42;
        {
          ATerm v_5 (ATerm t)
          {
            t = (ATerm) ATempty;
            return(t);
          }
          t = crush_3(t, v_5, union_0, k_141);
        }
      }
    return(t);
  }
  t = k_141(t);
  return(t);
}
ATerm collect_1 (ATerm t, ATerm p_110 (ATerm))
{
  t = collect_om_1(t, p_110);
  return(t);
}
ATerm asfix2abox_0 (ATerm t)
{
  ATerm s_141 = NULL,t_141 = NULL,u_141 = NULL;
  s_141 = t;
  r_141 :
  if(match_cons(s_141, sym__2))
    {
      t_141 = ATgetArgument(s_141, 0);
      u_141 = ATgetArgument(s_141, 1);
      {
        t = not_null(t_141);
        {
          ATerm w_5 (ATerm t)
          {
            ATerm x_141 = NULL,y_141 = NULL;
            x_141 = t;
            o_141 :
            if(match_cons(x_141, sym_PP_Table_1))
              {
                y_141 = ATgetArgument(x_141, 0);
                t = not_null(y_141);
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = collect_1(t, w_5);
          {
            t = reverse_0(t);
            {
              t = read_pp_tables_0(t);
              {
                t = not_null(u_141);
                {
                  ATerm x_5 (ATerm t)
                  {
                    ATerm y_5 (ATerm t)
                    {
                      ATerm a_142 = NULL,b_142 = NULL;
                      a_142 = t;
                      q_141 :
                      if(match_cons(a_142, sym_cf_1))
                        {
                          b_142 = ATgetArgument(a_142, 0);
                          t = not_null(b_142);
                        }
                      else
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    t = sometd_1(t, y_5);
                    return(t);
                  }
                  t = repeat_1(t, x_5);
                  {
                    ATerm z_5 (ATerm t)
                    {
                      ATerm b_6 (ATerm t)
                      {
                        ATerm c_6 (ATerm t)
                        {
                          t = is_list_0(t);
                          {
                            ATerm d_6 (ATerm t)
                            {
                              ATerm z_42 = t;
                              if((PushChoice() == 0))
                                {
                                  t = opt_1(t, layout_0);
                                  PopChoice();
                                  _fail(t);
                                }
                              else
                                {
                                  t = z_42;
                                }
                              {
                                ATerm a_43 = t;
                                if((PushChoice() == 0))
                                  {
                                    t = layout_1(t, _id);
                                    PopChoice();
                                    _fail(t);
                                  }
                                else
                                  {
                                    t = a_43;
                                  }
                              }
                              return(t);
                            }
                            t = filter_1(t, d_6);
                          }
                          return(t);
                        }
                        t = try_1(t, c_6);
                        return(t);
                      }
                      t = topdown_1(t, b_6);
                      t = appl2abox_0(t);
                      return(t);
                    }
                    ATerm a_6 (ATerm t)
                    {
                      ATerm e_6 (ATerm t)
                      {
                        t = layout_1(t, _id);
                        return(t);
                      }
                      t = collect_p__1(t, e_6);
                      return(t);
                    }
                    t = split_2(t, z_5, a_6);
                    {
                      t = insert_layout_0(t);
                      {
                        ATerm f_6 (ATerm t)
                        {
                          t = not_null(t_141);
                          return(t);
                        }
                        t = split_2(t, f_6, _id);
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
  ATerm i_142 = NULL;
  ATerm b_43;
  b_43 = t;
  {
    ATerm g_6 (ATerm t)
    {
      ATerm j_142 = NULL,k_142 = NULL;
      j_142 = t;
      h_142 :
      if(match_cons(j_142, sym_Program_1))
        {
          k_142 = ATgetArgument(j_142, 0);
          if(((i_142 != NULL) && (i_142 != k_142)))
            _fail(k_142);
          else
            i_142 = k_142;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_41, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_d_43), not_null(i_142)), term_c_43));
      {
        t = printnl_0(t);
        {
          t = term_x_15;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_43;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm o_142 = NULL,p_142 = NULL,q_142 = NULL;
  o_142 = t;
  n_142 :
  if(match_cons(o_142, sym__2))
    {
      p_142 = ATgetArgument(o_142, 0);
      q_142 = ATgetArgument(o_142, 1);
      {
        ATerm e_43;
        e_43 = t;
        t = SSL_printnl(not_null(p_142), not_null(q_142));
        t = e_43;
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
  ATerm w_142 = NULL,x_142 = NULL,y_142 = NULL;
  w_142 = t;
  v_142 :
  if(match_cons(w_142, sym__2))
    {
      x_142 = ATgetArgument(w_142, 0);
      y_142 = ATgetArgument(w_142, 1);
      {
        t = not_null(x_142);
        {
          ATerm h_6 (ATerm t)
          {
            t = not_null(y_142);
            return(t);
          }
          t = at_end_1(t, h_6);
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
ATerm debug_1 (ATerm t, ATerm i_104 (ATerm))
{
  ATerm f_43;
  f_43 = t;
  {
    ATerm e_143 = NULL,g_143 = NULL;
    ATerm g_43;
    g_43 = t;
    {
      ATerm f_143 = NULL;
      t = i_104(t);
      {
        f_143 = t;
        if(((e_143 != NULL) && (e_143 != f_143)))
          _fail(f_143);
        else
          e_143 = f_143;
      }
    }
    t = g_43;
    {
      ATerm h_143 = NULL;
      h_143 = t;
      if(((g_143 != NULL) && (g_143 != h_143)))
        _fail(h_143);
      else
        g_143 = h_143;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(g_143)), not_null(e_143)));
        t = printnl_0(t);
      }
    }
  }
  t = f_43;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm l_143 = NULL;
  l_143 = t;
  t = SSL_is_string(not_null(l_143));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm h_43 = t;
  int i_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(i_43);
    }
  else
    {
      t = h_43;
      {
        ATerm j_43 = t;
        int k_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_6);
            LocalPopChoice(k_43);
          }
        else
          {
            t = j_43;
            {
              ATerm u_143 = NULL,v_143 = NULL,w_143 = NULL;
              u_143 = t;
              t_143 :
              if(match_cons(u_143, sym_Path_1))
                {
                  v_143 = ATgetArgument(u_143, 0);
                  t = not_null(v_143);
                }
              else
                {
                  if(match_cons(u_143, sym_Var_1))
                    {
                      v_143 = ATgetArgument(u_143, 0);
                      {
                        t = not_null(v_143);
                        {
                          ATerm l_43 = t;
                          int m_43 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(m_43);
                            }
                          else
                            {
                              t = l_43;
                              {
                                ATerm j_6 (ATerm t)
                                {
                                  t = term_n_43;
                                  return(t);
                                }
                                t = debug_1(t, j_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_143, sym_Prefix_2))
                        {
                          v_143 = ATgetArgument(u_143, 0);
                          w_143 = ATgetArgument(u_143, 1);
                          {
                            ATerm b_144 = NULL,d_144 = NULL;
                            ATerm o_43;
                            o_43 = t;
                            {
                              ATerm c_144 = NULL;
                              t = not_null(v_143);
                              {
                                t = eval_config_0(t);
                                {
                                  c_144 = t;
                                  if(((b_144 != NULL) && (b_144 != c_144)))
                                    _fail(c_144);
                                  else
                                    b_144 = c_144;
                                }
                              }
                            }
                            t = o_43;
                            {
                              ATerm e_144 = NULL;
                              t = not_null(w_143);
                              {
                                t = eval_config_0(t);
                                {
                                  e_144 = t;
                                  if(((d_144 != NULL) && (d_144 != e_144)))
                                    _fail(e_144);
                                  else
                                    d_144 = e_144;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_144), not_null(d_144));
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
  ATerm m_144 = NULL;
  m_144 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_p_43, not_null(m_144));
    {
      t = table_get_0(t);
      {
        ATerm k_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm q_43;
            q_43 = t;
            {
              ATerm o_144 = NULL;
              ATerm p_144 = NULL;
              p_144 = t;
              if(((o_144 != NULL) && (o_144 != p_144)))
                _fail(p_144);
              else
                o_144 = p_144;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_p_43, not_null(m_144), not_null(o_144));
                t = table_put_0(t);
              }
            }
            t = q_43;
          }
          return(t);
        }
        t = try_1(t, k_6);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm s_101 (ATerm))
{
  ATerm l_6 (ATerm t)
  {
    ATerm r_43;
    r_43 = t;
    {
      ATerm t_144 = NULL;
      ATerm u_144 = NULL;
      t = term_s_43;
      {
        t = get_config_0(t);
        {
          u_144 = t;
          if(((t_144 != NULL) && (t_144 != u_144)))
            _fail(u_144);
          else
            t_144 = u_144;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_144), term_l_15);
        t = geq_0(t);
      }
    }
    t = r_43;
    t = s_101(t);
    return(t);
  }
  t = try_1(t, l_6);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_u_41, (ATerm) ATinsert(ATempty, term_t_43));
  {
    t = printnl_0(t);
    {
      t = term_x_15;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_144 = NULL;
  x_144 = t;
  t = SSL_TicksToSeconds(not_null(x_144));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm c_145 = NULL,d_145 = NULL,e_145 = NULL;
  c_145 = t;
  b_145 :
  if(match_cons(c_145, sym__2))
    {
      d_145 = ATgetArgument(c_145, 0);
      e_145 = ATgetArgument(c_145, 1);
      {
        ATerm u_43 = t;
        int v_43 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(d_145), not_null(e_145));
            LocalPopChoice(v_43);
          }
        else
          {
            t = u_43;
            t = SSL_addr(not_null(d_145), not_null(e_145));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_108 (ATerm), ATerm g_108 (ATerm))
{
  ATerm w_43 = t;
  int x_43 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_108(t);
      LocalPopChoice(x_43);
    }
  else
    {
      t = w_43;
      {
        ATerm l_145 = NULL,m_145 = NULL,n_145 = NULL;
        l_145 = t;
        k_145 :
        if(((ATgetType(l_145) == AT_LIST) && ((ATermList) l_145 != ATempty)))
          {
            m_145 = ATgetFirst((ATermList) l_145);
            n_145 = (ATerm) ATgetNext((ATermList) l_145);
            {
              ATerm q_145 = NULL;
              ATerm r_145 = NULL;
              t = not_null(n_145);
              {
                t = foldr_2(t, f_108, g_108);
                {
                  r_145 = t;
                  if(((q_145 != NULL) && (q_145 != r_145)))
                    _fail(r_145);
                  else
                    q_145 = r_145;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(m_145), not_null(q_145));
                t = g_108(t);
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
ATerm crush_2 (ATerm t, ATerm u_109 (ATerm), ATerm v_109 (ATerm))
{
  ATerm y_145 = NULL;
  ATerm a_146 = NULL;
  y_145 = t;
  {
    ATerm b_146 = NULL;
    ATerm d_146 = NULL,e_146 = NULL,f_146 = NULL;
    t = not_null(y_145);
    {
      b_146 = t;
      {
        t = SSL_explode_term(not_null(b_146));
        {
          d_146 = t;
          x_145 :
          if(match_cons(d_146, sym__2))
            {
              e_146 = ATgetArgument(d_146, 0);
              f_146 = ATgetArgument(d_146, 1);
              if(((a_146 != NULL) && (a_146 != f_146)))
                _fail(f_146);
              else
                a_146 = f_146;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(a_146);
      t = foldr_2(t, u_109, v_109);
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
    ATerm m_6 (ATerm t)
    {
      t = term_y_43;
      return(t);
    }
    t = crush_2(t, m_6, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm l_146 = NULL,m_146 = NULL,n_146 = NULL;
  l_146 = t;
  k_146 :
  if(match_cons(l_146, sym__2))
    {
      m_146 = ATgetArgument(l_146, 0);
      n_146 = ATgetArgument(l_146, 1);
      {
        ATerm z_43;
        z_43 = t;
        {
          ATerm a_44 = t;
          int b_44 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(m_146), not_null(n_146));
              LocalPopChoice(b_44);
            }
          else
            {
              t = a_44;
              t = SSL_gtr(not_null(m_146), not_null(n_146));
            }
        }
        t = z_43;
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
  ATerm t_146 = NULL;
  ATerm c_44 = t;
  int d_44 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm u_146 = NULL,v_146 = NULL,w_146 = NULL;
      u_146 = t;
      s_146 :
      if(match_cons(u_146, sym__2))
        {
          v_146 = ATgetArgument(u_146, 0);
          w_146 = ATgetArgument(u_146, 1);
          {
            if(((t_146 != NULL) && (t_146 != v_146)))
              _fail(v_146);
            else
              t_146 = v_146;
            if(((t_146 != NULL) && (t_146 != w_146)))
              _fail(w_146);
            else
              t_146 = w_146;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(d_44);
    }
  else
    {
      t = c_44;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm r_101 (ATerm))
{
  ATerm n_6 (ATerm t)
  {
    ATerm e_44;
    e_44 = t;
    {
      ATerm z_146 = NULL;
      ATerm a_147 = NULL;
      t = term_s_43;
      {
        t = get_config_0(t);
        {
          a_147 = t;
          if(((z_146 != NULL) && (z_146 != a_147)))
            _fail(a_147);
          else
            z_146 = a_147;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_146), term_x_15);
        t = geq_0(t);
      }
    }
    t = e_44;
    t = r_101(t);
    return(t);
  }
  t = try_1(t, n_6);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_6 (ATerm t)
  {
    ATerm e_147 = NULL,g_147 = NULL;
    ATerm f_44;
    f_44 = t;
    {
      ATerm f_147 = NULL;
      t = run_time_0(t);
      {
        f_147 = t;
        if(((e_147 != NULL) && (e_147 != f_147)))
          _fail(f_147);
        else
          e_147 = f_147;
      }
    }
    t = f_44;
    {
      ATerm h_147 = NULL;
      t = term_g_44;
      {
        t = get_config_0(t);
        {
          h_147 = t;
          if(((g_147 != NULL) && (g_147 != h_147)))
            _fail(h_147);
          else
            g_147 = h_147;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_41, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_i_44), not_null(e_147)), term_h_44), not_null(g_147)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_6);
  {
    t = term_y_43;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm m_147 = NULL,n_147 = NULL,o_147 = NULL;
  m_147 = t;
  l_147 :
  if(match_cons(m_147, sym__2))
    {
      n_147 = ATgetArgument(m_147, 0);
      o_147 = ATgetArgument(m_147, 1);
      t = SSL_WriteToTextFile(not_null(n_147), not_null(o_147));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm m_77 (ATerm), ATerm n_77 (ATerm))
{
  ATerm y_147 = NULL,z_147 = NULL,a_148 = NULL;
  y_147 = t;
  x_147 :
  if(match_cons(y_147, sym__2))
    {
      z_147 = ATgetArgument(y_147, 0);
      a_148 = ATgetArgument(y_147, 1);
      {
        ATerm e_148 = NULL,g_148 = NULL;
        ATerm f_148 = NULL;
        t = SSLgetAnnotations(not_null(y_147));
        {
          f_148 = t;
          if(((e_148 != NULL) && (e_148 != f_148)))
            _fail(f_148);
          else
            e_148 = f_148;
        }
        {
          t = not_null(z_147);
          {
            ATerm i_148 = NULL;
            t = m_77(t);
            {
              g_148 = t;
              {
                t = not_null(a_148);
                {
                  ATerm k_148 = NULL;
                  t = n_77(t);
                  {
                    i_148 = t;
                    {
                      ATerm l_148 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(g_148), not_null(i_148)), not_null(e_148));
                      {
                        l_148 = t;
                        if(((k_148 != NULL) && (k_148 != l_148)))
                          _fail(l_148);
                        else
                          k_148 = l_148;
                      }
                      t = not_null(k_148);
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
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm t_148 = NULL,u_148 = NULL,v_148 = NULL;
  t_148 = t;
  s_148 :
  if(match_cons(t_148, sym__2))
    {
      u_148 = ATgetArgument(t_148, 0);
      v_148 = ATgetArgument(t_148, 1);
      t = SSL_WriteToBinaryFile(not_null(u_148), not_null(v_148));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm d_149 = NULL;
  ATerm r_44;
  r_44 = t;
  {
    ATerm p_6 (ATerm t)
    {
      ATerm s_44 = t;
      int t_44 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_6 (ATerm t)
          {
            ATerm e_149 = NULL,f_149 = NULL;
            e_149 = t;
            a_149 :
            if(match_cons(e_149, sym_Output_1))
              {
                f_149 = ATgetArgument(e_149, 0);
                if(((d_149 != NULL) && (d_149 != f_149)))
                  _fail(f_149);
                else
                  d_149 = f_149;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_6);
          LocalPopChoice(t_44);
        }
      else
        {
          t = s_44;
          {
            ATerm g_149 = NULL;
            t = term_u_44;
            {
              g_149 = t;
              if(((d_149 != NULL) && (d_149 != g_149)))
                _fail(g_149);
              else
                d_149 = g_149;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_6, _id);
  }
  t = r_44;
  {
    ATerm r_6 (ATerm t)
    {
      ATerm s_6 (ATerm t)
      {
        t = not_null(d_149);
        return(t);
      }
      t = split_2(t, s_6, _id);
      return(t);
    }
    t = _2(t, _id, r_6);
    {
      ATerm z_44 = t;
      int a_45 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_6 (ATerm t)
          {
            ATerm u_6 (ATerm t)
            {
              ATerm h_149 = NULL;
              h_149 = t;
              c_149 :
              if(!(match_cons(h_149, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_6);
            return(t);
          }
          t = _2(t, t_6, WriteToBinaryFile_0);
          LocalPopChoice(a_45);
        }
      else
        {
          t = z_44;
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
ATerm apply_strategy_1 (ATerm t, ATerm s_103 (ATerm))
{
  ATerm n_149 = NULL,p_149 = NULL,q_149 = NULL,r_149 = NULL;
  ATerm b_45;
  b_45 = t;
  t = dtime_0(t);
  t = b_45;
  {
    t = s_103(t);
    {
      ATerm c_45;
      c_45 = t;
      {
        ATerm o_149 = NULL;
        t = dtime_0(t);
        {
          o_149 = t;
          if(((n_149 != NULL) && (n_149 != o_149)))
            _fail(o_149);
          else
            n_149 = o_149;
        }
      }
      t = c_45;
      {
        p_149 = t;
        m_149 :
        if(match_cons(p_149, sym__2))
          {
            q_149 = ATgetArgument(p_149, 0);
            r_149 = ATgetArgument(p_149, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(q_149)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(n_149))), not_null(r_149));
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
  ATerm x_149 = NULL;
  x_149 = t;
  t = SSL_ReadFromFile(not_null(x_149));
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_106 (ATerm), ATerm u_106 (ATerm))
{
  ATerm c_150 = NULL,e_150 = NULL;
  ATerm d_45;
  d_45 = t;
  {
    ATerm d_150 = NULL;
    t = t_106(t);
    {
      d_150 = t;
      if(((c_150 != NULL) && (c_150 != d_150)))
        _fail(d_150);
      else
        c_150 = d_150;
    }
  }
  t = d_45;
  {
    ATerm f_150 = NULL;
    t = u_106(t);
    {
      f_150 = t;
      if(((e_150 != NULL) && (e_150 != f_150)))
        _fail(f_150);
      else
        e_150 = f_150;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(c_150), not_null(e_150));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm l_150 = NULL;
  ATerm l_45;
  l_45 = t;
  {
    ATerm m_45 = t;
    int n_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_6 (ATerm t)
        {
          ATerm m_150 = NULL,n_150 = NULL;
          m_150 = t;
          j_150 :
          if(match_cons(m_150, sym_Input_1))
            {
              n_150 = ATgetArgument(m_150, 0);
              if(((l_150 != NULL) && (l_150 != n_150)))
                _fail(n_150);
              else
                l_150 = n_150;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_6);
        LocalPopChoice(n_45);
      }
    else
      {
        t = m_45;
        {
          ATerm o_150 = NULL;
          t = term_o_45;
          {
            o_150 = t;
            if(((l_150 != NULL) && (l_150 != o_150)))
              _fail(o_150);
            else
              l_150 = o_150;
          }
        }
      }
  }
  t = l_45;
  {
    ATerm z_6 (ATerm t)
    {
      t = not_null(l_150);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, z_6);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm v_150 = NULL;
  v_150 = t;
  u_150 :
  if(match_cons(v_150, sym_Version_0))
    {
      ATerm x_150 = NULL,z_150 = NULL;
      ATerm p_45;
      p_45 = t;
      {
        ATerm y_150 = NULL;
        t = SSLgetAnnotations(not_null(v_150));
        {
          y_150 = t;
          if(((x_150 != NULL) && (x_150 != y_150)))
            _fail(y_150);
          else
            x_150 = y_150;
        }
      }
      t = p_45;
      {
        ATerm a_151 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(x_150));
        {
          a_151 = t;
          if(((z_150 != NULL) && (z_150 != a_151)))
            _fail(a_151);
          else
            z_150 = a_151;
        }
        t = not_null(z_150);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm q_103 (ATerm))
{
  ATerm a_7 (ATerm t)
  {
    ATerm s_45 = t;
    int t_45 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(t_45);
      }
    else
      {
        t = s_45;
        {
          ATerm u_45 = t;
          int v_45 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(v_45);
            }
          else
            {
              t = u_45;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, a_7);
  t = q_103(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm f_151 = NULL;
  f_151 = t;
  t = SSL_table_create(not_null(f_151));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm j_151 = NULL;
  j_151 = t;
  {
    ATerm w_45;
    w_45 = t;
    {
      t = term_i_42;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_i_42, term_j_42, not_null(j_151));
          t = table_put_0(t);
        }
      }
    }
    t = w_45;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm n_151 = NULL;
  n_151 = t;
  t = SSL_string_to_int(not_null(n_151));
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm x_45 = t;
  int y_45 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_7 (ATerm t)
      {
        ATerm d_152 = NULL;
        d_152 = t;
        q_151 :
        if(!(match_string(d_152, "-i")))
          {
            if(!(match_string(d_152, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm f_7 (ATerm t)
      {
        ATerm g_152 = NULL;
        ATerm z_45;
        z_45 = t;
        {
          ATerm e_152 = NULL;
          ATerm f_152 = NULL;
          f_152 = t;
          if(((e_152 != NULL) && (e_152 != f_152)))
            _fail(f_152);
          else
            e_152 = f_152;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_a_46, not_null(e_152));
            t = set_config_0(t);
          }
        }
        t = z_45;
        {
          ATerm h_152 = NULL;
          h_152 = t;
          if(((g_152 != NULL) && (g_152 != h_152)))
            _fail(h_152);
          else
            g_152 = h_152;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_152));
        }
        return(t);
      }
      ATerm g_7 (ATerm t)
      {
        t = term_b_46;
        return(t);
      }
      t = ArgOption_3(t, b_7, f_7, g_7);
      LocalPopChoice(y_45);
    }
  else
    {
      t = x_45;
      {
        ATerm c_46 = t;
        int d_46 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_7 (ATerm t)
            {
              ATerm i_152 = NULL;
              i_152 = t;
              t_151 :
              if(!(match_string(i_152, "-o")))
                {
                  if(!(match_string(i_152, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm i_7 (ATerm t)
            {
              ATerm l_152 = NULL;
              ATerm e_46;
              e_46 = t;
              {
                ATerm j_152 = NULL;
                ATerm k_152 = NULL;
                k_152 = t;
                if(((j_152 != NULL) && (j_152 != k_152)))
                  _fail(k_152);
                else
                  j_152 = k_152;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_f_46, not_null(j_152));
                  t = set_config_0(t);
                }
              }
              t = e_46;
              {
                ATerm m_152 = NULL;
                m_152 = t;
                if(((l_152 != NULL) && (l_152 != m_152)))
                  _fail(m_152);
                else
                  l_152 = m_152;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_152));
              }
              return(t);
            }
            ATerm j_7 (ATerm t)
            {
              t = term_g_46;
              return(t);
            }
            t = ArgOption_3(t, h_7, i_7, j_7);
            LocalPopChoice(d_46);
          }
        else
          {
            t = c_46;
            {
              ATerm h_46 = t;
              int i_46 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_7 (ATerm t)
                  {
                    ATerm n_152 = NULL;
                    n_152 = t;
                    w_151 :
                    if(!(match_string(n_152, "-S")))
                      {
                        if(!(match_string(n_152, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm l_7 (ATerm t)
                  {
                    t = term_j_46;
                    t = set_config_0(t);
                    t = term_k_46;
                    return(t);
                  }
                  ATerm m_7 (ATerm t)
                  {
                    t = term_l_46;
                    return(t);
                  }
                  t = Option_3(t, k_7, l_7, m_7);
                  LocalPopChoice(i_46);
                }
              else
                {
                  t = h_46;
                  {
                    ATerm m_46 = t;
                    int n_46 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm n_7 (ATerm t)
                        {
                          ATerm o_152 = NULL;
                          o_152 = t;
                          x_151 :
                          if(!(match_string(o_152, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm o_7 (ATerm t)
                        {
                          ATerm r_152 = NULL;
                          ATerm o_46;
                          o_46 = t;
                          {
                            ATerm p_152 = NULL;
                            ATerm q_152 = NULL;
                            t = string_to_int_0(t);
                            {
                              q_152 = t;
                              if(((p_152 != NULL) && (p_152 != q_152)))
                                _fail(q_152);
                              else
                                p_152 = q_152;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_s_43, not_null(p_152));
                              t = set_config_0(t);
                            }
                          }
                          t = o_46;
                          {
                            ATerm s_152 = NULL;
                            s_152 = t;
                            if(((r_152 != NULL) && (r_152 != s_152)))
                              _fail(s_152);
                            else
                              r_152 = s_152;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_152));
                          }
                          return(t);
                        }
                        ATerm p_7 (ATerm t)
                        {
                          t = term_p_46;
                          return(t);
                        }
                        t = ArgOption_3(t, n_7, o_7, p_7);
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
                              ATerm q_7 (ATerm t)
                              {
                                ATerm t_152 = NULL;
                                t_152 = t;
                                a_152 :
                                if(!(match_string(t_152, "-v")))
                                  {
                                    if(!(match_string(t_152, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm r_7 (ATerm t)
                              {
                                t = term_t_46;
                                t = set_config_0(t);
                                t = term_u_46;
                                return(t);
                              }
                              ATerm s_7 (ATerm t)
                              {
                                t = term_z_46;
                                return(t);
                              }
                              t = Option_3(t, q_7, r_7, s_7);
                              LocalPopChoice(r_46);
                            }
                          else
                            {
                              t = q_46;
                              {
                                ATerm a_47 = t;
                                int b_47 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm t_7 (ATerm t)
                                    {
                                      ATerm u_152 = NULL;
                                      u_152 = t;
                                      b_152 :
                                      if(!(match_string(u_152, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm u_7 (ATerm t)
                                    {
                                      t = term_d_47;
                                      t = set_config_0(t);
                                      t = term_e_47;
                                      return(t);
                                    }
                                    ATerm v_7 (ATerm t)
                                    {
                                      t = term_f_47;
                                      return(t);
                                    }
                                    t = Option_3(t, t_7, u_7, v_7);
                                    LocalPopChoice(b_47);
                                  }
                                else
                                  {
                                    t = a_47;
                                    {
                                      ATerm w_7 (ATerm t)
                                      {
                                        ATerm v_152 = NULL;
                                        v_152 = t;
                                        c_152 :
                                        if(!(match_string(v_152, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm x_7 (ATerm t)
                                      {
                                        t = term_u_47;
                                        t = set_config_0(t);
                                        t = term_v_47;
                                        return(t);
                                      }
                                      ATerm y_7 (ATerm t)
                                      {
                                        t = term_d_48;
                                        return(t);
                                      }
                                      t = Option_3(t, w_7, x_7, y_7);
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
  ATerm d_153 = NULL;
  d_153 = t;
  t = SSL_table_destroy(not_null(d_153));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm h_153 = NULL;
  h_153 = t;
  t = SSL_exit(not_null(h_153));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm l_153 = NULL;
  l_153 = t;
  t = SSL_implode_string(not_null(l_153));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_114 (ATerm))
{
  ATerm o_153 (ATerm t)
  {
    ATerm e_48 = t;
    int f_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, o_153);
        LocalPopChoice(f_48);
      }
    else
      {
        t = e_48;
        {
          t = Nil_0(t);
          t = f_114(t);
        }
      }
    return(t);
  }
  t = o_153(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm g_48 = t;
  int h_48 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(h_48);
    }
  else
    {
      t = g_48;
      {
        ATerm r_153 = NULL,s_153 = NULL,t_153 = NULL;
        r_153 = t;
        q_153 :
        if(((ATgetType(r_153) == AT_LIST) && ((ATermList) r_153 != ATempty)))
          {
            s_153 = ATgetFirst((ATermList) r_153);
            t_153 = (ATerm) ATgetNext((ATermList) r_153);
            {
              t = not_null(s_153);
              {
                ATerm z_7 (ATerm t)
                {
                  t = not_null(t_153);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, z_7);
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
  ATerm z_153 = NULL;
  z_153 = t;
  t = SSL_explode_string(not_null(z_153));
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
ATerm long_description_1 (ATerm t, ATerm r_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm r_113 (ATerm))
{
  ATerm c_154 (ATerm t)
  {
    ATerm i_48 = t;
    int j_48 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(j_48);
      }
    else
      {
        t = i_48;
        t = Cons_2(t, r_113, c_154);
      }
    return(t);
  }
  t = c_154(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm c_0 (ATerm), ATerm d_0 (ATerm))
{
  ATerm j_154 = NULL,k_154 = NULL,l_154 = NULL;
  l_154 = t;
  i_154 :
  if(((ATgetType(l_154) == AT_LIST) && ((ATermList) l_154 != ATempty)))
    {
      j_154 = ATgetFirst((ATermList) l_154);
      k_154 = (ATerm) ATgetNext((ATermList) l_154);
      {
        ATerm o_154 = NULL;
        t = not_null(k_154);
        {
          ATerm k_48;
          k_48 = t;
          {
            ATerm p_154 = NULL,r_154 = NULL,t_154 = NULL;
            ATerm l_48;
            l_48 = t;
            {
              ATerm q_154 = NULL;
              t = d_0(t);
              {
                q_154 = t;
                if(((p_154 != NULL) && (p_154 != q_154)))
                  _fail(q_154);
                else
                  p_154 = q_154;
              }
            }
            t = l_48;
            {
              ATerm s_154 = NULL;
              t = not_null(j_154);
              {
                t = c_0(t);
                {
                  s_154 = t;
                  if(((r_154 != NULL) && (r_154 != s_154)))
                    _fail(s_154);
                  else
                    r_154 = s_154;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(p_154)), not_null(r_154));
                {
                  t_154 = t;
                  if(((o_154 != NULL) && (o_154 != t_154)))
                    _fail(t_154);
                  else
                    o_154 = t_154;
                }
              }
            }
          }
          t = k_48;
          {
            ATerm a_8 (ATerm t)
            {
              t = not_null(o_154);
              return(t);
            }
            t = reverse_acc_2(t, c_0, a_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) l_154 == ATempty))
        {
          {
            t = term_n_9;
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
  ATerm b_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, b_8);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm b_155 = NULL,c_155 = NULL,d_155 = NULL;
  b_155 = t;
  a_155 :
  if(match_cons(b_155, sym__2))
    {
      c_155 = ATgetArgument(b_155, 0);
      d_155 = ATgetArgument(b_155, 1);
      t = SSL_table_get(not_null(c_155), not_null(d_155));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm q_100 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm y_89 (ATerm))
{
  ATerm m_155 = NULL,n_155 = NULL;
  m_155 = t;
  l_155 :
  if(match_cons(m_155, sym_Program_1))
    {
      n_155 = ATgetArgument(m_155, 0);
      {
        ATerm q_155 = NULL,s_155 = NULL;
        ATerm r_155 = NULL;
        t = SSLgetAnnotations(not_null(m_155));
        {
          r_155 = t;
          if(((q_155 != NULL) && (q_155 != r_155)))
            _fail(r_155);
          else
            q_155 = r_155;
        }
        {
          t = not_null(n_155);
          {
            ATerm u_155 = NULL;
            t = y_89(t);
            {
              s_155 = t;
              {
                ATerm v_155 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_155)), not_null(q_155));
                {
                  v_155 = t;
                  if(((u_155 != NULL) && (u_155 != v_155)))
                    _fail(v_155);
                  else
                    u_155 = v_155;
                }
                t = not_null(u_155);
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
  ATerm e_156 = NULL;
  ATerm c_8 (ATerm t)
  {
    ATerm d_8 (ATerm t)
    {
      ATerm f_156 = NULL;
      f_156 = t;
      if(((e_156 != NULL) && (e_156 != f_156)))
        _fail(f_156);
      else
        e_156 = f_156;
      return(t);
    }
    t = Program_1(t, d_8);
    return(t);
  }
  t = option_defined_1(t, c_8);
  {
    ATerm e_8 (ATerm t)
    {
      ATerm g_156 = NULL;
      ATerm h_156 = NULL;
      t = term_n_9;
      {
        ATerm f_8 (ATerm t)
        {
          t = not_null(e_156);
          return(t);
        }
        t = short_description_1(t, f_8);
        {
          t = concat_strings_0(t);
          {
            h_156 = t;
            if(((g_156 != NULL) && (g_156 != h_156)))
              _fail(h_156);
            else
              g_156 = h_156;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_u_41, (ATerm) ATinsert(ATempty, not_null(g_156)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, e_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_u_41, (ATerm) ATinsert(ATempty, term_m_48));
      {
        t = printnl_0(t);
        {
          t = term_n_48;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm g_8 (ATerm t)
                {
                  ATerm i_156 = NULL;
                  i_156 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_u_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_156)), term_o_48));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, g_8);
                {
                  ATerm h_8 (ATerm t)
                  {
                    ATerm k_156 = NULL;
                    ATerm l_156 = NULL;
                    t = term_n_9;
                    {
                      ATerm i_8 (ATerm t)
                      {
                        t = not_null(e_156);
                        return(t);
                      }
                      t = long_description_1(t, i_8);
                      {
                        t = concat_strings_0(t);
                        {
                          l_156 = t;
                          if(((k_156 != NULL) && (k_156 != l_156)))
                            _fail(l_156);
                          else
                            k_156 = l_156;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_u_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_156)), term_g_49));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, h_8);
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
ATerm Undefined_1 (ATerm t, ATerm z_89 (ATerm))
{
  ATerm v_156 = NULL,w_156 = NULL;
  v_156 = t;
  u_156 :
  if(match_cons(v_156, sym_Undefined_1))
    {
      w_156 = ATgetArgument(v_156, 0);
      {
        ATerm z_156 = NULL,b_157 = NULL;
        ATerm a_157 = NULL;
        t = SSLgetAnnotations(not_null(v_156));
        {
          a_157 = t;
          if(((z_156 != NULL) && (z_156 != a_157)))
            _fail(a_157);
          else
            z_156 = a_157;
        }
        {
          t = not_null(w_156);
          {
            ATerm d_157 = NULL;
            t = z_89(t);
            {
              b_157 = t;
              {
                ATerm e_157 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_157)), not_null(z_156));
                {
                  e_157 = t;
                  if(((d_157 != NULL) && (d_157 != e_157)))
                    _fail(e_157);
                  else
                    d_157 = e_157;
                }
                t = not_null(d_157);
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
ATerm fetch_1 (ATerm t, ATerm z_113 (ATerm))
{
  ATerm j_157 (ATerm t)
  {
    ATerm h_49 = t;
    int i_49 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_113, _id);
        LocalPopChoice(i_49);
      }
    else
      {
        t = h_49;
        t = Cons_2(t, _id, j_157);
      }
    return(t);
  }
  t = j_157(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_101 (ATerm))
{
  t = fetch_1(t, p_101);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_157 = NULL;
  o_157 = t;
  n_157 :
  if(match_cons(o_157, sym_Help_0))
    {
      ATerm q_157 = NULL,s_157 = NULL;
      ATerm j_49;
      j_49 = t;
      {
        ATerm r_157 = NULL;
        t = SSLgetAnnotations(not_null(o_157));
        {
          r_157 = t;
          if(((q_157 != NULL) && (q_157 != r_157)))
            _fail(r_157);
          else
            q_157 = r_157;
        }
      }
      t = j_49;
      {
        ATerm t_157 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_157));
        {
          t_157 = t;
          if(((s_157 != NULL) && (s_157 != t_157)))
            _fail(t_157);
          else
            s_157 = t_157;
        }
        t = not_null(s_157);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_122 (ATerm))
{
  ATerm w_49 = t;
  int x_49 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_122(t);
      LocalPopChoice(x_49);
    }
  else
    {
      t = w_49;
      {
      }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm k_8 (ATerm t)
  {
    ATerm y_157 = NULL;
    y_157 = t;
    x_157 :
    if(!(match_string(y_157, "--help")))
      {
        if(!(match_string(y_157, "-h")))
          {
            if(!(match_string(y_157, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_8 (ATerm t)
  {
    t = term_y_49;
    return(t);
  }
  ATerm m_8 (ATerm t)
  {
    t = term_z_49;
    return(t);
  }
  t = Option_3(t, k_8, l_8, m_8);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm b_158 = NULL,c_158 = NULL,d_158 = NULL;
  b_158 = t;
  a_158 :
  if(((ATgetType(b_158) == AT_LIST) && ((ATermList) b_158 != ATempty)))
    {
      c_158 = ATgetFirst((ATermList) b_158);
      d_158 = (ATerm) ATgetNext((ATermList) b_158);
      t = (ATerm) ATinsert(CheckATermList(not_null(d_158)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(c_158)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm u_94 (ATerm), ATerm v_94 (ATerm))
{
  ATerm n_158 = NULL,o_158 = NULL,p_158 = NULL;
  n_158 = t;
  m_158 :
  if(((ATgetType(n_158) == AT_LIST) && ((ATermList) n_158 != ATempty)))
    {
      o_158 = ATgetFirst((ATermList) n_158);
      p_158 = (ATerm) ATgetNext((ATermList) n_158);
      {
        ATerm t_158 = NULL,v_158 = NULL;
        ATerm u_158 = NULL;
        t = SSLgetAnnotations(not_null(n_158));
        {
          u_158 = t;
          if(((t_158 != NULL) && (t_158 != u_158)))
            _fail(u_158);
          else
            t_158 = u_158;
        }
        {
          t = not_null(o_158);
          {
            ATerm x_158 = NULL;
            t = u_94(t);
            {
              v_158 = t;
              {
                t = not_null(p_158);
                {
                  ATerm z_158 = NULL;
                  t = v_94(t);
                  {
                    x_158 = t;
                    {
                      ATerm a_159 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(x_158)), not_null(v_158)), not_null(t_158));
                      {
                        a_159 = t;
                        if(((z_158 != NULL) && (z_158 != a_159)))
                          _fail(a_159);
                        else
                          z_158 = a_159;
                      }
                      t = not_null(z_158);
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
  ATerm k_159 = NULL;
  k_159 = t;
  j_159 :
  if(((ATermList) k_159 == ATempty))
    {
      {
        ATerm m_159 = NULL,o_159 = NULL;
        ATerm a_50;
        a_50 = t;
        {
          ATerm n_159 = NULL;
          t = SSLgetAnnotations(not_null(k_159));
          {
            n_159 = t;
            if(((m_159 != NULL) && (m_159 != n_159)))
              _fail(n_159);
            else
              m_159 = n_159;
          }
        }
        t = a_50;
        {
          ATerm p_159 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(m_159));
          {
            p_159 = t;
            if(((o_159 != NULL) && (o_159 != p_159)))
              _fail(p_159);
            else
              o_159 = p_159;
          }
          t = not_null(o_159);
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
  ATerm v_159 = NULL,w_159 = NULL,x_159 = NULL;
  v_159 = t;
  u_159 :
  if(match_cons(v_159, sym__2))
    {
      w_159 = ATgetArgument(v_159, 0);
      x_159 = ATgetArgument(v_159, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_p_43, not_null(w_159), not_null(x_159));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm t_100 (ATerm))
{
  ATerm b_50;
  b_50 = t;
  {
    ATerm n_8 (ATerm t)
    {
      t = term_c_50;
      t = t_100(t);
      return(t);
    }
    t = try_1(t, n_8);
  }
  t = b_50;
  {
    ATerm o_8 (ATerm t)
    {
      ATerm f_160 = NULL;
      ATerm d_50;
      d_50 = t;
      {
        ATerm d_160 = NULL;
        ATerm e_160 = NULL;
        e_160 = t;
        if(((d_160 != NULL) && (d_160 != e_160)))
          _fail(e_160);
        else
          d_160 = e_160;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_g_44, not_null(d_160));
          t = set_config_0(t);
        }
      }
      t = d_50;
      {
        ATerm g_160 = NULL;
        g_160 = t;
        if(((f_160 != NULL) && (f_160 != g_160)))
          _fail(g_160);
        else
          f_160 = g_160;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(f_160));
      }
      return(t);
    }
    ATerm p_8 (ATerm t)
    {
      ATerm e_50 = t;
      int f_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_50 = t;
          int h_50 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(h_50);
            }
          else
            {
              t = g_50;
              {
                t = t_100(t);
                t = Cons_2(t, _id, p_8);
              }
            }
          LocalPopChoice(f_50);
        }
      else
        {
          t = e_50;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, o_8, p_8);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm m_160 = NULL,n_160 = NULL,o_160 = NULL;
  ATerm i_50;
  i_50 = t;
  {
    ATerm p_160 = NULL,q_160 = NULL,r_160 = NULL,s_160 = NULL;
    p_160 = t;
    l_160 :
    if(match_cons(p_160, sym__3))
      {
        q_160 = ATgetArgument(p_160, 0);
        r_160 = ATgetArgument(p_160, 1);
        s_160 = ATgetArgument(p_160, 2);
        {
          if(((m_160 != NULL) && (m_160 != q_160)))
            _fail(q_160);
          else
            m_160 = q_160;
          {
            if(((n_160 != NULL) && (n_160 != r_160)))
              _fail(r_160);
            else
              n_160 = r_160;
            {
              if(((o_160 != NULL) && (o_160 != s_160)))
                _fail(s_160);
              else
                o_160 = s_160;
              t = SSL_table_put(not_null(m_160), not_null(n_160), not_null(o_160));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = i_50;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm s_100 (ATerm))
{
  ATerm v_160 = NULL;
  ATerm n_50;
  n_50 = t;
  {
    t = term_o_50;
    t = table_put_0(t);
  }
  t = n_50;
  {
    ATerm q_8 (ATerm t)
    {
      ATerm x_50 = t;
      int y_50 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = s_100(t);
          LocalPopChoice(y_50);
        }
      else
        {
          t = x_50;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, q_8);
    {
      ATerm r_8 (ATerm t)
      {
        ATerm g_51 = t;
        int h_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_y_43;
                t = exit_0(t);
              }
            }
            LocalPopChoice(h_51);
          }
        else
          {
            t = g_51;
            {
              ATerm s_8 (ATerm t)
              {
                ATerm t_8 (ATerm t)
                {
                  ATerm w_160 = NULL;
                  w_160 = t;
                  if(((v_160 != NULL) && (v_160 != w_160)))
                    _fail(w_160);
                  else
                    v_160 = w_160;
                  return(t);
                }
                t = Undefined_1(t, t_8);
                return(t);
              }
              t = option_defined_1(t, s_8);
              {
                ATerm i_51;
                i_51 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_u_41, (ATerm) ATinsert(ATinsert(ATempty, not_null(v_160)), term_j_51));
                  t = printnl_0(t);
                }
                t = i_51;
                {
                  t = system_usage_0(t);
                  {
                    t = term_x_15;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, r_8);
      {
        ATerm k_51;
        k_51 = t;
        {
          t = term_o_9;
          t = table_destroy_0(t);
        }
        t = k_51;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm e_103 (ATerm), ATerm f_103 (ATerm), ATerm g_103 (ATerm), ATerm h_103 (ATerm))
{
  ATerm u_8 (ATerm t)
  {
    ATerm l_51 = t;
    int m_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = f_103(t);
        LocalPopChoice(m_51);
      }
    else
      {
        t = l_51;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, u_8);
  {
    t = store_options_0(t);
    {
      t = h_103(t);
      {
        ATerm n_51 = t;
        int o_51 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, g_103);
            LocalPopChoice(o_51);
          }
        else
          {
            t = n_51;
            {
              ATerm p_51 = t;
              int q_51 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, e_103);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(q_51);
                }
              else
                {
                  t = p_51;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm y_102 (ATerm), ATerm z_102 (ATerm), ATerm a_103 (ATerm))
{
  ATerm v_8 (ATerm t)
  {
    ATerm w_8 (ATerm t)
    {
      ATerm r_51;
      r_51 = t;
      {
        ATerm z_160 = NULL;
        ATerm a_161 = NULL;
        t = term_g_44;
        {
          t = get_config_0(t);
          {
            a_161 = t;
            if(((z_160 != NULL) && (z_160 != a_161)))
              _fail(a_161);
            else
              z_160 = a_161;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_u_41, (ATerm) ATinsert(ATempty, not_null(z_160)));
          t = printnl_0(t);
        }
      }
      t = r_51;
      return(t);
    }
    t = if_verbose2_1(t, w_8);
    return(t);
  }
  t = iowrap_4(t, y_102, z_102, a_103, v_8);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm w_102 (ATerm), ATerm x_102 (ATerm))
{
  t = iowrap_3(t, w_102, x_102, default_usage_0);
  return(t);
}
ATerm Asfix_2_abox_0 (ATerm t)
{
  ATerm x_8 (ATerm t)
  {
    ATerm s_51 = t;
    int t_51 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_8 (ATerm t)
        {
          ATerm g_161 = NULL;
          g_161 = t;
          c_161 :
          if(!(match_string(g_161, "-V")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm z_8 (ATerm t)
        {
          t = term_o_42;
          return(t);
        }
        ATerm c_9 (ATerm t)
        {
          t = term_a_52;
          return(t);
        }
        t = Option_3(t, y_8, z_8, c_9);
        LocalPopChoice(t_51);
      }
    else
      {
        t = s_51;
        {
          ATerm b_52 = t;
          int c_52 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm d_9 (ATerm t)
              {
                ATerm h_161 = NULL;
                h_161 = t;
                d_161 :
                if(!(match_string(h_161, "-c")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm e_9 (ATerm t)
              {
                t = term_s_10;
                return(t);
              }
              ATerm f_9 (ATerm t)
              {
                t = term_d_52;
                return(t);
              }
              t = Option_3(t, d_9, e_9, f_9);
              LocalPopChoice(c_52);
            }
          else
            {
              t = b_52;
              {
                ATerm g_9 (ATerm t)
                {
                  ATerm i_161 = NULL;
                  i_161 = t;
                  e_161 :
                  if(!(match_string(i_161, "-p")))
                    {
                      _fail(t);
                    }
                  return(t);
                }
                ATerm h_9 (ATerm t)
                {
                  ATerm j_161 = NULL;
                  j_161 = t;
                  t = (ATerm) ATmakeAppl(sym_PP_Table_1, not_null(j_161));
                  return(t);
                }
                ATerm i_9 (ATerm t)
                {
                  t = term_g_52;
                  return(t);
                }
                t = ArgOption_3(t, g_9, h_9, i_9);
              }
            }
        }
      }
    return(t);
  }
  t = iowrap_2(t, asfix2abox_0, x_8);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = Asfix_2_abox_0(t);
  return(t);
}

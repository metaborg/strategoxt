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
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
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
Symbol sym_ApplToSort_0;
Symbol sym_FlatLex_0;
Symbol sym_FlatList_0;
Symbol sym_RemoveLayout_0;
Symbol sym_FlatInj_0;
Symbol sym_ReplaceAppl_0;
Symbol sym_RemoveLit_0;
Symbol sym_RemovePT_0;
Symbol sym_RemoveSeq_0;
Symbol sym_FlatAlt_0;
Symbol sym_layout_1;
Symbol sym_Ins_1;
Symbol sym_Conc_2;
Symbol sym_Conc_3;
Symbol sym_Snoc_2;
Symbol sym_position_2;
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_ApplToSort_0 = ATmakeSymbol("ApplToSort", 0, ATfalse);
  ATprotectSymbol(sym_ApplToSort_0);
  sym_FlatLex_0 = ATmakeSymbol("FlatLex", 0, ATfalse);
  ATprotectSymbol(sym_FlatLex_0);
  sym_FlatList_0 = ATmakeSymbol("FlatList", 0, ATfalse);
  ATprotectSymbol(sym_FlatList_0);
  sym_RemoveLayout_0 = ATmakeSymbol("RemoveLayout", 0, ATfalse);
  ATprotectSymbol(sym_RemoveLayout_0);
  sym_FlatInj_0 = ATmakeSymbol("FlatInj", 0, ATfalse);
  ATprotectSymbol(sym_FlatInj_0);
  sym_ReplaceAppl_0 = ATmakeSymbol("ReplaceAppl", 0, ATfalse);
  ATprotectSymbol(sym_ReplaceAppl_0);
  sym_RemoveLit_0 = ATmakeSymbol("RemoveLit", 0, ATfalse);
  ATprotectSymbol(sym_RemoveLit_0);
  sym_RemovePT_0 = ATmakeSymbol("RemovePT", 0, ATfalse);
  ATprotectSymbol(sym_RemovePT_0);
  sym_RemoveSeq_0 = ATmakeSymbol("RemoveSeq", 0, ATfalse);
  ATprotectSymbol(sym_RemoveSeq_0);
  sym_FlatAlt_0 = ATmakeSymbol("FlatAlt", 0, ATfalse);
  ATprotectSymbol(sym_FlatAlt_0);
  sym_layout_1 = ATmakeSymbol("layout", 1, ATfalse);
  ATprotectSymbol(sym_layout_1);
  sym_Ins_1 = ATmakeSymbol("Ins", 1, ATfalse);
  ATprotectSymbol(sym_Ins_1);
  sym_Conc_2 = ATmakeSymbol("Conc", 2, ATfalse);
  ATprotectSymbol(sym_Conc_2);
  sym_Conc_3 = ATmakeSymbol("Conc", 3, ATfalse);
  ATprotectSymbol(sym_Conc_3);
  sym_Snoc_2 = ATmakeSymbol("Snoc", 2, ATfalse);
  ATprotectSymbol(sym_Snoc_2);
  sym_position_2 = ATmakeSymbol("position", 2, ATfalse);
  ATprotectSymbol(sym_position_2);
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_y_40;
ATerm term_x_40;
ATerm term_w_40;
ATerm term_v_40;
ATerm term_s_40;
ATerm term_r_40;
ATerm term_n_40;
ATerm term_m_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_f_40;
ATerm term_e_40;
ATerm term_y_39;
ATerm term_x_39;
ATerm term_u_39;
ATerm term_t_39;
ATerm term_q_39;
ATerm term_l_39;
ATerm term_f_39;
ATerm term_e_39;
ATerm term_t_37;
ATerm term_l_37;
ATerm term_z_36;
ATerm term_u_36;
ATerm term_t_36;
ATerm term_l_36;
ATerm term_k_36;
ATerm term_j_36;
ATerm term_i_36;
ATerm term_h_36;
ATerm term_c_36;
ATerm term_x_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_e_35;
ATerm term_d_35;
ATerm term_z_34;
ATerm term_y_34;
ATerm term_t_34;
ATerm term_s_34;
ATerm term_r_34;
ATerm term_q_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_b_34;
ATerm term_y_33;
ATerm term_u_33;
ATerm term_t_33;
ATerm term_s_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_k_33;
ATerm term_j_33;
ATerm term_e_33;
ATerm term_a_33;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_o_32;
ATerm term_f_32;
ATerm term_n_30;
ATerm term_m_30;
ATerm term_l_30;
ATerm term_d_30;
ATerm term_y_29;
ATerm term_x_29;
ATerm term_w_29;
ATerm term_t_29;
ATerm term_p_29;
ATerm term_b_29;
ATerm term_a_29;
ATerm term_z_28;
ATerm term_a_28;
ATerm term_m_26;
ATerm term_l_26;
ATerm term_k_26;
ATerm term_i_26;
ATerm term_w_25;
ATerm term_u_25;
ATerm term_s_25;
ATerm term_r_25;
ATerm term_m_25;
ATerm term_l_25;
ATerm term_f_25;
ATerm term_c_25;
ATerm term_b_25;
ATerm term_a_25;
ATerm term_z_24;
ATerm term_y_24;
ATerm term_x_24;
ATerm term_w_24;
ATerm term_v_24;
ATerm term_t_23;
ATerm term_s_23;
ATerm term_j_13;
ATerm term_k_12;
ATerm term_g_12;
ATerm term_c_12;
ATerm term_b_12;
ATerm term_a_12;
ATerm term_z_11;
ATerm term_y_11;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_u_11;
ATerm term_z_10;
ATerm term_o_9;
ATerm term_e_9;
void init_constant_terms (void)
{
  ATprotect(&(term_e_9));
  term_e_9 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_u_11));
  term_u_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_y_11));
  term_y_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_z_11));
  term_z_11 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_a_12));
  term_a_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_b_12));
  term_b_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_c_12));
  term_c_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_g_12));
  term_g_12 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_k_12));
  term_k_12 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_s_23));
  term_s_23 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_t_23));
  term_t_23 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_v_24));
  term_v_24 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_w_24));
  term_w_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_x_24));
  term_x_24 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_y_24));
  term_y_24 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_z_24));
  term_z_24 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_a_25));
  term_a_25 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_b_25));
  term_b_25 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_c_25));
  term_c_25 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_f_25));
  term_f_25 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_l_25));
  term_l_25 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_m_25));
  term_m_25 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_r_25));
  term_r_25 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_s_25));
  term_s_25 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_u_25));
  term_u_25 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_w_25));
  term_w_25 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_i_26));
  term_i_26 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_k_26));
  term_k_26 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_l_26));
  term_l_26 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_m_26));
  term_m_26 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_z_28));
  term_z_28 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_a_29));
  term_a_29 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_t_29));
  term_t_29 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_w_29));
  term_w_29 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_x_29));
  term_x_29 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_y_29));
  term_y_29 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_d_30));
  term_d_30 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_l_30));
  term_l_30 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_m_30));
  term_m_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_n_30));
  term_n_30 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_f_32));
  term_f_32 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_o_32));
  term_o_32 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_a_33));
  term_a_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_e_33));
  term_e_33 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_33));
  term_k_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_s_33));
  term_s_33 = (ATerm) ATmakeAppl(sym__2, term_w_29, term_d_30);
  ATprotect(&(term_t_33));
  term_t_33 = (ATerm) ATmakeAppl(sym_Verbose_1, term_d_30);
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_y_33));
  term_y_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_b_34));
  term_b_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(sym__2, term_b_34, term_e_9);
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_q_34));
  term_q_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_r_34));
  term_r_34 = (ATerm) ATmakeAppl(sym__2, term_q_34, term_e_9);
  ATprotect(&(term_s_34));
  term_s_34 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_t_34));
  term_t_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_z_34));
  term_z_34 = (ATerm) ATmakeAppl(sym__2, term_y_34, term_e_9);
  ATprotect(&(term_d_35));
  term_d_35 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_x_35));
  term_x_35 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_c_36));
  term_c_36 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_i_36));
  term_i_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_j_36));
  term_j_36 = (ATerm) ATmakeAppl(sym__2, term_a_33, term_e_33);
  ATprotect(&(term_k_36));
  term_k_36 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_l_36));
  term_l_36 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_36));
  term_t_36 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_l_37));
  term_l_37 = (ATerm) ATmakeAppl(sym__3, term_a_33, term_e_33, (ATerm) ATempty);
  ATprotect(&(term_t_37));
  term_t_37 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
  ATprotect(&(term_e_39));
  term_e_39 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_f_39));
  term_f_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_q_39));
  term_q_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_t_39));
  term_t_39 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_u_39));
  term_u_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_x_39));
  term_x_39 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_f_40));
  term_f_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_n_40));
  term_n_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_r_40));
  term_r_40 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_s_40));
  term_s_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_v_40));
  term_v_40 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_w_40));
  term_w_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_y_40));
  term_y_40 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
}
ATerm Option_3 (ATerm, ATerm e_1 (ATerm), ATerm f_1 (ATerm), ATerm g_1 (ATerm));
ATerm amb_1 (ATerm, ATerm v_73 (ATerm));
ATerm is_conc_0 (ATerm);
ATerm ReplConsConc_1 (ATerm, ATerm d_1 (ATerm));
ATerm is_some_0 (ATerm);
ATerm ReplConsSome_1 (ATerm, ATerm s_106 (ATerm));
ATerm is_ins_0 (ATerm);
ATerm ReplConsIns_1 (ATerm, ATerm r_106 (ATerm));
ATerm is_none_0 (ATerm);
ATerm ReplConsNone_1 (ATerm, ATerm q_106 (ATerm));
ATerm is_nil_0 (ATerm);
ATerm ReplConsNil_1 (ATerm, ATerm p_106 (ATerm));
ATerm get_cons_0 (ATerm);
ATerm ReplNamedCons_1 (ATerm, ATerm o_106 (ATerm));
ATerm ReplCons_1 (ATerm, ATerm n_106 (ATerm));
ATerm OptList_0 (ATerm);
ATerm is_layout_0 (ATerm);
ATerm implodeAsfix_0 (ATerm);
ATerm PT_0 (ATerm);
ATerm remove_pt_0 (ATerm);
ATerm RemovePT_0 (ATerm);
ATerm Tuple_0 (ATerm);
ATerm remove_seq_0 (ATerm);
ATerm RemoveSeq_0 (ATerm);
ATerm CTC3_0 (ATerm);
ATerm CTC2_0 (ATerm);
ATerm Conc_2 (ATerm, ATerm y_78 (ATerm), ATerm z_78 (ATerm));
ATerm CTC0_0 (ATerm);
ATerm CTC1_0 (ATerm);
ATerm conc_to_cons_0 (ATerm);
ATerm Rename_Keyword_0 (ATerm);
ATerm Constr1_0 (ATerm);
ATerm Constr0_0 (ATerm);
ATerm CnsGeneric_0 (ATerm);
ATerm ConstrNil_0 (ATerm);
ATerm CnsNil_0 (ATerm);
ATerm Cns_0 (ATerm);
ATerm replace_appl_0 (ATerm);
ATerm ReplaceAppl_0 (ATerm);
ATerm flat_alt_0 (ATerm);
ATerm FlatAlt_0 (ATerm);
ATerm bracket_0 (ATerm);
ATerm oncetd_1 (ATerm, ATerm a_103 (ATerm));
ATerm cons_1 (ATerm, ATerm c_1 (ATerm));
ATerm lex_1 (ATerm, ATerm b_1 (ATerm));
ATerm sort_1 (ATerm, ATerm a_1 (ATerm));
ATerm alt_2 (ATerm, ATerm y_0 (ATerm), ATerm z_0 (ATerm));
ATerm injective_alt_0 (ATerm);
ATerm varsym_1 (ATerm, ATerm x_0 (ATerm));
ATerm injection_0 (ATerm);
ATerm Inj_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm l_101 (ATerm));
ATerm flat_injections_0 (ATerm);
ATerm FlatInj_0 (ATerm);
ATerm lit_1 (ATerm, ATerm w_0 (ATerm));
ATerm list_1 (ATerm, ATerm w_96 (ATerm));
ATerm seq_1 (ATerm, ATerm z_72 (ATerm));
ATerm iter_star_sep_2 (ATerm, ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm iter_star_1 (ATerm, ATerm t_0 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm r_0 (ATerm), ATerm s_0 (ATerm));
ATerm iter_1 (ATerm, ATerm q_0 (ATerm));
ATerm list_sort_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm remove_lit_0 (ATerm);
ATerm RemoveLit_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm FlatList_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm r_104 (ATerm), ATerm s_104 (ATerm));
ATerm repeat_1 (ATerm, ATerm u_104 (ATerm));
ATerm appl_to_sort_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm s_97 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm PpSym_0 (ATerm);
ATerm ApplToSort_0 (ATerm);
ATerm layout_1 (ATerm, ATerm w_78 (ATerm));
ATerm layout_0 (ATerm);
ATerm opt_1 (ATerm, ATerm p_0 (ATerm));
ATerm cf_1 (ATerm, ATerm o_0 (ATerm));
ATerm is_layout_p__0 (ATerm);
ATerm filter_1 (ATerm, ATerm l_90 (ATerm));
ATerm prod_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm topdown_1 (ATerm, ATerm k_101 (ATerm));
ATerm remove_x_1 (ATerm, ATerm h_106 (ATerm));
ATerm remove_layout_0 (ATerm);
ATerm RemoveLayout_0 (ATerm);
ATerm flat_layout_0 (ATerm);
ATerm Kids_p__0 (ATerm);
ATerm Kids_0 (ATerm);
ATerm appl_2 (ATerm, ATerm t_73 (ATerm), ATerm u_73 (ATerm));
ATerm yield_0 (ATerm);
ATerm implode_lexical_0 (ATerm);
ATerm downup2_2 (ATerm, ATerm r_101 (ATerm), ATerm s_101 (ATerm));
ATerm flat_lex_0 (ATerm);
ATerm FlatLex_0 (ATerm);
ATerm implode_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm i_87 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_84 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm f_91 (ATerm), ATerm g_91 (ATerm));
ATerm crush_2 (ATerm, ATerm x_92 (ATerm), ATerm y_92 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_84 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm n_65 (ATerm), ATerm o_65 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm v_80 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm t_89 (ATerm), ATerm u_89 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm t_80 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm x_85 (ATerm));
ATerm ArgOption_3 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm j_97 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm f_0 (ATerm));
ATerm map_1 (ATerm, ATerm u_96 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm a_0 (ATerm));
ATerm Program_1 (ATerm, ATerm l_74 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm m_74 (ATerm));
ATerm fetch_1 (ATerm, ATerm d_97 (ATerm));
ATerm option_defined_1 (ATerm, ATerm r_86 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm o_105 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm h_79 (ATerm), ATerm i_79 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm v_85 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm u_85 (ATerm));
ATerm iowrap_4 (ATerm, ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm));
ATerm iowrap_3 (ATerm, ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm));
ATerm iowrap_2 (ATerm, ATerm z_79 (ATerm), ATerm a_80 (ATerm));
ATerm implode_asfix_0 (ATerm);
ATerm main_0 (ATerm);
ATerm Option_3 (ATerm t, ATerm e_1 (ATerm), ATerm f_1 (ATerm), ATerm g_1 (ATerm))
{
  ATerm p_1 = NULL,q_1 = NULL,b_2 = NULL;
  p_1 = t;
  o_1 :
  if(match_string(p_1, "register-usage-info"))
    {
      t = register_usage_1(t, g_1);
    }
  else
    {
      if(((ATgetType(p_1) == AT_LIST) && ((ATermList) p_1 != ATempty)))
        {
          q_1 = ATgetFirst((ATermList) p_1);
          b_2 = (ATerm) ATgetNext((ATermList) p_1);
          {
            ATerm h_2 = NULL;
            ATerm d_9;
            d_9 = t;
            {
              t = not_null(q_1);
              t = e_1(t);
            }
            t = d_9;
            {
              ATerm i_2 = NULL;
              t = term_e_9;
              {
                t = f_1(t);
                {
                  i_2 = t;
                  if(((h_2 != NULL) && (h_2 != i_2)))
                    _fail(i_2);
                  else
                    h_2 = i_2;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(b_2)), not_null(h_2));
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
ATerm amb_1 (ATerm t, ATerm v_73 (ATerm))
{
  ATerm c_5 = NULL,d_5 = NULL;
  c_5 = t;
  b_5 :
  if(match_cons(c_5, sym_amb_1))
    {
      d_5 = ATgetArgument(c_5, 0);
      {
        ATerm u_7 = NULL,z_7 = NULL;
        ATerm y_7 = NULL;
        t = SSLgetAnnotations(not_null(c_5));
        {
          y_7 = t;
          if(((u_7 != NULL) && (u_7 != y_7)))
            _fail(y_7);
          else
            u_7 = y_7;
        }
        {
          t = not_null(d_5);
          {
            ATerm e_8 = NULL;
            t = v_73(t);
            {
              z_7 = t;
              {
                ATerm f_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(z_7)), not_null(u_7));
                {
                  f_8 = t;
                  if(((e_8 != NULL) && (e_8 != f_8)))
                    _fail(f_8);
                  else
                    e_8 = f_8;
                }
                t = not_null(e_8);
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
ATerm is_conc_0 (ATerm t)
{
  ATerm d_12 = NULL,e_12 = NULL,f_12 = NULL,q_12 = NULL,r_12 = NULL,s_12 = NULL,w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL;
  e_12 = t;
  v_8 :
  if(match_cons(e_12, sym_prod_3))
    {
      f_12 = ATgetArgument(e_12, 0);
      d_13 = ATgetArgument(e_12, 1);
      h_13 = ATgetArgument(e_12, 2);
      w_8 :
      if(((ATgetType(f_12) == AT_LIST) && ((ATermList) f_12 != ATempty)))
        {
          q_12 = ATgetFirst((ATermList) f_12);
          r_12 = (ATerm) ATgetNext((ATermList) f_12);
          x_8 :
          if(((ATgetType(r_12) == AT_LIST) && ((ATermList) r_12 != ATempty)))
            {
              s_12 = ATgetFirst((ATermList) r_12);
              w_12 = (ATerm) ATgetNext((ATermList) r_12);
              n_10 :
              if(((ATermList) w_12 == ATempty))
                {
                  o_10 :
                  if(match_cons(d_13, sym_iter_1))
                    {
                      e_13 = ATgetArgument(d_13, 0);
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
                  if(((ATgetType(w_12) == AT_LIST) && ((ATermList) w_12 != ATempty)))
                    {
                      x_12 = ATgetFirst((ATermList) w_12);
                      y_12 = (ATerm) ATgetNext((ATermList) w_12);
                      p_10 :
                      if(((ATermList) y_12 == ATempty))
                        {
                          a_11 :
                          if(match_cons(d_13, sym_iter_sep_2))
                            {
                              e_13 = ATgetArgument(d_13, 0);
                              d_12 = ATgetArgument(d_13, 1);
                              {
                              }
                            }
                          else
                            {
                              if(match_cons(d_13, sym_cf_1))
                                {
                                  e_13 = ATgetArgument(d_13, 0);
                                  b_11 :
                                  if(match_cons(e_13, sym_iter_1))
                                    {
                                      f_13 = ATgetArgument(e_13, 0);
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
                        }
                      else
                        {
                          if(((ATgetType(y_12) == AT_LIST) && ((ATermList) y_12 != ATempty)))
                            {
                              z_12 = ATgetFirst((ATermList) y_12);
                              a_13 = (ATerm) ATgetNext((ATermList) y_12);
                              c_11 :
                              if(((ATgetType(a_13) == AT_LIST) && ((ATermList) a_13 != ATempty)))
                                {
                                  b_13 = ATgetFirst((ATermList) a_13);
                                  c_13 = (ATerm) ATgetNext((ATermList) a_13);
                                  n_11 :
                                  if(((ATermList) c_13 == ATempty))
                                    {
                                      o_11 :
                                      if(match_cons(d_13, sym_cf_1))
                                        {
                                          e_13 = ATgetArgument(d_13, 0);
                                          p_11 :
                                          if(match_cons(e_13, sym_iter_sep_2))
                                            {
                                              f_13 = ATgetArgument(e_13, 0);
                                              g_13 = ATgetArgument(e_13, 1);
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
ATerm ReplConsConc_1 (ATerm t, ATerm d_1 (ATerm))
{
  ATerm v_13 = NULL,w_13 = NULL,x_13 = NULL,y_13 = NULL,z_13 = NULL,a_14 = NULL,b_14 = NULL,c_14 = NULL,d_14 = NULL;
  x_13 = t;
  q_13 :
  if(match_cons(x_13, sym_appl_2))
    {
      y_13 = ATgetArgument(x_13, 0);
      z_13 = ATgetArgument(x_13, 1);
      r_13 :
      if(((ATgetType(z_13) == AT_LIST) && ((ATermList) z_13 != ATempty)))
        {
          a_14 = ATgetFirst((ATermList) z_13);
          b_14 = (ATerm) ATgetNext((ATermList) z_13);
          s_13 :
          if(((ATgetType(b_14) == AT_LIST) && ((ATermList) b_14 != ATempty)))
            {
              c_14 = ATgetFirst((ATermList) b_14);
              d_14 = (ATerm) ATgetNext((ATermList) b_14);
              t_13 :
              if(((ATgetType(d_14) == AT_LIST) && ((ATermList) d_14 != ATempty)))
                {
                  v_13 = ATgetFirst((ATermList) d_14);
                  w_13 = (ATerm) ATgetNext((ATermList) d_14);
                  u_13 :
                  if(((ATermList) w_13 == ATempty))
                    {
                      {
                        ATerm i_14 = NULL,k_14 = NULL,m_14 = NULL;
                        ATerm f_9;
                        f_9 = t;
                        {
                          t = not_null(y_13);
                          t = is_conc_0(t);
                        }
                        t = f_9;
                        {
                          ATerm g_9;
                          g_9 = t;
                          {
                            ATerm j_14 = NULL;
                            t = not_null(a_14);
                            {
                              t = d_1(t);
                              {
                                j_14 = t;
                                if(((i_14 != NULL) && (i_14 != j_14)))
                                  _fail(j_14);
                                else
                                  i_14 = j_14;
                              }
                            }
                          }
                          t = g_9;
                          {
                            ATerm h_9;
                            h_9 = t;
                            {
                              ATerm l_14 = NULL;
                              t = not_null(c_14);
                              {
                                t = d_1(t);
                                {
                                  l_14 = t;
                                  if(((k_14 != NULL) && (k_14 != l_14)))
                                    _fail(l_14);
                                  else
                                    k_14 = l_14;
                                }
                              }
                            }
                            t = h_9;
                            {
                              ATerm n_14 = NULL;
                              t = not_null(v_13);
                              {
                                t = d_1(t);
                                {
                                  n_14 = t;
                                  if(((m_14 != NULL) && (m_14 != n_14)))
                                    _fail(n_14);
                                  else
                                    m_14 = n_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(i_14), (ATerm) ATinsert(CheckATermList(not_null(m_14)), not_null(k_14)));
                                t = conc_0(t);
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
                  if(((ATermList) d_14 == ATempty))
                    {
                      {
                        ATerm r_14 = NULL,s_14 = NULL,t_14 = NULL;
                        ATerm u_14 = NULL;
                        t = not_null(y_13);
                        {
                          t = is_conc_0(t);
                          {
                            t = not_null(a_14);
                            {
                              ATerm v_14 = NULL;
                              t = d_1(t);
                              {
                                u_14 = t;
                                {
                                  if(((r_14 != NULL) && (r_14 != u_14)))
                                    _fail(u_14);
                                  else
                                    r_14 = u_14;
                                  {
                                    t = not_null(c_14);
                                    {
                                      ATerm w_14 = NULL;
                                      t = d_1(t);
                                      {
                                        v_14 = t;
                                        {
                                          if(((s_14 != NULL) && (s_14 != v_14)))
                                            _fail(v_14);
                                          else
                                            s_14 = v_14;
                                          {
                                            ATerm i_9 = t;
                                            int j_9 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(s_14);
                                                {
                                                  ATerm k_9 = t;
                                                  int l_9 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Nil_0(t);
                                                      LocalPopChoice(l_9);
                                                    }
                                                  else
                                                    {
                                                      t = k_9;
                                                      t = Cons_2(t, _id, _id);
                                                    }
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(r_14), not_null(s_14));
                                                    t = conc_0(t);
                                                  }
                                                }
                                                LocalPopChoice(j_9);
                                              }
                                            else
                                              {
                                                t = i_9;
                                                t = (ATerm) ATmakeAppl(sym_Conc_2, not_null(r_14), not_null(s_14));
                                              }
                                            {
                                              w_14 = t;
                                              if(((t_14 != NULL) && (t_14 != w_14)))
                                                _fail(w_14);
                                              else
                                                t_14 = w_14;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = not_null(t_14);
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm is_some_0 (ATerm t)
{
  ATerm o_15 = NULL,p_15 = NULL,q_15 = NULL,r_15 = NULL,s_15 = NULL,t_15 = NULL,u_15 = NULL,v_15 = NULL,w_15 = NULL;
  o_15 = t;
  h_15 :
  if(match_cons(o_15, sym_prod_3))
    {
      p_15 = ATgetArgument(o_15, 0);
      t_15 = ATgetArgument(o_15, 1);
      w_15 = ATgetArgument(o_15, 2);
      i_15 :
      if(((ATgetType(p_15) == AT_LIST) && ((ATermList) p_15 != ATempty)))
        {
          q_15 = ATgetFirst((ATermList) p_15);
          s_15 = (ATerm) ATgetNext((ATermList) p_15);
          j_15 :
          if(((ATermList) s_15 == ATempty))
            {
              k_15 :
              if(match_cons(t_15, sym_opt_1))
                {
                  u_15 = ATgetArgument(t_15, 0);
                  l_15 :
                  if(((q_15 != NULL) && (q_15 != u_15)))
                    _fail(u_15);
                  else
                    q_15 = u_15;
                }
              else
                {
                  if(match_cons(t_15, sym_cf_1))
                    {
                      u_15 = ATgetArgument(t_15, 0);
                      m_15 :
                      if(match_cons(q_15, sym_cf_1))
                        {
                          r_15 = ATgetArgument(q_15, 0);
                          n_15 :
                          if(match_cons(u_15, sym_opt_1))
                            {
                              v_15 = ATgetArgument(u_15, 0);
                              if(((r_15 != NULL) && (r_15 != v_15)))
                                _fail(v_15);
                              else
                                r_15 = v_15;
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReplConsSome_1 (ATerm t, ATerm s_106 (ATerm))
{
  ATerm g_16 = NULL,h_16 = NULL,i_16 = NULL,j_16 = NULL,k_16 = NULL;
  g_16 = t;
  d_16 :
  if(match_cons(g_16, sym_appl_2))
    {
      h_16 = ATgetArgument(g_16, 0);
      i_16 = ATgetArgument(g_16, 1);
      e_16 :
      if(((ATgetType(i_16) == AT_LIST) && ((ATermList) i_16 != ATempty)))
        {
          j_16 = ATgetFirst((ATermList) i_16);
          k_16 = (ATerm) ATgetNext((ATermList) i_16);
          f_16 :
          if(((ATermList) k_16 == ATempty))
            {
              {
                ATerm n_16 = NULL;
                ATerm m_9;
                m_9 = t;
                {
                  t = not_null(h_16);
                  t = is_some_0(t);
                }
                t = m_9;
                {
                  ATerm o_16 = NULL;
                  t = not_null(j_16);
                  {
                    t = s_106(t);
                    {
                      o_16 = t;
                      if(((n_16 != NULL) && (n_16 != o_16)))
                        _fail(o_16);
                      else
                        n_16 = o_16;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(n_16));
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
  return(t);
}
ATerm is_ins_0 (ATerm t)
{
  ATerm d_17 = NULL,e_17 = NULL,f_17 = NULL,g_17 = NULL,h_17 = NULL,i_17 = NULL,j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL;
  e_17 = t;
  v_16 :
  if(match_cons(e_17, sym_prod_3))
    {
      f_17 = ATgetArgument(e_17, 0);
      j_17 = ATgetArgument(e_17, 1);
      n_17 = ATgetArgument(e_17, 2);
      w_16 :
      if(((ATgetType(f_17) == AT_LIST) && ((ATermList) f_17 != ATempty)))
        {
          g_17 = ATgetFirst((ATermList) f_17);
          i_17 = (ATerm) ATgetNext((ATermList) f_17);
          x_16 :
          if(((ATermList) i_17 == ATempty))
            {
              y_16 :
              if(match_cons(j_17, sym_iter_1))
                {
                  k_17 = ATgetArgument(j_17, 0);
                  z_16 :
                  if(((g_17 != NULL) && (g_17 != k_17)))
                    _fail(k_17);
                  else
                    g_17 = k_17;
                }
              else
                {
                  if(match_cons(j_17, sym_iter_sep_2))
                    {
                      k_17 = ATgetArgument(j_17, 0);
                      d_17 = ATgetArgument(j_17, 1);
                      a_17 :
                      if(((g_17 != NULL) && (g_17 != k_17)))
                        _fail(k_17);
                      else
                        g_17 = k_17;
                    }
                  else
                    {
                      if(match_cons(j_17, sym_cf_1))
                        {
                          k_17 = ATgetArgument(j_17, 0);
                          b_17 :
                          if(match_cons(g_17, sym_cf_1))
                            {
                              h_17 = ATgetArgument(g_17, 0);
                              c_17 :
                              if(match_cons(k_17, sym_iter_1))
                                {
                                  l_17 = ATgetArgument(k_17, 0);
                                  if(((h_17 != NULL) && (h_17 != l_17)))
                                    _fail(l_17);
                                  else
                                    h_17 = l_17;
                                }
                              else
                                {
                                  if(match_cons(k_17, sym_iter_sep_2))
                                    {
                                      l_17 = ATgetArgument(k_17, 0);
                                      m_17 = ATgetArgument(k_17, 1);
                                      if(((h_17 != NULL) && (h_17 != l_17)))
                                        _fail(l_17);
                                      else
                                        h_17 = l_17;
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
ATerm ReplConsIns_1 (ATerm t, ATerm r_106 (ATerm))
{
  ATerm b_18 = NULL,c_18 = NULL,d_18 = NULL,e_18 = NULL,f_18 = NULL;
  b_18 = t;
  y_17 :
  if(match_cons(b_18, sym_appl_2))
    {
      c_18 = ATgetArgument(b_18, 0);
      d_18 = ATgetArgument(b_18, 1);
      z_17 :
      if(((ATgetType(d_18) == AT_LIST) && ((ATermList) d_18 != ATempty)))
        {
          e_18 = ATgetFirst((ATermList) d_18);
          f_18 = (ATerm) ATgetNext((ATermList) d_18);
          a_18 :
          if(((ATermList) f_18 == ATempty))
            {
              {
                ATerm i_18 = NULL;
                ATerm n_9;
                n_9 = t;
                {
                  t = not_null(c_18);
                  t = is_ins_0(t);
                }
                t = n_9;
                {
                  ATerm j_18 = NULL;
                  t = not_null(e_18);
                  {
                    t = r_106(t);
                    {
                      j_18 = t;
                      if(((i_18 != NULL) && (i_18 != j_18)))
                        _fail(j_18);
                      else
                        i_18 = j_18;
                    }
                  }
                  t = (ATerm) ATinsert(ATempty, not_null(i_18));
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
  return(t);
}
ATerm is_none_0 (ATerm t)
{
  ATerm q_18 = NULL,r_18 = NULL,s_18 = NULL,t_18 = NULL,u_18 = NULL,v_18 = NULL;
  q_18 = t;
  m_18 :
  if(match_cons(q_18, sym_prod_3))
    {
      r_18 = ATgetArgument(q_18, 0);
      s_18 = ATgetArgument(q_18, 1);
      v_18 = ATgetArgument(q_18, 2);
      n_18 :
      if(((ATermList) r_18 == ATempty))
        {
          o_18 :
          if(match_cons(s_18, sym_opt_1))
            {
              t_18 = ATgetArgument(s_18, 0);
              {
              }
            }
          else
            {
              if(match_cons(s_18, sym_cf_1))
                {
                  t_18 = ATgetArgument(s_18, 0);
                  p_18 :
                  if(match_cons(t_18, sym_opt_1))
                    {
                      u_18 = ATgetArgument(t_18, 0);
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
ATerm ReplConsNone_1 (ATerm t, ATerm q_106 (ATerm))
{
  ATerm z_18 = NULL,a_19 = NULL,b_19 = NULL;
  z_18 = t;
  x_18 :
  if(match_cons(z_18, sym_appl_2))
    {
      a_19 = ATgetArgument(z_18, 0);
      b_19 = ATgetArgument(z_18, 1);
      y_18 :
      if(((ATermList) b_19 == ATempty))
        {
          {
            t = not_null(a_19);
            t = is_none_0(t);
            t = term_o_9;
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
ATerm is_nil_0 (ATerm t)
{
  ATerm i_19 = NULL,j_19 = NULL,k_19 = NULL,l_19 = NULL,m_19 = NULL,n_19 = NULL,o_19 = NULL,p_19 = NULL;
  j_19 = t;
  e_19 :
  if(match_cons(j_19, sym_prod_3))
    {
      k_19 = ATgetArgument(j_19, 0);
      l_19 = ATgetArgument(j_19, 1);
      p_19 = ATgetArgument(j_19, 2);
      f_19 :
      if(((ATermList) k_19 == ATempty))
        {
          g_19 :
          if(match_cons(l_19, sym_iter_star_1))
            {
              m_19 = ATgetArgument(l_19, 0);
              {
              }
            }
          else
            {
              if(match_cons(l_19, sym_iter_star_sep_2))
                {
                  m_19 = ATgetArgument(l_19, 0);
                  i_19 = ATgetArgument(l_19, 1);
                  {
                  }
                }
              else
                {
                  if(match_cons(l_19, sym_cf_1))
                    {
                      m_19 = ATgetArgument(l_19, 0);
                      h_19 :
                      if(match_cons(m_19, sym_iter_star_1))
                        {
                          n_19 = ATgetArgument(m_19, 0);
                          {
                          }
                        }
                      else
                        {
                          if(match_cons(m_19, sym_iter_star_sep_2))
                            {
                              n_19 = ATgetArgument(m_19, 0);
                              o_19 = ATgetArgument(m_19, 1);
                              {
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
ATerm ReplConsNil_1 (ATerm t, ATerm p_106 (ATerm))
{
  ATerm t_19 = NULL,u_19 = NULL,v_19 = NULL;
  t_19 = t;
  r_19 :
  if(match_cons(t_19, sym_appl_2))
    {
      u_19 = ATgetArgument(t_19, 0);
      v_19 = ATgetArgument(t_19, 1);
      s_19 :
      if(((ATermList) v_19 == ATempty))
        {
          {
            t = not_null(u_19);
            t = is_nil_0(t);
            t = (ATerm) ATempty;
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
ATerm get_cons_0 (ATerm t)
{
  ATerm c_20 = NULL,d_20 = NULL,e_20 = NULL,f_20 = NULL;
  c_20 = t;
  b_20 :
  if(match_cons(c_20, sym_prod_3))
    {
      d_20 = ATgetArgument(c_20, 0);
      e_20 = ATgetArgument(c_20, 1);
      f_20 = ATgetArgument(c_20, 2);
      {
        ATerm h_20 = NULL;
        t = not_null(f_20);
        {
          ATerm c_0 (ATerm t)
          {
            ATerm i_20 = NULL,j_20 = NULL;
            i_20 = t;
            a_20 :
            if(match_cons(i_20, sym_cons_1))
              {
                j_20 = ATgetArgument(i_20, 0);
                if(((h_20 != NULL) && (h_20 != j_20)))
                  _fail(j_20);
                else
                  h_20 = j_20;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, c_0);
        }
        t = not_null(h_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReplNamedCons_1 (ATerm t, ATerm o_106 (ATerm))
{
  ATerm r_20 = NULL,s_20 = NULL,t_20 = NULL;
  r_20 = t;
  q_20 :
  if(match_cons(r_20, sym_appl_2))
    {
      s_20 = ATgetArgument(r_20, 0);
      t_20 = ATgetArgument(r_20, 1);
      {
        ATerm w_20 = NULL,y_20 = NULL,a_21 = NULL;
        ATerm p_9;
        p_9 = t;
        {
          ATerm x_20 = NULL;
          t = not_null(s_20);
          {
            t = get_cons_0(t);
            {
              t = try_1(t, Rename_Keyword_0);
              {
                x_20 = t;
                if(((w_20 != NULL) && (w_20 != x_20)))
                  _fail(x_20);
                else
                  w_20 = x_20;
              }
            }
          }
        }
        t = p_9;
        {
          ATerm q_9;
          q_9 = t;
          {
            ATerm z_20 = NULL;
            t = not_null(t_20);
            {
              t = map_1(t, o_106);
              {
                z_20 = t;
                if(((y_20 != NULL) && (y_20 != z_20)))
                  _fail(z_20);
                else
                  y_20 = z_20;
              }
            }
          }
          t = q_9;
          {
            t = SSL_mkterm(not_null(w_20), not_null(y_20));
            {
              a_21 = t;
              t = not_null(a_21);
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
ATerm ReplCons_1 (ATerm t, ATerm n_106 (ATerm))
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1(t, n_106);
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm t_9 = t;
        int u_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ReplConsNil_1(t, n_106);
            LocalPopChoice(u_9);
          }
        else
          {
            t = t_9;
            {
              ATerm v_9 = t;
              int w_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ReplConsNone_1(t, n_106);
                  LocalPopChoice(w_9);
                }
              else
                {
                  t = v_9;
                  {
                    ATerm x_9 = t;
                    int y_9 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ReplConsIns_1(t, n_106);
                        LocalPopChoice(y_9);
                      }
                    else
                      {
                        t = x_9;
                        {
                          ATerm z_9 = t;
                          int a_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ReplConsSome_1(t, n_106);
                              LocalPopChoice(a_10);
                            }
                          else
                            {
                              t = z_9;
                              t = ReplConsConc_1(t, n_106);
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
ATerm OptList_0 (ATerm t)
{
  ATerm a_22 = NULL,b_22 = NULL,c_22 = NULL,d_22 = NULL,e_22 = NULL,f_22 = NULL,g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL;
  f_22 = t;
  k_21 :
  if(match_cons(f_22, sym_appl_2))
    {
      g_22 = ATgetArgument(f_22, 0);
      m_22 = ATgetArgument(f_22, 1);
      l_21 :
      if(match_cons(g_22, sym_prod_3))
        {
          h_22 = ATgetArgument(g_22, 0);
          i_22 = ATgetArgument(g_22, 1);
          l_22 = ATgetArgument(g_22, 2);
          m_21 :
          if(((ATgetType(h_22) == AT_LIST) && ((ATermList) h_22 != ATempty)))
            {
              a_22 = ATgetFirst((ATermList) h_22);
              c_22 = (ATerm) ATgetNext((ATermList) h_22);
              n_21 :
              if(((ATermList) c_22 == ATempty))
                {
                  o_21 :
                  if(match_cons(i_22, sym_opt_1))
                    {
                      j_22 = ATgetArgument(i_22, 0);
                      p_21 :
                      if(((ATgetType(m_22) == AT_LIST) && ((ATermList) m_22 != ATempty)))
                        {
                          d_22 = ATgetFirst((ATermList) m_22);
                          e_22 = (ATerm) ATgetNext((ATermList) m_22);
                          q_21 :
                          if(((ATermList) e_22 == ATempty))
                            {
                              r_21 :
                              {
                                ATerm n_22 = NULL;
                                if(((a_22 != NULL) && (a_22 != j_22)))
                                  _fail(j_22);
                                else
                                  a_22 = j_22;
                                {
                                  if(((n_22 != NULL) && (n_22 != d_22)))
                                    _fail(d_22);
                                  else
                                    n_22 = d_22;
                                  {
                                    t = not_null(a_22);
                                    t = is_list_0(t);
                                    t = not_null(n_22);
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
                  else
                    {
                      if(match_cons(i_22, sym_cf_1))
                        {
                          j_22 = ATgetArgument(i_22, 0);
                          s_21 :
                          if(match_cons(a_22, sym_cf_1))
                            {
                              b_22 = ATgetArgument(a_22, 0);
                              t_21 :
                              if(match_cons(j_22, sym_opt_1))
                                {
                                  k_22 = ATgetArgument(j_22, 0);
                                  u_21 :
                                  if(((ATgetType(m_22) == AT_LIST) && ((ATermList) m_22 != ATempty)))
                                    {
                                      d_22 = ATgetFirst((ATermList) m_22);
                                      e_22 = (ATerm) ATgetNext((ATermList) m_22);
                                      v_21 :
                                      if(((ATermList) e_22 == ATempty))
                                        {
                                          {
                                            ATerm q_22 = NULL;
                                            if(((b_22 != NULL) && (b_22 != k_22)))
                                              _fail(k_22);
                                            else
                                              b_22 = k_22;
                                            {
                                              if(((q_22 != NULL) && (q_22 != d_22)))
                                                _fail(d_22);
                                              else
                                                q_22 = d_22;
                                              {
                                                t = not_null(b_22);
                                                t = is_list_0(t);
                                                t = not_null(q_22);
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
              if(((ATermList) h_22 == ATempty))
                {
                  w_21 :
                  if(match_cons(i_22, sym_opt_1))
                    {
                      j_22 = ATgetArgument(i_22, 0);
                      x_21 :
                      if(((ATermList) m_22 == ATempty))
                        {
                          {
                            t = not_null(j_22);
                            t = is_list_0(t);
                            t = (ATerm) ATempty;
                          }
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(match_cons(i_22, sym_cf_1))
                        {
                          j_22 = ATgetArgument(i_22, 0);
                          y_21 :
                          if(match_cons(j_22, sym_opt_1))
                            {
                              k_22 = ATgetArgument(j_22, 0);
                              z_21 :
                              if(((ATermList) m_22 == ATempty))
                                {
                                  {
                                    t = not_null(k_22);
                                    t = is_list_0(t);
                                    t = (ATerm) ATempty;
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
ATerm is_layout_0 (ATerm t)
{
  ATerm b_10 = t;
  int c_10 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm d_0 (ATerm t)
      {
        ATerm g_0 (ATerm t)
        {
          ATerm d_10 = t;
          int e_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm h_0 (ATerm t)
              {
                t = opt_1(t, layout_0);
                return(t);
              }
              t = cf_1(t, h_0);
              LocalPopChoice(e_10);
            }
          else
            {
              t = d_10;
              t = lit_1(t, _id);
            }
          return(t);
        }
        t = prod_3(t, _id, g_0, _id);
        return(t);
      }
      t = appl_2(t, d_0, _id);
      LocalPopChoice(c_10);
    }
  else
    {
      t = b_10;
      {
        ATerm h_1 (ATerm t)
        {
          t = opt_1(t, layout_0);
          return(t);
        }
        t = cf_1(t, h_1);
      }
    }
  return(t);
}
ATerm implodeAsfix_0 (ATerm t)
{
  t = PT_0(t);
  {
    ATerm x_22 (ATerm t)
    {
      ATerm f_10 = t;
      int g_10 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = implode_lexical_0(t);
          LocalPopChoice(g_10);
        }
      else
        {
          t = f_10;
          {
            ATerm h_10 = t;
            int i_10 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm i_1 (ATerm t)
                {
                  ATerm j_1 (ATerm t)
                  {
                    ATerm j_10 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_layout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = j_10;
                      }
                    return(t);
                  }
                  t = filter_1(t, j_1);
                  return(t);
                }
                t = appl_2(t, _id, i_1);
                {
                  ATerm k_10 = t;
                  int l_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = OptList_0(t);
                      t = x_22(t);
                      LocalPopChoice(l_10);
                    }
                  else
                    {
                      t = k_10;
                      {
                        ATerm m_10 = t;
                        int q_10 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = ReplCons_1(t, x_22);
                            LocalPopChoice(q_10);
                          }
                        else
                          {
                            t = m_10;
                            {
                              ATerm r_10 = t;
                              int s_10 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Inj_0(t);
                                  t = x_22(t);
                                  LocalPopChoice(s_10);
                                }
                              else
                                {
                                  t = r_10;
                                  {
                                    ATerm t_10 = t;
                                    int u_10 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Tuple_0(t);
                                        t = x_22(t);
                                        LocalPopChoice(u_10);
                                      }
                                    else
                                      {
                                        t = t_10;
                                        {
                                          t = FlatAlt_0(t);
                                          t = x_22(t);
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                LocalPopChoice(i_10);
              }
            else
              {
                t = h_10;
                {
                  ATerm v_10 = t;
                  int w_10 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm k_1 (ATerm t)
                      {
                        t = list_1(t, x_22);
                        return(t);
                      }
                      t = amb_1(t, k_1);
                      LocalPopChoice(w_10);
                    }
                  else
                    {
                      t = v_10;
                      t = _all(t, x_22);
                    }
                }
              }
          }
        }
      return(t);
    }
    t = x_22(t);
  }
  return(t);
}
ATerm PT_0 (ATerm t)
{
  ATerm a_23 = NULL,b_23 = NULL,c_23 = NULL;
  a_23 = t;
  z_22 :
  if(match_cons(a_23, sym_parsetree_2))
    {
      b_23 = ATgetArgument(a_23, 0);
      c_23 = ATgetArgument(a_23, 1);
      t = not_null(b_23);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm remove_pt_0 (ATerm t)
{
  t = PT_0(t);
  return(t);
}
ATerm RemovePT_0 (ATerm t)
{
  ATerm j_23 = NULL;
  j_23 = t;
  i_23 :
  if(match_cons(j_23, sym_RemovePT_0))
    {
      ATerm l_23 = NULL,n_23 = NULL;
      ATerm x_10;
      x_10 = t;
      {
        ATerm m_23 = NULL;
        t = SSLgetAnnotations(not_null(j_23));
        {
          m_23 = t;
          if(((l_23 != NULL) && (l_23 != m_23)))
            _fail(m_23);
          else
            l_23 = m_23;
        }
      }
      t = x_10;
      {
        ATerm o_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemovePT_0), not_null(l_23));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Tuple_0 (ATerm t)
{
  ATerm c_24 = NULL,d_24 = NULL,e_24 = NULL,f_24 = NULL,g_24 = NULL,h_24 = NULL,i_24 = NULL,j_24 = NULL;
  c_24 = t;
  y_23 :
  if(match_cons(c_24, sym_appl_2))
    {
      d_24 = ATgetArgument(c_24, 0);
      j_24 = ATgetArgument(c_24, 1);
      z_23 :
      if(match_cons(d_24, sym_prod_3))
        {
          e_24 = ATgetArgument(d_24, 0);
          f_24 = ATgetArgument(d_24, 1);
          i_24 = ATgetArgument(d_24, 2);
          a_24 :
          if(match_cons(f_24, sym_seq_1))
            {
              g_24 = ATgetArgument(f_24, 0);
              {
                ATerm l_24 = NULL,n_24 = NULL;
                ATerm y_10;
                y_10 = t;
                {
                  ATerm m_24 = NULL;
                  t = term_z_10;
                  {
                    m_24 = t;
                    if(((l_24 != NULL) && (l_24 != m_24)))
                      _fail(m_24);
                    else
                      l_24 = m_24;
                  }
                }
                t = y_10;
                {
                  t = SSL_mkterm(not_null(l_24), not_null(j_24));
                  {
                    n_24 = t;
                    t = not_null(n_24);
                  }
                }
              }
            }
          else
            {
              if(match_cons(f_24, sym_cf_1))
                {
                  g_24 = ATgetArgument(f_24, 0);
                  b_24 :
                  if(match_cons(g_24, sym_seq_1))
                    {
                      h_24 = ATgetArgument(g_24, 0);
                      {
                        ATerm q_24 = NULL,s_24 = NULL;
                        ATerm d_11;
                        d_11 = t;
                        {
                          ATerm r_24 = NULL;
                          t = term_z_10;
                          {
                            r_24 = t;
                            if(((q_24 != NULL) && (q_24 != r_24)))
                              _fail(r_24);
                            else
                              q_24 = r_24;
                          }
                        }
                        t = d_11;
                        {
                          t = SSL_mkterm(not_null(q_24), not_null(j_24));
                          {
                            s_24 = t;
                            t = not_null(s_24);
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
ATerm remove_seq_0 (ATerm t)
{
  ATerm l_1 (ATerm t)
  {
    t = try_1(t, Tuple_0);
    return(t);
  }
  t = topdown_1(t, l_1);
  return(t);
}
ATerm RemoveSeq_0 (ATerm t)
{
  ATerm e_25 = NULL;
  e_25 = t;
  d_25 :
  if(match_cons(e_25, sym_RemoveSeq_0))
    {
      ATerm g_25 = NULL,i_25 = NULL;
      ATerm e_11;
      e_11 = t;
      {
        ATerm h_25 = NULL;
        t = SSLgetAnnotations(not_null(e_25));
        {
          h_25 = t;
          if(((g_25 != NULL) && (g_25 != h_25)))
            _fail(h_25);
          else
            g_25 = h_25;
        }
      }
      t = e_11;
      {
        ATerm j_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveSeq_0), not_null(g_25));
        {
          j_25 = t;
          if(((i_25 != NULL) && (i_25 != j_25)))
            _fail(j_25);
          else
            i_25 = j_25;
        }
        t = not_null(i_25);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CTC3_0 (ATerm t)
{
  ATerm p_25 = NULL,q_25 = NULL;
  p_25 = t;
  o_25 :
  if(match_cons(p_25, sym_Ins_1))
    {
      q_25 = ATgetArgument(p_25, 0);
      t = (ATerm) ATinsert(ATempty, not_null(q_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CTC2_0 (ATerm t)
{
  ATerm a_26 = NULL,b_26 = NULL,c_26 = NULL,d_26 = NULL,e_26 = NULL,f_26 = NULL,g_26 = NULL;
  d_26 = t;
  x_25 :
  if(match_cons(d_26, sym_Conc_2))
    {
      e_26 = ATgetArgument(d_26, 0);
      f_26 = ATgetArgument(d_26, 1);
      y_25 :
      if(match_cons(e_26, sym_Ins_1))
        {
          c_26 = ATgetArgument(e_26, 0);
          z_25 :
          if(((ATgetType(f_26) == AT_LIST) && ((ATermList) f_26 != ATempty)))
            {
              b_26 = ATgetFirst((ATermList) f_26);
              a_26 = (ATerm) ATgetNext((ATermList) f_26);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(a_26)), not_null(b_26)), not_null(c_26));
            }
          else
            {
              if(match_cons(f_26, sym_Ins_1))
                {
                  b_26 = ATgetArgument(f_26, 0);
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_26)), not_null(c_26));
                }
              else
                {
                  if(((ATermList) f_26 == ATempty))
                    {
                      t = (ATerm) ATinsert(ATempty, not_null(c_26));
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
    }
  else
    {
      if(match_cons(d_26, sym_Conc_3))
        {
          e_26 = ATgetArgument(d_26, 0);
          f_26 = ATgetArgument(d_26, 1);
          g_26 = ATgetArgument(d_26, 2);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(g_26)), (ATerm) ATinsert(ATempty, not_null(f_26))), not_null(e_26));
            t = concat_0(t);
          }
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm Conc_2 (ATerm t, ATerm y_78 (ATerm), ATerm z_78 (ATerm))
{
  ATerm a_27 = NULL,b_27 = NULL,c_27 = NULL;
  a_27 = t;
  z_26 :
  if(match_cons(a_27, sym_Conc_2))
    {
      b_27 = ATgetArgument(a_27, 0);
      c_27 = ATgetArgument(a_27, 1);
      {
        ATerm g_27 = NULL,i_27 = NULL;
        ATerm h_27 = NULL;
        t = SSLgetAnnotations(not_null(a_27));
        {
          h_27 = t;
          if(((g_27 != NULL) && (g_27 != h_27)))
            _fail(h_27);
          else
            g_27 = h_27;
        }
        {
          t = not_null(b_27);
          {
            ATerm k_27 = NULL;
            t = y_78(t);
            {
              i_27 = t;
              {
                t = not_null(c_27);
                {
                  ATerm m_27 = NULL;
                  t = z_78(t);
                  {
                    k_27 = t;
                    {
                      ATerm n_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Conc_2, not_null(i_27), not_null(k_27)), not_null(g_27));
                      {
                        n_27 = t;
                        if(((m_27 != NULL) && (m_27 != n_27)))
                          _fail(n_27);
                        else
                          m_27 = n_27;
                      }
                      t = not_null(m_27);
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
ATerm CTC0_0 (ATerm t)
{
  ATerm w_27 = NULL,x_27 = NULL,y_27 = NULL;
  w_27 = t;
  v_27 :
  if(((ATgetType(w_27) == AT_LIST) && ((ATermList) w_27 != ATempty)))
    {
      x_27 = ATgetFirst((ATermList) w_27);
      y_27 = (ATerm) ATgetNext((ATermList) w_27);
      t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, not_null(x_27)), not_null(y_27));
    }
  else
    {
      if(match_cons(w_27, sym_Snoc_2))
        {
          x_27 = ATgetArgument(w_27, 0);
          y_27 = ATgetArgument(w_27, 1);
          t = (ATerm) ATmakeAppl(sym_Conc_2, not_null(x_27), (ATerm) ATmakeAppl(sym_Ins_1, not_null(y_27)));
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm CTC1_0 (ATerm t)
{
  ATerm o_28 = NULL,p_28 = NULL,q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL,u_28 = NULL;
  ATerm f_29 (ATerm t)
  {
    t = not_null(r_28);
    return(t);
  }
  ATerm g_29 (ATerm t)
  {
    t = not_null(u_28);
    return(t);
  }
  ATerm h_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Conc_3, not_null(s_28), not_null(t_28), (ATerm) ATmakeAppl(sym_Conc_3, not_null(o_28), not_null(u_28), not_null(p_28)));
    return(t);
  }
  ATerm i_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Conc_2, not_null(s_28), (ATerm) ATmakeAppl(sym_Conc_2, not_null(t_28), not_null(u_28)));
    return(t);
  }
  q_28 = t;
  j_28 :
  if(match_cons(q_28, sym_Conc_2))
    {
      r_28 = ATgetArgument(q_28, 0);
      u_28 = ATgetArgument(q_28, 1);
      k_28 :
      if(((ATermList) u_28 == ATempty))
        {
          l_28 :
          if(((ATermList) r_28 == ATempty))
            {
              {
                ATerm f_11 = t;
                int g_11 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = f_29(t);
                    LocalPopChoice(g_11);
                  }
                else
                  {
                    t = f_11;
                    t = g_29(t);
                  }
              }
            }
          else
            {
              if(match_cons(r_28, sym_Conc_2))
                {
                  s_28 = ATgetArgument(r_28, 0);
                  t_28 = ATgetArgument(r_28, 1);
                  {
                    ATerm h_11 = t;
                    int i_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = f_29(t);
                        LocalPopChoice(i_11);
                      }
                    else
                      {
                        t = h_11;
                        t = i_29(t);
                      }
                  }
                }
              else
                {
                  t = f_29(t);
                }
            }
        }
      else
        {
          m_28 :
          if(((ATermList) r_28 == ATempty))
            {
              t = g_29(t);
            }
          else
            {
              if(match_cons(r_28, sym_Conc_2))
                {
                  s_28 = ATgetArgument(r_28, 0);
                  t_28 = ATgetArgument(r_28, 1);
                  t = i_29(t);
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
      if(match_cons(q_28, sym_Conc_3))
        {
          r_28 = ATgetArgument(q_28, 0);
          u_28 = ATgetArgument(q_28, 1);
          p_28 = ATgetArgument(q_28, 2);
          n_28 :
          if(match_cons(r_28, sym_Conc_3))
            {
              s_28 = ATgetArgument(r_28, 0);
              t_28 = ATgetArgument(r_28, 1);
              o_28 = ATgetArgument(r_28, 2);
              t = h_29(t);
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
ATerm conc_to_cons_0 (ATerm t)
{
  ATerm m_1 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CTC0_0(t);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          ATerm l_11 = t;
          int m_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC1_0(t);
              LocalPopChoice(m_11);
            }
          else
            {
              t = l_11;
              t = Conc_2(t, CTC0_0, _id);
            }
        }
      }
    return(t);
  }
  t = repeat_1(t, m_1);
  {
    ATerm q_11 = t;
    int r_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2(t, _id, conc_to_cons_0);
        LocalPopChoice(r_11);
      }
    else
      {
        t = q_11;
        t = _all(t, conc_to_cons_0);
      }
    {
      ATerm n_1 (ATerm t)
      {
        ATerm s_11 = t;
        int t_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC2_0(t);
            t = Cons_2(t, conc_to_cons_0, _id);
            LocalPopChoice(t_11);
          }
        else
          {
            t = s_11;
            t = CTC3_0(t);
          }
        return(t);
      }
      t = try_1(t, n_1);
    }
  }
  return(t);
}
ATerm Rename_Keyword_0 (ATerm t)
{
  ATerm r_29 = NULL;
  r_29 = t;
  q_29 :
  if(match_string(r_29, "sorts"))
    {
      t = term_u_11;
    }
  else
    {
      if(match_string(r_29, "imports"))
        {
          t = term_v_11;
        }
      else
        {
          if(match_string(r_29, "id"))
            {
              t = term_w_11;
            }
          else
            {
              if(match_string(r_29, "hiddens"))
                {
                  t = term_x_11;
                }
              else
                {
                  if(match_string(r_29, "exports"))
                    {
                      t = term_y_11;
                    }
                  else
                    {
                      if(match_string(r_29, "module"))
                        {
                          t = term_z_11;
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
  return(t);
}
ATerm Constr1_0 (ATerm t)
{
  ATerm m_31 = NULL,n_31 = NULL,o_31 = NULL,p_31 = NULL,q_31 = NULL,r_31 = NULL,s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,b_33 = NULL,c_33 = NULL,d_33 = NULL;
  v_31 = t;
  o_30 :
  if(match_cons(v_31, sym_prod_3))
    {
      w_31 = ATgetArgument(v_31, 0);
      a_32 = ATgetArgument(v_31, 1);
      d_33 = ATgetArgument(v_31, 2);
      p_30 :
      if(((ATgetType(w_31) == AT_LIST) && ((ATermList) w_31 != ATempty)))
        {
          x_31 = ATgetFirst((ATermList) w_31);
          z_31 = (ATerm) ATgetNext((ATermList) w_31);
          q_30 :
          if(((ATermList) z_31 == ATempty))
            {
              r_30 :
              if(match_cons(a_32, sym_opt_1))
                {
                  b_32 = ATgetArgument(a_32, 0);
                  s_30 :
                  {
                    if(((x_31 != NULL) && (x_31 != b_32)))
                      _fail(b_32);
                    else
                      x_31 = b_32;
                    t = term_a_12;
                  }
                }
              else
                {
                  if(match_cons(a_32, sym_cf_1))
                    {
                      b_32 = ATgetArgument(a_32, 0);
                      t_30 :
                      if(match_cons(x_31, sym_cf_1))
                        {
                          y_31 = ATgetArgument(x_31, 0);
                          u_30 :
                          if(match_cons(b_32, sym_opt_1))
                            {
                              b_33 = ATgetArgument(b_32, 0);
                              {
                                if(((y_31 != NULL) && (y_31 != b_33)))
                                  _fail(b_33);
                                else
                                  y_31 = b_33;
                                t = term_a_12;
                              }
                            }
                          else
                            {
                              if(match_cons(b_32, sym_iter_1))
                                {
                                  b_33 = ATgetArgument(b_32, 0);
                                  {
                                    if(((y_31 != NULL) && (y_31 != b_33)))
                                      _fail(b_33);
                                    else
                                      y_31 = b_33;
                                    t = term_b_12;
                                  }
                                }
                              else
                                {
                                  if(match_cons(b_32, sym_iter_sep_2))
                                    {
                                      b_33 = ATgetArgument(b_32, 0);
                                      c_33 = ATgetArgument(b_32, 1);
                                      {
                                        if(((y_31 != NULL) && (y_31 != b_33)))
                                          _fail(b_33);
                                        else
                                          y_31 = b_33;
                                        t = term_b_12;
                                      }
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
                    }
                  else
                    {
                      if(match_cons(a_32, sym_iter_1))
                        {
                          b_32 = ATgetArgument(a_32, 0);
                          v_30 :
                          {
                            if(((x_31 != NULL) && (x_31 != b_32)))
                              _fail(b_32);
                            else
                              x_31 = b_32;
                            t = term_b_12;
                          }
                        }
                      else
                        {
                          if(match_cons(a_32, sym_iter_sep_2))
                            {
                              b_32 = ATgetArgument(a_32, 0);
                              u_31 = ATgetArgument(a_32, 1);
                              w_30 :
                              {
                                if(((x_31 != NULL) && (x_31 != b_32)))
                                  _fail(b_32);
                                else
                                  x_31 = b_32;
                                t = term_b_12;
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
          else
            {
              if(((ATgetType(z_31) == AT_LIST) && ((ATermList) z_31 != ATempty)))
                {
                  m_31 = ATgetFirst((ATermList) z_31);
                  n_31 = (ATerm) ATgetNext((ATermList) z_31);
                  x_30 :
                  if(((ATermList) n_31 == ATempty))
                    {
                      y_30 :
                      if(match_cons(a_32, sym_iter_1))
                        {
                          b_32 = ATgetArgument(a_32, 0);
                          z_30 :
                          t = term_c_12;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(n_31) == AT_LIST) && ((ATermList) n_31 != ATempty)))
                        {
                          o_31 = ATgetFirst((ATermList) n_31);
                          p_31 = (ATerm) ATgetNext((ATermList) n_31);
                          a_31 :
                          if(((ATermList) p_31 == ATempty))
                            {
                              b_31 :
                              if(match_cons(a_32, sym_iter_sep_2))
                                {
                                  b_32 = ATgetArgument(a_32, 0);
                                  u_31 = ATgetArgument(a_32, 1);
                                  c_31 :
                                  t = term_c_12;
                                }
                              else
                                {
                                  if(match_cons(a_32, sym_cf_1))
                                    {
                                      b_32 = ATgetArgument(a_32, 0);
                                      d_31 :
                                      if(match_cons(b_32, sym_iter_1))
                                        {
                                          b_33 = ATgetArgument(b_32, 0);
                                          e_31 :
                                          t = term_c_12;
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
                              if(((ATgetType(p_31) == AT_LIST) && ((ATermList) p_31 != ATempty)))
                                {
                                  q_31 = ATgetFirst((ATermList) p_31);
                                  r_31 = (ATerm) ATgetNext((ATermList) p_31);
                                  f_31 :
                                  if(((ATgetType(r_31) == AT_LIST) && ((ATermList) r_31 != ATempty)))
                                    {
                                      s_31 = ATgetFirst((ATermList) r_31);
                                      t_31 = (ATerm) ATgetNext((ATermList) r_31);
                                      g_31 :
                                      if(((ATermList) t_31 == ATempty))
                                        {
                                          h_31 :
                                          if(match_cons(a_32, sym_cf_1))
                                            {
                                              b_32 = ATgetArgument(a_32, 0);
                                              i_31 :
                                              if(match_cons(b_32, sym_iter_sep_2))
                                                {
                                                  b_33 = ATgetArgument(b_32, 0);
                                                  c_33 = ATgetArgument(b_32, 1);
                                                  j_31 :
                                                  t = term_c_12;
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
                }
              else
                {
                  _fail(t);
                }
            }
        }
      else
        {
          if(((ATermList) w_31 == ATempty))
            {
              k_31 :
              if(match_cons(a_32, sym_opt_1))
                {
                  b_32 = ATgetArgument(a_32, 0);
                  t = term_g_12;
                }
              else
                {
                  if(match_cons(a_32, sym_cf_1))
                    {
                      b_32 = ATgetArgument(a_32, 0);
                      l_31 :
                      if(match_cons(b_32, sym_opt_1))
                        {
                          b_33 = ATgetArgument(b_32, 0);
                          t = term_g_12;
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Constr0_0 (ATerm t)
{
  ATerm h_34 = NULL,i_34 = NULL,j_34 = NULL,k_34 = NULL;
  h_34 = t;
  g_34 :
  if(match_cons(h_34, sym_prod_3))
    {
      i_34 = ATgetArgument(h_34, 0);
      j_34 = ATgetArgument(h_34, 1);
      k_34 = ATgetArgument(h_34, 2);
      {
        ATerm m_34 = NULL;
        t = not_null(k_34);
        {
          ATerm r_1 (ATerm t)
          {
            ATerm n_34 = NULL,o_34 = NULL;
            n_34 = t;
            f_34 :
            if(match_cons(n_34, sym_cons_1))
              {
                o_34 = ATgetArgument(n_34, 0);
                if(((m_34 != NULL) && (m_34 != o_34)))
                  _fail(o_34);
                else
                  m_34 = o_34;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, r_1);
        }
        t = not_null(m_34);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CnsGeneric_0 (ATerm t)
{
  ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
  v_34 = t;
  u_34 :
  if(match_cons(v_34, sym_appl_2))
    {
      w_34 = ATgetArgument(v_34, 0);
      x_34 = ATgetArgument(v_34, 1);
      {
        ATerm a_35 = NULL,c_35 = NULL;
        ATerm h_12;
        h_12 = t;
        {
          ATerm b_35 = NULL;
          t = not_null(w_34);
          {
            ATerm i_12 = t;
            int j_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Constr0_0(t);
                LocalPopChoice(j_12);
              }
            else
              {
                t = i_12;
                t = Constr1_0(t);
              }
            {
              t = try_1(t, Rename_Keyword_0);
              {
                b_35 = t;
                if(((a_35 != NULL) && (a_35 != b_35)))
                  _fail(b_35);
                else
                  a_35 = b_35;
              }
            }
          }
        }
        t = h_12;
        {
          t = SSL_mkterm(not_null(a_35), not_null(x_34));
          {
            c_35 = t;
            t = not_null(c_35);
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
ATerm ConstrNil_0 (ATerm t)
{
  ATerm p_35 = NULL,q_35 = NULL,r_35 = NULL,s_35 = NULL,t_35 = NULL,u_35 = NULL,v_35 = NULL,w_35 = NULL;
  q_35 = t;
  l_35 :
  if(match_cons(q_35, sym_prod_3))
    {
      r_35 = ATgetArgument(q_35, 0);
      s_35 = ATgetArgument(q_35, 1);
      w_35 = ATgetArgument(q_35, 2);
      m_35 :
      if(((ATermList) r_35 == ATempty))
        {
          n_35 :
          if(match_cons(s_35, sym_iter_star_1))
            {
              t_35 = ATgetArgument(s_35, 0);
              t = term_k_12;
            }
          else
            {
              if(match_cons(s_35, sym_iter_star_sep_2))
                {
                  t_35 = ATgetArgument(s_35, 0);
                  p_35 = ATgetArgument(s_35, 1);
                  t = term_k_12;
                }
              else
                {
                  if(match_cons(s_35, sym_cf_1))
                    {
                      t_35 = ATgetArgument(s_35, 0);
                      o_35 :
                      if(match_cons(t_35, sym_iter_star_1))
                        {
                          u_35 = ATgetArgument(t_35, 0);
                          t = term_k_12;
                        }
                      else
                        {
                          if(match_cons(t_35, sym_iter_star_sep_2))
                            {
                              u_35 = ATgetArgument(t_35, 0);
                              v_35 = ATgetArgument(t_35, 1);
                              t = term_k_12;
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
ATerm CnsNil_0 (ATerm t)
{
  ATerm e_36 = NULL,f_36 = NULL,g_36 = NULL;
  e_36 = t;
  d_36 :
  if(match_cons(e_36, sym_appl_2))
    {
      f_36 = ATgetArgument(e_36, 0);
      g_36 = ATgetArgument(e_36, 1);
      {
        ATerm q_36 = NULL;
        ATerm r_36 = NULL;
        t = not_null(f_36);
        {
          t = ConstrNil_0(t);
          {
            r_36 = t;
            if(((q_36 != NULL) && (q_36 != r_36)))
              _fail(r_36);
            else
              q_36 = r_36;
          }
        }
        t = (ATerm) ATempty;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cns_0 (ATerm t)
{
  ATerm l_12 = t;
  int m_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CnsNil_0(t);
      LocalPopChoice(m_12);
    }
  else
    {
      t = l_12;
      t = CnsGeneric_0(t);
    }
  return(t);
}
ATerm replace_appl_0 (ATerm t)
{
  ATerm s_1 (ATerm t)
  {
    ATerm t_1 (ATerm t)
    {
      t = appl_2(t, _id, _id);
      t = Cns_0(t);
      return(t);
    }
    t = try_1(t, t_1);
    return(t);
  }
  t = topdown_1(t, s_1);
  t = conc_to_cons_0(t);
  return(t);
}
ATerm ReplaceAppl_0 (ATerm t)
{
  ATerm y_36 = NULL;
  y_36 = t;
  x_36 :
  if(match_cons(y_36, sym_ReplaceAppl_0))
    {
      ATerm a_37 = NULL,c_37 = NULL;
      ATerm n_12;
      n_12 = t;
      {
        ATerm b_37 = NULL;
        t = SSLgetAnnotations(not_null(y_36));
        {
          b_37 = t;
          if(((a_37 != NULL) && (a_37 != b_37)))
            _fail(b_37);
          else
            a_37 = b_37;
        }
      }
      t = n_12;
      {
        ATerm g_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ReplaceAppl_0), not_null(a_37));
        {
          g_37 = t;
          if(((c_37 != NULL) && (c_37 != g_37)))
            _fail(g_37);
          else
            c_37 = g_37;
        }
        t = not_null(c_37);
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
  ATerm u_1 (ATerm t)
  {
    t = try_1(t, FlatAlt_0);
    return(t);
  }
  t = topdown_1(t, u_1);
  return(t);
}
ATerm FlatAlt_0 (ATerm t)
{
  ATerm o_12 = t;
  int p_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_38 = NULL,f_38 = NULL,g_38 = NULL,h_38 = NULL,t_38 = NULL;
      ATerm t_12 = t;
      int u_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm v_1 (ATerm t)
          {
            ATerm x_1 (ATerm t)
            {
              ATerm z_1 (ATerm t)
              {
                ATerm v_12 = t;
                int i_13 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_2 (ATerm t)
                    {
                      ATerm i_38 = NULL;
                      i_38 = t;
                      if(((e_38 != NULL) && (e_38 != i_38)))
                        _fail(i_38);
                      else
                        e_38 = i_38;
                      return(t);
                    }
                    t = cf_1(t, a_2);
                    LocalPopChoice(i_13);
                  }
                else
                  {
                    t = v_12;
                    {
                      ATerm j_38 = NULL;
                      j_38 = t;
                      if(((e_38 != NULL) && (e_38 != j_38)))
                        _fail(j_38);
                      else
                        e_38 = j_38;
                    }
                  }
                return(t);
              }
              t = Cons_2(t, z_1, Nil_0);
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              ATerm c_2 (ATerm t)
              {
                ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL;
                k_38 = t;
                n_37 :
                if(match_cons(k_38, sym_alt_2))
                  {
                    l_38 = ATgetArgument(k_38, 0);
                    m_38 = ATgetArgument(k_38, 1);
                    {
                      if(((f_38 != NULL) && (f_38 != l_38)))
                        _fail(l_38);
                      else
                        f_38 = l_38;
                      if(((g_38 != NULL) && (g_38 != m_38)))
                        _fail(m_38);
                      else
                        g_38 = m_38;
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = cf_1(t, c_2);
              return(t);
            }
            t = prod_3(t, x_1, y_1, _id);
            return(t);
          }
          ATerm w_1 (ATerm t)
          {
            ATerm n_38 = NULL;
            n_38 = t;
            if(((h_38 != NULL) && (h_38 != n_38)))
              _fail(n_38);
            else
              h_38 = n_38;
            return(t);
          }
          t = appl_2(t, v_1, w_1);
          LocalPopChoice(u_12);
        }
      else
        {
          t = t_12;
          {
            ATerm d_2 (ATerm t)
            {
              ATerm f_2 (ATerm t)
              {
                ATerm j_2 (ATerm t)
                {
                  ATerm o_38 = NULL;
                  o_38 = t;
                  if(((e_38 != NULL) && (e_38 != o_38)))
                    _fail(o_38);
                  else
                    e_38 = o_38;
                  return(t);
                }
                t = Cons_2(t, j_2, Nil_0);
                return(t);
              }
              ATerm g_2 (ATerm t)
              {
                ATerm k_2 (ATerm t)
                {
                  ATerm p_38 = NULL,q_38 = NULL,r_38 = NULL;
                  p_38 = t;
                  r_37 :
                  if(match_cons(p_38, sym_alt_2))
                    {
                      q_38 = ATgetArgument(p_38, 0);
                      r_38 = ATgetArgument(p_38, 1);
                      {
                        if(((f_38 != NULL) && (f_38 != q_38)))
                          _fail(q_38);
                        else
                          f_38 = q_38;
                        if(((g_38 != NULL) && (g_38 != r_38)))
                          _fail(r_38);
                        else
                          g_38 = r_38;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = lex_1(t, k_2);
                return(t);
              }
              t = prod_3(t, f_2, g_2, _id);
              return(t);
            }
            ATerm e_2 (ATerm t)
            {
              ATerm s_38 = NULL;
              s_38 = t;
              if(((h_38 != NULL) && (h_38 != s_38)))
                _fail(s_38);
              else
                h_38 = s_38;
              return(t);
            }
            t = appl_2(t, d_2, e_2);
          }
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(f_38), not_null(g_38)), term_j_13);
        {
          ATerm z_39 (ATerm t)
          {
            ATerm u_38 = NULL,v_38 = NULL,w_38 = NULL,x_38 = NULL,y_38 = NULL;
            ATerm a_40 (ATerm t)
            {
              ATerm z_38 = NULL;
              if(((e_38 != NULL) && (e_38 != v_38)))
                _fail(v_38);
              else
                e_38 = v_38;
              {
                if(((z_38 != NULL) && (z_38 != y_38)))
                  _fail(y_38);
                else
                  z_38 = y_38;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(z_38), not_null(h_38));
              }
              return(t);
            }
            ATerm b_40 (ATerm t)
            {
              ATerm c_39 = NULL;
              if(((e_38 != NULL) && (e_38 != w_38)))
                _fail(w_38);
              else
                e_38 = w_38;
              {
                if(((t_38 != NULL) && (t_38 != x_38)))
                  _fail(x_38);
                else
                  t_38 = x_38;
                {
                  if(((c_39 != NULL) && (c_39 != y_38)))
                    _fail(y_38);
                  else
                    c_39 = y_38;
                  t = (ATerm) ATmakeAppl(sym_alt_2, not_null(c_39), not_null(h_38));
                }
              }
              return(t);
            }
            ATerm p_40 (ATerm t)
            {
              ATerm i_39 = NULL;
              ATerm j_39 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(y_38), term_j_13);
              {
                t = add_0(t);
                {
                  j_39 = t;
                  if(((i_39 != NULL) && (i_39 != j_39)))
                    _fail(j_39);
                  else
                    i_39 = j_39;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(x_38), not_null(i_39));
                t = z_39(t);
              }
              return(t);
            }
            u_38 = t;
            x_37 :
            if(match_cons(u_38, sym__2))
              {
                v_38 = ATgetArgument(u_38, 0);
                y_38 = ATgetArgument(u_38, 1);
                z_37 :
                if(match_cons(v_38, sym_alt_2))
                  {
                    w_38 = ATgetArgument(v_38, 0);
                    x_38 = ATgetArgument(v_38, 1);
                    {
                      ATerm k_13 = t;
                      int l_13 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = a_40(t);
                          LocalPopChoice(l_13);
                        }
                      else
                        {
                          t = k_13;
                          {
                            ATerm m_13 = t;
                            int n_13 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = b_40(t);
                                LocalPopChoice(n_13);
                              }
                            else
                              {
                                t = m_13;
                                t = p_40(t);
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = a_40(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = z_39(t);
        }
      }
      LocalPopChoice(p_12);
    }
  else
    {
      t = o_12;
      {
        ATerm k_39 = NULL;
        k_39 = t;
        d_38 :
        if(match_cons(k_39, sym_FlatAlt_0))
          {
            ATerm m_39 = NULL,o_39 = NULL;
            ATerm o_13;
            o_13 = t;
            {
              ATerm n_39 = NULL;
              t = SSLgetAnnotations(not_null(k_39));
              {
                n_39 = t;
                if(((m_39 != NULL) && (m_39 != n_39)))
                  _fail(n_39);
                else
                  m_39 = n_39;
              }
            }
            t = o_13;
            {
              ATerm p_39 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatAlt_0), not_null(m_39));
              {
                p_39 = t;
                if(((o_39 != NULL) && (o_39 != p_39)))
                  _fail(p_39);
                else
                  o_39 = p_39;
              }
              t = not_null(o_39);
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
ATerm bracket_0 (ATerm t)
{
  ATerm d_41 = NULL;
  d_41 = t;
  c_41 :
  if(match_cons(d_41, sym_bracket_0))
    {
      ATerm p_13 = t;
      int e_14 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_41 = NULL,i_41 = NULL;
          ATerm f_14;
          f_14 = t;
          {
            ATerm h_41 = NULL;
            t = SSLgetAnnotations(not_null(d_41));
            {
              h_41 = t;
              if(((g_41 != NULL) && (g_41 != h_41)))
                _fail(h_41);
              else
                g_41 = h_41;
            }
          }
          t = f_14;
          {
            ATerm j_41 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(g_41));
            {
              j_41 = t;
              if(((i_41 != NULL) && (i_41 != j_41)))
                _fail(j_41);
              else
                i_41 = j_41;
            }
            t = not_null(i_41);
          }
          LocalPopChoice(e_14);
        }
      else
        {
          t = p_13;
          {
            ATerm l_41 = NULL,n_41 = NULL;
            ATerm g_14;
            g_14 = t;
            {
              ATerm m_41 = NULL;
              t = SSLgetAnnotations(not_null(d_41));
              {
                m_41 = t;
                if(((l_41 != NULL) && (l_41 != m_41)))
                  _fail(m_41);
                else
                  l_41 = m_41;
              }
            }
            t = g_14;
            {
              ATerm o_41 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(l_41));
              {
                o_41 = t;
                if(((n_41 != NULL) && (n_41 != o_41)))
                  _fail(o_41);
                else
                  n_41 = o_41;
              }
              t = not_null(n_41);
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
ATerm oncetd_1 (ATerm t, ATerm a_103 (ATerm))
{
  ATerm v_41 (ATerm t)
  {
    ATerm h_14 = t;
    int o_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = a_103(t);
        LocalPopChoice(o_14);
      }
    else
      {
        t = h_14;
        t = _one(t, v_41);
      }
    return(t);
  }
  t = v_41(t);
  return(t);
}
ATerm cons_1 (ATerm t, ATerm c_1 (ATerm))
{
  ATerm f_42 = NULL,g_42 = NULL;
  f_42 = t;
  e_42 :
  if(match_cons(f_42, sym_cons_1))
    {
      g_42 = ATgetArgument(f_42, 0);
      {
        ATerm p_14 = t;
        int q_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_42 = NULL,l_42 = NULL;
            ATerm k_42 = NULL;
            t = SSLgetAnnotations(not_null(f_42));
            {
              k_42 = t;
              if(((j_42 != NULL) && (j_42 != k_42)))
                _fail(k_42);
              else
                j_42 = k_42;
            }
            {
              t = not_null(g_42);
              {
                ATerm n_42 = NULL;
                t = c_1(t);
                {
                  l_42 = t;
                  {
                    ATerm o_42 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(l_42)), not_null(j_42));
                    {
                      o_42 = t;
                      if(((n_42 != NULL) && (n_42 != o_42)))
                        _fail(o_42);
                      else
                        n_42 = o_42;
                    }
                    t = not_null(n_42);
                  }
                }
              }
            }
            LocalPopChoice(q_14);
          }
        else
          {
            t = p_14;
            {
              ATerm r_42 = NULL,t_42 = NULL;
              ATerm s_42 = NULL;
              t = SSLgetAnnotations(not_null(f_42));
              {
                s_42 = t;
                if(((r_42 != NULL) && (r_42 != s_42)))
                  _fail(s_42);
                else
                  r_42 = s_42;
              }
              {
                t = not_null(g_42);
                {
                  ATerm v_42 = NULL;
                  t = c_1(t);
                  {
                    t_42 = t;
                    {
                      ATerm w_42 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(t_42)), not_null(r_42));
                      {
                        w_42 = t;
                        if(((v_42 != NULL) && (v_42 != w_42)))
                          _fail(w_42);
                        else
                          v_42 = w_42;
                      }
                      t = not_null(v_42);
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
ATerm lex_1 (ATerm t, ATerm b_1 (ATerm))
{
  ATerm v_43 = NULL,w_43 = NULL;
  v_43 = t;
  u_43 :
  if(match_cons(v_43, sym_lex_1))
    {
      w_43 = ATgetArgument(v_43, 0);
      {
        ATerm x_14 = t;
        int y_14 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_43 = NULL,b_44 = NULL;
            ATerm a_44 = NULL;
            t = SSLgetAnnotations(not_null(v_43));
            {
              a_44 = t;
              if(((z_43 != NULL) && (z_43 != a_44)))
                _fail(a_44);
              else
                z_43 = a_44;
            }
            {
              t = not_null(w_43);
              {
                ATerm d_44 = NULL;
                t = b_1(t);
                {
                  b_44 = t;
                  {
                    ATerm e_44 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(b_44)), not_null(z_43));
                    {
                      e_44 = t;
                      if(((d_44 != NULL) && (d_44 != e_44)))
                        _fail(e_44);
                      else
                        d_44 = e_44;
                    }
                    t = not_null(d_44);
                  }
                }
              }
            }
            LocalPopChoice(y_14);
          }
        else
          {
            t = x_14;
            {
              ATerm h_44 = NULL,j_44 = NULL;
              ATerm i_44 = NULL;
              t = SSLgetAnnotations(not_null(v_43));
              {
                i_44 = t;
                if(((h_44 != NULL) && (h_44 != i_44)))
                  _fail(i_44);
                else
                  h_44 = i_44;
              }
              {
                t = not_null(w_43);
                {
                  ATerm l_44 = NULL;
                  t = b_1(t);
                  {
                    j_44 = t;
                    {
                      ATerm m_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(j_44)), not_null(h_44));
                      {
                        m_44 = t;
                        if(((l_44 != NULL) && (l_44 != m_44)))
                          _fail(m_44);
                        else
                          l_44 = m_44;
                      }
                      t = not_null(l_44);
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
ATerm sort_1 (ATerm t, ATerm a_1 (ATerm))
{
  ATerm g_45 = NULL,h_45 = NULL;
  g_45 = t;
  f_45 :
  if(match_cons(g_45, sym_sort_1))
    {
      h_45 = ATgetArgument(g_45, 0);
      {
        ATerm z_14 = t;
        int a_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_45 = NULL,m_45 = NULL;
            ATerm l_45 = NULL;
            t = SSLgetAnnotations(not_null(g_45));
            {
              l_45 = t;
              if(((k_45 != NULL) && (k_45 != l_45)))
                _fail(l_45);
              else
                k_45 = l_45;
            }
            {
              t = not_null(h_45);
              {
                ATerm o_45 = NULL;
                t = a_1(t);
                {
                  m_45 = t;
                  {
                    ATerm p_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(m_45)), not_null(k_45));
                    {
                      p_45 = t;
                      if(((o_45 != NULL) && (o_45 != p_45)))
                        _fail(p_45);
                      else
                        o_45 = p_45;
                    }
                    t = not_null(o_45);
                  }
                }
              }
            }
            LocalPopChoice(a_15);
          }
        else
          {
            t = z_14;
            {
              ATerm u_45 = NULL,x_45 = NULL;
              ATerm v_45 = NULL;
              t = SSLgetAnnotations(not_null(g_45));
              {
                v_45 = t;
                if(((u_45 != NULL) && (u_45 != v_45)))
                  _fail(v_45);
                else
                  u_45 = v_45;
              }
              {
                t = not_null(h_45);
                {
                  ATerm a_46 = NULL;
                  t = a_1(t);
                  {
                    x_45 = t;
                    {
                      ATerm b_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(x_45)), not_null(u_45));
                      {
                        b_46 = t;
                        if(((a_46 != NULL) && (a_46 != b_46)))
                          _fail(b_46);
                        else
                          a_46 = b_46;
                      }
                      t = not_null(a_46);
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
ATerm alt_2 (ATerm t, ATerm y_0 (ATerm), ATerm z_0 (ATerm))
{
  ATerm v_46 = NULL,w_46 = NULL,x_46 = NULL;
  v_46 = t;
  u_46 :
  if(match_cons(v_46, sym_alt_2))
    {
      w_46 = ATgetArgument(v_46, 0);
      x_46 = ATgetArgument(v_46, 1);
      {
        ATerm b_15 = t;
        int c_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_47 = NULL,d_47 = NULL;
            ATerm c_47 = NULL;
            t = SSLgetAnnotations(not_null(v_46));
            {
              c_47 = t;
              if(((b_47 != NULL) && (b_47 != c_47)))
                _fail(c_47);
              else
                b_47 = c_47;
            }
            {
              t = not_null(w_46);
              {
                ATerm f_47 = NULL;
                t = y_0(t);
                {
                  d_47 = t;
                  {
                    t = not_null(x_46);
                    {
                      ATerm h_47 = NULL;
                      t = z_0(t);
                      {
                        f_47 = t;
                        {
                          ATerm i_47 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(d_47), not_null(f_47)), not_null(b_47));
                          {
                            i_47 = t;
                            if(((h_47 != NULL) && (h_47 != i_47)))
                              _fail(i_47);
                            else
                              h_47 = i_47;
                          }
                          t = not_null(h_47);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(c_15);
          }
        else
          {
            t = b_15;
            {
              ATerm p_47 = NULL,r_47 = NULL;
              ATerm q_47 = NULL;
              t = SSLgetAnnotations(not_null(v_46));
              {
                q_47 = t;
                if(((p_47 != NULL) && (p_47 != q_47)))
                  _fail(q_47);
                else
                  p_47 = q_47;
              }
              {
                t = not_null(w_46);
                {
                  ATerm t_47 = NULL;
                  t = y_0(t);
                  {
                    r_47 = t;
                    {
                      t = not_null(x_46);
                      {
                        ATerm v_47 = NULL;
                        t = z_0(t);
                        {
                          t_47 = t;
                          {
                            ATerm w_47 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(r_47), not_null(t_47)), not_null(p_47));
                            {
                              w_47 = t;
                              if(((v_47 != NULL) && (v_47 != w_47)))
                                _fail(w_47);
                              else
                                v_47 = w_47;
                            }
                            t = not_null(v_47);
                          }
                        }
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
ATerm injective_alt_0 (ATerm t)
{
  ATerm d_15 = t;
  int e_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1(t, _id);
      LocalPopChoice(e_15);
    }
  else
    {
      t = d_15;
      {
        ATerm f_15 = t;
        int g_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = cf_1(t, injective_alt_0);
            LocalPopChoice(g_15);
          }
        else
          {
            t = f_15;
            t = alt_2(t, injective_alt_0, injective_alt_0);
          }
      }
    }
  return(t);
}
ATerm varsym_1 (ATerm t, ATerm x_0 (ATerm))
{
  ATerm r_48 = NULL,s_48 = NULL;
  r_48 = t;
  q_48 :
  if(match_cons(r_48, sym_varsym_1))
    {
      s_48 = ATgetArgument(r_48, 0);
      {
        ATerm x_15 = t;
        int y_15 = stack_ptr;
        if((PushChoice() == 0))
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
                t = x_0(t);
                {
                  x_48 = t;
                  {
                    ATerm a_49 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(x_48)), not_null(v_48));
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
            LocalPopChoice(y_15);
          }
        else
          {
            t = x_15;
            {
              ATerm d_49 = NULL,f_49 = NULL;
              ATerm e_49 = NULL;
              t = SSLgetAnnotations(not_null(r_48));
              {
                e_49 = t;
                if(((d_49 != NULL) && (d_49 != e_49)))
                  _fail(e_49);
                else
                  d_49 = e_49;
              }
              {
                t = not_null(s_48);
                {
                  ATerm h_49 = NULL;
                  t = x_0(t);
                  {
                    f_49 = t;
                    {
                      ATerm i_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(f_49)), not_null(d_49));
                      {
                        i_49 = t;
                        if(((h_49 != NULL) && (h_49 != i_49)))
                          _fail(i_49);
                        else
                          h_49 = i_49;
                      }
                      t = not_null(h_49);
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
ATerm injection_0 (ATerm t)
{
  ATerm z_15 = t;
  int a_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm l_2 (ATerm t)
      {
        ATerm n_2 (ATerm t)
        {
          t = varsym_1(t, _id);
          return(t);
        }
        t = Cons_2(t, n_2, Nil_0);
        return(t);
      }
      ATerm m_2 (ATerm t)
      {
        ATerm b_16 = t;
        if((PushChoice() == 0))
          {
            ATerm o_2 (ATerm t)
            {
              t = cons_1(t, _id);
              return(t);
            }
            t = oncetd_1(t, o_2);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = b_16;
          }
        return(t);
      }
      t = prod_3(t, l_2, _id, m_2);
      LocalPopChoice(a_16);
    }
  else
    {
      t = z_15;
      {
        ATerm c_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_2 (ATerm t)
            {
              ATerm r_2 (ATerm t)
              {
                ATerm m_16 = t;
                int p_16 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = sort_1(t, _id);
                    LocalPopChoice(p_16);
                  }
                else
                  {
                    t = m_16;
                    {
                      ATerm s_2 (ATerm t)
                      {
                        t = sort_1(t, _id);
                        return(t);
                      }
                      t = cf_1(t, s_2);
                    }
                  }
                return(t);
              }
              t = Cons_2(t, r_2, Nil_0);
              return(t);
            }
            ATerm q_2 (ATerm t)
            {
              ATerm q_16 = t;
              if((PushChoice() == 0))
                {
                  ATerm t_2 (ATerm t)
                  {
                    t = cons_1(t, _id);
                    return(t);
                  }
                  t = oncetd_1(t, t_2);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = q_16;
                }
              return(t);
            }
            t = prod_3(t, p_2, injective_alt_0, q_2);
            LocalPopChoice(l_16);
          }
        else
          {
            t = c_16;
            {
              ATerm r_16 = t;
              int s_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm u_2 (ATerm t)
                  {
                    ATerm x_2 (ATerm t)
                    {
                      ATerm t_16 = t;
                      if((PushChoice() == 0))
                        {
                          t = lit_1(t, _id);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = t_16;
                        }
                      return(t);
                    }
                    t = Cons_2(t, x_2, Nil_0);
                    return(t);
                  }
                  ATerm v_2 (ATerm t)
                  {
                    ATerm u_16 = t;
                    int o_17 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = sort_1(t, _id);
                        LocalPopChoice(o_17);
                      }
                    else
                      {
                        t = u_16;
                        {
                          ATerm p_17 = t;
                          int q_17 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = cf_1(t, v_2);
                              LocalPopChoice(q_17);
                            }
                          else
                            {
                              t = p_17;
                              {
                                ATerm r_17 = t;
                                int s_17 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = lex_1(t, v_2);
                                    LocalPopChoice(s_17);
                                  }
                                else
                                  {
                                    t = r_17;
                                    {
                                      ATerm t_17 = t;
                                      int u_17 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = iter_1(t, v_2);
                                          LocalPopChoice(u_17);
                                        }
                                      else
                                        {
                                          t = t_17;
                                          {
                                            ATerm v_17 = t;
                                            int w_17 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = iter_star_1(t, v_2);
                                                LocalPopChoice(w_17);
                                              }
                                            else
                                              {
                                                t = v_17;
                                                {
                                                  ATerm x_17 = t;
                                                  int g_18 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm y_2 (ATerm t)
                                                      {
                                                        t = lit_1(t, _id);
                                                        return(t);
                                                      }
                                                      t = iter_sep_2(t, v_2, y_2);
                                                      LocalPopChoice(g_18);
                                                    }
                                                  else
                                                    {
                                                      t = x_17;
                                                      {
                                                        ATerm z_2 (ATerm t)
                                                        {
                                                          t = lit_1(t, _id);
                                                          return(t);
                                                        }
                                                        t = iter_star_sep_2(t, v_2, z_2);
                                                      }
                                                    }
                                                }
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
                  ATerm w_2 (ATerm t)
                  {
                    ATerm h_18 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm a_3 (ATerm t)
                        {
                          t = cons_1(t, _id);
                          return(t);
                        }
                        t = oncetd_1(t, a_3);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = h_18;
                      }
                    return(t);
                  }
                  t = prod_3(t, u_2, v_2, w_2);
                  LocalPopChoice(s_16);
                }
              else
                {
                  t = r_16;
                  {
                    ATerm k_18 = t;
                    int l_18 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm k_50 = NULL,l_50 = NULL,m_50 = NULL,n_50 = NULL,o_50 = NULL,p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL;
                        m_50 = t;
                        t_49 :
                        if(match_cons(m_50, sym_prod_3))
                          {
                            n_50 = ATgetArgument(m_50, 0);
                            s_50 = ATgetArgument(m_50, 1);
                            v_50 = ATgetArgument(m_50, 2);
                            u_49 :
                            if(((ATgetType(n_50) == AT_LIST) && ((ATermList) n_50 != ATempty)))
                              {
                                o_50 = ATgetFirst((ATermList) n_50);
                                r_50 = (ATerm) ATgetNext((ATermList) n_50);
                                v_49 :
                                if(match_cons(o_50, sym_cf_1))
                                  {
                                    p_50 = ATgetArgument(o_50, 0);
                                    w_49 :
                                    if(match_cons(p_50, sym_iter_sep_2))
                                      {
                                        q_50 = ATgetArgument(p_50, 0);
                                        k_50 = ATgetArgument(p_50, 1);
                                        x_49 :
                                        if(((ATermList) r_50 == ATempty))
                                          {
                                            y_49 :
                                            if(match_cons(s_50, sym_cf_1))
                                              {
                                                t_50 = ATgetArgument(s_50, 0);
                                                z_49 :
                                                if(match_cons(t_50, sym_iter_star_sep_2))
                                                  {
                                                    u_50 = ATgetArgument(t_50, 0);
                                                    l_50 = ATgetArgument(t_50, 1);
                                                    a_50 :
                                                    if(match_cons(v_50, sym_no_attrs_0))
                                                      {
                                                        if(((q_50 != NULL) && (q_50 != u_50)))
                                                          _fail(u_50);
                                                        else
                                                          q_50 = u_50;
                                                        if(((k_50 != NULL) && (k_50 != l_50)))
                                                          _fail(l_50);
                                                        else
                                                          k_50 = l_50;
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
                                        if(match_cons(p_50, sym_iter_1))
                                          {
                                            q_50 = ATgetArgument(p_50, 0);
                                            b_50 :
                                            if(((ATermList) r_50 == ATempty))
                                              {
                                                c_50 :
                                                if(match_cons(s_50, sym_cf_1))
                                                  {
                                                    t_50 = ATgetArgument(s_50, 0);
                                                    d_50 :
                                                    if(match_cons(t_50, sym_iter_star_1))
                                                      {
                                                        u_50 = ATgetArgument(t_50, 0);
                                                        e_50 :
                                                        if(match_cons(v_50, sym_no_attrs_0))
                                                          {
                                                            if(((q_50 != NULL) && (q_50 != u_50)))
                                                              _fail(u_50);
                                                            else
                                                              q_50 = u_50;
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
                          }
                        else
                          {
                            _fail(t);
                          }
                        LocalPopChoice(l_18);
                      }
                    else
                      {
                        t = k_18;
                        {
                          ATerm w_18 = t;
                          int c_19 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm b_3 (ATerm t)
                              {
                                ATerm c_3 (ATerm t)
                                {
                                  ATerm d_19 = t;
                                  int q_19 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm z_50 = NULL;
                                      z_50 = t;
                                      f_50 :
                                      if(!(match_string(z_50, "bracket")))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(q_19);
                                    }
                                  else
                                    {
                                      t = d_19;
                                      t = bracket_0(t);
                                    }
                                  return(t);
                                }
                                t = oncetd_1(t, c_3);
                                return(t);
                              }
                              t = prod_3(t, _id, _id, b_3);
                              LocalPopChoice(c_19);
                            }
                          else
                            {
                              t = w_18;
                              {
                                ATerm a_51 = NULL,b_51 = NULL,c_51 = NULL,d_51 = NULL,e_51 = NULL;
                                a_51 = t;
                                g_50 :
                                if(match_cons(a_51, sym_prod_3))
                                  {
                                    b_51 = ATgetArgument(a_51, 0);
                                    c_51 = ATgetArgument(a_51, 1);
                                    e_51 = ATgetArgument(a_51, 2);
                                    h_50 :
                                    if(match_cons(c_51, sym_sort_1))
                                      {
                                        d_51 = ATgetArgument(c_51, 0);
                                        i_50 :
                                        if(match_string(d_51, "<START>"))
                                          {
                                            j_50 :
                                            if(!(match_cons(e_51, sym_no_attrs_0)))
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
                      }
                  }
                }
            }
          }
      }
    }
  return(t);
}
ATerm Inj_0 (ATerm t)
{
  ATerm m_51 = NULL,n_51 = NULL,o_51 = NULL,p_51 = NULL,q_51 = NULL;
  m_51 = t;
  j_51 :
  if(match_cons(m_51, sym_appl_2))
    {
      n_51 = ATgetArgument(m_51, 0);
      o_51 = ATgetArgument(m_51, 1);
      k_51 :
      if(((ATgetType(o_51) == AT_LIST) && ((ATermList) o_51 != ATempty)))
        {
          p_51 = ATgetFirst((ATermList) o_51);
          q_51 = (ATerm) ATgetNext((ATermList) o_51);
          l_51 :
          if(((ATermList) q_51 == ATempty))
            {
              {
                t = not_null(n_51);
                t = injection_0(t);
                t = not_null(p_51);
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
ATerm bottomup_1 (ATerm t, ATerm l_101 (ATerm))
{
  ATerm d_3 (ATerm t)
  {
    t = bottomup_1(t, l_101);
    return(t);
  }
  t = _all(t, d_3);
  t = l_101(t);
  return(t);
}
ATerm flat_injections_0 (ATerm t)
{
  ATerm e_3 (ATerm t)
  {
    t = try_1(t, Inj_0);
    return(t);
  }
  t = bottomup_1(t, e_3);
  return(t);
}
ATerm FlatInj_0 (ATerm t)
{
  ATerm y_51 = NULL;
  y_51 = t;
  x_51 :
  if(match_cons(y_51, sym_FlatInj_0))
    {
      ATerm a_52 = NULL,c_52 = NULL;
      ATerm w_19;
      w_19 = t;
      {
        ATerm b_52 = NULL;
        t = SSLgetAnnotations(not_null(y_51));
        {
          b_52 = t;
          if(((a_52 != NULL) && (a_52 != b_52)))
            _fail(b_52);
          else
            a_52 = b_52;
        }
      }
      t = w_19;
      {
        ATerm d_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatInj_0), not_null(a_52));
        {
          d_52 = t;
          if(((c_52 != NULL) && (c_52 != d_52)))
            _fail(d_52);
          else
            c_52 = d_52;
        }
        t = not_null(c_52);
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
  ATerm s_52 = NULL,t_52 = NULL;
  s_52 = t;
  r_52 :
  if(match_cons(s_52, sym_lit_1))
    {
      t_52 = ATgetArgument(s_52, 0);
      {
        ATerm x_19 = t;
        int y_19 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_52 = NULL,y_52 = NULL;
            ATerm x_52 = NULL;
            t = SSLgetAnnotations(not_null(s_52));
            {
              x_52 = t;
              if(((w_52 != NULL) && (w_52 != x_52)))
                _fail(x_52);
              else
                w_52 = x_52;
            }
            {
              t = not_null(t_52);
              {
                ATerm a_53 = NULL;
                t = w_0(t);
                {
                  y_52 = t;
                  {
                    ATerm b_53 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(y_52)), not_null(w_52));
                    {
                      b_53 = t;
                      if(((a_53 != NULL) && (a_53 != b_53)))
                        _fail(b_53);
                      else
                        a_53 = b_53;
                    }
                    t = not_null(a_53);
                  }
                }
              }
            }
            LocalPopChoice(y_19);
          }
        else
          {
            t = x_19;
            {
              ATerm e_53 = NULL,g_53 = NULL;
              ATerm f_53 = NULL;
              t = SSLgetAnnotations(not_null(s_52));
              {
                f_53 = t;
                if(((e_53 != NULL) && (e_53 != f_53)))
                  _fail(f_53);
                else
                  e_53 = f_53;
              }
              {
                t = not_null(t_52);
                {
                  ATerm i_53 = NULL;
                  t = w_0(t);
                  {
                    g_53 = t;
                    {
                      ATerm j_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(g_53)), not_null(e_53));
                      {
                        j_53 = t;
                        if(((i_53 != NULL) && (i_53 != j_53)))
                          _fail(j_53);
                        else
                          i_53 = j_53;
                      }
                      t = not_null(i_53);
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
ATerm list_1 (ATerm t, ATerm w_96 (ATerm))
{
  ATerm s_53 (ATerm t)
  {
    ATerm z_19 = t;
    int g_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(g_20);
      }
    else
      {
        t = z_19;
        t = Cons_2(t, w_96, s_53);
      }
    return(t);
  }
  t = s_53(t);
  return(t);
}
ATerm seq_1 (ATerm t, ATerm z_72 (ATerm))
{
  ATerm z_53 = NULL,a_54 = NULL;
  z_53 = t;
  x_53 :
  if(match_cons(z_53, sym_seq_1))
    {
      a_54 = ATgetArgument(z_53, 0);
      {
        ATerm d_54 = NULL,f_54 = NULL;
        ATerm e_54 = NULL;
        t = SSLgetAnnotations(not_null(z_53));
        {
          e_54 = t;
          if(((d_54 != NULL) && (d_54 != e_54)))
            _fail(e_54);
          else
            d_54 = e_54;
        }
        {
          t = not_null(a_54);
          {
            ATerm h_54 = NULL;
            t = z_72(t);
            {
              f_54 = t;
              {
                ATerm i_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_seq_1, not_null(f_54)), not_null(d_54));
                {
                  i_54 = t;
                  if(((h_54 != NULL) && (h_54 != i_54)))
                    _fail(i_54);
                  else
                    h_54 = i_54;
                }
                t = not_null(h_54);
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
ATerm iter_star_sep_2 (ATerm t, ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm y_54 = NULL,z_54 = NULL,a_55 = NULL;
  y_54 = t;
  x_54 :
  if(match_cons(y_54, sym_iter_star_sep_2))
    {
      z_54 = ATgetArgument(y_54, 0);
      a_55 = ATgetArgument(y_54, 1);
      {
        ATerm k_20 = t;
        int l_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm e_55 = NULL,g_55 = NULL;
            ATerm f_55 = NULL;
            t = SSLgetAnnotations(not_null(y_54));
            {
              f_55 = t;
              if(((e_55 != NULL) && (e_55 != f_55)))
                _fail(f_55);
              else
                e_55 = f_55;
            }
            {
              t = not_null(z_54);
              {
                ATerm i_55 = NULL;
                t = u_0(t);
                {
                  g_55 = t;
                  {
                    t = not_null(a_55);
                    {
                      ATerm k_55 = NULL;
                      t = v_0(t);
                      {
                        i_55 = t;
                        {
                          ATerm l_55 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(g_55), not_null(i_55)), not_null(e_55));
                          {
                            l_55 = t;
                            if(((k_55 != NULL) && (k_55 != l_55)))
                              _fail(l_55);
                            else
                              k_55 = l_55;
                          }
                          t = not_null(k_55);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(l_20);
          }
        else
          {
            t = k_20;
            {
              ATerm p_55 = NULL,r_55 = NULL;
              ATerm q_55 = NULL;
              t = SSLgetAnnotations(not_null(y_54));
              {
                q_55 = t;
                if(((p_55 != NULL) && (p_55 != q_55)))
                  _fail(q_55);
                else
                  p_55 = q_55;
              }
              {
                t = not_null(z_54);
                {
                  ATerm t_55 = NULL;
                  t = u_0(t);
                  {
                    r_55 = t;
                    {
                      t = not_null(a_55);
                      {
                        ATerm v_55 = NULL;
                        t = v_0(t);
                        {
                          t_55 = t;
                          {
                            ATerm w_55 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(r_55), not_null(t_55)), not_null(p_55));
                            {
                              w_55 = t;
                              if(((v_55 != NULL) && (v_55 != w_55)))
                                _fail(w_55);
                              else
                                v_55 = w_55;
                            }
                            t = not_null(v_55);
                          }
                        }
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
ATerm iter_star_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm q_56 = NULL,r_56 = NULL;
  q_56 = t;
  p_56 :
  if(match_cons(q_56, sym_iter_star_1))
    {
      r_56 = ATgetArgument(q_56, 0);
      {
        ATerm m_20 = t;
        int n_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_56 = NULL,w_56 = NULL;
            ATerm v_56 = NULL;
            t = SSLgetAnnotations(not_null(q_56));
            {
              v_56 = t;
              if(((u_56 != NULL) && (u_56 != v_56)))
                _fail(v_56);
              else
                u_56 = v_56;
            }
            {
              t = not_null(r_56);
              {
                ATerm y_56 = NULL;
                t = t_0(t);
                {
                  w_56 = t;
                  {
                    ATerm z_56 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(w_56)), not_null(u_56));
                    {
                      z_56 = t;
                      if(((y_56 != NULL) && (y_56 != z_56)))
                        _fail(z_56);
                      else
                        y_56 = z_56;
                    }
                    t = not_null(y_56);
                  }
                }
              }
            }
            LocalPopChoice(n_20);
          }
        else
          {
            t = m_20;
            {
              ATerm c_57 = NULL,e_57 = NULL;
              ATerm d_57 = NULL;
              t = SSLgetAnnotations(not_null(q_56));
              {
                d_57 = t;
                if(((c_57 != NULL) && (c_57 != d_57)))
                  _fail(d_57);
                else
                  c_57 = d_57;
              }
              {
                t = not_null(r_56);
                {
                  ATerm g_57 = NULL;
                  t = t_0(t);
                  {
                    e_57 = t;
                    {
                      ATerm h_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(e_57)), not_null(c_57));
                      {
                        h_57 = t;
                        if(((g_57 != NULL) && (g_57 != h_57)))
                          _fail(h_57);
                        else
                          g_57 = h_57;
                      }
                      t = not_null(g_57);
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
ATerm iter_sep_2 (ATerm t, ATerm r_0 (ATerm), ATerm s_0 (ATerm))
{
  ATerm b_58 = NULL,g_58 = NULL,h_58 = NULL;
  b_58 = t;
  a_58 :
  if(match_cons(b_58, sym_iter_sep_2))
    {
      g_58 = ATgetArgument(b_58, 0);
      h_58 = ATgetArgument(b_58, 1);
      {
        ATerm o_20 = t;
        int p_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm l_58 = NULL,n_58 = NULL;
            ATerm m_58 = NULL;
            t = SSLgetAnnotations(not_null(b_58));
            {
              m_58 = t;
              if(((l_58 != NULL) && (l_58 != m_58)))
                _fail(m_58);
              else
                l_58 = m_58;
            }
            {
              t = not_null(g_58);
              {
                ATerm p_58 = NULL;
                t = r_0(t);
                {
                  n_58 = t;
                  {
                    t = not_null(h_58);
                    {
                      ATerm r_58 = NULL;
                      t = s_0(t);
                      {
                        p_58 = t;
                        {
                          ATerm v_58 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(n_58), not_null(p_58)), not_null(l_58));
                          {
                            v_58 = t;
                            if(((r_58 != NULL) && (r_58 != v_58)))
                              _fail(v_58);
                            else
                              r_58 = v_58;
                          }
                          t = not_null(r_58);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(p_20);
          }
        else
          {
            t = o_20;
            {
              ATerm z_58 = NULL,f_59 = NULL;
              ATerm e_59 = NULL;
              t = SSLgetAnnotations(not_null(b_58));
              {
                e_59 = t;
                if(((z_58 != NULL) && (z_58 != e_59)))
                  _fail(e_59);
                else
                  z_58 = e_59;
              }
              {
                t = not_null(g_58);
                {
                  ATerm h_59 = NULL;
                  t = r_0(t);
                  {
                    f_59 = t;
                    {
                      t = not_null(h_58);
                      {
                        ATerm j_59 = NULL;
                        t = s_0(t);
                        {
                          h_59 = t;
                          {
                            ATerm k_59 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(f_59), not_null(h_59)), not_null(z_58));
                            {
                              k_59 = t;
                              if(((j_59 != NULL) && (j_59 != k_59)))
                                _fail(k_59);
                              else
                                j_59 = k_59;
                            }
                            t = not_null(j_59);
                          }
                        }
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
ATerm iter_1 (ATerm t, ATerm q_0 (ATerm))
{
  ATerm e_60 = NULL,f_60 = NULL;
  e_60 = t;
  d_60 :
  if(match_cons(e_60, sym_iter_1))
    {
      f_60 = ATgetArgument(e_60, 0);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_60 = NULL,f_63 = NULL;
            ATerm e_63 = NULL;
            t = SSLgetAnnotations(not_null(e_60));
            {
              e_63 = t;
              if(((i_60 != NULL) && (i_60 != e_63)))
                _fail(e_63);
              else
                i_60 = e_63;
            }
            {
              t = not_null(f_60);
              {
                ATerm v_63 = NULL;
                t = q_0(t);
                {
                  f_63 = t;
                  {
                    ATerm w_63 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(f_63)), not_null(i_60));
                    {
                      w_63 = t;
                      if(((v_63 != NULL) && (v_63 != w_63)))
                        _fail(w_63);
                      else
                        v_63 = w_63;
                    }
                    t = not_null(v_63);
                  }
                }
              }
            }
            LocalPopChoice(v_20);
          }
        else
          {
            t = u_20;
            {
              ATerm k_65 = NULL,m_65 = NULL;
              ATerm l_65 = NULL;
              t = SSLgetAnnotations(not_null(e_60));
              {
                l_65 = t;
                if(((k_65 != NULL) && (k_65 != l_65)))
                  _fail(l_65);
                else
                  k_65 = l_65;
              }
              {
                t = not_null(f_60);
                {
                  ATerm q_65 = NULL;
                  t = q_0(t);
                  {
                    m_65 = t;
                    {
                      ATerm r_65 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(m_65)), not_null(k_65));
                      {
                        r_65 = t;
                        if(((q_65 != NULL) && (q_65 != r_65)))
                          _fail(r_65);
                        else
                          q_65 = r_65;
                      }
                      t = not_null(q_65);
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
ATerm list_sort_0 (ATerm t)
{
  ATerm b_21 = t;
  int c_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1(t, _id);
      LocalPopChoice(c_21);
    }
  else
    {
      t = b_21;
      {
        ATerm d_21 = t;
        int e_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_sep_2(t, _id, _id);
            LocalPopChoice(e_21);
          }
        else
          {
            t = d_21;
            {
              ATerm f_21 = t;
              int g_21 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_star_1(t, _id);
                  LocalPopChoice(g_21);
                }
              else
                {
                  t = f_21;
                  t = iter_star_sep_2(t, _id, _id);
                }
            }
          }
      }
    }
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm h_21 = t;
  int i_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm e_66 (ATerm t)
      {
        ATerm j_21 = t;
        int o_22 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = list_sort_0(t);
            LocalPopChoice(o_22);
          }
        else
          {
            t = j_21;
            {
              ATerm f_3 (ATerm t)
              {
                ATerm g_3 (ATerm t)
                {
                  ATerm p_22 = t;
                  int r_22 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = lit_1(t, _id);
                      LocalPopChoice(r_22);
                    }
                  else
                    {
                      t = p_22;
                      {
                        ATerm s_22 = t;
                        int t_22 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = layout_0(t);
                            LocalPopChoice(t_22);
                          }
                        else
                          {
                            t = s_22;
                            t = e_66(t);
                          }
                      }
                    }
                  return(t);
                }
                t = list_1(t, g_3);
                return(t);
              }
              t = seq_1(t, f_3);
            }
          }
        return(t);
      }
      t = e_66(t);
      LocalPopChoice(i_21);
    }
  else
    {
      t = h_21;
      {
        ATerm b_66 = NULL,c_66 = NULL,d_66 = NULL;
        b_66 = t;
        a_66 :
        if(((ATermList) b_66 == ATempty))
          {
            {
            }
          }
        else
          {
            if(((ATgetType(b_66) == AT_LIST) && ((ATermList) b_66 != ATempty)))
              {
                c_66 = ATgetFirst((ATermList) b_66);
                d_66 = (ATerm) ATgetNext((ATermList) b_66);
                {
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
ATerm remove_lit_0 (ATerm t)
{
  ATerm h_3 (ATerm t)
  {
    ATerm i_3 (ATerm t)
    {
      t = is_list_0(t);
      {
        ATerm j_3 (ATerm t)
        {
          ATerm u_22 = t;
          if((PushChoice() == 0))
            {
              t = lit_1(t, _id);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_22;
            }
          return(t);
        }
        t = filter_1(t, j_3);
      }
      return(t);
    }
    t = try_1(t, i_3);
    return(t);
  }
  t = topdown_1(t, h_3);
  return(t);
}
ATerm RemoveLit_0 (ATerm t)
{
  ATerm j_66 = NULL;
  j_66 = t;
  i_66 :
  if(match_cons(j_66, sym_RemoveLit_0))
    {
      ATerm l_66 = NULL,n_66 = NULL;
      ATerm v_22;
      v_22 = t;
      {
        ATerm m_66 = NULL;
        t = SSLgetAnnotations(not_null(j_66));
        {
          m_66 = t;
          if(((l_66 != NULL) && (l_66 != m_66)))
            _fail(m_66);
          else
            l_66 = m_66;
        }
      }
      t = v_22;
      {
        ATerm o_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLit_0), not_null(l_66));
        {
          o_66 = t;
          if(((n_66 != NULL) && (n_66 != o_66)))
            _fail(o_66);
          else
            n_66 = o_66;
        }
        t = not_null(n_66);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flat_list_0 (ATerm t)
{
  ATerm k_3 (ATerm t)
  {
    t = try_1(t, FlatList_0);
    return(t);
  }
  t = topdown_1(t, k_3);
  return(t);
}
ATerm FlatList_0 (ATerm t)
{
  ATerm l_69 = NULL,m_69 = NULL,n_69 = NULL,o_69 = NULL,p_69 = NULL,q_69 = NULL,r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL;
  ATerm f_73 (ATerm t)
  {
    ATerm d_70 = NULL;
    ATerm o_71 = NULL;
    ATerm o_73 (ATerm t)
    {
      ATerm e_70 = NULL,f_70 = NULL,g_70 = NULL,h_70 = NULL,i_70 = NULL,j_70 = NULL,k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL;
      e_70 = t;
      i_67 :
      if(match_cons(e_70, sym_appl_2))
        {
          f_70 = ATgetArgument(e_70, 0);
          m_70 = ATgetArgument(e_70, 1);
          j_67 :
          if(match_cons(f_70, sym_prod_3))
            {
              g_70 = ATgetArgument(f_70, 0);
              h_70 = ATgetArgument(f_70, 1);
              l_70 = ATgetArgument(f_70, 2);
              k_67 :
              if(match_cons(h_70, sym_cf_1))
                {
                  i_70 = ATgetArgument(h_70, 0);
                  l_67 :
                  if(match_cons(i_70, sym_iter_sep_2))
                    {
                      j_70 = ATgetArgument(i_70, 0);
                      k_70 = ATgetArgument(i_70, 1);
                      m_67 :
                      if(((ATgetType(m_70) == AT_LIST) && ((ATermList) m_70 != ATempty)))
                        {
                          n_70 = ATgetFirst((ATermList) m_70);
                          o_70 = (ATerm) ATgetNext((ATermList) m_70);
                          n_67 :
                          if(((ATermList) o_70 == ATempty))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(n_70));
                            }
                          else
                            {
                              if(((ATgetType(o_70) == AT_LIST) && ((ATermList) o_70 != ATempty)))
                                {
                                  p_70 = ATgetFirst((ATermList) o_70);
                                  q_70 = (ATerm) ATgetNext((ATermList) o_70);
                                  o_67 :
                                  if(((ATgetType(q_70) == AT_LIST) && ((ATermList) q_70 != ATempty)))
                                    {
                                      r_70 = ATgetFirst((ATermList) q_70);
                                      s_70 = (ATerm) ATgetNext((ATermList) q_70);
                                      p_67 :
                                      if(((ATermList) s_70 == ATempty))
                                        {
                                          {
                                            ATerm b_71 = NULL,d_71 = NULL;
                                            ATerm w_22;
                                            w_22 = t;
                                            {
                                              ATerm c_71 = NULL;
                                              t = not_null(n_70);
                                              {
                                                t = o_73(t);
                                                {
                                                  c_71 = t;
                                                  if(((b_71 != NULL) && (b_71 != c_71)))
                                                    _fail(c_71);
                                                  else
                                                    b_71 = c_71;
                                                }
                                              }
                                            }
                                            t = w_22;
                                            {
                                              ATerm e_71 = NULL;
                                              t = not_null(r_70);
                                              {
                                                t = o_73(t);
                                                {
                                                  e_71 = t;
                                                  if(((d_71 != NULL) && (d_71 != e_71)))
                                                    _fail(e_71);
                                                  else
                                                    d_71 = e_71;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(d_71)), (ATerm) ATinsert(ATempty, not_null(p_70))), not_null(b_71));
                                                t = concat_0(t);
                                              }
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(((ATgetType(s_70) == AT_LIST) && ((ATermList) s_70 != ATempty)))
                                            {
                                              t_70 = ATgetFirst((ATermList) s_70);
                                              u_70 = (ATerm) ATgetNext((ATermList) s_70);
                                              q_67 :
                                              if(((ATgetType(u_70) == AT_LIST) && ((ATermList) u_70 != ATempty)))
                                                {
                                                  v_70 = ATgetFirst((ATermList) u_70);
                                                  w_70 = (ATerm) ATgetNext((ATermList) u_70);
                                                  r_67 :
                                                  if(((ATermList) w_70 == ATempty))
                                                    {
                                                      {
                                                        ATerm k_71 = NULL,m_71 = NULL;
                                                        ATerm y_22;
                                                        y_22 = t;
                                                        {
                                                          ATerm l_71 = NULL;
                                                          t = not_null(n_70);
                                                          {
                                                            t = o_73(t);
                                                            {
                                                              l_71 = t;
                                                              if(((k_71 != NULL) && (k_71 != l_71)))
                                                                _fail(l_71);
                                                              else
                                                                k_71 = l_71;
                                                            }
                                                          }
                                                        }
                                                        t = y_22;
                                                        {
                                                          ATerm n_71 = NULL;
                                                          t = not_null(v_70);
                                                          {
                                                            t = o_73(t);
                                                            {
                                                              n_71 = t;
                                                              if(((m_71 != NULL) && (m_71 != n_71)))
                                                                _fail(n_71);
                                                              else
                                                                m_71 = n_71;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_71)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(t_70)), not_null(r_70)), not_null(p_70))), not_null(k_71));
                                                            t = concat_0(t);
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
      return(t);
    }
    t = o_73(t);
    {
      o_71 = t;
      if(((d_70 != NULL) && (d_70 != o_71)))
        _fail(o_71);
      else
        d_70 = o_71;
    }
    t = not_null(d_70);
    return(t);
  }
  ATerm g_73 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(y_69));
    return(t);
  }
  ATerm h_73 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm i_73 (ATerm t)
  {
    t = not_null(y_69);
    t = FlatList_0(t);
    return(t);
  }
  ATerm j_73 (ATerm t)
  {
    ATerm t_71 = NULL;
    ATerm w_72 = NULL;
    ATerm a_74 (ATerm t)
    {
      ATerm u_71 = NULL,v_71 = NULL,w_71 = NULL,x_71 = NULL,y_71 = NULL,z_71 = NULL,a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL;
      u_71 = t;
      a_68 :
      if(match_cons(u_71, sym_appl_2))
        {
          v_71 = ATgetArgument(u_71, 0);
          b_72 = ATgetArgument(u_71, 1);
          b_68 :
          if(match_cons(v_71, sym_prod_3))
            {
              w_71 = ATgetArgument(v_71, 0);
              x_71 = ATgetArgument(v_71, 1);
              a_72 = ATgetArgument(v_71, 2);
              c_68 :
              if(match_cons(x_71, sym_cf_1))
                {
                  y_71 = ATgetArgument(x_71, 0);
                  d_68 :
                  if(match_cons(y_71, sym_iter_1))
                    {
                      z_71 = ATgetArgument(y_71, 0);
                      e_68 :
                      if(((ATgetType(b_72) == AT_LIST) && ((ATermList) b_72 != ATempty)))
                        {
                          c_72 = ATgetFirst((ATermList) b_72);
                          d_72 = (ATerm) ATgetNext((ATermList) b_72);
                          f_68 :
                          if(((ATermList) d_72 == ATempty))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(c_72));
                            }
                          else
                            {
                              if(((ATgetType(d_72) == AT_LIST) && ((ATermList) d_72 != ATempty)))
                                {
                                  e_72 = ATgetFirst((ATermList) d_72);
                                  f_72 = (ATerm) ATgetNext((ATermList) d_72);
                                  g_68 :
                                  if(((ATermList) f_72 == ATempty))
                                    {
                                      {
                                        ATerm l_72 = NULL,n_72 = NULL;
                                        ATerm d_23;
                                        d_23 = t;
                                        {
                                          ATerm m_72 = NULL;
                                          t = not_null(c_72);
                                          {
                                            t = a_74(t);
                                            {
                                              m_72 = t;
                                              if(((l_72 != NULL) && (l_72 != m_72)))
                                                _fail(m_72);
                                              else
                                                l_72 = m_72;
                                            }
                                          }
                                        }
                                        t = d_23;
                                        {
                                          ATerm o_72 = NULL;
                                          t = not_null(e_72);
                                          {
                                            t = a_74(t);
                                            {
                                              o_72 = t;
                                              if(((n_72 != NULL) && (n_72 != o_72)))
                                                _fail(o_72);
                                              else
                                                n_72 = o_72;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(n_72)), not_null(l_72));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(((ATgetType(f_72) == AT_LIST) && ((ATermList) f_72 != ATempty)))
                                        {
                                          g_72 = ATgetFirst((ATermList) f_72);
                                          h_72 = (ATerm) ATgetNext((ATermList) f_72);
                                          h_68 :
                                          if(((ATermList) h_72 == ATempty))
                                            {
                                              {
                                                ATerm s_72 = NULL,u_72 = NULL;
                                                ATerm e_23;
                                                e_23 = t;
                                                {
                                                  ATerm t_72 = NULL;
                                                  t = not_null(c_72);
                                                  {
                                                    t = a_74(t);
                                                    {
                                                      t_72 = t;
                                                      if(((s_72 != NULL) && (s_72 != t_72)))
                                                        _fail(t_72);
                                                      else
                                                        s_72 = t_72;
                                                    }
                                                  }
                                                }
                                                t = e_23;
                                                {
                                                  ATerm v_72 = NULL;
                                                  t = not_null(g_72);
                                                  {
                                                    t = a_74(t);
                                                    {
                                                      v_72 = t;
                                                      if(((u_72 != NULL) && (u_72 != v_72)))
                                                        _fail(v_72);
                                                      else
                                                        u_72 = v_72;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(u_72)), (ATerm) ATinsert(ATempty, not_null(e_72))), not_null(s_72));
                                                    t = concat_0(t);
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
    t = a_74(t);
    {
      w_72 = t;
      if(((t_71 != NULL) && (t_71 != w_72)))
        _fail(w_72);
      else
        t_71 = w_72;
    }
    t = not_null(t_71);
    return(t);
  }
  ATerm k_73 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(y_69));
    return(t);
  }
  ATerm l_73 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm m_73 (ATerm t)
  {
    t = not_null(y_69);
    t = FlatList_0(t);
    return(t);
  }
  ATerm n_73 (ATerm t)
  {
    ATerm b_73 = NULL,d_73 = NULL;
    ATerm f_23;
    f_23 = t;
    {
      ATerm c_73 = NULL;
      t = SSLgetAnnotations(not_null(a_70));
      {
        c_73 = t;
        if(((b_73 != NULL) && (b_73 != c_73)))
          _fail(c_73);
        else
          b_73 = c_73;
      }
    }
    t = f_23;
    {
      ATerm e_73 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatList_0), not_null(b_73));
      {
        e_73 = t;
        if(((d_73 != NULL) && (d_73 != e_73)))
          _fail(e_73);
        else
          d_73 = e_73;
      }
      t = not_null(d_73);
    }
    return(t);
  }
  a_70 = t;
  l_68 :
  if(match_cons(a_70, sym_appl_2))
    {
      n_69 = ATgetArgument(a_70, 0);
      x_69 = ATgetArgument(a_70, 1);
      m_68 :
      if(match_cons(n_69, sym_prod_3))
        {
          o_69 = ATgetArgument(n_69, 0);
          t_69 = ATgetArgument(n_69, 1);
          w_69 = ATgetArgument(n_69, 2);
          n_68 :
          if(match_cons(t_69, sym_cf_1))
            {
              u_69 = ATgetArgument(t_69, 0);
              o_68 :
              if(match_cons(u_69, sym_iter_sep_2))
                {
                  v_69 = ATgetArgument(u_69, 0);
                  m_69 = ATgetArgument(u_69, 1);
                  p_68 :
                  if(((ATgetType(x_69) == AT_LIST) && ((ATermList) x_69 != ATempty)))
                    {
                      y_69 = ATgetFirst((ATermList) x_69);
                      z_69 = (ATerm) ATgetNext((ATermList) x_69);
                      q_68 :
                      if(((ATermList) z_69 == ATempty))
                        {
                          r_68 :
                          {
                            ATerm g_23 = t;
                            int h_23 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = f_73(t);
                                LocalPopChoice(h_23);
                              }
                            else
                              {
                                t = g_23;
                                t = g_73(t);
                              }
                          }
                        }
                      else
                        {
                          s_68 :
                          t = f_73(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(u_69, sym_iter_star_sep_2))
                    {
                      v_69 = ATgetArgument(u_69, 0);
                      m_69 = ATgetArgument(u_69, 1);
                      t_68 :
                      if(((ATermList) o_69 == ATempty))
                        {
                          u_68 :
                          if(((ATermList) x_69 == ATempty))
                            {
                              t = h_73(t);
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(((ATgetType(o_69) == AT_LIST) && ((ATermList) o_69 != ATempty)))
                            {
                              p_69 = ATgetFirst((ATermList) o_69);
                              s_69 = (ATerm) ATgetNext((ATermList) o_69);
                              v_68 :
                              if(match_cons(p_69, sym_cf_1))
                                {
                                  q_69 = ATgetArgument(p_69, 0);
                                  w_68 :
                                  if(match_cons(q_69, sym_iter_sep_2))
                                    {
                                      r_69 = ATgetArgument(q_69, 0);
                                      l_69 = ATgetArgument(q_69, 1);
                                      x_68 :
                                      if(((ATermList) s_69 == ATempty))
                                        {
                                          y_68 :
                                          if(((ATgetType(x_69) == AT_LIST) && ((ATermList) x_69 != ATempty)))
                                            {
                                              y_69 = ATgetFirst((ATermList) x_69);
                                              z_69 = (ATerm) ATgetNext((ATermList) x_69);
                                              z_68 :
                                              if(((ATermList) z_69 == ATempty))
                                                {
                                                  t = i_73(t);
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
                          else
                            {
                              _fail(t);
                            }
                        }
                    }
                  else
                    {
                      if(match_cons(u_69, sym_iter_1))
                        {
                          v_69 = ATgetArgument(u_69, 0);
                          a_69 :
                          if(((ATgetType(x_69) == AT_LIST) && ((ATermList) x_69 != ATempty)))
                            {
                              y_69 = ATgetFirst((ATermList) x_69);
                              z_69 = (ATerm) ATgetNext((ATermList) x_69);
                              b_69 :
                              if(((ATermList) z_69 == ATempty))
                                {
                                  c_69 :
                                  {
                                    ATerm k_23 = t;
                                    int p_23 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = j_73(t);
                                        LocalPopChoice(p_23);
                                      }
                                    else
                                      {
                                        t = k_23;
                                        t = k_73(t);
                                      }
                                  }
                                }
                              else
                                {
                                  d_69 :
                                  t = j_73(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(u_69, sym_iter_star_1))
                            {
                              v_69 = ATgetArgument(u_69, 0);
                              e_69 :
                              if(((ATermList) o_69 == ATempty))
                                {
                                  f_69 :
                                  if(((ATermList) x_69 == ATempty))
                                    {
                                      t = l_73(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  if(((ATgetType(o_69) == AT_LIST) && ((ATermList) o_69 != ATempty)))
                                    {
                                      p_69 = ATgetFirst((ATermList) o_69);
                                      s_69 = (ATerm) ATgetNext((ATermList) o_69);
                                      g_69 :
                                      if(match_cons(p_69, sym_cf_1))
                                        {
                                          q_69 = ATgetArgument(p_69, 0);
                                          h_69 :
                                          if(match_cons(q_69, sym_iter_1))
                                            {
                                              r_69 = ATgetArgument(q_69, 0);
                                              i_69 :
                                              if(((ATermList) s_69 == ATempty))
                                                {
                                                  j_69 :
                                                  if(((ATgetType(x_69) == AT_LIST) && ((ATermList) x_69 != ATempty)))
                                                    {
                                                      y_69 = ATgetFirst((ATermList) x_69);
                                                      z_69 = (ATerm) ATgetNext((ATermList) x_69);
                                                      k_69 :
                                                      if(((ATermList) z_69 == ATempty))
                                                        {
                                                          t = m_73(t);
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
      if(match_cons(a_70, sym_FlatList_0))
        {
          t = n_73(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm r_104 (ATerm), ATerm s_104 (ATerm))
{
  ATerm n_74 (ATerm t)
  {
    ATerm q_23 = t;
    int r_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = r_104(t);
        t = n_74(t);
        LocalPopChoice(r_23);
      }
    else
      {
        t = q_23;
        t = s_104(t);
      }
    return(t);
  }
  t = n_74(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm u_104 (ATerm))
{
  t = repeat_2(t, u_104, _id);
  return(t);
}
ATerm appl_to_sort_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    t = repeat_1(t, ApplToSort_0);
    return(t);
  }
  t = topdown_1(t, l_3);
  return(t);
}
ATerm De_Escape4_0 (ATerm t)
{
  ATerm q_74 = NULL;
  q_74 = t;
  p_74 :
  if(((ATermList) q_74 == ATempty))
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
  ATerm v_74 = NULL,w_74 = NULL,x_74 = NULL;
  v_74 = t;
  u_74 :
  if(((ATgetType(v_74) == AT_LIST) && ((ATermList) v_74 != ATempty)))
    {
      w_74 = ATgetFirst((ATermList) v_74);
      x_74 = (ATerm) ATgetNext((ATermList) v_74);
      {
        ATerm a_75 = NULL;
        ATerm b_75 = NULL;
        t = not_null(x_74);
        {
          t = De_Escape_0(t);
          {
            b_75 = t;
            if(((a_75 != NULL) && (a_75 != b_75)))
              _fail(b_75);
            else
              a_75 = b_75;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(a_75)), not_null(w_74));
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
  ATerm k_75 = NULL,l_75 = NULL,m_75 = NULL,n_75 = NULL,o_75 = NULL;
  k_75 = t;
  g_75 :
  if(((ATgetType(k_75) == AT_LIST) && ((ATermList) k_75 != ATempty)))
    {
      l_75 = ATgetFirst((ATermList) k_75);
      m_75 = (ATerm) ATgetNext((ATermList) k_75);
      h_75 :
      if(match_int(l_75, 92))
        {
          i_75 :
          if(((ATgetType(m_75) == AT_LIST) && ((ATermList) m_75 != ATempty)))
            {
              n_75 = ATgetFirst((ATermList) m_75);
              o_75 = (ATerm) ATgetNext((ATermList) m_75);
              j_75 :
              if(match_int(n_75, 92))
                {
                  ATerm q_75 = NULL;
                  ATerm r_75 = NULL;
                  t = not_null(o_75);
                  {
                    t = De_Escape_0(t);
                    {
                      r_75 = t;
                      if(((q_75 != NULL) && (q_75 != r_75)))
                        _fail(r_75);
                      else
                        q_75 = r_75;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(q_75)), term_s_23);
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
  ATerm a_76 = NULL,b_76 = NULL,c_76 = NULL,d_76 = NULL,e_76 = NULL;
  a_76 = t;
  w_75 :
  if(((ATgetType(a_76) == AT_LIST) && ((ATermList) a_76 != ATempty)))
    {
      b_76 = ATgetFirst((ATermList) a_76);
      c_76 = (ATerm) ATgetNext((ATermList) a_76);
      x_75 :
      if(match_int(b_76, 92))
        {
          y_75 :
          if(((ATgetType(c_76) == AT_LIST) && ((ATermList) c_76 != ATempty)))
            {
              d_76 = ATgetFirst((ATermList) c_76);
              e_76 = (ATerm) ATgetNext((ATermList) c_76);
              z_75 :
              if(match_int(d_76, 34))
                {
                  ATerm g_76 = NULL;
                  ATerm h_76 = NULL;
                  t = not_null(e_76);
                  {
                    t = De_Escape_0(t);
                    {
                      h_76 = t;
                      if(((g_76 != NULL) && (g_76 != h_76)))
                        _fail(h_76);
                      else
                        g_76 = h_76;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(g_76)), term_t_23);
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
  ATerm u_23 = t;
  int v_23 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
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
            t = De_Escape2_0(t);
            LocalPopChoice(x_23);
          }
        else
          {
            t = w_23;
            {
              ATerm k_24 = t;
              int o_24 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(o_24);
                }
              else
                {
                  t = k_24;
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
ATerm at_last_1 (ATerm t, ATerm s_97 (ATerm))
{
  ATerm k_76 (ATerm t)
  {
    ATerm p_24 = t;
    int t_24 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = s_97(t);
        LocalPopChoice(t_24);
      }
    else
      {
        t = p_24;
        t = Cons_2(t, _id, k_76);
      }
    return(t);
  }
  t = k_76(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm n_76 = NULL,o_76 = NULL,p_76 = NULL;
  n_76 = t;
  m_76 :
  if(((ATgetType(n_76) == AT_LIST) && ((ATermList) n_76 != ATempty)))
    {
      o_76 = ATgetFirst((ATermList) n_76);
      p_76 = (ATerm) ATgetNext((ATermList) n_76);
      t = not_null(p_76);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm v_76 = NULL,w_76 = NULL,x_76 = NULL;
  v_76 = t;
  u_76 :
  if(((ATgetType(v_76) == AT_LIST) && ((ATermList) v_76 != ATempty)))
    {
      w_76 = ATgetFirst((ATermList) v_76);
      x_76 = (ATerm) ATgetNext((ATermList) v_76);
      t = not_null(w_76);
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
    ATerm u_24;
    u_24 = t;
    {
      ATerm g_77 = NULL;
      t = Hd_0(t);
      {
        g_77 = t;
        b_77 :
        if(!(match_int(g_77, 34)))
          {
            _fail(t);
          }
      }
    }
    t = u_24;
    {
      t = Tl_0(t);
      {
        ATerm m_3 (ATerm t)
        {
          ATerm h_77 = NULL,i_77 = NULL,j_77 = NULL;
          h_77 = t;
          d_77 :
          if(((ATgetType(h_77) == AT_LIST) && ((ATermList) h_77 != ATempty)))
            {
              i_77 = ATgetFirst((ATermList) h_77);
              j_77 = (ATerm) ATgetNext((ATermList) h_77);
              e_77 :
              if(match_int(i_77, 34))
                {
                  f_77 :
                  if(((ATermList) j_77 == ATempty))
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
        t = at_last_1(t, m_3);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm PpSym_0 (ATerm t)
{
  ATerm d_79 = NULL,e_79 = NULL,f_79 = NULL,g_79 = NULL;
  g_79 = t;
  c_79 :
  if(match_cons(g_79, sym_cf_1))
    {
      e_79 = ATgetArgument(g_79, 0);
      {
        ATerm k_79 = NULL;
        ATerm l_79 = NULL;
        t = not_null(e_79);
        {
          t = PpSym_0(t);
          {
            l_79 = t;
            if(((k_79 != NULL) && (k_79 != l_79)))
              _fail(l_79);
            else
              k_79 = l_79;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_24)), not_null(k_79)), (ATerm) ATinsert(ATempty, term_v_24));
          t = concat_0(t);
        }
      }
    }
  else
    {
      if(match_cons(g_79, sym_lex_1))
        {
          e_79 = ATgetArgument(g_79, 0);
          {
            ATerm n_79 = NULL;
            ATerm o_79 = NULL;
            t = not_null(e_79);
            {
              t = PpSym_0(t);
              {
                o_79 = t;
                if(((n_79 != NULL) && (n_79 != o_79)))
                  _fail(o_79);
                else
                  n_79 = o_79;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_x_24)), not_null(n_79)), (ATerm) ATinsert(ATempty, term_v_24));
              t = concat_0(t);
            }
          }
        }
      else
        {
          if(match_cons(g_79, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_y_24);
            }
          else
            {
              if(match_cons(g_79, sym_seq_2))
                {
                  e_79 = ATgetArgument(g_79, 0);
                  f_79 = ATgetArgument(g_79, 1);
                  {
                    ATerm s_79 = NULL;
                    ATerm t_79 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(not_null(f_79)), not_null(e_79));
                    {
                      t = map_1(t, PpSym_0);
                      {
                        t_79 = t;
                        if(((s_79 != NULL) && (s_79 != t_79)))
                          _fail(t_79);
                        else
                          s_79 = t_79;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_25)), not_null(s_79)), (ATerm) ATinsert(ATempty, term_z_24));
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(g_79, sym_opt_1))
                    {
                      e_79 = ATgetArgument(g_79, 0);
                      {
                        t = not_null(e_79);
                        {
                          t = PpSym_0(t);
                          {
                            ATerm n_3 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_b_25);
                              return(t);
                            }
                            t = at_end_1(t, n_3);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(g_79, sym_iter_1))
                        {
                          e_79 = ATgetArgument(g_79, 0);
                          {
                            t = not_null(e_79);
                            {
                              t = PpSym_0(t);
                              {
                                ATerm o_3 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_c_25);
                                  return(t);
                                }
                                t = at_end_1(t, o_3);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(g_79, sym_iter_star_1))
                            {
                              e_79 = ATgetArgument(g_79, 0);
                              {
                                t = not_null(e_79);
                                {
                                  t = PpSym_0(t);
                                  {
                                    ATerm p_3 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_f_25);
                                      return(t);
                                    }
                                    t = at_end_1(t, p_3);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(g_79, sym_iter_sep_2))
                                {
                                  e_79 = ATgetArgument(g_79, 0);
                                  f_79 = ATgetArgument(g_79, 1);
                                  {
                                    ATerm e_80 = NULL,g_80 = NULL;
                                    ATerm k_25;
                                    k_25 = t;
                                    {
                                      ATerm f_80 = NULL;
                                      t = not_null(e_79);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          f_80 = t;
                                          if(((e_80 != NULL) && (e_80 != f_80)))
                                            _fail(f_80);
                                          else
                                            e_80 = f_80;
                                        }
                                      }
                                    }
                                    t = k_25;
                                    {
                                      ATerm l_80 = NULL;
                                      t = not_null(f_79);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          l_80 = t;
                                          if(((g_80 != NULL) && (g_80 != l_80)))
                                            _fail(l_80);
                                          else
                                            g_80 = l_80;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_m_25)), not_null(g_80)), not_null(e_80)), (ATerm) ATinsert(ATempty, term_l_25));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(g_79, sym_iter_star_sep_2))
                                    {
                                      e_79 = ATgetArgument(g_79, 0);
                                      f_79 = ATgetArgument(g_79, 1);
                                      {
                                        ATerm o_80 = NULL,q_80 = NULL;
                                        ATerm n_25;
                                        n_25 = t;
                                        {
                                          ATerm p_80 = NULL;
                                          t = not_null(e_79);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              p_80 = t;
                                              if(((o_80 != NULL) && (o_80 != p_80)))
                                                _fail(p_80);
                                              else
                                                o_80 = p_80;
                                            }
                                          }
                                        }
                                        t = n_25;
                                        {
                                          ATerm r_80 = NULL;
                                          t = not_null(f_79);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              r_80 = t;
                                              if(((q_80 != NULL) && (q_80 != r_80)))
                                                _fail(r_80);
                                              else
                                                q_80 = r_80;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_r_25)), not_null(q_80)), not_null(o_80)), (ATerm) ATinsert(ATempty, term_l_25));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(g_79, sym_iter_n_2))
                                        {
                                          e_79 = ATgetArgument(g_79, 0);
                                          f_79 = ATgetArgument(g_79, 1);
                                          {
                                            ATerm u_80 = NULL;
                                            ATerm w_80 = NULL;
                                            t = not_null(e_79);
                                            {
                                              t = PpSym_0(t);
                                              {
                                                w_80 = t;
                                                if(((u_80 != NULL) && (u_80 != w_80)))
                                                  _fail(w_80);
                                                else
                                                  u_80 = w_80;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_25)), not_null(u_80));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(g_79, sym_iter_sep_n_3))
                                            {
                                              e_79 = ATgetArgument(g_79, 0);
                                              f_79 = ATgetArgument(g_79, 1);
                                              d_79 = ATgetArgument(g_79, 2);
                                              {
                                                ATerm z_80 = NULL,b_81 = NULL;
                                                ATerm t_25;
                                                t_25 = t;
                                                {
                                                  ATerm a_81 = NULL;
                                                  t = not_null(e_79);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      a_81 = t;
                                                      if(((z_80 != NULL) && (z_80 != a_81)))
                                                        _fail(a_81);
                                                      else
                                                        z_80 = a_81;
                                                    }
                                                  }
                                                }
                                                t = t_25;
                                                {
                                                  ATerm c_81 = NULL;
                                                  t = not_null(f_79);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      c_81 = t;
                                                      if(((b_81 != NULL) && (b_81 != c_81)))
                                                        _fail(c_81);
                                                      else
                                                        b_81 = c_81;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_s_25)), not_null(b_81)), not_null(z_80));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(g_79, sym_set_1))
                                                {
                                                  e_79 = ATgetArgument(g_79, 0);
                                                  {
                                                    ATerm e_81 = NULL;
                                                    ATerm f_81 = NULL;
                                                    t = not_null(e_79);
                                                    {
                                                      t = PpSym_0(t);
                                                      {
                                                        f_81 = t;
                                                        if(((e_81 != NULL) && (e_81 != f_81)))
                                                          _fail(f_81);
                                                        else
                                                          e_81 = f_81;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(e_81)), (ATerm) ATinsert(ATempty, term_u_25));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(g_79, sym_pair_2))
                                                    {
                                                      e_79 = ATgetArgument(g_79, 0);
                                                      f_79 = ATgetArgument(g_79, 1);
                                                      {
                                                        ATerm i_81 = NULL,k_81 = NULL;
                                                        ATerm v_25;
                                                        v_25 = t;
                                                        {
                                                          ATerm j_81 = NULL;
                                                          t = not_null(e_79);
                                                          {
                                                            t = PpSym_0(t);
                                                            {
                                                              j_81 = t;
                                                              if(((i_81 != NULL) && (i_81 != j_81)))
                                                                _fail(j_81);
                                                              else
                                                                i_81 = j_81;
                                                            }
                                                          }
                                                        }
                                                        t = v_25;
                                                        {
                                                          ATerm l_81 = NULL;
                                                          t = not_null(f_79);
                                                          {
                                                            t = PpSym_0(t);
                                                            {
                                                              l_81 = t;
                                                              if(((k_81 != NULL) && (k_81 != l_81)))
                                                                _fail(l_81);
                                                              else
                                                                k_81 = l_81;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(k_81)), (ATerm) ATinsert(ATempty, term_w_25)), not_null(i_81));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(g_79, sym_func_2))
                                                        {
                                                          e_79 = ATgetArgument(g_79, 0);
                                                          f_79 = ATgetArgument(g_79, 1);
                                                          {
                                                            ATerm o_81 = NULL,q_81 = NULL;
                                                            ATerm h_26;
                                                            h_26 = t;
                                                            {
                                                              ATerm p_81 = NULL;
                                                              t = not_null(e_79);
                                                              {
                                                                t = filter_1(t, PpSym_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    p_81 = t;
                                                                    if(((o_81 != NULL) && (o_81 != p_81)))
                                                                      _fail(p_81);
                                                                    else
                                                                      o_81 = p_81;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = h_26;
                                                            {
                                                              ATerm r_81 = NULL;
                                                              t = not_null(f_79);
                                                              {
                                                                t = PpSym_0(t);
                                                                {
                                                                  r_81 = t;
                                                                  if(((q_81 != NULL) && (q_81 != r_81)))
                                                                    _fail(r_81);
                                                                  else
                                                                    q_81 = r_81;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_81)), (ATerm) ATinsert(ATempty, term_i_26)), not_null(o_81));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(g_79, sym_alt_2))
                                                            {
                                                              e_79 = ATgetArgument(g_79, 0);
                                                              f_79 = ATgetArgument(g_79, 1);
                                                              {
                                                                ATerm u_81 = NULL,w_81 = NULL;
                                                                ATerm j_26;
                                                                j_26 = t;
                                                                {
                                                                  ATerm v_81 = NULL;
                                                                  t = not_null(e_79);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      v_81 = t;
                                                                      if(((u_81 != NULL) && (u_81 != v_81)))
                                                                        _fail(v_81);
                                                                      else
                                                                        u_81 = v_81;
                                                                    }
                                                                  }
                                                                }
                                                                t = j_26;
                                                                {
                                                                  ATerm x_81 = NULL;
                                                                  t = not_null(f_79);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      x_81 = t;
                                                                      if(((w_81 != NULL) && (w_81 != x_81)))
                                                                        _fail(x_81);
                                                                      else
                                                                        w_81 = x_81;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_81)), (ATerm) ATinsert(ATempty, term_k_26)), not_null(u_81));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(g_79, sym_perm_1))
                                                                {
                                                                  e_79 = ATgetArgument(g_79, 0);
                                                                  {
                                                                    ATerm z_81 = NULL;
                                                                    ATerm a_82 = NULL;
                                                                    t = not_null(e_79);
                                                                    {
                                                                      t = filter_1(t, PpSym_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          a_82 = t;
                                                                          if(((z_81 != NULL) && (z_81 != a_82)))
                                                                            _fail(a_82);
                                                                          else
                                                                            z_81 = a_82;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(z_81)), term_l_26);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(g_79, sym_sort_1))
                                                                    {
                                                                      e_79 = ATgetArgument(g_79, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(e_79));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(g_79, sym_lit_1))
                                                                        {
                                                                          e_79 = ATgetArgument(g_79, 0);
                                                                          {
                                                                            ATerm d_82 = NULL;
                                                                            ATerm e_82 = NULL;
                                                                            t = not_null(e_79);
                                                                            {
                                                                              ATerm q_3 (ATerm t)
                                                                              {
                                                                                t = de_quote_0(t);
                                                                                t = de_escape_0(t);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, q_3);
                                                                              {
                                                                                e_82 = t;
                                                                                if(((d_82 != NULL) && (d_82 != e_82)))
                                                                                  _fail(e_82);
                                                                                else
                                                                                  d_82 = e_82;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(d_82));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(g_79, sym_label_2))
                                                                            {
                                                                              e_79 = ATgetArgument(g_79, 0);
                                                                              f_79 = ATgetArgument(g_79, 1);
                                                                              {
                                                                                ATerm g_82 = NULL;
                                                                                ATerm h_82 = NULL;
                                                                                t = not_null(e_79);
                                                                                {
                                                                                  ATerm r_3 (ATerm t)
                                                                                  {
                                                                                    t = de_quote_0(t);
                                                                                    t = de_escape_0(t);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, r_3);
                                                                                  {
                                                                                    h_82 = t;
                                                                                    if(((g_82 != NULL) && (g_82 != h_82)))
                                                                                      _fail(h_82);
                                                                                    else
                                                                                      g_82 = h_82;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(g_82));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(g_79, sym_layout_0))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATempty, term_m_26);
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
ATerm ApplToSort_0 (ATerm t)
{
  ATerm o_84 = NULL,p_84 = NULL,s_84 = NULL,t_84 = NULL,u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL;
  ATerm q_85 (ATerm t)
  {
    ATerm c_85 = NULL,h_85 = NULL;
    ATerm n_26;
    n_26 = t;
    {
      ATerm d_85 = NULL,e_85 = NULL;
      t = not_null(s_84);
      {
        d_85 = t;
        c_84 :
        if(match_cons(d_85, sym_cf_1))
          {
            e_85 = ATgetArgument(d_85, 0);
            {
              ATerm g_85 = NULL;
              t = not_null(e_85);
              {
                t = PpSym_0(t);
                {
                  t = concat_strings_0(t);
                  {
                    g_85 = t;
                    if(((c_85 != NULL) && (c_85 != g_85)))
                      _fail(g_85);
                    else
                      c_85 = g_85;
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
    t = n_26;
    {
      t = SSL_mkterm(not_null(c_85), not_null(v_84));
      {
        h_85 = t;
        t = not_null(h_85);
      }
    }
    return(t);
  }
  ATerm r_85 (ATerm t)
  {
    t = not_null(w_84);
    return(t);
  }
  ATerm s_85 (ATerm t)
  {
    ATerm m_85 = NULL,o_85 = NULL;
    ATerm o_26;
    o_26 = t;
    {
      ATerm n_85 = NULL;
      t = SSLgetAnnotations(not_null(y_84));
      {
        n_85 = t;
        if(((m_85 != NULL) && (m_85 != n_85)))
          _fail(n_85);
        else
          m_85 = n_85;
      }
    }
    t = o_26;
    {
      ATerm p_85 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ApplToSort_0), not_null(m_85));
      {
        p_85 = t;
        if(((o_85 != NULL) && (o_85 != p_85)))
          _fail(p_85);
        else
          o_85 = p_85;
      }
      t = not_null(o_85);
    }
    return(t);
  }
  y_84 = t;
  g_84 :
  if(match_cons(y_84, sym_appl_2))
    {
      o_84 = ATgetArgument(y_84, 0);
      v_84 = ATgetArgument(y_84, 1);
      h_84 :
      if(match_cons(o_84, sym_prod_3))
        {
          p_84 = ATgetArgument(o_84, 0);
          s_84 = ATgetArgument(o_84, 1);
          u_84 = ATgetArgument(o_84, 2);
          i_84 :
          if(((ATgetType(v_84) == AT_LIST) && ((ATermList) v_84 != ATempty)))
            {
              w_84 = ATgetFirst((ATermList) v_84);
              x_84 = (ATerm) ATgetNext((ATermList) v_84);
              j_84 :
              if(((ATermList) x_84 == ATempty))
                {
                  k_84 :
                  if(match_cons(s_84, sym_sort_1))
                    {
                      t_84 = ATgetArgument(s_84, 0);
                      l_84 :
                      if(match_string(t_84, "<START>"))
                        {
                          ATerm p_26 = t;
                          int q_26 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = q_85(t);
                              LocalPopChoice(q_26);
                            }
                          else
                            {
                              t = p_26;
                              t = r_85(t);
                            }
                        }
                      else
                        {
                          t = q_85(t);
                        }
                    }
                  else
                    {
                      t = q_85(t);
                    }
                }
              else
                {
                  m_84 :
                  t = q_85(t);
                }
            }
          else
            {
              n_84 :
              t = q_85(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(y_84, sym_ApplToSort_0))
        {
          t = s_85(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm layout_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm h_86 = NULL,i_86 = NULL;
  h_86 = t;
  g_86 :
  if(match_cons(h_86, sym_layout_1))
    {
      i_86 = ATgetArgument(h_86, 0);
      {
        ATerm l_86 = NULL,n_86 = NULL;
        ATerm m_86 = NULL;
        t = SSLgetAnnotations(not_null(h_86));
        {
          m_86 = t;
          if(((l_86 != NULL) && (l_86 != m_86)))
            _fail(m_86);
          else
            l_86 = m_86;
        }
        {
          t = not_null(i_86);
          {
            ATerm p_86 = NULL;
            t = w_78(t);
            {
              n_86 = t;
              {
                ATerm q_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, not_null(n_86)), not_null(l_86));
                {
                  q_86 = t;
                  if(((p_86 != NULL) && (p_86 != q_86)))
                    _fail(q_86);
                  else
                    p_86 = q_86;
                }
                t = not_null(p_86);
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
ATerm layout_0 (ATerm t)
{
  ATerm d_87 = NULL;
  d_87 = t;
  c_87 :
  if(match_cons(d_87, sym_layout_0))
    {
      ATerm r_26 = t;
      int s_26 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_87 = NULL,h_87 = NULL;
          ATerm t_26;
          t_26 = t;
          {
            ATerm g_87 = NULL;
            t = SSLgetAnnotations(not_null(d_87));
            {
              g_87 = t;
              if(((f_87 != NULL) && (f_87 != g_87)))
                _fail(g_87);
              else
                f_87 = g_87;
            }
          }
          t = t_26;
          {
            ATerm j_87 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(f_87));
            {
              j_87 = t;
              if(((h_87 != NULL) && (h_87 != j_87)))
                _fail(j_87);
              else
                h_87 = j_87;
            }
            t = not_null(h_87);
          }
          LocalPopChoice(s_26);
        }
      else
        {
          t = r_26;
          {
            ATerm l_87 = NULL,n_87 = NULL;
            ATerm u_26;
            u_26 = t;
            {
              ATerm m_87 = NULL;
              t = SSLgetAnnotations(not_null(d_87));
              {
                m_87 = t;
                if(((l_87 != NULL) && (l_87 != m_87)))
                  _fail(m_87);
                else
                  l_87 = m_87;
              }
            }
            t = u_26;
            {
              ATerm o_87 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(l_87));
              {
                o_87 = t;
                if(((n_87 != NULL) && (n_87 != o_87)))
                  _fail(o_87);
                else
                  n_87 = o_87;
              }
              t = not_null(n_87);
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
ATerm opt_1 (ATerm t, ATerm p_0 (ATerm))
{
  ATerm e_88 = NULL,f_88 = NULL;
  e_88 = t;
  d_88 :
  if(match_cons(e_88, sym_opt_1))
    {
      f_88 = ATgetArgument(e_88, 0);
      {
        ATerm v_26 = t;
        int w_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_88 = NULL,k_88 = NULL;
            ATerm j_88 = NULL;
            t = SSLgetAnnotations(not_null(e_88));
            {
              j_88 = t;
              if(((i_88 != NULL) && (i_88 != j_88)))
                _fail(j_88);
              else
                i_88 = j_88;
            }
            {
              t = not_null(f_88);
              {
                ATerm m_88 = NULL;
                t = p_0(t);
                {
                  k_88 = t;
                  {
                    ATerm n_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(k_88)), not_null(i_88));
                    {
                      n_88 = t;
                      if(((m_88 != NULL) && (m_88 != n_88)))
                        _fail(n_88);
                      else
                        m_88 = n_88;
                    }
                    t = not_null(m_88);
                  }
                }
              }
            }
            LocalPopChoice(w_26);
          }
        else
          {
            t = v_26;
            {
              ATerm q_88 = NULL,s_88 = NULL;
              ATerm r_88 = NULL;
              t = SSLgetAnnotations(not_null(e_88));
              {
                r_88 = t;
                if(((q_88 != NULL) && (q_88 != r_88)))
                  _fail(r_88);
                else
                  q_88 = r_88;
              }
              {
                t = not_null(f_88);
                {
                  ATerm u_88 = NULL;
                  t = p_0(t);
                  {
                    s_88 = t;
                    {
                      ATerm v_88 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(s_88)), not_null(q_88));
                      {
                        v_88 = t;
                        if(((u_88 != NULL) && (u_88 != v_88)))
                          _fail(v_88);
                        else
                          u_88 = v_88;
                      }
                      t = not_null(u_88);
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
ATerm cf_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm n_89 = NULL,o_89 = NULL;
  n_89 = t;
  m_89 :
  if(match_cons(n_89, sym_cf_1))
    {
      o_89 = ATgetArgument(n_89, 0);
      {
        ATerm x_26 = t;
        int y_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_89 = NULL,v_89 = NULL;
            ATerm s_89 = NULL;
            t = SSLgetAnnotations(not_null(n_89));
            {
              s_89 = t;
              if(((r_89 != NULL) && (r_89 != s_89)))
                _fail(s_89);
              else
                r_89 = s_89;
            }
            {
              t = not_null(o_89);
              {
                ATerm x_89 = NULL;
                t = o_0(t);
                {
                  v_89 = t;
                  {
                    ATerm y_89 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(v_89)), not_null(r_89));
                    {
                      y_89 = t;
                      if(((x_89 != NULL) && (x_89 != y_89)))
                        _fail(y_89);
                      else
                        x_89 = y_89;
                    }
                    t = not_null(x_89);
                  }
                }
              }
            }
            LocalPopChoice(y_26);
          }
        else
          {
            t = x_26;
            {
              ATerm b_90 = NULL,d_90 = NULL;
              ATerm c_90 = NULL;
              t = SSLgetAnnotations(not_null(n_89));
              {
                c_90 = t;
                if(((b_90 != NULL) && (b_90 != c_90)))
                  _fail(c_90);
                else
                  b_90 = c_90;
              }
              {
                t = not_null(o_89);
                {
                  ATerm f_90 = NULL;
                  t = o_0(t);
                  {
                    d_90 = t;
                    {
                      ATerm g_90 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(d_90)), not_null(b_90));
                      {
                        g_90 = t;
                        if(((f_90 != NULL) && (f_90 != g_90)))
                          _fail(g_90);
                        else
                          f_90 = g_90;
                      }
                      t = not_null(f_90);
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
ATerm is_layout_p__0 (ATerm t)
{
  ATerm d_27 = t;
  int e_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_3 (ATerm t)
      {
        ATerm t_3 (ATerm t)
        {
          ATerm u_3 (ATerm t)
          {
            t = opt_1(t, layout_0);
            return(t);
          }
          t = cf_1(t, u_3);
          return(t);
        }
        t = prod_3(t, _id, t_3, _id);
        return(t);
      }
      t = appl_2(t, s_3, _id);
      LocalPopChoice(e_27);
    }
  else
    {
      t = d_27;
      {
        ATerm f_27 = t;
        int j_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm v_3 (ATerm t)
            {
              t = opt_1(t, layout_0);
              return(t);
            }
            t = cf_1(t, v_3);
            LocalPopChoice(j_27);
          }
        else
          {
            t = f_27;
            t = layout_1(t, _id);
          }
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm l_90 (ATerm))
{
  ATerm l_27 = t;
  int o_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(o_27);
    }
  else
    {
      t = l_27;
      {
        ATerm p_27 = t;
        int q_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_3 (ATerm t)
            {
              t = filter_1(t, l_90);
              return(t);
            }
            t = Cons_2(t, l_90, w_3);
            LocalPopChoice(q_27);
          }
        else
          {
            t = p_27;
            {
              ATerm s_90 = NULL,t_90 = NULL,u_90 = NULL;
              s_90 = t;
              r_90 :
              if(((ATgetType(s_90) == AT_LIST) && ((ATermList) s_90 != ATempty)))
                {
                  t_90 = ATgetFirst((ATermList) s_90);
                  u_90 = (ATerm) ATgetNext((ATermList) s_90);
                  {
                    t = not_null(u_90);
                    t = filter_1(t, l_90);
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
ATerm prod_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm m_91 = NULL,n_91 = NULL,o_91 = NULL,p_91 = NULL;
  m_91 = t;
  l_91 :
  if(match_cons(m_91, sym_prod_3))
    {
      n_91 = ATgetArgument(m_91, 0);
      o_91 = ATgetArgument(m_91, 1);
      p_91 = ATgetArgument(m_91, 2);
      {
        ATerm r_27 = t;
        int s_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm u_91 = NULL,w_91 = NULL;
            ATerm v_91 = NULL;
            t = SSLgetAnnotations(not_null(m_91));
            {
              v_91 = t;
              if(((u_91 != NULL) && (u_91 != v_91)))
                _fail(v_91);
              else
                u_91 = v_91;
            }
            {
              t = not_null(n_91);
              {
                ATerm y_91 = NULL;
                t = l_0(t);
                {
                  w_91 = t;
                  {
                    t = not_null(o_91);
                    {
                      ATerm a_92 = NULL;
                      t = m_0(t);
                      {
                        y_91 = t;
                        {
                          t = not_null(p_91);
                          {
                            ATerm c_92 = NULL;
                            t = n_0(t);
                            {
                              a_92 = t;
                              {
                                ATerm d_92 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(w_91), not_null(y_91), not_null(a_92)), not_null(u_91));
                                {
                                  d_92 = t;
                                  if(((c_92 != NULL) && (c_92 != d_92)))
                                    _fail(d_92);
                                  else
                                    c_92 = d_92;
                                }
                                t = not_null(c_92);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(s_27);
          }
        else
          {
            t = r_27;
            {
              ATerm i_92 = NULL,k_92 = NULL;
              ATerm j_92 = NULL;
              t = SSLgetAnnotations(not_null(m_91));
              {
                j_92 = t;
                if(((i_92 != NULL) && (i_92 != j_92)))
                  _fail(j_92);
                else
                  i_92 = j_92;
              }
              {
                t = not_null(n_91);
                {
                  ATerm m_92 = NULL;
                  t = l_0(t);
                  {
                    k_92 = t;
                    {
                      t = not_null(o_91);
                      {
                        ATerm o_92 = NULL;
                        t = m_0(t);
                        {
                          m_92 = t;
                          {
                            t = not_null(p_91);
                            {
                              ATerm q_92 = NULL;
                              t = n_0(t);
                              {
                                o_92 = t;
                                {
                                  ATerm r_92 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(k_92), not_null(m_92), not_null(o_92)), not_null(i_92));
                                  {
                                    r_92 = t;
                                    if(((q_92 != NULL) && (q_92 != r_92)))
                                      _fail(r_92);
                                    else
                                      q_92 = r_92;
                                  }
                                  t = not_null(q_92);
                                }
                              }
                            }
                          }
                        }
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
ATerm topdown_1 (ATerm t, ATerm k_101 (ATerm))
{
  t = k_101(t);
  {
    ATerm x_3 (ATerm t)
    {
      t = topdown_1(t, k_101);
      return(t);
    }
    t = _all(t, x_3);
  }
  return(t);
}
ATerm remove_x_1 (ATerm t, ATerm h_106 (ATerm))
{
  ATerm y_3 (ATerm t)
  {
    ATerm z_3 (ATerm t)
    {
      ATerm a_4 (ATerm t)
      {
        ATerm c_4 (ATerm t)
        {
          ATerm d_4 (ATerm t)
          {
            ATerm t_27 = t;
            if((PushChoice() == 0))
              {
                t = h_106(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = t_27;
              }
            return(t);
          }
          t = filter_1(t, d_4);
          return(t);
        }
        t = prod_3(t, c_4, _id, _id);
        return(t);
      }
      ATerm b_4 (ATerm t)
      {
        ATerm e_4 (ATerm t)
        {
          ATerm u_27 = t;
          if((PushChoice() == 0))
            {
              t = h_106(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = u_27;
            }
          return(t);
        }
        t = filter_1(t, e_4);
        return(t);
      }
      t = appl_2(t, a_4, b_4);
      return(t);
    }
    t = try_1(t, z_3);
    return(t);
  }
  t = topdown_1(t, y_3);
  return(t);
}
ATerm remove_layout_0 (ATerm t)
{
  t = remove_x_1(t, is_layout_p__0);
  return(t);
}
ATerm RemoveLayout_0 (ATerm t)
{
  ATerm k_93 = NULL;
  k_93 = t;
  j_93 :
  if(match_cons(k_93, sym_RemoveLayout_0))
    {
      ATerm m_93 = NULL,o_93 = NULL;
      ATerm z_27;
      z_27 = t;
      {
        ATerm n_93 = NULL;
        t = SSLgetAnnotations(not_null(k_93));
        {
          n_93 = t;
          if(((m_93 != NULL) && (m_93 != n_93)))
            _fail(n_93);
          else
            m_93 = n_93;
        }
      }
      t = z_27;
      {
        ATerm p_93 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLayout_0), not_null(m_93));
        {
          p_93 = t;
          if(((o_93 != NULL) && (o_93 != p_93)))
            _fail(p_93);
          else
            o_93 = p_93;
        }
        t = not_null(o_93);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm flat_layout_0 (ATerm t)
{
  ATerm d_94 = NULL,e_94 = NULL,f_94 = NULL,g_94 = NULL,h_94 = NULL,i_94 = NULL,j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL;
  d_94 = t;
  w_93 :
  if(match_cons(d_94, sym_appl_2))
    {
      e_94 = ATgetArgument(d_94, 0);
      k_94 = ATgetArgument(d_94, 1);
      x_93 :
      if(match_cons(e_94, sym_prod_3))
        {
          f_94 = ATgetArgument(e_94, 0);
          g_94 = ATgetArgument(e_94, 1);
          j_94 = ATgetArgument(e_94, 2);
          y_93 :
          if(match_cons(g_94, sym_cf_1))
            {
              h_94 = ATgetArgument(g_94, 0);
              z_93 :
              if(match_cons(h_94, sym_layout_0))
                {
                  t = not_null(k_94);
                  t = concat_strings_0(t);
                }
              else
                {
                  if(match_cons(h_94, sym_opt_1))
                    {
                      i_94 = ATgetArgument(h_94, 0);
                      a_94 :
                      if(match_cons(i_94, sym_layout_0))
                        {
                          b_94 :
                          if(((ATermList) k_94 == ATempty))
                            {
                              t = term_a_28;
                            }
                          else
                            {
                              if(((ATgetType(k_94) == AT_LIST) && ((ATermList) k_94 != ATempty)))
                                {
                                  l_94 = ATgetFirst((ATermList) k_94);
                                  m_94 = (ATerm) ATgetNext((ATermList) k_94);
                                  c_94 :
                                  if(((ATermList) m_94 == ATempty))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, not_null(l_94)));
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
ATerm Kids_p__0 (ATerm t)
{
  ATerm t_94 = NULL;
  t_94 = t;
  t = (ATerm) ATinsert(ATempty, not_null(t_94));
  return(t);
}
ATerm Kids_0 (ATerm t)
{
  ATerm y_94 = NULL,z_94 = NULL,a_95 = NULL;
  y_94 = t;
  x_94 :
  if(match_cons(y_94, sym_appl_2))
    {
      z_94 = ATgetArgument(y_94, 0);
      a_95 = ATgetArgument(y_94, 1);
      {
        t = not_null(a_95);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm t_73 (ATerm), ATerm u_73 (ATerm))
{
  ATerm k_95 = NULL,l_95 = NULL,m_95 = NULL;
  k_95 = t;
  j_95 :
  if(match_cons(k_95, sym_appl_2))
    {
      l_95 = ATgetArgument(k_95, 0);
      m_95 = ATgetArgument(k_95, 1);
      {
        ATerm q_95 = NULL,s_95 = NULL;
        ATerm r_95 = NULL;
        t = SSLgetAnnotations(not_null(k_95));
        {
          r_95 = t;
          if(((q_95 != NULL) && (q_95 != r_95)))
            _fail(r_95);
          else
            q_95 = r_95;
        }
        {
          t = not_null(l_95);
          {
            ATerm u_95 = NULL;
            t = t_73(t);
            {
              s_95 = t;
              {
                t = not_null(m_95);
                {
                  ATerm w_95 = NULL;
                  t = u_73(t);
                  {
                    u_95 = t;
                    {
                      ATerm x_95 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(s_95), not_null(u_95)), not_null(q_95));
                      {
                        x_95 = t;
                        if(((w_95 != NULL) && (w_95 != x_95)))
                          _fail(x_95);
                        else
                          w_95 = x_95;
                      }
                      t = not_null(w_95);
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
ATerm yield_0 (ATerm t)
{
  ATerm d_96 (ATerm t)
  {
    ATerm b_28 = t;
    int c_28 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm f_4 (ATerm t)
        {
          t = map_1(t, d_96);
          return(t);
        }
        t = appl_2(t, _id, f_4);
        t = Kids_0(t);
        LocalPopChoice(c_28);
      }
    else
      {
        t = b_28;
        t = Kids_p__0(t);
      }
    return(t);
  }
  t = d_96(t);
  t = implode_string_0(t);
  return(t);
}
ATerm implode_lexical_0 (ATerm t)
{
  ATerm q_97 = NULL,r_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL;
  ATerm z_98 (ATerm t)
  {
    ATerm q_98 = NULL;
    ATerm r_98 = NULL;
    t = yield_0(t);
    {
      r_98 = t;
      if(((q_98 != NULL) && (q_98 != r_98)))
        _fail(r_98);
      else
        q_98 = r_98;
    }
    t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(q_98));
    return(t);
  }
  y_97 = t;
  s_96 :
  if(match_cons(y_97, sym_appl_2))
    {
      z_97 = ATgetArgument(y_97, 0);
      e_98 = ATgetArgument(y_97, 1);
      t_96 :
      if(match_cons(z_97, sym_prod_3))
        {
          a_98 = ATgetArgument(z_97, 0);
          b_98 = ATgetArgument(z_97, 1);
          d_98 = ATgetArgument(z_97, 2);
          y_96 :
          if(match_cons(b_98, sym_cf_1))
            {
              c_98 = ATgetArgument(b_98, 0);
              z_96 :
              if(((ATgetType(a_98) == AT_LIST) && ((ATermList) a_98 != ATempty)))
                {
                  q_97 = ATgetFirst((ATermList) a_98);
                  u_97 = (ATerm) ATgetNext((ATermList) a_98);
                  a_97 :
                  if(match_cons(q_97, sym_lex_1))
                    {
                      r_97 = ATgetArgument(q_97, 0);
                      b_97 :
                      if(((ATermList) u_97 == ATempty))
                        {
                          t = yield_0(t);
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
              if(match_cons(b_98, sym_lex_1))
                {
                  c_98 = ATgetArgument(b_98, 0);
                  c_97 :
                  t = yield_0(t);
                }
              else
                {
                  if(match_cons(b_98, sym_lit_1))
                    {
                      c_98 = ATgetArgument(b_98, 0);
                      f_97 :
                      {
                        ATerm f_98 = NULL;
                        ATerm g_98 = NULL;
                        t = yield_0(t);
                        {
                          g_98 = t;
                          if(((f_98 != NULL) && (f_98 != g_98)))
                            _fail(g_98);
                          else
                            f_98 = g_98;
                        }
                        t = (ATerm) ATmakeAppl(sym_lit_1, not_null(f_98));
                      }
                    }
                  else
                    {
                      if(match_cons(b_98, sym_varsym_1))
                        {
                          c_98 = ATgetArgument(b_98, 0);
                          g_97 :
                          if(match_cons(c_98, sym_cf_1))
                            {
                              v_97 = ATgetArgument(c_98, 0);
                              h_97 :
                              if(match_cons(v_97, sym_iter_star_1))
                                {
                                  w_97 = ATgetArgument(v_97, 0);
                                  i_97 :
                                  {
                                    ATerm d_28 = t;
                                    int e_28 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm h_98 = NULL;
                                        ATerm i_98 = NULL;
                                        t = yield_0(t);
                                        {
                                          i_98 = t;
                                          if(((h_98 != NULL) && (h_98 != i_98)))
                                            _fail(i_98);
                                          else
                                            h_98 = i_98;
                                        }
                                        t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(h_98));
                                        LocalPopChoice(e_28);
                                      }
                                    else
                                      {
                                        t = d_28;
                                        t = z_98(t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(v_97, sym_iter_star_sep_2))
                                    {
                                      w_97 = ATgetArgument(v_97, 0);
                                      x_97 = ATgetArgument(v_97, 1);
                                      l_97 :
                                      {
                                        ATerm f_28 = t;
                                        int g_28 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm j_98 = NULL;
                                            ATerm k_98 = NULL;
                                            t = yield_0(t);
                                            {
                                              k_98 = t;
                                              if(((j_98 != NULL) && (j_98 != k_98)))
                                                _fail(k_98);
                                              else
                                                j_98 = k_98;
                                            }
                                            t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(j_98));
                                            LocalPopChoice(g_28);
                                          }
                                        else
                                          {
                                            t = f_28;
                                            t = z_98(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(v_97, sym_iter_1))
                                        {
                                          w_97 = ATgetArgument(v_97, 0);
                                          m_97 :
                                          {
                                            ATerm h_28 = t;
                                            int i_28 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm l_98 = NULL;
                                                ATerm n_98 = NULL;
                                                t = yield_0(t);
                                                {
                                                  n_98 = t;
                                                  if(((l_98 != NULL) && (l_98 != n_98)))
                                                    _fail(n_98);
                                                  else
                                                    l_98 = n_98;
                                                }
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(l_98));
                                                LocalPopChoice(i_28);
                                              }
                                            else
                                              {
                                                t = h_28;
                                                t = z_98(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(v_97, sym_iter_sep_2))
                                            {
                                              w_97 = ATgetArgument(v_97, 0);
                                              x_97 = ATgetArgument(v_97, 1);
                                              n_97 :
                                              {
                                                ATerm v_28 = t;
                                                int w_28 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm o_98 = NULL;
                                                    ATerm p_98 = NULL;
                                                    t = yield_0(t);
                                                    {
                                                      p_98 = t;
                                                      if(((o_98 != NULL) && (o_98 != p_98)))
                                                        _fail(p_98);
                                                      else
                                                        o_98 = p_98;
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(o_98));
                                                    LocalPopChoice(w_28);
                                                  }
                                                else
                                                  {
                                                    t = v_28;
                                                    t = z_98(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              o_97 :
                                              t = z_98(t);
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              p_97 :
                              t = z_98(t);
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
ATerm downup2_2 (ATerm t, ATerm r_101 (ATerm), ATerm s_101 (ATerm))
{
  ATerm g_99 (ATerm t)
  {
    t = r_101(t);
    {
      t = _all(t, g_99);
      t = s_101(t);
    }
    return(t);
  }
  t = g_99(t);
  return(t);
}
ATerm flat_lex_0 (ATerm t)
{
  ATerm g_4 (ATerm t)
  {
    t = try_1(t, implode_lexical_0);
    return(t);
  }
  ATerm h_4 (ATerm t)
  {
    t = try_1(t, flat_layout_0);
    return(t);
  }
  t = downup2_2(t, g_4, h_4);
  return(t);
}
ATerm FlatLex_0 (ATerm t)
{
  ATerm l_99 = NULL;
  l_99 = t;
  k_99 :
  if(match_cons(l_99, sym_FlatLex_0))
    {
      ATerm n_99 = NULL,p_99 = NULL;
      ATerm x_28;
      x_28 = t;
      {
        ATerm o_99 = NULL;
        t = SSLgetAnnotations(not_null(l_99));
        {
          o_99 = t;
          if(((n_99 != NULL) && (n_99 != o_99)))
            _fail(o_99);
          else
            n_99 = o_99;
        }
      }
      t = x_28;
      {
        ATerm q_99 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatLex_0), not_null(n_99));
        {
          q_99 = t;
          if(((p_99 != NULL) && (p_99 != q_99)))
            _fail(q_99);
          else
            p_99 = q_99;
        }
        t = not_null(p_99);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_0 (ATerm t)
{
  ATerm w_99 = NULL;
  w_99 = t;
  {
    ATerm i_4 (ATerm t)
    {
      ATerm j_4 (ATerm t)
      {
        t = option_defined_1(t, FlatLex_0);
        return(t);
      }
      t = _2(t, j_4, flat_lex_0);
      return(t);
    }
    t = try_1(t, i_4);
    {
      ATerm k_4 (ATerm t)
      {
        ATerm l_4 (ATerm t)
        {
          t = option_defined_1(t, RemoveLayout_0);
          return(t);
        }
        t = _2(t, l_4, remove_layout_0);
        return(t);
      }
      t = try_1(t, k_4);
      {
        ATerm m_4 (ATerm t)
        {
          ATerm n_4 (ATerm t)
          {
            t = option_defined_1(t, ApplToSort_0);
            return(t);
          }
          t = _2(t, n_4, appl_to_sort_0);
          return(t);
        }
        t = try_1(t, m_4);
        {
          ATerm o_4 (ATerm t)
          {
            ATerm p_4 (ATerm t)
            {
              t = option_defined_1(t, FlatList_0);
              return(t);
            }
            t = _2(t, p_4, flat_list_0);
            return(t);
          }
          t = try_1(t, o_4);
          {
            ATerm q_4 (ATerm t)
            {
              ATerm r_4 (ATerm t)
              {
                t = option_defined_1(t, RemoveLit_0);
                return(t);
              }
              t = _2(t, r_4, remove_lit_0);
              return(t);
            }
            t = try_1(t, q_4);
            {
              ATerm s_4 (ATerm t)
              {
                ATerm t_4 (ATerm t)
                {
                  t = option_defined_1(t, FlatInj_0);
                  return(t);
                }
                t = _2(t, t_4, flat_injections_0);
                return(t);
              }
              t = try_1(t, s_4);
              {
                ATerm u_4 (ATerm t)
                {
                  ATerm v_4 (ATerm t)
                  {
                    t = option_defined_1(t, FlatAlt_0);
                    return(t);
                  }
                  t = _2(t, v_4, flat_alt_0);
                  return(t);
                }
                t = try_1(t, u_4);
                {
                  ATerm w_4 (ATerm t)
                  {
                    ATerm x_4 (ATerm t)
                    {
                      t = option_defined_1(t, ReplaceAppl_0);
                      return(t);
                    }
                    t = _2(t, x_4, replace_appl_0);
                    return(t);
                  }
                  t = try_1(t, w_4);
                  {
                    ATerm y_4 (ATerm t)
                    {
                      ATerm z_4 (ATerm t)
                      {
                        t = option_defined_1(t, RemoveSeq_0);
                        return(t);
                      }
                      t = _2(t, z_4, remove_seq_0);
                      return(t);
                    }
                    t = try_1(t, y_4);
                    {
                      ATerm a_5 (ATerm t)
                      {
                        ATerm e_5 (ATerm t)
                        {
                          t = option_defined_1(t, RemovePT_0);
                          return(t);
                        }
                        t = _2(t, e_5, remove_pt_0);
                        return(t);
                      }
                      t = try_1(t, a_5);
                      {
                        ATerm f_5 (ATerm t)
                        {
                          ATerm y_99 = NULL;
                          y_99 = t;
                          {
                            if(((w_99 != NULL) && (w_99 != y_99)))
                              _fail(y_99);
                            else
                              w_99 = y_99;
                            t = _2(t, _id, implodeAsfix_0);
                          }
                          return(t);
                        }
                        t = try_1(t, f_5);
                      }
                    }
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
ATerm default_usage_0 (ATerm t)
{
  ATerm d_100 = NULL;
  ATerm y_28;
  y_28 = t;
  {
    ATerm g_5 (ATerm t)
    {
      ATerm e_100 = NULL,f_100 = NULL;
      e_100 = t;
      c_100 :
      if(match_cons(e_100, sym_Program_1))
        {
          f_100 = ATgetArgument(e_100, 0);
          if(((d_100 != NULL) && (d_100 != f_100)))
            _fail(f_100);
          else
            d_100 = f_100;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, g_5);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_b_29), not_null(d_100)), term_a_29));
      {
        t = printnl_0(t);
        {
          t = term_j_13;
          t = exit_0(t);
        }
      }
    }
  }
  t = y_28;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm j_100 = NULL,k_100 = NULL,l_100 = NULL;
  j_100 = t;
  i_100 :
  if(match_cons(j_100, sym__2))
    {
      k_100 = ATgetArgument(j_100, 0);
      l_100 = ATgetArgument(j_100, 1);
      {
        ATerm c_29;
        c_29 = t;
        t = SSL_printnl(not_null(k_100), not_null(l_100));
        t = c_29;
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
  ATerm r_100 = NULL,s_100 = NULL,t_100 = NULL;
  r_100 = t;
  q_100 :
  if(match_cons(r_100, sym__2))
    {
      s_100 = ATgetArgument(r_100, 0);
      t_100 = ATgetArgument(r_100, 1);
      {
        t = not_null(s_100);
        {
          ATerm h_5 (ATerm t)
          {
            t = not_null(t_100);
            return(t);
          }
          t = at_end_1(t, h_5);
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
ATerm debug_1 (ATerm t, ATerm i_87 (ATerm))
{
  ATerm d_29;
  d_29 = t;
  {
    ATerm z_100 = NULL,b_101 = NULL;
    ATerm e_29;
    e_29 = t;
    {
      ATerm a_101 = NULL;
      t = i_87(t);
      {
        a_101 = t;
        if(((z_100 != NULL) && (z_100 != a_101)))
          _fail(a_101);
        else
          z_100 = a_101;
      }
    }
    t = e_29;
    {
      ATerm c_101 = NULL;
      c_101 = t;
      if(((b_101 != NULL) && (b_101 != c_101)))
        _fail(c_101);
      else
        b_101 = c_101;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_101)), not_null(z_100)));
        t = printnl_0(t);
      }
    }
  }
  t = d_29;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_101 = NULL;
  g_101 = t;
  t = SSL_is_string(not_null(g_101));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_29 = t;
  int k_29 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_29);
    }
  else
    {
      t = j_29;
      {
        ATerm l_29 = t;
        int m_29 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm i_5 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, i_5);
            LocalPopChoice(m_29);
          }
        else
          {
            t = l_29;
            {
              ATerm u_101 = NULL,v_101 = NULL,w_101 = NULL;
              u_101 = t;
              q_101 :
              if(match_cons(u_101, sym_Path_1))
                {
                  v_101 = ATgetArgument(u_101, 0);
                  t = not_null(v_101);
                }
              else
                {
                  if(match_cons(u_101, sym_Var_1))
                    {
                      v_101 = ATgetArgument(u_101, 0);
                      {
                        t = not_null(v_101);
                        {
                          ATerm n_29 = t;
                          int o_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(o_29);
                            }
                          else
                            {
                              t = n_29;
                              {
                                ATerm j_5 (ATerm t)
                                {
                                  t = term_p_29;
                                  return(t);
                                }
                                t = debug_1(t, j_5);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(u_101, sym_Prefix_2))
                        {
                          v_101 = ATgetArgument(u_101, 0);
                          w_101 = ATgetArgument(u_101, 1);
                          {
                            ATerm b_102 = NULL,d_102 = NULL;
                            ATerm s_29;
                            s_29 = t;
                            {
                              ATerm c_102 = NULL;
                              t = not_null(v_101);
                              {
                                t = eval_config_0(t);
                                {
                                  c_102 = t;
                                  if(((b_102 != NULL) && (b_102 != c_102)))
                                    _fail(c_102);
                                  else
                                    b_102 = c_102;
                                }
                              }
                            }
                            t = s_29;
                            {
                              ATerm e_102 = NULL;
                              t = not_null(w_101);
                              {
                                t = eval_config_0(t);
                                {
                                  e_102 = t;
                                  if(((d_102 != NULL) && (d_102 != e_102)))
                                    _fail(e_102);
                                  else
                                    d_102 = e_102;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(b_102), not_null(d_102));
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
  ATerm m_102 = NULL;
  m_102 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_t_29, not_null(m_102));
    {
      t = table_get_0(t);
      {
        ATerm k_5 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm u_29;
            u_29 = t;
            {
              ATerm o_102 = NULL;
              ATerm p_102 = NULL;
              p_102 = t;
              if(((o_102 != NULL) && (o_102 != p_102)))
                _fail(p_102);
              else
                o_102 = p_102;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_t_29, not_null(m_102), not_null(o_102));
                t = table_put_0(t);
              }
            }
            t = u_29;
          }
          return(t);
        }
        t = try_1(t, k_5);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_84 (ATerm))
{
  ATerm l_5 (ATerm t)
  {
    ATerm v_29;
    v_29 = t;
    {
      ATerm t_102 = NULL;
      ATerm u_102 = NULL;
      t = term_w_29;
      {
        t = get_config_0(t);
        {
          u_102 = t;
          if(((t_102 != NULL) && (t_102 != u_102)))
            _fail(u_102);
          else
            t_102 = u_102;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_102), term_x_29);
        t = geq_0(t);
      }
    }
    t = v_29;
    t = r_84(t);
    return(t);
  }
  t = try_1(t, l_5);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATempty, term_y_29));
  {
    t = printnl_0(t);
    {
      t = term_j_13;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm x_102 = NULL;
  x_102 = t;
  t = SSL_TicksToSeconds(not_null(x_102));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm e_103 = NULL,f_103 = NULL,g_103 = NULL;
  e_103 = t;
  d_103 :
  if(match_cons(e_103, sym__2))
    {
      f_103 = ATgetArgument(e_103, 0);
      g_103 = ATgetArgument(e_103, 1);
      {
        ATerm z_29 = t;
        int a_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(f_103), not_null(g_103));
            LocalPopChoice(a_30);
          }
        else
          {
            t = z_29;
            t = SSL_addr(not_null(f_103), not_null(g_103));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm f_91 (ATerm), ATerm g_91 (ATerm))
{
  ATerm b_30 = t;
  int c_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = f_91(t);
      LocalPopChoice(c_30);
    }
  else
    {
      t = b_30;
      {
        ATerm n_103 = NULL,o_103 = NULL,p_103 = NULL;
        n_103 = t;
        m_103 :
        if(((ATgetType(n_103) == AT_LIST) && ((ATermList) n_103 != ATempty)))
          {
            o_103 = ATgetFirst((ATermList) n_103);
            p_103 = (ATerm) ATgetNext((ATermList) n_103);
            {
              ATerm s_103 = NULL;
              ATerm t_103 = NULL;
              t = not_null(p_103);
              {
                t = foldr_2(t, f_91, g_91);
                {
                  t_103 = t;
                  if(((s_103 != NULL) && (s_103 != t_103)))
                    _fail(t_103);
                  else
                    s_103 = t_103;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(o_103), not_null(s_103));
                t = g_91(t);
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
ATerm crush_2 (ATerm t, ATerm x_92 (ATerm), ATerm y_92 (ATerm))
{
  ATerm a_104 = NULL;
  ATerm c_104 = NULL;
  a_104 = t;
  {
    ATerm d_104 = NULL;
    ATerm f_104 = NULL,g_104 = NULL,h_104 = NULL;
    t = not_null(a_104);
    {
      d_104 = t;
      {
        t = SSL_explode_term(not_null(d_104));
        {
          f_104 = t;
          z_103 :
          if(match_cons(f_104, sym__2))
            {
              g_104 = ATgetArgument(f_104, 0);
              h_104 = ATgetArgument(f_104, 1);
              if(((c_104 != NULL) && (c_104 != h_104)))
                _fail(h_104);
              else
                c_104 = h_104;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(c_104);
      t = foldr_2(t, x_92, y_92);
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
    ATerm m_5 (ATerm t)
    {
      t = term_d_30;
      return(t);
    }
    t = crush_2(t, m_5, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm n_104 = NULL,o_104 = NULL,p_104 = NULL;
  n_104 = t;
  m_104 :
  if(match_cons(n_104, sym__2))
    {
      o_104 = ATgetArgument(n_104, 0);
      p_104 = ATgetArgument(n_104, 1);
      {
        ATerm e_30;
        e_30 = t;
        {
          ATerm f_30 = t;
          int g_30 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(o_104), not_null(p_104));
              LocalPopChoice(g_30);
            }
          else
            {
              t = f_30;
              t = SSL_gtr(not_null(o_104), not_null(p_104));
            }
        }
        t = e_30;
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
  ATerm z_104 = NULL;
  ATerm h_30 = t;
  int i_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_105 = NULL,b_105 = NULL,c_105 = NULL;
      a_105 = t;
      y_104 :
      if(match_cons(a_105, sym__2))
        {
          b_105 = ATgetArgument(a_105, 0);
          c_105 = ATgetArgument(a_105, 1);
          {
            if(((z_104 != NULL) && (z_104 != b_105)))
              _fail(b_105);
            else
              z_104 = b_105;
            if(((z_104 != NULL) && (z_104 != c_105)))
              _fail(c_105);
            else
              z_104 = c_105;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(i_30);
    }
  else
    {
      t = h_30;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_84 (ATerm))
{
  ATerm n_5 (ATerm t)
  {
    ATerm j_30;
    j_30 = t;
    {
      ATerm f_105 = NULL;
      ATerm g_105 = NULL;
      t = term_w_29;
      {
        t = get_config_0(t);
        {
          g_105 = t;
          if(((f_105 != NULL) && (f_105 != g_105)))
            _fail(g_105);
          else
            f_105 = g_105;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(f_105), term_j_13);
        t = geq_0(t);
      }
    }
    t = j_30;
    t = q_84(t);
    return(t);
  }
  t = try_1(t, n_5);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm o_5 (ATerm t)
  {
    ATerm k_105 = NULL,m_105 = NULL;
    ATerm k_30;
    k_30 = t;
    {
      ATerm l_105 = NULL;
      t = run_time_0(t);
      {
        l_105 = t;
        if(((k_105 != NULL) && (k_105 != l_105)))
          _fail(l_105);
        else
          k_105 = l_105;
      }
    }
    t = k_30;
    {
      ATerm n_105 = NULL;
      t = term_l_30;
      {
        t = get_config_0(t);
        {
          n_105 = t;
          if(((m_105 != NULL) && (m_105 != n_105)))
            _fail(n_105);
          else
            m_105 = n_105;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_n_30), not_null(k_105)), term_m_30), not_null(m_105)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, o_5);
  {
    t = term_d_30;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm t_105 = NULL,u_105 = NULL,v_105 = NULL;
  t_105 = t;
  s_105 :
  if(match_cons(t_105, sym__2))
    {
      u_105 = ATgetArgument(t_105, 0);
      v_105 = ATgetArgument(t_105, 1);
      t = SSL_WriteToTextFile(not_null(u_105), not_null(v_105));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm n_65 (ATerm), ATerm o_65 (ATerm))
{
  ATerm f_106 = NULL,m_106 = NULL,t_106 = NULL;
  f_106 = t;
  e_106 :
  if(match_cons(f_106, sym__2))
    {
      m_106 = ATgetArgument(f_106, 0);
      t_106 = ATgetArgument(f_106, 1);
      {
        ATerm b_107 = NULL,d_107 = NULL;
        ATerm c_107 = NULL;
        t = SSLgetAnnotations(not_null(f_106));
        {
          c_107 = t;
          if(((b_107 != NULL) && (b_107 != c_107)))
            _fail(c_107);
          else
            b_107 = c_107;
        }
        {
          t = not_null(m_106);
          {
            ATerm f_107 = NULL;
            t = n_65(t);
            {
              d_107 = t;
              {
                t = not_null(t_106);
                {
                  ATerm h_107 = NULL;
                  t = o_65(t);
                  {
                    f_107 = t;
                    {
                      ATerm i_107 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(d_107), not_null(f_107)), not_null(b_107));
                      {
                        i_107 = t;
                        if(((h_107 != NULL) && (h_107 != i_107)))
                          _fail(i_107);
                        else
                          h_107 = i_107;
                      }
                      t = not_null(h_107);
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
  ATerm q_107 = NULL,r_107 = NULL,s_107 = NULL;
  q_107 = t;
  p_107 :
  if(match_cons(q_107, sym__2))
    {
      r_107 = ATgetArgument(q_107, 0);
      s_107 = ATgetArgument(q_107, 1);
      t = SSL_WriteToBinaryFile(not_null(r_107), not_null(s_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm a_108 = NULL;
  ATerm c_32;
  c_32 = t;
  {
    ATerm p_5 (ATerm t)
    {
      ATerm d_32 = t;
      int e_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_5 (ATerm t)
          {
            ATerm b_108 = NULL,c_108 = NULL;
            b_108 = t;
            x_107 :
            if(match_cons(b_108, sym_Output_1))
              {
                c_108 = ATgetArgument(b_108, 0);
                if(((a_108 != NULL) && (a_108 != c_108)))
                  _fail(c_108);
                else
                  a_108 = c_108;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, q_5);
          LocalPopChoice(e_32);
        }
      else
        {
          t = d_32;
          {
            ATerm d_108 = NULL;
            t = term_f_32;
            {
              d_108 = t;
              if(((a_108 != NULL) && (a_108 != d_108)))
                _fail(d_108);
              else
                a_108 = d_108;
            }
          }
        }
      return(t);
    }
    t = _2(t, p_5, _id);
  }
  t = c_32;
  {
    ATerm r_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        t = not_null(a_108);
        return(t);
      }
      t = split_2(t, s_5, _id);
      return(t);
    }
    t = _2(t, _id, r_5);
    {
      ATerm g_32 = t;
      int h_32 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm t_5 (ATerm t)
          {
            ATerm u_5 (ATerm t)
            {
              ATerm e_108 = NULL;
              e_108 = t;
              z_107 :
              if(!(match_cons(e_108, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, u_5);
            return(t);
          }
          t = _2(t, t_5, WriteToBinaryFile_0);
          LocalPopChoice(h_32);
        }
      else
        {
          t = g_32;
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
ATerm apply_strategy_1 (ATerm t, ATerm v_80 (ATerm))
{
  ATerm k_108 = NULL,m_108 = NULL,n_108 = NULL,o_108 = NULL;
  ATerm i_32;
  i_32 = t;
  t = dtime_0(t);
  t = i_32;
  {
    t = v_80(t);
    {
      ATerm j_32;
      j_32 = t;
      {
        ATerm l_108 = NULL;
        t = dtime_0(t);
        {
          l_108 = t;
          if(((k_108 != NULL) && (k_108 != l_108)))
            _fail(l_108);
          else
            k_108 = l_108;
        }
      }
      t = j_32;
      {
        m_108 = t;
        j_108 :
        if(match_cons(m_108, sym__2))
          {
            n_108 = ATgetArgument(m_108, 0);
            o_108 = ATgetArgument(m_108, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(n_108)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(k_108))), not_null(o_108));
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
  ATerm u_108 = NULL;
  u_108 = t;
  t = SSL_ReadFromFile(not_null(u_108));
  return(t);
}
ATerm split_2 (ATerm t, ATerm t_89 (ATerm), ATerm u_89 (ATerm))
{
  ATerm z_108 = NULL,b_109 = NULL;
  ATerm k_32;
  k_32 = t;
  {
    ATerm a_109 = NULL;
    t = t_89(t);
    {
      a_109 = t;
      if(((z_108 != NULL) && (z_108 != a_109)))
        _fail(a_109);
      else
        z_108 = a_109;
    }
  }
  t = k_32;
  {
    ATerm c_109 = NULL;
    t = u_89(t);
    {
      c_109 = t;
      if(((b_109 != NULL) && (b_109 != c_109)))
        _fail(c_109);
      else
        b_109 = c_109;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(z_108), not_null(b_109));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm j_109 = NULL;
  ATerm l_32;
  l_32 = t;
  {
    ATerm m_32 = t;
    int n_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm v_5 (ATerm t)
        {
          ATerm k_109 = NULL,l_109 = NULL;
          k_109 = t;
          g_109 :
          if(match_cons(k_109, sym_Input_1))
            {
              l_109 = ATgetArgument(k_109, 0);
              if(((j_109 != NULL) && (j_109 != l_109)))
                _fail(l_109);
              else
                j_109 = l_109;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, v_5);
        LocalPopChoice(n_32);
      }
    else
      {
        t = m_32;
        {
          ATerm m_109 = NULL;
          t = term_o_32;
          {
            m_109 = t;
            if(((j_109 != NULL) && (j_109 != m_109)))
              _fail(m_109);
            else
              j_109 = m_109;
          }
        }
      }
  }
  t = l_32;
  {
    ATerm w_5 (ATerm t)
    {
      t = not_null(j_109);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, w_5);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm t_109 = NULL;
  t_109 = t;
  s_109 :
  if(match_cons(t_109, sym_Version_0))
    {
      ATerm v_109 = NULL,x_109 = NULL;
      ATerm p_32;
      p_32 = t;
      {
        ATerm w_109 = NULL;
        t = SSLgetAnnotations(not_null(t_109));
        {
          w_109 = t;
          if(((v_109 != NULL) && (v_109 != w_109)))
            _fail(w_109);
          else
            v_109 = w_109;
        }
      }
      t = p_32;
      {
        ATerm y_109 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(v_109));
        {
          y_109 = t;
          if(((x_109 != NULL) && (x_109 != y_109)))
            _fail(y_109);
          else
            x_109 = y_109;
        }
        t = not_null(x_109);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm t_80 (ATerm))
{
  ATerm x_5 (ATerm t)
  {
    ATerm q_32 = t;
    int r_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(r_32);
      }
    else
      {
        t = q_32;
        {
          ATerm s_32 = t;
          int t_32 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(t_32);
            }
          else
            {
              t = s_32;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, x_5);
  t = t_80(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm e_110 = NULL;
  e_110 = t;
  t = SSL_table_create(not_null(e_110));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm i_110 = NULL;
  i_110 = t;
  {
    ATerm u_32;
    u_32 = t;
    {
      t = term_v_32;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_v_32, term_w_32, not_null(i_110));
          t = table_put_0(t);
        }
      }
    }
    t = u_32;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm m_110 = NULL;
  m_110 = t;
  t = SSL_string_to_int(not_null(m_110));
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm s_110 = NULL,t_110 = NULL,u_110 = NULL,v_110 = NULL;
  s_110 = t;
  r_110 :
  if(match_cons(s_110, sym__3))
    {
      t_110 = ATgetArgument(s_110, 0);
      u_110 = ATgetArgument(s_110, 1);
      v_110 = ATgetArgument(s_110, 2);
      {
        ATerm x_32;
        x_32 = t;
        {
          ATerm a_111 = NULL;
          ATerm b_111 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(t_110), not_null(u_110));
          {
            ATerm y_32 = t;
            int z_32 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(z_32);
              }
            else
              {
                t = y_32;
                t = (ATerm) ATempty;
              }
            {
              b_111 = t;
              if(((a_111 != NULL) && (a_111 != b_111)))
                _fail(b_111);
              else
                a_111 = b_111;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(t_110), not_null(u_110), (ATerm) ATinsert(CheckATermList(not_null(a_111)), not_null(v_110)));
            t = table_put_0(t);
          }
        }
        t = x_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm x_85 (ATerm))
{
  ATerm f_111 = NULL;
  ATerm g_111 = NULL;
  t = term_e_9;
  {
    t = x_85(t);
    {
      g_111 = t;
      if(((f_111 != NULL) && (f_111 != g_111)))
        _fail(g_111);
      else
        f_111 = g_111;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_a_33, term_e_33, not_null(f_111));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm), ATerm k_0 (ATerm))
{
  ATerm n_111 = NULL,o_111 = NULL,p_111 = NULL,q_111 = NULL,r_111 = NULL;
  n_111 = t;
  l_111 :
  if(match_string(n_111, "register-usage-info"))
    {
      t = register_usage_1(t, k_0);
    }
  else
    {
      if(((ATgetType(n_111) == AT_LIST) && ((ATermList) n_111 != ATempty)))
        {
          o_111 = ATgetFirst((ATermList) n_111);
          p_111 = (ATerm) ATgetNext((ATermList) n_111);
          m_111 :
          if(((ATgetType(p_111) == AT_LIST) && ((ATermList) p_111 != ATempty)))
            {
              q_111 = ATgetFirst((ATermList) p_111);
              r_111 = (ATerm) ATgetNext((ATermList) p_111);
              {
                ATerm v_111 = NULL;
                ATerm f_33;
                f_33 = t;
                {
                  t = not_null(o_111);
                  t = i_0(t);
                }
                t = f_33;
                {
                  ATerm w_111 = NULL;
                  t = not_null(q_111);
                  {
                    t = j_0(t);
                    {
                      w_111 = t;
                      if(((v_111 != NULL) && (v_111 != w_111)))
                        _fail(w_111);
                      else
                        v_111 = w_111;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_111)), not_null(v_111));
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
  ATerm g_33 = t;
  int h_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm y_5 (ATerm t)
      {
        ATerm n_112 = NULL;
        n_112 = t;
        a_112 :
        if(!(match_string(n_112, "-i")))
          {
            if(!(match_string(n_112, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm z_5 (ATerm t)
      {
        ATerm q_112 = NULL;
        ATerm i_33;
        i_33 = t;
        {
          ATerm o_112 = NULL;
          ATerm p_112 = NULL;
          p_112 = t;
          if(((o_112 != NULL) && (o_112 != p_112)))
            _fail(p_112);
          else
            o_112 = p_112;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_33, not_null(o_112));
            t = set_config_0(t);
          }
        }
        t = i_33;
        {
          ATerm r_112 = NULL;
          r_112 = t;
          if(((q_112 != NULL) && (q_112 != r_112)))
            _fail(r_112);
          else
            q_112 = r_112;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_112));
        }
        return(t);
      }
      ATerm a_6 (ATerm t)
      {
        t = term_k_33;
        return(t);
      }
      t = ArgOption_3(t, y_5, z_5, a_6);
      LocalPopChoice(h_33);
    }
  else
    {
      t = g_33;
      {
        ATerm l_33 = t;
        int m_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_6 (ATerm t)
            {
              ATerm s_112 = NULL;
              s_112 = t;
              d_112 :
              if(!(match_string(s_112, "-o")))
                {
                  if(!(match_string(s_112, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm c_6 (ATerm t)
            {
              ATerm v_112 = NULL;
              ATerm n_33;
              n_33 = t;
              {
                ATerm t_112 = NULL;
                ATerm u_112 = NULL;
                u_112 = t;
                if(((t_112 != NULL) && (t_112 != u_112)))
                  _fail(u_112);
                else
                  t_112 = u_112;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_33, not_null(t_112));
                  t = set_config_0(t);
                }
              }
              t = n_33;
              {
                ATerm w_112 = NULL;
                w_112 = t;
                if(((v_112 != NULL) && (v_112 != w_112)))
                  _fail(w_112);
                else
                  v_112 = w_112;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(v_112));
              }
              return(t);
            }
            ATerm d_6 (ATerm t)
            {
              t = term_p_33;
              return(t);
            }
            t = ArgOption_3(t, b_6, c_6, d_6);
            LocalPopChoice(m_33);
          }
        else
          {
            t = l_33;
            {
              ATerm q_33 = t;
              int r_33 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm e_6 (ATerm t)
                  {
                    ATerm x_112 = NULL;
                    x_112 = t;
                    g_112 :
                    if(!(match_string(x_112, "-S")))
                      {
                        if(!(match_string(x_112, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm f_6 (ATerm t)
                  {
                    t = term_s_33;
                    t = set_config_0(t);
                    t = term_t_33;
                    return(t);
                  }
                  ATerm g_6 (ATerm t)
                  {
                    t = term_u_33;
                    return(t);
                  }
                  t = Option_3(t, e_6, f_6, g_6);
                  LocalPopChoice(r_33);
                }
              else
                {
                  t = q_33;
                  {
                    ATerm v_33 = t;
                    int w_33 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm h_6 (ATerm t)
                        {
                          ATerm y_112 = NULL;
                          y_112 = t;
                          h_112 :
                          if(!(match_string(y_112, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm i_6 (ATerm t)
                        {
                          ATerm b_113 = NULL;
                          ATerm x_33;
                          x_33 = t;
                          {
                            ATerm z_112 = NULL;
                            ATerm a_113 = NULL;
                            t = string_to_int_0(t);
                            {
                              a_113 = t;
                              if(((z_112 != NULL) && (z_112 != a_113)))
                                _fail(a_113);
                              else
                                z_112 = a_113;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_w_29, not_null(z_112));
                              t = set_config_0(t);
                            }
                          }
                          t = x_33;
                          {
                            ATerm c_113 = NULL;
                            c_113 = t;
                            if(((b_113 != NULL) && (b_113 != c_113)))
                              _fail(c_113);
                            else
                              b_113 = c_113;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_113));
                          }
                          return(t);
                        }
                        ATerm j_6 (ATerm t)
                        {
                          t = term_y_33;
                          return(t);
                        }
                        t = ArgOption_3(t, h_6, i_6, j_6);
                        LocalPopChoice(w_33);
                      }
                    else
                      {
                        t = v_33;
                        {
                          ATerm z_33 = t;
                          int a_34 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm k_6 (ATerm t)
                              {
                                ATerm d_113 = NULL;
                                d_113 = t;
                                k_112 :
                                if(!(match_string(d_113, "-v")))
                                  {
                                    if(!(match_string(d_113, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm l_6 (ATerm t)
                              {
                                t = term_c_34;
                                t = set_config_0(t);
                                t = term_d_34;
                                return(t);
                              }
                              ATerm m_6 (ATerm t)
                              {
                                t = term_e_34;
                                return(t);
                              }
                              t = Option_3(t, k_6, l_6, m_6);
                              LocalPopChoice(a_34);
                            }
                          else
                            {
                              t = z_33;
                              {
                                ATerm l_34 = t;
                                int p_34 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm n_6 (ATerm t)
                                    {
                                      ATerm e_113 = NULL;
                                      e_113 = t;
                                      l_112 :
                                      if(!(match_string(e_113, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm o_6 (ATerm t)
                                    {
                                      t = term_r_34;
                                      t = set_config_0(t);
                                      t = term_s_34;
                                      return(t);
                                    }
                                    ATerm p_6 (ATerm t)
                                    {
                                      t = term_t_34;
                                      return(t);
                                    }
                                    t = Option_3(t, n_6, o_6, p_6);
                                    LocalPopChoice(p_34);
                                  }
                                else
                                  {
                                    t = l_34;
                                    {
                                      ATerm q_6 (ATerm t)
                                      {
                                        ATerm f_113 = NULL;
                                        f_113 = t;
                                        m_112 :
                                        if(!(match_string(f_113, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm r_6 (ATerm t)
                                      {
                                        t = term_z_34;
                                        t = set_config_0(t);
                                        t = term_d_35;
                                        return(t);
                                      }
                                      ATerm s_6 (ATerm t)
                                      {
                                        t = term_e_35;
                                        return(t);
                                      }
                                      t = Option_3(t, q_6, r_6, s_6);
                                    }
                                  }
                              }
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
  ATerm n_113 = NULL;
  n_113 = t;
  t = SSL_table_destroy(not_null(n_113));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm r_113 = NULL;
  r_113 = t;
  t = SSL_exit(not_null(r_113));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm v_113 = NULL;
  v_113 = t;
  t = SSL_implode_string(not_null(v_113));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm j_97 (ATerm))
{
  ATerm y_113 (ATerm t)
  {
    ATerm f_35 = t;
    int g_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, y_113);
        LocalPopChoice(g_35);
      }
    else
      {
        t = f_35;
        {
          t = Nil_0(t);
          t = j_97(t);
        }
      }
    return(t);
  }
  t = y_113(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_35 = t;
  int i_35 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_35);
    }
  else
    {
      t = h_35;
      {
        ATerm b_114 = NULL,c_114 = NULL,d_114 = NULL;
        b_114 = t;
        a_114 :
        if(((ATgetType(b_114) == AT_LIST) && ((ATermList) b_114 != ATempty)))
          {
            c_114 = ATgetFirst((ATermList) b_114);
            d_114 = (ATerm) ATgetNext((ATermList) b_114);
            {
              t = not_null(c_114);
              {
                ATerm t_6 (ATerm t)
                {
                  t = not_null(d_114);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_6);
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
  ATerm j_114 = NULL;
  j_114 = t;
  t = SSL_explode_string(not_null(j_114));
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
ATerm long_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_35), term_k_35), term_j_35);
  return(t);
}
ATerm map_1 (ATerm t, ATerm u_96 (ATerm))
{
  ATerm m_114 (ATerm t)
  {
    ATerm y_35 = t;
    int z_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(z_35);
      }
    else
      {
        t = y_35;
        t = Cons_2(t, u_96, m_114);
      }
    return(t);
  }
  t = m_114(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm t_114 = NULL,u_114 = NULL,v_114 = NULL;
  v_114 = t;
  s_114 :
  if(((ATgetType(v_114) == AT_LIST) && ((ATermList) v_114 != ATempty)))
    {
      t_114 = ATgetFirst((ATermList) v_114);
      u_114 = (ATerm) ATgetNext((ATermList) v_114);
      {
        ATerm y_114 = NULL;
        t = not_null(u_114);
        {
          ATerm a_36;
          a_36 = t;
          {
            ATerm z_114 = NULL,b_115 = NULL,d_115 = NULL;
            ATerm b_36;
            b_36 = t;
            {
              ATerm a_115 = NULL;
              t = e_0(t);
              {
                a_115 = t;
                if(((z_114 != NULL) && (z_114 != a_115)))
                  _fail(a_115);
                else
                  z_114 = a_115;
              }
            }
            t = b_36;
            {
              ATerm c_115 = NULL;
              t = not_null(t_114);
              {
                t = b_0(t);
                {
                  c_115 = t;
                  if(((b_115 != NULL) && (b_115 != c_115)))
                    _fail(c_115);
                  else
                    b_115 = c_115;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(z_114)), not_null(b_115));
                {
                  d_115 = t;
                  if(((y_114 != NULL) && (y_114 != d_115)))
                    _fail(d_115);
                  else
                    y_114 = d_115;
                }
              }
            }
          }
          t = a_36;
          {
            ATerm u_6 (ATerm t)
            {
              t = not_null(y_114);
              return(t);
            }
            t = reverse_acc_2(t, b_0, u_6);
          }
        }
      }
    }
  else
    {
      if(((ATermList) v_114 == ATempty))
        {
          {
            t = term_e_9;
            t = e_0(t);
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
  ATerm v_6 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, v_6);
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm l_115 = NULL,m_115 = NULL,n_115 = NULL;
  l_115 = t;
  k_115 :
  if(match_cons(l_115, sym__2))
    {
      m_115 = ATgetArgument(l_115, 0);
      n_115 = ATgetArgument(l_115, 1);
      t = SSL_table_get(not_null(m_115), not_null(n_115));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm a_0 (ATerm))
{
  ATerm s_115 = NULL;
  ATerm t_115 = NULL;
  t = term_e_9;
  {
    t = a_0(t);
    {
      t_115 = t;
      if(((s_115 != NULL) && (s_115 != t_115)))
        _fail(t_115);
      else
        s_115 = t_115;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_h_36), not_null(s_115)), term_c_36);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm l_74 (ATerm))
{
  ATerm a_116 = NULL,b_116 = NULL;
  a_116 = t;
  z_115 :
  if(match_cons(a_116, sym_Program_1))
    {
      b_116 = ATgetArgument(a_116, 0);
      {
        ATerm e_116 = NULL,g_116 = NULL;
        ATerm f_116 = NULL;
        t = SSLgetAnnotations(not_null(a_116));
        {
          f_116 = t;
          if(((e_116 != NULL) && (e_116 != f_116)))
            _fail(f_116);
          else
            e_116 = f_116;
        }
        {
          t = not_null(b_116);
          {
            ATerm i_116 = NULL;
            t = l_74(t);
            {
              g_116 = t;
              {
                ATerm j_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(g_116)), not_null(e_116));
                {
                  j_116 = t;
                  if(((i_116 != NULL) && (i_116 != j_116)))
                    _fail(j_116);
                  else
                    i_116 = j_116;
                }
                t = not_null(i_116);
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
  ATerm s_116 = NULL;
  ATerm w_6 (ATerm t)
  {
    ATerm x_6 (ATerm t)
    {
      ATerm t_116 = NULL;
      t_116 = t;
      if(((s_116 != NULL) && (s_116 != t_116)))
        _fail(t_116);
      else
        s_116 = t_116;
      return(t);
    }
    t = Program_1(t, x_6);
    return(t);
  }
  t = option_defined_1(t, w_6);
  {
    ATerm y_6 (ATerm t)
    {
      ATerm u_116 = NULL;
      ATerm v_116 = NULL;
      t = term_e_9;
      {
        ATerm z_6 (ATerm t)
        {
          t = not_null(s_116);
          return(t);
        }
        t = short_description_1(t, z_6);
        {
          t = concat_strings_0(t);
          {
            v_116 = t;
            if(((u_116 != NULL) && (u_116 != v_116)))
              _fail(v_116);
            else
              u_116 = v_116;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATempty, not_null(u_116)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, y_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATempty, term_i_36));
      {
        t = printnl_0(t);
        {
          t = term_j_36;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_7 (ATerm t)
                {
                  ATerm w_116 = NULL;
                  w_116 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(w_116)), term_k_36));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_7);
                {
                  ATerm b_7 (ATerm t)
                  {
                    ATerm y_116 = NULL;
                    ATerm z_116 = NULL;
                    t = term_e_9;
                    {
                      ATerm c_7 (ATerm t)
                      {
                        t = not_null(s_116);
                        return(t);
                      }
                      t = long_description_1(t, c_7);
                      {
                        t = concat_strings_0(t);
                        {
                          z_116 = t;
                          if(((y_116 != NULL) && (y_116 != z_116)))
                            _fail(z_116);
                          else
                            y_116 = z_116;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_116)), term_l_36));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_7);
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
ATerm Undefined_1 (ATerm t, ATerm m_74 (ATerm))
{
  ATerm j_117 = NULL,k_117 = NULL;
  j_117 = t;
  i_117 :
  if(match_cons(j_117, sym_Undefined_1))
    {
      k_117 = ATgetArgument(j_117, 0);
      {
        ATerm n_117 = NULL,p_117 = NULL;
        ATerm o_117 = NULL;
        t = SSLgetAnnotations(not_null(j_117));
        {
          o_117 = t;
          if(((n_117 != NULL) && (n_117 != o_117)))
            _fail(o_117);
          else
            n_117 = o_117;
        }
        {
          t = not_null(k_117);
          {
            ATerm r_117 = NULL;
            t = m_74(t);
            {
              p_117 = t;
              {
                ATerm s_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(p_117)), not_null(n_117));
                {
                  s_117 = t;
                  if(((r_117 != NULL) && (r_117 != s_117)))
                    _fail(s_117);
                  else
                    r_117 = s_117;
                }
                t = not_null(r_117);
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
ATerm fetch_1 (ATerm t, ATerm d_97 (ATerm))
{
  ATerm x_117 (ATerm t)
  {
    ATerm m_36 = t;
    int n_36 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, d_97, _id);
        LocalPopChoice(n_36);
      }
    else
      {
        t = m_36;
        t = Cons_2(t, _id, x_117);
      }
    return(t);
  }
  t = x_117(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm r_86 (ATerm))
{
  t = fetch_1(t, r_86);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm c_118 = NULL;
  c_118 = t;
  b_118 :
  if(match_cons(c_118, sym_Help_0))
    {
      ATerm e_118 = NULL,g_118 = NULL;
      ATerm o_36;
      o_36 = t;
      {
        ATerm f_118 = NULL;
        t = SSLgetAnnotations(not_null(c_118));
        {
          f_118 = t;
          if(((e_118 != NULL) && (e_118 != f_118)))
            _fail(f_118);
          else
            e_118 = f_118;
        }
      }
      t = o_36;
      {
        ATerm h_118 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(e_118));
        {
          h_118 = t;
          if(((g_118 != NULL) && (g_118 != h_118)))
            _fail(h_118);
          else
            g_118 = h_118;
        }
        t = not_null(g_118);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm o_105 (ATerm))
{
  ATerm p_36 = t;
  int s_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = o_105(t);
      LocalPopChoice(s_36);
    }
  else
    {
      t = p_36;
      {
      }
    }
  return(t);
}
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm m_118 = NULL;
    m_118 = t;
    l_118 :
    if(!(match_string(m_118, "--help")))
      {
        if(!(match_string(m_118, "-h")))
          {
            if(!(match_string(m_118, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_7 (ATerm t)
  {
    t = term_t_36;
    return(t);
  }
  ATerm f_7 (ATerm t)
  {
    t = term_u_36;
    return(t);
  }
  t = Option_3(t, d_7, e_7, f_7);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_118 = NULL,q_118 = NULL,r_118 = NULL;
  p_118 = t;
  o_118 :
  if(((ATgetType(p_118) == AT_LIST) && ((ATermList) p_118 != ATempty)))
    {
      q_118 = ATgetFirst((ATermList) p_118);
      r_118 = (ATerm) ATgetNext((ATermList) p_118);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_118)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_118)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm h_79 (ATerm), ATerm i_79 (ATerm))
{
  ATerm b_119 = NULL,c_119 = NULL,d_119 = NULL;
  b_119 = t;
  a_119 :
  if(((ATgetType(b_119) == AT_LIST) && ((ATermList) b_119 != ATempty)))
    {
      c_119 = ATgetFirst((ATermList) b_119);
      d_119 = (ATerm) ATgetNext((ATermList) b_119);
      {
        ATerm h_119 = NULL,j_119 = NULL;
        ATerm i_119 = NULL;
        t = SSLgetAnnotations(not_null(b_119));
        {
          i_119 = t;
          if(((h_119 != NULL) && (h_119 != i_119)))
            _fail(i_119);
          else
            h_119 = i_119;
        }
        {
          t = not_null(c_119);
          {
            ATerm l_119 = NULL;
            t = h_79(t);
            {
              j_119 = t;
              {
                t = not_null(d_119);
                {
                  ATerm n_119 = NULL;
                  t = i_79(t);
                  {
                    l_119 = t;
                    {
                      ATerm o_119 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_119)), not_null(j_119)), not_null(h_119));
                      {
                        o_119 = t;
                        if(((n_119 != NULL) && (n_119 != o_119)))
                          _fail(o_119);
                        else
                          n_119 = o_119;
                      }
                      t = not_null(n_119);
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
  ATerm y_119 = NULL;
  y_119 = t;
  x_119 :
  if(((ATermList) y_119 == ATempty))
    {
      {
        ATerm a_120 = NULL,c_120 = NULL;
        ATerm v_36;
        v_36 = t;
        {
          ATerm b_120 = NULL;
          t = SSLgetAnnotations(not_null(y_119));
          {
            b_120 = t;
            if(((a_120 != NULL) && (a_120 != b_120)))
              _fail(b_120);
            else
              a_120 = b_120;
          }
        }
        t = v_36;
        {
          ATerm d_120 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_120));
          {
            d_120 = t;
            if(((c_120 != NULL) && (c_120 != d_120)))
              _fail(d_120);
            else
              c_120 = d_120;
          }
          t = not_null(c_120);
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
  ATerm j_120 = NULL,k_120 = NULL,l_120 = NULL;
  j_120 = t;
  i_120 :
  if(match_cons(j_120, sym__2))
    {
      k_120 = ATgetArgument(j_120, 0);
      l_120 = ATgetArgument(j_120, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_t_29, not_null(k_120), not_null(l_120));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm v_85 (ATerm))
{
  ATerm w_36;
  w_36 = t;
  {
    ATerm g_7 (ATerm t)
    {
      t = term_z_36;
      t = v_85(t);
      return(t);
    }
    t = try_1(t, g_7);
  }
  t = w_36;
  {
    ATerm h_7 (ATerm t)
    {
      ATerm t_120 = NULL;
      ATerm d_37;
      d_37 = t;
      {
        ATerm r_120 = NULL;
        ATerm s_120 = NULL;
        s_120 = t;
        if(((r_120 != NULL) && (r_120 != s_120)))
          _fail(s_120);
        else
          r_120 = s_120;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_l_30, not_null(r_120));
          t = set_config_0(t);
        }
      }
      t = d_37;
      {
        ATerm u_120 = NULL;
        u_120 = t;
        if(((t_120 != NULL) && (t_120 != u_120)))
          _fail(u_120);
        else
          t_120 = u_120;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_120));
      }
      return(t);
    }
    ATerm i_7 (ATerm t)
    {
      ATerm e_37 = t;
      int f_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_37 = t;
          int i_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_37);
            }
          else
            {
              t = h_37;
              {
                t = v_85(t);
                t = Cons_2(t, _id, i_7);
              }
            }
          LocalPopChoice(f_37);
        }
      else
        {
          t = e_37;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_7, i_7);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_121 = NULL,b_121 = NULL,c_121 = NULL;
  ATerm j_37;
  j_37 = t;
  {
    ATerm d_121 = NULL,e_121 = NULL,f_121 = NULL,g_121 = NULL;
    d_121 = t;
    z_120 :
    if(match_cons(d_121, sym__3))
      {
        e_121 = ATgetArgument(d_121, 0);
        f_121 = ATgetArgument(d_121, 1);
        g_121 = ATgetArgument(d_121, 2);
        {
          if(((a_121 != NULL) && (a_121 != e_121)))
            _fail(e_121);
          else
            a_121 = e_121;
          {
            if(((b_121 != NULL) && (b_121 != f_121)))
              _fail(f_121);
            else
              b_121 = f_121;
            {
              if(((c_121 != NULL) && (c_121 != g_121)))
                _fail(g_121);
              else
                c_121 = g_121;
              t = SSL_table_put(not_null(a_121), not_null(b_121), not_null(c_121));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = j_37;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm u_85 (ATerm))
{
  ATerm j_121 = NULL;
  ATerm k_37;
  k_37 = t;
  {
    t = term_l_37;
    t = table_put_0(t);
  }
  t = k_37;
  {
    ATerm j_7 (ATerm t)
    {
      ATerm m_37 = t;
      int o_37 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = u_85(t);
          LocalPopChoice(o_37);
        }
      else
        {
          t = m_37;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_7);
    {
      ATerm k_7 (ATerm t)
      {
        ATerm p_37 = t;
        int q_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_d_30;
                t = exit_0(t);
              }
            }
            LocalPopChoice(q_37);
          }
        else
          {
            t = p_37;
            {
              ATerm l_7 (ATerm t)
              {
                ATerm m_7 (ATerm t)
                {
                  ATerm k_121 = NULL;
                  k_121 = t;
                  if(((j_121 != NULL) && (j_121 != k_121)))
                    _fail(k_121);
                  else
                    j_121 = k_121;
                  return(t);
                }
                t = Undefined_1(t, m_7);
                return(t);
              }
              t = option_defined_1(t, l_7);
              {
                ATerm s_37;
                s_37 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_121)), term_t_37));
                  t = printnl_0(t);
                }
                t = s_37;
                {
                  t = system_usage_0(t);
                  {
                    t = term_j_13;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_7);
      {
        ATerm u_37;
        u_37 = t;
        {
          t = term_a_33;
          t = table_destroy_0(t);
        }
        t = u_37;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm h_80 (ATerm), ATerm i_80 (ATerm), ATerm j_80 (ATerm), ATerm k_80 (ATerm))
{
  ATerm n_7 (ATerm t)
  {
    ATerm v_37 = t;
    int w_37 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = i_80(t);
        LocalPopChoice(w_37);
      }
    else
      {
        t = v_37;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, n_7);
  {
    t = store_options_0(t);
    {
      t = k_80(t);
      {
        ATerm y_37 = t;
        int a_38 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, j_80);
            LocalPopChoice(a_38);
          }
        else
          {
            t = y_37;
            {
              ATerm b_38 = t;
              int c_38 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, h_80);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(c_38);
                }
              else
                {
                  t = b_38;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm b_80 (ATerm), ATerm c_80 (ATerm), ATerm d_80 (ATerm))
{
  ATerm o_7 (ATerm t)
  {
    ATerm p_7 (ATerm t)
    {
      ATerm a_39;
      a_39 = t;
      {
        ATerm n_121 = NULL;
        ATerm o_121 = NULL;
        t = term_l_30;
        {
          t = get_config_0(t);
          {
            o_121 = t;
            if(((n_121 != NULL) && (n_121 != o_121)))
              _fail(o_121);
            else
              n_121 = o_121;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_z_28, (ATerm) ATinsert(ATempty, not_null(n_121)));
          t = printnl_0(t);
        }
      }
      t = a_39;
      return(t);
    }
    t = if_verbose2_1(t, p_7);
    return(t);
  }
  t = iowrap_4(t, b_80, c_80, d_80, o_7);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm z_79 (ATerm), ATerm a_80 (ATerm))
{
  t = iowrap_3(t, z_79, a_80, default_usage_0);
  return(t);
}
ATerm implode_asfix_0 (ATerm t)
{
  ATerm q_7 (ATerm t)
  {
    ATerm b_39 = t;
    int d_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm r_7 (ATerm t)
        {
          ATerm a_122 = NULL;
          a_122 = t;
          q_121 :
          if(!(match_string(a_122, "--lex")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm s_7 (ATerm t)
        {
          t = term_e_39;
          return(t);
        }
        ATerm t_7 (ATerm t)
        {
          t = term_f_39;
          return(t);
        }
        t = Option_3(t, r_7, s_7, t_7);
        LocalPopChoice(d_39);
      }
    else
      {
        t = b_39;
        {
          ATerm g_39 = t;
          int h_39 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm v_7 (ATerm t)
              {
                ATerm b_122 = NULL;
                b_122 = t;
                r_121 :
                if(!(match_string(b_122, "--layout")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm w_7 (ATerm t)
              {
                t = term_l_39;
                return(t);
              }
              ATerm x_7 (ATerm t)
              {
                t = term_q_39;
                return(t);
              }
              t = Option_3(t, v_7, w_7, x_7);
              LocalPopChoice(h_39);
            }
          else
            {
              t = g_39;
              {
                ATerm r_39 = t;
                int s_39 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm a_8 (ATerm t)
                    {
                      ATerm c_122 = NULL;
                      c_122 = t;
                      s_121 :
                      if(!(match_string(c_122, "--lit")))
                        {
                          _fail(t);
                        }
                      return(t);
                    }
                    ATerm b_8 (ATerm t)
                    {
                      t = term_t_39;
                      return(t);
                    }
                    ATerm c_8 (ATerm t)
                    {
                      t = term_u_39;
                      return(t);
                    }
                    t = Option_3(t, a_8, b_8, c_8);
                    LocalPopChoice(s_39);
                  }
                else
                  {
                    t = r_39;
                    {
                      ATerm v_39 = t;
                      int w_39 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          ATerm d_8 (ATerm t)
                          {
                            ATerm d_122 = NULL;
                            d_122 = t;
                            t_121 :
                            if(!(match_string(d_122, "--alt")))
                              {
                                _fail(t);
                              }
                            return(t);
                          }
                          ATerm g_8 (ATerm t)
                          {
                            t = term_x_39;
                            return(t);
                          }
                          ATerm h_8 (ATerm t)
                          {
                            t = term_y_39;
                            return(t);
                          }
                          t = Option_3(t, d_8, g_8, h_8);
                          LocalPopChoice(w_39);
                        }
                      else
                        {
                          t = v_39;
                          {
                            ATerm c_40 = t;
                            int d_40 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                ATerm i_8 (ATerm t)
                                {
                                  ATerm e_122 = NULL;
                                  e_122 = t;
                                  u_121 :
                                  if(!(match_string(e_122, "--appl")))
                                    {
                                      _fail(t);
                                    }
                                  return(t);
                                }
                                ATerm j_8 (ATerm t)
                                {
                                  t = term_e_40;
                                  return(t);
                                }
                                ATerm k_8 (ATerm t)
                                {
                                  t = term_f_40;
                                  return(t);
                                }
                                t = Option_3(t, i_8, j_8, k_8);
                                LocalPopChoice(d_40);
                              }
                            else
                              {
                                t = c_40;
                                {
                                  ATerm g_40 = t;
                                  int h_40 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm l_8 (ATerm t)
                                      {
                                        ATerm f_122 = NULL;
                                        f_122 = t;
                                        v_121 :
                                        if(!(match_string(f_122, "--nt")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm m_8 (ATerm t)
                                      {
                                        t = term_i_40;
                                        return(t);
                                      }
                                      ATerm n_8 (ATerm t)
                                      {
                                        t = term_j_40;
                                        return(t);
                                      }
                                      t = Option_3(t, l_8, m_8, n_8);
                                      LocalPopChoice(h_40);
                                    }
                                  else
                                    {
                                      t = g_40;
                                      {
                                        ATerm k_40 = t;
                                        int l_40 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm o_8 (ATerm t)
                                            {
                                              ATerm g_122 = NULL;
                                              g_122 = t;
                                              w_121 :
                                              if(!(match_string(g_122, "--inj")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm p_8 (ATerm t)
                                            {
                                              t = term_m_40;
                                              return(t);
                                            }
                                            ATerm q_8 (ATerm t)
                                            {
                                              t = term_n_40;
                                              return(t);
                                            }
                                            t = Option_3(t, o_8, p_8, q_8);
                                            LocalPopChoice(l_40);
                                          }
                                        else
                                          {
                                            t = k_40;
                                            {
                                              ATerm o_40 = t;
                                              int q_40 = stack_ptr;
                                              if((PushChoice() == 0))
                                                {
                                                  ATerm r_8 (ATerm t)
                                                  {
                                                    ATerm h_122 = NULL;
                                                    h_122 = t;
                                                    x_121 :
                                                    if(!(match_string(h_122, "--list")))
                                                      {
                                                        _fail(t);
                                                      }
                                                    return(t);
                                                  }
                                                  ATerm s_8 (ATerm t)
                                                  {
                                                    t = term_r_40;
                                                    return(t);
                                                  }
                                                  ATerm t_8 (ATerm t)
                                                  {
                                                    t = term_s_40;
                                                    return(t);
                                                  }
                                                  t = Option_3(t, r_8, s_8, t_8);
                                                  LocalPopChoice(q_40);
                                                }
                                              else
                                                {
                                                  t = o_40;
                                                  {
                                                    ATerm t_40 = t;
                                                    int u_40 = stack_ptr;
                                                    if((PushChoice() == 0))
                                                      {
                                                        ATerm u_8 (ATerm t)
                                                        {
                                                          ATerm i_122 = NULL;
                                                          i_122 = t;
                                                          y_121 :
                                                          if(!(match_string(i_122, "--seq")))
                                                            {
                                                              _fail(t);
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm y_8 (ATerm t)
                                                        {
                                                          t = term_v_40;
                                                          return(t);
                                                        }
                                                        ATerm z_8 (ATerm t)
                                                        {
                                                          t = term_w_40;
                                                          return(t);
                                                        }
                                                        t = Option_3(t, u_8, y_8, z_8);
                                                        LocalPopChoice(u_40);
                                                      }
                                                    else
                                                      {
                                                        t = t_40;
                                                        {
                                                          ATerm a_9 (ATerm t)
                                                          {
                                                            ATerm j_122 = NULL;
                                                            j_122 = t;
                                                            z_121 :
                                                            if(!(match_string(j_122, "--pt")))
                                                              {
                                                                _fail(t);
                                                              }
                                                            return(t);
                                                          }
                                                          ATerm b_9 (ATerm t)
                                                          {
                                                            t = term_x_40;
                                                            return(t);
                                                          }
                                                          ATerm c_9 (ATerm t)
                                                          {
                                                            t = term_y_40;
                                                            return(t);
                                                          }
                                                          t = Option_3(t, a_9, b_9, c_9);
                                                        }
                                                      }
                                                  }
                                                }
                                            }
                                          }
                                      }
                                    }
                                }
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
  t = iowrap_2(t, implode_0, q_7);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = implode_asfix_0(t);
  return(t);
}

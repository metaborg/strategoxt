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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  init_constant_terms();
}
ATerm term_c_16;
ATerm term_p_15;
ATerm term_b_15;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_f_14;
ATerm term_e_14;
ATerm term_d_14;
ATerm term_c_14;
ATerm term_b_14;
ATerm term_a_14;
ATerm term_j_13;
ATerm term_i_13;
ATerm term_h_13;
ATerm term_g_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_c_13;
ATerm term_x_12;
ATerm term_u_12;
ATerm term_t_12;
ATerm term_o_12;
ATerm term_n_12;
ATerm term_m_12;
ATerm term_f_12;
ATerm term_x_11;
ATerm term_w_11;
ATerm term_v_11;
ATerm term_m_11;
ATerm term_l_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_x_10;
ATerm term_w_10;
ATerm term_c_10;
ATerm term_t_9;
ATerm term_p_9;
ATerm term_o_9;
ATerm term_n_9;
ATerm term_f_9;
ATerm term_a_9;
ATerm term_z_8;
ATerm term_y_8;
ATerm term_v_8;
ATerm term_t_8;
ATerm term_v_7;
ATerm term_u_7;
ATerm term_p_7;
ATerm term_o_7;
ATerm term_c_7;
ATerm term_x_6;
ATerm term_w_6;
ATerm term_o_6;
ATerm term_n_6;
ATerm term_m_6;
ATerm term_k_6;
ATerm term_d_6;
ATerm term_b_6;
ATerm term_z_5;
ATerm term_w_5;
ATerm term_v_5;
ATerm term_u_5;
ATerm term_t_5;
ATerm term_f_5;
ATerm term_e_5;
void init_constant_terms (void)
{
  ATprotect(&(term_e_5));
  term_e_5 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_f_5));
  term_f_5 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_t_5));
  term_t_5 = (ATerm) ATmakeAppl(ATmakeSymbol("unit", 0, ATtrue));
  ATprotect(&(term_u_5));
  term_u_5 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_v_5));
  term_v_5 = (ATerm) ATmakeAppl(ATmakeSymbol("p", 0, ATtrue));
  ATprotect(&(term_w_5));
  term_w_5 = (ATerm) ATmakeAppl(ATmakeSymbol("s", 0, ATtrue));
  ATprotect(&(term_z_5));
  term_z_5 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_b_6));
  term_b_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_k_6));
  term_k_6 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_m_6));
  term_m_6 = (ATerm) ATmakeAppl(ATmakeSymbol("or", 0, ATtrue));
  ATprotect(&(term_n_6));
  term_n_6 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_o_6));
  term_o_6 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_w_6));
  term_w_6 = (ATerm) ATmakeAppl(ATmakeSymbol("\"", 0, ATtrue));
  ATprotect(&(term_x_6));
  term_x_6 = (ATerm) ATmakeAppl(ATmakeSymbol("symbol: ", 0, ATtrue));
  ATprotect(&(term_c_7));
  term_c_7 = (ATerm) ATmakeAppl(ATmakeSymbol("not a symbol: ", 0, ATtrue));
  ATprotect(&(term_o_7));
  term_o_7 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_p_7));
  term_p_7 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_u_7));
  term_u_7 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_v_7));
  term_v_7 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_t_8));
  term_t_8 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_v_8));
  term_v_8 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_y_8));
  term_y_8 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_z_8));
  term_z_8 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_a_9));
  term_a_9 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_f_9));
  term_f_9 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_n_9));
  term_n_9 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_o_9));
  term_o_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_p_9));
  term_p_9 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_x_10));
  term_x_10 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_l_11));
  term_l_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_m_11));
  term_m_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_v_11));
  term_v_11 = (ATerm) ATmakeAppl(sym__2, term_y_8, term_f_9);
  ATprotect(&(term_w_11));
  term_w_11 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_9);
  ATprotect(&(term_x_11));
  term_x_11 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_f_12));
  term_f_12 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_m_12));
  term_m_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_n_12));
  term_n_12 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_o_12));
  term_o_12 = (ATerm) ATmakeAppl(sym__2, term_m_12, term_n_12);
  ATprotect(&(term_t_12));
  term_t_12 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_12));
  term_x_12 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_c_13));
  term_c_13 = (ATerm) ATmakeAppl(sym__2, term_x_12, term_n_12);
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_g_13));
  term_g_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_h_13));
  term_h_13 = (ATerm) ATmakeAppl(sym__2, term_g_13, term_n_12);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_j_13));
  term_j_13 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_a_14));
  term_a_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_14));
  term_b_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_14));
  term_c_14 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_14));
  term_d_14 = (ATerm) ATmakeAppl(sym__2, term_b_14, term_c_14);
  ATprotect(&(term_e_14));
  term_e_14 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_f_14));
  term_f_14 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_p_15));
  term_p_15 = (ATerm) ATmakeAppl(sym__3, term_b_14, term_c_14, (ATerm) ATempty);
  ATprotect(&(term_c_16));
  term_c_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm z_88 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm filter_1 (ATerm, ATerm s_81 (ATerm));
ATerm Sym2Strs_0 (ATerm);
ATerm ApplToSort_0 (ATerm);
ATerm try_1 (ATerm, ATerm v_96 (ATerm));
ATerm topdown_1 (ATerm, ATerm r_92 (ATerm));
ATerm _2 (ATerm, ATerm f_57 (ATerm), ATerm g_57 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm p_78 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm z_75 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm m_82 (ATerm), ATerm n_82 (ATerm));
ATerm crush_2 (ATerm, ATerm e_84 (ATerm), ATerm f_84 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm y_75 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm z_77 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm a_81 (ATerm), ATerm b_81 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm x_77 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm q_88 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm y_74 (ATerm));
ATerm map_1 (ATerm, ATerm b_88 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm f_0 (ATerm), ATerm i_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm x_74 (ATerm));
ATerm Program_1 (ATerm, ATerm u_65 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm v_65 (ATerm));
ATerm fetch_1 (ATerm, ATerm k_88 (ATerm));
ATerm option_defined_1 (ATerm, ATerm w_75 (ATerm));
ATerm Help_0 (ATerm);
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm c_75 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm o_70 (ATerm), ATerm p_70 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm a_75 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm z_74 (ATerm));
ATerm iowrap_4 (ATerm, ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm));
ATerm iowrap_3 (ATerm, ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm h_77 (ATerm));
ATerm iowrap_2 (ATerm, ATerm d_77 (ATerm), ATerm e_77 (ATerm));
ATerm iowrap_1 (ATerm, ATerm a_77 (ATerm));
ATerm nonterminal_tree_0 (ATerm);
ATerm main_0 (ATerm);
ATerm De_Escape4_0 (ATerm t)
{
  ATerm r_0 = NULL;
  r_0 = t;
  q_0 :
  if(((ATermList) r_0 == ATempty))
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
  ATerm t_1 = NULL,u_1 = NULL,y_1 = NULL;
  t_1 = t;
  s_1 :
  if(((ATgetType(t_1) == AT_LIST) && ((ATermList) t_1 != ATempty)))
    {
      u_1 = ATgetFirst((ATermList) t_1);
      y_1 = (ATerm) ATgetNext((ATermList) t_1);
      {
        ATerm b_2 = NULL;
        ATerm c_2 = NULL;
        t = not_null(y_1);
        {
          t = De_Escape_0(t);
          {
            c_2 = t;
            if(((b_2 != NULL) && (b_2 != c_2)))
              _fail(c_2);
            else
              b_2 = c_2;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(b_2)), not_null(u_1));
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
  ATerm l_2 = NULL,m_2 = NULL,n_2 = NULL,o_2 = NULL,p_2 = NULL;
  l_2 = t;
  h_2 :
  if(((ATgetType(l_2) == AT_LIST) && ((ATermList) l_2 != ATempty)))
    {
      m_2 = ATgetFirst((ATermList) l_2);
      n_2 = (ATerm) ATgetNext((ATermList) l_2);
      i_2 :
      if(match_int(m_2, 92))
        {
          j_2 :
          if(((ATgetType(n_2) == AT_LIST) && ((ATermList) n_2 != ATempty)))
            {
              o_2 = ATgetFirst((ATermList) n_2);
              p_2 = (ATerm) ATgetNext((ATermList) n_2);
              k_2 :
              if(match_int(o_2, 92))
                {
                  ATerm r_2 = NULL;
                  ATerm s_2 = NULL;
                  t = not_null(p_2);
                  {
                    t = De_Escape_0(t);
                    {
                      s_2 = t;
                      if(((r_2 != NULL) && (r_2 != s_2)))
                        _fail(s_2);
                      else
                        r_2 = s_2;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(r_2)), term_e_5);
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
  ATerm b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL;
  b_3 = t;
  x_2 :
  if(((ATgetType(b_3) == AT_LIST) && ((ATermList) b_3 != ATempty)))
    {
      c_3 = ATgetFirst((ATermList) b_3);
      d_3 = (ATerm) ATgetNext((ATermList) b_3);
      y_2 :
      if(match_int(c_3, 92))
        {
          z_2 :
          if(((ATgetType(d_3) == AT_LIST) && ((ATermList) d_3 != ATempty)))
            {
              e_3 = ATgetFirst((ATermList) d_3);
              f_3 = (ATerm) ATgetNext((ATermList) d_3);
              a_3 :
              if(match_int(e_3, 34))
                {
                  ATerm h_3 = NULL;
                  ATerm i_3 = NULL;
                  t = not_null(f_3);
                  {
                    t = De_Escape_0(t);
                    {
                      i_3 = t;
                      if(((h_3 != NULL) && (h_3 != i_3)))
                        _fail(i_3);
                      else
                        h_3 = i_3;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(h_3)), term_f_5);
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
  ATerm g_5 = t;
  int h_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(h_5);
    }
  else
    {
      t = g_5;
      {
        ATerm i_5 = t;
        int j_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(j_5);
          }
        else
          {
            t = i_5;
            {
              ATerm k_5 = t;
              int l_5 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(l_5);
                }
              else
                {
                  t = k_5;
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
ATerm at_last_1 (ATerm t, ATerm z_88 (ATerm))
{
  ATerm l_3 (ATerm t)
  {
    ATerm m_5 = t;
    int n_5 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = z_88(t);
        LocalPopChoice(n_5);
      }
    else
      {
        t = m_5;
        t = Cons_2(t, _id, l_3);
      }
    return(t);
  }
  t = l_3(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm o_3 = NULL,p_3 = NULL,q_3 = NULL;
  o_3 = t;
  n_3 :
  if(((ATgetType(o_3) == AT_LIST) && ((ATermList) o_3 != ATempty)))
    {
      p_3 = ATgetFirst((ATermList) o_3);
      q_3 = (ATerm) ATgetNext((ATermList) o_3);
      t = not_null(q_3);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm w_3 = NULL,x_3 = NULL,y_3 = NULL;
  w_3 = t;
  v_3 :
  if(((ATgetType(w_3) == AT_LIST) && ((ATermList) w_3 != ATempty)))
    {
      x_3 = ATgetFirst((ATermList) w_3);
      y_3 = (ATerm) ATgetNext((ATermList) w_3);
      t = not_null(x_3);
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
    ATerm o_5;
    o_5 = t;
    {
      ATerm h_4 = NULL;
      t = Hd_0(t);
      {
        h_4 = t;
        c_4 :
        if(!(match_int(h_4, 34)))
          {
            _fail(t);
          }
      }
    }
    t = o_5;
    {
      t = Tl_0(t);
      {
        ATerm c_0 (ATerm t)
        {
          ATerm i_4 = NULL,j_4 = NULL,k_4 = NULL;
          i_4 = t;
          e_4 :
          if(((ATgetType(i_4) == AT_LIST) && ((ATermList) i_4 != ATempty)))
            {
              j_4 = ATgetFirst((ATermList) i_4);
              k_4 = (ATerm) ATgetNext((ATermList) i_4);
              f_4 :
              if(match_int(j_4, 34))
                {
                  g_4 :
                  if(((ATermList) k_4 == ATempty))
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
        t = at_last_1(t, c_0);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm s_81 (ATerm))
{
  ATerm p_5 = t;
  int q_5 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(q_5);
    }
  else
    {
      t = p_5;
      {
        ATerm r_5 = t;
        int s_5 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm d_0 (ATerm t)
            {
              t = filter_1(t, s_81);
              return(t);
            }
            t = Cons_2(t, s_81, d_0);
            LocalPopChoice(s_5);
          }
        else
          {
            t = r_5;
            {
              ATerm o_4 = NULL,p_4 = NULL,q_4 = NULL;
              o_4 = t;
              n_4 :
              if(((ATgetType(o_4) == AT_LIST) && ((ATermList) o_4 != ATempty)))
                {
                  p_4 = ATgetFirst((ATermList) o_4);
                  q_4 = (ATerm) ATgetNext((ATermList) o_4);
                  {
                    t = not_null(q_4);
                    t = filter_1(t, s_81);
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
ATerm Sym2Strs_0 (ATerm t)
{
  ATerm f_6 = NULL,g_6 = NULL,h_6 = NULL,i_6 = NULL;
  i_6 = t;
  e_6 :
  if(match_cons(i_6, sym_cf_1))
    {
      g_6 = ATgetArgument(i_6, 0);
      {
        t = not_null(g_6);
        t = Sym2Strs_0(t);
      }
    }
  else
    {
      if(match_cons(i_6, sym_lex_1))
        {
          g_6 = ATgetArgument(i_6, 0);
          {
            t = not_null(g_6);
            t = Sym2Strs_0(t);
          }
        }
      else
        {
          if(match_cons(i_6, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_t_5);
            }
          else
            {
              if(match_cons(i_6, sym_seq_2))
                {
                  g_6 = ATgetArgument(i_6, 0);
                  h_6 = ATgetArgument(i_6, 1);
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(h_6)), not_null(g_6));
                    {
                      t = filter_1(t, Sym2Strs_0);
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(i_6, sym_opt_1))
                    {
                      g_6 = ATgetArgument(i_6, 0);
                      {
                        t = not_null(g_6);
                        {
                          t = Sym2Strs_0(t);
                          {
                            ATerm g_0 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_u_5);
                              return(t);
                            }
                            t = at_end_1(t, g_0);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(i_6, sym_iter_1))
                        {
                          g_6 = ATgetArgument(i_6, 0);
                          {
                            t = not_null(g_6);
                            {
                              t = Sym2Strs_0(t);
                              {
                                ATerm h_0 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_v_5);
                                  return(t);
                                }
                                t = at_end_1(t, h_0);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(i_6, sym_iter_star_1))
                            {
                              g_6 = ATgetArgument(i_6, 0);
                              {
                                t = not_null(g_6);
                                {
                                  t = Sym2Strs_0(t);
                                  {
                                    ATerm m_0 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_w_5);
                                      return(t);
                                    }
                                    t = at_end_1(t, m_0);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(i_6, sym_iter_sep_2))
                                {
                                  g_6 = ATgetArgument(i_6, 0);
                                  h_6 = ATgetArgument(i_6, 1);
                                  {
                                    ATerm s_6 = NULL,u_6 = NULL;
                                    ATerm x_5;
                                    x_5 = t;
                                    {
                                      ATerm t_6 = NULL;
                                      t = not_null(g_6);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          t_6 = t;
                                          if(((s_6 != NULL) && (s_6 != t_6)))
                                            _fail(t_6);
                                          else
                                            s_6 = t_6;
                                        }
                                      }
                                    }
                                    t = x_5;
                                    {
                                      ATerm v_6 = NULL;
                                      t = not_null(h_6);
                                      {
                                        t = Sym2Strs_0(t);
                                        {
                                          v_6 = t;
                                          if(((u_6 != NULL) && (u_6 != v_6)))
                                            _fail(v_6);
                                          else
                                            u_6 = v_6;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_v_5)), not_null(u_6)), not_null(s_6));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(i_6, sym_iter_star_sep_2))
                                    {
                                      g_6 = ATgetArgument(i_6, 0);
                                      h_6 = ATgetArgument(i_6, 1);
                                      {
                                        ATerm y_6 = NULL,a_7 = NULL;
                                        ATerm y_5;
                                        y_5 = t;
                                        {
                                          ATerm z_6 = NULL;
                                          t = not_null(g_6);
                                          {
                                            t = Sym2Strs_0(t);
                                            {
                                              z_6 = t;
                                              if(((y_6 != NULL) && (y_6 != z_6)))
                                                _fail(z_6);
                                              else
                                                y_6 = z_6;
                                            }
                                          }
                                        }
                                        t = y_5;
                                        {
                                          ATerm b_7 = NULL;
                                          t = not_null(h_6);
                                          {
                                            t = Sym2Strs_0(t);
                                            {
                                              b_7 = t;
                                              if(((a_7 != NULL) && (a_7 != b_7)))
                                                _fail(b_7);
                                              else
                                                a_7 = b_7;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_5)), not_null(a_7)), not_null(y_6));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(i_6, sym_iter_n_2))
                                        {
                                          g_6 = ATgetArgument(i_6, 0);
                                          h_6 = ATgetArgument(i_6, 1);
                                          {
                                            ATerm d_7 = NULL;
                                            ATerm e_7 = NULL;
                                            t = not_null(g_6);
                                            {
                                              t = Sym2Strs_0(t);
                                              {
                                                e_7 = t;
                                                if(((d_7 != NULL) && (d_7 != e_7)))
                                                  _fail(e_7);
                                                else
                                                  d_7 = e_7;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_5)), not_null(d_7));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(i_6, sym_iter_sep_n_3))
                                            {
                                              g_6 = ATgetArgument(i_6, 0);
                                              h_6 = ATgetArgument(i_6, 1);
                                              f_6 = ATgetArgument(i_6, 2);
                                              {
                                                ATerm h_7 = NULL,j_7 = NULL;
                                                ATerm a_6;
                                                a_6 = t;
                                                {
                                                  ATerm i_7 = NULL;
                                                  t = not_null(g_6);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      i_7 = t;
                                                      if(((h_7 != NULL) && (h_7 != i_7)))
                                                        _fail(i_7);
                                                      else
                                                        h_7 = i_7;
                                                    }
                                                  }
                                                }
                                                t = a_6;
                                                {
                                                  ATerm k_7 = NULL;
                                                  t = not_null(h_6);
                                                  {
                                                    t = Sym2Strs_0(t);
                                                    {
                                                      k_7 = t;
                                                      if(((j_7 != NULL) && (j_7 != k_7)))
                                                        _fail(k_7);
                                                      else
                                                        j_7 = k_7;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_5)), not_null(j_7)), not_null(h_7));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(i_6, sym_set_1))
                                                {
                                                  g_6 = ATgetArgument(i_6, 0);
                                                  {
                                                    ATerm m_7 = NULL;
                                                    ATerm n_7 = NULL;
                                                    t = not_null(g_6);
                                                    {
                                                      t = Sym2Strs_0(t);
                                                      {
                                                        n_7 = t;
                                                        if(((m_7 != NULL) && (m_7 != n_7)))
                                                          _fail(n_7);
                                                        else
                                                          m_7 = n_7;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(m_7)), (ATerm) ATinsert(ATempty, term_b_6));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(i_6, sym_pair_2))
                                                    {
                                                      g_6 = ATgetArgument(i_6, 0);
                                                      h_6 = ATgetArgument(i_6, 1);
                                                      {
                                                        ATerm q_7 = NULL,s_7 = NULL;
                                                        ATerm c_6;
                                                        c_6 = t;
                                                        {
                                                          ATerm r_7 = NULL;
                                                          t = not_null(g_6);
                                                          {
                                                            t = Sym2Strs_0(t);
                                                            {
                                                              r_7 = t;
                                                              if(((q_7 != NULL) && (q_7 != r_7)))
                                                                _fail(r_7);
                                                              else
                                                                q_7 = r_7;
                                                            }
                                                          }
                                                        }
                                                        t = c_6;
                                                        {
                                                          ATerm t_7 = NULL;
                                                          t = not_null(h_6);
                                                          {
                                                            t = Sym2Strs_0(t);
                                                            {
                                                              t_7 = t;
                                                              if(((s_7 != NULL) && (s_7 != t_7)))
                                                                _fail(t_7);
                                                              else
                                                                s_7 = t_7;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_7)), (ATerm) ATinsert(ATempty, term_d_6)), not_null(q_7));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(i_6, sym_func_2))
                                                        {
                                                          g_6 = ATgetArgument(i_6, 0);
                                                          h_6 = ATgetArgument(i_6, 1);
                                                          {
                                                            ATerm w_7 = NULL,y_7 = NULL;
                                                            ATerm j_6;
                                                            j_6 = t;
                                                            {
                                                              ATerm x_7 = NULL;
                                                              t = not_null(g_6);
                                                              {
                                                                t = filter_1(t, Sym2Strs_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    x_7 = t;
                                                                    if(((w_7 != NULL) && (w_7 != x_7)))
                                                                      _fail(x_7);
                                                                    else
                                                                      w_7 = x_7;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = j_6;
                                                            {
                                                              ATerm z_7 = NULL;
                                                              t = not_null(h_6);
                                                              {
                                                                t = Sym2Strs_0(t);
                                                                {
                                                                  z_7 = t;
                                                                  if(((y_7 != NULL) && (y_7 != z_7)))
                                                                    _fail(z_7);
                                                                  else
                                                                    y_7 = z_7;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(y_7)), (ATerm) ATinsert(ATempty, term_k_6)), not_null(w_7));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(i_6, sym_alt_2))
                                                            {
                                                              g_6 = ATgetArgument(i_6, 0);
                                                              h_6 = ATgetArgument(i_6, 1);
                                                              {
                                                                ATerm c_8 = NULL,e_8 = NULL;
                                                                ATerm l_6;
                                                                l_6 = t;
                                                                {
                                                                  ATerm d_8 = NULL;
                                                                  t = not_null(g_6);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      d_8 = t;
                                                                      if(((c_8 != NULL) && (c_8 != d_8)))
                                                                        _fail(d_8);
                                                                      else
                                                                        c_8 = d_8;
                                                                    }
                                                                  }
                                                                }
                                                                t = l_6;
                                                                {
                                                                  ATerm f_8 = NULL;
                                                                  t = not_null(h_6);
                                                                  {
                                                                    t = Sym2Strs_0(t);
                                                                    {
                                                                      f_8 = t;
                                                                      if(((e_8 != NULL) && (e_8 != f_8)))
                                                                        _fail(f_8);
                                                                      else
                                                                        e_8 = f_8;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_8)), (ATerm) ATinsert(ATempty, term_m_6)), not_null(c_8));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(i_6, sym_perm_1))
                                                                {
                                                                  g_6 = ATgetArgument(i_6, 0);
                                                                  {
                                                                    ATerm h_8 = NULL;
                                                                    ATerm i_8 = NULL;
                                                                    t = not_null(g_6);
                                                                    {
                                                                      t = filter_1(t, Sym2Strs_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          i_8 = t;
                                                                          if(((h_8 != NULL) && (h_8 != i_8)))
                                                                            _fail(i_8);
                                                                          else
                                                                            h_8 = i_8;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(h_8)), term_n_6);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(i_6, sym_sort_1))
                                                                    {
                                                                      g_6 = ATgetArgument(i_6, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(g_6));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(i_6, sym_lit_1))
                                                                        {
                                                                          g_6 = ATgetArgument(i_6, 0);
                                                                          {
                                                                            ATerm l_8 = NULL;
                                                                            ATerm m_8 = NULL;
                                                                            t = not_null(g_6);
                                                                            {
                                                                              ATerm n_0 (ATerm t)
                                                                              {
                                                                                t = de_quote_0(t);
                                                                                t = de_escape_0(t);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, n_0);
                                                                              {
                                                                                m_8 = t;
                                                                                if(((l_8 != NULL) && (l_8 != m_8)))
                                                                                  _fail(m_8);
                                                                                else
                                                                                  l_8 = m_8;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(l_8));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(i_6, sym_label_2))
                                                                            {
                                                                              g_6 = ATgetArgument(i_6, 0);
                                                                              h_6 = ATgetArgument(i_6, 1);
                                                                              {
                                                                                ATerm o_8 = NULL;
                                                                                ATerm p_8 = NULL;
                                                                                t = not_null(g_6);
                                                                                {
                                                                                  ATerm o_0 (ATerm t)
                                                                                  {
                                                                                    t = de_quote_0(t);
                                                                                    t = de_escape_0(t);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, o_0);
                                                                                  {
                                                                                    p_8 = t;
                                                                                    if(((o_8 != NULL) && (o_8 != p_8)))
                                                                                      _fail(p_8);
                                                                                    else
                                                                                      o_8 = p_8;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(o_8));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(i_6, sym_layout_0))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATempty, term_o_6);
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
  ATerm i_10 = NULL,j_10 = NULL,k_10 = NULL,l_10 = NULL,m_10 = NULL,n_10 = NULL;
  i_10 = t;
  g_10 :
  if(match_cons(i_10, sym_appl_2))
    {
      j_10 = ATgetArgument(i_10, 0);
      n_10 = ATgetArgument(i_10, 1);
      h_10 :
      if(match_cons(j_10, sym_prod_3))
        {
          k_10 = ATgetArgument(j_10, 0);
          l_10 = ATgetArgument(j_10, 1);
          m_10 = ATgetArgument(j_10, 2);
          {
            ATerm r_10 = NULL,v_10 = NULL;
            ATerm p_6;
            p_6 = t;
            {
              ATerm u_10 = NULL;
              t = not_null(l_10);
              {
                ATerm q_6 = t;
                int r_6 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm s_10 = NULL;
                    ATerm t_10 = NULL;
                    t = Sym2Strs_0(t);
                    {
                      t_10 = t;
                      if(((s_10 != NULL) && (s_10 != t_10)))
                        _fail(t_10);
                      else
                        s_10 = t_10;
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_w_6)), not_null(s_10)), (ATerm) ATinsert(ATempty, term_w_6));
                      {
                        t = concat_0(t);
                        {
                          ATerm p_0 (ATerm t)
                          {
                            t = term_x_6;
                            return(t);
                          }
                          t = debug_1(t, p_0);
                          t = concat_strings_0(t);
                        }
                      }
                    }
                    LocalPopChoice(r_6);
                  }
                else
                  {
                    t = q_6;
                    {
                      ATerm s_0 (ATerm t)
                      {
                        t = term_c_7;
                        return(t);
                      }
                      t = debug_1(t, s_0);
                    }
                  }
                {
                  u_10 = t;
                  if(((r_10 != NULL) && (r_10 != u_10)))
                    _fail(u_10);
                  else
                    r_10 = u_10;
                }
              }
            }
            t = p_6;
            {
              t = SSL_mkterm(not_null(r_10), not_null(n_10));
              {
                v_10 = t;
                t = not_null(v_10);
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
ATerm try_1 (ATerm t, ATerm v_96 (ATerm))
{
  ATerm f_7 = t;
  int g_7 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = v_96(t);
      LocalPopChoice(g_7);
    }
  else
    {
      t = f_7;
      {
      }
    }
  return(t);
}
ATerm topdown_1 (ATerm t, ATerm r_92 (ATerm))
{
  t = r_92(t);
  {
    ATerm t_0 (ATerm t)
    {
      t = topdown_1(t, r_92);
      return(t);
    }
    t = _all(t, t_0);
  }
  return(t);
}
ATerm _2 (ATerm t, ATerm f_57 (ATerm), ATerm g_57 (ATerm))
{
  ATerm h_11 = NULL,i_11 = NULL,j_11 = NULL;
  h_11 = t;
  g_11 :
  if(match_cons(h_11, sym__2))
    {
      i_11 = ATgetArgument(h_11, 0);
      j_11 = ATgetArgument(h_11, 1);
      {
        ATerm n_11 = NULL,p_11 = NULL;
        ATerm o_11 = NULL;
        t = SSLgetAnnotations(not_null(h_11));
        {
          o_11 = t;
          if(((n_11 != NULL) && (n_11 != o_11)))
            _fail(o_11);
          else
            n_11 = o_11;
        }
        {
          t = not_null(i_11);
          {
            ATerm r_11 = NULL;
            t = f_57(t);
            {
              p_11 = t;
              {
                t = not_null(j_11);
                {
                  ATerm t_11 = NULL;
                  t = g_57(t);
                  {
                    r_11 = t;
                    {
                      ATerm u_11 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(p_11), not_null(r_11)), not_null(n_11));
                      {
                        u_11 = t;
                        if(((t_11 != NULL) && (t_11 != u_11)))
                          _fail(u_11);
                        else
                          t_11 = u_11;
                      }
                      t = not_null(t_11);
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
  ATerm c_12 = NULL;
  ATerm l_7;
  l_7 = t;
  {
    ATerm u_0 (ATerm t)
    {
      ATerm d_12 = NULL,e_12 = NULL;
      d_12 = t;
      b_12 :
      if(match_cons(d_12, sym_Program_1))
        {
          e_12 = ATgetArgument(d_12, 0);
          if(((c_12 != NULL) && (c_12 != e_12)))
            _fail(e_12);
          else
            c_12 = e_12;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, u_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_u_7), not_null(c_12)), term_p_7));
      {
        t = printnl_0(t);
        {
          t = term_v_7;
          t = exit_0(t);
        }
      }
    }
  }
  t = l_7;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm i_12 = NULL,j_12 = NULL,k_12 = NULL;
  i_12 = t;
  h_12 :
  if(match_cons(i_12, sym__2))
    {
      j_12 = ATgetArgument(i_12, 0);
      k_12 = ATgetArgument(i_12, 1);
      {
        ATerm a_8;
        a_8 = t;
        t = SSL_printnl(not_null(j_12), not_null(k_12));
        t = a_8;
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
  ATerm q_12 = NULL,r_12 = NULL,s_12 = NULL;
  q_12 = t;
  p_12 :
  if(match_cons(q_12, sym__2))
    {
      r_12 = ATgetArgument(q_12, 0);
      s_12 = ATgetArgument(q_12, 1);
      {
        t = not_null(r_12);
        {
          ATerm v_0 (ATerm t)
          {
            t = not_null(s_12);
            return(t);
          }
          t = at_end_1(t, v_0);
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
ATerm debug_1 (ATerm t, ATerm p_78 (ATerm))
{
  ATerm b_8;
  b_8 = t;
  {
    ATerm y_12 = NULL,a_13 = NULL;
    ATerm g_8;
    g_8 = t;
    {
      ATerm z_12 = NULL;
      t = p_78(t);
      {
        z_12 = t;
        if(((y_12 != NULL) && (y_12 != z_12)))
          _fail(z_12);
        else
          y_12 = z_12;
      }
    }
    t = g_8;
    {
      ATerm b_13 = NULL;
      b_13 = t;
      if(((a_13 != NULL) && (a_13 != b_13)))
        _fail(b_13);
      else
        a_13 = b_13;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(a_13)), not_null(y_12)));
        t = printnl_0(t);
      }
    }
  }
  t = b_8;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm f_13 = NULL;
  f_13 = t;
  t = SSL_is_string(not_null(f_13));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm j_8 = t;
  int k_8 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(k_8);
    }
  else
    {
      t = j_8;
      {
        ATerm n_8 = t;
        int q_8 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_0 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, w_0);
            LocalPopChoice(q_8);
          }
        else
          {
            t = n_8;
            {
              ATerm o_13 = NULL,p_13 = NULL,q_13 = NULL;
              o_13 = t;
              n_13 :
              if(match_cons(o_13, sym_Path_1))
                {
                  p_13 = ATgetArgument(o_13, 0);
                  t = not_null(p_13);
                }
              else
                {
                  if(match_cons(o_13, sym_Var_1))
                    {
                      p_13 = ATgetArgument(o_13, 0);
                      {
                        t = not_null(p_13);
                        {
                          ATerm r_8 = t;
                          int s_8 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(s_8);
                            }
                          else
                            {
                              t = r_8;
                              {
                                ATerm x_0 (ATerm t)
                                {
                                  t = term_t_8;
                                  return(t);
                                }
                                t = debug_1(t, x_0);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_13, sym_Prefix_2))
                        {
                          p_13 = ATgetArgument(o_13, 0);
                          q_13 = ATgetArgument(o_13, 1);
                          {
                            ATerm v_13 = NULL,x_13 = NULL;
                            ATerm u_8;
                            u_8 = t;
                            {
                              ATerm w_13 = NULL;
                              t = not_null(p_13);
                              {
                                t = eval_config_0(t);
                                {
                                  w_13 = t;
                                  if(((v_13 != NULL) && (v_13 != w_13)))
                                    _fail(w_13);
                                  else
                                    v_13 = w_13;
                                }
                              }
                            }
                            t = u_8;
                            {
                              ATerm y_13 = NULL;
                              t = not_null(q_13);
                              {
                                t = eval_config_0(t);
                                {
                                  y_13 = t;
                                  if(((x_13 != NULL) && (x_13 != y_13)))
                                    _fail(y_13);
                                  else
                                    x_13 = y_13;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_13), not_null(x_13));
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
  ATerm g_14 = NULL;
  g_14 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_v_8, not_null(g_14));
    {
      t = table_get_0(t);
      {
        ATerm y_0 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm w_8;
            w_8 = t;
            {
              ATerm i_14 = NULL;
              ATerm j_14 = NULL;
              j_14 = t;
              if(((i_14 != NULL) && (i_14 != j_14)))
                _fail(j_14);
              else
                i_14 = j_14;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_v_8, not_null(g_14), not_null(i_14));
                t = table_put_0(t);
              }
            }
            t = w_8;
          }
          return(t);
        }
        t = try_1(t, y_0);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm z_75 (ATerm))
{
  ATerm z_0 (ATerm t)
  {
    ATerm x_8;
    x_8 = t;
    {
      ATerm n_14 = NULL;
      ATerm o_14 = NULL;
      t = term_y_8;
      {
        t = get_config_0(t);
        {
          o_14 = t;
          if(((n_14 != NULL) && (n_14 != o_14)))
            _fail(o_14);
          else
            n_14 = o_14;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(n_14), term_z_8);
        t = geq_0(t);
      }
    }
    t = x_8;
    t = z_75(t);
    return(t);
  }
  t = try_1(t, z_0);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, term_a_9));
  {
    t = printnl_0(t);
    {
      t = term_v_7;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm r_14 = NULL;
  r_14 = t;
  t = SSL_TicksToSeconds(not_null(r_14));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm w_14 = NULL,x_14 = NULL,y_14 = NULL;
  w_14 = t;
  v_14 :
  if(match_cons(w_14, sym__2))
    {
      x_14 = ATgetArgument(w_14, 0);
      y_14 = ATgetArgument(w_14, 1);
      {
        ATerm b_9 = t;
        int c_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(x_14), not_null(y_14));
            LocalPopChoice(c_9);
          }
        else
          {
            t = b_9;
            t = SSL_addr(not_null(x_14), not_null(y_14));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm m_82 (ATerm), ATerm n_82 (ATerm))
{
  ATerm d_9 = t;
  int e_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = m_82(t);
      LocalPopChoice(e_9);
    }
  else
    {
      t = d_9;
      {
        ATerm f_15 = NULL,g_15 = NULL,h_15 = NULL;
        f_15 = t;
        e_15 :
        if(((ATgetType(f_15) == AT_LIST) && ((ATermList) f_15 != ATempty)))
          {
            g_15 = ATgetFirst((ATermList) f_15);
            h_15 = (ATerm) ATgetNext((ATermList) f_15);
            {
              ATerm k_15 = NULL;
              ATerm l_15 = NULL;
              t = not_null(h_15);
              {
                t = foldr_2(t, m_82, n_82);
                {
                  l_15 = t;
                  if(((k_15 != NULL) && (k_15 != l_15)))
                    _fail(l_15);
                  else
                    k_15 = l_15;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(g_15), not_null(k_15));
                t = n_82(t);
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
ATerm crush_2 (ATerm t, ATerm e_84 (ATerm), ATerm f_84 (ATerm))
{
  ATerm s_15 = NULL;
  ATerm u_15 = NULL;
  s_15 = t;
  {
    ATerm v_15 = NULL;
    ATerm x_15 = NULL,y_15 = NULL,z_15 = NULL;
    t = not_null(s_15);
    {
      v_15 = t;
      {
        t = SSL_explode_term(not_null(v_15));
        {
          x_15 = t;
          r_15 :
          if(match_cons(x_15, sym__2))
            {
              y_15 = ATgetArgument(x_15, 0);
              z_15 = ATgetArgument(x_15, 1);
              if(((u_15 != NULL) && (u_15 != z_15)))
                _fail(z_15);
              else
                u_15 = z_15;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(u_15);
      t = foldr_2(t, e_84, f_84);
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
    ATerm a_1 (ATerm t)
    {
      t = term_f_9;
      return(t);
    }
    t = crush_2(t, a_1, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm f_16 = NULL,g_16 = NULL,h_16 = NULL;
  f_16 = t;
  e_16 :
  if(match_cons(f_16, sym__2))
    {
      g_16 = ATgetArgument(f_16, 0);
      h_16 = ATgetArgument(f_16, 1);
      {
        ATerm g_9;
        g_9 = t;
        {
          ATerm h_9 = t;
          int i_9 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_16), not_null(h_16));
              LocalPopChoice(i_9);
            }
          else
            {
              t = h_9;
              t = SSL_gtr(not_null(g_16), not_null(h_16));
            }
        }
        t = g_9;
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
  ATerm n_16 = NULL;
  ATerm j_9 = t;
  int k_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_16 = NULL,p_16 = NULL,q_16 = NULL;
      o_16 = t;
      m_16 :
      if(match_cons(o_16, sym__2))
        {
          p_16 = ATgetArgument(o_16, 0);
          q_16 = ATgetArgument(o_16, 1);
          {
            if(((n_16 != NULL) && (n_16 != p_16)))
              _fail(p_16);
            else
              n_16 = p_16;
            if(((n_16 != NULL) && (n_16 != q_16)))
              _fail(q_16);
            else
              n_16 = q_16;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(k_9);
    }
  else
    {
      t = j_9;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm y_75 (ATerm))
{
  ATerm b_1 (ATerm t)
  {
    ATerm l_9;
    l_9 = t;
    {
      ATerm t_16 = NULL;
      ATerm u_16 = NULL;
      t = term_y_8;
      {
        t = get_config_0(t);
        {
          u_16 = t;
          if(((t_16 != NULL) && (t_16 != u_16)))
            _fail(u_16);
          else
            t_16 = u_16;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_16), term_v_7);
        t = geq_0(t);
      }
    }
    t = l_9;
    t = y_75(t);
    return(t);
  }
  t = try_1(t, b_1);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm c_1 (ATerm t)
  {
    ATerm y_16 = NULL,a_17 = NULL;
    ATerm m_9;
    m_9 = t;
    {
      ATerm z_16 = NULL;
      t = run_time_0(t);
      {
        z_16 = t;
        if(((y_16 != NULL) && (y_16 != z_16)))
          _fail(z_16);
        else
          y_16 = z_16;
      }
    }
    t = m_9;
    {
      ATerm b_17 = NULL;
      t = term_n_9;
      {
        t = get_config_0(t);
        {
          b_17 = t;
          if(((a_17 != NULL) && (a_17 != b_17)))
            _fail(b_17);
          else
            a_17 = b_17;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_p_9), not_null(y_16)), term_o_9), not_null(a_17)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, c_1);
  {
    t = term_f_9;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm g_17 = NULL,h_17 = NULL,i_17 = NULL;
  g_17 = t;
  f_17 :
  if(match_cons(g_17, sym__2))
    {
      h_17 = ATgetArgument(g_17, 0);
      i_17 = ATgetArgument(g_17, 1);
      t = SSL_WriteToTextFile(not_null(h_17), not_null(i_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm o_17 = NULL,p_17 = NULL,q_17 = NULL;
  o_17 = t;
  n_17 :
  if(match_cons(o_17, sym__2))
    {
      p_17 = ATgetArgument(o_17, 0);
      q_17 = ATgetArgument(o_17, 1);
      t = SSL_WriteToBinaryFile(not_null(p_17), not_null(q_17));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm y_17 = NULL;
  ATerm q_9;
  q_9 = t;
  {
    ATerm d_1 (ATerm t)
    {
      ATerm r_9 = t;
      int s_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm e_1 (ATerm t)
          {
            ATerm z_17 = NULL,a_18 = NULL;
            z_17 = t;
            v_17 :
            if(match_cons(z_17, sym_Output_1))
              {
                a_18 = ATgetArgument(z_17, 0);
                if(((y_17 != NULL) && (y_17 != a_18)))
                  _fail(a_18);
                else
                  y_17 = a_18;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, e_1);
          LocalPopChoice(s_9);
        }
      else
        {
          t = r_9;
          {
            ATerm b_18 = NULL;
            t = term_t_9;
            {
              b_18 = t;
              if(((y_17 != NULL) && (y_17 != b_18)))
                _fail(b_18);
              else
                y_17 = b_18;
            }
          }
        }
      return(t);
    }
    t = _2(t, d_1, _id);
  }
  t = q_9;
  {
    ATerm f_1 (ATerm t)
    {
      ATerm g_1 (ATerm t)
      {
        t = not_null(y_17);
        return(t);
      }
      t = split_2(t, g_1, _id);
      return(t);
    }
    t = _2(t, _id, f_1);
    {
      ATerm u_9 = t;
      int v_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_1 (ATerm t)
          {
            ATerm i_1 (ATerm t)
            {
              ATerm c_18 = NULL;
              c_18 = t;
              x_17 :
              if(!(match_cons(c_18, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, i_1);
            return(t);
          }
          t = _2(t, h_1, WriteToBinaryFile_0);
          LocalPopChoice(v_9);
        }
      else
        {
          t = u_9;
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
ATerm apply_strategy_1 (ATerm t, ATerm z_77 (ATerm))
{
  ATerm i_18 = NULL,k_18 = NULL,l_18 = NULL,m_18 = NULL;
  ATerm w_9;
  w_9 = t;
  t = dtime_0(t);
  t = w_9;
  {
    t = z_77(t);
    {
      ATerm x_9;
      x_9 = t;
      {
        ATerm j_18 = NULL;
        t = dtime_0(t);
        {
          j_18 = t;
          if(((i_18 != NULL) && (i_18 != j_18)))
            _fail(j_18);
          else
            i_18 = j_18;
        }
      }
      t = x_9;
      {
        k_18 = t;
        h_18 :
        if(match_cons(k_18, sym__2))
          {
            l_18 = ATgetArgument(k_18, 0);
            m_18 = ATgetArgument(k_18, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(l_18)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(i_18))), not_null(m_18));
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
  ATerm s_18 = NULL;
  s_18 = t;
  t = SSL_ReadFromFile(not_null(s_18));
  return(t);
}
ATerm split_2 (ATerm t, ATerm a_81 (ATerm), ATerm b_81 (ATerm))
{
  ATerm x_18 = NULL,z_18 = NULL;
  ATerm y_9;
  y_9 = t;
  {
    ATerm y_18 = NULL;
    t = a_81(t);
    {
      y_18 = t;
      if(((x_18 != NULL) && (x_18 != y_18)))
        _fail(y_18);
      else
        x_18 = y_18;
    }
  }
  t = y_9;
  {
    ATerm a_19 = NULL;
    t = b_81(t);
    {
      a_19 = t;
      if(((z_18 != NULL) && (z_18 != a_19)))
        _fail(a_19);
      else
        z_18 = a_19;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(x_18), not_null(z_18));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm g_19 = NULL;
  ATerm z_9;
  z_9 = t;
  {
    ATerm a_10 = t;
    int b_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm j_1 (ATerm t)
        {
          ATerm h_19 = NULL,i_19 = NULL;
          h_19 = t;
          e_19 :
          if(match_cons(h_19, sym_Input_1))
            {
              i_19 = ATgetArgument(h_19, 0);
              if(((g_19 != NULL) && (g_19 != i_19)))
                _fail(i_19);
              else
                g_19 = i_19;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, j_1);
        LocalPopChoice(b_10);
      }
    else
      {
        t = a_10;
        {
          ATerm j_19 = NULL;
          t = term_c_10;
          {
            j_19 = t;
            if(((g_19 != NULL) && (g_19 != j_19)))
              _fail(j_19);
            else
              g_19 = j_19;
          }
        }
      }
  }
  t = z_9;
  {
    ATerm k_1 (ATerm t)
    {
      t = not_null(g_19);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, k_1);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm q_19 = NULL;
  q_19 = t;
  p_19 :
  if(match_cons(q_19, sym_Version_0))
    {
      ATerm s_19 = NULL,u_19 = NULL;
      ATerm d_10;
      d_10 = t;
      {
        ATerm t_19 = NULL;
        t = SSLgetAnnotations(not_null(q_19));
        {
          t_19 = t;
          if(((s_19 != NULL) && (s_19 != t_19)))
            _fail(t_19);
          else
            s_19 = t_19;
        }
      }
      t = d_10;
      {
        ATerm v_19 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(s_19));
        {
          v_19 = t;
          if(((u_19 != NULL) && (u_19 != v_19)))
            _fail(v_19);
          else
            u_19 = v_19;
        }
        t = not_null(u_19);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm x_77 (ATerm))
{
  ATerm l_1 (ATerm t)
  {
    ATerm e_10 = t;
    int f_10 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_10);
      }
    else
      {
        t = e_10;
        {
          ATerm o_10 = t;
          int p_10 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(p_10);
            }
          else
            {
              t = o_10;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, l_1);
  t = x_77(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm a_20 = NULL;
  a_20 = t;
  t = SSL_table_create(not_null(a_20));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm e_20 = NULL;
  e_20 = t;
  {
    ATerm q_10;
    q_10 = t;
    {
      t = term_w_10;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_w_10, term_x_10, not_null(e_20));
          t = table_put_0(t);
        }
      }
    }
    t = q_10;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm i_20 = NULL;
  i_20 = t;
  t = SSL_string_to_int(not_null(i_20));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm j_0 (ATerm), ATerm k_0 (ATerm), ATerm l_0 (ATerm))
{
  ATerm q_20 = NULL,r_20 = NULL,s_20 = NULL,t_20 = NULL,u_20 = NULL;
  q_20 = t;
  o_20 :
  if(match_string(q_20, "register-usage-info"))
    {
      t = register_usage_1(t, l_0);
    }
  else
    {
      if(((ATgetType(q_20) == AT_LIST) && ((ATermList) q_20 != ATempty)))
        {
          r_20 = ATgetFirst((ATermList) q_20);
          s_20 = (ATerm) ATgetNext((ATermList) q_20);
          p_20 :
          if(((ATgetType(s_20) == AT_LIST) && ((ATermList) s_20 != ATempty)))
            {
              t_20 = ATgetFirst((ATermList) s_20);
              u_20 = (ATerm) ATgetNext((ATermList) s_20);
              {
                ATerm y_20 = NULL;
                ATerm y_10;
                y_10 = t;
                {
                  t = not_null(r_20);
                  t = j_0(t);
                }
                t = y_10;
                {
                  ATerm z_20 = NULL;
                  t = not_null(t_20);
                  {
                    t = k_0(t);
                    {
                      z_20 = t;
                      if(((y_20 != NULL) && (y_20 != z_20)))
                        _fail(z_20);
                      else
                        y_20 = z_20;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_20)), not_null(y_20));
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
  ATerm z_10 = t;
  int a_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm m_1 (ATerm t)
      {
        ATerm q_21 = NULL;
        q_21 = t;
        d_21 :
        if(!(match_string(q_21, "-i")))
          {
            if(!(match_string(q_21, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm n_1 (ATerm t)
      {
        ATerm t_21 = NULL;
        ATerm b_11;
        b_11 = t;
        {
          ATerm r_21 = NULL;
          ATerm s_21 = NULL;
          s_21 = t;
          if(((r_21 != NULL) && (r_21 != s_21)))
            _fail(s_21);
          else
            r_21 = s_21;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_c_11, not_null(r_21));
            t = set_config_0(t);
          }
        }
        t = b_11;
        {
          ATerm u_21 = NULL;
          u_21 = t;
          if(((t_21 != NULL) && (t_21 != u_21)))
            _fail(u_21);
          else
            t_21 = u_21;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(t_21));
        }
        return(t);
      }
      ATerm o_1 (ATerm t)
      {
        t = term_d_11;
        return(t);
      }
      t = ArgOption_3(t, m_1, n_1, o_1);
      LocalPopChoice(a_11);
    }
  else
    {
      t = z_10;
      {
        ATerm e_11 = t;
        int f_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_1 (ATerm t)
            {
              ATerm v_21 = NULL;
              v_21 = t;
              g_21 :
              if(!(match_string(v_21, "-o")))
                {
                  if(!(match_string(v_21, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm q_1 (ATerm t)
            {
              ATerm y_21 = NULL;
              ATerm k_11;
              k_11 = t;
              {
                ATerm w_21 = NULL;
                ATerm x_21 = NULL;
                x_21 = t;
                if(((w_21 != NULL) && (w_21 != x_21)))
                  _fail(x_21);
                else
                  w_21 = x_21;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_l_11, not_null(w_21));
                  t = set_config_0(t);
                }
              }
              t = k_11;
              {
                ATerm z_21 = NULL;
                z_21 = t;
                if(((y_21 != NULL) && (y_21 != z_21)))
                  _fail(z_21);
                else
                  y_21 = z_21;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(y_21));
              }
              return(t);
            }
            ATerm r_1 (ATerm t)
            {
              t = term_m_11;
              return(t);
            }
            t = ArgOption_3(t, p_1, q_1, r_1);
            LocalPopChoice(f_11);
          }
        else
          {
            t = e_11;
            {
              ATerm q_11 = t;
              int s_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm v_1 (ATerm t)
                  {
                    ATerm a_22 = NULL;
                    a_22 = t;
                    j_21 :
                    if(!(match_string(a_22, "-S")))
                      {
                        if(!(match_string(a_22, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm w_1 (ATerm t)
                  {
                    t = term_v_11;
                    t = set_config_0(t);
                    t = term_w_11;
                    return(t);
                  }
                  ATerm x_1 (ATerm t)
                  {
                    t = term_x_11;
                    return(t);
                  }
                  t = Option_3(t, v_1, w_1, x_1);
                  LocalPopChoice(s_11);
                }
              else
                {
                  t = q_11;
                  {
                    ATerm y_11 = t;
                    int z_11 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm z_1 (ATerm t)
                        {
                          ATerm b_22 = NULL;
                          b_22 = t;
                          k_21 :
                          if(!(match_string(b_22, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm a_2 (ATerm t)
                        {
                          ATerm e_22 = NULL;
                          ATerm a_12;
                          a_12 = t;
                          {
                            ATerm c_22 = NULL;
                            ATerm d_22 = NULL;
                            t = string_to_int_0(t);
                            {
                              d_22 = t;
                              if(((c_22 != NULL) && (c_22 != d_22)))
                                _fail(d_22);
                              else
                                c_22 = d_22;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_y_8, not_null(c_22));
                              t = set_config_0(t);
                            }
                          }
                          t = a_12;
                          {
                            ATerm f_22 = NULL;
                            f_22 = t;
                            if(((e_22 != NULL) && (e_22 != f_22)))
                              _fail(f_22);
                            else
                              e_22 = f_22;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(e_22));
                          }
                          return(t);
                        }
                        ATerm d_2 (ATerm t)
                        {
                          t = term_f_12;
                          return(t);
                        }
                        t = ArgOption_3(t, z_1, a_2, d_2);
                        LocalPopChoice(z_11);
                      }
                    else
                      {
                        t = y_11;
                        {
                          ATerm g_12 = t;
                          int l_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm e_2 (ATerm t)
                              {
                                ATerm g_22 = NULL;
                                g_22 = t;
                                n_21 :
                                if(!(match_string(g_22, "-v")))
                                  {
                                    if(!(match_string(g_22, "--version")))
                                      {
                                        _fail(t);
                                      }
                                  }
                                return(t);
                              }
                              ATerm f_2 (ATerm t)
                              {
                                t = term_o_12;
                                t = set_config_0(t);
                                t = term_t_12;
                                return(t);
                              }
                              ATerm g_2 (ATerm t)
                              {
                                t = term_u_12;
                                return(t);
                              }
                              t = Option_3(t, e_2, f_2, g_2);
                              LocalPopChoice(l_12);
                            }
                          else
                            {
                              t = g_12;
                              {
                                ATerm v_12 = t;
                                int w_12 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm q_2 (ATerm t)
                                    {
                                      ATerm h_22 = NULL;
                                      h_22 = t;
                                      o_21 :
                                      if(!(match_string(h_22, "-b")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm t_2 (ATerm t)
                                    {
                                      t = term_c_13;
                                      t = set_config_0(t);
                                      t = term_d_13;
                                      return(t);
                                    }
                                    ATerm u_2 (ATerm t)
                                    {
                                      t = term_e_13;
                                      return(t);
                                    }
                                    t = Option_3(t, q_2, t_2, u_2);
                                    LocalPopChoice(w_12);
                                  }
                                else
                                  {
                                    t = v_12;
                                    {
                                      ATerm v_2 (ATerm t)
                                      {
                                        ATerm i_22 = NULL;
                                        i_22 = t;
                                        p_21 :
                                        if(!(match_string(i_22, "-s")))
                                          {
                                            _fail(t);
                                          }
                                        return(t);
                                      }
                                      ATerm w_2 (ATerm t)
                                      {
                                        t = term_h_13;
                                        t = set_config_0(t);
                                        t = term_i_13;
                                        return(t);
                                      }
                                      ATerm g_3 (ATerm t)
                                      {
                                        t = term_j_13;
                                        return(t);
                                      }
                                      t = Option_3(t, v_2, w_2, g_3);
                                    }
                                  }
                              }
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
  ATerm q_22 = NULL;
  q_22 = t;
  t = SSL_table_destroy(not_null(q_22));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm u_22 = NULL;
  u_22 = t;
  t = SSL_exit(not_null(u_22));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm y_22 = NULL;
  y_22 = t;
  t = SSL_implode_string(not_null(y_22));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm q_88 (ATerm))
{
  ATerm b_23 (ATerm t)
  {
    ATerm k_13 = t;
    int l_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, b_23);
        LocalPopChoice(l_13);
      }
    else
      {
        t = k_13;
        {
          t = Nil_0(t);
          t = q_88(t);
        }
      }
    return(t);
  }
  t = b_23(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm m_13 = t;
  int r_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(r_13);
    }
  else
    {
      t = m_13;
      {
        ATerm e_23 = NULL,f_23 = NULL,g_23 = NULL;
        e_23 = t;
        d_23 :
        if(((ATgetType(e_23) == AT_LIST) && ((ATermList) e_23 != ATempty)))
          {
            f_23 = ATgetFirst((ATermList) e_23);
            g_23 = (ATerm) ATgetNext((ATermList) e_23);
            {
              t = not_null(f_23);
              {
                ATerm j_3 (ATerm t)
                {
                  t = not_null(g_23);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, j_3);
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
  ATerm m_23 = NULL;
  m_23 = t;
  t = SSL_explode_string(not_null(m_23));
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
ATerm long_description_1 (ATerm t, ATerm y_74 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm map_1 (ATerm t, ATerm b_88 (ATerm))
{
  ATerm p_23 (ATerm t)
  {
    ATerm s_13 = t;
    int t_13 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(t_13);
      }
    else
      {
        t = s_13;
        t = Cons_2(t, b_88, p_23);
      }
    return(t);
  }
  t = p_23(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm f_0 (ATerm), ATerm i_0 (ATerm))
{
  ATerm w_23 = NULL,x_23 = NULL,y_23 = NULL;
  y_23 = t;
  v_23 :
  if(((ATgetType(y_23) == AT_LIST) && ((ATermList) y_23 != ATempty)))
    {
      w_23 = ATgetFirst((ATermList) y_23);
      x_23 = (ATerm) ATgetNext((ATermList) y_23);
      {
        ATerm b_24 = NULL;
        t = not_null(x_23);
        {
          ATerm u_13;
          u_13 = t;
          {
            ATerm c_24 = NULL,e_24 = NULL,g_24 = NULL;
            ATerm z_13;
            z_13 = t;
            {
              ATerm d_24 = NULL;
              t = i_0(t);
              {
                d_24 = t;
                if(((c_24 != NULL) && (c_24 != d_24)))
                  _fail(d_24);
                else
                  c_24 = d_24;
              }
            }
            t = z_13;
            {
              ATerm f_24 = NULL;
              t = not_null(w_23);
              {
                t = f_0(t);
                {
                  f_24 = t;
                  if(((e_24 != NULL) && (e_24 != f_24)))
                    _fail(f_24);
                  else
                    e_24 = f_24;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(c_24)), not_null(e_24));
                {
                  g_24 = t;
                  if(((b_24 != NULL) && (b_24 != g_24)))
                    _fail(g_24);
                  else
                    b_24 = g_24;
                }
              }
            }
          }
          t = u_13;
          {
            ATerm k_3 (ATerm t)
            {
              t = not_null(b_24);
              return(t);
            }
            t = reverse_acc_2(t, f_0, k_3);
          }
        }
      }
    }
  else
    {
      if(((ATermList) y_23 == ATempty))
        {
          {
            t = term_n_12;
            t = i_0(t);
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
  ATerm m_3 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, m_3);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm x_74 (ATerm))
{
  _fail(t);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm u_65 (ATerm))
{
  ATerm r_24 = NULL,s_24 = NULL;
  r_24 = t;
  q_24 :
  if(match_cons(r_24, sym_Program_1))
    {
      s_24 = ATgetArgument(r_24, 0);
      {
        ATerm v_24 = NULL,x_24 = NULL;
        ATerm w_24 = NULL;
        t = SSLgetAnnotations(not_null(r_24));
        {
          w_24 = t;
          if(((v_24 != NULL) && (v_24 != w_24)))
            _fail(w_24);
          else
            v_24 = w_24;
        }
        {
          t = not_null(s_24);
          {
            ATerm z_24 = NULL;
            t = u_65(t);
            {
              x_24 = t;
              {
                ATerm a_25 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(x_24)), not_null(v_24));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm system_usage_0 (ATerm t)
{
  ATerm j_25 = NULL;
  ATerm r_3 (ATerm t)
  {
    ATerm s_3 (ATerm t)
    {
      ATerm k_25 = NULL;
      k_25 = t;
      if(((j_25 != NULL) && (j_25 != k_25)))
        _fail(k_25);
      else
        j_25 = k_25;
      return(t);
    }
    t = Program_1(t, s_3);
    return(t);
  }
  t = option_defined_1(t, r_3);
  {
    ATerm t_3 (ATerm t)
    {
      ATerm l_25 = NULL;
      ATerm m_25 = NULL;
      t = term_n_12;
      {
        ATerm u_3 (ATerm t)
        {
          t = not_null(j_25);
          return(t);
        }
        t = short_description_1(t, u_3);
        {
          t = concat_strings_0(t);
          {
            m_25 = t;
            if(((l_25 != NULL) && (l_25 != m_25)))
              _fail(m_25);
            else
              l_25 = m_25;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, not_null(l_25)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, t_3);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, term_a_14));
      {
        t = printnl_0(t);
        {
          t = term_d_14;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm z_3 (ATerm t)
                {
                  ATerm n_25 = NULL;
                  n_25 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(n_25)), term_e_14));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, z_3);
                {
                  ATerm a_4 (ATerm t)
                  {
                    ATerm p_25 = NULL;
                    ATerm q_25 = NULL;
                    t = term_n_12;
                    {
                      ATerm b_4 (ATerm t)
                      {
                        t = not_null(j_25);
                        return(t);
                      }
                      t = long_description_1(t, b_4);
                      {
                        t = concat_strings_0(t);
                        {
                          q_25 = t;
                          if(((p_25 != NULL) && (p_25 != q_25)))
                            _fail(q_25);
                          else
                            p_25 = q_25;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(p_25)), term_f_14));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, a_4);
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
ATerm Undefined_1 (ATerm t, ATerm v_65 (ATerm))
{
  ATerm a_26 = NULL,b_26 = NULL;
  a_26 = t;
  z_25 :
  if(match_cons(a_26, sym_Undefined_1))
    {
      b_26 = ATgetArgument(a_26, 0);
      {
        ATerm e_26 = NULL,g_26 = NULL;
        ATerm f_26 = NULL;
        t = SSLgetAnnotations(not_null(a_26));
        {
          f_26 = t;
          if(((e_26 != NULL) && (e_26 != f_26)))
            _fail(f_26);
          else
            e_26 = f_26;
        }
        {
          t = not_null(b_26);
          {
            ATerm i_26 = NULL;
            t = v_65(t);
            {
              g_26 = t;
              {
                ATerm j_26 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(g_26)), not_null(e_26));
                {
                  j_26 = t;
                  if(((i_26 != NULL) && (i_26 != j_26)))
                    _fail(j_26);
                  else
                    i_26 = j_26;
                }
                t = not_null(i_26);
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
ATerm fetch_1 (ATerm t, ATerm k_88 (ATerm))
{
  ATerm s_26 (ATerm t)
  {
    ATerm h_14 = t;
    int k_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, k_88, _id);
        LocalPopChoice(k_14);
      }
    else
      {
        t = h_14;
        t = Cons_2(t, _id, s_26);
      }
    return(t);
  }
  t = s_26(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm w_75 (ATerm))
{
  t = fetch_1(t, w_75);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm w_27 = NULL;
  w_27 = t;
  v_27 :
  if(match_cons(w_27, sym_Help_0))
    {
      ATerm y_27 = NULL,a_28 = NULL;
      ATerm l_14;
      l_14 = t;
      {
        ATerm z_27 = NULL;
        t = SSLgetAnnotations(not_null(w_27));
        {
          z_27 = t;
          if(((y_27 != NULL) && (y_27 != z_27)))
            _fail(z_27);
          else
            y_27 = z_27;
        }
      }
      t = l_14;
      {
        ATerm b_28 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(y_27));
        {
          b_28 = t;
          if(((a_28 != NULL) && (a_28 != b_28)))
            _fail(b_28);
          else
            a_28 = b_28;
        }
        t = not_null(a_28);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm h_28 = NULL,i_28 = NULL,j_28 = NULL;
  h_28 = t;
  g_28 :
  if(match_cons(h_28, sym__2))
    {
      i_28 = ATgetArgument(h_28, 0);
      j_28 = ATgetArgument(h_28, 1);
      t = SSL_table_get(not_null(i_28), not_null(j_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm q_28 = NULL,r_28 = NULL,s_28 = NULL,t_28 = NULL;
  q_28 = t;
  p_28 :
  if(match_cons(q_28, sym__3))
    {
      r_28 = ATgetArgument(q_28, 0);
      s_28 = ATgetArgument(q_28, 1);
      t_28 = ATgetArgument(q_28, 2);
      {
        ATerm m_14;
        m_14 = t;
        {
          ATerm x_28 = NULL;
          ATerm y_28 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(r_28), not_null(s_28));
          {
            ATerm p_14 = t;
            int q_14 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(q_14);
              }
            else
              {
                t = p_14;
                t = (ATerm) ATempty;
              }
            {
              y_28 = t;
              if(((x_28 != NULL) && (x_28 != y_28)))
                _fail(y_28);
              else
                x_28 = y_28;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(r_28), not_null(s_28), (ATerm) ATinsert(CheckATermList(not_null(x_28)), not_null(t_28)));
            t = table_put_0(t);
          }
        }
        t = m_14;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm c_75 (ATerm))
{
  ATerm c_29 = NULL;
  ATerm d_29 = NULL;
  t = term_n_12;
  {
    t = c_75(t);
    {
      d_29 = t;
      if(((c_29 != NULL) && (c_29 != d_29)))
        _fail(d_29);
      else
        c_29 = d_29;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_14, term_c_14, not_null(c_29));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm j_29 = NULL,k_29 = NULL,l_29 = NULL;
  j_29 = t;
  i_29 :
  if(match_string(j_29, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(j_29) == AT_LIST) && ((ATermList) j_29 != ATempty)))
        {
          k_29 = ATgetFirst((ATermList) j_29);
          l_29 = (ATerm) ATgetNext((ATermList) j_29);
          {
            ATerm o_29 = NULL;
            ATerm s_14;
            s_14 = t;
            {
              t = not_null(k_29);
              t = a_0(t);
            }
            t = s_14;
            {
              ATerm p_29 = NULL;
              t = term_n_12;
              {
                t = b_0(t);
                {
                  p_29 = t;
                  if(((o_29 != NULL) && (o_29 != p_29)))
                    _fail(p_29);
                  else
                    o_29 = p_29;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(l_29)), not_null(o_29));
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
ATerm system_usage_switch_0 (ATerm t)
{
  ATerm d_4 (ATerm t)
  {
    ATerm u_29 = NULL;
    u_29 = t;
    t_29 :
    if(!(match_string(u_29, "--help")))
      {
        if(!(match_string(u_29, "-h")))
          {
            if(!(match_string(u_29, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm l_4 (ATerm t)
  {
    t = term_t_14;
    return(t);
  }
  ATerm m_4 (ATerm t)
  {
    t = term_u_14;
    return(t);
  }
  t = Option_3(t, d_4, l_4, m_4);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm x_29 = NULL,y_29 = NULL,z_29 = NULL;
  x_29 = t;
  w_29 :
  if(((ATgetType(x_29) == AT_LIST) && ((ATermList) x_29 != ATempty)))
    {
      y_29 = ATgetFirst((ATermList) x_29);
      z_29 = (ATerm) ATgetNext((ATermList) x_29);
      t = (ATerm) ATinsert(CheckATermList(not_null(z_29)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(y_29)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm o_70 (ATerm), ATerm p_70 (ATerm))
{
  ATerm j_30 = NULL,k_30 = NULL,l_30 = NULL;
  j_30 = t;
  i_30 :
  if(((ATgetType(j_30) == AT_LIST) && ((ATermList) j_30 != ATempty)))
    {
      k_30 = ATgetFirst((ATermList) j_30);
      l_30 = (ATerm) ATgetNext((ATermList) j_30);
      {
        ATerm p_30 = NULL,r_30 = NULL;
        ATerm q_30 = NULL;
        t = SSLgetAnnotations(not_null(j_30));
        {
          q_30 = t;
          if(((p_30 != NULL) && (p_30 != q_30)))
            _fail(q_30);
          else
            p_30 = q_30;
        }
        {
          t = not_null(k_30);
          {
            ATerm t_30 = NULL;
            t = o_70(t);
            {
              r_30 = t;
              {
                t = not_null(l_30);
                {
                  ATerm v_30 = NULL;
                  t = p_70(t);
                  {
                    t_30 = t;
                    {
                      ATerm w_30 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(t_30)), not_null(r_30)), not_null(p_30));
                      {
                        w_30 = t;
                        if(((v_30 != NULL) && (v_30 != w_30)))
                          _fail(w_30);
                        else
                          v_30 = w_30;
                      }
                      t = not_null(v_30);
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
  ATerm g_31 = NULL;
  g_31 = t;
  f_31 :
  if(((ATermList) g_31 == ATempty))
    {
      {
        ATerm i_31 = NULL,k_31 = NULL;
        ATerm z_14;
        z_14 = t;
        {
          ATerm j_31 = NULL;
          t = SSLgetAnnotations(not_null(g_31));
          {
            j_31 = t;
            if(((i_31 != NULL) && (i_31 != j_31)))
              _fail(j_31);
            else
              i_31 = j_31;
          }
        }
        t = z_14;
        {
          ATerm l_31 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(i_31));
          {
            l_31 = t;
            if(((k_31 != NULL) && (k_31 != l_31)))
              _fail(l_31);
            else
              k_31 = l_31;
          }
          t = not_null(k_31);
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
  ATerm r_31 = NULL,s_31 = NULL,t_31 = NULL;
  r_31 = t;
  q_31 :
  if(match_cons(r_31, sym__2))
    {
      s_31 = ATgetArgument(r_31, 0);
      t_31 = ATgetArgument(r_31, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_v_8, not_null(s_31), not_null(t_31));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm a_15;
  a_15 = t;
  {
    ATerm r_4 (ATerm t)
    {
      t = term_b_15;
      t = a_75(t);
      return(t);
    }
    t = try_1(t, r_4);
  }
  t = a_15;
  {
    ATerm s_4 (ATerm t)
    {
      ATerm b_32 = NULL;
      ATerm c_15;
      c_15 = t;
      {
        ATerm z_31 = NULL;
        ATerm a_32 = NULL;
        a_32 = t;
        if(((z_31 != NULL) && (z_31 != a_32)))
          _fail(a_32);
        else
          z_31 = a_32;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_n_9, not_null(z_31));
          t = set_config_0(t);
        }
      }
      t = c_15;
      {
        ATerm c_32 = NULL;
        c_32 = t;
        if(((b_32 != NULL) && (b_32 != c_32)))
          _fail(c_32);
        else
          b_32 = c_32;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(b_32));
      }
      return(t);
    }
    ATerm t_4 (ATerm t)
    {
      ATerm d_15 = t;
      int i_15 = stack_ptr;
      if((PushChoice() == 0))
        {
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
                t = a_75(t);
                t = Cons_2(t, _id, t_4);
              }
            }
          LocalPopChoice(i_15);
        }
      else
        {
          t = d_15;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, s_4, t_4);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm i_32 = NULL,j_32 = NULL,k_32 = NULL;
  ATerm n_15;
  n_15 = t;
  {
    ATerm l_32 = NULL,m_32 = NULL,n_32 = NULL,o_32 = NULL;
    l_32 = t;
    h_32 :
    if(match_cons(l_32, sym__3))
      {
        m_32 = ATgetArgument(l_32, 0);
        n_32 = ATgetArgument(l_32, 1);
        o_32 = ATgetArgument(l_32, 2);
        {
          if(((i_32 != NULL) && (i_32 != m_32)))
            _fail(m_32);
          else
            i_32 = m_32;
          {
            if(((j_32 != NULL) && (j_32 != n_32)))
              _fail(n_32);
            else
              j_32 = n_32;
            {
              if(((k_32 != NULL) && (k_32 != o_32)))
                _fail(o_32);
              else
                k_32 = o_32;
              t = SSL_table_put(not_null(i_32), not_null(j_32), not_null(k_32));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = n_15;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm z_74 (ATerm))
{
  ATerm y_32 = NULL;
  ATerm o_15;
  o_15 = t;
  {
    t = term_p_15;
    t = table_put_0(t);
  }
  t = o_15;
  {
    ATerm u_4 (ATerm t)
    {
      ATerm q_15 = t;
      int t_15 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = z_74(t);
          LocalPopChoice(t_15);
        }
      else
        {
          t = q_15;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, u_4);
    {
      ATerm v_4 (ATerm t)
      {
        ATerm w_15 = t;
        int a_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_f_9;
                t = exit_0(t);
              }
            }
            LocalPopChoice(a_16);
          }
        else
          {
            t = w_15;
            {
              ATerm w_4 (ATerm t)
              {
                ATerm x_4 (ATerm t)
                {
                  ATerm z_32 = NULL;
                  z_32 = t;
                  if(((y_32 != NULL) && (y_32 != z_32)))
                    _fail(z_32);
                  else
                    y_32 = z_32;
                  return(t);
                }
                t = Undefined_1(t, x_4);
                return(t);
              }
              t = option_defined_1(t, w_4);
              {
                ATerm b_16;
                b_16 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATinsert(ATempty, not_null(y_32)), term_c_16));
                  t = printnl_0(t);
                }
                t = b_16;
                {
                  t = system_usage_0(t);
                  {
                    t = term_v_7;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, v_4);
      {
        ATerm d_16;
        d_16 = t;
        {
          t = term_b_14;
          t = table_destroy_0(t);
        }
        t = d_16;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm l_77 (ATerm), ATerm m_77 (ATerm), ATerm n_77 (ATerm), ATerm o_77 (ATerm))
{
  ATerm y_4 (ATerm t)
  {
    ATerm i_16 = t;
    int j_16 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = m_77(t);
        LocalPopChoice(j_16);
      }
    else
      {
        t = i_16;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, y_4);
  {
    t = store_options_0(t);
    {
      t = o_77(t);
      {
        ATerm k_16 = t;
        int l_16 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, n_77);
            LocalPopChoice(l_16);
          }
        else
          {
            t = k_16;
            {
              ATerm r_16 = t;
              int s_16 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, l_77);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(s_16);
                }
              else
                {
                  t = r_16;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm f_77 (ATerm), ATerm g_77 (ATerm), ATerm h_77 (ATerm))
{
  ATerm z_4 (ATerm t)
  {
    ATerm a_5 (ATerm t)
    {
      ATerm v_16;
      v_16 = t;
      {
        ATerm c_33 = NULL;
        ATerm d_33 = NULL;
        t = term_n_9;
        {
          t = get_config_0(t);
          {
            d_33 = t;
            if(((c_33 != NULL) && (c_33 != d_33)))
              _fail(d_33);
            else
              c_33 = d_33;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_o_7, (ATerm) ATinsert(ATempty, not_null(c_33)));
          t = printnl_0(t);
        }
      }
      t = v_16;
      return(t);
    }
    t = if_verbose2_1(t, a_5);
    return(t);
  }
  t = iowrap_4(t, f_77, g_77, h_77, z_4);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm d_77 (ATerm), ATerm e_77 (ATerm))
{
  t = iowrap_3(t, d_77, e_77, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm a_77 (ATerm))
{
  ATerm b_5 (ATerm t)
  {
    t = _2(t, _id, a_77);
    return(t);
  }
  t = iowrap_2(t, b_5, _fail);
  return(t);
}
ATerm nonterminal_tree_0 (ATerm t)
{
  ATerm c_5 (ATerm t)
  {
    ATerm d_5 (ATerm t)
    {
      t = try_1(t, ApplToSort_0);
      return(t);
    }
    t = topdown_1(t, d_5);
    return(t);
  }
  t = iowrap_1(t, c_5);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = nonterminal_tree_0(t);
  return(t);
}

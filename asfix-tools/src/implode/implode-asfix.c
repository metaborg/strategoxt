#include <srts/stratego.h>
#include <ssl/stratego-lib.h>
#include "xtc-conf.h"
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
ATerm term_v_41;
ATerm term_f_41;
ATerm term_x_40;
ATerm term_u_40;
ATerm term_t_40;
ATerm term_j_40;
ATerm term_e_40;
ATerm term_d_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_a_40;
ATerm term_z_39;
ATerm term_y_39;
ATerm term_m_39;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_h_38;
ATerm term_g_38;
ATerm term_d_38;
ATerm term_c_38;
ATerm term_b_38;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_u_37;
ATerm term_s_37;
ATerm term_r_37;
ATerm term_q_37;
ATerm term_p_37;
ATerm term_i_37;
ATerm term_h_37;
ATerm term_b_37;
ATerm term_v_36;
ATerm term_u_36;
ATerm term_r_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_h_36;
ATerm term_g_36;
ATerm term_p_35;
ATerm term_o_35;
ATerm term_e_35;
ATerm term_i_34;
ATerm term_e_34;
ATerm term_d_34;
ATerm term_c_34;
ATerm term_u_33;
ATerm term_p_33;
ATerm term_o_33;
ATerm term_n_33;
ATerm term_j_33;
ATerm term_b_33;
ATerm term_r_32;
ATerm term_q_32;
ATerm term_p_32;
ATerm term_s_30;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_k_29;
ATerm term_i_29;
ATerm term_g_29;
ATerm term_e_29;
ATerm term_c_29;
ATerm term_b_29;
ATerm term_n_28;
ATerm term_m_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_y_27;
ATerm term_e_27;
ATerm term_d_27;
ATerm term_c_18;
ATerm term_z_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_m_15;
ATerm term_l_14;
ATerm term_r_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_y_10;
ATerm term_v_10;
ATerm term_u_10;
ATerm term_r_10;
ATerm term_q_10;
ATerm term_n_10;
ATerm term_m_10;
ATerm term_j_10;
ATerm term_i_10;
ATerm term_f_10;
ATerm term_e_10;
ATerm term_b_10;
ATerm term_a_10;
ATerm term_x_9;
ATerm term_w_9;
ATerm term_t_9;
ATerm term_s_9;
void init_constant_terms (void)
{
  ATprotect(&(term_s_9));
  term_s_9 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_w_9));
  term_w_9 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_a_10));
  term_a_10 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_e_10));
  term_e_10 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_i_10));
  term_i_10 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_m_10));
  term_m_10 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_q_10));
  term_q_10 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_u_10));
  term_u_10 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_y_10));
  term_y_10 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_r_11));
  term_r_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_l_14));
  term_l_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_m_15));
  term_m_15 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_z_16));
  term_z_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_c_18));
  term_c_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_d_27));
  term_d_27 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_y_27));
  term_y_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_m_28));
  term_m_28 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_b_29));
  term_b_29 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_e_29));
  term_e_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_g_29));
  term_g_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_i_29));
  term_i_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_k_29));
  term_k_29 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_s_30));
  term_s_30 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_p_32));
  term_p_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_q_32));
  term_q_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_r_32));
  term_r_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_b_33));
  term_b_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_j_33));
  term_j_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_o_33));
  term_o_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_p_33));
  term_p_33 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_u_33));
  term_u_33 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_34));
  term_c_34 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_d_34));
  term_d_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_i_34));
  term_i_34 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_35));
  term_e_35 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_o_35));
  term_o_35 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_h_36));
  term_h_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym__2, term_n_33, term_u_33);
  ATprotect(&(term_u_36));
  term_u_36 = (ATerm) ATmakeAppl(sym_Verbose_1, term_u_33);
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_h_37));
  term_h_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_i_37));
  term_i_37 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_p_37));
  term_p_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_q_37));
  term_q_37 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_r_37));
  term_r_37 = (ATerm) ATmakeAppl(sym__2, term_p_37, term_q_37);
  ATprotect(&(term_s_37));
  term_s_37 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_u_37));
  term_u_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(sym__2, term_y_37, term_q_37);
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_b_38));
  term_b_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_c_38));
  term_c_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_d_38));
  term_d_38 = (ATerm) ATmakeAppl(sym__2, term_c_38, term_q_37);
  ATprotect(&(term_g_38));
  term_g_38 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_h_38));
  term_h_38 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_m_39));
  term_m_39 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_y_39));
  term_y_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_z_39));
  term_z_39 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_a_40));
  term_a_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_d_40));
  term_d_40 = (ATerm) ATmakeAppl(sym__2, term_b_40, term_c_40);
  ATprotect(&(term_e_40));
  term_e_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nDescription:\n", 0, ATtrue));
  ATprotect(&(term_t_40));
  term_t_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_u_40));
  term_u_40 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_x_40));
  term_x_40 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_f_41));
  term_f_41 = (ATerm) ATmakeAppl(sym__3, term_b_40, term_c_40, (ATerm) ATempty);
  ATprotect(&(term_v_41));
  term_v_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_options_0 (ATerm);
ATerm amb_1 (ATerm, ATerm k_74 (ATerm));
ATerm is_conc_0 (ATerm);
ATerm ReplConsConc_1 (ATerm, ATerm g_1 (ATerm));
ATerm is_some_0 (ATerm);
ATerm ReplConsSome_1 (ATerm, ATerm o_107 (ATerm));
ATerm is_ins_0 (ATerm);
ATerm ReplConsIns_1 (ATerm, ATerm n_107 (ATerm));
ATerm is_none_0 (ATerm);
ATerm ReplConsNone_1 (ATerm, ATerm m_107 (ATerm));
ATerm is_nil_0 (ATerm);
ATerm ReplConsNil_1 (ATerm, ATerm l_107 (ATerm));
ATerm get_cons_0 (ATerm);
ATerm ReplNamedCons_1 (ATerm, ATerm k_107 (ATerm));
ATerm ReplCons_1 (ATerm, ATerm j_107 (ATerm));
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
ATerm Conc_2 (ATerm, ATerm n_79 (ATerm), ATerm o_79 (ATerm));
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
ATerm oncetd_1 (ATerm, ATerm w_103 (ATerm));
ATerm cons_1 (ATerm, ATerm f_1 (ATerm));
ATerm lex_1 (ATerm, ATerm e_1 (ATerm));
ATerm sort_1 (ATerm, ATerm d_1 (ATerm));
ATerm alt_2 (ATerm, ATerm b_1 (ATerm), ATerm c_1 (ATerm));
ATerm injective_alt_0 (ATerm);
ATerm varsym_1 (ATerm, ATerm a_1 (ATerm));
ATerm injection_0 (ATerm);
ATerm Inj_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm h_102 (ATerm));
ATerm flat_injections_0 (ATerm);
ATerm FlatInj_0 (ATerm);
ATerm lit_1 (ATerm, ATerm z_0 (ATerm));
ATerm list_1 (ATerm, ATerm s_97 (ATerm));
ATerm seq_1 (ATerm, ATerm o_73 (ATerm));
ATerm iter_star_sep_2 (ATerm, ATerm x_0 (ATerm), ATerm y_0 (ATerm));
ATerm iter_star_1 (ATerm, ATerm w_0 (ATerm));
ATerm iter_sep_2 (ATerm, ATerm u_0 (ATerm), ATerm v_0 (ATerm));
ATerm iter_1 (ATerm, ATerm t_0 (ATerm));
ATerm list_sort_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm remove_lit_0 (ATerm);
ATerm RemoveLit_0 (ATerm);
ATerm flat_list_0 (ATerm);
ATerm FlatList_0 (ATerm);
ATerm repeat_2 (ATerm, ATerm n_105 (ATerm), ATerm o_105 (ATerm));
ATerm repeat_1 (ATerm, ATerm q_105 (ATerm));
ATerm appl_to_sort_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm o_98 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm PpSym_0 (ATerm);
ATerm ApplToSort_0 (ATerm);
ATerm layout_1 (ATerm, ATerm l_79 (ATerm));
ATerm layout_0 (ATerm);
ATerm opt_1 (ATerm, ATerm s_0 (ATerm));
ATerm cf_1 (ATerm, ATerm r_0 (ATerm));
ATerm is_layout_p__0 (ATerm);
ATerm filter_1 (ATerm, ATerm g_91 (ATerm));
ATerm prod_3 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm topdown_1 (ATerm, ATerm g_102 (ATerm));
ATerm remove_x_1 (ATerm, ATerm d_107 (ATerm));
ATerm remove_layout_0 (ATerm);
ATerm RemoveLayout_0 (ATerm);
ATerm flat_layout_0 (ATerm);
ATerm Kids_p__0 (ATerm);
ATerm Kids_0 (ATerm);
ATerm appl_2 (ATerm, ATerm i_74 (ATerm), ATerm j_74 (ATerm));
ATerm yield_0 (ATerm);
ATerm implode_lexical_0 (ATerm);
ATerm downup2_2 (ATerm, ATerm n_102 (ATerm), ATerm o_102 (ATerm));
ATerm flat_lex_0 (ATerm);
ATerm FlatLex_0 (ATerm);
ATerm implode_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm d_88 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm g_85 (ATerm));
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm a_92 (ATerm), ATerm b_92 (ATerm));
ATerm crush_2 (ATerm, ATerm s_93 (ATerm), ATerm t_93 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm f_85 (ATerm));
ATerm report_success_0 (ATerm);
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm c_66 (ATerm), ATerm d_66 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm k_81 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm o_90 (ATerm), ATerm p_90 (ATerm));
ATerm input_file_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm i_81 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm f_98 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm q_97 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm a_75 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm b_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm z_97 (ATerm));
ATerm option_defined_1 (ATerm, ATerm m_87 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm k_106 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm m_86 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm w_79 (ATerm), ATerm x_79 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm k_86 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm j_86 (ATerm));
ATerm iowrap_4 (ATerm, ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm z_80 (ATerm));
ATerm iowrap_3 (ATerm, ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm));
ATerm iowrap_2 (ATerm, ATerm o_80 (ATerm), ATerm p_80 (ATerm));
ATerm implode_asfix_0 (ATerm);
ATerm main_0 (ATerm);
ATerm implode_options_0 (ATerm t)
{
  ATerm q_9 = t;
  int r_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_0 (ATerm t)
      {
        ATerm i_2 = NULL;
        i_2 = t;
        i_1 :
        if(!(match_string(i_2, "--lex")))
          {
            _fail(t);
          }
        return(t);
      }
      ATerm d_0 (ATerm t)
      {
        t = term_s_9;
        return(t);
      }
      ATerm e_0 (ATerm t)
      {
        t = term_t_9;
        return(t);
      }
      t = Option_3(t, c_0, d_0, e_0);
      LocalPopChoice(r_9);
    }
  else
    {
      t = q_9;
      {
        ATerm u_9 = t;
        int v_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_0 (ATerm t)
            {
              ATerm j_2 = NULL;
              j_2 = t;
              j_1 :
              if(!(match_string(j_2, "--layout")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm h_1 (ATerm t)
            {
              t = term_w_9;
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              t = term_x_9;
              return(t);
            }
            t = Option_3(t, f_0, h_1, l_1);
            LocalPopChoice(v_9);
          }
        else
          {
            t = u_9;
            {
              ATerm y_9 = t;
              int z_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm m_1 (ATerm t)
                  {
                    ATerm n_2 = NULL;
                    n_2 = t;
                    k_1 :
                    if(!(match_string(n_2, "--lit")))
                      {
                        _fail(t);
                      }
                    return(t);
                  }
                  ATerm n_1 (ATerm t)
                  {
                    t = term_a_10;
                    return(t);
                  }
                  ATerm r_1 (ATerm t)
                  {
                    t = term_b_10;
                    return(t);
                  }
                  t = Option_3(t, m_1, n_1, r_1);
                  LocalPopChoice(z_9);
                }
              else
                {
                  t = y_9;
                  {
                    ATerm c_10 = t;
                    int d_10 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_1 (ATerm t)
                        {
                          ATerm o_2 = NULL;
                          o_2 = t;
                          o_1 :
                          if(!(match_string(o_2, "--alt")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm t_1 (ATerm t)
                        {
                          t = term_e_10;
                          return(t);
                        }
                        ATerm u_1 (ATerm t)
                        {
                          t = term_f_10;
                          return(t);
                        }
                        t = Option_3(t, s_1, t_1, u_1);
                        LocalPopChoice(d_10);
                      }
                    else
                      {
                        t = c_10;
                        {
                          ATerm g_10 = t;
                          int h_10 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_1 (ATerm t)
                              {
                                ATerm p_2 = NULL;
                                p_2 = t;
                                p_1 :
                                if(!(match_string(p_2, "--appl")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm w_1 (ATerm t)
                              {
                                t = term_i_10;
                                return(t);
                              }
                              ATerm x_1 (ATerm t)
                              {
                                t = term_j_10;
                                return(t);
                              }
                              t = Option_3(t, v_1, w_1, x_1);
                              LocalPopChoice(h_10);
                            }
                          else
                            {
                              t = g_10;
                              {
                                ATerm k_10 = t;
                                int l_10 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm y_1 (ATerm t)
                                    {
                                      ATerm t_2 = NULL;
                                      t_2 = t;
                                      q_1 :
                                      if(!(match_string(t_2, "--nt")))
                                        {
                                          _fail(t);
                                        }
                                      return(t);
                                    }
                                    ATerm z_1 (ATerm t)
                                    {
                                      t = term_m_10;
                                      return(t);
                                    }
                                    ATerm a_2 (ATerm t)
                                    {
                                      t = term_n_10;
                                      return(t);
                                    }
                                    t = Option_3(t, y_1, z_1, a_2);
                                    LocalPopChoice(l_10);
                                  }
                                else
                                  {
                                    t = k_10;
                                    {
                                      ATerm o_10 = t;
                                      int p_10 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_2 (ATerm t)
                                          {
                                            ATerm u_2 = NULL;
                                            u_2 = t;
                                            b_2 :
                                            if(!(match_string(u_2, "--inj")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm f_2 (ATerm t)
                                          {
                                            t = term_q_10;
                                            return(t);
                                          }
                                          ATerm g_2 (ATerm t)
                                          {
                                            t = term_r_10;
                                            return(t);
                                          }
                                          t = Option_3(t, e_2, f_2, g_2);
                                          LocalPopChoice(p_10);
                                        }
                                      else
                                        {
                                          t = o_10;
                                          {
                                            ATerm s_10 = t;
                                            int t_10 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm k_2 (ATerm t)
                                                {
                                                  ATerm v_2 = NULL;
                                                  v_2 = t;
                                                  c_2 :
                                                  if(!(match_string(v_2, "--list")))
                                                    {
                                                      _fail(t);
                                                    }
                                                  return(t);
                                                }
                                                ATerm l_2 (ATerm t)
                                                {
                                                  t = term_u_10;
                                                  return(t);
                                                }
                                                ATerm m_2 (ATerm t)
                                                {
                                                  t = term_v_10;
                                                  return(t);
                                                }
                                                t = Option_3(t, k_2, l_2, m_2);
                                                LocalPopChoice(t_10);
                                              }
                                            else
                                              {
                                                t = s_10;
                                                {
                                                  ATerm w_10 = t;
                                                  int x_10 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm q_2 (ATerm t)
                                                      {
                                                        ATerm b_5 = NULL;
                                                        b_5 = t;
                                                        d_2 :
                                                        if(!(match_string(b_5, "--seq")))
                                                          {
                                                            _fail(t);
                                                          }
                                                        return(t);
                                                      }
                                                      ATerm r_2 (ATerm t)
                                                      {
                                                        t = term_y_10;
                                                        return(t);
                                                      }
                                                      ATerm s_2 (ATerm t)
                                                      {
                                                        t = term_z_10;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, q_2, r_2, s_2);
                                                      LocalPopChoice(x_10);
                                                    }
                                                  else
                                                    {
                                                      t = w_10;
                                                      {
                                                        ATerm w_2 (ATerm t)
                                                        {
                                                          ATerm c_5 = NULL;
                                                          c_5 = t;
                                                          h_2 :
                                                          if(!(match_string(c_5, "--pt")))
                                                            {
                                                              _fail(t);
                                                            }
                                                          return(t);
                                                        }
                                                        ATerm x_2 (ATerm t)
                                                        {
                                                          t = term_d_11;
                                                          return(t);
                                                        }
                                                        ATerm y_2 (ATerm t)
                                                        {
                                                          t = term_e_11;
                                                          return(t);
                                                        }
                                                        t = Option_3(t, w_2, x_2, y_2);
                                                      }
                                                    }
                                                }
                                              }
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm amb_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm z_7 = NULL,a_8 = NULL;
  z_7 = t;
  y_7 :
  if(match_cons(z_7, sym_amb_1))
    {
      a_8 = ATgetArgument(z_7, 0);
      {
        ATerm g_8 = NULL,q_8 = NULL;
        ATerm p_8 = NULL;
        t = SSLgetAnnotations(not_null(z_7));
        {
          p_8 = t;
          if(((g_8 != NULL) && (g_8 != p_8)))
            _fail(p_8);
          else
            g_8 = p_8;
        }
        {
          t = not_null(a_8);
          {
            ATerm v_8 = NULL;
            t = k_74(t);
            {
              q_8 = t;
              {
                ATerm w_8 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_amb_1, not_null(q_8)), not_null(g_8));
                {
                  w_8 = t;
                  if(((v_8 != NULL) && (v_8 != w_8)))
                    _fail(w_8);
                  else
                    v_8 = w_8;
                }
                t = not_null(v_8);
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
  ATerm w_12 = NULL,x_12 = NULL,y_12 = NULL,z_12 = NULL,a_13 = NULL,b_13 = NULL,c_13 = NULL,d_13 = NULL,e_13 = NULL,f_13 = NULL,g_13 = NULL,h_13 = NULL,i_13 = NULL,j_13 = NULL,k_13 = NULL,l_13 = NULL,m_13 = NULL,n_13 = NULL;
  x_12 = t;
  a_11 :
  if(match_cons(x_12, sym_prod_3))
    {
      y_12 = ATgetArgument(x_12, 0);
      j_13 = ATgetArgument(x_12, 1);
      n_13 = ATgetArgument(x_12, 2);
      b_11 :
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
              if(((ATgetType(c_13) == AT_LIST) && ((ATermList) c_13 != ATempty)))
                {
                  d_13 = ATgetFirst((ATermList) c_13);
                  e_13 = (ATerm) ATgetNext((ATermList) c_13);
                  o_11 :
                  if(((ATermList) e_13 == ATempty))
                    {
                      p_11 :
                      if(match_cons(j_13, sym_iter_star_1))
                        {
                          k_13 = ATgetArgument(j_13, 0);
                          {
                          }
                        }
                      else
                        {
                          if(match_cons(j_13, sym_cf_1))
                            {
                              k_13 = ATgetArgument(j_13, 0);
                              d_12 :
                              if(match_cons(k_13, sym_iter_star_1))
                                {
                                  l_13 = ATgetArgument(k_13, 0);
                                  {
                                  }
                                }
                              else
                                {
                                  if(match_cons(k_13, sym_iter_1))
                                    {
                                      l_13 = ATgetArgument(k_13, 0);
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
                              if(match_cons(j_13, sym_iter_sep_2))
                                {
                                  k_13 = ATgetArgument(j_13, 0);
                                  w_12 = ATgetArgument(j_13, 1);
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
                  else
                    {
                      if(((ATgetType(e_13) == AT_LIST) && ((ATermList) e_13 != ATempty)))
                        {
                          f_13 = ATgetFirst((ATermList) e_13);
                          g_13 = (ATerm) ATgetNext((ATermList) e_13);
                          e_12 :
                          if(((ATgetType(g_13) == AT_LIST) && ((ATermList) g_13 != ATempty)))
                            {
                              h_13 = ATgetFirst((ATermList) g_13);
                              i_13 = (ATerm) ATgetNext((ATermList) g_13);
                              f_12 :
                              if(((ATermList) i_13 == ATempty))
                                {
                                  q_12 :
                                  if(match_cons(j_13, sym_cf_1))
                                    {
                                      k_13 = ATgetArgument(j_13, 0);
                                      r_12 :
                                      if(match_cons(k_13, sym_iter_sep_2))
                                        {
                                          l_13 = ATgetArgument(k_13, 0);
                                          m_13 = ATgetArgument(k_13, 1);
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
                  if(((ATermList) c_13 == ATempty))
                    {
                      s_12 :
                      if(match_cons(j_13, sym_iter_1))
                        {
                          k_13 = ATgetArgument(j_13, 0);
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
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReplConsConc_1 (ATerm t, ATerm g_1 (ATerm))
{
  ATerm b_14 = NULL,c_14 = NULL,d_14 = NULL,e_14 = NULL,f_14 = NULL,g_14 = NULL,h_14 = NULL,i_14 = NULL,j_14 = NULL;
  d_14 = t;
  w_13 :
  if(match_cons(d_14, sym_appl_2))
    {
      e_14 = ATgetArgument(d_14, 0);
      f_14 = ATgetArgument(d_14, 1);
      x_13 :
      if(((ATgetType(f_14) == AT_LIST) && ((ATermList) f_14 != ATempty)))
        {
          g_14 = ATgetFirst((ATermList) f_14);
          h_14 = (ATerm) ATgetNext((ATermList) f_14);
          y_13 :
          if(((ATgetType(h_14) == AT_LIST) && ((ATermList) h_14 != ATempty)))
            {
              i_14 = ATgetFirst((ATermList) h_14);
              j_14 = (ATerm) ATgetNext((ATermList) h_14);
              z_13 :
              if(((ATgetType(j_14) == AT_LIST) && ((ATermList) j_14 != ATempty)))
                {
                  b_14 = ATgetFirst((ATermList) j_14);
                  c_14 = (ATerm) ATgetNext((ATermList) j_14);
                  a_14 :
                  if(((ATermList) c_14 == ATempty))
                    {
                      {
                        ATerm o_14 = NULL,q_14 = NULL,s_14 = NULL;
                        ATerm f_11;
                        f_11 = t;
                        {
                          t = not_null(e_14);
                          t = is_conc_0(t);
                        }
                        t = f_11;
                        {
                          ATerm g_11;
                          g_11 = t;
                          {
                            ATerm p_14 = NULL;
                            t = not_null(g_14);
                            {
                              t = g_1(t);
                              {
                                p_14 = t;
                                if(((o_14 != NULL) && (o_14 != p_14)))
                                  _fail(p_14);
                                else
                                  o_14 = p_14;
                              }
                            }
                          }
                          t = g_11;
                          {
                            ATerm h_11;
                            h_11 = t;
                            {
                              ATerm r_14 = NULL;
                              t = not_null(i_14);
                              {
                                t = g_1(t);
                                {
                                  r_14 = t;
                                  if(((q_14 != NULL) && (q_14 != r_14)))
                                    _fail(r_14);
                                  else
                                    q_14 = r_14;
                                }
                              }
                            }
                            t = h_11;
                            {
                              ATerm t_14 = NULL;
                              t = not_null(b_14);
                              {
                                t = g_1(t);
                                {
                                  t_14 = t;
                                  if(((s_14 != NULL) && (s_14 != t_14)))
                                    _fail(t_14);
                                  else
                                    s_14 = t_14;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(o_14), (ATerm) ATinsert(CheckATermList(not_null(s_14)), not_null(q_14)));
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
                  if(((ATermList) j_14 == ATempty))
                    {
                      {
                        ATerm x_14 = NULL,y_14 = NULL,z_14 = NULL;
                        ATerm a_15 = NULL;
                        t = not_null(e_14);
                        {
                          t = is_conc_0(t);
                          {
                            t = not_null(g_14);
                            {
                              ATerm b_15 = NULL;
                              t = g_1(t);
                              {
                                a_15 = t;
                                {
                                  if(((x_14 != NULL) && (x_14 != a_15)))
                                    _fail(a_15);
                                  else
                                    x_14 = a_15;
                                  {
                                    t = not_null(i_14);
                                    {
                                      ATerm c_15 = NULL;
                                      t = g_1(t);
                                      {
                                        b_15 = t;
                                        {
                                          if(((y_14 != NULL) && (y_14 != b_15)))
                                            _fail(b_15);
                                          else
                                            y_14 = b_15;
                                          {
                                            ATerm i_11 = t;
                                            int j_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(y_14);
                                                {
                                                  ATerm k_11 = t;
                                                  int l_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Nil_0(t);
                                                      LocalPopChoice(l_11);
                                                    }
                                                  else
                                                    {
                                                      t = k_11;
                                                      t = Cons_2(t, _id, _id);
                                                    }
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_14), not_null(y_14));
                                                    t = conc_0(t);
                                                  }
                                                }
                                                LocalPopChoice(j_11);
                                              }
                                            else
                                              {
                                                t = i_11;
                                                t = (ATerm) ATmakeAppl(sym_Conc_2, not_null(x_14), not_null(y_14));
                                              }
                                            {
                                              c_15 = t;
                                              if(((z_14 != NULL) && (z_14 != c_15)))
                                                _fail(c_15);
                                              else
                                                z_14 = c_15;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                        t = not_null(z_14);
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
  ATerm u_15 = NULL,v_15 = NULL,w_15 = NULL,x_15 = NULL,y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL;
  u_15 = t;
  n_15 :
  if(match_cons(u_15, sym_prod_3))
    {
      v_15 = ATgetArgument(u_15, 0);
      z_15 = ATgetArgument(u_15, 1);
      c_16 = ATgetArgument(u_15, 2);
      o_15 :
      if(((ATgetType(v_15) == AT_LIST) && ((ATermList) v_15 != ATempty)))
        {
          w_15 = ATgetFirst((ATermList) v_15);
          y_15 = (ATerm) ATgetNext((ATermList) v_15);
          p_15 :
          if(((ATermList) y_15 == ATempty))
            {
              q_15 :
              if(match_cons(z_15, sym_opt_1))
                {
                  a_16 = ATgetArgument(z_15, 0);
                  r_15 :
                  if(((w_15 != NULL) && (w_15 != a_16)))
                    _fail(a_16);
                  else
                    w_15 = a_16;
                }
              else
                {
                  if(match_cons(z_15, sym_cf_1))
                    {
                      a_16 = ATgetArgument(z_15, 0);
                      s_15 :
                      if(match_cons(w_15, sym_cf_1))
                        {
                          x_15 = ATgetArgument(w_15, 0);
                          t_15 :
                          if(match_cons(a_16, sym_opt_1))
                            {
                              b_16 = ATgetArgument(a_16, 0);
                              if(((x_15 != NULL) && (x_15 != b_16)))
                                _fail(b_16);
                              else
                                x_15 = b_16;
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
ATerm ReplConsSome_1 (ATerm t, ATerm o_107 (ATerm))
{
  ATerm m_16 = NULL,n_16 = NULL,o_16 = NULL,p_16 = NULL,q_16 = NULL;
  m_16 = t;
  j_16 :
  if(match_cons(m_16, sym_appl_2))
    {
      n_16 = ATgetArgument(m_16, 0);
      o_16 = ATgetArgument(m_16, 1);
      k_16 :
      if(((ATgetType(o_16) == AT_LIST) && ((ATermList) o_16 != ATempty)))
        {
          p_16 = ATgetFirst((ATermList) o_16);
          q_16 = (ATerm) ATgetNext((ATermList) o_16);
          l_16 :
          if(((ATermList) q_16 == ATempty))
            {
              {
                ATerm t_16 = NULL;
                ATerm m_11;
                m_11 = t;
                {
                  t = not_null(n_16);
                  t = is_some_0(t);
                }
                t = m_11;
                {
                  ATerm u_16 = NULL;
                  t = not_null(p_16);
                  {
                    t = o_107(t);
                    {
                      u_16 = t;
                      if(((t_16 != NULL) && (t_16 != u_16)))
                        _fail(u_16);
                      else
                        t_16 = u_16;
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_Some_1, not_null(t_16));
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
  ATerm j_17 = NULL,k_17 = NULL,l_17 = NULL,m_17 = NULL,n_17 = NULL,o_17 = NULL,p_17 = NULL,q_17 = NULL,r_17 = NULL,s_17 = NULL,t_17 = NULL;
  k_17 = t;
  b_17 :
  if(match_cons(k_17, sym_prod_3))
    {
      l_17 = ATgetArgument(k_17, 0);
      p_17 = ATgetArgument(k_17, 1);
      t_17 = ATgetArgument(k_17, 2);
      c_17 :
      if(((ATgetType(l_17) == AT_LIST) && ((ATermList) l_17 != ATempty)))
        {
          m_17 = ATgetFirst((ATermList) l_17);
          o_17 = (ATerm) ATgetNext((ATermList) l_17);
          d_17 :
          if(((ATermList) o_17 == ATempty))
            {
              e_17 :
              if(match_cons(p_17, sym_iter_1))
                {
                  q_17 = ATgetArgument(p_17, 0);
                  f_17 :
                  if(((m_17 != NULL) && (m_17 != q_17)))
                    _fail(q_17);
                  else
                    m_17 = q_17;
                }
              else
                {
                  if(match_cons(p_17, sym_iter_sep_2))
                    {
                      q_17 = ATgetArgument(p_17, 0);
                      j_17 = ATgetArgument(p_17, 1);
                      g_17 :
                      if(((m_17 != NULL) && (m_17 != q_17)))
                        _fail(q_17);
                      else
                        m_17 = q_17;
                    }
                  else
                    {
                      if(match_cons(p_17, sym_cf_1))
                        {
                          q_17 = ATgetArgument(p_17, 0);
                          h_17 :
                          if(match_cons(m_17, sym_cf_1))
                            {
                              n_17 = ATgetArgument(m_17, 0);
                              i_17 :
                              if(match_cons(q_17, sym_iter_1))
                                {
                                  r_17 = ATgetArgument(q_17, 0);
                                  if(((n_17 != NULL) && (n_17 != r_17)))
                                    _fail(r_17);
                                  else
                                    n_17 = r_17;
                                }
                              else
                                {
                                  if(match_cons(q_17, sym_iter_sep_2))
                                    {
                                      r_17 = ATgetArgument(q_17, 0);
                                      s_17 = ATgetArgument(q_17, 1);
                                      if(((n_17 != NULL) && (n_17 != r_17)))
                                        _fail(r_17);
                                      else
                                        n_17 = r_17;
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
ATerm ReplConsIns_1 (ATerm t, ATerm n_107 (ATerm))
{
  ATerm h_18 = NULL,i_18 = NULL,j_18 = NULL,k_18 = NULL,l_18 = NULL;
  h_18 = t;
  e_18 :
  if(match_cons(h_18, sym_appl_2))
    {
      i_18 = ATgetArgument(h_18, 0);
      j_18 = ATgetArgument(h_18, 1);
      f_18 :
      if(((ATgetType(j_18) == AT_LIST) && ((ATermList) j_18 != ATempty)))
        {
          k_18 = ATgetFirst((ATermList) j_18);
          l_18 = (ATerm) ATgetNext((ATermList) j_18);
          g_18 :
          if(((ATermList) l_18 == ATempty))
            {
              {
                ATerm o_18 = NULL;
                ATerm q_11;
                q_11 = t;
                {
                  t = not_null(i_18);
                  t = is_ins_0(t);
                }
                t = q_11;
                {
                  ATerm p_18 = NULL;
                  t = not_null(k_18);
                  {
                    t = n_107(t);
                    {
                      p_18 = t;
                      if(((o_18 != NULL) && (o_18 != p_18)))
                        _fail(p_18);
                      else
                        o_18 = p_18;
                    }
                  }
                  t = (ATerm) ATinsert(ATempty, not_null(o_18));
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
  ATerm w_18 = NULL,x_18 = NULL,y_18 = NULL,z_18 = NULL,a_19 = NULL,b_19 = NULL;
  w_18 = t;
  s_18 :
  if(match_cons(w_18, sym_prod_3))
    {
      x_18 = ATgetArgument(w_18, 0);
      y_18 = ATgetArgument(w_18, 1);
      b_19 = ATgetArgument(w_18, 2);
      t_18 :
      if(((ATermList) x_18 == ATempty))
        {
          u_18 :
          if(match_cons(y_18, sym_opt_1))
            {
              z_18 = ATgetArgument(y_18, 0);
              {
              }
            }
          else
            {
              if(match_cons(y_18, sym_cf_1))
                {
                  z_18 = ATgetArgument(y_18, 0);
                  v_18 :
                  if(match_cons(z_18, sym_opt_1))
                    {
                      a_19 = ATgetArgument(z_18, 0);
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
ATerm ReplConsNone_1 (ATerm t, ATerm m_107 (ATerm))
{
  ATerm f_19 = NULL,g_19 = NULL,h_19 = NULL;
  f_19 = t;
  d_19 :
  if(match_cons(f_19, sym_appl_2))
    {
      g_19 = ATgetArgument(f_19, 0);
      h_19 = ATgetArgument(f_19, 1);
      e_19 :
      if(((ATermList) h_19 == ATempty))
        {
          {
            t = not_null(g_19);
            t = is_none_0(t);
            t = term_r_11;
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
  ATerm o_19 = NULL,p_19 = NULL,q_19 = NULL,r_19 = NULL,s_19 = NULL,t_19 = NULL,u_19 = NULL,v_19 = NULL;
  p_19 = t;
  k_19 :
  if(match_cons(p_19, sym_prod_3))
    {
      q_19 = ATgetArgument(p_19, 0);
      r_19 = ATgetArgument(p_19, 1);
      v_19 = ATgetArgument(p_19, 2);
      l_19 :
      if(((ATermList) q_19 == ATempty))
        {
          m_19 :
          if(match_cons(r_19, sym_iter_star_1))
            {
              s_19 = ATgetArgument(r_19, 0);
              {
              }
            }
          else
            {
              if(match_cons(r_19, sym_iter_star_sep_2))
                {
                  s_19 = ATgetArgument(r_19, 0);
                  o_19 = ATgetArgument(r_19, 1);
                  {
                  }
                }
              else
                {
                  if(match_cons(r_19, sym_cf_1))
                    {
                      s_19 = ATgetArgument(r_19, 0);
                      n_19 :
                      if(match_cons(s_19, sym_iter_star_1))
                        {
                          t_19 = ATgetArgument(s_19, 0);
                          {
                          }
                        }
                      else
                        {
                          if(match_cons(s_19, sym_iter_star_sep_2))
                            {
                              t_19 = ATgetArgument(s_19, 0);
                              u_19 = ATgetArgument(s_19, 1);
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
ATerm ReplConsNil_1 (ATerm t, ATerm l_107 (ATerm))
{
  ATerm z_19 = NULL,a_20 = NULL,b_20 = NULL;
  z_19 = t;
  x_19 :
  if(match_cons(z_19, sym_appl_2))
    {
      a_20 = ATgetArgument(z_19, 0);
      b_20 = ATgetArgument(z_19, 1);
      y_19 :
      if(((ATermList) b_20 == ATempty))
        {
          {
            t = not_null(a_20);
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
  ATerm i_20 = NULL,j_20 = NULL,k_20 = NULL,l_20 = NULL;
  i_20 = t;
  h_20 :
  if(match_cons(i_20, sym_prod_3))
    {
      j_20 = ATgetArgument(i_20, 0);
      k_20 = ATgetArgument(i_20, 1);
      l_20 = ATgetArgument(i_20, 2);
      {
        ATerm n_20 = NULL;
        t = not_null(l_20);
        {
          ATerm z_2 (ATerm t)
          {
            ATerm o_20 = NULL,p_20 = NULL;
            o_20 = t;
            g_20 :
            if(match_cons(o_20, sym_cons_1))
              {
                p_20 = ATgetArgument(o_20, 0);
                if(((n_20 != NULL) && (n_20 != p_20)))
                  _fail(p_20);
                else
                  n_20 = p_20;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, z_2);
        }
        t = not_null(n_20);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm ReplNamedCons_1 (ATerm t, ATerm k_107 (ATerm))
{
  ATerm x_20 = NULL,y_20 = NULL,z_20 = NULL;
  x_20 = t;
  w_20 :
  if(match_cons(x_20, sym_appl_2))
    {
      y_20 = ATgetArgument(x_20, 0);
      z_20 = ATgetArgument(x_20, 1);
      {
        ATerm c_21 = NULL,e_21 = NULL,g_21 = NULL;
        ATerm s_11;
        s_11 = t;
        {
          ATerm d_21 = NULL;
          t = not_null(y_20);
          {
            t = get_cons_0(t);
            {
              t = try_1(t, Rename_Keyword_0);
              {
                d_21 = t;
                if(((c_21 != NULL) && (c_21 != d_21)))
                  _fail(d_21);
                else
                  c_21 = d_21;
              }
            }
          }
        }
        t = s_11;
        {
          ATerm t_11;
          t_11 = t;
          {
            ATerm f_21 = NULL;
            t = not_null(z_20);
            {
              t = map_1(t, k_107);
              {
                f_21 = t;
                if(((e_21 != NULL) && (e_21 != f_21)))
                  _fail(f_21);
                else
                  e_21 = f_21;
              }
            }
          }
          t = t_11;
          {
            t = SSL_mkterm(not_null(c_21), not_null(e_21));
            {
              g_21 = t;
              t = not_null(g_21);
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
ATerm ReplCons_1 (ATerm t, ATerm j_107 (ATerm))
{
  ATerm u_11 = t;
  int v_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1(t, j_107);
      LocalPopChoice(v_11);
    }
  else
    {
      t = u_11;
      {
        ATerm w_11 = t;
        int x_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ReplConsNil_1(t, j_107);
            LocalPopChoice(x_11);
          }
        else
          {
            t = w_11;
            {
              ATerm y_11 = t;
              int z_11 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ReplConsNone_1(t, j_107);
                  LocalPopChoice(z_11);
                }
              else
                {
                  t = y_11;
                  {
                    ATerm a_12 = t;
                    int b_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ReplConsIns_1(t, j_107);
                        LocalPopChoice(b_12);
                      }
                    else
                      {
                        t = a_12;
                        {
                          ATerm c_12 = t;
                          int g_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ReplConsSome_1(t, j_107);
                              LocalPopChoice(g_12);
                            }
                          else
                            {
                              t = c_12;
                              t = ReplConsConc_1(t, j_107);
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
  ATerm g_22 = NULL,h_22 = NULL,i_22 = NULL,j_22 = NULL,k_22 = NULL,l_22 = NULL,m_22 = NULL,n_22 = NULL,o_22 = NULL,p_22 = NULL,q_22 = NULL,r_22 = NULL,s_22 = NULL;
  l_22 = t;
  q_21 :
  if(match_cons(l_22, sym_appl_2))
    {
      m_22 = ATgetArgument(l_22, 0);
      s_22 = ATgetArgument(l_22, 1);
      r_21 :
      if(match_cons(m_22, sym_prod_3))
        {
          n_22 = ATgetArgument(m_22, 0);
          o_22 = ATgetArgument(m_22, 1);
          r_22 = ATgetArgument(m_22, 2);
          s_21 :
          if(((ATgetType(n_22) == AT_LIST) && ((ATermList) n_22 != ATempty)))
            {
              g_22 = ATgetFirst((ATermList) n_22);
              i_22 = (ATerm) ATgetNext((ATermList) n_22);
              t_21 :
              if(((ATermList) i_22 == ATempty))
                {
                  u_21 :
                  if(match_cons(o_22, sym_opt_1))
                    {
                      p_22 = ATgetArgument(o_22, 0);
                      v_21 :
                      if(((ATgetType(s_22) == AT_LIST) && ((ATermList) s_22 != ATempty)))
                        {
                          j_22 = ATgetFirst((ATermList) s_22);
                          k_22 = (ATerm) ATgetNext((ATermList) s_22);
                          w_21 :
                          if(((ATermList) k_22 == ATempty))
                            {
                              x_21 :
                              {
                                ATerm t_22 = NULL;
                                if(((g_22 != NULL) && (g_22 != p_22)))
                                  _fail(p_22);
                                else
                                  g_22 = p_22;
                                {
                                  if(((t_22 != NULL) && (t_22 != j_22)))
                                    _fail(j_22);
                                  else
                                    t_22 = j_22;
                                  {
                                    t = not_null(g_22);
                                    t = is_list_0(t);
                                    t = not_null(t_22);
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
                      if(match_cons(o_22, sym_cf_1))
                        {
                          p_22 = ATgetArgument(o_22, 0);
                          y_21 :
                          if(match_cons(g_22, sym_cf_1))
                            {
                              h_22 = ATgetArgument(g_22, 0);
                              z_21 :
                              if(match_cons(p_22, sym_opt_1))
                                {
                                  q_22 = ATgetArgument(p_22, 0);
                                  a_22 :
                                  if(((ATgetType(s_22) == AT_LIST) && ((ATermList) s_22 != ATempty)))
                                    {
                                      j_22 = ATgetFirst((ATermList) s_22);
                                      k_22 = (ATerm) ATgetNext((ATermList) s_22);
                                      b_22 :
                                      if(((ATermList) k_22 == ATempty))
                                        {
                                          {
                                            ATerm w_22 = NULL;
                                            if(((h_22 != NULL) && (h_22 != q_22)))
                                              _fail(q_22);
                                            else
                                              h_22 = q_22;
                                            {
                                              if(((w_22 != NULL) && (w_22 != j_22)))
                                                _fail(j_22);
                                              else
                                                w_22 = j_22;
                                              {
                                                t = not_null(h_22);
                                                t = is_list_0(t);
                                                t = not_null(w_22);
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
              if(((ATermList) n_22 == ATempty))
                {
                  c_22 :
                  if(match_cons(o_22, sym_opt_1))
                    {
                      p_22 = ATgetArgument(o_22, 0);
                      d_22 :
                      if(((ATermList) s_22 == ATempty))
                        {
                          {
                            t = not_null(p_22);
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
                      if(match_cons(o_22, sym_cf_1))
                        {
                          p_22 = ATgetArgument(o_22, 0);
                          e_22 :
                          if(match_cons(p_22, sym_opt_1))
                            {
                              q_22 = ATgetArgument(p_22, 0);
                              f_22 :
                              if(((ATermList) s_22 == ATempty))
                                {
                                  {
                                    t = not_null(q_22);
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
  ATerm h_12 = t;
  int i_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm b_3 (ATerm t)
        {
          ATerm j_12 = t;
          int k_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_3 (ATerm t)
              {
                t = opt_1(t, layout_0);
                return(t);
              }
              t = cf_1(t, c_3);
              LocalPopChoice(k_12);
            }
          else
            {
              t = j_12;
              t = lit_1(t, _id);
            }
          return(t);
        }
        t = prod_3(t, _id, b_3, _id);
        return(t);
      }
      t = appl_2(t, a_3, _id);
      LocalPopChoice(i_12);
    }
  else
    {
      t = h_12;
      {
        ATerm d_3 (ATerm t)
        {
          t = opt_1(t, layout_0);
          return(t);
        }
        t = cf_1(t, d_3);
      }
    }
  return(t);
}
ATerm implodeAsfix_0 (ATerm t)
{
  t = PT_0(t);
  {
    ATerm d_23 (ATerm t)
    {
      ATerm l_12 = t;
      int m_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = implode_lexical_0(t);
          LocalPopChoice(m_12);
        }
      else
        {
          t = l_12;
          {
            ATerm n_12 = t;
            int o_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm p_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_layout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = p_12;
                      }
                    return(t);
                  }
                  t = filter_1(t, f_3);
                  return(t);
                }
                t = appl_2(t, _id, e_3);
                {
                  ATerm t_12 = t;
                  int u_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = OptList_0(t);
                      t = d_23(t);
                      LocalPopChoice(u_12);
                    }
                  else
                    {
                      t = t_12;
                      {
                        ATerm v_12 = t;
                        int o_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = ReplCons_1(t, d_23);
                            LocalPopChoice(o_13);
                          }
                        else
                          {
                            t = v_12;
                            {
                              ATerm p_13 = t;
                              int q_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Inj_0(t);
                                  t = d_23(t);
                                  LocalPopChoice(q_13);
                                }
                              else
                                {
                                  t = p_13;
                                  {
                                    ATerm r_13 = t;
                                    int s_13 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Tuple_0(t);
                                        t = d_23(t);
                                        LocalPopChoice(s_13);
                                      }
                                    else
                                      {
                                        t = r_13;
                                        {
                                          t = FlatAlt_0(t);
                                          t = d_23(t);
                                        }
                                      }
                                  }
                                }
                            }
                          }
                      }
                    }
                }
                LocalPopChoice(o_12);
              }
            else
              {
                t = n_12;
                {
                  ATerm t_13 = t;
                  int u_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = list_1(t, d_23);
                        return(t);
                      }
                      t = amb_1(t, g_3);
                      LocalPopChoice(u_13);
                    }
                  else
                    {
                      t = t_13;
                      t = _all(t, d_23);
                    }
                }
              }
          }
        }
      return(t);
    }
    t = d_23(t);
  }
  return(t);
}
ATerm PT_0 (ATerm t)
{
  ATerm g_23 = NULL,h_23 = NULL,i_23 = NULL;
  g_23 = t;
  f_23 :
  if(match_cons(g_23, sym_parsetree_2))
    {
      h_23 = ATgetArgument(g_23, 0);
      i_23 = ATgetArgument(g_23, 1);
      t = not_null(h_23);
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
  ATerm p_23 = NULL;
  p_23 = t;
  o_23 :
  if(match_cons(p_23, sym_RemovePT_0))
    {
      ATerm r_23 = NULL,t_23 = NULL;
      ATerm v_13;
      v_13 = t;
      {
        ATerm s_23 = NULL;
        t = SSLgetAnnotations(not_null(p_23));
        {
          s_23 = t;
          if(((r_23 != NULL) && (r_23 != s_23)))
            _fail(s_23);
          else
            r_23 = s_23;
        }
      }
      t = v_13;
      {
        ATerm u_23 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemovePT_0), not_null(r_23));
        {
          u_23 = t;
          if(((t_23 != NULL) && (t_23 != u_23)))
            _fail(u_23);
          else
            t_23 = u_23;
        }
        t = not_null(t_23);
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
  ATerm i_24 = NULL,j_24 = NULL,k_24 = NULL,l_24 = NULL,m_24 = NULL,n_24 = NULL,o_24 = NULL,p_24 = NULL;
  i_24 = t;
  e_24 :
  if(match_cons(i_24, sym_appl_2))
    {
      j_24 = ATgetArgument(i_24, 0);
      p_24 = ATgetArgument(i_24, 1);
      f_24 :
      if(match_cons(j_24, sym_prod_3))
        {
          k_24 = ATgetArgument(j_24, 0);
          l_24 = ATgetArgument(j_24, 1);
          o_24 = ATgetArgument(j_24, 2);
          g_24 :
          if(match_cons(l_24, sym_seq_1))
            {
              m_24 = ATgetArgument(l_24, 0);
              {
                ATerm r_24 = NULL,t_24 = NULL;
                ATerm k_14;
                k_14 = t;
                {
                  ATerm s_24 = NULL;
                  t = term_l_14;
                  {
                    s_24 = t;
                    if(((r_24 != NULL) && (r_24 != s_24)))
                      _fail(s_24);
                    else
                      r_24 = s_24;
                  }
                }
                t = k_14;
                {
                  t = SSL_mkterm(not_null(r_24), not_null(p_24));
                  {
                    t_24 = t;
                    t = not_null(t_24);
                  }
                }
              }
            }
          else
            {
              if(match_cons(l_24, sym_cf_1))
                {
                  m_24 = ATgetArgument(l_24, 0);
                  h_24 :
                  if(match_cons(m_24, sym_seq_1))
                    {
                      n_24 = ATgetArgument(m_24, 0);
                      {
                        ATerm w_24 = NULL,y_24 = NULL;
                        ATerm m_14;
                        m_14 = t;
                        {
                          ATerm x_24 = NULL;
                          t = term_l_14;
                          {
                            x_24 = t;
                            if(((w_24 != NULL) && (w_24 != x_24)))
                              _fail(x_24);
                            else
                              w_24 = x_24;
                          }
                        }
                        t = m_14;
                        {
                          t = SSL_mkterm(not_null(w_24), not_null(p_24));
                          {
                            y_24 = t;
                            t = not_null(y_24);
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
  ATerm h_3 (ATerm t)
  {
    t = try_1(t, Tuple_0);
    return(t);
  }
  t = topdown_1(t, h_3);
  return(t);
}
ATerm RemoveSeq_0 (ATerm t)
{
  ATerm k_25 = NULL;
  k_25 = t;
  j_25 :
  if(match_cons(k_25, sym_RemoveSeq_0))
    {
      ATerm m_25 = NULL,o_25 = NULL;
      ATerm n_14;
      n_14 = t;
      {
        ATerm n_25 = NULL;
        t = SSLgetAnnotations(not_null(k_25));
        {
          n_25 = t;
          if(((m_25 != NULL) && (m_25 != n_25)))
            _fail(n_25);
          else
            m_25 = n_25;
        }
      }
      t = n_14;
      {
        ATerm p_25 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveSeq_0), not_null(m_25));
        {
          p_25 = t;
          if(((o_25 != NULL) && (o_25 != p_25)))
            _fail(p_25);
          else
            o_25 = p_25;
        }
        t = not_null(o_25);
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
  ATerm v_25 = NULL,w_25 = NULL;
  v_25 = t;
  u_25 :
  if(match_cons(v_25, sym_Ins_1))
    {
      w_25 = ATgetArgument(v_25, 0);
      t = (ATerm) ATinsert(ATempty, not_null(w_25));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm CTC2_0 (ATerm t)
{
  ATerm g_26 = NULL,h_26 = NULL,i_26 = NULL,j_26 = NULL,k_26 = NULL,l_26 = NULL,m_26 = NULL;
  j_26 = t;
  d_26 :
  if(match_cons(j_26, sym_Conc_2))
    {
      k_26 = ATgetArgument(j_26, 0);
      l_26 = ATgetArgument(j_26, 1);
      e_26 :
      if(match_cons(k_26, sym_Ins_1))
        {
          i_26 = ATgetArgument(k_26, 0);
          f_26 :
          if(((ATgetType(l_26) == AT_LIST) && ((ATermList) l_26 != ATempty)))
            {
              h_26 = ATgetFirst((ATermList) l_26);
              g_26 = (ATerm) ATgetNext((ATermList) l_26);
              t = (ATerm) ATinsert(ATinsert(CheckATermList(not_null(g_26)), not_null(h_26)), not_null(i_26));
            }
          else
            {
              if(match_cons(l_26, sym_Ins_1))
                {
                  h_26 = ATgetArgument(l_26, 0);
                  t = (ATerm) ATinsert(ATinsert(ATempty, not_null(h_26)), not_null(i_26));
                }
              else
                {
                  if(((ATermList) l_26 == ATempty))
                    {
                      t = (ATerm) ATinsert(ATempty, not_null(i_26));
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
      if(match_cons(j_26, sym_Conc_3))
        {
          k_26 = ATgetArgument(j_26, 0);
          l_26 = ATgetArgument(j_26, 1);
          m_26 = ATgetArgument(j_26, 2);
          {
            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(m_26)), (ATerm) ATinsert(ATempty, not_null(l_26))), not_null(k_26));
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
ATerm Conc_2 (ATerm t, ATerm n_79 (ATerm), ATerm o_79 (ATerm))
{
  ATerm g_27 = NULL,h_27 = NULL,i_27 = NULL;
  g_27 = t;
  f_27 :
  if(match_cons(g_27, sym_Conc_2))
    {
      h_27 = ATgetArgument(g_27, 0);
      i_27 = ATgetArgument(g_27, 1);
      {
        ATerm m_27 = NULL,o_27 = NULL;
        ATerm n_27 = NULL;
        t = SSLgetAnnotations(not_null(g_27));
        {
          n_27 = t;
          if(((m_27 != NULL) && (m_27 != n_27)))
            _fail(n_27);
          else
            m_27 = n_27;
        }
        {
          t = not_null(h_27);
          {
            ATerm q_27 = NULL;
            t = n_79(t);
            {
              o_27 = t;
              {
                t = not_null(i_27);
                {
                  ATerm s_27 = NULL;
                  t = o_79(t);
                  {
                    q_27 = t;
                    {
                      ATerm t_27 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Conc_2, not_null(o_27), not_null(q_27)), not_null(m_27));
                      {
                        t_27 = t;
                        if(((s_27 != NULL) && (s_27 != t_27)))
                          _fail(t_27);
                        else
                          s_27 = t_27;
                      }
                      t = not_null(s_27);
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
  ATerm c_28 = NULL,d_28 = NULL,e_28 = NULL;
  c_28 = t;
  b_28 :
  if(((ATgetType(c_28) == AT_LIST) && ((ATermList) c_28 != ATempty)))
    {
      d_28 = ATgetFirst((ATermList) c_28);
      e_28 = (ATerm) ATgetNext((ATermList) c_28);
      t = (ATerm) ATmakeAppl(sym_Conc_2, (ATerm)ATmakeAppl(sym_Ins_1, not_null(d_28)), not_null(e_28));
    }
  else
    {
      if(match_cons(c_28, sym_Snoc_2))
        {
          d_28 = ATgetArgument(c_28, 0);
          e_28 = ATgetArgument(c_28, 1);
          t = (ATerm) ATmakeAppl(sym_Conc_2, not_null(d_28), (ATerm) ATmakeAppl(sym_Ins_1, not_null(e_28)));
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
  ATerm u_28 = NULL,v_28 = NULL,w_28 = NULL,x_28 = NULL,y_28 = NULL,z_28 = NULL,a_29 = NULL;
  ATerm l_29 (ATerm t)
  {
    t = not_null(x_28);
    return(t);
  }
  ATerm m_29 (ATerm t)
  {
    t = not_null(a_29);
    return(t);
  }
  ATerm n_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Conc_3, not_null(y_28), not_null(z_28), (ATerm) ATmakeAppl(sym_Conc_3, not_null(u_28), not_null(a_29), not_null(v_28)));
    return(t);
  }
  ATerm o_29 (ATerm t)
  {
    t = (ATerm) ATmakeAppl(sym_Conc_2, not_null(y_28), (ATerm) ATmakeAppl(sym_Conc_2, not_null(z_28), not_null(a_29)));
    return(t);
  }
  w_28 = t;
  p_28 :
  if(match_cons(w_28, sym_Conc_2))
    {
      x_28 = ATgetArgument(w_28, 0);
      a_29 = ATgetArgument(w_28, 1);
      q_28 :
      if(((ATermList) a_29 == ATempty))
        {
          r_28 :
          if(((ATermList) x_28 == ATempty))
            {
              {
                ATerm u_14 = t;
                int v_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = l_29(t);
                    LocalPopChoice(v_14);
                  }
                else
                  {
                    t = u_14;
                    t = m_29(t);
                  }
              }
            }
          else
            {
              if(match_cons(x_28, sym_Conc_2))
                {
                  y_28 = ATgetArgument(x_28, 0);
                  z_28 = ATgetArgument(x_28, 1);
                  {
                    ATerm w_14 = t;
                    int d_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = l_29(t);
                        LocalPopChoice(d_15);
                      }
                    else
                      {
                        t = w_14;
                        t = o_29(t);
                      }
                  }
                }
              else
                {
                  t = l_29(t);
                }
            }
        }
      else
        {
          s_28 :
          if(((ATermList) x_28 == ATempty))
            {
              t = m_29(t);
            }
          else
            {
              if(match_cons(x_28, sym_Conc_2))
                {
                  y_28 = ATgetArgument(x_28, 0);
                  z_28 = ATgetArgument(x_28, 1);
                  t = o_29(t);
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
      if(match_cons(w_28, sym_Conc_3))
        {
          x_28 = ATgetArgument(w_28, 0);
          a_29 = ATgetArgument(w_28, 1);
          v_28 = ATgetArgument(w_28, 2);
          t_28 :
          if(match_cons(x_28, sym_Conc_3))
            {
              y_28 = ATgetArgument(x_28, 0);
              z_28 = ATgetArgument(x_28, 1);
              u_28 = ATgetArgument(x_28, 2);
              t = n_29(t);
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
  ATerm i_3 (ATerm t)
  {
    ATerm e_15 = t;
    int f_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CTC0_0(t);
        LocalPopChoice(f_15);
      }
    else
      {
        t = e_15;
        {
          ATerm g_15 = t;
          int h_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC1_0(t);
              LocalPopChoice(h_15);
            }
          else
            {
              t = g_15;
              t = Conc_2(t, CTC0_0, _id);
            }
        }
      }
    return(t);
  }
  t = repeat_1(t, i_3);
  {
    ATerm i_15 = t;
    int j_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2(t, _id, conc_to_cons_0);
        LocalPopChoice(j_15);
      }
    else
      {
        t = i_15;
        t = _all(t, conc_to_cons_0);
      }
    {
      ATerm j_3 (ATerm t)
      {
        ATerm k_15 = t;
        int l_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC2_0(t);
            t = Cons_2(t, conc_to_cons_0, _id);
            LocalPopChoice(l_15);
          }
        else
          {
            t = k_15;
            t = CTC3_0(t);
          }
        return(t);
      }
      t = try_1(t, j_3);
    }
  }
  return(t);
}
ATerm Rename_Keyword_0 (ATerm t)
{
  ATerm b_30 = NULL;
  b_30 = t;
  w_29 :
  if(match_string(b_30, "sorts"))
    {
      t = term_m_15;
    }
  else
    {
      if(match_string(b_30, "imports"))
        {
          t = term_d_16;
        }
      else
        {
          if(match_string(b_30, "id"))
            {
              t = term_e_16;
            }
          else
            {
              if(match_string(b_30, "hiddens"))
                {
                  t = term_f_16;
                }
              else
                {
                  if(match_string(b_30, "exports"))
                    {
                      t = term_g_16;
                    }
                  else
                    {
                      if(match_string(b_30, "module"))
                        {
                          t = term_h_16;
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
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,d_33 = NULL,e_33 = NULL,f_33 = NULL,g_33 = NULL,h_33 = NULL,i_33 = NULL,k_33 = NULL;
  b_32 = t;
  u_30 :
  if(match_cons(b_32, sym_prod_3))
    {
      c_32 = ATgetArgument(b_32, 0);
      f_33 = ATgetArgument(b_32, 1);
      k_33 = ATgetArgument(b_32, 2);
      v_30 :
      if(((ATgetType(c_32) == AT_LIST) && ((ATermList) c_32 != ATempty)))
        {
          d_32 = ATgetFirst((ATermList) c_32);
          e_33 = (ATerm) ATgetNext((ATermList) c_32);
          w_30 :
          if(((ATermList) e_33 == ATempty))
            {
              x_30 :
              if(match_cons(f_33, sym_opt_1))
                {
                  g_33 = ATgetArgument(f_33, 0);
                  y_30 :
                  {
                    if(((d_32 != NULL) && (d_32 != g_33)))
                      _fail(g_33);
                    else
                      d_32 = g_33;
                    t = term_i_16;
                  }
                }
              else
                {
                  if(match_cons(f_33, sym_cf_1))
                    {
                      g_33 = ATgetArgument(f_33, 0);
                      z_30 :
                      if(match_cons(d_32, sym_cf_1))
                        {
                          d_33 = ATgetArgument(d_32, 0);
                          a_31 :
                          if(match_cons(g_33, sym_opt_1))
                            {
                              h_33 = ATgetArgument(g_33, 0);
                              {
                                if(((d_33 != NULL) && (d_33 != h_33)))
                                  _fail(h_33);
                                else
                                  d_33 = h_33;
                                t = term_i_16;
                              }
                            }
                          else
                            {
                              if(match_cons(g_33, sym_iter_1))
                                {
                                  h_33 = ATgetArgument(g_33, 0);
                                  {
                                    if(((d_33 != NULL) && (d_33 != h_33)))
                                      _fail(h_33);
                                    else
                                      d_33 = h_33;
                                    t = term_r_16;
                                  }
                                }
                              else
                                {
                                  if(match_cons(g_33, sym_iter_sep_2))
                                    {
                                      h_33 = ATgetArgument(g_33, 0);
                                      i_33 = ATgetArgument(g_33, 1);
                                      {
                                        if(((d_33 != NULL) && (d_33 != h_33)))
                                          _fail(h_33);
                                        else
                                          d_33 = h_33;
                                        t = term_r_16;
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
                      if(match_cons(f_33, sym_iter_1))
                        {
                          g_33 = ATgetArgument(f_33, 0);
                          b_31 :
                          {
                            if(((d_32 != NULL) && (d_32 != g_33)))
                              _fail(g_33);
                            else
                              d_32 = g_33;
                            t = term_r_16;
                          }
                        }
                      else
                        {
                          if(match_cons(f_33, sym_iter_sep_2))
                            {
                              g_33 = ATgetArgument(f_33, 0);
                              a_32 = ATgetArgument(f_33, 1);
                              c_31 :
                              {
                                if(((d_32 != NULL) && (d_32 != g_33)))
                                  _fail(g_33);
                                else
                                  d_32 = g_33;
                                t = term_r_16;
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
              if(((ATgetType(e_33) == AT_LIST) && ((ATermList) e_33 != ATempty)))
                {
                  s_31 = ATgetFirst((ATermList) e_33);
                  t_31 = (ATerm) ATgetNext((ATermList) e_33);
                  d_31 :
                  if(((ATermList) t_31 == ATempty))
                    {
                      e_31 :
                      if(match_cons(f_33, sym_iter_1))
                        {
                          g_33 = ATgetArgument(f_33, 0);
                          f_31 :
                          t = term_s_16;
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                  else
                    {
                      if(((ATgetType(t_31) == AT_LIST) && ((ATermList) t_31 != ATempty)))
                        {
                          u_31 = ATgetFirst((ATermList) t_31);
                          v_31 = (ATerm) ATgetNext((ATermList) t_31);
                          g_31 :
                          if(((ATermList) v_31 == ATempty))
                            {
                              h_31 :
                              if(match_cons(f_33, sym_iter_sep_2))
                                {
                                  g_33 = ATgetArgument(f_33, 0);
                                  a_32 = ATgetArgument(f_33, 1);
                                  i_31 :
                                  t = term_s_16;
                                }
                              else
                                {
                                  if(match_cons(f_33, sym_cf_1))
                                    {
                                      g_33 = ATgetArgument(f_33, 0);
                                      j_31 :
                                      if(match_cons(g_33, sym_iter_1))
                                        {
                                          h_33 = ATgetArgument(g_33, 0);
                                          k_31 :
                                          t = term_s_16;
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
                              if(((ATgetType(v_31) == AT_LIST) && ((ATermList) v_31 != ATempty)))
                                {
                                  w_31 = ATgetFirst((ATermList) v_31);
                                  x_31 = (ATerm) ATgetNext((ATermList) v_31);
                                  l_31 :
                                  if(((ATgetType(x_31) == AT_LIST) && ((ATermList) x_31 != ATempty)))
                                    {
                                      y_31 = ATgetFirst((ATermList) x_31);
                                      z_31 = (ATerm) ATgetNext((ATermList) x_31);
                                      m_31 :
                                      if(((ATermList) z_31 == ATempty))
                                        {
                                          n_31 :
                                          if(match_cons(f_33, sym_cf_1))
                                            {
                                              g_33 = ATgetArgument(f_33, 0);
                                              o_31 :
                                              if(match_cons(g_33, sym_iter_sep_2))
                                                {
                                                  h_33 = ATgetArgument(g_33, 0);
                                                  i_33 = ATgetArgument(g_33, 1);
                                                  p_31 :
                                                  t = term_s_16;
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
          if(((ATermList) c_32 == ATempty))
            {
              q_31 :
              if(match_cons(f_33, sym_opt_1))
                {
                  g_33 = ATgetArgument(f_33, 0);
                  t = term_v_16;
                }
              else
                {
                  if(match_cons(f_33, sym_cf_1))
                    {
                      g_33 = ATgetArgument(f_33, 0);
                      r_31 :
                      if(match_cons(g_33, sym_opt_1))
                        {
                          h_33 = ATgetArgument(g_33, 0);
                          t = term_v_16;
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
  ATerm n_34 = NULL,o_34 = NULL,p_34 = NULL,q_34 = NULL;
  n_34 = t;
  m_34 :
  if(match_cons(n_34, sym_prod_3))
    {
      o_34 = ATgetArgument(n_34, 0);
      p_34 = ATgetArgument(n_34, 1);
      q_34 = ATgetArgument(n_34, 2);
      {
        ATerm s_34 = NULL;
        t = not_null(q_34);
        {
          ATerm k_3 (ATerm t)
          {
            ATerm t_34 = NULL,u_34 = NULL;
            t_34 = t;
            l_34 :
            if(match_cons(t_34, sym_cons_1))
              {
                u_34 = ATgetArgument(t_34, 0);
                if(((s_34 != NULL) && (s_34 != u_34)))
                  _fail(u_34);
                else
                  s_34 = u_34;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = oncetd_1(t, k_3);
        }
        t = not_null(s_34);
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
  ATerm b_35 = NULL,c_35 = NULL,d_35 = NULL;
  b_35 = t;
  a_35 :
  if(match_cons(b_35, sym_appl_2))
    {
      c_35 = ATgetArgument(b_35, 0);
      d_35 = ATgetArgument(b_35, 1);
      {
        ATerm g_35 = NULL,i_35 = NULL;
        ATerm w_16;
        w_16 = t;
        {
          ATerm h_35 = NULL;
          t = not_null(c_35);
          {
            ATerm x_16 = t;
            int y_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Constr0_0(t);
                LocalPopChoice(y_16);
              }
            else
              {
                t = x_16;
                t = Constr1_0(t);
              }
            {
              t = try_1(t, Rename_Keyword_0);
              {
                h_35 = t;
                if(((g_35 != NULL) && (g_35 != h_35)))
                  _fail(h_35);
                else
                  g_35 = h_35;
              }
            }
          }
        }
        t = w_16;
        {
          t = SSL_mkterm(not_null(g_35), not_null(d_35));
          {
            i_35 = t;
            t = not_null(i_35);
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
  ATerm v_35 = NULL,w_35 = NULL,x_35 = NULL,y_35 = NULL,z_35 = NULL,a_36 = NULL,b_36 = NULL,c_36 = NULL;
  w_35 = t;
  r_35 :
  if(match_cons(w_35, sym_prod_3))
    {
      x_35 = ATgetArgument(w_35, 0);
      y_35 = ATgetArgument(w_35, 1);
      c_36 = ATgetArgument(w_35, 2);
      s_35 :
      if(((ATermList) x_35 == ATempty))
        {
          t_35 :
          if(match_cons(y_35, sym_iter_star_1))
            {
              z_35 = ATgetArgument(y_35, 0);
              t = term_z_16;
            }
          else
            {
              if(match_cons(y_35, sym_iter_star_sep_2))
                {
                  z_35 = ATgetArgument(y_35, 0);
                  v_35 = ATgetArgument(y_35, 1);
                  t = term_z_16;
                }
              else
                {
                  if(match_cons(y_35, sym_cf_1))
                    {
                      z_35 = ATgetArgument(y_35, 0);
                      u_35 :
                      if(match_cons(z_35, sym_iter_star_1))
                        {
                          a_36 = ATgetArgument(z_35, 0);
                          t = term_z_16;
                        }
                      else
                        {
                          if(match_cons(z_35, sym_iter_star_sep_2))
                            {
                              a_36 = ATgetArgument(z_35, 0);
                              b_36 = ATgetArgument(z_35, 1);
                              t = term_z_16;
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
  ATerm k_36 = NULL,s_36 = NULL,t_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym_appl_2))
    {
      s_36 = ATgetArgument(k_36, 0);
      t_36 = ATgetArgument(k_36, 1);
      {
        ATerm w_36 = NULL;
        ATerm x_36 = NULL;
        t = not_null(s_36);
        {
          t = ConstrNil_0(t);
          {
            x_36 = t;
            if(((w_36 != NULL) && (w_36 != x_36)))
              _fail(x_36);
            else
              w_36 = x_36;
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
  ATerm a_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CnsNil_0(t);
      LocalPopChoice(u_17);
    }
  else
    {
      t = a_17;
      t = CnsGeneric_0(t);
    }
  return(t);
}
ATerm replace_appl_0 (ATerm t)
{
  ATerm l_3 (ATerm t)
  {
    ATerm m_3 (ATerm t)
    {
      t = appl_2(t, _id, _id);
      t = Cns_0(t);
      return(t);
    }
    t = try_1(t, m_3);
    return(t);
  }
  t = topdown_1(t, l_3);
  t = conc_to_cons_0(t);
  return(t);
}
ATerm ReplaceAppl_0 (ATerm t)
{
  ATerm e_37 = NULL;
  e_37 = t;
  d_37 :
  if(match_cons(e_37, sym_ReplaceAppl_0))
    {
      ATerm j_37 = NULL,l_37 = NULL;
      ATerm v_17;
      v_17 = t;
      {
        ATerm k_37 = NULL;
        t = SSLgetAnnotations(not_null(e_37));
        {
          k_37 = t;
          if(((j_37 != NULL) && (j_37 != k_37)))
            _fail(k_37);
          else
            j_37 = k_37;
        }
      }
      t = v_17;
      {
        ATerm m_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ReplaceAppl_0), not_null(j_37));
        {
          m_37 = t;
          if(((l_37 != NULL) && (l_37 != m_37)))
            _fail(m_37);
          else
            l_37 = m_37;
        }
        t = not_null(l_37);
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
  ATerm n_3 (ATerm t)
  {
    t = try_1(t, FlatAlt_0);
    return(t);
  }
  t = topdown_1(t, n_3);
  return(t);
}
ATerm FlatAlt_0 (ATerm t)
{
  ATerm w_17 = t;
  int x_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_38 = NULL,l_38 = NULL,m_38 = NULL,n_38 = NULL,z_38 = NULL;
      ATerm y_17 = t;
      int z_17 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            ATerm q_3 (ATerm t)
            {
              ATerm s_3 (ATerm t)
              {
                ATerm a_18 = t;
                int b_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_3 (ATerm t)
                    {
                      ATerm o_38 = NULL;
                      o_38 = t;
                      if(((k_38 != NULL) && (k_38 != o_38)))
                        _fail(o_38);
                      else
                        k_38 = o_38;
                      return(t);
                    }
                    t = cf_1(t, t_3);
                    LocalPopChoice(b_18);
                  }
                else
                  {
                    t = a_18;
                    {
                      ATerm p_38 = NULL;
                      p_38 = t;
                      if(((k_38 != NULL) && (k_38 != p_38)))
                        _fail(p_38);
                      else
                        k_38 = p_38;
                    }
                  }
                return(t);
              }
              t = Cons_2(t, s_3, Nil_0);
              return(t);
            }
            ATerm r_3 (ATerm t)
            {
              ATerm u_3 (ATerm t)
              {
                ATerm q_38 = NULL,r_38 = NULL,s_38 = NULL;
                q_38 = t;
                t_37 :
                if(match_cons(q_38, sym_alt_2))
                  {
                    r_38 = ATgetArgument(q_38, 0);
                    s_38 = ATgetArgument(q_38, 1);
                    {
                      if(((l_38 != NULL) && (l_38 != r_38)))
                        _fail(r_38);
                      else
                        l_38 = r_38;
                      if(((m_38 != NULL) && (m_38 != s_38)))
                        _fail(s_38);
                      else
                        m_38 = s_38;
                    }
                  }
                else
                  {
                    _fail(t);
                  }
                return(t);
              }
              t = cf_1(t, u_3);
              return(t);
            }
            t = prod_3(t, q_3, r_3, _id);
            return(t);
          }
          ATerm p_3 (ATerm t)
          {
            ATerm t_38 = NULL;
            t_38 = t;
            if(((n_38 != NULL) && (n_38 != t_38)))
              _fail(t_38);
            else
              n_38 = t_38;
            return(t);
          }
          t = appl_2(t, o_3, p_3);
          LocalPopChoice(z_17);
        }
      else
        {
          t = y_17;
          {
            ATerm v_3 (ATerm t)
            {
              ATerm x_3 (ATerm t)
              {
                ATerm z_3 (ATerm t)
                {
                  ATerm u_38 = NULL;
                  u_38 = t;
                  if(((k_38 != NULL) && (k_38 != u_38)))
                    _fail(u_38);
                  else
                    k_38 = u_38;
                  return(t);
                }
                t = Cons_2(t, z_3, Nil_0);
                return(t);
              }
              ATerm y_3 (ATerm t)
              {
                ATerm a_4 (ATerm t)
                {
                  ATerm v_38 = NULL,w_38 = NULL,x_38 = NULL;
                  v_38 = t;
                  x_37 :
                  if(match_cons(v_38, sym_alt_2))
                    {
                      w_38 = ATgetArgument(v_38, 0);
                      x_38 = ATgetArgument(v_38, 1);
                      {
                        if(((l_38 != NULL) && (l_38 != w_38)))
                          _fail(w_38);
                        else
                          l_38 = w_38;
                        if(((m_38 != NULL) && (m_38 != x_38)))
                          _fail(x_38);
                        else
                          m_38 = x_38;
                      }
                    }
                  else
                    {
                      _fail(t);
                    }
                  return(t);
                }
                t = lex_1(t, a_4);
                return(t);
              }
              t = prod_3(t, x_3, y_3, _id);
              return(t);
            }
            ATerm w_3 (ATerm t)
            {
              ATerm y_38 = NULL;
              y_38 = t;
              if(((n_38 != NULL) && (n_38 != y_38)))
                _fail(y_38);
              else
                n_38 = y_38;
              return(t);
            }
            t = appl_2(t, v_3, w_3);
          }
        }
      {
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(l_38), not_null(m_38)), term_c_18);
        {
          ATerm f_40 (ATerm t)
          {
            ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
            ATerm g_40 (ATerm t)
            {
              ATerm f_39 = NULL;
              if(((k_38 != NULL) && (k_38 != b_39)))
                _fail(b_39);
              else
                k_38 = b_39;
              {
                if(((f_39 != NULL) && (f_39 != e_39)))
                  _fail(e_39);
                else
                  f_39 = e_39;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(f_39), not_null(n_38));
              }
              return(t);
            }
            ATerm h_40 (ATerm t)
            {
              ATerm i_39 = NULL;
              if(((k_38 != NULL) && (k_38 != c_39)))
                _fail(c_39);
              else
                k_38 = c_39;
              {
                if(((z_38 != NULL) && (z_38 != d_39)))
                  _fail(d_39);
                else
                  z_38 = d_39;
                {
                  if(((i_39 != NULL) && (i_39 != e_39)))
                    _fail(e_39);
                  else
                    i_39 = e_39;
                  t = (ATerm) ATmakeAppl(sym_alt_2, not_null(i_39), not_null(n_38));
                }
              }
              return(t);
            }
            ATerm i_40 (ATerm t)
            {
              ATerm o_39 = NULL;
              ATerm p_39 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_39), term_c_18);
              {
                t = add_0(t);
                {
                  p_39 = t;
                  if(((o_39 != NULL) && (o_39 != p_39)))
                    _fail(p_39);
                  else
                    o_39 = p_39;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(d_39), not_null(o_39));
                t = f_40(t);
              }
              return(t);
            }
            a_39 = t;
            e_38 :
            if(match_cons(a_39, sym__2))
              {
                b_39 = ATgetArgument(a_39, 0);
                e_39 = ATgetArgument(a_39, 1);
                f_38 :
                if(match_cons(b_39, sym_alt_2))
                  {
                    c_39 = ATgetArgument(b_39, 0);
                    d_39 = ATgetArgument(b_39, 1);
                    {
                      ATerm d_18 = t;
                      int m_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = g_40(t);
                          LocalPopChoice(m_18);
                        }
                      else
                        {
                          t = d_18;
                          {
                            ATerm n_18 = t;
                            int q_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = h_40(t);
                                LocalPopChoice(q_18);
                              }
                            else
                              {
                                t = n_18;
                                t = i_40(t);
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = g_40(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = f_40(t);
        }
      }
      LocalPopChoice(x_17);
    }
  else
    {
      t = w_17;
      {
        ATerm q_39 = NULL;
        q_39 = t;
        j_38 :
        if(match_cons(q_39, sym_FlatAlt_0))
          {
            ATerm s_39 = NULL,u_39 = NULL;
            ATerm r_18;
            r_18 = t;
            {
              ATerm t_39 = NULL;
              t = SSLgetAnnotations(not_null(q_39));
              {
                t_39 = t;
                if(((s_39 != NULL) && (s_39 != t_39)))
                  _fail(t_39);
                else
                  s_39 = t_39;
              }
            }
            t = r_18;
            {
              ATerm v_39 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatAlt_0), not_null(s_39));
              {
                v_39 = t;
                if(((u_39 != NULL) && (u_39 != v_39)))
                  _fail(v_39);
                else
                  u_39 = v_39;
              }
              t = not_null(u_39);
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
  ATerm j_41 = NULL;
  j_41 = t;
  i_41 :
  if(match_cons(j_41, sym_bracket_0))
    {
      ATerm c_19 = t;
      int i_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm l_41 = NULL,n_41 = NULL;
          ATerm j_19;
          j_19 = t;
          {
            ATerm m_41 = NULL;
            t = SSLgetAnnotations(not_null(j_41));
            {
              m_41 = t;
              if(((l_41 != NULL) && (l_41 != m_41)))
                _fail(m_41);
              else
                l_41 = m_41;
            }
          }
          t = j_19;
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
          LocalPopChoice(i_19);
        }
      else
        {
          t = c_19;
          {
            ATerm r_41 = NULL,t_41 = NULL;
            ATerm w_19;
            w_19 = t;
            {
              ATerm s_41 = NULL;
              t = SSLgetAnnotations(not_null(j_41));
              {
                s_41 = t;
                if(((r_41 != NULL) && (r_41 != s_41)))
                  _fail(s_41);
                else
                  r_41 = s_41;
              }
            }
            t = w_19;
            {
              ATerm u_41 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(r_41));
              {
                u_41 = t;
                if(((t_41 != NULL) && (t_41 != u_41)))
                  _fail(u_41);
                else
                  t_41 = u_41;
              }
              t = not_null(t_41);
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
ATerm oncetd_1 (ATerm t, ATerm w_103 (ATerm))
{
  ATerm b_42 (ATerm t)
  {
    ATerm c_20 = t;
    int d_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = w_103(t);
        LocalPopChoice(d_20);
      }
    else
      {
        t = c_20;
        t = _one(t, b_42);
      }
    return(t);
  }
  t = b_42(t);
  return(t);
}
ATerm cons_1 (ATerm t, ATerm f_1 (ATerm))
{
  ATerm l_42 = NULL,m_42 = NULL;
  l_42 = t;
  k_42 :
  if(match_cons(l_42, sym_cons_1))
    {
      m_42 = ATgetArgument(l_42, 0);
      {
        ATerm e_20 = t;
        int f_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm p_42 = NULL,r_42 = NULL;
            ATerm q_42 = NULL;
            t = SSLgetAnnotations(not_null(l_42));
            {
              q_42 = t;
              if(((p_42 != NULL) && (p_42 != q_42)))
                _fail(q_42);
              else
                p_42 = q_42;
            }
            {
              t = not_null(m_42);
              {
                ATerm t_42 = NULL;
                t = f_1(t);
                {
                  r_42 = t;
                  {
                    ATerm u_42 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(r_42)), not_null(p_42));
                    {
                      u_42 = t;
                      if(((t_42 != NULL) && (t_42 != u_42)))
                        _fail(u_42);
                      else
                        t_42 = u_42;
                    }
                    t = not_null(t_42);
                  }
                }
              }
            }
            LocalPopChoice(f_20);
          }
        else
          {
            t = e_20;
            {
              ATerm x_42 = NULL,z_42 = NULL;
              ATerm y_42 = NULL;
              t = SSLgetAnnotations(not_null(l_42));
              {
                y_42 = t;
                if(((x_42 != NULL) && (x_42 != y_42)))
                  _fail(y_42);
                else
                  x_42 = y_42;
              }
              {
                t = not_null(m_42);
                {
                  ATerm b_43 = NULL;
                  t = f_1(t);
                  {
                    z_42 = t;
                    {
                      ATerm c_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(z_42)), not_null(x_42));
                      {
                        c_43 = t;
                        if(((b_43 != NULL) && (b_43 != c_43)))
                          _fail(c_43);
                        else
                          b_43 = c_43;
                      }
                      t = not_null(b_43);
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
ATerm lex_1 (ATerm t, ATerm e_1 (ATerm))
{
  ATerm w_43 = NULL,c_44 = NULL;
  w_43 = t;
  v_43 :
  if(match_cons(w_43, sym_lex_1))
    {
      c_44 = ATgetArgument(w_43, 0);
      {
        ATerm m_20 = t;
        int q_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_44 = NULL,h_44 = NULL;
            ATerm g_44 = NULL;
            t = SSLgetAnnotations(not_null(w_43));
            {
              g_44 = t;
              if(((f_44 != NULL) && (f_44 != g_44)))
                _fail(g_44);
              else
                f_44 = g_44;
            }
            {
              t = not_null(c_44);
              {
                ATerm j_44 = NULL;
                t = e_1(t);
                {
                  h_44 = t;
                  {
                    ATerm k_44 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(h_44)), not_null(f_44));
                    {
                      k_44 = t;
                      if(((j_44 != NULL) && (j_44 != k_44)))
                        _fail(k_44);
                      else
                        j_44 = k_44;
                    }
                    t = not_null(j_44);
                  }
                }
              }
            }
            LocalPopChoice(q_20);
          }
        else
          {
            t = m_20;
            {
              ATerm n_44 = NULL,p_44 = NULL;
              ATerm o_44 = NULL;
              t = SSLgetAnnotations(not_null(w_43));
              {
                o_44 = t;
                if(((n_44 != NULL) && (n_44 != o_44)))
                  _fail(o_44);
                else
                  n_44 = o_44;
              }
              {
                t = not_null(c_44);
                {
                  ATerm r_44 = NULL;
                  t = e_1(t);
                  {
                    p_44 = t;
                    {
                      ATerm s_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(p_44)), not_null(n_44));
                      {
                        s_44 = t;
                        if(((r_44 != NULL) && (r_44 != s_44)))
                          _fail(s_44);
                        else
                          r_44 = s_44;
                      }
                      t = not_null(r_44);
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
ATerm sort_1 (ATerm t, ATerm d_1 (ATerm))
{
  ATerm m_45 = NULL,n_45 = NULL;
  m_45 = t;
  l_45 :
  if(match_cons(m_45, sym_sort_1))
    {
      n_45 = ATgetArgument(m_45, 0);
      {
        ATerm r_20 = t;
        int s_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_45 = NULL,s_45 = NULL;
            ATerm r_45 = NULL;
            t = SSLgetAnnotations(not_null(m_45));
            {
              r_45 = t;
              if(((q_45 != NULL) && (q_45 != r_45)))
                _fail(r_45);
              else
                q_45 = r_45;
            }
            {
              t = not_null(n_45);
              {
                ATerm u_45 = NULL;
                t = d_1(t);
                {
                  s_45 = t;
                  {
                    ATerm v_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(s_45)), not_null(q_45));
                    {
                      v_45 = t;
                      if(((u_45 != NULL) && (u_45 != v_45)))
                        _fail(v_45);
                      else
                        u_45 = v_45;
                    }
                    t = not_null(u_45);
                  }
                }
              }
            }
            LocalPopChoice(s_20);
          }
        else
          {
            t = r_20;
            {
              ATerm y_45 = NULL,a_46 = NULL;
              ATerm z_45 = NULL;
              t = SSLgetAnnotations(not_null(m_45));
              {
                z_45 = t;
                if(((y_45 != NULL) && (y_45 != z_45)))
                  _fail(z_45);
                else
                  y_45 = z_45;
              }
              {
                t = not_null(n_45);
                {
                  ATerm e_46 = NULL;
                  t = d_1(t);
                  {
                    a_46 = t;
                    {
                      ATerm f_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(a_46)), not_null(y_45));
                      {
                        f_46 = t;
                        if(((e_46 != NULL) && (e_46 != f_46)))
                          _fail(f_46);
                        else
                          e_46 = f_46;
                      }
                      t = not_null(e_46);
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
ATerm alt_2 (ATerm t, ATerm b_1 (ATerm), ATerm c_1 (ATerm))
{
  ATerm b_47 = NULL,c_47 = NULL,d_47 = NULL;
  b_47 = t;
  a_47 :
  if(match_cons(b_47, sym_alt_2))
    {
      c_47 = ATgetArgument(b_47, 0);
      d_47 = ATgetArgument(b_47, 1);
      {
        ATerm t_20 = t;
        int u_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_47 = NULL,j_47 = NULL;
            ATerm i_47 = NULL;
            t = SSLgetAnnotations(not_null(b_47));
            {
              i_47 = t;
              if(((h_47 != NULL) && (h_47 != i_47)))
                _fail(i_47);
              else
                h_47 = i_47;
            }
            {
              t = not_null(c_47);
              {
                ATerm l_47 = NULL;
                t = b_1(t);
                {
                  j_47 = t;
                  {
                    t = not_null(d_47);
                    {
                      ATerm n_47 = NULL;
                      t = c_1(t);
                      {
                        l_47 = t;
                        {
                          ATerm o_47 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(j_47), not_null(l_47)), not_null(h_47));
                          {
                            o_47 = t;
                            if(((n_47 != NULL) && (n_47 != o_47)))
                              _fail(o_47);
                            else
                              n_47 = o_47;
                          }
                          t = not_null(n_47);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(u_20);
          }
        else
          {
            t = t_20;
            {
              ATerm s_47 = NULL,u_47 = NULL;
              ATerm t_47 = NULL;
              t = SSLgetAnnotations(not_null(b_47));
              {
                t_47 = t;
                if(((s_47 != NULL) && (s_47 != t_47)))
                  _fail(t_47);
                else
                  s_47 = t_47;
              }
              {
                t = not_null(c_47);
                {
                  ATerm z_47 = NULL;
                  t = b_1(t);
                  {
                    u_47 = t;
                    {
                      t = not_null(d_47);
                      {
                        ATerm b_48 = NULL;
                        t = c_1(t);
                        {
                          z_47 = t;
                          {
                            ATerm c_48 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(u_47), not_null(z_47)), not_null(s_47));
                            {
                              c_48 = t;
                              if(((b_48 != NULL) && (b_48 != c_48)))
                                _fail(c_48);
                              else
                                b_48 = c_48;
                            }
                            t = not_null(b_48);
                          }
                        }
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
  ATerm v_20 = t;
  int a_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1(t, _id);
      LocalPopChoice(a_21);
    }
  else
    {
      t = v_20;
      {
        ATerm b_21 = t;
        int h_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = cf_1(t, injective_alt_0);
            LocalPopChoice(h_21);
          }
        else
          {
            t = b_21;
            t = alt_2(t, injective_alt_0, injective_alt_0);
          }
      }
    }
  return(t);
}
ATerm varsym_1 (ATerm t, ATerm a_1 (ATerm))
{
  ATerm x_48 = NULL,y_48 = NULL;
  x_48 = t;
  w_48 :
  if(match_cons(x_48, sym_varsym_1))
    {
      y_48 = ATgetArgument(x_48, 0);
      {
        ATerm i_21 = t;
        int j_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_49 = NULL,d_49 = NULL;
            ATerm c_49 = NULL;
            t = SSLgetAnnotations(not_null(x_48));
            {
              c_49 = t;
              if(((b_49 != NULL) && (b_49 != c_49)))
                _fail(c_49);
              else
                b_49 = c_49;
            }
            {
              t = not_null(y_48);
              {
                ATerm f_49 = NULL;
                t = a_1(t);
                {
                  d_49 = t;
                  {
                    ATerm g_49 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(d_49)), not_null(b_49));
                    {
                      g_49 = t;
                      if(((f_49 != NULL) && (f_49 != g_49)))
                        _fail(g_49);
                      else
                        f_49 = g_49;
                    }
                    t = not_null(f_49);
                  }
                }
              }
            }
            LocalPopChoice(j_21);
          }
        else
          {
            t = i_21;
            {
              ATerm j_49 = NULL,l_49 = NULL;
              ATerm k_49 = NULL;
              t = SSLgetAnnotations(not_null(x_48));
              {
                k_49 = t;
                if(((j_49 != NULL) && (j_49 != k_49)))
                  _fail(k_49);
                else
                  j_49 = k_49;
              }
              {
                t = not_null(y_48);
                {
                  ATerm n_49 = NULL;
                  t = a_1(t);
                  {
                    l_49 = t;
                    {
                      ATerm o_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(l_49)), not_null(j_49));
                      {
                        o_49 = t;
                        if(((n_49 != NULL) && (n_49 != o_49)))
                          _fail(o_49);
                        else
                          n_49 = o_49;
                      }
                      t = not_null(n_49);
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
  ATerm k_21 = t;
  int l_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm b_4 (ATerm t)
      {
        ATerm d_4 (ATerm t)
        {
          t = varsym_1(t, _id);
          return(t);
        }
        t = Cons_2(t, d_4, Nil_0);
        return(t);
      }
      ATerm c_4 (ATerm t)
      {
        ATerm m_21 = t;
        if((PushChoice() == 0))
          {
            ATerm e_4 (ATerm t)
            {
              t = cons_1(t, _id);
              return(t);
            }
            t = oncetd_1(t, e_4);
            PopChoice();
            _fail(t);
          }
        else
          {
            t = m_21;
          }
        return(t);
      }
      t = prod_3(t, b_4, _id, c_4);
      LocalPopChoice(l_21);
    }
  else
    {
      t = k_21;
      {
        ATerm n_21 = t;
        int o_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              ATerm h_4 (ATerm t)
              {
                ATerm p_21 = t;
                int u_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = sort_1(t, _id);
                    LocalPopChoice(u_22);
                  }
                else
                  {
                    t = p_21;
                    {
                      ATerm i_4 (ATerm t)
                      {
                        t = sort_1(t, _id);
                        return(t);
                      }
                      t = cf_1(t, i_4);
                    }
                  }
                return(t);
              }
              t = Cons_2(t, h_4, Nil_0);
              return(t);
            }
            ATerm g_4 (ATerm t)
            {
              ATerm v_22 = t;
              if((PushChoice() == 0))
                {
                  ATerm j_4 (ATerm t)
                  {
                    t = cons_1(t, _id);
                    return(t);
                  }
                  t = oncetd_1(t, j_4);
                  PopChoice();
                  _fail(t);
                }
              else
                {
                  t = v_22;
                }
              return(t);
            }
            t = prod_3(t, f_4, injective_alt_0, g_4);
            LocalPopChoice(o_21);
          }
        else
          {
            t = n_21;
            {
              ATerm x_22 = t;
              int y_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_4 (ATerm t)
                  {
                    ATerm n_4 (ATerm t)
                    {
                      ATerm z_22 = t;
                      if((PushChoice() == 0))
                        {
                          t = lit_1(t, _id);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = z_22;
                        }
                      return(t);
                    }
                    t = Cons_2(t, n_4, Nil_0);
                    return(t);
                  }
                  ATerm l_4 (ATerm t)
                  {
                    ATerm a_23 = t;
                    int b_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = sort_1(t, _id);
                        LocalPopChoice(b_23);
                      }
                    else
                      {
                        t = a_23;
                        {
                          ATerm c_23 = t;
                          int e_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = cf_1(t, l_4);
                              LocalPopChoice(e_23);
                            }
                          else
                            {
                              t = c_23;
                              {
                                ATerm j_23 = t;
                                int k_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = lex_1(t, l_4);
                                    LocalPopChoice(k_23);
                                  }
                                else
                                  {
                                    t = j_23;
                                    {
                                      ATerm l_23 = t;
                                      int m_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = iter_1(t, l_4);
                                          LocalPopChoice(m_23);
                                        }
                                      else
                                        {
                                          t = l_23;
                                          {
                                            ATerm n_23 = t;
                                            int q_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = iter_star_1(t, l_4);
                                                LocalPopChoice(q_23);
                                              }
                                            else
                                              {
                                                t = n_23;
                                                {
                                                  ATerm v_23 = t;
                                                  int w_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_4 (ATerm t)
                                                      {
                                                        t = lit_1(t, _id);
                                                        return(t);
                                                      }
                                                      t = iter_sep_2(t, l_4, o_4);
                                                      LocalPopChoice(w_23);
                                                    }
                                                  else
                                                    {
                                                      t = v_23;
                                                      {
                                                        ATerm p_4 (ATerm t)
                                                        {
                                                          t = lit_1(t, _id);
                                                          return(t);
                                                        }
                                                        t = iter_star_sep_2(t, l_4, p_4);
                                                      }
                                                    }
                                                }
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
                  ATerm m_4 (ATerm t)
                  {
                    ATerm x_23 = t;
                    if((PushChoice() == 0))
                      {
                        ATerm q_4 (ATerm t)
                        {
                          t = cons_1(t, _id);
                          return(t);
                        }
                        t = oncetd_1(t, q_4);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = x_23;
                      }
                    return(t);
                  }
                  t = prod_3(t, k_4, l_4, m_4);
                  LocalPopChoice(y_22);
                }
              else
                {
                  t = x_22;
                  {
                    ATerm y_23 = t;
                    int z_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL,b_51 = NULL;
                        s_50 = t;
                        z_49 :
                        if(match_cons(s_50, sym_prod_3))
                          {
                            t_50 = ATgetArgument(s_50, 0);
                            y_50 = ATgetArgument(s_50, 1);
                            b_51 = ATgetArgument(s_50, 2);
                            a_50 :
                            if(((ATgetType(t_50) == AT_LIST) && ((ATermList) t_50 != ATempty)))
                              {
                                u_50 = ATgetFirst((ATermList) t_50);
                                x_50 = (ATerm) ATgetNext((ATermList) t_50);
                                b_50 :
                                if(match_cons(u_50, sym_cf_1))
                                  {
                                    v_50 = ATgetArgument(u_50, 0);
                                    c_50 :
                                    if(match_cons(v_50, sym_iter_sep_2))
                                      {
                                        w_50 = ATgetArgument(v_50, 0);
                                        q_50 = ATgetArgument(v_50, 1);
                                        d_50 :
                                        if(((ATermList) x_50 == ATempty))
                                          {
                                            e_50 :
                                            if(match_cons(y_50, sym_cf_1))
                                              {
                                                z_50 = ATgetArgument(y_50, 0);
                                                f_50 :
                                                if(match_cons(z_50, sym_iter_star_sep_2))
                                                  {
                                                    a_51 = ATgetArgument(z_50, 0);
                                                    r_50 = ATgetArgument(z_50, 1);
                                                    g_50 :
                                                    if(match_cons(b_51, sym_no_attrs_0))
                                                      {
                                                        if(((w_50 != NULL) && (w_50 != a_51)))
                                                          _fail(a_51);
                                                        else
                                                          w_50 = a_51;
                                                        if(((q_50 != NULL) && (q_50 != r_50)))
                                                          _fail(r_50);
                                                        else
                                                          q_50 = r_50;
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
                                        if(match_cons(v_50, sym_iter_1))
                                          {
                                            w_50 = ATgetArgument(v_50, 0);
                                            h_50 :
                                            if(((ATermList) x_50 == ATempty))
                                              {
                                                i_50 :
                                                if(match_cons(y_50, sym_cf_1))
                                                  {
                                                    z_50 = ATgetArgument(y_50, 0);
                                                    j_50 :
                                                    if(match_cons(z_50, sym_iter_star_1))
                                                      {
                                                        a_51 = ATgetArgument(z_50, 0);
                                                        k_50 :
                                                        if(match_cons(b_51, sym_no_attrs_0))
                                                          {
                                                            if(((w_50 != NULL) && (w_50 != a_51)))
                                                              _fail(a_51);
                                                            else
                                                              w_50 = a_51;
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
                        LocalPopChoice(z_23);
                      }
                    else
                      {
                        t = y_23;
                        {
                          ATerm a_24 = t;
                          int b_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_4 (ATerm t)
                              {
                                ATerm s_4 (ATerm t)
                                {
                                  ATerm c_24 = t;
                                  int d_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm f_51 = NULL;
                                      f_51 = t;
                                      l_50 :
                                      if(!(match_string(f_51, "bracket")))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(d_24);
                                    }
                                  else
                                    {
                                      t = c_24;
                                      t = bracket_0(t);
                                    }
                                  return(t);
                                }
                                t = oncetd_1(t, s_4);
                                return(t);
                              }
                              t = prod_3(t, _id, _id, r_4);
                              LocalPopChoice(b_24);
                            }
                          else
                            {
                              t = a_24;
                              {
                                ATerm g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL,k_51 = NULL;
                                g_51 = t;
                                m_50 :
                                if(match_cons(g_51, sym_prod_3))
                                  {
                                    h_51 = ATgetArgument(g_51, 0);
                                    i_51 = ATgetArgument(g_51, 1);
                                    k_51 = ATgetArgument(g_51, 2);
                                    n_50 :
                                    if(match_cons(i_51, sym_sort_1))
                                      {
                                        j_51 = ATgetArgument(i_51, 0);
                                        o_50 :
                                        if(match_string(j_51, "<START>"))
                                          {
                                            p_50 :
                                            if(!(match_cons(k_51, sym_no_attrs_0)))
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
  ATerm s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL,w_51 = NULL;
  s_51 = t;
  p_51 :
  if(match_cons(s_51, sym_appl_2))
    {
      t_51 = ATgetArgument(s_51, 0);
      u_51 = ATgetArgument(s_51, 1);
      q_51 :
      if(((ATgetType(u_51) == AT_LIST) && ((ATermList) u_51 != ATempty)))
        {
          v_51 = ATgetFirst((ATermList) u_51);
          w_51 = (ATerm) ATgetNext((ATermList) u_51);
          r_51 :
          if(((ATermList) w_51 == ATempty))
            {
              {
                t = not_null(t_51);
                t = injection_0(t);
                t = not_null(v_51);
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
ATerm bottomup_1 (ATerm t, ATerm h_102 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    t = bottomup_1(t, h_102);
    return(t);
  }
  t = _all(t, t_4);
  t = h_102(t);
  return(t);
}
ATerm flat_injections_0 (ATerm t)
{
  ATerm u_4 (ATerm t)
  {
    t = try_1(t, Inj_0);
    return(t);
  }
  t = bottomup_1(t, u_4);
  return(t);
}
ATerm FlatInj_0 (ATerm t)
{
  ATerm e_52 = NULL;
  e_52 = t;
  d_52 :
  if(match_cons(e_52, sym_FlatInj_0))
    {
      ATerm g_52 = NULL,i_52 = NULL;
      ATerm q_24;
      q_24 = t;
      {
        ATerm h_52 = NULL;
        t = SSLgetAnnotations(not_null(e_52));
        {
          h_52 = t;
          if(((g_52 != NULL) && (g_52 != h_52)))
            _fail(h_52);
          else
            g_52 = h_52;
        }
      }
      t = q_24;
      {
        ATerm j_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatInj_0), not_null(g_52));
        {
          j_52 = t;
          if(((i_52 != NULL) && (i_52 != j_52)))
            _fail(j_52);
          else
            i_52 = j_52;
        }
        t = not_null(i_52);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm lit_1 (ATerm t, ATerm z_0 (ATerm))
{
  ATerm y_52 = NULL,z_52 = NULL;
  y_52 = t;
  x_52 :
  if(match_cons(y_52, sym_lit_1))
    {
      z_52 = ATgetArgument(y_52, 0);
      {
        ATerm u_24 = t;
        int v_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm c_53 = NULL,e_53 = NULL;
            ATerm d_53 = NULL;
            t = SSLgetAnnotations(not_null(y_52));
            {
              d_53 = t;
              if(((c_53 != NULL) && (c_53 != d_53)))
                _fail(d_53);
              else
                c_53 = d_53;
            }
            {
              t = not_null(z_52);
              {
                ATerm g_53 = NULL;
                t = z_0(t);
                {
                  e_53 = t;
                  {
                    ATerm h_53 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(e_53)), not_null(c_53));
                    {
                      h_53 = t;
                      if(((g_53 != NULL) && (g_53 != h_53)))
                        _fail(h_53);
                      else
                        g_53 = h_53;
                    }
                    t = not_null(g_53);
                  }
                }
              }
            }
            LocalPopChoice(v_24);
          }
        else
          {
            t = u_24;
            {
              ATerm k_53 = NULL,m_53 = NULL;
              ATerm l_53 = NULL;
              t = SSLgetAnnotations(not_null(y_52));
              {
                l_53 = t;
                if(((k_53 != NULL) && (k_53 != l_53)))
                  _fail(l_53);
                else
                  k_53 = l_53;
              }
              {
                t = not_null(z_52);
                {
                  ATerm o_53 = NULL;
                  t = z_0(t);
                  {
                    m_53 = t;
                    {
                      ATerm p_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(m_53)), not_null(k_53));
                      {
                        p_53 = t;
                        if(((o_53 != NULL) && (o_53 != p_53)))
                          _fail(p_53);
                        else
                          o_53 = p_53;
                      }
                      t = not_null(o_53);
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
ATerm list_1 (ATerm t, ATerm s_97 (ATerm))
{
  ATerm y_53 (ATerm t)
  {
    ATerm z_24 = t;
    int a_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_25);
      }
    else
      {
        t = z_24;
        t = Cons_2(t, s_97, y_53);
      }
    return(t);
  }
  t = y_53(t);
  return(t);
}
ATerm seq_1 (ATerm t, ATerm o_73 (ATerm))
{
  ATerm e_54 = NULL,f_54 = NULL;
  e_54 = t;
  d_54 :
  if(match_cons(e_54, sym_seq_1))
    {
      f_54 = ATgetArgument(e_54, 0);
      {
        ATerm i_54 = NULL,l_54 = NULL;
        ATerm k_54 = NULL;
        t = SSLgetAnnotations(not_null(e_54));
        {
          k_54 = t;
          if(((i_54 != NULL) && (i_54 != k_54)))
            _fail(k_54);
          else
            i_54 = k_54;
        }
        {
          t = not_null(f_54);
          {
            ATerm n_54 = NULL;
            t = o_73(t);
            {
              l_54 = t;
              {
                ATerm o_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_seq_1, not_null(l_54)), not_null(i_54));
                {
                  o_54 = t;
                  if(((n_54 != NULL) && (n_54 != o_54)))
                    _fail(o_54);
                  else
                    n_54 = o_54;
                }
                t = not_null(n_54);
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
ATerm iter_star_sep_2 (ATerm t, ATerm x_0 (ATerm), ATerm y_0 (ATerm))
{
  ATerm e_55 = NULL,f_55 = NULL,g_55 = NULL;
  e_55 = t;
  d_55 :
  if(match_cons(e_55, sym_iter_star_sep_2))
    {
      f_55 = ATgetArgument(e_55, 0);
      g_55 = ATgetArgument(e_55, 1);
      {
        ATerm b_25 = t;
        int c_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm k_55 = NULL,m_55 = NULL;
            ATerm l_55 = NULL;
            t = SSLgetAnnotations(not_null(e_55));
            {
              l_55 = t;
              if(((k_55 != NULL) && (k_55 != l_55)))
                _fail(l_55);
              else
                k_55 = l_55;
            }
            {
              t = not_null(f_55);
              {
                ATerm o_55 = NULL;
                t = x_0(t);
                {
                  m_55 = t;
                  {
                    t = not_null(g_55);
                    {
                      ATerm q_55 = NULL;
                      t = y_0(t);
                      {
                        o_55 = t;
                        {
                          ATerm r_55 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(m_55), not_null(o_55)), not_null(k_55));
                          {
                            r_55 = t;
                            if(((q_55 != NULL) && (q_55 != r_55)))
                              _fail(r_55);
                            else
                              q_55 = r_55;
                          }
                          t = not_null(q_55);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(c_25);
          }
        else
          {
            t = b_25;
            {
              ATerm v_55 = NULL,x_55 = NULL;
              ATerm w_55 = NULL;
              t = SSLgetAnnotations(not_null(e_55));
              {
                w_55 = t;
                if(((v_55 != NULL) && (v_55 != w_55)))
                  _fail(w_55);
                else
                  v_55 = w_55;
              }
              {
                t = not_null(f_55);
                {
                  ATerm z_55 = NULL;
                  t = x_0(t);
                  {
                    x_55 = t;
                    {
                      t = not_null(g_55);
                      {
                        ATerm b_56 = NULL;
                        t = y_0(t);
                        {
                          z_55 = t;
                          {
                            ATerm c_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(x_55), not_null(z_55)), not_null(v_55));
                            {
                              c_56 = t;
                              if(((b_56 != NULL) && (b_56 != c_56)))
                                _fail(c_56);
                              else
                                b_56 = c_56;
                            }
                            t = not_null(b_56);
                          }
                        }
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
ATerm iter_star_1 (ATerm t, ATerm w_0 (ATerm))
{
  ATerm w_56 = NULL,x_56 = NULL;
  w_56 = t;
  v_56 :
  if(match_cons(w_56, sym_iter_star_1))
    {
      x_56 = ATgetArgument(w_56, 0);
      {
        ATerm d_25 = t;
        int e_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_57 = NULL,c_57 = NULL;
            ATerm b_57 = NULL;
            t = SSLgetAnnotations(not_null(w_56));
            {
              b_57 = t;
              if(((a_57 != NULL) && (a_57 != b_57)))
                _fail(b_57);
              else
                a_57 = b_57;
            }
            {
              t = not_null(x_56);
              {
                ATerm e_57 = NULL;
                t = w_0(t);
                {
                  c_57 = t;
                  {
                    ATerm f_57 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(c_57)), not_null(a_57));
                    {
                      f_57 = t;
                      if(((e_57 != NULL) && (e_57 != f_57)))
                        _fail(f_57);
                      else
                        e_57 = f_57;
                    }
                    t = not_null(e_57);
                  }
                }
              }
            }
            LocalPopChoice(e_25);
          }
        else
          {
            t = d_25;
            {
              ATerm i_57 = NULL,k_57 = NULL;
              ATerm j_57 = NULL;
              t = SSLgetAnnotations(not_null(w_56));
              {
                j_57 = t;
                if(((i_57 != NULL) && (i_57 != j_57)))
                  _fail(j_57);
                else
                  i_57 = j_57;
              }
              {
                t = not_null(x_56);
                {
                  ATerm m_57 = NULL;
                  t = w_0(t);
                  {
                    k_57 = t;
                    {
                      ATerm n_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(k_57)), not_null(i_57));
                      {
                        n_57 = t;
                        if(((m_57 != NULL) && (m_57 != n_57)))
                          _fail(n_57);
                        else
                          m_57 = n_57;
                      }
                      t = not_null(m_57);
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
ATerm iter_sep_2 (ATerm t, ATerm u_0 (ATerm), ATerm v_0 (ATerm))
{
  ATerm h_58 = NULL,i_58 = NULL,j_58 = NULL;
  h_58 = t;
  g_58 :
  if(match_cons(h_58, sym_iter_sep_2))
    {
      i_58 = ATgetArgument(h_58, 0);
      j_58 = ATgetArgument(h_58, 1);
      {
        ATerm f_25 = t;
        int g_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_58 = NULL,p_58 = NULL;
            ATerm o_58 = NULL;
            t = SSLgetAnnotations(not_null(h_58));
            {
              o_58 = t;
              if(((n_58 != NULL) && (n_58 != o_58)))
                _fail(o_58);
              else
                n_58 = o_58;
            }
            {
              t = not_null(i_58);
              {
                ATerm v_58 = NULL;
                t = u_0(t);
                {
                  p_58 = t;
                  {
                    t = not_null(j_58);
                    {
                      ATerm x_58 = NULL;
                      t = v_0(t);
                      {
                        v_58 = t;
                        {
                          ATerm y_58 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(p_58), not_null(v_58)), not_null(n_58));
                          {
                            y_58 = t;
                            if(((x_58 != NULL) && (x_58 != y_58)))
                              _fail(y_58);
                            else
                              x_58 = y_58;
                          }
                          t = not_null(x_58);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(g_25);
          }
        else
          {
            t = f_25;
            {
              ATerm c_59 = NULL,e_59 = NULL;
              ATerm d_59 = NULL;
              t = SSLgetAnnotations(not_null(h_58));
              {
                d_59 = t;
                if(((c_59 != NULL) && (c_59 != d_59)))
                  _fail(d_59);
                else
                  c_59 = d_59;
              }
              {
                t = not_null(i_58);
                {
                  ATerm g_59 = NULL;
                  t = u_0(t);
                  {
                    e_59 = t;
                    {
                      t = not_null(j_58);
                      {
                        ATerm l_59 = NULL;
                        t = v_0(t);
                        {
                          g_59 = t;
                          {
                            ATerm m_59 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(e_59), not_null(g_59)), not_null(c_59));
                            {
                              m_59 = t;
                              if(((l_59 != NULL) && (l_59 != m_59)))
                                _fail(m_59);
                              else
                                l_59 = m_59;
                            }
                            t = not_null(l_59);
                          }
                        }
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
ATerm iter_1 (ATerm t, ATerm t_0 (ATerm))
{
  ATerm k_60 = NULL,l_60 = NULL;
  k_60 = t;
  j_60 :
  if(match_cons(k_60, sym_iter_1))
    {
      l_60 = ATgetArgument(k_60, 0);
      {
        ATerm h_25 = t;
        int i_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_60 = NULL,q_60 = NULL;
            ATerm p_60 = NULL;
            t = SSLgetAnnotations(not_null(k_60));
            {
              p_60 = t;
              if(((o_60 != NULL) && (o_60 != p_60)))
                _fail(p_60);
              else
                o_60 = p_60;
            }
            {
              t = not_null(l_60);
              {
                ATerm s_60 = NULL;
                t = t_0(t);
                {
                  q_60 = t;
                  {
                    ATerm t_60 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(q_60)), not_null(o_60));
                    {
                      t_60 = t;
                      if(((s_60 != NULL) && (s_60 != t_60)))
                        _fail(t_60);
                      else
                        s_60 = t_60;
                    }
                    t = not_null(s_60);
                  }
                }
              }
            }
            LocalPopChoice(i_25);
          }
        else
          {
            t = h_25;
            {
              ATerm w_60 = NULL,t_63 = NULL;
              ATerm x_60 = NULL;
              t = SSLgetAnnotations(not_null(k_60));
              {
                x_60 = t;
                if(((w_60 != NULL) && (w_60 != x_60)))
                  _fail(x_60);
                else
                  w_60 = x_60;
              }
              {
                t = not_null(l_60);
                {
                  ATerm j_64 = NULL;
                  t = t_0(t);
                  {
                    t_63 = t;
                    {
                      ATerm k_64 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(t_63)), not_null(w_60));
                      {
                        k_64 = t;
                        if(((j_64 != NULL) && (j_64 != k_64)))
                          _fail(k_64);
                        else
                          j_64 = k_64;
                      }
                      t = not_null(j_64);
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
  ATerm l_25 = t;
  int q_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1(t, _id);
      LocalPopChoice(q_25);
    }
  else
    {
      t = l_25;
      {
        ATerm r_25 = t;
        int s_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_sep_2(t, _id, _id);
            LocalPopChoice(s_25);
          }
        else
          {
            t = r_25;
            {
              ATerm t_25 = t;
              int x_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_star_1(t, _id);
                  LocalPopChoice(x_25);
                }
              else
                {
                  t = t_25;
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
  ATerm y_25 = t;
  int z_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_66 (ATerm t)
      {
        ATerm a_26 = t;
        int b_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = list_sort_0(t);
            LocalPopChoice(b_26);
          }
        else
          {
            t = a_26;
            {
              ATerm v_4 (ATerm t)
              {
                ATerm w_4 (ATerm t)
                {
                  ATerm c_26 = t;
                  int n_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = lit_1(t, _id);
                      LocalPopChoice(n_26);
                    }
                  else
                    {
                      t = c_26;
                      {
                        ATerm o_26 = t;
                        int p_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = layout_0(t);
                            LocalPopChoice(p_26);
                          }
                        else
                          {
                            t = o_26;
                            t = k_66(t);
                          }
                      }
                    }
                  return(t);
                }
                t = list_1(t, w_4);
                return(t);
              }
              t = seq_1(t, v_4);
            }
          }
        return(t);
      }
      t = k_66(t);
      LocalPopChoice(z_25);
    }
  else
    {
      t = y_25;
      {
        ATerm h_66 = NULL,i_66 = NULL,j_66 = NULL;
        h_66 = t;
        g_66 :
        if(((ATermList) h_66 == ATempty))
          {
            {
            }
          }
        else
          {
            if(((ATgetType(h_66) == AT_LIST) && ((ATermList) h_66 != ATempty)))
              {
                i_66 = ATgetFirst((ATermList) h_66);
                j_66 = (ATerm) ATgetNext((ATermList) h_66);
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
  ATerm x_4 (ATerm t)
  {
    ATerm y_4 (ATerm t)
    {
      t = is_list_0(t);
      {
        ATerm z_4 (ATerm t)
        {
          ATerm q_26 = t;
          if((PushChoice() == 0))
            {
              t = lit_1(t, _id);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_26;
            }
          return(t);
        }
        t = filter_1(t, z_4);
      }
      return(t);
    }
    t = try_1(t, y_4);
    return(t);
  }
  t = topdown_1(t, x_4);
  return(t);
}
ATerm RemoveLit_0 (ATerm t)
{
  ATerm p_66 = NULL;
  p_66 = t;
  o_66 :
  if(match_cons(p_66, sym_RemoveLit_0))
    {
      ATerm r_66 = NULL,t_66 = NULL;
      ATerm r_26;
      r_26 = t;
      {
        ATerm s_66 = NULL;
        t = SSLgetAnnotations(not_null(p_66));
        {
          s_66 = t;
          if(((r_66 != NULL) && (r_66 != s_66)))
            _fail(s_66);
          else
            r_66 = s_66;
        }
      }
      t = r_26;
      {
        ATerm u_66 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLit_0), not_null(r_66));
        {
          u_66 = t;
          if(((t_66 != NULL) && (t_66 != u_66)))
            _fail(u_66);
          else
            t_66 = u_66;
        }
        t = not_null(t_66);
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
  ATerm a_5 (ATerm t)
  {
    t = try_1(t, FlatList_0);
    return(t);
  }
  t = topdown_1(t, a_5);
  return(t);
}
ATerm FlatList_0 (ATerm t)
{
  ATerm r_69 = NULL,s_69 = NULL,t_69 = NULL,u_69 = NULL,v_69 = NULL,w_69 = NULL,x_69 = NULL,y_69 = NULL,z_69 = NULL,a_70 = NULL,b_70 = NULL,c_70 = NULL,d_70 = NULL,e_70 = NULL,f_70 = NULL,g_70 = NULL;
  ATerm k_73 (ATerm t)
  {
    ATerm j_70 = NULL;
    ATerm u_71 = NULL;
    ATerm u_73 (ATerm t)
    {
      ATerm k_70 = NULL,l_70 = NULL,m_70 = NULL,n_70 = NULL,o_70 = NULL,p_70 = NULL,q_70 = NULL,r_70 = NULL,s_70 = NULL,t_70 = NULL,u_70 = NULL,v_70 = NULL,w_70 = NULL,x_70 = NULL,y_70 = NULL,z_70 = NULL,a_71 = NULL,b_71 = NULL,c_71 = NULL;
      k_70 = t;
      o_67 :
      if(match_cons(k_70, sym_appl_2))
        {
          l_70 = ATgetArgument(k_70, 0);
          s_70 = ATgetArgument(k_70, 1);
          p_67 :
          if(match_cons(l_70, sym_prod_3))
            {
              m_70 = ATgetArgument(l_70, 0);
              n_70 = ATgetArgument(l_70, 1);
              r_70 = ATgetArgument(l_70, 2);
              q_67 :
              if(match_cons(n_70, sym_cf_1))
                {
                  o_70 = ATgetArgument(n_70, 0);
                  r_67 :
                  if(match_cons(o_70, sym_iter_sep_2))
                    {
                      p_70 = ATgetArgument(o_70, 0);
                      q_70 = ATgetArgument(o_70, 1);
                      s_67 :
                      if(((ATgetType(s_70) == AT_LIST) && ((ATermList) s_70 != ATempty)))
                        {
                          t_70 = ATgetFirst((ATermList) s_70);
                          u_70 = (ATerm) ATgetNext((ATermList) s_70);
                          t_67 :
                          if(((ATermList) u_70 == ATempty))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(t_70));
                            }
                          else
                            {
                              if(((ATgetType(u_70) == AT_LIST) && ((ATermList) u_70 != ATempty)))
                                {
                                  v_70 = ATgetFirst((ATermList) u_70);
                                  w_70 = (ATerm) ATgetNext((ATermList) u_70);
                                  u_67 :
                                  if(((ATgetType(w_70) == AT_LIST) && ((ATermList) w_70 != ATempty)))
                                    {
                                      x_70 = ATgetFirst((ATermList) w_70);
                                      y_70 = (ATerm) ATgetNext((ATermList) w_70);
                                      v_67 :
                                      if(((ATermList) y_70 == ATempty))
                                        {
                                          {
                                            ATerm h_71 = NULL,j_71 = NULL;
                                            ATerm s_26;
                                            s_26 = t;
                                            {
                                              ATerm i_71 = NULL;
                                              t = not_null(t_70);
                                              {
                                                t = u_73(t);
                                                {
                                                  i_71 = t;
                                                  if(((h_71 != NULL) && (h_71 != i_71)))
                                                    _fail(i_71);
                                                  else
                                                    h_71 = i_71;
                                                }
                                              }
                                            }
                                            t = s_26;
                                            {
                                              ATerm k_71 = NULL;
                                              t = not_null(x_70);
                                              {
                                                t = u_73(t);
                                                {
                                                  k_71 = t;
                                                  if(((j_71 != NULL) && (j_71 != k_71)))
                                                    _fail(k_71);
                                                  else
                                                    j_71 = k_71;
                                                }
                                              }
                                              {
                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(j_71)), (ATerm) ATinsert(ATempty, not_null(v_70))), not_null(h_71));
                                                t = concat_0(t);
                                              }
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(((ATgetType(y_70) == AT_LIST) && ((ATermList) y_70 != ATempty)))
                                            {
                                              z_70 = ATgetFirst((ATermList) y_70);
                                              a_71 = (ATerm) ATgetNext((ATermList) y_70);
                                              w_67 :
                                              if(((ATgetType(a_71) == AT_LIST) && ((ATermList) a_71 != ATempty)))
                                                {
                                                  b_71 = ATgetFirst((ATermList) a_71);
                                                  c_71 = (ATerm) ATgetNext((ATermList) a_71);
                                                  x_67 :
                                                  if(((ATermList) c_71 == ATempty))
                                                    {
                                                      {
                                                        ATerm q_71 = NULL,s_71 = NULL;
                                                        ATerm t_26;
                                                        t_26 = t;
                                                        {
                                                          ATerm r_71 = NULL;
                                                          t = not_null(t_70);
                                                          {
                                                            t = u_73(t);
                                                            {
                                                              r_71 = t;
                                                              if(((q_71 != NULL) && (q_71 != r_71)))
                                                                _fail(r_71);
                                                              else
                                                                q_71 = r_71;
                                                            }
                                                          }
                                                        }
                                                        t = t_26;
                                                        {
                                                          ATerm t_71 = NULL;
                                                          t = not_null(b_71);
                                                          {
                                                            t = u_73(t);
                                                            {
                                                              t_71 = t;
                                                              if(((s_71 != NULL) && (s_71 != t_71)))
                                                                _fail(t_71);
                                                              else
                                                                s_71 = t_71;
                                                            }
                                                          }
                                                          {
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(s_71)), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(z_70)), not_null(x_70)), not_null(v_70))), not_null(q_71));
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
    t = u_73(t);
    {
      u_71 = t;
      if(((j_70 != NULL) && (j_70 != u_71)))
        _fail(u_71);
      else
        j_70 = u_71;
    }
    t = not_null(j_70);
    return(t);
  }
  ATerm l_73 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(e_70));
    return(t);
  }
  ATerm m_73 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm n_73 (ATerm t)
  {
    t = not_null(e_70);
    t = FlatList_0(t);
    return(t);
  }
  ATerm p_73 (ATerm t)
  {
    ATerm z_71 = NULL;
    ATerm c_73 = NULL;
    ATerm d_74 (ATerm t)
    {
      ATerm a_72 = NULL,b_72 = NULL,c_72 = NULL,d_72 = NULL,e_72 = NULL,f_72 = NULL,g_72 = NULL,h_72 = NULL,i_72 = NULL,j_72 = NULL,k_72 = NULL,l_72 = NULL,m_72 = NULL,n_72 = NULL;
      a_72 = t;
      g_68 :
      if(match_cons(a_72, sym_appl_2))
        {
          b_72 = ATgetArgument(a_72, 0);
          h_72 = ATgetArgument(a_72, 1);
          h_68 :
          if(match_cons(b_72, sym_prod_3))
            {
              c_72 = ATgetArgument(b_72, 0);
              d_72 = ATgetArgument(b_72, 1);
              g_72 = ATgetArgument(b_72, 2);
              i_68 :
              if(match_cons(d_72, sym_cf_1))
                {
                  e_72 = ATgetArgument(d_72, 0);
                  j_68 :
                  if(match_cons(e_72, sym_iter_1))
                    {
                      f_72 = ATgetArgument(e_72, 0);
                      k_68 :
                      if(((ATgetType(h_72) == AT_LIST) && ((ATermList) h_72 != ATempty)))
                        {
                          i_72 = ATgetFirst((ATermList) h_72);
                          j_72 = (ATerm) ATgetNext((ATermList) h_72);
                          l_68 :
                          if(((ATermList) j_72 == ATempty))
                            {
                              t = (ATerm) ATinsert(ATempty, not_null(i_72));
                            }
                          else
                            {
                              if(((ATgetType(j_72) == AT_LIST) && ((ATermList) j_72 != ATempty)))
                                {
                                  k_72 = ATgetFirst((ATermList) j_72);
                                  l_72 = (ATerm) ATgetNext((ATermList) j_72);
                                  m_68 :
                                  if(((ATermList) l_72 == ATempty))
                                    {
                                      {
                                        ATerm r_72 = NULL,t_72 = NULL;
                                        ATerm u_26;
                                        u_26 = t;
                                        {
                                          ATerm s_72 = NULL;
                                          t = not_null(i_72);
                                          {
                                            t = d_74(t);
                                            {
                                              s_72 = t;
                                              if(((r_72 != NULL) && (r_72 != s_72)))
                                                _fail(s_72);
                                              else
                                                r_72 = s_72;
                                            }
                                          }
                                        }
                                        t = u_26;
                                        {
                                          ATerm u_72 = NULL;
                                          t = not_null(k_72);
                                          {
                                            t = d_74(t);
                                            {
                                              u_72 = t;
                                              if(((t_72 != NULL) && (t_72 != u_72)))
                                                _fail(u_72);
                                              else
                                                t_72 = u_72;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATempty, not_null(t_72)), not_null(r_72));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(((ATgetType(l_72) == AT_LIST) && ((ATermList) l_72 != ATempty)))
                                        {
                                          m_72 = ATgetFirst((ATermList) l_72);
                                          n_72 = (ATerm) ATgetNext((ATermList) l_72);
                                          n_68 :
                                          if(((ATermList) n_72 == ATempty))
                                            {
                                              {
                                                ATerm y_72 = NULL,a_73 = NULL;
                                                ATerm v_26;
                                                v_26 = t;
                                                {
                                                  ATerm z_72 = NULL;
                                                  t = not_null(i_72);
                                                  {
                                                    t = d_74(t);
                                                    {
                                                      z_72 = t;
                                                      if(((y_72 != NULL) && (y_72 != z_72)))
                                                        _fail(z_72);
                                                      else
                                                        y_72 = z_72;
                                                    }
                                                  }
                                                }
                                                t = v_26;
                                                {
                                                  ATerm b_73 = NULL;
                                                  t = not_null(m_72);
                                                  {
                                                    t = d_74(t);
                                                    {
                                                      b_73 = t;
                                                      if(((a_73 != NULL) && (a_73 != b_73)))
                                                        _fail(b_73);
                                                      else
                                                        a_73 = b_73;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(a_73)), (ATerm) ATinsert(ATempty, not_null(k_72))), not_null(y_72));
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
    t = d_74(t);
    {
      c_73 = t;
      if(((z_71 != NULL) && (z_71 != c_73)))
        _fail(c_73);
      else
        z_71 = c_73;
    }
    t = not_null(z_71);
    return(t);
  }
  ATerm q_73 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(e_70));
    return(t);
  }
  ATerm r_73 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm s_73 (ATerm t)
  {
    t = not_null(e_70);
    t = FlatList_0(t);
    return(t);
  }
  ATerm t_73 (ATerm t)
  {
    ATerm g_73 = NULL,i_73 = NULL;
    ATerm w_26;
    w_26 = t;
    {
      ATerm h_73 = NULL;
      t = SSLgetAnnotations(not_null(g_70));
      {
        h_73 = t;
        if(((g_73 != NULL) && (g_73 != h_73)))
          _fail(h_73);
        else
          g_73 = h_73;
      }
    }
    t = w_26;
    {
      ATerm j_73 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatList_0), not_null(g_73));
      {
        j_73 = t;
        if(((i_73 != NULL) && (i_73 != j_73)))
          _fail(j_73);
        else
          i_73 = j_73;
      }
      t = not_null(i_73);
    }
    return(t);
  }
  g_70 = t;
  r_68 :
  if(match_cons(g_70, sym_appl_2))
    {
      t_69 = ATgetArgument(g_70, 0);
      d_70 = ATgetArgument(g_70, 1);
      s_68 :
      if(match_cons(t_69, sym_prod_3))
        {
          u_69 = ATgetArgument(t_69, 0);
          z_69 = ATgetArgument(t_69, 1);
          c_70 = ATgetArgument(t_69, 2);
          t_68 :
          if(match_cons(z_69, sym_cf_1))
            {
              a_70 = ATgetArgument(z_69, 0);
              u_68 :
              if(match_cons(a_70, sym_iter_sep_2))
                {
                  b_70 = ATgetArgument(a_70, 0);
                  s_69 = ATgetArgument(a_70, 1);
                  v_68 :
                  if(((ATgetType(d_70) == AT_LIST) && ((ATermList) d_70 != ATempty)))
                    {
                      e_70 = ATgetFirst((ATermList) d_70);
                      f_70 = (ATerm) ATgetNext((ATermList) d_70);
                      w_68 :
                      if(((ATermList) f_70 == ATempty))
                        {
                          x_68 :
                          {
                            ATerm x_26 = t;
                            int y_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = k_73(t);
                                LocalPopChoice(y_26);
                              }
                            else
                              {
                                t = x_26;
                                t = l_73(t);
                              }
                          }
                        }
                      else
                        {
                          y_68 :
                          t = k_73(t);
                        }
                    }
                  else
                    {
                      _fail(t);
                    }
                }
              else
                {
                  if(match_cons(a_70, sym_iter_star_sep_2))
                    {
                      b_70 = ATgetArgument(a_70, 0);
                      s_69 = ATgetArgument(a_70, 1);
                      z_68 :
                      if(((ATermList) u_69 == ATempty))
                        {
                          a_69 :
                          if(((ATermList) d_70 == ATempty))
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
                          if(((ATgetType(u_69) == AT_LIST) && ((ATermList) u_69 != ATempty)))
                            {
                              v_69 = ATgetFirst((ATermList) u_69);
                              y_69 = (ATerm) ATgetNext((ATermList) u_69);
                              b_69 :
                              if(match_cons(v_69, sym_cf_1))
                                {
                                  w_69 = ATgetArgument(v_69, 0);
                                  c_69 :
                                  if(match_cons(w_69, sym_iter_sep_2))
                                    {
                                      x_69 = ATgetArgument(w_69, 0);
                                      r_69 = ATgetArgument(w_69, 1);
                                      d_69 :
                                      if(((ATermList) y_69 == ATempty))
                                        {
                                          e_69 :
                                          if(((ATgetType(d_70) == AT_LIST) && ((ATermList) d_70 != ATempty)))
                                            {
                                              e_70 = ATgetFirst((ATermList) d_70);
                                              f_70 = (ATerm) ATgetNext((ATermList) d_70);
                                              f_69 :
                                              if(((ATermList) f_70 == ATempty))
                                                {
                                                  t = n_73(t);
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
                      if(match_cons(a_70, sym_iter_1))
                        {
                          b_70 = ATgetArgument(a_70, 0);
                          g_69 :
                          if(((ATgetType(d_70) == AT_LIST) && ((ATermList) d_70 != ATempty)))
                            {
                              e_70 = ATgetFirst((ATermList) d_70);
                              f_70 = (ATerm) ATgetNext((ATermList) d_70);
                              h_69 :
                              if(((ATermList) f_70 == ATempty))
                                {
                                  i_69 :
                                  {
                                    ATerm z_26 = t;
                                    int a_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = p_73(t);
                                        LocalPopChoice(a_27);
                                      }
                                    else
                                      {
                                        t = z_26;
                                        t = q_73(t);
                                      }
                                  }
                                }
                              else
                                {
                                  j_69 :
                                  t = p_73(t);
                                }
                            }
                          else
                            {
                              _fail(t);
                            }
                        }
                      else
                        {
                          if(match_cons(a_70, sym_iter_star_1))
                            {
                              b_70 = ATgetArgument(a_70, 0);
                              k_69 :
                              if(((ATermList) u_69 == ATempty))
                                {
                                  l_69 :
                                  if(((ATermList) d_70 == ATempty))
                                    {
                                      t = r_73(t);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                              else
                                {
                                  if(((ATgetType(u_69) == AT_LIST) && ((ATermList) u_69 != ATempty)))
                                    {
                                      v_69 = ATgetFirst((ATermList) u_69);
                                      y_69 = (ATerm) ATgetNext((ATermList) u_69);
                                      m_69 :
                                      if(match_cons(v_69, sym_cf_1))
                                        {
                                          w_69 = ATgetArgument(v_69, 0);
                                          n_69 :
                                          if(match_cons(w_69, sym_iter_1))
                                            {
                                              x_69 = ATgetArgument(w_69, 0);
                                              o_69 :
                                              if(((ATermList) y_69 == ATempty))
                                                {
                                                  p_69 :
                                                  if(((ATgetType(d_70) == AT_LIST) && ((ATermList) d_70 != ATempty)))
                                                    {
                                                      e_70 = ATgetFirst((ATermList) d_70);
                                                      f_70 = (ATerm) ATgetNext((ATermList) d_70);
                                                      q_69 :
                                                      if(((ATermList) f_70 == ATempty))
                                                        {
                                                          t = s_73(t);
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
      if(match_cons(g_70, sym_FlatList_0))
        {
          t = t_73(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm n_105 (ATerm), ATerm o_105 (ATerm))
{
  ATerm r_74 (ATerm t)
  {
    ATerm b_27 = t;
    int c_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = n_105(t);
        t = r_74(t);
        LocalPopChoice(c_27);
      }
    else
      {
        t = b_27;
        t = o_105(t);
      }
    return(t);
  }
  t = r_74(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm q_105 (ATerm))
{
  t = repeat_2(t, q_105, _id);
  return(t);
}
ATerm appl_to_sort_0 (ATerm t)
{
  ATerm d_5 (ATerm t)
  {
    t = repeat_1(t, ApplToSort_0);
    return(t);
  }
  t = topdown_1(t, d_5);
  return(t);
}
ATerm De_Escape4_0 (ATerm t)
{
  ATerm u_74 = NULL;
  u_74 = t;
  t_74 :
  if(((ATermList) u_74 == ATempty))
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
  ATerm z_74 = NULL,c_75 = NULL,d_75 = NULL;
  z_74 = t;
  y_74 :
  if(((ATgetType(z_74) == AT_LIST) && ((ATermList) z_74 != ATempty)))
    {
      c_75 = ATgetFirst((ATermList) z_74);
      d_75 = (ATerm) ATgetNext((ATermList) z_74);
      {
        ATerm g_75 = NULL;
        ATerm h_75 = NULL;
        t = not_null(d_75);
        {
          t = De_Escape_0(t);
          {
            h_75 = t;
            if(((g_75 != NULL) && (g_75 != h_75)))
              _fail(h_75);
            else
              g_75 = h_75;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(g_75)), not_null(c_75));
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
  ATerm q_75 = NULL,r_75 = NULL,s_75 = NULL,t_75 = NULL,u_75 = NULL;
  q_75 = t;
  m_75 :
  if(((ATgetType(q_75) == AT_LIST) && ((ATermList) q_75 != ATempty)))
    {
      r_75 = ATgetFirst((ATermList) q_75);
      s_75 = (ATerm) ATgetNext((ATermList) q_75);
      n_75 :
      if(match_int(r_75, 92))
        {
          o_75 :
          if(((ATgetType(s_75) == AT_LIST) && ((ATermList) s_75 != ATempty)))
            {
              t_75 = ATgetFirst((ATermList) s_75);
              u_75 = (ATerm) ATgetNext((ATermList) s_75);
              p_75 :
              if(match_int(t_75, 92))
                {
                  ATerm w_75 = NULL;
                  ATerm x_75 = NULL;
                  t = not_null(u_75);
                  {
                    t = De_Escape_0(t);
                    {
                      x_75 = t;
                      if(((w_75 != NULL) && (w_75 != x_75)))
                        _fail(x_75);
                      else
                        w_75 = x_75;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(w_75)), term_d_27);
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
  ATerm g_76 = NULL,h_76 = NULL,i_76 = NULL,j_76 = NULL,k_76 = NULL;
  g_76 = t;
  c_76 :
  if(((ATgetType(g_76) == AT_LIST) && ((ATermList) g_76 != ATempty)))
    {
      h_76 = ATgetFirst((ATermList) g_76);
      i_76 = (ATerm) ATgetNext((ATermList) g_76);
      d_76 :
      if(match_int(h_76, 92))
        {
          e_76 :
          if(((ATgetType(i_76) == AT_LIST) && ((ATermList) i_76 != ATempty)))
            {
              j_76 = ATgetFirst((ATermList) i_76);
              k_76 = (ATerm) ATgetNext((ATermList) i_76);
              f_76 :
              if(match_int(j_76, 34))
                {
                  ATerm m_76 = NULL;
                  ATerm n_76 = NULL;
                  t = not_null(k_76);
                  {
                    t = De_Escape_0(t);
                    {
                      n_76 = t;
                      if(((m_76 != NULL) && (m_76 != n_76)))
                        _fail(n_76);
                      else
                        m_76 = n_76;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_76)), term_e_27);
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
  ATerm j_27 = t;
  int k_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(k_27);
    }
  else
    {
      t = j_27;
      {
        ATerm l_27 = t;
        int p_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(p_27);
          }
        else
          {
            t = l_27;
            {
              ATerm r_27 = t;
              int u_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(u_27);
                }
              else
                {
                  t = r_27;
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
ATerm at_last_1 (ATerm t, ATerm o_98 (ATerm))
{
  ATerm q_76 (ATerm t)
  {
    ATerm v_27 = t;
    int w_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = o_98(t);
        LocalPopChoice(w_27);
      }
    else
      {
        t = v_27;
        t = Cons_2(t, _id, q_76);
      }
    return(t);
  }
  t = q_76(t);
  return(t);
}
ATerm Tl_0 (ATerm t)
{
  ATerm t_76 = NULL,u_76 = NULL,v_76 = NULL;
  t_76 = t;
  s_76 :
  if(((ATgetType(t_76) == AT_LIST) && ((ATermList) t_76 != ATempty)))
    {
      u_76 = ATgetFirst((ATermList) t_76);
      v_76 = (ATerm) ATgetNext((ATermList) t_76);
      t = not_null(v_76);
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Hd_0 (ATerm t)
{
  ATerm b_77 = NULL,c_77 = NULL,d_77 = NULL;
  b_77 = t;
  a_77 :
  if(((ATgetType(b_77) == AT_LIST) && ((ATermList) b_77 != ATempty)))
    {
      c_77 = ATgetFirst((ATermList) b_77);
      d_77 = (ATerm) ATgetNext((ATermList) b_77);
      t = not_null(c_77);
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
    ATerm x_27;
    x_27 = t;
    {
      ATerm m_77 = NULL;
      t = Hd_0(t);
      {
        m_77 = t;
        h_77 :
        if(!(match_int(m_77, 34)))
          {
            _fail(t);
          }
      }
    }
    t = x_27;
    {
      t = Tl_0(t);
      {
        ATerm e_5 (ATerm t)
        {
          ATerm n_77 = NULL,o_77 = NULL,p_77 = NULL;
          n_77 = t;
          j_77 :
          if(((ATgetType(n_77) == AT_LIST) && ((ATermList) n_77 != ATempty)))
            {
              o_77 = ATgetFirst((ATermList) n_77);
              p_77 = (ATerm) ATgetNext((ATermList) n_77);
              k_77 :
              if(match_int(o_77, 34))
                {
                  l_77 :
                  if(((ATermList) p_77 == ATempty))
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
        t = at_last_1(t, e_5);
        t = implode_string_0(t);
      }
    }
  }
  return(t);
}
ATerm PpSym_0 (ATerm t)
{
  ATerm g_79 = NULL,h_79 = NULL,i_79 = NULL,j_79 = NULL;
  j_79 = t;
  f_79 :
  if(match_cons(j_79, sym_cf_1))
    {
      h_79 = ATgetArgument(j_79, 0);
      {
        ATerm m_79 = NULL;
        ATerm p_79 = NULL;
        t = not_null(h_79);
        {
          t = PpSym_0(t);
          {
            p_79 = t;
            if(((m_79 != NULL) && (m_79 != p_79)))
              _fail(p_79);
            else
              m_79 = p_79;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_z_27)), not_null(m_79)), (ATerm) ATinsert(ATempty, term_y_27));
          t = concat_0(t);
        }
      }
    }
  else
    {
      if(match_cons(j_79, sym_lex_1))
        {
          h_79 = ATgetArgument(j_79, 0);
          {
            ATerm r_79 = NULL;
            ATerm s_79 = NULL;
            t = not_null(h_79);
            {
              t = PpSym_0(t);
              {
                s_79 = t;
                if(((r_79 != NULL) && (r_79 != s_79)))
                  _fail(s_79);
                else
                  r_79 = s_79;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_28)), not_null(r_79)), (ATerm) ATinsert(ATempty, term_y_27));
              t = concat_0(t);
            }
          }
        }
      else
        {
          if(match_cons(j_79, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_f_28);
            }
          else
            {
              if(match_cons(j_79, sym_seq_2))
                {
                  h_79 = ATgetArgument(j_79, 0);
                  i_79 = ATgetArgument(j_79, 1);
                  {
                    ATerm v_79 = NULL;
                    ATerm y_79 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(not_null(i_79)), not_null(h_79));
                    {
                      t = map_1(t, PpSym_0);
                      {
                        y_79 = t;
                        if(((v_79 != NULL) && (v_79 != y_79)))
                          _fail(y_79);
                        else
                          v_79 = y_79;
                      }
                    }
                    {
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_h_28)), not_null(v_79)), (ATerm) ATinsert(ATempty, term_g_28));
                      t = concat_0(t);
                    }
                  }
                }
              else
                {
                  if(match_cons(j_79, sym_opt_1))
                    {
                      h_79 = ATgetArgument(j_79, 0);
                      {
                        t = not_null(h_79);
                        {
                          t = PpSym_0(t);
                          {
                            ATerm f_5 (ATerm t)
                            {
                              t = (ATerm) ATinsert(ATempty, term_i_28);
                              return(t);
                            }
                            t = at_end_1(t, f_5);
                          }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(j_79, sym_iter_1))
                        {
                          h_79 = ATgetArgument(j_79, 0);
                          {
                            t = not_null(h_79);
                            {
                              t = PpSym_0(t);
                              {
                                ATerm g_5 (ATerm t)
                                {
                                  t = (ATerm) ATinsert(ATempty, term_j_28);
                                  return(t);
                                }
                                t = at_end_1(t, g_5);
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(j_79, sym_iter_star_1))
                            {
                              h_79 = ATgetArgument(j_79, 0);
                              {
                                t = not_null(h_79);
                                {
                                  t = PpSym_0(t);
                                  {
                                    ATerm h_5 (ATerm t)
                                    {
                                      t = (ATerm) ATinsert(ATempty, term_k_28);
                                      return(t);
                                    }
                                    t = at_end_1(t, h_5);
                                  }
                                }
                              }
                            }
                          else
                            {
                              if(match_cons(j_79, sym_iter_sep_2))
                                {
                                  h_79 = ATgetArgument(j_79, 0);
                                  i_79 = ATgetArgument(j_79, 1);
                                  {
                                    ATerm f_80 = NULL,h_80 = NULL;
                                    ATerm l_28;
                                    l_28 = t;
                                    {
                                      ATerm g_80 = NULL;
                                      t = not_null(h_79);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          g_80 = t;
                                          if(((f_80 != NULL) && (f_80 != g_80)))
                                            _fail(g_80);
                                          else
                                            f_80 = g_80;
                                        }
                                      }
                                    }
                                    t = l_28;
                                    {
                                      ATerm i_80 = NULL;
                                      t = not_null(i_79);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          i_80 = t;
                                          if(((h_80 != NULL) && (h_80 != i_80)))
                                            _fail(i_80);
                                          else
                                            h_80 = i_80;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_n_28)), not_null(h_80)), not_null(f_80)), (ATerm) ATinsert(ATempty, term_m_28));
                                        t = concat_0(t);
                                      }
                                    }
                                  }
                                }
                              else
                                {
                                  if(match_cons(j_79, sym_iter_star_sep_2))
                                    {
                                      h_79 = ATgetArgument(j_79, 0);
                                      i_79 = ATgetArgument(j_79, 1);
                                      {
                                        ATerm l_80 = NULL,n_80 = NULL;
                                        ATerm o_28;
                                        o_28 = t;
                                        {
                                          ATerm m_80 = NULL;
                                          t = not_null(h_79);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              m_80 = t;
                                              if(((l_80 != NULL) && (l_80 != m_80)))
                                                _fail(m_80);
                                              else
                                                l_80 = m_80;
                                            }
                                          }
                                        }
                                        t = o_28;
                                        {
                                          ATerm t_80 = NULL;
                                          t = not_null(i_79);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              t_80 = t;
                                              if(((n_80 != NULL) && (n_80 != t_80)))
                                                _fail(t_80);
                                              else
                                                n_80 = t_80;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_b_29)), not_null(n_80)), not_null(l_80)), (ATerm) ATinsert(ATempty, term_m_28));
                                            t = concat_0(t);
                                          }
                                        }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(j_79, sym_iter_n_2))
                                        {
                                          h_79 = ATgetArgument(j_79, 0);
                                          i_79 = ATgetArgument(j_79, 1);
                                          {
                                            ATerm v_80 = NULL;
                                            ATerm a_81 = NULL;
                                            t = not_null(h_79);
                                            {
                                              t = PpSym_0(t);
                                              {
                                                a_81 = t;
                                                if(((v_80 != NULL) && (v_80 != a_81)))
                                                  _fail(a_81);
                                                else
                                                  v_80 = a_81;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_29)), not_null(v_80));
                                              t = concat_0(t);
                                            }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(j_79, sym_iter_sep_n_3))
                                            {
                                              h_79 = ATgetArgument(j_79, 0);
                                              i_79 = ATgetArgument(j_79, 1);
                                              g_79 = ATgetArgument(j_79, 2);
                                              {
                                                ATerm d_81 = NULL,f_81 = NULL;
                                                ATerm d_29;
                                                d_29 = t;
                                                {
                                                  ATerm e_81 = NULL;
                                                  t = not_null(h_79);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      e_81 = t;
                                                      if(((d_81 != NULL) && (d_81 != e_81)))
                                                        _fail(e_81);
                                                      else
                                                        d_81 = e_81;
                                                    }
                                                  }
                                                }
                                                t = d_29;
                                                {
                                                  ATerm g_81 = NULL;
                                                  t = not_null(i_79);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      g_81 = t;
                                                      if(((f_81 != NULL) && (f_81 != g_81)))
                                                        _fail(g_81);
                                                      else
                                                        f_81 = g_81;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_29)), not_null(f_81)), not_null(d_81));
                                                    t = concat_0(t);
                                                  }
                                                }
                                              }
                                            }
                                          else
                                            {
                                              if(match_cons(j_79, sym_set_1))
                                                {
                                                  h_79 = ATgetArgument(j_79, 0);
                                                  {
                                                    ATerm j_81 = NULL;
                                                    ATerm l_81 = NULL;
                                                    t = not_null(h_79);
                                                    {
                                                      t = PpSym_0(t);
                                                      {
                                                        l_81 = t;
                                                        if(((j_81 != NULL) && (j_81 != l_81)))
                                                          _fail(l_81);
                                                        else
                                                          j_81 = l_81;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(j_81)), (ATerm) ATinsert(ATempty, term_e_29));
                                                      t = concat_0(t);
                                                    }
                                                  }
                                                }
                                              else
                                                {
                                                  if(match_cons(j_79, sym_pair_2))
                                                    {
                                                      h_79 = ATgetArgument(j_79, 0);
                                                      i_79 = ATgetArgument(j_79, 1);
                                                      {
                                                        ATerm o_81 = NULL,q_81 = NULL;
                                                        ATerm f_29;
                                                        f_29 = t;
                                                        {
                                                          ATerm p_81 = NULL;
                                                          t = not_null(h_79);
                                                          {
                                                            t = PpSym_0(t);
                                                            {
                                                              p_81 = t;
                                                              if(((o_81 != NULL) && (o_81 != p_81)))
                                                                _fail(p_81);
                                                              else
                                                                o_81 = p_81;
                                                            }
                                                          }
                                                        }
                                                        t = f_29;
                                                        {
                                                          ATerm r_81 = NULL;
                                                          t = not_null(i_79);
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
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(q_81)), (ATerm) ATinsert(ATempty, term_g_29)), not_null(o_81));
                                                            t = concat_0(t);
                                                          }
                                                        }
                                                      }
                                                    }
                                                  else
                                                    {
                                                      if(match_cons(j_79, sym_func_2))
                                                        {
                                                          h_79 = ATgetArgument(j_79, 0);
                                                          i_79 = ATgetArgument(j_79, 1);
                                                          {
                                                            ATerm u_81 = NULL,w_81 = NULL;
                                                            ATerm h_29;
                                                            h_29 = t;
                                                            {
                                                              ATerm v_81 = NULL;
                                                              t = not_null(h_79);
                                                              {
                                                                t = filter_1(t, PpSym_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    v_81 = t;
                                                                    if(((u_81 != NULL) && (u_81 != v_81)))
                                                                      _fail(v_81);
                                                                    else
                                                                      u_81 = v_81;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = h_29;
                                                            {
                                                              ATerm x_81 = NULL;
                                                              t = not_null(i_79);
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
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(w_81)), (ATerm) ATinsert(ATempty, term_i_29)), not_null(u_81));
                                                                t = concat_0(t);
                                                              }
                                                            }
                                                          }
                                                        }
                                                      else
                                                        {
                                                          if(match_cons(j_79, sym_alt_2))
                                                            {
                                                              h_79 = ATgetArgument(j_79, 0);
                                                              i_79 = ATgetArgument(j_79, 1);
                                                              {
                                                                ATerm a_82 = NULL,c_82 = NULL;
                                                                ATerm j_29;
                                                                j_29 = t;
                                                                {
                                                                  ATerm b_82 = NULL;
                                                                  t = not_null(h_79);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      b_82 = t;
                                                                      if(((a_82 != NULL) && (a_82 != b_82)))
                                                                        _fail(b_82);
                                                                      else
                                                                        a_82 = b_82;
                                                                    }
                                                                  }
                                                                }
                                                                t = j_29;
                                                                {
                                                                  ATerm d_82 = NULL;
                                                                  t = not_null(i_79);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      d_82 = t;
                                                                      if(((c_82 != NULL) && (c_82 != d_82)))
                                                                        _fail(d_82);
                                                                      else
                                                                        c_82 = d_82;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(c_82)), (ATerm) ATinsert(ATempty, term_k_29)), not_null(a_82));
                                                                    t = concat_0(t);
                                                                  }
                                                                }
                                                              }
                                                            }
                                                          else
                                                            {
                                                              if(match_cons(j_79, sym_perm_1))
                                                                {
                                                                  h_79 = ATgetArgument(j_79, 0);
                                                                  {
                                                                    ATerm f_82 = NULL;
                                                                    ATerm g_82 = NULL;
                                                                    t = not_null(h_79);
                                                                    {
                                                                      t = filter_1(t, PpSym_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          g_82 = t;
                                                                          if(((f_82 != NULL) && (f_82 != g_82)))
                                                                            _fail(g_82);
                                                                          else
                                                                            f_82 = g_82;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(f_82)), term_p_29);
                                                                  }
                                                                }
                                                              else
                                                                {
                                                                  if(match_cons(j_79, sym_sort_1))
                                                                    {
                                                                      h_79 = ATgetArgument(j_79, 0);
                                                                      t = (ATerm) ATinsert(ATempty, not_null(h_79));
                                                                    }
                                                                  else
                                                                    {
                                                                      if(match_cons(j_79, sym_lit_1))
                                                                        {
                                                                          h_79 = ATgetArgument(j_79, 0);
                                                                          {
                                                                            ATerm j_82 = NULL;
                                                                            ATerm k_82 = NULL;
                                                                            t = not_null(h_79);
                                                                            {
                                                                              ATerm i_5 (ATerm t)
                                                                              {
                                                                                t = de_quote_0(t);
                                                                                t = de_escape_0(t);
                                                                                return(t);
                                                                              }
                                                                              t = try_1(t, i_5);
                                                                              {
                                                                                k_82 = t;
                                                                                if(((j_82 != NULL) && (j_82 != k_82)))
                                                                                  _fail(k_82);
                                                                                else
                                                                                  j_82 = k_82;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(j_82));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(j_79, sym_label_2))
                                                                            {
                                                                              h_79 = ATgetArgument(j_79, 0);
                                                                              i_79 = ATgetArgument(j_79, 1);
                                                                              {
                                                                                ATerm m_82 = NULL;
                                                                                ATerm n_82 = NULL;
                                                                                t = not_null(h_79);
                                                                                {
                                                                                  ATerm j_5 (ATerm t)
                                                                                  {
                                                                                    t = de_quote_0(t);
                                                                                    t = de_escape_0(t);
                                                                                    return(t);
                                                                                  }
                                                                                  t = try_1(t, j_5);
                                                                                  {
                                                                                    n_82 = t;
                                                                                    if(((m_82 != NULL) && (m_82 != n_82)))
                                                                                      _fail(n_82);
                                                                                    else
                                                                                      m_82 = n_82;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(m_82));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(j_79, sym_layout_0))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATempty, term_q_29);
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
  ATerm u_84 = NULL,v_84 = NULL,w_84 = NULL,x_84 = NULL,y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL;
  ATerm w_85 (ATerm t)
  {
    ATerm i_85 = NULL,n_85 = NULL;
    ATerm r_29;
    r_29 = t;
    {
      ATerm j_85 = NULL,k_85 = NULL;
      t = not_null(w_84);
      {
        j_85 = t;
        i_84 :
        if(match_cons(j_85, sym_cf_1))
          {
            k_85 = ATgetArgument(j_85, 0);
            {
              ATerm m_85 = NULL;
              t = not_null(k_85);
              {
                t = PpSym_0(t);
                {
                  t = concat_strings_0(t);
                  {
                    m_85 = t;
                    if(((i_85 != NULL) && (i_85 != m_85)))
                      _fail(m_85);
                    else
                      i_85 = m_85;
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
    t = r_29;
    {
      t = SSL_mkterm(not_null(i_85), not_null(z_84));
      {
        n_85 = t;
        t = not_null(n_85);
      }
    }
    return(t);
  }
  ATerm x_85 (ATerm t)
  {
    t = not_null(a_85);
    return(t);
  }
  ATerm y_85 (ATerm t)
  {
    ATerm s_85 = NULL,u_85 = NULL;
    ATerm s_29;
    s_29 = t;
    {
      ATerm t_85 = NULL;
      t = SSLgetAnnotations(not_null(c_85));
      {
        t_85 = t;
        if(((s_85 != NULL) && (s_85 != t_85)))
          _fail(t_85);
        else
          s_85 = t_85;
      }
    }
    t = s_29;
    {
      ATerm v_85 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ApplToSort_0), not_null(s_85));
      {
        v_85 = t;
        if(((u_85 != NULL) && (u_85 != v_85)))
          _fail(v_85);
        else
          u_85 = v_85;
      }
      t = not_null(u_85);
    }
    return(t);
  }
  c_85 = t;
  m_84 :
  if(match_cons(c_85, sym_appl_2))
    {
      u_84 = ATgetArgument(c_85, 0);
      z_84 = ATgetArgument(c_85, 1);
      n_84 :
      if(match_cons(u_84, sym_prod_3))
        {
          v_84 = ATgetArgument(u_84, 0);
          w_84 = ATgetArgument(u_84, 1);
          y_84 = ATgetArgument(u_84, 2);
          o_84 :
          if(((ATgetType(z_84) == AT_LIST) && ((ATermList) z_84 != ATempty)))
            {
              a_85 = ATgetFirst((ATermList) z_84);
              b_85 = (ATerm) ATgetNext((ATermList) z_84);
              p_84 :
              if(((ATermList) b_85 == ATempty))
                {
                  q_84 :
                  if(match_cons(w_84, sym_sort_1))
                    {
                      x_84 = ATgetArgument(w_84, 0);
                      r_84 :
                      if(match_string(x_84, "<START>"))
                        {
                          ATerm t_29 = t;
                          int u_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = w_85(t);
                              LocalPopChoice(u_29);
                            }
                          else
                            {
                              t = t_29;
                              t = x_85(t);
                            }
                        }
                      else
                        {
                          t = w_85(t);
                        }
                    }
                  else
                    {
                      t = w_85(t);
                    }
                }
              else
                {
                  s_84 :
                  t = w_85(t);
                }
            }
          else
            {
              t_84 :
              t = w_85(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(c_85, sym_ApplToSort_0))
        {
          t = y_85(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm layout_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm n_86 = NULL,o_86 = NULL;
  n_86 = t;
  i_86 :
  if(match_cons(n_86, sym_layout_1))
    {
      o_86 = ATgetArgument(n_86, 0);
      {
        ATerm r_86 = NULL,t_86 = NULL;
        ATerm s_86 = NULL;
        t = SSLgetAnnotations(not_null(n_86));
        {
          s_86 = t;
          if(((r_86 != NULL) && (r_86 != s_86)))
            _fail(s_86);
          else
            r_86 = s_86;
        }
        {
          t = not_null(o_86);
          {
            ATerm v_86 = NULL;
            t = l_79(t);
            {
              t_86 = t;
              {
                ATerm w_86 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_1, not_null(t_86)), not_null(r_86));
                {
                  w_86 = t;
                  if(((v_86 != NULL) && (v_86 != w_86)))
                    _fail(w_86);
                  else
                    v_86 = w_86;
                }
                t = not_null(v_86);
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
  ATerm i_87 = NULL;
  i_87 = t;
  h_87 :
  if(match_cons(i_87, sym_layout_0))
    {
      ATerm v_29 = t;
      int x_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_87 = NULL,n_87 = NULL;
          ATerm y_29;
          y_29 = t;
          {
            ATerm l_87 = NULL;
            t = SSLgetAnnotations(not_null(i_87));
            {
              l_87 = t;
              if(((k_87 != NULL) && (k_87 != l_87)))
                _fail(l_87);
              else
                k_87 = l_87;
            }
          }
          t = y_29;
          {
            ATerm o_87 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(k_87));
            {
              o_87 = t;
              if(((n_87 != NULL) && (n_87 != o_87)))
                _fail(o_87);
              else
                n_87 = o_87;
            }
            t = not_null(n_87);
          }
          LocalPopChoice(x_29);
        }
      else
        {
          t = v_29;
          {
            ATerm q_87 = NULL,s_87 = NULL;
            ATerm z_29;
            z_29 = t;
            {
              ATerm r_87 = NULL;
              t = SSLgetAnnotations(not_null(i_87));
              {
                r_87 = t;
                if(((q_87 != NULL) && (q_87 != r_87)))
                  _fail(r_87);
                else
                  q_87 = r_87;
              }
            }
            t = z_29;
            {
              ATerm t_87 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(q_87));
              {
                t_87 = t;
                if(((s_87 != NULL) && (s_87 != t_87)))
                  _fail(t_87);
                else
                  s_87 = t_87;
              }
              t = not_null(s_87);
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
ATerm opt_1 (ATerm t, ATerm s_0 (ATerm))
{
  ATerm k_88 = NULL,l_88 = NULL;
  k_88 = t;
  j_88 :
  if(match_cons(k_88, sym_opt_1))
    {
      l_88 = ATgetArgument(k_88, 0);
      {
        ATerm a_30 = t;
        int c_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_88 = NULL,q_88 = NULL;
            ATerm p_88 = NULL;
            t = SSLgetAnnotations(not_null(k_88));
            {
              p_88 = t;
              if(((o_88 != NULL) && (o_88 != p_88)))
                _fail(p_88);
              else
                o_88 = p_88;
            }
            {
              t = not_null(l_88);
              {
                ATerm s_88 = NULL;
                t = s_0(t);
                {
                  q_88 = t;
                  {
                    ATerm t_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(q_88)), not_null(o_88));
                    {
                      t_88 = t;
                      if(((s_88 != NULL) && (s_88 != t_88)))
                        _fail(t_88);
                      else
                        s_88 = t_88;
                    }
                    t = not_null(s_88);
                  }
                }
              }
            }
            LocalPopChoice(c_30);
          }
        else
          {
            t = a_30;
            {
              ATerm w_88 = NULL,y_88 = NULL;
              ATerm x_88 = NULL;
              t = SSLgetAnnotations(not_null(k_88));
              {
                x_88 = t;
                if(((w_88 != NULL) && (w_88 != x_88)))
                  _fail(x_88);
                else
                  w_88 = x_88;
              }
              {
                t = not_null(l_88);
                {
                  ATerm a_89 = NULL;
                  t = s_0(t);
                  {
                    y_88 = t;
                    {
                      ATerm b_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(y_88)), not_null(w_88));
                      {
                        b_89 = t;
                        if(((a_89 != NULL) && (a_89 != b_89)))
                          _fail(b_89);
                        else
                          a_89 = b_89;
                      }
                      t = not_null(a_89);
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
ATerm cf_1 (ATerm t, ATerm r_0 (ATerm))
{
  ATerm t_89 = NULL,u_89 = NULL;
  t_89 = t;
  s_89 :
  if(match_cons(t_89, sym_cf_1))
    {
      u_89 = ATgetArgument(t_89, 0);
      {
        ATerm d_30 = t;
        int e_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_89 = NULL,z_89 = NULL;
            ATerm y_89 = NULL;
            t = SSLgetAnnotations(not_null(t_89));
            {
              y_89 = t;
              if(((x_89 != NULL) && (x_89 != y_89)))
                _fail(y_89);
              else
                x_89 = y_89;
            }
            {
              t = not_null(u_89);
              {
                ATerm b_90 = NULL;
                t = r_0(t);
                {
                  z_89 = t;
                  {
                    ATerm c_90 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(z_89)), not_null(x_89));
                    {
                      c_90 = t;
                      if(((b_90 != NULL) && (b_90 != c_90)))
                        _fail(c_90);
                      else
                        b_90 = c_90;
                    }
                    t = not_null(b_90);
                  }
                }
              }
            }
            LocalPopChoice(e_30);
          }
        else
          {
            t = d_30;
            {
              ATerm f_90 = NULL,h_90 = NULL;
              ATerm g_90 = NULL;
              t = SSLgetAnnotations(not_null(t_89));
              {
                g_90 = t;
                if(((f_90 != NULL) && (f_90 != g_90)))
                  _fail(g_90);
                else
                  f_90 = g_90;
              }
              {
                t = not_null(u_89);
                {
                  ATerm j_90 = NULL;
                  t = r_0(t);
                  {
                    h_90 = t;
                    {
                      ATerm k_90 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(h_90)), not_null(f_90));
                      {
                        k_90 = t;
                        if(((j_90 != NULL) && (j_90 != k_90)))
                          _fail(k_90);
                        else
                          j_90 = k_90;
                      }
                      t = not_null(j_90);
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
  ATerm f_30 = t;
  int g_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm k_5 (ATerm t)
      {
        ATerm l_5 (ATerm t)
        {
          ATerm m_5 (ATerm t)
          {
            t = opt_1(t, layout_0);
            return(t);
          }
          t = cf_1(t, m_5);
          return(t);
        }
        t = prod_3(t, _id, l_5, _id);
        return(t);
      }
      t = appl_2(t, k_5, _id);
      LocalPopChoice(g_30);
    }
  else
    {
      t = f_30;
      {
        ATerm h_30 = t;
        int i_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_5 (ATerm t)
            {
              t = opt_1(t, layout_0);
              return(t);
            }
            t = cf_1(t, n_5);
            LocalPopChoice(i_30);
          }
        else
          {
            t = h_30;
            t = layout_1(t, _id);
          }
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm g_91 (ATerm))
{
  ATerm j_30 = t;
  int k_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(k_30);
    }
  else
    {
      t = j_30;
      {
        ATerm l_30 = t;
        int m_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = filter_1(t, g_91);
              return(t);
            }
            t = Cons_2(t, g_91, o_5);
            LocalPopChoice(m_30);
          }
        else
          {
            t = l_30;
            {
              ATerm x_90 = NULL,y_90 = NULL,z_90 = NULL;
              x_90 = t;
              w_90 :
              if(((ATgetType(x_90) == AT_LIST) && ((ATermList) x_90 != ATempty)))
                {
                  y_90 = ATgetFirst((ATermList) x_90);
                  z_90 = (ATerm) ATgetNext((ATermList) x_90);
                  {
                    t = not_null(z_90);
                    t = filter_1(t, g_91);
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
ATerm prod_3 (ATerm t, ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm))
{
  ATerm q_91 = NULL,r_91 = NULL,s_91 = NULL,t_91 = NULL;
  q_91 = t;
  p_91 :
  if(match_cons(q_91, sym_prod_3))
    {
      r_91 = ATgetArgument(q_91, 0);
      s_91 = ATgetArgument(q_91, 1);
      t_91 = ATgetArgument(q_91, 2);
      {
        ATerm n_30 = t;
        int o_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm y_91 = NULL,c_92 = NULL;
            ATerm z_91 = NULL;
            t = SSLgetAnnotations(not_null(q_91));
            {
              z_91 = t;
              if(((y_91 != NULL) && (y_91 != z_91)))
                _fail(z_91);
              else
                y_91 = z_91;
            }
            {
              t = not_null(r_91);
              {
                ATerm e_92 = NULL;
                t = o_0(t);
                {
                  c_92 = t;
                  {
                    t = not_null(s_91);
                    {
                      ATerm g_92 = NULL;
                      t = p_0(t);
                      {
                        e_92 = t;
                        {
                          t = not_null(t_91);
                          {
                            ATerm i_92 = NULL;
                            t = q_0(t);
                            {
                              g_92 = t;
                              {
                                ATerm j_92 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(c_92), not_null(e_92), not_null(g_92)), not_null(y_91));
                                {
                                  j_92 = t;
                                  if(((i_92 != NULL) && (i_92 != j_92)))
                                    _fail(j_92);
                                  else
                                    i_92 = j_92;
                                }
                                t = not_null(i_92);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(o_30);
          }
        else
          {
            t = n_30;
            {
              ATerm o_92 = NULL,q_92 = NULL;
              ATerm p_92 = NULL;
              t = SSLgetAnnotations(not_null(q_91));
              {
                p_92 = t;
                if(((o_92 != NULL) && (o_92 != p_92)))
                  _fail(p_92);
                else
                  o_92 = p_92;
              }
              {
                t = not_null(r_91);
                {
                  ATerm s_92 = NULL;
                  t = o_0(t);
                  {
                    q_92 = t;
                    {
                      t = not_null(s_91);
                      {
                        ATerm u_92 = NULL;
                        t = p_0(t);
                        {
                          s_92 = t;
                          {
                            t = not_null(t_91);
                            {
                              ATerm w_92 = NULL;
                              t = q_0(t);
                              {
                                u_92 = t;
                                {
                                  ATerm x_92 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(q_92), not_null(s_92), not_null(u_92)), not_null(o_92));
                                  {
                                    x_92 = t;
                                    if(((w_92 != NULL) && (w_92 != x_92)))
                                      _fail(x_92);
                                    else
                                      w_92 = x_92;
                                  }
                                  t = not_null(w_92);
                                }
                              }
                            }
                          }
                        }
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
ATerm topdown_1 (ATerm t, ATerm g_102 (ATerm))
{
  t = g_102(t);
  {
    ATerm p_5 (ATerm t)
    {
      t = topdown_1(t, g_102);
      return(t);
    }
    t = _all(t, p_5);
  }
  return(t);
}
ATerm remove_x_1 (ATerm t, ATerm d_107 (ATerm))
{
  ATerm q_5 (ATerm t)
  {
    ATerm r_5 (ATerm t)
    {
      ATerm s_5 (ATerm t)
      {
        ATerm u_5 (ATerm t)
        {
          ATerm v_5 (ATerm t)
          {
            ATerm p_30 = t;
            if((PushChoice() == 0))
              {
                t = d_107(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = p_30;
              }
            return(t);
          }
          t = filter_1(t, v_5);
          return(t);
        }
        t = prod_3(t, u_5, _id, _id);
        return(t);
      }
      ATerm t_5 (ATerm t)
      {
        ATerm w_5 (ATerm t)
        {
          ATerm q_30 = t;
          if((PushChoice() == 0))
            {
              t = d_107(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = q_30;
            }
          return(t);
        }
        t = filter_1(t, w_5);
        return(t);
      }
      t = appl_2(t, s_5, t_5);
      return(t);
    }
    t = try_1(t, r_5);
    return(t);
  }
  t = topdown_1(t, q_5);
  return(t);
}
ATerm remove_layout_0 (ATerm t)
{
  t = remove_x_1(t, is_layout_p__0);
  return(t);
}
ATerm RemoveLayout_0 (ATerm t)
{
  ATerm o_93 = NULL;
  o_93 = t;
  n_93 :
  if(match_cons(o_93, sym_RemoveLayout_0))
    {
      ATerm q_93 = NULL,u_93 = NULL;
      ATerm r_30;
      r_30 = t;
      {
        ATerm r_93 = NULL;
        t = SSLgetAnnotations(not_null(o_93));
        {
          r_93 = t;
          if(((q_93 != NULL) && (q_93 != r_93)))
            _fail(r_93);
          else
            q_93 = r_93;
        }
      }
      t = r_30;
      {
        ATerm v_93 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLayout_0), not_null(q_93));
        {
          v_93 = t;
          if(((u_93 != NULL) && (u_93 != v_93)))
            _fail(v_93);
          else
            u_93 = v_93;
        }
        t = not_null(u_93);
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
  ATerm j_94 = NULL,k_94 = NULL,l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL;
  j_94 = t;
  c_94 :
  if(match_cons(j_94, sym_appl_2))
    {
      k_94 = ATgetArgument(j_94, 0);
      q_94 = ATgetArgument(j_94, 1);
      d_94 :
      if(match_cons(k_94, sym_prod_3))
        {
          l_94 = ATgetArgument(k_94, 0);
          m_94 = ATgetArgument(k_94, 1);
          p_94 = ATgetArgument(k_94, 2);
          e_94 :
          if(match_cons(m_94, sym_cf_1))
            {
              n_94 = ATgetArgument(m_94, 0);
              f_94 :
              if(match_cons(n_94, sym_layout_0))
                {
                  t = not_null(q_94);
                  t = concat_strings_0(t);
                }
              else
                {
                  if(match_cons(n_94, sym_opt_1))
                    {
                      o_94 = ATgetArgument(n_94, 0);
                      g_94 :
                      if(match_cons(o_94, sym_layout_0))
                        {
                          h_94 :
                          if(((ATermList) q_94 == ATempty))
                            {
                              t = term_s_30;
                            }
                          else
                            {
                              if(((ATgetType(q_94) == AT_LIST) && ((ATermList) q_94 != ATempty)))
                                {
                                  r_94 = ATgetFirst((ATermList) q_94);
                                  s_94 = (ATerm) ATgetNext((ATermList) q_94);
                                  i_94 :
                                  if(((ATermList) s_94 == ATempty))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, not_null(r_94)));
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
  ATerm z_94 = NULL;
  z_94 = t;
  t = (ATerm) ATinsert(ATempty, not_null(z_94));
  return(t);
}
ATerm Kids_0 (ATerm t)
{
  ATerm e_95 = NULL,f_95 = NULL,g_95 = NULL;
  e_95 = t;
  d_95 :
  if(match_cons(e_95, sym_appl_2))
    {
      f_95 = ATgetArgument(e_95, 0);
      g_95 = ATgetArgument(e_95, 1);
      {
        t = not_null(g_95);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm i_74 (ATerm), ATerm j_74 (ATerm))
{
  ATerm q_95 = NULL,r_95 = NULL,s_95 = NULL;
  q_95 = t;
  p_95 :
  if(match_cons(q_95, sym_appl_2))
    {
      r_95 = ATgetArgument(q_95, 0);
      s_95 = ATgetArgument(q_95, 1);
      {
        ATerm w_95 = NULL,y_95 = NULL;
        ATerm x_95 = NULL;
        t = SSLgetAnnotations(not_null(q_95));
        {
          x_95 = t;
          if(((w_95 != NULL) && (w_95 != x_95)))
            _fail(x_95);
          else
            w_95 = x_95;
        }
        {
          t = not_null(r_95);
          {
            ATerm a_96 = NULL;
            t = i_74(t);
            {
              y_95 = t;
              {
                t = not_null(s_95);
                {
                  ATerm c_96 = NULL;
                  t = j_74(t);
                  {
                    a_96 = t;
                    {
                      ATerm d_96 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(y_95), not_null(a_96)), not_null(w_95));
                      {
                        d_96 = t;
                        if(((c_96 != NULL) && (c_96 != d_96)))
                          _fail(d_96);
                        else
                          c_96 = d_96;
                      }
                      t = not_null(c_96);
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
  ATerm j_96 (ATerm t)
  {
    ATerm t_30 = t;
    int e_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 (ATerm t)
        {
          t = map_1(t, j_96);
          return(t);
        }
        t = appl_2(t, _id, x_5);
        t = Kids_0(t);
        LocalPopChoice(e_32);
      }
    else
      {
        t = t_30;
        t = Kids_p__0(t);
      }
    return(t);
  }
  t = j_96(t);
  t = implode_string_0(t);
  return(t);
}
ATerm implode_lexical_0 (ATerm t)
{
  ATerm o_97 = NULL,p_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL,h_98 = NULL,i_98 = NULL;
  ATerm e_99 (ATerm t)
  {
    ATerm v_98 = NULL;
    ATerm w_98 = NULL;
    t = yield_0(t);
    {
      w_98 = t;
      if(((v_98 != NULL) && (v_98 != w_98)))
        _fail(w_98);
      else
        v_98 = w_98;
    }
    t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(v_98));
    return(t);
  }
  y_97 = t;
  y_96 :
  if(match_cons(y_97, sym_appl_2))
    {
      b_98 = ATgetArgument(y_97, 0);
      i_98 = ATgetArgument(y_97, 1);
      z_96 :
      if(match_cons(b_98, sym_prod_3))
        {
          c_98 = ATgetArgument(b_98, 0);
          d_98 = ATgetArgument(b_98, 1);
          h_98 = ATgetArgument(b_98, 2);
          a_97 :
          if(match_cons(d_98, sym_cf_1))
            {
              e_98 = ATgetArgument(d_98, 0);
              b_97 :
              if(((ATgetType(c_98) == AT_LIST) && ((ATermList) c_98 != ATempty)))
                {
                  o_97 = ATgetFirst((ATermList) c_98);
                  u_97 = (ATerm) ATgetNext((ATermList) c_98);
                  c_97 :
                  if(match_cons(o_97, sym_lex_1))
                    {
                      p_97 = ATgetArgument(o_97, 0);
                      d_97 :
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
              if(match_cons(d_98, sym_lex_1))
                {
                  e_98 = ATgetArgument(d_98, 0);
                  e_97 :
                  t = yield_0(t);
                }
              else
                {
                  if(match_cons(d_98, sym_lit_1))
                    {
                      e_98 = ATgetArgument(d_98, 0);
                      f_97 :
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
                        t = (ATerm) ATmakeAppl(sym_lit_1, not_null(j_98));
                      }
                    }
                  else
                    {
                      if(match_cons(d_98, sym_varsym_1))
                        {
                          e_98 = ATgetArgument(d_98, 0);
                          g_97 :
                          if(match_cons(e_98, sym_cf_1))
                            {
                              v_97 = ATgetArgument(e_98, 0);
                              h_97 :
                              if(match_cons(v_97, sym_iter_star_1))
                                {
                                  w_97 = ATgetArgument(v_97, 0);
                                  i_97 :
                                  {
                                    ATerm f_32 = t;
                                    int g_32 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        ATerm l_98 = NULL;
                                        ATerm m_98 = NULL;
                                        t = yield_0(t);
                                        {
                                          m_98 = t;
                                          if(((l_98 != NULL) && (l_98 != m_98)))
                                            _fail(m_98);
                                          else
                                            l_98 = m_98;
                                        }
                                        t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(l_98));
                                        LocalPopChoice(g_32);
                                      }
                                    else
                                      {
                                        t = f_32;
                                        t = e_99(t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(v_97, sym_iter_star_sep_2))
                                    {
                                      w_97 = ATgetArgument(v_97, 0);
                                      x_97 = ATgetArgument(v_97, 1);
                                      j_97 :
                                      {
                                        ATerm h_32 = t;
                                        int i_32 = stack_ptr;
                                        if((PushChoice() == 0))
                                          {
                                            ATerm n_98 = NULL;
                                            ATerm q_98 = NULL;
                                            t = yield_0(t);
                                            {
                                              q_98 = t;
                                              if(((n_98 != NULL) && (n_98 != q_98)))
                                                _fail(q_98);
                                              else
                                                n_98 = q_98;
                                            }
                                            t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(n_98));
                                            LocalPopChoice(i_32);
                                          }
                                        else
                                          {
                                            t = h_32;
                                            t = e_99(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(v_97, sym_iter_1))
                                        {
                                          w_97 = ATgetArgument(v_97, 0);
                                          k_97 :
                                          {
                                            ATerm j_32 = t;
                                            int k_32 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                ATerm r_98 = NULL;
                                                ATerm s_98 = NULL;
                                                t = yield_0(t);
                                                {
                                                  s_98 = t;
                                                  if(((r_98 != NULL) && (r_98 != s_98)))
                                                    _fail(s_98);
                                                  else
                                                    r_98 = s_98;
                                                }
                                                t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(r_98));
                                                LocalPopChoice(k_32);
                                              }
                                            else
                                              {
                                                t = j_32;
                                                t = e_99(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(v_97, sym_iter_sep_2))
                                            {
                                              w_97 = ATgetArgument(v_97, 0);
                                              x_97 = ATgetArgument(v_97, 1);
                                              l_97 :
                                              {
                                                ATerm l_32 = t;
                                                int m_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm t_98 = NULL;
                                                    ATerm u_98 = NULL;
                                                    t = yield_0(t);
                                                    {
                                                      u_98 = t;
                                                      if(((t_98 != NULL) && (t_98 != u_98)))
                                                        _fail(u_98);
                                                      else
                                                        t_98 = u_98;
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(t_98));
                                                    LocalPopChoice(m_32);
                                                  }
                                                else
                                                  {
                                                    t = l_32;
                                                    t = e_99(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              m_97 :
                                              t = e_99(t);
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              n_97 :
                              t = e_99(t);
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
ATerm downup2_2 (ATerm t, ATerm n_102 (ATerm), ATerm o_102 (ATerm))
{
  ATerm m_99 (ATerm t)
  {
    t = n_102(t);
    {
      t = _all(t, m_99);
      t = o_102(t);
    }
    return(t);
  }
  t = m_99(t);
  return(t);
}
ATerm flat_lex_0 (ATerm t)
{
  ATerm y_5 (ATerm t)
  {
    t = try_1(t, implode_lexical_0);
    return(t);
  }
  ATerm z_5 (ATerm t)
  {
    t = try_1(t, flat_layout_0);
    return(t);
  }
  t = downup2_2(t, y_5, z_5);
  return(t);
}
ATerm FlatLex_0 (ATerm t)
{
  ATerm r_99 = NULL;
  r_99 = t;
  q_99 :
  if(match_cons(r_99, sym_FlatLex_0))
    {
      ATerm t_99 = NULL,v_99 = NULL;
      ATerm n_32;
      n_32 = t;
      {
        ATerm u_99 = NULL;
        t = SSLgetAnnotations(not_null(r_99));
        {
          u_99 = t;
          if(((t_99 != NULL) && (t_99 != u_99)))
            _fail(u_99);
          else
            t_99 = u_99;
        }
      }
      t = n_32;
      {
        ATerm w_99 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatLex_0), not_null(t_99));
        {
          w_99 = t;
          if(((v_99 != NULL) && (v_99 != w_99)))
            _fail(w_99);
          else
            v_99 = w_99;
        }
        t = not_null(v_99);
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
  ATerm c_100 = NULL;
  c_100 = t;
  {
    ATerm a_6 (ATerm t)
    {
      ATerm b_6 (ATerm t)
      {
        t = option_defined_1(t, FlatLex_0);
        return(t);
      }
      t = _2(t, b_6, flat_lex_0);
      return(t);
    }
    t = try_1(t, a_6);
    {
      ATerm c_6 (ATerm t)
      {
        ATerm d_6 (ATerm t)
        {
          t = option_defined_1(t, RemoveLayout_0);
          return(t);
        }
        t = _2(t, d_6, remove_layout_0);
        return(t);
      }
      t = try_1(t, c_6);
      {
        ATerm e_6 (ATerm t)
        {
          ATerm f_6 (ATerm t)
          {
            t = option_defined_1(t, ApplToSort_0);
            return(t);
          }
          t = _2(t, f_6, appl_to_sort_0);
          return(t);
        }
        t = try_1(t, e_6);
        {
          ATerm g_6 (ATerm t)
          {
            ATerm h_6 (ATerm t)
            {
              t = option_defined_1(t, FlatList_0);
              return(t);
            }
            t = _2(t, h_6, flat_list_0);
            return(t);
          }
          t = try_1(t, g_6);
          {
            ATerm i_6 (ATerm t)
            {
              ATerm j_6 (ATerm t)
              {
                t = option_defined_1(t, RemoveLit_0);
                return(t);
              }
              t = _2(t, j_6, remove_lit_0);
              return(t);
            }
            t = try_1(t, i_6);
            {
              ATerm k_6 (ATerm t)
              {
                ATerm l_6 (ATerm t)
                {
                  t = option_defined_1(t, FlatInj_0);
                  return(t);
                }
                t = _2(t, l_6, flat_injections_0);
                return(t);
              }
              t = try_1(t, k_6);
              {
                ATerm m_6 (ATerm t)
                {
                  ATerm n_6 (ATerm t)
                  {
                    t = option_defined_1(t, FlatAlt_0);
                    return(t);
                  }
                  t = _2(t, n_6, flat_alt_0);
                  return(t);
                }
                t = try_1(t, m_6);
                {
                  ATerm o_6 (ATerm t)
                  {
                    ATerm p_6 (ATerm t)
                    {
                      t = option_defined_1(t, ReplaceAppl_0);
                      return(t);
                    }
                    t = _2(t, p_6, replace_appl_0);
                    return(t);
                  }
                  t = try_1(t, o_6);
                  {
                    ATerm q_6 (ATerm t)
                    {
                      ATerm r_6 (ATerm t)
                      {
                        t = option_defined_1(t, RemoveSeq_0);
                        return(t);
                      }
                      t = _2(t, r_6, remove_seq_0);
                      return(t);
                    }
                    t = try_1(t, q_6);
                    {
                      ATerm s_6 (ATerm t)
                      {
                        ATerm t_6 (ATerm t)
                        {
                          t = option_defined_1(t, RemovePT_0);
                          return(t);
                        }
                        t = _2(t, t_6, remove_pt_0);
                        return(t);
                      }
                      t = try_1(t, s_6);
                      {
                        ATerm u_6 (ATerm t)
                        {
                          ATerm e_100 = NULL;
                          e_100 = t;
                          {
                            if(((c_100 != NULL) && (c_100 != e_100)))
                              _fail(e_100);
                            else
                              c_100 = e_100;
                            t = _2(t, _id, implodeAsfix_0);
                          }
                          return(t);
                        }
                        t = try_1(t, u_6);
                      }
                    }
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
  ATerm j_100 = NULL;
  ATerm o_32;
  o_32 = t;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm k_100 = NULL,l_100 = NULL;
      k_100 = t;
      i_100 :
      if(match_cons(k_100, sym_Program_1))
        {
          l_100 = ATgetArgument(k_100, 0);
          if(((j_100 != NULL) && (j_100 != l_100)))
            _fail(l_100);
          else
            j_100 = l_100;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, v_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_32, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_r_32), not_null(j_100)), term_q_32));
      {
        t = printnl_0(t);
        {
          t = term_c_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = o_32;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm p_100 = NULL,q_100 = NULL,r_100 = NULL;
  p_100 = t;
  o_100 :
  if(match_cons(p_100, sym__2))
    {
      q_100 = ATgetArgument(p_100, 0);
      r_100 = ATgetArgument(p_100, 1);
      {
        ATerm s_32;
        s_32 = t;
        t = SSL_printnl(not_null(q_100), not_null(r_100));
        t = s_32;
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
  ATerm x_100 = NULL,y_100 = NULL,z_100 = NULL;
  x_100 = t;
  w_100 :
  if(match_cons(x_100, sym__2))
    {
      y_100 = ATgetArgument(x_100, 0);
      z_100 = ATgetArgument(x_100, 1);
      {
        t = not_null(y_100);
        {
          ATerm w_6 (ATerm t)
          {
            t = not_null(z_100);
            return(t);
          }
          t = at_end_1(t, w_6);
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
ATerm debug_1 (ATerm t, ATerm d_88 (ATerm))
{
  ATerm t_32;
  t_32 = t;
  {
    ATerm f_101 = NULL,h_101 = NULL;
    ATerm u_32;
    u_32 = t;
    {
      ATerm g_101 = NULL;
      t = d_88(t);
      {
        g_101 = t;
        if(((f_101 != NULL) && (f_101 != g_101)))
          _fail(g_101);
        else
          f_101 = g_101;
      }
    }
    t = u_32;
    {
      ATerm i_101 = NULL;
      i_101 = t;
      if(((h_101 != NULL) && (h_101 != i_101)))
        _fail(i_101);
      else
        h_101 = i_101;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(h_101)), not_null(f_101)));
        t = printnl_0(t);
      }
    }
  }
  t = t_32;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm m_101 = NULL;
  m_101 = t;
  t = SSL_is_string(not_null(m_101));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm v_32 = t;
  int w_32 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(w_32);
    }
  else
    {
      t = v_32;
      {
        ATerm x_32 = t;
        int y_32 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_6);
            LocalPopChoice(y_32);
          }
        else
          {
            t = x_32;
            {
              ATerm v_101 = NULL,w_101 = NULL,x_101 = NULL;
              v_101 = t;
              u_101 :
              if(match_cons(v_101, sym_Path_1))
                {
                  w_101 = ATgetArgument(v_101, 0);
                  t = not_null(w_101);
                }
              else
                {
                  if(match_cons(v_101, sym_Var_1))
                    {
                      w_101 = ATgetArgument(v_101, 0);
                      {
                        t = not_null(w_101);
                        {
                          ATerm z_32 = t;
                          int a_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(a_33);
                            }
                          else
                            {
                              t = z_32;
                              {
                                ATerm y_6 (ATerm t)
                                {
                                  t = term_b_33;
                                  return(t);
                                }
                                t = debug_1(t, y_6);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(v_101, sym_Prefix_2))
                        {
                          w_101 = ATgetArgument(v_101, 0);
                          x_101 = ATgetArgument(v_101, 1);
                          {
                            ATerm c_102 = NULL,e_102 = NULL;
                            ATerm c_33;
                            c_33 = t;
                            {
                              ATerm d_102 = NULL;
                              t = not_null(w_101);
                              {
                                t = eval_config_0(t);
                                {
                                  d_102 = t;
                                  if(((c_102 != NULL) && (c_102 != d_102)))
                                    _fail(d_102);
                                  else
                                    c_102 = d_102;
                                }
                              }
                            }
                            t = c_33;
                            {
                              ATerm f_102 = NULL;
                              t = not_null(x_101);
                              {
                                t = eval_config_0(t);
                                {
                                  f_102 = t;
                                  if(((e_102 != NULL) && (e_102 != f_102)))
                                    _fail(f_102);
                                  else
                                    e_102 = f_102;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(c_102), not_null(e_102));
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
  ATerm s_102 = NULL;
  s_102 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_j_33, not_null(s_102));
    {
      t = table_get_0(t);
      {
        ATerm z_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm l_33;
            l_33 = t;
            {
              ATerm u_102 = NULL;
              ATerm v_102 = NULL;
              v_102 = t;
              if(((u_102 != NULL) && (u_102 != v_102)))
                _fail(v_102);
              else
                u_102 = v_102;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_j_33, not_null(s_102), not_null(u_102));
                t = table_put_0(t);
              }
            }
            t = l_33;
          }
          return(t);
        }
        t = try_1(t, z_6);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm g_85 (ATerm))
{
  ATerm a_7 (ATerm t)
  {
    ATerm m_33;
    m_33 = t;
    {
      ATerm z_102 = NULL;
      ATerm a_103 = NULL;
      t = term_n_33;
      {
        t = get_config_0(t);
        {
          a_103 = t;
          if(((z_102 != NULL) && (z_102 != a_103)))
            _fail(a_103);
          else
            z_102 = a_103;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(z_102), term_o_33);
        t = geq_0(t);
      }
    }
    t = m_33;
    t = g_85(t);
    return(t);
  }
  t = try_1(t, a_7);
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_p_32, (ATerm) ATinsert(ATempty, term_p_33));
  {
    t = printnl_0(t);
    {
      t = term_c_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm d_103 = NULL;
  d_103 = t;
  t = SSL_TicksToSeconds(not_null(d_103));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm i_103 = NULL,j_103 = NULL,k_103 = NULL;
  i_103 = t;
  h_103 :
  if(match_cons(i_103, sym__2))
    {
      j_103 = ATgetArgument(i_103, 0);
      k_103 = ATgetArgument(i_103, 1);
      {
        ATerm q_33 = t;
        int r_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(j_103), not_null(k_103));
            LocalPopChoice(r_33);
          }
        else
          {
            t = q_33;
            t = SSL_addr(not_null(j_103), not_null(k_103));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm a_92 (ATerm), ATerm b_92 (ATerm))
{
  ATerm s_33 = t;
  int t_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = a_92(t);
      LocalPopChoice(t_33);
    }
  else
    {
      t = s_33;
      {
        ATerm r_103 = NULL,s_103 = NULL,t_103 = NULL;
        r_103 = t;
        q_103 :
        if(((ATgetType(r_103) == AT_LIST) && ((ATermList) r_103 != ATempty)))
          {
            s_103 = ATgetFirst((ATermList) r_103);
            t_103 = (ATerm) ATgetNext((ATermList) r_103);
            {
              ATerm y_103 = NULL;
              ATerm z_103 = NULL;
              t = not_null(t_103);
              {
                t = foldr_2(t, a_92, b_92);
                {
                  z_103 = t;
                  if(((y_103 != NULL) && (y_103 != z_103)))
                    _fail(z_103);
                  else
                    y_103 = z_103;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(s_103), not_null(y_103));
                t = b_92(t);
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
ATerm crush_2 (ATerm t, ATerm s_93 (ATerm), ATerm t_93 (ATerm))
{
  ATerm g_104 = NULL;
  ATerm i_104 = NULL;
  g_104 = t;
  {
    ATerm j_104 = NULL;
    ATerm l_104 = NULL,m_104 = NULL,n_104 = NULL;
    t = not_null(g_104);
    {
      j_104 = t;
      {
        t = SSL_explode_term(not_null(j_104));
        {
          l_104 = t;
          f_104 :
          if(match_cons(l_104, sym__2))
            {
              m_104 = ATgetArgument(l_104, 0);
              n_104 = ATgetArgument(l_104, 1);
              if(((i_104 != NULL) && (i_104 != n_104)))
                _fail(n_104);
              else
                i_104 = n_104;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(i_104);
      t = foldr_2(t, s_93, t_93);
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
    ATerm b_7 (ATerm t)
    {
      t = term_u_33;
      return(t);
    }
    t = crush_2(t, b_7, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm t_104 = NULL,u_104 = NULL,v_104 = NULL;
  t_104 = t;
  s_104 :
  if(match_cons(t_104, sym__2))
    {
      u_104 = ATgetArgument(t_104, 0);
      v_104 = ATgetArgument(t_104, 1);
      {
        ATerm v_33;
        v_33 = t;
        {
          ATerm w_33 = t;
          int x_33 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(u_104), not_null(v_104));
              LocalPopChoice(x_33);
            }
          else
            {
              t = w_33;
              t = SSL_gtr(not_null(u_104), not_null(v_104));
            }
        }
        t = v_33;
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
  ATerm b_105 = NULL;
  ATerm y_33 = t;
  int z_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_105 = NULL,d_105 = NULL,e_105 = NULL;
      c_105 = t;
      a_105 :
      if(match_cons(c_105, sym__2))
        {
          d_105 = ATgetArgument(c_105, 0);
          e_105 = ATgetArgument(c_105, 1);
          {
            if(((b_105 != NULL) && (b_105 != d_105)))
              _fail(d_105);
            else
              b_105 = d_105;
            if(((b_105 != NULL) && (b_105 != e_105)))
              _fail(e_105);
            else
              b_105 = e_105;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(z_33);
    }
  else
    {
      t = y_33;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm f_85 (ATerm))
{
  ATerm c_7 (ATerm t)
  {
    ATerm a_34;
    a_34 = t;
    {
      ATerm h_105 = NULL;
      ATerm i_105 = NULL;
      t = term_n_33;
      {
        t = get_config_0(t);
        {
          i_105 = t;
          if(((h_105 != NULL) && (h_105 != i_105)))
            _fail(i_105);
          else
            h_105 = i_105;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(h_105), term_c_18);
        t = geq_0(t);
      }
    }
    t = a_34;
    t = f_85(t);
    return(t);
  }
  t = try_1(t, c_7);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm d_7 (ATerm t)
  {
    ATerm m_105 = NULL,s_105 = NULL;
    ATerm b_34;
    b_34 = t;
    {
      ATerm r_105 = NULL;
      t = run_time_0(t);
      {
        r_105 = t;
        if(((m_105 != NULL) && (m_105 != r_105)))
          _fail(r_105);
        else
          m_105 = r_105;
      }
    }
    t = b_34;
    {
      ATerm t_105 = NULL;
      t = term_c_34;
      {
        t = get_config_0(t);
        {
          t_105 = t;
          if(((s_105 != NULL) && (s_105 != t_105)))
            _fail(t_105);
          else
            s_105 = t_105;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_e_34), not_null(m_105)), term_d_34), not_null(s_105)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, d_7);
  {
    t = term_u_33;
    t = exit_0(t);
  }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_105 = NULL,z_105 = NULL,a_106 = NULL;
  y_105 = t;
  x_105 :
  if(match_cons(y_105, sym__2))
    {
      z_105 = ATgetArgument(y_105, 0);
      a_106 = ATgetArgument(y_105, 1);
      t = SSL_WriteToTextFile(not_null(z_105), not_null(a_106));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm c_66 (ATerm), ATerm d_66 (ATerm))
{
  ATerm l_106 = NULL,m_106 = NULL,n_106 = NULL;
  l_106 = t;
  j_106 :
  if(match_cons(l_106, sym__2))
    {
      m_106 = ATgetArgument(l_106, 0);
      n_106 = ATgetArgument(l_106, 1);
      {
        ATerm r_106 = NULL,t_106 = NULL;
        ATerm s_106 = NULL;
        t = SSLgetAnnotations(not_null(l_106));
        {
          s_106 = t;
          if(((r_106 != NULL) && (r_106 != s_106)))
            _fail(s_106);
          else
            r_106 = s_106;
        }
        {
          t = not_null(m_106);
          {
            ATerm v_106 = NULL;
            t = c_66(t);
            {
              t_106 = t;
              {
                t = not_null(n_106);
                {
                  ATerm x_106 = NULL;
                  t = d_66(t);
                  {
                    v_106 = t;
                    {
                      ATerm y_106 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(t_106), not_null(v_106)), not_null(r_106));
                      {
                        y_106 = t;
                        if(((x_106 != NULL) && (x_106 != y_106)))
                          _fail(y_106);
                        else
                          x_106 = y_106;
                      }
                      t = not_null(x_106);
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
  ATerm w_107 = NULL,x_107 = NULL,y_107 = NULL;
  w_107 = t;
  v_107 :
  if(match_cons(w_107, sym__2))
    {
      x_107 = ATgetArgument(w_107, 0);
      y_107 = ATgetArgument(w_107, 1);
      t = SSL_WriteToBinaryFile(not_null(x_107), not_null(y_107));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm g_108 = NULL;
  ATerm f_34;
  f_34 = t;
  {
    ATerm e_7 (ATerm t)
    {
      ATerm g_34 = t;
      int h_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_7 (ATerm t)
          {
            ATerm h_108 = NULL,i_108 = NULL;
            h_108 = t;
            d_108 :
            if(match_cons(h_108, sym_Output_1))
              {
                i_108 = ATgetArgument(h_108, 0);
                if(((g_108 != NULL) && (g_108 != i_108)))
                  _fail(i_108);
                else
                  g_108 = i_108;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, f_7);
          LocalPopChoice(h_34);
        }
      else
        {
          t = g_34;
          {
            ATerm j_108 = NULL;
            t = term_i_34;
            {
              j_108 = t;
              if(((g_108 != NULL) && (g_108 != j_108)))
                _fail(j_108);
              else
                g_108 = j_108;
            }
          }
        }
      return(t);
    }
    t = _2(t, e_7, _id);
  }
  t = f_34;
  {
    ATerm g_7 (ATerm t)
    {
      ATerm h_7 (ATerm t)
      {
        t = not_null(g_108);
        return(t);
      }
      t = split_2(t, h_7, _id);
      return(t);
    }
    t = _2(t, _id, g_7);
    {
      ATerm j_34 = t;
      int k_34 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm i_7 (ATerm t)
          {
            ATerm j_7 (ATerm t)
            {
              ATerm k_108 = NULL;
              k_108 = t;
              f_108 :
              if(!(match_cons(k_108, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, j_7);
            return(t);
          }
          t = _2(t, i_7, WriteToBinaryFile_0);
          LocalPopChoice(k_34);
        }
      else
        {
          t = j_34;
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
ATerm apply_strategy_1 (ATerm t, ATerm k_81 (ATerm))
{
  ATerm q_108 = NULL,s_108 = NULL,t_108 = NULL,u_108 = NULL;
  ATerm r_34;
  r_34 = t;
  t = dtime_0(t);
  t = r_34;
  {
    t = k_81(t);
    {
      ATerm v_34;
      v_34 = t;
      {
        ATerm r_108 = NULL;
        t = dtime_0(t);
        {
          r_108 = t;
          if(((q_108 != NULL) && (q_108 != r_108)))
            _fail(r_108);
          else
            q_108 = r_108;
        }
      }
      t = v_34;
      {
        s_108 = t;
        p_108 :
        if(match_cons(s_108, sym__2))
          {
            t_108 = ATgetArgument(s_108, 0);
            u_108 = ATgetArgument(s_108, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(t_108)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(q_108))), not_null(u_108));
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
  ATerm a_109 = NULL;
  a_109 = t;
  t = SSL_ReadFromFile(not_null(a_109));
  return(t);
}
ATerm split_2 (ATerm t, ATerm o_90 (ATerm), ATerm p_90 (ATerm))
{
  ATerm f_109 = NULL,h_109 = NULL;
  ATerm w_34;
  w_34 = t;
  {
    ATerm g_109 = NULL;
    t = o_90(t);
    {
      g_109 = t;
      if(((f_109 != NULL) && (f_109 != g_109)))
        _fail(g_109);
      else
        f_109 = g_109;
    }
  }
  t = w_34;
  {
    ATerm i_109 = NULL;
    t = p_90(t);
    {
      i_109 = t;
      if(((h_109 != NULL) && (h_109 != i_109)))
        _fail(i_109);
      else
        h_109 = i_109;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(f_109), not_null(h_109));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm o_109 = NULL;
  ATerm x_34;
  x_34 = t;
  {
    ATerm y_34 = t;
    int z_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm k_7 (ATerm t)
        {
          ATerm p_109 = NULL,q_109 = NULL;
          p_109 = t;
          m_109 :
          if(match_cons(p_109, sym_Input_1))
            {
              q_109 = ATgetArgument(p_109, 0);
              if(((o_109 != NULL) && (o_109 != q_109)))
                _fail(q_109);
              else
                o_109 = q_109;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, k_7);
        LocalPopChoice(z_34);
      }
    else
      {
        t = y_34;
        {
          ATerm r_109 = NULL;
          t = term_e_35;
          {
            r_109 = t;
            if(((o_109 != NULL) && (o_109 != r_109)))
              _fail(r_109);
            else
              o_109 = r_109;
          }
        }
      }
  }
  t = x_34;
  {
    ATerm l_7 (ATerm t)
    {
      t = not_null(o_109);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, l_7);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm y_109 = NULL;
  y_109 = t;
  x_109 :
  if(match_cons(y_109, sym_Version_0))
    {
      ATerm a_110 = NULL,c_110 = NULL;
      ATerm f_35;
      f_35 = t;
      {
        ATerm b_110 = NULL;
        t = SSLgetAnnotations(not_null(y_109));
        {
          b_110 = t;
          if(((a_110 != NULL) && (a_110 != b_110)))
            _fail(b_110);
          else
            a_110 = b_110;
        }
      }
      t = f_35;
      {
        ATerm e_110 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(a_110));
        {
          e_110 = t;
          if(((c_110 != NULL) && (c_110 != e_110)))
            _fail(e_110);
          else
            c_110 = e_110;
        }
        t = not_null(c_110);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm i_81 (ATerm))
{
  ATerm m_7 (ATerm t)
  {
    ATerm j_35 = t;
    int k_35 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
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
              t = Undefined_1(t, _id);
              LocalPopChoice(m_35);
            }
          else
            {
              t = l_35;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, m_7);
  t = i_81(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm j_110 = NULL;
  j_110 = t;
  t = SSL_table_create(not_null(j_110));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm n_110 = NULL;
  n_110 = t;
  {
    ATerm n_35;
    n_35 = t;
    {
      t = term_o_35;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_o_35, term_p_35, not_null(n_110));
          t = table_put_0(t);
        }
      }
    }
    t = n_35;
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm r_110 = NULL;
  r_110 = t;
  t = SSL_string_to_int(not_null(r_110));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm a_111 = NULL,b_111 = NULL,c_111 = NULL,d_111 = NULL,e_111 = NULL;
  a_111 = t;
  x_110 :
  if(match_string(a_111, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(a_111) == AT_LIST) && ((ATermList) a_111 != ATempty)))
        {
          b_111 = ATgetFirst((ATermList) a_111);
          c_111 = (ATerm) ATgetNext((ATermList) a_111);
          z_110 :
          if(((ATgetType(c_111) == AT_LIST) && ((ATermList) c_111 != ATempty)))
            {
              d_111 = ATgetFirst((ATermList) c_111);
              e_111 = (ATerm) ATgetNext((ATermList) c_111);
              {
                ATerm i_111 = NULL;
                ATerm q_35;
                q_35 = t;
                {
                  t = not_null(b_111);
                  t = l_0(t);
                }
                t = q_35;
                {
                  ATerm j_111 = NULL;
                  t = not_null(d_111);
                  {
                    t = m_0(t);
                    {
                      j_111 = t;
                      if(((i_111 != NULL) && (i_111 != j_111)))
                        _fail(j_111);
                      else
                        i_111 = j_111;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(e_111)), not_null(i_111));
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
  ATerm d_36 = t;
  int e_36 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm n_7 (ATerm t)
      {
        ATerm d_112 = NULL;
        d_112 = t;
        n_111 :
        if(!(match_string(d_112, "-i")))
          {
            if(!(match_string(d_112, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm o_7 (ATerm t)
      {
        ATerm g_112 = NULL;
        ATerm f_36;
        f_36 = t;
        {
          ATerm e_112 = NULL;
          ATerm f_112 = NULL;
          f_112 = t;
          if(((e_112 != NULL) && (e_112 != f_112)))
            _fail(f_112);
          else
            e_112 = f_112;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_g_36, not_null(e_112));
            t = set_config_0(t);
          }
        }
        t = f_36;
        {
          ATerm h_112 = NULL;
          h_112 = t;
          if(((g_112 != NULL) && (g_112 != h_112)))
            _fail(h_112);
          else
            g_112 = h_112;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(g_112));
        }
        return(t);
      }
      ATerm p_7 (ATerm t)
      {
        t = term_h_36;
        return(t);
      }
      t = ArgOption_3(t, n_7, o_7, p_7);
      LocalPopChoice(e_36);
    }
  else
    {
      t = d_36;
      {
        ATerm i_36 = t;
        int l_36 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm q_7 (ATerm t)
            {
              ATerm i_112 = NULL;
              i_112 = t;
              q_111 :
              if(!(match_string(i_112, "-o")))
                {
                  if(!(match_string(i_112, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm r_7 (ATerm t)
            {
              ATerm l_112 = NULL;
              ATerm m_36;
              m_36 = t;
              {
                ATerm j_112 = NULL;
                ATerm k_112 = NULL;
                k_112 = t;
                if(((j_112 != NULL) && (j_112 != k_112)))
                  _fail(k_112);
                else
                  j_112 = k_112;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_n_36, not_null(j_112));
                  t = set_config_0(t);
                }
              }
              t = m_36;
              {
                ATerm m_112 = NULL;
                m_112 = t;
                if(((l_112 != NULL) && (l_112 != m_112)))
                  _fail(m_112);
                else
                  l_112 = m_112;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(l_112));
              }
              return(t);
            }
            ATerm s_7 (ATerm t)
            {
              t = term_o_36;
              return(t);
            }
            t = ArgOption_3(t, q_7, r_7, s_7);
            LocalPopChoice(l_36);
          }
        else
          {
            t = i_36;
            {
              ATerm p_36 = t;
              int q_36 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm t_7 (ATerm t)
                  {
                    ATerm n_112 = NULL;
                    n_112 = t;
                    u_111 :
                    if(!(match_string(n_112, "-S")))
                      {
                        if(!(match_string(n_112, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm u_7 (ATerm t)
                  {
                    t = term_r_36;
                    t = set_config_0(t);
                    t = term_u_36;
                    return(t);
                  }
                  ATerm v_7 (ATerm t)
                  {
                    t = term_v_36;
                    return(t);
                  }
                  t = Option_3(t, t_7, u_7, v_7);
                  LocalPopChoice(q_36);
                }
              else
                {
                  t = p_36;
                  {
                    ATerm y_36 = t;
                    int z_36 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm w_7 (ATerm t)
                        {
                          ATerm o_112 = NULL;
                          o_112 = t;
                          v_111 :
                          if(!(match_string(o_112, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm x_7 (ATerm t)
                        {
                          ATerm r_112 = NULL;
                          ATerm a_37;
                          a_37 = t;
                          {
                            ATerm p_112 = NULL;
                            ATerm q_112 = NULL;
                            t = string_to_int_0(t);
                            {
                              q_112 = t;
                              if(((p_112 != NULL) && (p_112 != q_112)))
                                _fail(q_112);
                              else
                                p_112 = q_112;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_n_33, not_null(p_112));
                              t = set_config_0(t);
                            }
                          }
                          t = a_37;
                          {
                            ATerm s_112 = NULL;
                            s_112 = t;
                            if(((r_112 != NULL) && (r_112 != s_112)))
                              _fail(s_112);
                            else
                              r_112 = s_112;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(r_112));
                          }
                          return(t);
                        }
                        ATerm b_8 (ATerm t)
                        {
                          t = term_b_37;
                          return(t);
                        }
                        t = ArgOption_3(t, w_7, x_7, b_8);
                        LocalPopChoice(z_36);
                      }
                    else
                      {
                        t = y_36;
                        {
                          ATerm c_37 = t;
                          int f_37 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm c_8 (ATerm t)
                              {
                                ATerm t_112 = NULL;
                                t_112 = t;
                                y_111 :
                                if(!(match_string(t_112, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm d_8 (ATerm t)
                              {
                                ATerm g_37;
                                g_37 = t;
                                {
                                  ATerm u_112 = NULL;
                                  ATerm v_112 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    v_112 = t;
                                    if(((u_112 != NULL) && (u_112 != v_112)))
                                      _fail(v_112);
                                    else
                                      u_112 = v_112;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_h_37, not_null(u_112));
                                    t = set_config_0(t);
                                  }
                                }
                                t = g_37;
                                return(t);
                              }
                              ATerm e_8 (ATerm t)
                              {
                                t = term_i_37;
                                return(t);
                              }
                              t = ArgOption_3(t, c_8, d_8, e_8);
                              LocalPopChoice(f_37);
                            }
                          else
                            {
                              t = c_37;
                              {
                                ATerm n_37 = t;
                                int o_37 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm f_8 (ATerm t)
                                    {
                                      ATerm w_112 = NULL;
                                      w_112 = t;
                                      a_112 :
                                      if(!(match_string(w_112, "-v")))
                                        {
                                          if(!(match_string(w_112, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm h_8 (ATerm t)
                                    {
                                      t = term_r_37;
                                      t = set_config_0(t);
                                      t = term_s_37;
                                      return(t);
                                    }
                                    ATerm i_8 (ATerm t)
                                    {
                                      t = term_u_37;
                                      return(t);
                                    }
                                    t = Option_3(t, f_8, h_8, i_8);
                                    LocalPopChoice(o_37);
                                  }
                                else
                                  {
                                    t = n_37;
                                    {
                                      ATerm v_37 = t;
                                      int w_37 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm j_8 (ATerm t)
                                          {
                                            ATerm x_112 = NULL;
                                            x_112 = t;
                                            b_112 :
                                            if(!(match_string(x_112, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm k_8 (ATerm t)
                                          {
                                            t = term_z_37;
                                            t = set_config_0(t);
                                            t = term_a_38;
                                            return(t);
                                          }
                                          ATerm l_8 (ATerm t)
                                          {
                                            t = term_b_38;
                                            return(t);
                                          }
                                          t = Option_3(t, j_8, k_8, l_8);
                                          LocalPopChoice(w_37);
                                        }
                                      else
                                        {
                                          t = v_37;
                                          {
                                            ATerm m_8 (ATerm t)
                                            {
                                              ATerm y_112 = NULL;
                                              y_112 = t;
                                              c_112 :
                                              if(!(match_string(y_112, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm n_8 (ATerm t)
                                            {
                                              t = term_d_38;
                                              t = set_config_0(t);
                                              t = term_g_38;
                                              return(t);
                                            }
                                            ATerm o_8 (ATerm t)
                                            {
                                              t = term_h_38;
                                              return(t);
                                            }
                                            t = Option_3(t, m_8, n_8, o_8);
                                          }
                                        }
                                    }
                                  }
                              }
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
  ATerm h_113 = NULL;
  h_113 = t;
  t = SSL_table_destroy(not_null(h_113));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_113 = NULL;
  l_113 = t;
  t = SSL_exit(not_null(l_113));
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm p_113 = NULL;
  p_113 = t;
  t = SSL_implode_string(not_null(p_113));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm f_98 (ATerm))
{
  ATerm s_113 (ATerm t)
  {
    ATerm i_38 = t;
    int g_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, s_113);
        LocalPopChoice(g_39);
      }
    else
      {
        t = i_38;
        {
          t = Nil_0(t);
          t = f_98(t);
        }
      }
    return(t);
  }
  t = s_113(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_39 = t;
  int j_39 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(j_39);
    }
  else
    {
      t = h_39;
      {
        ATerm v_113 = NULL,w_113 = NULL,x_113 = NULL;
        v_113 = t;
        u_113 :
        if(((ATgetType(v_113) == AT_LIST) && ((ATermList) v_113 != ATempty)))
          {
            w_113 = ATgetFirst((ATermList) v_113);
            x_113 = (ATerm) ATgetNext((ATermList) v_113);
            {
              t = not_null(w_113);
              {
                ATerm r_8 (ATerm t)
                {
                  t = not_null(x_113);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, r_8);
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
  ATerm d_114 = NULL;
  d_114 = t;
  t = SSL_explode_string(not_null(d_114));
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
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_m_39), term_l_39), term_k_39);
  return(t);
}
ATerm map_1 (ATerm t, ATerm q_97 (ATerm))
{
  ATerm g_114 (ATerm t)
  {
    ATerm n_39 = t;
    int r_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(r_39);
      }
    else
      {
        t = n_39;
        t = Cons_2(t, q_97, g_114);
      }
    return(t);
  }
  t = g_114(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm n_114 = NULL,o_114 = NULL,p_114 = NULL;
  p_114 = t;
  m_114 :
  if(((ATgetType(p_114) == AT_LIST) && ((ATermList) p_114 != ATempty)))
    {
      n_114 = ATgetFirst((ATermList) p_114);
      o_114 = (ATerm) ATgetNext((ATermList) p_114);
      {
        ATerm s_114 = NULL;
        t = not_null(o_114);
        {
          ATerm w_39;
          w_39 = t;
          {
            ATerm t_114 = NULL,v_114 = NULL,x_114 = NULL;
            ATerm x_39;
            x_39 = t;
            {
              ATerm u_114 = NULL;
              t = j_0(t);
              {
                u_114 = t;
                if(((t_114 != NULL) && (t_114 != u_114)))
                  _fail(u_114);
                else
                  t_114 = u_114;
              }
            }
            t = x_39;
            {
              ATerm w_114 = NULL;
              t = not_null(n_114);
              {
                t = i_0(t);
                {
                  w_114 = t;
                  if(((v_114 != NULL) && (v_114 != w_114)))
                    _fail(w_114);
                  else
                    v_114 = w_114;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(t_114)), not_null(v_114));
                {
                  x_114 = t;
                  if(((s_114 != NULL) && (s_114 != x_114)))
                    _fail(x_114);
                  else
                    s_114 = x_114;
                }
              }
            }
          }
          t = w_39;
          {
            ATerm s_8 (ATerm t)
            {
              t = not_null(s_114);
              return(t);
            }
            t = reverse_acc_2(t, i_0, s_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) p_114 == ATempty))
        {
          {
            t = term_q_37;
            t = j_0(t);
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
  ATerm t_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, t_8);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm e_115 = NULL;
  ATerm f_115 = NULL;
  t = term_q_37;
  {
    t = h_0(t);
    {
      f_115 = t;
      if(((e_115 != NULL) && (e_115 != f_115)))
        _fail(f_115);
      else
        e_115 = f_115;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_z_39), not_null(e_115)), term_y_39);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm a_75 (ATerm))
{
  ATerm m_115 = NULL,n_115 = NULL;
  m_115 = t;
  l_115 :
  if(match_cons(m_115, sym_Program_1))
    {
      n_115 = ATgetArgument(m_115, 0);
      {
        ATerm q_115 = NULL,s_115 = NULL;
        ATerm r_115 = NULL;
        t = SSLgetAnnotations(not_null(m_115));
        {
          r_115 = t;
          if(((q_115 != NULL) && (q_115 != r_115)))
            _fail(r_115);
          else
            q_115 = r_115;
        }
        {
          t = not_null(n_115);
          {
            ATerm u_115 = NULL;
            t = a_75(t);
            {
              s_115 = t;
              {
                ATerm v_115 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(s_115)), not_null(q_115));
                {
                  v_115 = t;
                  if(((u_115 != NULL) && (u_115 != v_115)))
                    _fail(v_115);
                  else
                    u_115 = v_115;
                }
                t = not_null(u_115);
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
  ATerm e_116 = NULL;
  ATerm u_8 (ATerm t)
  {
    ATerm x_8 (ATerm t)
    {
      ATerm f_116 = NULL;
      f_116 = t;
      if(((e_116 != NULL) && (e_116 != f_116)))
        _fail(f_116);
      else
        e_116 = f_116;
      return(t);
    }
    t = Program_1(t, x_8);
    return(t);
  }
  t = option_defined_1(t, u_8);
  {
    ATerm y_8 (ATerm t)
    {
      ATerm g_116 = NULL;
      ATerm h_116 = NULL;
      t = term_q_37;
      {
        ATerm z_8 (ATerm t)
        {
          t = not_null(e_116);
          return(t);
        }
        t = short_description_1(t, z_8);
        {
          t = concat_strings_0(t);
          {
            h_116 = t;
            if(((g_116 != NULL) && (g_116 != h_116)))
              _fail(h_116);
            else
              g_116 = h_116;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_p_32, (ATerm) ATinsert(ATempty, not_null(g_116)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, y_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_p_32, (ATerm) ATinsert(ATempty, term_a_40));
      {
        t = printnl_0(t);
        {
          t = term_d_40;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_9 (ATerm t)
                {
                  ATerm i_116 = NULL;
                  i_116 = t;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_p_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(i_116)), term_e_40));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_9);
                {
                  ATerm b_9 (ATerm t)
                  {
                    ATerm k_116 = NULL;
                    ATerm l_116 = NULL;
                    t = term_q_37;
                    {
                      ATerm c_9 (ATerm t)
                      {
                        t = not_null(e_116);
                        return(t);
                      }
                      t = long_description_1(t, c_9);
                      {
                        t = concat_strings_0(t);
                        {
                          l_116 = t;
                          if(((k_116 != NULL) && (k_116 != l_116)))
                            _fail(l_116);
                          else
                            k_116 = l_116;
                        }
                      }
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_p_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_116)), term_j_40));
                      t = printnl_0(t);
                    }
                    return(t);
                  }
                  t = try_1(t, b_9);
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
ATerm Undefined_1 (ATerm t, ATerm b_75 (ATerm))
{
  ATerm v_116 = NULL,w_116 = NULL;
  v_116 = t;
  u_116 :
  if(match_cons(v_116, sym_Undefined_1))
    {
      w_116 = ATgetArgument(v_116, 0);
      {
        ATerm z_116 = NULL,b_117 = NULL;
        ATerm a_117 = NULL;
        t = SSLgetAnnotations(not_null(v_116));
        {
          a_117 = t;
          if(((z_116 != NULL) && (z_116 != a_117)))
            _fail(a_117);
          else
            z_116 = a_117;
        }
        {
          t = not_null(w_116);
          {
            ATerm d_117 = NULL;
            t = b_75(t);
            {
              b_117 = t;
              {
                ATerm e_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(b_117)), not_null(z_116));
                {
                  e_117 = t;
                  if(((d_117 != NULL) && (d_117 != e_117)))
                    _fail(e_117);
                  else
                    d_117 = e_117;
                }
                t = not_null(d_117);
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
ATerm fetch_1 (ATerm t, ATerm z_97 (ATerm))
{
  ATerm j_117 (ATerm t)
  {
    ATerm k_40 = t;
    int l_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, z_97, _id);
        LocalPopChoice(l_40);
      }
    else
      {
        t = k_40;
        t = Cons_2(t, _id, j_117);
      }
    return(t);
  }
  t = j_117(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm m_87 (ATerm))
{
  t = fetch_1(t, m_87);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_117 = NULL;
  o_117 = t;
  n_117 :
  if(match_cons(o_117, sym_Help_0))
    {
      ATerm q_117 = NULL,s_117 = NULL;
      ATerm m_40;
      m_40 = t;
      {
        ATerm r_117 = NULL;
        t = SSLgetAnnotations(not_null(o_117));
        {
          r_117 = t;
          if(((q_117 != NULL) && (q_117 != r_117)))
            _fail(r_117);
          else
            q_117 = r_117;
        }
      }
      t = m_40;
      {
        ATerm t_117 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_117));
        {
          t_117 = t;
          if(((s_117 != NULL) && (s_117 != t_117)))
            _fail(t_117);
          else
            s_117 = t_117;
        }
        t = not_null(s_117);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm k_106 (ATerm))
{
  ATerm n_40 = t;
  int o_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = k_106(t);
      LocalPopChoice(o_40);
    }
  else
    {
      t = n_40;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_117 = NULL,a_118 = NULL,b_118 = NULL;
  z_117 = t;
  y_117 :
  if(match_cons(z_117, sym__2))
    {
      a_118 = ATgetArgument(z_117, 0);
      b_118 = ATgetArgument(z_117, 1);
      t = SSL_table_get(not_null(a_118), not_null(b_118));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_118 = NULL,j_118 = NULL,k_118 = NULL,l_118 = NULL;
  i_118 = t;
  h_118 :
  if(match_cons(i_118, sym__3))
    {
      j_118 = ATgetArgument(i_118, 0);
      k_118 = ATgetArgument(i_118, 1);
      l_118 = ATgetArgument(i_118, 2);
      {
        ATerm p_40;
        p_40 = t;
        {
          ATerm p_118 = NULL;
          ATerm q_118 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_118), not_null(k_118));
          {
            ATerm q_40 = t;
            int r_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(r_40);
              }
            else
              {
                t = q_40;
                t = (ATerm) ATempty;
              }
            {
              q_118 = t;
              if(((p_118 != NULL) && (p_118 != q_118)))
                _fail(q_118);
              else
                p_118 = q_118;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_118), not_null(k_118), (ATerm) ATinsert(CheckATermList(not_null(p_118)), not_null(l_118)));
            t = table_put_0(t);
          }
        }
        t = p_40;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm m_86 (ATerm))
{
  ATerm u_118 = NULL;
  ATerm v_118 = NULL;
  t = term_q_37;
  {
    t = m_86(t);
    {
      v_118 = t;
      if(((u_118 != NULL) && (u_118 != v_118)))
        _fail(v_118);
      else
        u_118 = v_118;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_b_40, term_c_40, not_null(u_118));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm b_119 = NULL,c_119 = NULL,d_119 = NULL;
  b_119 = t;
  a_119 :
  if(match_string(b_119, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(b_119) == AT_LIST) && ((ATermList) b_119 != ATempty)))
        {
          c_119 = ATgetFirst((ATermList) b_119);
          d_119 = (ATerm) ATgetNext((ATermList) b_119);
          {
            ATerm g_119 = NULL;
            ATerm s_40;
            s_40 = t;
            {
              t = not_null(c_119);
              t = a_0(t);
            }
            t = s_40;
            {
              ATerm h_119 = NULL;
              t = term_q_37;
              {
                t = b_0(t);
                {
                  h_119 = t;
                  if(((g_119 != NULL) && (g_119 != h_119)))
                    _fail(h_119);
                  else
                    g_119 = h_119;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(d_119)), not_null(g_119));
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
  ATerm d_9 (ATerm t)
  {
    ATerm m_119 = NULL;
    m_119 = t;
    l_119 :
    if(!(match_string(m_119, "--help")))
      {
        if(!(match_string(m_119, "-h")))
          {
            if(!(match_string(m_119, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    t = term_t_40;
    return(t);
  }
  ATerm f_9 (ATerm t)
  {
    t = term_u_40;
    return(t);
  }
  t = Option_3(t, d_9, e_9, f_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm p_119 = NULL,q_119 = NULL,r_119 = NULL;
  p_119 = t;
  o_119 :
  if(((ATgetType(p_119) == AT_LIST) && ((ATermList) p_119 != ATempty)))
    {
      q_119 = ATgetFirst((ATermList) p_119);
      r_119 = (ATerm) ATgetNext((ATermList) p_119);
      t = (ATerm) ATinsert(CheckATermList(not_null(r_119)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(q_119)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm w_79 (ATerm), ATerm x_79 (ATerm))
{
  ATerm b_120 = NULL,c_120 = NULL,d_120 = NULL;
  b_120 = t;
  a_120 :
  if(((ATgetType(b_120) == AT_LIST) && ((ATermList) b_120 != ATempty)))
    {
      c_120 = ATgetFirst((ATermList) b_120);
      d_120 = (ATerm) ATgetNext((ATermList) b_120);
      {
        ATerm h_120 = NULL,j_120 = NULL;
        ATerm i_120 = NULL;
        t = SSLgetAnnotations(not_null(b_120));
        {
          i_120 = t;
          if(((h_120 != NULL) && (h_120 != i_120)))
            _fail(i_120);
          else
            h_120 = i_120;
        }
        {
          t = not_null(c_120);
          {
            ATerm l_120 = NULL;
            t = w_79(t);
            {
              j_120 = t;
              {
                t = not_null(d_120);
                {
                  ATerm n_120 = NULL;
                  t = x_79(t);
                  {
                    l_120 = t;
                    {
                      ATerm o_120 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(l_120)), not_null(j_120)), not_null(h_120));
                      {
                        o_120 = t;
                        if(((n_120 != NULL) && (n_120 != o_120)))
                          _fail(o_120);
                        else
                          n_120 = o_120;
                      }
                      t = not_null(n_120);
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
  ATerm y_120 = NULL;
  y_120 = t;
  x_120 :
  if(((ATermList) y_120 == ATempty))
    {
      {
        ATerm a_121 = NULL,c_121 = NULL;
        ATerm v_40;
        v_40 = t;
        {
          ATerm b_121 = NULL;
          t = SSLgetAnnotations(not_null(y_120));
          {
            b_121 = t;
            if(((a_121 != NULL) && (a_121 != b_121)))
              _fail(b_121);
            else
              a_121 = b_121;
          }
        }
        t = v_40;
        {
          ATerm d_121 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(a_121));
          {
            d_121 = t;
            if(((c_121 != NULL) && (c_121 != d_121)))
              _fail(d_121);
            else
              c_121 = d_121;
          }
          t = not_null(c_121);
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
  ATerm j_121 = NULL,k_121 = NULL,l_121 = NULL;
  j_121 = t;
  i_121 :
  if(match_cons(j_121, sym__2))
    {
      k_121 = ATgetArgument(j_121, 0);
      l_121 = ATgetArgument(j_121, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_j_33, not_null(k_121), not_null(l_121));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm k_86 (ATerm))
{
  ATerm w_40;
  w_40 = t;
  {
    ATerm g_9 (ATerm t)
    {
      t = term_x_40;
      t = k_86(t);
      return(t);
    }
    t = try_1(t, g_9);
  }
  t = w_40;
  {
    ATerm h_9 (ATerm t)
    {
      ATerm t_121 = NULL;
      ATerm y_40;
      y_40 = t;
      {
        ATerm r_121 = NULL;
        ATerm s_121 = NULL;
        s_121 = t;
        if(((r_121 != NULL) && (r_121 != s_121)))
          _fail(s_121);
        else
          r_121 = s_121;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_34, not_null(r_121));
          t = set_config_0(t);
        }
      }
      t = y_40;
      {
        ATerm u_121 = NULL;
        u_121 = t;
        if(((t_121 != NULL) && (t_121 != u_121)))
          _fail(u_121);
        else
          t_121 = u_121;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(t_121));
      }
      return(t);
    }
    ATerm i_9 (ATerm t)
    {
      ATerm z_40 = t;
      int a_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm b_41 = t;
          int c_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(c_41);
            }
          else
            {
              t = b_41;
              {
                t = k_86(t);
                t = Cons_2(t, _id, i_9);
              }
            }
          LocalPopChoice(a_41);
        }
      else
        {
          t = z_40;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, h_9, i_9);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm a_122 = NULL,b_122 = NULL,c_122 = NULL;
  ATerm d_41;
  d_41 = t;
  {
    ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL,g_122 = NULL;
    d_122 = t;
    z_121 :
    if(match_cons(d_122, sym__3))
      {
        e_122 = ATgetArgument(d_122, 0);
        f_122 = ATgetArgument(d_122, 1);
        g_122 = ATgetArgument(d_122, 2);
        {
          if(((a_122 != NULL) && (a_122 != e_122)))
            _fail(e_122);
          else
            a_122 = e_122;
          {
            if(((b_122 != NULL) && (b_122 != f_122)))
              _fail(f_122);
            else
              b_122 = f_122;
            {
              if(((c_122 != NULL) && (c_122 != g_122)))
                _fail(g_122);
              else
                c_122 = g_122;
              t = SSL_table_put(not_null(a_122), not_null(b_122), not_null(c_122));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = d_41;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm j_122 = NULL;
  ATerm e_41;
  e_41 = t;
  {
    t = term_f_41;
    t = table_put_0(t);
  }
  t = e_41;
  {
    ATerm j_9 (ATerm t)
    {
      ATerm g_41 = t;
      int h_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = j_86(t);
          LocalPopChoice(h_41);
        }
      else
        {
          t = g_41;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_9);
    {
      ATerm k_9 (ATerm t)
      {
        ATerm k_41 = t;
        int p_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_u_33;
                t = exit_0(t);
              }
            }
            LocalPopChoice(p_41);
          }
        else
          {
            t = k_41;
            {
              ATerm l_9 (ATerm t)
              {
                ATerm m_9 (ATerm t)
                {
                  ATerm k_122 = NULL;
                  k_122 = t;
                  if(((j_122 != NULL) && (j_122 != k_122)))
                    _fail(k_122);
                  else
                    j_122 = k_122;
                  return(t);
                }
                t = Undefined_1(t, m_9);
                return(t);
              }
              t = option_defined_1(t, l_9);
              {
                ATerm q_41;
                q_41 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_p_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(j_122)), term_v_41));
                  t = printnl_0(t);
                }
                t = q_41;
                {
                  t = system_usage_0(t);
                  {
                    t = term_c_18;
                    t = exit_0(t);
                  }
                }
              }
            }
          }
        return(t);
      }
      t = try_1(t, k_9);
      {
        ATerm w_41;
        w_41 = t;
        {
          t = term_b_40;
          t = table_destroy_0(t);
        }
        t = w_41;
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm w_80 (ATerm), ATerm x_80 (ATerm), ATerm y_80 (ATerm), ATerm z_80 (ATerm))
{
  ATerm n_9 (ATerm t)
  {
    ATerm x_41 = t;
    int y_41 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = x_80(t);
        LocalPopChoice(y_41);
      }
    else
      {
        t = x_41;
        t = io_options_0(t);
      }
    return(t);
  }
  t = parse_options_1(t, n_9);
  {
    t = store_options_0(t);
    {
      t = z_80(t);
      {
        ATerm z_41 = t;
        int a_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, y_80);
            LocalPopChoice(a_42);
          }
        else
          {
            t = z_41;
            {
              ATerm c_42 = t;
              int d_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = input_file_0(t);
                  {
                    t = apply_strategy_1(t, w_80);
                    {
                      t = output_file_0(t);
                      t = report_success_0(t);
                    }
                  }
                  LocalPopChoice(d_42);
                }
              else
                {
                  t = c_42;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm q_80 (ATerm), ATerm r_80 (ATerm), ATerm s_80 (ATerm))
{
  ATerm o_9 (ATerm t)
  {
    ATerm p_9 (ATerm t)
    {
      ATerm e_42;
      e_42 = t;
      {
        ATerm n_122 = NULL;
        ATerm o_122 = NULL;
        t = term_c_34;
        {
          t = get_config_0(t);
          {
            o_122 = t;
            if(((n_122 != NULL) && (n_122 != o_122)))
              _fail(o_122);
            else
              n_122 = o_122;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_p_32, (ATerm) ATinsert(ATempty, not_null(n_122)));
          t = printnl_0(t);
        }
      }
      t = e_42;
      return(t);
    }
    t = if_verbose2_1(t, p_9);
    return(t);
  }
  t = iowrap_4(t, q_80, r_80, s_80, o_9);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm o_80 (ATerm), ATerm p_80 (ATerm))
{
  t = iowrap_3(t, o_80, p_80, default_usage_0);
  return(t);
}
ATerm implode_asfix_0 (ATerm t)
{
  t = iowrap_2(t, implode_0, implode_options_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = implode_asfix_0(t);
  return(t);
}

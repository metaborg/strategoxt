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
ATerm term_y_41;
ATerm term_s_41;
ATerm term_d_41;
ATerm term_a_41;
ATerm term_z_40;
ATerm term_m_40;
ATerm term_l_40;
ATerm term_k_40;
ATerm term_j_40;
ATerm term_i_40;
ATerm term_h_40;
ATerm term_c_40;
ATerm term_b_40;
ATerm term_l_39;
ATerm term_k_39;
ATerm term_j_39;
ATerm term_h_39;
ATerm term_g_39;
ATerm term_a_38;
ATerm term_z_37;
ATerm term_y_37;
ATerm term_k_37;
ATerm term_f_37;
ATerm term_c_37;
ATerm term_b_37;
ATerm term_a_37;
ATerm term_z_36;
ATerm term_y_36;
ATerm term_w_36;
ATerm term_v_36;
ATerm term_s_36;
ATerm term_r_36;
ATerm term_q_36;
ATerm term_o_36;
ATerm term_n_36;
ATerm term_g_36;
ATerm term_f_36;
ATerm term_p_35;
ATerm term_l_35;
ATerm term_k_35;
ATerm term_j_35;
ATerm term_f_35;
ATerm term_y_34;
ATerm term_x_34;
ATerm term_k_34;
ATerm term_j_34;
ATerm term_e_34;
ATerm term_v_33;
ATerm term_r_33;
ATerm term_q_33;
ATerm term_n_33;
ATerm term_l_33;
ATerm term_x_32;
ATerm term_w_32;
ATerm term_v_32;
ATerm term_t_30;
ATerm term_r_29;
ATerm term_q_29;
ATerm term_p_29;
ATerm term_j_29;
ATerm term_h_29;
ATerm term_f_29;
ATerm term_d_29;
ATerm term_c_29;
ATerm term_o_28;
ATerm term_n_28;
ATerm term_l_28;
ATerm term_k_28;
ATerm term_j_28;
ATerm term_i_28;
ATerm term_h_28;
ATerm term_g_28;
ATerm term_f_28;
ATerm term_a_28;
ATerm term_z_27;
ATerm term_j_27;
ATerm term_e_27;
ATerm term_d_18;
ATerm term_a_17;
ATerm term_w_16;
ATerm term_v_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_g_16;
ATerm term_f_16;
ATerm term_e_16;
ATerm term_d_16;
ATerm term_m_14;
ATerm term_s_11;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_z_10;
ATerm term_w_10;
ATerm term_v_10;
ATerm term_s_10;
ATerm term_r_10;
ATerm term_o_10;
ATerm term_n_10;
ATerm term_k_10;
ATerm term_j_10;
ATerm term_g_10;
ATerm term_f_10;
ATerm term_c_10;
ATerm term_b_10;
ATerm term_y_9;
ATerm term_x_9;
ATerm term_u_9;
ATerm term_t_9;
void init_constant_terms (void)
{
  ATprotect(&(term_t_9));
  term_t_9 = (ATerm) ATmakeAppl(sym_FlatLex_0);
  ATprotect(&(term_u_9));
  term_u_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--lex            Flatten lexical substrings to strings", 0, ATtrue));
  ATprotect(&(term_x_9));
  term_x_9 = (ATerm) ATmakeAppl(sym_RemoveLayout_0);
  ATprotect(&(term_y_9));
  term_y_9 = (ATerm) ATmakeAppl(ATmakeSymbol("--layout         Remove layout nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_b_10));
  term_b_10 = (ATerm) ATmakeAppl(sym_RemoveLit_0);
  ATprotect(&(term_c_10));
  term_c_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--lit            Remove literal nodes from the AsFix? parse tree", 0, ATtrue));
  ATprotect(&(term_f_10));
  term_f_10 = (ATerm) ATmakeAppl(sym_FlatAlt_0);
  ATprotect(&(term_g_10));
  term_g_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--alt            Flat alternatives", 0, ATtrue));
  ATprotect(&(term_j_10));
  term_j_10 = (ATerm) ATmakeAppl(sym_ReplaceAppl_0);
  ATprotect(&(term_k_10));
  term_k_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--appl           Replace 'appl' applications by constructor applications", 0, ATtrue));
  ATprotect(&(term_n_10));
  term_n_10 = (ATerm) ATmakeAppl(sym_ApplToSort_0);
  ATprotect(&(term_o_10));
  term_o_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--nt             Replace 'appl' applications by non-terminal application", 0, ATtrue));
  ATprotect(&(term_r_10));
  term_r_10 = (ATerm) ATmakeAppl(sym_FlatInj_0);
  ATprotect(&(term_s_10));
  term_s_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--inj            Remove injections from the parse tree.", 0, ATtrue));
  ATprotect(&(term_v_10));
  term_v_10 = (ATerm) ATmakeAppl(sym_FlatList_0);
  ATprotect(&(term_w_10));
  term_w_10 = (ATerm) ATmakeAppl(ATmakeSymbol("--list           Flatten lists.", 0, ATtrue));
  ATprotect(&(term_z_10));
  term_z_10 = (ATerm) ATmakeAppl(sym_RemoveSeq_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--seq            Replace sequences by tuples", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(sym_RemovePT_0);
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeAppl(ATmakeSymbol("--pt             Remove the outer 'pt' function symbol from the parse tree", 0, ATtrue));
  ATprotect(&(term_s_11));
  term_s_11 = (ATerm) ATmakeAppl(sym_None_0);
  ATprotect(&(term_m_14));
  term_m_14 = (ATerm) ATmakeAppl(ATmakeSymbol("", 0, ATtrue));
  ATprotect(&(term_d_16));
  term_d_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Sorts", 0, ATtrue));
  ATprotect(&(term_e_16));
  term_e_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Imports", 0, ATtrue));
  ATprotect(&(term_f_16));
  term_f_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Id", 0, ATtrue));
  ATprotect(&(term_g_16));
  term_g_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Hiddens", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Exports", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Module", 0, ATtrue));
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Some", 0, ATtrue));
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Ins", 0, ATtrue));
  ATprotect(&(term_v_16));
  term_v_16 = (ATerm) ATmakeAppl(ATmakeSymbol("Conc", 0, ATtrue));
  ATprotect(&(term_w_16));
  term_w_16 = (ATerm) ATmakeAppl(ATmakeSymbol("None", 0, ATtrue));
  ATprotect(&(term_a_17));
  term_a_17 = (ATerm) ATmakeAppl(ATmakeSymbol("Nil", 0, ATtrue));
  ATprotect(&(term_d_18));
  term_d_18 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_e_27));
  term_e_27 = (ATerm) ATmakeInt(92);
  ATprotect(&(term_j_27));
  term_j_27 = (ATerm) ATmakeInt(34);
  ATprotect(&(term_z_27));
  term_z_27 = (ATerm) ATmakeAppl(ATmakeSymbol("<", 0, ATtrue));
  ATprotect(&(term_a_28));
  term_a_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-CF>", 0, ATtrue));
  ATprotect(&(term_f_28));
  term_f_28 = (ATerm) ATmakeAppl(ATmakeSymbol("-LEX>", 0, ATtrue));
  ATprotect(&(term_g_28));
  term_g_28 = (ATerm) ATmakeAppl(ATmakeSymbol("()", 0, ATtrue));
  ATprotect(&(term_h_28));
  term_h_28 = (ATerm) ATmakeAppl(ATmakeSymbol("(", 0, ATtrue));
  ATprotect(&(term_i_28));
  term_i_28 = (ATerm) ATmakeAppl(ATmakeSymbol(")", 0, ATtrue));
  ATprotect(&(term_j_28));
  term_j_28 = (ATerm) ATmakeAppl(ATmakeSymbol("opt", 0, ATtrue));
  ATprotect(&(term_k_28));
  term_k_28 = (ATerm) ATmakeAppl(ATmakeSymbol("+", 0, ATtrue));
  ATprotect(&(term_l_28));
  term_l_28 = (ATerm) ATmakeAppl(ATmakeSymbol("*", 0, ATtrue));
  ATprotect(&(term_n_28));
  term_n_28 = (ATerm) ATmakeAppl(ATmakeSymbol("{", 0, ATtrue));
  ATprotect(&(term_o_28));
  term_o_28 = (ATerm) ATmakeAppl(ATmakeSymbol("}+", 0, ATtrue));
  ATprotect(&(term_c_29));
  term_c_29 = (ATerm) ATmakeAppl(ATmakeSymbol("}*", 0, ATtrue));
  ATprotect(&(term_d_29));
  term_d_29 = (ATerm) ATmakeAppl(ATmakeSymbol("n", 0, ATtrue));
  ATprotect(&(term_f_29));
  term_f_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Setof", 0, ATtrue));
  ATprotect(&(term_h_29));
  term_h_29 = (ATerm) ATmakeAppl(ATmakeSymbol("and", 0, ATtrue));
  ATprotect(&(term_j_29));
  term_j_29 = (ATerm) ATmakeAppl(ATmakeSymbol("to", 0, ATtrue));
  ATprotect(&(term_p_29));
  term_p_29 = (ATerm) ATmakeAppl(ATmakeSymbol("|", 0, ATtrue));
  ATprotect(&(term_q_29));
  term_q_29 = (ATerm) ATmakeAppl(ATmakeSymbol("Permof", 0, ATtrue));
  ATprotect(&(term_r_29));
  term_r_29 = (ATerm) ATmakeAppl(ATmakeSymbol("LAYOUT", 0, ATtrue));
  ATprotect(&(term_t_30));
  term_t_30 = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATempty);
  ATprotect(&(term_v_32));
  term_v_32 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_w_32));
  term_w_32 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_x_32));
  term_x_32 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_l_33));
  term_l_33 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_n_33));
  term_n_33 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_q_33));
  term_q_33 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_r_33));
  term_r_33 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_v_33));
  term_v_33 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_e_34));
  term_e_34 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_j_34));
  term_j_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_k_34));
  term_k_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_x_34));
  term_x_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_y_34));
  term_y_34 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_f_35));
  term_f_35 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_j_35));
  term_j_35 = (ATerm) ATmakeAppl(sym__2, term_q_33, term_f_35);
  ATprotect(&(term_k_35));
  term_k_35 = (ATerm) ATmakeAppl(sym_Verbose_1, term_f_35);
  ATprotect(&(term_l_35));
  term_l_35 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_p_35));
  term_p_35 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_f_36));
  term_f_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_g_36));
  term_g_36 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i         Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_n_36));
  term_n_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_o_36));
  term_o_36 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_q_36));
  term_q_36 = (ATerm) ATmakeAppl(sym__2, term_n_36, term_o_36);
  ATprotect(&(term_r_36));
  term_r_36 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_s_36));
  term_s_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_v_36));
  term_v_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_w_36));
  term_w_36 = (ATerm) ATmakeAppl(sym__2, term_v_36, term_o_36);
  ATprotect(&(term_y_36));
  term_y_36 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_z_36));
  term_z_36 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_a_37));
  term_a_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_b_37));
  term_b_37 = (ATerm) ATmakeAppl(sym__2, term_a_37, term_o_36);
  ATprotect(&(term_c_37));
  term_c_37 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_f_37));
  term_f_37 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_k_37));
  term_k_37 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_y_37));
  term_y_37 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_z_37));
  term_z_37 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_a_38));
  term_a_38 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_39));
  term_g_39 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_h_39));
  term_h_39 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_j_39));
  term_j_39 = (ATerm) ATmakeAppl(ATmakeSymbol("The implode-asfix utility maps an AsFix parse tree to an abstract syntax tree.\n", 0, ATtrue));
  ATprotect(&(term_k_39));
  term_k_39 = (ATerm) ATmakeAppl(ATmakeSymbol("Without any switches, a full implosion is performed. By specifying any switches,\n", 0, ATtrue));
  ATprotect(&(term_l_39));
  term_l_39 = (ATerm) ATmakeAppl(ATmakeSymbol("the exact implosion steps to perform can be specified.\n", 0, ATtrue));
  ATprotect(&(term_b_40));
  term_b_40 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_c_40));
  term_c_40 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_h_40));
  term_h_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_i_40));
  term_i_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_j_40));
  term_j_40 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_k_40));
  term_k_40 = (ATerm) ATmakeAppl(sym__2, term_i_40, term_j_40);
  ATprotect(&(term_l_40));
  term_l_40 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_m_40));
  term_m_40 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_z_40));
  term_z_40 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_a_41));
  term_a_41 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_d_41));
  term_d_41 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_s_41));
  term_s_41 = (ATerm) ATmakeAppl(sym__3, term_i_40, term_j_40, (ATerm) ATempty);
  ATprotect(&(term_y_41));
  term_y_41 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm implode_options_0 (ATerm);
ATerm amb_1 (ATerm, ATerm g_75 (ATerm));
ATerm is_conc_0 (ATerm);
ATerm ReplConsConc_1 (ATerm, ATerm g_1 (ATerm));
ATerm is_some_0 (ATerm);
ATerm ReplConsSome_1 (ATerm, ATerm v_108 (ATerm));
ATerm is_ins_0 (ATerm);
ATerm ReplConsIns_1 (ATerm, ATerm u_108 (ATerm));
ATerm is_none_0 (ATerm);
ATerm ReplConsNone_1 (ATerm, ATerm t_108 (ATerm));
ATerm is_nil_0 (ATerm);
ATerm ReplConsNil_1 (ATerm, ATerm s_108 (ATerm));
ATerm get_cons_0 (ATerm);
ATerm ReplNamedCons_1 (ATerm, ATerm r_108 (ATerm));
ATerm ReplCons_1 (ATerm, ATerm q_108 (ATerm));
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
ATerm Conc_2 (ATerm, ATerm j_80 (ATerm), ATerm k_80 (ATerm));
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
ATerm oncetd_1 (ATerm, ATerm d_105 (ATerm));
ATerm cons_1 (ATerm, ATerm f_1 (ATerm));
ATerm lex_1 (ATerm, ATerm e_1 (ATerm));
ATerm sort_1 (ATerm, ATerm d_1 (ATerm));
ATerm alt_2 (ATerm, ATerm b_1 (ATerm), ATerm c_1 (ATerm));
ATerm injective_alt_0 (ATerm);
ATerm varsym_1 (ATerm, ATerm a_1 (ATerm));
ATerm injection_0 (ATerm);
ATerm Inj_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm o_103 (ATerm));
ATerm flat_injections_0 (ATerm);
ATerm FlatInj_0 (ATerm);
ATerm lit_1 (ATerm, ATerm z_0 (ATerm));
ATerm list_1 (ATerm, ATerm z_98 (ATerm));
ATerm seq_1 (ATerm, ATerm k_74 (ATerm));
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
ATerm repeat_2 (ATerm, ATerm u_106 (ATerm), ATerm v_106 (ATerm));
ATerm repeat_1 (ATerm, ATerm x_106 (ATerm));
ATerm appl_to_sort_0 (ATerm);
ATerm De_Escape4_0 (ATerm);
ATerm De_Escape3_0 (ATerm);
ATerm De_Escape2_0 (ATerm);
ATerm De_Escape1_0 (ATerm);
ATerm De_Escape_0 (ATerm);
ATerm de_escape_0 (ATerm);
ATerm at_last_1 (ATerm, ATerm v_99 (ATerm));
ATerm Tl_0 (ATerm);
ATerm Hd_0 (ATerm);
ATerm de_quote_0 (ATerm);
ATerm PpSym_0 (ATerm);
ATerm ApplToSort_0 (ATerm);
ATerm layout_1 (ATerm, ATerm h_80 (ATerm));
ATerm layout_0 (ATerm);
ATerm opt_1 (ATerm, ATerm s_0 (ATerm));
ATerm cf_1 (ATerm, ATerm r_0 (ATerm));
ATerm is_layout_p__0 (ATerm);
ATerm filter_1 (ATerm, ATerm n_92 (ATerm));
ATerm prod_3 (ATerm, ATerm o_0 (ATerm), ATerm p_0 (ATerm), ATerm q_0 (ATerm));
ATerm topdown_1 (ATerm, ATerm n_103 (ATerm));
ATerm remove_x_1 (ATerm, ATerm k_108 (ATerm));
ATerm remove_layout_0 (ATerm);
ATerm RemoveLayout_0 (ATerm);
ATerm flat_layout_0 (ATerm);
ATerm Kids_p__0 (ATerm);
ATerm Kids_0 (ATerm);
ATerm appl_2 (ATerm, ATerm e_75 (ATerm), ATerm f_75 (ATerm));
ATerm yield_0 (ATerm);
ATerm implode_lexical_0 (ATerm);
ATerm downup2_2 (ATerm, ATerm u_103 (ATerm), ATerm v_103 (ATerm));
ATerm flat_lex_0 (ATerm);
ATerm FlatLex_0 (ATerm);
ATerm implode_0 (ATerm);
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm g_89 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm j_86 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm _2 (ATerm, ATerm y_66 (ATerm), ATerm z_66 (ATerm));
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm m_82 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm v_91 (ATerm), ATerm w_91 (ATerm));
ATerm input_file_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm h_93 (ATerm), ATerm i_93 (ATerm));
ATerm crush_2 (ATerm, ATerm z_94 (ATerm), ATerm a_95 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm i_86 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm k_82 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm x_98 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm m_99 (ATerm));
ATerm concat_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm concat_strings_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm f_0 (ATerm));
ATerm Program_1 (ATerm, ATerm w_75 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm Undefined_1 (ATerm, ATerm x_75 (ATerm));
ATerm fetch_1 (ATerm, ATerm g_99 (ATerm));
ATerm option_defined_1 (ATerm, ATerm p_88 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm r_107 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm p_87 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm s_80 (ATerm), ATerm t_80 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm n_87 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm m_87 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm k_81 (ATerm));
ATerm iowrap_4 (ATerm, ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm));
ATerm iowrap_3 (ATerm, ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm));
ATerm iowrap_2 (ATerm, ATerm q_81 (ATerm), ATerm r_81 (ATerm));
ATerm implode_asfix_0 (ATerm);
ATerm main_0 (ATerm);
ATerm implode_options_0 (ATerm t)
{
  ATerm r_9 = t;
  int s_9 = stack_ptr;
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
        t = term_t_9;
        return(t);
      }
      ATerm g_0 (ATerm t)
      {
        t = term_u_9;
        return(t);
      }
      t = Option_3(t, c_0, d_0, g_0);
      LocalPopChoice(s_9);
    }
  else
    {
      t = r_9;
      {
        ATerm v_9 = t;
        int w_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm h_0 (ATerm t)
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
              t = term_x_9;
              return(t);
            }
            ATerm l_1 (ATerm t)
            {
              t = term_y_9;
              return(t);
            }
            t = Option_3(t, h_0, h_1, l_1);
            LocalPopChoice(w_9);
          }
        else
          {
            t = v_9;
            {
              ATerm z_9 = t;
              int a_10 = stack_ptr;
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
                    t = term_b_10;
                    return(t);
                  }
                  ATerm r_1 (ATerm t)
                  {
                    t = term_c_10;
                    return(t);
                  }
                  t = Option_3(t, m_1, n_1, r_1);
                  LocalPopChoice(a_10);
                }
              else
                {
                  t = z_9;
                  {
                    ATerm d_10 = t;
                    int e_10 = stack_ptr;
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
                          t = term_f_10;
                          return(t);
                        }
                        ATerm u_1 (ATerm t)
                        {
                          t = term_g_10;
                          return(t);
                        }
                        t = Option_3(t, s_1, t_1, u_1);
                        LocalPopChoice(e_10);
                      }
                    else
                      {
                        t = d_10;
                        {
                          ATerm h_10 = t;
                          int i_10 = stack_ptr;
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
                                t = term_j_10;
                                return(t);
                              }
                              ATerm x_1 (ATerm t)
                              {
                                t = term_k_10;
                                return(t);
                              }
                              t = Option_3(t, v_1, w_1, x_1);
                              LocalPopChoice(i_10);
                            }
                          else
                            {
                              t = h_10;
                              {
                                ATerm l_10 = t;
                                int m_10 = stack_ptr;
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
                                      t = term_n_10;
                                      return(t);
                                    }
                                    ATerm a_2 (ATerm t)
                                    {
                                      t = term_o_10;
                                      return(t);
                                    }
                                    t = Option_3(t, y_1, z_1, a_2);
                                    LocalPopChoice(m_10);
                                  }
                                else
                                  {
                                    t = l_10;
                                    {
                                      ATerm p_10 = t;
                                      int q_10 = stack_ptr;
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
                                            t = term_r_10;
                                            return(t);
                                          }
                                          ATerm g_2 (ATerm t)
                                          {
                                            t = term_s_10;
                                            return(t);
                                          }
                                          t = Option_3(t, e_2, f_2, g_2);
                                          LocalPopChoice(q_10);
                                        }
                                      else
                                        {
                                          t = p_10;
                                          {
                                            ATerm t_10 = t;
                                            int u_10 = stack_ptr;
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
                                                  t = term_v_10;
                                                  return(t);
                                                }
                                                ATerm m_2 (ATerm t)
                                                {
                                                  t = term_w_10;
                                                  return(t);
                                                }
                                                t = Option_3(t, k_2, l_2, m_2);
                                                LocalPopChoice(u_10);
                                              }
                                            else
                                              {
                                                t = t_10;
                                                {
                                                  ATerm x_10 = t;
                                                  int y_10 = stack_ptr;
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
                                                        t = term_z_10;
                                                        return(t);
                                                      }
                                                      ATerm s_2 (ATerm t)
                                                      {
                                                        t = term_d_11;
                                                        return(t);
                                                      }
                                                      t = Option_3(t, q_2, r_2, s_2);
                                                      LocalPopChoice(y_10);
                                                    }
                                                  else
                                                    {
                                                      t = x_10;
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
                                                          t = term_e_11;
                                                          return(t);
                                                        }
                                                        ATerm y_2 (ATerm t)
                                                        {
                                                          t = term_f_11;
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
ATerm amb_1 (ATerm t, ATerm g_75 (ATerm))
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
            t = g_75(t);
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
                        ATerm g_11;
                        g_11 = t;
                        {
                          t = not_null(e_14);
                          t = is_conc_0(t);
                        }
                        t = g_11;
                        {
                          ATerm h_11;
                          h_11 = t;
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
                          t = h_11;
                          {
                            ATerm i_11;
                            i_11 = t;
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
                            t = i_11;
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
                                            ATerm j_11 = t;
                                            int k_11 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = not_null(y_14);
                                                {
                                                  ATerm l_11 = t;
                                                  int m_11 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      t = Nil_0(t);
                                                      LocalPopChoice(m_11);
                                                    }
                                                  else
                                                    {
                                                      t = l_11;
                                                      t = Cons_2(t, _id, _id);
                                                    }
                                                  {
                                                    t = (ATerm) ATmakeAppl(sym__2, not_null(x_14), not_null(y_14));
                                                    t = conc_0(t);
                                                  }
                                                }
                                                LocalPopChoice(k_11);
                                              }
                                            else
                                              {
                                                t = j_11;
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
ATerm ReplConsSome_1 (ATerm t, ATerm v_108 (ATerm))
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
                ATerm q_11;
                q_11 = t;
                {
                  t = not_null(n_16);
                  t = is_some_0(t);
                }
                t = q_11;
                {
                  ATerm u_16 = NULL;
                  t = not_null(p_16);
                  {
                    t = v_108(t);
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
ATerm ReplConsIns_1 (ATerm t, ATerm u_108 (ATerm))
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
                ATerm r_11;
                r_11 = t;
                {
                  t = not_null(i_18);
                  t = is_ins_0(t);
                }
                t = r_11;
                {
                  ATerm p_18 = NULL;
                  t = not_null(k_18);
                  {
                    t = u_108(t);
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
ATerm ReplConsNone_1 (ATerm t, ATerm t_108 (ATerm))
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
            t = term_s_11;
          }
        }
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
ATerm ReplConsNil_1 (ATerm t, ATerm s_108 (ATerm))
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
ATerm ReplNamedCons_1 (ATerm t, ATerm r_108 (ATerm))
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
        ATerm t_11;
        t_11 = t;
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
        t = t_11;
        {
          ATerm u_11;
          u_11 = t;
          {
            ATerm f_21 = NULL;
            t = not_null(z_20);
            {
              t = map_1(t, r_108);
              {
                f_21 = t;
                if(((e_21 != NULL) && (e_21 != f_21)))
                  _fail(f_21);
                else
                  e_21 = f_21;
              }
            }
          }
          t = u_11;
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
ATerm ReplCons_1 (ATerm t, ATerm q_108 (ATerm))
{
  ATerm v_11 = t;
  int w_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = ReplNamedCons_1(t, q_108);
      LocalPopChoice(w_11);
    }
  else
    {
      t = v_11;
      {
        ATerm x_11 = t;
        int y_11 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = ReplConsNil_1(t, q_108);
            LocalPopChoice(y_11);
          }
        else
          {
            t = x_11;
            {
              ATerm z_11 = t;
              int a_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = ReplConsNone_1(t, q_108);
                  LocalPopChoice(a_12);
                }
              else
                {
                  t = z_11;
                  {
                    ATerm b_12 = t;
                    int c_12 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = ReplConsIns_1(t, q_108);
                        LocalPopChoice(c_12);
                      }
                    else
                      {
                        t = b_12;
                        {
                          ATerm g_12 = t;
                          int h_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = ReplConsSome_1(t, q_108);
                              LocalPopChoice(h_12);
                            }
                          else
                            {
                              t = g_12;
                              t = ReplConsConc_1(t, q_108);
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
  ATerm i_12 = t;
  int j_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm a_3 (ATerm t)
      {
        ATerm b_3 (ATerm t)
        {
          ATerm k_12 = t;
          int l_12 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm c_3 (ATerm t)
              {
                t = opt_1(t, layout_0);
                return(t);
              }
              t = cf_1(t, c_3);
              LocalPopChoice(l_12);
            }
          else
            {
              t = k_12;
              t = lit_1(t, _id);
            }
          return(t);
        }
        t = prod_3(t, _id, b_3, _id);
        return(t);
      }
      t = appl_2(t, a_3, _id);
      LocalPopChoice(j_12);
    }
  else
    {
      t = i_12;
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
      ATerm m_12 = t;
      int n_12 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = implode_lexical_0(t);
          LocalPopChoice(n_12);
        }
      else
        {
          t = m_12;
          {
            ATerm o_12 = t;
            int p_12 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm e_3 (ATerm t)
                {
                  ATerm f_3 (ATerm t)
                  {
                    ATerm t_12 = t;
                    if((PushChoice() == 0))
                      {
                        t = is_layout_0(t);
                        PopChoice();
                        _fail(t);
                      }
                    else
                      {
                        t = t_12;
                      }
                    return(t);
                  }
                  t = filter_1(t, f_3);
                  return(t);
                }
                t = appl_2(t, _id, e_3);
                {
                  ATerm u_12 = t;
                  int v_12 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = OptList_0(t);
                      t = d_23(t);
                      LocalPopChoice(v_12);
                    }
                  else
                    {
                      t = u_12;
                      {
                        ATerm o_13 = t;
                        int p_13 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = ReplCons_1(t, d_23);
                            LocalPopChoice(p_13);
                          }
                        else
                          {
                            t = o_13;
                            {
                              ATerm q_13 = t;
                              int r_13 = stack_ptr;
                              if((PushChoice() == 0))
                                {
                                  t = Inj_0(t);
                                  t = d_23(t);
                                  LocalPopChoice(r_13);
                                }
                              else
                                {
                                  t = q_13;
                                  {
                                    ATerm s_13 = t;
                                    int t_13 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = Tuple_0(t);
                                        t = d_23(t);
                                        LocalPopChoice(t_13);
                                      }
                                    else
                                      {
                                        t = s_13;
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
                LocalPopChoice(p_12);
              }
            else
              {
                t = o_12;
                {
                  ATerm u_13 = t;
                  int v_13 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm g_3 (ATerm t)
                      {
                        t = list_1(t, d_23);
                        return(t);
                      }
                      t = amb_1(t, g_3);
                      LocalPopChoice(v_13);
                    }
                  else
                    {
                      t = u_13;
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
      ATerm k_14;
      k_14 = t;
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
      t = k_14;
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
                ATerm l_14;
                l_14 = t;
                {
                  ATerm s_24 = NULL;
                  t = term_m_14;
                  {
                    s_24 = t;
                    if(((r_24 != NULL) && (r_24 != s_24)))
                      _fail(s_24);
                    else
                      r_24 = s_24;
                  }
                }
                t = l_14;
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
                        ATerm n_14;
                        n_14 = t;
                        {
                          ATerm x_24 = NULL;
                          t = term_m_14;
                          {
                            x_24 = t;
                            if(((w_24 != NULL) && (w_24 != x_24)))
                              _fail(x_24);
                            else
                              w_24 = x_24;
                          }
                        }
                        t = n_14;
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
      ATerm u_14;
      u_14 = t;
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
      t = u_14;
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
ATerm Conc_2 (ATerm t, ATerm j_80 (ATerm), ATerm k_80 (ATerm))
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
            t = j_80(t);
            {
              o_27 = t;
              {
                t = not_null(i_27);
                {
                  ATerm s_27 = NULL;
                  t = k_80(t);
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
                ATerm v_14 = t;
                int w_14 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = l_29(t);
                    LocalPopChoice(w_14);
                  }
                else
                  {
                    t = v_14;
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
                    ATerm d_15 = t;
                    int e_15 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = l_29(t);
                        LocalPopChoice(e_15);
                      }
                    else
                      {
                        t = d_15;
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
    ATerm f_15 = t;
    int g_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = CTC0_0(t);
        LocalPopChoice(g_15);
      }
    else
      {
        t = f_15;
        {
          ATerm h_15 = t;
          int i_15 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = CTC1_0(t);
              LocalPopChoice(i_15);
            }
          else
            {
              t = h_15;
              t = Conc_2(t, CTC0_0, _id);
            }
        }
      }
    return(t);
  }
  t = repeat_1(t, i_3);
  {
    ATerm j_15 = t;
    int k_15 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Conc_2(t, _id, conc_to_cons_0);
        LocalPopChoice(k_15);
      }
    else
      {
        t = j_15;
        t = _all(t, conc_to_cons_0);
      }
    {
      ATerm j_3 (ATerm t)
      {
        ATerm l_15 = t;
        int m_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = CTC2_0(t);
            t = Cons_2(t, conc_to_cons_0, _id);
            LocalPopChoice(m_15);
          }
        else
          {
            t = l_15;
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
  ATerm x_29 = NULL;
  x_29 = t;
  w_29 :
  if(match_string(x_29, "sorts"))
    {
      t = term_d_16;
    }
  else
    {
      if(match_string(x_29, "imports"))
        {
          t = term_e_16;
        }
      else
        {
          if(match_string(x_29, "id"))
            {
              t = term_f_16;
            }
          else
            {
              if(match_string(x_29, "hiddens"))
                {
                  t = term_g_16;
                }
              else
                {
                  if(match_string(x_29, "exports"))
                    {
                      t = term_h_16;
                    }
                  else
                    {
                      if(match_string(x_29, "module"))
                        {
                          t = term_i_16;
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
  ATerm s_31 = NULL,t_31 = NULL,u_31 = NULL,v_31 = NULL,w_31 = NULL,x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL,c_32 = NULL,d_32 = NULL,e_32 = NULL,f_32 = NULL,g_32 = NULL,h_32 = NULL,i_32 = NULL,i_33 = NULL,j_33 = NULL;
  b_32 = t;
  u_30 :
  if(match_cons(b_32, sym_prod_3))
    {
      c_32 = ATgetArgument(b_32, 0);
      g_32 = ATgetArgument(b_32, 1);
      j_33 = ATgetArgument(b_32, 2);
      v_30 :
      if(((ATgetType(c_32) == AT_LIST) && ((ATermList) c_32 != ATempty)))
        {
          d_32 = ATgetFirst((ATermList) c_32);
          f_32 = (ATerm) ATgetNext((ATermList) c_32);
          w_30 :
          if(((ATermList) f_32 == ATempty))
            {
              x_30 :
              if(match_cons(g_32, sym_opt_1))
                {
                  h_32 = ATgetArgument(g_32, 0);
                  y_30 :
                  {
                    if(((d_32 != NULL) && (d_32 != h_32)))
                      _fail(h_32);
                    else
                      d_32 = h_32;
                    t = term_r_16;
                  }
                }
              else
                {
                  if(match_cons(g_32, sym_cf_1))
                    {
                      h_32 = ATgetArgument(g_32, 0);
                      z_30 :
                      if(match_cons(d_32, sym_cf_1))
                        {
                          e_32 = ATgetArgument(d_32, 0);
                          a_31 :
                          if(match_cons(h_32, sym_opt_1))
                            {
                              i_32 = ATgetArgument(h_32, 0);
                              {
                                if(((e_32 != NULL) && (e_32 != i_32)))
                                  _fail(i_32);
                                else
                                  e_32 = i_32;
                                t = term_r_16;
                              }
                            }
                          else
                            {
                              if(match_cons(h_32, sym_iter_1))
                                {
                                  i_32 = ATgetArgument(h_32, 0);
                                  {
                                    if(((e_32 != NULL) && (e_32 != i_32)))
                                      _fail(i_32);
                                    else
                                      e_32 = i_32;
                                    t = term_s_16;
                                  }
                                }
                              else
                                {
                                  if(match_cons(h_32, sym_iter_sep_2))
                                    {
                                      i_32 = ATgetArgument(h_32, 0);
                                      i_33 = ATgetArgument(h_32, 1);
                                      {
                                        if(((e_32 != NULL) && (e_32 != i_32)))
                                          _fail(i_32);
                                        else
                                          e_32 = i_32;
                                        t = term_s_16;
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
                      if(match_cons(g_32, sym_iter_1))
                        {
                          h_32 = ATgetArgument(g_32, 0);
                          b_31 :
                          {
                            if(((d_32 != NULL) && (d_32 != h_32)))
                              _fail(h_32);
                            else
                              d_32 = h_32;
                            t = term_s_16;
                          }
                        }
                      else
                        {
                          if(match_cons(g_32, sym_iter_sep_2))
                            {
                              h_32 = ATgetArgument(g_32, 0);
                              a_32 = ATgetArgument(g_32, 1);
                              c_31 :
                              {
                                if(((d_32 != NULL) && (d_32 != h_32)))
                                  _fail(h_32);
                                else
                                  d_32 = h_32;
                                t = term_s_16;
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
              if(((ATgetType(f_32) == AT_LIST) && ((ATermList) f_32 != ATempty)))
                {
                  s_31 = ATgetFirst((ATermList) f_32);
                  t_31 = (ATerm) ATgetNext((ATermList) f_32);
                  d_31 :
                  if(((ATermList) t_31 == ATempty))
                    {
                      e_31 :
                      if(match_cons(g_32, sym_iter_1))
                        {
                          h_32 = ATgetArgument(g_32, 0);
                          f_31 :
                          t = term_v_16;
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
                              if(match_cons(g_32, sym_iter_sep_2))
                                {
                                  h_32 = ATgetArgument(g_32, 0);
                                  a_32 = ATgetArgument(g_32, 1);
                                  i_31 :
                                  t = term_v_16;
                                }
                              else
                                {
                                  if(match_cons(g_32, sym_cf_1))
                                    {
                                      h_32 = ATgetArgument(g_32, 0);
                                      j_31 :
                                      if(match_cons(h_32, sym_iter_1))
                                        {
                                          i_32 = ATgetArgument(h_32, 0);
                                          k_31 :
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
                                          if(match_cons(g_32, sym_cf_1))
                                            {
                                              h_32 = ATgetArgument(g_32, 0);
                                              o_31 :
                                              if(match_cons(h_32, sym_iter_sep_2))
                                                {
                                                  i_32 = ATgetArgument(h_32, 0);
                                                  i_33 = ATgetArgument(h_32, 1);
                                                  p_31 :
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
              if(match_cons(g_32, sym_opt_1))
                {
                  h_32 = ATgetArgument(g_32, 0);
                  t = term_w_16;
                }
              else
                {
                  if(match_cons(g_32, sym_cf_1))
                    {
                      h_32 = ATgetArgument(g_32, 0);
                      r_31 :
                      if(match_cons(h_32, sym_opt_1))
                        {
                          i_32 = ATgetArgument(h_32, 0);
                          t = term_w_16;
                        }
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
        ATerm x_16;
        x_16 = t;
        {
          ATerm h_35 = NULL;
          t = not_null(c_35);
          {
            ATerm y_16 = t;
            int z_16 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = Constr0_0(t);
                LocalPopChoice(z_16);
              }
            else
              {
                t = y_16;
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
        t = x_16;
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
              t = term_a_17;
            }
          else
            {
              if(match_cons(y_35, sym_iter_star_sep_2))
                {
                  z_35 = ATgetArgument(y_35, 0);
                  v_35 = ATgetArgument(y_35, 1);
                  t = term_a_17;
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
                          t = term_a_17;
                        }
                      else
                        {
                          if(match_cons(z_35, sym_iter_star_sep_2))
                            {
                              a_36 = ATgetArgument(z_35, 0);
                              b_36 = ATgetArgument(z_35, 1);
                              t = term_a_17;
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
  ATerm k_36 = NULL,l_36 = NULL,m_36 = NULL;
  k_36 = t;
  j_36 :
  if(match_cons(k_36, sym_appl_2))
    {
      l_36 = ATgetArgument(k_36, 0);
      m_36 = ATgetArgument(k_36, 1);
      {
        ATerm p_36 = NULL;
        ATerm x_36 = NULL;
        t = not_null(l_36);
        {
          t = ConstrNil_0(t);
          {
            x_36 = t;
            if(((p_36 != NULL) && (p_36 != x_36)))
              _fail(x_36);
            else
              p_36 = x_36;
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
  ATerm u_17 = t;
  int v_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = CnsNil_0(t);
      LocalPopChoice(v_17);
    }
  else
    {
      t = u_17;
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
      ATerm g_37 = NULL,i_37 = NULL;
      ATerm w_17;
      w_17 = t;
      {
        ATerm h_37 = NULL;
        t = SSLgetAnnotations(not_null(e_37));
        {
          h_37 = t;
          if(((g_37 != NULL) && (g_37 != h_37)))
            _fail(h_37);
          else
            g_37 = h_37;
        }
      }
      t = w_17;
      {
        ATerm j_37 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ReplaceAppl_0), not_null(g_37));
        {
          j_37 = t;
          if(((i_37 != NULL) && (i_37 != j_37)))
            _fail(j_37);
          else
            i_37 = j_37;
        }
        t = not_null(i_37);
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
  ATerm x_17 = t;
  int y_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_38 = NULL,k_38 = NULL,l_38 = NULL,n_38 = NULL,z_38 = NULL;
      ATerm z_17 = t;
      int a_18 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm o_3 (ATerm t)
          {
            ATerm q_3 (ATerm t)
            {
              ATerm s_3 (ATerm t)
              {
                ATerm b_18 = t;
                int c_18 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    ATerm t_3 (ATerm t)
                    {
                      ATerm o_38 = NULL;
                      o_38 = t;
                      if(((j_38 != NULL) && (j_38 != o_38)))
                        _fail(o_38);
                      else
                        j_38 = o_38;
                      return(t);
                    }
                    t = cf_1(t, t_3);
                    LocalPopChoice(c_18);
                  }
                else
                  {
                    t = b_18;
                    {
                      ATerm p_38 = NULL;
                      p_38 = t;
                      if(((j_38 != NULL) && (j_38 != p_38)))
                        _fail(p_38);
                      else
                        j_38 = p_38;
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
                      if(((k_38 != NULL) && (k_38 != r_38)))
                        _fail(r_38);
                      else
                        k_38 = r_38;
                      if(((l_38 != NULL) && (l_38 != s_38)))
                        _fail(s_38);
                      else
                        l_38 = s_38;
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
          LocalPopChoice(a_18);
        }
      else
        {
          t = z_17;
          {
            ATerm v_3 (ATerm t)
            {
              ATerm x_3 (ATerm t)
              {
                ATerm z_3 (ATerm t)
                {
                  ATerm u_38 = NULL;
                  u_38 = t;
                  if(((j_38 != NULL) && (j_38 != u_38)))
                    _fail(u_38);
                  else
                    j_38 = u_38;
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
                        if(((k_38 != NULL) && (k_38 != w_38)))
                          _fail(w_38);
                        else
                          k_38 = w_38;
                        if(((l_38 != NULL) && (l_38 != x_38)))
                          _fail(x_38);
                        else
                          l_38 = x_38;
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
        t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATmakeAppl(sym_alt_2, not_null(k_38), not_null(l_38)), term_d_18);
        {
          ATerm d_40 (ATerm t)
          {
            ATerm a_39 = NULL,b_39 = NULL,c_39 = NULL,d_39 = NULL,e_39 = NULL;
            ATerm e_40 (ATerm t)
            {
              ATerm f_39 = NULL;
              if(((j_38 != NULL) && (j_38 != b_39)))
                _fail(b_39);
              else
                j_38 = b_39;
              {
                if(((f_39 != NULL) && (f_39 != e_39)))
                  _fail(e_39);
                else
                  f_39 = e_39;
                t = (ATerm) ATmakeAppl(sym_alt_2, not_null(f_39), not_null(n_38));
              }
              return(t);
            }
            ATerm f_40 (ATerm t)
            {
              ATerm i_39 = NULL;
              if(((j_38 != NULL) && (j_38 != c_39)))
                _fail(c_39);
              else
                j_38 = c_39;
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
            ATerm g_40 (ATerm t)
            {
              ATerm o_39 = NULL;
              ATerm p_39 = NULL;
              t = (ATerm) ATmakeAppl(sym__2, not_null(e_39), term_d_18);
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
                t = d_40(t);
              }
              return(t);
            }
            a_39 = t;
            d_38 :
            if(match_cons(a_39, sym__2))
              {
                b_39 = ATgetArgument(a_39, 0);
                e_39 = ATgetArgument(a_39, 1);
                e_38 :
                if(match_cons(b_39, sym_alt_2))
                  {
                    c_39 = ATgetArgument(b_39, 0);
                    d_39 = ATgetArgument(b_39, 1);
                    {
                      ATerm m_18 = t;
                      int n_18 = stack_ptr;
                      if((PushChoice() == 0))
                        {
                          t = e_40(t);
                          LocalPopChoice(n_18);
                        }
                      else
                        {
                          t = m_18;
                          {
                            ATerm q_18 = t;
                            int r_18 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = f_40(t);
                                LocalPopChoice(r_18);
                              }
                            else
                              {
                                t = q_18;
                                t = g_40(t);
                              }
                          }
                        }
                    }
                  }
                else
                  {
                    t = e_40(t);
                  }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = d_40(t);
        }
      }
      LocalPopChoice(y_17);
    }
  else
    {
      t = x_17;
      {
        ATerm q_39 = NULL;
        q_39 = t;
        i_38 :
        if(match_cons(q_39, sym_FlatAlt_0))
          {
            ATerm s_39 = NULL,u_39 = NULL;
            ATerm c_19;
            c_19 = t;
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
            t = c_19;
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
  ATerm u_40 = NULL;
  u_40 = t;
  t_40 :
  if(match_cons(u_40, sym_bracket_0))
    {
      ATerm i_19 = t;
      int j_19 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm w_40 = NULL,k_41 = NULL;
          ATerm w_19;
          w_19 = t;
          {
            ATerm j_41 = NULL;
            t = SSLgetAnnotations(not_null(u_40));
            {
              j_41 = t;
              if(((w_40 != NULL) && (w_40 != j_41)))
                _fail(j_41);
              else
                w_40 = j_41;
            }
          }
          t = w_19;
          {
            ATerm l_41 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(w_40));
            {
              l_41 = t;
              if(((k_41 != NULL) && (k_41 != l_41)))
                _fail(l_41);
              else
                k_41 = l_41;
            }
            t = not_null(k_41);
          }
          LocalPopChoice(j_19);
        }
      else
        {
          t = i_19;
          {
            ATerm n_41 = NULL,p_41 = NULL;
            ATerm c_20;
            c_20 = t;
            {
              ATerm o_41 = NULL;
              t = SSLgetAnnotations(not_null(u_40));
              {
                o_41 = t;
                if(((n_41 != NULL) && (n_41 != o_41)))
                  _fail(o_41);
                else
                  n_41 = o_41;
              }
            }
            t = c_20;
            {
              ATerm q_41 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_bracket_0), not_null(n_41));
              {
                q_41 = t;
                if(((p_41 != NULL) && (p_41 != q_41)))
                  _fail(q_41);
                else
                  p_41 = q_41;
              }
              t = not_null(p_41);
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
ATerm oncetd_1 (ATerm t, ATerm d_105 (ATerm))
{
  ATerm z_41 (ATerm t)
  {
    ATerm d_20 = t;
    int e_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = d_105(t);
        LocalPopChoice(e_20);
      }
    else
      {
        t = d_20;
        t = _one(t, z_41);
      }
    return(t);
  }
  t = z_41(t);
  return(t);
}
ATerm cons_1 (ATerm t, ATerm f_1 (ATerm))
{
  ATerm k_42 = NULL,l_42 = NULL;
  k_42 = t;
  j_42 :
  if(match_cons(k_42, sym_cons_1))
    {
      l_42 = ATgetArgument(k_42, 0);
      {
        ATerm f_20 = t;
        int m_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_42 = NULL,q_42 = NULL;
            ATerm p_42 = NULL;
            t = SSLgetAnnotations(not_null(k_42));
            {
              p_42 = t;
              if(((o_42 != NULL) && (o_42 != p_42)))
                _fail(p_42);
              else
                o_42 = p_42;
            }
            {
              t = not_null(l_42);
              {
                ATerm s_42 = NULL;
                t = f_1(t);
                {
                  q_42 = t;
                  {
                    ATerm t_42 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(q_42)), not_null(o_42));
                    {
                      t_42 = t;
                      if(((s_42 != NULL) && (s_42 != t_42)))
                        _fail(t_42);
                      else
                        s_42 = t_42;
                    }
                    t = not_null(s_42);
                  }
                }
              }
            }
            LocalPopChoice(m_20);
          }
        else
          {
            t = f_20;
            {
              ATerm w_42 = NULL,y_42 = NULL;
              ATerm x_42 = NULL;
              t = SSLgetAnnotations(not_null(k_42));
              {
                x_42 = t;
                if(((w_42 != NULL) && (w_42 != x_42)))
                  _fail(x_42);
                else
                  w_42 = x_42;
              }
              {
                t = not_null(l_42);
                {
                  ATerm a_43 = NULL;
                  t = f_1(t);
                  {
                    y_42 = t;
                    {
                      ATerm b_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cons_1, not_null(y_42)), not_null(w_42));
                      {
                        b_43 = t;
                        if(((a_43 != NULL) && (a_43 != b_43)))
                          _fail(b_43);
                        else
                          a_43 = b_43;
                      }
                      t = not_null(a_43);
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
  ATerm t_43 = NULL,u_43 = NULL;
  t_43 = t;
  s_43 :
  if(match_cons(t_43, sym_lex_1))
    {
      u_43 = ATgetArgument(t_43, 0);
      {
        ATerm q_20 = t;
        int r_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_43 = NULL,z_43 = NULL;
            ATerm y_43 = NULL;
            t = SSLgetAnnotations(not_null(t_43));
            {
              y_43 = t;
              if(((x_43 != NULL) && (x_43 != y_43)))
                _fail(y_43);
              else
                x_43 = y_43;
            }
            {
              t = not_null(u_43);
              {
                ATerm b_44 = NULL;
                t = e_1(t);
                {
                  z_43 = t;
                  {
                    ATerm c_44 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(z_43)), not_null(x_43));
                    {
                      c_44 = t;
                      if(((b_44 != NULL) && (b_44 != c_44)))
                        _fail(c_44);
                      else
                        b_44 = c_44;
                    }
                    t = not_null(b_44);
                  }
                }
              }
            }
            LocalPopChoice(r_20);
          }
        else
          {
            t = q_20;
            {
              ATerm h_44 = NULL,j_44 = NULL;
              ATerm i_44 = NULL;
              t = SSLgetAnnotations(not_null(t_43));
              {
                i_44 = t;
                if(((h_44 != NULL) && (h_44 != i_44)))
                  _fail(i_44);
                else
                  h_44 = i_44;
              }
              {
                t = not_null(u_43);
                {
                  ATerm q_44 = NULL;
                  t = e_1(t);
                  {
                    j_44 = t;
                    {
                      ATerm r_44 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lex_1, not_null(j_44)), not_null(h_44));
                      {
                        r_44 = t;
                        if(((q_44 != NULL) && (q_44 != r_44)))
                          _fail(r_44);
                        else
                          q_44 = r_44;
                      }
                      t = not_null(q_44);
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
  ATerm j_45 = NULL,k_45 = NULL;
  j_45 = t;
  i_45 :
  if(match_cons(j_45, sym_sort_1))
    {
      k_45 = ATgetArgument(j_45, 0);
      {
        ATerm s_20 = t;
        int t_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm n_45 = NULL,r_45 = NULL;
            ATerm q_45 = NULL;
            t = SSLgetAnnotations(not_null(j_45));
            {
              q_45 = t;
              if(((n_45 != NULL) && (n_45 != q_45)))
                _fail(q_45);
              else
                n_45 = q_45;
            }
            {
              t = not_null(k_45);
              {
                ATerm t_45 = NULL;
                t = d_1(t);
                {
                  r_45 = t;
                  {
                    ATerm u_45 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(r_45)), not_null(n_45));
                    {
                      u_45 = t;
                      if(((t_45 != NULL) && (t_45 != u_45)))
                        _fail(u_45);
                      else
                        t_45 = u_45;
                    }
                    t = not_null(t_45);
                  }
                }
              }
            }
            LocalPopChoice(t_20);
          }
        else
          {
            t = s_20;
            {
              ATerm x_45 = NULL,z_45 = NULL;
              ATerm y_45 = NULL;
              t = SSLgetAnnotations(not_null(j_45));
              {
                y_45 = t;
                if(((x_45 != NULL) && (x_45 != y_45)))
                  _fail(y_45);
                else
                  x_45 = y_45;
              }
              {
                t = not_null(k_45);
                {
                  ATerm b_46 = NULL;
                  t = d_1(t);
                  {
                    z_45 = t;
                    {
                      ATerm c_46 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_sort_1, not_null(z_45)), not_null(x_45));
                      {
                        c_46 = t;
                        if(((b_46 != NULL) && (b_46 != c_46)))
                          _fail(c_46);
                        else
                          b_46 = c_46;
                      }
                      t = not_null(b_46);
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
  ATerm z_46 = NULL,b_47 = NULL,c_47 = NULL;
  z_46 = t;
  y_46 :
  if(match_cons(z_46, sym_alt_2))
    {
      b_47 = ATgetArgument(z_46, 0);
      c_47 = ATgetArgument(z_46, 1);
      {
        ATerm u_20 = t;
        int v_20 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm g_47 = NULL,i_47 = NULL;
            ATerm h_47 = NULL;
            t = SSLgetAnnotations(not_null(z_46));
            {
              h_47 = t;
              if(((g_47 != NULL) && (g_47 != h_47)))
                _fail(h_47);
              else
                g_47 = h_47;
            }
            {
              t = not_null(b_47);
              {
                ATerm k_47 = NULL;
                t = b_1(t);
                {
                  i_47 = t;
                  {
                    t = not_null(c_47);
                    {
                      ATerm m_47 = NULL;
                      t = c_1(t);
                      {
                        k_47 = t;
                        {
                          ATerm n_47 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(i_47), not_null(k_47)), not_null(g_47));
                          {
                            n_47 = t;
                            if(((m_47 != NULL) && (m_47 != n_47)))
                              _fail(n_47);
                            else
                              m_47 = n_47;
                          }
                          t = not_null(m_47);
                        }
                      }
                    }
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
              ATerm r_47 = NULL,t_47 = NULL;
              ATerm s_47 = NULL;
              t = SSLgetAnnotations(not_null(z_46));
              {
                s_47 = t;
                if(((r_47 != NULL) && (r_47 != s_47)))
                  _fail(s_47);
                else
                  r_47 = s_47;
              }
              {
                t = not_null(b_47);
                {
                  ATerm v_47 = NULL;
                  t = b_1(t);
                  {
                    t_47 = t;
                    {
                      t = not_null(c_47);
                      {
                        ATerm x_47 = NULL;
                        t = c_1(t);
                        {
                          v_47 = t;
                          {
                            ATerm y_47 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_alt_2, not_null(t_47), not_null(v_47)), not_null(r_47));
                            {
                              y_47 = t;
                              if(((x_47 != NULL) && (x_47 != y_47)))
                                _fail(y_47);
                              else
                                x_47 = y_47;
                            }
                            t = not_null(x_47);
                          }
                        }
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
  ATerm a_21 = t;
  int b_21 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = sort_1(t, _id);
      LocalPopChoice(b_21);
    }
  else
    {
      t = a_21;
      {
        ATerm h_21 = t;
        int i_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = cf_1(t, injective_alt_0);
            LocalPopChoice(i_21);
          }
        else
          {
            t = h_21;
            t = alt_2(t, injective_alt_0, injective_alt_0);
          }
      }
    }
  return(t);
}
ATerm varsym_1 (ATerm t, ATerm a_1 (ATerm))
{
  ATerm w_48 = NULL,x_48 = NULL;
  w_48 = t;
  v_48 :
  if(match_cons(w_48, sym_varsym_1))
    {
      x_48 = ATgetArgument(w_48, 0);
      {
        ATerm j_21 = t;
        int k_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm a_49 = NULL,c_49 = NULL;
            ATerm b_49 = NULL;
            t = SSLgetAnnotations(not_null(w_48));
            {
              b_49 = t;
              if(((a_49 != NULL) && (a_49 != b_49)))
                _fail(b_49);
              else
                a_49 = b_49;
            }
            {
              t = not_null(x_48);
              {
                ATerm e_49 = NULL;
                t = a_1(t);
                {
                  c_49 = t;
                  {
                    ATerm f_49 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(c_49)), not_null(a_49));
                    {
                      f_49 = t;
                      if(((e_49 != NULL) && (e_49 != f_49)))
                        _fail(f_49);
                      else
                        e_49 = f_49;
                    }
                    t = not_null(e_49);
                  }
                }
              }
            }
            LocalPopChoice(k_21);
          }
        else
          {
            t = j_21;
            {
              ATerm i_49 = NULL,k_49 = NULL;
              ATerm j_49 = NULL;
              t = SSLgetAnnotations(not_null(w_48));
              {
                j_49 = t;
                if(((i_49 != NULL) && (i_49 != j_49)))
                  _fail(j_49);
                else
                  i_49 = j_49;
              }
              {
                t = not_null(x_48);
                {
                  ATerm m_49 = NULL;
                  t = a_1(t);
                  {
                    k_49 = t;
                    {
                      ATerm n_49 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_varsym_1, not_null(k_49)), not_null(i_49));
                      {
                        n_49 = t;
                        if(((m_49 != NULL) && (m_49 != n_49)))
                          _fail(n_49);
                        else
                          m_49 = n_49;
                      }
                      t = not_null(m_49);
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
  ATerm l_21 = t;
  int m_21 = stack_ptr;
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
        ATerm n_21 = t;
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
            t = n_21;
          }
        return(t);
      }
      t = prod_3(t, b_4, _id, c_4);
      LocalPopChoice(m_21);
    }
  else
    {
      t = l_21;
      {
        ATerm o_21 = t;
        int p_21 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm f_4 (ATerm t)
            {
              ATerm h_4 (ATerm t)
              {
                ATerm u_22 = t;
                int v_22 = stack_ptr;
                if((PushChoice() == 0))
                  {
                    t = sort_1(t, _id);
                    LocalPopChoice(v_22);
                  }
                else
                  {
                    t = u_22;
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
              ATerm x_22 = t;
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
                  t = x_22;
                }
              return(t);
            }
            t = prod_3(t, f_4, injective_alt_0, g_4);
            LocalPopChoice(p_21);
          }
        else
          {
            t = o_21;
            {
              ATerm y_22 = t;
              int z_22 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm k_4 (ATerm t)
                  {
                    ATerm n_4 (ATerm t)
                    {
                      ATerm a_23 = t;
                      if((PushChoice() == 0))
                        {
                          t = lit_1(t, _id);
                          PopChoice();
                          _fail(t);
                        }
                      else
                        {
                          t = a_23;
                        }
                      return(t);
                    }
                    t = Cons_2(t, n_4, Nil_0);
                    return(t);
                  }
                  ATerm l_4 (ATerm t)
                  {
                    ATerm b_23 = t;
                    int c_23 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        t = sort_1(t, _id);
                        LocalPopChoice(c_23);
                      }
                    else
                      {
                        t = b_23;
                        {
                          ATerm e_23 = t;
                          int j_23 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = cf_1(t, l_4);
                              LocalPopChoice(j_23);
                            }
                          else
                            {
                              t = e_23;
                              {
                                ATerm k_23 = t;
                                int l_23 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    t = lex_1(t, l_4);
                                    LocalPopChoice(l_23);
                                  }
                                else
                                  {
                                    t = k_23;
                                    {
                                      ATerm m_23 = t;
                                      int n_23 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          t = iter_1(t, l_4);
                                          LocalPopChoice(n_23);
                                        }
                                      else
                                        {
                                          t = m_23;
                                          {
                                            ATerm q_23 = t;
                                            int v_23 = stack_ptr;
                                            if((PushChoice() == 0))
                                              {
                                                t = iter_star_1(t, l_4);
                                                LocalPopChoice(v_23);
                                              }
                                            else
                                              {
                                                t = q_23;
                                                {
                                                  ATerm w_23 = t;
                                                  int x_23 = stack_ptr;
                                                  if((PushChoice() == 0))
                                                    {
                                                      ATerm o_4 (ATerm t)
                                                      {
                                                        t = lit_1(t, _id);
                                                        return(t);
                                                      }
                                                      t = iter_sep_2(t, l_4, o_4);
                                                      LocalPopChoice(x_23);
                                                    }
                                                  else
                                                    {
                                                      t = w_23;
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
                    ATerm y_23 = t;
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
                        t = y_23;
                      }
                    return(t);
                  }
                  t = prod_3(t, k_4, l_4, m_4);
                  LocalPopChoice(z_22);
                }
              else
                {
                  t = y_22;
                  {
                    ATerm z_23 = t;
                    int a_24 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm p_50 = NULL,q_50 = NULL,r_50 = NULL,s_50 = NULL,t_50 = NULL,u_50 = NULL,v_50 = NULL,w_50 = NULL,x_50 = NULL,y_50 = NULL,z_50 = NULL,a_51 = NULL;
                        r_50 = t;
                        y_49 :
                        if(match_cons(r_50, sym_prod_3))
                          {
                            s_50 = ATgetArgument(r_50, 0);
                            x_50 = ATgetArgument(r_50, 1);
                            a_51 = ATgetArgument(r_50, 2);
                            z_49 :
                            if(((ATgetType(s_50) == AT_LIST) && ((ATermList) s_50 != ATempty)))
                              {
                                t_50 = ATgetFirst((ATermList) s_50);
                                w_50 = (ATerm) ATgetNext((ATermList) s_50);
                                a_50 :
                                if(match_cons(t_50, sym_cf_1))
                                  {
                                    u_50 = ATgetArgument(t_50, 0);
                                    b_50 :
                                    if(match_cons(u_50, sym_iter_sep_2))
                                      {
                                        v_50 = ATgetArgument(u_50, 0);
                                        p_50 = ATgetArgument(u_50, 1);
                                        c_50 :
                                        if(((ATermList) w_50 == ATempty))
                                          {
                                            d_50 :
                                            if(match_cons(x_50, sym_cf_1))
                                              {
                                                y_50 = ATgetArgument(x_50, 0);
                                                e_50 :
                                                if(match_cons(y_50, sym_iter_star_sep_2))
                                                  {
                                                    z_50 = ATgetArgument(y_50, 0);
                                                    q_50 = ATgetArgument(y_50, 1);
                                                    f_50 :
                                                    if(match_cons(a_51, sym_no_attrs_0))
                                                      {
                                                        if(((v_50 != NULL) && (v_50 != z_50)))
                                                          _fail(z_50);
                                                        else
                                                          v_50 = z_50;
                                                        if(((p_50 != NULL) && (p_50 != q_50)))
                                                          _fail(q_50);
                                                        else
                                                          p_50 = q_50;
                                                      }
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
                                        if(match_cons(u_50, sym_iter_1))
                                          {
                                            v_50 = ATgetArgument(u_50, 0);
                                            g_50 :
                                            if(((ATermList) w_50 == ATempty))
                                              {
                                                h_50 :
                                                if(match_cons(x_50, sym_cf_1))
                                                  {
                                                    y_50 = ATgetArgument(x_50, 0);
                                                    i_50 :
                                                    if(match_cons(y_50, sym_iter_star_1))
                                                      {
                                                        z_50 = ATgetArgument(y_50, 0);
                                                        j_50 :
                                                        if(match_cons(a_51, sym_no_attrs_0))
                                                          {
                                                            if(((v_50 != NULL) && (v_50 != z_50)))
                                                              _fail(z_50);
                                                            else
                                                              v_50 = z_50;
                                                          }
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
                        LocalPopChoice(a_24);
                      }
                    else
                      {
                        t = z_23;
                        {
                          ATerm b_24 = t;
                          int c_24 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm r_4 (ATerm t)
                              {
                                ATerm s_4 (ATerm t)
                                {
                                  ATerm d_24 = t;
                                  int q_24 = stack_ptr;
                                  if((PushChoice() == 0))
                                    {
                                      ATerm e_51 = NULL;
                                      e_51 = t;
                                      k_50 :
                                      if(!(match_string(e_51, "bracket")))
                                        {
                                          _fail(t);
                                        }
                                      LocalPopChoice(q_24);
                                    }
                                  else
                                    {
                                      t = d_24;
                                      t = bracket_0(t);
                                    }
                                  return(t);
                                }
                                t = oncetd_1(t, s_4);
                                return(t);
                              }
                              t = prod_3(t, _id, _id, r_4);
                              LocalPopChoice(c_24);
                            }
                          else
                            {
                              t = b_24;
                              {
                                ATerm f_51 = NULL,g_51 = NULL,h_51 = NULL,i_51 = NULL,j_51 = NULL;
                                f_51 = t;
                                l_50 :
                                if(match_cons(f_51, sym_prod_3))
                                  {
                                    g_51 = ATgetArgument(f_51, 0);
                                    h_51 = ATgetArgument(f_51, 1);
                                    j_51 = ATgetArgument(f_51, 2);
                                    m_50 :
                                    if(match_cons(h_51, sym_sort_1))
                                      {
                                        i_51 = ATgetArgument(h_51, 0);
                                        n_50 :
                                        if(match_string(i_51, "<START>"))
                                          {
                                            o_50 :
                                            if(!(match_cons(j_51, sym_no_attrs_0)))
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
  ATerm r_51 = NULL,s_51 = NULL,t_51 = NULL,u_51 = NULL,v_51 = NULL;
  r_51 = t;
  o_51 :
  if(match_cons(r_51, sym_appl_2))
    {
      s_51 = ATgetArgument(r_51, 0);
      t_51 = ATgetArgument(r_51, 1);
      p_51 :
      if(((ATgetType(t_51) == AT_LIST) && ((ATermList) t_51 != ATempty)))
        {
          u_51 = ATgetFirst((ATermList) t_51);
          v_51 = (ATerm) ATgetNext((ATermList) t_51);
          q_51 :
          if(((ATermList) v_51 == ATempty))
            {
              {
                t = not_null(s_51);
                t = injection_0(t);
                t = not_null(u_51);
              }
            }
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
ATerm bottomup_1 (ATerm t, ATerm o_103 (ATerm))
{
  ATerm t_4 (ATerm t)
  {
    t = bottomup_1(t, o_103);
    return(t);
  }
  t = _all(t, t_4);
  t = o_103(t);
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
  ATerm d_52 = NULL;
  d_52 = t;
  c_52 :
  if(match_cons(d_52, sym_FlatInj_0))
    {
      ATerm f_52 = NULL,h_52 = NULL;
      ATerm u_24;
      u_24 = t;
      {
        ATerm g_52 = NULL;
        t = SSLgetAnnotations(not_null(d_52));
        {
          g_52 = t;
          if(((f_52 != NULL) && (f_52 != g_52)))
            _fail(g_52);
          else
            f_52 = g_52;
        }
      }
      t = u_24;
      {
        ATerm i_52 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatInj_0), not_null(f_52));
        {
          i_52 = t;
          if(((h_52 != NULL) && (h_52 != i_52)))
            _fail(i_52);
          else
            h_52 = i_52;
        }
        t = not_null(h_52);
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
  ATerm v_52 = NULL,w_52 = NULL;
  v_52 = t;
  u_52 :
  if(match_cons(v_52, sym_lit_1))
    {
      w_52 = ATgetArgument(v_52, 0);
      {
        ATerm v_24 = t;
        int z_24 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_52 = NULL,b_53 = NULL;
            ATerm a_53 = NULL;
            t = SSLgetAnnotations(not_null(v_52));
            {
              a_53 = t;
              if(((z_52 != NULL) && (z_52 != a_53)))
                _fail(a_53);
              else
                z_52 = a_53;
            }
            {
              t = not_null(w_52);
              {
                ATerm d_53 = NULL;
                t = z_0(t);
                {
                  b_53 = t;
                  {
                    ATerm e_53 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(b_53)), not_null(z_52));
                    {
                      e_53 = t;
                      if(((d_53 != NULL) && (d_53 != e_53)))
                        _fail(e_53);
                      else
                        d_53 = e_53;
                    }
                    t = not_null(d_53);
                  }
                }
              }
            }
            LocalPopChoice(z_24);
          }
        else
          {
            t = v_24;
            {
              ATerm h_53 = NULL,j_53 = NULL;
              ATerm i_53 = NULL;
              t = SSLgetAnnotations(not_null(v_52));
              {
                i_53 = t;
                if(((h_53 != NULL) && (h_53 != i_53)))
                  _fail(i_53);
                else
                  h_53 = i_53;
              }
              {
                t = not_null(w_52);
                {
                  ATerm l_53 = NULL;
                  t = z_0(t);
                  {
                    j_53 = t;
                    {
                      ATerm o_53 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_lit_1, not_null(j_53)), not_null(h_53));
                      {
                        o_53 = t;
                        if(((l_53 != NULL) && (l_53 != o_53)))
                          _fail(o_53);
                        else
                          l_53 = o_53;
                      }
                      t = not_null(l_53);
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
ATerm list_1 (ATerm t, ATerm z_98 (ATerm))
{
  ATerm x_53 (ATerm t)
  {
    ATerm a_25 = t;
    int b_25 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(b_25);
      }
    else
      {
        t = a_25;
        t = Cons_2(t, z_98, x_53);
      }
    return(t);
  }
  t = x_53(t);
  return(t);
}
ATerm seq_1 (ATerm t, ATerm k_74 (ATerm))
{
  ATerm d_54 = NULL,e_54 = NULL;
  d_54 = t;
  c_54 :
  if(match_cons(d_54, sym_seq_1))
    {
      e_54 = ATgetArgument(d_54, 0);
      {
        ATerm h_54 = NULL,j_54 = NULL;
        ATerm i_54 = NULL;
        t = SSLgetAnnotations(not_null(d_54));
        {
          i_54 = t;
          if(((h_54 != NULL) && (h_54 != i_54)))
            _fail(i_54);
          else
            h_54 = i_54;
        }
        {
          t = not_null(e_54);
          {
            ATerm l_54 = NULL;
            t = k_74(t);
            {
              j_54 = t;
              {
                ATerm m_54 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_seq_1, not_null(j_54)), not_null(h_54));
                {
                  m_54 = t;
                  if(((l_54 != NULL) && (l_54 != m_54)))
                    _fail(m_54);
                  else
                    l_54 = m_54;
                }
                t = not_null(l_54);
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
  ATerm c_55 = NULL,d_55 = NULL,f_55 = NULL;
  c_55 = t;
  b_55 :
  if(match_cons(c_55, sym_iter_star_sep_2))
    {
      d_55 = ATgetArgument(c_55, 0);
      f_55 = ATgetArgument(c_55, 1);
      {
        ATerm c_25 = t;
        int d_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_55 = NULL,l_55 = NULL;
            ATerm k_55 = NULL;
            t = SSLgetAnnotations(not_null(c_55));
            {
              k_55 = t;
              if(((j_55 != NULL) && (j_55 != k_55)))
                _fail(k_55);
              else
                j_55 = k_55;
            }
            {
              t = not_null(d_55);
              {
                ATerm n_55 = NULL;
                t = x_0(t);
                {
                  l_55 = t;
                  {
                    t = not_null(f_55);
                    {
                      ATerm p_55 = NULL;
                      t = y_0(t);
                      {
                        n_55 = t;
                        {
                          ATerm q_55 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(l_55), not_null(n_55)), not_null(j_55));
                          {
                            q_55 = t;
                            if(((p_55 != NULL) && (p_55 != q_55)))
                              _fail(q_55);
                            else
                              p_55 = q_55;
                          }
                          t = not_null(p_55);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(d_25);
          }
        else
          {
            t = c_25;
            {
              ATerm u_55 = NULL,w_55 = NULL;
              ATerm v_55 = NULL;
              t = SSLgetAnnotations(not_null(c_55));
              {
                v_55 = t;
                if(((u_55 != NULL) && (u_55 != v_55)))
                  _fail(v_55);
                else
                  u_55 = v_55;
              }
              {
                t = not_null(d_55);
                {
                  ATerm y_55 = NULL;
                  t = x_0(t);
                  {
                    w_55 = t;
                    {
                      t = not_null(f_55);
                      {
                        ATerm a_56 = NULL;
                        t = y_0(t);
                        {
                          y_55 = t;
                          {
                            ATerm b_56 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_sep_2, not_null(w_55), not_null(y_55)), not_null(u_55));
                            {
                              b_56 = t;
                              if(((a_56 != NULL) && (a_56 != b_56)))
                                _fail(b_56);
                              else
                                a_56 = b_56;
                            }
                            t = not_null(a_56);
                          }
                        }
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
  ATerm v_56 = NULL,w_56 = NULL;
  v_56 = t;
  u_56 :
  if(match_cons(v_56, sym_iter_star_1))
    {
      w_56 = ATgetArgument(v_56, 0);
      {
        ATerm e_25 = t;
        int f_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm z_56 = NULL,b_57 = NULL;
            ATerm a_57 = NULL;
            t = SSLgetAnnotations(not_null(v_56));
            {
              a_57 = t;
              if(((z_56 != NULL) && (z_56 != a_57)))
                _fail(a_57);
              else
                z_56 = a_57;
            }
            {
              t = not_null(w_56);
              {
                ATerm d_57 = NULL;
                t = w_0(t);
                {
                  b_57 = t;
                  {
                    ATerm e_57 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(b_57)), not_null(z_56));
                    {
                      e_57 = t;
                      if(((d_57 != NULL) && (d_57 != e_57)))
                        _fail(e_57);
                      else
                        d_57 = e_57;
                    }
                    t = not_null(d_57);
                  }
                }
              }
            }
            LocalPopChoice(f_25);
          }
        else
          {
            t = e_25;
            {
              ATerm h_57 = NULL,j_57 = NULL;
              ATerm i_57 = NULL;
              t = SSLgetAnnotations(not_null(v_56));
              {
                i_57 = t;
                if(((h_57 != NULL) && (h_57 != i_57)))
                  _fail(i_57);
                else
                  h_57 = i_57;
              }
              {
                t = not_null(w_56);
                {
                  ATerm l_57 = NULL;
                  t = w_0(t);
                  {
                    j_57 = t;
                    {
                      ATerm m_57 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_star_1, not_null(j_57)), not_null(h_57));
                      {
                        m_57 = t;
                        if(((l_57 != NULL) && (l_57 != m_57)))
                          _fail(m_57);
                        else
                          l_57 = m_57;
                      }
                      t = not_null(l_57);
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
  ATerm g_58 = NULL,h_58 = NULL,i_58 = NULL;
  g_58 = t;
  f_58 :
  if(match_cons(g_58, sym_iter_sep_2))
    {
      h_58 = ATgetArgument(g_58, 0);
      i_58 = ATgetArgument(g_58, 1);
      {
        ATerm g_25 = t;
        int h_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_58 = NULL,o_58 = NULL;
            ATerm n_58 = NULL;
            t = SSLgetAnnotations(not_null(g_58));
            {
              n_58 = t;
              if(((m_58 != NULL) && (m_58 != n_58)))
                _fail(n_58);
              else
                m_58 = n_58;
            }
            {
              t = not_null(h_58);
              {
                ATerm q_58 = NULL;
                t = u_0(t);
                {
                  o_58 = t;
                  {
                    t = not_null(i_58);
                    {
                      ATerm s_58 = NULL;
                      t = v_0(t);
                      {
                        q_58 = t;
                        {
                          ATerm t_58 = NULL;
                          t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(o_58), not_null(q_58)), not_null(m_58));
                          {
                            t_58 = t;
                            if(((s_58 != NULL) && (s_58 != t_58)))
                              _fail(t_58);
                            else
                              s_58 = t_58;
                          }
                          t = not_null(s_58);
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(h_25);
          }
        else
          {
            t = g_25;
            {
              ATerm x_58 = NULL,z_58 = NULL;
              ATerm y_58 = NULL;
              t = SSLgetAnnotations(not_null(g_58));
              {
                y_58 = t;
                if(((x_58 != NULL) && (x_58 != y_58)))
                  _fail(y_58);
                else
                  x_58 = y_58;
              }
              {
                t = not_null(h_58);
                {
                  ATerm b_59 = NULL;
                  t = u_0(t);
                  {
                    z_58 = t;
                    {
                      t = not_null(i_58);
                      {
                        ATerm d_59 = NULL;
                        t = v_0(t);
                        {
                          b_59 = t;
                          {
                            ATerm e_59 = NULL;
                            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_sep_2, not_null(z_58), not_null(b_59)), not_null(x_58));
                            {
                              e_59 = t;
                              if(((d_59 != NULL) && (d_59 != e_59)))
                                _fail(e_59);
                              else
                                d_59 = e_59;
                            }
                            t = not_null(d_59);
                          }
                        }
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
  ATerm f_60 = NULL,g_60 = NULL;
  f_60 = t;
  b_60 :
  if(match_cons(f_60, sym_iter_1))
    {
      g_60 = ATgetArgument(f_60, 0);
      {
        ATerm i_25 = t;
        int l_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm j_60 = NULL,q_60 = NULL;
            ATerm p_60 = NULL;
            t = SSLgetAnnotations(not_null(f_60));
            {
              p_60 = t;
              if(((j_60 != NULL) && (j_60 != p_60)))
                _fail(p_60);
              else
                j_60 = p_60;
            }
            {
              t = not_null(g_60);
              {
                ATerm s_60 = NULL;
                t = t_0(t);
                {
                  q_60 = t;
                  {
                    ATerm t_60 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(q_60)), not_null(j_60));
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
            LocalPopChoice(l_25);
          }
        else
          {
            t = i_25;
            {
              ATerm w_60 = NULL,y_60 = NULL;
              ATerm x_60 = NULL;
              t = SSLgetAnnotations(not_null(f_60));
              {
                x_60 = t;
                if(((w_60 != NULL) && (w_60 != x_60)))
                  _fail(x_60);
                else
                  w_60 = x_60;
              }
              {
                t = not_null(g_60);
                {
                  ATerm a_61 = NULL;
                  t = t_0(t);
                  {
                    y_60 = t;
                    {
                      ATerm b_61 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_iter_1, not_null(y_60)), not_null(w_60));
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
  ATerm q_25 = t;
  int r_25 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = iter_1(t, _id);
      LocalPopChoice(r_25);
    }
  else
    {
      t = q_25;
      {
        ATerm s_25 = t;
        int t_25 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = iter_sep_2(t, _id, _id);
            LocalPopChoice(t_25);
          }
        else
          {
            t = s_25;
            {
              ATerm x_25 = t;
              int y_25 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = iter_star_1(t, _id);
                  LocalPopChoice(y_25);
                }
              else
                {
                  t = x_25;
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
  ATerm z_25 = t;
  int a_26 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_61 (ATerm t)
      {
        ATerm b_26 = t;
        int c_26 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = list_sort_0(t);
            LocalPopChoice(c_26);
          }
        else
          {
            t = b_26;
            {
              ATerm v_4 (ATerm t)
              {
                ATerm w_4 (ATerm t)
                {
                  ATerm n_26 = t;
                  int o_26 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      t = lit_1(t, _id);
                      LocalPopChoice(o_26);
                    }
                  else
                    {
                      t = n_26;
                      {
                        ATerm p_26 = t;
                        int q_26 = stack_ptr;
                        if((PushChoice() == 0))
                          {
                            t = layout_0(t);
                            LocalPopChoice(q_26);
                          }
                        else
                          {
                            t = p_26;
                            t = o_61(t);
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
      t = o_61(t);
      LocalPopChoice(a_26);
    }
  else
    {
      t = z_25;
      {
        ATerm l_61 = NULL,m_61 = NULL,n_61 = NULL;
        l_61 = t;
        k_61 :
        if(((ATermList) l_61 == ATempty))
          {
            {
            }
          }
        else
          {
            if(((ATgetType(l_61) == AT_LIST) && ((ATermList) l_61 != ATempty)))
              {
                m_61 = ATgetFirst((ATermList) l_61);
                n_61 = (ATerm) ATgetNext((ATermList) l_61);
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
          ATerm r_26 = t;
          if((PushChoice() == 0))
            {
              t = lit_1(t, _id);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_26;
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
  ATerm t_61 = NULL;
  t_61 = t;
  s_61 :
  if(match_cons(t_61, sym_RemoveLit_0))
    {
      ATerm q_64 = NULL,g_65 = NULL;
      ATerm s_26;
      s_26 = t;
      {
        ATerm f_65 = NULL;
        t = SSLgetAnnotations(not_null(t_61));
        {
          f_65 = t;
          if(((q_64 != NULL) && (q_64 != f_65)))
            _fail(f_65);
          else
            q_64 = f_65;
        }
      }
      t = s_26;
      {
        ATerm h_65 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLit_0), not_null(q_64));
        {
          h_65 = t;
          if(((g_65 != NULL) && (g_65 != h_65)))
            _fail(h_65);
          else
            g_65 = h_65;
        }
        t = not_null(g_65);
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
    ATerm t_73 (ATerm t)
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
                                            ATerm t_26;
                                            t_26 = t;
                                            {
                                              ATerm i_71 = NULL;
                                              t = not_null(t_70);
                                              {
                                                t = t_73(t);
                                                {
                                                  i_71 = t;
                                                  if(((h_71 != NULL) && (h_71 != i_71)))
                                                    _fail(i_71);
                                                  else
                                                    h_71 = i_71;
                                                }
                                              }
                                            }
                                            t = t_26;
                                            {
                                              ATerm k_71 = NULL;
                                              t = not_null(x_70);
                                              {
                                                t = t_73(t);
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
                                                        ATerm u_26;
                                                        u_26 = t;
                                                        {
                                                          ATerm r_71 = NULL;
                                                          t = not_null(t_70);
                                                          {
                                                            t = t_73(t);
                                                            {
                                                              r_71 = t;
                                                              if(((q_71 != NULL) && (q_71 != r_71)))
                                                                _fail(r_71);
                                                              else
                                                                q_71 = r_71;
                                                            }
                                                          }
                                                        }
                                                        t = u_26;
                                                        {
                                                          ATerm t_71 = NULL;
                                                          t = not_null(b_71);
                                                          {
                                                            t = t_73(t);
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
    t = t_73(t);
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
  ATerm o_73 (ATerm t)
  {
    ATerm z_71 = NULL;
    ATerm c_73 = NULL;
    ATerm c_74 (ATerm t)
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
                                        ATerm v_26;
                                        v_26 = t;
                                        {
                                          ATerm s_72 = NULL;
                                          t = not_null(i_72);
                                          {
                                            t = c_74(t);
                                            {
                                              s_72 = t;
                                              if(((r_72 != NULL) && (r_72 != s_72)))
                                                _fail(s_72);
                                              else
                                                r_72 = s_72;
                                            }
                                          }
                                        }
                                        t = v_26;
                                        {
                                          ATerm u_72 = NULL;
                                          t = not_null(k_72);
                                          {
                                            t = c_74(t);
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
                                                ATerm w_26;
                                                w_26 = t;
                                                {
                                                  ATerm z_72 = NULL;
                                                  t = not_null(i_72);
                                                  {
                                                    t = c_74(t);
                                                    {
                                                      z_72 = t;
                                                      if(((y_72 != NULL) && (y_72 != z_72)))
                                                        _fail(z_72);
                                                      else
                                                        y_72 = z_72;
                                                    }
                                                  }
                                                }
                                                t = w_26;
                                                {
                                                  ATerm b_73 = NULL;
                                                  t = not_null(m_72);
                                                  {
                                                    t = c_74(t);
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
    t = c_74(t);
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
  ATerm p_73 (ATerm t)
  {
    t = (ATerm) ATinsert(ATempty, not_null(e_70));
    return(t);
  }
  ATerm q_73 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  ATerm r_73 (ATerm t)
  {
    t = not_null(e_70);
    t = FlatList_0(t);
    return(t);
  }
  ATerm s_73 (ATerm t)
  {
    ATerm g_73 = NULL,i_73 = NULL;
    ATerm x_26;
    x_26 = t;
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
    t = x_26;
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
                            ATerm y_26 = t;
                            int z_26 = stack_ptr;
                            if((PushChoice() == 0))
                              {
                                t = k_73(t);
                                LocalPopChoice(z_26);
                              }
                            else
                              {
                                t = y_26;
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
                                    ATerm a_27 = t;
                                    int b_27 = stack_ptr;
                                    if((PushChoice() == 0))
                                      {
                                        t = o_73(t);
                                        LocalPopChoice(b_27);
                                      }
                                    else
                                      {
                                        t = a_27;
                                        t = p_73(t);
                                      }
                                  }
                                }
                              else
                                {
                                  j_69 :
                                  t = o_73(t);
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
                                      t = q_73(t);
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
                                                          t = r_73(t);
                                                        }
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
          t = s_73(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm repeat_2 (ATerm t, ATerm u_106 (ATerm), ATerm v_106 (ATerm))
{
  ATerm o_74 (ATerm t)
  {
    ATerm c_27 = t;
    int d_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_106(t);
        t = o_74(t);
        LocalPopChoice(d_27);
      }
    else
      {
        t = c_27;
        t = v_106(t);
      }
    return(t);
  }
  t = o_74(t);
  return(t);
}
ATerm repeat_1 (ATerm t, ATerm x_106 (ATerm))
{
  t = repeat_2(t, x_106, _id);
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
  ATerm r_74 = NULL;
  r_74 = t;
  q_74 :
  if(((ATermList) r_74 == ATempty))
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
  ATerm w_74 = NULL,x_74 = NULL,y_74 = NULL;
  w_74 = t;
  v_74 :
  if(((ATgetType(w_74) == AT_LIST) && ((ATermList) w_74 != ATempty)))
    {
      x_74 = ATgetFirst((ATermList) w_74);
      y_74 = (ATerm) ATgetNext((ATermList) w_74);
      {
        ATerm b_75 = NULL;
        ATerm c_75 = NULL;
        t = not_null(y_74);
        {
          t = De_Escape_0(t);
          {
            c_75 = t;
            if(((b_75 != NULL) && (b_75 != c_75)))
              _fail(c_75);
            else
              b_75 = c_75;
          }
        }
        t = (ATerm) ATinsert(CheckATermList(not_null(b_75)), not_null(x_74));
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
  ATerm o_75 = NULL,p_75 = NULL,q_75 = NULL,r_75 = NULL,s_75 = NULL;
  o_75 = t;
  k_75 :
  if(((ATgetType(o_75) == AT_LIST) && ((ATermList) o_75 != ATempty)))
    {
      p_75 = ATgetFirst((ATermList) o_75);
      q_75 = (ATerm) ATgetNext((ATermList) o_75);
      l_75 :
      if(match_int(p_75, 92))
        {
          m_75 :
          if(((ATgetType(q_75) == AT_LIST) && ((ATermList) q_75 != ATempty)))
            {
              r_75 = ATgetFirst((ATermList) q_75);
              s_75 = (ATerm) ATgetNext((ATermList) q_75);
              n_75 :
              if(match_int(r_75, 92))
                {
                  ATerm u_75 = NULL;
                  ATerm v_75 = NULL;
                  t = not_null(s_75);
                  {
                    t = De_Escape_0(t);
                    {
                      v_75 = t;
                      if(((u_75 != NULL) && (u_75 != v_75)))
                        _fail(v_75);
                      else
                        u_75 = v_75;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(u_75)), term_e_27);
                }
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
                  t = (ATerm) ATinsert(CheckATermList(not_null(m_76)), term_j_27);
                }
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
  ATerm k_27 = t;
  int l_27 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = De_Escape1_0(t);
      LocalPopChoice(l_27);
    }
  else
    {
      t = k_27;
      {
        ATerm p_27 = t;
        int r_27 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = De_Escape2_0(t);
            LocalPopChoice(r_27);
          }
        else
          {
            t = p_27;
            {
              ATerm u_27 = t;
              int v_27 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = De_Escape3_0(t);
                  LocalPopChoice(v_27);
                }
              else
                {
                  t = u_27;
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
ATerm at_last_1 (ATerm t, ATerm v_99 (ATerm))
{
  ATerm q_76 (ATerm t)
  {
    ATerm w_27 = t;
    int x_27 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, Nil_0);
        t = v_99(t);
        LocalPopChoice(x_27);
      }
    else
      {
        t = w_27;
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
    ATerm y_27;
    y_27 = t;
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
    t = y_27;
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
        ATerm l_79 = NULL;
        ATerm m_79 = NULL;
        t = not_null(h_79);
        {
          t = PpSym_0(t);
          {
            m_79 = t;
            if(((l_79 != NULL) && (l_79 != m_79)))
              _fail(m_79);
            else
              l_79 = m_79;
          }
        }
        {
          t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_a_28)), not_null(l_79)), (ATerm) ATinsert(ATempty, term_z_27));
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
            ATerm o_79 = NULL;
            ATerm p_79 = NULL;
            t = not_null(h_79);
            {
              t = PpSym_0(t);
              {
                p_79 = t;
                if(((o_79 != NULL) && (o_79 != p_79)))
                  _fail(p_79);
                else
                  o_79 = p_79;
              }
            }
            {
              t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_f_28)), not_null(o_79)), (ATerm) ATinsert(ATempty, term_z_27));
              t = concat_0(t);
            }
          }
        }
      else
        {
          if(match_cons(j_79, sym_empty_0))
            {
              t = (ATerm) ATinsert(ATempty, term_g_28);
            }
          else
            {
              if(match_cons(j_79, sym_seq_2))
                {
                  h_79 = ATgetArgument(j_79, 0);
                  i_79 = ATgetArgument(j_79, 1);
                  {
                    ATerm s_79 = NULL;
                    ATerm t_79 = NULL;
                    t = (ATerm) ATinsert(CheckATermList(not_null(i_79)), not_null(h_79));
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
                      t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_i_28)), not_null(s_79)), (ATerm) ATinsert(ATempty, term_h_28));
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
                              t = (ATerm) ATinsert(ATempty, term_j_28);
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
                                  t = (ATerm) ATinsert(ATempty, term_k_28);
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
                                      t = (ATerm) ATinsert(ATempty, term_l_28);
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
                                    ATerm z_79 = NULL,b_80 = NULL;
                                    ATerm m_28;
                                    m_28 = t;
                                    {
                                      ATerm a_80 = NULL;
                                      t = not_null(h_79);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          a_80 = t;
                                          if(((z_79 != NULL) && (z_79 != a_80)))
                                            _fail(a_80);
                                          else
                                            z_79 = a_80;
                                        }
                                      }
                                    }
                                    t = m_28;
                                    {
                                      ATerm c_80 = NULL;
                                      t = not_null(i_79);
                                      {
                                        t = PpSym_0(t);
                                        {
                                          c_80 = t;
                                          if(((b_80 != NULL) && (b_80 != c_80)))
                                            _fail(c_80);
                                          else
                                            b_80 = c_80;
                                        }
                                      }
                                      {
                                        t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_o_28)), not_null(b_80)), not_null(z_79)), (ATerm) ATinsert(ATempty, term_n_28));
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
                                        ATerm f_80 = NULL,i_80 = NULL;
                                        ATerm b_29;
                                        b_29 = t;
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
                                        t = b_29;
                                        {
                                          ATerm l_80 = NULL;
                                          t = not_null(i_79);
                                          {
                                            t = PpSym_0(t);
                                            {
                                              l_80 = t;
                                              if(((i_80 != NULL) && (i_80 != l_80)))
                                                _fail(l_80);
                                              else
                                                i_80 = l_80;
                                            }
                                          }
                                          {
                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_c_29)), not_null(i_80)), not_null(f_80)), (ATerm) ATinsert(ATempty, term_n_28));
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
                                            ATerm n_80 = NULL;
                                            ATerm o_80 = NULL;
                                            t = not_null(h_79);
                                            {
                                              t = PpSym_0(t);
                                              {
                                                o_80 = t;
                                                if(((n_80 != NULL) && (n_80 != o_80)))
                                                  _fail(o_80);
                                                else
                                                  n_80 = o_80;
                                              }
                                            }
                                            {
                                              t = (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_29)), not_null(n_80));
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
                                                ATerm r_80 = NULL,v_80 = NULL;
                                                ATerm e_29;
                                                e_29 = t;
                                                {
                                                  ATerm u_80 = NULL;
                                                  t = not_null(h_79);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      u_80 = t;
                                                      if(((r_80 != NULL) && (r_80 != u_80)))
                                                        _fail(u_80);
                                                      else
                                                        r_80 = u_80;
                                                    }
                                                  }
                                                }
                                                t = e_29;
                                                {
                                                  ATerm w_80 = NULL;
                                                  t = not_null(i_79);
                                                  {
                                                    t = PpSym_0(t);
                                                    {
                                                      w_80 = t;
                                                      if(((v_80 != NULL) && (v_80 != w_80)))
                                                        _fail(w_80);
                                                      else
                                                        v_80 = w_80;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATinsert(ATempty, term_d_29)), not_null(v_80)), not_null(r_80));
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
                                                    ATerm y_80 = NULL;
                                                    ATerm z_80 = NULL;
                                                    t = not_null(h_79);
                                                    {
                                                      t = PpSym_0(t);
                                                      {
                                                        z_80 = t;
                                                        if(((y_80 != NULL) && (y_80 != z_80)))
                                                          _fail(z_80);
                                                        else
                                                          y_80 = z_80;
                                                      }
                                                    }
                                                    {
                                                      t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_80)), (ATerm) ATinsert(ATempty, term_f_29));
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
                                                        ATerm d_81 = NULL,f_81 = NULL;
                                                        ATerm g_29;
                                                        g_29 = t;
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
                                                        t = g_29;
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
                                                            t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(f_81)), (ATerm) ATinsert(ATempty, term_h_29)), not_null(d_81));
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
                                                            ATerm n_81 = NULL,p_81 = NULL;
                                                            ATerm i_29;
                                                            i_29 = t;
                                                            {
                                                              ATerm o_81 = NULL;
                                                              t = not_null(h_79);
                                                              {
                                                                t = filter_1(t, PpSym_0);
                                                                {
                                                                  t = concat_0(t);
                                                                  {
                                                                    o_81 = t;
                                                                    if(((n_81 != NULL) && (n_81 != o_81)))
                                                                      _fail(o_81);
                                                                    else
                                                                      n_81 = o_81;
                                                                  }
                                                                }
                                                              }
                                                            }
                                                            t = i_29;
                                                            {
                                                              ATerm v_81 = NULL;
                                                              t = not_null(i_79);
                                                              {
                                                                t = PpSym_0(t);
                                                                {
                                                                  v_81 = t;
                                                                  if(((p_81 != NULL) && (p_81 != v_81)))
                                                                    _fail(v_81);
                                                                  else
                                                                    p_81 = v_81;
                                                                }
                                                              }
                                                              {
                                                                t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(p_81)), (ATerm) ATinsert(ATempty, term_j_29)), not_null(n_81));
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
                                                                ATerm c_82 = NULL,e_82 = NULL;
                                                                ATerm k_29;
                                                                k_29 = t;
                                                                {
                                                                  ATerm d_82 = NULL;
                                                                  t = not_null(h_79);
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
                                                                }
                                                                t = k_29;
                                                                {
                                                                  ATerm f_82 = NULL;
                                                                  t = not_null(i_79);
                                                                  {
                                                                    t = PpSym_0(t);
                                                                    {
                                                                      f_82 = t;
                                                                      if(((e_82 != NULL) && (e_82 != f_82)))
                                                                        _fail(f_82);
                                                                      else
                                                                        e_82 = f_82;
                                                                    }
                                                                  }
                                                                  {
                                                                    t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, not_null(e_82)), (ATerm) ATinsert(ATempty, term_p_29)), not_null(c_82));
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
                                                                    ATerm h_82 = NULL;
                                                                    ATerm i_82 = NULL;
                                                                    t = not_null(h_79);
                                                                    {
                                                                      t = filter_1(t, PpSym_0);
                                                                      {
                                                                        t = concat_0(t);
                                                                        {
                                                                          i_82 = t;
                                                                          if(((h_82 != NULL) && (h_82 != i_82)))
                                                                            _fail(i_82);
                                                                          else
                                                                            h_82 = i_82;
                                                                        }
                                                                      }
                                                                    }
                                                                    t = (ATerm) ATinsert(CheckATermList(not_null(h_82)), term_q_29);
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
                                                                            ATerm n_82 = NULL;
                                                                            ATerm o_82 = NULL;
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
                                                                                o_82 = t;
                                                                                if(((n_82 != NULL) && (n_82 != o_82)))
                                                                                  _fail(o_82);
                                                                                else
                                                                                  n_82 = o_82;
                                                                              }
                                                                            }
                                                                            t = (ATerm) ATinsert(ATempty, not_null(n_82));
                                                                          }
                                                                        }
                                                                      else
                                                                        {
                                                                          if(match_cons(j_79, sym_label_2))
                                                                            {
                                                                              h_79 = ATgetArgument(j_79, 0);
                                                                              i_79 = ATgetArgument(j_79, 1);
                                                                              {
                                                                                ATerm q_82 = NULL;
                                                                                ATerm r_82 = NULL;
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
                                                                                    r_82 = t;
                                                                                    if(((q_82 != NULL) && (q_82 != r_82)))
                                                                                      _fail(r_82);
                                                                                    else
                                                                                      q_82 = r_82;
                                                                                  }
                                                                                }
                                                                                t = (ATerm) ATinsert(ATempty, not_null(q_82));
                                                                              }
                                                                            }
                                                                          else
                                                                            {
                                                                              if(match_cons(j_79, sym_layout_0))
                                                                                {
                                                                                  t = (ATerm) ATinsert(ATempty, term_r_29);
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
  ATerm y_84 = NULL,z_84 = NULL,a_85 = NULL,b_85 = NULL,c_85 = NULL,d_85 = NULL,e_85 = NULL,f_85 = NULL,g_85 = NULL;
  ATerm y_85 (ATerm t)
  {
    ATerm k_85 = NULL,p_85 = NULL;
    ATerm s_29;
    s_29 = t;
    {
      ATerm l_85 = NULL,m_85 = NULL;
      t = not_null(a_85);
      {
        l_85 = t;
        m_84 :
        if(match_cons(l_85, sym_cf_1))
          {
            m_85 = ATgetArgument(l_85, 0);
            {
              ATerm o_85 = NULL;
              t = not_null(m_85);
              {
                t = PpSym_0(t);
                {
                  t = concat_strings_0(t);
                  {
                    o_85 = t;
                    if(((k_85 != NULL) && (k_85 != o_85)))
                      _fail(o_85);
                    else
                      k_85 = o_85;
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
    t = s_29;
    {
      t = SSL_mkterm(not_null(k_85), not_null(d_85));
      {
        p_85 = t;
        t = not_null(p_85);
      }
    }
    return(t);
  }
  ATerm z_85 (ATerm t)
  {
    t = not_null(e_85);
    return(t);
  }
  ATerm a_86 (ATerm t)
  {
    ATerm u_85 = NULL,w_85 = NULL;
    ATerm t_29;
    t_29 = t;
    {
      ATerm v_85 = NULL;
      t = SSLgetAnnotations(not_null(g_85));
      {
        v_85 = t;
        if(((u_85 != NULL) && (u_85 != v_85)))
          _fail(v_85);
        else
          u_85 = v_85;
      }
    }
    t = t_29;
    {
      ATerm x_85 = NULL;
      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_ApplToSort_0), not_null(u_85));
      {
        x_85 = t;
        if(((w_85 != NULL) && (w_85 != x_85)))
          _fail(x_85);
        else
          w_85 = x_85;
      }
      t = not_null(w_85);
    }
    return(t);
  }
  g_85 = t;
  q_84 :
  if(match_cons(g_85, sym_appl_2))
    {
      y_84 = ATgetArgument(g_85, 0);
      d_85 = ATgetArgument(g_85, 1);
      r_84 :
      if(match_cons(y_84, sym_prod_3))
        {
          z_84 = ATgetArgument(y_84, 0);
          a_85 = ATgetArgument(y_84, 1);
          c_85 = ATgetArgument(y_84, 2);
          s_84 :
          if(((ATgetType(d_85) == AT_LIST) && ((ATermList) d_85 != ATempty)))
            {
              e_85 = ATgetFirst((ATermList) d_85);
              f_85 = (ATerm) ATgetNext((ATermList) d_85);
              t_84 :
              if(((ATermList) f_85 == ATempty))
                {
                  u_84 :
                  if(match_cons(a_85, sym_sort_1))
                    {
                      b_85 = ATgetArgument(a_85, 0);
                      v_84 :
                      if(match_string(b_85, "<START>"))
                        {
                          ATerm u_29 = t;
                          int v_29 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = y_85(t);
                              LocalPopChoice(v_29);
                            }
                          else
                            {
                              t = u_29;
                              t = z_85(t);
                            }
                        }
                      else
                        {
                          t = y_85(t);
                        }
                    }
                  else
                    {
                      t = y_85(t);
                    }
                }
              else
                {
                  w_84 :
                  t = y_85(t);
                }
            }
          else
            {
              x_84 :
              t = y_85(t);
            }
        }
      else
        {
          _fail(t);
        }
    }
  else
    {
      if(match_cons(g_85, sym_ApplToSort_0))
        {
          t = a_86(t);
        }
      else
        {
          _fail(t);
        }
    }
  return(t);
}
ATerm layout_1 (ATerm t, ATerm h_80 (ATerm))
{
  ATerm n_86 = NULL,o_86 = NULL;
  n_86 = t;
  m_86 :
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
            t = h_80(t);
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
      ATerm y_29 = t;
      int z_29 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm k_87 = NULL,q_87 = NULL;
          ATerm a_30;
          a_30 = t;
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
          t = a_30;
          {
            ATerm r_87 = NULL;
            t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(k_87));
            {
              r_87 = t;
              if(((q_87 != NULL) && (q_87 != r_87)))
                _fail(r_87);
              else
                q_87 = r_87;
            }
            t = not_null(q_87);
          }
          LocalPopChoice(z_29);
        }
      else
        {
          t = y_29;
          {
            ATerm t_87 = NULL,v_87 = NULL;
            ATerm b_30;
            b_30 = t;
            {
              ATerm u_87 = NULL;
              t = SSLgetAnnotations(not_null(i_87));
              {
                u_87 = t;
                if(((t_87 != NULL) && (t_87 != u_87)))
                  _fail(u_87);
                else
                  t_87 = u_87;
              }
            }
            t = b_30;
            {
              ATerm w_87 = NULL;
              t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_layout_0), not_null(t_87));
              {
                w_87 = t;
                if(((v_87 != NULL) && (v_87 != w_87)))
                  _fail(w_87);
                else
                  v_87 = w_87;
              }
              t = not_null(v_87);
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
  ATerm m_88 = NULL,n_88 = NULL;
  m_88 = t;
  l_88 :
  if(match_cons(m_88, sym_opt_1))
    {
      n_88 = ATgetArgument(m_88, 0);
      {
        ATerm c_30 = t;
        int d_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm r_88 = NULL,t_88 = NULL;
            ATerm s_88 = NULL;
            t = SSLgetAnnotations(not_null(m_88));
            {
              s_88 = t;
              if(((r_88 != NULL) && (r_88 != s_88)))
                _fail(s_88);
              else
                r_88 = s_88;
            }
            {
              t = not_null(n_88);
              {
                ATerm v_88 = NULL;
                t = s_0(t);
                {
                  t_88 = t;
                  {
                    ATerm w_88 = NULL;
                    t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(t_88)), not_null(r_88));
                    {
                      w_88 = t;
                      if(((v_88 != NULL) && (v_88 != w_88)))
                        _fail(w_88);
                      else
                        v_88 = w_88;
                    }
                    t = not_null(v_88);
                  }
                }
              }
            }
            LocalPopChoice(d_30);
          }
        else
          {
            t = c_30;
            {
              ATerm z_88 = NULL,b_89 = NULL;
              ATerm a_89 = NULL;
              t = SSLgetAnnotations(not_null(m_88));
              {
                a_89 = t;
                if(((z_88 != NULL) && (z_88 != a_89)))
                  _fail(a_89);
                else
                  z_88 = a_89;
              }
              {
                t = not_null(n_88);
                {
                  ATerm d_89 = NULL;
                  t = s_0(t);
                  {
                    b_89 = t;
                    {
                      ATerm e_89 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_opt_1, not_null(b_89)), not_null(z_88));
                      {
                        e_89 = t;
                        if(((d_89 != NULL) && (d_89 != e_89)))
                          _fail(e_89);
                        else
                          d_89 = e_89;
                      }
                      t = not_null(d_89);
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
  ATerm x_89 = NULL,y_89 = NULL;
  x_89 = t;
  w_89 :
  if(match_cons(x_89, sym_cf_1))
    {
      y_89 = ATgetArgument(x_89, 0);
      {
        ATerm e_30 = t;
        int f_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_90 = NULL,d_90 = NULL;
            ATerm c_90 = NULL;
            t = SSLgetAnnotations(not_null(x_89));
            {
              c_90 = t;
              if(((b_90 != NULL) && (b_90 != c_90)))
                _fail(c_90);
              else
                b_90 = c_90;
            }
            {
              t = not_null(y_89);
              {
                ATerm f_90 = NULL;
                t = r_0(t);
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
            LocalPopChoice(f_30);
          }
        else
          {
            t = e_30;
            {
              ATerm j_90 = NULL,l_90 = NULL;
              ATerm k_90 = NULL;
              t = SSLgetAnnotations(not_null(x_89));
              {
                k_90 = t;
                if(((j_90 != NULL) && (j_90 != k_90)))
                  _fail(k_90);
                else
                  j_90 = k_90;
              }
              {
                t = not_null(y_89);
                {
                  ATerm n_90 = NULL;
                  t = r_0(t);
                  {
                    l_90 = t;
                    {
                      ATerm o_90 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_cf_1, not_null(l_90)), not_null(j_90));
                      {
                        o_90 = t;
                        if(((n_90 != NULL) && (n_90 != o_90)))
                          _fail(o_90);
                        else
                          n_90 = o_90;
                      }
                      t = not_null(n_90);
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
  ATerm g_30 = t;
  int h_30 = stack_ptr;
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
            ATerm n_5 (ATerm t)
            {
              t = opt_1(t, layout_0);
              return(t);
            }
            t = cf_1(t, n_5);
            LocalPopChoice(j_30);
          }
        else
          {
            t = i_30;
            t = layout_1(t, _id);
          }
      }
    }
  return(t);
}
ATerm filter_1 (ATerm t, ATerm n_92 (ATerm))
{
  ATerm k_30 = t;
  int l_30 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(l_30);
    }
  else
    {
      t = k_30;
      {
        ATerm m_30 = t;
        int n_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm o_5 (ATerm t)
            {
              t = filter_1(t, n_92);
              return(t);
            }
            t = Cons_2(t, n_92, o_5);
            LocalPopChoice(n_30);
          }
        else
          {
            t = m_30;
            {
              ATerm z_90 = NULL,a_91 = NULL,b_91 = NULL;
              z_90 = t;
              y_90 :
              if(((ATgetType(z_90) == AT_LIST) && ((ATermList) z_90 != ATempty)))
                {
                  a_91 = ATgetFirst((ATermList) z_90);
                  b_91 = (ATerm) ATgetNext((ATermList) z_90);
                  {
                    t = not_null(b_91);
                    t = filter_1(t, n_92);
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
  ATerm r_91 = NULL,s_91 = NULL,t_91 = NULL,u_91 = NULL;
  r_91 = t;
  q_91 :
  if(match_cons(r_91, sym_prod_3))
    {
      s_91 = ATgetArgument(r_91, 0);
      t_91 = ATgetArgument(r_91, 1);
      u_91 = ATgetArgument(r_91, 2);
      {
        ATerm o_30 = t;
        int p_30 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm b_92 = NULL,d_92 = NULL;
            ATerm c_92 = NULL;
            t = SSLgetAnnotations(not_null(r_91));
            {
              c_92 = t;
              if(((b_92 != NULL) && (b_92 != c_92)))
                _fail(c_92);
              else
                b_92 = c_92;
            }
            {
              t = not_null(s_91);
              {
                ATerm f_92 = NULL;
                t = o_0(t);
                {
                  d_92 = t;
                  {
                    t = not_null(t_91);
                    {
                      ATerm h_92 = NULL;
                      t = p_0(t);
                      {
                        f_92 = t;
                        {
                          t = not_null(u_91);
                          {
                            ATerm j_92 = NULL;
                            t = q_0(t);
                            {
                              h_92 = t;
                              {
                                ATerm k_92 = NULL;
                                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(d_92), not_null(f_92), not_null(h_92)), not_null(b_92));
                                {
                                  k_92 = t;
                                  if(((j_92 != NULL) && (j_92 != k_92)))
                                    _fail(k_92);
                                  else
                                    j_92 = k_92;
                                }
                                t = not_null(j_92);
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
            LocalPopChoice(p_30);
          }
        else
          {
            t = o_30;
            {
              ATerm q_92 = NULL,s_92 = NULL;
              ATerm r_92 = NULL;
              t = SSLgetAnnotations(not_null(r_91));
              {
                r_92 = t;
                if(((q_92 != NULL) && (q_92 != r_92)))
                  _fail(r_92);
                else
                  q_92 = r_92;
              }
              {
                t = not_null(s_91);
                {
                  ATerm u_92 = NULL;
                  t = o_0(t);
                  {
                    s_92 = t;
                    {
                      t = not_null(t_91);
                      {
                        ATerm w_92 = NULL;
                        t = p_0(t);
                        {
                          u_92 = t;
                          {
                            t = not_null(u_91);
                            {
                              ATerm y_92 = NULL;
                              t = q_0(t);
                              {
                                w_92 = t;
                                {
                                  ATerm z_92 = NULL;
                                  t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_prod_3, not_null(s_92), not_null(u_92), not_null(w_92)), not_null(q_92));
                                  {
                                    z_92 = t;
                                    if(((y_92 != NULL) && (y_92 != z_92)))
                                      _fail(z_92);
                                    else
                                      y_92 = z_92;
                                  }
                                  t = not_null(y_92);
                                }
                              }
                            }
                          }
                        }
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
ATerm topdown_1 (ATerm t, ATerm n_103 (ATerm))
{
  t = n_103(t);
  {
    ATerm p_5 (ATerm t)
    {
      t = topdown_1(t, n_103);
      return(t);
    }
    t = _all(t, p_5);
  }
  return(t);
}
ATerm remove_x_1 (ATerm t, ATerm k_108 (ATerm))
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
            ATerm q_30 = t;
            if((PushChoice() == 0))
              {
                t = k_108(t);
                PopChoice();
                _fail(t);
              }
            else
              {
                t = q_30;
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
          ATerm r_30 = t;
          if((PushChoice() == 0))
            {
              t = k_108(t);
              PopChoice();
              _fail(t);
            }
          else
            {
              t = r_30;
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
  ATerm s_93 = NULL;
  s_93 = t;
  r_93 :
  if(match_cons(s_93, sym_RemoveLayout_0))
    {
      ATerm u_93 = NULL,w_93 = NULL;
      ATerm s_30;
      s_30 = t;
      {
        ATerm v_93 = NULL;
        t = SSLgetAnnotations(not_null(s_93));
        {
          v_93 = t;
          if(((u_93 != NULL) && (u_93 != v_93)))
            _fail(v_93);
          else
            u_93 = v_93;
        }
      }
      t = s_30;
      {
        ATerm x_93 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_RemoveLayout_0), not_null(u_93));
        {
          x_93 = t;
          if(((w_93 != NULL) && (w_93 != x_93)))
            _fail(x_93);
          else
            w_93 = x_93;
        }
        t = not_null(w_93);
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
  ATerm l_94 = NULL,m_94 = NULL,n_94 = NULL,o_94 = NULL,p_94 = NULL,q_94 = NULL,r_94 = NULL,s_94 = NULL,t_94 = NULL,u_94 = NULL;
  l_94 = t;
  e_94 :
  if(match_cons(l_94, sym_appl_2))
    {
      m_94 = ATgetArgument(l_94, 0);
      s_94 = ATgetArgument(l_94, 1);
      f_94 :
      if(match_cons(m_94, sym_prod_3))
        {
          n_94 = ATgetArgument(m_94, 0);
          o_94 = ATgetArgument(m_94, 1);
          r_94 = ATgetArgument(m_94, 2);
          g_94 :
          if(match_cons(o_94, sym_cf_1))
            {
              p_94 = ATgetArgument(o_94, 0);
              h_94 :
              if(match_cons(p_94, sym_layout_0))
                {
                  t = not_null(s_94);
                  t = concat_strings_0(t);
                }
              else
                {
                  if(match_cons(p_94, sym_opt_1))
                    {
                      q_94 = ATgetArgument(p_94, 0);
                      i_94 :
                      if(match_cons(q_94, sym_layout_0))
                        {
                          j_94 :
                          if(((ATermList) s_94 == ATempty))
                            {
                              t = term_t_30;
                            }
                          else
                            {
                              if(((ATgetType(s_94) == AT_LIST) && ((ATermList) s_94 != ATempty)))
                                {
                                  t_94 = ATgetFirst((ATermList) s_94);
                                  u_94 = (ATerm) ATgetNext((ATermList) s_94);
                                  k_94 :
                                  if(((ATermList) u_94 == ATempty))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_layout_1, (ATerm) ATinsert(ATempty, not_null(t_94)));
                                    }
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
  ATerm d_95 = NULL;
  d_95 = t;
  t = (ATerm) ATinsert(ATempty, not_null(d_95));
  return(t);
}
ATerm Kids_0 (ATerm t)
{
  ATerm i_95 = NULL,j_95 = NULL,k_95 = NULL;
  i_95 = t;
  h_95 :
  if(match_cons(i_95, sym_appl_2))
    {
      j_95 = ATgetArgument(i_95, 0);
      k_95 = ATgetArgument(i_95, 1);
      {
        t = not_null(k_95);
        t = concat_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm appl_2 (ATerm t, ATerm e_75 (ATerm), ATerm f_75 (ATerm))
{
  ATerm u_95 = NULL,v_95 = NULL,w_95 = NULL;
  u_95 = t;
  t_95 :
  if(match_cons(u_95, sym_appl_2))
    {
      v_95 = ATgetArgument(u_95, 0);
      w_95 = ATgetArgument(u_95, 1);
      {
        ATerm a_96 = NULL,c_96 = NULL;
        ATerm b_96 = NULL;
        t = SSLgetAnnotations(not_null(u_95));
        {
          b_96 = t;
          if(((a_96 != NULL) && (a_96 != b_96)))
            _fail(b_96);
          else
            a_96 = b_96;
        }
        {
          t = not_null(v_95);
          {
            ATerm e_96 = NULL;
            t = e_75(t);
            {
              c_96 = t;
              {
                t = not_null(w_95);
                {
                  ATerm g_96 = NULL;
                  t = f_75(t);
                  {
                    e_96 = t;
                    {
                      ATerm h_96 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_appl_2, not_null(c_96), not_null(e_96)), not_null(a_96));
                      {
                        h_96 = t;
                        if(((g_96 != NULL) && (g_96 != h_96)))
                          _fail(h_96);
                        else
                          g_96 = h_96;
                      }
                      t = not_null(g_96);
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
  ATerm n_96 (ATerm t)
  {
    ATerm j_32 = t;
    int k_32 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm x_5 (ATerm t)
        {
          t = map_1(t, n_96);
          return(t);
        }
        t = appl_2(t, _id, x_5);
        t = Kids_0(t);
        LocalPopChoice(k_32);
      }
    else
      {
        t = j_32;
        t = Kids_p__0(t);
      }
    return(t);
  }
  t = n_96(t);
  t = implode_string_0(t);
  return(t);
}
ATerm implode_lexical_0 (ATerm t)
{
  ATerm s_97 = NULL,t_97 = NULL,u_97 = NULL,v_97 = NULL,w_97 = NULL,x_97 = NULL,y_97 = NULL,z_97 = NULL,a_98 = NULL,b_98 = NULL,c_98 = NULL,d_98 = NULL,e_98 = NULL;
  ATerm c_99 (ATerm t)
  {
    ATerm p_98 = NULL;
    ATerm q_98 = NULL;
    t = yield_0(t);
    {
      q_98 = t;
      if(((p_98 != NULL) && (p_98 != q_98)))
        _fail(q_98);
      else
        p_98 = q_98;
    }
    t = (ATerm) ATmakeAppl(sym_meta_var_1, not_null(p_98));
    return(t);
  }
  y_97 = t;
  c_97 :
  if(match_cons(y_97, sym_appl_2))
    {
      z_97 = ATgetArgument(y_97, 0);
      e_98 = ATgetArgument(y_97, 1);
      d_97 :
      if(match_cons(z_97, sym_prod_3))
        {
          a_98 = ATgetArgument(z_97, 0);
          b_98 = ATgetArgument(z_97, 1);
          d_98 = ATgetArgument(z_97, 2);
          e_97 :
          if(match_cons(b_98, sym_cf_1))
            {
              c_98 = ATgetArgument(b_98, 0);
              f_97 :
              if(((ATgetType(a_98) == AT_LIST) && ((ATermList) a_98 != ATempty)))
                {
                  s_97 = ATgetFirst((ATermList) a_98);
                  u_97 = (ATerm) ATgetNext((ATermList) a_98);
                  g_97 :
                  if(match_cons(s_97, sym_lex_1))
                    {
                      t_97 = ATgetArgument(s_97, 0);
                      h_97 :
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
                  i_97 :
                  t = yield_0(t);
                }
              else
                {
                  if(match_cons(b_98, sym_lit_1))
                    {
                      c_98 = ATgetArgument(b_98, 0);
                      j_97 :
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
                          k_97 :
                          if(match_cons(c_98, sym_cf_1))
                            {
                              v_97 = ATgetArgument(c_98, 0);
                              l_97 :
                              if(match_cons(v_97, sym_iter_star_1))
                                {
                                  w_97 = ATgetArgument(v_97, 0);
                                  m_97 :
                                  {
                                    ATerm l_32 = t;
                                    int m_32 = stack_ptr;
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
                                        LocalPopChoice(m_32);
                                      }
                                    else
                                      {
                                        t = l_32;
                                        t = c_99(t);
                                      }
                                  }
                                }
                              else
                                {
                                  if(match_cons(v_97, sym_iter_star_sep_2))
                                    {
                                      w_97 = ATgetArgument(v_97, 0);
                                      x_97 = ATgetArgument(v_97, 1);
                                      n_97 :
                                      {
                                        ATerm n_32 = t;
                                        int o_32 = stack_ptr;
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
                                            LocalPopChoice(o_32);
                                          }
                                        else
                                          {
                                            t = n_32;
                                            t = c_99(t);
                                          }
                                      }
                                    }
                                  else
                                    {
                                      if(match_cons(v_97, sym_iter_1))
                                        {
                                          w_97 = ATgetArgument(v_97, 0);
                                          o_97 :
                                          {
                                            ATerm p_32 = t;
                                            int q_32 = stack_ptr;
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
                                                LocalPopChoice(q_32);
                                              }
                                            else
                                              {
                                                t = p_32;
                                                t = c_99(t);
                                              }
                                          }
                                        }
                                      else
                                        {
                                          if(match_cons(v_97, sym_iter_sep_2))
                                            {
                                              w_97 = ATgetArgument(v_97, 0);
                                              x_97 = ATgetArgument(v_97, 1);
                                              p_97 :
                                              {
                                                ATerm r_32 = t;
                                                int s_32 = stack_ptr;
                                                if((PushChoice() == 0))
                                                  {
                                                    ATerm n_98 = NULL;
                                                    ATerm o_98 = NULL;
                                                    t = yield_0(t);
                                                    {
                                                      o_98 = t;
                                                      if(((n_98 != NULL) && (n_98 != o_98)))
                                                        _fail(o_98);
                                                      else
                                                        n_98 = o_98;
                                                    }
                                                    t = (ATerm) ATmakeAppl(sym_meta_listvar_1, not_null(n_98));
                                                    LocalPopChoice(s_32);
                                                  }
                                                else
                                                  {
                                                    t = r_32;
                                                    t = c_99(t);
                                                  }
                                              }
                                            }
                                          else
                                            {
                                              q_97 :
                                              t = c_99(t);
                                            }
                                        }
                                    }
                                }
                            }
                          else
                            {
                              r_97 :
                              t = c_99(t);
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
ATerm downup2_2 (ATerm t, ATerm u_103 (ATerm), ATerm v_103 (ATerm))
{
  ATerm l_99 (ATerm t)
  {
    t = u_103(t);
    {
      t = _all(t, l_99);
      t = v_103(t);
    }
    return(t);
  }
  t = l_99(t);
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
  ATerm s_99 = NULL;
  s_99 = t;
  r_99 :
  if(match_cons(s_99, sym_FlatLex_0))
    {
      ATerm u_99 = NULL,y_99 = NULL;
      ATerm t_32;
      t_32 = t;
      {
        ATerm x_99 = NULL;
        t = SSLgetAnnotations(not_null(s_99));
        {
          x_99 = t;
          if(((u_99 != NULL) && (u_99 != x_99)))
            _fail(x_99);
          else
            u_99 = x_99;
        }
      }
      t = t_32;
      {
        ATerm z_99 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_FlatLex_0), not_null(u_99));
        {
          z_99 = t;
          if(((y_99 != NULL) && (y_99 != z_99)))
            _fail(z_99);
          else
            y_99 = z_99;
        }
        t = not_null(y_99);
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
  ATerm f_100 = NULL;
  f_100 = t;
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
                          ATerm h_100 = NULL;
                          h_100 = t;
                          {
                            if(((f_100 != NULL) && (f_100 != h_100)))
                              _fail(h_100);
                            else
                              f_100 = h_100;
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
  ATerm m_100 = NULL;
  ATerm u_32;
  u_32 = t;
  {
    ATerm v_6 (ATerm t)
    {
      ATerm n_100 = NULL,o_100 = NULL;
      n_100 = t;
      l_100 :
      if(match_cons(n_100, sym_Program_1))
        {
          o_100 = ATgetArgument(n_100, 0);
          if(((m_100 != NULL) && (m_100 != o_100)))
            _fail(o_100);
          else
            m_100 = o_100;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = option_defined_1(t, v_6);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_32, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_x_32), not_null(m_100)), term_w_32));
      {
        t = printnl_0(t);
        {
          t = term_d_18;
          t = exit_0(t);
        }
      }
    }
  }
  t = u_32;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm t_100 = NULL,u_100 = NULL,v_100 = NULL;
  t_100 = t;
  s_100 :
  if(match_cons(t_100, sym__2))
    {
      u_100 = ATgetArgument(t_100, 0);
      v_100 = ATgetArgument(t_100, 1);
      {
        ATerm y_32;
        y_32 = t;
        t = SSL_printnl(not_null(u_100), not_null(v_100));
        t = y_32;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm e_101 = NULL;
  ATerm g_101 = NULL;
  e_101 = t;
  {
    ATerm h_101 = NULL;
    ATerm j_101 = NULL,k_101 = NULL,l_101 = NULL;
    t = not_null(e_101);
    {
      h_101 = t;
      {
        t = SSL_explode_term(not_null(h_101));
        {
          j_101 = t;
          c_101 :
          if(match_cons(j_101, sym__2))
            {
              k_101 = ATgetArgument(j_101, 0);
              l_101 = ATgetArgument(j_101, 1);
              d_101 :
              if(match_string(k_101, ""))
                {
                  if(((g_101 != NULL) && (g_101 != l_101)))
                    _fail(l_101);
                  else
                    g_101 = l_101;
                }
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
      t = not_null(g_101);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm r_101 = NULL,s_101 = NULL,t_101 = NULL;
  r_101 = t;
  q_101 :
  if(match_cons(r_101, sym__2))
    {
      s_101 = ATgetArgument(r_101, 0);
      t_101 = ATgetArgument(r_101, 1);
      {
        t = not_null(s_101);
        {
          ATerm w_6 (ATerm t)
          {
            t = not_null(t_101);
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
ATerm conc_0 (ATerm t)
{
  ATerm z_32 = t;
  int a_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(a_33);
    }
  else
    {
      t = z_32;
      t = conc_more_lists_0(t);
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
ATerm debug_1 (ATerm t, ATerm g_89 (ATerm))
{
  ATerm b_33;
  b_33 = t;
  {
    ATerm z_101 = NULL,b_102 = NULL;
    ATerm c_33;
    c_33 = t;
    {
      ATerm a_102 = NULL;
      t = g_89(t);
      {
        a_102 = t;
        if(((z_101 != NULL) && (z_101 != a_102)))
          _fail(a_102);
        else
          z_101 = a_102;
      }
    }
    t = c_33;
    {
      ATerm c_102 = NULL;
      c_102 = t;
      if(((b_102 != NULL) && (b_102 != c_102)))
        _fail(c_102);
      else
        b_102 = c_102;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(b_102)), not_null(z_101)));
        t = printnl_0(t);
      }
    }
  }
  t = b_33;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm g_102 = NULL;
  g_102 = t;
  t = SSL_is_string(not_null(g_102));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm d_33 = t;
  int e_33 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
      LocalPopChoice(e_33);
    }
  else
    {
      t = d_33;
      {
        ATerm f_33 = t;
        int g_33 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm x_6 (ATerm t)
            {
              t = try_1(t, eval_config_0);
              return(t);
            }
            t = map_1(t, x_6);
            LocalPopChoice(g_33);
          }
        else
          {
            t = f_33;
            {
              ATerm p_102 = NULL,q_102 = NULL,r_102 = NULL;
              p_102 = t;
              o_102 :
              if(match_cons(p_102, sym_Path_1))
                {
                  q_102 = ATgetArgument(p_102, 0);
                  t = not_null(q_102);
                }
              else
                {
                  if(match_cons(p_102, sym_Var_1))
                    {
                      q_102 = ATgetArgument(p_102, 0);
                      {
                        t = not_null(q_102);
                        {
                          ATerm h_33 = t;
                          int k_33 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(k_33);
                            }
                          else
                            {
                              t = h_33;
                              {
                                ATerm y_6 (ATerm t)
                                {
                                  t = term_l_33;
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
                      if(match_cons(p_102, sym_Prefix_2))
                        {
                          q_102 = ATgetArgument(p_102, 0);
                          r_102 = ATgetArgument(p_102, 1);
                          {
                            ATerm w_102 = NULL,y_102 = NULL;
                            ATerm m_33;
                            m_33 = t;
                            {
                              ATerm x_102 = NULL;
                              t = not_null(q_102);
                              {
                                t = eval_config_0(t);
                                {
                                  x_102 = t;
                                  if(((w_102 != NULL) && (w_102 != x_102)))
                                    _fail(x_102);
                                  else
                                    w_102 = x_102;
                                }
                              }
                            }
                            t = m_33;
                            {
                              ATerm z_102 = NULL;
                              t = not_null(r_102);
                              {
                                t = eval_config_0(t);
                                {
                                  z_102 = t;
                                  if(((y_102 != NULL) && (y_102 != z_102)))
                                    _fail(z_102);
                                  else
                                    y_102 = z_102;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(w_102), not_null(y_102));
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
  ATerm h_103 = NULL;
  h_103 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_n_33, not_null(h_103));
    {
      t = table_get_0(t);
      {
        ATerm z_6 (ATerm t)
        {
          t = eval_config_0(t);
          {
            ATerm o_33;
            o_33 = t;
            {
              ATerm j_103 = NULL;
              ATerm k_103 = NULL;
              k_103 = t;
              if(((j_103 != NULL) && (j_103 != k_103)))
                _fail(k_103);
              else
                j_103 = k_103;
              {
                t = (ATerm) ATmakeAppl(sym__3, term_n_33, not_null(h_103), not_null(j_103));
                t = table_put_0(t);
              }
            }
            t = o_33;
          }
          return(t);
        }
        t = try_1(t, z_6);
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm j_86 (ATerm))
{
  ATerm a_7 (ATerm t)
  {
    ATerm p_33;
    p_33 = t;
    {
      ATerm q_103 = NULL;
      ATerm r_103 = NULL;
      t = term_q_33;
      {
        t = get_config_0(t);
        {
          r_103 = t;
          if(((q_103 != NULL) && (q_103 != r_103)))
            _fail(r_103);
          else
            q_103 = r_103;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(q_103), term_r_33);
        t = geq_0(t);
      }
    }
    t = p_33;
    t = j_86(t);
    return(t);
  }
  t = try_1(t, a_7);
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm y_103 = NULL,z_103 = NULL,a_104 = NULL;
  y_103 = t;
  x_103 :
  if(match_cons(y_103, sym__2))
    {
      z_103 = ATgetArgument(y_103, 0);
      a_104 = ATgetArgument(y_103, 1);
      t = SSL_WriteToTextFile(not_null(z_103), not_null(a_104));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm _2 (ATerm t, ATerm y_66 (ATerm), ATerm z_66 (ATerm))
{
  ATerm k_104 = NULL,l_104 = NULL,m_104 = NULL;
  k_104 = t;
  j_104 :
  if(match_cons(k_104, sym__2))
    {
      l_104 = ATgetArgument(k_104, 0);
      m_104 = ATgetArgument(k_104, 1);
      {
        ATerm q_104 = NULL,s_104 = NULL;
        ATerm r_104 = NULL;
        t = SSLgetAnnotations(not_null(k_104));
        {
          r_104 = t;
          if(((q_104 != NULL) && (q_104 != r_104)))
            _fail(r_104);
          else
            q_104 = r_104;
        }
        {
          t = not_null(l_104);
          {
            ATerm u_104 = NULL;
            t = y_66(t);
            {
              s_104 = t;
              {
                t = not_null(m_104);
                {
                  ATerm w_104 = NULL;
                  t = z_66(t);
                  {
                    u_104 = t;
                    {
                      ATerm x_104 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(s_104), not_null(u_104)), not_null(q_104));
                      {
                        x_104 = t;
                        if(((w_104 != NULL) && (w_104 != x_104)))
                          _fail(x_104);
                        else
                          w_104 = x_104;
                      }
                      t = not_null(w_104);
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
  ATerm h_105 = NULL,i_105 = NULL,j_105 = NULL;
  h_105 = t;
  g_105 :
  if(match_cons(h_105, sym__2))
    {
      i_105 = ATgetArgument(h_105, 0);
      j_105 = ATgetArgument(h_105, 1);
      t = SSL_WriteToBinaryFile(not_null(i_105), not_null(j_105));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm r_105 = NULL;
  ATerm s_33;
  s_33 = t;
  {
    ATerm b_7 (ATerm t)
    {
      ATerm t_33 = t;
      int u_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm c_7 (ATerm t)
          {
            ATerm s_105 = NULL,t_105 = NULL;
            s_105 = t;
            o_105 :
            if(match_cons(s_105, sym_Output_1))
              {
                t_105 = ATgetArgument(s_105, 0);
                if(((r_105 != NULL) && (r_105 != t_105)))
                  _fail(t_105);
                else
                  r_105 = t_105;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = option_defined_1(t, c_7);
          LocalPopChoice(u_33);
        }
      else
        {
          t = t_33;
          {
            ATerm u_105 = NULL;
            t = term_v_33;
            {
              u_105 = t;
              if(((r_105 != NULL) && (r_105 != u_105)))
                _fail(u_105);
              else
                r_105 = u_105;
            }
          }
        }
      return(t);
    }
    t = _2(t, b_7, _id);
  }
  t = s_33;
  {
    ATerm d_7 (ATerm t)
    {
      ATerm e_7 (ATerm t)
      {
        t = not_null(r_105);
        return(t);
      }
      t = split_2(t, e_7, _id);
      return(t);
    }
    t = _2(t, _id, d_7);
    {
      ATerm w_33 = t;
      int x_33 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm f_7 (ATerm t)
          {
            ATerm g_7 (ATerm t)
            {
              ATerm v_105 = NULL;
              v_105 = t;
              q_105 :
              if(!(match_cons(v_105, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = option_defined_1(t, g_7);
            return(t);
          }
          t = _2(t, f_7, WriteToBinaryFile_0);
          LocalPopChoice(x_33);
        }
      else
        {
          t = w_33;
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
ATerm apply_strategy_1 (ATerm t, ATerm m_82 (ATerm))
{
  ATerm b_106 = NULL,d_106 = NULL,e_106 = NULL,f_106 = NULL;
  ATerm y_33;
  y_33 = t;
  t = dtime_0(t);
  t = y_33;
  {
    t = m_82(t);
    {
      ATerm z_33;
      z_33 = t;
      {
        ATerm c_106 = NULL;
        t = dtime_0(t);
        {
          c_106 = t;
          if(((b_106 != NULL) && (b_106 != c_106)))
            _fail(c_106);
          else
            b_106 = c_106;
        }
      }
      t = z_33;
      {
        d_106 = t;
        a_106 :
        if(match_cons(d_106, sym__2))
          {
            e_106 = ATgetArgument(d_106, 0);
            f_106 = ATgetArgument(d_106, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(e_106)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(b_106))), not_null(f_106));
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
  ATerm l_106 = NULL;
  l_106 = t;
  t = SSL_ReadFromFile(not_null(l_106));
  return(t);
}
ATerm split_2 (ATerm t, ATerm v_91 (ATerm), ATerm w_91 (ATerm))
{
  ATerm q_106 = NULL,s_106 = NULL;
  ATerm a_34;
  a_34 = t;
  {
    ATerm r_106 = NULL;
    t = v_91(t);
    {
      r_106 = t;
      if(((q_106 != NULL) && (q_106 != r_106)))
        _fail(r_106);
      else
        q_106 = r_106;
    }
  }
  t = a_34;
  {
    ATerm t_106 = NULL;
    t = w_91(t);
    {
      t_106 = t;
      if(((s_106 != NULL) && (s_106 != t_106)))
        _fail(t_106);
      else
        s_106 = t_106;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(q_106), not_null(s_106));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm d_107 = NULL;
  ATerm b_34;
  b_34 = t;
  {
    ATerm c_34 = t;
    int d_34 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm h_7 (ATerm t)
        {
          ATerm e_107 = NULL,f_107 = NULL;
          e_107 = t;
          b_107 :
          if(match_cons(e_107, sym_Input_1))
            {
              f_107 = ATgetArgument(e_107, 0);
              if(((d_107 != NULL) && (d_107 != f_107)))
                _fail(f_107);
              else
                d_107 = f_107;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = option_defined_1(t, h_7);
        LocalPopChoice(d_34);
      }
    else
      {
        t = c_34;
        {
          ATerm g_107 = NULL;
          t = term_e_34;
          {
            g_107 = t;
            if(((d_107 != NULL) && (d_107 != g_107)))
              _fail(g_107);
            else
              d_107 = g_107;
          }
        }
      }
  }
  t = b_34;
  {
    ATerm i_7 (ATerm t)
    {
      t = not_null(d_107);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, i_7);
  }
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm k_107 = NULL;
  k_107 = t;
  t = SSL_string_to_int(not_null(k_107));
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm t_107 = NULL,u_107 = NULL,v_107 = NULL,w_107 = NULL,x_107 = NULL;
  t_107 = t;
  q_107 :
  if(match_string(t_107, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(t_107) == AT_LIST) && ((ATermList) t_107 != ATempty)))
        {
          u_107 = ATgetFirst((ATermList) t_107);
          v_107 = (ATerm) ATgetNext((ATermList) t_107);
          s_107 :
          if(((ATgetType(v_107) == AT_LIST) && ((ATermList) v_107 != ATempty)))
            {
              w_107 = ATgetFirst((ATermList) v_107);
              x_107 = (ATerm) ATgetNext((ATermList) v_107);
              {
                ATerm b_108 = NULL;
                ATerm f_34;
                f_34 = t;
                {
                  t = not_null(u_107);
                  t = l_0(t);
                }
                t = f_34;
                {
                  ATerm c_108 = NULL;
                  t = not_null(w_107);
                  {
                    t = m_0(t);
                    {
                      c_108 = t;
                      if(((b_108 != NULL) && (b_108 != c_108)))
                        _fail(c_108);
                      else
                        b_108 = c_108;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(x_107)), not_null(b_108));
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
  ATerm g_34 = t;
  int h_34 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm j_7 (ATerm t)
      {
        ATerm l_109 = NULL;
        l_109 = t;
        g_108 :
        if(!(match_string(l_109, "-i")))
          {
            if(!(match_string(l_109, "--input")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm k_7 (ATerm t)
      {
        ATerm o_109 = NULL;
        ATerm i_34;
        i_34 = t;
        {
          ATerm m_109 = NULL;
          ATerm n_109 = NULL;
          n_109 = t;
          if(((m_109 != NULL) && (m_109 != n_109)))
            _fail(n_109);
          else
            m_109 = n_109;
          {
            t = (ATerm) ATmakeAppl(sym__2, term_j_34, not_null(m_109));
            t = set_config_0(t);
          }
        }
        t = i_34;
        {
          ATerm p_109 = NULL;
          p_109 = t;
          if(((o_109 != NULL) && (o_109 != p_109)))
            _fail(p_109);
          else
            o_109 = p_109;
          t = (ATerm) ATmakeAppl(sym_Input_1, not_null(o_109));
        }
        return(t);
      }
      ATerm l_7 (ATerm t)
      {
        t = term_k_34;
        return(t);
      }
      t = ArgOption_3(t, j_7, k_7, l_7);
      LocalPopChoice(h_34);
    }
  else
    {
      t = g_34;
      {
        ATerm r_34 = t;
        int v_34 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm m_7 (ATerm t)
            {
              ATerm q_109 = NULL;
              q_109 = t;
              p_108 :
              if(!(match_string(q_109, "-o")))
                {
                  if(!(match_string(q_109, "--output")))
                    {
                      _fail(t);
                    }
                }
              return(t);
            }
            ATerm n_7 (ATerm t)
            {
              ATerm t_109 = NULL;
              ATerm w_34;
              w_34 = t;
              {
                ATerm r_109 = NULL;
                ATerm s_109 = NULL;
                s_109 = t;
                if(((r_109 != NULL) && (r_109 != s_109)))
                  _fail(s_109);
                else
                  r_109 = s_109;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_x_34, not_null(r_109));
                  t = set_config_0(t);
                }
              }
              t = w_34;
              {
                ATerm u_109 = NULL;
                u_109 = t;
                if(((t_109 != NULL) && (t_109 != u_109)))
                  _fail(u_109);
                else
                  t_109 = u_109;
                t = (ATerm) ATmakeAppl(sym_Output_1, not_null(t_109));
              }
              return(t);
            }
            ATerm o_7 (ATerm t)
            {
              t = term_y_34;
              return(t);
            }
            t = ArgOption_3(t, m_7, n_7, o_7);
            LocalPopChoice(v_34);
          }
        else
          {
            t = r_34;
            {
              ATerm z_34 = t;
              int e_35 = stack_ptr;
              if((PushChoice() == 0))
                {
                  ATerm p_7 (ATerm t)
                  {
                    ATerm v_109 = NULL;
                    v_109 = t;
                    c_109 :
                    if(!(match_string(v_109, "-S")))
                      {
                        if(!(match_string(v_109, "--silent")))
                          {
                            _fail(t);
                          }
                      }
                    return(t);
                  }
                  ATerm q_7 (ATerm t)
                  {
                    t = term_j_35;
                    t = set_config_0(t);
                    t = term_k_35;
                    return(t);
                  }
                  ATerm r_7 (ATerm t)
                  {
                    t = term_l_35;
                    return(t);
                  }
                  t = Option_3(t, p_7, q_7, r_7);
                  LocalPopChoice(e_35);
                }
              else
                {
                  t = z_34;
                  {
                    ATerm m_35 = t;
                    int n_35 = stack_ptr;
                    if((PushChoice() == 0))
                      {
                        ATerm s_7 (ATerm t)
                        {
                          ATerm w_109 = NULL;
                          w_109 = t;
                          d_109 :
                          if(!(match_string(w_109, "--verbose")))
                            {
                              _fail(t);
                            }
                          return(t);
                        }
                        ATerm t_7 (ATerm t)
                        {
                          ATerm z_109 = NULL;
                          ATerm o_35;
                          o_35 = t;
                          {
                            ATerm x_109 = NULL;
                            ATerm y_109 = NULL;
                            t = string_to_int_0(t);
                            {
                              y_109 = t;
                              if(((x_109 != NULL) && (x_109 != y_109)))
                                _fail(y_109);
                              else
                                x_109 = y_109;
                            }
                            {
                              t = (ATerm) ATmakeAppl(sym__2, term_q_33, not_null(x_109));
                              t = set_config_0(t);
                            }
                          }
                          t = o_35;
                          {
                            ATerm a_110 = NULL;
                            a_110 = t;
                            if(((z_109 != NULL) && (z_109 != a_110)))
                              _fail(a_110);
                            else
                              z_109 = a_110;
                            t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(z_109));
                          }
                          return(t);
                        }
                        ATerm u_7 (ATerm t)
                        {
                          t = term_p_35;
                          return(t);
                        }
                        t = ArgOption_3(t, s_7, t_7, u_7);
                        LocalPopChoice(n_35);
                      }
                    else
                      {
                        t = m_35;
                        {
                          ATerm q_35 = t;
                          int d_36 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              ATerm v_7 (ATerm t)
                              {
                                ATerm b_110 = NULL;
                                b_110 = t;
                                g_109 :
                                if(!(match_string(b_110, "--keep")))
                                  {
                                    _fail(t);
                                  }
                                return(t);
                              }
                              ATerm w_7 (ATerm t)
                              {
                                ATerm e_36;
                                e_36 = t;
                                {
                                  ATerm c_110 = NULL;
                                  ATerm d_110 = NULL;
                                  t = string_to_int_0(t);
                                  {
                                    d_110 = t;
                                    if(((c_110 != NULL) && (c_110 != d_110)))
                                      _fail(d_110);
                                    else
                                      c_110 = d_110;
                                  }
                                  {
                                    t = (ATerm) ATmakeAppl(sym__2, term_f_36, not_null(c_110));
                                    t = set_config_0(t);
                                  }
                                }
                                t = e_36;
                                return(t);
                              }
                              ATerm x_7 (ATerm t)
                              {
                                t = term_g_36;
                                return(t);
                              }
                              t = ArgOption_3(t, v_7, w_7, x_7);
                              LocalPopChoice(d_36);
                            }
                          else
                            {
                              t = q_35;
                              {
                                ATerm h_36 = t;
                                int i_36 = stack_ptr;
                                if((PushChoice() == 0))
                                  {
                                    ATerm b_8 (ATerm t)
                                    {
                                      ATerm e_110 = NULL;
                                      e_110 = t;
                                      i_109 :
                                      if(!(match_string(e_110, "-v")))
                                        {
                                          if(!(match_string(e_110, "--version")))
                                            {
                                              _fail(t);
                                            }
                                        }
                                      return(t);
                                    }
                                    ATerm c_8 (ATerm t)
                                    {
                                      t = term_q_36;
                                      t = set_config_0(t);
                                      t = term_r_36;
                                      return(t);
                                    }
                                    ATerm d_8 (ATerm t)
                                    {
                                      t = term_s_36;
                                      return(t);
                                    }
                                    t = Option_3(t, b_8, c_8, d_8);
                                    LocalPopChoice(i_36);
                                  }
                                else
                                  {
                                    t = h_36;
                                    {
                                      ATerm t_36 = t;
                                      int u_36 = stack_ptr;
                                      if((PushChoice() == 0))
                                        {
                                          ATerm e_8 (ATerm t)
                                          {
                                            ATerm f_110 = NULL;
                                            f_110 = t;
                                            j_109 :
                                            if(!(match_string(f_110, "-b")))
                                              {
                                                _fail(t);
                                              }
                                            return(t);
                                          }
                                          ATerm f_8 (ATerm t)
                                          {
                                            t = term_w_36;
                                            t = set_config_0(t);
                                            t = term_y_36;
                                            return(t);
                                          }
                                          ATerm h_8 (ATerm t)
                                          {
                                            t = term_z_36;
                                            return(t);
                                          }
                                          t = Option_3(t, e_8, f_8, h_8);
                                          LocalPopChoice(u_36);
                                        }
                                      else
                                        {
                                          t = t_36;
                                          {
                                            ATerm i_8 (ATerm t)
                                            {
                                              ATerm g_110 = NULL;
                                              g_110 = t;
                                              k_109 :
                                              if(!(match_string(g_110, "-s")))
                                                {
                                                  _fail(t);
                                                }
                                              return(t);
                                            }
                                            ATerm j_8 (ATerm t)
                                            {
                                              t = term_b_37;
                                              t = set_config_0(t);
                                              t = term_c_37;
                                              return(t);
                                            }
                                            ATerm k_8 (ATerm t)
                                            {
                                              t = term_f_37;
                                              return(t);
                                            }
                                            t = Option_3(t, i_8, j_8, k_8);
                                          }
                                        }
                                    }
                                  }
                              }
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
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_v_32, (ATerm) ATinsert(ATempty, term_k_37));
  {
    t = printnl_0(t);
    {
      t = term_d_18;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm p_110 = NULL;
  p_110 = t;
  t = SSL_TicksToSeconds(not_null(p_110));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm u_110 = NULL,v_110 = NULL,w_110 = NULL;
  u_110 = t;
  t_110 :
  if(match_cons(u_110, sym__2))
    {
      v_110 = ATgetArgument(u_110, 0);
      w_110 = ATgetArgument(u_110, 1);
      {
        ATerm l_37 = t;
        int m_37 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(v_110), not_null(w_110));
            LocalPopChoice(m_37);
          }
        else
          {
            t = l_37;
            t = SSL_addr(not_null(v_110), not_null(w_110));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm h_93 (ATerm), ATerm i_93 (ATerm))
{
  ATerm n_37 = t;
  int o_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = h_93(t);
      LocalPopChoice(o_37);
    }
  else
    {
      t = n_37;
      {
        ATerm d_111 = NULL,e_111 = NULL,f_111 = NULL;
        d_111 = t;
        c_111 :
        if(((ATgetType(d_111) == AT_LIST) && ((ATermList) d_111 != ATempty)))
          {
            e_111 = ATgetFirst((ATermList) d_111);
            f_111 = (ATerm) ATgetNext((ATermList) d_111);
            {
              ATerm i_111 = NULL;
              ATerm j_111 = NULL;
              t = not_null(f_111);
              {
                t = foldr_2(t, h_93, i_93);
                {
                  j_111 = t;
                  if(((i_111 != NULL) && (i_111 != j_111)))
                    _fail(j_111);
                  else
                    i_111 = j_111;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(e_111), not_null(i_111));
                t = i_93(t);
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
ATerm crush_2 (ATerm t, ATerm z_94 (ATerm), ATerm a_95 (ATerm))
{
  ATerm r_111 = NULL;
  ATerm t_111 = NULL;
  r_111 = t;
  {
    ATerm u_111 = NULL;
    ATerm w_111 = NULL,x_111 = NULL,y_111 = NULL;
    t = not_null(r_111);
    {
      u_111 = t;
      {
        t = SSL_explode_term(not_null(u_111));
        {
          w_111 = t;
          q_111 :
          if(match_cons(w_111, sym__2))
            {
              x_111 = ATgetArgument(w_111, 0);
              y_111 = ATgetArgument(w_111, 1);
              if(((t_111 != NULL) && (t_111 != y_111)))
                _fail(y_111);
              else
                t_111 = y_111;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(t_111);
      t = foldr_2(t, z_94, a_95);
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
    ATerm l_8 (ATerm t)
    {
      t = term_f_35;
      return(t);
    }
    t = crush_2(t, l_8, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm e_112 = NULL,g_112 = NULL,h_112 = NULL;
  e_112 = t;
  d_112 :
  if(match_cons(e_112, sym__2))
    {
      g_112 = ATgetArgument(e_112, 0);
      h_112 = ATgetArgument(e_112, 1);
      {
        ATerm p_37;
        p_37 = t;
        {
          ATerm q_37 = t;
          int r_37 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(g_112), not_null(h_112));
              LocalPopChoice(r_37);
            }
          else
            {
              t = q_37;
              t = SSL_gtr(not_null(g_112), not_null(h_112));
            }
        }
        t = p_37;
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
  ATerm n_112 = NULL;
  ATerm s_37 = t;
  int u_37 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm o_112 = NULL,p_112 = NULL,q_112 = NULL;
      o_112 = t;
      m_112 :
      if(match_cons(o_112, sym__2))
        {
          p_112 = ATgetArgument(o_112, 0);
          q_112 = ATgetArgument(o_112, 1);
          {
            if(((n_112 != NULL) && (n_112 != p_112)))
              _fail(p_112);
            else
              n_112 = p_112;
            if(((n_112 != NULL) && (n_112 != q_112)))
              _fail(q_112);
            else
              n_112 = q_112;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(u_37);
    }
  else
    {
      t = s_37;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm i_86 (ATerm))
{
  ATerm m_8 (ATerm t)
  {
    ATerm v_37;
    v_37 = t;
    {
      ATerm t_112 = NULL;
      ATerm u_112 = NULL;
      t = term_q_33;
      {
        t = get_config_0(t);
        {
          u_112 = t;
          if(((t_112 != NULL) && (t_112 != u_112)))
            _fail(u_112);
          else
            t_112 = u_112;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, not_null(t_112), term_d_18);
        t = geq_0(t);
      }
    }
    t = v_37;
    t = i_86(t);
    return(t);
  }
  t = try_1(t, m_8);
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm n_8 (ATerm t)
  {
    ATerm y_112 = NULL,b_113 = NULL;
    ATerm w_37;
    w_37 = t;
    {
      ATerm z_112 = NULL;
      t = run_time_0(t);
      {
        z_112 = t;
        if(((y_112 != NULL) && (y_112 != z_112)))
          _fail(z_112);
        else
          y_112 = z_112;
      }
    }
    t = w_37;
    {
      ATerm c_113 = NULL;
      t = term_y_37;
      {
        t = get_config_0(t);
        {
          c_113 = t;
          if(((b_113 != NULL) && (b_113 != c_113)))
            _fail(c_113);
          else
            b_113 = c_113;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_32, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_a_38), not_null(y_112)), term_z_37), not_null(b_113)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, n_8);
  {
    t = term_f_35;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm j_113 = NULL;
  j_113 = t;
  i_113 :
  if(match_cons(j_113, sym_Version_0))
    {
      ATerm l_113 = NULL,n_113 = NULL;
      ATerm b_38;
      b_38 = t;
      {
        ATerm m_113 = NULL;
        t = SSLgetAnnotations(not_null(j_113));
        {
          m_113 = t;
          if(((l_113 != NULL) && (l_113 != m_113)))
            _fail(m_113);
          else
            l_113 = m_113;
        }
      }
      t = b_38;
      {
        ATerm o_113 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(l_113));
        {
          o_113 = t;
          if(((n_113 != NULL) && (n_113 != o_113)))
            _fail(o_113);
          else
            n_113 = o_113;
        }
        t = not_null(n_113);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm k_82 (ATerm))
{
  ATerm o_8 (ATerm t)
  {
    ATerm c_38 = t;
    int f_38 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(f_38);
      }
    else
      {
        t = c_38;
        {
          ATerm g_38 = t;
          int h_38 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(h_38);
            }
          else
            {
              t = g_38;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = option_defined_1(t, o_8);
  t = k_82(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm t_113 = NULL;
  t_113 = t;
  t = SSL_table_create(not_null(t_113));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm x_113 = NULL;
  x_113 = t;
  {
    ATerm m_38;
    m_38 = t;
    {
      t = term_g_39;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_39, term_h_39, not_null(x_113));
          t = table_put_0(t);
        }
      }
    }
    t = m_38;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm b_114 = NULL;
  b_114 = t;
  t = SSL_table_destroy(not_null(b_114));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm f_114 = NULL;
  f_114 = t;
  t = SSL_exit(not_null(f_114));
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_l_39), term_k_39), term_j_39);
  return(t);
}
ATerm map_1 (ATerm t, ATerm x_98 (ATerm))
{
  ATerm i_114 (ATerm t)
  {
    ATerm m_39 = t;
    int n_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(n_39);
      }
    else
      {
        t = m_39;
        t = Cons_2(t, x_98, i_114);
      }
    return(t);
  }
  t = i_114(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm p_114 = NULL,q_114 = NULL,r_114 = NULL;
  r_114 = t;
  o_114 :
  if(((ATgetType(r_114) == AT_LIST) && ((ATermList) r_114 != ATempty)))
    {
      p_114 = ATgetFirst((ATermList) r_114);
      q_114 = (ATerm) ATgetNext((ATermList) r_114);
      {
        ATerm u_114 = NULL;
        t = not_null(q_114);
        {
          ATerm r_39;
          r_39 = t;
          {
            ATerm v_114 = NULL,x_114 = NULL,z_114 = NULL;
            ATerm w_39;
            w_39 = t;
            {
              ATerm w_114 = NULL;
              t = j_0(t);
              {
                w_114 = t;
                if(((v_114 != NULL) && (v_114 != w_114)))
                  _fail(w_114);
                else
                  v_114 = w_114;
              }
            }
            t = w_39;
            {
              ATerm y_114 = NULL;
              t = not_null(p_114);
              {
                t = i_0(t);
                {
                  y_114 = t;
                  if(((x_114 != NULL) && (x_114 != y_114)))
                    _fail(y_114);
                  else
                    x_114 = y_114;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(v_114)), not_null(x_114));
                {
                  z_114 = t;
                  if(((u_114 != NULL) && (u_114 != z_114)))
                    _fail(z_114);
                  else
                    u_114 = z_114;
                }
              }
            }
          }
          t = r_39;
          {
            ATerm r_8 (ATerm t)
            {
              t = not_null(u_114);
              return(t);
            }
            t = reverse_acc_2(t, i_0, r_8);
          }
        }
      }
    }
  else
    {
      if(((ATermList) r_114 == ATempty))
        {
          {
            t = term_o_36;
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
  ATerm s_8 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, s_8);
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm g_115 = NULL;
  g_115 = t;
  t = SSL_implode_string(not_null(g_115));
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm m_99 (ATerm))
{
  ATerm j_115 (ATerm t)
  {
    ATerm x_39 = t;
    int y_39 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, j_115);
        LocalPopChoice(y_39);
      }
    else
      {
        t = x_39;
        {
          t = Nil_0(t);
          t = m_99(t);
        }
      }
    return(t);
  }
  t = j_115(t);
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm z_39 = t;
  int a_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(a_40);
    }
  else
    {
      t = z_39;
      {
        ATerm m_115 = NULL,n_115 = NULL,o_115 = NULL;
        m_115 = t;
        l_115 :
        if(((ATgetType(m_115) == AT_LIST) && ((ATermList) m_115 != ATempty)))
          {
            n_115 = ATgetFirst((ATermList) m_115);
            o_115 = (ATerm) ATgetNext((ATermList) m_115);
            {
              t = not_null(n_115);
              {
                ATerm t_8 (ATerm t)
                {
                  t = not_null(o_115);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, t_8);
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
  ATerm u_115 = NULL;
  u_115 = t;
  t = SSL_explode_string(not_null(u_115));
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
ATerm short_description_1 (ATerm t, ATerm f_0 (ATerm))
{
  ATerm y_115 = NULL;
  ATerm z_115 = NULL;
  t = term_o_36;
  {
    t = f_0(t);
    {
      z_115 = t;
      if(((y_115 != NULL) && (y_115 != z_115)))
        _fail(z_115);
      else
        y_115 = z_115;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_c_40), not_null(y_115)), term_b_40);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm w_75 (ATerm))
{
  ATerm g_116 = NULL,h_116 = NULL;
  g_116 = t;
  f_116 :
  if(match_cons(g_116, sym_Program_1))
    {
      h_116 = ATgetArgument(g_116, 0);
      {
        ATerm k_116 = NULL,m_116 = NULL;
        ATerm l_116 = NULL;
        t = SSLgetAnnotations(not_null(g_116));
        {
          l_116 = t;
          if(((k_116 != NULL) && (k_116 != l_116)))
            _fail(l_116);
          else
            k_116 = l_116;
        }
        {
          t = not_null(h_116);
          {
            ATerm o_116 = NULL;
            t = w_75(t);
            {
              m_116 = t;
              {
                ATerm p_116 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_116)), not_null(k_116));
                {
                  p_116 = t;
                  if(((o_116 != NULL) && (o_116 != p_116)))
                    _fail(p_116);
                  else
                    o_116 = p_116;
                }
                t = not_null(o_116);
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
  ATerm y_116 = NULL;
  ATerm u_8 (ATerm t)
  {
    ATerm x_8 (ATerm t)
    {
      ATerm z_116 = NULL;
      z_116 = t;
      if(((y_116 != NULL) && (y_116 != z_116)))
        _fail(z_116);
      else
        y_116 = z_116;
      return(t);
    }
    t = Program_1(t, x_8);
    return(t);
  }
  t = option_defined_1(t, u_8);
  {
    ATerm y_8 (ATerm t)
    {
      ATerm a_117 = NULL;
      ATerm b_117 = NULL;
      t = term_o_36;
      {
        ATerm z_8 (ATerm t)
        {
          t = not_null(y_116);
          return(t);
        }
        t = short_description_1(t, z_8);
        {
          t = concat_strings_0(t);
          {
            b_117 = t;
            if(((a_117 != NULL) && (a_117 != b_117)))
              _fail(b_117);
            else
              a_117 = b_117;
          }
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_v_33, (ATerm) ATinsert(ATempty, not_null(a_117)));
        t = printnl_0(t);
      }
      return(t);
    }
    t = try_1(t, y_8);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_v_33, (ATerm) ATinsert(ATempty, term_h_40));
      {
        t = printnl_0(t);
        {
          t = term_k_40;
          {
            t = table_get_0(t);
            {
              t = reverse_0(t);
              {
                ATerm a_9 (ATerm t)
                {
                  ATerm c_117 = NULL;
                  ATerm d_117 = NULL;
                  d_117 = t;
                  if(((c_117 != NULL) && (c_117 != d_117)))
                    _fail(d_117);
                  else
                    c_117 = d_117;
                  {
                    t = (ATerm) ATmakeAppl(sym__2, term_v_33, (ATerm) ATinsert(ATinsert(ATempty, not_null(c_117)), term_l_40));
                    t = printnl_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_9);
                {
                  ATerm b_9 (ATerm t)
                  {
                    ATerm e_117 = NULL;
                    ATerm f_117 = NULL;
                    ATerm c_9 (ATerm t)
                    {
                      t = not_null(y_116);
                      return(t);
                    }
                    t = long_description_1(t, c_9);
                    {
                      f_117 = t;
                      if(((e_117 != NULL) && (e_117 != f_117)))
                        _fail(f_117);
                      else
                        e_117 = f_117;
                    }
                    {
                      t = (ATerm) ATmakeAppl(sym__2, term_v_33, (ATerm) ATinsert(CheckATermList(not_null(e_117)), term_m_40));
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
ATerm Undefined_1 (ATerm t, ATerm x_75 (ATerm))
{
  ATerm p_117 = NULL,q_117 = NULL;
  p_117 = t;
  o_117 :
  if(match_cons(p_117, sym_Undefined_1))
    {
      q_117 = ATgetArgument(p_117, 0);
      {
        ATerm t_117 = NULL,v_117 = NULL;
        ATerm u_117 = NULL;
        t = SSLgetAnnotations(not_null(p_117));
        {
          u_117 = t;
          if(((t_117 != NULL) && (t_117 != u_117)))
            _fail(u_117);
          else
            t_117 = u_117;
        }
        {
          t = not_null(q_117);
          {
            ATerm x_117 = NULL;
            t = x_75(t);
            {
              v_117 = t;
              {
                ATerm y_117 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(v_117)), not_null(t_117));
                {
                  y_117 = t;
                  if(((x_117 != NULL) && (x_117 != y_117)))
                    _fail(y_117);
                  else
                    x_117 = y_117;
                }
                t = not_null(x_117);
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
ATerm fetch_1 (ATerm t, ATerm g_99 (ATerm))
{
  ATerm d_118 (ATerm t)
  {
    ATerm n_40 = t;
    int o_40 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, g_99, _id);
        LocalPopChoice(o_40);
      }
    else
      {
        t = n_40;
        t = Cons_2(t, _id, d_118);
      }
    return(t);
  }
  t = d_118(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm p_88 (ATerm))
{
  t = fetch_1(t, p_88);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm i_118 = NULL;
  i_118 = t;
  h_118 :
  if(match_cons(i_118, sym_Help_0))
    {
      ATerm k_118 = NULL,m_118 = NULL;
      ATerm p_40;
      p_40 = t;
      {
        ATerm l_118 = NULL;
        t = SSLgetAnnotations(not_null(i_118));
        {
          l_118 = t;
          if(((k_118 != NULL) && (k_118 != l_118)))
            _fail(l_118);
          else
            k_118 = l_118;
        }
      }
      t = p_40;
      {
        ATerm n_118 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(k_118));
        {
          n_118 = t;
          if(((m_118 != NULL) && (m_118 != n_118)))
            _fail(n_118);
          else
            m_118 = n_118;
        }
        t = not_null(m_118);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm r_107 (ATerm))
{
  ATerm q_40 = t;
  int r_40 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = r_107(t);
      LocalPopChoice(r_40);
    }
  else
    {
      t = q_40;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm t_118 = NULL,u_118 = NULL,v_118 = NULL;
  t_118 = t;
  s_118 :
  if(match_cons(t_118, sym__2))
    {
      u_118 = ATgetArgument(t_118, 0);
      v_118 = ATgetArgument(t_118, 1);
      t = SSL_table_get(not_null(u_118), not_null(v_118));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm c_119 = NULL,d_119 = NULL,e_119 = NULL,f_119 = NULL;
  c_119 = t;
  b_119 :
  if(match_cons(c_119, sym__3))
    {
      d_119 = ATgetArgument(c_119, 0);
      e_119 = ATgetArgument(c_119, 1);
      f_119 = ATgetArgument(c_119, 2);
      {
        ATerm s_40;
        s_40 = t;
        {
          ATerm j_119 = NULL;
          ATerm k_119 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(d_119), not_null(e_119));
          {
            ATerm v_40 = t;
            int x_40 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(x_40);
              }
            else
              {
                t = v_40;
                t = (ATerm) ATempty;
              }
            {
              k_119 = t;
              if(((j_119 != NULL) && (j_119 != k_119)))
                _fail(k_119);
              else
                j_119 = k_119;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(d_119), not_null(e_119), (ATerm) ATinsert(CheckATermList(not_null(j_119)), not_null(f_119)));
            t = table_put_0(t);
          }
        }
        t = s_40;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm p_87 (ATerm))
{
  ATerm o_119 = NULL;
  ATerm p_119 = NULL;
  t = term_o_36;
  {
    t = p_87(t);
    {
      p_119 = t;
      if(((o_119 != NULL) && (o_119 != p_119)))
        _fail(p_119);
      else
        o_119 = p_119;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_i_40, term_j_40, not_null(o_119));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm b_0 (ATerm), ATerm e_0 (ATerm))
{
  ATerm v_119 = NULL,w_119 = NULL,x_119 = NULL;
  v_119 = t;
  u_119 :
  if(match_string(v_119, "register-usage-info"))
    {
      t = register_usage_1(t, e_0);
    }
  else
    {
      if(((ATgetType(v_119) == AT_LIST) && ((ATermList) v_119 != ATempty)))
        {
          w_119 = ATgetFirst((ATermList) v_119);
          x_119 = (ATerm) ATgetNext((ATermList) v_119);
          {
            ATerm a_120 = NULL;
            ATerm y_40;
            y_40 = t;
            {
              t = not_null(w_119);
              t = a_0(t);
            }
            t = y_40;
            {
              ATerm b_120 = NULL;
              t = term_o_36;
              {
                t = b_0(t);
                {
                  b_120 = t;
                  if(((a_120 != NULL) && (a_120 != b_120)))
                    _fail(b_120);
                  else
                    a_120 = b_120;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(x_119)), not_null(a_120));
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
    ATerm g_120 = NULL;
    g_120 = t;
    f_120 :
    if(!(match_string(g_120, "--help")))
      {
        if(!(match_string(g_120, "-h")))
          {
            if(!(match_string(g_120, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm e_9 (ATerm t)
  {
    t = term_z_40;
    return(t);
  }
  ATerm f_9 (ATerm t)
  {
    t = term_a_41;
    return(t);
  }
  t = Option_3(t, d_9, e_9, f_9);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm j_120 = NULL,k_120 = NULL,l_120 = NULL;
  j_120 = t;
  i_120 :
  if(((ATgetType(j_120) == AT_LIST) && ((ATermList) j_120 != ATempty)))
    {
      k_120 = ATgetFirst((ATermList) j_120);
      l_120 = (ATerm) ATgetNext((ATermList) j_120);
      t = (ATerm) ATinsert(CheckATermList(not_null(l_120)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(k_120)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm s_80 (ATerm), ATerm t_80 (ATerm))
{
  ATerm v_120 = NULL,w_120 = NULL,x_120 = NULL;
  v_120 = t;
  u_120 :
  if(((ATgetType(v_120) == AT_LIST) && ((ATermList) v_120 != ATempty)))
    {
      w_120 = ATgetFirst((ATermList) v_120);
      x_120 = (ATerm) ATgetNext((ATermList) v_120);
      {
        ATerm b_121 = NULL,d_121 = NULL;
        ATerm c_121 = NULL;
        t = SSLgetAnnotations(not_null(v_120));
        {
          c_121 = t;
          if(((b_121 != NULL) && (b_121 != c_121)))
            _fail(c_121);
          else
            b_121 = c_121;
        }
        {
          t = not_null(w_120);
          {
            ATerm f_121 = NULL;
            t = s_80(t);
            {
              d_121 = t;
              {
                t = not_null(x_120);
                {
                  ATerm h_121 = NULL;
                  t = t_80(t);
                  {
                    f_121 = t;
                    {
                      ATerm i_121 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(f_121)), not_null(d_121)), not_null(b_121));
                      {
                        i_121 = t;
                        if(((h_121 != NULL) && (h_121 != i_121)))
                          _fail(i_121);
                        else
                          h_121 = i_121;
                      }
                      t = not_null(h_121);
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
  ATerm s_121 = NULL;
  s_121 = t;
  r_121 :
  if(((ATermList) s_121 == ATempty))
    {
      {
        ATerm u_121 = NULL,w_121 = NULL;
        ATerm b_41;
        b_41 = t;
        {
          ATerm v_121 = NULL;
          t = SSLgetAnnotations(not_null(s_121));
          {
            v_121 = t;
            if(((u_121 != NULL) && (u_121 != v_121)))
              _fail(v_121);
            else
              u_121 = v_121;
          }
        }
        t = b_41;
        {
          ATerm x_121 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(u_121));
          {
            x_121 = t;
            if(((w_121 != NULL) && (w_121 != x_121)))
              _fail(x_121);
            else
              w_121 = x_121;
          }
          t = not_null(w_121);
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
  ATerm d_122 = NULL,e_122 = NULL,f_122 = NULL;
  d_122 = t;
  c_122 :
  if(match_cons(d_122, sym__2))
    {
      e_122 = ATgetArgument(d_122, 0);
      f_122 = ATgetArgument(d_122, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_n_33, not_null(e_122), not_null(f_122));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm n_87 (ATerm))
{
  ATerm c_41;
  c_41 = t;
  {
    ATerm g_9 (ATerm t)
    {
      t = term_d_41;
      t = n_87(t);
      return(t);
    }
    t = try_1(t, g_9);
  }
  t = c_41;
  {
    ATerm h_9 (ATerm t)
    {
      ATerm n_122 = NULL;
      ATerm e_41;
      e_41 = t;
      {
        ATerm l_122 = NULL;
        ATerm m_122 = NULL;
        m_122 = t;
        if(((l_122 != NULL) && (l_122 != m_122)))
          _fail(m_122);
        else
          l_122 = m_122;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_y_37, not_null(l_122));
          t = set_config_0(t);
        }
      }
      t = e_41;
      {
        ATerm o_122 = NULL;
        o_122 = t;
        if(((n_122 != NULL) && (n_122 != o_122)))
          _fail(o_122);
        else
          n_122 = o_122;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(n_122));
      }
      return(t);
    }
    ATerm i_9 (ATerm t)
    {
      ATerm f_41 = t;
      int g_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm h_41 = t;
          int i_41 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(i_41);
            }
          else
            {
              t = h_41;
              {
                t = n_87(t);
                t = Cons_2(t, _id, i_9);
              }
            }
          LocalPopChoice(g_41);
        }
      else
        {
          t = f_41;
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
  ATerm u_122 = NULL,v_122 = NULL,w_122 = NULL;
  ATerm m_41;
  m_41 = t;
  {
    ATerm x_122 = NULL,y_122 = NULL,z_122 = NULL,a_123 = NULL;
    x_122 = t;
    t_122 :
    if(match_cons(x_122, sym__3))
      {
        y_122 = ATgetArgument(x_122, 0);
        z_122 = ATgetArgument(x_122, 1);
        a_123 = ATgetArgument(x_122, 2);
        {
          if(((u_122 != NULL) && (u_122 != y_122)))
            _fail(y_122);
          else
            u_122 = y_122;
          {
            if(((v_122 != NULL) && (v_122 != z_122)))
              _fail(z_122);
            else
              v_122 = z_122;
            {
              if(((w_122 != NULL) && (w_122 != a_123)))
                _fail(a_123);
              else
                w_122 = a_123;
              t = SSL_table_put(not_null(u_122), not_null(v_122), not_null(w_122));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = m_41;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm m_87 (ATerm))
{
  ATerm d_123 = NULL;
  ATerm r_41;
  r_41 = t;
  {
    t = term_s_41;
    t = table_put_0(t);
  }
  t = r_41;
  {
    ATerm j_9 (ATerm t)
    {
      ATerm t_41 = t;
      int u_41 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = m_87(t);
          LocalPopChoice(u_41);
        }
      else
        {
          t = t_41;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, j_9);
    {
      ATerm k_9 (ATerm t)
      {
        ATerm v_41 = t;
        int w_41 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = option_defined_1(t, Help_0);
            {
              t = system_usage_0(t);
              {
                t = term_f_35;
                t = exit_0(t);
              }
            }
            LocalPopChoice(w_41);
          }
        else
          {
            t = v_41;
            {
              ATerm l_9 (ATerm t)
              {
                ATerm m_9 (ATerm t)
                {
                  ATerm e_123 = NULL;
                  e_123 = t;
                  if(((d_123 != NULL) && (d_123 != e_123)))
                    _fail(e_123);
                  else
                    d_123 = e_123;
                  return(t);
                }
                t = Undefined_1(t, m_9);
                return(t);
              }
              t = option_defined_1(t, l_9);
              {
                ATerm x_41;
                x_41 = t;
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_v_32, (ATerm) ATinsert(ATinsert(ATempty, not_null(d_123)), term_y_41));
                  t = printnl_0(t);
                }
                t = x_41;
                {
                  t = system_usage_0(t);
                  {
                    t = term_d_18;
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
        ATerm a_42;
        a_42 = t;
        {
          t = term_i_40;
          t = table_destroy_0(t);
        }
        t = a_42;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm h_81 (ATerm), ATerm i_81 (ATerm), ATerm j_81 (ATerm), ATerm k_81 (ATerm))
{
  t = parse_options_1(t, h_81);
  {
    t = store_options_0(t);
    {
      t = j_81(t);
      {
        ATerm b_42 = t;
        int c_42 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, i_81);
            LocalPopChoice(c_42);
          }
        else
          {
            t = b_42;
            {
              ATerm d_42 = t;
              int e_42 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = k_81(t);
                  t = report_success_0(t);
                  LocalPopChoice(e_42);
                }
              else
                {
                  t = d_42;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm y_81 (ATerm), ATerm z_81 (ATerm), ATerm a_82 (ATerm), ATerm b_82 (ATerm))
{
  ATerm n_9 (ATerm t)
  {
    ATerm f_42 = t;
    int g_42 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = z_81(t);
        LocalPopChoice(g_42);
      }
    else
      {
        t = f_42;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm o_9 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, y_81);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, n_9, a_82, b_82, o_9);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm s_81 (ATerm), ATerm t_81 (ATerm), ATerm u_81 (ATerm))
{
  ATerm p_9 (ATerm t)
  {
    ATerm q_9 (ATerm t)
    {
      ATerm h_42;
      h_42 = t;
      {
        ATerm h_123 = NULL;
        ATerm i_123 = NULL;
        t = term_y_37;
        {
          t = get_config_0(t);
          {
            i_123 = t;
            if(((h_123 != NULL) && (h_123 != i_123)))
              _fail(i_123);
            else
              h_123 = i_123;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_v_32, (ATerm) ATinsert(ATempty, not_null(h_123)));
          t = printnl_0(t);
        }
      }
      t = h_42;
      return(t);
    }
    t = if_verbose2_1(t, q_9);
    return(t);
  }
  t = iowrap_4(t, s_81, t_81, u_81, p_9);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm q_81 (ATerm), ATerm r_81 (ATerm))
{
  t = iowrap_3(t, q_81, r_81, default_usage_0);
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

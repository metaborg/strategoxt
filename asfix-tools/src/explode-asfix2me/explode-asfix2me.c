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
Symbol sym_Nil_0;
Symbol sym_Cons_2;
Symbol sym_None_0;
Symbol sym_Some_1;
Symbol sym_Anno_2;
Symbol sym_Infinite_0;
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
Symbol sym_Dummy_0;
Symbol sym_Scopes_0;
Symbol sym_stdin_0;
Symbol sym_stdout_0;
Symbol sym_stderr_0;
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
Symbol sym_Var_1;
Symbol sym_Path_1;
Symbol sym_Prefix_2;
Symbol sym_Program_1;
Symbol sym_Undefined_1;
Symbol sym_WaitStatus_3;
Symbol sym_Pipe_2;
Symbol sym_START_0;
Symbol sym_START_p__0;
Symbol sym_lexical_priorities_1;
Symbol sym_context_free_priorities_1;
Symbol sym_lexical_restrictions_1;
Symbol sym_context_free_restrictions_1;
Symbol sym_Definition_1;
Symbol sym_attrs_1;
Symbol sym_no_attrs_0;
Symbol sym_prod_3;
Symbol sym_Production_s_1;
Symbol sym_syntax_1;
Symbol sym_Symbol_s_1;
Symbol sym_TagId_empty_0;
Symbol sym_empty_grammar_0;
Symbol sym_conc_grammars_2;
Symbol sym_lexical_syntax_1;
Symbol sym_context_free_syntax_1;
Symbol sym_variables_1;
Symbol sym_lexical_variables_1;
Symbol sym_cf_1;
Symbol sym_lex_1;
Symbol sym_varsym_1;
Symbol sym_layout_0;
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
Symbol sym_renamings_1;
Symbol sym_sort_renaming_2;
Symbol sym_prod_renaming_2;
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
Symbol sym_NatCon_p__1;
Symbol sym_plus_1;
Symbol sym_minus_1;
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
Symbol sym_char_class_1;
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
Symbol sym_NumChar_1;
Symbol sym_ShortChar_1;
Symbol sym_Character_dunno_a__0_0;
Symbol sym_Character_dunno_b__0_0;
Symbol sym_sort_1;
Symbol sym_Sorts_1;
Symbol sym_uqlit_1;
Symbol sym_Literal_1;
Symbol sym_prod_fun_4;
Symbol sym_qlit_1;
Symbol sym_label_2;
Symbol sym_cons_1;
Symbol sym_constructor_0;
Symbol sym_memo_0;
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
Symbol sym_e_1;
Symbol sym_OptExp_empty_0;
Symbol sym_IntCon_NatCon_OptExp_3;
Symbol sym_CharClass_1;
Symbol sym_CharClass_Lookaheads_2;
Symbol sym_Lookahead_1;
Symbol sym_bar_2;
Symbol sym_comma_1;
Symbol sym_follow_restriction_2;
Symbol sym_Restriction_s_1;
Symbol sym_restrictions_1;
Symbol sym_reject_0;
Symbol sym_aliases_1;
Symbol sym_alias_2;
Symbol sym_Alias_s_1;
Symbol sym_lit_1;
Symbol sym_list_1;
Symbol sym_lit_1;
Symbol sym_assoc_1;
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
  sym_Nil_0 = ATmakeSymbol("Nil", 0, ATfalse);
  ATprotectSymbol(sym_Nil_0);
  sym_Cons_2 = ATmakeSymbol("Cons", 2, ATfalse);
  ATprotectSymbol(sym_Cons_2);
  sym_None_0 = ATmakeSymbol("None", 0, ATfalse);
  ATprotectSymbol(sym_None_0);
  sym_Some_1 = ATmakeSymbol("Some", 1, ATfalse);
  ATprotectSymbol(sym_Some_1);
  sym_Anno_2 = ATmakeSymbol("Anno", 2, ATfalse);
  ATprotectSymbol(sym_Anno_2);
  sym_Infinite_0 = ATmakeSymbol("Infinite", 0, ATfalse);
  ATprotectSymbol(sym_Infinite_0);
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
  sym_Dummy_0 = ATmakeSymbol("Dummy", 0, ATfalse);
  ATprotectSymbol(sym_Dummy_0);
  sym_Scopes_0 = ATmakeSymbol("Scopes", 0, ATfalse);
  ATprotectSymbol(sym_Scopes_0);
  sym_stdin_0 = ATmakeSymbol("stdin", 0, ATfalse);
  ATprotectSymbol(sym_stdin_0);
  sym_stdout_0 = ATmakeSymbol("stdout", 0, ATfalse);
  ATprotectSymbol(sym_stdout_0);
  sym_stderr_0 = ATmakeSymbol("stderr", 0, ATfalse);
  ATprotectSymbol(sym_stderr_0);
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
  sym_WaitStatus_3 = ATmakeSymbol("WaitStatus", 3, ATfalse);
  ATprotectSymbol(sym_WaitStatus_3);
  sym_Pipe_2 = ATmakeSymbol("Pipe", 2, ATfalse);
  ATprotectSymbol(sym_Pipe_2);
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
  sym_Symbol_s_1 = ATmakeSymbol("Symbol-s", 1, ATfalse);
  ATprotectSymbol(sym_Symbol_s_1);
  sym_TagId_empty_0 = ATmakeSymbol("TagId-empty", 0, ATfalse);
  ATprotectSymbol(sym_TagId_empty_0);
  sym_empty_grammar_0 = ATmakeSymbol("empty-grammar", 0, ATfalse);
  ATprotectSymbol(sym_empty_grammar_0);
  sym_conc_grammars_2 = ATmakeSymbol("conc-grammars", 2, ATfalse);
  ATprotectSymbol(sym_conc_grammars_2);
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
  sym_renamings_1 = ATmakeSymbol("renamings", 1, ATfalse);
  ATprotectSymbol(sym_renamings_1);
  sym_sort_renaming_2 = ATmakeSymbol("sort-renaming", 2, ATfalse);
  ATprotectSymbol(sym_sort_renaming_2);
  sym_prod_renaming_2 = ATmakeSymbol("prod-renaming", 2, ATfalse);
  ATprotectSymbol(sym_prod_renaming_2);
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
  sym_NatCon_p__1 = ATmakeSymbol("NatCon'", 1, ATfalse);
  ATprotectSymbol(sym_NatCon_p__1);
  sym_plus_1 = ATmakeSymbol("plus", 1, ATfalse);
  ATprotectSymbol(sym_plus_1);
  sym_minus_1 = ATmakeSymbol("minus", 1, ATfalse);
  ATprotectSymbol(sym_minus_1);
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
  sym_char_class_1 = ATmakeSymbol("char-class", 1, ATfalse);
  ATprotectSymbol(sym_char_class_1);
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
  sym_NumChar_1 = ATmakeSymbol("NumChar", 1, ATfalse);
  ATprotectSymbol(sym_NumChar_1);
  sym_ShortChar_1 = ATmakeSymbol("ShortChar", 1, ATfalse);
  ATprotectSymbol(sym_ShortChar_1);
  sym_Character_dunno_a__0_0 = ATmakeSymbol("Character-dunno-a_0", 0, ATfalse);
  ATprotectSymbol(sym_Character_dunno_a__0_0);
  sym_Character_dunno_b__0_0 = ATmakeSymbol("Character-dunno-b_0", 0, ATfalse);
  ATprotectSymbol(sym_Character_dunno_b__0_0);
  sym_sort_1 = ATmakeSymbol("sort", 1, ATfalse);
  ATprotectSymbol(sym_sort_1);
  sym_Sorts_1 = ATmakeSymbol("Sorts", 1, ATfalse);
  ATprotectSymbol(sym_Sorts_1);
  sym_uqlit_1 = ATmakeSymbol("uqlit", 1, ATfalse);
  ATprotectSymbol(sym_uqlit_1);
  sym_Literal_1 = ATmakeSymbol("Literal", 1, ATfalse);
  ATprotectSymbol(sym_Literal_1);
  sym_prod_fun_4 = ATmakeSymbol("prod-fun", 4, ATfalse);
  ATprotectSymbol(sym_prod_fun_4);
  sym_qlit_1 = ATmakeSymbol("qlit", 1, ATfalse);
  ATprotectSymbol(sym_qlit_1);
  sym_label_2 = ATmakeSymbol("label", 2, ATfalse);
  ATprotectSymbol(sym_label_2);
  sym_cons_1 = ATmakeSymbol("cons", 1, ATfalse);
  ATprotectSymbol(sym_cons_1);
  sym_constructor_0 = ATmakeSymbol("constructor", 0, ATfalse);
  ATprotectSymbol(sym_constructor_0);
  sym_memo_0 = ATmakeSymbol("memo", 0, ATfalse);
  ATprotectSymbol(sym_memo_0);
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
  sym_e_1 = ATmakeSymbol("e", 1, ATfalse);
  ATprotectSymbol(sym_e_1);
  sym_OptExp_empty_0 = ATmakeSymbol("OptExp-empty", 0, ATfalse);
  ATprotectSymbol(sym_OptExp_empty_0);
  sym_IntCon_NatCon_OptExp_3 = ATmakeSymbol("IntCon-NatCon-OptExp", 3, ATfalse);
  ATprotectSymbol(sym_IntCon_NatCon_OptExp_3);
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
  sym_aliases_1 = ATmakeSymbol("aliases", 1, ATfalse);
  ATprotectSymbol(sym_aliases_1);
  sym_alias_2 = ATmakeSymbol("alias", 2, ATfalse);
  ATprotectSymbol(sym_alias_2);
  sym_Alias_s_1 = ATmakeSymbol("Alias-s", 1, ATfalse);
  ATprotectSymbol(sym_Alias_s_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_list_1 = ATmakeSymbol("list", 1, ATfalse);
  ATprotectSymbol(sym_list_1);
  sym_lit_1 = ATmakeSymbol("lit", 1, ATfalse);
  ATprotectSymbol(sym_lit_1);
  sym_assoc_1 = ATmakeSymbol("assoc", 1, ATfalse);
  ATprotectSymbol(sym_assoc_1);
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
  init_constant_terms();
}
ATerm term_a_23;
ATerm term_d_22;
ATerm term_q_21;
ATerm term_h_21;
ATerm term_c_21;
ATerm term_b_21;
ATerm term_a_21;
ATerm term_e_20;
ATerm term_b_20;
ATerm term_a_20;
ATerm term_z_19;
ATerm term_y_19;
ATerm term_x_19;
ATerm term_j_19;
ATerm term_e_19;
ATerm term_y_18;
ATerm term_w_18;
ATerm term_v_18;
ATerm term_u_18;
ATerm term_k_18;
ATerm term_g_18;
ATerm term_z_17;
ATerm term_y_17;
ATerm term_x_17;
ATerm term_f_17;
ATerm term_y_16;
ATerm term_x_16;
ATerm term_s_16;
ATerm term_r_16;
ATerm term_q_16;
ATerm term_n_16;
ATerm term_i_16;
ATerm term_h_16;
ATerm term_l_15;
ATerm term_k_15;
ATerm term_j_15;
ATerm term_i_15;
ATerm term_h_15;
ATerm term_d_15;
ATerm term_c_15;
ATerm term_b_15;
ATerm term_y_14;
ATerm term_x_14;
ATerm term_v_14;
ATerm term_u_14;
ATerm term_t_14;
ATerm term_s_14;
ATerm term_r_14;
ATerm term_i_13;
ATerm term_e_13;
ATerm term_d_13;
ATerm term_w_12;
ATerm term_u_12;
ATerm term_f_11;
ATerm term_e_11;
ATerm term_d_11;
ATerm term_c_11;
ATerm term_f_8;
ATerm term_n_7;
ATerm term_m_7;
ATerm term_l_7;
ATerm term_k_7;
ATerm term_g_7;
ATerm term_f_7;
ATerm term_e_7;
ATerm term_z_6;
ATerm term_d_6;
ATerm term_c_6;
ATerm term_x_5;
void init_constant_terms (void)
{
  ATprotect(&(term_x_5));
  term_x_5 = (ATerm) ATmakeInt(0);
  ATprotect(&(term_c_6));
  term_c_6 = (ATerm) ATmakeInt(255);
  ATprotect(&(term_d_6));
  term_d_6 = (ATerm) ATmakeAppl(sym_range_2, term_x_5, term_c_6);
  ATprotect(&(term_z_6));
  term_z_6 = (ATerm) ATmakeAppl(sym_no_attrs_0);
  ATprotect(&(term_e_7));
  term_e_7 = (ATerm) ATmakeAppl(sym_layout_0);
  ATprotect(&(term_f_7));
  term_f_7 = (ATerm) ATmakeAppl(sym_lex_1, term_e_7);
  ATprotect(&(term_g_7));
  term_g_7 = (ATerm) ATmakeAppl(sym_cf_1, term_e_7);
  ATprotect(&(term_k_7));
  term_k_7 = (ATerm) ATmakeAppl(sym_left_0);
  ATprotect(&(term_l_7));
  term_l_7 = (ATerm) ATmakeAppl(sym_assoc_1, term_k_7);
  ATprotect(&(term_m_7));
  term_m_7 = (ATerm) ATmakeAppl(sym_opt_1, term_e_7);
  ATprotect(&(term_n_7));
  term_n_7 = (ATerm) ATmakeAppl(sym_cf_1, term_m_7);
  ATprotect(&(term_f_8));
  term_f_8 = (ATerm) ATmakeAppl(sym__0);
  ATprotect(&(term_c_11));
  term_c_11 = (ATerm) ATmakeAppl(sym_stderr_0);
  ATprotect(&(term_d_11));
  term_d_11 = (ATerm) ATmakeAppl(ATmakeSymbol("usage : ", 0, ATtrue));
  ATprotect(&(term_e_11));
  term_e_11 = (ATerm) ATmakeAppl(ATmakeSymbol(" [-S] [-i file] [-o file] [-b] [-s] [--help|-h|-?]", 0, ATtrue));
  ATprotect(&(term_f_11));
  term_f_11 = (ATerm) ATmakeInt(1);
  ATprotect(&(term_u_12));
  term_u_12 = (ATerm) ATmakeAppl(ATmakeSymbol("No configuration for variable: ", 0, ATtrue));
  ATprotect(&(term_w_12));
  term_w_12 = (ATerm) ATmakeAppl(ATmakeSymbol("config", 0, ATtrue));
  ATprotect(&(term_d_13));
  term_d_13 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose", 0, ATtrue));
  ATprotect(&(term_e_13));
  term_e_13 = (ATerm) ATmakeInt(2);
  ATprotect(&(term_i_13));
  term_i_13 = (ATerm) ATmakeAppl(sym_stdout_0);
  ATprotect(&(term_r_14));
  term_r_14 = (ATerm) ATmakeAppl(sym_stdin_0);
  ATprotect(&(term_s_14));
  term_s_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v", 0, ATtrue));
  ATprotect(&(term_t_14));
  term_t_14 = (ATerm) ATmakeAppl(sym__2, term_s_14, term_f_8);
  ATprotect(&(term_u_14));
  term_u_14 = (ATerm) ATmakeAppl(sym_Version_0);
  ATprotect(&(term_v_14));
  term_v_14 = (ATerm) ATmakeAppl(ATmakeSymbol("-v|--version     Display prgram's version", 0, ATtrue));
  ATprotect(&(term_x_14));
  term_x_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep", 0, ATtrue));
  ATprotect(&(term_y_14));
  term_y_14 = (ATerm) ATmakeAppl(ATmakeSymbol("--keep i | -k i  Keep intermediates (default 0)", 0, ATtrue));
  ATprotect(&(term_b_15));
  term_b_15 = (ATerm) ATmakeAppl(sym__2, term_d_13, term_x_5);
  ATprotect(&(term_c_15));
  term_c_15 = (ATerm) ATmakeAppl(sym_Verbose_1, term_x_5);
  ATprotect(&(term_d_15));
  term_d_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-S|--silent      Silent execution (same as --verbose 0)", 0, ATtrue));
  ATprotect(&(term_h_15));
  term_h_15 = (ATerm) ATmakeAppl(ATmakeSymbol("--verbose i      Verbosity level i (default 1)", 0, ATtrue));
  ATprotect(&(term_i_15));
  term_i_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s", 0, ATtrue));
  ATprotect(&(term_j_15));
  term_j_15 = (ATerm) ATmakeAppl(sym__2, term_i_15, term_f_8);
  ATprotect(&(term_k_15));
  term_k_15 = (ATerm) ATmakeAppl(sym_Statistics_0);
  ATprotect(&(term_l_15));
  term_l_15 = (ATerm) ATmakeAppl(ATmakeSymbol("-s               Turn on statisctics", 0, ATtrue));
  ATprotect(&(term_h_16));
  term_h_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o", 0, ATtrue));
  ATprotect(&(term_i_16));
  term_i_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-o f|--output f  Write output to f", 0, ATtrue));
  ATprotect(&(term_n_16));
  term_n_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b", 0, ATtrue));
  ATprotect(&(term_q_16));
  term_q_16 = (ATerm) ATmakeAppl(sym__2, term_n_16, term_f_8);
  ATprotect(&(term_r_16));
  term_r_16 = (ATerm) ATmakeAppl(sym_Binary_0);
  ATprotect(&(term_s_16));
  term_s_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-b               Write binary output", 0, ATtrue));
  ATprotect(&(term_x_16));
  term_x_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i", 0, ATtrue));
  ATprotect(&(term_y_16));
  term_y_16 = (ATerm) ATmakeAppl(ATmakeSymbol("-i f|--input f   Read input from f", 0, ATtrue));
  ATprotect(&(term_f_17));
  term_f_17 = (ATerm) ATmakeAppl(ATmakeSymbol("rewriting failed", 0, ATtrue));
  ATprotect(&(term_x_17));
  term_x_17 = (ATerm) ATmakeAppl(ATmakeSymbol("program", 0, ATtrue));
  ATprotect(&(term_y_17));
  term_y_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" (", 0, ATtrue));
  ATprotect(&(term_z_17));
  term_z_17 = (ATerm) ATmakeAppl(ATmakeSymbol(" secs)", 0, ATtrue));
  ATprotect(&(term_g_18));
  term_g_18 = (ATerm) ATmakeAppl(ATmakeSymbol("option-table", 0, ATtrue));
  ATprotect(&(term_k_18));
  term_k_18 = (ATerm) ATmakeAppl(ATmakeSymbol("options", 0, ATtrue));
  ATprotect(&(term_u_18));
  term_u_18 = (ATerm) ATmakeAppl(ATmakeSymbol("This tool explodes an AsFix2ME term to a valid AsFix2 term. Explosion involes\n", 0, ATtrue));
  ATprotect(&(term_v_18));
  term_v_18 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattening of lists, layout, literals, and lexicals.\n\n", 0, ATtrue));
  ATprotect(&(term_w_18));
  term_w_18 = (ATerm) ATmakeAppl(ATmakeSymbol("Observe that the structure of lexicals cannot be restored. Lexicals are\n", 0, ATtrue));
  ATprotect(&(term_y_18));
  term_y_18 = (ATerm) ATmakeAppl(ATmakeSymbol("unflattened into left linear binary trees.", 0, ATtrue));
  ATprotect(&(term_e_19));
  term_e_19 = (ATerm) ATmakeAppl(ATmakeSymbol("Usage: ", 0, ATtrue));
  ATprotect(&(term_j_19));
  term_j_19 = (ATerm) ATmakeAppl(ATmakeSymbol(" [options]", 0, ATtrue));
  ATprotect(&(term_x_19));
  term_x_19 = (ATerm) ATmakeAppl(ATmakeSymbol("\nOptions:", 0, ATtrue));
  ATprotect(&(term_y_19));
  term_y_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage-table", 0, ATtrue));
  ATprotect(&(term_z_19));
  term_z_19 = (ATerm) ATmakeAppl(ATmakeSymbol("usage", 0, ATtrue));
  ATprotect(&(term_a_20));
  term_a_20 = (ATerm) ATmakeAppl(sym__2, term_y_19, term_z_19);
  ATprotect(&(term_b_20));
  term_b_20 = (ATerm) ATmakeAppl(ATmakeSymbol("   ", 0, ATtrue));
  ATprotect(&(term_e_20));
  term_e_20 = (ATerm) ATmakeAppl(ATmakeSymbol("\n", 0, ATtrue));
  ATprotect(&(term_a_21));
  term_a_21 = (ATerm) ATmakeAppl(ATmakeSymbol("--help", 0, ATtrue));
  ATprotect(&(term_b_21));
  term_b_21 = (ATerm) ATmakeAppl(sym__2, term_a_21, term_f_8);
  ATprotect(&(term_c_21));
  term_c_21 = (ATerm) ATmakeAppl(sym_Help_0);
  ATprotect(&(term_h_21));
  term_h_21 = (ATerm) ATmakeAppl(ATmakeSymbol("-h|-?|--help     Display usage information", 0, ATtrue));
  ATprotect(&(term_q_21));
  term_q_21 = (ATerm) ATmakeAppl(ATmakeSymbol("register-usage-info", 0, ATtrue));
  ATprotect(&(term_d_22));
  term_d_22 = (ATerm) ATmakeAppl(sym__3, term_y_19, term_z_19, (ATerm) ATempty);
  ATprotect(&(term_a_23));
  term_a_23 = (ATerm) ATmakeAppl(ATmakeSymbol("Invalid option: ", 0, ATtrue));
}
ATerm unflatten_lexical_0 (ATerm);
ATerm is_int_0 (ATerm);
ATerm MkLayoutCharacter_0 (ATerm);
ATerm MkLayoutConsList_0 (ATerm);
ATerm unflatten_layout_0 (ATerm);
ATerm MkCfConsList_1 (ATerm, ATerm x_70 (ATerm));
ATerm MkCfConsList_2 (ATerm, ATerm z_70 (ATerm), ATerm a_71 (ATerm));
ATerm MkLexConsList_1 (ATerm, ATerm c_71 (ATerm));
ATerm unflatten_list_0 (ATerm);
ATerm list_1 (ATerm, ATerm o_0 (ATerm));
ATerm list_some_1 (ATerm, ATerm a_79 (ATerm));
ATerm unflatten_literal_0 (ATerm);
ATerm bottomup_1 (ATerm, ATerm u_72 (ATerm));
ATerm ExplodeAsFix2ME_0 (ATerm);
ATerm _2 (ATerm, ATerm q_55 (ATerm), ATerm r_55 (ATerm));
ATerm default_usage_0 (ATerm);
ATerm printnl_0 (ATerm);
ATerm implode_string_0 (ATerm);
ATerm concat_0 (ATerm);
ATerm conc_more_lists_0 (ATerm);
ATerm at_end_1 (ATerm, ATerm l_79 (ATerm));
ATerm conc_two_lists_0 (ATerm);
ATerm conc_0 (ATerm);
ATerm explode_string_0 (ATerm);
ATerm conc_strings_0 (ATerm);
ATerm debug_1 (ATerm, ATerm u_89 (ATerm));
ATerm is_string_0 (ATerm);
ATerm eval_config_0 (ATerm);
ATerm get_config_0 (ATerm);
ATerm if_verbose2_1 (ATerm, ATerm r_92 (ATerm));
ATerm WriteToTextFile_0 (ATerm);
ATerm WriteToBinaryFile_0 (ATerm);
ATerm output_file_0 (ATerm);
ATerm dtime_0 (ATerm);
ATerm apply_strategy_1 (ATerm, ATerm y_90 (ATerm));
ATerm ReadFromFile_0 (ATerm);
ATerm split_2 (ATerm, ATerm z_86 (ATerm), ATerm a_87 (ATerm));
ATerm input_file_0 (ATerm);
ATerm version_option_0 (ATerm);
ATerm keep_option_0 (ATerm);
ATerm string_to_int_0 (ATerm);
ATerm verbose_option_0 (ATerm);
ATerm general_options_0 (ATerm);
ATerm output_option_0 (ATerm);
ATerm aterm_output_option_0 (ATerm);
ATerm ArgOption_3 (ATerm, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm));
ATerm input_option_0 (ATerm);
ATerm io_options_0 (ATerm);
ATerm report_failure_0 (ATerm);
ATerm ticks_to_seconds_0 (ATerm);
ATerm add_0 (ATerm);
ATerm foldr_2 (ATerm, ATerm k_85 (ATerm), ATerm l_85 (ATerm));
ATerm crush_2 (ATerm, ATerm i_84 (ATerm), ATerm j_84 (ATerm));
ATerm times_0 (ATerm);
ATerm run_time_0 (ATerm);
ATerm gt_0 (ATerm);
ATerm geq_0 (ATerm);
ATerm if_verbose1_1 (ATerm, ATerm q_92 (ATerm));
ATerm report_success_0 (ATerm);
ATerm Version_0 (ATerm);
ATerm need_help_1 (ATerm, ATerm w_90 (ATerm));
ATerm table_create_0 (ATerm);
ATerm store_options_0 (ATerm);
ATerm table_destroy_0 (ATerm);
ATerm exit_0 (ATerm);
ATerm is_list_0 (ATerm);
ATerm echo_0 (ATerm);
ATerm long_description_1 (ATerm, ATerm k_0 (ATerm));
ATerm map_1 (ATerm, ATerm w_78 (ATerm));
ATerm reverse_acc_2 (ATerm, ATerm i_0 (ATerm), ATerm j_0 (ATerm));
ATerm reverse_0 (ATerm);
ATerm short_description_1 (ATerm, ATerm h_0 (ATerm));
ATerm Program_1 (ATerm, ATerm t_61 (ATerm));
ATerm system_usage_0 (ATerm);
ATerm debug_0 (ATerm);
ATerm say_1 (ATerm, ATerm v_89 (ATerm));
ATerm Undefined_1 (ATerm, ATerm u_61 (ATerm));
ATerm fetch_1 (ATerm, ATerm f_79 (ATerm));
ATerm option_defined_1 (ATerm, ATerm t_93 (ATerm));
ATerm Help_0 (ATerm);
ATerm try_1 (ATerm, ATerm f_71 (ATerm));
ATerm table_get_0 (ATerm);
ATerm table_push_0 (ATerm);
ATerm register_usage_1 (ATerm, ATerm y_94 (ATerm));
ATerm Option_3 (ATerm, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm));
ATerm system_usage_switch_0 (ATerm);
ATerm UndefinedOption_0 (ATerm);
ATerm Cons_2 (ATerm, ATerm z_56 (ATerm), ATerm a_57 (ATerm));
ATerm Nil_0 (ATerm);
ATerm set_config_0 (ATerm);
ATerm parse_options_p__1 (ATerm, ATerm w_94 (ATerm));
ATerm table_put_0 (ATerm);
ATerm parse_options_1 (ATerm, ATerm v_94 (ATerm));
ATerm option_wrap_4 (ATerm, ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm f_91 (ATerm));
ATerm iowrap_4 (ATerm, ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm));
ATerm iowrap_3 (ATerm, ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm p_91 (ATerm));
ATerm iowrap_2 (ATerm, ATerm l_91 (ATerm), ATerm m_91 (ATerm));
ATerm iowrap_1 (ATerm, ATerm i_91 (ATerm));
ATerm explode_asfix2me_0 (ATerm);
ATerm main_0 (ATerm);
ATerm unflatten_lexical_0 (ATerm t)
{
  ATerm x_2 = NULL,y_2 = NULL,z_2 = NULL,a_3 = NULL,b_3 = NULL,c_3 = NULL,d_3 = NULL,e_3 = NULL,f_3 = NULL,g_3 = NULL,h_3 = NULL,i_3 = NULL,j_3 = NULL,k_3 = NULL,l_3 = NULL,m_3 = NULL,n_3 = NULL,o_3 = NULL,p_3 = NULL,q_3 = NULL,r_3 = NULL,s_3 = NULL,t_3 = NULL;
  x_2 = t;
  n_1 :
  if(match_cons(x_2, sym_appl_2))
    {
      y_2 = ATgetArgument(x_2, 0);
      g_3 = ATgetArgument(x_2, 1);
      o_1 :
      if(match_cons(y_2, sym_prod_3))
        {
          z_2 = ATgetArgument(y_2, 0);
          d_3 = ATgetArgument(y_2, 1);
          f_3 = ATgetArgument(y_2, 2);
          p_1 :
          if(((ATgetType(z_2) == AT_LIST) && !(ATisEmpty(z_2))))
            {
              a_3 = ATgetFirst((ATermList) z_2);
              c_3 = (ATerm) ATgetNext((ATermList) z_2);
              a_2 :
              if(match_cons(a_3, sym_lex_1))
                {
                  b_3 = ATgetArgument(a_3, 0);
                  b_2 :
                  if(((ATgetType(c_3) == AT_LIST) && ATisEmpty(c_3)))
                    {
                      g_2 :
                      if(match_cons(d_3, sym_cf_1))
                        {
                          e_3 = ATgetArgument(d_3, 0);
                          i_2 :
                          if(match_cons(f_3, sym_no_attrs_0))
                            {
                              j_2 :
                              if(((ATgetType(g_3) == AT_LIST) && !(ATisEmpty(g_3))))
                                {
                                  h_3 = ATgetFirst((ATermList) g_3);
                                  t_3 = (ATerm) ATgetNext((ATermList) g_3);
                                  k_2 :
                                  if(match_cons(h_3, sym_appl_2))
                                    {
                                      i_3 = ATgetArgument(h_3, 0);
                                      s_3 = ATgetArgument(h_3, 1);
                                      l_2 :
                                      if(match_cons(i_3, sym_prod_3))
                                        {
                                          j_3 = ATgetArgument(i_3, 0);
                                          k_3 = ATgetArgument(i_3, 1);
                                          r_3 = ATgetArgument(i_3, 2);
                                          n_2 :
                                          if(match_cons(k_3, sym_iter_star_1))
                                            {
                                              l_3 = ATgetArgument(k_3, 0);
                                              o_2 :
                                              if(match_cons(l_3, sym_char_class_1))
                                                {
                                                  m_3 = ATgetArgument(l_3, 0);
                                                  p_2 :
                                                  if(((ATgetType(m_3) == AT_LIST) && !(ATisEmpty(m_3))))
                                                    {
                                                      n_3 = ATgetFirst((ATermList) m_3);
                                                      q_3 = (ATerm) ATgetNext((ATermList) m_3);
                                                      q_2 :
                                                      if(match_cons(n_3, sym_range_2))
                                                        {
                                                          o_3 = ATgetArgument(n_3, 0);
                                                          p_3 = ATgetArgument(n_3, 1);
                                                          s_2 :
                                                          if(match_int(o_3, 0))
                                                            {
                                                              t_2 :
                                                              if(match_int(p_3, 255))
                                                                {
                                                                  u_2 :
                                                                  if(((ATgetType(q_3) == AT_LIST) && ATisEmpty(q_3)))
                                                                    {
                                                                      v_2 :
                                                                      if(match_cons(r_3, sym_no_attrs_0))
                                                                        {
                                                                          w_2 :
                                                                          if(((ATgetType(t_3) == AT_LIST) && ATisEmpty(t_3)))
                                                                            {
                                                                              {
                                                                                ATerm v_3 = NULL,w_3 = NULL,x_3 = NULL;
                                                                                if(((b_3 != NULL) && (b_3 != e_3)))
                                                                                  _fail(e_3);
                                                                                else
                                                                                  b_3 = e_3;
                                                                                {
                                                                                  if(((v_3 != NULL) && (v_3 != j_3)))
                                                                                    _fail(j_3);
                                                                                  else
                                                                                    v_3 = j_3;
                                                                                  {
                                                                                    if(((w_3 != NULL) && (w_3 != s_3)))
                                                                                      _fail(s_3);
                                                                                    else
                                                                                      w_3 = s_3;
                                                                                    {
                                                                                      ATerm y_3 = NULL;
                                                                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_d_6))))), (ATerm)ATmakeAppl(sym_lex_1, not_null(b_3)), term_z_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(v_3), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_d_6)))), term_z_6), not_null(w_3))));
                                                                                      {
                                                                                        y_3 = t;
                                                                                        if(((x_3 != NULL) && (x_3 != y_3)))
                                                                                          _fail(y_3);
                                                                                        else
                                                                                          x_3 = y_3;
                                                                                      }
                                                                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(b_3))), (ATerm)ATmakeAppl(sym_cf_1, not_null(b_3)), term_z_6), not_null(x_3));
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
                                          else
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
                  else
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
ATerm is_int_0 (ATerm t)
{
  ATerm c_4 = NULL;
  c_4 = t;
  t = SSL_is_int(not_null(c_4));
  return(t);
}
ATerm MkLayoutCharacter_0 (ATerm t)
{
  ATerm l_4 = NULL;
  ATerm n_4 = NULL,o_4 = NULL,p_4 = NULL;
  l_4 = t;
  {
    ATerm c_7 = t;
    int d_7 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_int_0(t);
        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_f_7), term_g_7, term_z_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, term_d_6))), term_f_7, term_z_6), (ATerm) ATinsert(ATempty, not_null(l_4)))));
        LocalPopChoice(d_7);
      }
    else
      {
        t = c_7;
        {
          ATerm h_7 = t;
          int i_7 = stack_ptr;
          if((PushChoice() == 0))
            {
              ATerm q_4 = NULL,r_4 = NULL,s_4 = NULL,t_4 = NULL,u_4 = NULL,v_4 = NULL,w_4 = NULL;
              q_4 = t;
              i_4 :
              if(match_cons(q_4, sym_appl_2))
                {
                  r_4 = ATgetArgument(q_4, 0);
                  w_4 = ATgetArgument(q_4, 1);
                  j_4 :
                  if(match_cons(r_4, sym_prod_3))
                    {
                      s_4 = ATgetArgument(r_4, 0);
                      t_4 = ATgetArgument(r_4, 1);
                      v_4 = ATgetArgument(r_4, 2);
                      k_4 :
                      if(match_cons(t_4, sym_lex_1))
                        {
                          u_4 = ATgetArgument(t_4, 0);
                          {
                            if(((n_4 != NULL) && (n_4 != s_4)))
                              _fail(s_4);
                            else
                              n_4 = s_4;
                            {
                              if(((p_4 != NULL) && (p_4 != u_4)))
                                _fail(u_4);
                              else
                                p_4 = u_4;
                              {
                                if(((o_4 != NULL) && (o_4 != v_4)))
                                  _fail(v_4);
                                else
                                  o_4 = v_4;
                                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_f_7), term_g_7, term_z_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(p_4))), term_f_7, term_z_6), (ATerm) ATinsert(ATempty, not_null(l_4)))));
                              }
                            }
                          }
                        }
                      else
                        {
                          if(match_cons(t_4, sym_lit_1))
                            {
                              u_4 = ATgetArgument(t_4, 0);
                              {
                                if(((n_4 != NULL) && (n_4 != s_4)))
                                  _fail(s_4);
                                else
                                  n_4 = s_4;
                                {
                                  if(((p_4 != NULL) && (p_4 != u_4)))
                                    _fail(u_4);
                                  else
                                    p_4 = u_4;
                                  {
                                    if(((o_4 != NULL) && (o_4 != v_4)))
                                      _fail(v_4);
                                    else
                                      o_4 = v_4;
                                    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_f_7), term_g_7, term_z_6), (ATerm) ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lit_1, not_null(p_4))), term_f_7, term_z_6), (ATerm) ATinsert(ATempty, not_null(l_4)))));
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
              LocalPopChoice(i_7);
            }
          else
            {
              t = h_7;
              {
              }
            }
        }
      }
  }
  return(t);
}
ATerm MkLayoutConsList_0 (ATerm t)
{
  ATerm g_5 = NULL,h_5 = NULL,i_5 = NULL,j_5 = NULL,k_5 = NULL;
  g_5 = t;
  e_5 :
  if(((ATgetType(g_5) == AT_LIST) && !(ATisEmpty(g_5))))
    {
      h_5 = ATgetFirst((ATermList) g_5);
      i_5 = (ATerm) ATgetNext((ATermList) g_5);
      f_5 :
      if(((ATgetType(i_5) == AT_LIST) && ATisEmpty(i_5)))
        {
          {
            t = not_null(h_5);
            t = MkLayoutCharacter_0(t);
          }
        }
      else
        {
          if(((ATgetType(i_5) == AT_LIST) && !(ATisEmpty(i_5))))
            {
              j_5 = ATgetFirst((ATermList) i_5);
              k_5 = (ATerm) ATgetNext((ATermList) i_5);
              {
                ATerm t_5 = NULL,v_5 = NULL;
                ATerm j_7;
                j_7 = t;
                {
                  ATerm u_5 = NULL;
                  t = not_null(h_5);
                  {
                    t = MkLayoutCharacter_0(t);
                    {
                      u_5 = t;
                      if(((t_5 != NULL) && (t_5 != u_5)))
                        _fail(u_5);
                      else
                        t_5 = u_5;
                    }
                  }
                }
                t = j_7;
                {
                  ATerm w_5 = NULL;
                  t = not_null(j_5);
                  {
                    t = MkLayoutCharacter_0(t);
                    {
                      w_5 = t;
                      if(((v_5 != NULL) && (v_5 != w_5)))
                        _fail(w_5);
                      else
                        v_5 = w_5;
                    }
                  }
                  {
                    t = (ATerm) ATinsert(CheckATermList(not_null(k_5)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, term_g_7), term_g_7), term_g_7, (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_l_7))), (ATerm) ATinsert(ATinsert(ATempty, not_null(v_5)), not_null(t_5))));
                    t = MkLayoutConsList_0(t);
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
ATerm unflatten_layout_0 (ATerm t)
{
  ATerm o_6 = NULL,p_6 = NULL,q_6 = NULL,r_6 = NULL,s_6 = NULL,t_6 = NULL,u_6 = NULL,v_6 = NULL,w_6 = NULL,x_6 = NULL,y_6 = NULL;
  o_6 = t;
  e_6 :
  if(match_cons(o_6, sym_appl_2))
    {
      p_6 = ATgetArgument(o_6, 0);
      y_6 = ATgetArgument(o_6, 1);
      f_6 :
      if(match_cons(p_6, sym_prod_3))
        {
          q_6 = ATgetArgument(p_6, 0);
          u_6 = ATgetArgument(p_6, 1);
          x_6 = ATgetArgument(p_6, 2);
          g_6 :
          if(((ATgetType(q_6) == AT_LIST) && !(ATisEmpty(q_6))))
            {
              r_6 = ATgetFirst((ATermList) q_6);
              t_6 = (ATerm) ATgetNext((ATermList) q_6);
              h_6 :
              if(match_cons(r_6, sym_cf_1))
                {
                  s_6 = ATgetArgument(r_6, 0);
                  i_6 :
                  if(match_cons(s_6, sym_layout_0))
                    {
                      j_6 :
                      if(((ATgetType(t_6) == AT_LIST) && ATisEmpty(t_6)))
                        {
                          k_6 :
                          if(match_cons(u_6, sym_cf_1))
                            {
                              v_6 = ATgetArgument(u_6, 0);
                              l_6 :
                              if(match_cons(v_6, sym_opt_1))
                                {
                                  w_6 = ATgetArgument(v_6, 0);
                                  m_6 :
                                  if(match_cons(w_6, sym_layout_0))
                                    {
                                      n_6 :
                                      if(match_cons(x_6, sym_no_attrs_0))
                                        {
                                          ATerm a_7 = NULL;
                                          ATerm b_7 = NULL;
                                          t = not_null(y_6);
                                          {
                                            t = MkLayoutConsList_0(t);
                                            {
                                              b_7 = t;
                                              if(((a_7 != NULL) && (a_7 != b_7)))
                                                _fail(b_7);
                                              else
                                                a_7 = b_7;
                                            }
                                          }
                                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, term_g_7), term_n_7, term_z_6), (ATerm) ATinsert(ATempty, not_null(a_7)));
                                        }
                                      else
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
              else
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
ATerm MkCfConsList_1 (ATerm t, ATerm x_70 (ATerm))
{
  ATerm r_7 = NULL;
  ATerm b_0 (ATerm t)
  {
    ATerm s_7 = NULL;
    ATerm t_7 = NULL,v_7 = NULL;
    s_7 = t;
    {
      if(((r_7 != NULL) && (r_7 != s_7)))
        _fail(s_7);
      else
        r_7 = s_7;
      {
        ATerm e_8;
        e_8 = t;
        {
          ATerm u_7 = NULL;
          t = term_f_8;
          {
            t = x_70(t);
            {
              u_7 = t;
              if(((t_7 != NULL) && (t_7 != u_7)))
                _fail(u_7);
              else
                t_7 = u_7;
            }
          }
        }
        t = e_8;
        {
          ATerm w_7 = NULL;
          t = term_f_8;
          {
            t = x_70(t);
            {
              w_7 = t;
              if(((v_7 != NULL) && (v_7 != w_7)))
                _fail(w_7);
              else
                v_7 = w_7;
            }
          }
          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(t_7))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(v_7))), term_z_6), (ATerm) ATinsert(ATempty, not_null(r_7)));
        }
      }
    }
    return(t);
  }
  t = Cons_2(t, b_0, _id);
  {
    ATerm d_9 (ATerm t)
    {
      ATerm x_7 = NULL,y_7 = NULL,z_7 = NULL,a_8 = NULL,b_8 = NULL,c_8 = NULL,d_8 = NULL;
      x_7 = t;
      o_7 :
      if(((ATgetType(x_7) == AT_LIST) && !(ATisEmpty(x_7))))
        {
          y_7 = ATgetFirst((ATermList) x_7);
          z_7 = (ATerm) ATgetNext((ATermList) x_7);
          p_7 :
          if(((ATgetType(z_7) == AT_LIST) && ATisEmpty(z_7)))
            {
              t = not_null(y_7);
            }
          else
            {
              if(((ATgetType(z_7) == AT_LIST) && !(ATisEmpty(z_7))))
                {
                  a_8 = ATgetFirst((ATermList) z_7);
                  b_8 = (ATerm) ATgetNext((ATermList) z_7);
                  q_7 :
                  if(((ATgetType(b_8) == AT_LIST) && !(ATisEmpty(b_8))))
                    {
                      c_8 = ATgetFirst((ATermList) b_8);
                      d_8 = (ATerm) ATgetNext((ATermList) b_8);
                      {
                        ATerm q_8 = NULL,s_8 = NULL,u_8 = NULL,w_8 = NULL,y_8 = NULL;
                        ATerm g_8;
                        g_8 = t;
                        {
                          ATerm r_8 = NULL;
                          t = term_f_8;
                          {
                            t = x_70(t);
                            {
                              r_8 = t;
                              if(((q_8 != NULL) && (q_8 != r_8)))
                                _fail(r_8);
                              else
                                q_8 = r_8;
                            }
                          }
                        }
                        t = g_8;
                        {
                          ATerm h_8;
                          h_8 = t;
                          {
                            ATerm t_8 = NULL;
                            t = term_f_8;
                            {
                              t = x_70(t);
                              {
                                t_8 = t;
                                if(((s_8 != NULL) && (s_8 != t_8)))
                                  _fail(t_8);
                                else
                                  s_8 = t_8;
                              }
                            }
                          }
                          t = h_8;
                          {
                            ATerm i_8;
                            i_8 = t;
                            {
                              ATerm v_8 = NULL;
                              t = term_f_8;
                              {
                                t = x_70(t);
                                {
                                  v_8 = t;
                                  if(((u_8 != NULL) && (u_8 != v_8)))
                                    _fail(v_8);
                                  else
                                    u_8 = v_8;
                                }
                              }
                            }
                            t = i_8;
                            {
                              ATerm j_8;
                              j_8 = t;
                              {
                                ATerm x_8 = NULL;
                                t = term_f_8;
                                {
                                  t = x_70(t);
                                  {
                                    x_8 = t;
                                    if(((w_8 != NULL) && (w_8 != x_8)))
                                      _fail(x_8);
                                    else
                                      w_8 = x_8;
                                  }
                                }
                              }
                              t = j_8;
                              {
                                ATerm z_8 = NULL;
                                t = term_f_8;
                                {
                                  t = x_70(t);
                                  {
                                    z_8 = t;
                                    if(((y_8 != NULL) && (y_8 != z_8)))
                                      _fail(z_8);
                                    else
                                      y_8 = z_8;
                                  }
                                }
                                {
                                  t = (ATerm) ATinsert(CheckATermList(not_null(d_8)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(s_8)))), term_n_7), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(q_8)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(u_8))), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_l_7))), (ATerm) ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(w_8))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(y_8))), term_z_6), (ATerm) ATinsert(ATempty, not_null(c_8)))), not_null(a_8)), not_null(y_7))));
                                  t = d_9(t);
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
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = d_9(t);
  }
  return(t);
}
ATerm MkCfConsList_2 (ATerm t, ATerm z_70 (ATerm), ATerm a_71 (ATerm))
{
  ATerm g_10 = NULL;
  ATerm c_0 (ATerm t)
  {
    ATerm h_10 = NULL;
    ATerm i_10 = NULL,k_10 = NULL,m_10 = NULL;
    h_10 = t;
    {
      if(((g_10 != NULL) && (g_10 != h_10)))
        _fail(h_10);
      else
        g_10 = h_10;
      {
        ATerm k_8;
        k_8 = t;
        {
          ATerm j_10 = NULL;
          t = term_f_8;
          {
            t = z_70(t);
            {
              j_10 = t;
              if(((i_10 != NULL) && (i_10 != j_10)))
                _fail(j_10);
              else
                i_10 = j_10;
            }
          }
        }
        t = k_8;
        {
          ATerm l_8;
          l_8 = t;
          {
            ATerm l_10 = NULL;
            t = term_f_8;
            {
              t = z_70(t);
              {
                l_10 = t;
                if(((k_10 != NULL) && (k_10 != l_10)))
                  _fail(l_10);
                else
                  k_10 = l_10;
              }
            }
          }
          t = l_8;
          {
            ATerm n_10 = NULL;
            t = term_f_8;
            {
              t = a_71(t);
              {
                n_10 = t;
                if(((m_10 != NULL) && (m_10 != n_10)))
                  _fail(n_10);
                else
                  m_10 = n_10;
              }
            }
            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(i_10))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(k_10), not_null(m_10))), term_z_6), (ATerm) ATinsert(ATempty, not_null(g_10)));
          }
        }
      }
    }
    return(t);
  }
  t = Cons_2(t, c_0, _id);
  {
    ATerm l_12 (ATerm t)
    {
      ATerm o_10 = NULL,p_10 = NULL,q_10 = NULL,r_10 = NULL,s_10 = NULL,t_10 = NULL,u_10 = NULL,v_10 = NULL,w_10 = NULL,x_10 = NULL,y_10 = NULL;
      o_10 = t;
      b_10 :
      if(((ATgetType(o_10) == AT_LIST) && !(ATisEmpty(o_10))))
        {
          p_10 = ATgetFirst((ATermList) o_10);
          q_10 = (ATerm) ATgetNext((ATermList) o_10);
          c_10 :
          if(((ATgetType(q_10) == AT_LIST) && ATisEmpty(q_10)))
            {
              t = not_null(p_10);
            }
          else
            {
              if(((ATgetType(q_10) == AT_LIST) && !(ATisEmpty(q_10))))
                {
                  r_10 = ATgetFirst((ATermList) q_10);
                  s_10 = (ATerm) ATgetNext((ATermList) q_10);
                  d_10 :
                  if(((ATgetType(s_10) == AT_LIST) && !(ATisEmpty(s_10))))
                    {
                      t_10 = ATgetFirst((ATermList) s_10);
                      u_10 = (ATerm) ATgetNext((ATermList) s_10);
                      e_10 :
                      if(((ATgetType(u_10) == AT_LIST) && !(ATisEmpty(u_10))))
                        {
                          v_10 = ATgetFirst((ATermList) u_10);
                          w_10 = (ATerm) ATgetNext((ATermList) u_10);
                          f_10 :
                          if(((ATgetType(w_10) == AT_LIST) && !(ATisEmpty(w_10))))
                            {
                              x_10 = ATgetFirst((ATermList) w_10);
                              y_10 = (ATerm) ATgetNext((ATermList) w_10);
                              {
                                ATerm n_11 = NULL,p_11 = NULL,r_11 = NULL,t_11 = NULL,v_11 = NULL,x_11 = NULL,z_11 = NULL,b_12 = NULL,d_12 = NULL,f_12 = NULL;
                                ATerm m_8;
                                m_8 = t;
                                {
                                  ATerm o_11 = NULL;
                                  t = term_f_8;
                                  {
                                    t = z_70(t);
                                    {
                                      o_11 = t;
                                      if(((n_11 != NULL) && (n_11 != o_11)))
                                        _fail(o_11);
                                      else
                                        n_11 = o_11;
                                    }
                                  }
                                }
                                t = m_8;
                                {
                                  ATerm n_8;
                                  n_8 = t;
                                  {
                                    ATerm q_11 = NULL;
                                    t = term_f_8;
                                    {
                                      t = a_71(t);
                                      {
                                        q_11 = t;
                                        if(((p_11 != NULL) && (p_11 != q_11)))
                                          _fail(q_11);
                                        else
                                          p_11 = q_11;
                                      }
                                    }
                                  }
                                  t = n_8;
                                  {
                                    ATerm o_8;
                                    o_8 = t;
                                    {
                                      ATerm s_11 = NULL;
                                      t = term_f_8;
                                      {
                                        t = a_71(t);
                                        {
                                          s_11 = t;
                                          if(((r_11 != NULL) && (r_11 != s_11)))
                                            _fail(s_11);
                                          else
                                            r_11 = s_11;
                                        }
                                      }
                                    }
                                    t = o_8;
                                    {
                                      ATerm p_8;
                                      p_8 = t;
                                      {
                                        ATerm u_11 = NULL;
                                        t = term_f_8;
                                        {
                                          t = z_70(t);
                                          {
                                            u_11 = t;
                                            if(((t_11 != NULL) && (t_11 != u_11)))
                                              _fail(u_11);
                                            else
                                              t_11 = u_11;
                                          }
                                        }
                                      }
                                      t = p_8;
                                      {
                                        ATerm a_9;
                                        a_9 = t;
                                        {
                                          ATerm w_11 = NULL;
                                          t = term_f_8;
                                          {
                                            t = a_71(t);
                                            {
                                              w_11 = t;
                                              if(((v_11 != NULL) && (v_11 != w_11)))
                                                _fail(w_11);
                                              else
                                                v_11 = w_11;
                                            }
                                          }
                                        }
                                        t = a_9;
                                        {
                                          ATerm b_9;
                                          b_9 = t;
                                          {
                                            ATerm y_11 = NULL;
                                            t = term_f_8;
                                            {
                                              t = z_70(t);
                                              {
                                                y_11 = t;
                                                if(((x_11 != NULL) && (x_11 != y_11)))
                                                  _fail(y_11);
                                                else
                                                  x_11 = y_11;
                                              }
                                            }
                                          }
                                          t = b_9;
                                          {
                                            ATerm c_9;
                                            c_9 = t;
                                            {
                                              ATerm a_12 = NULL;
                                              t = term_f_8;
                                              {
                                                t = a_71(t);
                                                {
                                                  a_12 = t;
                                                  if(((z_11 != NULL) && (z_11 != a_12)))
                                                    _fail(a_12);
                                                  else
                                                    z_11 = a_12;
                                                }
                                              }
                                            }
                                            t = c_9;
                                            {
                                              ATerm e_9;
                                              e_9 = t;
                                              {
                                                ATerm c_12 = NULL;
                                                t = term_f_8;
                                                {
                                                  t = z_70(t);
                                                  {
                                                    c_12 = t;
                                                    if(((b_12 != NULL) && (b_12 != c_12)))
                                                      _fail(c_12);
                                                    else
                                                      b_12 = c_12;
                                                  }
                                                }
                                              }
                                              t = e_9;
                                              {
                                                ATerm f_9;
                                                f_9 = t;
                                                {
                                                  ATerm e_12 = NULL;
                                                  t = term_f_8;
                                                  {
                                                    t = z_70(t);
                                                    {
                                                      e_12 = t;
                                                      if(((d_12 != NULL) && (d_12 != e_12)))
                                                        _fail(e_12);
                                                      else
                                                        d_12 = e_12;
                                                    }
                                                  }
                                                }
                                                t = f_9;
                                                {
                                                  ATerm g_12 = NULL;
                                                  t = term_f_8;
                                                  {
                                                    t = a_71(t);
                                                    {
                                                      g_12 = t;
                                                      if(((f_12 != NULL) && (f_12 != g_12)))
                                                        _fail(g_12);
                                                      else
                                                        f_12 = g_12;
                                                    }
                                                  }
                                                  {
                                                    t = (ATerm) ATinsert(CheckATermList(not_null(y_10)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(t_11), not_null(v_11)))), term_n_7), not_null(r_11)), term_n_7), (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(n_11), not_null(p_11)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(x_11), not_null(z_11))), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_l_7))), (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, not_null(b_12))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(d_12), not_null(f_12))), term_z_6), (ATerm) ATinsert(ATempty, not_null(x_10)))), not_null(v_10)), not_null(t_10)), not_null(r_10)), not_null(p_10))));
                                                    t = l_12(t);
                                                  }
                                                }
                                              }
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
                      else
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
      return(t);
    }
    t = l_12(t);
  }
  return(t);
}
ATerm MkLexConsList_1 (ATerm t, ATerm c_71 (ATerm))
{
  ATerm q_14 (ATerm t)
  {
    ATerm l_13 = NULL,m_13 = NULL,n_13 = NULL,o_13 = NULL,p_13 = NULL;
    l_13 = t;
    j_13 :
    if(((ATgetType(l_13) == AT_LIST) && !(ATisEmpty(l_13))))
      {
        m_13 = ATgetFirst((ATermList) l_13);
        n_13 = (ATerm) ATgetNext((ATermList) l_13);
        k_13 :
        if(((ATgetType(n_13) == AT_LIST) && ATisEmpty(n_13)))
          {
            {
              ATerm u_13 = NULL,w_13 = NULL;
              ATerm g_9;
              g_9 = t;
              {
                ATerm v_13 = NULL;
                t = term_f_8;
                {
                  t = c_71(t);
                  {
                    v_13 = t;
                    if(((u_13 != NULL) && (u_13 != v_13)))
                      _fail(v_13);
                    else
                      u_13 = v_13;
                  }
                }
              }
              t = g_9;
              {
                ATerm x_13 = NULL;
                t = term_f_8;
                {
                  t = c_71(t);
                  {
                    x_13 = t;
                    if(((w_13 != NULL) && (w_13 != x_13)))
                      _fail(x_13);
                    else
                      w_13 = x_13;
                  }
                }
                t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(u_13))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(w_13))), term_z_6), (ATerm) ATinsert(ATempty, not_null(m_13)));
              }
            }
          }
        else
          {
            if(((ATgetType(n_13) == AT_LIST) && !(ATisEmpty(n_13))))
              {
                o_13 = ATgetFirst((ATermList) n_13);
                p_13 = (ATerm) ATgetNext((ATermList) n_13);
                {
                  ATerm c_14 = NULL,e_14 = NULL,g_14 = NULL,i_14 = NULL,k_14 = NULL,m_14 = NULL,o_14 = NULL;
                  ATerm h_9;
                  h_9 = t;
                  {
                    ATerm d_14 = NULL;
                    t = term_f_8;
                    {
                      t = c_71(t);
                      {
                        d_14 = t;
                        if(((c_14 != NULL) && (c_14 != d_14)))
                          _fail(d_14);
                        else
                          c_14 = d_14;
                      }
                    }
                  }
                  t = h_9;
                  {
                    ATerm i_9;
                    i_9 = t;
                    {
                      ATerm f_14 = NULL;
                      t = term_f_8;
                      {
                        t = c_71(t);
                        {
                          f_14 = t;
                          if(((e_14 != NULL) && (e_14 != f_14)))
                            _fail(f_14);
                          else
                            e_14 = f_14;
                        }
                      }
                    }
                    t = i_9;
                    {
                      ATerm j_9;
                      j_9 = t;
                      {
                        ATerm h_14 = NULL;
                        t = term_f_8;
                        {
                          t = c_71(t);
                          {
                            h_14 = t;
                            if(((g_14 != NULL) && (g_14 != h_14)))
                              _fail(h_14);
                            else
                              g_14 = h_14;
                          }
                        }
                      }
                      t = j_9;
                      {
                        ATerm k_9;
                        k_9 = t;
                        {
                          ATerm j_14 = NULL;
                          t = term_f_8;
                          {
                            t = c_71(t);
                            {
                              j_14 = t;
                              if(((i_14 != NULL) && (i_14 != j_14)))
                                _fail(j_14);
                              else
                                i_14 = j_14;
                            }
                          }
                        }
                        t = k_9;
                        {
                          ATerm l_9;
                          l_9 = t;
                          {
                            ATerm l_14 = NULL;
                            t = term_f_8;
                            {
                              t = c_71(t);
                              {
                                l_14 = t;
                                if(((k_14 != NULL) && (k_14 != l_14)))
                                  _fail(l_14);
                                else
                                  k_14 = l_14;
                              }
                            }
                          }
                          t = l_9;
                          {
                            ATerm m_9;
                            m_9 = t;
                            {
                              ATerm n_14 = NULL;
                              t = term_f_8;
                              {
                                t = c_71(t);
                                {
                                  n_14 = t;
                                  if(((m_14 != NULL) && (m_14 != n_14)))
                                    _fail(n_14);
                                  else
                                    m_14 = n_14;
                                }
                              }
                            }
                            t = m_9;
                            {
                              ATerm p_14 = NULL;
                              t = term_f_8;
                              {
                                t = c_71(t);
                                {
                                  p_14 = t;
                                  if(((o_14 != NULL) && (o_14 != p_14)))
                                    _fail(p_14);
                                  else
                                    o_14 = p_14;
                                }
                              }
                              {
                                t = (ATerm) ATinsert(CheckATermList(not_null(p_13)), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(e_14)))), (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(c_14)))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(g_14))), (ATerm) ATmakeAppl(sym_attrs_1, (ATerm) ATinsert(ATempty, term_l_7))), (ATerm) ATinsert(ATinsert(ATempty, (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(m_14))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(o_14))), term_z_6), (ATerm) ATinsert(ATempty, not_null(o_13)))), (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, not_null(i_14))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(k_14))), term_z_6), (ATerm) ATinsert(ATempty, not_null(m_13))))));
                                t = q_14(t);
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
    return(t);
  }
  t = q_14(t);
  return(t);
}
ATerm unflatten_list_0 (ATerm t)
{
  ATerm y_15 = NULL,z_15 = NULL,a_16 = NULL,b_16 = NULL,c_16 = NULL,d_16 = NULL,e_16 = NULL,f_16 = NULL,g_16 = NULL;
  b_16 = t;
  r_15 :
  if(match_cons(b_16, sym_appl_2))
    {
      c_16 = ATgetArgument(b_16, 0);
      g_16 = ATgetArgument(b_16, 1);
      s_15 :
      if(match_cons(c_16, sym_list_1))
        {
          d_16 = ATgetArgument(c_16, 0);
          t_15 :
          if(match_cons(d_16, sym_iter_1))
            {
              e_16 = ATgetArgument(d_16, 0);
              {
                ATerm j_16 = NULL;
                ATerm k_16 = NULL;
                t = not_null(g_16);
                {
                  ATerm e_0 (ATerm t)
                  {
                    t = not_null(e_16);
                    return(t);
                  }
                  t = MkLexConsList_1(t, e_0);
                  {
                    k_16 = t;
                    if(((j_16 != NULL) && (j_16 != k_16)))
                      _fail(k_16);
                    else
                      j_16 = k_16;
                  }
                }
                t = not_null(j_16);
              }
            }
          else
            {
              if(match_cons(d_16, sym_iter_star_1))
                {
                  e_16 = ATgetArgument(d_16, 0);
                  u_15 :
                  if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
                    {
                      z_15 = ATgetFirst((ATermList) g_16);
                      a_16 = (ATerm) ATgetNext((ATermList) g_16);
                      {
                        ATerm o_16 = NULL;
                        ATerm p_16 = NULL;
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(e_16))), (ATerm) ATinsert(CheckATermList(not_null(a_16)), not_null(z_15)));
                        {
                          t = unflatten_list_0(t);
                          {
                            p_16 = t;
                            if(((o_16 != NULL) && (o_16 != p_16)))
                              _fail(p_16);
                            else
                              o_16 = p_16;
                          }
                        }
                        t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(e_16)))), (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(e_16))), term_z_6), (ATerm) ATinsert(ATempty, not_null(o_16)));
                      }
                    }
                  else
                    {
                      if(((ATgetType(g_16) == AT_LIST) && ATisEmpty(g_16)))
                        {
                          t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_lex_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(e_16))), term_z_6), (ATerm) ATempty);
                        }
                      else
                        {
                          _fail(t);
                        }
                    }
                }
              else
                {
                  if(match_cons(d_16, sym_cf_1))
                    {
                      e_16 = ATgetArgument(d_16, 0);
                      v_15 :
                      if(match_cons(e_16, sym_iter_sep_2))
                        {
                          f_16 = ATgetArgument(e_16, 0);
                          y_15 = ATgetArgument(e_16, 1);
                          {
                            ATerm u_16 = NULL;
                            ATerm v_16 = NULL;
                            t = not_null(g_16);
                            {
                              ATerm f_0 (ATerm t)
                              {
                                t = not_null(f_16);
                                return(t);
                              }
                              ATerm p_0 (ATerm t)
                              {
                                t = not_null(y_15);
                                return(t);
                              }
                              t = MkCfConsList_2(t, f_0, p_0);
                              {
                                v_16 = t;
                                if(((u_16 != NULL) && (u_16 != v_16)))
                                  _fail(v_16);
                                else
                                  u_16 = v_16;
                              }
                            }
                            t = not_null(u_16);
                          }
                        }
                      else
                        {
                          if(match_cons(e_16, sym_iter_star_sep_2))
                            {
                              f_16 = ATgetArgument(e_16, 0);
                              y_15 = ATgetArgument(e_16, 1);
                              w_15 :
                              if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
                                {
                                  z_15 = ATgetFirst((ATermList) g_16);
                                  a_16 = (ATerm) ATgetNext((ATermList) g_16);
                                  {
                                    ATerm a_17 = NULL;
                                    ATerm b_17 = NULL;
                                    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(f_16), not_null(y_15)))), (ATerm) ATinsert(CheckATermList(not_null(a_16)), not_null(z_15)));
                                    {
                                      t = unflatten_list_0(t);
                                      {
                                        b_17 = t;
                                        if(((a_17 != NULL) && (a_17 != b_17)))
                                          _fail(b_17);
                                        else
                                          a_17 = b_17;
                                      }
                                    }
                                    t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_sep_2, not_null(f_16), not_null(y_15)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(f_16), not_null(y_15))), term_z_6), (ATerm) ATinsert(ATempty, not_null(a_17)));
                                  }
                                }
                              else
                                {
                                  if(((ATgetType(g_16) == AT_LIST) && ATisEmpty(g_16)))
                                    {
                                      t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_sep_2, not_null(f_16), not_null(y_15))), term_z_6), (ATerm) ATempty);
                                    }
                                  else
                                    {
                                      _fail(t);
                                    }
                                }
                            }
                          else
                            {
                              if(match_cons(e_16, sym_iter_1))
                                {
                                  f_16 = ATgetArgument(e_16, 0);
                                  {
                                    ATerm g_17 = NULL;
                                    ATerm h_17 = NULL;
                                    t = not_null(g_16);
                                    {
                                      ATerm q_0 (ATerm t)
                                      {
                                        t = not_null(f_16);
                                        return(t);
                                      }
                                      t = MkCfConsList_1(t, q_0);
                                      {
                                        h_17 = t;
                                        if(((g_17 != NULL) && (g_17 != h_17)))
                                          _fail(h_17);
                                        else
                                          g_17 = h_17;
                                      }
                                    }
                                    t = not_null(g_17);
                                  }
                                }
                              else
                                {
                                  if(match_cons(e_16, sym_iter_star_1))
                                    {
                                      f_16 = ATgetArgument(e_16, 0);
                                      x_15 :
                                      if(((ATgetType(g_16) == AT_LIST) && !(ATisEmpty(g_16))))
                                        {
                                          z_15 = ATgetFirst((ATermList) g_16);
                                          a_16 = (ATerm) ATgetNext((ATermList) g_16);
                                          {
                                            ATerm l_17 = NULL;
                                            ATerm m_17 = NULL;
                                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_list_1, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(f_16)))), (ATerm) ATinsert(CheckATermList(not_null(a_16)), not_null(z_15)));
                                            {
                                              t = unflatten_list_0(t);
                                              {
                                                m_17 = t;
                                                if(((l_17 != NULL) && (l_17 != m_17)))
                                                  _fail(m_17);
                                                else
                                                  l_17 = m_17;
                                              }
                                            }
                                            t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATinsert(ATempty, (ATerm) ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_1, not_null(f_16)))), (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(f_16))), term_z_6), (ATerm) ATinsert(ATempty, not_null(l_17)));
                                          }
                                        }
                                      else
                                        {
                                          if(((ATgetType(g_16) == AT_LIST) && ATisEmpty(g_16)))
                                            {
                                              t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, (ATerm)ATempty, (ATerm)ATmakeAppl(sym_cf_1, (ATerm) ATmakeAppl(sym_iter_star_1, not_null(f_16))), term_z_6), (ATerm) ATempty);
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
            }
        }
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
ATerm list_1 (ATerm t, ATerm o_0 (ATerm))
{
  ATerm n_9 = t;
  int o_9 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm s_18 (ATerm t)
      {
        ATerm p_9 = t;
        int q_9 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = Nil_0(t);
            LocalPopChoice(q_9);
          }
        else
          {
            t = p_9;
            t = Cons_2(t, o_0, s_18);
          }
        return(t);
      }
      t = s_18(t);
      LocalPopChoice(o_9);
    }
  else
    {
      t = n_9;
      {
        ATerm i_18 = NULL,j_18 = NULL;
        i_18 = t;
        h_18 :
        if(match_cons(i_18, sym_list_1))
          {
            j_18 = ATgetArgument(i_18, 0);
            {
              ATerm m_18 = NULL,o_18 = NULL;
              ATerm n_18 = NULL;
              t = SSLgetAnnotations(not_null(i_18));
              {
                n_18 = t;
                if(((m_18 != NULL) && (m_18 != n_18)))
                  _fail(n_18);
                else
                  m_18 = n_18;
              }
              {
                t = not_null(j_18);
                {
                  ATerm q_18 = NULL;
                  t = o_0(t);
                  {
                    o_18 = t;
                    {
                      ATerm r_18 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_list_1, not_null(o_18)), not_null(m_18));
                      {
                        r_18 = t;
                        if(((q_18 != NULL) && (q_18 != r_18)))
                          _fail(r_18);
                        else
                          q_18 = r_18;
                      }
                      t = not_null(q_18);
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
  return(t);
}
ATerm list_some_1 (ATerm t, ATerm a_79 (ATerm))
{
  ATerm x_18 (ATerm t)
  {
    ATerm r_9 = t;
    int s_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, a_79, _id);
        LocalPopChoice(s_9);
        {
          ATerm r_0 (ATerm t)
          {
            ATerm s_0 (ATerm t)
            {
              ATerm t_9 = t;
              int u_9 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = a_79(t);
                  LocalPopChoice(u_9);
                }
              else
                {
                  t = t_9;
                  {
                  }
                }
              return(t);
            }
            t = list_1(t, s_0);
            return(t);
          }
          t = Cons_2(t, _id, r_0);
        }
      }
    else
      {
        t = r_9;
        t = Cons_2(t, _id, x_18);
      }
    return(t);
  }
  t = x_18(t);
  return(t);
}
ATerm unflatten_literal_0 (ATerm t)
{
  ATerm g_19 = NULL,h_19 = NULL,i_19 = NULL;
  g_19 = t;
  f_19 :
  if(match_cons(g_19, sym_appl_2))
    {
      h_19 = ATgetArgument(g_19, 0);
      i_19 = ATgetArgument(g_19, 1);
      {
        ATerm l_19 = NULL;
        ATerm w_19 = NULL;
        t = not_null(i_19);
        {
          ATerm t_0 (ATerm t)
          {
            ATerm m_19 = NULL,n_19 = NULL;
            m_19 = t;
            d_19 :
            if(match_cons(m_19, sym_lit_1))
              {
                n_19 = ATgetArgument(m_19, 0);
                {
                  ATerm p_19 = NULL,q_19 = NULL;
                  ATerm r_19 = NULL;
                  t = not_null(n_19);
                  {
                    ATerm u_19 = NULL;
                    t = explode_string_0(t);
                    {
                      r_19 = t;
                      {
                        if(((p_19 != NULL) && (p_19 != r_19)))
                          _fail(r_19);
                        else
                          p_19 = r_19;
                        {
                          ATerm u_0 (ATerm t)
                          {
                            ATerm s_19 = NULL;
                            s_19 = t;
                            t = (ATerm) ATmakeAppl(sym_char_class_1, (ATerm) ATinsert(ATempty, not_null(s_19)));
                            return(t);
                          }
                          t = map_1(t, u_0);
                          {
                            u_19 = t;
                            if(((q_19 != NULL) && (q_19 != u_19)))
                              _fail(u_19);
                            else
                              q_19 = u_19;
                          }
                        }
                      }
                    }
                  }
                  t = (ATerm) ATmakeAppl(sym_appl_2, (ATerm)ATmakeAppl(sym_prod_3, not_null(q_19), (ATerm)ATmakeAppl(sym_lit_1, not_null(n_19)), term_z_6), not_null(p_19));
                }
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = list_some_1(t, t_0);
          {
            w_19 = t;
            if(((l_19 != NULL) && (l_19 != w_19)))
              _fail(w_19);
            else
              l_19 = w_19;
          }
        }
        t = (ATerm) ATmakeAppl(sym_appl_2, not_null(h_19), not_null(l_19));
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm bottomup_1 (ATerm t, ATerm u_72 (ATerm))
{
  ATerm v_0 (ATerm t)
  {
    t = bottomup_1(t, u_72);
    return(t);
  }
  t = _all(t, v_0);
  t = u_72(t);
  return(t);
}
ATerm ExplodeAsFix2ME_0 (ATerm t)
{
  ATerm w_0 (ATerm t)
  {
    ATerm v_9 = t;
    int w_9 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = unflatten_literal_0(t);
        LocalPopChoice(w_9);
      }
    else
      {
        t = v_9;
        {
        }
      }
    {
      ATerm x_9 = t;
      int y_9 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = unflatten_list_0(t);
          LocalPopChoice(y_9);
        }
      else
        {
          t = x_9;
          {
          }
        }
      {
        ATerm z_9 = t;
        int a_10 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = unflatten_layout_0(t);
            LocalPopChoice(a_10);
          }
        else
          {
            t = z_9;
            {
            }
          }
        {
          ATerm z_10 = t;
          int a_11 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = unflatten_lexical_0(t);
              LocalPopChoice(a_11);
            }
          else
            {
              t = z_10;
              {
              }
            }
        }
      }
    }
    return(t);
  }
  t = bottomup_1(t, w_0);
  return(t);
}
ATerm _2 (ATerm t, ATerm q_55 (ATerm), ATerm r_55 (ATerm))
{
  ATerm j_20 = NULL,k_20 = NULL,l_20 = NULL;
  j_20 = t;
  i_20 :
  if(match_cons(j_20, sym__2))
    {
      k_20 = ATgetArgument(j_20, 0);
      l_20 = ATgetArgument(j_20, 1);
      {
        ATerm p_20 = NULL,r_20 = NULL;
        ATerm q_20 = NULL;
        t = SSLgetAnnotations(not_null(j_20));
        {
          q_20 = t;
          if(((p_20 != NULL) && (p_20 != q_20)))
            _fail(q_20);
          else
            p_20 = q_20;
        }
        {
          t = not_null(k_20);
          {
            ATerm t_20 = NULL;
            t = q_55(t);
            {
              r_20 = t;
              {
                t = not_null(l_20);
                {
                  ATerm v_20 = NULL;
                  t = r_55(t);
                  {
                    t_20 = t;
                    {
                      ATerm w_20 = NULL;
                      t = SSLsetAnnotations((ATerm)ATmakeAppl(sym__2, not_null(r_20), not_null(t_20)), not_null(p_20));
                      {
                        w_20 = t;
                        if(((v_20 != NULL) && (v_20 != w_20)))
                          _fail(w_20);
                        else
                          v_20 = w_20;
                      }
                      t = not_null(v_20);
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
  ATerm e_21 = NULL;
  ATerm b_11;
  b_11 = t;
  {
    ATerm x_0 (ATerm t)
    {
      ATerm f_21 = NULL,g_21 = NULL;
      f_21 = t;
      d_21 :
      if(match_cons(f_21, sym_Program_1))
        {
          g_21 = ATgetArgument(f_21, 0);
          if(((e_21 != NULL) && (e_21 != g_21)))
            _fail(g_21);
          else
            e_21 = g_21;
        }
      else
        {
          _fail(t);
        }
      return(t);
    }
    t = fetch_1(t, x_0);
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_11, (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_e_11), not_null(e_21)), term_d_11));
      {
        t = printnl_0(t);
        {
          t = term_f_11;
          t = exit_0(t);
        }
      }
    }
  }
  t = b_11;
  return(t);
}
ATerm printnl_0 (ATerm t)
{
  ATerm k_21 = NULL,l_21 = NULL,m_21 = NULL;
  k_21 = t;
  j_21 :
  if(match_cons(k_21, sym__2))
    {
      l_21 = ATgetArgument(k_21, 0);
      m_21 = ATgetArgument(k_21, 1);
      {
        ATerm g_11;
        g_11 = t;
        t = SSL_printnl(not_null(l_21), not_null(m_21));
        t = g_11;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm implode_string_0 (ATerm t)
{
  ATerm r_21 = NULL;
  r_21 = t;
  t = SSL_implode_string(not_null(r_21));
  return(t);
}
ATerm concat_0 (ATerm t)
{
  ATerm h_11 = t;
  int i_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      LocalPopChoice(i_11);
    }
  else
    {
      t = h_11;
      {
        ATerm w_21 = NULL,x_21 = NULL,y_21 = NULL;
        w_21 = t;
        v_21 :
        if(((ATgetType(w_21) == AT_LIST) && !(ATisEmpty(w_21))))
          {
            x_21 = ATgetFirst((ATermList) w_21);
            y_21 = (ATerm) ATgetNext((ATermList) w_21);
            {
              t = not_null(x_21);
              {
                ATerm y_0 (ATerm t)
                {
                  t = not_null(y_21);
                  t = concat_0(t);
                  return(t);
                }
                t = at_end_1(t, y_0);
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
ATerm conc_more_lists_0 (ATerm t)
{
  ATerm i_22 = NULL;
  ATerm k_22 = NULL;
  i_22 = t;
  {
    ATerm l_22 = NULL;
    ATerm n_22 = NULL,o_22 = NULL,p_22 = NULL;
    t = not_null(i_22);
    {
      l_22 = t;
      {
        t = SSL_explode_term(not_null(l_22));
        {
          n_22 = t;
          g_22 :
          if(match_cons(n_22, sym__2))
            {
              o_22 = ATgetArgument(n_22, 0);
              p_22 = ATgetArgument(n_22, 1);
              h_22 :
              if(match_string(o_22, ""))
                {
                  if(((k_22 != NULL) && (k_22 != p_22)))
                    _fail(p_22);
                  else
                    k_22 = p_22;
                }
              else
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
      t = not_null(k_22);
      t = concat_0(t);
    }
  }
  return(t);
}
ATerm at_end_1 (ATerm t, ATerm l_79 (ATerm))
{
  ATerm t_22 (ATerm t)
  {
    ATerm j_11 = t;
    int k_11 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, _id, t_22);
        LocalPopChoice(k_11);
      }
    else
      {
        t = j_11;
        {
          t = Nil_0(t);
          t = l_79(t);
        }
      }
    return(t);
  }
  t = t_22(t);
  return(t);
}
ATerm conc_two_lists_0 (ATerm t)
{
  ATerm w_22 = NULL,x_22 = NULL,y_22 = NULL;
  w_22 = t;
  v_22 :
  if(match_cons(w_22, sym__2))
    {
      x_22 = ATgetArgument(w_22, 0);
      y_22 = ATgetArgument(w_22, 1);
      {
        t = not_null(x_22);
        {
          ATerm z_0 (ATerm t)
          {
            t = not_null(y_22);
            return(t);
          }
          t = at_end_1(t, z_0);
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
  ATerm l_11 = t;
  int m_11 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = conc_two_lists_0(t);
      LocalPopChoice(m_11);
    }
  else
    {
      t = l_11;
      t = conc_more_lists_0(t);
    }
  return(t);
}
ATerm explode_string_0 (ATerm t)
{
  ATerm d_23 = NULL;
  d_23 = t;
  t = SSL_explode_string(not_null(d_23));
  return(t);
}
ATerm conc_strings_0 (ATerm t)
{
  t = _2(t, explode_string_0, explode_string_0);
  {
    ATerm h_12 = t;
    int i_12 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = conc_two_lists_0(t);
        LocalPopChoice(i_12);
      }
    else
      {
        t = h_12;
        t = conc_more_lists_0(t);
      }
    t = implode_string_0(t);
  }
  return(t);
}
ATerm debug_1 (ATerm t, ATerm u_89 (ATerm))
{
  ATerm j_12;
  j_12 = t;
  {
    ATerm i_23 = NULL,k_23 = NULL;
    ATerm k_12;
    k_12 = t;
    {
      ATerm j_23 = NULL;
      t = u_89(t);
      {
        j_23 = t;
        if(((i_23 != NULL) && (i_23 != j_23)))
          _fail(j_23);
        else
          i_23 = j_23;
      }
    }
    t = k_12;
    {
      ATerm l_23 = NULL;
      l_23 = t;
      if(((k_23 != NULL) && (k_23 != l_23)))
        _fail(l_23);
      else
        k_23 = l_23;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_11, (ATerm) ATinsert(ATinsert(ATempty, not_null(k_23)), not_null(i_23)));
        t = printnl_0(t);
      }
    }
  }
  t = j_12;
  return(t);
}
ATerm is_string_0 (ATerm t)
{
  ATerm f_26 = NULL;
  f_26 = t;
  t = SSL_is_string(not_null(f_26));
  return(t);
}
ATerm eval_config_0 (ATerm t)
{
  ATerm m_12 = t;
  int n_12 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = is_string_0(t);
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
            ATerm a_1 (ATerm t)
            {
              ATerm q_12 = t;
              int r_12 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = eval_config_0(t);
                  LocalPopChoice(r_12);
                }
              else
                {
                  t = q_12;
                  {
                  }
                }
              return(t);
            }
            t = map_1(t, a_1);
            LocalPopChoice(p_12);
          }
        else
          {
            t = o_12;
            {
              ATerm o_26 = NULL,p_26 = NULL,q_26 = NULL;
              o_26 = t;
              n_26 :
              if(match_cons(o_26, sym_Path_1))
                {
                  p_26 = ATgetArgument(o_26, 0);
                  t = not_null(p_26);
                }
              else
                {
                  if(match_cons(o_26, sym_Var_1))
                    {
                      p_26 = ATgetArgument(o_26, 0);
                      {
                        t = not_null(p_26);
                        {
                          ATerm s_12 = t;
                          int t_12 = stack_ptr;
                          if((PushChoice() == 0))
                            {
                              t = get_config_0(t);
                              LocalPopChoice(t_12);
                            }
                          else
                            {
                              t = s_12;
                              {
                                ATerm b_1 (ATerm t)
                                {
                                  t = term_u_12;
                                  return(t);
                                }
                                t = debug_1(t, b_1);
                                _fail(t);
                              }
                            }
                        }
                      }
                    }
                  else
                    {
                      if(match_cons(o_26, sym_Prefix_2))
                        {
                          p_26 = ATgetArgument(o_26, 0);
                          q_26 = ATgetArgument(o_26, 1);
                          {
                            ATerm v_26 = NULL,x_26 = NULL;
                            ATerm v_12;
                            v_12 = t;
                            {
                              ATerm w_26 = NULL;
                              t = not_null(p_26);
                              {
                                t = eval_config_0(t);
                                {
                                  w_26 = t;
                                  if(((v_26 != NULL) && (v_26 != w_26)))
                                    _fail(w_26);
                                  else
                                    v_26 = w_26;
                                }
                              }
                            }
                            t = v_12;
                            {
                              ATerm y_26 = NULL;
                              t = not_null(q_26);
                              {
                                t = eval_config_0(t);
                                {
                                  y_26 = t;
                                  if(((x_26 != NULL) && (x_26 != y_26)))
                                    _fail(y_26);
                                  else
                                    x_26 = y_26;
                                }
                              }
                              {
                                t = (ATerm) ATmakeAppl(sym__2, not_null(v_26), not_null(x_26));
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
  ATerm g_27 = NULL;
  g_27 = t;
  {
    t = (ATerm) ATmakeAppl(sym__2, term_w_12, not_null(g_27));
    {
      t = table_get_0(t);
      {
        ATerm x_12 = t;
        int y_12 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = eval_config_0(t);
            {
              ATerm z_12;
              z_12 = t;
              {
                ATerm i_27 = NULL;
                ATerm j_27 = NULL;
                j_27 = t;
                if(((i_27 != NULL) && (i_27 != j_27)))
                  _fail(j_27);
                else
                  i_27 = j_27;
                {
                  t = (ATerm) ATmakeAppl(sym__3, term_w_12, not_null(g_27), not_null(i_27));
                  t = table_put_0(t);
                }
              }
              t = z_12;
            }
            LocalPopChoice(y_12);
          }
        else
          {
            t = x_12;
            {
            }
          }
      }
    }
  }
  return(t);
}
ATerm if_verbose2_1 (ATerm t, ATerm r_92 (ATerm))
{
  ATerm a_13 = t;
  int b_13 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm c_13;
      c_13 = t;
      {
        ATerm s_27 = NULL;
        ATerm t_27 = NULL;
        t = term_d_13;
        {
          t = get_config_0(t);
          {
            t_27 = t;
            if(((s_27 != NULL) && (s_27 != t_27)))
              _fail(t_27);
            else
              s_27 = t_27;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(s_27), term_e_13);
          t = geq_0(t);
        }
      }
      t = c_13;
      t = r_92(t);
      LocalPopChoice(b_13);
    }
  else
    {
      t = a_13;
      {
      }
    }
  return(t);
}
ATerm WriteToTextFile_0 (ATerm t)
{
  ATerm x_27 = NULL,y_27 = NULL,z_27 = NULL;
  x_27 = t;
  w_27 :
  if(match_cons(x_27, sym__2))
    {
      y_27 = ATgetArgument(x_27, 0);
      z_27 = ATgetArgument(x_27, 1);
      t = SSL_WriteToTextFile(not_null(y_27), not_null(z_27));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm WriteToBinaryFile_0 (ATerm t)
{
  ATerm i_28 = NULL,j_28 = NULL,k_28 = NULL;
  i_28 = t;
  h_28 :
  if(match_cons(i_28, sym__2))
    {
      j_28 = ATgetArgument(i_28, 0);
      k_28 = ATgetArgument(i_28, 1);
      t = SSL_WriteToBinaryFile(not_null(j_28), not_null(k_28));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm output_file_0 (ATerm t)
{
  ATerm s_28 = NULL;
  ATerm f_13;
  f_13 = t;
  {
    ATerm c_1 (ATerm t)
    {
      ATerm g_13 = t;
      int h_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm d_1 (ATerm t)
          {
            ATerm t_28 = NULL,u_28 = NULL;
            t_28 = t;
            p_28 :
            if(match_cons(t_28, sym_Output_1))
              {
                u_28 = ATgetArgument(t_28, 0);
                if(((s_28 != NULL) && (s_28 != u_28)))
                  _fail(u_28);
                else
                  s_28 = u_28;
              }
            else
              {
                _fail(t);
              }
            return(t);
          }
          t = fetch_1(t, d_1);
          LocalPopChoice(h_13);
        }
      else
        {
          t = g_13;
          {
            ATerm v_28 = NULL;
            t = term_i_13;
            {
              v_28 = t;
              if(((s_28 != NULL) && (s_28 != v_28)))
                _fail(v_28);
              else
                s_28 = v_28;
            }
          }
        }
      return(t);
    }
    t = _2(t, c_1, _id);
  }
  t = f_13;
  {
    ATerm e_1 (ATerm t)
    {
      ATerm f_1 (ATerm t)
      {
        t = not_null(s_28);
        return(t);
      }
      t = split_2(t, f_1, _id);
      return(t);
    }
    t = _2(t, _id, e_1);
    {
      ATerm q_13 = t;
      int r_13 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm g_1 (ATerm t)
          {
            ATerm h_1 (ATerm t)
            {
              ATerm w_28 = NULL;
              w_28 = t;
              r_28 :
              if(!(match_cons(w_28, sym_Binary_0)))
                {
                  _fail(t);
                }
              return(t);
            }
            t = fetch_1(t, h_1);
            return(t);
          }
          t = _2(t, g_1, WriteToBinaryFile_0);
          LocalPopChoice(r_13);
        }
      else
        {
          t = q_13;
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
ATerm apply_strategy_1 (ATerm t, ATerm y_90 (ATerm))
{
  ATerm c_29 = NULL,e_29 = NULL,f_29 = NULL,g_29 = NULL;
  ATerm s_13;
  s_13 = t;
  t = dtime_0(t);
  t = s_13;
  {
    t = y_90(t);
    {
      ATerm t_13;
      t_13 = t;
      {
        ATerm d_29 = NULL;
        t = dtime_0(t);
        {
          d_29 = t;
          if(((c_29 != NULL) && (c_29 != d_29)))
            _fail(d_29);
          else
            c_29 = d_29;
        }
      }
      t = t_13;
      {
        e_29 = t;
        b_29 :
        if(match_cons(e_29, sym__2))
          {
            f_29 = ATgetArgument(e_29, 0);
            g_29 = ATgetArgument(e_29, 1);
            t = (ATerm) ATmakeAppl(sym__2, (ATerm)ATinsert(CheckATermList(not_null(f_29)), (ATerm) ATmakeAppl(sym_Runtime_1, not_null(c_29))), not_null(g_29));
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
  ATerm m_29 = NULL;
  m_29 = t;
  t = SSL_ReadFromFile(not_null(m_29));
  return(t);
}
ATerm split_2 (ATerm t, ATerm z_86 (ATerm), ATerm a_87 (ATerm))
{
  ATerm r_29 = NULL,t_29 = NULL;
  ATerm y_13;
  y_13 = t;
  {
    ATerm s_29 = NULL;
    t = z_86(t);
    {
      s_29 = t;
      if(((r_29 != NULL) && (r_29 != s_29)))
        _fail(s_29);
      else
        r_29 = s_29;
    }
  }
  t = y_13;
  {
    ATerm u_29 = NULL;
    t = a_87(t);
    {
      u_29 = t;
      if(((t_29 != NULL) && (t_29 != u_29)))
        _fail(u_29);
      else
        t_29 = u_29;
    }
    t = (ATerm) ATmakeAppl(sym__2, not_null(r_29), not_null(t_29));
  }
  return(t);
}
ATerm input_file_0 (ATerm t)
{
  ATerm a_30 = NULL;
  ATerm z_13;
  z_13 = t;
  {
    ATerm a_14 = t;
    int b_14 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm i_1 (ATerm t)
        {
          ATerm b_30 = NULL,c_30 = NULL;
          b_30 = t;
          y_29 :
          if(match_cons(b_30, sym_Input_1))
            {
              c_30 = ATgetArgument(b_30, 0);
              if(((a_30 != NULL) && (a_30 != c_30)))
                _fail(c_30);
              else
                a_30 = c_30;
            }
          else
            {
              _fail(t);
            }
          return(t);
        }
        t = fetch_1(t, i_1);
        LocalPopChoice(b_14);
      }
    else
      {
        t = a_14;
        {
          ATerm d_30 = NULL;
          t = term_r_14;
          {
            d_30 = t;
            if(((a_30 != NULL) && (a_30 != d_30)))
              _fail(d_30);
            else
              a_30 = d_30;
          }
        }
      }
  }
  t = z_13;
  {
    ATerm j_1 (ATerm t)
    {
      t = not_null(a_30);
      t = ReadFromFile_0(t);
      return(t);
    }
    t = split_2(t, _id, j_1);
  }
  return(t);
}
ATerm version_option_0 (ATerm t)
{
  ATerm k_1 (ATerm t)
  {
    ATerm h_30 = NULL;
    h_30 = t;
    g_30 :
    if(!(match_string(h_30, "-v")))
      {
        if(!(match_string(h_30, "--version")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm l_1 (ATerm t)
  {
    t = term_t_14;
    t = set_config_0(t);
    t = term_u_14;
    return(t);
  }
  ATerm m_1 (ATerm t)
  {
    t = term_v_14;
    return(t);
  }
  t = Option_3(t, k_1, l_1, m_1);
  return(t);
}
ATerm keep_option_0 (ATerm t)
{
  ATerm q_1 (ATerm t)
  {
    ATerm k_30 = NULL;
    k_30 = t;
    i_30 :
    if(!(match_string(k_30, "-k")))
      {
        if(!(match_string(k_30, "--keep")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm r_1 (ATerm t)
  {
    ATerm w_14;
    w_14 = t;
    {
      ATerm l_30 = NULL;
      ATerm m_30 = NULL;
      t = string_to_int_0(t);
      {
        m_30 = t;
        if(((l_30 != NULL) && (l_30 != m_30)))
          _fail(m_30);
        else
          l_30 = m_30;
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_14, not_null(l_30));
        t = set_config_0(t);
      }
    }
    t = w_14;
    return(t);
  }
  ATerm s_1 (ATerm t)
  {
    t = term_y_14;
    return(t);
  }
  t = ArgOption_3(t, q_1, r_1, s_1);
  return(t);
}
ATerm string_to_int_0 (ATerm t)
{
  ATerm p_30 = NULL;
  p_30 = t;
  t = SSL_string_to_int(not_null(p_30));
  return(t);
}
ATerm verbose_option_0 (ATerm t)
{
  ATerm z_14 = t;
  int a_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm t_1 (ATerm t)
      {
        ATerm x_30 = NULL;
        x_30 = t;
        s_30 :
        if(!(match_string(x_30, "-S")))
          {
            if(!(match_string(x_30, "--silent")))
              {
                _fail(t);
              }
          }
        return(t);
      }
      ATerm u_1 (ATerm t)
      {
        t = term_b_15;
        t = set_config_0(t);
        t = term_c_15;
        return(t);
      }
      ATerm v_1 (ATerm t)
      {
        t = term_d_15;
        return(t);
      }
      t = Option_3(t, t_1, u_1, v_1);
      LocalPopChoice(a_15);
    }
  else
    {
      t = z_14;
      {
        ATerm e_15 = t;
        int f_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            ATerm w_1 (ATerm t)
            {
              ATerm y_30 = NULL;
              y_30 = t;
              t_30 :
              if(!(match_string(y_30, "--verbose")))
                {
                  _fail(t);
                }
              return(t);
            }
            ATerm x_1 (ATerm t)
            {
              ATerm b_31 = NULL;
              ATerm g_15;
              g_15 = t;
              {
                ATerm z_30 = NULL;
                ATerm a_31 = NULL;
                t = string_to_int_0(t);
                {
                  a_31 = t;
                  if(((z_30 != NULL) && (z_30 != a_31)))
                    _fail(a_31);
                  else
                    z_30 = a_31;
                }
                {
                  t = (ATerm) ATmakeAppl(sym__2, term_d_13, not_null(z_30));
                  t = set_config_0(t);
                }
              }
              t = g_15;
              {
                ATerm c_31 = NULL;
                c_31 = t;
                if(((b_31 != NULL) && (b_31 != c_31)))
                  _fail(c_31);
                else
                  b_31 = c_31;
                t = (ATerm) ATmakeAppl(sym_Verbose_1, not_null(b_31));
              }
              return(t);
            }
            ATerm y_1 (ATerm t)
            {
              t = term_h_15;
              return(t);
            }
            t = ArgOption_3(t, w_1, x_1, y_1);
            LocalPopChoice(f_15);
          }
        else
          {
            t = e_15;
            {
              ATerm z_1 (ATerm t)
              {
                ATerm d_31 = NULL;
                d_31 = t;
                w_30 :
                if(!(match_string(d_31, "-s")))
                  {
                    _fail(t);
                  }
                return(t);
              }
              ATerm c_2 (ATerm t)
              {
                t = term_j_15;
                t = set_config_0(t);
                t = term_k_15;
                return(t);
              }
              ATerm d_2 (ATerm t)
              {
                t = term_l_15;
                return(t);
              }
              t = Option_3(t, z_1, c_2, d_2);
            }
          }
      }
    }
  return(t);
}
ATerm general_options_0 (ATerm t)
{
  ATerm m_15 = t;
  int n_15 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = verbose_option_0(t);
      LocalPopChoice(n_15);
    }
  else
    {
      t = m_15;
      {
        ATerm o_15 = t;
        int p_15 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = keep_option_0(t);
            LocalPopChoice(p_15);
          }
        else
          {
            t = o_15;
            t = version_option_0(t);
          }
      }
    }
  return(t);
}
ATerm output_option_0 (ATerm t)
{
  ATerm e_2 (ATerm t)
  {
    ATerm j_31 = NULL;
    j_31 = t;
    g_31 :
    if(!(match_string(j_31, "-o")))
      {
        if(!(match_string(j_31, "--output")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm f_2 (ATerm t)
  {
    ATerm m_31 = NULL;
    ATerm q_15;
    q_15 = t;
    {
      ATerm k_31 = NULL;
      ATerm l_31 = NULL;
      l_31 = t;
      if(((k_31 != NULL) && (k_31 != l_31)))
        _fail(l_31);
      else
        k_31 = l_31;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_h_16, not_null(k_31));
        t = set_config_0(t);
      }
    }
    t = q_15;
    {
      ATerm n_31 = NULL;
      n_31 = t;
      if(((m_31 != NULL) && (m_31 != n_31)))
        _fail(n_31);
      else
        m_31 = n_31;
      t = (ATerm) ATmakeAppl(sym_Output_1, not_null(m_31));
    }
    return(t);
  }
  ATerm h_2 (ATerm t)
  {
    t = term_i_16;
    return(t);
  }
  t = ArgOption_3(t, e_2, f_2, h_2);
  return(t);
}
ATerm aterm_output_option_0 (ATerm t)
{
  ATerm l_16 = t;
  int m_16 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = output_option_0(t);
      LocalPopChoice(m_16);
    }
  else
    {
      t = l_16;
      {
        ATerm m_2 (ATerm t)
        {
          ATerm r_31 = NULL;
          r_31 = t;
          q_31 :
          if(!(match_string(r_31, "-b")))
            {
              _fail(t);
            }
          return(t);
        }
        ATerm r_2 (ATerm t)
        {
          t = term_q_16;
          t = set_config_0(t);
          t = term_r_16;
          return(t);
        }
        ATerm u_3 (ATerm t)
        {
          t = term_s_16;
          return(t);
        }
        t = Option_3(t, m_2, r_2, u_3);
      }
    }
  return(t);
}
ATerm ArgOption_3 (ATerm t, ATerm l_0 (ATerm), ATerm m_0 (ATerm), ATerm n_0 (ATerm))
{
  ATerm x_31 = NULL,y_31 = NULL,z_31 = NULL,a_32 = NULL,b_32 = NULL;
  x_31 = t;
  v_31 :
  if(match_string(x_31, "register-usage-info"))
    {
      t = register_usage_1(t, n_0);
    }
  else
    {
      if(((ATgetType(x_31) == AT_LIST) && !(ATisEmpty(x_31))))
        {
          y_31 = ATgetFirst((ATermList) x_31);
          z_31 = (ATerm) ATgetNext((ATermList) x_31);
          w_31 :
          if(((ATgetType(z_31) == AT_LIST) && !(ATisEmpty(z_31))))
            {
              a_32 = ATgetFirst((ATermList) z_31);
              b_32 = (ATerm) ATgetNext((ATermList) z_31);
              {
                ATerm f_32 = NULL;
                ATerm t_16;
                t_16 = t;
                {
                  t = not_null(y_31);
                  t = l_0(t);
                }
                t = t_16;
                {
                  ATerm g_32 = NULL;
                  t = not_null(a_32);
                  {
                    t = m_0(t);
                    {
                      g_32 = t;
                      if(((f_32 != NULL) && (f_32 != g_32)))
                        _fail(g_32);
                      else
                        f_32 = g_32;
                    }
                  }
                  t = (ATerm) ATinsert(CheckATermList(not_null(b_32)), not_null(f_32));
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
ATerm input_option_0 (ATerm t)
{
  ATerm z_3 (ATerm t)
  {
    ATerm n_32 = NULL;
    n_32 = t;
    k_32 :
    if(!(match_string(n_32, "-i")))
      {
        if(!(match_string(n_32, "--input")))
          {
            _fail(t);
          }
      }
    return(t);
  }
  ATerm a_4 (ATerm t)
  {
    ATerm q_32 = NULL;
    ATerm w_16;
    w_16 = t;
    {
      ATerm o_32 = NULL;
      ATerm p_32 = NULL;
      p_32 = t;
      if(((o_32 != NULL) && (o_32 != p_32)))
        _fail(p_32);
      else
        o_32 = p_32;
      {
        t = (ATerm) ATmakeAppl(sym__2, term_x_16, not_null(o_32));
        t = set_config_0(t);
      }
    }
    t = w_16;
    {
      ATerm r_32 = NULL;
      r_32 = t;
      if(((q_32 != NULL) && (q_32 != r_32)))
        _fail(r_32);
      else
        q_32 = r_32;
      t = (ATerm) ATmakeAppl(sym_Input_1, not_null(q_32));
    }
    return(t);
  }
  ATerm b_4 (ATerm t)
  {
    t = term_y_16;
    return(t);
  }
  t = ArgOption_3(t, z_3, a_4, b_4);
  return(t);
}
ATerm io_options_0 (ATerm t)
{
  ATerm z_16 = t;
  int c_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = input_option_0(t);
      LocalPopChoice(c_17);
    }
  else
    {
      t = z_16;
      {
        ATerm d_17 = t;
        int e_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = aterm_output_option_0(t);
            LocalPopChoice(e_17);
          }
        else
          {
            t = d_17;
            t = general_options_0(t);
          }
      }
    }
  return(t);
}
ATerm report_failure_0 (ATerm t)
{
  t = (ATerm) ATmakeAppl(sym__2, term_c_11, (ATerm) ATinsert(ATempty, term_f_17));
  {
    t = printnl_0(t);
    {
      t = term_f_11;
      t = exit_0(t);
    }
  }
  return(t);
}
ATerm ticks_to_seconds_0 (ATerm t)
{
  ATerm w_32 = NULL;
  w_32 = t;
  t = SSL_TicksToSeconds(not_null(w_32));
  return(t);
}
ATerm add_0 (ATerm t)
{
  ATerm b_33 = NULL,c_33 = NULL,d_33 = NULL;
  b_33 = t;
  a_33 :
  if(match_cons(b_33, sym__2))
    {
      c_33 = ATgetArgument(b_33, 0);
      d_33 = ATgetArgument(b_33, 1);
      {
        ATerm i_17 = t;
        int j_17 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = SSL_addi(not_null(c_33), not_null(d_33));
            LocalPopChoice(j_17);
          }
        else
          {
            t = i_17;
            t = SSL_addr(not_null(c_33), not_null(d_33));
          }
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm foldr_2 (ATerm t, ATerm k_85 (ATerm), ATerm l_85 (ATerm))
{
  ATerm k_17 = t;
  int n_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = Nil_0(t);
      t = k_85(t);
      LocalPopChoice(n_17);
    }
  else
    {
      t = k_17;
      {
        ATerm k_33 = NULL,l_33 = NULL,m_33 = NULL;
        k_33 = t;
        j_33 :
        if(((ATgetType(k_33) == AT_LIST) && !(ATisEmpty(k_33))))
          {
            l_33 = ATgetFirst((ATermList) k_33);
            m_33 = (ATerm) ATgetNext((ATermList) k_33);
            {
              ATerm p_33 = NULL;
              ATerm s_33 = NULL;
              t = not_null(m_33);
              {
                t = foldr_2(t, k_85, l_85);
                {
                  s_33 = t;
                  if(((p_33 != NULL) && (p_33 != s_33)))
                    _fail(s_33);
                  else
                    p_33 = s_33;
                }
              }
              {
                t = (ATerm) ATmakeAppl(sym__2, not_null(l_33), not_null(p_33));
                t = l_85(t);
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
ATerm crush_2 (ATerm t, ATerm i_84 (ATerm), ATerm j_84 (ATerm))
{
  ATerm z_33 = NULL;
  ATerm b_34 = NULL;
  z_33 = t;
  {
    ATerm c_34 = NULL;
    ATerm e_34 = NULL,f_34 = NULL,g_34 = NULL;
    t = not_null(z_33);
    {
      c_34 = t;
      {
        t = SSL_explode_term(not_null(c_34));
        {
          e_34 = t;
          y_33 :
          if(match_cons(e_34, sym__2))
            {
              f_34 = ATgetArgument(e_34, 0);
              g_34 = ATgetArgument(e_34, 1);
              if(((b_34 != NULL) && (b_34 != g_34)))
                _fail(g_34);
              else
                b_34 = g_34;
            }
          else
            {
              _fail(t);
            }
        }
      }
    }
    {
      t = not_null(b_34);
      t = foldr_2(t, i_84, j_84);
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
    ATerm d_4 (ATerm t)
    {
      t = term_x_5;
      return(t);
    }
    t = crush_2(t, d_4, add_0);
    t = ticks_to_seconds_0(t);
  }
  return(t);
}
ATerm gt_0 (ATerm t)
{
  ATerm m_34 = NULL,n_34 = NULL,o_34 = NULL;
  m_34 = t;
  l_34 :
  if(match_cons(m_34, sym__2))
    {
      n_34 = ATgetArgument(m_34, 0);
      o_34 = ATgetArgument(m_34, 1);
      {
        ATerm o_17;
        o_17 = t;
        {
          ATerm p_17 = t;
          int q_17 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = SSL_gti(not_null(n_34), not_null(o_34));
              LocalPopChoice(q_17);
            }
          else
            {
              t = p_17;
              t = SSL_gtr(not_null(n_34), not_null(o_34));
            }
        }
        t = o_17;
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
  ATerm u_34 = NULL;
  ATerm r_17 = t;
  int s_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_34 = NULL,w_34 = NULL,x_34 = NULL;
      v_34 = t;
      t_34 :
      if(match_cons(v_34, sym__2))
        {
          w_34 = ATgetArgument(v_34, 0);
          x_34 = ATgetArgument(v_34, 1);
          {
            if(((u_34 != NULL) && (u_34 != w_34)))
              _fail(w_34);
            else
              u_34 = w_34;
            if(((u_34 != NULL) && (u_34 != x_34)))
              _fail(x_34);
            else
              u_34 = x_34;
          }
        }
      else
        {
          _fail(t);
        }
      LocalPopChoice(s_17);
    }
  else
    {
      t = r_17;
      t = gt_0(t);
    }
  return(t);
}
ATerm if_verbose1_1 (ATerm t, ATerm q_92 (ATerm))
{
  ATerm t_17 = t;
  int u_17 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm v_17;
      v_17 = t;
      {
        ATerm a_35 = NULL;
        ATerm b_35 = NULL;
        t = term_d_13;
        {
          t = get_config_0(t);
          {
            b_35 = t;
            if(((a_35 != NULL) && (a_35 != b_35)))
              _fail(b_35);
            else
              a_35 = b_35;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, not_null(a_35), term_f_11);
          t = geq_0(t);
        }
      }
      t = v_17;
      t = q_92(t);
      LocalPopChoice(u_17);
    }
  else
    {
      t = t_17;
      {
      }
    }
  return(t);
}
ATerm report_success_0 (ATerm t)
{
  ATerm e_4 (ATerm t)
  {
    ATerm f_35 = NULL,h_35 = NULL;
    ATerm w_17;
    w_17 = t;
    {
      ATerm g_35 = NULL;
      t = run_time_0(t);
      {
        g_35 = t;
        if(((f_35 != NULL) && (f_35 != g_35)))
          _fail(g_35);
        else
          f_35 = g_35;
      }
    }
    t = w_17;
    {
      ATerm i_35 = NULL;
      t = term_x_17;
      {
        t = get_config_0(t);
        {
          i_35 = t;
          if(((h_35 != NULL) && (h_35 != i_35)))
            _fail(i_35);
          else
            h_35 = i_35;
        }
      }
      {
        t = (ATerm) ATmakeAppl(sym__2, term_c_11, (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_z_17), not_null(f_35)), term_y_17), not_null(h_35)));
        t = printnl_0(t);
      }
    }
    return(t);
  }
  t = if_verbose1_1(t, e_4);
  {
    t = term_x_5;
    t = exit_0(t);
  }
  return(t);
}
ATerm Version_0 (ATerm t)
{
  ATerm p_35 = NULL;
  p_35 = t;
  o_35 :
  if(match_cons(p_35, sym_Version_0))
    {
      ATerm r_35 = NULL,t_35 = NULL;
      ATerm a_18;
      a_18 = t;
      {
        ATerm s_35 = NULL;
        t = SSLgetAnnotations(not_null(p_35));
        {
          s_35 = t;
          if(((r_35 != NULL) && (r_35 != s_35)))
            _fail(s_35);
          else
            r_35 = s_35;
        }
      }
      t = a_18;
      {
        ATerm u_35 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Version_0), not_null(r_35));
        {
          u_35 = t;
          if(((t_35 != NULL) && (t_35 != u_35)))
            _fail(u_35);
          else
            t_35 = u_35;
        }
        t = not_null(t_35);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm need_help_1 (ATerm t, ATerm w_90 (ATerm))
{
  ATerm f_4 (ATerm t)
  {
    ATerm b_18 = t;
    int c_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Help_0(t);
        LocalPopChoice(c_18);
      }
    else
      {
        t = b_18;
        {
          ATerm d_18 = t;
          int e_18 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Undefined_1(t, _id);
              LocalPopChoice(e_18);
            }
          else
            {
              t = d_18;
              t = Version_0(t);
            }
        }
      }
    return(t);
  }
  t = fetch_1(t, f_4);
  t = w_90(t);
  return(t);
}
ATerm table_create_0 (ATerm t)
{
  ATerm z_35 = NULL;
  z_35 = t;
  t = SSL_table_create(not_null(z_35));
  return(t);
}
ATerm store_options_0 (ATerm t)
{
  ATerm d_36 = NULL;
  d_36 = t;
  {
    ATerm f_18;
    f_18 = t;
    {
      t = term_g_18;
      {
        t = table_create_0(t);
        {
          t = (ATerm) ATmakeAppl(sym__3, term_g_18, term_k_18, not_null(d_36));
          t = table_put_0(t);
        }
      }
    }
    t = f_18;
  }
  return(t);
}
ATerm table_destroy_0 (ATerm t)
{
  ATerm h_36 = NULL;
  h_36 = t;
  t = SSL_table_destroy(not_null(h_36));
  return(t);
}
ATerm exit_0 (ATerm t)
{
  ATerm l_36 = NULL;
  l_36 = t;
  t = SSL_exit(not_null(l_36));
  return(t);
}
ATerm is_list_0 (ATerm t)
{
  ATerm p_36 = NULL,q_36 = NULL,r_36 = NULL;
  p_36 = t;
  o_36 :
  if(((ATgetType(p_36) == AT_LIST) && ATisEmpty(p_36)))
    {
      {
      }
    }
  else
    {
      if(((ATgetType(p_36) == AT_LIST) && !(ATisEmpty(p_36))))
        {
          q_36 = ATgetFirst((ATermList) p_36);
          r_36 = (ATerm) ATgetNext((ATermList) p_36);
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
ATerm echo_0 (ATerm t)
{
  ATerm l_18;
  l_18 = t;
  {
    ATerm u_36 = NULL;
    ATerm x_36 = NULL;
    ATerm p_18 = t;
    int t_18 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = is_list_0(t);
        LocalPopChoice(t_18);
      }
    else
      {
        t = p_18;
        {
          ATerm v_36 = NULL;
          ATerm w_36 = NULL;
          w_36 = t;
          if(((v_36 != NULL) && (v_36 != w_36)))
            _fail(w_36);
          else
            v_36 = w_36;
          t = (ATerm) ATinsert(ATempty, not_null(v_36));
        }
      }
    {
      x_36 = t;
      if(((u_36 != NULL) && (u_36 != x_36)))
        _fail(x_36);
      else
        u_36 = x_36;
    }
    {
      t = (ATerm) ATmakeAppl(sym__2, term_i_13, not_null(u_36));
      t = printnl_0(t);
    }
  }
  t = l_18;
  return(t);
}
ATerm long_description_1 (ATerm t, ATerm k_0 (ATerm))
{
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATinsert(ATempty, term_y_18), term_w_18), term_v_18), term_u_18);
  return(t);
}
ATerm map_1 (ATerm t, ATerm w_78 (ATerm))
{
  ATerm a_37 (ATerm t)
  {
    ATerm z_18 = t;
    int a_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Nil_0(t);
        LocalPopChoice(a_19);
      }
    else
      {
        t = z_18;
        t = Cons_2(t, w_78, a_37);
      }
    return(t);
  }
  t = a_37(t);
  return(t);
}
ATerm reverse_acc_2 (ATerm t, ATerm i_0 (ATerm), ATerm j_0 (ATerm))
{
  ATerm h_37 = NULL,i_37 = NULL,j_37 = NULL;
  j_37 = t;
  g_37 :
  if(((ATgetType(j_37) == AT_LIST) && !(ATisEmpty(j_37))))
    {
      h_37 = ATgetFirst((ATermList) j_37);
      i_37 = (ATerm) ATgetNext((ATermList) j_37);
      {
        ATerm m_37 = NULL;
        t = not_null(i_37);
        {
          ATerm b_19;
          b_19 = t;
          {
            ATerm n_37 = NULL,p_37 = NULL,r_37 = NULL;
            ATerm c_19;
            c_19 = t;
            {
              ATerm o_37 = NULL;
              t = j_0(t);
              {
                o_37 = t;
                if(((n_37 != NULL) && (n_37 != o_37)))
                  _fail(o_37);
                else
                  n_37 = o_37;
              }
            }
            t = c_19;
            {
              ATerm q_37 = NULL;
              t = not_null(h_37);
              {
                t = i_0(t);
                {
                  q_37 = t;
                  if(((p_37 != NULL) && (p_37 != q_37)))
                    _fail(q_37);
                  else
                    p_37 = q_37;
                }
              }
              {
                t = (ATerm) ATinsert(CheckATermList(not_null(n_37)), not_null(p_37));
                {
                  r_37 = t;
                  if(((m_37 != NULL) && (m_37 != r_37)))
                    _fail(r_37);
                  else
                    m_37 = r_37;
                }
              }
            }
          }
          t = b_19;
          {
            ATerm g_4 (ATerm t)
            {
              t = not_null(m_37);
              return(t);
            }
            t = reverse_acc_2(t, i_0, g_4);
          }
        }
      }
    }
  else
    {
      if(((ATgetType(j_37) == AT_LIST) && ATisEmpty(j_37)))
        {
          {
            t = term_f_8;
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
  ATerm h_4 (ATerm t)
  {
    t = (ATerm) ATempty;
    return(t);
  }
  t = reverse_acc_2(t, _id, h_4);
  return(t);
}
ATerm short_description_1 (ATerm t, ATerm h_0 (ATerm))
{
  ATerm y_37 = NULL;
  ATerm z_37 = NULL;
  t = term_f_8;
  {
    t = h_0(t);
    {
      z_37 = t;
      if(((y_37 != NULL) && (y_37 != z_37)))
        _fail(z_37);
      else
        y_37 = z_37;
    }
  }
  t = (ATerm) ATinsert(ATinsert(ATinsert(ATempty, term_j_19), not_null(y_37)), term_e_19);
  return(t);
}
ATerm Program_1 (ATerm t, ATerm t_61 (ATerm))
{
  ATerm g_38 = NULL,h_38 = NULL;
  g_38 = t;
  f_38 :
  if(match_cons(g_38, sym_Program_1))
    {
      h_38 = ATgetArgument(g_38, 0);
      {
        ATerm k_38 = NULL,m_38 = NULL;
        ATerm l_38 = NULL;
        t = SSLgetAnnotations(not_null(g_38));
        {
          l_38 = t;
          if(((k_38 != NULL) && (k_38 != l_38)))
            _fail(l_38);
          else
            k_38 = l_38;
        }
        {
          t = not_null(h_38);
          {
            ATerm o_38 = NULL;
            t = t_61(t);
            {
              m_38 = t;
              {
                ATerm p_38 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Program_1, not_null(m_38)), not_null(k_38));
                {
                  p_38 = t;
                  if(((o_38 != NULL) && (o_38 != p_38)))
                    _fail(p_38);
                  else
                    o_38 = p_38;
                }
                t = not_null(o_38);
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
  ATerm y_38 = NULL;
  ATerm k_19 = t;
  int o_19 = stack_ptr;
  if((PushChoice() == 0))
    {
      ATerm z_38 = NULL;
      t = term_x_17;
      {
        t = get_config_0(t);
        {
          z_38 = t;
          if(((y_38 != NULL) && (y_38 != z_38)))
            _fail(z_38);
          else
            y_38 = z_38;
        }
      }
      LocalPopChoice(o_19);
    }
  else
    {
      t = k_19;
      {
        ATerm m_4 (ATerm t)
        {
          ATerm x_4 (ATerm t)
          {
            ATerm a_39 = NULL;
            a_39 = t;
            if(((y_38 != NULL) && (y_38 != a_39)))
              _fail(a_39);
            else
              y_38 = a_39;
            return(t);
          }
          t = Program_1(t, x_4);
          return(t);
        }
        t = fetch_1(t, m_4);
      }
    }
  {
    ATerm t_19 = t;
    int v_19 = stack_ptr;
    if((PushChoice() == 0))
      {
        ATerm y_4 (ATerm t)
        {
          t = not_null(y_38);
          return(t);
        }
        t = short_description_1(t, y_4);
        t = echo_0(t);
        LocalPopChoice(v_19);
      }
    else
      {
        t = t_19;
        {
        }
      }
    {
      t = term_x_19;
      {
        t = echo_0(t);
        {
          t = term_a_20;
          {
            t = table_get_0(t);
            {
              ATerm z_4 (ATerm t)
              {
                t = (ATerm) ATempty;
                return(t);
              }
              t = reverse_acc_2(t, _id, z_4);
              {
                ATerm a_5 (ATerm t)
                {
                  ATerm b_39 = NULL;
                  ATerm c_39 = NULL;
                  c_39 = t;
                  if(((b_39 != NULL) && (b_39 != c_39)))
                    _fail(c_39);
                  else
                    b_39 = c_39;
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(b_39)), term_b_20);
                    t = echo_0(t);
                  }
                  return(t);
                }
                t = map_1(t, a_5);
                {
                  ATerm c_20 = t;
                  int d_20 = stack_ptr;
                  if((PushChoice() == 0))
                    {
                      ATerm d_39 = NULL;
                      ATerm e_39 = NULL;
                      ATerm b_5 (ATerm t)
                      {
                        t = not_null(y_38);
                        return(t);
                      }
                      t = long_description_1(t, b_5);
                      {
                        e_39 = t;
                        if(((d_39 != NULL) && (d_39 != e_39)))
                          _fail(e_39);
                        else
                          d_39 = e_39;
                      }
                      {
                        t = (ATerm) ATinsert(CheckATermList(not_null(d_39)), term_e_20);
                        t = echo_0(t);
                      }
                      LocalPopChoice(d_20);
                    }
                  else
                    {
                      t = c_20;
                      {
                      }
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
ATerm debug_0 (ATerm t)
{
  ATerm f_20;
  f_20 = t;
  {
    ATerm k_39 = NULL;
    ATerm l_39 = NULL;
    l_39 = t;
    if(((k_39 != NULL) && (k_39 != l_39)))
      _fail(l_39);
    else
      k_39 = l_39;
    {
      t = (ATerm) ATmakeAppl(sym__2, term_c_11, (ATerm) ATinsert(ATempty, not_null(k_39)));
      t = printnl_0(t);
    }
  }
  t = f_20;
  return(t);
}
ATerm say_1 (ATerm t, ATerm v_89 (ATerm))
{
  ATerm g_20;
  g_20 = t;
  {
    t = v_89(t);
    t = debug_0(t);
  }
  t = g_20;
  return(t);
}
ATerm Undefined_1 (ATerm t, ATerm u_61 (ATerm))
{
  ATerm s_39 = NULL,t_39 = NULL;
  s_39 = t;
  r_39 :
  if(match_cons(s_39, sym_Undefined_1))
    {
      t_39 = ATgetArgument(s_39, 0);
      {
        ATerm w_39 = NULL,y_39 = NULL;
        ATerm x_39 = NULL;
        t = SSLgetAnnotations(not_null(s_39));
        {
          x_39 = t;
          if(((w_39 != NULL) && (w_39 != x_39)))
            _fail(x_39);
          else
            w_39 = x_39;
        }
        {
          t = not_null(t_39);
          {
            ATerm a_40 = NULL;
            t = u_61(t);
            {
              y_39 = t;
              {
                ATerm b_40 = NULL;
                t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Undefined_1, not_null(y_39)), not_null(w_39));
                {
                  b_40 = t;
                  if(((a_40 != NULL) && (a_40 != b_40)))
                    _fail(b_40);
                  else
                    a_40 = b_40;
                }
                t = not_null(a_40);
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
ATerm fetch_1 (ATerm t, ATerm f_79 (ATerm))
{
  ATerm j_40 (ATerm t)
  {
    ATerm h_20 = t;
    int m_20 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = Cons_2(t, f_79, _id);
        LocalPopChoice(m_20);
      }
    else
      {
        t = h_20;
        t = Cons_2(t, _id, j_40);
      }
    return(t);
  }
  t = j_40(t);
  return(t);
}
ATerm option_defined_1 (ATerm t, ATerm t_93 (ATerm))
{
  t = fetch_1(t, t_93);
  return(t);
}
ATerm Help_0 (ATerm t)
{
  ATerm o_40 = NULL;
  o_40 = t;
  n_40 :
  if(match_cons(o_40, sym_Help_0))
    {
      ATerm q_40 = NULL,s_40 = NULL;
      ATerm n_20;
      n_20 = t;
      {
        ATerm r_40 = NULL;
        t = SSLgetAnnotations(not_null(o_40));
        {
          r_40 = t;
          if(((q_40 != NULL) && (q_40 != r_40)))
            _fail(r_40);
          else
            q_40 = r_40;
        }
      }
      t = n_20;
      {
        ATerm t_40 = NULL;
        t = SSLsetAnnotations((ATerm)ATmakeAppl(sym_Help_0), not_null(q_40));
        {
          t_40 = t;
          if(((s_40 != NULL) && (s_40 != t_40)))
            _fail(t_40);
          else
            s_40 = t_40;
        }
        t = not_null(s_40);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm try_1 (ATerm t, ATerm f_71 (ATerm))
{
  ATerm o_20 = t;
  int s_20 = stack_ptr;
  if((PushChoice() == 0))
    {
      t = f_71(t);
      LocalPopChoice(s_20);
    }
  else
    {
      t = o_20;
      {
      }
    }
  return(t);
}
ATerm table_get_0 (ATerm t)
{
  ATerm z_40 = NULL,a_41 = NULL,b_41 = NULL;
  z_40 = t;
  y_40 :
  if(match_cons(z_40, sym__2))
    {
      a_41 = ATgetArgument(z_40, 0);
      b_41 = ATgetArgument(z_40, 1);
      t = SSL_table_get(not_null(a_41), not_null(b_41));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm table_push_0 (ATerm t)
{
  ATerm i_41 = NULL,j_41 = NULL,k_41 = NULL,l_41 = NULL;
  i_41 = t;
  h_41 :
  if(match_cons(i_41, sym__3))
    {
      j_41 = ATgetArgument(i_41, 0);
      k_41 = ATgetArgument(i_41, 1);
      l_41 = ATgetArgument(i_41, 2);
      {
        ATerm u_20;
        u_20 = t;
        {
          ATerm p_41 = NULL;
          ATerm q_41 = NULL;
          t = (ATerm) ATmakeAppl(sym__2, not_null(j_41), not_null(k_41));
          {
            ATerm x_20 = t;
            int y_20 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = table_get_0(t);
                LocalPopChoice(y_20);
              }
            else
              {
                t = x_20;
                t = (ATerm) ATempty;
              }
            {
              q_41 = t;
              if(((p_41 != NULL) && (p_41 != q_41)))
                _fail(q_41);
              else
                p_41 = q_41;
            }
          }
          {
            t = (ATerm) ATmakeAppl(sym__3, not_null(j_41), not_null(k_41), (ATerm) ATinsert(CheckATermList(not_null(p_41)), not_null(l_41)));
            t = table_put_0(t);
          }
        }
        t = u_20;
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm register_usage_1 (ATerm t, ATerm y_94 (ATerm))
{
  ATerm u_41 = NULL;
  ATerm v_41 = NULL;
  t = term_f_8;
  {
    t = y_94(t);
    {
      v_41 = t;
      if(((u_41 != NULL) && (u_41 != v_41)))
        _fail(v_41);
      else
        u_41 = v_41;
    }
  }
  {
    t = (ATerm) ATmakeAppl(sym__3, term_y_19, term_z_19, not_null(u_41));
    {
      t = table_push_0(t);
      _fail(t);
    }
  }
  return(t);
}
ATerm Option_3 (ATerm t, ATerm a_0 (ATerm), ATerm d_0 (ATerm), ATerm g_0 (ATerm))
{
  ATerm f_42 = NULL,g_42 = NULL,h_42 = NULL;
  f_42 = t;
  b_42 :
  if(match_string(f_42, "register-usage-info"))
    {
      t = register_usage_1(t, g_0);
    }
  else
    {
      if(((ATgetType(f_42) == AT_LIST) && !(ATisEmpty(f_42))))
        {
          g_42 = ATgetFirst((ATermList) f_42);
          h_42 = (ATerm) ATgetNext((ATermList) f_42);
          {
            ATerm k_42 = NULL;
            ATerm z_20;
            z_20 = t;
            {
              t = not_null(g_42);
              t = a_0(t);
            }
            t = z_20;
            {
              ATerm l_42 = NULL;
              t = term_f_8;
              {
                t = d_0(t);
                {
                  l_42 = t;
                  if(((k_42 != NULL) && (k_42 != l_42)))
                    _fail(l_42);
                  else
                    k_42 = l_42;
                }
              }
              t = (ATerm) ATinsert(CheckATermList(not_null(h_42)), not_null(k_42));
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
  ATerm c_5 (ATerm t)
  {
    ATerm q_42 = NULL;
    q_42 = t;
    p_42 :
    if(!(match_string(q_42, "--help")))
      {
        if(!(match_string(q_42, "-h")))
          {
            if(!(match_string(q_42, "-?")))
              {
                _fail(t);
              }
          }
      }
    return(t);
  }
  ATerm d_5 (ATerm t)
  {
    t = term_b_21;
    {
      t = set_config_0(t);
      t = term_c_21;
    }
    return(t);
  }
  ATerm l_5 (ATerm t)
  {
    t = term_h_21;
    return(t);
  }
  t = Option_3(t, c_5, d_5, l_5);
  return(t);
}
ATerm UndefinedOption_0 (ATerm t)
{
  ATerm t_42 = NULL,u_42 = NULL,v_42 = NULL;
  t_42 = t;
  s_42 :
  if(((ATgetType(t_42) == AT_LIST) && !(ATisEmpty(t_42))))
    {
      u_42 = ATgetFirst((ATermList) t_42);
      v_42 = (ATerm) ATgetNext((ATermList) t_42);
      t = (ATerm) ATinsert(CheckATermList(not_null(v_42)), (ATerm) ATmakeAppl(sym_Undefined_1, not_null(u_42)));
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm Cons_2 (ATerm t, ATerm z_56 (ATerm), ATerm a_57 (ATerm))
{
  ATerm h_43 = NULL,i_43 = NULL,k_43 = NULL;
  h_43 = t;
  g_43 :
  if(((ATgetType(h_43) == AT_LIST) && !(ATisEmpty(h_43))))
    {
      i_43 = ATgetFirst((ATermList) h_43);
      k_43 = (ATerm) ATgetNext((ATermList) h_43);
      {
        ATerm o_43 = NULL,q_43 = NULL;
        ATerm p_43 = NULL;
        t = SSLgetAnnotations(not_null(h_43));
        {
          p_43 = t;
          if(((o_43 != NULL) && (o_43 != p_43)))
            _fail(p_43);
          else
            o_43 = p_43;
        }
        {
          t = not_null(i_43);
          {
            ATerm s_43 = NULL;
            t = z_56(t);
            {
              q_43 = t;
              {
                t = not_null(k_43);
                {
                  ATerm u_43 = NULL;
                  t = a_57(t);
                  {
                    s_43 = t;
                    {
                      ATerm v_43 = NULL;
                      t = SSLsetAnnotations((ATerm)ATinsert(CheckATermList(not_null(s_43)), not_null(q_43)), not_null(o_43));
                      {
                        v_43 = t;
                        if(((u_43 != NULL) && (u_43 != v_43)))
                          _fail(v_43);
                        else
                          u_43 = v_43;
                      }
                      t = not_null(u_43);
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
  ATerm f_44 = NULL;
  f_44 = t;
  e_44 :
  if(((ATgetType(f_44) == AT_LIST) && ATisEmpty(f_44)))
    {
      {
        ATerm h_44 = NULL,j_44 = NULL;
        ATerm i_21;
        i_21 = t;
        {
          ATerm i_44 = NULL;
          t = SSLgetAnnotations(not_null(f_44));
          {
            i_44 = t;
            if(((h_44 != NULL) && (h_44 != i_44)))
              _fail(i_44);
            else
              h_44 = i_44;
          }
        }
        t = i_21;
        {
          ATerm k_44 = NULL;
          t = SSLsetAnnotations((ATerm)ATempty, not_null(h_44));
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
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm set_config_0 (ATerm t)
{
  ATerm s_44 = NULL,t_44 = NULL,u_44 = NULL;
  s_44 = t;
  r_44 :
  if(match_cons(s_44, sym__2))
    {
      t_44 = ATgetArgument(s_44, 0);
      u_44 = ATgetArgument(s_44, 1);
      {
        t = (ATerm) ATmakeAppl(sym__3, term_w_12, not_null(t_44), not_null(u_44));
        t = table_put_0(t);
      }
    }
  else
    {
      _fail(t);
    }
  return(t);
}
ATerm parse_options_p__1 (ATerm t, ATerm w_94 (ATerm))
{
  ATerm n_21;
  n_21 = t;
  {
    ATerm o_21 = t;
    int p_21 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = term_q_21;
        t = w_94(t);
        LocalPopChoice(p_21);
      }
    else
      {
        t = o_21;
        {
        }
      }
  }
  t = n_21;
  {
    ATerm m_5 (ATerm t)
    {
      ATerm i_45 = NULL;
      ATerm s_21;
      s_21 = t;
      {
        ATerm g_45 = NULL;
        ATerm h_45 = NULL;
        h_45 = t;
        if(((g_45 != NULL) && (g_45 != h_45)))
          _fail(h_45);
        else
          g_45 = h_45;
        {
          t = (ATerm) ATmakeAppl(sym__2, term_x_17, not_null(g_45));
          t = set_config_0(t);
        }
      }
      t = s_21;
      {
        ATerm j_45 = NULL;
        j_45 = t;
        if(((i_45 != NULL) && (i_45 != j_45)))
          _fail(j_45);
        else
          i_45 = j_45;
        t = (ATerm) ATmakeAppl(sym_Program_1, not_null(i_45));
      }
      return(t);
    }
    ATerm n_5 (ATerm t)
    {
      ATerm t_21 = t;
      int u_21 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm z_21 = t;
          int a_22 = stack_ptr;
          if((PushChoice() == 0))
            {
              t = Nil_0(t);
              LocalPopChoice(a_22);
            }
          else
            {
              t = z_21;
              {
                t = w_94(t);
                t = Cons_2(t, _id, n_5);
              }
            }
          LocalPopChoice(u_21);
        }
      else
        {
          t = t_21;
          t = UndefinedOption_0(t);
        }
      return(t);
    }
    t = Cons_2(t, m_5, n_5);
  }
  return(t);
}
ATerm table_put_0 (ATerm t)
{
  ATerm p_45 = NULL,q_45 = NULL,r_45 = NULL;
  ATerm b_22;
  b_22 = t;
  {
    ATerm s_45 = NULL,t_45 = NULL,u_45 = NULL,v_45 = NULL;
    s_45 = t;
    o_45 :
    if(match_cons(s_45, sym__3))
      {
        t_45 = ATgetArgument(s_45, 0);
        u_45 = ATgetArgument(s_45, 1);
        v_45 = ATgetArgument(s_45, 2);
        {
          if(((p_45 != NULL) && (p_45 != t_45)))
            _fail(t_45);
          else
            p_45 = t_45;
          {
            if(((q_45 != NULL) && (q_45 != u_45)))
              _fail(u_45);
            else
              q_45 = u_45;
            {
              if(((r_45 != NULL) && (r_45 != v_45)))
                _fail(v_45);
              else
                r_45 = v_45;
              t = SSL_table_put(not_null(p_45), not_null(q_45), not_null(r_45));
            }
          }
        }
      }
    else
      {
        _fail(t);
      }
  }
  t = b_22;
  return(t);
}
ATerm parse_options_1 (ATerm t, ATerm v_94 (ATerm))
{
  ATerm y_45 = NULL;
  ATerm c_22;
  c_22 = t;
  {
    t = term_d_22;
    t = table_put_0(t);
  }
  t = c_22;
  {
    ATerm o_5 (ATerm t)
    {
      ATerm e_22 = t;
      int f_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          t = v_94(t);
          LocalPopChoice(f_22);
        }
      else
        {
          t = e_22;
          t = system_usage_switch_0(t);
        }
      return(t);
    }
    t = parse_options_p__1(t, o_5);
    {
      ATerm j_22 = t;
      int m_22 = stack_ptr;
      if((PushChoice() == 0))
        {
          ATerm q_22;
          q_22 = t;
          {
            ATerm r_22 = t;
            int s_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                t = term_a_21;
                t = get_config_0(t);
                LocalPopChoice(s_22);
              }
            else
              {
                t = r_22;
                t = fetch_1(t, Help_0);
              }
          }
          t = q_22;
          {
            t = system_usage_0(t);
            {
              t = term_x_5;
              t = exit_0(t);
            }
          }
          LocalPopChoice(m_22);
        }
      else
        {
          t = j_22;
          {
            ATerm u_22 = t;
            int z_22 = stack_ptr;
            if((PushChoice() == 0))
              {
                ATerm p_5 (ATerm t)
                {
                  ATerm q_5 (ATerm t)
                  {
                    ATerm z_45 = NULL;
                    z_45 = t;
                    if(((y_45 != NULL) && (y_45 != z_45)))
                      _fail(z_45);
                    else
                      y_45 = z_45;
                    return(t);
                  }
                  t = Undefined_1(t, q_5);
                  return(t);
                }
                t = fetch_1(t, p_5);
                {
                  ATerm r_5 (ATerm t)
                  {
                    t = (ATerm) ATinsert(ATinsert(ATempty, not_null(y_45)), term_a_23);
                    return(t);
                  }
                  t = say_1(t, r_5);
                  {
                    t = system_usage_0(t);
                    {
                      t = term_f_11;
                      t = exit_0(t);
                    }
                  }
                }
                LocalPopChoice(z_22);
              }
            else
              {
                t = u_22;
                {
                }
              }
          }
        }
      {
        ATerm b_23;
        b_23 = t;
        {
          t = term_y_19;
          t = table_destroy_0(t);
        }
        t = b_23;
      }
    }
  }
  return(t);
}
ATerm option_wrap_4 (ATerm t, ATerm c_91 (ATerm), ATerm d_91 (ATerm), ATerm e_91 (ATerm), ATerm f_91 (ATerm))
{
  t = parse_options_1(t, c_91);
  {
    t = store_options_0(t);
    {
      t = e_91(t);
      {
        ATerm c_23 = t;
        int e_23 = stack_ptr;
        if((PushChoice() == 0))
          {
            t = need_help_1(t, d_91);
            LocalPopChoice(e_23);
          }
        else
          {
            t = c_23;
            {
              ATerm f_23 = t;
              int g_23 = stack_ptr;
              if((PushChoice() == 0))
                {
                  t = f_91(t);
                  t = report_success_0(t);
                  LocalPopChoice(g_23);
                }
              else
                {
                  t = f_23;
                  t = report_failure_0(t);
                }
            }
          }
      }
    }
  }
  return(t);
}
ATerm iowrap_4 (ATerm t, ATerm t_91 (ATerm), ATerm u_91 (ATerm), ATerm v_91 (ATerm), ATerm w_91 (ATerm))
{
  ATerm s_5 (ATerm t)
  {
    ATerm h_23 = t;
    int m_23 = stack_ptr;
    if((PushChoice() == 0))
      {
        t = u_91(t);
        LocalPopChoice(m_23);
      }
    else
      {
        t = h_23;
        t = io_options_0(t);
      }
    return(t);
  }
  ATerm y_5 (ATerm t)
  {
    t = input_file_0(t);
    {
      t = apply_strategy_1(t, t_91);
      t = output_file_0(t);
    }
    return(t);
  }
  t = option_wrap_4(t, s_5, v_91, w_91, y_5);
  return(t);
}
ATerm iowrap_3 (ATerm t, ATerm n_91 (ATerm), ATerm o_91 (ATerm), ATerm p_91 (ATerm))
{
  ATerm z_5 (ATerm t)
  {
    ATerm a_6 (ATerm t)
    {
      ATerm n_23;
      n_23 = t;
      {
        ATerm c_46 = NULL;
        ATerm d_46 = NULL;
        t = term_x_17;
        {
          t = get_config_0(t);
          {
            d_46 = t;
            if(((c_46 != NULL) && (c_46 != d_46)))
              _fail(d_46);
            else
              c_46 = d_46;
          }
        }
        {
          t = (ATerm) ATmakeAppl(sym__2, term_c_11, (ATerm) ATinsert(ATempty, not_null(c_46)));
          t = printnl_0(t);
        }
      }
      t = n_23;
      return(t);
    }
    t = if_verbose2_1(t, a_6);
    return(t);
  }
  t = iowrap_4(t, n_91, o_91, p_91, z_5);
  return(t);
}
ATerm iowrap_2 (ATerm t, ATerm l_91 (ATerm), ATerm m_91 (ATerm))
{
  t = iowrap_3(t, l_91, m_91, default_usage_0);
  return(t);
}
ATerm iowrap_1 (ATerm t, ATerm i_91 (ATerm))
{
  ATerm b_6 (ATerm t)
  {
    t = _2(t, _id, i_91);
    return(t);
  }
  t = iowrap_2(t, b_6, _fail);
  return(t);
}
ATerm explode_asfix2me_0 (ATerm t)
{
  t = iowrap_1(t, ExplodeAsFix2ME_0);
  return(t);
}
ATerm main_0 (ATerm t)
{
  t = iowrap_1(t, ExplodeAsFix2ME_0);
  return(t);
}
